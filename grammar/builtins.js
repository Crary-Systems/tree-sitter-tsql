const COMMA = token(',');
const parens = (...rule) => seq('(', ...rule, ')');

module.exports = {
    //https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L4338
    built_in_functions: $ => choice(
      // https://docs.microsoft.com/en-us/sql/t-sql/functions/app-name-transact-sql?view=sql-server-ver16
      // APP_NAME
      seq($.app_name_, parens())

      // https://docs.microsoft.com/en-us/sql/t-sql/functions/applock-mode-transact-sql?view=sql-server-ver16
      // APPLOCK_MODE
      ,seq($.applock_mode_, parens(
        field('database_principal', $.expression), COMMA
        ,field('resource_name', $.expression), COMMA
        ,field('lock_owner', $.expression)))
    ),

    app_name_: $ => token(/APP_NAME/i),
    applock_mode_: $ => token(/APPLOCK_MODE/i),
};
