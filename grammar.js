/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

//
// LEXER https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlLexer.g4
//

//TODO doublecheck * and + semantics
const SEMI = token(';');
//FULLWIDTH handling?
const ID                = token(/[A-Za-z_#]+/);
const SQUARE_BRACKET_ID = token(/\[[A-Za-z_#]+\]/);
const LOCAL_ID          = token(/@[A-Za-z_$@#0-9]+/);
const INT               = token(/[0-9]+/);
const DOT               = token(/\./);
const STRING            = token(/N?'([^']|'')*'/);
const DECIMAL           = token(/[0-9]+/);

//
// UTILS
//
const parens = (...rule) => seq('(', ...rule, ')');

//
// PARSER https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4
//

module.exports = grammar({
  name: "TSQL",

  conflicts: $ => [
    [$.batch]
  ],

  rules: {

    //https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L35
    tsql_file: $ => choice(
      repeat($.batch)
      ,seq($.execute_body_batch, repeat($.go_statement))
    ),

    batch: $ => choice(
      prec(1,$.go_statement)
      ,seq(optional($.execute_body_batch),choice($.go_statement, repeat1($.sql_clauses)), repeat($.go_statement))
      ,//TODO seq($.batch_level_statement, repeat($.go_statement))
    ),

    //https://learn.microsoft.com/en-us/sql/t-sql/language-elements/sql-server-utilities-statements-go?view=sql-server-ver16
    go_statement: $ => prec(1,seq(token(/GO/i), optional(field("count", $.integer)))),

    //https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L3145
    execute_body_batch: $ => prec.left(seq(
      $.func_proc_name_server_database_schema, optional(seq($.execute_statement_arg, repeat(seq(token(','), $.execute_statement_arg)))), optional(SEMI)
    )),

    //https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L5145
    func_proc_name_server_database_schema: $ => prec(4,choice(
      seq(optional(field('server', $.id_)), DOT, optional(field('database', $.id_)), DOT, optional(field('schema', $.id_)), DOT, field('procedure', $.id_))
      ,$.func_proc_name_database_schema
    )),

    //https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L5140
    func_proc_name_database_schema: $ => choice(
      seq(optional(field('database', $.id_)), DOT, optional(field('schema', $.id_)), DOT, field('procedure', $.id_))
      ,$.func_proc_name_schema
    ),

    //https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L5136
    func_proc_name_schema: $ => seq(optional(seq(field('schema',$.id_), DOT)), field('procedure', $.id_)),

    //https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L3158
    execute_statement_arg: $ => choice(
      prec.left(seq($.execute_statement_arg_unnamed, repeat(seq(token(','), $.execute_statement_arg))))   //Unnamed params can continue unnamed
      ,prec.left(seq($.execute_statement_arg_named, repeat(seq(token(','), $.execute_statement_arg_named)))) //Named can only be continued by unnamed
    ),

    //https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L3163
    execute_statement_arg_named: $ => seq(
      field('name', LOCAL_ID), token('='), field('value', $.execute_parameter)
    ),

    //https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L3167
    execute_statement_arg_unnamed : $ => field('value', $.execute_parameter),

    //https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L3171
    execute_parameter: $ => choice(
      $.constant
      ,seq($.LOCAL_ID_, optional($.OUTPUT))
      ,$.id_
      ,$.default
      ,$.null_
    ),

    LOCAL_ID_: $ => LOCAL_ID,
    OUTPUT: $ => token(/OUT(PUT)?/i),

    default: $ => token(/DEFAULT/i),
    null_: $ => token(/NULL/i),

    constant: $ => choice(
      STRING
      ,seq(optional(token(/-/)), choice(DECIMAL)) //TODO
      //TODO https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L5270
    ),

    //TODO batch_level_statement: $ => 'TODO', //https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L46-L51

    sql_clauses: $ => choice(
      seq($.dml_clause, optional(SEMI))
      ,seq($.another_statement, optional(SEMI))
      //TODO https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L53-L61
    ),

    another_statement: $ => choice(

      //TODO https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L350
      $.execute_statement
    ),

    // https://msdn.microsoft.com/en-us/library/ms188332.aspx
    // https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L3141
    execute_statement: $ => prec.left(seq($.execute, $.execute_body, optional(SEMI))),

    execute: $ => token(/EXEC(UTE)?/i),

    // https://learn.microsoft.com/en-us/sql/t-sql/language-elements/execute-transact-sql?view=sql-server-ver15
    execute_body: $ => prec.left(choice(
      seq(optional(seq(field('return_status',$.LOCAL_ID_), token(/=/)))
        , choice($.func_proc_name_server_database_schema, $.execute_var_string)
        , optional($.execute_statement_arg)
        , optional(seq($.WITH, $.execute_option, repeat(seq(token(','), $.execute_option)))))
      //TODO execute_option https://learn.microsoft.com/en-us/sql/t-sql/language-elements/execute-transact-sql?view=sql-server-ver15

      ,seq(parens(seq($.execute_var_string, repeat(seq(token(','), $.execute_var_string))))
        ,optional(seq($.AS, choice($.LOGIN,$.USER), token('='), $.string_lit))
        ,optional(seq($.AT_KEYWORD, field('linkedServer', $.id_))))
    )),

    WITH: $ => token(/WITH/i),

    execute_option: $ => choice(
      $.RECOMPILE
      ,seq($.RESULT_SETS, choice($.NONE, $.UNDEFINED))
      //TODO Result Sets Definition
      // https://learn.microsoft.com/en-us/sql/t-sql/language-elements/execute-transact-sql?view=sql-server-ver15
    ),

    RESULT_SETS: $ => seq(token(/RESULT/i), token(/SETS/i)),
    NONE: $ => token(/NONE/i),
    UNDEFINED: $ => token(/UNDEFINED/i),

    RECOMPILE: $ => token(/RECOMPILE/i),

    AS: $ => token(/AS/i),
    LOGIN: $ => token(/LOGIN/i),
    USER: $ => token(/USER/i),
    AT_KEYWORD: $ => token(/AT/i),

    // https://learn.microsoft.com/en-us/sql/t-sql/language-elements/execute-transact-sql?view=sql-server-ver15
    // https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L3175-L3178
    // NOTE: The output clause in the ANTLR reference seems incorrect.
    execute_var_string: $ => choice(
      seq($.LOCAL_ID_, optional(seq($.PLUS, $.LOCAL_ID_, optional(seq($.PLUS, $.execute_var_string)))))
      ,seq($.string_lit, optional(seq($.PLUS, $.LOCAL_ID_, optional(seq($.PLUS, $.execute_var_string)))))
    ),

    string_lit: $ => token(seq(
      optional('N')
      ,"'" //Opening Single Quote
      ,repeat(choice(
        /[^']/,               // Any character except a single quote
        "''"                  // Escaped single quote (two single quotes)
      ))
      ,"'" //Closing Single Quote

    )),


    PLUS: $ => token(/\+/),

    dml_clause: $ => choice(
      $.select_statement_standalone
      //TODO https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L63-L70
    ),

    select_statement_standalone: $ => seq(
      //TODO with_expression https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L2183
      $.select_statement
    ),

    //https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L2186
    select_statement: $ => prec.left(seq(
      $.query_expression
      ,optional(SEMI)
    )),

    query_expression: $ => seq(
      $.query_specification
      //TODO union all https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L3999
    ),

    query_specification: $ => seq(
      token(/SELECT/i)
      ,$.select_list
      ,optional(seq(token(/FROM/i), $.table_sources))
      //TODO https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L4010-L4023
    ),

    //https://learn.microsoft.com/en-us/sql/t-sql/queries/select-clause-transact-sql?view=sql-server-ver16&redirectedfrom=MSDN
    //https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L4119
    select_list: $ => seq($.select_list_elem, repeat(seq(token(','), $.select_list_elem))),

    //TODO REDO THIS ONE https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L4143-L4148
    select_list_elem: $ => choice(
      ID, SQUARE_BRACKET_ID
    ),

    table_sources: $ => choice(
      $.table_source
      //TODO https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L4150-L4153
    ),

    //TODO https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L4160C4-L4163
    table_source: $ => seq($.table_source_item),

    table_source_item: $ => choice(
      seq($.full_table_name)
      //TODO https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L4165-L4183
    ),

    full_table_name: $ => choice(
      $.id_
      //TODO https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L5116-L5123
    ),

    //TODO https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L5155-L5160
    full_column_name: $ => seq(
      $.id_
    ),

    expression: $ => choice(
      $.full_column_name
      //TODO https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L3900-L3917
    ),

    //
    // HELPERS
    //

    id_ : $ => choice(
      ID
      ,SQUARE_BRACKET_ID
      ,$.keyword
    ),

    //TODO https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L5287
    keyword: $ => choice(
      token(/GO/i)
    ),

    integer: $ => INT,

    placeholder: $ => alias('TODO', $.dummy),

  }
});
