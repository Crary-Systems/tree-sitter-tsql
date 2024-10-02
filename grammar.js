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

//
// PARSER https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4
//

module.exports = grammar({
  name: "TSQL",

  conflicts: $ => [
  ],

  rules: {
    tsql_file: $ => choice(
      repeat($.batch)
      //TODO execute_body_batch go_statmenet* -- https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L37
    ),

    batch: $ => prec.left(choice(
      seq(optional($.execute_body_batch),choice($.go_statement, repeat1($.sql_clauses)), repeat($.go_statement))
      ,//TODO seq($.batch_level_statement, repeat($.go_statement))
    )),

    //https://learn.microsoft.com/en-us/sql/t-sql/language-elements/sql-server-utilities-statements-go?view=sql-server-ver16
    go_statement: $ => seq(prec(2,token(/GO/i)), optional(field("count", $.integer))),

    //TODOWORKME
    execute_body_batch: $ => seq(
      $.func_proc_name_server_database_schema, optional(seq($.execute_statement_arg, repeat(seq(token(','), $.execute_statement_arg)))), optional(SEMI)
    ),

    func_proc_name_server_database_schema : $ => choice(
      seq(optional(field('server', $.id_)), DOT, optional(field('database', $.id_)), DOT, optional(field('schema', $.id_)), DOT, field('procedure', $.id_))


      //TODO fallback func_proc_name_database_schema
    ),

    execute_statement_arg: $ => choice(
      //seq($.execute_statement_arg_unnamed, repeat(seq(token(','), $.execute_statement_arg))),   //Unnamed params can continue unnamed
      prec.left(seq($.execute_statement_arg_named, repeat(seq(token(','), $.execute_statement_arg_named)))) //Named can only be continued by unnamed
    ),

    execute_statement_arg_named: $ => seq(
      field('name', LOCAL_ID), token('='), field('value', $.execute_parameter)
    ),


    //TODO execute_statement_arg_unnamed : $ => 'TODO',

    execute_parameter: $ => choice(
      token(/DEFAULT/i)
      //TODO https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L3172
    ),


    //TODO batch_level_statement: $ => 'TODO', //https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L46-L51

    sql_clauses: $ => choice(
      seq($.dml_clause, optional(SEMI))
    ),

    dml_clause: $ => choice(
      $.select_statement_standalone
    ),

    select_statement_standalone: $ => seq(
      $.select_statement
    ),

    select_statement: $ => prec.left(seq(
      $.query_expression
      ,optional(SEMI)
    )),

    query_expression: $ => seq(
      $.query_specification
    ),

    query_specification: $ => seq(
      token(/SELECT/i)
      ,$.select_list
      ,optional(seq(token(/FROM/i), $.table_sources))
    ),

    select_list: $ => seq($.select_list_elem, repeat(seq(token(','), $.select_list_elem))),

    select_list_elem: $ => choice(ID, SQUARE_BRACKET_ID),

    table_sources: $ => seq($.table_source),

    table_source: $ => seq($.table_source_item),

    table_source_item: $ => choice(
      seq($.full_table_name)
    ),

    full_table_name: $ => seq(
      $.id_
    ),

    //TODO https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L5155-L5160
    full_column_name: $ => seq(
      $.id_
    ),

    expression: $ => choice(
      $.full_column_name
    ),

    //
    // HELPERS
    //

    id_ : $ => choice(
      ID
      ,SQUARE_BRACKET_ID
      ,$.keyword
    ),

    //https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L5287
    keyword: $ => choice(
      prec(1,token(/GO/i))
    ),

    integer: $ => INT,

    placeholder: $ => alias('TODO', $.dummy),
  }
});
