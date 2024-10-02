/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const SEMI = token(';');

//FULLWIDTH handling?
const ID = token(/[A-Za-z_#]+/);
const SQUARE_BRACKET_ID = token(/\[[A-Za-z_#]+\]/);
const INT = token(/[0-9]+/);


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
      $.go_statement
      ,seq(optional($.execute_body_batch),choice($.go_statement, repeat1($.sql_clauses)), repeat($.go_statement))
      ,//TODO seq($.batch_level_statement, repeat($.go_statement))
    )),

    //https://learn.microsoft.com/en-us/sql/t-sql/language-elements/sql-server-utilities-statements-go?view=sql-server-ver16
    go_statement: $ => seq(token(/GO/i), optional(field("count", $.integer))),

    execute_body_batch: $ => 'TODO', //https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L3145-L3147

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
    ),

    integer: $ => INT,

    placeholder: $ => alias('TODO', $.dummy),
  }
});
