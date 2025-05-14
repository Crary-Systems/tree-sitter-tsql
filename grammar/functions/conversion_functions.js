const { parens, parensComma } = require('../utils.js');

//https://learn.microsoft.com/en-us/sql/t-sql/functions/conversion-functions-transact-sql?view=sql-server-ver16
module.exports = {
  conversion_functions: $ => choice(
    seq($.cast_,parens($.expression, $.AS, $.data_type))

  ),

  /*
CAST
CONVERT
PARSE
TRY_CAST
TRY_CONVERT
TRY_PARSE
*/

  cast_: $ => token(/CAST/i),
  convert_: $ => token(/CONVERT/i),
  parse_: $ => token(/PARSE/i),
  try_cast_: $ => token(/TRY_CAST/i),
  try_convert_: $ => token(/TRY_CONVERT/i),
  try_parse_: $ => token(/TRY_PARSE/i),

};
