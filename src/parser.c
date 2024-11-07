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
#define STATE_COUNT 746
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 193
#define ALIAS_COUNT 0
#define TOKEN_COUNT 110
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 26
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 44

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
  sym_hierachyid_ = 41,
  sym_get_descendant_ = 42,
  sym_get_reparented_value_ = 43,
  sym_getancestor_ = 44,
  sym_is_descendant_of_ = 45,
  sym_getlevel_ = 46,
  sym_getroot_ = 47,
  sym_tostring_ = 48,
  sym_parse_ = 49,
  sym_dollar_partition_ = 50,
  sym_right_ = 51,
  sym_left_ = 52,
  sym_binary_checksum_ = 53,
  sym_checksum_ = 54,
  aux_sym_over__token1 = 55,
  aux_sym_within_group__token1 = 56,
  aux_sym_within_group__token2 = 57,
  sym_percentile_cont_ = 58,
  sym_percentile_disc_ = 59,
  sym_cume_dist_ = 60,
  sym_percent_rank_ = 61,
  aux_sym_ignore_nulls__token1 = 62,
  aux_sym_ignore_nulls__token2 = 63,
  aux_sym_respect_nulls__token1 = 64,
  sym_lag_ = 65,
  sym_lead_ = 66,
  sym_first_value_ = 67,
  sym_last_value_ = 68,
  sym_checksum_agg_ = 69,
  sym_count_ = 70,
  sym_count_big_ = 71,
  sym_avg_ = 72,
  sym_max_ = 73,
  sym_min_ = 74,
  sym_sum_ = 75,
  sym_stdev_ = 76,
  sym_stdevp_ = 77,
  sym_var_ = 78,
  sym_varp_ = 79,
  sym_all_ = 80,
  sym_distinct_ = 81,
  sym_ntile_ = 82,
  sym_rank_ = 83,
  sym_dense_rank_ = 84,
  sym_row_number_ = 85,
  aux_sym_partition_by_clause_token1 = 86,
  aux_sym_partition_by_clause_token2 = 87,
  aux_sym_order_by_clause_token1 = 88,
  aux_sym_collation__token1 = 89,
  sym_asc_ = 90,
  sym_desc_ = 91,
  aux_sym_window_frame_extent_token1 = 92,
  aux_sym_window_frame_extent_token2 = 93,
  aux_sym_window_frame_following_token1 = 94,
  aux_sym_window_frame_following_token2 = 95,
  aux_sym_window_frame_preceding_token1 = 96,
  aux_sym_window_frame_preceding_token2 = 97,
  aux_sym_window_frame_preceding_token3 = 98,
  aux_sym_row_or_range_clause_token1 = 99,
  aux_sym_row_or_range_clause_token2 = 100,
  sym_binary = 101,
  anon_sym_DOLLAR = 102,
  anon_sym_DASH = 103,
  anon_sym_PLUS = 104,
  aux_sym_real__token1 = 105,
  aux_sym_real__token2 = 106,
  aux_sym_id__token1 = 107,
  aux_sym_id__token2 = 108,
  anon_sym_TODO = 109,
  sym_tsql_file = 110,
  sym_batch = 111,
  sym_go_statement = 112,
  sym_execute_body_batch = 113,
  sym_func_proc_name_server_database_schema = 114,
  sym_func_proc_name_database_schema = 115,
  sym_func_proc_name_schema = 116,
  sym_execute_statement_arg = 117,
  sym_execute_statement_arg_named = 118,
  sym_execute_statement_arg_unnamed = 119,
  sym_execute_parameter = 120,
  sym_LOCAL_ID_ = 121,
  sym_constant = 122,
  sym_sql_clauses = 123,
  sym_another_statement = 124,
  sym_execute_statement = 125,
  sym_execute_body = 126,
  sym_execute_option = 127,
  sym_RESULT_SETS = 128,
  sym_AS = 129,
  sym_execute_var_string = 130,
  sym_dml_clause = 131,
  sym_select_statement_standalone = 132,
  sym_select_statement = 133,
  sym_query_expression = 134,
  sym_query_specification = 135,
  sym_select_list = 136,
  sym_select_list_elem = 137,
  sym_assignment_operator = 138,
  sym_udt_elem = 139,
  sym_udt_method_arguments = 140,
  sym_expression_elem = 141,
  sym_as_column_alias = 142,
  sym_column_alias = 143,
  sym_table_sources = 144,
  sym_table_source = 145,
  sym_table_source_item = 146,
  sym_full_table_name = 147,
  sym_full_column_name = 148,
  sym_expression = 149,
  sym_function_call = 150,
  sym_hierarchyid_static_method = 151,
  sym_partition_function = 152,
  sym_scalar_function_name = 153,
  sym_analytic_windowed_function = 154,
  sym_over_ = 155,
  sym_within_group_ = 156,
  sym_lag_lead_args = 157,
  sym_ignore_nulls_ = 158,
  sym_respect_nulls_ = 159,
  sym_aggregate_windowed_function = 160,
  sym_all_distinct_expression = 161,
  sym_ranking_windowed_function = 162,
  sym_over_clause = 163,
  sym_partition_by_clause = 164,
  sym_expression_list_ = 165,
  sym_order_by_clause = 166,
  sym_order_by_expression = 167,
  sym_collation_ = 168,
  sym_window_frame_extent = 169,
  sym_window_frame_bound = 170,
  sym_window_frame_following = 171,
  sym_window_frame_preceding = 172,
  sym_row_or_range_clause = 173,
  sym_primitive_expression = 174,
  sym_primitive_constant = 175,
  sym_money_ = 176,
  sym_real_ = 177,
  sym_float_ = 178,
  sym_decimal_ = 179,
  sym_id_ = 180,
  sym_keyword = 181,
  sym_integer = 182,
  aux_sym_tsql_file_repeat1 = 183,
  aux_sym_tsql_file_repeat2 = 184,
  aux_sym_batch_repeat1 = 185,
  aux_sym_execute_body_batch_repeat1 = 186,
  aux_sym_execute_statement_arg_repeat1 = 187,
  aux_sym_execute_body_repeat1 = 188,
  aux_sym_execute_body_repeat2 = 189,
  aux_sym_select_list_repeat1 = 190,
  aux_sym_expression_list__repeat1 = 191,
  aux_sym_order_by_clause_repeat1 = 192,
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
  [sym_hierachyid_] = "hierachyid_",
  [sym_get_descendant_] = "get_descendant_",
  [sym_get_reparented_value_] = "get_reparented_value_",
  [sym_getancestor_] = "getancestor_",
  [sym_is_descendant_of_] = "is_descendant_of_",
  [sym_getlevel_] = "getlevel_",
  [sym_getroot_] = "getroot_",
  [sym_tostring_] = "tostring_",
  [sym_parse_] = "parse_",
  [sym_dollar_partition_] = "dollar_partition_",
  [sym_right_] = "right_",
  [sym_left_] = "left_",
  [sym_binary_checksum_] = "binary_checksum_",
  [sym_checksum_] = "checksum_",
  [aux_sym_over__token1] = "over__token1",
  [aux_sym_within_group__token1] = "within_group__token1",
  [aux_sym_within_group__token2] = "within_group__token2",
  [sym_percentile_cont_] = "percentile_cont_",
  [sym_percentile_disc_] = "percentile_disc_",
  [sym_cume_dist_] = "cume_dist_",
  [sym_percent_rank_] = "percent_rank_",
  [aux_sym_ignore_nulls__token1] = "ignore_nulls__token1",
  [aux_sym_ignore_nulls__token2] = "ignore_nulls__token2",
  [aux_sym_respect_nulls__token1] = "respect_nulls__token1",
  [sym_lag_] = "lag_",
  [sym_lead_] = "lead_",
  [sym_first_value_] = "first_value_",
  [sym_last_value_] = "last_value_",
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
  [aux_sym_partition_by_clause_token1] = "partition_by_clause_token1",
  [aux_sym_partition_by_clause_token2] = "partition_by_clause_token2",
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
  [sym_binary] = "binary",
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
  [sym_column_alias] = "column_alias",
  [sym_table_sources] = "table_sources",
  [sym_table_source] = "table_source",
  [sym_table_source_item] = "table_source_item",
  [sym_full_table_name] = "full_table_name",
  [sym_full_column_name] = "full_column_name",
  [sym_expression] = "expression",
  [sym_function_call] = "function_call",
  [sym_hierarchyid_static_method] = "hierarchyid_static_method",
  [sym_partition_function] = "partition_function",
  [sym_scalar_function_name] = "scalar_function_name",
  [sym_analytic_windowed_function] = "analytic_windowed_function",
  [sym_over_] = "over_",
  [sym_within_group_] = "within_group_",
  [sym_lag_lead_args] = "lag_lead_args",
  [sym_ignore_nulls_] = "ignore_nulls_",
  [sym_respect_nulls_] = "respect_nulls_",
  [sym_aggregate_windowed_function] = "aggregate_windowed_function",
  [sym_all_distinct_expression] = "all_distinct_expression",
  [sym_ranking_windowed_function] = "ranking_windowed_function",
  [sym_over_clause] = "over_clause",
  [sym_partition_by_clause] = "partition_by_clause",
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
  [sym_hierachyid_] = sym_hierachyid_,
  [sym_get_descendant_] = sym_get_descendant_,
  [sym_get_reparented_value_] = sym_get_reparented_value_,
  [sym_getancestor_] = sym_getancestor_,
  [sym_is_descendant_of_] = sym_is_descendant_of_,
  [sym_getlevel_] = sym_getlevel_,
  [sym_getroot_] = sym_getroot_,
  [sym_tostring_] = sym_tostring_,
  [sym_parse_] = sym_parse_,
  [sym_dollar_partition_] = sym_dollar_partition_,
  [sym_right_] = sym_right_,
  [sym_left_] = sym_left_,
  [sym_binary_checksum_] = sym_binary_checksum_,
  [sym_checksum_] = sym_checksum_,
  [aux_sym_over__token1] = aux_sym_over__token1,
  [aux_sym_within_group__token1] = aux_sym_within_group__token1,
  [aux_sym_within_group__token2] = aux_sym_within_group__token2,
  [sym_percentile_cont_] = sym_percentile_cont_,
  [sym_percentile_disc_] = sym_percentile_disc_,
  [sym_cume_dist_] = sym_cume_dist_,
  [sym_percent_rank_] = sym_percent_rank_,
  [aux_sym_ignore_nulls__token1] = aux_sym_ignore_nulls__token1,
  [aux_sym_ignore_nulls__token2] = aux_sym_ignore_nulls__token2,
  [aux_sym_respect_nulls__token1] = aux_sym_respect_nulls__token1,
  [sym_lag_] = sym_lag_,
  [sym_lead_] = sym_lead_,
  [sym_first_value_] = sym_first_value_,
  [sym_last_value_] = sym_last_value_,
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
  [aux_sym_partition_by_clause_token1] = aux_sym_partition_by_clause_token1,
  [aux_sym_partition_by_clause_token2] = aux_sym_partition_by_clause_token2,
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
  [sym_binary] = sym_binary,
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
  [sym_column_alias] = sym_column_alias,
  [sym_table_sources] = sym_table_sources,
  [sym_table_source] = sym_table_source,
  [sym_table_source_item] = sym_table_source_item,
  [sym_full_table_name] = sym_full_table_name,
  [sym_full_column_name] = sym_full_column_name,
  [sym_expression] = sym_expression,
  [sym_function_call] = sym_function_call,
  [sym_hierarchyid_static_method] = sym_hierarchyid_static_method,
  [sym_partition_function] = sym_partition_function,
  [sym_scalar_function_name] = sym_scalar_function_name,
  [sym_analytic_windowed_function] = sym_analytic_windowed_function,
  [sym_over_] = sym_over_,
  [sym_within_group_] = sym_within_group_,
  [sym_lag_lead_args] = sym_lag_lead_args,
  [sym_ignore_nulls_] = sym_ignore_nulls_,
  [sym_respect_nulls_] = sym_respect_nulls_,
  [sym_aggregate_windowed_function] = sym_aggregate_windowed_function,
  [sym_all_distinct_expression] = sym_all_distinct_expression,
  [sym_ranking_windowed_function] = sym_ranking_windowed_function,
  [sym_over_clause] = sym_over_clause,
  [sym_partition_by_clause] = sym_partition_by_clause,
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
  [sym_hierachyid_] = {
    .visible = true,
    .named = true,
  },
  [sym_get_descendant_] = {
    .visible = true,
    .named = true,
  },
  [sym_get_reparented_value_] = {
    .visible = true,
    .named = true,
  },
  [sym_getancestor_] = {
    .visible = true,
    .named = true,
  },
  [sym_is_descendant_of_] = {
    .visible = true,
    .named = true,
  },
  [sym_getlevel_] = {
    .visible = true,
    .named = true,
  },
  [sym_getroot_] = {
    .visible = true,
    .named = true,
  },
  [sym_tostring_] = {
    .visible = true,
    .named = true,
  },
  [sym_parse_] = {
    .visible = true,
    .named = true,
  },
  [sym_dollar_partition_] = {
    .visible = true,
    .named = true,
  },
  [sym_right_] = {
    .visible = true,
    .named = true,
  },
  [sym_left_] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_checksum_] = {
    .visible = true,
    .named = true,
  },
  [sym_checksum_] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_over__token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_within_group__token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_within_group__token2] = {
    .visible = false,
    .named = false,
  },
  [sym_percentile_cont_] = {
    .visible = true,
    .named = true,
  },
  [sym_percentile_disc_] = {
    .visible = true,
    .named = true,
  },
  [sym_cume_dist_] = {
    .visible = true,
    .named = true,
  },
  [sym_percent_rank_] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_ignore_nulls__token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ignore_nulls__token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_respect_nulls__token1] = {
    .visible = false,
    .named = false,
  },
  [sym_lag_] = {
    .visible = true,
    .named = true,
  },
  [sym_lead_] = {
    .visible = true,
    .named = true,
  },
  [sym_first_value_] = {
    .visible = true,
    .named = true,
  },
  [sym_last_value_] = {
    .visible = true,
    .named = true,
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
  [aux_sym_partition_by_clause_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_partition_by_clause_token2] = {
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
  [sym_binary] = {
    .visible = true,
    .named = true,
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
  [sym_hierarchyid_static_method] = {
    .visible = true,
    .named = true,
  },
  [sym_partition_function] = {
    .visible = true,
    .named = true,
  },
  [sym_scalar_function_name] = {
    .visible = true,
    .named = true,
  },
  [sym_analytic_windowed_function] = {
    .visible = true,
    .named = true,
  },
  [sym_over_] = {
    .visible = true,
    .named = true,
  },
  [sym_within_group_] = {
    .visible = true,
    .named = true,
  },
  [sym_lag_lead_args] = {
    .visible = true,
    .named = true,
  },
  [sym_ignore_nulls_] = {
    .visible = true,
    .named = true,
  },
  [sym_respect_nulls_] = {
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
  [sym_partition_by_clause] = {
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
  field_default = 7,
  field_descending = 8,
  field_dollar = 9,
  field_expressionAs = 10,
  field_func_name = 11,
  field_input = 12,
  field_leftAlias = 13,
  field_leftAssignment = 14,
  field_linkedServer = 15,
  field_name = 16,
  field_non_static_attr = 17,
  field_offset = 18,
  field_order_by = 19,
  field_procedure = 20,
  field_return_status = 21,
  field_schema = 22,
  field_server = 23,
  field_table = 24,
  field_udt_column_name = 25,
  field_value = 26,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_agg_func] = "agg_func",
  [field_ascending] = "ascending",
  [field_cnt] = "cnt",
  [field_collation_name] = "collation_name",
  [field_count] = "count",
  [field_database] = "database",
  [field_default] = "default",
  [field_descending] = "descending",
  [field_dollar] = "dollar",
  [field_expressionAs] = "expressionAs",
  [field_func_name] = "func_name",
  [field_input] = "input",
  [field_leftAlias] = "leftAlias",
  [field_leftAssignment] = "leftAssignment",
  [field_linkedServer] = "linkedServer",
  [field_name] = "name",
  [field_non_static_attr] = "non_static_attr",
  [field_offset] = "offset",
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
  [28] = {.index = 45, .length = 1},
  [29] = {.index = 46, .length = 1},
  [30] = {.index = 47, .length = 1},
  [31] = {.index = 48, .length = 4},
  [32] = {.index = 52, .length = 1},
  [33] = {.index = 53, .length = 3},
  [34] = {.index = 56, .length = 2},
  [35] = {.index = 58, .length = 2},
  [36] = {.index = 60, .length = 2},
  [37] = {.index = 62, .length = 2},
  [38] = {.index = 64, .length = 1},
  [39] = {.index = 65, .length = 1},
  [40] = {.index = 66, .length = 2},
  [41] = {.index = 68, .length = 2},
  [42] = {.index = 70, .length = 4},
  [43] = {.index = 74, .length = 1},
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
    {field_input, 4},
  [46] =
    {field_func_name, 2},
  [47] =
    {field_offset, 3},
  [48] =
    {field_database, 2},
    {field_procedure, 6},
    {field_schema, 4},
    {field_server, 0},
  [52] =
    {field_order_by, 0},
  [53] =
    {field_database, 0},
    {field_schema, 2},
    {field_table, 4},
  [56] =
    {field_default, 5},
    {field_offset, 3},
  [58] =
    {field_ascending, 1},
    {field_order_by, 0},
  [60] =
    {field_descending, 1},
    {field_order_by, 0},
  [62] =
    {field_database, 0},
    {field_func_name, 4},
  [64] =
    {field_linkedServer, 8},
  [65] =
    {field_collation_name, 1},
  [66] =
    {field_ascending, 2},
    {field_order_by, 0},
  [68] =
    {field_descending, 2},
    {field_order_by, 0},
  [70] =
    {field_database, 2},
    {field_schema, 4},
    {field_server, 0},
    {field_table, 6},
  [74] =
    {field_linkedServer, 9},
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
  [8] = 7,
  [9] = 9,
  [10] = 9,
  [11] = 7,
  [12] = 9,
  [13] = 13,
  [14] = 13,
  [15] = 13,
  [16] = 16,
  [17] = 16,
  [18] = 16,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 19,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 23,
  [27] = 27,
  [28] = 28,
  [29] = 24,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 31,
  [34] = 34,
  [35] = 34,
  [36] = 36,
  [37] = 32,
  [38] = 34,
  [39] = 30,
  [40] = 24,
  [41] = 31,
  [42] = 27,
  [43] = 43,
  [44] = 43,
  [45] = 45,
  [46] = 45,
  [47] = 43,
  [48] = 30,
  [49] = 49,
  [50] = 50,
  [51] = 27,
  [52] = 49,
  [53] = 23,
  [54] = 54,
  [55] = 55,
  [56] = 45,
  [57] = 49,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 64,
  [67] = 65,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 74,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 78,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 78,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 72,
  [100] = 100,
  [101] = 72,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 78,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 87,
  [110] = 110,
  [111] = 110,
  [112] = 86,
  [113] = 113,
  [114] = 114,
  [115] = 94,
  [116] = 98,
  [117] = 102,
  [118] = 93,
  [119] = 72,
  [120] = 65,
  [121] = 97,
  [122] = 122,
  [123] = 123,
  [124] = 98,
  [125] = 125,
  [126] = 94,
  [127] = 127,
  [128] = 128,
  [129] = 96,
  [130] = 130,
  [131] = 103,
  [132] = 100,
  [133] = 133,
  [134] = 134,
  [135] = 78,
  [136] = 89,
  [137] = 137,
  [138] = 102,
  [139] = 93,
  [140] = 92,
  [141] = 141,
  [142] = 142,
  [143] = 125,
  [144] = 108,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 87,
  [152] = 152,
  [153] = 153,
  [154] = 86,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 107,
  [163] = 163,
  [164] = 82,
  [165] = 165,
  [166] = 166,
  [167] = 106,
  [168] = 168,
  [169] = 169,
  [170] = 72,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 125,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 92,
  [180] = 96,
  [181] = 97,
  [182] = 182,
  [183] = 82,
  [184] = 89,
  [185] = 106,
  [186] = 103,
  [187] = 88,
  [188] = 107,
  [189] = 108,
  [190] = 90,
  [191] = 100,
  [192] = 192,
  [193] = 113,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 65,
  [200] = 200,
  [201] = 201,
  [202] = 197,
  [203] = 114,
  [204] = 204,
  [205] = 205,
  [206] = 72,
  [207] = 194,
  [208] = 196,
  [209] = 209,
  [210] = 210,
  [211] = 201,
  [212] = 212,
  [213] = 78,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 200,
  [218] = 153,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 123,
  [225] = 78,
  [226] = 122,
  [227] = 72,
  [228] = 155,
  [229] = 229,
  [230] = 173,
  [231] = 145,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 175,
  [237] = 168,
  [238] = 238,
  [239] = 134,
  [240] = 128,
  [241] = 130,
  [242] = 141,
  [243] = 243,
  [244] = 244,
  [245] = 137,
  [246] = 246,
  [247] = 146,
  [248] = 147,
  [249] = 148,
  [250] = 150,
  [251] = 152,
  [252] = 156,
  [253] = 149,
  [254] = 177,
  [255] = 172,
  [256] = 256,
  [257] = 171,
  [258] = 166,
  [259] = 165,
  [260] = 260,
  [261] = 163,
  [262] = 161,
  [263] = 88,
  [264] = 90,
  [265] = 160,
  [266] = 159,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 158,
  [271] = 157,
  [272] = 65,
  [273] = 273,
  [274] = 274,
  [275] = 127,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 113,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 114,
  [298] = 298,
  [299] = 137,
  [300] = 300,
  [301] = 301,
  [302] = 165,
  [303] = 166,
  [304] = 171,
  [305] = 305,
  [306] = 127,
  [307] = 307,
  [308] = 308,
  [309] = 172,
  [310] = 72,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 122,
  [316] = 155,
  [317] = 317,
  [318] = 318,
  [319] = 78,
  [320] = 173,
  [321] = 123,
  [322] = 175,
  [323] = 323,
  [324] = 145,
  [325] = 134,
  [326] = 326,
  [327] = 192,
  [328] = 128,
  [329] = 157,
  [330] = 330,
  [331] = 130,
  [332] = 141,
  [333] = 333,
  [334] = 158,
  [335] = 335,
  [336] = 336,
  [337] = 177,
  [338] = 159,
  [339] = 336,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 168,
  [344] = 146,
  [345] = 147,
  [346] = 148,
  [347] = 153,
  [348] = 149,
  [349] = 160,
  [350] = 336,
  [351] = 150,
  [352] = 152,
  [353] = 161,
  [354] = 156,
  [355] = 163,
  [356] = 198,
  [357] = 357,
  [358] = 201,
  [359] = 359,
  [360] = 194,
  [361] = 196,
  [362] = 197,
  [363] = 205,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 204,
  [369] = 369,
  [370] = 222,
  [371] = 223,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 234,
  [382] = 382,
  [383] = 377,
  [384] = 384,
  [385] = 385,
  [386] = 380,
  [387] = 387,
  [388] = 384,
  [389] = 389,
  [390] = 232,
  [391] = 219,
  [392] = 369,
  [393] = 389,
  [394] = 387,
  [395] = 387,
  [396] = 221,
  [397] = 377,
  [398] = 375,
  [399] = 384,
  [400] = 220,
  [401] = 401,
  [402] = 402,
  [403] = 380,
  [404] = 404,
  [405] = 376,
  [406] = 382,
  [407] = 238,
  [408] = 376,
  [409] = 375,
  [410] = 369,
  [411] = 382,
  [412] = 389,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 413,
  [421] = 421,
  [422] = 422,
  [423] = 419,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 428,
  [430] = 430,
  [431] = 431,
  [432] = 430,
  [433] = 427,
  [434] = 425,
  [435] = 419,
  [436] = 436,
  [437] = 422,
  [438] = 415,
  [439] = 439,
  [440] = 416,
  [441] = 415,
  [442] = 442,
  [443] = 416,
  [444] = 444,
  [445] = 427,
  [446] = 446,
  [447] = 430,
  [448] = 426,
  [449] = 426,
  [450] = 450,
  [451] = 422,
  [452] = 452,
  [453] = 413,
  [454] = 425,
  [455] = 428,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 461,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 283,
  [479] = 461,
  [480] = 469,
  [481] = 462,
  [482] = 460,
  [483] = 483,
  [484] = 460,
  [485] = 200,
  [486] = 486,
  [487] = 487,
  [488] = 462,
  [489] = 489,
  [490] = 469,
  [491] = 291,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 496,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 404,
  [502] = 499,
  [503] = 503,
  [504] = 504,
  [505] = 374,
  [506] = 499,
  [507] = 507,
  [508] = 373,
  [509] = 496,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 512,
  [516] = 514,
  [517] = 517,
  [518] = 518,
  [519] = 512,
  [520] = 520,
  [521] = 521,
  [522] = 518,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 521,
  [527] = 527,
  [528] = 528,
  [529] = 528,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 521,
  [534] = 534,
  [535] = 532,
  [536] = 532,
  [537] = 537,
  [538] = 534,
  [539] = 534,
  [540] = 518,
  [541] = 523,
  [542] = 542,
  [543] = 523,
  [544] = 524,
  [545] = 524,
  [546] = 546,
  [547] = 542,
  [548] = 546,
  [549] = 546,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 531,
  [554] = 542,
  [555] = 514,
  [556] = 556,
  [557] = 557,
  [558] = 365,
  [559] = 559,
  [560] = 560,
  [561] = 367,
  [562] = 531,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 564,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 573,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 584,
  [585] = 576,
  [586] = 586,
  [587] = 587,
  [588] = 588,
  [589] = 589,
  [590] = 590,
  [591] = 591,
  [592] = 577,
  [593] = 593,
  [594] = 594,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 563,
  [600] = 572,
  [601] = 601,
  [602] = 602,
  [603] = 596,
  [604] = 604,
  [605] = 568,
  [606] = 606,
  [607] = 607,
  [608] = 608,
  [609] = 573,
  [610] = 601,
  [611] = 576,
  [612] = 577,
  [613] = 613,
  [614] = 580,
  [615] = 581,
  [616] = 582,
  [617] = 578,
  [618] = 584,
  [619] = 619,
  [620] = 620,
  [621] = 598,
  [622] = 588,
  [623] = 589,
  [624] = 624,
  [625] = 625,
  [626] = 593,
  [627] = 594,
  [628] = 595,
  [629] = 629,
  [630] = 597,
  [631] = 598,
  [632] = 563,
  [633] = 572,
  [634] = 601,
  [635] = 635,
  [636] = 596,
  [637] = 580,
  [638] = 567,
  [639] = 581,
  [640] = 640,
  [641] = 641,
  [642] = 642,
  [643] = 574,
  [644] = 586,
  [645] = 607,
  [646] = 629,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 582,
  [651] = 651,
  [652] = 597,
  [653] = 647,
  [654] = 654,
  [655] = 655,
  [656] = 604,
  [657] = 657,
  [658] = 567,
  [659] = 659,
  [660] = 660,
  [661] = 661,
  [662] = 662,
  [663] = 574,
  [664] = 586,
  [665] = 607,
  [666] = 629,
  [667] = 647,
  [668] = 668,
  [669] = 669,
  [670] = 595,
  [671] = 568,
  [672] = 672,
  [673] = 673,
  [674] = 674,
  [675] = 675,
  [676] = 604,
  [677] = 655,
  [678] = 648,
  [679] = 642,
  [680] = 641,
  [681] = 565,
  [682] = 682,
  [683] = 594,
  [684] = 684,
  [685] = 587,
  [686] = 591,
  [687] = 687,
  [688] = 688,
  [689] = 689,
  [690] = 684,
  [691] = 682,
  [692] = 593,
  [693] = 655,
  [694] = 648,
  [695] = 642,
  [696] = 641,
  [697] = 565,
  [698] = 698,
  [699] = 590,
  [700] = 688,
  [701] = 587,
  [702] = 591,
  [703] = 688,
  [704] = 689,
  [705] = 684,
  [706] = 682,
  [707] = 707,
  [708] = 661,
  [709] = 649,
  [710] = 640,
  [711] = 711,
  [712] = 589,
  [713] = 588,
  [714] = 714,
  [715] = 624,
  [716] = 661,
  [717] = 649,
  [718] = 640,
  [719] = 719,
  [720] = 720,
  [721] = 721,
  [722] = 722,
  [723] = 624,
  [724] = 660,
  [725] = 569,
  [726] = 687,
  [727] = 714,
  [728] = 728,
  [729] = 660,
  [730] = 569,
  [731] = 687,
  [732] = 714,
  [733] = 689,
  [734] = 651,
  [735] = 707,
  [736] = 651,
  [737] = 707,
  [738] = 738,
  [739] = 584,
  [740] = 606,
  [741] = 606,
  [742] = 742,
  [743] = 743,
  [744] = 654,
  [745] = 654,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(384);
      ADVANCE_MAP(
        '$', 542,
        '%', 11,
        '&', 12,
        '\'', 6,
        '(', 411,
        ')', 412,
        '*', 441,
        '+', 546,
        ',', 387,
        '-', 544,
        '.', 390,
        '/', 16,
        '0', 403,
        ':', 10,
        ';', 388,
        '=', 392,
        '@', 368,
        'N', 5,
        'T', 20,
        '[', 367,
        '^', 17,
        'n', 248,
        't', 249,
        '|', 18,
        'A', 190,
        'a', 190,
        'B', 90,
        'b', 90,
        'C', 156,
        'c', 156,
        'D', 91,
        'd', 91,
        'E', 549,
        'e', 549,
        'F', 162,
        'f', 162,
        'G', 108,
        'g', 108,
        'H', 163,
        'h', 163,
        'I', 151,
        'i', 151,
        'L', 31,
        'l', 31,
        'M', 30,
        'm', 30,
        'O', 286,
        'o', 286,
        'P', 32,
        'p', 32,
        'R', 36,
        'r', 36,
        'S', 92,
        's', 92,
        'U', 216,
        'u', 216,
        'V', 35,
        'v', 35,
        'W', 165,
        'w', 165,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(404);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '$', 542,
        '\'', 7,
        ')', 412,
        '*', 440,
        '.', 390,
        '0', 403,
        '=', 392,
        '@', 368,
        'N', 551,
        '[', 367,
        'n', 753,
        'A', 772,
        'a', 772,
        'B', 650,
        'b', 650,
        'C', 648,
        'c', 648,
        'D', 606,
        'd', 606,
        'F', 651,
        'f', 651,
        'G', 701,
        'g', 701,
        'H', 655,
        'h', 655,
        'L', 561,
        'l', 561,
        'M', 562,
        'm', 562,
        'P', 615,
        'p', 615,
        'R', 565,
        'r', 565,
        'S', 737,
        's', 737,
        'V', 566,
        'v', 566,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(404);
      if (lookahead == '#' ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '$', 542,
        '\'', 7,
        '*', 440,
        '.', 390,
        '0', 403,
        '@', 368,
        'N', 551,
        '[', 367,
        'n', 753,
        'A', 672,
        'a', 672,
        'B', 650,
        'b', 650,
        'C', 648,
        'c', 648,
        'D', 605,
        'd', 605,
        'F', 651,
        'f', 651,
        'G', 701,
        'g', 701,
        'H', 655,
        'h', 655,
        'L', 561,
        'l', 561,
        'M', 562,
        'm', 562,
        'P', 615,
        'p', 615,
        'R', 565,
        'r', 565,
        'S', 737,
        's', 737,
        'V', 566,
        'v', 566,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(404);
      if (lookahead == '#' ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '$', 266,
        '.', 389,
        '[', 367,
        'G', 629,
        'g', 629,
        'I', 730,
        'i', 730,
        'T', 706,
        't', 706,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\'', 6,
        '-', 402,
        '@', 368,
        'N', 550,
        '[', 367,
        'n', 761,
        'D', 610,
        'd', 610,
        'G', 701,
        'g', 701,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(405);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(225);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(164);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(192);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(401);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(426);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '\'', 7,
        '(', 411,
        '+', 545,
        '-', 543,
        '.', 390,
        '@', 368,
        'N', 552,
        '[', 367,
        'G', 701,
        'g', 701,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(404);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(389);
      if (lookahead == '[') ADVANCE(367);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(701);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(442);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(436);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(437);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(434);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(432);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(433);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(435);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(438);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(439);
      END_STATE();
    case 19:
      if (lookahead == 'D') ADVANCE(21);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(333);
      END_STATE();
    case 20:
      if (lookahead == 'O') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(297);
      END_STATE();
    case 21:
      if (lookahead == 'O') ADVANCE(786);
      END_STATE();
    case 22:
      if (lookahead == ']') ADVANCE(785);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(64);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(355);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(81);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(63);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(279);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(289);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(357);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(364);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(144);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(270);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(278);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(352);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(76);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(312);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(271);
      END_STATE();
    case 36:
      ADVANCE_MAP(
        'A', 218,
        'a', 218,
        'E', 71,
        'e', 71,
        'I', 145,
        'i', 145,
        'O', 359,
        'o', 359,
      );
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(282);
      END_STATE();
    case 38:
      ADVANCE_MAP(
        'A', 243,
        'a', 243,
        'D', 139,
        'd', 139,
        'L', 110,
        'l', 110,
        'R', 109,
        'r', 109,
      );
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(274);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(334);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(226);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(234);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(361);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(281);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 53:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(256);
      END_STATE();
    case 54:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(256);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 55:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(166);
      END_STATE();
    case 56:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(128);
      END_STATE();
    case 57:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(185);
      END_STATE();
    case 58:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(530);
      END_STATE();
    case 59:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(408);
      END_STATE();
    case 60:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(474);
      END_STATE();
    case 61:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(529);
      END_STATE();
    case 62:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(158);
      END_STATE();
    case 63:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(161);
      END_STATE();
    case 64:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(264);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(179);
      END_STATE();
    case 65:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 66:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(317);
      END_STATE();
    case 67:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 68:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(322);
      END_STATE();
    case 69:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(323);
      END_STATE();
    case 70:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 71:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(255);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(268);
      END_STATE();
    case 72:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(186);
      END_STATE();
    case 73:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 74:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 75:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(532);
      END_STATE();
    case 76:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(485);
      END_STATE();
    case 77:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(533);
      END_STATE();
    case 78:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(418);
      END_STATE();
    case 79:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(443);
      END_STATE();
    case 80:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 81:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(181);
      END_STATE();
    case 82:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 83:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 84:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 85:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 86:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(175);
      END_STATE();
    case 87:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 88:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(358);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(327);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(526);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(208);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(82);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(209);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(417);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(517);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(540);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(480);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(528);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(406);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 106:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(487);
      END_STATE();
    case 107:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(447);
      END_STATE();
    case 108:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(310);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(385);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(267);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 110:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 111:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 140:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(451);
      END_STATE();
    case 141:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(33);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(303);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(58);
      END_STATE();
    case 142:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(177);
      END_STATE();
    case 143:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(497);
      END_STATE();
    case 144:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(483);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(329);
      END_STATE();
    case 145:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(159);
      END_STATE();
    case 146:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(456);
      END_STATE();
    case 147:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(495);
      END_STATE();
    case 148:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(534);
      END_STATE();
    case 149:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(535);
      END_STATE();
    case 150:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(491);
      END_STATE();
    case 151:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(228);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(80);
      END_STATE();
    case 152:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(168);
      END_STATE();
    case 153:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(150);
      END_STATE();
    case 154:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(100);
      END_STATE();
    case 155:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(100);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(519);
      END_STATE();
    case 156:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(93);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(194);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(215);
      END_STATE();
    case 157:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(413);
      END_STATE();
    case 158:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(366);
      END_STATE();
    case 159:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(314);
      END_STATE();
    case 160:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(171);
      END_STATE();
    case 161:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(137);
      END_STATE();
    case 162:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(287);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(196);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 163:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 164:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 165:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 166:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 167:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(259);
      END_STATE();
    case 168:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(219);
      END_STATE();
    case 169:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 170:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 171:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 172:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 173:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(331);
      END_STATE();
    case 174:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 175:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 176:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 177:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(238);
      END_STATE();
    case 178:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 179:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(300);
      END_STATE();
    case 180:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(261);
      END_STATE();
    case 181:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(305);
      END_STATE();
    case 182:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(340);
      END_STATE();
    case 183:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(521);
      END_STATE();
    case 184:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(478);
      END_STATE();
    case 185:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(299);
      END_STATE();
    case 186:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(301);
      END_STATE();
    case 187:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(513);
      END_STATE();
    case 188:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(399);
      END_STATE();
    case 189:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(453);
      END_STATE();
    case 190:
      ADVANCE_MAP(
        'L', 187,
        'l', 187,
        'N', 75,
        'n', 75,
        'S', 420,
        's', 420,
        'T', 424,
        't', 424,
        'V', 143,
        'v', 143,
      );
      END_STATE();
    case 191:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 192:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 193:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 194:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(191);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(235);
      END_STATE();
    case 195:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 196:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 197:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(349);
      END_STATE();
    case 198:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(295);
      END_STATE();
    case 199:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 200:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 201:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(316);
      END_STATE();
    case 202:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(319);
      END_STATE();
    case 203:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 204:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 205:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(350);
      END_STATE();
    case 206:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(351);
      END_STATE();
    case 207:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 208:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(115);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(294);
      END_STATE();
    case 209:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(503);
      END_STATE();
    case 210:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(428);
      END_STATE();
    case 211:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(467);
      END_STATE();
    case 212:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(464);
      END_STATE();
    case 213:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 214:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(269);
      END_STATE();
    case 215:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(95);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 216:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(54);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(123);
      END_STATE();
    case 217:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(501);
      END_STATE();
    case 218:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 219:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(422);
      END_STATE();
    case 220:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(470);
      END_STATE();
    case 221:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(531);
      END_STATE();
    case 222:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(525);
      END_STATE();
    case 223:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(459);
      END_STATE();
    case 224:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 225:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 226:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 227:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 228:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 229:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 230:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(344);
      END_STATE();
    case 231:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 232:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 233:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 234:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 235:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(313);
      END_STATE();
    case 236:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(318);
      END_STATE();
    case 237:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(321);
      END_STATE();
    case 238:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 239:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(332);
      END_STATE();
    case 240:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(325);
      END_STATE();
    case 241:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(326);
      END_STATE();
    case 242:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 243:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 244:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 245:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(336);
      END_STATE();
    case 246:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 247:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 248:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(225);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(164);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(192);
      END_STATE();
    case 249:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(297);
      END_STATE();
    case 250:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(385);
      END_STATE();
    case 251:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(343);
      END_STATE();
    case 252:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 253:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 254:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(363);
      END_STATE();
    case 255:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 256:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(347);
      END_STATE();
    case 257:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(360);
      END_STATE();
    case 258:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(277);
      END_STATE();
    case 259:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 260:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(320);
      END_STATE();
    case 261:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 262:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 263:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(193);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(280);
      END_STATE();
    case 264:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 265:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(471);
      END_STATE();
    case 266:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 267:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 268:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(132);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(201);
      END_STATE();
    case 269:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(178);
      END_STATE();
    case 270:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(304);
      END_STATE();
    case 271:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(509);
      END_STATE();
    case 272:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(468);
      END_STATE();
    case 273:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(423);
      END_STATE();
    case 274:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(365);
      END_STATE();
    case 275:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(527);
      END_STATE();
    case 276:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(523);
      END_STATE();
    case 277:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(449);
      END_STATE();
    case 278:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 279:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 280:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 281:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 282:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(341);
      END_STATE();
    case 283:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 284:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(257);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(284);
      END_STATE();
    case 285:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 286:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(85);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(311);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(122);
      END_STATE();
    case 287:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(309);
      END_STATE();
    case 288:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 289:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 290:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 291:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 292:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(337);
      END_STATE();
    case 293:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(539);
      END_STATE();
    case 294:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(416);
      END_STATE();
    case 295:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(481);
      END_STATE();
    case 296:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(58);
      END_STATE();
    case 297:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(333);
      END_STATE();
    case 298:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(339);
      END_STATE();
    case 299:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(345);
      END_STATE();
    case 300:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(60);
      END_STATE();
    case 301:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(346);
      END_STATE();
    case 302:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(61);
      END_STATE();
    case 303:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(112);
      END_STATE();
    case 304:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(99);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(173);
      END_STATE();
    case 305:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(324);
      END_STATE();
    case 306:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(338);
      END_STATE();
    case 307:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(70);
      END_STATE();
    case 308:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(74);
      END_STATE();
    case 309:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(342);
      END_STATE();
    case 310:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(38);
      END_STATE();
    case 311:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(394);
      END_STATE();
    case 312:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(462);
      END_STATE();
    case 313:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(493);
      END_STATE();
    case 314:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(460);
      END_STATE();
    case 315:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(393);
      END_STATE();
    case 316:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(415);
      END_STATE();
    case 317:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(430);
      END_STATE();
    case 318:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(536);
      END_STATE();
    case 319:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(397);
      END_STATE();
    case 320:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(455);
      END_STATE();
    case 321:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(28);
      END_STATE();
    case 322:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(482);
      END_STATE();
    case 323:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(515);
      END_STATE();
    case 324:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(476);
      END_STATE();
    case 325:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(445);
      END_STATE();
    case 326:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(472);
      END_STATE();
    case 327:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(362);
      END_STATE();
    case 328:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(157);
      END_STATE();
    case 329:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(24);
      END_STATE();
    case 330:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(160);
      END_STATE();
    case 331:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(167);
      END_STATE();
    case 332:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(253);
      END_STATE();
    case 333:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(288);
      END_STATE();
    case 334:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(102);
      END_STATE();
    case 335:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 336:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(125);
      END_STATE();
    case 337:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(173);
      END_STATE();
    case 338:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(258);
      END_STATE();
    case 339:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(170);
      END_STATE();
    case 340:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(180);
      END_STATE();
    case 341:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(182);
      END_STATE();
    case 342:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(29);
      END_STATE();
    case 343:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(265);
      END_STATE();
    case 344:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(213);
      END_STATE();
    case 345:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 346:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(212);
      END_STATE();
    case 347:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(246);
      END_STATE();
    case 348:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(315);
      END_STATE();
    case 349:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 350:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 351:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 352:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(202);
      END_STATE();
    case 353:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 354:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(505);
      END_STATE();
    case 355:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(40);
      END_STATE();
    case 356:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(120);
      END_STATE();
    case 357:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(47);
      END_STATE();
    case 358:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(48);
      END_STATE();
    case 359:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(538);
      END_STATE();
    case 360:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(537);
      END_STATE();
    case 361:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(293);
      END_STATE();
    case 362:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(130);
      END_STATE();
    case 363:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(174);
      END_STATE();
    case 364:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(499);
      END_STATE();
    case 365:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(26);
      END_STATE();
    case 366:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(169);
      END_STATE();
    case 367:
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 368:
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 369:
      if (eof) ADVANCE(384);
      ADVANCE_MAP(
        '%', 11,
        '&', 12,
        '\'', 7,
        '(', 411,
        ')', 412,
        '*', 13,
        '+', 14,
        ',', 387,
        '-', 15,
        '.', 390,
        '/', 16,
        ';', 388,
        '=', 392,
        'N', 552,
        '[', 367,
        '^', 17,
        '|', 18,
        'A', 723,
        'a', 723,
        'E', 781,
        'e', 781,
        'F', 714,
        'f', 714,
        'G', 701,
        'g', 701,
        'S', 602,
        's', 602,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(369);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(404);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 370:
      if (eof) ADVANCE(384);
      ADVANCE_MAP(
        '\'', 6,
        '(', 411,
        ')', 412,
        '+', 427,
        ',', 387,
        '-', 402,
        '.', 389,
        ';', 388,
        '=', 410,
        '@', 368,
        'N', 550,
        '[', 367,
        'n', 761,
        'D', 610,
        'd', 610,
        'E', 781,
        'e', 781,
        'G', 701,
        'g', 701,
        'S', 602,
        's', 602,
        'W', 658,
        'w', 658,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(370);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(405);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 371:
      if (eof) ADVANCE(384);
      ADVANCE_MAP(
        '\'', 6,
        '(', 411,
        ')', 412,
        ',', 387,
        '-', 402,
        '.', 389,
        ';', 388,
        '@', 368,
        'N', 550,
        '[', 367,
        'n', 761,
        'D', 610,
        'd', 610,
        'E', 781,
        'e', 781,
        'G', 701,
        'g', 701,
        'S', 602,
        's', 602,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(371);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(405);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 372:
      if (eof) ADVANCE(384);
      ADVANCE_MAP(
        '\'', 7,
        '(', 411,
        ',', 387,
        '.', 389,
        ':', 10,
        ';', 388,
        '=', 410,
        'N', 552,
        '[', 367,
        'A', 723,
        'a', 723,
        'E', 781,
        'e', 781,
        'F', 714,
        'f', 714,
        'G', 701,
        'g', 701,
        'S', 602,
        's', 602,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(372);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 373:
      if (eof) ADVANCE(384);
      ADVANCE_MAP(
        '\'', 7,
        ')', 412,
        ',', 387,
        '.', 389,
        ';', 388,
        'N', 552,
        '[', 367,
        'A', 723,
        'a', 723,
        'E', 781,
        'e', 781,
        'F', 714,
        'f', 714,
        'G', 701,
        'g', 701,
        'O', 775,
        'o', 775,
        'S', 602,
        's', 602,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(373);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 374:
      if (eof) ADVANCE(384);
      ADVANCE_MAP(
        '\'', 7,
        ')', 412,
        ',', 387,
        '.', 389,
        ';', 388,
        'N', 552,
        '[', 367,
        'A', 723,
        'a', 723,
        'E', 548,
        'e', 548,
        'F', 714,
        'f', 714,
        'G', 701,
        'g', 701,
        'S', 602,
        's', 602,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(374);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 375:
      if (eof) ADVANCE(384);
      ADVANCE_MAP(
        '(', 411,
        ')', 412,
        ',', 387,
        '.', 389,
        ';', 388,
        '=', 392,
        'A', 302,
        'a', 302,
        'B', 89,
        'b', 89,
        'C', 263,
        'c', 263,
        'D', 117,
        'd', 117,
        'E', 549,
        'e', 549,
        'G', 250,
        'g', 250,
        'N', 353,
        'n', 353,
        'O', 286,
        'o', 286,
        'P', 52,
        'p', 52,
        'R', 45,
        'r', 45,
        'S', 124,
        's', 124,
        'U', 227,
        'u', 227,
        'W', 176,
        'w', 176,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(375);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(405);
      END_STATE();
    case 376:
      if (eof) ADVANCE(384);
      ADVANCE_MAP(
        '(', 411,
        ',', 387,
        '.', 389,
        ';', 388,
        '[', 367,
        'E', 781,
        'e', 781,
        'F', 714,
        'f', 714,
        'G', 701,
        'g', 701,
        'S', 602,
        's', 602,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(376);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 377:
      if (eof) ADVANCE(384);
      ADVANCE_MAP(
        '+', 545,
        ',', 387,
        '-', 543,
        '.', 389,
        ';', 388,
        '=', 410,
        '[', 367,
        'E', 781,
        'e', 781,
        'G', 701,
        'g', 701,
        'S', 602,
        's', 602,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(405);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 378:
      if (eof) ADVANCE(384);
      ADVANCE_MAP(
        ',', 387,
        '.', 389,
        ';', 388,
        '=', 392,
        '[', 367,
        'E', 781,
        'e', 781,
        'G', 701,
        'g', 701,
        'O', 769,
        'o', 769,
        'S', 602,
        's', 602,
        'W', 658,
        'w', 658,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(378);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 379:
      if (eof) ADVANCE(384);
      ADVANCE_MAP(
        ',', 387,
        '.', 389,
        ';', 388,
        '[', 367,
        'E', 781,
        'e', 781,
        'F', 714,
        'f', 714,
        'G', 701,
        'g', 701,
        'O', 775,
        'o', 775,
        'S', 602,
        's', 602,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(379);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 380:
      if (eof) ADVANCE(384);
      ADVANCE_MAP(
        ',', 387,
        '.', 389,
        ';', 388,
        '[', 367,
        'E', 781,
        'e', 781,
        'G', 701,
        'g', 701,
        'S', 602,
        's', 602,
        'W', 658,
        'w', 658,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(380);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 381:
      if (eof) ADVANCE(384);
      ADVANCE_MAP(
        ',', 387,
        '.', 389,
        ';', 388,
        '[', 367,
        'E', 548,
        'e', 548,
        'F', 714,
        'f', 714,
        'G', 701,
        'g', 701,
        'S', 602,
        's', 602,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(381);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 382:
      if (eof) ADVANCE(384);
      ADVANCE_MAP(
        '.', 389,
        ';', 388,
        '[', 367,
        'A', 722,
        'a', 722,
        'E', 781,
        'e', 781,
        'G', 701,
        'g', 701,
        'S', 602,
        's', 602,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(382);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 383:
      if (eof) ADVANCE(384);
      ADVANCE_MAP(
        '.', 389,
        ';', 388,
        '[', 367,
        'A', 750,
        'a', 750,
        'E', 781,
        'e', 781,
        'G', 701,
        'g', 701,
        'S', 602,
        's', 602,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(383);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_go_statement_token1);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_go_statement_token1);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_func_proc_name_server_database_schema_token1);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_func_proc_name_server_database_schema_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(547);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_execute_statement_arg_named_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_OUTPUT);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_OUTPUT);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(348);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_OUTPUT);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(770);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_OUTPUT);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_default);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_default);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_null_);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_null_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '\'') ADVANCE(6);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_constant_token3);
      if (lookahead == '.') ADVANCE(547);
      if (lookahead == 'x') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(404);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_constant_token3);
      if (lookahead == '.') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_constant_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_execute);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_execute);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(752);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_execute);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(335);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_execute);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_execute_body_token1);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_WITH);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_WITH);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_RESULT_SETS_token1);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_RESULT_SETS_token2);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_NONE);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_UNDEFINED);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_RECOMPILE);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_AS_token1);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_AS_token1);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_LOGIN);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_USER);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_AT_KEYWORD);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_AT_KEYWORD);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_string_lit);
      if (lookahead == '\'') ADVANCE(7);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_PLUS);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_query_specification_token1);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_query_specification_token1);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_select);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_select);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_asterisk);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_asterisk);
      if (lookahead == '=') ADVANCE(434);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_hierachyid_);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_hierachyid_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_get_descendant_);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_get_descendant_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_get_reparented_value_);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_get_reparented_value_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_getancestor_);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_getancestor_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_is_descendant_of_);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_is_descendant_of_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_getlevel_);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_getlevel_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_getroot_);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_tostring_);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_tostring_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_parse_);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_dollar_partition_);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_right_);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_right_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_left_);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_left_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_binary_checksum_);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_binary_checksum_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_checksum_);
      if (lookahead == '_') ADVANCE(567);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_checksum_);
      if (lookahead == '_') ADVANCE(39);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_over__token1);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_over__token1);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_within_group__token1);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_within_group__token2);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_percentile_cont_);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_percentile_cont_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_percentile_disc_);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_percentile_disc_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_cume_dist_);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_cume_dist_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_percent_rank_);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_percent_rank_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_ignore_nulls__token1);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_ignore_nulls__token2);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_respect_nulls__token1);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_lag_);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_lag_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_lead_);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_lead_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_first_value_);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_first_value_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_last_value_);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_last_value_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_checksum_agg_);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_checksum_agg_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_count_);
      if (lookahead == '_') ADVANCE(55);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_count_);
      if (lookahead == '_') ADVANCE(579);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_count_big_);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_count_big_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_avg_);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_avg_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_max_);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_max_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_min_);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_min_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_sum_);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_sum_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_stdev_);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(507);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_stdev_);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(508);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_stdevp_);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_stdevp_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_var_);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(511);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_var_);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(512);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_varp_);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_varp_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_all_);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_all_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_distinct_);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_distinct_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_ntile_);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_ntile_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_rank_);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_rank_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_dense_rank_);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_dense_rank_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_row_number_);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_row_number_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_partition_by_clause_token1);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_partition_by_clause_token2);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_collation__token1);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_asc_);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_desc_);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_window_frame_extent_token1);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_window_frame_extent_token2);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_window_frame_following_token1);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_window_frame_following_token2);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_window_frame_preceding_token1);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_window_frame_preceding_token2);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_window_frame_preceding_token3);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_window_frame_preceding_token3);
      if (lookahead == '_') ADVANCE(230);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(539);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_row_or_range_clause_token1);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_row_or_range_clause_token2);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_binary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(541);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(433);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(432);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_real__token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(547);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_real__token2);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(603);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_real__token2);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(111);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(670);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(659);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(670);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(583);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(774);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(596);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(686);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(587);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(716);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(719);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(675);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(777);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(639);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(564);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(780);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(684);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(763);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(594);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(738);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(685);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(640);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(779);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(708);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(644);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(671);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(709);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(687);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(688);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_id__token1);
      ADVANCE_MAP(
        'A', 699,
        'a', 699,
        'D', 634,
        'd', 634,
        'L', 620,
        'l', 620,
        'R', 611,
        'r', 611,
      );
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(718);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(717);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(676);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(677);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(694);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(695);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(652);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(624);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(407);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(475);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(705);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(654);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(736);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(664);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(646);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(649);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(745);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(630);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(631);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(627);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(665);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(633);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(486);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(444);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(660);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(614);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(625);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(577);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(578);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(778);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(669);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(581);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(409);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(636);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(726);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(636);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(518);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(490);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(488);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(637);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(707);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(448);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(584);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(773);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(715);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(555);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(585);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(721);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(558);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(776);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(601);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(553);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(668);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(710);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(733);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(711);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(690);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(696);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(746);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(386);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(692);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(729);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(592);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(700);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(734);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(452);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(563);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(727);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(563);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(498);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(484);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(751);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(647);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(496);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(492);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(457);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(642);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(414);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(783);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(740);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(617);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(764);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(683);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(632);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(697);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(713);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(641);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(595);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(724);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(618);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(698);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(691);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(754);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(674);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(725);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(520);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(522);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(479);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(731);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(732);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(400);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(514);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(454);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(613);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(666);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(767);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(667);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(638);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(741);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(607);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(622);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(768);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(771);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(504);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(466);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(465);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(429);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(580);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(616);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(502);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(661);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(762);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(662);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(663);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(739);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(599);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(643);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(742);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(744);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(756);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(747);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(758);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(569);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(588);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(590);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(600);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(386);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(635);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(681);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(712);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(693);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(728);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(573);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(510);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(782);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(524);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(469);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(450);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(735);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(703);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(589);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(570);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(586);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(628);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(571);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(657);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(574);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(421);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(425);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(421);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(582);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(743);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(759);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(619);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(757);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(755);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(598);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(765);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(766);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(591);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(593);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(760);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(431);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(597);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(678);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(463);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(494);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(461);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(398);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(559);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(477);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(473);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(516);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(572);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(446);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(395);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(396);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(425);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(554);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(604);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(659);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(670);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(645);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(704);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(702);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(720);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(621);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(656);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(560);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(670);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(682);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(673);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(689);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(679);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(680);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(608);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(609);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(748);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(749);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(612);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(638);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(506);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(568);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(626);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(623);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(575);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(576);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(556);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(500);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(603);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(557);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(653);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_id__token2);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 377},
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
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 377},
  [60] = {.lex_state = 377},
  [61] = {.lex_state = 370},
  [62] = {.lex_state = 370},
  [63] = {.lex_state = 369},
  [64] = {.lex_state = 371},
  [65] = {.lex_state = 369},
  [66] = {.lex_state = 371},
  [67] = {.lex_state = 370},
  [68] = {.lex_state = 369},
  [69] = {.lex_state = 370},
  [70] = {.lex_state = 377},
  [71] = {.lex_state = 370},
  [72] = {.lex_state = 370},
  [73] = {.lex_state = 377},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 370},
  [77] = {.lex_state = 370},
  [78] = {.lex_state = 371},
  [79] = {.lex_state = 369},
  [80] = {.lex_state = 369},
  [81] = {.lex_state = 377},
  [82] = {.lex_state = 370},
  [83] = {.lex_state = 371},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 370},
  [87] = {.lex_state = 370},
  [88] = {.lex_state = 373},
  [89] = {.lex_state = 370},
  [90] = {.lex_state = 373},
  [91] = {.lex_state = 375},
  [92] = {.lex_state = 370},
  [93] = {.lex_state = 370},
  [94] = {.lex_state = 370},
  [95] = {.lex_state = 370},
  [96] = {.lex_state = 370},
  [97] = {.lex_state = 370},
  [98] = {.lex_state = 370},
  [99] = {.lex_state = 372},
  [100] = {.lex_state = 370},
  [101] = {.lex_state = 375},
  [102] = {.lex_state = 370},
  [103] = {.lex_state = 370},
  [104] = {.lex_state = 372},
  [105] = {.lex_state = 372},
  [106] = {.lex_state = 370},
  [107] = {.lex_state = 370},
  [108] = {.lex_state = 370},
  [109] = {.lex_state = 371},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 371},
  [113] = {.lex_state = 374},
  [114] = {.lex_state = 374},
  [115] = {.lex_state = 371},
  [116] = {.lex_state = 371},
  [117] = {.lex_state = 371},
  [118] = {.lex_state = 371},
  [119] = {.lex_state = 371},
  [120] = {.lex_state = 375},
  [121] = {.lex_state = 371},
  [122] = {.lex_state = 369},
  [123] = {.lex_state = 369},
  [124] = {.lex_state = 371},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 371},
  [127] = {.lex_state = 369},
  [128] = {.lex_state = 369},
  [129] = {.lex_state = 371},
  [130] = {.lex_state = 369},
  [131] = {.lex_state = 371},
  [132] = {.lex_state = 371},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 369},
  [135] = {.lex_state = 371},
  [136] = {.lex_state = 371},
  [137] = {.lex_state = 369},
  [138] = {.lex_state = 371},
  [139] = {.lex_state = 371},
  [140] = {.lex_state = 371},
  [141] = {.lex_state = 369},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 371},
  [145] = {.lex_state = 369},
  [146] = {.lex_state = 369},
  [147] = {.lex_state = 369},
  [148] = {.lex_state = 369},
  [149] = {.lex_state = 369},
  [150] = {.lex_state = 369},
  [151] = {.lex_state = 371},
  [152] = {.lex_state = 369},
  [153] = {.lex_state = 369},
  [154] = {.lex_state = 371},
  [155] = {.lex_state = 369},
  [156] = {.lex_state = 369},
  [157] = {.lex_state = 369},
  [158] = {.lex_state = 369},
  [159] = {.lex_state = 369},
  [160] = {.lex_state = 369},
  [161] = {.lex_state = 369},
  [162] = {.lex_state = 371},
  [163] = {.lex_state = 369},
  [164] = {.lex_state = 371},
  [165] = {.lex_state = 369},
  [166] = {.lex_state = 369},
  [167] = {.lex_state = 371},
  [168] = {.lex_state = 369},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 371},
  [171] = {.lex_state = 369},
  [172] = {.lex_state = 369},
  [173] = {.lex_state = 369},
  [174] = {.lex_state = 3},
  [175] = {.lex_state = 369},
  [176] = {.lex_state = 372},
  [177] = {.lex_state = 369},
  [178] = {.lex_state = 369},
  [179] = {.lex_state = 371},
  [180] = {.lex_state = 371},
  [181] = {.lex_state = 371},
  [182] = {.lex_state = 369},
  [183] = {.lex_state = 371},
  [184] = {.lex_state = 371},
  [185] = {.lex_state = 371},
  [186] = {.lex_state = 371},
  [187] = {.lex_state = 379},
  [188] = {.lex_state = 371},
  [189] = {.lex_state = 371},
  [190] = {.lex_state = 379},
  [191] = {.lex_state = 371},
  [192] = {.lex_state = 378},
  [193] = {.lex_state = 381},
  [194] = {.lex_state = 380},
  [195] = {.lex_state = 382},
  [196] = {.lex_state = 380},
  [197] = {.lex_state = 380},
  [198] = {.lex_state = 378},
  [199] = {.lex_state = 378},
  [200] = {.lex_state = 376},
  [201] = {.lex_state = 380},
  [202] = {.lex_state = 380},
  [203] = {.lex_state = 381},
  [204] = {.lex_state = 380},
  [205] = {.lex_state = 380},
  [206] = {.lex_state = 376},
  [207] = {.lex_state = 380},
  [208] = {.lex_state = 380},
  [209] = {.lex_state = 376},
  [210] = {.lex_state = 376},
  [211] = {.lex_state = 380},
  [212] = {.lex_state = 382},
  [213] = {.lex_state = 376},
  [214] = {.lex_state = 376},
  [215] = {.lex_state = 376},
  [216] = {.lex_state = 377},
  [217] = {.lex_state = 375},
  [218] = {.lex_state = 376},
  [219] = {.lex_state = 380},
  [220] = {.lex_state = 380},
  [221] = {.lex_state = 380},
  [222] = {.lex_state = 380},
  [223] = {.lex_state = 380},
  [224] = {.lex_state = 376},
  [225] = {.lex_state = 380},
  [226] = {.lex_state = 376},
  [227] = {.lex_state = 380},
  [228] = {.lex_state = 376},
  [229] = {.lex_state = 377},
  [230] = {.lex_state = 376},
  [231] = {.lex_state = 376},
  [232] = {.lex_state = 380},
  [233] = {.lex_state = 377},
  [234] = {.lex_state = 380},
  [235] = {.lex_state = 377},
  [236] = {.lex_state = 376},
  [237] = {.lex_state = 376},
  [238] = {.lex_state = 380},
  [239] = {.lex_state = 376},
  [240] = {.lex_state = 376},
  [241] = {.lex_state = 376},
  [242] = {.lex_state = 376},
  [243] = {.lex_state = 376},
  [244] = {.lex_state = 376},
  [245] = {.lex_state = 376},
  [246] = {.lex_state = 376},
  [247] = {.lex_state = 376},
  [248] = {.lex_state = 376},
  [249] = {.lex_state = 376},
  [250] = {.lex_state = 376},
  [251] = {.lex_state = 376},
  [252] = {.lex_state = 376},
  [253] = {.lex_state = 376},
  [254] = {.lex_state = 376},
  [255] = {.lex_state = 376},
  [256] = {.lex_state = 376},
  [257] = {.lex_state = 376},
  [258] = {.lex_state = 376},
  [259] = {.lex_state = 376},
  [260] = {.lex_state = 377},
  [261] = {.lex_state = 376},
  [262] = {.lex_state = 376},
  [263] = {.lex_state = 375},
  [264] = {.lex_state = 375},
  [265] = {.lex_state = 376},
  [266] = {.lex_state = 376},
  [267] = {.lex_state = 377},
  [268] = {.lex_state = 377},
  [269] = {.lex_state = 377},
  [270] = {.lex_state = 376},
  [271] = {.lex_state = 376},
  [272] = {.lex_state = 376},
  [273] = {.lex_state = 376},
  [274] = {.lex_state = 376},
  [275] = {.lex_state = 376},
  [276] = {.lex_state = 376},
  [277] = {.lex_state = 377},
  [278] = {.lex_state = 376},
  [279] = {.lex_state = 376},
  [280] = {.lex_state = 375},
  [281] = {.lex_state = 383},
  [282] = {.lex_state = 377},
  [283] = {.lex_state = 377},
  [284] = {.lex_state = 377},
  [285] = {.lex_state = 377},
  [286] = {.lex_state = 377},
  [287] = {.lex_state = 377},
  [288] = {.lex_state = 377},
  [289] = {.lex_state = 380},
  [290] = {.lex_state = 377},
  [291] = {.lex_state = 377},
  [292] = {.lex_state = 9},
  [293] = {.lex_state = 383},
  [294] = {.lex_state = 376},
  [295] = {.lex_state = 380},
  [296] = {.lex_state = 377},
  [297] = {.lex_state = 375},
  [298] = {.lex_state = 377},
  [299] = {.lex_state = 375},
  [300] = {.lex_state = 377},
  [301] = {.lex_state = 377},
  [302] = {.lex_state = 375},
  [303] = {.lex_state = 375},
  [304] = {.lex_state = 375},
  [305] = {.lex_state = 377},
  [306] = {.lex_state = 375},
  [307] = {.lex_state = 377},
  [308] = {.lex_state = 377},
  [309] = {.lex_state = 375},
  [310] = {.lex_state = 377},
  [311] = {.lex_state = 377},
  [312] = {.lex_state = 377},
  [313] = {.lex_state = 377},
  [314] = {.lex_state = 377},
  [315] = {.lex_state = 375},
  [316] = {.lex_state = 375},
  [317] = {.lex_state = 377},
  [318] = {.lex_state = 377},
  [319] = {.lex_state = 377},
  [320] = {.lex_state = 375},
  [321] = {.lex_state = 375},
  [322] = {.lex_state = 375},
  [323] = {.lex_state = 377},
  [324] = {.lex_state = 375},
  [325] = {.lex_state = 375},
  [326] = {.lex_state = 377},
  [327] = {.lex_state = 375},
  [328] = {.lex_state = 375},
  [329] = {.lex_state = 375},
  [330] = {.lex_state = 377},
  [331] = {.lex_state = 375},
  [332] = {.lex_state = 375},
  [333] = {.lex_state = 377},
  [334] = {.lex_state = 375},
  [335] = {.lex_state = 377},
  [336] = {.lex_state = 375},
  [337] = {.lex_state = 375},
  [338] = {.lex_state = 375},
  [339] = {.lex_state = 375},
  [340] = {.lex_state = 377},
  [341] = {.lex_state = 375},
  [342] = {.lex_state = 377},
  [343] = {.lex_state = 375},
  [344] = {.lex_state = 375},
  [345] = {.lex_state = 375},
  [346] = {.lex_state = 375},
  [347] = {.lex_state = 375},
  [348] = {.lex_state = 375},
  [349] = {.lex_state = 375},
  [350] = {.lex_state = 375},
  [351] = {.lex_state = 375},
  [352] = {.lex_state = 375},
  [353] = {.lex_state = 375},
  [354] = {.lex_state = 375},
  [355] = {.lex_state = 375},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 8},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 377},
  [366] = {.lex_state = 377},
  [367] = {.lex_state = 377},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 9},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 375},
  [373] = {.lex_state = 375},
  [374] = {.lex_state = 375},
  [375] = {.lex_state = 9},
  [376] = {.lex_state = 9},
  [377] = {.lex_state = 375},
  [378] = {.lex_state = 375},
  [379] = {.lex_state = 375},
  [380] = {.lex_state = 9},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 9},
  [383] = {.lex_state = 375},
  [384] = {.lex_state = 8},
  [385] = {.lex_state = 375},
  [386] = {.lex_state = 9},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 8},
  [389] = {.lex_state = 9},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 9},
  [393] = {.lex_state = 9},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 375},
  [398] = {.lex_state = 9},
  [399] = {.lex_state = 8},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 375},
  [402] = {.lex_state = 9},
  [403] = {.lex_state = 9},
  [404] = {.lex_state = 375},
  [405] = {.lex_state = 9},
  [406] = {.lex_state = 9},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 9},
  [409] = {.lex_state = 9},
  [410] = {.lex_state = 9},
  [411] = {.lex_state = 9},
  [412] = {.lex_state = 9},
  [413] = {.lex_state = 9},
  [414] = {.lex_state = 9},
  [415] = {.lex_state = 9},
  [416] = {.lex_state = 9},
  [417] = {.lex_state = 9},
  [418] = {.lex_state = 9},
  [419] = {.lex_state = 9},
  [420] = {.lex_state = 9},
  [421] = {.lex_state = 9},
  [422] = {.lex_state = 9},
  [423] = {.lex_state = 9},
  [424] = {.lex_state = 9},
  [425] = {.lex_state = 9},
  [426] = {.lex_state = 9},
  [427] = {.lex_state = 9},
  [428] = {.lex_state = 9},
  [429] = {.lex_state = 9},
  [430] = {.lex_state = 9},
  [431] = {.lex_state = 9},
  [432] = {.lex_state = 9},
  [433] = {.lex_state = 9},
  [434] = {.lex_state = 9},
  [435] = {.lex_state = 9},
  [436] = {.lex_state = 9},
  [437] = {.lex_state = 9},
  [438] = {.lex_state = 9},
  [439] = {.lex_state = 375},
  [440] = {.lex_state = 9},
  [441] = {.lex_state = 9},
  [442] = {.lex_state = 9},
  [443] = {.lex_state = 9},
  [444] = {.lex_state = 375},
  [445] = {.lex_state = 9},
  [446] = {.lex_state = 9},
  [447] = {.lex_state = 9},
  [448] = {.lex_state = 9},
  [449] = {.lex_state = 9},
  [450] = {.lex_state = 9},
  [451] = {.lex_state = 9},
  [452] = {.lex_state = 9},
  [453] = {.lex_state = 9},
  [454] = {.lex_state = 9},
  [455] = {.lex_state = 9},
  [456] = {.lex_state = 9},
  [457] = {.lex_state = 375},
  [458] = {.lex_state = 9},
  [459] = {.lex_state = 375},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 375},
  [462] = {.lex_state = 375},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 375},
  [465] = {.lex_state = 375},
  [466] = {.lex_state = 375},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 375},
  [469] = {.lex_state = 369},
  [470] = {.lex_state = 1},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 375},
  [475] = {.lex_state = 375},
  [476] = {.lex_state = 375},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 375},
  [479] = {.lex_state = 375},
  [480] = {.lex_state = 369},
  [481] = {.lex_state = 375},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 1},
  [487] = {.lex_state = 1},
  [488] = {.lex_state = 375},
  [489] = {.lex_state = 1},
  [490] = {.lex_state = 369},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 377},
  [497] = {.lex_state = 377},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 377},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 375},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 375},
  [549] = {.lex_state = 375},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 377},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 377},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 377},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 377},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 1},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 377},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 375},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 377},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 375},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 1},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 1},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 284},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 1},
  [674] = {.lex_state = 1},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 1},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 0},
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
    [sym_hierachyid_] = ACTIONS(1),
    [sym_get_descendant_] = ACTIONS(1),
    [sym_get_reparented_value_] = ACTIONS(1),
    [sym_getancestor_] = ACTIONS(1),
    [sym_is_descendant_of_] = ACTIONS(1),
    [sym_getlevel_] = ACTIONS(1),
    [sym_getroot_] = ACTIONS(1),
    [sym_tostring_] = ACTIONS(1),
    [sym_parse_] = ACTIONS(1),
    [sym_dollar_partition_] = ACTIONS(1),
    [sym_right_] = ACTIONS(1),
    [sym_left_] = ACTIONS(1),
    [sym_binary_checksum_] = ACTIONS(1),
    [sym_checksum_] = ACTIONS(1),
    [aux_sym_over__token1] = ACTIONS(1),
    [aux_sym_within_group__token1] = ACTIONS(1),
    [aux_sym_within_group__token2] = ACTIONS(1),
    [sym_percentile_cont_] = ACTIONS(1),
    [sym_percentile_disc_] = ACTIONS(1),
    [sym_cume_dist_] = ACTIONS(1),
    [sym_percent_rank_] = ACTIONS(1),
    [aux_sym_ignore_nulls__token1] = ACTIONS(1),
    [aux_sym_respect_nulls__token1] = ACTIONS(1),
    [sym_lag_] = ACTIONS(1),
    [sym_lead_] = ACTIONS(1),
    [sym_first_value_] = ACTIONS(1),
    [sym_last_value_] = ACTIONS(1),
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
    [aux_sym_partition_by_clause_token1] = ACTIONS(1),
    [aux_sym_partition_by_clause_token2] = ACTIONS(1),
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
    [sym_binary] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [aux_sym_real__token1] = ACTIONS(1),
    [aux_sym_real__token2] = ACTIONS(1),
    [aux_sym_id__token2] = ACTIONS(1),
    [anon_sym_TODO] = ACTIONS(1),
  },
  [1] = {
    [sym_tsql_file] = STATE(743),
    [sym_batch] = STATE(60),
    [sym_go_statement] = STATE(282),
    [sym_execute_body_batch] = STATE(85),
    [sym_func_proc_name_server_database_schema] = STATE(64),
    [sym_func_proc_name_database_schema] = STATE(129),
    [sym_func_proc_name_schema] = STATE(121),
    [sym_sql_clauses] = STATE(73),
    [sym_another_statement] = STATE(340),
    [sym_execute_statement] = STATE(330),
    [sym_dml_clause] = STATE(340),
    [sym_select_statement_standalone] = STATE(312),
    [sym_select_statement] = STATE(323),
    [sym_query_expression] = STATE(342),
    [sym_query_specification] = STATE(326),
    [sym_id_] = STATE(116),
    [sym_keyword] = STATE(78),
    [aux_sym_tsql_file_repeat1] = STATE(60),
    [aux_sym_batch_repeat1] = STATE(73),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_go_statement_token1] = ACTIONS(5),
    [aux_sym_func_proc_name_server_database_schema_token1] = ACTIONS(7),
    [sym_execute] = ACTIONS(9),
    [sym_select] = ACTIONS(11),
    [aux_sym_id__token1] = ACTIONS(13),
    [aux_sym_id__token2] = ACTIONS(15),
  },
  [2] = {
    [sym_func_proc_name_database_schema] = STATE(659),
    [sym_func_proc_name_schema] = STATE(121),
    [sym_LOCAL_ID_] = STATE(63),
    [sym_select_list] = STATE(294),
    [sym_select_list_elem] = STATE(214),
    [sym_udt_elem] = STATE(273),
    [sym_expression_elem] = STATE(273),
    [sym_column_alias] = STATE(566),
    [sym_full_column_name] = STATE(155),
    [sym_expression] = STATE(79),
    [sym_function_call] = STATE(155),
    [sym_hierarchyid_static_method] = STATE(122),
    [sym_partition_function] = STATE(122),
    [sym_scalar_function_name] = STATE(567),
    [sym_analytic_windowed_function] = STATE(122),
    [sym_aggregate_windowed_function] = STATE(122),
    [sym_ranking_windowed_function] = STATE(122),
    [sym_primitive_expression] = STATE(155),
    [sym_primitive_constant] = STATE(145),
    [sym_money_] = STATE(173),
    [sym_real_] = STATE(173),
    [sym_float_] = STATE(173),
    [sym_decimal_] = STATE(173),
    [sym_id_] = STATE(104),
    [sym_keyword] = STATE(105),
    [aux_sym_go_statement_token1] = ACTIONS(17),
    [aux_sym_func_proc_name_server_database_schema_token1] = ACTIONS(19),
    [aux_sym_execute_statement_arg_named_token1] = ACTIONS(21),
    [sym_default] = ACTIONS(23),
    [sym_null_] = ACTIONS(23),
    [aux_sym_constant_token3] = ACTIONS(25),
    [sym_string_lit] = ACTIONS(27),
    [sym_asterisk] = ACTIONS(29),
    [sym_hierachyid_] = ACTIONS(31),
    [sym_dollar_partition_] = ACTIONS(33),
    [sym_right_] = ACTIONS(35),
    [sym_left_] = ACTIONS(35),
    [sym_binary_checksum_] = ACTIONS(37),
    [sym_checksum_] = ACTIONS(37),
    [sym_percentile_cont_] = ACTIONS(39),
    [sym_percentile_disc_] = ACTIONS(39),
    [sym_cume_dist_] = ACTIONS(41),
    [sym_percent_rank_] = ACTIONS(41),
    [sym_lag_] = ACTIONS(43),
    [sym_lead_] = ACTIONS(43),
    [sym_first_value_] = ACTIONS(45),
    [sym_last_value_] = ACTIONS(45),
    [sym_checksum_agg_] = ACTIONS(47),
    [sym_count_] = ACTIONS(49),
    [sym_count_big_] = ACTIONS(49),
    [sym_avg_] = ACTIONS(51),
    [sym_max_] = ACTIONS(51),
    [sym_min_] = ACTIONS(51),
    [sym_sum_] = ACTIONS(51),
    [sym_stdev_] = ACTIONS(51),
    [sym_stdevp_] = ACTIONS(51),
    [sym_var_] = ACTIONS(51),
    [sym_varp_] = ACTIONS(51),
    [sym_ntile_] = ACTIONS(53),
    [sym_rank_] = ACTIONS(55),
    [sym_dense_rank_] = ACTIONS(55),
    [sym_row_number_] = ACTIONS(55),
    [sym_binary] = ACTIONS(57),
    [anon_sym_DOLLAR] = ACTIONS(59),
    [aux_sym_real__token1] = ACTIONS(61),
    [aux_sym_id__token1] = ACTIONS(63),
    [aux_sym_id__token2] = ACTIONS(65),
  },
  [3] = {
    [sym_func_proc_name_database_schema] = STATE(659),
    [sym_func_proc_name_schema] = STATE(121),
    [sym_LOCAL_ID_] = STATE(63),
    [sym_select_list_elem] = STATE(279),
    [sym_udt_elem] = STATE(273),
    [sym_expression_elem] = STATE(273),
    [sym_column_alias] = STATE(566),
    [sym_full_column_name] = STATE(155),
    [sym_expression] = STATE(79),
    [sym_function_call] = STATE(155),
    [sym_hierarchyid_static_method] = STATE(122),
    [sym_partition_function] = STATE(122),
    [sym_scalar_function_name] = STATE(567),
    [sym_analytic_windowed_function] = STATE(122),
    [sym_aggregate_windowed_function] = STATE(122),
    [sym_ranking_windowed_function] = STATE(122),
    [sym_primitive_expression] = STATE(155),
    [sym_primitive_constant] = STATE(145),
    [sym_money_] = STATE(173),
    [sym_real_] = STATE(173),
    [sym_float_] = STATE(173),
    [sym_decimal_] = STATE(173),
    [sym_id_] = STATE(104),
    [sym_keyword] = STATE(105),
    [aux_sym_go_statement_token1] = ACTIONS(17),
    [aux_sym_func_proc_name_server_database_schema_token1] = ACTIONS(19),
    [aux_sym_execute_statement_arg_named_token1] = ACTIONS(21),
    [sym_default] = ACTIONS(23),
    [sym_null_] = ACTIONS(23),
    [aux_sym_constant_token3] = ACTIONS(25),
    [sym_string_lit] = ACTIONS(27),
    [sym_asterisk] = ACTIONS(29),
    [sym_hierachyid_] = ACTIONS(31),
    [sym_dollar_partition_] = ACTIONS(33),
    [sym_right_] = ACTIONS(35),
    [sym_left_] = ACTIONS(35),
    [sym_binary_checksum_] = ACTIONS(37),
    [sym_checksum_] = ACTIONS(37),
    [sym_percentile_cont_] = ACTIONS(39),
    [sym_percentile_disc_] = ACTIONS(39),
    [sym_cume_dist_] = ACTIONS(41),
    [sym_percent_rank_] = ACTIONS(41),
    [sym_lag_] = ACTIONS(43),
    [sym_lead_] = ACTIONS(43),
    [sym_first_value_] = ACTIONS(45),
    [sym_last_value_] = ACTIONS(45),
    [sym_checksum_agg_] = ACTIONS(47),
    [sym_count_] = ACTIONS(49),
    [sym_count_big_] = ACTIONS(49),
    [sym_avg_] = ACTIONS(51),
    [sym_max_] = ACTIONS(51),
    [sym_min_] = ACTIONS(51),
    [sym_sum_] = ACTIONS(51),
    [sym_stdev_] = ACTIONS(51),
    [sym_stdevp_] = ACTIONS(51),
    [sym_var_] = ACTIONS(51),
    [sym_varp_] = ACTIONS(51),
    [sym_ntile_] = ACTIONS(53),
    [sym_rank_] = ACTIONS(55),
    [sym_dense_rank_] = ACTIONS(55),
    [sym_row_number_] = ACTIONS(55),
    [sym_binary] = ACTIONS(57),
    [anon_sym_DOLLAR] = ACTIONS(59),
    [aux_sym_real__token1] = ACTIONS(61),
    [aux_sym_id__token1] = ACTIONS(63),
    [aux_sym_id__token2] = ACTIONS(65),
  },
  [4] = {
    [sym_func_proc_name_database_schema] = STATE(659),
    [sym_func_proc_name_schema] = STATE(121),
    [sym_LOCAL_ID_] = STATE(145),
    [sym_full_column_name] = STATE(155),
    [sym_expression] = STATE(635),
    [sym_function_call] = STATE(155),
    [sym_hierarchyid_static_method] = STATE(122),
    [sym_partition_function] = STATE(122),
    [sym_scalar_function_name] = STATE(567),
    [sym_analytic_windowed_function] = STATE(122),
    [sym_aggregate_windowed_function] = STATE(122),
    [sym_all_distinct_expression] = STATE(639),
    [sym_ranking_windowed_function] = STATE(122),
    [sym_primitive_expression] = STATE(155),
    [sym_primitive_constant] = STATE(145),
    [sym_money_] = STATE(173),
    [sym_real_] = STATE(173),
    [sym_float_] = STATE(173),
    [sym_decimal_] = STATE(173),
    [sym_id_] = STATE(485),
    [sym_keyword] = STATE(78),
    [aux_sym_go_statement_token1] = ACTIONS(67),
    [aux_sym_func_proc_name_server_database_schema_token1] = ACTIONS(19),
    [aux_sym_execute_statement_arg_named_token1] = ACTIONS(69),
    [sym_default] = ACTIONS(23),
    [sym_null_] = ACTIONS(23),
    [aux_sym_constant_token3] = ACTIONS(25),
    [sym_string_lit] = ACTIONS(57),
    [sym_asterisk] = ACTIONS(71),
    [sym_hierachyid_] = ACTIONS(31),
    [sym_dollar_partition_] = ACTIONS(33),
    [sym_right_] = ACTIONS(35),
    [sym_left_] = ACTIONS(35),
    [sym_binary_checksum_] = ACTIONS(37),
    [sym_checksum_] = ACTIONS(37),
    [sym_percentile_cont_] = ACTIONS(39),
    [sym_percentile_disc_] = ACTIONS(39),
    [sym_cume_dist_] = ACTIONS(41),
    [sym_percent_rank_] = ACTIONS(41),
    [sym_lag_] = ACTIONS(43),
    [sym_lead_] = ACTIONS(43),
    [sym_first_value_] = ACTIONS(45),
    [sym_last_value_] = ACTIONS(45),
    [sym_checksum_agg_] = ACTIONS(47),
    [sym_count_] = ACTIONS(49),
    [sym_count_big_] = ACTIONS(49),
    [sym_avg_] = ACTIONS(51),
    [sym_max_] = ACTIONS(51),
    [sym_min_] = ACTIONS(51),
    [sym_sum_] = ACTIONS(51),
    [sym_stdev_] = ACTIONS(51),
    [sym_stdevp_] = ACTIONS(51),
    [sym_var_] = ACTIONS(51),
    [sym_varp_] = ACTIONS(51),
    [sym_all_] = ACTIONS(73),
    [sym_distinct_] = ACTIONS(73),
    [sym_ntile_] = ACTIONS(53),
    [sym_rank_] = ACTIONS(55),
    [sym_dense_rank_] = ACTIONS(55),
    [sym_row_number_] = ACTIONS(55),
    [sym_binary] = ACTIONS(57),
    [anon_sym_DOLLAR] = ACTIONS(59),
    [aux_sym_real__token1] = ACTIONS(61),
    [aux_sym_id__token1] = ACTIONS(13),
    [aux_sym_id__token2] = ACTIONS(15),
  },
  [5] = {
    [sym_func_proc_name_database_schema] = STATE(659),
    [sym_func_proc_name_schema] = STATE(121),
    [sym_LOCAL_ID_] = STATE(145),
    [sym_full_column_name] = STATE(155),
    [sym_expression] = STATE(635),
    [sym_function_call] = STATE(155),
    [sym_hierarchyid_static_method] = STATE(122),
    [sym_partition_function] = STATE(122),
    [sym_scalar_function_name] = STATE(567),
    [sym_analytic_windowed_function] = STATE(122),
    [sym_aggregate_windowed_function] = STATE(122),
    [sym_all_distinct_expression] = STATE(581),
    [sym_ranking_windowed_function] = STATE(122),
    [sym_primitive_expression] = STATE(155),
    [sym_primitive_constant] = STATE(145),
    [sym_money_] = STATE(173),
    [sym_real_] = STATE(173),
    [sym_float_] = STATE(173),
    [sym_decimal_] = STATE(173),
    [sym_id_] = STATE(485),
    [sym_keyword] = STATE(78),
    [aux_sym_go_statement_token1] = ACTIONS(67),
    [aux_sym_func_proc_name_server_database_schema_token1] = ACTIONS(19),
    [aux_sym_execute_statement_arg_named_token1] = ACTIONS(69),
    [sym_default] = ACTIONS(23),
    [sym_null_] = ACTIONS(23),
    [aux_sym_constant_token3] = ACTIONS(25),
    [sym_string_lit] = ACTIONS(57),
    [sym_asterisk] = ACTIONS(75),
    [sym_hierachyid_] = ACTIONS(31),
    [sym_dollar_partition_] = ACTIONS(33),
    [sym_right_] = ACTIONS(35),
    [sym_left_] = ACTIONS(35),
    [sym_binary_checksum_] = ACTIONS(37),
    [sym_checksum_] = ACTIONS(37),
    [sym_percentile_cont_] = ACTIONS(39),
    [sym_percentile_disc_] = ACTIONS(39),
    [sym_cume_dist_] = ACTIONS(41),
    [sym_percent_rank_] = ACTIONS(41),
    [sym_lag_] = ACTIONS(43),
    [sym_lead_] = ACTIONS(43),
    [sym_first_value_] = ACTIONS(45),
    [sym_last_value_] = ACTIONS(45),
    [sym_checksum_agg_] = ACTIONS(47),
    [sym_count_] = ACTIONS(49),
    [sym_count_big_] = ACTIONS(49),
    [sym_avg_] = ACTIONS(51),
    [sym_max_] = ACTIONS(51),
    [sym_min_] = ACTIONS(51),
    [sym_sum_] = ACTIONS(51),
    [sym_stdev_] = ACTIONS(51),
    [sym_stdevp_] = ACTIONS(51),
    [sym_var_] = ACTIONS(51),
    [sym_varp_] = ACTIONS(51),
    [sym_all_] = ACTIONS(73),
    [sym_distinct_] = ACTIONS(73),
    [sym_ntile_] = ACTIONS(53),
    [sym_rank_] = ACTIONS(55),
    [sym_dense_rank_] = ACTIONS(55),
    [sym_row_number_] = ACTIONS(55),
    [sym_binary] = ACTIONS(57),
    [anon_sym_DOLLAR] = ACTIONS(59),
    [aux_sym_real__token1] = ACTIONS(61),
    [aux_sym_id__token1] = ACTIONS(13),
    [aux_sym_id__token2] = ACTIONS(15),
  },
  [6] = {
    [sym_func_proc_name_database_schema] = STATE(659),
    [sym_func_proc_name_schema] = STATE(121),
    [sym_LOCAL_ID_] = STATE(145),
    [sym_full_column_name] = STATE(155),
    [sym_expression] = STATE(635),
    [sym_function_call] = STATE(155),
    [sym_hierarchyid_static_method] = STATE(122),
    [sym_partition_function] = STATE(122),
    [sym_scalar_function_name] = STATE(567),
    [sym_analytic_windowed_function] = STATE(122),
    [sym_aggregate_windowed_function] = STATE(122),
    [sym_all_distinct_expression] = STATE(615),
    [sym_ranking_windowed_function] = STATE(122),
    [sym_primitive_expression] = STATE(155),
    [sym_primitive_constant] = STATE(145),
    [sym_money_] = STATE(173),
    [sym_real_] = STATE(173),
    [sym_float_] = STATE(173),
    [sym_decimal_] = STATE(173),
    [sym_id_] = STATE(485),
    [sym_keyword] = STATE(78),
    [aux_sym_go_statement_token1] = ACTIONS(67),
    [aux_sym_func_proc_name_server_database_schema_token1] = ACTIONS(19),
    [aux_sym_execute_statement_arg_named_token1] = ACTIONS(69),
    [sym_default] = ACTIONS(23),
    [sym_null_] = ACTIONS(23),
    [aux_sym_constant_token3] = ACTIONS(25),
    [sym_string_lit] = ACTIONS(57),
    [sym_asterisk] = ACTIONS(77),
    [sym_hierachyid_] = ACTIONS(31),
    [sym_dollar_partition_] = ACTIONS(33),
    [sym_right_] = ACTIONS(35),
    [sym_left_] = ACTIONS(35),
    [sym_binary_checksum_] = ACTIONS(37),
    [sym_checksum_] = ACTIONS(37),
    [sym_percentile_cont_] = ACTIONS(39),
    [sym_percentile_disc_] = ACTIONS(39),
    [sym_cume_dist_] = ACTIONS(41),
    [sym_percent_rank_] = ACTIONS(41),
    [sym_lag_] = ACTIONS(43),
    [sym_lead_] = ACTIONS(43),
    [sym_first_value_] = ACTIONS(45),
    [sym_last_value_] = ACTIONS(45),
    [sym_checksum_agg_] = ACTIONS(47),
    [sym_count_] = ACTIONS(49),
    [sym_count_big_] = ACTIONS(49),
    [sym_avg_] = ACTIONS(51),
    [sym_max_] = ACTIONS(51),
    [sym_min_] = ACTIONS(51),
    [sym_sum_] = ACTIONS(51),
    [sym_stdev_] = ACTIONS(51),
    [sym_stdevp_] = ACTIONS(51),
    [sym_var_] = ACTIONS(51),
    [sym_varp_] = ACTIONS(51),
    [sym_all_] = ACTIONS(73),
    [sym_distinct_] = ACTIONS(73),
    [sym_ntile_] = ACTIONS(53),
    [sym_rank_] = ACTIONS(55),
    [sym_dense_rank_] = ACTIONS(55),
    [sym_row_number_] = ACTIONS(55),
    [sym_binary] = ACTIONS(57),
    [anon_sym_DOLLAR] = ACTIONS(59),
    [aux_sym_real__token1] = ACTIONS(61),
    [aux_sym_id__token1] = ACTIONS(13),
    [aux_sym_id__token2] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 35,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(616), 1,
      sym_all_distinct_expression,
    STATE(635), 1,
      sym_expression,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(73), 2,
      sym_all_,
      sym_distinct_,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [135] = 35,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(635), 1,
      sym_expression,
    STATE(650), 1,
      sym_all_distinct_expression,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(73), 2,
      sym_all_,
      sym_distinct_,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [270] = 35,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(635), 1,
      sym_expression,
    STATE(637), 1,
      sym_all_distinct_expression,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(73), 2,
      sym_all_,
      sym_distinct_,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [405] = 35,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(580), 1,
      sym_all_distinct_expression,
    STATE(635), 1,
      sym_expression,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(73), 2,
      sym_all_,
      sym_distinct_,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [540] = 35,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(582), 1,
      sym_all_distinct_expression,
    STATE(635), 1,
      sym_expression,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(73), 2,
      sym_all_,
      sym_distinct_,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [675] = 35,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(614), 1,
      sym_all_distinct_expression,
    STATE(635), 1,
      sym_expression,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(73), 2,
      sym_all_,
      sym_distinct_,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [810] = 35,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(501), 1,
      sym_expression,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(577), 1,
      sym_expression_list_,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [944] = 35,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(501), 1,
      sym_expression,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(592), 1,
      sym_expression_list_,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1078] = 35,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(501), 1,
      sym_expression,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(612), 1,
      sym_expression_list_,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1212] = 35,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(85), 1,
      sym_asterisk,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(501), 1,
      sym_expression,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(577), 1,
      sym_expression_list_,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1346] = 35,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(87), 1,
      sym_asterisk,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(501), 1,
      sym_expression,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(612), 1,
      sym_expression_list_,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1480] = 35,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(89), 1,
      sym_asterisk,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(501), 1,
      sym_expression,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(592), 1,
      sym_expression_list_,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1614] = 34,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(475), 1,
      sym_expression_list_,
    STATE(485), 1,
      sym_id_,
    STATE(501), 1,
      sym_expression,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1745] = 34,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(91), 1,
      aux_sym_go_statement_token1,
    ACTIONS(93), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(97), 1,
      aux_sym_constant_token3,
    ACTIONS(101), 1,
      sym_hierachyid_,
    ACTIONS(103), 1,
      sym_dollar_partition_,
    ACTIONS(115), 1,
      sym_checksum_agg_,
    ACTIONS(121), 1,
      sym_ntile_,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      aux_sym_real__token1,
    ACTIONS(129), 1,
      aux_sym_id__token1,
    ACTIONS(131), 1,
      aux_sym_id__token2,
    STATE(91), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(217), 1,
      sym_id_,
    STATE(341), 1,
      sym_expression,
    STATE(468), 1,
      sym_order_by_expression,
    STATE(658), 1,
      sym_scalar_function_name,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(95), 2,
      sym_default,
      sym_null_,
    ACTIONS(99), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(105), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(107), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(109), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(111), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(113), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(117), 2,
      sym_count_,
      sym_count_big_,
    STATE(324), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(123), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(316), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(320), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(315), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(119), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1876] = 34,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(91), 1,
      aux_sym_go_statement_token1,
    ACTIONS(93), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(97), 1,
      aux_sym_constant_token3,
    ACTIONS(101), 1,
      sym_hierachyid_,
    ACTIONS(103), 1,
      sym_dollar_partition_,
    ACTIONS(115), 1,
      sym_checksum_agg_,
    ACTIONS(121), 1,
      sym_ntile_,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      aux_sym_real__token1,
    ACTIONS(129), 1,
      aux_sym_id__token1,
    ACTIONS(131), 1,
      aux_sym_id__token2,
    STATE(91), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(217), 1,
      sym_id_,
    STATE(341), 1,
      sym_expression,
    STATE(459), 1,
      sym_order_by_expression,
    STATE(658), 1,
      sym_scalar_function_name,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(95), 2,
      sym_default,
      sym_null_,
    ACTIONS(99), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(105), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(107), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(109), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(111), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(113), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(117), 2,
      sym_count_,
      sym_count_big_,
    STATE(324), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(123), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(316), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(320), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(315), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(119), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2007] = 34,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(91), 1,
      aux_sym_go_statement_token1,
    ACTIONS(93), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(97), 1,
      aux_sym_constant_token3,
    ACTIONS(101), 1,
      sym_hierachyid_,
    ACTIONS(103), 1,
      sym_dollar_partition_,
    ACTIONS(115), 1,
      sym_checksum_agg_,
    ACTIONS(121), 1,
      sym_ntile_,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      aux_sym_real__token1,
    ACTIONS(129), 1,
      aux_sym_id__token1,
    ACTIONS(131), 1,
      aux_sym_id__token2,
    STATE(91), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(217), 1,
      sym_id_,
    STATE(404), 1,
      sym_expression,
    STATE(475), 1,
      sym_expression_list_,
    STATE(658), 1,
      sym_scalar_function_name,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(95), 2,
      sym_default,
      sym_null_,
    ACTIONS(99), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(105), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(107), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(109), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(111), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(113), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(117), 2,
      sym_count_,
      sym_count_big_,
    STATE(324), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(123), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(316), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(320), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(315), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(119), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2138] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(601), 1,
      sym_expression,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2266] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(594), 1,
      sym_expression,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2394] = 33,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(133), 1,
      aux_sym_go_statement_token1,
    ACTIONS(135), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(139), 1,
      aux_sym_constant_token3,
    ACTIONS(143), 1,
      sym_hierachyid_,
    ACTIONS(145), 1,
      sym_dollar_partition_,
    ACTIONS(157), 1,
      sym_checksum_agg_,
    ACTIONS(163), 1,
      sym_ntile_,
    ACTIONS(167), 1,
      anon_sym_DOLLAR,
    ACTIONS(169), 1,
      aux_sym_real__token1,
    ACTIONS(171), 1,
      aux_sym_id__token1,
    ACTIONS(173), 1,
      aux_sym_id__token2,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(200), 1,
      sym_id_,
    STATE(213), 1,
      sym_keyword,
    STATE(215), 1,
      sym_expression,
    STATE(638), 1,
      sym_scalar_function_name,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(137), 2,
      sym_default,
      sym_null_,
    ACTIONS(141), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(147), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(149), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(151), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(153), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(155), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(159), 2,
      sym_count_,
      sym_count_big_,
    STATE(231), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(165), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(228), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(230), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(226), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(161), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2522] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(634), 1,
      sym_expression,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2650] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(633), 1,
      sym_expression,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2778] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(530), 1,
      sym_expression,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2906] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(627), 1,
      sym_expression,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [3034] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    STATE(684), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [3162] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    STATE(741), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [3290] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(439), 1,
      sym_expression,
    STATE(485), 1,
      sym_id_,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [3418] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(606), 1,
      sym_expression,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [3546] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(588), 1,
      sym_expression,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [3674] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(622), 1,
      sym_expression,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [3802] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(620), 1,
      sym_expression,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [3930] = 33,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(91), 1,
      aux_sym_go_statement_token1,
    ACTIONS(93), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(97), 1,
      aux_sym_constant_token3,
    ACTIONS(101), 1,
      sym_hierachyid_,
    ACTIONS(103), 1,
      sym_dollar_partition_,
    ACTIONS(115), 1,
      sym_checksum_agg_,
    ACTIONS(121), 1,
      sym_ntile_,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      aux_sym_real__token1,
    ACTIONS(129), 1,
      aux_sym_id__token1,
    ACTIONS(131), 1,
      aux_sym_id__token2,
    STATE(91), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(217), 1,
      sym_id_,
    STATE(439), 1,
      sym_expression,
    STATE(658), 1,
      sym_scalar_function_name,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(95), 2,
      sym_default,
      sym_null_,
    ACTIONS(99), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(105), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(107), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(109), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(111), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(113), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(117), 2,
      sym_count_,
      sym_count_big_,
    STATE(324), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(123), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(316), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(320), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(315), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(119), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [4058] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    STATE(713), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [4186] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    STATE(690), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [4314] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    STATE(683), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [4442] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    STATE(740), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [4570] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(600), 1,
      sym_expression,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [4698] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(623), 1,
      sym_expression,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [4826] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(589), 1,
      sym_expression,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [4954] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(646), 1,
      sym_expression,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [5082] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(629), 1,
      sym_expression,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [5210] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    STATE(712), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [5338] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    STATE(705), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [5466] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(647), 1,
      sym_expression,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [5594] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(513), 1,
      sym_expression,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [5722] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(572), 1,
      sym_expression,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [5850] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(653), 1,
      sym_expression,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [5978] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(610), 1,
      sym_expression,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [6106] = 33,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(133), 1,
      aux_sym_go_statement_token1,
    ACTIONS(135), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(139), 1,
      aux_sym_constant_token3,
    ACTIONS(143), 1,
      sym_hierachyid_,
    ACTIONS(145), 1,
      sym_dollar_partition_,
    ACTIONS(157), 1,
      sym_checksum_agg_,
    ACTIONS(163), 1,
      sym_ntile_,
    ACTIONS(167), 1,
      anon_sym_DOLLAR,
    ACTIONS(169), 1,
      aux_sym_real__token1,
    ACTIONS(171), 1,
      aux_sym_id__token1,
    ACTIONS(173), 1,
      aux_sym_id__token2,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(200), 1,
      sym_id_,
    STATE(213), 1,
      sym_keyword,
    STATE(274), 1,
      sym_expression,
    STATE(638), 1,
      sym_scalar_function_name,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(137), 2,
      sym_default,
      sym_null_,
    ACTIONS(141), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(147), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(149), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(151), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(153), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(155), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(159), 2,
      sym_count_,
      sym_count_big_,
    STATE(231), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(165), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(228), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(230), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(226), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(161), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [6234] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    STATE(721), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [6362] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    STATE(666), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [6490] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_hierachyid_,
    ACTIONS(33), 1,
      sym_dollar_partition_,
    ACTIONS(47), 1,
      sym_checksum_agg_,
    ACTIONS(53), 1,
      sym_ntile_,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(121), 1,
      sym_func_proc_name_schema,
    STATE(485), 1,
      sym_id_,
    STATE(567), 1,
      sym_scalar_function_name,
    STATE(659), 1,
      sym_func_proc_name_database_schema,
    STATE(667), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(35), 2,
      sym_right_,
      sym_left_,
    ACTIONS(37), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(39), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(41), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(43), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(45), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(49), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(57), 2,
      sym_string_lit,
      sym_binary,
    STATE(145), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(155), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(122), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(51), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [6618] = 2,
    ACTIONS(177), 5,
      aux_sym_execute_statement_arg_named_token1,
      sym_string_lit,
      sym_dollar_partition_,
      sym_binary,
      aux_sym_id__token2,
    ACTIONS(175), 36,
      aux_sym_go_statement_token1,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_default,
      sym_null_,
      aux_sym_constant_token3,
      sym_hierachyid_,
      sym_right_,
      sym_left_,
      sym_binary_checksum_,
      sym_checksum_,
      sym_percentile_cont_,
      sym_percentile_disc_,
      sym_cume_dist_,
      sym_percent_rank_,
      sym_lag_,
      sym_lead_,
      sym_first_value_,
      sym_last_value_,
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
      anon_sym_DOLLAR,
      aux_sym_real__token1,
      aux_sym_id__token1,
  [6664] = 22,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(181), 1,
      aux_sym_go_statement_token1,
    ACTIONS(184), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(187), 1,
      sym_execute,
    ACTIONS(190), 1,
      sym_select,
    ACTIONS(193), 1,
      aux_sym_id__token1,
    ACTIONS(196), 1,
      aux_sym_id__token2,
    STATE(66), 1,
      sym_func_proc_name_server_database_schema,
    STATE(124), 1,
      sym_id_,
    STATE(135), 1,
      sym_keyword,
    STATE(142), 1,
      sym_execute_body_batch,
    STATE(180), 1,
      sym_func_proc_name_database_schema,
    STATE(181), 1,
      sym_func_proc_name_schema,
    STATE(282), 1,
      sym_go_statement,
    STATE(312), 1,
      sym_select_statement_standalone,
    STATE(323), 1,
      sym_select_statement,
    STATE(326), 1,
      sym_query_specification,
    STATE(330), 1,
      sym_execute_statement,
    STATE(342), 1,
      sym_query_expression,
    STATE(59), 2,
      sym_batch,
      aux_sym_tsql_file_repeat1,
    STATE(73), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(340), 2,
      sym_another_statement,
      sym_dml_clause,
  [6734] = 22,
    ACTIONS(5), 1,
      aux_sym_go_statement_token1,
    ACTIONS(9), 1,
      sym_execute,
    ACTIONS(11), 1,
      sym_select,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(201), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(203), 1,
      aux_sym_id__token1,
    ACTIONS(205), 1,
      aux_sym_id__token2,
    STATE(66), 1,
      sym_func_proc_name_server_database_schema,
    STATE(124), 1,
      sym_id_,
    STATE(135), 1,
      sym_keyword,
    STATE(142), 1,
      sym_execute_body_batch,
    STATE(180), 1,
      sym_func_proc_name_database_schema,
    STATE(181), 1,
      sym_func_proc_name_schema,
    STATE(282), 1,
      sym_go_statement,
    STATE(312), 1,
      sym_select_statement_standalone,
    STATE(323), 1,
      sym_select_statement,
    STATE(326), 1,
      sym_query_specification,
    STATE(330), 1,
      sym_execute_statement,
    STATE(342), 1,
      sym_query_expression,
    STATE(59), 2,
      sym_batch,
      aux_sym_tsql_file_repeat1,
    STATE(73), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(340), 2,
      sym_another_statement,
      sym_dml_clause,
  [6804] = 14,
    ACTIONS(211), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(217), 1,
      aux_sym_constant_token2,
    ACTIONS(219), 1,
      sym_WITH,
    STATE(194), 1,
      sym_execute_statement_arg_named,
    STATE(196), 1,
      sym_execute_statement_arg_unnamed,
    STATE(198), 1,
      sym_LOCAL_ID_,
    STATE(220), 1,
      sym_execute_parameter,
    STATE(225), 1,
      sym_keyword,
    STATE(295), 1,
      sym_execute_statement_arg,
    ACTIONS(213), 2,
      sym_default,
      sym_null_,
    ACTIONS(215), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(223), 2,
      sym_constant,
      sym_id_,
    ACTIONS(207), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(209), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6856] = 14,
    ACTIONS(211), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(217), 1,
      aux_sym_constant_token2,
    ACTIONS(225), 1,
      sym_WITH,
    STATE(194), 1,
      sym_execute_statement_arg_named,
    STATE(196), 1,
      sym_execute_statement_arg_unnamed,
    STATE(198), 1,
      sym_LOCAL_ID_,
    STATE(220), 1,
      sym_execute_parameter,
    STATE(225), 1,
      sym_keyword,
    STATE(289), 1,
      sym_execute_statement_arg,
    ACTIONS(213), 2,
      sym_default,
      sym_null_,
    ACTIONS(215), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(223), 2,
      sym_constant,
      sym_id_,
    ACTIONS(221), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(223), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6908] = 5,
    ACTIONS(231), 1,
      anon_sym_EQ,
    STATE(54), 1,
      sym_assignment_operator,
    ACTIONS(227), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
    ACTIONS(229), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(233), 8,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [6941] = 16,
    ACTIONS(129), 1,
      aux_sym_id__token1,
    ACTIONS(131), 1,
      aux_sym_id__token2,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    ACTIONS(239), 1,
      anon_sym_SEMI,
    ACTIONS(241), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(247), 1,
      aux_sym_constant_token2,
    STATE(91), 1,
      sym_keyword,
    STATE(356), 1,
      sym_LOCAL_ID_,
    STATE(357), 1,
      sym_execute_statement_arg,
    STATE(360), 1,
      sym_execute_statement_arg_named,
    STATE(361), 1,
      sym_execute_statement_arg_unnamed,
    STATE(400), 1,
      sym_execute_parameter,
    ACTIONS(243), 2,
      sym_default,
      sym_null_,
    ACTIONS(245), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(371), 2,
      sym_constant,
      sym_id_,
    ACTIONS(237), 3,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [6995] = 2,
    ACTIONS(251), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(249), 15,
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
  [7021] = 15,
    ACTIONS(129), 1,
      aux_sym_id__token1,
    ACTIONS(131), 1,
      aux_sym_id__token2,
    ACTIONS(239), 1,
      anon_sym_SEMI,
    ACTIONS(241), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(247), 1,
      aux_sym_constant_token2,
    STATE(91), 1,
      sym_keyword,
    STATE(356), 1,
      sym_LOCAL_ID_,
    STATE(357), 1,
      sym_execute_statement_arg,
    STATE(360), 1,
      sym_execute_statement_arg_named,
    STATE(361), 1,
      sym_execute_statement_arg_unnamed,
    STATE(400), 1,
      sym_execute_parameter,
    ACTIONS(243), 2,
      sym_default,
      sym_null_,
    ACTIONS(245), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(371), 2,
      sym_constant,
      sym_id_,
    ACTIONS(237), 3,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [7072] = 2,
    ACTIONS(251), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(249), 12,
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
  [7096] = 10,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      aux_sym_AS_token1,
    ACTIONS(261), 1,
      sym_string_lit,
    STATE(80), 1,
      sym_udt_method_arguments,
    STATE(213), 1,
      sym_keyword,
    STATE(243), 1,
      sym_column_alias,
    STATE(246), 1,
      sym_id_,
    STATE(256), 1,
      sym_as_column_alias,
    ACTIONS(253), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(255), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [7135] = 3,
    ACTIONS(267), 1,
      sym_PLUS,
    ACTIONS(265), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(263), 10,
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
  [7160] = 13,
    ACTIONS(271), 1,
      aux_sym_go_statement_token1,
    ACTIONS(274), 1,
      sym_execute,
    ACTIONS(277), 1,
      sym_select,
    ACTIONS(280), 1,
      aux_sym_id__token1,
    STATE(312), 1,
      sym_select_statement_standalone,
    STATE(323), 1,
      sym_select_statement,
    STATE(326), 1,
      sym_query_specification,
    STATE(330), 1,
      sym_execute_statement,
    STATE(342), 1,
      sym_query_expression,
    STATE(81), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(290), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    STATE(340), 2,
      sym_another_statement,
      sym_dml_clause,
    ACTIONS(269), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [7205] = 3,
    ACTIONS(286), 1,
      sym_PLUS,
    ACTIONS(284), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(282), 10,
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
  [7230] = 2,
    ACTIONS(290), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(288), 11,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_id__token2,
  [7253] = 13,
    ACTIONS(294), 1,
      aux_sym_go_statement_token1,
    ACTIONS(297), 1,
      sym_execute,
    ACTIONS(300), 1,
      sym_select,
    ACTIONS(303), 1,
      aux_sym_id__token1,
    STATE(312), 1,
      sym_select_statement_standalone,
    STATE(323), 1,
      sym_select_statement,
    STATE(326), 1,
      sym_query_specification,
    STATE(330), 1,
      sym_execute_statement,
    STATE(342), 1,
      sym_query_expression,
    STATE(81), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(285), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    STATE(340), 2,
      sym_another_statement,
      sym_dml_clause,
    ACTIONS(292), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [7298] = 14,
    ACTIONS(211), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(217), 1,
      aux_sym_constant_token2,
    ACTIONS(305), 1,
      aux_sym_go_statement_token1,
    ACTIONS(307), 1,
      aux_sym_id__token1,
    ACTIONS(309), 1,
      aux_sym_id__token2,
    STATE(198), 1,
      sym_LOCAL_ID_,
    STATE(207), 1,
      sym_execute_statement_arg_named,
    STATE(208), 1,
      sym_execute_statement_arg_unnamed,
    STATE(219), 1,
      sym_execute_statement_arg,
    STATE(220), 1,
      sym_execute_parameter,
    STATE(225), 1,
      sym_keyword,
    ACTIONS(213), 2,
      sym_default,
      sym_null_,
    ACTIONS(215), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(223), 2,
      sym_constant,
      sym_id_,
  [7344] = 14,
    ACTIONS(91), 1,
      aux_sym_go_statement_token1,
    ACTIONS(129), 1,
      aux_sym_id__token1,
    ACTIONS(131), 1,
      aux_sym_id__token2,
    ACTIONS(241), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(247), 1,
      aux_sym_constant_token2,
    STATE(91), 1,
      sym_keyword,
    STATE(356), 1,
      sym_LOCAL_ID_,
    STATE(360), 1,
      sym_execute_statement_arg_named,
    STATE(361), 1,
      sym_execute_statement_arg_unnamed,
    STATE(391), 1,
      sym_execute_statement_arg,
    STATE(400), 1,
      sym_execute_parameter,
    ACTIONS(243), 2,
      sym_default,
      sym_null_,
    ACTIONS(245), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(371), 2,
      sym_constant,
      sym_id_,
  [7390] = 4,
    ACTIONS(286), 1,
      sym_PLUS,
    ACTIONS(311), 1,
      aux_sym_execute_body_token1,
    ACTIONS(284), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(282), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [7416] = 2,
    ACTIONS(315), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(313), 10,
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
  [7438] = 2,
    ACTIONS(319), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(317), 11,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_id__token2,
  [7460] = 11,
    ACTIONS(133), 1,
      aux_sym_go_statement_token1,
    ACTIONS(171), 1,
      aux_sym_id__token1,
    ACTIONS(173), 1,
      aux_sym_id__token2,
    ACTIONS(259), 1,
      aux_sym_AS_token1,
    ACTIONS(261), 1,
      sym_string_lit,
    STATE(213), 1,
      sym_keyword,
    STATE(243), 1,
      sym_column_alias,
    STATE(244), 1,
      sym_as_column_alias,
    STATE(246), 1,
      sym_id_,
    ACTIONS(323), 3,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
    ACTIONS(321), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
  [7499] = 8,
    ACTIONS(259), 1,
      aux_sym_AS_token1,
    ACTIONS(261), 1,
      sym_string_lit,
    STATE(213), 1,
      sym_keyword,
    STATE(243), 1,
      sym_column_alias,
    STATE(246), 1,
      sym_id_,
    STATE(276), 1,
      sym_as_column_alias,
    ACTIONS(325), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(327), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [7532] = 11,
    ACTIONS(333), 1,
      sym_execute,
    ACTIONS(336), 1,
      sym_select,
    STATE(312), 1,
      sym_select_statement_standalone,
    STATE(323), 1,
      sym_select_statement,
    STATE(326), 1,
      sym_query_specification,
    STATE(330), 1,
      sym_execute_statement,
    STATE(342), 1,
      sym_query_expression,
    ACTIONS(331), 2,
      aux_sym_go_statement_token1,
      aux_sym_id__token1,
    STATE(81), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(340), 2,
      sym_another_statement,
      sym_dml_clause,
    ACTIONS(329), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [7571] = 2,
    ACTIONS(341), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(339), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [7591] = 6,
    ACTIONS(347), 1,
      aux_sym_constant_token3,
    STATE(365), 1,
      sym_integer,
    ACTIONS(290), 2,
      sym_default,
      sym_null_,
    ACTIONS(343), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(288), 4,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(345), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [7619] = 14,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(349), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      sym_string_lit,
    ACTIONS(355), 1,
      aux_sym_id__token1,
    ACTIONS(357), 1,
      aux_sym_id__token2,
    STATE(76), 1,
      sym_LOCAL_ID_,
    STATE(95), 1,
      sym_keyword,
    STATE(96), 1,
      sym_func_proc_name_database_schema,
    STATE(97), 1,
      sym_func_proc_name_schema,
    STATE(98), 1,
      sym_id_,
    STATE(317), 1,
      sym_execute_body,
    STATE(61), 2,
      sym_func_proc_name_server_database_schema,
      sym_execute_var_string,
  [7663] = 13,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(359), 1,
      aux_sym_go_statement_token1,
    ACTIONS(361), 1,
      sym_execute,
    ACTIONS(363), 1,
      sym_select,
    STATE(286), 1,
      sym_go_statement,
    STATE(312), 1,
      sym_select_statement_standalone,
    STATE(323), 1,
      sym_select_statement,
    STATE(326), 1,
      sym_query_specification,
    STATE(330), 1,
      sym_execute_statement,
    STATE(342), 1,
      sym_query_expression,
    STATE(463), 1,
      aux_sym_tsql_file_repeat2,
    STATE(70), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(340), 2,
      sym_another_statement,
      sym_dml_clause,
  [7705] = 3,
    ACTIONS(369), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(365), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(367), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [7727] = 3,
    ACTIONS(375), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(371), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(373), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [7749] = 4,
    ACTIONS(381), 1,
      aux_sym_over__token1,
    STATE(152), 1,
      sym_over_clause,
    ACTIONS(379), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(377), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [7773] = 2,
    ACTIONS(385), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(383), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [7793] = 4,
    ACTIONS(381), 1,
      aux_sym_over__token1,
    STATE(150), 1,
      sym_over_clause,
    ACTIONS(389), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(387), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [7817] = 1,
    ACTIONS(317), 15,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_execute,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_select,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [7835] = 2,
    ACTIONS(393), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(391), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [7855] = 3,
    ACTIONS(399), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(395), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(397), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [7877] = 3,
    ACTIONS(405), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(401), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(403), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [7899] = 2,
    ACTIONS(319), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(317), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [7919] = 2,
    ACTIONS(409), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(407), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [7939] = 2,
    ACTIONS(413), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(411), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [7959] = 3,
    ACTIONS(419), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(415), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(417), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [7981] = 2,
    ACTIONS(290), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(288), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_body_token1,
      anon_sym_LPAREN,
      sym_string_lit,
      anon_sym_COLON_COLON,
      aux_sym_id__token2,
  [8001] = 2,
    ACTIONS(423), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(421), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8021] = 1,
    ACTIONS(288), 15,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_execute,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_select,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8039] = 3,
    ACTIONS(429), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(425), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(427), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [8061] = 2,
    ACTIONS(433), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(431), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8081] = 6,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(441), 1,
      aux_sym_execute_body_token1,
    ACTIONS(443), 1,
      anon_sym_COLON_COLON,
    ACTIONS(435), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_string_lit,
      aux_sym_id__token2,
    ACTIONS(437), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [8109] = 2,
    ACTIONS(319), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(317), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_body_token1,
      anon_sym_LPAREN,
      sym_string_lit,
      anon_sym_COLON_COLON,
      aux_sym_id__token2,
  [8129] = 2,
    ACTIONS(447), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(445), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8149] = 2,
    ACTIONS(451), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(449), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8169] = 2,
    ACTIONS(455), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(453), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8189] = 3,
    ACTIONS(457), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(373), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(371), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8210] = 11,
    ACTIONS(91), 1,
      aux_sym_go_statement_token1,
    ACTIONS(93), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(129), 1,
      aux_sym_id__token1,
    ACTIONS(131), 1,
      aux_sym_id__token2,
    ACTIONS(247), 1,
      aux_sym_constant_token2,
    STATE(91), 1,
      sym_keyword,
    STATE(356), 1,
      sym_LOCAL_ID_,
    STATE(396), 1,
      sym_execute_parameter,
    ACTIONS(243), 2,
      sym_default,
      sym_null_,
    ACTIONS(245), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(371), 2,
      sym_constant,
      sym_id_,
  [8247] = 11,
    ACTIONS(217), 1,
      aux_sym_constant_token2,
    ACTIONS(305), 1,
      aux_sym_go_statement_token1,
    ACTIONS(307), 1,
      aux_sym_id__token1,
    ACTIONS(309), 1,
      aux_sym_id__token2,
    ACTIONS(459), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(198), 1,
      sym_LOCAL_ID_,
    STATE(221), 1,
      sym_execute_parameter,
    STATE(225), 1,
      sym_keyword,
    ACTIONS(213), 2,
      sym_default,
      sym_null_,
    ACTIONS(215), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(223), 2,
      sym_constant,
      sym_id_,
  [8284] = 3,
    ACTIONS(461), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(367), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(365), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8305] = 3,
    ACTIONS(467), 1,
      aux_sym_real__token2,
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
  [8326] = 3,
    ACTIONS(467), 1,
      aux_sym_real__token2,
    ACTIONS(471), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(469), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [8347] = 3,
    ACTIONS(473), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(403), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(401), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8368] = 3,
    ACTIONS(475), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(417), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(415), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8389] = 3,
    ACTIONS(477), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(427), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(425), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8410] = 3,
    ACTIONS(479), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(397), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(395), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8431] = 2,
    ACTIONS(290), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(288), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8450] = 1,
    ACTIONS(249), 14,
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
  [8467] = 2,
    ACTIONS(413), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(411), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_LPAREN,
      aux_sym_id__token2,
  [8486] = 2,
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
  [8504] = 2,
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
  [8522] = 3,
    ACTIONS(489), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(415), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(417), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [8542] = 10,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(491), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(499), 1,
      sym_dollar_partition_,
    STATE(78), 1,
      sym_keyword,
    STATE(517), 1,
      sym_id_,
    ACTIONS(493), 2,
      sym_get_descendant_,
      sym_get_reparented_value_,
    ACTIONS(495), 2,
      sym_getancestor_,
      sym_is_descendant_of_,
    ACTIONS(497), 2,
      sym_getlevel_,
      sym_tostring_,
  [8576] = 3,
    ACTIONS(501), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(401), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(403), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [8596] = 2,
    ACTIONS(505), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(503), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [8614] = 2,
    ACTIONS(509), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(507), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [8632] = 2,
    ACTIONS(409), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(407), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8650] = 2,
    ACTIONS(513), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(511), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [8668] = 2,
    ACTIONS(433), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(431), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8686] = 2,
    ACTIONS(423), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(421), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8704] = 10,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(491), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(499), 1,
      sym_dollar_partition_,
    STATE(78), 1,
      sym_keyword,
    STATE(494), 1,
      sym_id_,
    ACTIONS(493), 2,
      sym_get_descendant_,
      sym_get_reparented_value_,
    ACTIONS(495), 2,
      sym_getancestor_,
      sym_is_descendant_of_,
    ACTIONS(497), 2,
      sym_getlevel_,
      sym_tostring_,
  [8738] = 2,
    ACTIONS(517), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(515), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [8756] = 2,
    ACTIONS(319), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(317), 7,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8774] = 2,
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
  [8792] = 2,
    ACTIONS(521), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(519), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [8810] = 3,
    ACTIONS(523), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(425), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(427), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [8830] = 3,
    ACTIONS(525), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(395), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(397), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [8850] = 2,
    ACTIONS(393), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(391), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8868] = 2,
    ACTIONS(529), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(527), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [8886] = 11,
    ACTIONS(359), 1,
      aux_sym_go_statement_token1,
    ACTIONS(361), 1,
      sym_execute,
    ACTIONS(363), 1,
      sym_select,
    STATE(288), 1,
      sym_go_statement,
    STATE(312), 1,
      sym_select_statement_standalone,
    STATE(323), 1,
      sym_select_statement,
    STATE(326), 1,
      sym_query_specification,
    STATE(330), 1,
      sym_execute_statement,
    STATE(342), 1,
      sym_query_expression,
    STATE(70), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(340), 2,
      sym_another_statement,
      sym_dml_clause,
  [8922] = 10,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(491), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(537), 1,
      sym_dollar_partition_,
    STATE(78), 1,
      sym_keyword,
    STATE(517), 1,
      sym_id_,
    ACTIONS(531), 2,
      sym_get_descendant_,
      sym_get_reparented_value_,
    ACTIONS(533), 2,
      sym_getancestor_,
      sym_is_descendant_of_,
    ACTIONS(535), 2,
      sym_getlevel_,
      sym_tostring_,
  [8956] = 2,
    ACTIONS(455), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(453), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8974] = 2,
    ACTIONS(229), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(227), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [8992] = 2,
    ACTIONS(541), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(539), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [9010] = 2,
    ACTIONS(545), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(543), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [9028] = 2,
    ACTIONS(549), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(547), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [9046] = 2,
    ACTIONS(553), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(551), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [9064] = 2,
    ACTIONS(557), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(555), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [9082] = 3,
    ACTIONS(559), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(371), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(373), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9102] = 2,
    ACTIONS(563), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(561), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [9120] = 2,
    ACTIONS(567), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(565), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [9138] = 3,
    ACTIONS(569), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(365), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(367), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9158] = 2,
    ACTIONS(573), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(571), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [9176] = 2,
    ACTIONS(577), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(575), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [9194] = 2,
    ACTIONS(581), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(579), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [9212] = 2,
    ACTIONS(585), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(583), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [9230] = 2,
    ACTIONS(589), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(587), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [9248] = 2,
    ACTIONS(593), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(591), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [9266] = 2,
    ACTIONS(597), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(595), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [9284] = 2,
    ACTIONS(451), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(449), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [9302] = 2,
    ACTIONS(601), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(599), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [9320] = 2,
    ACTIONS(341), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(339), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [9338] = 2,
    ACTIONS(605), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(603), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [9356] = 2,
    ACTIONS(609), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(607), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [9374] = 2,
    ACTIONS(447), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(445), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [9392] = 2,
    ACTIONS(613), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(611), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [9410] = 12,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(349), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(353), 1,
      sym_string_lit,
    ACTIONS(355), 1,
      aux_sym_id__token1,
    ACTIONS(357), 1,
      aux_sym_id__token2,
    STATE(71), 1,
      sym_LOCAL_ID_,
    STATE(95), 1,
      sym_keyword,
    STATE(96), 1,
      sym_func_proc_name_database_schema,
    STATE(97), 1,
      sym_func_proc_name_schema,
    STATE(98), 1,
      sym_id_,
    STATE(62), 2,
      sym_func_proc_name_server_database_schema,
      sym_execute_var_string,
  [9448] = 2,
    ACTIONS(290), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(288), 7,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [9466] = 2,
    ACTIONS(617), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(615), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [9484] = 2,
    ACTIONS(621), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(619), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [9502] = 2,
    ACTIONS(625), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(623), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [9520] = 10,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(491), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(633), 1,
      sym_dollar_partition_,
    STATE(78), 1,
      sym_keyword,
    STATE(517), 1,
      sym_id_,
    ACTIONS(627), 2,
      sym_get_descendant_,
      sym_get_reparented_value_,
    ACTIONS(629), 2,
      sym_getancestor_,
      sym_is_descendant_of_,
    ACTIONS(631), 2,
      sym_getlevel_,
      sym_tostring_,
  [9554] = 2,
    ACTIONS(637), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(635), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [9572] = 3,
    ACTIONS(441), 1,
      aux_sym_execute_body_token1,
    ACTIONS(623), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
    ACTIONS(625), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [9592] = 2,
    ACTIONS(641), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(639), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [9610] = 2,
    ACTIONS(643), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
    ACTIONS(645), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [9627] = 2,
    ACTIONS(391), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(393), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9644] = 2,
    ACTIONS(407), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(409), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9661] = 2,
    ACTIONS(411), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(413), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9678] = 2,
    ACTIONS(647), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
    ACTIONS(649), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [9695] = 2,
    ACTIONS(339), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(341), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9712] = 2,
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
  [9729] = 2,
    ACTIONS(445), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(447), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9746] = 2,
    ACTIONS(431), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(433), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9763] = 4,
    ACTIONS(651), 1,
      aux_sym_over__token1,
    STATE(251), 1,
      sym_over_clause,
    ACTIONS(377), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(379), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [9784] = 2,
    ACTIONS(449), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(451), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9801] = 2,
    ACTIONS(453), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(455), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9818] = 4,
    ACTIONS(651), 1,
      aux_sym_over__token1,
    STATE(250), 1,
      sym_over_clause,
    ACTIONS(387), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(389), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [9839] = 2,
    ACTIONS(421), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(423), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9856] = 3,
    ACTIONS(653), 1,
      anon_sym_EQ,
    ACTIONS(249), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(251), 6,
      aux_sym_go_statement_token1,
      sym_OUTPUT,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [9875] = 3,
    ACTIONS(655), 1,
      aux_sym_real__token2,
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
  [9893] = 4,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(657), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(659), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [9913] = 5,
    ACTIONS(667), 1,
      aux_sym_AS_token1,
    ACTIONS(669), 1,
      sym_AT_KEYWORD,
    STATE(557), 1,
      sym_AS,
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
  [9935] = 4,
    ACTIONS(671), 1,
      anon_sym_COMMA,
    STATE(202), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(657), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(659), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [9955] = 3,
    STATE(204), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(673), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(675), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [9973] = 3,
    ACTIONS(681), 1,
      sym_OUTPUT,
    ACTIONS(677), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(679), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [9991] = 2,
    ACTIONS(249), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(251), 6,
      aux_sym_go_statement_token1,
      sym_OUTPUT,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [10007] = 4,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(683), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(435), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_id__token2,
    ACTIONS(437), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10027] = 4,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    STATE(205), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(673), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(675), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [10047] = 4,
    ACTIONS(671), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(673), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(675), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [10067] = 3,
    ACTIONS(655), 1,
      aux_sym_real__token2,
    ACTIONS(469), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(471), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10085] = 4,
    ACTIONS(689), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(685), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(687), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [10105] = 4,
    ACTIONS(696), 1,
      anon_sym_COMMA,
    STATE(205), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(692), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(694), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [10125] = 2,
    ACTIONS(290), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(288), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_LPAREN,
      aux_sym_id__token2,
  [10141] = 3,
    STATE(211), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(657), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(659), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [10159] = 3,
    STATE(197), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(657), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(659), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [10177] = 4,
    ACTIONS(703), 1,
      anon_sym_COMMA,
    STATE(210), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(699), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(701), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10197] = 4,
    ACTIONS(709), 1,
      anon_sym_COMMA,
    STATE(210), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(705), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(707), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10217] = 3,
    STATE(205), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(673), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(675), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [10235] = 5,
    ACTIONS(667), 1,
      aux_sym_AS_token1,
    ACTIONS(716), 1,
      sym_AT_KEYWORD,
    STATE(525), 1,
      sym_AS,
    ACTIONS(712), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(714), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [10257] = 2,
    ACTIONS(319), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(317), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_LPAREN,
      aux_sym_id__token2,
  [10273] = 4,
    ACTIONS(703), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(718), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(720), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10293] = 2,
    ACTIONS(722), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(724), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10308] = 4,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    STATE(260), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(726), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(728), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [10327] = 3,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(732), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(435), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10344] = 2,
    ACTIONS(565), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(567), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10359] = 2,
    ACTIONS(685), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(687), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [10374] = 2,
    ACTIONS(734), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(736), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [10389] = 2,
    ACTIONS(738), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(740), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [10404] = 2,
    ACTIONS(742), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(744), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [10419] = 2,
    ACTIONS(677), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(679), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [10434] = 2,
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
  [10449] = 2,
    ACTIONS(317), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(319), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [10464] = 2,
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
  [10479] = 2,
    ACTIONS(288), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(290), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [10494] = 2,
    ACTIONS(571), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(573), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10509] = 4,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    STATE(233), 1,
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
  [10528] = 2,
    ACTIONS(623), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(625), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10543] = 2,
    ACTIONS(227), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(229), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10558] = 2,
    ACTIONS(746), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(748), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [10573] = 4,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    STATE(267), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(712), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(714), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [10592] = 2,
    ACTIONS(750), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(752), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [10607] = 4,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    STATE(268), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(712), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(714), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [10626] = 2,
    ACTIONS(635), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(637), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10641] = 2,
    ACTIONS(611), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(613), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10656] = 2,
    ACTIONS(692), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(694), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [10671] = 2,
    ACTIONS(515), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(517), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10686] = 2,
    ACTIONS(507), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(509), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10701] = 2,
    ACTIONS(511), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(513), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10716] = 2,
    ACTIONS(527), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(529), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10731] = 2,
    ACTIONS(754), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(756), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10746] = 2,
    ACTIONS(758), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(760), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10761] = 2,
    ACTIONS(519), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(521), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10776] = 2,
    ACTIONS(441), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(762), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10791] = 2,
    ACTIONS(539), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(541), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10806] = 2,
    ACTIONS(543), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(545), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10821] = 2,
    ACTIONS(547), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(549), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10836] = 2,
    ACTIONS(555), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(557), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10851] = 2,
    ACTIONS(561), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(563), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10866] = 2,
    ACTIONS(575), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(577), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10881] = 2,
    ACTIONS(551), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(553), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10896] = 2,
    ACTIONS(639), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(641), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10911] = 2,
    ACTIONS(619), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(621), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10926] = 2,
    ACTIONS(325), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(327), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10941] = 2,
    ACTIONS(615), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(617), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10956] = 2,
    ACTIONS(607), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(609), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10971] = 2,
    ACTIONS(603), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(605), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10986] = 4,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    STATE(267), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(764), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(766), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11005] = 2,
    ACTIONS(599), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(601), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [11020] = 2,
    ACTIONS(595), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(597), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [11035] = 3,
    ACTIONS(768), 1,
      aux_sym_over__token1,
    STATE(352), 1,
      sym_over_clause,
    ACTIONS(377), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11052] = 3,
    ACTIONS(768), 1,
      aux_sym_over__token1,
    STATE(351), 1,
      sym_over_clause,
    ACTIONS(387), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11069] = 2,
    ACTIONS(591), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(593), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [11084] = 2,
    ACTIONS(587), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(589), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [11099] = 4,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    STATE(267), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(770), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(772), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11118] = 4,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    STATE(267), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(777), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(779), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11137] = 4,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    STATE(277), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(781), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(783), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11156] = 2,
    ACTIONS(583), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(585), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [11171] = 2,
    ACTIONS(579), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(581), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [11186] = 2,
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
  [11201] = 2,
    ACTIONS(785), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(787), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [11216] = 2,
    ACTIONS(789), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(791), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [11231] = 2,
    ACTIONS(503), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(505), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [11246] = 2,
    ACTIONS(793), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(795), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [11261] = 4,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    STATE(267), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(726), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(728), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11280] = 2,
    ACTIONS(797), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(799), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [11295] = 2,
    ACTIONS(705), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(707), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [11310] = 2,
    ACTIONS(801), 1,
      aux_sym_real__token2,
    ACTIONS(463), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11324] = 3,
    ACTIONS(807), 1,
      sym_AT_KEYWORD,
    ACTIONS(803), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(805), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11340] = 3,
    STATE(285), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(292), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(303), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11356] = 4,
    ACTIONS(347), 1,
      aux_sym_constant_token3,
    STATE(365), 1,
      sym_integer,
    ACTIONS(343), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(345), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11374] = 2,
    ACTIONS(811), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(809), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [11388] = 4,
    ACTIONS(271), 1,
      aux_sym_go_statement_token1,
    STATE(291), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(269), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(280), 3,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11406] = 5,
    ACTIONS(813), 1,
      ts_builtin_sym_end,
    ACTIONS(816), 1,
      aux_sym_go_statement_token1,
    ACTIONS(269), 2,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    STATE(290), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(280), 3,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11426] = 2,
    ACTIONS(822), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(820), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [11440] = 4,
    ACTIONS(271), 1,
      aux_sym_go_statement_token1,
    STATE(290), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(269), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(280), 3,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11458] = 3,
    ACTIONS(828), 1,
      sym_WITH,
    ACTIONS(824), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(826), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11474] = 4,
    ACTIONS(832), 1,
      aux_sym_go_statement_token1,
    STATE(291), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(830), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(835), 3,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11492] = 4,
    ACTIONS(839), 1,
      aux_sym_go_statement_token1,
    STATE(291), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(837), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(842), 3,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11510] = 9,
    ACTIONS(844), 1,
      aux_sym_go_statement_token1,
    ACTIONS(846), 1,
      aux_sym_id__token1,
    ACTIONS(848), 1,
      aux_sym_id__token2,
    STATE(307), 1,
      sym_id_,
    STATE(308), 1,
      sym_full_table_name,
    STATE(313), 1,
      sym_table_source_item,
    STATE(314), 1,
      sym_table_source,
    STATE(318), 1,
      sym_table_sources,
    STATE(319), 1,
      sym_keyword,
  [11538] = 3,
    ACTIONS(854), 1,
      sym_AT_KEYWORD,
    ACTIONS(850), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(852), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11554] = 3,
    ACTIONS(860), 1,
      aux_sym_query_specification_token1,
    ACTIONS(856), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(858), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11570] = 3,
    ACTIONS(866), 1,
      sym_WITH,
    ACTIONS(862), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(864), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11586] = 2,
    ACTIONS(772), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(770), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [11600] = 2,
    ACTIONS(801), 1,
      aux_sym_real__token2,
    ACTIONS(469), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11614] = 3,
    ACTIONS(872), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(868), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_id__token2,
    ACTIONS(870), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11629] = 1,
    ACTIONS(519), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11640] = 2,
    ACTIONS(874), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(876), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11653] = 3,
    ACTIONS(882), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(878), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_id__token2,
    ACTIONS(880), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11668] = 1,
    ACTIONS(603), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11679] = 1,
    ACTIONS(607), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11690] = 1,
    ACTIONS(615), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11701] = 2,
    ACTIONS(884), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(886), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11714] = 1,
    ACTIONS(503), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11725] = 3,
    ACTIONS(892), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(888), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_id__token2,
    ACTIONS(890), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11740] = 2,
    ACTIONS(894), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(896), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11753] = 1,
    ACTIONS(619), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11764] = 2,
    ACTIONS(288), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(290), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11777] = 2,
    ACTIONS(898), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(900), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11790] = 2,
    ACTIONS(902), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(904), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11803] = 2,
    ACTIONS(906), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(908), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11816] = 2,
    ACTIONS(910), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(912), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11829] = 1,
    ACTIONS(481), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11840] = 1,
    ACTIONS(571), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11851] = 2,
    ACTIONS(914), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(916), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11864] = 2,
    ACTIONS(918), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(920), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11877] = 2,
    ACTIONS(317), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(319), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11890] = 1,
    ACTIONS(623), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11901] = 1,
    ACTIONS(485), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11912] = 1,
    ACTIONS(635), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11923] = 2,
    ACTIONS(922), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(924), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11936] = 1,
    ACTIONS(227), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11947] = 1,
    ACTIONS(515), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11958] = 2,
    ACTIONS(926), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(928), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11971] = 2,
    ACTIONS(930), 1,
      anon_sym_EQ,
    ACTIONS(249), 7,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_OUTPUT,
      sym_execute,
      sym_select,
  [11984] = 1,
    ACTIONS(507), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11995] = 1,
    ACTIONS(579), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12006] = 2,
    ACTIONS(932), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(934), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [12019] = 1,
    ACTIONS(511), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12030] = 1,
    ACTIONS(527), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12041] = 2,
    ACTIONS(936), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(938), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [12054] = 1,
    ACTIONS(583), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12065] = 2,
    ACTIONS(940), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(942), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [12078] = 7,
    ACTIONS(944), 1,
      anon_sym_RPAREN,
    ACTIONS(946), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(948), 1,
      aux_sym_order_by_clause_token1,
    STATE(377), 1,
      sym_partition_by_clause,
    STATE(466), 1,
      sym_order_by_clause,
    STATE(692), 1,
      sym_row_or_range_clause,
    ACTIONS(950), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12101] = 1,
    ACTIONS(639), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12112] = 1,
    ACTIONS(587), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12123] = 7,
    ACTIONS(946), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(948), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(952), 1,
      anon_sym_RPAREN,
    STATE(397), 1,
      sym_partition_by_clause,
    STATE(479), 1,
      sym_order_by_clause,
    STATE(626), 1,
      sym_row_or_range_clause,
    ACTIONS(950), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12146] = 3,
    ACTIONS(958), 1,
      anon_sym_SEMI,
    ACTIONS(954), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(956), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [12161] = 5,
    ACTIONS(962), 1,
      aux_sym_collation__token1,
    ACTIONS(964), 1,
      sym_asc_,
    ACTIONS(966), 1,
      sym_desc_,
    STATE(378), 1,
      sym_collation_,
    ACTIONS(960), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12180] = 2,
    ACTIONS(968), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(970), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [12193] = 1,
    ACTIONS(611), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12204] = 1,
    ACTIONS(539), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12215] = 1,
    ACTIONS(543), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12226] = 1,
    ACTIONS(547), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12237] = 1,
    ACTIONS(565), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12248] = 1,
    ACTIONS(551), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12259] = 1,
    ACTIONS(591), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12270] = 7,
    ACTIONS(946), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(948), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(972), 1,
      anon_sym_RPAREN,
    STATE(383), 1,
      sym_partition_by_clause,
    STATE(461), 1,
      sym_order_by_clause,
    STATE(593), 1,
      sym_row_or_range_clause,
    ACTIONS(950), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12293] = 1,
    ACTIONS(555), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12304] = 1,
    ACTIONS(561), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12315] = 1,
    ACTIONS(595), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12326] = 1,
    ACTIONS(575), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12337] = 1,
    ACTIONS(599), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12348] = 2,
    ACTIONS(974), 1,
      sym_OUTPUT,
    ACTIONS(677), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12360] = 4,
    ACTIONS(978), 1,
      anon_sym_COMMA,
    ACTIONS(980), 1,
      anon_sym_SEMI,
    STATE(364), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(976), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [12376] = 2,
    STATE(363), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(673), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12388] = 7,
    ACTIONS(133), 1,
      aux_sym_go_statement_token1,
    ACTIONS(171), 1,
      aux_sym_id__token1,
    ACTIONS(173), 1,
      aux_sym_id__token2,
    ACTIONS(261), 1,
      sym_string_lit,
    STATE(213), 1,
      sym_keyword,
    STATE(246), 1,
      sym_id_,
    STATE(278), 1,
      sym_column_alias,
  [12410] = 2,
    STATE(358), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(657), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12422] = 2,
    STATE(362), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(657), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12434] = 2,
    STATE(368), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(673), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12446] = 3,
    ACTIONS(982), 1,
      anon_sym_COMMA,
    STATE(363), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(692), 5,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12460] = 4,
    ACTIONS(978), 1,
      anon_sym_COMMA,
    ACTIONS(987), 1,
      anon_sym_SEMI,
    STATE(368), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(985), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [12476] = 2,
    ACTIONS(989), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(991), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [12488] = 2,
    ACTIONS(993), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(995), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [12500] = 2,
    ACTIONS(997), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(999), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [12512] = 3,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    STATE(368), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(685), 5,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12526] = 6,
    ACTIONS(203), 1,
      aux_sym_id__token1,
    ACTIONS(205), 1,
      aux_sym_id__token2,
    ACTIONS(1004), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1006), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(135), 1,
      sym_keyword,
    STATE(154), 1,
      sym_id_,
  [12545] = 1,
    ACTIONS(742), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12554] = 1,
    ACTIONS(677), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12563] = 1,
    ACTIONS(1008), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12572] = 3,
    ACTIONS(1010), 1,
      anon_sym_COMMA,
    STATE(374), 1,
      aux_sym_expression_list__repeat1,
    ACTIONS(1012), 4,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12585] = 3,
    ACTIONS(1014), 1,
      anon_sym_COMMA,
    STATE(374), 1,
      aux_sym_expression_list__repeat1,
    ACTIONS(1017), 4,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12598] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1019), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(605), 1,
      sym_id_,
  [12617] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(1021), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1023), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(109), 1,
      sym_id_,
  [12636] = 5,
    ACTIONS(948), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(1025), 1,
      anon_sym_RPAREN,
    STATE(488), 1,
      sym_order_by_clause,
    STATE(652), 1,
      sym_row_or_range_clause,
    ACTIONS(950), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12653] = 3,
    ACTIONS(1029), 1,
      sym_asc_,
    ACTIONS(1031), 1,
      sym_desc_,
    ACTIONS(1027), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12666] = 4,
    ACTIONS(1035), 1,
      aux_sym_window_frame_preceding_token2,
    STATE(602), 1,
      sym_window_frame_bound,
    ACTIONS(1033), 2,
      aux_sym_constant_token3,
      aux_sym_window_frame_following_token1,
    STATE(527), 2,
      sym_window_frame_following,
      sym_window_frame_preceding,
  [12681] = 6,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(355), 1,
      aux_sym_id__token1,
    ACTIONS(357), 1,
      aux_sym_id__token2,
    ACTIONS(1037), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(94), 1,
      sym_id_,
    STATE(95), 1,
      sym_keyword,
  [12700] = 1,
    ACTIONS(750), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12709] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(1021), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1039), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(118), 1,
      sym_id_,
  [12728] = 5,
    ACTIONS(948), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(1041), 1,
      anon_sym_RPAREN,
    STATE(462), 1,
      sym_order_by_clause,
    STATE(597), 1,
      sym_row_or_range_clause,
    ACTIONS(950), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12745] = 4,
    ACTIONS(127), 1,
      aux_sym_real__token1,
    ACTIONS(1043), 1,
      aux_sym_constant_token3,
    ACTIONS(1045), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(306), 2,
      sym_real_,
      sym_float_,
  [12760] = 5,
    ACTIONS(1035), 1,
      aux_sym_window_frame_preceding_token2,
    ACTIONS(1049), 1,
      aux_sym_window_frame_extent_token1,
    STATE(657), 1,
      sym_window_frame_preceding,
    STATE(662), 1,
      sym_window_frame_extent,
    ACTIONS(1047), 2,
      aux_sym_constant_token3,
      aux_sym_window_frame_following_token1,
  [12777] = 6,
    ACTIONS(203), 1,
      aux_sym_id__token1,
    ACTIONS(205), 1,
      aux_sym_id__token2,
    ACTIONS(1004), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1051), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(126), 1,
      sym_id_,
    STATE(135), 1,
      sym_keyword,
  [12796] = 5,
    ACTIONS(768), 1,
      aux_sym_over__token1,
    ACTIONS(1053), 1,
      aux_sym_ignore_nulls__token1,
    ACTIONS(1055), 1,
      aux_sym_respect_nulls__token1,
    STATE(343), 1,
      sym_over_clause,
    STATE(554), 2,
      sym_ignore_nulls_,
      sym_respect_nulls_,
  [12813] = 4,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(1057), 1,
      aux_sym_constant_token3,
    ACTIONS(1059), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(127), 2,
      sym_real_,
      sym_float_,
  [12828] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(1021), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1061), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(117), 1,
      sym_id_,
  [12847] = 1,
    ACTIONS(746), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12856] = 1,
    ACTIONS(685), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12865] = 6,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(355), 1,
      aux_sym_id__token1,
    ACTIONS(357), 1,
      aux_sym_id__token2,
    ACTIONS(1063), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(86), 1,
      sym_id_,
    STATE(95), 1,
      sym_keyword,
  [12884] = 6,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(355), 1,
      aux_sym_id__token1,
    ACTIONS(357), 1,
      aux_sym_id__token2,
    ACTIONS(1065), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(95), 1,
      sym_keyword,
    STATE(102), 1,
      sym_id_,
  [12903] = 5,
    ACTIONS(1053), 1,
      aux_sym_ignore_nulls__token1,
    ACTIONS(1055), 1,
      aux_sym_respect_nulls__token1,
    ACTIONS(1067), 1,
      aux_sym_over__token1,
    STATE(237), 1,
      sym_over_clause,
    STATE(542), 2,
      sym_ignore_nulls_,
      sym_respect_nulls_,
  [12920] = 5,
    ACTIONS(1053), 1,
      aux_sym_ignore_nulls__token1,
    ACTIONS(1055), 1,
      aux_sym_respect_nulls__token1,
    ACTIONS(1069), 1,
      aux_sym_over__token1,
    STATE(168), 1,
      sym_over_clause,
    STATE(547), 2,
      sym_ignore_nulls_,
      sym_respect_nulls_,
  [12937] = 1,
    ACTIONS(738), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12946] = 5,
    ACTIONS(948), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(1071), 1,
      anon_sym_RPAREN,
    STATE(481), 1,
      sym_order_by_clause,
    STATE(630), 1,
      sym_row_or_range_clause,
    ACTIONS(950), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12963] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1073), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(671), 1,
      sym_id_,
  [12982] = 4,
    ACTIONS(169), 1,
      aux_sym_real__token1,
    ACTIONS(1075), 1,
      aux_sym_constant_token3,
    ACTIONS(1077), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(275), 2,
      sym_real_,
      sym_float_,
  [12997] = 1,
    ACTIONS(734), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [13006] = 4,
    ACTIONS(1035), 1,
      aux_sym_window_frame_preceding_token2,
    STATE(619), 1,
      sym_window_frame_bound,
    ACTIONS(1033), 2,
      aux_sym_constant_token3,
      aux_sym_window_frame_following_token1,
    STATE(527), 2,
      sym_window_frame_following,
      sym_window_frame_preceding,
  [13021] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1079), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(571), 1,
      sym_id_,
  [13040] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(1021), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1081), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(115), 1,
      sym_id_,
  [13059] = 3,
    ACTIONS(1010), 1,
      anon_sym_COMMA,
    STATE(373), 1,
      aux_sym_expression_list__repeat1,
    ACTIONS(1083), 4,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [13072] = 6,
    ACTIONS(203), 1,
      aux_sym_id__token1,
    ACTIONS(205), 1,
      aux_sym_id__token2,
    ACTIONS(1004), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1085), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(135), 1,
      sym_keyword,
    STATE(151), 1,
      sym_id_,
  [13091] = 6,
    ACTIONS(203), 1,
      aux_sym_id__token1,
    ACTIONS(205), 1,
      aux_sym_id__token2,
    ACTIONS(1004), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1087), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(135), 1,
      sym_keyword,
    STATE(139), 1,
      sym_id_,
  [13110] = 1,
    ACTIONS(692), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [13119] = 6,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(355), 1,
      aux_sym_id__token1,
    ACTIONS(357), 1,
      aux_sym_id__token2,
    ACTIONS(1089), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(87), 1,
      sym_id_,
    STATE(95), 1,
      sym_keyword,
  [13138] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1091), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(568), 1,
      sym_id_,
  [13157] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(1021), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1093), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(112), 1,
      sym_id_,
  [13176] = 6,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(355), 1,
      aux_sym_id__token1,
    ACTIONS(357), 1,
      aux_sym_id__token2,
    ACTIONS(1095), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(93), 1,
      sym_id_,
    STATE(95), 1,
      sym_keyword,
  [13195] = 6,
    ACTIONS(203), 1,
      aux_sym_id__token1,
    ACTIONS(205), 1,
      aux_sym_id__token2,
    ACTIONS(1004), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1097), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(135), 1,
      sym_keyword,
    STATE(138), 1,
      sym_id_,
  [13214] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(1021), 1,
      aux_sym_go_statement_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(167), 1,
      sym_id_,
  [13230] = 5,
    ACTIONS(91), 1,
      aux_sym_go_statement_token1,
    ACTIONS(129), 1,
      aux_sym_id__token1,
    ACTIONS(131), 1,
      aux_sym_id__token2,
    STATE(91), 1,
      sym_keyword,
    STATE(372), 1,
      sym_id_,
  [13246] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(1021), 1,
      aux_sym_go_statement_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(136), 1,
      sym_id_,
  [13262] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(1021), 1,
      aux_sym_go_statement_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(144), 1,
      sym_id_,
  [13278] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(742), 1,
      sym_id_,
  [13294] = 5,
    ACTIONS(844), 1,
      aux_sym_go_statement_token1,
    ACTIONS(846), 1,
      aux_sym_id__token1,
    ACTIONS(848), 1,
      aux_sym_id__token2,
    STATE(319), 1,
      sym_keyword,
    STATE(335), 1,
      sym_id_,
  [13310] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(706), 1,
      sym_id_,
  [13326] = 5,
    ACTIONS(203), 1,
      aux_sym_id__token1,
    ACTIONS(205), 1,
      aux_sym_id__token2,
    ACTIONS(1004), 1,
      aux_sym_go_statement_token1,
    STATE(135), 1,
      sym_keyword,
    STATE(185), 1,
      sym_id_,
  [13342] = 5,
    ACTIONS(844), 1,
      aux_sym_go_statement_token1,
    ACTIONS(846), 1,
      aux_sym_id__token1,
    ACTIONS(848), 1,
      aux_sym_id__token2,
    STATE(301), 1,
      sym_id_,
    STATE(319), 1,
      sym_keyword,
  [13358] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(702), 1,
      sym_id_,
  [13374] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(682), 1,
      sym_id_,
  [13390] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(675), 1,
      sym_id_,
  [13406] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(1021), 1,
      aux_sym_go_statement_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(162), 1,
      sym_id_,
  [13422] = 5,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(355), 1,
      aux_sym_id__token1,
    ACTIONS(357), 1,
      aux_sym_id__token2,
    STATE(92), 1,
      sym_id_,
    STATE(95), 1,
      sym_keyword,
  [13438] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(1021), 1,
      aux_sym_go_statement_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(131), 1,
      sym_id_,
  [13454] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(1021), 1,
      aux_sym_go_statement_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(164), 1,
      sym_id_,
  [13470] = 5,
    ACTIONS(203), 1,
      aux_sym_id__token1,
    ACTIONS(205), 1,
      aux_sym_id__token2,
    ACTIONS(1004), 1,
      aux_sym_go_statement_token1,
    STATE(135), 1,
      sym_keyword,
    STATE(183), 1,
      sym_id_,
  [13486] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(1021), 1,
      aux_sym_go_statement_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(132), 1,
      sym_id_,
  [13502] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(583), 1,
      sym_id_,
  [13518] = 5,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(355), 1,
      aux_sym_id__token1,
    ACTIONS(357), 1,
      aux_sym_id__token2,
    STATE(95), 1,
      sym_keyword,
    STATE(100), 1,
      sym_id_,
  [13534] = 5,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(355), 1,
      aux_sym_id__token1,
    ACTIONS(357), 1,
      aux_sym_id__token2,
    STATE(95), 1,
      sym_keyword,
    STATE(103), 1,
      sym_id_,
  [13550] = 5,
    ACTIONS(203), 1,
      aux_sym_id__token1,
    ACTIONS(205), 1,
      aux_sym_id__token2,
    ACTIONS(1004), 1,
      aux_sym_go_statement_token1,
    STATE(135), 1,
      sym_keyword,
    STATE(188), 1,
      sym_id_,
  [13566] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(691), 1,
      sym_id_,
  [13582] = 5,
    ACTIONS(844), 1,
      aux_sym_go_statement_token1,
    ACTIONS(846), 1,
      aux_sym_id__token1,
    ACTIONS(848), 1,
      aux_sym_id__token2,
    STATE(311), 1,
      sym_id_,
    STATE(319), 1,
      sym_keyword,
  [13598] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(686), 1,
      sym_id_,
  [13614] = 5,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(355), 1,
      aux_sym_id__token1,
    ACTIONS(357), 1,
      aux_sym_id__token2,
    STATE(89), 1,
      sym_id_,
    STATE(95), 1,
      sym_keyword,
  [13630] = 1,
    ACTIONS(1017), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [13638] = 5,
    ACTIONS(203), 1,
      aux_sym_id__token1,
    ACTIONS(205), 1,
      aux_sym_id__token2,
    ACTIONS(1004), 1,
      aux_sym_go_statement_token1,
    STATE(135), 1,
      sym_keyword,
    STATE(189), 1,
      sym_id_,
  [13654] = 5,
    ACTIONS(203), 1,
      aux_sym_id__token1,
    ACTIONS(205), 1,
      aux_sym_id__token2,
    ACTIONS(1004), 1,
      aux_sym_go_statement_token1,
    STATE(135), 1,
      sym_keyword,
    STATE(184), 1,
      sym_id_,
  [13670] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(720), 1,
      sym_id_,
  [13686] = 5,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(355), 1,
      aux_sym_id__token1,
    ACTIONS(357), 1,
      aux_sym_id__token2,
    STATE(95), 1,
      sym_keyword,
    STATE(108), 1,
      sym_id_,
  [13702] = 3,
    ACTIONS(1099), 1,
      anon_sym_COMMA,
    STATE(444), 1,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(1102), 3,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [13714] = 5,
    ACTIONS(203), 1,
      aux_sym_id__token1,
    ACTIONS(205), 1,
      aux_sym_id__token2,
    ACTIONS(1004), 1,
      aux_sym_go_statement_token1,
    STATE(135), 1,
      sym_keyword,
    STATE(186), 1,
      sym_id_,
  [13730] = 5,
    ACTIONS(17), 1,
      aux_sym_go_statement_token1,
    ACTIONS(63), 1,
      aux_sym_id__token1,
    ACTIONS(65), 1,
      aux_sym_id__token2,
    STATE(68), 1,
      sym_id_,
    STATE(105), 1,
      sym_keyword,
  [13746] = 5,
    ACTIONS(203), 1,
      aux_sym_id__token1,
    ACTIONS(205), 1,
      aux_sym_id__token2,
    ACTIONS(1004), 1,
      aux_sym_go_statement_token1,
    STATE(135), 1,
      sym_keyword,
    STATE(191), 1,
      sym_id_,
  [13762] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(1021), 1,
      aux_sym_go_statement_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(140), 1,
      sym_id_,
  [13778] = 5,
    ACTIONS(203), 1,
      aux_sym_id__token1,
    ACTIONS(205), 1,
      aux_sym_id__token2,
    ACTIONS(1004), 1,
      aux_sym_go_statement_token1,
    STATE(135), 1,
      sym_keyword,
    STATE(179), 1,
      sym_id_,
  [13794] = 5,
    ACTIONS(844), 1,
      aux_sym_go_statement_token1,
    ACTIONS(846), 1,
      aux_sym_id__token1,
    ACTIONS(848), 1,
      aux_sym_id__token2,
    STATE(319), 1,
      sym_keyword,
    STATE(333), 1,
      sym_id_,
  [13810] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    STATE(78), 1,
      sym_keyword,
    STATE(591), 1,
      sym_id_,
  [13826] = 5,
    ACTIONS(844), 1,
      aux_sym_go_statement_token1,
    ACTIONS(846), 1,
      aux_sym_id__token1,
    ACTIONS(848), 1,
      aux_sym_id__token2,
    STATE(300), 1,
      sym_id_,
    STATE(319), 1,
      sym_keyword,
  [13842] = 5,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(355), 1,
      aux_sym_id__token1,
    ACTIONS(357), 1,
      aux_sym_id__token2,
    STATE(95), 1,
      sym_keyword,
    STATE(106), 1,
      sym_id_,
  [13858] = 5,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(355), 1,
      aux_sym_id__token1,
    ACTIONS(357), 1,
      aux_sym_id__token2,
    STATE(95), 1,
      sym_keyword,
    STATE(107), 1,
      sym_id_,
  [13874] = 5,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(355), 1,
      aux_sym_id__token1,
    ACTIONS(357), 1,
      aux_sym_id__token2,
    STATE(82), 1,
      sym_id_,
    STATE(95), 1,
      sym_keyword,
  [13890] = 5,
    ACTIONS(844), 1,
      aux_sym_go_statement_token1,
    ACTIONS(846), 1,
      aux_sym_id__token1,
    ACTIONS(848), 1,
      aux_sym_id__token2,
    STATE(305), 1,
      sym_id_,
    STATE(319), 1,
      sym_keyword,
  [13906] = 3,
    ACTIONS(1104), 1,
      anon_sym_COMMA,
    STATE(444), 1,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(1106), 3,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [13918] = 5,
    ACTIONS(844), 1,
      aux_sym_go_statement_token1,
    ACTIONS(846), 1,
      aux_sym_id__token1,
    ACTIONS(848), 1,
      aux_sym_id__token2,
    STATE(298), 1,
      sym_id_,
    STATE(319), 1,
      sym_keyword,
  [13934] = 3,
    ACTIONS(1104), 1,
      anon_sym_COMMA,
    STATE(457), 1,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(1108), 3,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [13946] = 4,
    ACTIONS(946), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(948), 1,
      aux_sym_order_by_clause_token1,
    STATE(533), 1,
      sym_partition_by_clause,
    STATE(595), 1,
      sym_order_by_clause,
  [13959] = 3,
    ACTIONS(1041), 1,
      anon_sym_RPAREN,
    STATE(597), 1,
      sym_row_or_range_clause,
    ACTIONS(950), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [13970] = 3,
    ACTIONS(1110), 1,
      anon_sym_RPAREN,
    STATE(599), 1,
      sym_row_or_range_clause,
    ACTIONS(950), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [13981] = 3,
    ACTIONS(1112), 1,
      ts_builtin_sym_end,
    ACTIONS(1114), 1,
      aux_sym_go_statement_token1,
    STATE(491), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
  [13992] = 1,
    ACTIONS(1116), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [13999] = 1,
    ACTIONS(1118), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [14006] = 3,
    ACTIONS(1025), 1,
      anon_sym_RPAREN,
    STATE(652), 1,
      sym_row_or_range_clause,
    ACTIONS(950), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [14017] = 1,
    ACTIONS(976), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [14024] = 1,
    ACTIONS(1102), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [14031] = 3,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(1057), 1,
      aux_sym_constant_token3,
    STATE(175), 2,
      sym_real_,
      sym_float_,
  [14042] = 4,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(353), 1,
      sym_string_lit,
    STATE(71), 1,
      sym_LOCAL_ID_,
    STATE(77), 1,
      sym_execute_var_string,
  [14055] = 1,
    ACTIONS(1120), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [14062] = 4,
    ACTIONS(1122), 1,
      aux_sym_RESULT_SETS_token1,
    ACTIONS(1124), 1,
      sym_RECOMPILE,
    STATE(296), 1,
      sym_execute_option,
    STATE(537), 1,
      sym_RESULT_SETS,
  [14075] = 4,
    ACTIONS(1122), 1,
      aux_sym_RESULT_SETS_token1,
    ACTIONS(1124), 1,
      sym_RECOMPILE,
    STATE(269), 1,
      sym_execute_option,
    STATE(537), 1,
      sym_RESULT_SETS,
  [14088] = 1,
    ACTIONS(1126), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [14095] = 1,
    ACTIONS(1128), 4,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [14102] = 1,
    ACTIONS(1130), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [14109] = 4,
    ACTIONS(1122), 1,
      aux_sym_RESULT_SETS_token1,
    ACTIONS(1124), 1,
      sym_RECOMPILE,
    STATE(235), 1,
      sym_execute_option,
    STATE(537), 1,
      sym_RESULT_SETS,
  [14122] = 3,
    ACTIONS(1132), 1,
      aux_sym_constant_token3,
    STATE(558), 1,
      sym_integer,
    ACTIONS(343), 2,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
  [14133] = 3,
    ACTIONS(1071), 1,
      anon_sym_RPAREN,
    STATE(630), 1,
      sym_row_or_range_clause,
    ACTIONS(950), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [14144] = 3,
    ACTIONS(127), 1,
      aux_sym_real__token1,
    ACTIONS(1043), 1,
      aux_sym_constant_token3,
    STATE(322), 2,
      sym_real_,
      sym_float_,
  [14155] = 3,
    ACTIONS(1134), 1,
      anon_sym_RPAREN,
    STATE(632), 1,
      sym_row_or_range_clause,
    ACTIONS(950), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [14166] = 4,
    ACTIONS(946), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(948), 1,
      aux_sym_order_by_clause_token1,
    STATE(521), 1,
      sym_partition_by_clause,
    STATE(628), 1,
      sym_order_by_clause,
  [14179] = 4,
    ACTIONS(1122), 1,
      aux_sym_RESULT_SETS_token1,
    ACTIONS(1124), 1,
      sym_RECOMPILE,
    STATE(229), 1,
      sym_execute_option,
    STATE(537), 1,
      sym_RESULT_SETS,
  [14192] = 4,
    ACTIONS(946), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(948), 1,
      aux_sym_order_by_clause_token1,
    STATE(526), 1,
      sym_partition_by_clause,
    STATE(670), 1,
      sym_order_by_clause,
  [14205] = 3,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(1136), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(435), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14216] = 4,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(353), 1,
      sym_string_lit,
    STATE(71), 1,
      sym_LOCAL_ID_,
    STATE(503), 1,
      sym_execute_var_string,
  [14229] = 4,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(353), 1,
      sym_string_lit,
    STATE(71), 1,
      sym_LOCAL_ID_,
    STATE(560), 1,
      sym_execute_var_string,
  [14242] = 3,
    ACTIONS(1138), 1,
      anon_sym_RPAREN,
    STATE(563), 1,
      sym_row_or_range_clause,
    ACTIONS(950), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [14253] = 4,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(353), 1,
      sym_string_lit,
    STATE(71), 1,
      sym_LOCAL_ID_,
    STATE(504), 1,
      sym_execute_var_string,
  [14266] = 3,
    ACTIONS(169), 1,
      aux_sym_real__token1,
    ACTIONS(1075), 1,
      aux_sym_constant_token3,
    STATE(236), 2,
      sym_real_,
      sym_float_,
  [14277] = 3,
    ACTIONS(837), 1,
      ts_builtin_sym_end,
    ACTIONS(1140), 1,
      aux_sym_go_statement_token1,
    STATE(491), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
  [14288] = 1,
    ACTIONS(985), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [14295] = 4,
    ACTIONS(1122), 1,
      aux_sym_RESULT_SETS_token1,
    ACTIONS(1124), 1,
      sym_RECOMPILE,
    STATE(216), 1,
      sym_execute_option,
    STATE(537), 1,
      sym_RESULT_SETS,
  [14308] = 3,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(1143), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(80), 1,
      sym_udt_method_arguments,
  [14318] = 1,
    ACTIONS(1145), 3,
      aux_sym_over__token1,
      aux_sym_ignore_nulls__token1,
      aux_sym_respect_nulls__token1,
  [14324] = 2,
    ACTIONS(1147), 1,
      aux_sym_constant_token3,
    ACTIONS(1149), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [14332] = 2,
    ACTIONS(1151), 1,
      aux_sym_constant_token3,
    ACTIONS(1153), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [14340] = 3,
    ACTIONS(1155), 1,
      anon_sym_COMMA,
    ACTIONS(1157), 1,
      anon_sym_RPAREN,
    STATE(511), 1,
      aux_sym_execute_body_repeat2,
  [14350] = 3,
    ACTIONS(1159), 1,
      anon_sym_RPAREN,
    ACTIONS(1161), 1,
      aux_sym_partition_by_clause_token1,
    STATE(636), 1,
      sym_partition_by_clause,
  [14360] = 3,
    ACTIONS(1155), 1,
      anon_sym_COMMA,
    ACTIONS(1163), 1,
      anon_sym_RPAREN,
    STATE(511), 1,
      aux_sym_execute_body_repeat2,
  [14370] = 3,
    ACTIONS(1083), 1,
      anon_sym_RPAREN,
    ACTIONS(1165), 1,
      anon_sym_COMMA,
    STATE(508), 1,
      aux_sym_expression_list__repeat1,
  [14380] = 3,
    ACTIONS(1161), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(1167), 1,
      anon_sym_RPAREN,
    STATE(596), 1,
      sym_partition_by_clause,
  [14390] = 3,
    ACTIONS(1155), 1,
      anon_sym_COMMA,
    ACTIONS(1169), 1,
      anon_sym_RPAREN,
    STATE(498), 1,
      aux_sym_execute_body_repeat2,
  [14400] = 3,
    ACTIONS(1155), 1,
      anon_sym_COMMA,
    ACTIONS(1171), 1,
      anon_sym_RPAREN,
    STATE(500), 1,
      aux_sym_execute_body_repeat2,
  [14410] = 3,
    ACTIONS(1017), 1,
      anon_sym_RPAREN,
    ACTIONS(1173), 1,
      anon_sym_COMMA,
    STATE(505), 1,
      aux_sym_expression_list__repeat1,
  [14420] = 3,
    ACTIONS(1161), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(1176), 1,
      anon_sym_RPAREN,
    STATE(603), 1,
      sym_partition_by_clause,
  [14430] = 1,
    ACTIONS(1178), 3,
      aux_sym_over__token1,
      aux_sym_ignore_nulls__token1,
      aux_sym_respect_nulls__token1,
  [14436] = 3,
    ACTIONS(1012), 1,
      anon_sym_RPAREN,
    ACTIONS(1165), 1,
      anon_sym_COMMA,
    STATE(505), 1,
      aux_sym_expression_list__repeat1,
  [14446] = 2,
    ACTIONS(1180), 1,
      aux_sym_constant_token3,
    ACTIONS(1182), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [14454] = 1,
    ACTIONS(1184), 3,
      aux_sym_over__token1,
      aux_sym_ignore_nulls__token1,
      aux_sym_respect_nulls__token1,
  [14460] = 3,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    ACTIONS(1189), 1,
      anon_sym_RPAREN,
    STATE(511), 1,
      aux_sym_execute_body_repeat2,
  [14470] = 2,
    ACTIONS(1191), 1,
      sym_getroot_,
    ACTIONS(1193), 1,
      sym_parse_,
  [14477] = 2,
    ACTIONS(1195), 1,
      anon_sym_COMMA,
    ACTIONS(1197), 1,
      anon_sym_RPAREN,
  [14484] = 2,
    ACTIONS(1199), 1,
      aux_sym_over__token1,
    STATE(656), 1,
      sym_over_,
  [14491] = 2,
    ACTIONS(1201), 1,
      sym_getroot_,
    ACTIONS(1203), 1,
      sym_parse_,
  [14498] = 2,
    ACTIONS(1199), 1,
      aux_sym_over__token1,
    STATE(676), 1,
      sym_over_,
  [14505] = 2,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(1143), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [14512] = 2,
    ACTIONS(1199), 1,
      aux_sym_over__token1,
    STATE(733), 1,
      sym_over_,
  [14519] = 2,
    ACTIONS(1205), 1,
      sym_getroot_,
    ACTIONS(1207), 1,
      sym_parse_,
  [14526] = 2,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(69), 1,
      sym_LOCAL_ID_,
  [14533] = 2,
    ACTIONS(948), 1,
      aux_sym_order_by_clause_token1,
    STATE(631), 1,
      sym_order_by_clause,
  [14540] = 2,
    ACTIONS(1199), 1,
      aux_sym_over__token1,
    STATE(689), 1,
      sym_over_,
  [14547] = 2,
    ACTIONS(1067), 1,
      aux_sym_over__token1,
    STATE(249), 1,
      sym_over_clause,
  [14554] = 2,
    ACTIONS(948), 1,
      aux_sym_order_by_clause_token1,
    STATE(624), 1,
      sym_order_by_clause,
  [14561] = 1,
    ACTIONS(1209), 2,
      sym_LOGIN,
      sym_USER,
  [14566] = 2,
    ACTIONS(948), 1,
      aux_sym_order_by_clause_token1,
    STATE(621), 1,
      sym_order_by_clause,
  [14573] = 1,
    ACTIONS(1211), 2,
      anon_sym_RPAREN,
      aux_sym_window_frame_extent_token2,
  [14578] = 2,
    ACTIONS(1213), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(238), 1,
      sym_execute_statement_arg_named,
  [14585] = 2,
    ACTIONS(1215), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(407), 1,
      sym_execute_statement_arg_named,
  [14592] = 2,
    ACTIONS(1217), 1,
      anon_sym_COMMA,
    ACTIONS(1219), 1,
      anon_sym_RPAREN,
  [14599] = 2,
    ACTIONS(1069), 1,
      aux_sym_over__token1,
    STATE(137), 1,
      sym_over_clause,
  [14606] = 2,
    ACTIONS(1221), 1,
      anon_sym_LPAREN,
    STATE(387), 1,
      sym_lag_lead_args,
  [14613] = 2,
    ACTIONS(948), 1,
      aux_sym_order_by_clause_token1,
    STATE(598), 1,
      sym_order_by_clause,
  [14620] = 2,
    ACTIONS(1067), 1,
      aux_sym_over__token1,
    STATE(252), 1,
      sym_over_clause,
  [14627] = 2,
    ACTIONS(1221), 1,
      anon_sym_LPAREN,
    STATE(395), 1,
      sym_lag_lead_args,
  [14634] = 2,
    ACTIONS(1221), 1,
      anon_sym_LPAREN,
    STATE(394), 1,
      sym_lag_lead_args,
  [14641] = 1,
    ACTIONS(1223), 2,
      sym_NONE,
      sym_UNDEFINED,
  [14646] = 2,
    ACTIONS(1069), 1,
      aux_sym_over__token1,
    STATE(156), 1,
      sym_over_clause,
  [14653] = 2,
    ACTIONS(768), 1,
      aux_sym_over__token1,
    STATE(354), 1,
      sym_over_clause,
  [14660] = 2,
    ACTIONS(1199), 1,
      aux_sym_over__token1,
    STATE(704), 1,
      sym_over_,
  [14667] = 2,
    ACTIONS(1069), 1,
      aux_sym_over__token1,
    STATE(148), 1,
      sym_over_clause,
  [14674] = 2,
    ACTIONS(1067), 1,
      aux_sym_over__token1,
    STATE(241), 1,
      sym_over_clause,
  [14681] = 2,
    ACTIONS(768), 1,
      aux_sym_over__token1,
    STATE(346), 1,
      sym_over_clause,
  [14688] = 2,
    ACTIONS(948), 1,
      aux_sym_order_by_clause_token1,
    STATE(715), 1,
      sym_order_by_clause,
  [14695] = 2,
    ACTIONS(948), 1,
      aux_sym_order_by_clause_token1,
    STATE(723), 1,
      sym_order_by_clause,
  [14702] = 2,
    ACTIONS(1225), 1,
      aux_sym_within_group__token1,
    STATE(707), 1,
      sym_within_group_,
  [14709] = 2,
    ACTIONS(1069), 1,
      aux_sym_over__token1,
    STATE(130), 1,
      sym_over_clause,
  [14716] = 2,
    ACTIONS(1225), 1,
      aux_sym_within_group__token1,
    STATE(735), 1,
      sym_within_group_,
  [14723] = 2,
    ACTIONS(1225), 1,
      aux_sym_within_group__token1,
    STATE(737), 1,
      sym_within_group_,
  [14730] = 1,
    ACTIONS(1227), 2,
      anon_sym_RPAREN,
      aux_sym_window_frame_extent_token2,
  [14735] = 2,
    ACTIONS(1229), 1,
      aux_sym_window_frame_following_token2,
    ACTIONS(1231), 1,
      aux_sym_window_frame_preceding_token1,
  [14742] = 1,
    ACTIONS(1233), 2,
      sym_NONE,
      sym_UNDEFINED,
  [14747] = 2,
    ACTIONS(768), 1,
      aux_sym_over__token1,
    STATE(299), 1,
      sym_over_clause,
  [14754] = 2,
    ACTIONS(768), 1,
      aux_sym_over__token1,
    STATE(331), 1,
      sym_over_clause,
  [14761] = 2,
    ACTIONS(1199), 1,
      aux_sym_over__token1,
    STATE(604), 1,
      sym_over_,
  [14768] = 1,
    ACTIONS(1235), 2,
      anon_sym_RPAREN,
      aux_sym_window_frame_extent_token2,
  [14773] = 1,
    ACTIONS(1237), 2,
      sym_LOGIN,
      sym_USER,
  [14778] = 1,
    ACTIONS(989), 2,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
  [14783] = 1,
    ACTIONS(1239), 2,
      sym_LOGIN,
      sym_USER,
  [14788] = 1,
    ACTIONS(1189), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14793] = 1,
    ACTIONS(997), 2,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
  [14798] = 2,
    ACTIONS(1067), 1,
      aux_sym_over__token1,
    STATE(245), 1,
      sym_over_clause,
  [14805] = 1,
    ACTIONS(1241), 1,
      anon_sym_RPAREN,
  [14809] = 1,
    ACTIONS(1243), 1,
      aux_sym_constant_token3,
  [14813] = 1,
    ACTIONS(1245), 1,
      anon_sym_LPAREN,
  [14817] = 1,
    ACTIONS(1247), 1,
      aux_sym_execute_body_token1,
  [14821] = 1,
    ACTIONS(1249), 1,
      anon_sym_LPAREN,
  [14825] = 1,
    ACTIONS(1251), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [14829] = 1,
    ACTIONS(1253), 1,
      anon_sym_RPAREN,
  [14833] = 1,
    ACTIONS(1255), 1,
      aux_sym_constant_token3,
  [14837] = 1,
    ACTIONS(1257), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [14841] = 1,
    ACTIONS(1259), 1,
      anon_sym_RPAREN,
  [14845] = 1,
    ACTIONS(1261), 1,
      aux_sym_real__token2,
  [14849] = 1,
    ACTIONS(1263), 1,
      anon_sym_RPAREN,
  [14853] = 1,
    ACTIONS(1265), 1,
      aux_sym_real__token2,
  [14857] = 1,
    ACTIONS(1267), 1,
      aux_sym_constant_token3,
  [14861] = 1,
    ACTIONS(1269), 1,
      anon_sym_RPAREN,
  [14865] = 1,
    ACTIONS(653), 1,
      anon_sym_EQ,
  [14869] = 1,
    ACTIONS(1271), 1,
      aux_sym_RESULT_SETS_token2,
  [14873] = 1,
    ACTIONS(1273), 1,
      anon_sym_RPAREN,
  [14877] = 1,
    ACTIONS(1275), 1,
      anon_sym_RPAREN,
  [14881] = 1,
    ACTIONS(1277), 1,
      anon_sym_RPAREN,
  [14885] = 1,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
  [14889] = 1,
    ACTIONS(1279), 1,
      anon_sym_RPAREN,
  [14893] = 1,
    ACTIONS(1281), 1,
      aux_sym_constant_token3,
  [14897] = 1,
    ACTIONS(1283), 1,
      anon_sym_LPAREN,
  [14901] = 1,
    ACTIONS(1285), 1,
      anon_sym_LPAREN,
  [14905] = 1,
    ACTIONS(1287), 1,
      anon_sym_RPAREN,
  [14909] = 1,
    ACTIONS(1289), 1,
      anon_sym_RPAREN,
  [14913] = 1,
    ACTIONS(1291), 1,
      aux_sym_partition_by_clause_token2,
  [14917] = 1,
    ACTIONS(1293), 1,
      anon_sym_LPAREN,
  [14921] = 1,
    ACTIONS(1295), 1,
      anon_sym_RPAREN,
  [14925] = 1,
    ACTIONS(1041), 1,
      anon_sym_RPAREN,
  [14929] = 1,
    ACTIONS(1297), 1,
      anon_sym_RPAREN,
  [14933] = 1,
    ACTIONS(1299), 1,
      anon_sym_RPAREN,
  [14937] = 1,
    ACTIONS(1301), 1,
      anon_sym_RPAREN,
  [14941] = 1,
    ACTIONS(1110), 1,
      anon_sym_RPAREN,
  [14945] = 1,
    ACTIONS(1303), 1,
      anon_sym_RPAREN,
  [14949] = 1,
    ACTIONS(1305), 1,
      anon_sym_RPAREN,
  [14953] = 1,
    ACTIONS(1307), 1,
      anon_sym_RPAREN,
  [14957] = 1,
    ACTIONS(1309), 1,
      anon_sym_RPAREN,
  [14961] = 1,
    ACTIONS(1311), 1,
      anon_sym_RPAREN,
  [14965] = 1,
    ACTIONS(1313), 1,
      anon_sym_RPAREN,
  [14969] = 1,
    ACTIONS(1315), 1,
      anon_sym_LPAREN,
  [14973] = 1,
    ACTIONS(1317), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [14977] = 1,
    ACTIONS(1319), 1,
      anon_sym_RPAREN,
  [14981] = 1,
    ACTIONS(1321), 1,
      anon_sym_LPAREN,
  [14985] = 1,
    ACTIONS(1323), 1,
      aux_sym_ignore_nulls__token2,
  [14989] = 1,
    ACTIONS(801), 1,
      aux_sym_real__token2,
  [14993] = 1,
    ACTIONS(1325), 1,
      anon_sym_RPAREN,
  [14997] = 1,
    ACTIONS(1327), 1,
      aux_sym_constant_token3,
  [15001] = 1,
    ACTIONS(1329), 1,
      anon_sym_RPAREN,
  [15005] = 1,
    ACTIONS(1331), 1,
      aux_sym_ignore_nulls__token2,
  [15009] = 1,
    ACTIONS(1333), 1,
      anon_sym_RPAREN,
  [15013] = 1,
    ACTIONS(1335), 1,
      anon_sym_RPAREN,
  [15017] = 1,
    ACTIONS(1337), 1,
      anon_sym_RPAREN,
  [15021] = 1,
    ACTIONS(930), 1,
      anon_sym_EQ,
  [15025] = 1,
    ACTIONS(1339), 1,
      anon_sym_RPAREN,
  [15029] = 1,
    ACTIONS(1341), 1,
      aux_sym_window_frame_extent_token2,
  [15033] = 1,
    ACTIONS(1343), 1,
      anon_sym_RPAREN,
  [15037] = 1,
    ACTIONS(1345), 1,
      anon_sym_RPAREN,
  [15041] = 1,
    ACTIONS(1347), 1,
      anon_sym_RPAREN,
  [15045] = 1,
    ACTIONS(1349), 1,
      anon_sym_RPAREN,
  [15049] = 1,
    ACTIONS(1351), 1,
      anon_sym_RPAREN,
  [15053] = 1,
    ACTIONS(1353), 1,
      sym_string_lit,
  [15057] = 1,
    ACTIONS(1071), 1,
      anon_sym_RPAREN,
  [15061] = 1,
    ACTIONS(1355), 1,
      anon_sym_RPAREN,
  [15065] = 1,
    ACTIONS(1357), 1,
      anon_sym_RPAREN,
  [15069] = 1,
    ACTIONS(1359), 1,
      anon_sym_RPAREN,
  [15073] = 1,
    ACTIONS(1134), 1,
      anon_sym_RPAREN,
  [15077] = 1,
    ACTIONS(1361), 1,
      anon_sym_RPAREN,
  [15081] = 1,
    ACTIONS(1363), 1,
      anon_sym_RPAREN,
  [15085] = 1,
    ACTIONS(1365), 1,
      anon_sym_RPAREN,
  [15089] = 1,
    ACTIONS(1367), 1,
      anon_sym_RPAREN,
  [15093] = 1,
    ACTIONS(1369), 1,
      anon_sym_RPAREN,
  [15097] = 1,
    ACTIONS(1371), 1,
      anon_sym_RPAREN,
  [15101] = 1,
    ACTIONS(1373), 1,
      anon_sym_RPAREN,
  [15105] = 1,
    ACTIONS(1375), 1,
      anon_sym_LPAREN,
  [15109] = 1,
    ACTIONS(1377), 1,
      anon_sym_RPAREN,
  [15113] = 1,
    ACTIONS(1379), 1,
      anon_sym_LPAREN,
  [15117] = 1,
    ACTIONS(1381), 1,
      anon_sym_LPAREN,
  [15121] = 1,
    ACTIONS(1383), 1,
      anon_sym_LPAREN,
  [15125] = 1,
    ACTIONS(1385), 1,
      anon_sym_RPAREN,
  [15129] = 1,
    ACTIONS(1387), 1,
      anon_sym_LPAREN,
  [15133] = 1,
    ACTIONS(1389), 1,
      anon_sym_LPAREN,
  [15137] = 1,
    ACTIONS(1391), 1,
      anon_sym_RPAREN,
  [15141] = 1,
    ACTIONS(1393), 1,
      anon_sym_RPAREN,
  [15145] = 1,
    ACTIONS(1395), 1,
      anon_sym_LPAREN,
  [15149] = 1,
    ACTIONS(1397), 1,
      anon_sym_LPAREN,
  [15153] = 1,
    ACTIONS(1399), 1,
      anon_sym_RPAREN,
  [15157] = 1,
    ACTIONS(1401), 1,
      anon_sym_LPAREN,
  [15161] = 1,
    ACTIONS(1138), 1,
      anon_sym_RPAREN,
  [15165] = 1,
    ACTIONS(1403), 1,
      anon_sym_RPAREN,
  [15169] = 1,
    ACTIONS(1405), 1,
      anon_sym_LPAREN,
  [15173] = 1,
    ACTIONS(1407), 1,
      anon_sym_LPAREN,
  [15177] = 1,
    ACTIONS(1409), 1,
      anon_sym_LPAREN,
  [15181] = 1,
    ACTIONS(1411), 1,
      anon_sym_RPAREN,
  [15185] = 1,
    ACTIONS(1413), 1,
      anon_sym_LPAREN,
  [15189] = 1,
    ACTIONS(1415), 1,
      anon_sym_LPAREN,
  [15193] = 1,
    ACTIONS(1417), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [15197] = 1,
    ACTIONS(1419), 1,
      anon_sym_COLON_COLON,
  [15201] = 1,
    ACTIONS(1421), 1,
      anon_sym_RPAREN,
  [15205] = 1,
    ACTIONS(1423), 1,
      anon_sym_RPAREN,
  [15209] = 1,
    ACTIONS(1425), 1,
      anon_sym_LPAREN,
  [15213] = 1,
    ACTIONS(1427), 1,
      anon_sym_LPAREN,
  [15217] = 1,
    ACTIONS(1429), 1,
      anon_sym_RPAREN,
  [15221] = 1,
    ACTIONS(1431), 1,
      anon_sym_RPAREN,
  [15225] = 1,
    ACTIONS(1231), 1,
      aux_sym_window_frame_preceding_token3,
  [15229] = 1,
    ACTIONS(1231), 1,
      aux_sym_window_frame_preceding_token1,
  [15233] = 1,
    ACTIONS(1433), 1,
      anon_sym_RPAREN,
  [15237] = 1,
    ACTIONS(1435), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [15241] = 1,
    ACTIONS(1437), 1,
      anon_sym_LPAREN,
  [15245] = 1,
    ACTIONS(1439), 1,
      anon_sym_EQ,
  [15249] = 1,
    ACTIONS(1441), 1,
      sym_string_lit,
  [15253] = 1,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
  [15257] = 1,
    ACTIONS(1443), 1,
      anon_sym_LPAREN,
  [15261] = 1,
    ACTIONS(1445), 1,
      anon_sym_LPAREN,
  [15265] = 1,
    ACTIONS(1447), 1,
      anon_sym_LPAREN,
  [15269] = 1,
    ACTIONS(1449), 1,
      anon_sym_LPAREN,
  [15273] = 1,
    ACTIONS(1451), 1,
      anon_sym_LPAREN,
  [15277] = 1,
    ACTIONS(1453), 1,
      anon_sym_LPAREN,
  [15281] = 1,
    ACTIONS(1455), 1,
      anon_sym_LPAREN,
  [15285] = 1,
    ACTIONS(1457), 1,
      anon_sym_RPAREN,
  [15289] = 1,
    ACTIONS(1459), 1,
      anon_sym_COMMA,
  [15293] = 1,
    ACTIONS(1461), 1,
      anon_sym_LPAREN,
  [15297] = 1,
    ACTIONS(1463), 1,
      anon_sym_LPAREN,
  [15301] = 1,
    ACTIONS(1465), 1,
      anon_sym_LPAREN,
  [15305] = 1,
    ACTIONS(1467), 1,
      anon_sym_LPAREN,
  [15309] = 1,
    ACTIONS(1469), 1,
      anon_sym_LPAREN,
  [15313] = 1,
    ACTIONS(1471), 1,
      anon_sym_COMMA,
  [15317] = 1,
    ACTIONS(1473), 1,
      anon_sym_LPAREN,
  [15321] = 1,
    ACTIONS(1025), 1,
      anon_sym_RPAREN,
  [15325] = 1,
    ACTIONS(1475), 1,
      anon_sym_LPAREN,
  [15329] = 1,
    ACTIONS(1477), 1,
      anon_sym_LPAREN,
  [15333] = 1,
    ACTIONS(1479), 1,
      anon_sym_LPAREN,
  [15337] = 1,
    ACTIONS(1481), 1,
      anon_sym_LPAREN,
  [15341] = 1,
    ACTIONS(1483), 1,
      anon_sym_LPAREN,
  [15345] = 1,
    ACTIONS(1485), 1,
      aux_sym_partition_by_clause_token2,
  [15349] = 1,
    ACTIONS(1487), 1,
      aux_sym_partition_by_clause_token2,
  [15353] = 1,
    ACTIONS(1489), 1,
      anon_sym_LPAREN,
  [15357] = 1,
    ACTIONS(1491), 1,
      anon_sym_LPAREN,
  [15361] = 1,
    ACTIONS(1493), 1,
      anon_sym_LPAREN,
  [15365] = 1,
    ACTIONS(1495), 1,
      anon_sym_LPAREN,
  [15369] = 1,
    ACTIONS(1497), 1,
      anon_sym_LPAREN,
  [15373] = 1,
    ACTIONS(1499), 1,
      anon_sym_COMMA,
  [15377] = 1,
    ACTIONS(1501), 1,
      anon_sym_LPAREN,
  [15381] = 1,
    ACTIONS(1503), 1,
      anon_sym_LPAREN,
  [15385] = 1,
    ACTIONS(1505), 1,
      anon_sym_COLON_COLON,
  [15389] = 1,
    ACTIONS(1507), 1,
      anon_sym_LPAREN,
  [15393] = 1,
    ACTIONS(1509), 1,
      anon_sym_LPAREN,
  [15397] = 1,
    ACTIONS(1511), 1,
      aux_sym_within_group__token2,
  [15401] = 1,
    ACTIONS(1513), 1,
      anon_sym_RPAREN,
  [15405] = 1,
    ACTIONS(1515), 1,
      anon_sym_RPAREN,
  [15409] = 1,
    ACTIONS(1517), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [15413] = 1,
    ACTIONS(1519), 1,
      anon_sym_RPAREN,
  [15417] = 1,
    ACTIONS(1521), 1,
      anon_sym_COLON_COLON,
  [15421] = 1,
    ACTIONS(1523), 1,
      anon_sym_LPAREN,
  [15425] = 1,
    ACTIONS(1525), 1,
      anon_sym_LPAREN,
  [15429] = 1,
    ACTIONS(1527), 1,
      anon_sym_EQ,
  [15433] = 1,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
  [15437] = 1,
    ACTIONS(1529), 1,
      anon_sym_RPAREN,
  [15441] = 1,
    ACTIONS(1531), 1,
      aux_sym_over__token1,
  [15445] = 1,
    ACTIONS(1533), 1,
      anon_sym_RPAREN,
  [15449] = 1,
    ACTIONS(1535), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [15453] = 1,
    ACTIONS(1537), 1,
      anon_sym_RPAREN,
  [15457] = 1,
    ACTIONS(1539), 1,
      anon_sym_LPAREN,
  [15461] = 1,
    ACTIONS(1541), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [15465] = 1,
    ACTIONS(1543), 1,
      aux_sym_over__token1,
  [15469] = 1,
    ACTIONS(1545), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [15473] = 1,
    ACTIONS(1547), 1,
      anon_sym_RPAREN,
  [15477] = 1,
    ACTIONS(1549), 1,
      anon_sym_LPAREN,
  [15481] = 1,
    ACTIONS(1551), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [15485] = 1,
    ACTIONS(1553), 1,
      anon_sym_LPAREN,
  [15489] = 1,
    ACTIONS(1555), 1,
      anon_sym_LPAREN,
  [15493] = 1,
    ACTIONS(1557), 1,
      anon_sym_LPAREN,
  [15497] = 1,
    ACTIONS(1559), 1,
      anon_sym_LPAREN,
  [15501] = 1,
    ACTIONS(1561), 1,
      anon_sym_LPAREN,
  [15505] = 1,
    ACTIONS(1563), 1,
      anon_sym_LPAREN,
  [15509] = 1,
    ACTIONS(1565), 1,
      anon_sym_RPAREN,
  [15513] = 1,
    ACTIONS(1567), 1,
      anon_sym_RPAREN,
  [15517] = 1,
    ACTIONS(1569), 1,
      anon_sym_RPAREN,
  [15521] = 1,
    ACTIONS(395), 1,
      anon_sym_LPAREN,
  [15525] = 1,
    ACTIONS(1571), 1,
      ts_builtin_sym_end,
  [15529] = 1,
    ACTIONS(1573), 1,
      anon_sym_LPAREN,
  [15533] = 1,
    ACTIONS(1575), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 135,
  [SMALL_STATE(9)] = 270,
  [SMALL_STATE(10)] = 405,
  [SMALL_STATE(11)] = 540,
  [SMALL_STATE(12)] = 675,
  [SMALL_STATE(13)] = 810,
  [SMALL_STATE(14)] = 944,
  [SMALL_STATE(15)] = 1078,
  [SMALL_STATE(16)] = 1212,
  [SMALL_STATE(17)] = 1346,
  [SMALL_STATE(18)] = 1480,
  [SMALL_STATE(19)] = 1614,
  [SMALL_STATE(20)] = 1745,
  [SMALL_STATE(21)] = 1876,
  [SMALL_STATE(22)] = 2007,
  [SMALL_STATE(23)] = 2138,
  [SMALL_STATE(24)] = 2266,
  [SMALL_STATE(25)] = 2394,
  [SMALL_STATE(26)] = 2522,
  [SMALL_STATE(27)] = 2650,
  [SMALL_STATE(28)] = 2778,
  [SMALL_STATE(29)] = 2906,
  [SMALL_STATE(30)] = 3034,
  [SMALL_STATE(31)] = 3162,
  [SMALL_STATE(32)] = 3290,
  [SMALL_STATE(33)] = 3418,
  [SMALL_STATE(34)] = 3546,
  [SMALL_STATE(35)] = 3674,
  [SMALL_STATE(36)] = 3802,
  [SMALL_STATE(37)] = 3930,
  [SMALL_STATE(38)] = 4058,
  [SMALL_STATE(39)] = 4186,
  [SMALL_STATE(40)] = 4314,
  [SMALL_STATE(41)] = 4442,
  [SMALL_STATE(42)] = 4570,
  [SMALL_STATE(43)] = 4698,
  [SMALL_STATE(44)] = 4826,
  [SMALL_STATE(45)] = 4954,
  [SMALL_STATE(46)] = 5082,
  [SMALL_STATE(47)] = 5210,
  [SMALL_STATE(48)] = 5338,
  [SMALL_STATE(49)] = 5466,
  [SMALL_STATE(50)] = 5594,
  [SMALL_STATE(51)] = 5722,
  [SMALL_STATE(52)] = 5850,
  [SMALL_STATE(53)] = 5978,
  [SMALL_STATE(54)] = 6106,
  [SMALL_STATE(55)] = 6234,
  [SMALL_STATE(56)] = 6362,
  [SMALL_STATE(57)] = 6490,
  [SMALL_STATE(58)] = 6618,
  [SMALL_STATE(59)] = 6664,
  [SMALL_STATE(60)] = 6734,
  [SMALL_STATE(61)] = 6804,
  [SMALL_STATE(62)] = 6856,
  [SMALL_STATE(63)] = 6908,
  [SMALL_STATE(64)] = 6941,
  [SMALL_STATE(65)] = 6995,
  [SMALL_STATE(66)] = 7021,
  [SMALL_STATE(67)] = 7072,
  [SMALL_STATE(68)] = 7096,
  [SMALL_STATE(69)] = 7135,
  [SMALL_STATE(70)] = 7160,
  [SMALL_STATE(71)] = 7205,
  [SMALL_STATE(72)] = 7230,
  [SMALL_STATE(73)] = 7253,
  [SMALL_STATE(74)] = 7298,
  [SMALL_STATE(75)] = 7344,
  [SMALL_STATE(76)] = 7390,
  [SMALL_STATE(77)] = 7416,
  [SMALL_STATE(78)] = 7438,
  [SMALL_STATE(79)] = 7460,
  [SMALL_STATE(80)] = 7499,
  [SMALL_STATE(81)] = 7532,
  [SMALL_STATE(82)] = 7571,
  [SMALL_STATE(83)] = 7591,
  [SMALL_STATE(84)] = 7619,
  [SMALL_STATE(85)] = 7663,
  [SMALL_STATE(86)] = 7705,
  [SMALL_STATE(87)] = 7727,
  [SMALL_STATE(88)] = 7749,
  [SMALL_STATE(89)] = 7773,
  [SMALL_STATE(90)] = 7793,
  [SMALL_STATE(91)] = 7817,
  [SMALL_STATE(92)] = 7835,
  [SMALL_STATE(93)] = 7855,
  [SMALL_STATE(94)] = 7877,
  [SMALL_STATE(95)] = 7899,
  [SMALL_STATE(96)] = 7919,
  [SMALL_STATE(97)] = 7939,
  [SMALL_STATE(98)] = 7959,
  [SMALL_STATE(99)] = 7981,
  [SMALL_STATE(100)] = 8001,
  [SMALL_STATE(101)] = 8021,
  [SMALL_STATE(102)] = 8039,
  [SMALL_STATE(103)] = 8061,
  [SMALL_STATE(104)] = 8081,
  [SMALL_STATE(105)] = 8109,
  [SMALL_STATE(106)] = 8129,
  [SMALL_STATE(107)] = 8149,
  [SMALL_STATE(108)] = 8169,
  [SMALL_STATE(109)] = 8189,
  [SMALL_STATE(110)] = 8210,
  [SMALL_STATE(111)] = 8247,
  [SMALL_STATE(112)] = 8284,
  [SMALL_STATE(113)] = 8305,
  [SMALL_STATE(114)] = 8326,
  [SMALL_STATE(115)] = 8347,
  [SMALL_STATE(116)] = 8368,
  [SMALL_STATE(117)] = 8389,
  [SMALL_STATE(118)] = 8410,
  [SMALL_STATE(119)] = 8431,
  [SMALL_STATE(120)] = 8450,
  [SMALL_STATE(121)] = 8467,
  [SMALL_STATE(122)] = 8486,
  [SMALL_STATE(123)] = 8504,
  [SMALL_STATE(124)] = 8522,
  [SMALL_STATE(125)] = 8542,
  [SMALL_STATE(126)] = 8576,
  [SMALL_STATE(127)] = 8596,
  [SMALL_STATE(128)] = 8614,
  [SMALL_STATE(129)] = 8632,
  [SMALL_STATE(130)] = 8650,
  [SMALL_STATE(131)] = 8668,
  [SMALL_STATE(132)] = 8686,
  [SMALL_STATE(133)] = 8704,
  [SMALL_STATE(134)] = 8738,
  [SMALL_STATE(135)] = 8756,
  [SMALL_STATE(136)] = 8774,
  [SMALL_STATE(137)] = 8792,
  [SMALL_STATE(138)] = 8810,
  [SMALL_STATE(139)] = 8830,
  [SMALL_STATE(140)] = 8850,
  [SMALL_STATE(141)] = 8868,
  [SMALL_STATE(142)] = 8886,
  [SMALL_STATE(143)] = 8922,
  [SMALL_STATE(144)] = 8956,
  [SMALL_STATE(145)] = 8974,
  [SMALL_STATE(146)] = 8992,
  [SMALL_STATE(147)] = 9010,
  [SMALL_STATE(148)] = 9028,
  [SMALL_STATE(149)] = 9046,
  [SMALL_STATE(150)] = 9064,
  [SMALL_STATE(151)] = 9082,
  [SMALL_STATE(152)] = 9102,
  [SMALL_STATE(153)] = 9120,
  [SMALL_STATE(154)] = 9138,
  [SMALL_STATE(155)] = 9158,
  [SMALL_STATE(156)] = 9176,
  [SMALL_STATE(157)] = 9194,
  [SMALL_STATE(158)] = 9212,
  [SMALL_STATE(159)] = 9230,
  [SMALL_STATE(160)] = 9248,
  [SMALL_STATE(161)] = 9266,
  [SMALL_STATE(162)] = 9284,
  [SMALL_STATE(163)] = 9302,
  [SMALL_STATE(164)] = 9320,
  [SMALL_STATE(165)] = 9338,
  [SMALL_STATE(166)] = 9356,
  [SMALL_STATE(167)] = 9374,
  [SMALL_STATE(168)] = 9392,
  [SMALL_STATE(169)] = 9410,
  [SMALL_STATE(170)] = 9448,
  [SMALL_STATE(171)] = 9466,
  [SMALL_STATE(172)] = 9484,
  [SMALL_STATE(173)] = 9502,
  [SMALL_STATE(174)] = 9520,
  [SMALL_STATE(175)] = 9554,
  [SMALL_STATE(176)] = 9572,
  [SMALL_STATE(177)] = 9592,
  [SMALL_STATE(178)] = 9610,
  [SMALL_STATE(179)] = 9627,
  [SMALL_STATE(180)] = 9644,
  [SMALL_STATE(181)] = 9661,
  [SMALL_STATE(182)] = 9678,
  [SMALL_STATE(183)] = 9695,
  [SMALL_STATE(184)] = 9712,
  [SMALL_STATE(185)] = 9729,
  [SMALL_STATE(186)] = 9746,
  [SMALL_STATE(187)] = 9763,
  [SMALL_STATE(188)] = 9784,
  [SMALL_STATE(189)] = 9801,
  [SMALL_STATE(190)] = 9818,
  [SMALL_STATE(191)] = 9839,
  [SMALL_STATE(192)] = 9856,
  [SMALL_STATE(193)] = 9875,
  [SMALL_STATE(194)] = 9893,
  [SMALL_STATE(195)] = 9913,
  [SMALL_STATE(196)] = 9935,
  [SMALL_STATE(197)] = 9955,
  [SMALL_STATE(198)] = 9973,
  [SMALL_STATE(199)] = 9991,
  [SMALL_STATE(200)] = 10007,
  [SMALL_STATE(201)] = 10027,
  [SMALL_STATE(202)] = 10047,
  [SMALL_STATE(203)] = 10067,
  [SMALL_STATE(204)] = 10085,
  [SMALL_STATE(205)] = 10105,
  [SMALL_STATE(206)] = 10125,
  [SMALL_STATE(207)] = 10141,
  [SMALL_STATE(208)] = 10159,
  [SMALL_STATE(209)] = 10177,
  [SMALL_STATE(210)] = 10197,
  [SMALL_STATE(211)] = 10217,
  [SMALL_STATE(212)] = 10235,
  [SMALL_STATE(213)] = 10257,
  [SMALL_STATE(214)] = 10273,
  [SMALL_STATE(215)] = 10293,
  [SMALL_STATE(216)] = 10308,
  [SMALL_STATE(217)] = 10327,
  [SMALL_STATE(218)] = 10344,
  [SMALL_STATE(219)] = 10359,
  [SMALL_STATE(220)] = 10374,
  [SMALL_STATE(221)] = 10389,
  [SMALL_STATE(222)] = 10404,
  [SMALL_STATE(223)] = 10419,
  [SMALL_STATE(224)] = 10434,
  [SMALL_STATE(225)] = 10449,
  [SMALL_STATE(226)] = 10464,
  [SMALL_STATE(227)] = 10479,
  [SMALL_STATE(228)] = 10494,
  [SMALL_STATE(229)] = 10509,
  [SMALL_STATE(230)] = 10528,
  [SMALL_STATE(231)] = 10543,
  [SMALL_STATE(232)] = 10558,
  [SMALL_STATE(233)] = 10573,
  [SMALL_STATE(234)] = 10592,
  [SMALL_STATE(235)] = 10607,
  [SMALL_STATE(236)] = 10626,
  [SMALL_STATE(237)] = 10641,
  [SMALL_STATE(238)] = 10656,
  [SMALL_STATE(239)] = 10671,
  [SMALL_STATE(240)] = 10686,
  [SMALL_STATE(241)] = 10701,
  [SMALL_STATE(242)] = 10716,
  [SMALL_STATE(243)] = 10731,
  [SMALL_STATE(244)] = 10746,
  [SMALL_STATE(245)] = 10761,
  [SMALL_STATE(246)] = 10776,
  [SMALL_STATE(247)] = 10791,
  [SMALL_STATE(248)] = 10806,
  [SMALL_STATE(249)] = 10821,
  [SMALL_STATE(250)] = 10836,
  [SMALL_STATE(251)] = 10851,
  [SMALL_STATE(252)] = 10866,
  [SMALL_STATE(253)] = 10881,
  [SMALL_STATE(254)] = 10896,
  [SMALL_STATE(255)] = 10911,
  [SMALL_STATE(256)] = 10926,
  [SMALL_STATE(257)] = 10941,
  [SMALL_STATE(258)] = 10956,
  [SMALL_STATE(259)] = 10971,
  [SMALL_STATE(260)] = 10986,
  [SMALL_STATE(261)] = 11005,
  [SMALL_STATE(262)] = 11020,
  [SMALL_STATE(263)] = 11035,
  [SMALL_STATE(264)] = 11052,
  [SMALL_STATE(265)] = 11069,
  [SMALL_STATE(266)] = 11084,
  [SMALL_STATE(267)] = 11099,
  [SMALL_STATE(268)] = 11118,
  [SMALL_STATE(269)] = 11137,
  [SMALL_STATE(270)] = 11156,
  [SMALL_STATE(271)] = 11171,
  [SMALL_STATE(272)] = 11186,
  [SMALL_STATE(273)] = 11201,
  [SMALL_STATE(274)] = 11216,
  [SMALL_STATE(275)] = 11231,
  [SMALL_STATE(276)] = 11246,
  [SMALL_STATE(277)] = 11261,
  [SMALL_STATE(278)] = 11280,
  [SMALL_STATE(279)] = 11295,
  [SMALL_STATE(280)] = 11310,
  [SMALL_STATE(281)] = 11324,
  [SMALL_STATE(282)] = 11340,
  [SMALL_STATE(283)] = 11356,
  [SMALL_STATE(284)] = 11374,
  [SMALL_STATE(285)] = 11388,
  [SMALL_STATE(286)] = 11406,
  [SMALL_STATE(287)] = 11426,
  [SMALL_STATE(288)] = 11440,
  [SMALL_STATE(289)] = 11458,
  [SMALL_STATE(290)] = 11474,
  [SMALL_STATE(291)] = 11492,
  [SMALL_STATE(292)] = 11510,
  [SMALL_STATE(293)] = 11538,
  [SMALL_STATE(294)] = 11554,
  [SMALL_STATE(295)] = 11570,
  [SMALL_STATE(296)] = 11586,
  [SMALL_STATE(297)] = 11600,
  [SMALL_STATE(298)] = 11614,
  [SMALL_STATE(299)] = 11629,
  [SMALL_STATE(300)] = 11640,
  [SMALL_STATE(301)] = 11653,
  [SMALL_STATE(302)] = 11668,
  [SMALL_STATE(303)] = 11679,
  [SMALL_STATE(304)] = 11690,
  [SMALL_STATE(305)] = 11701,
  [SMALL_STATE(306)] = 11714,
  [SMALL_STATE(307)] = 11725,
  [SMALL_STATE(308)] = 11740,
  [SMALL_STATE(309)] = 11753,
  [SMALL_STATE(310)] = 11764,
  [SMALL_STATE(311)] = 11777,
  [SMALL_STATE(312)] = 11790,
  [SMALL_STATE(313)] = 11803,
  [SMALL_STATE(314)] = 11816,
  [SMALL_STATE(315)] = 11829,
  [SMALL_STATE(316)] = 11840,
  [SMALL_STATE(317)] = 11851,
  [SMALL_STATE(318)] = 11864,
  [SMALL_STATE(319)] = 11877,
  [SMALL_STATE(320)] = 11890,
  [SMALL_STATE(321)] = 11901,
  [SMALL_STATE(322)] = 11912,
  [SMALL_STATE(323)] = 11923,
  [SMALL_STATE(324)] = 11936,
  [SMALL_STATE(325)] = 11947,
  [SMALL_STATE(326)] = 11958,
  [SMALL_STATE(327)] = 11971,
  [SMALL_STATE(328)] = 11984,
  [SMALL_STATE(329)] = 11995,
  [SMALL_STATE(330)] = 12006,
  [SMALL_STATE(331)] = 12019,
  [SMALL_STATE(332)] = 12030,
  [SMALL_STATE(333)] = 12041,
  [SMALL_STATE(334)] = 12054,
  [SMALL_STATE(335)] = 12065,
  [SMALL_STATE(336)] = 12078,
  [SMALL_STATE(337)] = 12101,
  [SMALL_STATE(338)] = 12112,
  [SMALL_STATE(339)] = 12123,
  [SMALL_STATE(340)] = 12146,
  [SMALL_STATE(341)] = 12161,
  [SMALL_STATE(342)] = 12180,
  [SMALL_STATE(343)] = 12193,
  [SMALL_STATE(344)] = 12204,
  [SMALL_STATE(345)] = 12215,
  [SMALL_STATE(346)] = 12226,
  [SMALL_STATE(347)] = 12237,
  [SMALL_STATE(348)] = 12248,
  [SMALL_STATE(349)] = 12259,
  [SMALL_STATE(350)] = 12270,
  [SMALL_STATE(351)] = 12293,
  [SMALL_STATE(352)] = 12304,
  [SMALL_STATE(353)] = 12315,
  [SMALL_STATE(354)] = 12326,
  [SMALL_STATE(355)] = 12337,
  [SMALL_STATE(356)] = 12348,
  [SMALL_STATE(357)] = 12360,
  [SMALL_STATE(358)] = 12376,
  [SMALL_STATE(359)] = 12388,
  [SMALL_STATE(360)] = 12410,
  [SMALL_STATE(361)] = 12422,
  [SMALL_STATE(362)] = 12434,
  [SMALL_STATE(363)] = 12446,
  [SMALL_STATE(364)] = 12460,
  [SMALL_STATE(365)] = 12476,
  [SMALL_STATE(366)] = 12488,
  [SMALL_STATE(367)] = 12500,
  [SMALL_STATE(368)] = 12512,
  [SMALL_STATE(369)] = 12526,
  [SMALL_STATE(370)] = 12545,
  [SMALL_STATE(371)] = 12554,
  [SMALL_STATE(372)] = 12563,
  [SMALL_STATE(373)] = 12572,
  [SMALL_STATE(374)] = 12585,
  [SMALL_STATE(375)] = 12598,
  [SMALL_STATE(376)] = 12617,
  [SMALL_STATE(377)] = 12636,
  [SMALL_STATE(378)] = 12653,
  [SMALL_STATE(379)] = 12666,
  [SMALL_STATE(380)] = 12681,
  [SMALL_STATE(381)] = 12700,
  [SMALL_STATE(382)] = 12709,
  [SMALL_STATE(383)] = 12728,
  [SMALL_STATE(384)] = 12745,
  [SMALL_STATE(385)] = 12760,
  [SMALL_STATE(386)] = 12777,
  [SMALL_STATE(387)] = 12796,
  [SMALL_STATE(388)] = 12813,
  [SMALL_STATE(389)] = 12828,
  [SMALL_STATE(390)] = 12847,
  [SMALL_STATE(391)] = 12856,
  [SMALL_STATE(392)] = 12865,
  [SMALL_STATE(393)] = 12884,
  [SMALL_STATE(394)] = 12903,
  [SMALL_STATE(395)] = 12920,
  [SMALL_STATE(396)] = 12937,
  [SMALL_STATE(397)] = 12946,
  [SMALL_STATE(398)] = 12963,
  [SMALL_STATE(399)] = 12982,
  [SMALL_STATE(400)] = 12997,
  [SMALL_STATE(401)] = 13006,
  [SMALL_STATE(402)] = 13021,
  [SMALL_STATE(403)] = 13040,
  [SMALL_STATE(404)] = 13059,
  [SMALL_STATE(405)] = 13072,
  [SMALL_STATE(406)] = 13091,
  [SMALL_STATE(407)] = 13110,
  [SMALL_STATE(408)] = 13119,
  [SMALL_STATE(409)] = 13138,
  [SMALL_STATE(410)] = 13157,
  [SMALL_STATE(411)] = 13176,
  [SMALL_STATE(412)] = 13195,
  [SMALL_STATE(413)] = 13214,
  [SMALL_STATE(414)] = 13230,
  [SMALL_STATE(415)] = 13246,
  [SMALL_STATE(416)] = 13262,
  [SMALL_STATE(417)] = 13278,
  [SMALL_STATE(418)] = 13294,
  [SMALL_STATE(419)] = 13310,
  [SMALL_STATE(420)] = 13326,
  [SMALL_STATE(421)] = 13342,
  [SMALL_STATE(422)] = 13358,
  [SMALL_STATE(423)] = 13374,
  [SMALL_STATE(424)] = 13390,
  [SMALL_STATE(425)] = 13406,
  [SMALL_STATE(426)] = 13422,
  [SMALL_STATE(427)] = 13438,
  [SMALL_STATE(428)] = 13454,
  [SMALL_STATE(429)] = 13470,
  [SMALL_STATE(430)] = 13486,
  [SMALL_STATE(431)] = 13502,
  [SMALL_STATE(432)] = 13518,
  [SMALL_STATE(433)] = 13534,
  [SMALL_STATE(434)] = 13550,
  [SMALL_STATE(435)] = 13566,
  [SMALL_STATE(436)] = 13582,
  [SMALL_STATE(437)] = 13598,
  [SMALL_STATE(438)] = 13614,
  [SMALL_STATE(439)] = 13630,
  [SMALL_STATE(440)] = 13638,
  [SMALL_STATE(441)] = 13654,
  [SMALL_STATE(442)] = 13670,
  [SMALL_STATE(443)] = 13686,
  [SMALL_STATE(444)] = 13702,
  [SMALL_STATE(445)] = 13714,
  [SMALL_STATE(446)] = 13730,
  [SMALL_STATE(447)] = 13746,
  [SMALL_STATE(448)] = 13762,
  [SMALL_STATE(449)] = 13778,
  [SMALL_STATE(450)] = 13794,
  [SMALL_STATE(451)] = 13810,
  [SMALL_STATE(452)] = 13826,
  [SMALL_STATE(453)] = 13842,
  [SMALL_STATE(454)] = 13858,
  [SMALL_STATE(455)] = 13874,
  [SMALL_STATE(456)] = 13890,
  [SMALL_STATE(457)] = 13906,
  [SMALL_STATE(458)] = 13918,
  [SMALL_STATE(459)] = 13934,
  [SMALL_STATE(460)] = 13946,
  [SMALL_STATE(461)] = 13959,
  [SMALL_STATE(462)] = 13970,
  [SMALL_STATE(463)] = 13981,
  [SMALL_STATE(464)] = 13992,
  [SMALL_STATE(465)] = 13999,
  [SMALL_STATE(466)] = 14006,
  [SMALL_STATE(467)] = 14017,
  [SMALL_STATE(468)] = 14024,
  [SMALL_STATE(469)] = 14031,
  [SMALL_STATE(470)] = 14042,
  [SMALL_STATE(471)] = 14055,
  [SMALL_STATE(472)] = 14062,
  [SMALL_STATE(473)] = 14075,
  [SMALL_STATE(474)] = 14088,
  [SMALL_STATE(475)] = 14095,
  [SMALL_STATE(476)] = 14102,
  [SMALL_STATE(477)] = 14109,
  [SMALL_STATE(478)] = 14122,
  [SMALL_STATE(479)] = 14133,
  [SMALL_STATE(480)] = 14144,
  [SMALL_STATE(481)] = 14155,
  [SMALL_STATE(482)] = 14166,
  [SMALL_STATE(483)] = 14179,
  [SMALL_STATE(484)] = 14192,
  [SMALL_STATE(485)] = 14205,
  [SMALL_STATE(486)] = 14216,
  [SMALL_STATE(487)] = 14229,
  [SMALL_STATE(488)] = 14242,
  [SMALL_STATE(489)] = 14253,
  [SMALL_STATE(490)] = 14266,
  [SMALL_STATE(491)] = 14277,
  [SMALL_STATE(492)] = 14288,
  [SMALL_STATE(493)] = 14295,
  [SMALL_STATE(494)] = 14308,
  [SMALL_STATE(495)] = 14318,
  [SMALL_STATE(496)] = 14324,
  [SMALL_STATE(497)] = 14332,
  [SMALL_STATE(498)] = 14340,
  [SMALL_STATE(499)] = 14350,
  [SMALL_STATE(500)] = 14360,
  [SMALL_STATE(501)] = 14370,
  [SMALL_STATE(502)] = 14380,
  [SMALL_STATE(503)] = 14390,
  [SMALL_STATE(504)] = 14400,
  [SMALL_STATE(505)] = 14410,
  [SMALL_STATE(506)] = 14420,
  [SMALL_STATE(507)] = 14430,
  [SMALL_STATE(508)] = 14436,
  [SMALL_STATE(509)] = 14446,
  [SMALL_STATE(510)] = 14454,
  [SMALL_STATE(511)] = 14460,
  [SMALL_STATE(512)] = 14470,
  [SMALL_STATE(513)] = 14477,
  [SMALL_STATE(514)] = 14484,
  [SMALL_STATE(515)] = 14491,
  [SMALL_STATE(516)] = 14498,
  [SMALL_STATE(517)] = 14505,
  [SMALL_STATE(518)] = 14512,
  [SMALL_STATE(519)] = 14519,
  [SMALL_STATE(520)] = 14526,
  [SMALL_STATE(521)] = 14533,
  [SMALL_STATE(522)] = 14540,
  [SMALL_STATE(523)] = 14547,
  [SMALL_STATE(524)] = 14554,
  [SMALL_STATE(525)] = 14561,
  [SMALL_STATE(526)] = 14566,
  [SMALL_STATE(527)] = 14573,
  [SMALL_STATE(528)] = 14578,
  [SMALL_STATE(529)] = 14585,
  [SMALL_STATE(530)] = 14592,
  [SMALL_STATE(531)] = 14599,
  [SMALL_STATE(532)] = 14606,
  [SMALL_STATE(533)] = 14613,
  [SMALL_STATE(534)] = 14620,
  [SMALL_STATE(535)] = 14627,
  [SMALL_STATE(536)] = 14634,
  [SMALL_STATE(537)] = 14641,
  [SMALL_STATE(538)] = 14646,
  [SMALL_STATE(539)] = 14653,
  [SMALL_STATE(540)] = 14660,
  [SMALL_STATE(541)] = 14667,
  [SMALL_STATE(542)] = 14674,
  [SMALL_STATE(543)] = 14681,
  [SMALL_STATE(544)] = 14688,
  [SMALL_STATE(545)] = 14695,
  [SMALL_STATE(546)] = 14702,
  [SMALL_STATE(547)] = 14709,
  [SMALL_STATE(548)] = 14716,
  [SMALL_STATE(549)] = 14723,
  [SMALL_STATE(550)] = 14730,
  [SMALL_STATE(551)] = 14735,
  [SMALL_STATE(552)] = 14742,
  [SMALL_STATE(553)] = 14747,
  [SMALL_STATE(554)] = 14754,
  [SMALL_STATE(555)] = 14761,
  [SMALL_STATE(556)] = 14768,
  [SMALL_STATE(557)] = 14773,
  [SMALL_STATE(558)] = 14778,
  [SMALL_STATE(559)] = 14783,
  [SMALL_STATE(560)] = 14788,
  [SMALL_STATE(561)] = 14793,
  [SMALL_STATE(562)] = 14798,
  [SMALL_STATE(563)] = 14805,
  [SMALL_STATE(564)] = 14809,
  [SMALL_STATE(565)] = 14813,
  [SMALL_STATE(566)] = 14817,
  [SMALL_STATE(567)] = 14821,
  [SMALL_STATE(568)] = 14825,
  [SMALL_STATE(569)] = 14829,
  [SMALL_STATE(570)] = 14833,
  [SMALL_STATE(571)] = 14837,
  [SMALL_STATE(572)] = 14841,
  [SMALL_STATE(573)] = 14845,
  [SMALL_STATE(574)] = 14849,
  [SMALL_STATE(575)] = 14853,
  [SMALL_STATE(576)] = 14857,
  [SMALL_STATE(577)] = 14861,
  [SMALL_STATE(578)] = 14865,
  [SMALL_STATE(579)] = 14869,
  [SMALL_STATE(580)] = 14873,
  [SMALL_STATE(581)] = 14877,
  [SMALL_STATE(582)] = 14881,
  [SMALL_STATE(583)] = 14885,
  [SMALL_STATE(584)] = 14889,
  [SMALL_STATE(585)] = 14893,
  [SMALL_STATE(586)] = 14897,
  [SMALL_STATE(587)] = 14901,
  [SMALL_STATE(588)] = 14905,
  [SMALL_STATE(589)] = 14909,
  [SMALL_STATE(590)] = 14913,
  [SMALL_STATE(591)] = 14917,
  [SMALL_STATE(592)] = 14921,
  [SMALL_STATE(593)] = 14925,
  [SMALL_STATE(594)] = 14929,
  [SMALL_STATE(595)] = 14933,
  [SMALL_STATE(596)] = 14937,
  [SMALL_STATE(597)] = 14941,
  [SMALL_STATE(598)] = 14945,
  [SMALL_STATE(599)] = 14949,
  [SMALL_STATE(600)] = 14953,
  [SMALL_STATE(601)] = 14957,
  [SMALL_STATE(602)] = 14961,
  [SMALL_STATE(603)] = 14965,
  [SMALL_STATE(604)] = 14969,
  [SMALL_STATE(605)] = 14973,
  [SMALL_STATE(606)] = 14977,
  [SMALL_STATE(607)] = 14981,
  [SMALL_STATE(608)] = 14985,
  [SMALL_STATE(609)] = 14989,
  [SMALL_STATE(610)] = 14993,
  [SMALL_STATE(611)] = 14997,
  [SMALL_STATE(612)] = 15001,
  [SMALL_STATE(613)] = 15005,
  [SMALL_STATE(614)] = 15009,
  [SMALL_STATE(615)] = 15013,
  [SMALL_STATE(616)] = 15017,
  [SMALL_STATE(617)] = 15021,
  [SMALL_STATE(618)] = 15025,
  [SMALL_STATE(619)] = 15029,
  [SMALL_STATE(620)] = 15033,
  [SMALL_STATE(621)] = 15037,
  [SMALL_STATE(622)] = 15041,
  [SMALL_STATE(623)] = 15045,
  [SMALL_STATE(624)] = 15049,
  [SMALL_STATE(625)] = 15053,
  [SMALL_STATE(626)] = 15057,
  [SMALL_STATE(627)] = 15061,
  [SMALL_STATE(628)] = 15065,
  [SMALL_STATE(629)] = 15069,
  [SMALL_STATE(630)] = 15073,
  [SMALL_STATE(631)] = 15077,
  [SMALL_STATE(632)] = 15081,
  [SMALL_STATE(633)] = 15085,
  [SMALL_STATE(634)] = 15089,
  [SMALL_STATE(635)] = 15093,
  [SMALL_STATE(636)] = 15097,
  [SMALL_STATE(637)] = 15101,
  [SMALL_STATE(638)] = 15105,
  [SMALL_STATE(639)] = 15109,
  [SMALL_STATE(640)] = 15113,
  [SMALL_STATE(641)] = 15117,
  [SMALL_STATE(642)] = 15121,
  [SMALL_STATE(643)] = 15125,
  [SMALL_STATE(644)] = 15129,
  [SMALL_STATE(645)] = 15133,
  [SMALL_STATE(646)] = 15137,
  [SMALL_STATE(647)] = 15141,
  [SMALL_STATE(648)] = 15145,
  [SMALL_STATE(649)] = 15149,
  [SMALL_STATE(650)] = 15153,
  [SMALL_STATE(651)] = 15157,
  [SMALL_STATE(652)] = 15161,
  [SMALL_STATE(653)] = 15165,
  [SMALL_STATE(654)] = 15169,
  [SMALL_STATE(655)] = 15173,
  [SMALL_STATE(656)] = 15177,
  [SMALL_STATE(657)] = 15181,
  [SMALL_STATE(658)] = 15185,
  [SMALL_STATE(659)] = 15189,
  [SMALL_STATE(660)] = 15193,
  [SMALL_STATE(661)] = 15197,
  [SMALL_STATE(662)] = 15201,
  [SMALL_STATE(663)] = 15205,
  [SMALL_STATE(664)] = 15209,
  [SMALL_STATE(665)] = 15213,
  [SMALL_STATE(666)] = 15217,
  [SMALL_STATE(667)] = 15221,
  [SMALL_STATE(668)] = 15225,
  [SMALL_STATE(669)] = 15229,
  [SMALL_STATE(670)] = 15233,
  [SMALL_STATE(671)] = 15237,
  [SMALL_STATE(672)] = 15241,
  [SMALL_STATE(673)] = 15245,
  [SMALL_STATE(674)] = 15249,
  [SMALL_STATE(675)] = 15253,
  [SMALL_STATE(676)] = 15257,
  [SMALL_STATE(677)] = 15261,
  [SMALL_STATE(678)] = 15265,
  [SMALL_STATE(679)] = 15269,
  [SMALL_STATE(680)] = 15273,
  [SMALL_STATE(681)] = 15277,
  [SMALL_STATE(682)] = 15281,
  [SMALL_STATE(683)] = 15285,
  [SMALL_STATE(684)] = 15289,
  [SMALL_STATE(685)] = 15293,
  [SMALL_STATE(686)] = 15297,
  [SMALL_STATE(687)] = 15301,
  [SMALL_STATE(688)] = 15305,
  [SMALL_STATE(689)] = 15309,
  [SMALL_STATE(690)] = 15313,
  [SMALL_STATE(691)] = 15317,
  [SMALL_STATE(692)] = 15321,
  [SMALL_STATE(693)] = 15325,
  [SMALL_STATE(694)] = 15329,
  [SMALL_STATE(695)] = 15333,
  [SMALL_STATE(696)] = 15337,
  [SMALL_STATE(697)] = 15341,
  [SMALL_STATE(698)] = 15345,
  [SMALL_STATE(699)] = 15349,
  [SMALL_STATE(700)] = 15353,
  [SMALL_STATE(701)] = 15357,
  [SMALL_STATE(702)] = 15361,
  [SMALL_STATE(703)] = 15365,
  [SMALL_STATE(704)] = 15369,
  [SMALL_STATE(705)] = 15373,
  [SMALL_STATE(706)] = 15377,
  [SMALL_STATE(707)] = 15381,
  [SMALL_STATE(708)] = 15385,
  [SMALL_STATE(709)] = 15389,
  [SMALL_STATE(710)] = 15393,
  [SMALL_STATE(711)] = 15397,
  [SMALL_STATE(712)] = 15401,
  [SMALL_STATE(713)] = 15405,
  [SMALL_STATE(714)] = 15409,
  [SMALL_STATE(715)] = 15413,
  [SMALL_STATE(716)] = 15417,
  [SMALL_STATE(717)] = 15421,
  [SMALL_STATE(718)] = 15425,
  [SMALL_STATE(719)] = 15429,
  [SMALL_STATE(720)] = 15433,
  [SMALL_STATE(721)] = 15437,
  [SMALL_STATE(722)] = 15441,
  [SMALL_STATE(723)] = 15445,
  [SMALL_STATE(724)] = 15449,
  [SMALL_STATE(725)] = 15453,
  [SMALL_STATE(726)] = 15457,
  [SMALL_STATE(727)] = 15461,
  [SMALL_STATE(728)] = 15465,
  [SMALL_STATE(729)] = 15469,
  [SMALL_STATE(730)] = 15473,
  [SMALL_STATE(731)] = 15477,
  [SMALL_STATE(732)] = 15481,
  [SMALL_STATE(733)] = 15485,
  [SMALL_STATE(734)] = 15489,
  [SMALL_STATE(735)] = 15493,
  [SMALL_STATE(736)] = 15497,
  [SMALL_STATE(737)] = 15501,
  [SMALL_STATE(738)] = 15505,
  [SMALL_STATE(739)] = 15509,
  [SMALL_STATE(740)] = 15513,
  [SMALL_STATE(741)] = 15517,
  [SMALL_STATE(742)] = 15521,
  [SMALL_STATE(743)] = 15525,
  [SMALL_STATE(744)] = 15529,
  [SMALL_STATE(745)] = 15533,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsql_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(661),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(659),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(655),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(654),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(651),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(649),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(648),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(642),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(641),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(640),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(716),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(693),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(745),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(736),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(717),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(694),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(695),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(696),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(718),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(697),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(708),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(677),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(744),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(734),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(709),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(678),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(679),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(680),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(710),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(681),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_operator, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_operator, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(375),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsql_file, 1, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 3, 0, 10),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 3, 0, 10),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_expression, 1, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_expression, 1, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body_batch, 1, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body_batch, 1, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_LOCAL_ID_, 1, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_LOCAL_ID_, 1, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udt_elem, 3, 0, 13),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_udt_elem, 3, 0, 13),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_var_string, 3, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_var_string, 3, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_batch, 2, 0, 0),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 2, 0, 0), SHIFT(283),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 2, 0, 0), SHIFT(84),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 2, 0, 0), SHIFT(2),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_batch, 2, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_var_string, 1, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_var_string, 1, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_batch, 1, 0, 0),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 1, 0, 0), SHIFT(283),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 1, 0, 0), SHIFT(84),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 1, 0, 0), SHIFT(2),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_batch, 1, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_var_string, 5, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_var_string, 5, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_, 1, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_, 1, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_elem, 1, 0, 3),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_elem, 1, 0, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udt_elem, 4, 0, 13),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_udt_elem, 4, 0, 13),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_batch_repeat1, 2, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_batch_repeat1, 2, 0, 0),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_batch_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_batch_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 26),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 26),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_go_statement, 1, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_go_statement, 1, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 3, 0, 5),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_database_schema, 3, 0, 5),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_schema, 3, 0, 7),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_schema, 3, 0, 7),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 19),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 19),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(607),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 20),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 20),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 18),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 18),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 4, 0, 8),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 4, 0, 8),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 4, 0, 9),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_database_schema, 4, 0, 9),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 5, 0, 21),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_database_schema, 5, 0, 21),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 1, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 1, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 1, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_database_schema, 1, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_schema, 1, 0, 1),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_schema, 1, 0, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 16),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 16),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 4, 0, 15),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_database_schema, 4, 0, 15),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 17),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 17),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_column_name, 1, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_column_name, 1, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_alias, 1, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 7, 0, 31),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 7, 0, 31),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 25),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 25),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 22),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 22),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_, 1, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_, 1, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_, 1, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_, 1, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(687),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(700),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(586),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_money_, 2, 0, 6),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_money_, 2, 0, 6),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 4, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 4, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real_, 4, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real_, 4, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranking_windowed_function, 4, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ranking_windowed_function, 4, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 0),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(731),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(703),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(664),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hierarchyid_static_method, 5, 0, 0),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hierarchyid_static_method, 5, 0, 0),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_over_clause, 3, 0, 0),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_over_clause, 3, 0, 0),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 5, 0, 0),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 5, 0, 0),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hierarchyid_static_method, 6, 0, 28),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hierarchyid_static_method, 6, 0, 28),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_windowed_function, 5, 0, 18),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_windowed_function, 5, 0, 18),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_windowed_function, 5, 0, 19),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_windowed_function, 5, 0, 19),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real_, 3, 0, 0),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real_, 3, 0, 0),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranking_windowed_function, 5, 0, 0),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ranking_windowed_function, 5, 0, 0),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 12, 0, 0),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 12, 0, 0),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 11, 0, 0),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 11, 0, 0),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_function, 8, 0, 37),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partition_function, 8, 0, 37),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hierarchyid_static_method, 8, 0, 0),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hierarchyid_static_method, 8, 0, 0),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_over_clause, 6, 0, 0),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_over_clause, 6, 0, 0),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 8, 0, 0),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 8, 0, 0),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_over_clause, 5, 0, 0),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_over_clause, 5, 0, 0),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 7, 0, 0),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 7, 0, 0),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 3, 0, 0),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 3, 0, 0),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hierarchyid_static_method, 6, 0, 0),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hierarchyid_static_method, 6, 0, 0),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_over_clause, 4, 0, 0),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_over_clause, 4, 0, 0),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_constant, 1, 0, 0),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_constant, 1, 0, 0),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(726),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(688),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_money_, 3, 0, 6),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_money_, 3, 0, 6),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_function, 6, 0, 29),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partition_function, 6, 0, 29),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udt_method_arguments, 3, 0, 0),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_udt_method_arguments, 3, 0, 0),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udt_method_arguments, 4, 0, 0),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_udt_method_arguments, 4, 0, 0),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(645),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_statement_arg, 1, 0, 0),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_statement_arg, 1, 0, 0),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 3, 0, 0),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 3, 0, 0),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_statement_arg, 2, 0, 0),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_statement_arg, 2, 0, 0),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_parameter, 1, 0, 0),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_parameter, 1, 0, 0),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_body_batch_repeat1, 2, 0, 0),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_execute_body_batch_repeat1, 2, 0, 0),
  [689] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_body_batch_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_statement_arg_repeat1, 2, 0, 0),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_execute_statement_arg_repeat1, 2, 0, 0),
  [696] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_statement_arg_repeat1, 2, 0, 0), SHIFT_REPEAT(528),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list, 2, 0, 0),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_list, 2, 0, 0),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_list_repeat1, 2, 0, 0),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_select_list_repeat1, 2, 0, 0),
  [709] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_list_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 4, 0, 0),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 4, 0, 0),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list, 1, 0, 0),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_list, 1, 0, 0),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_elem, 3, 0, 12),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_elem, 3, 0, 12),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 6, 0, 10),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 6, 0, 10),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_statement_arg_unnamed, 1, 0, 4),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_statement_arg_unnamed, 1, 0, 4),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_statement_arg_named, 3, 0, 14),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_statement_arg_named, 3, 0, 14),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1, 0, 0),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1, 0, 0),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_parameter, 2, 0, 0),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_parameter, 2, 0, 0),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2, 0, 0),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 2, 0, 0),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_column_alias, 1, 0, 0),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as_column_alias, 1, 0, 0),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_elem, 2, 0, 3),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_elem, 2, 0, 3),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_alias, 1, 0, 0),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 7, 0, 10),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 7, 0, 10),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_body_repeat1, 2, 0, 0),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_execute_body_repeat1, 2, 0, 0),
  [774] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_body_repeat1, 2, 0, 0), SHIFT_REPEAT(472),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 5, 0, 0),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 5, 0, 0),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 5, 0, 10),
  [783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 5, 0, 10),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list_elem, 1, 0, 0),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_list_elem, 1, 0, 0),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list_elem, 3, 0, 0),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_list_elem, 3, 0, 0),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udt_elem, 5, 0, 13),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_udt_elem, 5, 0, 13),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_column_alias, 2, 0, 0),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as_column_alias, 2, 0, 0),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 7, 0, 0),
  [805] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 7, 0, 0),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_option, 1, 0, 0),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_option, 1, 0, 0),
  [813] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat2, 1, 0, 0), REDUCE(sym_batch, 2, 0, 0),
  [816] = {.entry = {.count = 3, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat2, 1, 0, 0), REDUCE(sym_batch, 2, 0, 0), SHIFT(283),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_option, 2, 0, 0),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_option, 2, 0, 0),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 4, 0, 10),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 4, 0, 10),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_batch, 3, 0, 0),
  [832] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 3, 0, 0), SHIFT(283),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_batch, 3, 0, 0),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat2, 2, 0, 0),
  [839] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat2, 2, 0, 0), SHIFT_REPEAT(283),
  [842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat2, 2, 0, 0),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 8, 0, 0),
  [852] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 8, 0, 0),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_specification, 2, 0, 0),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_specification, 2, 0, 0),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 2, 0, 0),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 2, 0, 0),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_table_name, 5, 0, 33),
  [870] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_table_name, 5, 0, 33),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_table_name, 7, 0, 42),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_table_name, 7, 0, 42),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_table_name, 3, 0, 24),
  [880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_table_name, 3, 0, 24),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 9, 0, 38),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 9, 0, 38),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_table_name, 1, 0, 11),
  [890] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_table_name, 1, 0, 11),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_source_item, 1, 0, 0),
  [896] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_source_item, 1, 0, 0),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 6, 0, 27),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 6, 0, 27),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_clause, 1, 0, 0),
  [904] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dml_clause, 1, 0, 0),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_source, 1, 0, 0),
  [908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_source, 1, 0, 0),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_sources, 1, 0, 0),
  [912] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_sources, 1, 0, 0),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_statement, 2, 0, 0),
  [916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_statement, 2, 0, 0),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_specification, 4, 0, 0),
  [920] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_specification, 4, 0, 0),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement_standalone, 1, 0, 0),
  [924] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement_standalone, 1, 0, 0),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_expression, 1, 0, 0),
  [928] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_expression, 1, 0, 0),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_another_statement, 1, 0, 0),
  [934] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_another_statement, 1, 0, 0),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 10, 0, 43),
  [938] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 10, 0, 43),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 5, 0, 23),
  [942] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 5, 0, 23),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_clauses, 1, 0, 0),
  [956] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_clauses, 1, 0, 0),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 1, 0, 32),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1, 0, 0),
  [970] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 1, 0, 0),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body_batch, 2, 0, 0),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [982] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_statement_arg_repeat1, 2, 0, 0), SHIFT_REPEAT(529),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body_batch, 3, 0, 0),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_go_statement, 2, 0, 2),
  [991] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_go_statement, 2, 0, 2),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_clauses, 2, 0, 0),
  [995] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_clauses, 2, 0, 0),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [999] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1, 0, 0),
  [1001] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_body_batch_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [1004] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collation_, 2, 0, 39),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list_, 2, 0, 0),
  [1014] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list__repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list__repeat1, 2, 0, 0),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 2, 0, 32),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(575),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1075] = {.entry = {.count = 1, .reusable = false}}, SHIFT(573),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list_, 1, 0, 0),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1099] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_order_by_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_order_by_clause_repeat1, 2, 0, 0),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 4, 0, 0),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 3, 0, 0),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsql_file, 2, 0, 0),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 2, 0, 36),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 2, 0, 35),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body_batch, 4, 0, 0),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 3, 0, 41),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_by_clause, 3, 0, 0),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 3, 0, 40),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat2, 2, 0, 0), SHIFT_REPEAT(478),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lag_lead_args, 5, 0, 30),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list__repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lag_lead_args, 3, 0, 0),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lag_lead_args, 7, 0, 34),
  [1186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_body_repeat2, 2, 0, 0), SHIFT_REPEAT(487),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_body_repeat2, 2, 0, 0),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_frame_bound, 1, 0, 0),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_frame_preceding, 2, 0, 0),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_RESULT_SETS, 2, 0, 0),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_frame_following, 2, 0, 0),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AS, 1, 0, 0),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_frame_extent, 4, 0, 0),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_all_distinct_expression, 1, 0, 0),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_frame_extent, 1, 0, 0),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_function_name, 1, 0, 0),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row_or_range_clause, 2, 0, 0),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_within_group_, 2, 0, 0),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_all_distinct_expression, 2, 0, 0),
  [1531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_respect_nulls_, 2, 0, 0),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ignore_nulls_, 2, 0, 0),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_over_, 1, 0, 0),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1571] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
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
