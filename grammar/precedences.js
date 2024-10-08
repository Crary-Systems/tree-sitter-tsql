module.exports = {
  //TODO move other precs here
  precedences: $ => [
    [$.udt_elem, $.full_column_name]
    ,[$.go_statement, $.keyword]

  ],
}
