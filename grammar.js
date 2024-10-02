/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const SEMI = token(';');

//FULLWIDTH handling?
const ID = token(/[A-Za-z_#]+/);
const SQUARE_BRACKET_ID = token(/\[[A-Za-z_#]+\]/);


module.exports = grammar({
  name: "TSQL",

  //TODO fixme
  conflicts: $ => [
    [$.select_statement]
  ],

  rules: {
    //TODO fixme
    program: $ => choice(
      $.sql_clauses
    ),

    sql_clauses: $ => choice(
      seq($.dml_clause, optional(SEMI))
    ),

    dml_clause: $ => choice(
      $.select_statement_standalone
    ),

    select_statement_standalone: $ => seq(
      $.select_statement
    ),

    select_statement: $ => seq(
      $.query_expression
      ,optional(SEMI)
    ),

    query_expression: $ => seq(
      $.query_specification
    ),

    //TODO caps hanlding on select/from tokens?
    query_specification: $ => seq(
      token(/SELECT/i)
      ,$.select_list
      ,optional(seq(token(/FROM/i), $.table_sources))
    ),

    select_list: $ => seq($.select_list_elem, repeat(seq(token(','), $.select_list_elem))),

    //TODO fixme
    select_list_elem: $ => choice(ID, SQUARE_BRACKET_ID),

    table_sources: $ => seq($.table_source),

    table_source: $ => seq($.table_source_item),

    table_source_item: $ => choice(
      seq($.full_table_name)
    ),

    full_table_name: $ => seq(
      $.id_
    ),

    //TODO seq choice
    full_column_name: $ => seq(
      $.id_
    ),

    expression: $ => choice(
      $.full_column_name
    ),

    id_ : $ => choice(
      ID
      ,SQUARE_BRACKET_ID
    ),
  }
});
