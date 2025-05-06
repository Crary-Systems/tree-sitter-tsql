digraph Roadmap {
  node [color=red]

  define(`digraph',`subgraph')
  include(grammar/tsql_file.dot)
  include(grammar/batch.dot)
  include(grammar/execute_body_batch.dot)
  include(grammar/go_statement.dot)
  include(grammar/execute_statement_arg.dot)
  include(grammar/execute_statement_arg_named.dot)
  include(grammar/execute_statement_arg_unnamed.dot)
  include(grammar/func_proc_name_server_database_schema.dot)
  include(grammar/func_proc_name_database_schema.dot)
  include(grammar/func_proc_name_schema.dot)

  include(grammar/sql_clauses.dot)
  include(grammar/batch_level_statement.dot)
}
