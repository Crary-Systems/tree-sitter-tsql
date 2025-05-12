const { COMMA
       ,parens
       ,parensComma } = require('./utils.js');

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

      // https://learn.microsoft.com/en-us/sql/t-sql/functions/columnproperty-transact-sql?view=sql-server-ver16
      // COLUMNPROPERTY
      ,seq($.columnproperty_, parensComma(
        field('id', $.expression)
        ,field('column', $.expression)
        ,field('property', $.expression)))

      // https://learn.microsoft.com/en-us/sql/t-sql/functions/databasepropertyex-transact-sql?view=sql-server-ver16
      // DATABASEPROPERTYEX
      ,seq($.databasepropertyex_, parensComma(
        field('database', $.expression)
        ,field('property', $.expression)))

      // https://docs.microsoft.com/en-us/sql/t-sql/functions/db-id-transact-sql?view=sql-server-ver16
      // DB_ID
      ,seq($.db_id_, parens(optional(field('database_name', $.expression))))

      // https://docs.microsoft.com/en-us/sql/t-sql/functions/db-name-transact-sql?view=sql-server-ver16
      // DB_NAME
      ,seq($.db_name_, parens(optional(field('database_id', $.expression))))

      // https://learn.microsoft.com/en-us/sql/t-sql/functions/file-id-transact-sql?view=sql-server-ver16
      // FILE_ID
      ,seq($.file_id_, parens(field('file_name',$.expression)))

      // https://docs.microsoft.com/en-us/sql/t-sql/functions/file-idex-transact-sql?view=sql-server-ver16
      // FILE_IDEX
      ,seq($.file_idex_, parens(field('file_name', $.expression)))

      // https://docs.microsoft.com/en-us/sql/t-sql/functions/file-name-transact-sql?view=sql-server-ver16
      // FILE_NAME
      ,seq($.file_name_, parens(field('file_id', $.expression)))

      // https://docs.microsoft.com/en-us/sql/t-sql/functions/filegroup-id-transact-sql?view=sql-server-ver16
      // FILEGROUP_ID
      ,seq($.filegroup_id_, parens(field('filegroup_name', $.expression)))

      // https://docs.microsoft.com/en-us/sql/t-sql/functions/filegroup-name-transact-sql?view=sql-server-ver16
      // FILEGROUP_NAME
      ,seq($.filegroup_name_, parens(field('filegroup_id', $.expression)))

      // https://docs.microsoft.com/en-us/sql/t-sql/functions/filegroupproperty-transact-sql?view=sql-server-ver16
      // FILEGROUPPROPERTY
      ,seq($.filegroupproperty_, parensComma(field('filegroup_name', $.expression)
                                            ,field('property', $.expression)))

      // https://docs.microsoft.com/en-us/sql/t-sql/functions/fileproperty-transact-sql?view=sql-server-ver16
      // FILEPROPERTY
      ,seq($.fileproperty_, parensComma(field('file_name', $.expression)
                                       ,field('property', $.expression)))

      // https://docs.microsoft.com/en-us/sql/t-sql/functions/filepropertyex-transact-sql?view=sql-server-ver16
      // FILEPROPERTYEX
      ,seq($.filepropertyex_, parensComma(field('name', $.expression)
                                         ,field('property', $.expression)))

      // https://learn.microsoft.com/en-us/sql/t-sql/functions/fulltextcatalogproperty-transact-sql?view=sql-server-ver16
      // FULLTEXTCATALOGPROPERTY
      ,seq($.fulltextcatalogproperty_, parensComma(field('catalog_name', $.expression)
                                                  ,field('property', $.expression)))

      // https://learn.microsoft.com/en-us/sql/t-sql/functions/fulltextserviceproperty-transact-sql?view=sql-server-ver16
      // FULLTEXTSERVICEPROPERTY
      ,seq($.fulltextserviceproperty_, parens(field('property', $.expression)))

      // https://docs.microsoft.com/en-us/sql/t-sql/functions/index-col-transact-sql?view=sql-server-ver16
      // INDEX_COL
      ,seq($.indexcol_, parensComma($.expression
                                   ,field('index_id', $.expression)
                                   ,field('key_id', $.expression)))


      // https://docs.microsoft.com/en-us/sql/t-sql/functions/indexkey-property-transact-sql?view=sql-server-ver16
      // INDEXKEY_PROPERTY
      ,seq($.indexkey_property_, parensComma(field('object_ID', $.expression)
                                            ,field('index_ID', $.expression)
                                            ,field('key_ID', $.expression)
                                            ,field('property', $.expression)))

      // https://docs.microsoft.com/en-us/sql/t-sql/functions/indexproperty-transact-sql?view=sql-server-ver16
      // INDEXPROPERTY
      ,seq($.indexproperty_, parensComma(field('object_ID', $.expression)
                                        ,field('index_or_statistics_name', $.expression)
                                        ,field('property', $.expression)))

      // https://learn.microsoft.com/en-us/sql/t-sql/functions/next-value-for-transact-sql?view=sql-server-ver16
      // NEXT VALUE FOR
      ,seq($.next_value_for_, field('sequence_name', $.table_name)
          ,optional(seq($.over_, parens($.order_by_clause))))

      // https://docs.microsoft.com/en-us/sql/t-sql/functions/object-definition-transact-sql?view=sql-server-ver16
      // OBJECT_DEFINITION
      ,seq($.object_definition_, parens(field('object_id', $.expression)))

      // https://docs.microsoft.com/en-us/sql/t-sql/functions/object-id-transact-sql?view=sql-server-ver16
      // OBJECT_ID
      ,seq($.object_id_, parens(seq(field('object_name', $.expression)
                               ,optional(seq(COMMA, field('object_type', $.expression))))))

      // https://docs.microsoft.com/en-us/sql/t-sql/functions/object-name-transact-sql?view=sql-server-ver16
      // OBJECT_NAME
      ,seq($.object_name_, parens(seq(field('object_id', $.expression)
                                 ,optional(seq(COMMA, field('database_id', $.expression))))))


      // https://docs.microsoft.com/en-us/sql/t-sql/functions/object-schema-name-transact-sql?view=sql-server-ver16
      // OBJECT_SCHEMA_NAME
      ,seq($.object_schema_name_, parens(seq(field('object_id', $.expression)
                                 ,optional(seq(COMMA, field('database_id', $.expression))))))


      // https://docs.microsoft.com/en-us/sql/t-sql/functions/objectproperty-transact-sql?view=sql-server-ver16
      // OBJECTPROPERTY
      ,seq($.objectproperty_, parensComma(field('id', $.expression)
                                         ,field('property', $.expression)))

      // https://docs.microsoft.com/en-us/sql/t-sql/functions/objectpropertyex-transact-sql?view=sql-server-ver16
      // OBJECTPROPERTYEX
      ,seq($.objectpropertyex_, parensComma(field('id', $.expression)
                                           ,field('property', $.expression)))

      // https://docs.microsoft.com/en-us/sql/t-sql/functions/original-db-name-transact-sql?view=sql-server-ver16
      // ORIGINAL_DB_NAME
      ,seq($.original_db_name_, token('('), token(')'))

      // https://docs.microsoft.com/en-us/sql/t-sql/functions/parsename-transact-sql?view=sql-server-ver16
      // PARSENAME
      ,seq($.parsename_, parensComma(field('object_name', $.expression)
                                    ,field('object_piece', $.expression)))


      //TODO https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L4406-L4783
    ),

    app_name_: $ => token(/APP_NAME/i),
    applock_mode_: $ => token(/APPLOCK_MODE/i),
    applock_test_: $ => token(/APPLOCK_TEST/i),
    assemblyproperty_: $ => token(/ASSEMBLYPROPERTY/i),
    col_length_: $ => token(/COL_LENGTH/i),
    col_name_: $ => token(/COL_NAME/i),
    columnproperty_: $ => token(/COLUMNPROPERTY/i),
    databasepropertyex_: $ => token(/DATABASEPROPERTYEX/i),
    db_id_: $ => token(/DB_ID/i),
    db_name_: $ => token(/DB_NAME/i),
    file_id_: $ => token(/FILE_ID/i),
    file_idex_: $ => token(/FILE_IDEX/i),
    file_name_: $ => token(/FILE_NAME/i),
    filegroup_id_: $ => token(/FILEGROUP_ID/i),
    filegroup_name_: $ => token(/FILEGROUP_NAME/i),
    filegroupproperty_: $ => token(/FILEGROUPPROPERTY/i),
    fileproperty_: $ => token(/FILEPROPERTY/i),
    filepropertyex_: $ => token(/FILEPROPERTYEX/i),
    fulltextcatalogproperty_: $ => token(/FULLTEXTCATALOGPROPERTY/i),
    fulltextserviceproperty_: $ => token(/FULLTEXTSERVICEPROPERTY/i),
    indexcol_: $ => token(/INDEX_COL/i),
    indexkey_property_: $ => token(/INDEXKEY_PROPERTY/i),
    indexproperty_: $ => token(/INDEXPROPERTY/i),
    next_value_for_: $ => seq(token(/NEXT/i),token(/VALUE/i),token(/FOR/i)),
    object_definition_: $ => token(/OBJECT_DEFINITION/i),
    object_id_: $ => token(/OBJECT_ID/i),
    object_name_: $ => token(/OBJECT_NAME/i),
    object_schema_name_: $ => token(/OBJECT_SCHEMA_NAME/i),
    objectproperty_: $ => token(/OBJECTPROPERTY/i),
    objectpropertyex_: $ => token(/OBJECTPROPERTYEX/i),
    original_db_name_: $ => token(/ORIGINAL_DB_NAME/i),
    parsename_: $ => token(/PARSENAME/i),

};
