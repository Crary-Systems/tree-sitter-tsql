module.exports = {

  precedences: $ => [
    [$.udt_elem, $.full_column_name]
    ,[$.go_statement, $.keyword]
    ,[$.func_proc_name_server_database_schema, $.func_proc_name_database_schema, $.func_proc_name_schema]

  ],
}
