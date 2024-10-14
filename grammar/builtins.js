const COMMA = token(',');
const parens = (...rule) => seq('(', ...rule, ')');
const parensComma = (...args) => parens(comma_separated(...args));

function comma_separated(...rules) {
  return seq(...rules.flatMap((rule, index) => index === 0 ? [rule] : [',', rule]));
}

module.exports = {
    //https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L4338
    built_in_functions: $ => choice(
      // https://docs.microsoft.com/en-us/sql/t-sql/functions/app-name-transact-sql?view=sql-server-ver16
      // APP_NAME
      seq($.app_name_, parens())

      // https://docs.microsoft.com/en-us/sql/t-sql/functions/applock-mode-transact-sql?view=sql-server-ver16
      // APPLOCK_MODE
      ,seq($.applock_mode_, parensComma(
        field('database_principal', $.expression)
        ,field('resource_name', $.expression)
        ,field('lock_owner', $.expression)))

      // https://docs.microsoft.com/en-us/sql/t-sql/functions/applock-test-transact-sql?view=sql-server-ver16
      // APPLOCK_TEST
      ,seq($.applock_test_, parensComma(
        field('database_principal', $.expression)
        ,field('resource_name', $.expression)
        ,field('lock_mode', $.expression)
        ,field('lock_owner', $.expression)))

      // https://docs.microsoft.com/en-us/sql/t-sql/functions/assemblyproperty-transact-sql?view=sql-server-ver16
      // ASSEMBLYPROPERTY
      ,seq($.assemblyproperty_, parensComma(
        field('assembly_name', $.expression)
        ,field('property_name', $.expression)))

      // https://learn.microsoft.com/en-us/sql/t-sql/functions/col-length-transact-sql?view=sql-server-ver16
      // COL_LENGTH
      ,seq($.col_length_, parensComma(
        field('table', $.expression)
        ,field('column', $.expression)))

      // https://learn.microsoft.com/en-us/sql/t-sql/functions/col-name-transact-sql?view=sql-server-ver16
      // COL_NAME
      ,seq($.col_name_, parensComma(
        field('table_id', $.expression)
        ,field('column_id', $.expression)))

    ),

    app_name_: $ => token(/APP_NAME/i),
    applock_mode_: $ => token(/APPLOCK_MODE/i),
    applock_test_: $ => token(/APPLOCK_TEST/i),
    assemblyproperty_: $ => token(/ASSEMBLYPROPERTY/i),
    col_length_: $ => token(/COL_LENGTH/i),
    col_name_: $ => token(/COL_NAME/i),
};
