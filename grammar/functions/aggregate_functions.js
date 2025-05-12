const { parens } = require('../utils.js');

module.exports = {
  // https://msdn.microsoft.com/en-us/library/ms173454.aspx
  // https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L5010

  // TODO CORPUS
  aggregate_functions: $ => choice(
    seq(field('agg_func', choice(
        $.avg_
        ,$.max_
        ,$.min_
        ,$.sum_
        ,$.stdev_
        ,$.stdevp_
        ,$.var_
        ,$.varp_
      ))
      ,parens($.all_distinct_expression)
      ,optional($.over_clause))

    ,seq($.approx_count_distinct_,parens($.expression))
    ,seq($.string_agg_,parens($.expression,token(','), $.seperator))
    ,seq(
      field('cnt', choice($.count_, $.count_big_))
      ,parens(choice($.asterisk, $.all_distinct_expression))
      ,optional($.over_clause))

    ,seq($.checksum_agg_, parens($.all_distinct_expression))
    //,seq($.GROUPING_, parens($.expression)) --TODO GROUPBY
    //,seq($.GROUPING_ID, parens($.expression_list_) --TODO GROUPBY
  ),

  string_agg_: $ => token(/STRING_AGG/i),
  approx_count_distinct_: $ => token(/APPROX_COUNT_DISTINCT/i),
  checksum_agg_: $ => token(/CHECKSUM_AGG/i),
  count_: $ => token(/COUNT/i),
  count_big_: $ => token(/COUNT_BIG/i),

  avg_: $ => token(/AVG/i),
  max_: $ => token(/MAX/i),
  min_: $ => token(/MIN/i),
  sum_: $ => token(/SUM/i),
  stdev_: $ => token(/STDev/i),
  stdevp_: $ => token(/STDEVP/i),
  var_: $ => token(/VAR/i),
  varp_: $ => token(/VARP/i),

  // https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L5028-L5030
  all_distinct_expression: $ => seq(
    optional(choice($.all_, $.distinct_)), $.expression
  ),

  all_: $ => token(/ALL/i),
  distinct_: $ => token(/DISTINCT/i),

};
