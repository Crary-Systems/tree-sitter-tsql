const { parens, braces } = require('../utils.js');

//TODO https://learn.microsoft.com/en-us/sql/t-sql/functions/odbc-scalar-functions-transact-sql?view=sql-server-ver16
module.exports = {
  odbc_scalar_functions: $ => braces(seq(token(/FN/i), choice (
    seq($.bit_length_,parens($.expression))
  ))),

  bit_length_: $ => token(/BIT_LENGTH/i)
};
