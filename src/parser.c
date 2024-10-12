#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 517
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 160
#define ALIAS_COUNT 0
#define TOKEN_COUNT 85
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 22
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 39

enum ts_symbol_identifiers {
  aux_sym_go_statement_token1 = 1,
  anon_sym_COMMA = 2,
  anon_sym_SEMI = 3,
  aux_sym_func_proc_name_server_database_schema_token1 = 4,
  aux_sym_execute_statement_arg_named_token1 = 5,
  anon_sym_EQ = 6,
  sym_OUTPUT = 7,
  sym_default = 8,
  sym_null_ = 9,
  aux_sym_constant_token1 = 10,
  aux_sym_constant_token2 = 11,
  aux_sym_constant_token3 = 12,
  sym_execute = 13,
  aux_sym_execute_body_token1 = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  sym_WITH = 17,
  aux_sym_RESULT_SETS_token1 = 18,
  aux_sym_RESULT_SETS_token2 = 19,
  sym_NONE = 20,
  sym_UNDEFINED = 21,
  sym_RECOMPILE = 22,
  aux_sym_AS_token1 = 23,
  sym_LOGIN = 24,
  sym_USER = 25,
  sym_AT_KEYWORD = 26,
  sym_string_lit = 27,
  sym_PLUS = 28,
  aux_sym_query_specification_token1 = 29,
  sym_select = 30,
  anon_sym_PLUS_EQ = 31,
  anon_sym_DASH_EQ = 32,
  anon_sym_STAR_EQ = 33,
  anon_sym_SLASH_EQ = 34,
  anon_sym_PERCENT_EQ = 35,
  anon_sym_AMP_EQ = 36,
  anon_sym_CARET_EQ = 37,
  anon_sym_PIPE_EQ = 38,
  sym_asterisk = 39,
  anon_sym_COLON_COLON = 40,
  sym_checksum_agg_ = 41,
  sym_count_ = 42,
  sym_count_big_ = 43,
  sym_avg_ = 44,
  sym_max_ = 45,
  sym_min_ = 46,
  sym_sum_ = 47,
  sym_stdev_ = 48,
  sym_stdevp_ = 49,
  sym_var_ = 50,
  sym_varp_ = 51,
  sym_all_ = 52,
  sym_distinct_ = 53,
  sym_ntile_ = 54,
  sym_rank_ = 55,
  sym_dense_rank_ = 56,
  sym_row_number_ = 57,
  aux_sym_over_clause_token1 = 58,
  aux_sym_over_clause_token2 = 59,
  aux_sym_over_clause_token3 = 60,
  aux_sym_order_by_clause_token1 = 61,
  aux_sym_collation__token1 = 62,
  sym_asc_ = 63,
  sym_desc_ = 64,
  aux_sym_window_frame_extent_token1 = 65,
  aux_sym_window_frame_extent_token2 = 66,
  aux_sym_window_frame_following_token1 = 67,
  aux_sym_window_frame_following_token2 = 68,
  aux_sym_window_frame_preceding_token1 = 69,
  aux_sym_window_frame_preceding_token2 = 70,
  aux_sym_window_frame_preceding_token3 = 71,
  aux_sym_row_or_range_clause_token1 = 72,
  aux_sym_row_or_range_clause_token2 = 73,
  anon_sym_0 = 74,
  aux_sym_binary_token1 = 75,
  aux_sym_binary_token2 = 76,
  anon_sym_DOLLAR = 77,
  anon_sym_DASH = 78,
  anon_sym_PLUS = 79,
  aux_sym_real__token1 = 80,
  aux_sym_real__token2 = 81,
  aux_sym_id__token1 = 82,
  aux_sym_id__token2 = 83,
  anon_sym_TODO = 84,
  sym_tsql_file = 85,
  sym_batch = 86,
  sym_go_statement = 87,
  sym_execute_body_batch = 88,
  sym_func_proc_name_server_database_schema = 89,
  sym_func_proc_name_database_schema = 90,
  sym_func_proc_name_schema = 91,
  sym_execute_statement_arg = 92,
  sym_execute_statement_arg_named = 93,
  sym_execute_statement_arg_unnamed = 94,
  sym_execute_parameter = 95,
  sym_LOCAL_ID_ = 96,
  sym_constant = 97,
  sym_sql_clauses = 98,
  sym_another_statement = 99,
  sym_execute_statement = 100,
  sym_execute_body = 101,
  sym_execute_option = 102,
  sym_RESULT_SETS = 103,
  sym_AS = 104,
  sym_execute_var_string = 105,
  sym_dml_clause = 106,
  sym_select_statement_standalone = 107,
  sym_select_statement = 108,
  sym_query_expression = 109,
  sym_query_specification = 110,
  sym_select_list = 111,
  sym_select_list_elem = 112,
  sym_assignment_operator = 113,
  sym_udt_elem = 114,
  sym_udt_method_arguments = 115,
  sym_expression_elem = 116,
  sym_as_column_alias = 117,
  sym_as = 118,
  sym_column_alias = 119,
  sym_table_sources = 120,
  sym_table_source = 121,
  sym_table_source_item = 122,
  sym_full_table_name = 123,
  sym_full_column_name = 124,
  sym_expression = 125,
  sym_function_call = 126,
  sym_aggregate_windowed_function = 127,
  sym_all_distinct_expression = 128,
  sym_ranking_windowed_function = 129,
  sym_over_clause = 130,
  sym_expression_list_ = 131,
  sym_order_by_clause = 132,
  sym_order_by_expression = 133,
  sym_collation_ = 134,
  sym_window_frame_extent = 135,
  sym_window_frame_bound = 136,
  sym_window_frame_following = 137,
  sym_window_frame_preceding = 138,
  sym_row_or_range_clause = 139,
  sym_primitive_expression = 140,
  sym_primitive_constant = 141,
  sym_binary = 142,
  sym_money_ = 143,
  sym_real_ = 144,
  sym_float_ = 145,
  sym_decimal_ = 146,
  sym_id_ = 147,
  sym_keyword = 148,
  sym_integer = 149,
  aux_sym_tsql_file_repeat1 = 150,
  aux_sym_tsql_file_repeat2 = 151,
  aux_sym_batch_repeat1 = 152,
  aux_sym_execute_body_batch_repeat1 = 153,
  aux_sym_execute_statement_arg_repeat1 = 154,
  aux_sym_execute_body_repeat1 = 155,
  aux_sym_execute_body_repeat2 = 156,
  aux_sym_select_list_repeat1 = 157,
  aux_sym_expression_list__repeat1 = 158,
  aux_sym_order_by_clause_repeat1 = 159,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_go_statement_token1] = "go_statement_token1",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [aux_sym_func_proc_name_server_database_schema_token1] = "func_proc_name_server_database_schema_token1",
  [aux_sym_execute_statement_arg_named_token1] = "execute_statement_arg_named_token1",
  [anon_sym_EQ] = "=",
  [sym_OUTPUT] = "OUTPUT",
  [sym_default] = "default",
  [sym_null_] = "null_",
  [aux_sym_constant_token1] = "constant_token1",
  [aux_sym_constant_token2] = "constant_token2",
  [aux_sym_constant_token3] = "constant_token3",
  [sym_execute] = "execute",
  [aux_sym_execute_body_token1] = "execute_body_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_WITH] = "WITH",
  [aux_sym_RESULT_SETS_token1] = "RESULT_SETS_token1",
  [aux_sym_RESULT_SETS_token2] = "RESULT_SETS_token2",
  [sym_NONE] = "NONE",
  [sym_UNDEFINED] = "UNDEFINED",
  [sym_RECOMPILE] = "RECOMPILE",
  [aux_sym_AS_token1] = "AS_token1",
  [sym_LOGIN] = "LOGIN",
  [sym_USER] = "USER",
  [sym_AT_KEYWORD] = "AT_KEYWORD",
  [sym_string_lit] = "string_lit",
  [sym_PLUS] = "PLUS",
  [aux_sym_query_specification_token1] = "query_specification_token1",
  [sym_select] = "select",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_AMP_EQ] = "&=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_PIPE_EQ] = "|=",
  [sym_asterisk] = "asterisk",
  [anon_sym_COLON_COLON] = "::",
  [sym_checksum_agg_] = "checksum_agg_",
  [sym_count_] = "count_",
  [sym_count_big_] = "count_big_",
  [sym_avg_] = "avg_",
  [sym_max_] = "max_",
  [sym_min_] = "min_",
  [sym_sum_] = "sum_",
  [sym_stdev_] = "stdev_",
  [sym_stdevp_] = "stdevp_",
  [sym_var_] = "var_",
  [sym_varp_] = "varp_",
  [sym_all_] = "all_",
  [sym_distinct_] = "distinct_",
  [sym_ntile_] = "ntile_",
  [sym_rank_] = "rank_",
  [sym_dense_rank_] = "dense_rank_",
  [sym_row_number_] = "row_number_",
  [aux_sym_over_clause_token1] = "over_clause_token1",
  [aux_sym_over_clause_token2] = "over_clause_token2",
  [aux_sym_over_clause_token3] = "over_clause_token3",
  [aux_sym_order_by_clause_token1] = "order_by_clause_token1",
  [aux_sym_collation__token1] = "collation__token1",
  [sym_asc_] = "asc_",
  [sym_desc_] = "desc_",
  [aux_sym_window_frame_extent_token1] = "window_frame_extent_token1",
  [aux_sym_window_frame_extent_token2] = "window_frame_extent_token2",
  [aux_sym_window_frame_following_token1] = "window_frame_following_token1",
  [aux_sym_window_frame_following_token2] = "window_frame_following_token2",
  [aux_sym_window_frame_preceding_token1] = "window_frame_preceding_token1",
  [aux_sym_window_frame_preceding_token2] = "window_frame_preceding_token2",
  [aux_sym_window_frame_preceding_token3] = "window_frame_preceding_token3",
  [aux_sym_row_or_range_clause_token1] = "row_or_range_clause_token1",
  [aux_sym_row_or_range_clause_token2] = "row_or_range_clause_token2",
  [anon_sym_0] = "0",
  [aux_sym_binary_token1] = "binary_token1",
  [aux_sym_binary_token2] = "binary_token2",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [aux_sym_real__token1] = "real__token1",
  [aux_sym_real__token2] = "real__token2",
  [aux_sym_id__token1] = "id__token1",
  [aux_sym_id__token2] = "id__token2",
  [anon_sym_TODO] = "dummy",
  [sym_tsql_file] = "tsql_file",
  [sym_batch] = "batch",
  [sym_go_statement] = "go_statement",
  [sym_execute_body_batch] = "execute_body_batch",
  [sym_func_proc_name_server_database_schema] = "func_proc_name_server_database_schema",
  [sym_func_proc_name_database_schema] = "func_proc_name_database_schema",
  [sym_func_proc_name_schema] = "func_proc_name_schema",
  [sym_execute_statement_arg] = "execute_statement_arg",
  [sym_execute_statement_arg_named] = "execute_statement_arg_named",
  [sym_execute_statement_arg_unnamed] = "execute_statement_arg_unnamed",
  [sym_execute_parameter] = "execute_parameter",
  [sym_LOCAL_ID_] = "LOCAL_ID_",
  [sym_constant] = "constant",
  [sym_sql_clauses] = "sql_clauses",
  [sym_another_statement] = "another_statement",
  [sym_execute_statement] = "execute_statement",
  [sym_execute_body] = "execute_body",
  [sym_execute_option] = "execute_option",
  [sym_RESULT_SETS] = "RESULT_SETS",
  [sym_AS] = "AS",
  [sym_execute_var_string] = "execute_var_string",
  [sym_dml_clause] = "dml_clause",
  [sym_select_statement_standalone] = "select_statement_standalone",
  [sym_select_statement] = "select_statement",
  [sym_query_expression] = "query_expression",
  [sym_query_specification] = "query_specification",
  [sym_select_list] = "select_list",
  [sym_select_list_elem] = "select_list_elem",
  [sym_assignment_operator] = "assignment_operator",
  [sym_udt_elem] = "udt_elem",
  [sym_udt_method_arguments] = "udt_method_arguments",
  [sym_expression_elem] = "expression_elem",
  [sym_as_column_alias] = "as_column_alias",
  [sym_as] = "as",
  [sym_column_alias] = "column_alias",
  [sym_table_sources] = "table_sources",
  [sym_table_source] = "table_source",
  [sym_table_source_item] = "table_source_item",
  [sym_full_table_name] = "full_table_name",
  [sym_full_column_name] = "full_column_name",
  [sym_expression] = "expression",
  [sym_function_call] = "function_call",
  [sym_aggregate_windowed_function] = "aggregate_windowed_function",
  [sym_all_distinct_expression] = "all_distinct_expression",
  [sym_ranking_windowed_function] = "ranking_windowed_function",
  [sym_over_clause] = "over_clause",
  [sym_expression_list_] = "expression_list_",
  [sym_order_by_clause] = "order_by_clause",
  [sym_order_by_expression] = "order_by_expression",
  [sym_collation_] = "collation_",
  [sym_window_frame_extent] = "window_frame_extent",
  [sym_window_frame_bound] = "window_frame_bound",
  [sym_window_frame_following] = "window_frame_following",
  [sym_window_frame_preceding] = "window_frame_preceding",
  [sym_row_or_range_clause] = "row_or_range_clause",
  [sym_primitive_expression] = "primitive_expression",
  [sym_primitive_constant] = "primitive_constant",
  [sym_binary] = "binary",
  [sym_money_] = "money_",
  [sym_real_] = "real_",
  [sym_float_] = "float_",
  [sym_decimal_] = "decimal_",
  [sym_id_] = "id_",
  [sym_keyword] = "keyword",
  [sym_integer] = "integer",
  [aux_sym_tsql_file_repeat1] = "tsql_file_repeat1",
  [aux_sym_tsql_file_repeat2] = "tsql_file_repeat2",
  [aux_sym_batch_repeat1] = "batch_repeat1",
  [aux_sym_execute_body_batch_repeat1] = "execute_body_batch_repeat1",
  [aux_sym_execute_statement_arg_repeat1] = "execute_statement_arg_repeat1",
  [aux_sym_execute_body_repeat1] = "execute_body_repeat1",
  [aux_sym_execute_body_repeat2] = "execute_body_repeat2",
  [aux_sym_select_list_repeat1] = "select_list_repeat1",
  [aux_sym_expression_list__repeat1] = "expression_list__repeat1",
  [aux_sym_order_by_clause_repeat1] = "order_by_clause_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_go_statement_token1] = aux_sym_go_statement_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_func_proc_name_server_database_schema_token1] = aux_sym_func_proc_name_server_database_schema_token1,
  [aux_sym_execute_statement_arg_named_token1] = aux_sym_execute_statement_arg_named_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_OUTPUT] = sym_OUTPUT,
  [sym_default] = sym_default,
  [sym_null_] = sym_null_,
  [aux_sym_constant_token1] = aux_sym_constant_token1,
  [aux_sym_constant_token2] = aux_sym_constant_token2,
  [aux_sym_constant_token3] = aux_sym_constant_token3,
  [sym_execute] = sym_execute,
  [aux_sym_execute_body_token1] = aux_sym_execute_body_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_WITH] = sym_WITH,
  [aux_sym_RESULT_SETS_token1] = aux_sym_RESULT_SETS_token1,
  [aux_sym_RESULT_SETS_token2] = aux_sym_RESULT_SETS_token2,
  [sym_NONE] = sym_NONE,
  [sym_UNDEFINED] = sym_UNDEFINED,
  [sym_RECOMPILE] = sym_RECOMPILE,
  [aux_sym_AS_token1] = aux_sym_AS_token1,
  [sym_LOGIN] = sym_LOGIN,
  [sym_USER] = sym_USER,
  [sym_AT_KEYWORD] = sym_AT_KEYWORD,
  [sym_string_lit] = sym_string_lit,
  [sym_PLUS] = sym_PLUS,
  [aux_sym_query_specification_token1] = aux_sym_query_specification_token1,
  [sym_select] = sym_select,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_PERCENT_EQ] = anon_sym_PERCENT_EQ,
  [anon_sym_AMP_EQ] = anon_sym_AMP_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [sym_asterisk] = sym_asterisk,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [sym_checksum_agg_] = sym_checksum_agg_,
  [sym_count_] = sym_count_,
  [sym_count_big_] = sym_count_big_,
  [sym_avg_] = sym_avg_,
  [sym_max_] = sym_max_,
  [sym_min_] = sym_min_,
  [sym_sum_] = sym_sum_,
  [sym_stdev_] = sym_stdev_,
  [sym_stdevp_] = sym_stdevp_,
  [sym_var_] = sym_var_,
  [sym_varp_] = sym_varp_,
  [sym_all_] = sym_all_,
  [sym_distinct_] = sym_distinct_,
  [sym_ntile_] = sym_ntile_,
  [sym_rank_] = sym_rank_,
  [sym_dense_rank_] = sym_dense_rank_,
  [sym_row_number_] = sym_row_number_,
  [aux_sym_over_clause_token1] = aux_sym_over_clause_token1,
  [aux_sym_over_clause_token2] = aux_sym_over_clause_token2,
  [aux_sym_over_clause_token3] = aux_sym_over_clause_token3,
  [aux_sym_order_by_clause_token1] = aux_sym_order_by_clause_token1,
  [aux_sym_collation__token1] = aux_sym_collation__token1,
  [sym_asc_] = sym_asc_,
  [sym_desc_] = sym_desc_,
  [aux_sym_window_frame_extent_token1] = aux_sym_window_frame_extent_token1,
  [aux_sym_window_frame_extent_token2] = aux_sym_window_frame_extent_token2,
  [aux_sym_window_frame_following_token1] = aux_sym_window_frame_following_token1,
  [aux_sym_window_frame_following_token2] = aux_sym_window_frame_following_token2,
  [aux_sym_window_frame_preceding_token1] = aux_sym_window_frame_preceding_token1,
  [aux_sym_window_frame_preceding_token2] = aux_sym_window_frame_preceding_token2,
  [aux_sym_window_frame_preceding_token3] = aux_sym_window_frame_preceding_token3,
  [aux_sym_row_or_range_clause_token1] = aux_sym_row_or_range_clause_token1,
  [aux_sym_row_or_range_clause_token2] = aux_sym_row_or_range_clause_token2,
  [anon_sym_0] = anon_sym_0,
  [aux_sym_binary_token1] = aux_sym_binary_token1,
  [aux_sym_binary_token2] = aux_sym_binary_token2,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [aux_sym_real__token1] = aux_sym_real__token1,
  [aux_sym_real__token2] = aux_sym_real__token2,
  [aux_sym_id__token1] = aux_sym_id__token1,
  [aux_sym_id__token2] = aux_sym_id__token2,
  [anon_sym_TODO] = anon_sym_TODO,
  [sym_tsql_file] = sym_tsql_file,
  [sym_batch] = sym_batch,
  [sym_go_statement] = sym_go_statement,
  [sym_execute_body_batch] = sym_execute_body_batch,
  [sym_func_proc_name_server_database_schema] = sym_func_proc_name_server_database_schema,
  [sym_func_proc_name_database_schema] = sym_func_proc_name_database_schema,
  [sym_func_proc_name_schema] = sym_func_proc_name_schema,
  [sym_execute_statement_arg] = sym_execute_statement_arg,
  [sym_execute_statement_arg_named] = sym_execute_statement_arg_named,
  [sym_execute_statement_arg_unnamed] = sym_execute_statement_arg_unnamed,
  [sym_execute_parameter] = sym_execute_parameter,
  [sym_LOCAL_ID_] = sym_LOCAL_ID_,
  [sym_constant] = sym_constant,
  [sym_sql_clauses] = sym_sql_clauses,
  [sym_another_statement] = sym_another_statement,
  [sym_execute_statement] = sym_execute_statement,
  [sym_execute_body] = sym_execute_body,
  [sym_execute_option] = sym_execute_option,
  [sym_RESULT_SETS] = sym_RESULT_SETS,
  [sym_AS] = sym_AS,
  [sym_execute_var_string] = sym_execute_var_string,
  [sym_dml_clause] = sym_dml_clause,
  [sym_select_statement_standalone] = sym_select_statement_standalone,
  [sym_select_statement] = sym_select_statement,
  [sym_query_expression] = sym_query_expression,
  [sym_query_specification] = sym_query_specification,
  [sym_select_list] = sym_select_list,
  [sym_select_list_elem] = sym_select_list_elem,
  [sym_assignment_operator] = sym_assignment_operator,
  [sym_udt_elem] = sym_udt_elem,
  [sym_udt_method_arguments] = sym_udt_method_arguments,
  [sym_expression_elem] = sym_expression_elem,
  [sym_as_column_alias] = sym_as_column_alias,
  [sym_as] = sym_as,
  [sym_column_alias] = sym_column_alias,
  [sym_table_sources] = sym_table_sources,
  [sym_table_source] = sym_table_source,
  [sym_table_source_item] = sym_table_source_item,
  [sym_full_table_name] = sym_full_table_name,
  [sym_full_column_name] = sym_full_column_name,
  [sym_expression] = sym_expression,
  [sym_function_call] = sym_function_call,
  [sym_aggregate_windowed_function] = sym_aggregate_windowed_function,
  [sym_all_distinct_expression] = sym_all_distinct_expression,
  [sym_ranking_windowed_function] = sym_ranking_windowed_function,
  [sym_over_clause] = sym_over_clause,
  [sym_expression_list_] = sym_expression_list_,
  [sym_order_by_clause] = sym_order_by_clause,
  [sym_order_by_expression] = sym_order_by_expression,
  [sym_collation_] = sym_collation_,
  [sym_window_frame_extent] = sym_window_frame_extent,
  [sym_window_frame_bound] = sym_window_frame_bound,
  [sym_window_frame_following] = sym_window_frame_following,
  [sym_window_frame_preceding] = sym_window_frame_preceding,
  [sym_row_or_range_clause] = sym_row_or_range_clause,
  [sym_primitive_expression] = sym_primitive_expression,
  [sym_primitive_constant] = sym_primitive_constant,
  [sym_binary] = sym_binary,
  [sym_money_] = sym_money_,
  [sym_real_] = sym_real_,
  [sym_float_] = sym_float_,
  [sym_decimal_] = sym_decimal_,
  [sym_id_] = sym_id_,
  [sym_keyword] = sym_keyword,
  [sym_integer] = sym_integer,
  [aux_sym_tsql_file_repeat1] = aux_sym_tsql_file_repeat1,
  [aux_sym_tsql_file_repeat2] = aux_sym_tsql_file_repeat2,
  [aux_sym_batch_repeat1] = aux_sym_batch_repeat1,
  [aux_sym_execute_body_batch_repeat1] = aux_sym_execute_body_batch_repeat1,
  [aux_sym_execute_statement_arg_repeat1] = aux_sym_execute_statement_arg_repeat1,
  [aux_sym_execute_body_repeat1] = aux_sym_execute_body_repeat1,
  [aux_sym_execute_body_repeat2] = aux_sym_execute_body_repeat2,
  [aux_sym_select_list_repeat1] = aux_sym_select_list_repeat1,
  [aux_sym_expression_list__repeat1] = aux_sym_expression_list__repeat1,
  [aux_sym_order_by_clause_repeat1] = aux_sym_order_by_clause_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_go_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_func_proc_name_server_database_schema_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_execute_statement_arg_named_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_OUTPUT] = {
    .visible = true,
    .named = true,
  },
  [sym_default] = {
    .visible = true,
    .named = true,
  },
  [sym_null_] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_constant_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_execute] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_execute_body_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_WITH] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_RESULT_SETS_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_RESULT_SETS_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_NONE] = {
    .visible = true,
    .named = true,
  },
  [sym_UNDEFINED] = {
    .visible = true,
    .named = true,
  },
  [sym_RECOMPILE] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_AS_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_LOGIN] = {
    .visible = true,
    .named = true,
  },
  [sym_USER] = {
    .visible = true,
    .named = true,
  },
  [sym_AT_KEYWORD] = {
    .visible = true,
    .named = true,
  },
  [sym_string_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_PLUS] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_query_specification_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_select] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_asterisk] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_checksum_agg_] = {
    .visible = true,
    .named = true,
  },
  [sym_count_] = {
    .visible = true,
    .named = true,
  },
  [sym_count_big_] = {
    .visible = true,
    .named = true,
  },
  [sym_avg_] = {
    .visible = true,
    .named = true,
  },
  [sym_max_] = {
    .visible = true,
    .named = true,
  },
  [sym_min_] = {
    .visible = true,
    .named = true,
  },
  [sym_sum_] = {
    .visible = true,
    .named = true,
  },
  [sym_stdev_] = {
    .visible = true,
    .named = true,
  },
  [sym_stdevp_] = {
    .visible = true,
    .named = true,
  },
  [sym_var_] = {
    .visible = true,
    .named = true,
  },
  [sym_varp_] = {
    .visible = true,
    .named = true,
  },
  [sym_all_] = {
    .visible = true,
    .named = true,
  },
  [sym_distinct_] = {
    .visible = true,
    .named = true,
  },
  [sym_ntile_] = {
    .visible = true,
    .named = true,
  },
  [sym_rank_] = {
    .visible = true,
    .named = true,
  },
  [sym_dense_rank_] = {
    .visible = true,
    .named = true,
  },
  [sym_row_number_] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_over_clause_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_over_clause_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_over_clause_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_order_by_clause_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_collation__token1] = {
    .visible = false,
    .named = false,
  },
  [sym_asc_] = {
    .visible = true,
    .named = true,
  },
  [sym_desc_] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_window_frame_extent_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_window_frame_extent_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_window_frame_following_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_window_frame_following_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_window_frame_preceding_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_window_frame_preceding_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_window_frame_preceding_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_row_or_range_clause_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_row_or_range_clause_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binary_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_real__token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_real__token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_id__token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_id__token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_TODO] = {
    .visible = true,
    .named = true,
  },
  [sym_tsql_file] = {
    .visible = true,
    .named = true,
  },
  [sym_batch] = {
    .visible = true,
    .named = true,
  },
  [sym_go_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_execute_body_batch] = {
    .visible = true,
    .named = true,
  },
  [sym_func_proc_name_server_database_schema] = {
    .visible = true,
    .named = true,
  },
  [sym_func_proc_name_database_schema] = {
    .visible = true,
    .named = true,
  },
  [sym_func_proc_name_schema] = {
    .visible = true,
    .named = true,
  },
  [sym_execute_statement_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_execute_statement_arg_named] = {
    .visible = true,
    .named = true,
  },
  [sym_execute_statement_arg_unnamed] = {
    .visible = true,
    .named = true,
  },
  [sym_execute_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_LOCAL_ID_] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_clauses] = {
    .visible = true,
    .named = true,
  },
  [sym_another_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_execute_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_execute_body] = {
    .visible = true,
    .named = true,
  },
  [sym_execute_option] = {
    .visible = true,
    .named = true,
  },
  [sym_RESULT_SETS] = {
    .visible = true,
    .named = true,
  },
  [sym_AS] = {
    .visible = true,
    .named = true,
  },
  [sym_execute_var_string] = {
    .visible = true,
    .named = true,
  },
  [sym_dml_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_select_statement_standalone] = {
    .visible = true,
    .named = true,
  },
  [sym_select_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_query_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_query_specification] = {
    .visible = true,
    .named = true,
  },
  [sym_select_list] = {
    .visible = true,
    .named = true,
  },
  [sym_select_list_elem] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_udt_elem] = {
    .visible = true,
    .named = true,
  },
  [sym_udt_method_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_elem] = {
    .visible = true,
    .named = true,
  },
  [sym_as_column_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_as] = {
    .visible = true,
    .named = true,
  },
  [sym_column_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_table_sources] = {
    .visible = true,
    .named = true,
  },
  [sym_table_source] = {
    .visible = true,
    .named = true,
  },
  [sym_table_source_item] = {
    .visible = true,
    .named = true,
  },
  [sym_full_table_name] = {
    .visible = true,
    .named = true,
  },
  [sym_full_column_name] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_aggregate_windowed_function] = {
    .visible = true,
    .named = true,
  },
  [sym_all_distinct_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_ranking_windowed_function] = {
    .visible = true,
    .named = true,
  },
  [sym_over_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_list_] = {
    .visible = true,
    .named = true,
  },
  [sym_order_by_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_order_by_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_collation_] = {
    .visible = true,
    .named = true,
  },
  [sym_window_frame_extent] = {
    .visible = true,
    .named = true,
  },
  [sym_window_frame_bound] = {
    .visible = true,
    .named = true,
  },
  [sym_window_frame_following] = {
    .visible = true,
    .named = true,
  },
  [sym_window_frame_preceding] = {
    .visible = true,
    .named = true,
  },
  [sym_row_or_range_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_binary] = {
    .visible = true,
    .named = true,
  },
  [sym_money_] = {
    .visible = true,
    .named = true,
  },
  [sym_real_] = {
    .visible = true,
    .named = true,
  },
  [sym_float_] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal_] = {
    .visible = true,
    .named = true,
  },
  [sym_id_] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_tsql_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tsql_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_batch_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_execute_body_batch_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_execute_statement_arg_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_execute_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_execute_body_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_select_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_list__repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_order_by_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_agg_func = 1,
  field_ascending = 2,
  field_cnt = 3,
  field_collation_name = 4,
  field_count = 5,
  field_database = 6,
  field_descending = 7,
  field_dollar = 8,
  field_expressionAs = 9,
  field_leftAlias = 10,
  field_leftAssignment = 11,
  field_linkedServer = 12,
  field_name = 13,
  field_non_static_attr = 14,
  field_order_by = 15,
  field_procedure = 16,
  field_return_status = 17,
  field_schema = 18,
  field_server = 19,
  field_table = 20,
  field_udt_column_name = 21,
  field_value = 22,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_agg_func] = "agg_func",
  [field_ascending] = "ascending",
  [field_cnt] = "cnt",
  [field_collation_name] = "collation_name",
  [field_count] = "count",
  [field_database] = "database",
  [field_descending] = "descending",
  [field_dollar] = "dollar",
  [field_expressionAs] = "expressionAs",
  [field_leftAlias] = "leftAlias",
  [field_leftAssignment] = "leftAssignment",
  [field_linkedServer] = "linkedServer",
  [field_name] = "name",
  [field_non_static_attr] = "non_static_attr",
  [field_order_by] = "order_by",
  [field_procedure] = "procedure",
  [field_return_status] = "return_status",
  [field_schema] = "schema",
  [field_server] = "server",
  [field_table] = "table",
  [field_udt_column_name] = "udt_column_name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 2},
  [8] = {.index = 8, .length = 1},
  [9] = {.index = 9, .length = 2},
  [10] = {.index = 11, .length = 1},
  [11] = {.index = 12, .length = 1},
  [12] = {.index = 13, .length = 2},
  [13] = {.index = 15, .length = 2},
  [14] = {.index = 17, .length = 2},
  [15] = {.index = 19, .length = 2},
  [16] = {.index = 21, .length = 2},
  [17] = {.index = 23, .length = 2},
  [18] = {.index = 25, .length = 1},
  [19] = {.index = 26, .length = 1},
  [20] = {.index = 27, .length = 2},
  [21] = {.index = 29, .length = 3},
  [22] = {.index = 32, .length = 3},
  [23] = {.index = 35, .length = 1},
  [24] = {.index = 36, .length = 2},
  [25] = {.index = 38, .length = 3},
  [26] = {.index = 41, .length = 3},
  [27] = {.index = 44, .length = 1},
  [28] = {.index = 45, .length = 4},
  [29] = {.index = 49, .length = 3},
  [30] = {.index = 52, .length = 1},
  [31] = {.index = 53, .length = 1},
  [32] = {.index = 54, .length = 2},
  [33] = {.index = 56, .length = 2},
  [34] = {.index = 58, .length = 4},
  [35] = {.index = 62, .length = 1},
  [36] = {.index = 63, .length = 1},
  [37] = {.index = 64, .length = 2},
  [38] = {.index = 66, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_procedure, 0},
  [1] =
    {field_count, 1},
  [2] =
    {field_expressionAs, 0},
  [3] =
    {field_value, 0},
  [4] =
    {field_procedure, 2},
  [5] =
    {field_dollar, 0},
  [6] =
    {field_procedure, 2},
    {field_schema, 0},
  [8] =
    {field_procedure, 3},
  [9] =
    {field_procedure, 3},
    {field_schema, 1},
  [11] =
    {field_return_status, 0},
  [12] =
    {field_table, 0},
  [13] =
    {field_leftAlias, 0},
    {field_leftAssignment, 2},
  [15] =
    {field_non_static_attr, 2},
    {field_udt_column_name, 0},
  [17] =
    {field_name, 0},
    {field_value, 2},
  [19] =
    {field_database, 0},
    {field_procedure, 3},
  [21] =
    {field_procedure, 4},
    {field_schema, 2},
  [23] =
    {field_database, 1},
    {field_procedure, 4},
  [25] =
    {field_cnt, 0},
  [26] =
    {field_agg_func, 0},
  [27] =
    {field_procedure, 4},
    {field_server, 0},
  [29] =
    {field_database, 0},
    {field_procedure, 4},
    {field_schema, 2},
  [32] =
    {field_database, 1},
    {field_procedure, 5},
    {field_schema, 3},
  [35] =
    {field_linkedServer, 4},
  [36] =
    {field_schema, 0},
    {field_table, 2},
  [38] =
    {field_procedure, 5},
    {field_schema, 3},
    {field_server, 0},
  [41] =
    {field_database, 2},
    {field_procedure, 5},
    {field_server, 0},
  [44] =
    {field_linkedServer, 5},
  [45] =
    {field_database, 2},
    {field_procedure, 6},
    {field_schema, 4},
    {field_server, 0},
  [49] =
    {field_database, 0},
    {field_schema, 2},
    {field_table, 4},
  [52] =
    {field_order_by, 0},
  [53] =
    {field_linkedServer, 8},
  [54] =
    {field_ascending, 1},
    {field_order_by, 0},
  [56] =
    {field_descending, 1},
    {field_order_by, 0},
  [58] =
    {field_database, 2},
    {field_schema, 4},
    {field_server, 0},
    {field_table, 6},
  [62] =
    {field_linkedServer, 9},
  [63] =
    {field_collation_name, 1},
  [64] =
    {field_ascending, 2},
    {field_order_by, 0},
  [66] =
    {field_descending, 2},
    {field_order_by, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 4,
  [6] = 4,
  [7] = 7,
  [8] = 8,
  [9] = 8,
  [10] = 7,
  [11] = 8,
  [12] = 7,
  [13] = 13,
  [14] = 14,
  [15] = 13,
  [16] = 16,
  [17] = 13,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 18,
  [23] = 23,
  [24] = 18,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 32,
  [34] = 31,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 43,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 40,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 48,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 48,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 68,
  [75] = 70,
  [76] = 31,
  [77] = 40,
  [78] = 53,
  [79] = 71,
  [80] = 80,
  [81] = 81,
  [82] = 80,
  [83] = 72,
  [84] = 60,
  [85] = 85,
  [86] = 48,
  [87] = 87,
  [88] = 40,
  [89] = 89,
  [90] = 70,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 49,
  [95] = 71,
  [96] = 96,
  [97] = 64,
  [98] = 65,
  [99] = 40,
  [100] = 53,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 68,
  [107] = 50,
  [108] = 108,
  [109] = 48,
  [110] = 66,
  [111] = 69,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 72,
  [117] = 117,
  [118] = 118,
  [119] = 67,
  [120] = 60,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 61,
  [125] = 125,
  [126] = 52,
  [127] = 127,
  [128] = 59,
  [129] = 66,
  [130] = 57,
  [131] = 64,
  [132] = 132,
  [133] = 65,
  [134] = 49,
  [135] = 50,
  [136] = 136,
  [137] = 59,
  [138] = 138,
  [139] = 61,
  [140] = 52,
  [141] = 56,
  [142] = 67,
  [143] = 69,
  [144] = 144,
  [145] = 85,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 156,
  [158] = 149,
  [159] = 31,
  [160] = 160,
  [161] = 81,
  [162] = 154,
  [163] = 155,
  [164] = 114,
  [165] = 118,
  [166] = 166,
  [167] = 167,
  [168] = 96,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 108,
  [173] = 103,
  [174] = 174,
  [175] = 93,
  [176] = 31,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 92,
  [183] = 48,
  [184] = 40,
  [185] = 48,
  [186] = 123,
  [187] = 105,
  [188] = 188,
  [189] = 104,
  [190] = 115,
  [191] = 191,
  [192] = 122,
  [193] = 127,
  [194] = 194,
  [195] = 195,
  [196] = 40,
  [197] = 125,
  [198] = 121,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 101,
  [203] = 87,
  [204] = 56,
  [205] = 57,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 102,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 113,
  [216] = 112,
  [217] = 217,
  [218] = 218,
  [219] = 81,
  [220] = 85,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 118,
  [239] = 102,
  [240] = 87,
  [241] = 241,
  [242] = 121,
  [243] = 125,
  [244] = 127,
  [245] = 122,
  [246] = 115,
  [247] = 101,
  [248] = 248,
  [249] = 249,
  [250] = 105,
  [251] = 251,
  [252] = 123,
  [253] = 253,
  [254] = 254,
  [255] = 144,
  [256] = 114,
  [257] = 257,
  [258] = 104,
  [259] = 259,
  [260] = 260,
  [261] = 96,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 132,
  [268] = 40,
  [269] = 48,
  [270] = 108,
  [271] = 103,
  [272] = 93,
  [273] = 112,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 92,
  [279] = 113,
  [280] = 280,
  [281] = 280,
  [282] = 280,
  [283] = 149,
  [284] = 284,
  [285] = 285,
  [286] = 156,
  [287] = 148,
  [288] = 288,
  [289] = 289,
  [290] = 155,
  [291] = 154,
  [292] = 150,
  [293] = 293,
  [294] = 294,
  [295] = 146,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 296,
  [300] = 300,
  [301] = 301,
  [302] = 167,
  [303] = 303,
  [304] = 166,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 298,
  [309] = 309,
  [310] = 310,
  [311] = 170,
  [312] = 171,
  [313] = 191,
  [314] = 296,
  [315] = 306,
  [316] = 194,
  [317] = 300,
  [318] = 307,
  [319] = 300,
  [320] = 200,
  [321] = 298,
  [322] = 322,
  [323] = 169,
  [324] = 324,
  [325] = 325,
  [326] = 310,
  [327] = 306,
  [328] = 328,
  [329] = 310,
  [330] = 322,
  [331] = 322,
  [332] = 297,
  [333] = 297,
  [334] = 307,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 340,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 341,
  [355] = 351,
  [356] = 352,
  [357] = 350,
  [358] = 358,
  [359] = 349,
  [360] = 360,
  [361] = 343,
  [362] = 341,
  [363] = 340,
  [364] = 343,
  [365] = 338,
  [366] = 366,
  [367] = 338,
  [368] = 350,
  [369] = 352,
  [370] = 349,
  [371] = 371,
  [372] = 351,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 223,
  [386] = 386,
  [387] = 375,
  [388] = 388,
  [389] = 389,
  [390] = 227,
  [391] = 381,
  [392] = 375,
  [393] = 393,
  [394] = 381,
  [395] = 395,
  [396] = 383,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 383,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 405,
  [409] = 405,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 412,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 285,
  [421] = 419,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 419,
  [428] = 422,
  [429] = 429,
  [430] = 422,
  [431] = 431,
  [432] = 284,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 440,
  [449] = 449,
  [450] = 435,
  [451] = 439,
  [452] = 452,
  [453] = 437,
  [454] = 442,
  [455] = 443,
  [456] = 444,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 441,
  [467] = 461,
  [468] = 446,
  [469] = 469,
  [470] = 470,
  [471] = 435,
  [472] = 439,
  [473] = 437,
  [474] = 442,
  [475] = 443,
  [476] = 444,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 447,
  [481] = 461,
  [482] = 462,
  [483] = 462,
  [484] = 484,
  [485] = 465,
  [486] = 441,
  [487] = 487,
  [488] = 487,
  [489] = 489,
  [490] = 490,
  [491] = 436,
  [492] = 445,
  [493] = 452,
  [494] = 494,
  [495] = 487,
  [496] = 496,
  [497] = 497,
  [498] = 465,
  [499] = 436,
  [500] = 445,
  [501] = 452,
  [502] = 446,
  [503] = 497,
  [504] = 496,
  [505] = 494,
  [506] = 489,
  [507] = 507,
  [508] = 463,
  [509] = 497,
  [510] = 496,
  [511] = 494,
  [512] = 489,
  [513] = 513,
  [514] = 463,
  [515] = 490,
  [516] = 490,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(222);
      ADVANCE_MAP(
        '$', 335,
        '%', 11,
        '&', 12,
        '\'', 5,
        '(', 248,
        ')', 249,
        '*', 278,
        '+', 339,
        ',', 225,
        '-', 337,
        '.', 228,
        '/', 16,
        '0', 332,
        ':', 10,
        ';', 226,
        '=', 230,
        '@', 206,
        'N', 4,
        'T', 20,
        '[', 205,
        '^', 17,
        'n', 147,
        '|', 18,
        'A', 111,
        'a', 111,
        'B', 55,
        'b', 55,
        'C', 94,
        'c', 94,
        'D', 56,
        'd', 56,
        'E', 342,
        'e', 342,
        'F', 156,
        'f', 156,
        'G', 148,
        'g', 148,
        'L', 149,
        'l', 149,
        'M', 25,
        'm', 25,
        'O', 164,
        'o', 164,
        'P', 27,
        'p', 27,
        'R', 28,
        'r', 28,
        'S', 57,
        's', 57,
        'U', 129,
        'u', 129,
        'V', 29,
        'v', 29,
        'W', 98,
        'w', 98,
        'X', 333,
        'x', 333,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '$', 335,
        '\'', 6,
        '*', 277,
        '.', 204,
        '0', 332,
        '=', 247,
        '@', 206,
        'N', 344,
        '[', 205,
        'n', 420,
        'A', 438,
        'a', 438,
        'C', 382,
        'c', 382,
        'D', 366,
        'd', 366,
        'G', 407,
        'g', 407,
        'M', 350,
        'm', 350,
        'R', 352,
        'r', 352,
        'S', 421,
        's', 421,
        'V', 349,
        'v', 349,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(241);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '$', 335,
        '\'', 6,
        '*', 277,
        '.', 204,
        '0', 332,
        '@', 206,
        'N', 344,
        '[', 205,
        'n', 420,
        'A', 395,
        'a', 395,
        'C', 382,
        'c', 382,
        'D', 365,
        'd', 365,
        'G', 407,
        'g', 407,
        'M', 350,
        'm', 350,
        'R', 352,
        'r', 352,
        'S', 421,
        's', 421,
        'V', 349,
        'v', 349,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(241);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\'', 5,
        '-', 240,
        '@', 206,
        'N', 343,
        '[', 205,
        'n', 431,
        'D', 368,
        'd', 368,
        'G', 407,
        'g', 407,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(136);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(96);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(263);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '\'', 6,
        '(', 248,
        '.', 227,
        '@', 206,
        'N', 345,
        '[', 205,
        'G', 407,
        'g', 407,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 8:
      if (lookahead == '+') ADVANCE(338);
      if (lookahead == '-') ADVANCE(336);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(154);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(227);
      if (lookahead == '[') ADVANCE(205);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(407);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(279);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(273);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(274);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(271);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(269);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(270);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(272);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(275);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(276);
      END_STATE();
    case 19:
      if (lookahead == 'D') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 'O') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 'O') ADVANCE(446);
      END_STATE();
    case 22:
      if (lookahead == ']') ADVANCE(445);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(165);
      END_STATE();
    case 25:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(203);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(167);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(142);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 35:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(153);
      END_STATE();
    case 36:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(153);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 37:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(97);
      END_STATE();
    case 38:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(80);
      END_STATE();
    case 39:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 40:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(321);
      END_STATE();
    case 41:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(245);
      END_STATE();
    case 42:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(320);
      END_STATE();
    case 43:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(152);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(193);
      END_STATE();
    case 44:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 45:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(181);
      END_STATE();
    case 46:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(184);
      END_STATE();
    case 47:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(323);
      END_STATE();
    case 48:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(324);
      END_STATE();
    case 49:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(255);
      END_STATE();
    case 50:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 51:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 52:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(77);
      END_STATE();
    case 53:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 54:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(317);
      END_STATE();
    case 56:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 57:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(50);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 58:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 59:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 60:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 62:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 63:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 64:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 65:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 67:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 68:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 69:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 70:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 72:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 83:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(175);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(40);
      END_STATE();
    case 84:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(105);
      END_STATE();
    case 85:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(286);
      END_STATE();
    case 86:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(284);
      END_STATE();
    case 87:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(325);
      END_STATE();
    case 88:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(326);
      END_STATE();
    case 89:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(280);
      END_STATE();
    case 90:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(99);
      END_STATE();
    case 91:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(89);
      END_STATE();
    case 92:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(64);
      END_STATE();
    case 93:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(64);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(308);
      END_STATE();
    case 94:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(58);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(115);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 95:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(250);
      END_STATE();
    case 96:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 97:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 98:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 99:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 100:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 101:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 102:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 103:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 104:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 105:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 106:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 107:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(310);
      END_STATE();
    case 108:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(173);
      END_STATE();
    case 109:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(302);
      END_STATE();
    case 110:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 111:
      ADVANCE_MAP(
        'L', 109,
        'l', 109,
        'N', 47,
        'n', 47,
        'S', 257,
        's', 257,
        'T', 261,
        't', 261,
        'V', 85,
        'v', 85,
      );
      END_STATE();
    case 112:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 113:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 114:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 115:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(112);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(141);
      END_STATE();
    case 116:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 117:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 118:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 119:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 120:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 121:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 122:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 123:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(74);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(170);
      END_STATE();
    case 124:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(292);
      END_STATE();
    case 125:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(265);
      END_STATE();
    case 126:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(158);
      END_STATE();
    case 127:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 128:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 129:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(36);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(75);
      END_STATE();
    case 130:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(290);
      END_STATE();
    case 131:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 132:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 133:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(322);
      END_STATE();
    case 134:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(316);
      END_STATE();
    case 135:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 136:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 137:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 138:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 139:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 140:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 141:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 142:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 143:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 144:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 145:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 146:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 147:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(136);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(96);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 148:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 149:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 150:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 151:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 152:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 153:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 154:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 155:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 156:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(117);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 157:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(114);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 158:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(106);
      END_STATE();
    case 159:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(298);
      END_STATE();
    case 160:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(314);
      END_STATE();
    case 161:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 162:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 163:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(312);
      END_STATE();
    case 164:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(52);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(176);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(73);
      END_STATE();
    case 165:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 166:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 167:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 168:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 169:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(330);
      END_STATE();
    case 170:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(253);
      END_STATE();
    case 171:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(40);
      END_STATE();
    case 172:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(190);
      END_STATE();
    case 173:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(192);
      END_STATE();
    case 174:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(42);
      END_STATE();
    case 175:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(63);
      END_STATE();
    case 176:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(232);
      END_STATE();
    case 177:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(95);
      END_STATE();
    case 178:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(282);
      END_STATE();
    case 179:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(231);
      END_STATE();
    case 180:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(252);
      END_STATE();
    case 181:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(267);
      END_STATE();
    case 182:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(327);
      END_STATE();
    case 183:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(235);
      END_STATE();
    case 184:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(304);
      END_STATE();
    case 185:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(200);
      END_STATE();
    case 186:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(100);
      END_STATE();
    case 187:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(65);
      END_STATE();
    case 188:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(66);
      END_STATE();
    case 189:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(102);
      END_STATE();
    case 190:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(101);
      END_STATE();
    case 191:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 192:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 193:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 194:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(146);
      END_STATE();
    case 195:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 196:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 197:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(294);
      END_STATE();
    case 198:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(329);
      END_STATE();
    case 199:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(328);
      END_STATE();
    case 200:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(81);
      END_STATE();
    case 201:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(169);
      END_STATE();
    case 202:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(103);
      END_STATE();
    case 203:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(288);
      END_STATE();
    case 204:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      END_STATE();
    case 205:
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 206:
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 207:
      if (eof) ADVANCE(222);
      ADVANCE_MAP(
        '%', 11,
        '&', 12,
        '\'', 6,
        '(', 248,
        ')', 249,
        '*', 13,
        '+', 14,
        ',', 225,
        '-', 15,
        '.', 227,
        '/', 16,
        ';', 226,
        '=', 230,
        'N', 345,
        '[', 205,
        '^', 17,
        '|', 18,
        'A', 415,
        'a', 415,
        'E', 443,
        'e', 443,
        'F', 412,
        'f', 412,
        'G', 407,
        'g', 407,
        'S', 362,
        's', 362,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(207);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 208:
      if (eof) ADVANCE(222);
      ADVANCE_MAP(
        '\'', 5,
        '(', 248,
        ')', 249,
        '+', 264,
        ',', 225,
        '-', 240,
        '.', 227,
        ';', 226,
        '=', 247,
        '@', 206,
        'N', 343,
        '[', 205,
        'n', 431,
        'D', 368,
        'd', 368,
        'E', 443,
        'e', 443,
        'G', 407,
        'g', 407,
        'S', 362,
        's', 362,
        'W', 385,
        'w', 385,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 209:
      if (eof) ADVANCE(222);
      ADVANCE_MAP(
        '\'', 5,
        '(', 248,
        ')', 249,
        '-', 240,
        '.', 227,
        ';', 226,
        '@', 206,
        'N', 343,
        '[', 205,
        'n', 431,
        'D', 368,
        'd', 368,
        'E', 443,
        'e', 443,
        'G', 407,
        'g', 407,
        'S', 362,
        's', 362,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 210:
      if (eof) ADVANCE(222);
      ADVANCE_MAP(
        '\'', 6,
        '(', 248,
        ',', 225,
        '.', 227,
        ':', 10,
        ';', 226,
        '=', 247,
        'N', 345,
        '[', 205,
        'A', 415,
        'a', 415,
        'E', 443,
        'e', 443,
        'F', 412,
        'f', 412,
        'G', 407,
        'g', 407,
        'S', 362,
        's', 362,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(210);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 211:
      if (eof) ADVANCE(222);
      ADVANCE_MAP(
        '\'', 6,
        ')', 249,
        ',', 225,
        '.', 227,
        ';', 226,
        'N', 345,
        '[', 205,
        'A', 415,
        'a', 415,
        'E', 443,
        'e', 443,
        'F', 412,
        'f', 412,
        'G', 407,
        'g', 407,
        'O', 440,
        'o', 440,
        'S', 362,
        's', 362,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(211);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 212:
      if (eof) ADVANCE(222);
      ADVANCE_MAP(
        '\'', 6,
        ')', 249,
        ',', 225,
        '.', 227,
        ';', 226,
        'N', 345,
        '[', 205,
        'A', 415,
        'a', 415,
        'E', 341,
        'e', 341,
        'F', 412,
        'f', 412,
        'G', 407,
        'g', 407,
        'S', 362,
        's', 362,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(212);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 213:
      if (eof) ADVANCE(222);
      ADVANCE_MAP(
        ')', 249,
        ',', 225,
        '.', 227,
        ';', 226,
        '[', 205,
        'E', 443,
        'e', 443,
        'F', 412,
        'f', 412,
        'G', 407,
        'g', 407,
        'S', 362,
        's', 362,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(213);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 214:
      if (eof) ADVANCE(222);
      ADVANCE_MAP(
        ')', 249,
        ',', 225,
        ';', 226,
        '=', 230,
        'A', 174,
        'a', 174,
        'B', 54,
        'b', 54,
        'C', 157,
        'c', 157,
        'D', 76,
        'd', 76,
        'E', 342,
        'e', 342,
        'G', 148,
        'g', 148,
        'O', 164,
        'o', 164,
        'P', 26,
        'p', 26,
        'R', 33,
        'r', 33,
        'S', 78,
        's', 78,
        'U', 137,
        'u', 137,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      END_STATE();
    case 215:
      if (eof) ADVANCE(222);
      ADVANCE_MAP(
        '+', 338,
        ',', 225,
        '-', 336,
        '.', 227,
        ';', 226,
        '=', 230,
        '[', 205,
        'E', 443,
        'e', 443,
        'G', 407,
        'g', 407,
        'S', 362,
        's', 362,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 216:
      if (eof) ADVANCE(222);
      ADVANCE_MAP(
        ',', 225,
        '.', 227,
        ';', 226,
        '=', 230,
        '[', 205,
        'E', 443,
        'e', 443,
        'G', 407,
        'g', 407,
        'O', 436,
        'o', 436,
        'S', 362,
        's', 362,
        'W', 385,
        'w', 385,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(216);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 217:
      if (eof) ADVANCE(222);
      ADVANCE_MAP(
        ',', 225,
        '.', 227,
        ';', 226,
        '[', 205,
        'E', 443,
        'e', 443,
        'F', 412,
        'f', 412,
        'G', 407,
        'g', 407,
        'O', 440,
        'o', 440,
        'S', 362,
        's', 362,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(217);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 218:
      if (eof) ADVANCE(222);
      ADVANCE_MAP(
        ',', 225,
        '.', 227,
        ';', 226,
        '[', 205,
        'E', 443,
        'e', 443,
        'G', 407,
        'g', 407,
        'S', 362,
        's', 362,
        'W', 385,
        'w', 385,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(218);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 219:
      if (eof) ADVANCE(222);
      ADVANCE_MAP(
        ',', 225,
        '.', 227,
        ';', 226,
        '[', 205,
        'E', 341,
        'e', 341,
        'F', 412,
        'f', 412,
        'G', 407,
        'g', 407,
        'S', 362,
        's', 362,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(219);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 220:
      if (eof) ADVANCE(222);
      ADVANCE_MAP(
        '.', 227,
        ';', 226,
        '[', 205,
        'A', 414,
        'a', 414,
        'E', 443,
        'e', 443,
        'G', 407,
        'g', 407,
        'S', 362,
        's', 362,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(220);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 221:
      if (eof) ADVANCE(222);
      ADVANCE_MAP(
        '.', 227,
        ';', 226,
        '[', 205,
        'A', 428,
        'a', 428,
        'E', 443,
        'e', 443,
        'G', 407,
        'g', 407,
        'S', 362,
        's', 362,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(221);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_go_statement_token1);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_go_statement_token1);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_func_proc_name_server_database_schema_token1);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_func_proc_name_server_database_schema_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_execute_statement_arg_named_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_OUTPUT);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_OUTPUT);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(195);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_OUTPUT);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(437);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_OUTPUT);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_default);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_default);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_null_);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_null_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '\'') ADVANCE(5);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_constant_token3);
      if (lookahead == '.') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_constant_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_execute);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_execute);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(430);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_execute);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_execute);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_execute_body_token1);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_WITH);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_WITH);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_RESULT_SETS_token1);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_RESULT_SETS_token2);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_NONE);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_UNDEFINED);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_RECOMPILE);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_AS_token1);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_AS_token1);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_LOGIN);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_USER);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_AT_KEYWORD);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_AT_KEYWORD);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_string_lit);
      if (lookahead == '\'') ADVANCE(6);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_PLUS);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_query_specification_token1);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_query_specification_token1);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_select);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_select);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_asterisk);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_asterisk);
      if (lookahead == '=') ADVANCE(271);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_checksum_agg_);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_checksum_agg_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_count_);
      if (lookahead == '_') ADVANCE(37);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_count_);
      if (lookahead == '_') ADVANCE(355);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_count_big_);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_count_big_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_avg_);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_avg_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_max_);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_max_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_min_);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_min_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_sum_);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_sum_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_stdev_);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(296);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_stdev_);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(297);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_stdevp_);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_stdevp_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_var_);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(300);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_var_);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(301);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_varp_);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_varp_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_all_);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_all_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_distinct_);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_distinct_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_ntile_);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_ntile_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_rank_);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_rank_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_dense_rank_);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_dense_rank_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_row_number_);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_row_number_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_over_clause_token1);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_over_clause_token1);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_over_clause_token2);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_over_clause_token3);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_collation__token1);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_asc_);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_desc_);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_window_frame_extent_token1);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_window_frame_extent_token2);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_window_frame_following_token1);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_window_frame_following_token2);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_window_frame_preceding_token1);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_window_frame_preceding_token2);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_window_frame_preceding_token3);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_window_frame_preceding_token3);
      if (lookahead == '_') ADVANCE(139);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(330);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_row_or_range_clause_token1);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_row_or_range_clause_token2);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '.') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(270);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(269);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_real__token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_real__token2);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(363);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_real__token2);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(69);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(393);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(386);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(393);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(413);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(353);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(404);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(409);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(442);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(401);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(435);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(402);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(441);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(380);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(405);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(383);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(373);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(244);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(419);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(389);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(424);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(370);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(392);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(357);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(246);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(375);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(417);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(375);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(307);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(376);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(358);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(439);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(346);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(359);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(410);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(411);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(351);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(418);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(351);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(287);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(285);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(281);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(379);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(251);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(372);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(433);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(378);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(406);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(425);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(396);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(309);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(311);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(416);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(238);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(303);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(369);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(390);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(423);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(391);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(377);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(367);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(293);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(266);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(356);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(347);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(291);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(387);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(422);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(432);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(388);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(360);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(224);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(398);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(299);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(313);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(315);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(408);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(354);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(258);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(262);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(258);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(434);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(429);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(371);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(268);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(386);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(393);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(361);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(397);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(283);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(236);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(305);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(381);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(233);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(234);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(262);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(384);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(364);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(393);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(399);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(403);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(400);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(394);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(426);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(427);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(377);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(295);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(374);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(348);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(289);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(363);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_id__token2);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 215},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 215},
  [27] = {.lex_state = 215},
  [28] = {.lex_state = 208},
  [29] = {.lex_state = 208},
  [30] = {.lex_state = 207},
  [31] = {.lex_state = 207},
  [32] = {.lex_state = 209},
  [33] = {.lex_state = 209},
  [34] = {.lex_state = 208},
  [35] = {.lex_state = 207},
  [36] = {.lex_state = 208},
  [37] = {.lex_state = 215},
  [38] = {.lex_state = 215},
  [39] = {.lex_state = 208},
  [40] = {.lex_state = 208},
  [41] = {.lex_state = 208},
  [42] = {.lex_state = 207},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 208},
  [46] = {.lex_state = 207},
  [47] = {.lex_state = 215},
  [48] = {.lex_state = 209},
  [49] = {.lex_state = 208},
  [50] = {.lex_state = 208},
  [51] = {.lex_state = 210},
  [52] = {.lex_state = 208},
  [53] = {.lex_state = 208},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 209},
  [56] = {.lex_state = 211},
  [57] = {.lex_state = 211},
  [58] = {.lex_state = 210},
  [59] = {.lex_state = 208},
  [60] = {.lex_state = 208},
  [61] = {.lex_state = 208},
  [62] = {.lex_state = 208},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 208},
  [65] = {.lex_state = 208},
  [66] = {.lex_state = 208},
  [67] = {.lex_state = 208},
  [68] = {.lex_state = 208},
  [69] = {.lex_state = 208},
  [70] = {.lex_state = 208},
  [71] = {.lex_state = 208},
  [72] = {.lex_state = 208},
  [73] = {.lex_state = 210},
  [74] = {.lex_state = 209},
  [75] = {.lex_state = 209},
  [76] = {.lex_state = 214},
  [77] = {.lex_state = 209},
  [78] = {.lex_state = 209},
  [79] = {.lex_state = 209},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 212},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 209},
  [84] = {.lex_state = 209},
  [85] = {.lex_state = 212},
  [86] = {.lex_state = 214},
  [87] = {.lex_state = 207},
  [88] = {.lex_state = 209},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 209},
  [91] = {.lex_state = 210},
  [92] = {.lex_state = 207},
  [93] = {.lex_state = 207},
  [94] = {.lex_state = 209},
  [95] = {.lex_state = 209},
  [96] = {.lex_state = 207},
  [97] = {.lex_state = 209},
  [98] = {.lex_state = 209},
  [99] = {.lex_state = 214},
  [100] = {.lex_state = 209},
  [101] = {.lex_state = 207},
  [102] = {.lex_state = 207},
  [103] = {.lex_state = 207},
  [104] = {.lex_state = 207},
  [105] = {.lex_state = 207},
  [106] = {.lex_state = 209},
  [107] = {.lex_state = 209},
  [108] = {.lex_state = 207},
  [109] = {.lex_state = 209},
  [110] = {.lex_state = 209},
  [111] = {.lex_state = 209},
  [112] = {.lex_state = 207},
  [113] = {.lex_state = 207},
  [114] = {.lex_state = 207},
  [115] = {.lex_state = 207},
  [116] = {.lex_state = 209},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 207},
  [119] = {.lex_state = 209},
  [120] = {.lex_state = 209},
  [121] = {.lex_state = 207},
  [122] = {.lex_state = 207},
  [123] = {.lex_state = 207},
  [124] = {.lex_state = 209},
  [125] = {.lex_state = 207},
  [126] = {.lex_state = 209},
  [127] = {.lex_state = 207},
  [128] = {.lex_state = 209},
  [129] = {.lex_state = 209},
  [130] = {.lex_state = 217},
  [131] = {.lex_state = 209},
  [132] = {.lex_state = 216},
  [133] = {.lex_state = 209},
  [134] = {.lex_state = 209},
  [135] = {.lex_state = 209},
  [136] = {.lex_state = 207},
  [137] = {.lex_state = 209},
  [138] = {.lex_state = 207},
  [139] = {.lex_state = 209},
  [140] = {.lex_state = 209},
  [141] = {.lex_state = 217},
  [142] = {.lex_state = 209},
  [143] = {.lex_state = 209},
  [144] = {.lex_state = 213},
  [145] = {.lex_state = 219},
  [146] = {.lex_state = 218},
  [147] = {.lex_state = 213},
  [148] = {.lex_state = 218},
  [149] = {.lex_state = 218},
  [150] = {.lex_state = 216},
  [151] = {.lex_state = 213},
  [152] = {.lex_state = 213},
  [153] = {.lex_state = 220},
  [154] = {.lex_state = 218},
  [155] = {.lex_state = 218},
  [156] = {.lex_state = 218},
  [157] = {.lex_state = 218},
  [158] = {.lex_state = 218},
  [159] = {.lex_state = 216},
  [160] = {.lex_state = 220},
  [161] = {.lex_state = 219},
  [162] = {.lex_state = 218},
  [163] = {.lex_state = 218},
  [164] = {.lex_state = 213},
  [165] = {.lex_state = 213},
  [166] = {.lex_state = 218},
  [167] = {.lex_state = 218},
  [168] = {.lex_state = 213},
  [169] = {.lex_state = 218},
  [170] = {.lex_state = 218},
  [171] = {.lex_state = 218},
  [172] = {.lex_state = 213},
  [173] = {.lex_state = 213},
  [174] = {.lex_state = 213},
  [175] = {.lex_state = 213},
  [176] = {.lex_state = 213},
  [177] = {.lex_state = 213},
  [178] = {.lex_state = 213},
  [179] = {.lex_state = 215},
  [180] = {.lex_state = 213},
  [181] = {.lex_state = 215},
  [182] = {.lex_state = 213},
  [183] = {.lex_state = 213},
  [184] = {.lex_state = 213},
  [185] = {.lex_state = 218},
  [186] = {.lex_state = 213},
  [187] = {.lex_state = 213},
  [188] = {.lex_state = 213},
  [189] = {.lex_state = 213},
  [190] = {.lex_state = 213},
  [191] = {.lex_state = 218},
  [192] = {.lex_state = 213},
  [193] = {.lex_state = 213},
  [194] = {.lex_state = 218},
  [195] = {.lex_state = 213},
  [196] = {.lex_state = 218},
  [197] = {.lex_state = 213},
  [198] = {.lex_state = 213},
  [199] = {.lex_state = 215},
  [200] = {.lex_state = 218},
  [201] = {.lex_state = 215},
  [202] = {.lex_state = 213},
  [203] = {.lex_state = 213},
  [204] = {.lex_state = 214},
  [205] = {.lex_state = 214},
  [206] = {.lex_state = 213},
  [207] = {.lex_state = 215},
  [208] = {.lex_state = 215},
  [209] = {.lex_state = 215},
  [210] = {.lex_state = 213},
  [211] = {.lex_state = 213},
  [212] = {.lex_state = 213},
  [213] = {.lex_state = 215},
  [214] = {.lex_state = 215},
  [215] = {.lex_state = 213},
  [216] = {.lex_state = 213},
  [217] = {.lex_state = 213},
  [218] = {.lex_state = 221},
  [219] = {.lex_state = 214},
  [220] = {.lex_state = 214},
  [221] = {.lex_state = 215},
  [222] = {.lex_state = 213},
  [223] = {.lex_state = 215},
  [224] = {.lex_state = 215},
  [225] = {.lex_state = 215},
  [226] = {.lex_state = 215},
  [227] = {.lex_state = 215},
  [228] = {.lex_state = 218},
  [229] = {.lex_state = 221},
  [230] = {.lex_state = 9},
  [231] = {.lex_state = 215},
  [232] = {.lex_state = 215},
  [233] = {.lex_state = 215},
  [234] = {.lex_state = 215},
  [235] = {.lex_state = 218},
  [236] = {.lex_state = 215},
  [237] = {.lex_state = 215},
  [238] = {.lex_state = 214},
  [239] = {.lex_state = 214},
  [240] = {.lex_state = 214},
  [241] = {.lex_state = 215},
  [242] = {.lex_state = 214},
  [243] = {.lex_state = 214},
  [244] = {.lex_state = 214},
  [245] = {.lex_state = 214},
  [246] = {.lex_state = 214},
  [247] = {.lex_state = 214},
  [248] = {.lex_state = 215},
  [249] = {.lex_state = 215},
  [250] = {.lex_state = 214},
  [251] = {.lex_state = 215},
  [252] = {.lex_state = 214},
  [253] = {.lex_state = 215},
  [254] = {.lex_state = 214},
  [255] = {.lex_state = 214},
  [256] = {.lex_state = 214},
  [257] = {.lex_state = 215},
  [258] = {.lex_state = 214},
  [259] = {.lex_state = 215},
  [260] = {.lex_state = 215},
  [261] = {.lex_state = 214},
  [262] = {.lex_state = 215},
  [263] = {.lex_state = 215},
  [264] = {.lex_state = 215},
  [265] = {.lex_state = 215},
  [266] = {.lex_state = 215},
  [267] = {.lex_state = 214},
  [268] = {.lex_state = 215},
  [269] = {.lex_state = 215},
  [270] = {.lex_state = 214},
  [271] = {.lex_state = 214},
  [272] = {.lex_state = 214},
  [273] = {.lex_state = 214},
  [274] = {.lex_state = 215},
  [275] = {.lex_state = 215},
  [276] = {.lex_state = 215},
  [277] = {.lex_state = 215},
  [278] = {.lex_state = 214},
  [279] = {.lex_state = 214},
  [280] = {.lex_state = 214},
  [281] = {.lex_state = 214},
  [282] = {.lex_state = 214},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 215},
  [285] = {.lex_state = 215},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 7},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 215},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 9},
  [297] = {.lex_state = 214},
  [298] = {.lex_state = 9},
  [299] = {.lex_state = 9},
  [300] = {.lex_state = 9},
  [301] = {.lex_state = 214},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 214},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 214},
  [306] = {.lex_state = 9},
  [307] = {.lex_state = 9},
  [308] = {.lex_state = 9},
  [309] = {.lex_state = 214},
  [310] = {.lex_state = 9},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 9},
  [315] = {.lex_state = 9},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 9},
  [318] = {.lex_state = 9},
  [319] = {.lex_state = 9},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 9},
  [322] = {.lex_state = 8},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 214},
  [325] = {.lex_state = 214},
  [326] = {.lex_state = 9},
  [327] = {.lex_state = 9},
  [328] = {.lex_state = 214},
  [329] = {.lex_state = 9},
  [330] = {.lex_state = 8},
  [331] = {.lex_state = 8},
  [332] = {.lex_state = 214},
  [333] = {.lex_state = 214},
  [334] = {.lex_state = 9},
  [335] = {.lex_state = 214},
  [336] = {.lex_state = 9},
  [337] = {.lex_state = 9},
  [338] = {.lex_state = 9},
  [339] = {.lex_state = 9},
  [340] = {.lex_state = 9},
  [341] = {.lex_state = 9},
  [342] = {.lex_state = 9},
  [343] = {.lex_state = 9},
  [344] = {.lex_state = 214},
  [345] = {.lex_state = 9},
  [346] = {.lex_state = 9},
  [347] = {.lex_state = 214},
  [348] = {.lex_state = 9},
  [349] = {.lex_state = 9},
  [350] = {.lex_state = 9},
  [351] = {.lex_state = 9},
  [352] = {.lex_state = 9},
  [353] = {.lex_state = 9},
  [354] = {.lex_state = 9},
  [355] = {.lex_state = 9},
  [356] = {.lex_state = 9},
  [357] = {.lex_state = 9},
  [358] = {.lex_state = 9},
  [359] = {.lex_state = 9},
  [360] = {.lex_state = 214},
  [361] = {.lex_state = 9},
  [362] = {.lex_state = 9},
  [363] = {.lex_state = 9},
  [364] = {.lex_state = 9},
  [365] = {.lex_state = 9},
  [366] = {.lex_state = 214},
  [367] = {.lex_state = 9},
  [368] = {.lex_state = 9},
  [369] = {.lex_state = 9},
  [370] = {.lex_state = 9},
  [371] = {.lex_state = 9},
  [372] = {.lex_state = 9},
  [373] = {.lex_state = 9},
  [374] = {.lex_state = 214},
  [375] = {.lex_state = 214},
  [376] = {.lex_state = 214},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 1},
  [381] = {.lex_state = 8},
  [382] = {.lex_state = 7},
  [383] = {.lex_state = 214},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 214},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 214},
  [388] = {.lex_state = 1},
  [389] = {.lex_state = 214},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 8},
  [392] = {.lex_state = 214},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 8},
  [395] = {.lex_state = 1},
  [396] = {.lex_state = 214},
  [397] = {.lex_state = 1},
  [398] = {.lex_state = 214},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 214},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 214},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 215},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 215},
  [409] = {.lex_state = 215},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 334},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 215},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 215},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 215},
  [447] = {.lex_state = 215},
  [448] = {.lex_state = 215},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 334},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 215},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 215},
  [458] = {.lex_state = 1},
  [459] = {.lex_state = 1},
  [460] = {.lex_state = 215},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 215},
  [469] = {.lex_state = 1},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 334},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 215},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 8},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 215},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 215},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_go_statement_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_func_proc_name_server_database_schema_token1] = ACTIONS(1),
    [aux_sym_execute_statement_arg_named_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_OUTPUT] = ACTIONS(1),
    [sym_default] = ACTIONS(1),
    [sym_null_] = ACTIONS(1),
    [aux_sym_constant_token1] = ACTIONS(1),
    [aux_sym_constant_token2] = ACTIONS(1),
    [aux_sym_constant_token3] = ACTIONS(1),
    [sym_execute] = ACTIONS(1),
    [aux_sym_execute_body_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_WITH] = ACTIONS(1),
    [aux_sym_RESULT_SETS_token1] = ACTIONS(1),
    [aux_sym_RESULT_SETS_token2] = ACTIONS(1),
    [sym_NONE] = ACTIONS(1),
    [sym_UNDEFINED] = ACTIONS(1),
    [sym_RECOMPILE] = ACTIONS(1),
    [aux_sym_AS_token1] = ACTIONS(1),
    [sym_LOGIN] = ACTIONS(1),
    [sym_USER] = ACTIONS(1),
    [sym_AT_KEYWORD] = ACTIONS(1),
    [sym_string_lit] = ACTIONS(1),
    [sym_PLUS] = ACTIONS(1),
    [aux_sym_query_specification_token1] = ACTIONS(1),
    [sym_select] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [sym_asterisk] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [sym_checksum_agg_] = ACTIONS(1),
    [sym_count_] = ACTIONS(1),
    [sym_count_big_] = ACTIONS(1),
    [sym_avg_] = ACTIONS(1),
    [sym_max_] = ACTIONS(1),
    [sym_min_] = ACTIONS(1),
    [sym_sum_] = ACTIONS(1),
    [sym_stdev_] = ACTIONS(1),
    [sym_stdevp_] = ACTIONS(1),
    [sym_var_] = ACTIONS(1),
    [sym_varp_] = ACTIONS(1),
    [sym_all_] = ACTIONS(1),
    [sym_distinct_] = ACTIONS(1),
    [sym_ntile_] = ACTIONS(1),
    [sym_rank_] = ACTIONS(1),
    [sym_dense_rank_] = ACTIONS(1),
    [sym_row_number_] = ACTIONS(1),
    [aux_sym_over_clause_token1] = ACTIONS(1),
    [aux_sym_over_clause_token2] = ACTIONS(1),
    [aux_sym_over_clause_token3] = ACTIONS(1),
    [aux_sym_order_by_clause_token1] = ACTIONS(1),
    [aux_sym_collation__token1] = ACTIONS(1),
    [sym_desc_] = ACTIONS(1),
    [aux_sym_window_frame_extent_token1] = ACTIONS(1),
    [aux_sym_window_frame_extent_token2] = ACTIONS(1),
    [aux_sym_window_frame_following_token1] = ACTIONS(1),
    [aux_sym_window_frame_following_token2] = ACTIONS(1),
    [aux_sym_window_frame_preceding_token1] = ACTIONS(1),
    [aux_sym_window_frame_preceding_token2] = ACTIONS(1),
    [aux_sym_window_frame_preceding_token3] = ACTIONS(1),
    [aux_sym_row_or_range_clause_token1] = ACTIONS(1),
    [aux_sym_row_or_range_clause_token2] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [aux_sym_binary_token1] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [aux_sym_real__token1] = ACTIONS(1),
    [aux_sym_real__token2] = ACTIONS(1),
    [aux_sym_id__token2] = ACTIONS(1),
    [anon_sym_TODO] = ACTIONS(1),
  },
  [1] = {
    [sym_tsql_file] = STATE(513),
    [sym_batch] = STATE(27),
    [sym_go_statement] = STATE(234),
    [sym_execute_body_batch] = STATE(63),
    [sym_func_proc_name_server_database_schema] = STATE(32),
    [sym_func_proc_name_database_schema] = STATE(124),
    [sym_func_proc_name_schema] = STATE(107),
    [sym_sql_clauses] = STATE(37),
    [sym_another_statement] = STATE(249),
    [sym_execute_statement] = STATE(251),
    [sym_dml_clause] = STATE(249),
    [sym_select_statement_standalone] = STATE(257),
    [sym_select_statement] = STATE(259),
    [sym_query_expression] = STATE(265),
    [sym_query_specification] = STATE(266),
    [sym_id_] = STATE(78),
    [sym_keyword] = STATE(48),
    [aux_sym_tsql_file_repeat1] = STATE(27),
    [aux_sym_batch_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_go_statement_token1] = ACTIONS(5),
    [aux_sym_func_proc_name_server_database_schema_token1] = ACTIONS(7),
    [sym_execute] = ACTIONS(9),
    [sym_select] = ACTIONS(11),
    [aux_sym_id__token1] = ACTIONS(13),
    [aux_sym_id__token2] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 28,
    ACTIONS(17), 1,
      aux_sym_go_statement_token1,
    ACTIONS(19), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(23), 1,
      aux_sym_constant_token3,
    ACTIONS(25), 1,
      sym_string_lit,
    ACTIONS(27), 1,
      sym_asterisk,
    ACTIONS(29), 1,
      sym_checksum_agg_,
    ACTIONS(35), 1,
      sym_ntile_,
    ACTIONS(39), 1,
      anon_sym_0,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    ACTIONS(43), 1,
      aux_sym_real__token1,
    ACTIONS(45), 1,
      aux_sym_id__token1,
    ACTIONS(47), 1,
      aux_sym_id__token2,
    STATE(30), 1,
      sym_LOCAL_ID_,
    STATE(42), 1,
      sym_expression,
    STATE(58), 1,
      sym_keyword,
    STATE(73), 1,
      sym_id_,
    STATE(92), 1,
      sym_primitive_constant,
    STATE(147), 1,
      sym_select_list_elem,
    STATE(222), 1,
      sym_select_list,
    STATE(459), 1,
      sym_column_alias,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_count_,
      sym_count_big_,
    STATE(103), 2,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(180), 2,
      sym_udt_elem,
      sym_expression_elem,
    ACTIONS(37), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(93), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(108), 5,
      sym_binary,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(33), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [104] = 27,
    ACTIONS(17), 1,
      aux_sym_go_statement_token1,
    ACTIONS(19), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(23), 1,
      aux_sym_constant_token3,
    ACTIONS(25), 1,
      sym_string_lit,
    ACTIONS(27), 1,
      sym_asterisk,
    ACTIONS(29), 1,
      sym_checksum_agg_,
    ACTIONS(35), 1,
      sym_ntile_,
    ACTIONS(39), 1,
      anon_sym_0,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    ACTIONS(43), 1,
      aux_sym_real__token1,
    ACTIONS(45), 1,
      aux_sym_id__token1,
    ACTIONS(47), 1,
      aux_sym_id__token2,
    STATE(30), 1,
      sym_LOCAL_ID_,
    STATE(42), 1,
      sym_expression,
    STATE(58), 1,
      sym_keyword,
    STATE(73), 1,
      sym_id_,
    STATE(92), 1,
      sym_primitive_constant,
    STATE(178), 1,
      sym_select_list_elem,
    STATE(459), 1,
      sym_column_alias,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_count_,
      sym_count_big_,
    STATE(103), 2,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(180), 2,
      sym_udt_elem,
      sym_expression_elem,
    ACTIONS(37), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(93), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(108), 5,
      sym_binary,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(33), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [205] = 25,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_constant_token3,
    ACTIONS(29), 1,
      sym_checksum_agg_,
    ACTIONS(35), 1,
      sym_ntile_,
    ACTIONS(39), 1,
      anon_sym_0,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    ACTIONS(43), 1,
      aux_sym_real__token1,
    ACTIONS(49), 1,
      aux_sym_go_statement_token1,
    ACTIONS(51), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(53), 1,
      sym_string_lit,
    ACTIONS(55), 1,
      sym_asterisk,
    STATE(48), 1,
      sym_keyword,
    STATE(144), 1,
      sym_id_,
    STATE(434), 1,
      sym_expression,
    STATE(455), 1,
      sym_all_distinct_expression,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_all_,
      sym_distinct_,
    STATE(92), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    STATE(103), 2,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(37), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(93), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(108), 5,
      sym_binary,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(33), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [301] = 25,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_constant_token3,
    ACTIONS(29), 1,
      sym_checksum_agg_,
    ACTIONS(35), 1,
      sym_ntile_,
    ACTIONS(39), 1,
      anon_sym_0,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    ACTIONS(43), 1,
      aux_sym_real__token1,
    ACTIONS(49), 1,
      aux_sym_go_statement_token1,
    ACTIONS(51), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(53), 1,
      sym_string_lit,
    ACTIONS(59), 1,
      sym_asterisk,
    STATE(48), 1,
      sym_keyword,
    STATE(144), 1,
      sym_id_,
    STATE(434), 1,
      sym_expression,
    STATE(475), 1,
      sym_all_distinct_expression,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_all_,
      sym_distinct_,
    STATE(92), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    STATE(103), 2,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(37), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(93), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(108), 5,
      sym_binary,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(33), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [397] = 25,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_constant_token3,
    ACTIONS(29), 1,
      sym_checksum_agg_,
    ACTIONS(35), 1,
      sym_ntile_,
    ACTIONS(39), 1,
      anon_sym_0,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    ACTIONS(43), 1,
      aux_sym_real__token1,
    ACTIONS(49), 1,
      aux_sym_go_statement_token1,
    ACTIONS(51), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(53), 1,
      sym_string_lit,
    ACTIONS(61), 1,
      sym_asterisk,
    STATE(48), 1,
      sym_keyword,
    STATE(144), 1,
      sym_id_,
    STATE(434), 1,
      sym_expression,
    STATE(443), 1,
      sym_all_distinct_expression,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_all_,
      sym_distinct_,
    STATE(92), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    STATE(103), 2,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(37), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(93), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(108), 5,
      sym_binary,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(33), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [493] = 24,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_constant_token3,
    ACTIONS(29), 1,
      sym_checksum_agg_,
    ACTIONS(35), 1,
      sym_ntile_,
    ACTIONS(39), 1,
      anon_sym_0,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    ACTIONS(43), 1,
      aux_sym_real__token1,
    ACTIONS(49), 1,
      aux_sym_go_statement_token1,
    ACTIONS(51), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(53), 1,
      sym_string_lit,
    STATE(48), 1,
      sym_keyword,
    STATE(144), 1,
      sym_id_,
    STATE(434), 1,
      sym_expression,
    STATE(474), 1,
      sym_all_distinct_expression,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_all_,
      sym_distinct_,
    STATE(92), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    STATE(103), 2,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(37), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(93), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(108), 5,
      sym_binary,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(33), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [586] = 24,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_constant_token3,
    ACTIONS(29), 1,
      sym_checksum_agg_,
    ACTIONS(35), 1,
      sym_ntile_,
    ACTIONS(39), 1,
      anon_sym_0,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    ACTIONS(43), 1,
      aux_sym_real__token1,
    ACTIONS(49), 1,
      aux_sym_go_statement_token1,
    ACTIONS(51), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(53), 1,
      sym_string_lit,
    STATE(48), 1,
      sym_keyword,
    STATE(144), 1,
      sym_id_,
    STATE(434), 1,
      sym_expression,
    STATE(456), 1,
      sym_all_distinct_expression,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_all_,
      sym_distinct_,
    STATE(92), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    STATE(103), 2,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(37), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(93), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(108), 5,
      sym_binary,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(33), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [679] = 24,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_constant_token3,
    ACTIONS(29), 1,
      sym_checksum_agg_,
    ACTIONS(35), 1,
      sym_ntile_,
    ACTIONS(39), 1,
      anon_sym_0,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    ACTIONS(43), 1,
      aux_sym_real__token1,
    ACTIONS(49), 1,
      aux_sym_go_statement_token1,
    ACTIONS(51), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(53), 1,
      sym_string_lit,
    STATE(48), 1,
      sym_keyword,
    STATE(144), 1,
      sym_id_,
    STATE(434), 1,
      sym_expression,
    STATE(444), 1,
      sym_all_distinct_expression,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_all_,
      sym_distinct_,
    STATE(92), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    STATE(103), 2,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(37), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(93), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(108), 5,
      sym_binary,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(33), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [772] = 24,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_constant_token3,
    ACTIONS(29), 1,
      sym_checksum_agg_,
    ACTIONS(35), 1,
      sym_ntile_,
    ACTIONS(39), 1,
      anon_sym_0,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    ACTIONS(43), 1,
      aux_sym_real__token1,
    ACTIONS(49), 1,
      aux_sym_go_statement_token1,
    ACTIONS(51), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(53), 1,
      sym_string_lit,
    STATE(48), 1,
      sym_keyword,
    STATE(144), 1,
      sym_id_,
    STATE(434), 1,
      sym_expression,
    STATE(442), 1,
      sym_all_distinct_expression,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_all_,
      sym_distinct_,
    STATE(92), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    STATE(103), 2,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(37), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(93), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(108), 5,
      sym_binary,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(33), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [865] = 24,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_constant_token3,
    ACTIONS(29), 1,
      sym_checksum_agg_,
    ACTIONS(35), 1,
      sym_ntile_,
    ACTIONS(39), 1,
      anon_sym_0,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    ACTIONS(43), 1,
      aux_sym_real__token1,
    ACTIONS(49), 1,
      aux_sym_go_statement_token1,
    ACTIONS(51), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(53), 1,
      sym_string_lit,
    STATE(48), 1,
      sym_keyword,
    STATE(144), 1,
      sym_id_,
    STATE(434), 1,
      sym_expression,
    STATE(476), 1,
      sym_all_distinct_expression,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_all_,
      sym_distinct_,
    STATE(92), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    STATE(103), 2,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(37), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(93), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(108), 5,
      sym_binary,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(33), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [958] = 24,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_constant_token3,
    ACTIONS(29), 1,
      sym_checksum_agg_,
    ACTIONS(35), 1,
      sym_ntile_,
    ACTIONS(39), 1,
      anon_sym_0,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    ACTIONS(43), 1,
      aux_sym_real__token1,
    ACTIONS(49), 1,
      aux_sym_go_statement_token1,
    ACTIONS(51), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(53), 1,
      sym_string_lit,
    STATE(48), 1,
      sym_keyword,
    STATE(144), 1,
      sym_id_,
    STATE(434), 1,
      sym_expression,
    STATE(454), 1,
      sym_all_distinct_expression,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_all_,
      sym_distinct_,
    STATE(92), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    STATE(103), 2,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(37), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(93), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(108), 5,
      sym_binary,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(33), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1051] = 23,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(69), 1,
      aux_sym_constant_token3,
    ACTIONS(71), 1,
      sym_string_lit,
    ACTIONS(73), 1,
      sym_checksum_agg_,
    ACTIONS(79), 1,
      sym_ntile_,
    ACTIONS(83), 1,
      anon_sym_0,
    ACTIONS(85), 1,
      anon_sym_DOLLAR,
    ACTIONS(87), 1,
      aux_sym_real__token1,
    ACTIONS(89), 1,
      aux_sym_id__token1,
    ACTIONS(91), 1,
      aux_sym_id__token2,
    STATE(86), 1,
      sym_keyword,
    STATE(255), 1,
      sym_id_,
    STATE(324), 1,
      sym_expression,
    STATE(333), 1,
      sym_expression_list_,
    ACTIONS(67), 2,
      sym_default,
      sym_null_,
    ACTIONS(75), 2,
      sym_count_,
      sym_count_big_,
    STATE(271), 2,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(278), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(81), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(272), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(270), 5,
      sym_binary,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(77), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1140] = 23,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(69), 1,
      aux_sym_constant_token3,
    ACTIONS(71), 1,
      sym_string_lit,
    ACTIONS(73), 1,
      sym_checksum_agg_,
    ACTIONS(79), 1,
      sym_ntile_,
    ACTIONS(83), 1,
      anon_sym_0,
    ACTIONS(85), 1,
      anon_sym_DOLLAR,
    ACTIONS(87), 1,
      aux_sym_real__token1,
    ACTIONS(89), 1,
      aux_sym_id__token1,
    ACTIONS(91), 1,
      aux_sym_id__token2,
    STATE(86), 1,
      sym_keyword,
    STATE(254), 1,
      sym_expression,
    STATE(255), 1,
      sym_id_,
    STATE(389), 1,
      sym_order_by_expression,
    ACTIONS(67), 2,
      sym_default,
      sym_null_,
    ACTIONS(75), 2,
      sym_count_,
      sym_count_big_,
    STATE(271), 2,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(278), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(81), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(272), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(270), 5,
      sym_binary,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(77), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1229] = 23,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(69), 1,
      aux_sym_constant_token3,
    ACTIONS(71), 1,
      sym_string_lit,
    ACTIONS(73), 1,
      sym_checksum_agg_,
    ACTIONS(79), 1,
      sym_ntile_,
    ACTIONS(83), 1,
      anon_sym_0,
    ACTIONS(85), 1,
      anon_sym_DOLLAR,
    ACTIONS(87), 1,
      aux_sym_real__token1,
    ACTIONS(89), 1,
      aux_sym_id__token1,
    ACTIONS(91), 1,
      aux_sym_id__token2,
    STATE(86), 1,
      sym_keyword,
    STATE(255), 1,
      sym_id_,
    STATE(297), 1,
      sym_expression_list_,
    STATE(324), 1,
      sym_expression,
    ACTIONS(67), 2,
      sym_default,
      sym_null_,
    ACTIONS(75), 2,
      sym_count_,
      sym_count_big_,
    STATE(271), 2,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(278), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(81), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(272), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(270), 5,
      sym_binary,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(77), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1318] = 23,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(69), 1,
      aux_sym_constant_token3,
    ACTIONS(71), 1,
      sym_string_lit,
    ACTIONS(73), 1,
      sym_checksum_agg_,
    ACTIONS(79), 1,
      sym_ntile_,
    ACTIONS(83), 1,
      anon_sym_0,
    ACTIONS(85), 1,
      anon_sym_DOLLAR,
    ACTIONS(87), 1,
      aux_sym_real__token1,
    ACTIONS(89), 1,
      aux_sym_id__token1,
    ACTIONS(91), 1,
      aux_sym_id__token2,
    STATE(86), 1,
      sym_keyword,
    STATE(254), 1,
      sym_expression,
    STATE(255), 1,
      sym_id_,
    STATE(344), 1,
      sym_order_by_expression,
    ACTIONS(67), 2,
      sym_default,
      sym_null_,
    ACTIONS(75), 2,
      sym_count_,
      sym_count_big_,
    STATE(271), 2,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(278), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(81), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(272), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(270), 5,
      sym_binary,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(77), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1407] = 23,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(69), 1,
      aux_sym_constant_token3,
    ACTIONS(71), 1,
      sym_string_lit,
    ACTIONS(73), 1,
      sym_checksum_agg_,
    ACTIONS(79), 1,
      sym_ntile_,
    ACTIONS(83), 1,
      anon_sym_0,
    ACTIONS(85), 1,
      anon_sym_DOLLAR,
    ACTIONS(87), 1,
      aux_sym_real__token1,
    ACTIONS(89), 1,
      aux_sym_id__token1,
    ACTIONS(91), 1,
      aux_sym_id__token2,
    STATE(86), 1,
      sym_keyword,
    STATE(255), 1,
      sym_id_,
    STATE(324), 1,
      sym_expression,
    STATE(332), 1,
      sym_expression_list_,
    ACTIONS(67), 2,
      sym_default,
      sym_null_,
    ACTIONS(75), 2,
      sym_count_,
      sym_count_big_,
    STATE(271), 2,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(278), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(81), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(272), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(270), 5,
      sym_binary,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(77), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1496] = 22,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_constant_token3,
    ACTIONS(29), 1,
      sym_checksum_agg_,
    ACTIONS(35), 1,
      sym_ntile_,
    ACTIONS(39), 1,
      anon_sym_0,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    ACTIONS(43), 1,
      aux_sym_real__token1,
    ACTIONS(49), 1,
      aux_sym_go_statement_token1,
    ACTIONS(51), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(53), 1,
      sym_string_lit,
    STATE(48), 1,
      sym_keyword,
    STATE(144), 1,
      sym_id_,
    STATE(492), 1,
      sym_expression,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_count_,
      sym_count_big_,
    STATE(92), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    STATE(103), 2,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(37), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(93), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(108), 5,
      sym_binary,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(33), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1582] = 22,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_constant_token3,
    ACTIONS(29), 1,
      sym_checksum_agg_,
    ACTIONS(35), 1,
      sym_ntile_,
    ACTIONS(39), 1,
      anon_sym_0,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    ACTIONS(43), 1,
      aux_sym_real__token1,
    ACTIONS(49), 1,
      aux_sym_go_statement_token1,
    ACTIONS(51), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(53), 1,
      sym_string_lit,
    STATE(48), 1,
      sym_keyword,
    STATE(144), 1,
      sym_id_,
    STATE(449), 1,
      sym_expression,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_count_,
      sym_count_big_,
    STATE(92), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    STATE(103), 2,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(37), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(93), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(108), 5,
      sym_binary,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(33), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1668] = 22,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(69), 1,
      aux_sym_constant_token3,
    ACTIONS(71), 1,
      sym_string_lit,
    ACTIONS(73), 1,
      sym_checksum_agg_,
    ACTIONS(79), 1,
      sym_ntile_,
    ACTIONS(83), 1,
      anon_sym_0,
    ACTIONS(85), 1,
      anon_sym_DOLLAR,
    ACTIONS(87), 1,
      aux_sym_real__token1,
    ACTIONS(89), 1,
      aux_sym_id__token1,
    ACTIONS(91), 1,
      aux_sym_id__token2,
    STATE(86), 1,
      sym_keyword,
    STATE(255), 1,
      sym_id_,
    STATE(347), 1,
      sym_expression,
    ACTIONS(67), 2,
      sym_default,
      sym_null_,
    ACTIONS(75), 2,
      sym_count_,
      sym_count_big_,
    STATE(271), 2,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(278), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(81), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(272), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(270), 5,
      sym_binary,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(77), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1754] = 22,
    ACTIONS(93), 1,
      aux_sym_go_statement_token1,
    ACTIONS(95), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(99), 1,
      aux_sym_constant_token3,
    ACTIONS(101), 1,
      sym_string_lit,
    ACTIONS(103), 1,
      sym_checksum_agg_,
    ACTIONS(109), 1,
      sym_ntile_,
    ACTIONS(113), 1,
      anon_sym_0,
    ACTIONS(115), 1,
      anon_sym_DOLLAR,
    ACTIONS(117), 1,
      aux_sym_real__token1,
    ACTIONS(119), 1,
      aux_sym_id__token1,
    ACTIONS(121), 1,
      aux_sym_id__token2,
    STATE(144), 1,
      sym_id_,
    STATE(177), 1,
      sym_expression,
    STATE(183), 1,
      sym_keyword,
    ACTIONS(97), 2,
      sym_default,
      sym_null_,
    ACTIONS(105), 2,
      sym_count_,
      sym_count_big_,
    STATE(173), 2,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(182), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(111), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(175), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(172), 5,
      sym_binary,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(107), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1840] = 22,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_constant_token3,
    ACTIONS(29), 1,
      sym_checksum_agg_,
    ACTIONS(35), 1,
      sym_ntile_,
    ACTIONS(39), 1,
      anon_sym_0,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    ACTIONS(43), 1,
      aux_sym_real__token1,
    ACTIONS(49), 1,
      aux_sym_go_statement_token1,
    ACTIONS(51), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(53), 1,
      sym_string_lit,
    STATE(48), 1,
      sym_keyword,
    STATE(144), 1,
      sym_id_,
    STATE(500), 1,
      sym_expression,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_count_,
      sym_count_big_,
    STATE(92), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    STATE(103), 2,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(37), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(93), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(108), 5,
      sym_binary,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(33), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1926] = 22,
    ACTIONS(93), 1,
      aux_sym_go_statement_token1,
    ACTIONS(95), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(99), 1,
      aux_sym_constant_token3,
    ACTIONS(101), 1,
      sym_string_lit,
    ACTIONS(103), 1,
      sym_checksum_agg_,
    ACTIONS(109), 1,
      sym_ntile_,
    ACTIONS(113), 1,
      anon_sym_0,
    ACTIONS(115), 1,
      anon_sym_DOLLAR,
    ACTIONS(117), 1,
      aux_sym_real__token1,
    ACTIONS(119), 1,
      aux_sym_id__token1,
    ACTIONS(121), 1,
      aux_sym_id__token2,
    STATE(144), 1,
      sym_id_,
    STATE(183), 1,
      sym_keyword,
    STATE(188), 1,
      sym_expression,
    ACTIONS(97), 2,
      sym_default,
      sym_null_,
    ACTIONS(105), 2,
      sym_count_,
      sym_count_big_,
    STATE(173), 2,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(182), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(111), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(175), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(172), 5,
      sym_binary,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(107), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2012] = 22,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_constant_token3,
    ACTIONS(29), 1,
      sym_checksum_agg_,
    ACTIONS(35), 1,
      sym_ntile_,
    ACTIONS(39), 1,
      anon_sym_0,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    ACTIONS(43), 1,
      aux_sym_real__token1,
    ACTIONS(49), 1,
      aux_sym_go_statement_token1,
    ACTIONS(51), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(53), 1,
      sym_string_lit,
    STATE(48), 1,
      sym_keyword,
    STATE(144), 1,
      sym_id_,
    STATE(445), 1,
      sym_expression,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_count_,
      sym_count_big_,
    STATE(92), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    STATE(103), 2,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(37), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(93), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(108), 5,
      sym_binary,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(33), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2098] = 2,
    ACTIONS(125), 4,
      aux_sym_execute_statement_arg_named_token1,
      sym_string_lit,
      anon_sym_DOLLAR,
      aux_sym_id__token2,
    ACTIONS(123), 22,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      aux_sym_constant_token3,
      sym_checksum_agg_,
      sym_count_,
      sym_count_big_,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
      sym_ntile_,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
      anon_sym_0,
      aux_sym_real__token1,
      aux_sym_id__token1,
  [2129] = 22,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 1,
      aux_sym_go_statement_token1,
    ACTIONS(132), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(135), 1,
      sym_execute,
    ACTIONS(138), 1,
      sym_select,
    ACTIONS(141), 1,
      aux_sym_id__token1,
    ACTIONS(144), 1,
      aux_sym_id__token2,
    STATE(33), 1,
      sym_func_proc_name_server_database_schema,
    STATE(100), 1,
      sym_id_,
    STATE(109), 1,
      sym_keyword,
    STATE(117), 1,
      sym_execute_body_batch,
    STATE(135), 1,
      sym_func_proc_name_schema,
    STATE(139), 1,
      sym_func_proc_name_database_schema,
    STATE(234), 1,
      sym_go_statement,
    STATE(251), 1,
      sym_execute_statement,
    STATE(257), 1,
      sym_select_statement_standalone,
    STATE(259), 1,
      sym_select_statement,
    STATE(265), 1,
      sym_query_expression,
    STATE(266), 1,
      sym_query_specification,
    STATE(26), 2,
      sym_batch,
      aux_sym_tsql_file_repeat1,
    STATE(37), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(249), 2,
      sym_another_statement,
      sym_dml_clause,
  [2199] = 22,
    ACTIONS(5), 1,
      aux_sym_go_statement_token1,
    ACTIONS(9), 1,
      sym_execute,
    ACTIONS(11), 1,
      sym_select,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(151), 1,
      aux_sym_id__token1,
    ACTIONS(153), 1,
      aux_sym_id__token2,
    STATE(33), 1,
      sym_func_proc_name_server_database_schema,
    STATE(100), 1,
      sym_id_,
    STATE(109), 1,
      sym_keyword,
    STATE(117), 1,
      sym_execute_body_batch,
    STATE(135), 1,
      sym_func_proc_name_schema,
    STATE(139), 1,
      sym_func_proc_name_database_schema,
    STATE(234), 1,
      sym_go_statement,
    STATE(251), 1,
      sym_execute_statement,
    STATE(257), 1,
      sym_select_statement_standalone,
    STATE(259), 1,
      sym_select_statement,
    STATE(265), 1,
      sym_query_expression,
    STATE(266), 1,
      sym_query_specification,
    STATE(26), 2,
      sym_batch,
      aux_sym_tsql_file_repeat1,
    STATE(37), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(249), 2,
      sym_another_statement,
      sym_dml_clause,
  [2269] = 14,
    ACTIONS(159), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(165), 1,
      aux_sym_constant_token2,
    ACTIONS(167), 1,
      sym_WITH,
    STATE(150), 1,
      sym_LOCAL_ID_,
    STATE(154), 1,
      sym_execute_statement_arg_unnamed,
    STATE(155), 1,
      sym_execute_statement_arg_named,
    STATE(169), 1,
      sym_execute_parameter,
    STATE(185), 1,
      sym_keyword,
    STATE(235), 1,
      sym_execute_statement_arg,
    ACTIONS(161), 2,
      sym_default,
      sym_null_,
    ACTIONS(163), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(171), 2,
      sym_constant,
      sym_id_,
    ACTIONS(155), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(157), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [2321] = 14,
    ACTIONS(159), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(165), 1,
      aux_sym_constant_token2,
    ACTIONS(173), 1,
      sym_WITH,
    STATE(150), 1,
      sym_LOCAL_ID_,
    STATE(154), 1,
      sym_execute_statement_arg_unnamed,
    STATE(155), 1,
      sym_execute_statement_arg_named,
    STATE(169), 1,
      sym_execute_parameter,
    STATE(185), 1,
      sym_keyword,
    STATE(228), 1,
      sym_execute_statement_arg,
    ACTIONS(161), 2,
      sym_default,
      sym_null_,
    ACTIONS(163), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(171), 2,
      sym_constant,
      sym_id_,
    ACTIONS(169), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(171), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [2373] = 5,
    ACTIONS(179), 1,
      anon_sym_EQ,
    STATE(23), 1,
      sym_assignment_operator,
    ACTIONS(175), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
    ACTIONS(177), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(181), 8,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [2406] = 2,
    ACTIONS(185), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(183), 15,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_EQ,
      sym_string_lit,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      aux_sym_id__token2,
  [2432] = 16,
    ACTIONS(89), 1,
      aux_sym_id__token1,
    ACTIONS(91), 1,
      aux_sym_id__token2,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 1,
      anon_sym_SEMI,
    ACTIONS(193), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(199), 1,
      aux_sym_constant_token2,
    STATE(86), 1,
      sym_keyword,
    STATE(289), 1,
      sym_execute_statement_arg,
    STATE(290), 1,
      sym_execute_statement_arg_named,
    STATE(291), 1,
      sym_execute_statement_arg_unnamed,
    STATE(292), 1,
      sym_LOCAL_ID_,
    STATE(323), 1,
      sym_execute_parameter,
    ACTIONS(195), 2,
      sym_default,
      sym_null_,
    ACTIONS(197), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(312), 2,
      sym_constant,
      sym_id_,
    ACTIONS(189), 3,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [2486] = 15,
    ACTIONS(89), 1,
      aux_sym_id__token1,
    ACTIONS(91), 1,
      aux_sym_id__token2,
    ACTIONS(191), 1,
      anon_sym_SEMI,
    ACTIONS(193), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(199), 1,
      aux_sym_constant_token2,
    STATE(86), 1,
      sym_keyword,
    STATE(289), 1,
      sym_execute_statement_arg,
    STATE(290), 1,
      sym_execute_statement_arg_named,
    STATE(291), 1,
      sym_execute_statement_arg_unnamed,
    STATE(292), 1,
      sym_LOCAL_ID_,
    STATE(323), 1,
      sym_execute_parameter,
    ACTIONS(195), 2,
      sym_default,
      sym_null_,
    ACTIONS(197), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(312), 2,
      sym_constant,
      sym_id_,
    ACTIONS(189), 3,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [2537] = 2,
    ACTIONS(185), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(183), 12,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_execute_body_token1,
      anon_sym_RPAREN,
      sym_PLUS,
      aux_sym_id__token2,
  [2561] = 11,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      aux_sym_AS_token1,
    ACTIONS(209), 1,
      sym_string_lit,
    STATE(46), 1,
      sym_udt_method_arguments,
    STATE(183), 1,
      sym_keyword,
    STATE(195), 1,
      sym_as_column_alias,
    STATE(206), 1,
      sym_id_,
    STATE(212), 1,
      sym_column_alias,
    STATE(288), 1,
      sym_as,
    ACTIONS(201), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(203), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [2603] = 3,
    ACTIONS(215), 1,
      sym_PLUS,
    ACTIONS(213), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(211), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_RPAREN,
      aux_sym_id__token2,
  [2628] = 13,
    ACTIONS(219), 1,
      aux_sym_go_statement_token1,
    ACTIONS(222), 1,
      sym_execute,
    ACTIONS(225), 1,
      sym_select,
    ACTIONS(228), 1,
      aux_sym_id__token1,
    STATE(251), 1,
      sym_execute_statement,
    STATE(257), 1,
      sym_select_statement_standalone,
    STATE(259), 1,
      sym_select_statement,
    STATE(265), 1,
      sym_query_expression,
    STATE(266), 1,
      sym_query_specification,
    STATE(47), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(224), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    STATE(249), 2,
      sym_another_statement,
      sym_dml_clause,
    ACTIONS(217), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [2673] = 13,
    ACTIONS(232), 1,
      aux_sym_go_statement_token1,
    ACTIONS(235), 1,
      sym_execute,
    ACTIONS(238), 1,
      sym_select,
    ACTIONS(241), 1,
      aux_sym_id__token1,
    STATE(251), 1,
      sym_execute_statement,
    STATE(257), 1,
      sym_select_statement_standalone,
    STATE(259), 1,
      sym_select_statement,
    STATE(265), 1,
      sym_query_expression,
    STATE(266), 1,
      sym_query_specification,
    STATE(47), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(226), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    STATE(249), 2,
      sym_another_statement,
      sym_dml_clause,
    ACTIONS(230), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [2718] = 3,
    ACTIONS(247), 1,
      sym_PLUS,
    ACTIONS(245), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(243), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_RPAREN,
      aux_sym_id__token2,
  [2743] = 2,
    ACTIONS(251), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(249), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_id__token2,
  [2765] = 4,
    ACTIONS(215), 1,
      sym_PLUS,
    ACTIONS(253), 1,
      aux_sym_execute_body_token1,
    ACTIONS(213), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(211), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [2791] = 12,
    ACTIONS(93), 1,
      aux_sym_go_statement_token1,
    ACTIONS(119), 1,
      aux_sym_id__token1,
    ACTIONS(121), 1,
      aux_sym_id__token2,
    ACTIONS(207), 1,
      aux_sym_AS_token1,
    ACTIONS(209), 1,
      sym_string_lit,
    STATE(183), 1,
      sym_keyword,
    STATE(206), 1,
      sym_id_,
    STATE(211), 1,
      sym_as_column_alias,
    STATE(212), 1,
      sym_column_alias,
    STATE(288), 1,
      sym_as,
    ACTIONS(257), 3,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
    ACTIONS(255), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
  [2833] = 14,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(89), 1,
      aux_sym_id__token1,
    ACTIONS(91), 1,
      aux_sym_id__token2,
    ACTIONS(193), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(199), 1,
      aux_sym_constant_token2,
    STATE(86), 1,
      sym_keyword,
    STATE(290), 1,
      sym_execute_statement_arg_named,
    STATE(291), 1,
      sym_execute_statement_arg_unnamed,
    STATE(292), 1,
      sym_LOCAL_ID_,
    STATE(316), 1,
      sym_execute_statement_arg,
    STATE(323), 1,
      sym_execute_parameter,
    ACTIONS(195), 2,
      sym_default,
      sym_null_,
    ACTIONS(197), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(312), 2,
      sym_constant,
      sym_id_,
  [2879] = 14,
    ACTIONS(159), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(165), 1,
      aux_sym_constant_token2,
    ACTIONS(259), 1,
      aux_sym_go_statement_token1,
    ACTIONS(261), 1,
      aux_sym_id__token1,
    ACTIONS(263), 1,
      aux_sym_id__token2,
    STATE(150), 1,
      sym_LOCAL_ID_,
    STATE(162), 1,
      sym_execute_statement_arg_unnamed,
    STATE(163), 1,
      sym_execute_statement_arg_named,
    STATE(169), 1,
      sym_execute_parameter,
    STATE(185), 1,
      sym_keyword,
    STATE(194), 1,
      sym_execute_statement_arg,
    ACTIONS(161), 2,
      sym_default,
      sym_null_,
    ACTIONS(163), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(171), 2,
      sym_constant,
      sym_id_,
  [2925] = 2,
    ACTIONS(267), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(265), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_RPAREN,
      aux_sym_id__token2,
  [2947] = 9,
    ACTIONS(207), 1,
      aux_sym_AS_token1,
    ACTIONS(209), 1,
      sym_string_lit,
    STATE(183), 1,
      sym_keyword,
    STATE(206), 1,
      sym_id_,
    STATE(212), 1,
      sym_column_alias,
    STATE(217), 1,
      sym_as_column_alias,
    STATE(288), 1,
      sym_as,
    ACTIONS(269), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(271), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [2983] = 11,
    ACTIONS(277), 1,
      sym_execute,
    ACTIONS(280), 1,
      sym_select,
    STATE(251), 1,
      sym_execute_statement,
    STATE(257), 1,
      sym_select_statement_standalone,
    STATE(259), 1,
      sym_select_statement,
    STATE(265), 1,
      sym_query_expression,
    STATE(266), 1,
      sym_query_specification,
    ACTIONS(275), 2,
      aux_sym_go_statement_token1,
      aux_sym_id__token1,
    STATE(47), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(249), 2,
      sym_another_statement,
      sym_dml_clause,
    ACTIONS(273), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [3022] = 2,
    ACTIONS(285), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(283), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_id__token2,
  [3043] = 2,
    ACTIONS(289), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(287), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [3063] = 2,
    ACTIONS(293), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(291), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [3083] = 2,
    ACTIONS(251), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(249), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_body_token1,
      anon_sym_LPAREN,
      sym_string_lit,
      anon_sym_COLON_COLON,
      aux_sym_id__token2,
  [3103] = 2,
    ACTIONS(297), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(295), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [3123] = 3,
    ACTIONS(303), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(299), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(301), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [3145] = 14,
    ACTIONS(49), 1,
      aux_sym_go_statement_token1,
    ACTIONS(51), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(305), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(309), 1,
      sym_string_lit,
    ACTIONS(311), 1,
      aux_sym_id__token1,
    ACTIONS(313), 1,
      aux_sym_id__token2,
    STATE(41), 1,
      sym_LOCAL_ID_,
    STATE(50), 1,
      sym_func_proc_name_schema,
    STATE(53), 1,
      sym_id_,
    STATE(61), 1,
      sym_func_proc_name_database_schema,
    STATE(62), 1,
      sym_keyword,
    STATE(274), 1,
      sym_execute_body,
    STATE(28), 2,
      sym_func_proc_name_server_database_schema,
      sym_execute_var_string,
  [3189] = 6,
    ACTIONS(319), 1,
      aux_sym_constant_token3,
    STATE(284), 1,
      sym_integer,
    ACTIONS(251), 2,
      sym_default,
      sym_null_,
    ACTIONS(315), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(249), 4,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(317), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [3217] = 4,
    ACTIONS(325), 1,
      aux_sym_over_clause_token1,
    STATE(114), 1,
      sym_over_clause,
    ACTIONS(323), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(321), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [3241] = 4,
    ACTIONS(325), 1,
      aux_sym_over_clause_token1,
    STATE(113), 1,
      sym_over_clause,
    ACTIONS(329), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(327), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [3265] = 2,
    ACTIONS(285), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(283), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_body_token1,
      anon_sym_LPAREN,
      sym_string_lit,
      anon_sym_COLON_COLON,
      aux_sym_id__token2,
  [3285] = 2,
    ACTIONS(333), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(331), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [3305] = 3,
    ACTIONS(339), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(335), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(337), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [3327] = 2,
    ACTIONS(343), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(341), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [3347] = 2,
    ACTIONS(285), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(283), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [3367] = 13,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(345), 1,
      aux_sym_go_statement_token1,
    ACTIONS(347), 1,
      sym_execute,
    ACTIONS(349), 1,
      sym_select,
    STATE(225), 1,
      sym_go_statement,
    STATE(251), 1,
      sym_execute_statement,
    STATE(257), 1,
      sym_select_statement_standalone,
    STATE(259), 1,
      sym_select_statement,
    STATE(265), 1,
      sym_query_expression,
    STATE(266), 1,
      sym_query_specification,
    STATE(401), 1,
      aux_sym_tsql_file_repeat2,
    STATE(38), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(249), 2,
      sym_another_statement,
      sym_dml_clause,
  [3409] = 2,
    ACTIONS(353), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(351), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [3429] = 2,
    ACTIONS(357), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(355), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [3449] = 2,
    ACTIONS(361), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(359), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [3469] = 2,
    ACTIONS(365), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(363), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [3489] = 3,
    ACTIONS(371), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(367), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(369), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [3511] = 2,
    ACTIONS(375), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(373), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [3531] = 3,
    ACTIONS(381), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(377), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(379), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [3553] = 3,
    ACTIONS(387), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(383), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(385), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [3575] = 3,
    ACTIONS(393), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(389), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(391), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [3597] = 5,
    ACTIONS(399), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(401), 1,
      aux_sym_execute_body_token1,
    ACTIONS(403), 1,
      anon_sym_COLON_COLON,
    ACTIONS(395), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_string_lit,
      aux_sym_id__token2,
    ACTIONS(397), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [3622] = 3,
    ACTIONS(405), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(369), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(367), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [3643] = 3,
    ACTIONS(407), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(379), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(377), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [3664] = 1,
    ACTIONS(183), 14,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_OUTPUT,
      sym_execute,
      anon_sym_RPAREN,
      sym_select,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [3681] = 2,
    ACTIONS(251), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(249), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [3700] = 3,
    ACTIONS(409), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(301), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(299), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [3721] = 3,
    ACTIONS(411), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(385), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(383), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [3742] = 11,
    ACTIONS(165), 1,
      aux_sym_constant_token2,
    ACTIONS(259), 1,
      aux_sym_go_statement_token1,
    ACTIONS(261), 1,
      aux_sym_id__token1,
    ACTIONS(263), 1,
      aux_sym_id__token2,
    ACTIONS(413), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(150), 1,
      sym_LOCAL_ID_,
    STATE(185), 1,
      sym_keyword,
    STATE(191), 1,
      sym_execute_parameter,
    ACTIONS(161), 2,
      sym_default,
      sym_null_,
    ACTIONS(163), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(171), 2,
      sym_constant,
      sym_id_,
  [3779] = 3,
    ACTIONS(419), 1,
      aux_sym_real__token2,
    ACTIONS(417), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(415), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [3800] = 11,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(89), 1,
      aux_sym_id__token1,
    ACTIONS(91), 1,
      aux_sym_id__token2,
    ACTIONS(199), 1,
      aux_sym_constant_token2,
    STATE(86), 1,
      sym_keyword,
    STATE(292), 1,
      sym_LOCAL_ID_,
    STATE(313), 1,
      sym_execute_parameter,
    ACTIONS(195), 2,
      sym_default,
      sym_null_,
    ACTIONS(197), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(312), 2,
      sym_constant,
      sym_id_,
  [3837] = 3,
    ACTIONS(421), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(391), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(389), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [3858] = 3,
    ACTIONS(423), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(337), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(335), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [3879] = 3,
    ACTIONS(419), 1,
      aux_sym_real__token2,
    ACTIONS(427), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(425), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [3900] = 1,
    ACTIONS(283), 13,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      anon_sym_RPAREN,
      sym_select,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [3916] = 2,
    ACTIONS(431), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(429), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [3934] = 2,
    ACTIONS(251), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(249), 7,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [3952] = 12,
    ACTIONS(49), 1,
      aux_sym_go_statement_token1,
    ACTIONS(51), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(305), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(309), 1,
      sym_string_lit,
    ACTIONS(311), 1,
      aux_sym_id__token1,
    ACTIONS(313), 1,
      aux_sym_id__token2,
    STATE(36), 1,
      sym_LOCAL_ID_,
    STATE(50), 1,
      sym_func_proc_name_schema,
    STATE(53), 1,
      sym_id_,
    STATE(61), 1,
      sym_func_proc_name_database_schema,
    STATE(62), 1,
      sym_keyword,
    STATE(29), 2,
      sym_func_proc_name_server_database_schema,
      sym_execute_var_string,
  [3990] = 3,
    ACTIONS(433), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(377), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(379), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [4010] = 3,
    ACTIONS(401), 1,
      aux_sym_execute_body_token1,
    ACTIONS(435), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
    ACTIONS(437), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [4030] = 2,
    ACTIONS(177), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(175), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [4048] = 2,
    ACTIONS(441), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(439), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [4066] = 2,
    ACTIONS(289), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(287), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [4084] = 3,
    ACTIONS(443), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(383), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(385), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [4104] = 2,
    ACTIONS(447), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(445), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [4122] = 2,
    ACTIONS(353), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(351), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [4140] = 2,
    ACTIONS(357), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(355), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [4158] = 1,
    ACTIONS(249), 13,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      anon_sym_RPAREN,
      sym_select,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [4174] = 3,
    ACTIONS(449), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(299), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(301), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [4194] = 2,
    ACTIONS(453), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(451), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [4212] = 2,
    ACTIONS(457), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(455), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [4230] = 2,
    ACTIONS(461), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(459), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [4248] = 2,
    ACTIONS(465), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(463), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [4266] = 2,
    ACTIONS(469), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(467), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [4284] = 3,
    ACTIONS(471), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(367), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(369), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [4304] = 2,
    ACTIONS(293), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(291), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [4322] = 2,
    ACTIONS(437), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(435), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [4340] = 2,
    ACTIONS(285), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(283), 7,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [4358] = 2,
    ACTIONS(361), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(359), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [4376] = 2,
    ACTIONS(375), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(373), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [4394] = 2,
    ACTIONS(475), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(473), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [4412] = 2,
    ACTIONS(479), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(477), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [4430] = 2,
    ACTIONS(483), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(481), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [4448] = 2,
    ACTIONS(487), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(485), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [4466] = 3,
    ACTIONS(489), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(389), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(391), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [4486] = 11,
    ACTIONS(345), 1,
      aux_sym_go_statement_token1,
    ACTIONS(347), 1,
      sym_execute,
    ACTIONS(349), 1,
      sym_select,
    STATE(231), 1,
      sym_go_statement,
    STATE(251), 1,
      sym_execute_statement,
    STATE(257), 1,
      sym_select_statement_standalone,
    STATE(259), 1,
      sym_select_statement,
    STATE(265), 1,
      sym_query_expression,
    STATE(266), 1,
      sym_query_specification,
    STATE(38), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(249), 2,
      sym_another_statement,
      sym_dml_clause,
  [4522] = 2,
    ACTIONS(493), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(491), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [4540] = 2,
    ACTIONS(365), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(363), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [4558] = 3,
    ACTIONS(495), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(335), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(337), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [4578] = 2,
    ACTIONS(499), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(497), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [4596] = 2,
    ACTIONS(503), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(501), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [4614] = 2,
    ACTIONS(507), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(505), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [4632] = 2,
    ACTIONS(343), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(341), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [4650] = 2,
    ACTIONS(511), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(509), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [4668] = 2,
    ACTIONS(297), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(295), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [4686] = 2,
    ACTIONS(515), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(513), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [4704] = 2,
    ACTIONS(333), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(331), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [4722] = 2,
    ACTIONS(359), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(361), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [4739] = 4,
    ACTIONS(517), 1,
      aux_sym_over_clause_token1,
    STATE(215), 1,
      sym_over_clause,
    ACTIONS(327), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(329), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [4760] = 2,
    ACTIONS(351), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(353), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [4777] = 3,
    ACTIONS(519), 1,
      anon_sym_EQ,
    ACTIONS(183), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(185), 6,
      aux_sym_go_statement_token1,
      sym_OUTPUT,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [4796] = 2,
    ACTIONS(355), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(357), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [4813] = 2,
    ACTIONS(287), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(289), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [4830] = 2,
    ACTIONS(291), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(293), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [4847] = 2,
    ACTIONS(521), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
    ACTIONS(523), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [4864] = 2,
    ACTIONS(331), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(333), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [4881] = 2,
    ACTIONS(525), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
    ACTIONS(527), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [4898] = 2,
    ACTIONS(341), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(343), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [4915] = 2,
    ACTIONS(295), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(297), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [4932] = 4,
    ACTIONS(517), 1,
      aux_sym_over_clause_token1,
    STATE(164), 1,
      sym_over_clause,
    ACTIONS(321), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(323), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [4953] = 2,
    ACTIONS(363), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(365), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [4970] = 2,
    ACTIONS(373), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(375), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [4987] = 2,
    ACTIONS(397), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(395), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      aux_sym_id__token2,
  [5003] = 3,
    ACTIONS(529), 1,
      aux_sym_real__token2,
    ACTIONS(425), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(427), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [5021] = 4,
    ACTIONS(535), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(531), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(533), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [5041] = 4,
    ACTIONS(542), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(538), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(540), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [5061] = 4,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    STATE(148), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(544), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(546), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [5081] = 4,
    ACTIONS(555), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(551), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(553), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [5101] = 3,
    ACTIONS(561), 1,
      sym_OUTPUT,
    ACTIONS(557), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(559), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [5119] = 4,
    ACTIONS(542), 1,
      anon_sym_COMMA,
    STATE(152), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(563), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(565), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [5139] = 4,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    STATE(152), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(567), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(569), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [5159] = 5,
    ACTIONS(578), 1,
      aux_sym_AS_token1,
    ACTIONS(580), 1,
      sym_AT_KEYWORD,
    STATE(414), 1,
      sym_AS,
    ACTIONS(574), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(576), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [5181] = 4,
    ACTIONS(586), 1,
      anon_sym_COMMA,
    STATE(156), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(582), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(584), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [5201] = 4,
    ACTIONS(555), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(582), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(584), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [5221] = 4,
    ACTIONS(586), 1,
      anon_sym_COMMA,
    STATE(148), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(551), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(553), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [5241] = 3,
    STATE(148), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(551), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(553), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [5259] = 3,
    STATE(146), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(551), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(553), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [5277] = 2,
    ACTIONS(183), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(185), 6,
      aux_sym_go_statement_token1,
      sym_OUTPUT,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [5293] = 5,
    ACTIONS(578), 1,
      aux_sym_AS_token1,
    ACTIONS(592), 1,
      sym_AT_KEYWORD,
    STATE(426), 1,
      sym_AS,
    ACTIONS(588), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(590), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [5315] = 3,
    ACTIONS(529), 1,
      aux_sym_real__token2,
    ACTIONS(415), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(417), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [5333] = 3,
    STATE(157), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(582), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(584), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [5351] = 3,
    STATE(158), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(582), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(584), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [5369] = 2,
    ACTIONS(481), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(483), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [5384] = 2,
    ACTIONS(491), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(493), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [5399] = 2,
    ACTIONS(594), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(596), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [5414] = 2,
    ACTIONS(598), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(600), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [5429] = 2,
    ACTIONS(445), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(447), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [5444] = 2,
    ACTIONS(602), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(604), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [5459] = 2,
    ACTIONS(606), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(608), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [5474] = 2,
    ACTIONS(557), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(559), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [5489] = 2,
    ACTIONS(435), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(437), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [5504] = 2,
    ACTIONS(459), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(461), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [5519] = 2,
    ACTIONS(610), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(612), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [5534] = 2,
    ACTIONS(439), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(441), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [5549] = 2,
    ACTIONS(183), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(185), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [5564] = 2,
    ACTIONS(614), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(616), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [5579] = 2,
    ACTIONS(567), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(569), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [5594] = 4,
    ACTIONS(618), 1,
      anon_sym_COMMA,
    STATE(207), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(574), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(576), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [5613] = 2,
    ACTIONS(620), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(622), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [5628] = 4,
    ACTIONS(618), 1,
      anon_sym_COMMA,
    STATE(208), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(574), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(576), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [5647] = 2,
    ACTIONS(175), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(177), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [5662] = 2,
    ACTIONS(283), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(285), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [5677] = 2,
    ACTIONS(249), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(251), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [5692] = 2,
    ACTIONS(283), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(285), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [5707] = 2,
    ACTIONS(505), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(507), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [5722] = 2,
    ACTIONS(467), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(469), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [5737] = 2,
    ACTIONS(624), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(626), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [5752] = 2,
    ACTIONS(463), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(465), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [5767] = 2,
    ACTIONS(485), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(487), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [5782] = 2,
    ACTIONS(628), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(630), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [5797] = 2,
    ACTIONS(501), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(503), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [5812] = 2,
    ACTIONS(513), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(515), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [5827] = 2,
    ACTIONS(544), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(546), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [5842] = 2,
    ACTIONS(269), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(271), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [5857] = 2,
    ACTIONS(249), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(251), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [5872] = 2,
    ACTIONS(509), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(511), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [5887] = 2,
    ACTIONS(497), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(499), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [5902] = 4,
    ACTIONS(618), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(588), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(590), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [5921] = 2,
    ACTIONS(531), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(533), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [5936] = 4,
    ACTIONS(618), 1,
      anon_sym_COMMA,
    STATE(207), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(632), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(634), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [5955] = 2,
    ACTIONS(451), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(453), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [5970] = 2,
    ACTIONS(429), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(431), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [5985] = 3,
    ACTIONS(636), 1,
      aux_sym_over_clause_token1,
    STATE(256), 1,
      sym_over_clause,
    ACTIONS(321), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [6002] = 3,
    ACTIONS(636), 1,
      aux_sym_over_clause_token1,
    STATE(279), 1,
      sym_over_clause,
    ACTIONS(327), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [6019] = 2,
    ACTIONS(401), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(638), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [6034] = 4,
    ACTIONS(644), 1,
      anon_sym_COMMA,
    STATE(207), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(640), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(642), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6053] = 4,
    ACTIONS(618), 1,
      anon_sym_COMMA,
    STATE(207), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(647), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(649), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6072] = 4,
    ACTIONS(618), 1,
      anon_sym_COMMA,
    STATE(214), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(651), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(653), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6091] = 2,
    ACTIONS(455), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(457), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [6106] = 2,
    ACTIONS(655), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(657), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [6121] = 2,
    ACTIONS(659), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(661), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [6136] = 4,
    ACTIONS(618), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(663), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(665), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6155] = 4,
    ACTIONS(618), 1,
      anon_sym_COMMA,
    STATE(207), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(663), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(665), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6174] = 2,
    ACTIONS(477), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(479), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [6189] = 2,
    ACTIONS(473), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(475), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [6204] = 2,
    ACTIONS(667), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(669), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [6219] = 3,
    ACTIONS(675), 1,
      sym_AT_KEYWORD,
    ACTIONS(671), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(673), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6235] = 2,
    ACTIONS(677), 1,
      aux_sym_real__token2,
    ACTIONS(415), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [6249] = 2,
    ACTIONS(677), 1,
      aux_sym_real__token2,
    ACTIONS(425), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [6263] = 2,
    ACTIONS(681), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(679), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [6277] = 3,
    ACTIONS(687), 1,
      aux_sym_query_specification_token1,
    ACTIONS(683), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(685), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6293] = 4,
    ACTIONS(319), 1,
      aux_sym_constant_token3,
    STATE(284), 1,
      sym_integer,
    ACTIONS(315), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(317), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6311] = 4,
    ACTIONS(232), 1,
      aux_sym_go_statement_token1,
    STATE(227), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(230), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(241), 3,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6329] = 5,
    ACTIONS(689), 1,
      ts_builtin_sym_end,
    ACTIONS(692), 1,
      aux_sym_go_statement_token1,
    ACTIONS(230), 2,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    STATE(226), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(241), 3,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6349] = 4,
    ACTIONS(698), 1,
      aux_sym_go_statement_token1,
    STATE(227), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(696), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(701), 3,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6367] = 4,
    ACTIONS(705), 1,
      aux_sym_go_statement_token1,
    STATE(227), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(703), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(708), 3,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6385] = 3,
    ACTIONS(714), 1,
      sym_WITH,
    ACTIONS(710), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(712), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6401] = 3,
    ACTIONS(720), 1,
      sym_AT_KEYWORD,
    ACTIONS(716), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(718), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6417] = 9,
    ACTIONS(722), 1,
      aux_sym_go_statement_token1,
    ACTIONS(724), 1,
      aux_sym_id__token1,
    ACTIONS(726), 1,
      aux_sym_id__token2,
    STATE(236), 1,
      sym_table_source,
    STATE(253), 1,
      sym_table_sources,
    STATE(262), 1,
      sym_table_source_item,
    STATE(263), 1,
      sym_full_table_name,
    STATE(269), 1,
      sym_keyword,
    STATE(275), 1,
      sym_id_,
  [6445] = 4,
    ACTIONS(232), 1,
      aux_sym_go_statement_token1,
    STATE(226), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(230), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(241), 3,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6463] = 2,
    ACTIONS(730), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(728), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [6477] = 2,
    ACTIONS(642), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(640), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [6491] = 3,
    STATE(224), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(217), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(228), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6507] = 3,
    ACTIONS(736), 1,
      sym_WITH,
    ACTIONS(732), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(734), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6523] = 2,
    ACTIONS(738), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(740), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6536] = 2,
    ACTIONS(742), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(744), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6549] = 1,
    ACTIONS(491), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [6560] = 1,
    ACTIONS(455), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [6571] = 1,
    ACTIONS(429), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [6582] = 2,
    ACTIONS(746), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(748), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6595] = 1,
    ACTIONS(497), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [6606] = 1,
    ACTIONS(509), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [6617] = 1,
    ACTIONS(513), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [6628] = 1,
    ACTIONS(501), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [6639] = 1,
    ACTIONS(485), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [6650] = 1,
    ACTIONS(451), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [6661] = 3,
    ACTIONS(754), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(750), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_id__token2,
    ACTIONS(752), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6676] = 3,
    ACTIONS(760), 1,
      anon_sym_SEMI,
    ACTIONS(756), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(758), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6691] = 1,
    ACTIONS(467), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [6702] = 2,
    ACTIONS(762), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(764), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6715] = 1,
    ACTIONS(505), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [6726] = 2,
    ACTIONS(766), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(768), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6739] = 5,
    ACTIONS(772), 1,
      aux_sym_collation__token1,
    ACTIONS(774), 1,
      sym_asc_,
    ACTIONS(776), 1,
      sym_desc_,
    STATE(325), 1,
      sym_collation_,
    ACTIONS(770), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [6758] = 1,
    ACTIONS(395), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [6769] = 1,
    ACTIONS(481), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [6780] = 2,
    ACTIONS(778), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(780), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6793] = 1,
    ACTIONS(463), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [6804] = 2,
    ACTIONS(782), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(784), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6817] = 2,
    ACTIONS(786), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(788), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6830] = 1,
    ACTIONS(445), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [6841] = 2,
    ACTIONS(790), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(792), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6854] = 2,
    ACTIONS(794), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(796), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6867] = 2,
    ACTIONS(798), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(800), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6880] = 2,
    ACTIONS(802), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(804), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6893] = 2,
    ACTIONS(806), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(808), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6906] = 2,
    ACTIONS(810), 1,
      anon_sym_EQ,
    ACTIONS(183), 7,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_OUTPUT,
      sym_execute,
      sym_select,
  [6919] = 2,
    ACTIONS(249), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(251), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6932] = 2,
    ACTIONS(283), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(285), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6945] = 1,
    ACTIONS(435), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [6956] = 1,
    ACTIONS(459), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [6967] = 1,
    ACTIONS(439), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [6978] = 1,
    ACTIONS(473), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [6989] = 2,
    ACTIONS(812), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(814), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [7002] = 3,
    ACTIONS(820), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(816), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_id__token2,
    ACTIONS(818), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [7017] = 3,
    ACTIONS(826), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(822), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_id__token2,
    ACTIONS(824), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [7032] = 2,
    ACTIONS(828), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(830), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [7045] = 1,
    ACTIONS(175), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [7056] = 1,
    ACTIONS(477), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [7067] = 6,
    ACTIONS(832), 1,
      anon_sym_RPAREN,
    ACTIONS(834), 1,
      aux_sym_over_clause_token2,
    ACTIONS(836), 1,
      aux_sym_order_by_clause_token1,
    STATE(383), 1,
      sym_order_by_clause,
    STATE(481), 1,
      sym_row_or_range_clause,
    ACTIONS(838), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [7087] = 6,
    ACTIONS(836), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(840), 1,
      anon_sym_RPAREN,
    ACTIONS(842), 1,
      aux_sym_over_clause_token2,
    STATE(400), 1,
      sym_order_by_clause,
    STATE(461), 1,
      sym_row_or_range_clause,
    ACTIONS(838), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [7107] = 6,
    ACTIONS(836), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(844), 1,
      anon_sym_RPAREN,
    ACTIONS(846), 1,
      aux_sym_over_clause_token2,
    STATE(396), 1,
      sym_order_by_clause,
    STATE(467), 1,
      sym_row_or_range_clause,
    ACTIONS(838), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [7127] = 2,
    STATE(295), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(551), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [7139] = 2,
    ACTIONS(848), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(850), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [7151] = 2,
    ACTIONS(852), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(854), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [7163] = 2,
    STATE(287), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(551), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [7175] = 3,
    ACTIONS(856), 1,
      anon_sym_COMMA,
    STATE(287), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(544), 5,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [7189] = 7,
    ACTIONS(93), 1,
      aux_sym_go_statement_token1,
    ACTIONS(119), 1,
      aux_sym_id__token1,
    ACTIONS(121), 1,
      aux_sym_id__token2,
    ACTIONS(209), 1,
      sym_string_lit,
    STATE(174), 1,
      sym_column_alias,
    STATE(183), 1,
      sym_keyword,
    STATE(206), 1,
      sym_id_,
  [7211] = 4,
    ACTIONS(861), 1,
      anon_sym_COMMA,
    ACTIONS(863), 1,
      anon_sym_SEMI,
    STATE(293), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(859), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [7227] = 2,
    STATE(283), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(582), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [7239] = 2,
    STATE(286), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(582), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [7251] = 2,
    ACTIONS(865), 1,
      sym_OUTPUT,
    ACTIONS(557), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [7263] = 4,
    ACTIONS(861), 1,
      anon_sym_COMMA,
    ACTIONS(869), 1,
      anon_sym_SEMI,
    STATE(287), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(867), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [7279] = 2,
    ACTIONS(871), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(873), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [7291] = 3,
    ACTIONS(875), 1,
      anon_sym_COMMA,
    STATE(295), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(531), 5,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [7305] = 6,
    ACTIONS(151), 1,
      aux_sym_id__token1,
    ACTIONS(153), 1,
      aux_sym_id__token2,
    ACTIONS(878), 1,
      aux_sym_go_statement_token1,
    ACTIONS(880), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(95), 1,
      sym_id_,
    STATE(109), 1,
      sym_keyword,
  [7324] = 5,
    ACTIONS(836), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(882), 1,
      anon_sym_RPAREN,
    STATE(392), 1,
      sym_order_by_clause,
    STATE(498), 1,
      sym_row_or_range_clause,
    ACTIONS(838), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [7341] = 6,
    ACTIONS(49), 1,
      aux_sym_go_statement_token1,
    ACTIONS(311), 1,
      aux_sym_id__token1,
    ACTIONS(313), 1,
      aux_sym_id__token2,
    ACTIONS(884), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(62), 1,
      sym_keyword,
    STATE(70), 1,
      sym_id_,
  [7360] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(886), 1,
      aux_sym_go_statement_token1,
    ACTIONS(888), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(48), 1,
      sym_keyword,
    STATE(79), 1,
      sym_id_,
  [7379] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(886), 1,
      aux_sym_go_statement_token1,
    ACTIONS(890), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(48), 1,
      sym_keyword,
    STATE(74), 1,
      sym_id_,
  [7398] = 4,
    ACTIONS(894), 1,
      aux_sym_window_frame_preceding_token2,
    STATE(507), 1,
      sym_window_frame_bound,
    ACTIONS(892), 2,
      aux_sym_constant_token3,
      aux_sym_window_frame_following_token1,
    STATE(417), 2,
      sym_window_frame_following,
      sym_window_frame_preceding,
  [7413] = 1,
    ACTIONS(598), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [7422] = 3,
    ACTIONS(896), 1,
      anon_sym_COMMA,
    STATE(305), 1,
      aux_sym_expression_list__repeat1,
    ACTIONS(898), 4,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [7435] = 1,
    ACTIONS(594), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [7444] = 3,
    ACTIONS(900), 1,
      anon_sym_COMMA,
    STATE(305), 1,
      aux_sym_expression_list__repeat1,
    ACTIONS(903), 4,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [7457] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(886), 1,
      aux_sym_go_statement_token1,
    ACTIONS(905), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(48), 1,
      sym_keyword,
    STATE(84), 1,
      sym_id_,
  [7476] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(49), 1,
      aux_sym_go_statement_token1,
    ACTIONS(907), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(48), 1,
      sym_keyword,
    STATE(502), 1,
      sym_id_,
  [7495] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(886), 1,
      aux_sym_go_statement_token1,
    ACTIONS(909), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(48), 1,
      sym_keyword,
    STATE(75), 1,
      sym_id_,
  [7514] = 1,
    ACTIONS(911), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [7523] = 6,
    ACTIONS(151), 1,
      aux_sym_id__token1,
    ACTIONS(153), 1,
      aux_sym_id__token2,
    ACTIONS(878), 1,
      aux_sym_go_statement_token1,
    ACTIONS(913), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(109), 1,
      sym_keyword,
    STATE(116), 1,
      sym_id_,
  [7542] = 1,
    ACTIONS(606), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [7551] = 1,
    ACTIONS(557), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [7560] = 1,
    ACTIONS(628), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [7569] = 6,
    ACTIONS(49), 1,
      aux_sym_go_statement_token1,
    ACTIONS(311), 1,
      aux_sym_id__token1,
    ACTIONS(313), 1,
      aux_sym_id__token2,
    ACTIONS(915), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(62), 1,
      sym_keyword,
    STATE(71), 1,
      sym_id_,
  [7588] = 6,
    ACTIONS(151), 1,
      aux_sym_id__token1,
    ACTIONS(153), 1,
      aux_sym_id__token2,
    ACTIONS(878), 1,
      aux_sym_go_statement_token1,
    ACTIONS(917), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(109), 1,
      sym_keyword,
    STATE(120), 1,
      sym_id_,
  [7607] = 1,
    ACTIONS(544), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [7616] = 6,
    ACTIONS(49), 1,
      aux_sym_go_statement_token1,
    ACTIONS(311), 1,
      aux_sym_id__token1,
    ACTIONS(313), 1,
      aux_sym_id__token2,
    ACTIONS(919), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(62), 1,
      sym_keyword,
    STATE(68), 1,
      sym_id_,
  [7635] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(49), 1,
      aux_sym_go_statement_token1,
    ACTIONS(921), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(48), 1,
      sym_keyword,
    STATE(446), 1,
      sym_id_,
  [7654] = 6,
    ACTIONS(151), 1,
      aux_sym_id__token1,
    ACTIONS(153), 1,
      aux_sym_id__token2,
    ACTIONS(878), 1,
      aux_sym_go_statement_token1,
    ACTIONS(923), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(106), 1,
      sym_id_,
    STATE(109), 1,
      sym_keyword,
  [7673] = 1,
    ACTIONS(531), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [7682] = 6,
    ACTIONS(151), 1,
      aux_sym_id__token1,
    ACTIONS(153), 1,
      aux_sym_id__token2,
    ACTIONS(878), 1,
      aux_sym_go_statement_token1,
    ACTIONS(925), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(90), 1,
      sym_id_,
    STATE(109), 1,
      sym_keyword,
  [7701] = 4,
    ACTIONS(117), 1,
      aux_sym_real__token1,
    ACTIONS(927), 1,
      aux_sym_constant_token3,
    ACTIONS(929), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(168), 2,
      sym_real_,
      sym_float_,
  [7716] = 1,
    ACTIONS(602), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [7725] = 3,
    ACTIONS(896), 1,
      anon_sym_COMMA,
    STATE(303), 1,
      aux_sym_expression_list__repeat1,
    ACTIONS(931), 4,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [7738] = 3,
    ACTIONS(935), 1,
      sym_asc_,
    ACTIONS(937), 1,
      sym_desc_,
    ACTIONS(933), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [7751] = 6,
    ACTIONS(49), 1,
      aux_sym_go_statement_token1,
    ACTIONS(311), 1,
      aux_sym_id__token1,
    ACTIONS(313), 1,
      aux_sym_id__token2,
    ACTIONS(939), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(62), 1,
      sym_keyword,
    STATE(72), 1,
      sym_id_,
  [7770] = 6,
    ACTIONS(49), 1,
      aux_sym_go_statement_token1,
    ACTIONS(311), 1,
      aux_sym_id__token1,
    ACTIONS(313), 1,
      aux_sym_id__token2,
    ACTIONS(941), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(60), 1,
      sym_id_,
    STATE(62), 1,
      sym_keyword,
  [7789] = 4,
    ACTIONS(894), 1,
      aux_sym_window_frame_preceding_token2,
    STATE(484), 1,
      sym_window_frame_bound,
    ACTIONS(892), 2,
      aux_sym_constant_token3,
      aux_sym_window_frame_following_token1,
    STATE(417), 2,
      sym_window_frame_following,
      sym_window_frame_preceding,
  [7804] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(886), 1,
      aux_sym_go_statement_token1,
    ACTIONS(943), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(48), 1,
      sym_keyword,
    STATE(83), 1,
      sym_id_,
  [7823] = 4,
    ACTIONS(43), 1,
      aux_sym_real__token1,
    ACTIONS(945), 1,
      aux_sym_constant_token3,
    ACTIONS(947), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(96), 2,
      sym_real_,
      sym_float_,
  [7838] = 4,
    ACTIONS(87), 1,
      aux_sym_real__token1,
    ACTIONS(949), 1,
      aux_sym_constant_token3,
    ACTIONS(951), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(261), 2,
      sym_real_,
      sym_float_,
  [7853] = 5,
    ACTIONS(836), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(953), 1,
      anon_sym_RPAREN,
    STATE(375), 1,
      sym_order_by_clause,
    STATE(485), 1,
      sym_row_or_range_clause,
    ACTIONS(838), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [7870] = 5,
    ACTIONS(836), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(955), 1,
      anon_sym_RPAREN,
    STATE(387), 1,
      sym_order_by_clause,
    STATE(465), 1,
      sym_row_or_range_clause,
    ACTIONS(838), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [7887] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(49), 1,
      aux_sym_go_statement_token1,
    ACTIONS(957), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(48), 1,
      sym_keyword,
    STATE(468), 1,
      sym_id_,
  [7906] = 5,
    ACTIONS(894), 1,
      aux_sym_window_frame_preceding_token2,
    ACTIONS(961), 1,
      aux_sym_window_frame_extent_token1,
    STATE(478), 1,
      sym_window_frame_extent,
    STATE(479), 1,
      sym_window_frame_preceding,
    ACTIONS(959), 2,
      aux_sym_constant_token3,
      aux_sym_window_frame_following_token1,
  [7923] = 5,
    ACTIONS(722), 1,
      aux_sym_go_statement_token1,
    ACTIONS(724), 1,
      aux_sym_id__token1,
    ACTIONS(726), 1,
      aux_sym_id__token2,
    STATE(269), 1,
      sym_keyword,
    STATE(277), 1,
      sym_id_,
  [7939] = 5,
    ACTIONS(722), 1,
      aux_sym_go_statement_token1,
    ACTIONS(724), 1,
      aux_sym_id__token1,
    ACTIONS(726), 1,
      aux_sym_id__token2,
    STATE(241), 1,
      sym_id_,
    STATE(269), 1,
      sym_keyword,
  [7955] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(886), 1,
      aux_sym_go_statement_token1,
    STATE(48), 1,
      sym_keyword,
    STATE(119), 1,
      sym_id_,
  [7971] = 5,
    ACTIONS(722), 1,
      aux_sym_go_statement_token1,
    ACTIONS(724), 1,
      aux_sym_id__token1,
    ACTIONS(726), 1,
      aux_sym_id__token2,
    STATE(264), 1,
      sym_id_,
    STATE(269), 1,
      sym_keyword,
  [7987] = 5,
    ACTIONS(49), 1,
      aux_sym_go_statement_token1,
    ACTIONS(311), 1,
      aux_sym_id__token1,
    ACTIONS(313), 1,
      aux_sym_id__token2,
    STATE(49), 1,
      sym_id_,
    STATE(62), 1,
      sym_keyword,
  [8003] = 5,
    ACTIONS(49), 1,
      aux_sym_go_statement_token1,
    ACTIONS(311), 1,
      aux_sym_id__token1,
    ACTIONS(313), 1,
      aux_sym_id__token2,
    STATE(62), 1,
      sym_keyword,
    STATE(64), 1,
      sym_id_,
  [8019] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(49), 1,
      aux_sym_go_statement_token1,
    STATE(48), 1,
      sym_keyword,
    STATE(415), 1,
      sym_id_,
  [8035] = 5,
    ACTIONS(151), 1,
      aux_sym_id__token1,
    ACTIONS(153), 1,
      aux_sym_id__token2,
    ACTIONS(878), 1,
      aux_sym_go_statement_token1,
    STATE(109), 1,
      sym_keyword,
    STATE(133), 1,
      sym_id_,
  [8051] = 3,
    ACTIONS(963), 1,
      anon_sym_COMMA,
    STATE(366), 1,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(965), 3,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8063] = 5,
    ACTIONS(722), 1,
      aux_sym_go_statement_token1,
    ACTIONS(724), 1,
      aux_sym_id__token1,
    ACTIONS(726), 1,
      aux_sym_id__token2,
    STATE(260), 1,
      sym_id_,
    STATE(269), 1,
      sym_keyword,
  [8079] = 5,
    ACTIONS(17), 1,
      aux_sym_go_statement_token1,
    ACTIONS(45), 1,
      aux_sym_id__token1,
    ACTIONS(47), 1,
      aux_sym_id__token2,
    STATE(35), 1,
      sym_id_,
    STATE(58), 1,
      sym_keyword,
  [8095] = 1,
    ACTIONS(903), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8103] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(886), 1,
      aux_sym_go_statement_token1,
    STATE(48), 1,
      sym_keyword,
    STATE(94), 1,
      sym_id_,
  [8119] = 5,
    ACTIONS(49), 1,
      aux_sym_go_statement_token1,
    ACTIONS(311), 1,
      aux_sym_id__token1,
    ACTIONS(313), 1,
      aux_sym_id__token2,
    STATE(59), 1,
      sym_id_,
    STATE(62), 1,
      sym_keyword,
  [8135] = 5,
    ACTIONS(151), 1,
      aux_sym_id__token1,
    ACTIONS(153), 1,
      aux_sym_id__token2,
    ACTIONS(878), 1,
      aux_sym_go_statement_token1,
    STATE(109), 1,
      sym_keyword,
    STATE(129), 1,
      sym_id_,
  [8151] = 5,
    ACTIONS(49), 1,
      aux_sym_go_statement_token1,
    ACTIONS(311), 1,
      aux_sym_id__token1,
    ACTIONS(313), 1,
      aux_sym_id__token2,
    STATE(52), 1,
      sym_id_,
    STATE(62), 1,
      sym_keyword,
  [8167] = 5,
    ACTIONS(151), 1,
      aux_sym_id__token1,
    ACTIONS(153), 1,
      aux_sym_id__token2,
    ACTIONS(878), 1,
      aux_sym_go_statement_token1,
    STATE(109), 1,
      sym_keyword,
    STATE(143), 1,
      sym_id_,
  [8183] = 5,
    ACTIONS(722), 1,
      aux_sym_go_statement_token1,
    ACTIONS(724), 1,
      aux_sym_id__token1,
    ACTIONS(726), 1,
      aux_sym_id__token2,
    STATE(248), 1,
      sym_id_,
    STATE(269), 1,
      sym_keyword,
  [8199] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(886), 1,
      aux_sym_go_statement_token1,
    STATE(48), 1,
      sym_keyword,
    STATE(97), 1,
      sym_id_,
  [8215] = 5,
    ACTIONS(151), 1,
      aux_sym_id__token1,
    ACTIONS(153), 1,
      aux_sym_id__token2,
    ACTIONS(878), 1,
      aux_sym_go_statement_token1,
    STATE(109), 1,
      sym_keyword,
    STATE(140), 1,
      sym_id_,
  [8231] = 5,
    ACTIONS(49), 1,
      aux_sym_go_statement_token1,
    ACTIONS(311), 1,
      aux_sym_id__token1,
    ACTIONS(313), 1,
      aux_sym_id__token2,
    STATE(62), 1,
      sym_keyword,
    STATE(69), 1,
      sym_id_,
  [8247] = 5,
    ACTIONS(49), 1,
      aux_sym_go_statement_token1,
    ACTIONS(311), 1,
      aux_sym_id__token1,
    ACTIONS(313), 1,
      aux_sym_id__token2,
    STATE(62), 1,
      sym_keyword,
    STATE(66), 1,
      sym_id_,
  [8263] = 5,
    ACTIONS(722), 1,
      aux_sym_go_statement_token1,
    ACTIONS(724), 1,
      aux_sym_id__token1,
    ACTIONS(726), 1,
      aux_sym_id__token2,
    STATE(237), 1,
      sym_id_,
    STATE(269), 1,
      sym_keyword,
  [8279] = 5,
    ACTIONS(151), 1,
      aux_sym_id__token1,
    ACTIONS(153), 1,
      aux_sym_id__token2,
    ACTIONS(878), 1,
      aux_sym_go_statement_token1,
    STATE(109), 1,
      sym_keyword,
    STATE(137), 1,
      sym_id_,
  [8295] = 3,
    ACTIONS(967), 1,
      anon_sym_COMMA,
    STATE(360), 1,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(970), 3,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8307] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(886), 1,
      aux_sym_go_statement_token1,
    STATE(48), 1,
      sym_keyword,
    STATE(98), 1,
      sym_id_,
  [8323] = 5,
    ACTIONS(151), 1,
      aux_sym_id__token1,
    ACTIONS(153), 1,
      aux_sym_id__token2,
    ACTIONS(878), 1,
      aux_sym_go_statement_token1,
    STATE(109), 1,
      sym_keyword,
    STATE(131), 1,
      sym_id_,
  [8339] = 5,
    ACTIONS(151), 1,
      aux_sym_id__token1,
    ACTIONS(153), 1,
      aux_sym_id__token2,
    ACTIONS(878), 1,
      aux_sym_go_statement_token1,
    STATE(109), 1,
      sym_keyword,
    STATE(134), 1,
      sym_id_,
  [8355] = 5,
    ACTIONS(49), 1,
      aux_sym_go_statement_token1,
    ACTIONS(311), 1,
      aux_sym_id__token1,
    ACTIONS(313), 1,
      aux_sym_id__token2,
    STATE(62), 1,
      sym_keyword,
    STATE(65), 1,
      sym_id_,
  [8371] = 5,
    ACTIONS(49), 1,
      aux_sym_go_statement_token1,
    ACTIONS(311), 1,
      aux_sym_id__token1,
    ACTIONS(313), 1,
      aux_sym_id__token2,
    STATE(62), 1,
      sym_keyword,
    STATE(67), 1,
      sym_id_,
  [8387] = 3,
    ACTIONS(963), 1,
      anon_sym_COMMA,
    STATE(360), 1,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(972), 3,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8399] = 5,
    ACTIONS(151), 1,
      aux_sym_id__token1,
    ACTIONS(153), 1,
      aux_sym_id__token2,
    ACTIONS(878), 1,
      aux_sym_go_statement_token1,
    STATE(109), 1,
      sym_keyword,
    STATE(142), 1,
      sym_id_,
  [8415] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(886), 1,
      aux_sym_go_statement_token1,
    STATE(48), 1,
      sym_keyword,
    STATE(110), 1,
      sym_id_,
  [8431] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(886), 1,
      aux_sym_go_statement_token1,
    STATE(48), 1,
      sym_keyword,
    STATE(111), 1,
      sym_id_,
  [8447] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(886), 1,
      aux_sym_go_statement_token1,
    STATE(48), 1,
      sym_keyword,
    STATE(128), 1,
      sym_id_,
  [8463] = 5,
    ACTIONS(722), 1,
      aux_sym_go_statement_token1,
    ACTIONS(724), 1,
      aux_sym_id__token1,
    ACTIONS(726), 1,
      aux_sym_id__token2,
    STATE(269), 1,
      sym_keyword,
    STATE(276), 1,
      sym_id_,
  [8479] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(886), 1,
      aux_sym_go_statement_token1,
    STATE(48), 1,
      sym_keyword,
    STATE(126), 1,
      sym_id_,
  [8495] = 5,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(89), 1,
      aux_sym_id__token1,
    ACTIONS(91), 1,
      aux_sym_id__token2,
    STATE(86), 1,
      sym_keyword,
    STATE(309), 1,
      sym_id_,
  [8511] = 1,
    ACTIONS(974), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8518] = 3,
    ACTIONS(976), 1,
      anon_sym_RPAREN,
    STATE(486), 1,
      sym_row_or_range_clause,
    ACTIONS(838), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8529] = 1,
    ACTIONS(978), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8536] = 4,
    ACTIONS(980), 1,
      aux_sym_RESULT_SETS_token1,
    ACTIONS(982), 1,
      sym_RECOMPILE,
    STATE(209), 1,
      sym_execute_option,
    STATE(423), 1,
      sym_RESULT_SETS,
  [8549] = 4,
    ACTIONS(980), 1,
      aux_sym_RESULT_SETS_token1,
    ACTIONS(982), 1,
      sym_RECOMPILE,
    STATE(233), 1,
      sym_execute_option,
    STATE(423), 1,
      sym_RESULT_SETS,
  [8562] = 4,
    ACTIONS(980), 1,
      aux_sym_RESULT_SETS_token1,
    ACTIONS(982), 1,
      sym_RECOMPILE,
    STATE(199), 1,
      sym_execute_option,
    STATE(423), 1,
      sym_RESULT_SETS,
  [8575] = 4,
    ACTIONS(51), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(309), 1,
      sym_string_lit,
    STATE(36), 1,
      sym_LOCAL_ID_,
    STATE(45), 1,
      sym_execute_var_string,
  [8588] = 3,
    ACTIONS(43), 1,
      aux_sym_real__token1,
    ACTIONS(945), 1,
      aux_sym_constant_token3,
    STATE(104), 2,
      sym_real_,
      sym_float_,
  [8599] = 2,
    ACTIONS(984), 2,
      aux_sym_go_statement_token1,
      aux_sym_id__token1,
    ACTIONS(986), 2,
      sym_string_lit,
      aux_sym_id__token2,
  [8608] = 3,
    ACTIONS(988), 1,
      anon_sym_RPAREN,
    STATE(482), 1,
      sym_row_or_range_clause,
    ACTIONS(838), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8619] = 1,
    ACTIONS(867), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [8626] = 3,
    ACTIONS(990), 1,
      aux_sym_constant_token3,
    STATE(432), 1,
      sym_integer,
    ACTIONS(315), 2,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
  [8637] = 4,
    ACTIONS(980), 1,
      aux_sym_RESULT_SETS_token1,
    ACTIONS(982), 1,
      sym_RECOMPILE,
    STATE(181), 1,
      sym_execute_option,
    STATE(423), 1,
      sym_RESULT_SETS,
  [8650] = 3,
    ACTIONS(992), 1,
      anon_sym_RPAREN,
    STATE(466), 1,
      sym_row_or_range_clause,
    ACTIONS(838), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8661] = 4,
    ACTIONS(51), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(309), 1,
      sym_string_lit,
    STATE(36), 1,
      sym_LOCAL_ID_,
    STATE(404), 1,
      sym_execute_var_string,
  [8674] = 1,
    ACTIONS(970), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8681] = 3,
    ACTIONS(703), 1,
      ts_builtin_sym_end,
    ACTIONS(994), 1,
      aux_sym_go_statement_token1,
    STATE(390), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
  [8692] = 3,
    ACTIONS(87), 1,
      aux_sym_real__token1,
    ACTIONS(949), 1,
      aux_sym_constant_token3,
    STATE(258), 2,
      sym_real_,
      sym_float_,
  [8703] = 3,
    ACTIONS(997), 1,
      anon_sym_RPAREN,
    STATE(441), 1,
      sym_row_or_range_clause,
    ACTIONS(838), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8714] = 1,
    ACTIONS(999), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [8721] = 3,
    ACTIONS(117), 1,
      aux_sym_real__token1,
    ACTIONS(927), 1,
      aux_sym_constant_token3,
    STATE(189), 2,
      sym_real_,
      sym_float_,
  [8732] = 4,
    ACTIONS(51), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(309), 1,
      sym_string_lit,
    STATE(36), 1,
      sym_LOCAL_ID_,
    STATE(406), 1,
      sym_execute_var_string,
  [8745] = 3,
    ACTIONS(1001), 1,
      anon_sym_RPAREN,
    STATE(483), 1,
      sym_row_or_range_clause,
    ACTIONS(838), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8756] = 4,
    ACTIONS(51), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(309), 1,
      sym_string_lit,
    STATE(36), 1,
      sym_LOCAL_ID_,
    STATE(413), 1,
      sym_execute_var_string,
  [8769] = 1,
    ACTIONS(1003), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8776] = 4,
    ACTIONS(980), 1,
      aux_sym_RESULT_SETS_token1,
    ACTIONS(982), 1,
      sym_RECOMPILE,
    STATE(213), 1,
      sym_execute_option,
    STATE(423), 1,
      sym_RESULT_SETS,
  [8789] = 3,
    ACTIONS(1005), 1,
      anon_sym_RPAREN,
    STATE(462), 1,
      sym_row_or_range_clause,
    ACTIONS(838), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8800] = 3,
    ACTIONS(1007), 1,
      ts_builtin_sym_end,
    ACTIONS(1009), 1,
      aux_sym_go_statement_token1,
    STATE(390), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
  [8811] = 1,
    ACTIONS(859), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [8818] = 1,
    ACTIONS(1011), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8825] = 3,
    ACTIONS(1013), 1,
      anon_sym_COMMA,
    ACTIONS(1015), 1,
      anon_sym_RPAREN,
    STATE(410), 1,
      aux_sym_execute_body_repeat2,
  [8835] = 2,
    ACTIONS(1017), 1,
      aux_sym_constant_token3,
    ACTIONS(1019), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [8843] = 3,
    ACTIONS(1013), 1,
      anon_sym_COMMA,
    ACTIONS(1021), 1,
      anon_sym_RPAREN,
    STATE(411), 1,
      aux_sym_execute_body_repeat2,
  [8853] = 3,
    ACTIONS(1023), 1,
      anon_sym_COMMA,
    ACTIONS(1026), 1,
      anon_sym_RPAREN,
    STATE(407), 1,
      aux_sym_execute_body_repeat2,
  [8863] = 2,
    ACTIONS(1028), 1,
      aux_sym_constant_token3,
    ACTIONS(1030), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [8871] = 2,
    ACTIONS(1032), 1,
      aux_sym_constant_token3,
    ACTIONS(1034), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [8879] = 3,
    ACTIONS(1013), 1,
      anon_sym_COMMA,
    ACTIONS(1036), 1,
      anon_sym_RPAREN,
    STATE(407), 1,
      aux_sym_execute_body_repeat2,
  [8889] = 3,
    ACTIONS(1013), 1,
      anon_sym_COMMA,
    ACTIONS(1038), 1,
      anon_sym_RPAREN,
    STATE(407), 1,
      aux_sym_execute_body_repeat2,
  [8899] = 2,
    ACTIONS(1040), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(320), 1,
      sym_execute_statement_arg_named,
  [8906] = 1,
    ACTIONS(1026), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8911] = 1,
    ACTIONS(1042), 2,
      sym_LOGIN,
      sym_USER,
  [8916] = 2,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_udt_method_arguments,
  [8923] = 2,
    ACTIONS(1044), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(200), 1,
      sym_execute_statement_arg_named,
  [8930] = 1,
    ACTIONS(1046), 2,
      anon_sym_RPAREN,
      aux_sym_window_frame_extent_token2,
  [8935] = 1,
    ACTIONS(1048), 2,
      sym_NONE,
      sym_UNDEFINED,
  [8940] = 2,
    ACTIONS(1050), 1,
      aux_sym_over_clause_token1,
    STATE(165), 1,
      sym_over_clause,
  [8947] = 1,
    ACTIONS(852), 2,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
  [8952] = 2,
    ACTIONS(636), 1,
      aux_sym_over_clause_token1,
    STATE(238), 1,
      sym_over_clause,
  [8959] = 2,
    ACTIONS(636), 1,
      aux_sym_over_clause_token1,
    STATE(273), 1,
      sym_over_clause,
  [8966] = 1,
    ACTIONS(1052), 2,
      sym_NONE,
      sym_UNDEFINED,
  [8971] = 1,
    ACTIONS(1054), 2,
      anon_sym_RPAREN,
      aux_sym_window_frame_extent_token2,
  [8976] = 1,
    ACTIONS(1056), 2,
      sym_LOGIN,
      sym_USER,
  [8981] = 1,
    ACTIONS(1058), 2,
      sym_LOGIN,
      sym_USER,
  [8986] = 2,
    ACTIONS(1060), 1,
      aux_sym_over_clause_token1,
    STATE(118), 1,
      sym_over_clause,
  [8993] = 2,
    ACTIONS(1060), 1,
      aux_sym_over_clause_token1,
    STATE(112), 1,
      sym_over_clause,
  [9000] = 2,
    ACTIONS(51), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(39), 1,
      sym_LOCAL_ID_,
  [9007] = 2,
    ACTIONS(1050), 1,
      aux_sym_over_clause_token1,
    STATE(216), 1,
      sym_over_clause,
  [9014] = 2,
    ACTIONS(1062), 1,
      aux_sym_window_frame_following_token2,
    ACTIONS(1064), 1,
      aux_sym_window_frame_preceding_token1,
  [9021] = 1,
    ACTIONS(848), 2,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
  [9026] = 1,
    ACTIONS(1066), 2,
      anon_sym_RPAREN,
      aux_sym_window_frame_extent_token2,
  [9031] = 1,
    ACTIONS(1068), 1,
      anon_sym_RPAREN,
  [9035] = 1,
    ACTIONS(1070), 1,
      aux_sym_binary_token2,
  [9039] = 1,
    ACTIONS(1072), 1,
      anon_sym_RPAREN,
  [9043] = 1,
    ACTIONS(1074), 1,
      aux_sym_constant_token3,
  [9047] = 1,
    ACTIONS(1076), 1,
      aux_sym_RESULT_SETS_token2,
  [9051] = 1,
    ACTIONS(1078), 1,
      aux_sym_real__token2,
  [9055] = 1,
    ACTIONS(1080), 1,
      aux_sym_constant_token3,
  [9059] = 1,
    ACTIONS(1082), 1,
      anon_sym_RPAREN,
  [9063] = 1,
    ACTIONS(1084), 1,
      anon_sym_RPAREN,
  [9067] = 1,
    ACTIONS(1086), 1,
      anon_sym_RPAREN,
  [9071] = 1,
    ACTIONS(1088), 1,
      anon_sym_RPAREN,
  [9075] = 1,
    ACTIONS(1090), 1,
      anon_sym_RPAREN,
  [9079] = 1,
    ACTIONS(1092), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [9083] = 1,
    ACTIONS(810), 1,
      anon_sym_EQ,
  [9087] = 1,
    ACTIONS(1094), 1,
      aux_sym_constant_token3,
  [9091] = 1,
    ACTIONS(1096), 1,
      anon_sym_RPAREN,
  [9095] = 1,
    ACTIONS(1098), 1,
      aux_sym_binary_token2,
  [9099] = 1,
    ACTIONS(1100), 1,
      aux_sym_real__token2,
  [9103] = 1,
    ACTIONS(1102), 1,
      anon_sym_LPAREN,
  [9107] = 1,
    ACTIONS(1104), 1,
      aux_sym_constant_token3,
  [9111] = 1,
    ACTIONS(1106), 1,
      anon_sym_RPAREN,
  [9115] = 1,
    ACTIONS(1108), 1,
      anon_sym_RPAREN,
  [9119] = 1,
    ACTIONS(1110), 1,
      anon_sym_RPAREN,
  [9123] = 1,
    ACTIONS(1112), 1,
      anon_sym_EQ,
  [9127] = 1,
    ACTIONS(1114), 1,
      sym_string_lit,
  [9131] = 1,
    ACTIONS(1116), 1,
      aux_sym_execute_body_token1,
  [9135] = 1,
    ACTIONS(1118), 1,
      anon_sym_EQ,
  [9139] = 1,
    ACTIONS(1005), 1,
      anon_sym_RPAREN,
  [9143] = 1,
    ACTIONS(1120), 1,
      anon_sym_RPAREN,
  [9147] = 1,
    ACTIONS(1122), 1,
      aux_sym_over_clause_token3,
  [9151] = 1,
    ACTIONS(1124), 1,
      aux_sym_over_clause_token3,
  [9155] = 1,
    ACTIONS(992), 1,
      anon_sym_RPAREN,
  [9159] = 1,
    ACTIONS(1126), 1,
      anon_sym_RPAREN,
  [9163] = 1,
    ACTIONS(1001), 1,
      anon_sym_RPAREN,
  [9167] = 1,
    ACTIONS(1128), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [9171] = 1,
    ACTIONS(1130), 1,
      sym_string_lit,
  [9175] = 1,
    ACTIONS(1064), 1,
      aux_sym_window_frame_preceding_token1,
  [9179] = 1,
    ACTIONS(1132), 1,
      aux_sym_binary_token2,
  [9183] = 1,
    ACTIONS(677), 1,
      aux_sym_real__token2,
  [9187] = 1,
    ACTIONS(1134), 1,
      aux_sym_constant_token3,
  [9191] = 1,
    ACTIONS(1136), 1,
      anon_sym_RPAREN,
  [9195] = 1,
    ACTIONS(1138), 1,
      anon_sym_RPAREN,
  [9199] = 1,
    ACTIONS(1140), 1,
      anon_sym_RPAREN,
  [9203] = 1,
    ACTIONS(1064), 1,
      aux_sym_window_frame_preceding_token3,
  [9207] = 1,
    ACTIONS(1142), 1,
      anon_sym_RPAREN,
  [9211] = 1,
    ACTIONS(1144), 1,
      anon_sym_RPAREN,
  [9215] = 1,
    ACTIONS(519), 1,
      anon_sym_EQ,
  [9219] = 1,
    ACTIONS(988), 1,
      anon_sym_RPAREN,
  [9223] = 1,
    ACTIONS(1146), 1,
      anon_sym_RPAREN,
  [9227] = 1,
    ACTIONS(1148), 1,
      anon_sym_RPAREN,
  [9231] = 1,
    ACTIONS(1150), 1,
      aux_sym_window_frame_extent_token2,
  [9235] = 1,
    ACTIONS(976), 1,
      anon_sym_RPAREN,
  [9239] = 1,
    ACTIONS(1152), 1,
      anon_sym_RPAREN,
  [9243] = 1,
    ACTIONS(1154), 1,
      aux_sym_binary_token1,
  [9247] = 1,
    ACTIONS(1156), 1,
      aux_sym_binary_token1,
  [9251] = 1,
    ACTIONS(1158), 1,
      anon_sym_LPAREN,
  [9255] = 1,
    ACTIONS(1160), 1,
      anon_sym_LPAREN,
  [9259] = 1,
    ACTIONS(1162), 1,
      anon_sym_RPAREN,
  [9263] = 1,
    ACTIONS(1164), 1,
      anon_sym_RPAREN,
  [9267] = 1,
    ACTIONS(1166), 1,
      anon_sym_LPAREN,
  [9271] = 1,
    ACTIONS(1168), 1,
      anon_sym_LPAREN,
  [9275] = 1,
    ACTIONS(1170), 1,
      aux_sym_binary_token1,
  [9279] = 1,
    ACTIONS(1172), 1,
      anon_sym_LPAREN,
  [9283] = 1,
    ACTIONS(1174), 1,
      anon_sym_LPAREN,
  [9287] = 1,
    ACTIONS(997), 1,
      anon_sym_RPAREN,
  [9291] = 1,
    ACTIONS(1176), 1,
      anon_sym_RPAREN,
  [9295] = 1,
    ACTIONS(1178), 1,
      anon_sym_RPAREN,
  [9299] = 1,
    ACTIONS(1180), 1,
      anon_sym_LPAREN,
  [9303] = 1,
    ACTIONS(1182), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [9307] = 1,
    ACTIONS(1184), 1,
      anon_sym_LPAREN,
  [9311] = 1,
    ACTIONS(1186), 1,
      anon_sym_LPAREN,
  [9315] = 1,
    ACTIONS(1188), 1,
      anon_sym_LPAREN,
  [9319] = 1,
    ACTIONS(1190), 1,
      anon_sym_LPAREN,
  [9323] = 1,
    ACTIONS(1192), 1,
      anon_sym_RPAREN,
  [9327] = 1,
    ACTIONS(1194), 1,
      aux_sym_over_clause_token3,
  [9331] = 1,
    ACTIONS(1196), 1,
      anon_sym_LPAREN,
  [9335] = 1,
    ACTIONS(1198), 1,
      anon_sym_LPAREN,
  [9339] = 1,
    ACTIONS(1200), 1,
      anon_sym_LPAREN,
  [9343] = 1,
    ACTIONS(1202), 1,
      anon_sym_LPAREN,
  [9347] = 1,
    ACTIONS(1204), 1,
      ts_builtin_sym_end,
  [9351] = 1,
    ACTIONS(1206), 1,
      aux_sym_over_clause_token3,
  [9355] = 1,
    ACTIONS(1208), 1,
      anon_sym_LPAREN,
  [9359] = 1,
    ACTIONS(1210), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 104,
  [SMALL_STATE(4)] = 205,
  [SMALL_STATE(5)] = 301,
  [SMALL_STATE(6)] = 397,
  [SMALL_STATE(7)] = 493,
  [SMALL_STATE(8)] = 586,
  [SMALL_STATE(9)] = 679,
  [SMALL_STATE(10)] = 772,
  [SMALL_STATE(11)] = 865,
  [SMALL_STATE(12)] = 958,
  [SMALL_STATE(13)] = 1051,
  [SMALL_STATE(14)] = 1140,
  [SMALL_STATE(15)] = 1229,
  [SMALL_STATE(16)] = 1318,
  [SMALL_STATE(17)] = 1407,
  [SMALL_STATE(18)] = 1496,
  [SMALL_STATE(19)] = 1582,
  [SMALL_STATE(20)] = 1668,
  [SMALL_STATE(21)] = 1754,
  [SMALL_STATE(22)] = 1840,
  [SMALL_STATE(23)] = 1926,
  [SMALL_STATE(24)] = 2012,
  [SMALL_STATE(25)] = 2098,
  [SMALL_STATE(26)] = 2129,
  [SMALL_STATE(27)] = 2199,
  [SMALL_STATE(28)] = 2269,
  [SMALL_STATE(29)] = 2321,
  [SMALL_STATE(30)] = 2373,
  [SMALL_STATE(31)] = 2406,
  [SMALL_STATE(32)] = 2432,
  [SMALL_STATE(33)] = 2486,
  [SMALL_STATE(34)] = 2537,
  [SMALL_STATE(35)] = 2561,
  [SMALL_STATE(36)] = 2603,
  [SMALL_STATE(37)] = 2628,
  [SMALL_STATE(38)] = 2673,
  [SMALL_STATE(39)] = 2718,
  [SMALL_STATE(40)] = 2743,
  [SMALL_STATE(41)] = 2765,
  [SMALL_STATE(42)] = 2791,
  [SMALL_STATE(43)] = 2833,
  [SMALL_STATE(44)] = 2879,
  [SMALL_STATE(45)] = 2925,
  [SMALL_STATE(46)] = 2947,
  [SMALL_STATE(47)] = 2983,
  [SMALL_STATE(48)] = 3022,
  [SMALL_STATE(49)] = 3043,
  [SMALL_STATE(50)] = 3063,
  [SMALL_STATE(51)] = 3083,
  [SMALL_STATE(52)] = 3103,
  [SMALL_STATE(53)] = 3123,
  [SMALL_STATE(54)] = 3145,
  [SMALL_STATE(55)] = 3189,
  [SMALL_STATE(56)] = 3217,
  [SMALL_STATE(57)] = 3241,
  [SMALL_STATE(58)] = 3265,
  [SMALL_STATE(59)] = 3285,
  [SMALL_STATE(60)] = 3305,
  [SMALL_STATE(61)] = 3327,
  [SMALL_STATE(62)] = 3347,
  [SMALL_STATE(63)] = 3367,
  [SMALL_STATE(64)] = 3409,
  [SMALL_STATE(65)] = 3429,
  [SMALL_STATE(66)] = 3449,
  [SMALL_STATE(67)] = 3469,
  [SMALL_STATE(68)] = 3489,
  [SMALL_STATE(69)] = 3511,
  [SMALL_STATE(70)] = 3531,
  [SMALL_STATE(71)] = 3553,
  [SMALL_STATE(72)] = 3575,
  [SMALL_STATE(73)] = 3597,
  [SMALL_STATE(74)] = 3622,
  [SMALL_STATE(75)] = 3643,
  [SMALL_STATE(76)] = 3664,
  [SMALL_STATE(77)] = 3681,
  [SMALL_STATE(78)] = 3700,
  [SMALL_STATE(79)] = 3721,
  [SMALL_STATE(80)] = 3742,
  [SMALL_STATE(81)] = 3779,
  [SMALL_STATE(82)] = 3800,
  [SMALL_STATE(83)] = 3837,
  [SMALL_STATE(84)] = 3858,
  [SMALL_STATE(85)] = 3879,
  [SMALL_STATE(86)] = 3900,
  [SMALL_STATE(87)] = 3916,
  [SMALL_STATE(88)] = 3934,
  [SMALL_STATE(89)] = 3952,
  [SMALL_STATE(90)] = 3990,
  [SMALL_STATE(91)] = 4010,
  [SMALL_STATE(92)] = 4030,
  [SMALL_STATE(93)] = 4048,
  [SMALL_STATE(94)] = 4066,
  [SMALL_STATE(95)] = 4084,
  [SMALL_STATE(96)] = 4104,
  [SMALL_STATE(97)] = 4122,
  [SMALL_STATE(98)] = 4140,
  [SMALL_STATE(99)] = 4158,
  [SMALL_STATE(100)] = 4174,
  [SMALL_STATE(101)] = 4194,
  [SMALL_STATE(102)] = 4212,
  [SMALL_STATE(103)] = 4230,
  [SMALL_STATE(104)] = 4248,
  [SMALL_STATE(105)] = 4266,
  [SMALL_STATE(106)] = 4284,
  [SMALL_STATE(107)] = 4304,
  [SMALL_STATE(108)] = 4322,
  [SMALL_STATE(109)] = 4340,
  [SMALL_STATE(110)] = 4358,
  [SMALL_STATE(111)] = 4376,
  [SMALL_STATE(112)] = 4394,
  [SMALL_STATE(113)] = 4412,
  [SMALL_STATE(114)] = 4430,
  [SMALL_STATE(115)] = 4448,
  [SMALL_STATE(116)] = 4466,
  [SMALL_STATE(117)] = 4486,
  [SMALL_STATE(118)] = 4522,
  [SMALL_STATE(119)] = 4540,
  [SMALL_STATE(120)] = 4558,
  [SMALL_STATE(121)] = 4578,
  [SMALL_STATE(122)] = 4596,
  [SMALL_STATE(123)] = 4614,
  [SMALL_STATE(124)] = 4632,
  [SMALL_STATE(125)] = 4650,
  [SMALL_STATE(126)] = 4668,
  [SMALL_STATE(127)] = 4686,
  [SMALL_STATE(128)] = 4704,
  [SMALL_STATE(129)] = 4722,
  [SMALL_STATE(130)] = 4739,
  [SMALL_STATE(131)] = 4760,
  [SMALL_STATE(132)] = 4777,
  [SMALL_STATE(133)] = 4796,
  [SMALL_STATE(134)] = 4813,
  [SMALL_STATE(135)] = 4830,
  [SMALL_STATE(136)] = 4847,
  [SMALL_STATE(137)] = 4864,
  [SMALL_STATE(138)] = 4881,
  [SMALL_STATE(139)] = 4898,
  [SMALL_STATE(140)] = 4915,
  [SMALL_STATE(141)] = 4932,
  [SMALL_STATE(142)] = 4953,
  [SMALL_STATE(143)] = 4970,
  [SMALL_STATE(144)] = 4987,
  [SMALL_STATE(145)] = 5003,
  [SMALL_STATE(146)] = 5021,
  [SMALL_STATE(147)] = 5041,
  [SMALL_STATE(148)] = 5061,
  [SMALL_STATE(149)] = 5081,
  [SMALL_STATE(150)] = 5101,
  [SMALL_STATE(151)] = 5119,
  [SMALL_STATE(152)] = 5139,
  [SMALL_STATE(153)] = 5159,
  [SMALL_STATE(154)] = 5181,
  [SMALL_STATE(155)] = 5201,
  [SMALL_STATE(156)] = 5221,
  [SMALL_STATE(157)] = 5241,
  [SMALL_STATE(158)] = 5259,
  [SMALL_STATE(159)] = 5277,
  [SMALL_STATE(160)] = 5293,
  [SMALL_STATE(161)] = 5315,
  [SMALL_STATE(162)] = 5333,
  [SMALL_STATE(163)] = 5351,
  [SMALL_STATE(164)] = 5369,
  [SMALL_STATE(165)] = 5384,
  [SMALL_STATE(166)] = 5399,
  [SMALL_STATE(167)] = 5414,
  [SMALL_STATE(168)] = 5429,
  [SMALL_STATE(169)] = 5444,
  [SMALL_STATE(170)] = 5459,
  [SMALL_STATE(171)] = 5474,
  [SMALL_STATE(172)] = 5489,
  [SMALL_STATE(173)] = 5504,
  [SMALL_STATE(174)] = 5519,
  [SMALL_STATE(175)] = 5534,
  [SMALL_STATE(176)] = 5549,
  [SMALL_STATE(177)] = 5564,
  [SMALL_STATE(178)] = 5579,
  [SMALL_STATE(179)] = 5594,
  [SMALL_STATE(180)] = 5613,
  [SMALL_STATE(181)] = 5628,
  [SMALL_STATE(182)] = 5647,
  [SMALL_STATE(183)] = 5662,
  [SMALL_STATE(184)] = 5677,
  [SMALL_STATE(185)] = 5692,
  [SMALL_STATE(186)] = 5707,
  [SMALL_STATE(187)] = 5722,
  [SMALL_STATE(188)] = 5737,
  [SMALL_STATE(189)] = 5752,
  [SMALL_STATE(190)] = 5767,
  [SMALL_STATE(191)] = 5782,
  [SMALL_STATE(192)] = 5797,
  [SMALL_STATE(193)] = 5812,
  [SMALL_STATE(194)] = 5827,
  [SMALL_STATE(195)] = 5842,
  [SMALL_STATE(196)] = 5857,
  [SMALL_STATE(197)] = 5872,
  [SMALL_STATE(198)] = 5887,
  [SMALL_STATE(199)] = 5902,
  [SMALL_STATE(200)] = 5921,
  [SMALL_STATE(201)] = 5936,
  [SMALL_STATE(202)] = 5955,
  [SMALL_STATE(203)] = 5970,
  [SMALL_STATE(204)] = 5985,
  [SMALL_STATE(205)] = 6002,
  [SMALL_STATE(206)] = 6019,
  [SMALL_STATE(207)] = 6034,
  [SMALL_STATE(208)] = 6053,
  [SMALL_STATE(209)] = 6072,
  [SMALL_STATE(210)] = 6091,
  [SMALL_STATE(211)] = 6106,
  [SMALL_STATE(212)] = 6121,
  [SMALL_STATE(213)] = 6136,
  [SMALL_STATE(214)] = 6155,
  [SMALL_STATE(215)] = 6174,
  [SMALL_STATE(216)] = 6189,
  [SMALL_STATE(217)] = 6204,
  [SMALL_STATE(218)] = 6219,
  [SMALL_STATE(219)] = 6235,
  [SMALL_STATE(220)] = 6249,
  [SMALL_STATE(221)] = 6263,
  [SMALL_STATE(222)] = 6277,
  [SMALL_STATE(223)] = 6293,
  [SMALL_STATE(224)] = 6311,
  [SMALL_STATE(225)] = 6329,
  [SMALL_STATE(226)] = 6349,
  [SMALL_STATE(227)] = 6367,
  [SMALL_STATE(228)] = 6385,
  [SMALL_STATE(229)] = 6401,
  [SMALL_STATE(230)] = 6417,
  [SMALL_STATE(231)] = 6445,
  [SMALL_STATE(232)] = 6463,
  [SMALL_STATE(233)] = 6477,
  [SMALL_STATE(234)] = 6491,
  [SMALL_STATE(235)] = 6507,
  [SMALL_STATE(236)] = 6523,
  [SMALL_STATE(237)] = 6536,
  [SMALL_STATE(238)] = 6549,
  [SMALL_STATE(239)] = 6560,
  [SMALL_STATE(240)] = 6571,
  [SMALL_STATE(241)] = 6582,
  [SMALL_STATE(242)] = 6595,
  [SMALL_STATE(243)] = 6606,
  [SMALL_STATE(244)] = 6617,
  [SMALL_STATE(245)] = 6628,
  [SMALL_STATE(246)] = 6639,
  [SMALL_STATE(247)] = 6650,
  [SMALL_STATE(248)] = 6661,
  [SMALL_STATE(249)] = 6676,
  [SMALL_STATE(250)] = 6691,
  [SMALL_STATE(251)] = 6702,
  [SMALL_STATE(252)] = 6715,
  [SMALL_STATE(253)] = 6726,
  [SMALL_STATE(254)] = 6739,
  [SMALL_STATE(255)] = 6758,
  [SMALL_STATE(256)] = 6769,
  [SMALL_STATE(257)] = 6780,
  [SMALL_STATE(258)] = 6793,
  [SMALL_STATE(259)] = 6804,
  [SMALL_STATE(260)] = 6817,
  [SMALL_STATE(261)] = 6830,
  [SMALL_STATE(262)] = 6841,
  [SMALL_STATE(263)] = 6854,
  [SMALL_STATE(264)] = 6867,
  [SMALL_STATE(265)] = 6880,
  [SMALL_STATE(266)] = 6893,
  [SMALL_STATE(267)] = 6906,
  [SMALL_STATE(268)] = 6919,
  [SMALL_STATE(269)] = 6932,
  [SMALL_STATE(270)] = 6945,
  [SMALL_STATE(271)] = 6956,
  [SMALL_STATE(272)] = 6967,
  [SMALL_STATE(273)] = 6978,
  [SMALL_STATE(274)] = 6989,
  [SMALL_STATE(275)] = 7002,
  [SMALL_STATE(276)] = 7017,
  [SMALL_STATE(277)] = 7032,
  [SMALL_STATE(278)] = 7045,
  [SMALL_STATE(279)] = 7056,
  [SMALL_STATE(280)] = 7067,
  [SMALL_STATE(281)] = 7087,
  [SMALL_STATE(282)] = 7107,
  [SMALL_STATE(283)] = 7127,
  [SMALL_STATE(284)] = 7139,
  [SMALL_STATE(285)] = 7151,
  [SMALL_STATE(286)] = 7163,
  [SMALL_STATE(287)] = 7175,
  [SMALL_STATE(288)] = 7189,
  [SMALL_STATE(289)] = 7211,
  [SMALL_STATE(290)] = 7227,
  [SMALL_STATE(291)] = 7239,
  [SMALL_STATE(292)] = 7251,
  [SMALL_STATE(293)] = 7263,
  [SMALL_STATE(294)] = 7279,
  [SMALL_STATE(295)] = 7291,
  [SMALL_STATE(296)] = 7305,
  [SMALL_STATE(297)] = 7324,
  [SMALL_STATE(298)] = 7341,
  [SMALL_STATE(299)] = 7360,
  [SMALL_STATE(300)] = 7379,
  [SMALL_STATE(301)] = 7398,
  [SMALL_STATE(302)] = 7413,
  [SMALL_STATE(303)] = 7422,
  [SMALL_STATE(304)] = 7435,
  [SMALL_STATE(305)] = 7444,
  [SMALL_STATE(306)] = 7457,
  [SMALL_STATE(307)] = 7476,
  [SMALL_STATE(308)] = 7495,
  [SMALL_STATE(309)] = 7514,
  [SMALL_STATE(310)] = 7523,
  [SMALL_STATE(311)] = 7542,
  [SMALL_STATE(312)] = 7551,
  [SMALL_STATE(313)] = 7560,
  [SMALL_STATE(314)] = 7569,
  [SMALL_STATE(315)] = 7588,
  [SMALL_STATE(316)] = 7607,
  [SMALL_STATE(317)] = 7616,
  [SMALL_STATE(318)] = 7635,
  [SMALL_STATE(319)] = 7654,
  [SMALL_STATE(320)] = 7673,
  [SMALL_STATE(321)] = 7682,
  [SMALL_STATE(322)] = 7701,
  [SMALL_STATE(323)] = 7716,
  [SMALL_STATE(324)] = 7725,
  [SMALL_STATE(325)] = 7738,
  [SMALL_STATE(326)] = 7751,
  [SMALL_STATE(327)] = 7770,
  [SMALL_STATE(328)] = 7789,
  [SMALL_STATE(329)] = 7804,
  [SMALL_STATE(330)] = 7823,
  [SMALL_STATE(331)] = 7838,
  [SMALL_STATE(332)] = 7853,
  [SMALL_STATE(333)] = 7870,
  [SMALL_STATE(334)] = 7887,
  [SMALL_STATE(335)] = 7906,
  [SMALL_STATE(336)] = 7923,
  [SMALL_STATE(337)] = 7939,
  [SMALL_STATE(338)] = 7955,
  [SMALL_STATE(339)] = 7971,
  [SMALL_STATE(340)] = 7987,
  [SMALL_STATE(341)] = 8003,
  [SMALL_STATE(342)] = 8019,
  [SMALL_STATE(343)] = 8035,
  [SMALL_STATE(344)] = 8051,
  [SMALL_STATE(345)] = 8063,
  [SMALL_STATE(346)] = 8079,
  [SMALL_STATE(347)] = 8095,
  [SMALL_STATE(348)] = 8103,
  [SMALL_STATE(349)] = 8119,
  [SMALL_STATE(350)] = 8135,
  [SMALL_STATE(351)] = 8151,
  [SMALL_STATE(352)] = 8167,
  [SMALL_STATE(353)] = 8183,
  [SMALL_STATE(354)] = 8199,
  [SMALL_STATE(355)] = 8215,
  [SMALL_STATE(356)] = 8231,
  [SMALL_STATE(357)] = 8247,
  [SMALL_STATE(358)] = 8263,
  [SMALL_STATE(359)] = 8279,
  [SMALL_STATE(360)] = 8295,
  [SMALL_STATE(361)] = 8307,
  [SMALL_STATE(362)] = 8323,
  [SMALL_STATE(363)] = 8339,
  [SMALL_STATE(364)] = 8355,
  [SMALL_STATE(365)] = 8371,
  [SMALL_STATE(366)] = 8387,
  [SMALL_STATE(367)] = 8399,
  [SMALL_STATE(368)] = 8415,
  [SMALL_STATE(369)] = 8431,
  [SMALL_STATE(370)] = 8447,
  [SMALL_STATE(371)] = 8463,
  [SMALL_STATE(372)] = 8479,
  [SMALL_STATE(373)] = 8495,
  [SMALL_STATE(374)] = 8511,
  [SMALL_STATE(375)] = 8518,
  [SMALL_STATE(376)] = 8529,
  [SMALL_STATE(377)] = 8536,
  [SMALL_STATE(378)] = 8549,
  [SMALL_STATE(379)] = 8562,
  [SMALL_STATE(380)] = 8575,
  [SMALL_STATE(381)] = 8588,
  [SMALL_STATE(382)] = 8599,
  [SMALL_STATE(383)] = 8608,
  [SMALL_STATE(384)] = 8619,
  [SMALL_STATE(385)] = 8626,
  [SMALL_STATE(386)] = 8637,
  [SMALL_STATE(387)] = 8650,
  [SMALL_STATE(388)] = 8661,
  [SMALL_STATE(389)] = 8674,
  [SMALL_STATE(390)] = 8681,
  [SMALL_STATE(391)] = 8692,
  [SMALL_STATE(392)] = 8703,
  [SMALL_STATE(393)] = 8714,
  [SMALL_STATE(394)] = 8721,
  [SMALL_STATE(395)] = 8732,
  [SMALL_STATE(396)] = 8745,
  [SMALL_STATE(397)] = 8756,
  [SMALL_STATE(398)] = 8769,
  [SMALL_STATE(399)] = 8776,
  [SMALL_STATE(400)] = 8789,
  [SMALL_STATE(401)] = 8800,
  [SMALL_STATE(402)] = 8811,
  [SMALL_STATE(403)] = 8818,
  [SMALL_STATE(404)] = 8825,
  [SMALL_STATE(405)] = 8835,
  [SMALL_STATE(406)] = 8843,
  [SMALL_STATE(407)] = 8853,
  [SMALL_STATE(408)] = 8863,
  [SMALL_STATE(409)] = 8871,
  [SMALL_STATE(410)] = 8879,
  [SMALL_STATE(411)] = 8889,
  [SMALL_STATE(412)] = 8899,
  [SMALL_STATE(413)] = 8906,
  [SMALL_STATE(414)] = 8911,
  [SMALL_STATE(415)] = 8916,
  [SMALL_STATE(416)] = 8923,
  [SMALL_STATE(417)] = 8930,
  [SMALL_STATE(418)] = 8935,
  [SMALL_STATE(419)] = 8940,
  [SMALL_STATE(420)] = 8947,
  [SMALL_STATE(421)] = 8952,
  [SMALL_STATE(422)] = 8959,
  [SMALL_STATE(423)] = 8966,
  [SMALL_STATE(424)] = 8971,
  [SMALL_STATE(425)] = 8976,
  [SMALL_STATE(426)] = 8981,
  [SMALL_STATE(427)] = 8986,
  [SMALL_STATE(428)] = 8993,
  [SMALL_STATE(429)] = 9000,
  [SMALL_STATE(430)] = 9007,
  [SMALL_STATE(431)] = 9014,
  [SMALL_STATE(432)] = 9021,
  [SMALL_STATE(433)] = 9026,
  [SMALL_STATE(434)] = 9031,
  [SMALL_STATE(435)] = 9035,
  [SMALL_STATE(436)] = 9039,
  [SMALL_STATE(437)] = 9043,
  [SMALL_STATE(438)] = 9047,
  [SMALL_STATE(439)] = 9051,
  [SMALL_STATE(440)] = 9055,
  [SMALL_STATE(441)] = 9059,
  [SMALL_STATE(442)] = 9063,
  [SMALL_STATE(443)] = 9067,
  [SMALL_STATE(444)] = 9071,
  [SMALL_STATE(445)] = 9075,
  [SMALL_STATE(446)] = 9079,
  [SMALL_STATE(447)] = 9083,
  [SMALL_STATE(448)] = 9087,
  [SMALL_STATE(449)] = 9091,
  [SMALL_STATE(450)] = 9095,
  [SMALL_STATE(451)] = 9099,
  [SMALL_STATE(452)] = 9103,
  [SMALL_STATE(453)] = 9107,
  [SMALL_STATE(454)] = 9111,
  [SMALL_STATE(455)] = 9115,
  [SMALL_STATE(456)] = 9119,
  [SMALL_STATE(457)] = 9123,
  [SMALL_STATE(458)] = 9127,
  [SMALL_STATE(459)] = 9131,
  [SMALL_STATE(460)] = 9135,
  [SMALL_STATE(461)] = 9139,
  [SMALL_STATE(462)] = 9143,
  [SMALL_STATE(463)] = 9147,
  [SMALL_STATE(464)] = 9151,
  [SMALL_STATE(465)] = 9155,
  [SMALL_STATE(466)] = 9159,
  [SMALL_STATE(467)] = 9163,
  [SMALL_STATE(468)] = 9167,
  [SMALL_STATE(469)] = 9171,
  [SMALL_STATE(470)] = 9175,
  [SMALL_STATE(471)] = 9179,
  [SMALL_STATE(472)] = 9183,
  [SMALL_STATE(473)] = 9187,
  [SMALL_STATE(474)] = 9191,
  [SMALL_STATE(475)] = 9195,
  [SMALL_STATE(476)] = 9199,
  [SMALL_STATE(477)] = 9203,
  [SMALL_STATE(478)] = 9207,
  [SMALL_STATE(479)] = 9211,
  [SMALL_STATE(480)] = 9215,
  [SMALL_STATE(481)] = 9219,
  [SMALL_STATE(482)] = 9223,
  [SMALL_STATE(483)] = 9227,
  [SMALL_STATE(484)] = 9231,
  [SMALL_STATE(485)] = 9235,
  [SMALL_STATE(486)] = 9239,
  [SMALL_STATE(487)] = 9243,
  [SMALL_STATE(488)] = 9247,
  [SMALL_STATE(489)] = 9251,
  [SMALL_STATE(490)] = 9255,
  [SMALL_STATE(491)] = 9259,
  [SMALL_STATE(492)] = 9263,
  [SMALL_STATE(493)] = 9267,
  [SMALL_STATE(494)] = 9271,
  [SMALL_STATE(495)] = 9275,
  [SMALL_STATE(496)] = 9279,
  [SMALL_STATE(497)] = 9283,
  [SMALL_STATE(498)] = 9287,
  [SMALL_STATE(499)] = 9291,
  [SMALL_STATE(500)] = 9295,
  [SMALL_STATE(501)] = 9299,
  [SMALL_STATE(502)] = 9303,
  [SMALL_STATE(503)] = 9307,
  [SMALL_STATE(504)] = 9311,
  [SMALL_STATE(505)] = 9315,
  [SMALL_STATE(506)] = 9319,
  [SMALL_STATE(507)] = 9323,
  [SMALL_STATE(508)] = 9327,
  [SMALL_STATE(509)] = 9331,
  [SMALL_STATE(510)] = 9335,
  [SMALL_STATE(511)] = 9339,
  [SMALL_STATE(512)] = 9343,
  [SMALL_STATE(513)] = 9347,
  [SMALL_STATE(514)] = 9351,
  [SMALL_STATE(515)] = 9355,
  [SMALL_STATE(516)] = 9359,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsql_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_operator, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_operator, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(334),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsql_file, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 3, 0, 10),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 3, 0, 10),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_expression, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_expression, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_LOCAL_ID_, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_LOCAL_ID_, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body_batch, 1, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body_batch, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udt_elem, 3, 0, 13),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_udt_elem, 3, 0, 13),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_var_string, 1, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_var_string, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_batch, 1, 0, 0),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 1, 0, 0), SHIFT(223),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 1, 0, 0), SHIFT(54),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 1, 0, 0), SHIFT(2),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_batch, 1, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_batch, 2, 0, 0),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 2, 0, 0), SHIFT(223),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 2, 0, 0), SHIFT(54),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 2, 0, 0), SHIFT(2),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_batch, 2, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_var_string, 3, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_var_string, 3, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_elem, 1, 0, 3),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_elem, 1, 0, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_var_string, 5, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_var_string, 5, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udt_elem, 4, 0, 13),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_udt_elem, 4, 0, 13),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_batch_repeat1, 2, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_batch_repeat1, 2, 0, 0),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_batch_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_batch_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_, 1, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 16),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 16),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 1, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_database_schema, 1, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 22),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 22),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_schema, 1, 0, 1),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_schema, 1, 0, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_go_statement, 1, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_go_statement, 1, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 18),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 18),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 19),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 19),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 20),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 20),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 4, 0, 15),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_database_schema, 4, 0, 15),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 1, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 1, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 17),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 17),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 7, 0, 28),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 7, 0, 28),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 26),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 26),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 4, 0, 8),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 4, 0, 8),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 4, 0, 9),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_database_schema, 4, 0, 9),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 25),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 25),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 3, 0, 5),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_database_schema, 3, 0, 5),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_schema, 3, 0, 7),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_schema, 3, 0, 7),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 5, 0, 21),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_database_schema, 5, 0, 21),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_column_name, 1, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_column_name, 1, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_alias, 1, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_, 1, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_, 1, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_, 1, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_, 1, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_over_clause, 3, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_over_clause, 3, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_constant, 1, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_constant, 1, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_money_, 2, 0, 6),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_money_, 2, 0, 6),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real_, 4, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real_, 4, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_money_, 3, 0, 6),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_money_, 3, 0, 6),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 3, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranking_windowed_function, 5, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ranking_windowed_function, 5, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_windowed_function, 5, 0, 19),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_windowed_function, 5, 0, 19),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_windowed_function, 5, 0, 18),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_windowed_function, 5, 0, 18),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_over_clause, 8, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_over_clause, 8, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranking_windowed_function, 4, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ranking_windowed_function, 4, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_over_clause, 4, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_over_clause, 4, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_over_clause, 7, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_over_clause, 7, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real_, 3, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real_, 3, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_over_clause, 5, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_over_clause, 5, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_over_clause, 6, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_over_clause, 6, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udt_method_arguments, 4, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_udt_method_arguments, 4, 0, 0),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udt_method_arguments, 3, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_udt_method_arguments, 3, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_statement_arg_repeat1, 2, 0, 0),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_execute_statement_arg_repeat1, 2, 0, 0),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_statement_arg_repeat1, 2, 0, 0), SHIFT_REPEAT(416),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list, 1, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_list, 1, 0, 0),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_body_batch_repeat1, 2, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_execute_body_batch_repeat1, 2, 0, 0),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_body_batch_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_statement_arg, 2, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_statement_arg, 2, 0, 0),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_parameter, 1, 0, 0),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_parameter, 1, 0, 0),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list, 2, 0, 0),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_list, 2, 0, 0),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_list_repeat1, 2, 0, 0),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_select_list_repeat1, 2, 0, 0),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_list_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 4, 0, 0),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 4, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_statement_arg, 1, 0, 0),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_statement_arg, 1, 0, 0),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 3, 0, 0),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 3, 0, 0),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_parameter, 2, 0, 0),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_parameter, 2, 0, 0),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2, 0, 0),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 2, 0, 0),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_statement_arg_unnamed, 1, 0, 4),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_statement_arg_unnamed, 1, 0, 4),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1, 0, 0),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1, 0, 0),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_column_alias, 2, 0, 0),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as_column_alias, 2, 0, 0),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_elem, 3, 0, 12),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_elem, 3, 0, 12),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list_elem, 1, 0, 0),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_list_elem, 1, 0, 0),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list_elem, 3, 0, 0),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_list_elem, 3, 0, 0),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_statement_arg_named, 3, 0, 14),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_statement_arg_named, 3, 0, 14),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 7, 0, 10),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 7, 0, 10),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_alias, 1, 0, 0),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_body_repeat1, 2, 0, 0),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_execute_body_repeat1, 2, 0, 0),
  [644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_body_repeat1, 2, 0, 0), SHIFT_REPEAT(378),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 5, 0, 0),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 5, 0, 0),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 5, 0, 10),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 5, 0, 10),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_elem, 2, 0, 3),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_elem, 2, 0, 3),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_column_alias, 1, 0, 0),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as_column_alias, 1, 0, 0),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 6, 0, 10),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 6, 0, 10),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udt_elem, 5, 0, 13),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_udt_elem, 5, 0, 13),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 7, 0, 0),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 7, 0, 0),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_option, 2, 0, 0),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_option, 2, 0, 0),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_specification, 2, 0, 0),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_specification, 2, 0, 0),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [689] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat2, 1, 0, 0), REDUCE(sym_batch, 2, 0, 0),
  [692] = {.entry = {.count = 3, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat2, 1, 0, 0), REDUCE(sym_batch, 2, 0, 0), SHIFT(223),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_batch, 3, 0, 0),
  [698] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 3, 0, 0), SHIFT(223),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_batch, 3, 0, 0),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat2, 2, 0, 0),
  [705] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat2, 2, 0, 0), SHIFT_REPEAT(223),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat2, 2, 0, 0),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 4, 0, 10),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 4, 0, 10),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 8, 0, 0),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 8, 0, 0),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_option, 1, 0, 0),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_option, 1, 0, 0),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 2, 0, 0),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 2, 0, 0),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_sources, 1, 0, 0),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_sources, 1, 0, 0),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 10, 0, 35),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 10, 0, 35),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 5, 0, 23),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 5, 0, 23),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_table_name, 5, 0, 29),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_table_name, 5, 0, 29),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_clauses, 1, 0, 0),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_clauses, 1, 0, 0),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_another_statement, 1, 0, 0),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_another_statement, 1, 0, 0),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_specification, 4, 0, 0),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_specification, 4, 0, 0),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 1, 0, 30),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_clause, 1, 0, 0),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dml_clause, 1, 0, 0),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement_standalone, 1, 0, 0),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement_standalone, 1, 0, 0),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 9, 0, 31),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 9, 0, 31),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_source, 1, 0, 0),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_source, 1, 0, 0),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_source_item, 1, 0, 0),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_source_item, 1, 0, 0),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_table_name, 7, 0, 34),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_table_name, 7, 0, 34),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1, 0, 0),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 1, 0, 0),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_expression, 1, 0, 0),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_expression, 1, 0, 0),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_statement, 2, 0, 0),
  [814] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_statement, 2, 0, 0),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_table_name, 1, 0, 11),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_table_name, 1, 0, 11),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_table_name, 3, 0, 24),
  [824] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_table_name, 3, 0, 24),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 6, 0, 27),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 6, 0, 27),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_go_statement, 2, 0, 2),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_go_statement, 2, 0, 2),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1, 0, 0),
  [856] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_body_batch_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body_batch, 2, 0, 0),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body_batch, 3, 0, 0),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_clauses, 2, 0, 0),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_clauses, 2, 0, 0),
  [875] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_statement_arg_repeat1, 2, 0, 0), SHIFT_REPEAT(412),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list_, 2, 0, 0),
  [900] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list__repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list__repeat1, 2, 0, 0),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collation_, 2, 0, 36),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list_, 1, 0, 0),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 2, 0, 30),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 3, 0, 0),
  [967] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_order_by_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_order_by_clause_repeat1, 2, 0, 0),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 4, 0, 0),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 3, 0, 37),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 2, 0, 32),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [984] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as, 1, 0, 0),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as, 1, 0, 0),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [994] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat2, 2, 0, 0), SHIFT_REPEAT(385),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body_batch, 4, 0, 0),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 2, 0, 33),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsql_file, 2, 0, 0),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 3, 0, 38),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1023] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_body_repeat2, 2, 0, 0), SHIFT_REPEAT(397),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_body_repeat2, 2, 0, 0),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_frame_bound, 1, 0, 0),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_RESULT_SETS, 2, 0, 0),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_frame_preceding, 2, 0, 0),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AS, 1, 0, 0),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_frame_following, 2, 0, 0),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_all_distinct_expression, 1, 0, 0),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_all_distinct_expression, 2, 0, 0),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row_or_range_clause, 2, 0, 0),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_frame_extent, 1, 0, 0),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_frame_extent, 4, 0, 0),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1204] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_TSQL(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
