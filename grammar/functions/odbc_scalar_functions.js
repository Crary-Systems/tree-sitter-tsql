const { parens, parensComma, braces } = require('../utils.js');

//https://learn.microsoft.com/en-us/sql/t-sql/functions/odbc-scalar-functions-transact-sql?view=sql-server-ver16
module.exports = {
  odbc_scalar_functions: $ => braces(seq(token(/FN/i), choice (

    //String Functions
    //https://learn.microsoft.com/en-us/sql/t-sql/functions/odbc-scalar-functions-transact-sql?view=sql-server-ver16#string-functions
    seq($.bit_length_,parens($.expression)),
    seq($.concat_, parensComma($.expression, $.expression)),
    seq($.octet_length_, parens($.expression)),

    //Numeric Function
    //https://learn.microsoft.com/en-us/sql/t-sql/functions/odbc-scalar-functions-transact-sql?view=sql-server-ver16#numeric-function
    seq($.truncate_, parensComma($.expression, $.expression)),

    //Time, Date, and Interval Functions
    //https://learn.microsoft.com/en-us/sql/t-sql/functions/odbc-scalar-functions-transact-sql?view=sql-server-ver16#time-date-and-interval-functions
    seq($.current_date_, parens()),
    seq($.curdate_, parens()),
    seq($.current_time_, parens(optional($.expression))),
    seq($.curtime_, parens()),
    seq($.dayname_, parens($.expression)),
    seq($.dayofmonth_, parens($.expression)),
    seq($.dayofweek_, parens($.expression)),
    seq($.hour_, parens($.expression)),
    seq($.minute_, parens($.expression)),
    seq($.second_, parens($.expression)),
    seq($.monthname_, parens($.expression)),
    seq($.quarter_, parens($.expression)),
    seq($.week_, parens($.expression)),
  ))),

  bit_length_: $ => token(/BIT_LENGTH/i),
  concat_: $ => token(/CONCAT/i),
  octet_length_: $ => token(/OCTET_LENGTH/i),
  truncate_: $ => token(/TRUNCATE/i),
  current_date_: $ => token(/CURRENT_DATE/i),
  curdate_: $ => token(/CURDATE/i),
  current_time_: $ => token(/CURRENT_TIME/i),
  curtime_: $ => token(/CURTIME/i),
  dayname_: $ => token(/DAYNAME/i),
  dayofmonth_: $ => token(/DAYOFMONTH/i),
  dayofweek_: $ => token(/DAYOFWEEK/i),
  hour_: $ => token(/HOUR/i),
  minute_: $ => token(/MINUTE/i),
  second_: $ => token(/SECOND/i),
  monthname_: $ => token(/MONTHNAME/i),
  quarter_: $ => token(/QUARTER/i),
  week_: $ => token(/WEEK/i),

};
