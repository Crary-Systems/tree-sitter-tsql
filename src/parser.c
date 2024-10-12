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
#define STATE_COUNT 747
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 194
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
  sym_as = 143,
  sym_column_alias = 144,
  sym_table_sources = 145,
  sym_table_source = 146,
  sym_table_source_item = 147,
  sym_full_table_name = 148,
  sym_full_column_name = 149,
  sym_expression = 150,
  sym_function_call = 151,
  sym_hierarchyid_static_method = 152,
  sym_partition_function = 153,
  sym_scalar_function_name = 154,
  sym_analytic_windowed_function = 155,
  sym_over_ = 156,
  sym_within_group_ = 157,
  sym_lag_lead_args = 158,
  sym_ignore_nulls_ = 159,
  sym_respect_nulls_ = 160,
  sym_aggregate_windowed_function = 161,
  sym_all_distinct_expression = 162,
  sym_ranking_windowed_function = 163,
  sym_over_clause = 164,
  sym_partition_by_clause = 165,
  sym_expression_list_ = 166,
  sym_order_by_clause = 167,
  sym_order_by_expression = 168,
  sym_collation_ = 169,
  sym_window_frame_extent = 170,
  sym_window_frame_bound = 171,
  sym_window_frame_following = 172,
  sym_window_frame_preceding = 173,
  sym_row_or_range_clause = 174,
  sym_primitive_expression = 175,
  sym_primitive_constant = 176,
  sym_money_ = 177,
  sym_real_ = 178,
  sym_float_ = 179,
  sym_decimal_ = 180,
  sym_id_ = 181,
  sym_keyword = 182,
  sym_integer = 183,
  aux_sym_tsql_file_repeat1 = 184,
  aux_sym_tsql_file_repeat2 = 185,
  aux_sym_batch_repeat1 = 186,
  aux_sym_execute_body_batch_repeat1 = 187,
  aux_sym_execute_statement_arg_repeat1 = 188,
  aux_sym_execute_body_repeat1 = 189,
  aux_sym_execute_body_repeat2 = 190,
  aux_sym_select_list_repeat1 = 191,
  aux_sym_expression_list__repeat1 = 192,
  aux_sym_order_by_clause_repeat1 = 193,
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
  [sym_as] = "as",
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
  [sym_as] = sym_as,
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
  [8] = 8,
  [9] = 7,
  [10] = 8,
  [11] = 8,
  [12] = 7,
  [13] = 13,
  [14] = 14,
  [15] = 14,
  [16] = 13,
  [17] = 13,
  [18] = 14,
  [19] = 19,
  [20] = 20,
  [21] = 19,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 24,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 29,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 29,
  [40] = 33,
  [41] = 26,
  [42] = 27,
  [43] = 37,
  [44] = 23,
  [45] = 32,
  [46] = 34,
  [47] = 27,
  [48] = 32,
  [49] = 37,
  [50] = 23,
  [51] = 34,
  [52] = 33,
  [53] = 26,
  [54] = 54,
  [55] = 24,
  [56] = 56,
  [57] = 31,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 65,
  [67] = 67,
  [68] = 64,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 78,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 79,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 79,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 72,
  [100] = 72,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 79,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 93,
  [110] = 103,
  [111] = 64,
  [112] = 112,
  [113] = 112,
  [114] = 114,
  [115] = 91,
  [116] = 116,
  [117] = 106,
  [118] = 98,
  [119] = 102,
  [120] = 97,
  [121] = 72,
  [122] = 107,
  [123] = 106,
  [124] = 124,
  [125] = 96,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 86,
  [130] = 101,
  [131] = 131,
  [132] = 102,
  [133] = 92,
  [134] = 134,
  [135] = 135,
  [136] = 103,
  [137] = 137,
  [138] = 138,
  [139] = 79,
  [140] = 94,
  [141] = 126,
  [142] = 142,
  [143] = 93,
  [144] = 108,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 82,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 91,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 105,
  [168] = 98,
  [169] = 169,
  [170] = 170,
  [171] = 72,
  [172] = 172,
  [173] = 173,
  [174] = 126,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 92,
  [181] = 86,
  [182] = 108,
  [183] = 97,
  [184] = 184,
  [185] = 96,
  [186] = 107,
  [187] = 101,
  [188] = 82,
  [189] = 105,
  [190] = 88,
  [191] = 90,
  [192] = 94,
  [193] = 72,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 79,
  [200] = 194,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 64,
  [206] = 114,
  [207] = 207,
  [208] = 116,
  [209] = 209,
  [210] = 195,
  [211] = 211,
  [212] = 196,
  [213] = 213,
  [214] = 198,
  [215] = 215,
  [216] = 216,
  [217] = 201,
  [218] = 154,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 147,
  [225] = 155,
  [226] = 79,
  [227] = 162,
  [228] = 72,
  [229] = 173,
  [230] = 230,
  [231] = 142,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 175,
  [236] = 236,
  [237] = 127,
  [238] = 238,
  [239] = 131,
  [240] = 124,
  [241] = 241,
  [242] = 128,
  [243] = 138,
  [244] = 244,
  [245] = 135,
  [246] = 246,
  [247] = 145,
  [248] = 146,
  [249] = 148,
  [250] = 151,
  [251] = 153,
  [252] = 164,
  [253] = 177,
  [254] = 176,
  [255] = 172,
  [256] = 170,
  [257] = 257,
  [258] = 166,
  [259] = 259,
  [260] = 165,
  [261] = 163,
  [262] = 161,
  [263] = 88,
  [264] = 90,
  [265] = 160,
  [266] = 159,
  [267] = 158,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 157,
  [272] = 64,
  [273] = 273,
  [274] = 169,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 114,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 116,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 173,
  [299] = 128,
  [300] = 300,
  [301] = 301,
  [302] = 179,
  [303] = 157,
  [304] = 127,
  [305] = 305,
  [306] = 306,
  [307] = 158,
  [308] = 159,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 155,
  [313] = 162,
  [314] = 314,
  [315] = 315,
  [316] = 172,
  [317] = 160,
  [318] = 79,
  [319] = 161,
  [320] = 72,
  [321] = 142,
  [322] = 131,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 124,
  [327] = 327,
  [328] = 154,
  [329] = 329,
  [330] = 138,
  [331] = 331,
  [332] = 135,
  [333] = 169,
  [334] = 175,
  [335] = 163,
  [336] = 165,
  [337] = 166,
  [338] = 315,
  [339] = 339,
  [340] = 145,
  [341] = 341,
  [342] = 170,
  [343] = 146,
  [344] = 148,
  [345] = 147,
  [346] = 151,
  [347] = 347,
  [348] = 153,
  [349] = 164,
  [350] = 350,
  [351] = 177,
  [352] = 352,
  [353] = 353,
  [354] = 176,
  [355] = 315,
  [356] = 197,
  [357] = 195,
  [358] = 202,
  [359] = 359,
  [360] = 203,
  [361] = 361,
  [362] = 362,
  [363] = 198,
  [364] = 364,
  [365] = 194,
  [366] = 196,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 223,
  [372] = 372,
  [373] = 373,
  [374] = 369,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 233,
  [379] = 379,
  [380] = 370,
  [381] = 381,
  [382] = 382,
  [383] = 377,
  [384] = 219,
  [385] = 385,
  [386] = 376,
  [387] = 220,
  [388] = 388,
  [389] = 232,
  [390] = 379,
  [391] = 391,
  [392] = 388,
  [393] = 381,
  [394] = 394,
  [395] = 395,
  [396] = 379,
  [397] = 381,
  [398] = 370,
  [399] = 388,
  [400] = 222,
  [401] = 395,
  [402] = 402,
  [403] = 376,
  [404] = 391,
  [405] = 405,
  [406] = 238,
  [407] = 377,
  [408] = 369,
  [409] = 391,
  [410] = 221,
  [411] = 411,
  [412] = 395,
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
  [429] = 429,
  [430] = 426,
  [431] = 425,
  [432] = 432,
  [433] = 429,
  [434] = 427,
  [435] = 419,
  [436] = 436,
  [437] = 422,
  [438] = 416,
  [439] = 415,
  [440] = 440,
  [441] = 441,
  [442] = 415,
  [443] = 443,
  [444] = 416,
  [445] = 445,
  [446] = 427,
  [447] = 429,
  [448] = 448,
  [449] = 428,
  [450] = 428,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 422,
  [455] = 425,
  [456] = 426,
  [457] = 413,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 292,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 470,
  [478] = 285,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 460,
  [483] = 460,
  [484] = 484,
  [485] = 461,
  [486] = 486,
  [487] = 481,
  [488] = 481,
  [489] = 489,
  [490] = 461,
  [491] = 470,
  [492] = 492,
  [493] = 201,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 495,
  [501] = 372,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 402,
  [509] = 496,
  [510] = 373,
  [511] = 495,
  [512] = 496,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 517,
  [521] = 521,
  [522] = 515,
  [523] = 516,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 515,
  [529] = 517,
  [530] = 530,
  [531] = 524,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 527,
  [539] = 532,
  [540] = 362,
  [541] = 524,
  [542] = 533,
  [543] = 361,
  [544] = 530,
  [545] = 545,
  [546] = 545,
  [547] = 547,
  [548] = 532,
  [549] = 547,
  [550] = 547,
  [551] = 513,
  [552] = 545,
  [553] = 553,
  [554] = 516,
  [555] = 555,
  [556] = 530,
  [557] = 534,
  [558] = 558,
  [559] = 513,
  [560] = 560,
  [561] = 561,
  [562] = 534,
  [563] = 533,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 570,
  [571] = 565,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 574,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 577,
  [587] = 587,
  [588] = 588,
  [589] = 589,
  [590] = 590,
  [591] = 591,
  [592] = 592,
  [593] = 593,
  [594] = 594,
  [595] = 595,
  [596] = 596,
  [597] = 578,
  [598] = 598,
  [599] = 599,
  [600] = 573,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 593,
  [605] = 605,
  [606] = 569,
  [607] = 607,
  [608] = 608,
  [609] = 602,
  [610] = 574,
  [611] = 601,
  [612] = 577,
  [613] = 578,
  [614] = 614,
  [615] = 581,
  [616] = 582,
  [617] = 583,
  [618] = 579,
  [619] = 585,
  [620] = 620,
  [621] = 621,
  [622] = 599,
  [623] = 589,
  [624] = 590,
  [625] = 625,
  [626] = 626,
  [627] = 594,
  [628] = 595,
  [629] = 596,
  [630] = 630,
  [631] = 598,
  [632] = 599,
  [633] = 573,
  [634] = 601,
  [635] = 602,
  [636] = 636,
  [637] = 593,
  [638] = 581,
  [639] = 568,
  [640] = 582,
  [641] = 641,
  [642] = 642,
  [643] = 643,
  [644] = 575,
  [645] = 587,
  [646] = 608,
  [647] = 630,
  [648] = 648,
  [649] = 649,
  [650] = 650,
  [651] = 598,
  [652] = 652,
  [653] = 583,
  [654] = 654,
  [655] = 655,
  [656] = 656,
  [657] = 605,
  [658] = 658,
  [659] = 568,
  [660] = 660,
  [661] = 661,
  [662] = 662,
  [663] = 663,
  [664] = 575,
  [665] = 587,
  [666] = 608,
  [667] = 630,
  [668] = 648,
  [669] = 669,
  [670] = 648,
  [671] = 596,
  [672] = 569,
  [673] = 673,
  [674] = 674,
  [675] = 675,
  [676] = 676,
  [677] = 605,
  [678] = 656,
  [679] = 649,
  [680] = 643,
  [681] = 642,
  [682] = 566,
  [683] = 683,
  [684] = 595,
  [685] = 685,
  [686] = 588,
  [687] = 592,
  [688] = 594,
  [689] = 689,
  [690] = 690,
  [691] = 685,
  [692] = 683,
  [693] = 693,
  [694] = 656,
  [695] = 649,
  [696] = 643,
  [697] = 642,
  [698] = 566,
  [699] = 591,
  [700] = 700,
  [701] = 701,
  [702] = 588,
  [703] = 592,
  [704] = 689,
  [705] = 690,
  [706] = 685,
  [707] = 683,
  [708] = 708,
  [709] = 662,
  [710] = 650,
  [711] = 641,
  [712] = 590,
  [713] = 589,
  [714] = 689,
  [715] = 715,
  [716] = 625,
  [717] = 662,
  [718] = 650,
  [719] = 641,
  [720] = 720,
  [721] = 721,
  [722] = 722,
  [723] = 723,
  [724] = 625,
  [725] = 661,
  [726] = 570,
  [727] = 700,
  [728] = 715,
  [729] = 729,
  [730] = 661,
  [731] = 570,
  [732] = 700,
  [733] = 715,
  [734] = 690,
  [735] = 652,
  [736] = 701,
  [737] = 652,
  [738] = 701,
  [739] = 739,
  [740] = 585,
  [741] = 607,
  [742] = 607,
  [743] = 743,
  [744] = 744,
  [745] = 655,
  [746] = 655,
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
  [64] = {.lex_state = 369},
  [65] = {.lex_state = 371},
  [66] = {.lex_state = 371},
  [67] = {.lex_state = 369},
  [68] = {.lex_state = 370},
  [69] = {.lex_state = 370},
  [70] = {.lex_state = 370},
  [71] = {.lex_state = 377},
  [72] = {.lex_state = 370},
  [73] = {.lex_state = 377},
  [74] = {.lex_state = 369},
  [75] = {.lex_state = 369},
  [76] = {.lex_state = 370},
  [77] = {.lex_state = 370},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 371},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 377},
  [82] = {.lex_state = 370},
  [83] = {.lex_state = 371},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 370},
  [87] = {.lex_state = 375},
  [88] = {.lex_state = 373},
  [89] = {.lex_state = 372},
  [90] = {.lex_state = 373},
  [91] = {.lex_state = 370},
  [92] = {.lex_state = 370},
  [93] = {.lex_state = 370},
  [94] = {.lex_state = 370},
  [95] = {.lex_state = 370},
  [96] = {.lex_state = 370},
  [97] = {.lex_state = 370},
  [98] = {.lex_state = 370},
  [99] = {.lex_state = 372},
  [100] = {.lex_state = 375},
  [101] = {.lex_state = 370},
  [102] = {.lex_state = 370},
  [103] = {.lex_state = 370},
  [104] = {.lex_state = 372},
  [105] = {.lex_state = 370},
  [106] = {.lex_state = 370},
  [107] = {.lex_state = 370},
  [108] = {.lex_state = 370},
  [109] = {.lex_state = 371},
  [110] = {.lex_state = 371},
  [111] = {.lex_state = 375},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 374},
  [115] = {.lex_state = 371},
  [116] = {.lex_state = 374},
  [117] = {.lex_state = 371},
  [118] = {.lex_state = 371},
  [119] = {.lex_state = 371},
  [120] = {.lex_state = 371},
  [121] = {.lex_state = 371},
  [122] = {.lex_state = 371},
  [123] = {.lex_state = 371},
  [124] = {.lex_state = 369},
  [125] = {.lex_state = 371},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 369},
  [128] = {.lex_state = 369},
  [129] = {.lex_state = 371},
  [130] = {.lex_state = 371},
  [131] = {.lex_state = 369},
  [132] = {.lex_state = 371},
  [133] = {.lex_state = 371},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 369},
  [136] = {.lex_state = 371},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 369},
  [139] = {.lex_state = 371},
  [140] = {.lex_state = 371},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 369},
  [143] = {.lex_state = 371},
  [144] = {.lex_state = 371},
  [145] = {.lex_state = 369},
  [146] = {.lex_state = 369},
  [147] = {.lex_state = 369},
  [148] = {.lex_state = 369},
  [149] = {.lex_state = 371},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 369},
  [152] = {.lex_state = 372},
  [153] = {.lex_state = 369},
  [154] = {.lex_state = 369},
  [155] = {.lex_state = 369},
  [156] = {.lex_state = 371},
  [157] = {.lex_state = 369},
  [158] = {.lex_state = 369},
  [159] = {.lex_state = 369},
  [160] = {.lex_state = 369},
  [161] = {.lex_state = 369},
  [162] = {.lex_state = 369},
  [163] = {.lex_state = 369},
  [164] = {.lex_state = 369},
  [165] = {.lex_state = 369},
  [166] = {.lex_state = 369},
  [167] = {.lex_state = 371},
  [168] = {.lex_state = 371},
  [169] = {.lex_state = 369},
  [170] = {.lex_state = 369},
  [171] = {.lex_state = 371},
  [172] = {.lex_state = 369},
  [173] = {.lex_state = 369},
  [174] = {.lex_state = 3},
  [175] = {.lex_state = 369},
  [176] = {.lex_state = 369},
  [177] = {.lex_state = 369},
  [178] = {.lex_state = 369},
  [179] = {.lex_state = 378},
  [180] = {.lex_state = 371},
  [181] = {.lex_state = 371},
  [182] = {.lex_state = 371},
  [183] = {.lex_state = 371},
  [184] = {.lex_state = 369},
  [185] = {.lex_state = 371},
  [186] = {.lex_state = 371},
  [187] = {.lex_state = 371},
  [188] = {.lex_state = 371},
  [189] = {.lex_state = 371},
  [190] = {.lex_state = 379},
  [191] = {.lex_state = 379},
  [192] = {.lex_state = 371},
  [193] = {.lex_state = 376},
  [194] = {.lex_state = 380},
  [195] = {.lex_state = 380},
  [196] = {.lex_state = 380},
  [197] = {.lex_state = 378},
  [198] = {.lex_state = 380},
  [199] = {.lex_state = 376},
  [200] = {.lex_state = 380},
  [201] = {.lex_state = 376},
  [202] = {.lex_state = 380},
  [203] = {.lex_state = 380},
  [204] = {.lex_state = 382},
  [205] = {.lex_state = 378},
  [206] = {.lex_state = 381},
  [207] = {.lex_state = 376},
  [208] = {.lex_state = 381},
  [209] = {.lex_state = 376},
  [210] = {.lex_state = 380},
  [211] = {.lex_state = 376},
  [212] = {.lex_state = 380},
  [213] = {.lex_state = 382},
  [214] = {.lex_state = 380},
  [215] = {.lex_state = 376},
  [216] = {.lex_state = 376},
  [217] = {.lex_state = 375},
  [218] = {.lex_state = 376},
  [219] = {.lex_state = 380},
  [220] = {.lex_state = 380},
  [221] = {.lex_state = 380},
  [222] = {.lex_state = 380},
  [223] = {.lex_state = 380},
  [224] = {.lex_state = 376},
  [225] = {.lex_state = 376},
  [226] = {.lex_state = 380},
  [227] = {.lex_state = 376},
  [228] = {.lex_state = 380},
  [229] = {.lex_state = 376},
  [230] = {.lex_state = 377},
  [231] = {.lex_state = 376},
  [232] = {.lex_state = 380},
  [233] = {.lex_state = 380},
  [234] = {.lex_state = 377},
  [235] = {.lex_state = 376},
  [236] = {.lex_state = 377},
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
  [259] = {.lex_state = 377},
  [260] = {.lex_state = 376},
  [261] = {.lex_state = 376},
  [262] = {.lex_state = 376},
  [263] = {.lex_state = 375},
  [264] = {.lex_state = 375},
  [265] = {.lex_state = 376},
  [266] = {.lex_state = 376},
  [267] = {.lex_state = 376},
  [268] = {.lex_state = 377},
  [269] = {.lex_state = 377},
  [270] = {.lex_state = 377},
  [271] = {.lex_state = 376},
  [272] = {.lex_state = 376},
  [273] = {.lex_state = 376},
  [274] = {.lex_state = 376},
  [275] = {.lex_state = 376},
  [276] = {.lex_state = 376},
  [277] = {.lex_state = 377},
  [278] = {.lex_state = 376},
  [279] = {.lex_state = 377},
  [280] = {.lex_state = 375},
  [281] = {.lex_state = 377},
  [282] = {.lex_state = 9},
  [283] = {.lex_state = 383},
  [284] = {.lex_state = 376},
  [285] = {.lex_state = 377},
  [286] = {.lex_state = 383},
  [287] = {.lex_state = 377},
  [288] = {.lex_state = 377},
  [289] = {.lex_state = 375},
  [290] = {.lex_state = 377},
  [291] = {.lex_state = 380},
  [292] = {.lex_state = 377},
  [293] = {.lex_state = 380},
  [294] = {.lex_state = 377},
  [295] = {.lex_state = 377},
  [296] = {.lex_state = 377},
  [297] = {.lex_state = 377},
  [298] = {.lex_state = 375},
  [299] = {.lex_state = 375},
  [300] = {.lex_state = 377},
  [301] = {.lex_state = 377},
  [302] = {.lex_state = 375},
  [303] = {.lex_state = 375},
  [304] = {.lex_state = 375},
  [305] = {.lex_state = 377},
  [306] = {.lex_state = 377},
  [307] = {.lex_state = 375},
  [308] = {.lex_state = 375},
  [309] = {.lex_state = 377},
  [310] = {.lex_state = 377},
  [311] = {.lex_state = 377},
  [312] = {.lex_state = 375},
  [313] = {.lex_state = 375},
  [314] = {.lex_state = 377},
  [315] = {.lex_state = 375},
  [316] = {.lex_state = 375},
  [317] = {.lex_state = 375},
  [318] = {.lex_state = 377},
  [319] = {.lex_state = 375},
  [320] = {.lex_state = 377},
  [321] = {.lex_state = 375},
  [322] = {.lex_state = 375},
  [323] = {.lex_state = 377},
  [324] = {.lex_state = 377},
  [325] = {.lex_state = 377},
  [326] = {.lex_state = 375},
  [327] = {.lex_state = 377},
  [328] = {.lex_state = 375},
  [329] = {.lex_state = 377},
  [330] = {.lex_state = 375},
  [331] = {.lex_state = 377},
  [332] = {.lex_state = 375},
  [333] = {.lex_state = 375},
  [334] = {.lex_state = 375},
  [335] = {.lex_state = 375},
  [336] = {.lex_state = 375},
  [337] = {.lex_state = 375},
  [338] = {.lex_state = 375},
  [339] = {.lex_state = 377},
  [340] = {.lex_state = 375},
  [341] = {.lex_state = 375},
  [342] = {.lex_state = 375},
  [343] = {.lex_state = 375},
  [344] = {.lex_state = 375},
  [345] = {.lex_state = 375},
  [346] = {.lex_state = 375},
  [347] = {.lex_state = 377},
  [348] = {.lex_state = 375},
  [349] = {.lex_state = 375},
  [350] = {.lex_state = 377},
  [351] = {.lex_state = 375},
  [352] = {.lex_state = 377},
  [353] = {.lex_state = 377},
  [354] = {.lex_state = 375},
  [355] = {.lex_state = 375},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 377},
  [362] = {.lex_state = 377},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 8},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 377},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 8},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 375},
  [373] = {.lex_state = 375},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 375},
  [376] = {.lex_state = 9},
  [377] = {.lex_state = 375},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 9},
  [380] = {.lex_state = 8},
  [381] = {.lex_state = 9},
  [382] = {.lex_state = 375},
  [383] = {.lex_state = 375},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 9},
  [386] = {.lex_state = 9},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 9},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 9},
  [391] = {.lex_state = 9},
  [392] = {.lex_state = 9},
  [393] = {.lex_state = 9},
  [394] = {.lex_state = 375},
  [395] = {.lex_state = 9},
  [396] = {.lex_state = 9},
  [397] = {.lex_state = 9},
  [398] = {.lex_state = 8},
  [399] = {.lex_state = 9},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 9},
  [402] = {.lex_state = 375},
  [403] = {.lex_state = 9},
  [404] = {.lex_state = 9},
  [405] = {.lex_state = 375},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 375},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 9},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 375},
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
  [439] = {.lex_state = 9},
  [440] = {.lex_state = 375},
  [441] = {.lex_state = 375},
  [442] = {.lex_state = 9},
  [443] = {.lex_state = 9},
  [444] = {.lex_state = 9},
  [445] = {.lex_state = 9},
  [446] = {.lex_state = 9},
  [447] = {.lex_state = 9},
  [448] = {.lex_state = 9},
  [449] = {.lex_state = 9},
  [450] = {.lex_state = 9},
  [451] = {.lex_state = 9},
  [452] = {.lex_state = 9},
  [453] = {.lex_state = 375},
  [454] = {.lex_state = 9},
  [455] = {.lex_state = 9},
  [456] = {.lex_state = 9},
  [457] = {.lex_state = 9},
  [458] = {.lex_state = 9},
  [459] = {.lex_state = 375},
  [460] = {.lex_state = 375},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 8},
  [464] = {.lex_state = 375},
  [465] = {.lex_state = 375},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 1},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 369},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 375},
  [474] = {.lex_state = 1},
  [475] = {.lex_state = 375},
  [476] = {.lex_state = 1},
  [477] = {.lex_state = 369},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 375},
  [482] = {.lex_state = 375},
  [483] = {.lex_state = 375},
  [484] = {.lex_state = 375},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 375},
  [487] = {.lex_state = 375},
  [488] = {.lex_state = 375},
  [489] = {.lex_state = 375},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 369},
  [492] = {.lex_state = 1},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 377},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 377},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 377},
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
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 375},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 375},
  [550] = {.lex_state = 375},
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
  [564] = {.lex_state = 375},
  [565] = {.lex_state = 377},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 377},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 377},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 377},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 1},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 377},
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
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 377},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 1},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 375},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 1},
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
  [663] = {.lex_state = 284},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 1},
  [675] = {.lex_state = 1},
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
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 1},
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
  [746] = {.lex_state = 0},
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
    [sym_tsql_file] = STATE(744),
    [sym_batch] = STATE(59),
    [sym_go_statement] = STATE(290),
    [sym_execute_body_batch] = STATE(85),
    [sym_func_proc_name_server_database_schema] = STATE(65),
    [sym_func_proc_name_database_schema] = STATE(125),
    [sym_func_proc_name_schema] = STATE(120),
    [sym_sql_clauses] = STATE(73),
    [sym_another_statement] = STATE(352),
    [sym_execute_statement] = STATE(329),
    [sym_dml_clause] = STATE(352),
    [sym_select_statement_standalone] = STATE(353),
    [sym_select_statement] = STATE(350),
    [sym_query_expression] = STATE(325),
    [sym_query_specification] = STATE(327),
    [sym_id_] = STATE(118),
    [sym_keyword] = STATE(79),
    [aux_sym_tsql_file_repeat1] = STATE(59),
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
    [sym_func_proc_name_database_schema] = STATE(660),
    [sym_func_proc_name_schema] = STATE(120),
    [sym_LOCAL_ID_] = STATE(63),
    [sym_select_list] = STATE(284),
    [sym_select_list_elem] = STATE(209),
    [sym_udt_elem] = STATE(273),
    [sym_expression_elem] = STATE(273),
    [sym_column_alias] = STATE(567),
    [sym_full_column_name] = STATE(162),
    [sym_expression] = STATE(74),
    [sym_function_call] = STATE(162),
    [sym_hierarchyid_static_method] = STATE(155),
    [sym_partition_function] = STATE(155),
    [sym_scalar_function_name] = STATE(568),
    [sym_analytic_windowed_function] = STATE(155),
    [sym_aggregate_windowed_function] = STATE(155),
    [sym_ranking_windowed_function] = STATE(155),
    [sym_primitive_expression] = STATE(162),
    [sym_primitive_constant] = STATE(142),
    [sym_money_] = STATE(173),
    [sym_real_] = STATE(173),
    [sym_float_] = STATE(173),
    [sym_decimal_] = STATE(173),
    [sym_id_] = STATE(89),
    [sym_keyword] = STATE(104),
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
    [sym_func_proc_name_database_schema] = STATE(660),
    [sym_func_proc_name_schema] = STATE(120),
    [sym_LOCAL_ID_] = STATE(63),
    [sym_select_list_elem] = STATE(215),
    [sym_udt_elem] = STATE(273),
    [sym_expression_elem] = STATE(273),
    [sym_column_alias] = STATE(567),
    [sym_full_column_name] = STATE(162),
    [sym_expression] = STATE(74),
    [sym_function_call] = STATE(162),
    [sym_hierarchyid_static_method] = STATE(155),
    [sym_partition_function] = STATE(155),
    [sym_scalar_function_name] = STATE(568),
    [sym_analytic_windowed_function] = STATE(155),
    [sym_aggregate_windowed_function] = STATE(155),
    [sym_ranking_windowed_function] = STATE(155),
    [sym_primitive_expression] = STATE(162),
    [sym_primitive_constant] = STATE(142),
    [sym_money_] = STATE(173),
    [sym_real_] = STATE(173),
    [sym_float_] = STATE(173),
    [sym_decimal_] = STATE(173),
    [sym_id_] = STATE(89),
    [sym_keyword] = STATE(104),
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
    [sym_func_proc_name_database_schema] = STATE(660),
    [sym_func_proc_name_schema] = STATE(120),
    [sym_LOCAL_ID_] = STATE(142),
    [sym_full_column_name] = STATE(162),
    [sym_expression] = STATE(636),
    [sym_function_call] = STATE(162),
    [sym_hierarchyid_static_method] = STATE(155),
    [sym_partition_function] = STATE(155),
    [sym_scalar_function_name] = STATE(568),
    [sym_analytic_windowed_function] = STATE(155),
    [sym_aggregate_windowed_function] = STATE(155),
    [sym_all_distinct_expression] = STATE(640),
    [sym_ranking_windowed_function] = STATE(155),
    [sym_primitive_expression] = STATE(162),
    [sym_primitive_constant] = STATE(142),
    [sym_money_] = STATE(173),
    [sym_real_] = STATE(173),
    [sym_float_] = STATE(173),
    [sym_decimal_] = STATE(173),
    [sym_id_] = STATE(493),
    [sym_keyword] = STATE(79),
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
    [sym_func_proc_name_database_schema] = STATE(660),
    [sym_func_proc_name_schema] = STATE(120),
    [sym_LOCAL_ID_] = STATE(142),
    [sym_full_column_name] = STATE(162),
    [sym_expression] = STATE(636),
    [sym_function_call] = STATE(162),
    [sym_hierarchyid_static_method] = STATE(155),
    [sym_partition_function] = STATE(155),
    [sym_scalar_function_name] = STATE(568),
    [sym_analytic_windowed_function] = STATE(155),
    [sym_aggregate_windowed_function] = STATE(155),
    [sym_all_distinct_expression] = STATE(616),
    [sym_ranking_windowed_function] = STATE(155),
    [sym_primitive_expression] = STATE(162),
    [sym_primitive_constant] = STATE(142),
    [sym_money_] = STATE(173),
    [sym_real_] = STATE(173),
    [sym_float_] = STATE(173),
    [sym_decimal_] = STATE(173),
    [sym_id_] = STATE(493),
    [sym_keyword] = STATE(79),
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
    [sym_func_proc_name_database_schema] = STATE(660),
    [sym_func_proc_name_schema] = STATE(120),
    [sym_LOCAL_ID_] = STATE(142),
    [sym_full_column_name] = STATE(162),
    [sym_expression] = STATE(636),
    [sym_function_call] = STATE(162),
    [sym_hierarchyid_static_method] = STATE(155),
    [sym_partition_function] = STATE(155),
    [sym_scalar_function_name] = STATE(568),
    [sym_analytic_windowed_function] = STATE(155),
    [sym_aggregate_windowed_function] = STATE(155),
    [sym_all_distinct_expression] = STATE(582),
    [sym_ranking_windowed_function] = STATE(155),
    [sym_primitive_expression] = STATE(162),
    [sym_primitive_constant] = STATE(142),
    [sym_money_] = STATE(173),
    [sym_real_] = STATE(173),
    [sym_float_] = STATE(173),
    [sym_decimal_] = STATE(173),
    [sym_id_] = STATE(493),
    [sym_keyword] = STATE(79),
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(581), 1,
      sym_all_distinct_expression,
    STATE(636), 1,
      sym_expression,
    STATE(660), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(583), 1,
      sym_all_distinct_expression,
    STATE(636), 1,
      sym_expression,
    STATE(660), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(615), 1,
      sym_all_distinct_expression,
    STATE(636), 1,
      sym_expression,
    STATE(660), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(617), 1,
      sym_all_distinct_expression,
    STATE(636), 1,
      sym_expression,
    STATE(660), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(636), 1,
      sym_expression,
    STATE(653), 1,
      sym_all_distinct_expression,
    STATE(660), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(636), 1,
      sym_expression,
    STATE(638), 1,
      sym_all_distinct_expression,
    STATE(660), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(508), 1,
      sym_expression,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(613), 1,
      sym_expression_list_,
    STATE(660), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
      sym_asterisk,
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(508), 1,
      sym_expression,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(578), 1,
      sym_expression_list_,
    STATE(660), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
      sym_asterisk,
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(508), 1,
      sym_expression,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(613), 1,
      sym_expression_list_,
    STATE(660), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
      anon_sym_RPAREN,
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(508), 1,
      sym_expression,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(578), 1,
      sym_expression_list_,
    STATE(660), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
      anon_sym_RPAREN,
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(508), 1,
      sym_expression,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(597), 1,
      sym_expression_list_,
    STATE(660), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(508), 1,
      sym_expression,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(597), 1,
      sym_expression_list_,
    STATE(660), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(475), 1,
      sym_expression_list_,
    STATE(493), 1,
      sym_id_,
    STATE(508), 1,
      sym_expression,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(660), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(87), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(217), 1,
      sym_id_,
    STATE(341), 1,
      sym_expression,
    STATE(459), 1,
      sym_order_by_expression,
    STATE(659), 1,
      sym_scalar_function_name,
    STATE(660), 1,
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
    STATE(321), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(123), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(313), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(298), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(312), 5,
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
    STATE(87), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(217), 1,
      sym_id_,
    STATE(402), 1,
      sym_expression,
    STATE(475), 1,
      sym_expression_list_,
    STATE(659), 1,
      sym_scalar_function_name,
    STATE(660), 1,
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
    STATE(321), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(123), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(313), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(298), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(312), 5,
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
    STATE(87), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(217), 1,
      sym_id_,
    STATE(341), 1,
      sym_expression,
    STATE(484), 1,
      sym_order_by_expression,
    STATE(659), 1,
      sym_scalar_function_name,
    STATE(660), 1,
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
    STATE(321), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(123), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(313), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(298), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(312), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(624), 1,
      sym_expression,
    STATE(660), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(602), 1,
      sym_expression,
    STATE(660), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(635), 1,
      sym_expression,
    STATE(660), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(634), 1,
      sym_expression,
    STATE(660), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(628), 1,
      sym_expression,
    STATE(660), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(199), 1,
      sym_keyword,
    STATE(201), 1,
      sym_id_,
    STATE(276), 1,
      sym_expression,
    STATE(639), 1,
      sym_scalar_function_name,
    STATE(660), 1,
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
    STATE(227), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(229), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(225), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(630), 1,
      sym_expression,
    STATE(660), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(199), 1,
      sym_keyword,
    STATE(201), 1,
      sym_id_,
    STATE(275), 1,
      sym_expression,
    STATE(639), 1,
      sym_scalar_function_name,
    STATE(660), 1,
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
    STATE(227), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(229), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(225), 5,
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
  [3162] = 33,
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
    STATE(87), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(217), 1,
      sym_id_,
    STATE(440), 1,
      sym_expression,
    STATE(659), 1,
      sym_scalar_function_name,
    STATE(660), 1,
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
    STATE(321), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(123), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(313), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(298), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(312), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(623), 1,
      sym_expression,
    STATE(660), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(660), 1,
      sym_func_proc_name_database_schema,
    STATE(742), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(660), 1,
      sym_func_proc_name_database_schema,
    STATE(685), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(647), 1,
      sym_expression,
    STATE(660), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(620), 1,
      sym_expression,
    STATE(660), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(648), 1,
      sym_expression,
    STATE(660), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(518), 1,
      sym_expression,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(660), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(660), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(607), 1,
      sym_expression,
    STATE(660), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(601), 1,
      sym_expression,
    STATE(660), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(595), 1,
      sym_expression,
    STATE(660), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(660), 1,
      sym_func_proc_name_database_schema,
    STATE(668), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(590), 1,
      sym_expression,
    STATE(660), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(589), 1,
      sym_expression,
    STATE(660), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(660), 1,
      sym_func_proc_name_database_schema,
    STATE(691), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(660), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(660), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(660), 1,
      sym_func_proc_name_database_schema,
    STATE(670), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(660), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(660), 1,
      sym_func_proc_name_database_schema,
    STATE(706), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(660), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(611), 1,
      sym_expression,
    STATE(660), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(660), 1,
      sym_func_proc_name_database_schema,
    STATE(722), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(609), 1,
      sym_expression,
    STATE(660), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(493), 1,
      sym_id_,
    STATE(555), 1,
      sym_expression,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(660), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    STATE(79), 1,
      sym_keyword,
    STATE(120), 1,
      sym_func_proc_name_schema,
    STATE(440), 1,
      sym_expression,
    STATE(493), 1,
      sym_id_,
    STATE(568), 1,
      sym_scalar_function_name,
    STATE(660), 1,
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
    STATE(142), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(55), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(162), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(173), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(155), 5,
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
    ACTIONS(5), 1,
      aux_sym_go_statement_token1,
    ACTIONS(9), 1,
      sym_execute,
    ACTIONS(11), 1,
      sym_select,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(181), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(183), 1,
      aux_sym_id__token1,
    ACTIONS(185), 1,
      aux_sym_id__token2,
    STATE(66), 1,
      sym_func_proc_name_server_database_schema,
    STATE(137), 1,
      sym_execute_body_batch,
    STATE(139), 1,
      sym_keyword,
    STATE(168), 1,
      sym_id_,
    STATE(183), 1,
      sym_func_proc_name_schema,
    STATE(185), 1,
      sym_func_proc_name_database_schema,
    STATE(290), 1,
      sym_go_statement,
    STATE(325), 1,
      sym_query_expression,
    STATE(327), 1,
      sym_query_specification,
    STATE(329), 1,
      sym_execute_statement,
    STATE(350), 1,
      sym_select_statement,
    STATE(353), 1,
      sym_select_statement_standalone,
    STATE(60), 2,
      sym_batch,
      aux_sym_tsql_file_repeat1,
    STATE(73), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(352), 2,
      sym_another_statement,
      sym_dml_clause,
  [6734] = 22,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    ACTIONS(189), 1,
      aux_sym_go_statement_token1,
    ACTIONS(192), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(195), 1,
      sym_execute,
    ACTIONS(198), 1,
      sym_select,
    ACTIONS(201), 1,
      aux_sym_id__token1,
    ACTIONS(204), 1,
      aux_sym_id__token2,
    STATE(66), 1,
      sym_func_proc_name_server_database_schema,
    STATE(137), 1,
      sym_execute_body_batch,
    STATE(139), 1,
      sym_keyword,
    STATE(168), 1,
      sym_id_,
    STATE(183), 1,
      sym_func_proc_name_schema,
    STATE(185), 1,
      sym_func_proc_name_database_schema,
    STATE(290), 1,
      sym_go_statement,
    STATE(325), 1,
      sym_query_expression,
    STATE(327), 1,
      sym_query_specification,
    STATE(329), 1,
      sym_execute_statement,
    STATE(350), 1,
      sym_select_statement,
    STATE(353), 1,
      sym_select_statement_standalone,
    STATE(60), 2,
      sym_batch,
      aux_sym_tsql_file_repeat1,
    STATE(73), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(352), 2,
      sym_another_statement,
      sym_dml_clause,
  [6804] = 14,
    ACTIONS(211), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(217), 1,
      aux_sym_constant_token2,
    ACTIONS(219), 1,
      sym_WITH,
    STATE(195), 1,
      sym_execute_statement_arg_named,
    STATE(196), 1,
      sym_execute_statement_arg_unnamed,
    STATE(197), 1,
      sym_LOCAL_ID_,
    STATE(219), 1,
      sym_execute_parameter,
    STATE(226), 1,
      sym_keyword,
    STATE(293), 1,
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
    STATE(195), 1,
      sym_execute_statement_arg_named,
    STATE(196), 1,
      sym_execute_statement_arg_unnamed,
    STATE(197), 1,
      sym_LOCAL_ID_,
    STATE(219), 1,
      sym_execute_parameter,
    STATE(226), 1,
      sym_keyword,
    STATE(291), 1,
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
    STATE(30), 1,
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
  [6941] = 2,
    ACTIONS(237), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(235), 15,
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
  [6967] = 16,
    ACTIONS(129), 1,
      aux_sym_id__token1,
    ACTIONS(131), 1,
      aux_sym_id__token2,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
    ACTIONS(243), 1,
      anon_sym_SEMI,
    ACTIONS(245), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(251), 1,
      aux_sym_constant_token2,
    STATE(87), 1,
      sym_keyword,
    STATE(356), 1,
      sym_LOCAL_ID_,
    STATE(357), 1,
      sym_execute_statement_arg_named,
    STATE(366), 1,
      sym_execute_statement_arg_unnamed,
    STATE(368), 1,
      sym_execute_statement_arg,
    STATE(384), 1,
      sym_execute_parameter,
    ACTIONS(247), 2,
      sym_default,
      sym_null_,
    ACTIONS(249), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(371), 2,
      sym_constant,
      sym_id_,
    ACTIONS(241), 3,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [7021] = 15,
    ACTIONS(129), 1,
      aux_sym_id__token1,
    ACTIONS(131), 1,
      aux_sym_id__token2,
    ACTIONS(243), 1,
      anon_sym_SEMI,
    ACTIONS(245), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(251), 1,
      aux_sym_constant_token2,
    STATE(87), 1,
      sym_keyword,
    STATE(356), 1,
      sym_LOCAL_ID_,
    STATE(357), 1,
      sym_execute_statement_arg_named,
    STATE(366), 1,
      sym_execute_statement_arg_unnamed,
    STATE(368), 1,
      sym_execute_statement_arg,
    STATE(384), 1,
      sym_execute_parameter,
    ACTIONS(247), 2,
      sym_default,
      sym_null_,
    ACTIONS(249), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(371), 2,
      sym_constant,
      sym_id_,
    ACTIONS(241), 3,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [7072] = 11,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      aux_sym_AS_token1,
    ACTIONS(261), 1,
      sym_string_lit,
    STATE(75), 1,
      sym_udt_method_arguments,
    STATE(199), 1,
      sym_keyword,
    STATE(241), 1,
      sym_column_alias,
    STATE(246), 1,
      sym_id_,
    STATE(257), 1,
      sym_as_column_alias,
    STATE(364), 1,
      sym_as,
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
  [7114] = 2,
    ACTIONS(237), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(235), 12,
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
  [7138] = 3,
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
  [7163] = 3,
    ACTIONS(273), 1,
      sym_PLUS,
    ACTIONS(271), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(269), 10,
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
  [7188] = 13,
    ACTIONS(277), 1,
      aux_sym_go_statement_token1,
    ACTIONS(280), 1,
      sym_execute,
    ACTIONS(283), 1,
      sym_select,
    ACTIONS(286), 1,
      aux_sym_id__token1,
    STATE(325), 1,
      sym_query_expression,
    STATE(327), 1,
      sym_query_specification,
    STATE(329), 1,
      sym_execute_statement,
    STATE(350), 1,
      sym_select_statement,
    STATE(353), 1,
      sym_select_statement_standalone,
    STATE(81), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(288), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    STATE(352), 2,
      sym_another_statement,
      sym_dml_clause,
    ACTIONS(275), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [7233] = 2,
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
  [7256] = 13,
    ACTIONS(294), 1,
      aux_sym_go_statement_token1,
    ACTIONS(297), 1,
      sym_execute,
    ACTIONS(300), 1,
      sym_select,
    ACTIONS(303), 1,
      aux_sym_id__token1,
    STATE(325), 1,
      sym_query_expression,
    STATE(327), 1,
      sym_query_specification,
    STATE(329), 1,
      sym_execute_statement,
    STATE(350), 1,
      sym_select_statement,
    STATE(353), 1,
      sym_select_statement_standalone,
    STATE(81), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(294), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    STATE(352), 2,
      sym_another_statement,
      sym_dml_clause,
    ACTIONS(292), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [7301] = 12,
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
    STATE(199), 1,
      sym_keyword,
    STATE(241), 1,
      sym_column_alias,
    STATE(244), 1,
      sym_as_column_alias,
    STATE(246), 1,
      sym_id_,
    STATE(364), 1,
      sym_as,
    ACTIONS(307), 3,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
    ACTIONS(305), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
  [7343] = 9,
    ACTIONS(259), 1,
      aux_sym_AS_token1,
    ACTIONS(261), 1,
      sym_string_lit,
    STATE(199), 1,
      sym_keyword,
    STATE(241), 1,
      sym_column_alias,
    STATE(246), 1,
      sym_id_,
    STATE(278), 1,
      sym_as_column_alias,
    STATE(364), 1,
      sym_as,
    ACTIONS(309), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(311), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [7379] = 2,
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
  [7401] = 4,
    ACTIONS(273), 1,
      sym_PLUS,
    ACTIONS(317), 1,
      aux_sym_execute_body_token1,
    ACTIONS(271), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(269), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [7427] = 14,
    ACTIONS(91), 1,
      aux_sym_go_statement_token1,
    ACTIONS(129), 1,
      aux_sym_id__token1,
    ACTIONS(131), 1,
      aux_sym_id__token2,
    ACTIONS(245), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(251), 1,
      aux_sym_constant_token2,
    STATE(87), 1,
      sym_keyword,
    STATE(356), 1,
      sym_LOCAL_ID_,
    STATE(357), 1,
      sym_execute_statement_arg_named,
    STATE(366), 1,
      sym_execute_statement_arg_unnamed,
    STATE(384), 1,
      sym_execute_parameter,
    STATE(387), 1,
      sym_execute_statement_arg,
    ACTIONS(247), 2,
      sym_default,
      sym_null_,
    ACTIONS(249), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(371), 2,
      sym_constant,
      sym_id_,
  [7473] = 2,
    ACTIONS(321), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(319), 11,
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
  [7495] = 14,
    ACTIONS(211), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(217), 1,
      aux_sym_constant_token2,
    ACTIONS(323), 1,
      aux_sym_go_statement_token1,
    ACTIONS(325), 1,
      aux_sym_id__token1,
    ACTIONS(327), 1,
      aux_sym_id__token2,
    STATE(197), 1,
      sym_LOCAL_ID_,
    STATE(210), 1,
      sym_execute_statement_arg_named,
    STATE(212), 1,
      sym_execute_statement_arg_unnamed,
    STATE(219), 1,
      sym_execute_parameter,
    STATE(220), 1,
      sym_execute_statement_arg,
    STATE(226), 1,
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
  [7541] = 11,
    ACTIONS(333), 1,
      sym_execute,
    ACTIONS(336), 1,
      sym_select,
    STATE(325), 1,
      sym_query_expression,
    STATE(327), 1,
      sym_query_specification,
    STATE(329), 1,
      sym_execute_statement,
    STATE(350), 1,
      sym_select_statement,
    STATE(353), 1,
      sym_select_statement_standalone,
    ACTIONS(331), 2,
      aux_sym_go_statement_token1,
      aux_sym_id__token1,
    STATE(81), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(352), 2,
      sym_another_statement,
      sym_dml_clause,
    ACTIONS(329), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [7580] = 2,
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
  [7600] = 6,
    ACTIONS(347), 1,
      aux_sym_constant_token3,
    STATE(362), 1,
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
  [7628] = 14,
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
    STATE(77), 1,
      sym_LOCAL_ID_,
    STATE(95), 1,
      sym_keyword,
    STATE(96), 1,
      sym_func_proc_name_database_schema,
    STATE(97), 1,
      sym_func_proc_name_schema,
    STATE(98), 1,
      sym_id_,
    STATE(314), 1,
      sym_execute_body,
    STATE(61), 2,
      sym_func_proc_name_server_database_schema,
      sym_execute_var_string,
  [7672] = 13,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(359), 1,
      aux_sym_go_statement_token1,
    ACTIONS(361), 1,
      sym_execute,
    ACTIONS(363), 1,
      sym_select,
    STATE(297), 1,
      sym_go_statement,
    STATE(325), 1,
      sym_query_expression,
    STATE(327), 1,
      sym_query_specification,
    STATE(329), 1,
      sym_execute_statement,
    STATE(350), 1,
      sym_select_statement,
    STATE(353), 1,
      sym_select_statement_standalone,
    STATE(462), 1,
      aux_sym_tsql_file_repeat2,
    STATE(71), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(352), 2,
      sym_another_statement,
      sym_dml_clause,
  [7714] = 2,
    ACTIONS(367), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(365), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [7734] = 1,
    ACTIONS(319), 15,
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
  [7752] = 4,
    ACTIONS(373), 1,
      aux_sym_over__token1,
    STATE(153), 1,
      sym_over_clause,
    ACTIONS(371), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(369), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [7776] = 6,
    ACTIONS(379), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(381), 1,
      aux_sym_execute_body_token1,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      anon_sym_COLON_COLON,
    ACTIONS(375), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_string_lit,
      aux_sym_id__token2,
    ACTIONS(377), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [7804] = 4,
    ACTIONS(373), 1,
      aux_sym_over__token1,
    STATE(151), 1,
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
  [7828] = 3,
    ACTIONS(395), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(391), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(393), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [7850] = 2,
    ACTIONS(399), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(397), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [7870] = 3,
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
  [7892] = 2,
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
  [7912] = 2,
    ACTIONS(321), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(319), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [7932] = 2,
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
  [7952] = 2,
    ACTIONS(417), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(415), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [7972] = 3,
    ACTIONS(421), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(383), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(419), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [7994] = 2,
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
  [8014] = 1,
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
  [8032] = 2,
    ACTIONS(425), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(423), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8052] = 3,
    ACTIONS(431), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(427), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(429), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [8074] = 3,
    ACTIONS(437), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(433), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(435), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [8096] = 2,
    ACTIONS(321), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(319), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_body_token1,
      anon_sym_LPAREN,
      sym_string_lit,
      anon_sym_COLON_COLON,
      aux_sym_id__token2,
  [8116] = 2,
    ACTIONS(441), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(439), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8136] = 3,
    ACTIONS(447), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(443), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(445), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [8158] = 2,
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
  [8178] = 2,
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
  [8198] = 3,
    ACTIONS(457), 1,
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
  [8219] = 3,
    ACTIONS(459), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(435), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(433), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8240] = 1,
    ACTIONS(235), 14,
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
  [8257] = 11,
    ACTIONS(91), 1,
      aux_sym_go_statement_token1,
    ACTIONS(93), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(129), 1,
      aux_sym_id__token1,
    ACTIONS(131), 1,
      aux_sym_id__token2,
    ACTIONS(251), 1,
      aux_sym_constant_token2,
    STATE(87), 1,
      sym_keyword,
    STATE(356), 1,
      sym_LOCAL_ID_,
    STATE(410), 1,
      sym_execute_parameter,
    ACTIONS(247), 2,
      sym_default,
      sym_null_,
    ACTIONS(249), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(371), 2,
      sym_constant,
      sym_id_,
  [8294] = 11,
    ACTIONS(217), 1,
      aux_sym_constant_token2,
    ACTIONS(323), 1,
      aux_sym_go_statement_token1,
    ACTIONS(325), 1,
      aux_sym_id__token1,
    ACTIONS(327), 1,
      aux_sym_id__token2,
    ACTIONS(461), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(197), 1,
      sym_LOCAL_ID_,
    STATE(221), 1,
      sym_execute_parameter,
    STATE(226), 1,
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
  [8331] = 3,
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
  [8352] = 3,
    ACTIONS(469), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
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
  [8373] = 3,
    ACTIONS(467), 1,
      aux_sym_real__token2,
    ACTIONS(473), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(471), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [8394] = 3,
    ACTIONS(475), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(445), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(443), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8415] = 3,
    ACTIONS(477), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(419), 6,
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
  [8436] = 3,
    ACTIONS(479), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(429), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(427), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8457] = 2,
    ACTIONS(417), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(415), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_LPAREN,
      aux_sym_id__token2,
  [8476] = 2,
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
  [8495] = 2,
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
  [8513] = 3,
    ACTIONS(481), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(443), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(445), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [8533] = 2,
    ACTIONS(485), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(483), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [8551] = 2,
    ACTIONS(413), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(411), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8569] = 10,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(487), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(495), 1,
      sym_dollar_partition_,
    STATE(79), 1,
      sym_keyword,
    STATE(521), 1,
      sym_id_,
    ACTIONS(489), 2,
      sym_get_descendant_,
      sym_get_reparented_value_,
    ACTIONS(491), 2,
      sym_getancestor_,
      sym_is_descendant_of_,
    ACTIONS(493), 2,
      sym_getlevel_,
      sym_tostring_,
  [8603] = 2,
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
  [8621] = 2,
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
  [8639] = 2,
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
  [8657] = 2,
    ACTIONS(425), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(423), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8675] = 2,
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
  [8693] = 3,
    ACTIONS(509), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(427), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(429), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [8713] = 2,
    ACTIONS(399), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(397), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8731] = 10,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(487), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(495), 1,
      sym_dollar_partition_,
    STATE(79), 1,
      sym_keyword,
    STATE(507), 1,
      sym_id_,
    ACTIONS(489), 2,
      sym_get_descendant_,
      sym_get_reparented_value_,
    ACTIONS(491), 2,
      sym_getancestor_,
      sym_is_descendant_of_,
    ACTIONS(493), 2,
      sym_getlevel_,
      sym_tostring_,
  [8765] = 2,
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
  [8783] = 3,
    ACTIONS(515), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(433), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(435), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [8803] = 11,
    ACTIONS(359), 1,
      aux_sym_go_statement_token1,
    ACTIONS(361), 1,
      sym_execute,
    ACTIONS(363), 1,
      sym_select,
    STATE(295), 1,
      sym_go_statement,
    STATE(325), 1,
      sym_query_expression,
    STATE(327), 1,
      sym_query_specification,
    STATE(329), 1,
      sym_execute_statement,
    STATE(350), 1,
      sym_select_statement,
    STATE(353), 1,
      sym_select_statement_standalone,
    STATE(71), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(352), 2,
      sym_another_statement,
      sym_dml_clause,
  [8839] = 2,
    ACTIONS(519), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(517), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [8857] = 2,
    ACTIONS(321), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(319), 7,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8875] = 2,
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
  [8893] = 10,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(487), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(527), 1,
      sym_dollar_partition_,
    STATE(79), 1,
      sym_keyword,
    STATE(521), 1,
      sym_id_,
    ACTIONS(521), 2,
      sym_get_descendant_,
      sym_get_reparented_value_,
    ACTIONS(523), 2,
      sym_getancestor_,
      sym_is_descendant_of_,
    ACTIONS(525), 2,
      sym_getlevel_,
      sym_tostring_,
  [8927] = 2,
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
  [8945] = 3,
    ACTIONS(529), 1,
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
  [8965] = 2,
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
  [8983] = 2,
    ACTIONS(533), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(531), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [9001] = 2,
    ACTIONS(537), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(535), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [9019] = 2,
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
  [9037] = 2,
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
  [9055] = 2,
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
  [9073] = 12,
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
    STATE(70), 1,
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
  [9111] = 2,
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
  [9129] = 3,
    ACTIONS(381), 1,
      aux_sym_execute_body_token1,
    ACTIONS(551), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
    ACTIONS(553), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [9149] = 2,
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
  [9167] = 2,
    ACTIONS(561), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(559), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [9185] = 2,
    ACTIONS(565), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(563), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [9203] = 3,
    ACTIONS(567), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
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
  [9223] = 2,
    ACTIONS(571), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(569), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [9241] = 2,
    ACTIONS(575), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(573), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [9259] = 2,
    ACTIONS(579), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(577), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [9277] = 2,
    ACTIONS(583), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(581), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [9295] = 2,
    ACTIONS(587), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(585), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [9313] = 2,
    ACTIONS(591), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(589), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [9331] = 2,
    ACTIONS(595), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(593), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [9349] = 2,
    ACTIONS(599), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(597), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [9367] = 2,
    ACTIONS(603), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(601), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [9385] = 2,
    ACTIONS(607), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(605), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [9403] = 2,
    ACTIONS(441), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(439), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [9421] = 3,
    ACTIONS(609), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(383), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(419), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9441] = 2,
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
  [9459] = 2,
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
  [9477] = 2,
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
  [9495] = 2,
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
  [9513] = 2,
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
  [9531] = 10,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(487), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(629), 1,
      sym_dollar_partition_,
    STATE(79), 1,
      sym_keyword,
    STATE(521), 1,
      sym_id_,
    ACTIONS(623), 2,
      sym_get_descendant_,
      sym_get_reparented_value_,
    ACTIONS(625), 2,
      sym_getancestor_,
      sym_is_descendant_of_,
    ACTIONS(627), 2,
      sym_getlevel_,
      sym_tostring_,
  [9565] = 2,
    ACTIONS(633), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(631), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [9583] = 2,
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
  [9601] = 2,
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
  [9619] = 2,
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
  [9636] = 3,
    ACTIONS(647), 1,
      anon_sym_EQ,
    ACTIONS(235), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(237), 6,
      aux_sym_go_statement_token1,
      sym_OUTPUT,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [9655] = 2,
    ACTIONS(397), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(399), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9672] = 2,
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
  [9689] = 2,
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
  [9706] = 2,
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
  [9723] = 2,
    ACTIONS(649), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
    ACTIONS(651), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [9740] = 2,
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
  [9757] = 2,
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
  [9774] = 2,
    ACTIONS(423), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(425), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9791] = 2,
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
  [9808] = 2,
    ACTIONS(439), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(441), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9825] = 4,
    ACTIONS(653), 1,
      aux_sym_over__token1,
    STATE(251), 1,
      sym_over_clause,
    ACTIONS(369), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(371), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [9846] = 4,
    ACTIONS(653), 1,
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
  [9867] = 2,
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
  [9884] = 2,
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
  [9900] = 3,
    STATE(202), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(655), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(657), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [9918] = 4,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(659), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(661), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [9938] = 4,
    ACTIONS(665), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(659), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(661), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [9958] = 3,
    ACTIONS(671), 1,
      sym_OUTPUT,
    ACTIONS(667), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(669), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [9976] = 4,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(655), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(657), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [9996] = 2,
    ACTIONS(321), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(319), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_LPAREN,
      aux_sym_id__token2,
  [10012] = 4,
    ACTIONS(665), 1,
      anon_sym_COMMA,
    STATE(202), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(655), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(657), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [10032] = 4,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(673), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(375), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_id__token2,
    ACTIONS(377), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10052] = 4,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    STATE(202), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(675), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(677), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [10072] = 4,
    ACTIONS(686), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(682), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(684), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [10092] = 5,
    ACTIONS(693), 1,
      aux_sym_AS_token1,
    ACTIONS(695), 1,
      sym_AT_KEYWORD,
    STATE(558), 1,
      sym_AS,
    ACTIONS(689), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(691), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [10114] = 2,
    ACTIONS(235), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(237), 6,
      aux_sym_go_statement_token1,
      sym_OUTPUT,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [10130] = 3,
    ACTIONS(697), 1,
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
  [10148] = 4,
    ACTIONS(703), 1,
      anon_sym_COMMA,
    STATE(211), 1,
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
  [10168] = 3,
    ACTIONS(697), 1,
      aux_sym_real__token2,
    ACTIONS(471), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(473), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10186] = 4,
    ACTIONS(703), 1,
      anon_sym_COMMA,
    STATE(207), 1,
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
  [10206] = 3,
    STATE(214), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(659), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(661), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [10224] = 4,
    ACTIONS(713), 1,
      anon_sym_COMMA,
    STATE(211), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(709), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(711), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10244] = 3,
    STATE(194), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(659), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(661), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [10262] = 5,
    ACTIONS(693), 1,
      aux_sym_AS_token1,
    ACTIONS(720), 1,
      sym_AT_KEYWORD,
    STATE(525), 1,
      sym_AS,
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
  [10284] = 3,
    STATE(203), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(655), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(657), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [10302] = 2,
    ACTIONS(709), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(711), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10317] = 2,
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
  [10332] = 3,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(726), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(375), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10349] = 2,
    ACTIONS(559), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(561), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10364] = 2,
    ACTIONS(728), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(730), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [10379] = 2,
    ACTIONS(675), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(677), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [10394] = 2,
    ACTIONS(732), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(734), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [10409] = 2,
    ACTIONS(736), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(738), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [10424] = 2,
    ACTIONS(667), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(669), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [10439] = 2,
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
  [10454] = 2,
    ACTIONS(563), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(565), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10469] = 2,
    ACTIONS(319), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(321), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [10484] = 2,
    ACTIONS(589), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(591), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10499] = 2,
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
  [10514] = 2,
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
  [10529] = 4,
    ACTIONS(740), 1,
      anon_sym_COMMA,
    STATE(234), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(689), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(691), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [10548] = 2,
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
  [10563] = 2,
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
  [10578] = 2,
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
  [10593] = 4,
    ACTIONS(740), 1,
      anon_sym_COMMA,
    STATE(268), 1,
      aux_sym_execute_body_repeat1,
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
  [10612] = 2,
    ACTIONS(631), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(633), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10627] = 4,
    ACTIONS(740), 1,
      anon_sym_COMMA,
    STATE(269), 1,
      aux_sym_execute_body_repeat1,
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
  [10646] = 2,
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
  [10661] = 2,
    ACTIONS(682), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(684), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [10676] = 2,
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
  [10691] = 2,
    ACTIONS(483), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(485), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10706] = 2,
    ACTIONS(750), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(752), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10721] = 2,
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
  [10736] = 2,
    ACTIONS(517), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(519), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10751] = 2,
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
  [10766] = 2,
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
  [10781] = 2,
    ACTIONS(381), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(758), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10796] = 2,
    ACTIONS(531), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(533), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10811] = 2,
    ACTIONS(535), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(537), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10826] = 2,
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
  [10841] = 2,
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
  [10856] = 2,
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
  [10871] = 2,
    ACTIONS(597), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(599), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10886] = 2,
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
  [10901] = 2,
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
  [10916] = 2,
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
  [10931] = 2,
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
  [10946] = 2,
    ACTIONS(309), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(311), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10961] = 2,
    ACTIONS(605), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(607), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10976] = 4,
    ACTIONS(740), 1,
      anon_sym_COMMA,
    STATE(268), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(760), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(762), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [10995] = 2,
    ACTIONS(601), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(603), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [11010] = 2,
    ACTIONS(593), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(595), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [11025] = 2,
    ACTIONS(585), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(587), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [11040] = 3,
    ACTIONS(764), 1,
      aux_sym_over__token1,
    STATE(348), 1,
      sym_over_clause,
    ACTIONS(369), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11057] = 3,
    ACTIONS(764), 1,
      aux_sym_over__token1,
    STATE(346), 1,
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
  [11074] = 2,
    ACTIONS(581), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(583), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [11089] = 2,
    ACTIONS(577), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(579), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [11104] = 2,
    ACTIONS(573), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(575), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [11119] = 4,
    ACTIONS(770), 1,
      anon_sym_COMMA,
    STATE(268), 1,
      aux_sym_execute_body_repeat1,
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
  [11138] = 4,
    ACTIONS(740), 1,
      anon_sym_COMMA,
    STATE(268), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(773), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(775), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11157] = 4,
    ACTIONS(740), 1,
      anon_sym_COMMA,
    STATE(279), 1,
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
  [11176] = 2,
    ACTIONS(569), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(571), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [11191] = 2,
    ACTIONS(235), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(237), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [11206] = 2,
    ACTIONS(781), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(783), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [11221] = 2,
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
  [11236] = 2,
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
  [11251] = 2,
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
  [11266] = 4,
    ACTIONS(740), 1,
      anon_sym_COMMA,
    STATE(259), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(793), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(795), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11285] = 2,
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
  [11300] = 4,
    ACTIONS(740), 1,
      anon_sym_COMMA,
    STATE(268), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(793), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(795), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11319] = 2,
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
  [11333] = 2,
    ACTIONS(805), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(803), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [11347] = 9,
    ACTIONS(807), 1,
      aux_sym_go_statement_token1,
    ACTIONS(809), 1,
      aux_sym_id__token1,
    ACTIONS(811), 1,
      aux_sym_id__token2,
    STATE(300), 1,
      sym_id_,
    STATE(305), 1,
      sym_full_table_name,
    STATE(306), 1,
      sym_table_source_item,
    STATE(310), 1,
      sym_table_source,
    STATE(311), 1,
      sym_table_sources,
    STATE(318), 1,
      sym_keyword,
  [11375] = 3,
    ACTIONS(817), 1,
      sym_AT_KEYWORD,
    ACTIONS(813), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(815), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11391] = 3,
    ACTIONS(823), 1,
      aux_sym_query_specification_token1,
    ACTIONS(819), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(821), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11407] = 4,
    ACTIONS(827), 1,
      aux_sym_go_statement_token1,
    STATE(285), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(825), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(830), 3,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11425] = 3,
    ACTIONS(836), 1,
      sym_AT_KEYWORD,
    ACTIONS(832), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(834), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11441] = 2,
    ACTIONS(768), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(766), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [11455] = 4,
    ACTIONS(840), 1,
      aux_sym_go_statement_token1,
    STATE(285), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(838), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(843), 3,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11473] = 2,
    ACTIONS(801), 1,
      aux_sym_real__token2,
    ACTIONS(471), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11487] = 3,
    STATE(294), 2,
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
  [11503] = 3,
    ACTIONS(849), 1,
      sym_WITH,
    ACTIONS(845), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(847), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11519] = 4,
    ACTIONS(347), 1,
      aux_sym_constant_token3,
    STATE(362), 1,
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
  [11537] = 3,
    ACTIONS(855), 1,
      sym_WITH,
    ACTIONS(851), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(853), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11553] = 4,
    ACTIONS(277), 1,
      aux_sym_go_statement_token1,
    STATE(285), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(275), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(286), 3,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11571] = 4,
    ACTIONS(277), 1,
      aux_sym_go_statement_token1,
    STATE(288), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(275), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(286), 3,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11589] = 2,
    ACTIONS(859), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(857), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [11603] = 5,
    ACTIONS(861), 1,
      ts_builtin_sym_end,
    ACTIONS(864), 1,
      aux_sym_go_statement_token1,
    ACTIONS(275), 2,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    STATE(288), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(286), 3,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11623] = 1,
    ACTIONS(551), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11634] = 1,
    ACTIONS(501), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11645] = 3,
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
  [11660] = 3,
    ACTIONS(878), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(874), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_id__token2,
    ACTIONS(876), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11675] = 2,
    ACTIONS(880), 1,
      anon_sym_EQ,
    ACTIONS(235), 7,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_OUTPUT,
      sym_execute,
      sym_select,
  [11688] = 1,
    ACTIONS(569), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11699] = 1,
    ACTIONS(497), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11710] = 2,
    ACTIONS(882), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(884), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11723] = 2,
    ACTIONS(886), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(888), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11736] = 1,
    ACTIONS(573), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11747] = 1,
    ACTIONS(577), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11758] = 2,
    ACTIONS(890), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(892), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11771] = 2,
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
  [11784] = 2,
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
  [11797] = 1,
    ACTIONS(563), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11808] = 1,
    ACTIONS(589), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11819] = 2,
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
  [11832] = 7,
    ACTIONS(906), 1,
      anon_sym_RPAREN,
    ACTIONS(908), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(910), 1,
      aux_sym_order_by_clause_token1,
    STATE(383), 1,
      sym_partition_by_clause,
    STATE(488), 1,
      sym_order_by_clause,
    STATE(594), 1,
      sym_row_or_range_clause,
    ACTIONS(912), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11855] = 1,
    ACTIONS(619), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11866] = 1,
    ACTIONS(581), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11877] = 2,
    ACTIONS(319), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(321), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11890] = 1,
    ACTIONS(585), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11901] = 2,
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
  [11914] = 1,
    ACTIONS(227), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11925] = 1,
    ACTIONS(505), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11936] = 2,
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
  [11949] = 2,
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
  [11962] = 2,
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
  [11975] = 1,
    ACTIONS(483), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11986] = 2,
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
  [11999] = 1,
    ACTIONS(559), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12010] = 2,
    ACTIONS(930), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(932), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [12023] = 1,
    ACTIONS(517), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12034] = 2,
    ACTIONS(934), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(936), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [12047] = 1,
    ACTIONS(511), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12058] = 1,
    ACTIONS(611), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12069] = 1,
    ACTIONS(631), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12080] = 1,
    ACTIONS(593), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12091] = 1,
    ACTIONS(601), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12102] = 1,
    ACTIONS(605), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12113] = 7,
    ACTIONS(908), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(910), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(938), 1,
      anon_sym_RPAREN,
    STATE(377), 1,
      sym_partition_by_clause,
    STATE(481), 1,
      sym_order_by_clause,
    STATE(627), 1,
      sym_row_or_range_clause,
    ACTIONS(912), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12136] = 2,
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
  [12149] = 1,
    ACTIONS(531), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12160] = 5,
    ACTIONS(946), 1,
      aux_sym_collation__token1,
    ACTIONS(948), 1,
      sym_asc_,
    ACTIONS(950), 1,
      sym_desc_,
    STATE(405), 1,
      sym_collation_,
    ACTIONS(944), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12179] = 1,
    ACTIONS(615), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12190] = 1,
    ACTIONS(535), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12201] = 1,
    ACTIONS(543), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12212] = 1,
    ACTIONS(539), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12223] = 1,
    ACTIONS(547), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12234] = 3,
    ACTIONS(956), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(952), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_id__token2,
    ACTIONS(954), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [12249] = 1,
    ACTIONS(555), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12260] = 1,
    ACTIONS(597), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12271] = 2,
    ACTIONS(958), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(960), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [12284] = 1,
    ACTIONS(639), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12295] = 3,
    ACTIONS(966), 1,
      anon_sym_SEMI,
    ACTIONS(962), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(964), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [12310] = 2,
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
  [12323] = 1,
    ACTIONS(635), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12334] = 7,
    ACTIONS(908), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(910), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(972), 1,
      anon_sym_RPAREN,
    STATE(407), 1,
      sym_partition_by_clause,
    STATE(487), 1,
      sym_order_by_clause,
    STATE(688), 1,
      sym_row_or_range_clause,
    ACTIONS(912), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12357] = 2,
    ACTIONS(974), 1,
      sym_OUTPUT,
    ACTIONS(667), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12369] = 2,
    STATE(363), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(659), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12381] = 3,
    ACTIONS(976), 1,
      anon_sym_COMMA,
    STATE(358), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(675), 5,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12395] = 4,
    ACTIONS(981), 1,
      anon_sym_COMMA,
    ACTIONS(983), 1,
      anon_sym_SEMI,
    STATE(358), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(979), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [12411] = 3,
    ACTIONS(985), 1,
      anon_sym_COMMA,
    STATE(360), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(682), 5,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12425] = 2,
    ACTIONS(988), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(990), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [12437] = 2,
    ACTIONS(992), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(994), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [12449] = 2,
    STATE(360), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(655), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12461] = 7,
    ACTIONS(133), 1,
      aux_sym_go_statement_token1,
    ACTIONS(171), 1,
      aux_sym_id__token1,
    ACTIONS(173), 1,
      aux_sym_id__token2,
    ACTIONS(261), 1,
      sym_string_lit,
    STATE(199), 1,
      sym_keyword,
    STATE(216), 1,
      sym_column_alias,
    STATE(246), 1,
      sym_id_,
  [12483] = 2,
    STATE(358), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(655), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12495] = 2,
    STATE(365), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(659), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12507] = 2,
    ACTIONS(996), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(998), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [12519] = 4,
    ACTIONS(981), 1,
      anon_sym_COMMA,
    ACTIONS(1002), 1,
      anon_sym_SEMI,
    STATE(359), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(1000), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [12535] = 5,
    ACTIONS(1004), 1,
      aux_sym_over__token1,
    ACTIONS(1006), 1,
      aux_sym_ignore_nulls__token1,
    ACTIONS(1008), 1,
      aux_sym_respect_nulls__token1,
    STATE(274), 1,
      sym_over_clause,
    STATE(559), 2,
      sym_ignore_nulls_,
      sym_respect_nulls_,
  [12552] = 4,
    ACTIONS(127), 1,
      aux_sym_real__token1,
    ACTIONS(1010), 1,
      aux_sym_constant_token3,
    ACTIONS(1012), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(304), 2,
      sym_real_,
      sym_float_,
  [12567] = 1,
    ACTIONS(667), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12576] = 3,
    ACTIONS(1014), 1,
      anon_sym_COMMA,
    STATE(373), 1,
      aux_sym_expression_list__repeat1,
    ACTIONS(1016), 4,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12589] = 3,
    ACTIONS(1018), 1,
      anon_sym_COMMA,
    STATE(373), 1,
      aux_sym_expression_list__repeat1,
    ACTIONS(1021), 4,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12602] = 5,
    ACTIONS(1006), 1,
      aux_sym_ignore_nulls__token1,
    ACTIONS(1008), 1,
      aux_sym_respect_nulls__token1,
    ACTIONS(1023), 1,
      aux_sym_over__token1,
    STATE(169), 1,
      sym_over_clause,
    STATE(513), 2,
      sym_ignore_nulls_,
      sym_respect_nulls_,
  [12619] = 1,
    ACTIONS(1025), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12628] = 6,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(355), 1,
      aux_sym_id__token1,
    ACTIONS(357), 1,
      aux_sym_id__token2,
    ACTIONS(1027), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(95), 1,
      sym_keyword,
    STATE(106), 1,
      sym_id_,
  [12647] = 5,
    ACTIONS(910), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(1029), 1,
      anon_sym_RPAREN,
    STATE(482), 1,
      sym_order_by_clause,
    STATE(631), 1,
      sym_row_or_range_clause,
    ACTIONS(912), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12664] = 1,
    ACTIONS(746), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12673] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1031), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(79), 1,
      sym_keyword,
    STATE(672), 1,
      sym_id_,
  [12692] = 4,
    ACTIONS(169), 1,
      aux_sym_real__token1,
    ACTIONS(1033), 1,
      aux_sym_constant_token3,
    ACTIONS(1035), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(237), 2,
      sym_real_,
      sym_float_,
  [12707] = 6,
    ACTIONS(183), 1,
      aux_sym_id__token1,
    ACTIONS(185), 1,
      aux_sym_id__token2,
    ACTIONS(1037), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1039), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(139), 1,
      sym_keyword,
    STATE(156), 1,
      sym_id_,
  [12726] = 4,
    ACTIONS(1043), 1,
      aux_sym_window_frame_preceding_token2,
    STATE(614), 1,
      sym_window_frame_bound,
    ACTIONS(1041), 2,
      aux_sym_constant_token3,
      aux_sym_window_frame_following_token1,
    STATE(526), 2,
      sym_window_frame_following,
      sym_window_frame_preceding,
  [12741] = 5,
    ACTIONS(910), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(1045), 1,
      anon_sym_RPAREN,
    STATE(483), 1,
      sym_order_by_clause,
    STATE(598), 1,
      sym_row_or_range_clause,
    ACTIONS(912), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12758] = 1,
    ACTIONS(728), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12767] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1047), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(79), 1,
      sym_keyword,
    STATE(572), 1,
      sym_id_,
  [12786] = 6,
    ACTIONS(183), 1,
      aux_sym_id__token1,
    ACTIONS(185), 1,
      aux_sym_id__token2,
    ACTIONS(1037), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1049), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(123), 1,
      sym_id_,
    STATE(139), 1,
      sym_keyword,
  [12805] = 1,
    ACTIONS(675), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12814] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(1051), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1053), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(79), 1,
      sym_keyword,
    STATE(119), 1,
      sym_id_,
  [12833] = 1,
    ACTIONS(742), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12842] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1055), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(79), 1,
      sym_keyword,
    STATE(606), 1,
      sym_id_,
  [12861] = 6,
    ACTIONS(183), 1,
      aux_sym_id__token1,
    ACTIONS(185), 1,
      aux_sym_id__token2,
    ACTIONS(1037), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1057), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(139), 1,
      sym_keyword,
    STATE(143), 1,
      sym_id_,
  [12880] = 6,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(355), 1,
      aux_sym_id__token1,
    ACTIONS(357), 1,
      aux_sym_id__token2,
    ACTIONS(1059), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(95), 1,
      sym_keyword,
    STATE(102), 1,
      sym_id_,
  [12899] = 6,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(355), 1,
      aux_sym_id__token1,
    ACTIONS(357), 1,
      aux_sym_id__token2,
    ACTIONS(1061), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(91), 1,
      sym_id_,
    STATE(95), 1,
      sym_keyword,
  [12918] = 4,
    ACTIONS(1043), 1,
      aux_sym_window_frame_preceding_token2,
    STATE(603), 1,
      sym_window_frame_bound,
    ACTIONS(1041), 2,
      aux_sym_constant_token3,
      aux_sym_window_frame_following_token1,
    STATE(526), 2,
      sym_window_frame_following,
      sym_window_frame_preceding,
  [12933] = 6,
    ACTIONS(183), 1,
      aux_sym_id__token1,
    ACTIONS(185), 1,
      aux_sym_id__token2,
    ACTIONS(1037), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1063), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(136), 1,
      sym_id_,
    STATE(139), 1,
      sym_keyword,
  [12952] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1065), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(79), 1,
      sym_keyword,
    STATE(569), 1,
      sym_id_,
  [12971] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(1051), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1067), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(79), 1,
      sym_keyword,
    STATE(115), 1,
      sym_id_,
  [12990] = 4,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(1069), 1,
      aux_sym_constant_token3,
    ACTIONS(1071), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(127), 2,
      sym_real_,
      sym_float_,
  [13005] = 6,
    ACTIONS(183), 1,
      aux_sym_id__token1,
    ACTIONS(185), 1,
      aux_sym_id__token2,
    ACTIONS(1037), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1073), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(132), 1,
      sym_id_,
    STATE(139), 1,
      sym_keyword,
  [13024] = 1,
    ACTIONS(736), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [13033] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(1051), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1075), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(79), 1,
      sym_keyword,
    STATE(110), 1,
      sym_id_,
  [13052] = 3,
    ACTIONS(1014), 1,
      anon_sym_COMMA,
    STATE(372), 1,
      aux_sym_expression_list__repeat1,
    ACTIONS(1077), 4,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [13065] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(1051), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1079), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(79), 1,
      sym_keyword,
    STATE(117), 1,
      sym_id_,
  [13084] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(1051), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1081), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(79), 1,
      sym_keyword,
    STATE(109), 1,
      sym_id_,
  [13103] = 3,
    ACTIONS(1085), 1,
      sym_asc_,
    ACTIONS(1087), 1,
      sym_desc_,
    ACTIONS(1083), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [13116] = 1,
    ACTIONS(682), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [13125] = 5,
    ACTIONS(910), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(1089), 1,
      anon_sym_RPAREN,
    STATE(460), 1,
      sym_order_by_clause,
    STATE(651), 1,
      sym_row_or_range_clause,
    ACTIONS(912), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [13142] = 5,
    ACTIONS(764), 1,
      aux_sym_over__token1,
    ACTIONS(1006), 1,
      aux_sym_ignore_nulls__token1,
    ACTIONS(1008), 1,
      aux_sym_respect_nulls__token1,
    STATE(333), 1,
      sym_over_clause,
    STATE(551), 2,
      sym_ignore_nulls_,
      sym_respect_nulls_,
  [13159] = 6,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(355), 1,
      aux_sym_id__token1,
    ACTIONS(357), 1,
      aux_sym_id__token2,
    ACTIONS(1091), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(93), 1,
      sym_id_,
    STATE(95), 1,
      sym_keyword,
  [13178] = 1,
    ACTIONS(732), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [13187] = 5,
    ACTIONS(1043), 1,
      aux_sym_window_frame_preceding_token2,
    ACTIONS(1095), 1,
      aux_sym_window_frame_extent_token1,
    STATE(654), 1,
      sym_window_frame_preceding,
    STATE(658), 1,
      sym_window_frame_extent,
    ACTIONS(1093), 2,
      aux_sym_constant_token3,
      aux_sym_window_frame_following_token1,
  [13204] = 6,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(355), 1,
      aux_sym_id__token1,
    ACTIONS(357), 1,
      aux_sym_id__token2,
    ACTIONS(1097), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(95), 1,
      sym_keyword,
    STATE(103), 1,
      sym_id_,
  [13223] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(1051), 1,
      aux_sym_go_statement_token1,
    STATE(79), 1,
      sym_keyword,
    STATE(167), 1,
      sym_id_,
  [13239] = 5,
    ACTIONS(91), 1,
      aux_sym_go_statement_token1,
    ACTIONS(129), 1,
      aux_sym_id__token1,
    ACTIONS(131), 1,
      aux_sym_id__token2,
    STATE(87), 1,
      sym_keyword,
    STATE(375), 1,
      sym_id_,
  [13255] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(1051), 1,
      aux_sym_go_statement_token1,
    STATE(79), 1,
      sym_keyword,
    STATE(133), 1,
      sym_id_,
  [13271] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(1051), 1,
      aux_sym_go_statement_token1,
    STATE(79), 1,
      sym_keyword,
    STATE(144), 1,
      sym_id_,
  [13287] = 5,
    ACTIONS(807), 1,
      aux_sym_go_statement_token1,
    ACTIONS(809), 1,
      aux_sym_id__token1,
    ACTIONS(811), 1,
      aux_sym_id__token2,
    STATE(318), 1,
      sym_keyword,
    STATE(331), 1,
      sym_id_,
  [13303] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    STATE(79), 1,
      sym_keyword,
    STATE(743), 1,
      sym_id_,
  [13319] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    STATE(79), 1,
      sym_keyword,
    STATE(707), 1,
      sym_id_,
  [13335] = 5,
    ACTIONS(183), 1,
      aux_sym_id__token1,
    ACTIONS(185), 1,
      aux_sym_id__token2,
    ACTIONS(1037), 1,
      aux_sym_go_statement_token1,
    STATE(139), 1,
      sym_keyword,
    STATE(189), 1,
      sym_id_,
  [13351] = 5,
    ACTIONS(807), 1,
      aux_sym_go_statement_token1,
    ACTIONS(809), 1,
      aux_sym_id__token1,
    ACTIONS(811), 1,
      aux_sym_id__token2,
    STATE(301), 1,
      sym_id_,
    STATE(318), 1,
      sym_keyword,
  [13367] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    STATE(79), 1,
      sym_keyword,
    STATE(703), 1,
      sym_id_,
  [13383] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    STATE(79), 1,
      sym_keyword,
    STATE(683), 1,
      sym_id_,
  [13399] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    STATE(79), 1,
      sym_keyword,
    STATE(676), 1,
      sym_id_,
  [13415] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(1051), 1,
      aux_sym_go_statement_token1,
    STATE(79), 1,
      sym_keyword,
    STATE(122), 1,
      sym_id_,
  [13431] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(1051), 1,
      aux_sym_go_statement_token1,
    STATE(79), 1,
      sym_keyword,
    STATE(149), 1,
      sym_id_,
  [13447] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(1051), 1,
      aux_sym_go_statement_token1,
    STATE(79), 1,
      sym_keyword,
    STATE(129), 1,
      sym_id_,
  [13463] = 5,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(355), 1,
      aux_sym_id__token1,
    ACTIONS(357), 1,
      aux_sym_id__token2,
    STATE(94), 1,
      sym_id_,
    STATE(95), 1,
      sym_keyword,
  [13479] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(1051), 1,
      aux_sym_go_statement_token1,
    STATE(79), 1,
      sym_keyword,
    STATE(130), 1,
      sym_id_,
  [13495] = 5,
    ACTIONS(183), 1,
      aux_sym_id__token1,
    ACTIONS(185), 1,
      aux_sym_id__token2,
    ACTIONS(1037), 1,
      aux_sym_go_statement_token1,
    STATE(139), 1,
      sym_keyword,
    STATE(188), 1,
      sym_id_,
  [13511] = 5,
    ACTIONS(183), 1,
      aux_sym_id__token1,
    ACTIONS(185), 1,
      aux_sym_id__token2,
    ACTIONS(1037), 1,
      aux_sym_go_statement_token1,
    STATE(139), 1,
      sym_keyword,
    STATE(186), 1,
      sym_id_,
  [13527] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    STATE(79), 1,
      sym_keyword,
    STATE(584), 1,
      sym_id_,
  [13543] = 5,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(355), 1,
      aux_sym_id__token1,
    ACTIONS(357), 1,
      aux_sym_id__token2,
    STATE(95), 1,
      sym_keyword,
    STATE(101), 1,
      sym_id_,
  [13559] = 5,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(355), 1,
      aux_sym_id__token1,
    ACTIONS(357), 1,
      aux_sym_id__token2,
    STATE(86), 1,
      sym_id_,
    STATE(95), 1,
      sym_keyword,
  [13575] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    STATE(79), 1,
      sym_keyword,
    STATE(692), 1,
      sym_id_,
  [13591] = 5,
    ACTIONS(807), 1,
      aux_sym_go_statement_token1,
    ACTIONS(809), 1,
      aux_sym_id__token1,
    ACTIONS(811), 1,
      aux_sym_id__token2,
    STATE(309), 1,
      sym_id_,
    STATE(318), 1,
      sym_keyword,
  [13607] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    STATE(79), 1,
      sym_keyword,
    STATE(687), 1,
      sym_id_,
  [13623] = 5,
    ACTIONS(183), 1,
      aux_sym_id__token1,
    ACTIONS(185), 1,
      aux_sym_id__token2,
    ACTIONS(1037), 1,
      aux_sym_go_statement_token1,
    STATE(139), 1,
      sym_keyword,
    STATE(182), 1,
      sym_id_,
  [13639] = 5,
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
  [13655] = 1,
    ACTIONS(1021), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [13663] = 3,
    ACTIONS(1099), 1,
      anon_sym_COMMA,
    STATE(441), 1,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(1102), 3,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [13675] = 5,
    ACTIONS(183), 1,
      aux_sym_id__token1,
    ACTIONS(185), 1,
      aux_sym_id__token2,
    ACTIONS(1037), 1,
      aux_sym_go_statement_token1,
    STATE(139), 1,
      sym_keyword,
    STATE(180), 1,
      sym_id_,
  [13691] = 5,
    ACTIONS(17), 1,
      aux_sym_go_statement_token1,
    ACTIONS(63), 1,
      aux_sym_id__token1,
    ACTIONS(65), 1,
      aux_sym_id__token2,
    STATE(67), 1,
      sym_id_,
    STATE(104), 1,
      sym_keyword,
  [13707] = 5,
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
  [13723] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    STATE(79), 1,
      sym_keyword,
    STATE(721), 1,
      sym_id_,
  [13739] = 5,
    ACTIONS(183), 1,
      aux_sym_id__token1,
    ACTIONS(185), 1,
      aux_sym_id__token2,
    ACTIONS(1037), 1,
      aux_sym_go_statement_token1,
    STATE(139), 1,
      sym_keyword,
    STATE(181), 1,
      sym_id_,
  [13755] = 5,
    ACTIONS(183), 1,
      aux_sym_id__token1,
    ACTIONS(185), 1,
      aux_sym_id__token2,
    ACTIONS(1037), 1,
      aux_sym_go_statement_token1,
    STATE(139), 1,
      sym_keyword,
    STATE(187), 1,
      sym_id_,
  [13771] = 5,
    ACTIONS(807), 1,
      aux_sym_go_statement_token1,
    ACTIONS(809), 1,
      aux_sym_id__token1,
    ACTIONS(811), 1,
      aux_sym_id__token2,
    STATE(318), 1,
      sym_keyword,
    STATE(323), 1,
      sym_id_,
  [13787] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(1051), 1,
      aux_sym_go_statement_token1,
    STATE(79), 1,
      sym_keyword,
    STATE(140), 1,
      sym_id_,
  [13803] = 5,
    ACTIONS(183), 1,
      aux_sym_id__token1,
    ACTIONS(185), 1,
      aux_sym_id__token2,
    ACTIONS(1037), 1,
      aux_sym_go_statement_token1,
    STATE(139), 1,
      sym_keyword,
    STATE(192), 1,
      sym_id_,
  [13819] = 5,
    ACTIONS(807), 1,
      aux_sym_go_statement_token1,
    ACTIONS(809), 1,
      aux_sym_id__token1,
    ACTIONS(811), 1,
      aux_sym_id__token2,
    STATE(318), 1,
      sym_keyword,
    STATE(324), 1,
      sym_id_,
  [13835] = 5,
    ACTIONS(807), 1,
      aux_sym_go_statement_token1,
    ACTIONS(809), 1,
      aux_sym_id__token1,
    ACTIONS(811), 1,
      aux_sym_id__token2,
    STATE(318), 1,
      sym_keyword,
    STATE(347), 1,
      sym_id_,
  [13851] = 3,
    ACTIONS(1104), 1,
      anon_sym_COMMA,
    STATE(441), 1,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(1106), 3,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [13863] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    STATE(79), 1,
      sym_keyword,
    STATE(592), 1,
      sym_id_,
  [13879] = 5,
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
  [13895] = 5,
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
  [13911] = 5,
    ACTIONS(67), 1,
      aux_sym_go_statement_token1,
    ACTIONS(355), 1,
      aux_sym_id__token1,
    ACTIONS(357), 1,
      aux_sym_id__token2,
    STATE(95), 1,
      sym_keyword,
    STATE(105), 1,
      sym_id_,
  [13927] = 5,
    ACTIONS(807), 1,
      aux_sym_go_statement_token1,
    ACTIONS(809), 1,
      aux_sym_id__token1,
    ACTIONS(811), 1,
      aux_sym_id__token2,
    STATE(318), 1,
      sym_keyword,
    STATE(339), 1,
      sym_id_,
  [13943] = 3,
    ACTIONS(1104), 1,
      anon_sym_COMMA,
    STATE(453), 1,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(1108), 3,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [13955] = 3,
    ACTIONS(1110), 1,
      anon_sym_RPAREN,
    STATE(573), 1,
      sym_row_or_range_clause,
    ACTIONS(912), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [13966] = 4,
    ACTIONS(908), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(910), 1,
      aux_sym_order_by_clause_token1,
    STATE(544), 1,
      sym_partition_by_clause,
    STATE(629), 1,
      sym_order_by_clause,
  [13979] = 3,
    ACTIONS(1112), 1,
      ts_builtin_sym_end,
    ACTIONS(1114), 1,
      aux_sym_go_statement_token1,
    STATE(478), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
  [13990] = 2,
    ACTIONS(1116), 2,
      aux_sym_go_statement_token1,
      aux_sym_id__token1,
    ACTIONS(1118), 2,
      sym_string_lit,
      aux_sym_id__token2,
  [13999] = 1,
    ACTIONS(1120), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [14006] = 1,
    ACTIONS(1122), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [14013] = 1,
    ACTIONS(1000), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [14020] = 4,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(353), 1,
      sym_string_lit,
    STATE(70), 1,
      sym_LOCAL_ID_,
    STATE(76), 1,
      sym_execute_var_string,
  [14033] = 4,
    ACTIONS(1124), 1,
      aux_sym_RESULT_SETS_token1,
    ACTIONS(1126), 1,
      sym_RECOMPILE,
    STATE(287), 1,
      sym_execute_option,
    STATE(537), 1,
      sym_RESULT_SETS,
  [14046] = 4,
    ACTIONS(1124), 1,
      aux_sym_RESULT_SETS_token1,
    ACTIONS(1126), 1,
      sym_RECOMPILE,
    STATE(270), 1,
      sym_execute_option,
    STATE(537), 1,
      sym_RESULT_SETS,
  [14059] = 3,
    ACTIONS(61), 1,
      aux_sym_real__token1,
    ACTIONS(1069), 1,
      aux_sym_constant_token3,
    STATE(175), 2,
      sym_real_,
      sym_float_,
  [14070] = 1,
    ACTIONS(1128), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [14077] = 4,
    ACTIONS(1124), 1,
      aux_sym_RESULT_SETS_token1,
    ACTIONS(1126), 1,
      sym_RECOMPILE,
    STATE(236), 1,
      sym_execute_option,
    STATE(537), 1,
      sym_RESULT_SETS,
  [14090] = 3,
    ACTIONS(1130), 1,
      aux_sym_constant_token3,
    STATE(540), 1,
      sym_integer,
    ACTIONS(343), 2,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
  [14101] = 4,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(353), 1,
      sym_string_lit,
    STATE(70), 1,
      sym_LOCAL_ID_,
    STATE(506), 1,
      sym_execute_var_string,
  [14114] = 1,
    ACTIONS(1132), 4,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [14121] = 4,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(353), 1,
      sym_string_lit,
    STATE(70), 1,
      sym_LOCAL_ID_,
    STATE(561), 1,
      sym_execute_var_string,
  [14134] = 3,
    ACTIONS(169), 1,
      aux_sym_real__token1,
    ACTIONS(1033), 1,
      aux_sym_constant_token3,
    STATE(235), 2,
      sym_real_,
      sym_float_,
  [14145] = 3,
    ACTIONS(825), 1,
      ts_builtin_sym_end,
    ACTIONS(1134), 1,
      aux_sym_go_statement_token1,
    STATE(478), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
  [14156] = 1,
    ACTIONS(979), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [14163] = 4,
    ACTIONS(1124), 1,
      aux_sym_RESULT_SETS_token1,
    ACTIONS(1126), 1,
      sym_RECOMPILE,
    STATE(277), 1,
      sym_execute_option,
    STATE(537), 1,
      sym_RESULT_SETS,
  [14176] = 3,
    ACTIONS(1029), 1,
      anon_sym_RPAREN,
    STATE(631), 1,
      sym_row_or_range_clause,
    ACTIONS(912), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [14187] = 3,
    ACTIONS(1137), 1,
      anon_sym_RPAREN,
    STATE(633), 1,
      sym_row_or_range_clause,
    ACTIONS(912), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [14198] = 3,
    ACTIONS(1139), 1,
      anon_sym_RPAREN,
    STATE(600), 1,
      sym_row_or_range_clause,
    ACTIONS(912), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [14209] = 1,
    ACTIONS(1102), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [14216] = 4,
    ACTIONS(908), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(910), 1,
      aux_sym_order_by_clause_token1,
    STATE(556), 1,
      sym_partition_by_clause,
    STATE(671), 1,
      sym_order_by_clause,
  [14229] = 1,
    ACTIONS(1141), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [14236] = 3,
    ACTIONS(1089), 1,
      anon_sym_RPAREN,
    STATE(651), 1,
      sym_row_or_range_clause,
    ACTIONS(912), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [14247] = 3,
    ACTIONS(1045), 1,
      anon_sym_RPAREN,
    STATE(598), 1,
      sym_row_or_range_clause,
    ACTIONS(912), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [14258] = 1,
    ACTIONS(1143), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [14265] = 4,
    ACTIONS(908), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(910), 1,
      aux_sym_order_by_clause_token1,
    STATE(530), 1,
      sym_partition_by_clause,
    STATE(596), 1,
      sym_order_by_clause,
  [14278] = 3,
    ACTIONS(127), 1,
      aux_sym_real__token1,
    ACTIONS(1010), 1,
      aux_sym_constant_token3,
    STATE(334), 2,
      sym_real_,
      sym_float_,
  [14289] = 4,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(353), 1,
      sym_string_lit,
    STATE(70), 1,
      sym_LOCAL_ID_,
    STATE(505), 1,
      sym_execute_var_string,
  [14302] = 3,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(1145), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(375), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14313] = 4,
    ACTIONS(1124), 1,
      aux_sym_RESULT_SETS_token1,
    ACTIONS(1126), 1,
      sym_RECOMPILE,
    STATE(230), 1,
      sym_execute_option,
    STATE(537), 1,
      sym_RESULT_SETS,
  [14326] = 2,
    ACTIONS(1147), 1,
      aux_sym_constant_token3,
    ACTIONS(1149), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [14334] = 3,
    ACTIONS(1151), 1,
      anon_sym_RPAREN,
    ACTIONS(1153), 1,
      aux_sym_partition_by_clause_token1,
    STATE(637), 1,
      sym_partition_by_clause,
  [14344] = 3,
    ACTIONS(1155), 1,
      anon_sym_COMMA,
    ACTIONS(1158), 1,
      anon_sym_RPAREN,
    STATE(497), 1,
      aux_sym_execute_body_repeat2,
  [14354] = 1,
    ACTIONS(1160), 3,
      aux_sym_over__token1,
      aux_sym_ignore_nulls__token1,
      aux_sym_respect_nulls__token1,
  [14360] = 1,
    ACTIONS(1162), 3,
      aux_sym_over__token1,
      aux_sym_ignore_nulls__token1,
      aux_sym_respect_nulls__token1,
  [14366] = 2,
    ACTIONS(1164), 1,
      aux_sym_constant_token3,
    ACTIONS(1166), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [14374] = 3,
    ACTIONS(1016), 1,
      anon_sym_RPAREN,
    ACTIONS(1168), 1,
      anon_sym_COMMA,
    STATE(510), 1,
      aux_sym_expression_list__repeat1,
  [14384] = 1,
    ACTIONS(1170), 3,
      aux_sym_over__token1,
      aux_sym_ignore_nulls__token1,
      aux_sym_respect_nulls__token1,
  [14390] = 3,
    ACTIONS(1172), 1,
      anon_sym_COMMA,
    ACTIONS(1174), 1,
      anon_sym_RPAREN,
    STATE(497), 1,
      aux_sym_execute_body_repeat2,
  [14400] = 3,
    ACTIONS(1172), 1,
      anon_sym_COMMA,
    ACTIONS(1176), 1,
      anon_sym_RPAREN,
    STATE(497), 1,
      aux_sym_execute_body_repeat2,
  [14410] = 3,
    ACTIONS(1172), 1,
      anon_sym_COMMA,
    ACTIONS(1178), 1,
      anon_sym_RPAREN,
    STATE(503), 1,
      aux_sym_execute_body_repeat2,
  [14420] = 3,
    ACTIONS(1172), 1,
      anon_sym_COMMA,
    ACTIONS(1180), 1,
      anon_sym_RPAREN,
    STATE(504), 1,
      aux_sym_execute_body_repeat2,
  [14430] = 3,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(1182), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(75), 1,
      sym_udt_method_arguments,
  [14440] = 3,
    ACTIONS(1077), 1,
      anon_sym_RPAREN,
    ACTIONS(1168), 1,
      anon_sym_COMMA,
    STATE(501), 1,
      aux_sym_expression_list__repeat1,
  [14450] = 3,
    ACTIONS(1153), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(1184), 1,
      anon_sym_RPAREN,
    STATE(604), 1,
      sym_partition_by_clause,
  [14460] = 3,
    ACTIONS(1021), 1,
      anon_sym_RPAREN,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(510), 1,
      aux_sym_expression_list__repeat1,
  [14470] = 2,
    ACTIONS(1189), 1,
      aux_sym_constant_token3,
    ACTIONS(1191), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [14478] = 3,
    ACTIONS(1153), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(1193), 1,
      anon_sym_RPAREN,
    STATE(593), 1,
      sym_partition_by_clause,
  [14488] = 2,
    ACTIONS(1023), 1,
      aux_sym_over__token1,
    STATE(128), 1,
      sym_over_clause,
  [14495] = 2,
    ACTIONS(1195), 1,
      aux_sym_window_frame_following_token2,
    ACTIONS(1197), 1,
      aux_sym_window_frame_preceding_token1,
  [14502] = 2,
    ACTIONS(1199), 1,
      anon_sym_LPAREN,
    STATE(374), 1,
      sym_lag_lead_args,
  [14509] = 2,
    ACTIONS(1201), 1,
      aux_sym_over__token1,
    STATE(657), 1,
      sym_over_,
  [14516] = 2,
    ACTIONS(1203), 1,
      sym_getroot_,
    ACTIONS(1205), 1,
      sym_parse_,
  [14523] = 2,
    ACTIONS(1207), 1,
      anon_sym_COMMA,
    ACTIONS(1209), 1,
      anon_sym_RPAREN,
  [14530] = 1,
    ACTIONS(1211), 2,
      anon_sym_RPAREN,
      aux_sym_window_frame_extent_token2,
  [14535] = 2,
    ACTIONS(1213), 1,
      sym_getroot_,
    ACTIONS(1215), 1,
      sym_parse_,
  [14542] = 2,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(1182), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [14549] = 2,
    ACTIONS(1199), 1,
      anon_sym_LPAREN,
    STATE(369), 1,
      sym_lag_lead_args,
  [14556] = 2,
    ACTIONS(1201), 1,
      aux_sym_over__token1,
    STATE(677), 1,
      sym_over_,
  [14563] = 2,
    ACTIONS(1201), 1,
      aux_sym_over__token1,
    STATE(690), 1,
      sym_over_,
  [14570] = 1,
    ACTIONS(1217), 2,
      sym_LOGIN,
      sym_USER,
  [14575] = 1,
    ACTIONS(1219), 2,
      anon_sym_RPAREN,
      aux_sym_window_frame_extent_token2,
  [14580] = 2,
    ACTIONS(1221), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(238), 1,
      sym_execute_statement_arg_named,
  [14587] = 2,
    ACTIONS(1199), 1,
      anon_sym_LPAREN,
    STATE(408), 1,
      sym_lag_lead_args,
  [14594] = 2,
    ACTIONS(1223), 1,
      sym_getroot_,
    ACTIONS(1225), 1,
      sym_parse_,
  [14601] = 2,
    ACTIONS(910), 1,
      aux_sym_order_by_clause_token1,
    STATE(599), 1,
      sym_order_by_clause,
  [14608] = 2,
    ACTIONS(1201), 1,
      aux_sym_over__token1,
    STATE(734), 1,
      sym_over_,
  [14615] = 2,
    ACTIONS(764), 1,
      aux_sym_over__token1,
    STATE(349), 1,
      sym_over_clause,
  [14622] = 2,
    ACTIONS(764), 1,
      aux_sym_over__token1,
    STATE(344), 1,
      sym_over_clause,
  [14629] = 2,
    ACTIONS(764), 1,
      aux_sym_over__token1,
    STATE(332), 1,
      sym_over_clause,
  [14636] = 2,
    ACTIONS(69), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(69), 1,
      sym_LOCAL_ID_,
  [14643] = 1,
    ACTIONS(1227), 2,
      anon_sym_RPAREN,
      aux_sym_window_frame_extent_token2,
  [14648] = 1,
    ACTIONS(1229), 2,
      sym_NONE,
      sym_UNDEFINED,
  [14653] = 2,
    ACTIONS(1231), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(406), 1,
      sym_execute_statement_arg_named,
  [14660] = 2,
    ACTIONS(1023), 1,
      aux_sym_over__token1,
    STATE(164), 1,
      sym_over_clause,
  [14667] = 1,
    ACTIONS(992), 2,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
  [14672] = 2,
    ACTIONS(1201), 1,
      aux_sym_over__token1,
    STATE(705), 1,
      sym_over_,
  [14679] = 2,
    ACTIONS(1023), 1,
      aux_sym_over__token1,
    STATE(148), 1,
      sym_over_clause,
  [14686] = 1,
    ACTIONS(988), 2,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
  [14691] = 2,
    ACTIONS(910), 1,
      aux_sym_order_by_clause_token1,
    STATE(632), 1,
      sym_order_by_clause,
  [14698] = 2,
    ACTIONS(910), 1,
      aux_sym_order_by_clause_token1,
    STATE(716), 1,
      sym_order_by_clause,
  [14705] = 2,
    ACTIONS(910), 1,
      aux_sym_order_by_clause_token1,
    STATE(724), 1,
      sym_order_by_clause,
  [14712] = 2,
    ACTIONS(1233), 1,
      aux_sym_within_group__token1,
    STATE(701), 1,
      sym_within_group_,
  [14719] = 2,
    ACTIONS(1004), 1,
      aux_sym_over__token1,
    STATE(252), 1,
      sym_over_clause,
  [14726] = 2,
    ACTIONS(1233), 1,
      aux_sym_within_group__token1,
    STATE(736), 1,
      sym_within_group_,
  [14733] = 2,
    ACTIONS(1233), 1,
      aux_sym_within_group__token1,
    STATE(738), 1,
      sym_within_group_,
  [14740] = 2,
    ACTIONS(764), 1,
      aux_sym_over__token1,
    STATE(299), 1,
      sym_over_clause,
  [14747] = 2,
    ACTIONS(910), 1,
      aux_sym_order_by_clause_token1,
    STATE(625), 1,
      sym_order_by_clause,
  [14754] = 1,
    ACTIONS(1235), 2,
      sym_NONE,
      sym_UNDEFINED,
  [14759] = 2,
    ACTIONS(1201), 1,
      aux_sym_over__token1,
    STATE(605), 1,
      sym_over_,
  [14766] = 2,
    ACTIONS(1237), 1,
      anon_sym_COMMA,
    ACTIONS(1239), 1,
      anon_sym_RPAREN,
  [14773] = 2,
    ACTIONS(910), 1,
      aux_sym_order_by_clause_token1,
    STATE(622), 1,
      sym_order_by_clause,
  [14780] = 2,
    ACTIONS(1023), 1,
      aux_sym_over__token1,
    STATE(135), 1,
      sym_over_clause,
  [14787] = 1,
    ACTIONS(1241), 2,
      sym_LOGIN,
      sym_USER,
  [14792] = 2,
    ACTIONS(1004), 1,
      aux_sym_over__token1,
    STATE(242), 1,
      sym_over_clause,
  [14799] = 1,
    ACTIONS(1243), 2,
      sym_LOGIN,
      sym_USER,
  [14804] = 1,
    ACTIONS(1158), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14809] = 2,
    ACTIONS(1004), 1,
      aux_sym_over__token1,
    STATE(245), 1,
      sym_over_clause,
  [14816] = 2,
    ACTIONS(1004), 1,
      aux_sym_over__token1,
    STATE(249), 1,
      sym_over_clause,
  [14823] = 1,
    ACTIONS(1245), 1,
      aux_sym_ignore_nulls__token2,
  [14827] = 1,
    ACTIONS(1247), 1,
      aux_sym_constant_token3,
  [14831] = 1,
    ACTIONS(1249), 1,
      anon_sym_LPAREN,
  [14835] = 1,
    ACTIONS(1251), 1,
      aux_sym_execute_body_token1,
  [14839] = 1,
    ACTIONS(1253), 1,
      anon_sym_LPAREN,
  [14843] = 1,
    ACTIONS(1255), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [14847] = 1,
    ACTIONS(1257), 1,
      anon_sym_RPAREN,
  [14851] = 1,
    ACTIONS(1259), 1,
      aux_sym_constant_token3,
  [14855] = 1,
    ACTIONS(1261), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [14859] = 1,
    ACTIONS(1263), 1,
      anon_sym_RPAREN,
  [14863] = 1,
    ACTIONS(1265), 1,
      aux_sym_real__token2,
  [14867] = 1,
    ACTIONS(1267), 1,
      anon_sym_RPAREN,
  [14871] = 1,
    ACTIONS(1269), 1,
      aux_sym_real__token2,
  [14875] = 1,
    ACTIONS(1271), 1,
      aux_sym_constant_token3,
  [14879] = 1,
    ACTIONS(1273), 1,
      anon_sym_RPAREN,
  [14883] = 1,
    ACTIONS(647), 1,
      anon_sym_EQ,
  [14887] = 1,
    ACTIONS(1275), 1,
      aux_sym_RESULT_SETS_token2,
  [14891] = 1,
    ACTIONS(1277), 1,
      anon_sym_RPAREN,
  [14895] = 1,
    ACTIONS(1279), 1,
      anon_sym_RPAREN,
  [14899] = 1,
    ACTIONS(1281), 1,
      anon_sym_RPAREN,
  [14903] = 1,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
  [14907] = 1,
    ACTIONS(1283), 1,
      anon_sym_RPAREN,
  [14911] = 1,
    ACTIONS(1285), 1,
      aux_sym_constant_token3,
  [14915] = 1,
    ACTIONS(1287), 1,
      anon_sym_LPAREN,
  [14919] = 1,
    ACTIONS(1289), 1,
      anon_sym_LPAREN,
  [14923] = 1,
    ACTIONS(1291), 1,
      anon_sym_RPAREN,
  [14927] = 1,
    ACTIONS(1293), 1,
      anon_sym_RPAREN,
  [14931] = 1,
    ACTIONS(1295), 1,
      aux_sym_partition_by_clause_token2,
  [14935] = 1,
    ACTIONS(1297), 1,
      anon_sym_LPAREN,
  [14939] = 1,
    ACTIONS(1299), 1,
      anon_sym_RPAREN,
  [14943] = 1,
    ACTIONS(1045), 1,
      anon_sym_RPAREN,
  [14947] = 1,
    ACTIONS(1301), 1,
      anon_sym_RPAREN,
  [14951] = 1,
    ACTIONS(1303), 1,
      anon_sym_RPAREN,
  [14955] = 1,
    ACTIONS(1305), 1,
      anon_sym_RPAREN,
  [14959] = 1,
    ACTIONS(1139), 1,
      anon_sym_RPAREN,
  [14963] = 1,
    ACTIONS(1307), 1,
      anon_sym_RPAREN,
  [14967] = 1,
    ACTIONS(1309), 1,
      anon_sym_RPAREN,
  [14971] = 1,
    ACTIONS(1311), 1,
      anon_sym_RPAREN,
  [14975] = 1,
    ACTIONS(1313), 1,
      anon_sym_RPAREN,
  [14979] = 1,
    ACTIONS(1315), 1,
      anon_sym_RPAREN,
  [14983] = 1,
    ACTIONS(1317), 1,
      anon_sym_RPAREN,
  [14987] = 1,
    ACTIONS(1319), 1,
      anon_sym_LPAREN,
  [14991] = 1,
    ACTIONS(1321), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [14995] = 1,
    ACTIONS(1323), 1,
      anon_sym_RPAREN,
  [14999] = 1,
    ACTIONS(1325), 1,
      anon_sym_LPAREN,
  [15003] = 1,
    ACTIONS(1327), 1,
      anon_sym_RPAREN,
  [15007] = 1,
    ACTIONS(801), 1,
      aux_sym_real__token2,
  [15011] = 1,
    ACTIONS(1329), 1,
      anon_sym_RPAREN,
  [15015] = 1,
    ACTIONS(1331), 1,
      aux_sym_constant_token3,
  [15019] = 1,
    ACTIONS(1333), 1,
      anon_sym_RPAREN,
  [15023] = 1,
    ACTIONS(1335), 1,
      aux_sym_window_frame_extent_token2,
  [15027] = 1,
    ACTIONS(1337), 1,
      anon_sym_RPAREN,
  [15031] = 1,
    ACTIONS(1339), 1,
      anon_sym_RPAREN,
  [15035] = 1,
    ACTIONS(1341), 1,
      anon_sym_RPAREN,
  [15039] = 1,
    ACTIONS(880), 1,
      anon_sym_EQ,
  [15043] = 1,
    ACTIONS(1343), 1,
      anon_sym_RPAREN,
  [15047] = 1,
    ACTIONS(1345), 1,
      anon_sym_RPAREN,
  [15051] = 1,
    ACTIONS(1347), 1,
      aux_sym_ignore_nulls__token2,
  [15055] = 1,
    ACTIONS(1349), 1,
      anon_sym_RPAREN,
  [15059] = 1,
    ACTIONS(1351), 1,
      anon_sym_RPAREN,
  [15063] = 1,
    ACTIONS(1353), 1,
      anon_sym_RPAREN,
  [15067] = 1,
    ACTIONS(1355), 1,
      anon_sym_RPAREN,
  [15071] = 1,
    ACTIONS(1357), 1,
      sym_string_lit,
  [15075] = 1,
    ACTIONS(1029), 1,
      anon_sym_RPAREN,
  [15079] = 1,
    ACTIONS(1359), 1,
      anon_sym_RPAREN,
  [15083] = 1,
    ACTIONS(1361), 1,
      anon_sym_RPAREN,
  [15087] = 1,
    ACTIONS(1363), 1,
      anon_sym_RPAREN,
  [15091] = 1,
    ACTIONS(1137), 1,
      anon_sym_RPAREN,
  [15095] = 1,
    ACTIONS(1365), 1,
      anon_sym_RPAREN,
  [15099] = 1,
    ACTIONS(1367), 1,
      anon_sym_RPAREN,
  [15103] = 1,
    ACTIONS(1369), 1,
      anon_sym_RPAREN,
  [15107] = 1,
    ACTIONS(1371), 1,
      anon_sym_RPAREN,
  [15111] = 1,
    ACTIONS(1373), 1,
      anon_sym_RPAREN,
  [15115] = 1,
    ACTIONS(1375), 1,
      anon_sym_RPAREN,
  [15119] = 1,
    ACTIONS(1377), 1,
      anon_sym_RPAREN,
  [15123] = 1,
    ACTIONS(1379), 1,
      anon_sym_LPAREN,
  [15127] = 1,
    ACTIONS(1381), 1,
      anon_sym_RPAREN,
  [15131] = 1,
    ACTIONS(1383), 1,
      anon_sym_LPAREN,
  [15135] = 1,
    ACTIONS(1385), 1,
      anon_sym_LPAREN,
  [15139] = 1,
    ACTIONS(1387), 1,
      anon_sym_LPAREN,
  [15143] = 1,
    ACTIONS(1389), 1,
      anon_sym_RPAREN,
  [15147] = 1,
    ACTIONS(1391), 1,
      anon_sym_LPAREN,
  [15151] = 1,
    ACTIONS(1393), 1,
      anon_sym_LPAREN,
  [15155] = 1,
    ACTIONS(1395), 1,
      anon_sym_RPAREN,
  [15159] = 1,
    ACTIONS(1397), 1,
      anon_sym_RPAREN,
  [15163] = 1,
    ACTIONS(1399), 1,
      anon_sym_LPAREN,
  [15167] = 1,
    ACTIONS(1401), 1,
      anon_sym_LPAREN,
  [15171] = 1,
    ACTIONS(1110), 1,
      anon_sym_RPAREN,
  [15175] = 1,
    ACTIONS(1403), 1,
      anon_sym_LPAREN,
  [15179] = 1,
    ACTIONS(1405), 1,
      anon_sym_RPAREN,
  [15183] = 1,
    ACTIONS(1407), 1,
      anon_sym_RPAREN,
  [15187] = 1,
    ACTIONS(1409), 1,
      anon_sym_LPAREN,
  [15191] = 1,
    ACTIONS(1411), 1,
      anon_sym_LPAREN,
  [15195] = 1,
    ACTIONS(1413), 1,
      anon_sym_LPAREN,
  [15199] = 1,
    ACTIONS(1415), 1,
      anon_sym_RPAREN,
  [15203] = 1,
    ACTIONS(1417), 1,
      anon_sym_LPAREN,
  [15207] = 1,
    ACTIONS(1419), 1,
      anon_sym_LPAREN,
  [15211] = 1,
    ACTIONS(1421), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [15215] = 1,
    ACTIONS(1423), 1,
      anon_sym_COLON_COLON,
  [15219] = 1,
    ACTIONS(1197), 1,
      aux_sym_window_frame_preceding_token3,
  [15223] = 1,
    ACTIONS(1425), 1,
      anon_sym_RPAREN,
  [15227] = 1,
    ACTIONS(1427), 1,
      anon_sym_LPAREN,
  [15231] = 1,
    ACTIONS(1429), 1,
      anon_sym_LPAREN,
  [15235] = 1,
    ACTIONS(1431), 1,
      anon_sym_RPAREN,
  [15239] = 1,
    ACTIONS(1433), 1,
      anon_sym_RPAREN,
  [15243] = 1,
    ACTIONS(1197), 1,
      aux_sym_window_frame_preceding_token1,
  [15247] = 1,
    ACTIONS(1435), 1,
      anon_sym_RPAREN,
  [15251] = 1,
    ACTIONS(1437), 1,
      anon_sym_RPAREN,
  [15255] = 1,
    ACTIONS(1439), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [15259] = 1,
    ACTIONS(1441), 1,
      anon_sym_LPAREN,
  [15263] = 1,
    ACTIONS(1443), 1,
      anon_sym_EQ,
  [15267] = 1,
    ACTIONS(1445), 1,
      sym_string_lit,
  [15271] = 1,
    ACTIONS(443), 1,
      anon_sym_LPAREN,
  [15275] = 1,
    ACTIONS(1447), 1,
      anon_sym_LPAREN,
  [15279] = 1,
    ACTIONS(1449), 1,
      anon_sym_LPAREN,
  [15283] = 1,
    ACTIONS(1451), 1,
      anon_sym_LPAREN,
  [15287] = 1,
    ACTIONS(1453), 1,
      anon_sym_LPAREN,
  [15291] = 1,
    ACTIONS(1455), 1,
      anon_sym_LPAREN,
  [15295] = 1,
    ACTIONS(1457), 1,
      anon_sym_LPAREN,
  [15299] = 1,
    ACTIONS(1459), 1,
      anon_sym_LPAREN,
  [15303] = 1,
    ACTIONS(1461), 1,
      anon_sym_RPAREN,
  [15307] = 1,
    ACTIONS(1463), 1,
      anon_sym_COMMA,
  [15311] = 1,
    ACTIONS(1465), 1,
      anon_sym_LPAREN,
  [15315] = 1,
    ACTIONS(1467), 1,
      anon_sym_LPAREN,
  [15319] = 1,
    ACTIONS(1089), 1,
      anon_sym_RPAREN,
  [15323] = 1,
    ACTIONS(1469), 1,
      anon_sym_LPAREN,
  [15327] = 1,
    ACTIONS(1471), 1,
      anon_sym_LPAREN,
  [15331] = 1,
    ACTIONS(1473), 1,
      anon_sym_COMMA,
  [15335] = 1,
    ACTIONS(1475), 1,
      anon_sym_LPAREN,
  [15339] = 1,
    ACTIONS(1477), 1,
      aux_sym_partition_by_clause_token2,
  [15343] = 1,
    ACTIONS(1479), 1,
      anon_sym_LPAREN,
  [15347] = 1,
    ACTIONS(1481), 1,
      anon_sym_LPAREN,
  [15351] = 1,
    ACTIONS(1483), 1,
      anon_sym_LPAREN,
  [15355] = 1,
    ACTIONS(1485), 1,
      anon_sym_LPAREN,
  [15359] = 1,
    ACTIONS(1487), 1,
      anon_sym_LPAREN,
  [15363] = 1,
    ACTIONS(1489), 1,
      aux_sym_partition_by_clause_token2,
  [15367] = 1,
    ACTIONS(1491), 1,
      anon_sym_LPAREN,
  [15371] = 1,
    ACTIONS(1493), 1,
      anon_sym_LPAREN,
  [15375] = 1,
    ACTIONS(1495), 1,
      anon_sym_LPAREN,
  [15379] = 1,
    ACTIONS(1497), 1,
      anon_sym_LPAREN,
  [15383] = 1,
    ACTIONS(1499), 1,
      anon_sym_LPAREN,
  [15387] = 1,
    ACTIONS(1501), 1,
      anon_sym_LPAREN,
  [15391] = 1,
    ACTIONS(1503), 1,
      anon_sym_COMMA,
  [15395] = 1,
    ACTIONS(1505), 1,
      anon_sym_LPAREN,
  [15399] = 1,
    ACTIONS(1507), 1,
      aux_sym_within_group__token2,
  [15403] = 1,
    ACTIONS(1509), 1,
      anon_sym_COLON_COLON,
  [15407] = 1,
    ACTIONS(1511), 1,
      anon_sym_LPAREN,
  [15411] = 1,
    ACTIONS(1513), 1,
      anon_sym_LPAREN,
  [15415] = 1,
    ACTIONS(1515), 1,
      anon_sym_RPAREN,
  [15419] = 1,
    ACTIONS(1517), 1,
      anon_sym_RPAREN,
  [15423] = 1,
    ACTIONS(1519), 1,
      anon_sym_LPAREN,
  [15427] = 1,
    ACTIONS(1521), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [15431] = 1,
    ACTIONS(1523), 1,
      anon_sym_RPAREN,
  [15435] = 1,
    ACTIONS(1525), 1,
      anon_sym_COLON_COLON,
  [15439] = 1,
    ACTIONS(1527), 1,
      anon_sym_LPAREN,
  [15443] = 1,
    ACTIONS(1529), 1,
      anon_sym_LPAREN,
  [15447] = 1,
    ACTIONS(1531), 1,
      anon_sym_EQ,
  [15451] = 1,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
  [15455] = 1,
    ACTIONS(1533), 1,
      anon_sym_RPAREN,
  [15459] = 1,
    ACTIONS(1535), 1,
      aux_sym_over__token1,
  [15463] = 1,
    ACTIONS(1537), 1,
      anon_sym_RPAREN,
  [15467] = 1,
    ACTIONS(1539), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [15471] = 1,
    ACTIONS(1541), 1,
      anon_sym_RPAREN,
  [15475] = 1,
    ACTIONS(1543), 1,
      anon_sym_LPAREN,
  [15479] = 1,
    ACTIONS(1545), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [15483] = 1,
    ACTIONS(1547), 1,
      aux_sym_over__token1,
  [15487] = 1,
    ACTIONS(1549), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [15491] = 1,
    ACTIONS(1551), 1,
      anon_sym_RPAREN,
  [15495] = 1,
    ACTIONS(1553), 1,
      anon_sym_LPAREN,
  [15499] = 1,
    ACTIONS(1555), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [15503] = 1,
    ACTIONS(1557), 1,
      anon_sym_LPAREN,
  [15507] = 1,
    ACTIONS(1559), 1,
      anon_sym_LPAREN,
  [15511] = 1,
    ACTIONS(1561), 1,
      anon_sym_LPAREN,
  [15515] = 1,
    ACTIONS(1563), 1,
      anon_sym_LPAREN,
  [15519] = 1,
    ACTIONS(1565), 1,
      anon_sym_LPAREN,
  [15523] = 1,
    ACTIONS(1567), 1,
      anon_sym_LPAREN,
  [15527] = 1,
    ACTIONS(1569), 1,
      anon_sym_RPAREN,
  [15531] = 1,
    ACTIONS(1571), 1,
      anon_sym_RPAREN,
  [15535] = 1,
    ACTIONS(1573), 1,
      anon_sym_RPAREN,
  [15539] = 1,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
  [15543] = 1,
    ACTIONS(1575), 1,
      ts_builtin_sym_end,
  [15547] = 1,
    ACTIONS(1577), 1,
      anon_sym_LPAREN,
  [15551] = 1,
    ACTIONS(1579), 1,
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
  [SMALL_STATE(65)] = 6967,
  [SMALL_STATE(66)] = 7021,
  [SMALL_STATE(67)] = 7072,
  [SMALL_STATE(68)] = 7114,
  [SMALL_STATE(69)] = 7138,
  [SMALL_STATE(70)] = 7163,
  [SMALL_STATE(71)] = 7188,
  [SMALL_STATE(72)] = 7233,
  [SMALL_STATE(73)] = 7256,
  [SMALL_STATE(74)] = 7301,
  [SMALL_STATE(75)] = 7343,
  [SMALL_STATE(76)] = 7379,
  [SMALL_STATE(77)] = 7401,
  [SMALL_STATE(78)] = 7427,
  [SMALL_STATE(79)] = 7473,
  [SMALL_STATE(80)] = 7495,
  [SMALL_STATE(81)] = 7541,
  [SMALL_STATE(82)] = 7580,
  [SMALL_STATE(83)] = 7600,
  [SMALL_STATE(84)] = 7628,
  [SMALL_STATE(85)] = 7672,
  [SMALL_STATE(86)] = 7714,
  [SMALL_STATE(87)] = 7734,
  [SMALL_STATE(88)] = 7752,
  [SMALL_STATE(89)] = 7776,
  [SMALL_STATE(90)] = 7804,
  [SMALL_STATE(91)] = 7828,
  [SMALL_STATE(92)] = 7850,
  [SMALL_STATE(93)] = 7870,
  [SMALL_STATE(94)] = 7892,
  [SMALL_STATE(95)] = 7912,
  [SMALL_STATE(96)] = 7932,
  [SMALL_STATE(97)] = 7952,
  [SMALL_STATE(98)] = 7972,
  [SMALL_STATE(99)] = 7994,
  [SMALL_STATE(100)] = 8014,
  [SMALL_STATE(101)] = 8032,
  [SMALL_STATE(102)] = 8052,
  [SMALL_STATE(103)] = 8074,
  [SMALL_STATE(104)] = 8096,
  [SMALL_STATE(105)] = 8116,
  [SMALL_STATE(106)] = 8136,
  [SMALL_STATE(107)] = 8158,
  [SMALL_STATE(108)] = 8178,
  [SMALL_STATE(109)] = 8198,
  [SMALL_STATE(110)] = 8219,
  [SMALL_STATE(111)] = 8240,
  [SMALL_STATE(112)] = 8257,
  [SMALL_STATE(113)] = 8294,
  [SMALL_STATE(114)] = 8331,
  [SMALL_STATE(115)] = 8352,
  [SMALL_STATE(116)] = 8373,
  [SMALL_STATE(117)] = 8394,
  [SMALL_STATE(118)] = 8415,
  [SMALL_STATE(119)] = 8436,
  [SMALL_STATE(120)] = 8457,
  [SMALL_STATE(121)] = 8476,
  [SMALL_STATE(122)] = 8495,
  [SMALL_STATE(123)] = 8513,
  [SMALL_STATE(124)] = 8533,
  [SMALL_STATE(125)] = 8551,
  [SMALL_STATE(126)] = 8569,
  [SMALL_STATE(127)] = 8603,
  [SMALL_STATE(128)] = 8621,
  [SMALL_STATE(129)] = 8639,
  [SMALL_STATE(130)] = 8657,
  [SMALL_STATE(131)] = 8675,
  [SMALL_STATE(132)] = 8693,
  [SMALL_STATE(133)] = 8713,
  [SMALL_STATE(134)] = 8731,
  [SMALL_STATE(135)] = 8765,
  [SMALL_STATE(136)] = 8783,
  [SMALL_STATE(137)] = 8803,
  [SMALL_STATE(138)] = 8839,
  [SMALL_STATE(139)] = 8857,
  [SMALL_STATE(140)] = 8875,
  [SMALL_STATE(141)] = 8893,
  [SMALL_STATE(142)] = 8927,
  [SMALL_STATE(143)] = 8945,
  [SMALL_STATE(144)] = 8965,
  [SMALL_STATE(145)] = 8983,
  [SMALL_STATE(146)] = 9001,
  [SMALL_STATE(147)] = 9019,
  [SMALL_STATE(148)] = 9037,
  [SMALL_STATE(149)] = 9055,
  [SMALL_STATE(150)] = 9073,
  [SMALL_STATE(151)] = 9111,
  [SMALL_STATE(152)] = 9129,
  [SMALL_STATE(153)] = 9149,
  [SMALL_STATE(154)] = 9167,
  [SMALL_STATE(155)] = 9185,
  [SMALL_STATE(156)] = 9203,
  [SMALL_STATE(157)] = 9223,
  [SMALL_STATE(158)] = 9241,
  [SMALL_STATE(159)] = 9259,
  [SMALL_STATE(160)] = 9277,
  [SMALL_STATE(161)] = 9295,
  [SMALL_STATE(162)] = 9313,
  [SMALL_STATE(163)] = 9331,
  [SMALL_STATE(164)] = 9349,
  [SMALL_STATE(165)] = 9367,
  [SMALL_STATE(166)] = 9385,
  [SMALL_STATE(167)] = 9403,
  [SMALL_STATE(168)] = 9421,
  [SMALL_STATE(169)] = 9441,
  [SMALL_STATE(170)] = 9459,
  [SMALL_STATE(171)] = 9477,
  [SMALL_STATE(172)] = 9495,
  [SMALL_STATE(173)] = 9513,
  [SMALL_STATE(174)] = 9531,
  [SMALL_STATE(175)] = 9565,
  [SMALL_STATE(176)] = 9583,
  [SMALL_STATE(177)] = 9601,
  [SMALL_STATE(178)] = 9619,
  [SMALL_STATE(179)] = 9636,
  [SMALL_STATE(180)] = 9655,
  [SMALL_STATE(181)] = 9672,
  [SMALL_STATE(182)] = 9689,
  [SMALL_STATE(183)] = 9706,
  [SMALL_STATE(184)] = 9723,
  [SMALL_STATE(185)] = 9740,
  [SMALL_STATE(186)] = 9757,
  [SMALL_STATE(187)] = 9774,
  [SMALL_STATE(188)] = 9791,
  [SMALL_STATE(189)] = 9808,
  [SMALL_STATE(190)] = 9825,
  [SMALL_STATE(191)] = 9846,
  [SMALL_STATE(192)] = 9867,
  [SMALL_STATE(193)] = 9884,
  [SMALL_STATE(194)] = 9900,
  [SMALL_STATE(195)] = 9918,
  [SMALL_STATE(196)] = 9938,
  [SMALL_STATE(197)] = 9958,
  [SMALL_STATE(198)] = 9976,
  [SMALL_STATE(199)] = 9996,
  [SMALL_STATE(200)] = 10012,
  [SMALL_STATE(201)] = 10032,
  [SMALL_STATE(202)] = 10052,
  [SMALL_STATE(203)] = 10072,
  [SMALL_STATE(204)] = 10092,
  [SMALL_STATE(205)] = 10114,
  [SMALL_STATE(206)] = 10130,
  [SMALL_STATE(207)] = 10148,
  [SMALL_STATE(208)] = 10168,
  [SMALL_STATE(209)] = 10186,
  [SMALL_STATE(210)] = 10206,
  [SMALL_STATE(211)] = 10224,
  [SMALL_STATE(212)] = 10244,
  [SMALL_STATE(213)] = 10262,
  [SMALL_STATE(214)] = 10284,
  [SMALL_STATE(215)] = 10302,
  [SMALL_STATE(216)] = 10317,
  [SMALL_STATE(217)] = 10332,
  [SMALL_STATE(218)] = 10349,
  [SMALL_STATE(219)] = 10364,
  [SMALL_STATE(220)] = 10379,
  [SMALL_STATE(221)] = 10394,
  [SMALL_STATE(222)] = 10409,
  [SMALL_STATE(223)] = 10424,
  [SMALL_STATE(224)] = 10439,
  [SMALL_STATE(225)] = 10454,
  [SMALL_STATE(226)] = 10469,
  [SMALL_STATE(227)] = 10484,
  [SMALL_STATE(228)] = 10499,
  [SMALL_STATE(229)] = 10514,
  [SMALL_STATE(230)] = 10529,
  [SMALL_STATE(231)] = 10548,
  [SMALL_STATE(232)] = 10563,
  [SMALL_STATE(233)] = 10578,
  [SMALL_STATE(234)] = 10593,
  [SMALL_STATE(235)] = 10612,
  [SMALL_STATE(236)] = 10627,
  [SMALL_STATE(237)] = 10646,
  [SMALL_STATE(238)] = 10661,
  [SMALL_STATE(239)] = 10676,
  [SMALL_STATE(240)] = 10691,
  [SMALL_STATE(241)] = 10706,
  [SMALL_STATE(242)] = 10721,
  [SMALL_STATE(243)] = 10736,
  [SMALL_STATE(244)] = 10751,
  [SMALL_STATE(245)] = 10766,
  [SMALL_STATE(246)] = 10781,
  [SMALL_STATE(247)] = 10796,
  [SMALL_STATE(248)] = 10811,
  [SMALL_STATE(249)] = 10826,
  [SMALL_STATE(250)] = 10841,
  [SMALL_STATE(251)] = 10856,
  [SMALL_STATE(252)] = 10871,
  [SMALL_STATE(253)] = 10886,
  [SMALL_STATE(254)] = 10901,
  [SMALL_STATE(255)] = 10916,
  [SMALL_STATE(256)] = 10931,
  [SMALL_STATE(257)] = 10946,
  [SMALL_STATE(258)] = 10961,
  [SMALL_STATE(259)] = 10976,
  [SMALL_STATE(260)] = 10995,
  [SMALL_STATE(261)] = 11010,
  [SMALL_STATE(262)] = 11025,
  [SMALL_STATE(263)] = 11040,
  [SMALL_STATE(264)] = 11057,
  [SMALL_STATE(265)] = 11074,
  [SMALL_STATE(266)] = 11089,
  [SMALL_STATE(267)] = 11104,
  [SMALL_STATE(268)] = 11119,
  [SMALL_STATE(269)] = 11138,
  [SMALL_STATE(270)] = 11157,
  [SMALL_STATE(271)] = 11176,
  [SMALL_STATE(272)] = 11191,
  [SMALL_STATE(273)] = 11206,
  [SMALL_STATE(274)] = 11221,
  [SMALL_STATE(275)] = 11236,
  [SMALL_STATE(276)] = 11251,
  [SMALL_STATE(277)] = 11266,
  [SMALL_STATE(278)] = 11285,
  [SMALL_STATE(279)] = 11300,
  [SMALL_STATE(280)] = 11319,
  [SMALL_STATE(281)] = 11333,
  [SMALL_STATE(282)] = 11347,
  [SMALL_STATE(283)] = 11375,
  [SMALL_STATE(284)] = 11391,
  [SMALL_STATE(285)] = 11407,
  [SMALL_STATE(286)] = 11425,
  [SMALL_STATE(287)] = 11441,
  [SMALL_STATE(288)] = 11455,
  [SMALL_STATE(289)] = 11473,
  [SMALL_STATE(290)] = 11487,
  [SMALL_STATE(291)] = 11503,
  [SMALL_STATE(292)] = 11519,
  [SMALL_STATE(293)] = 11537,
  [SMALL_STATE(294)] = 11553,
  [SMALL_STATE(295)] = 11571,
  [SMALL_STATE(296)] = 11589,
  [SMALL_STATE(297)] = 11603,
  [SMALL_STATE(298)] = 11623,
  [SMALL_STATE(299)] = 11634,
  [SMALL_STATE(300)] = 11645,
  [SMALL_STATE(301)] = 11660,
  [SMALL_STATE(302)] = 11675,
  [SMALL_STATE(303)] = 11688,
  [SMALL_STATE(304)] = 11699,
  [SMALL_STATE(305)] = 11710,
  [SMALL_STATE(306)] = 11723,
  [SMALL_STATE(307)] = 11736,
  [SMALL_STATE(308)] = 11747,
  [SMALL_STATE(309)] = 11758,
  [SMALL_STATE(310)] = 11771,
  [SMALL_STATE(311)] = 11784,
  [SMALL_STATE(312)] = 11797,
  [SMALL_STATE(313)] = 11808,
  [SMALL_STATE(314)] = 11819,
  [SMALL_STATE(315)] = 11832,
  [SMALL_STATE(316)] = 11855,
  [SMALL_STATE(317)] = 11866,
  [SMALL_STATE(318)] = 11877,
  [SMALL_STATE(319)] = 11890,
  [SMALL_STATE(320)] = 11901,
  [SMALL_STATE(321)] = 11914,
  [SMALL_STATE(322)] = 11925,
  [SMALL_STATE(323)] = 11936,
  [SMALL_STATE(324)] = 11949,
  [SMALL_STATE(325)] = 11962,
  [SMALL_STATE(326)] = 11975,
  [SMALL_STATE(327)] = 11986,
  [SMALL_STATE(328)] = 11999,
  [SMALL_STATE(329)] = 12010,
  [SMALL_STATE(330)] = 12023,
  [SMALL_STATE(331)] = 12034,
  [SMALL_STATE(332)] = 12047,
  [SMALL_STATE(333)] = 12058,
  [SMALL_STATE(334)] = 12069,
  [SMALL_STATE(335)] = 12080,
  [SMALL_STATE(336)] = 12091,
  [SMALL_STATE(337)] = 12102,
  [SMALL_STATE(338)] = 12113,
  [SMALL_STATE(339)] = 12136,
  [SMALL_STATE(340)] = 12149,
  [SMALL_STATE(341)] = 12160,
  [SMALL_STATE(342)] = 12179,
  [SMALL_STATE(343)] = 12190,
  [SMALL_STATE(344)] = 12201,
  [SMALL_STATE(345)] = 12212,
  [SMALL_STATE(346)] = 12223,
  [SMALL_STATE(347)] = 12234,
  [SMALL_STATE(348)] = 12249,
  [SMALL_STATE(349)] = 12260,
  [SMALL_STATE(350)] = 12271,
  [SMALL_STATE(351)] = 12284,
  [SMALL_STATE(352)] = 12295,
  [SMALL_STATE(353)] = 12310,
  [SMALL_STATE(354)] = 12323,
  [SMALL_STATE(355)] = 12334,
  [SMALL_STATE(356)] = 12357,
  [SMALL_STATE(357)] = 12369,
  [SMALL_STATE(358)] = 12381,
  [SMALL_STATE(359)] = 12395,
  [SMALL_STATE(360)] = 12411,
  [SMALL_STATE(361)] = 12425,
  [SMALL_STATE(362)] = 12437,
  [SMALL_STATE(363)] = 12449,
  [SMALL_STATE(364)] = 12461,
  [SMALL_STATE(365)] = 12483,
  [SMALL_STATE(366)] = 12495,
  [SMALL_STATE(367)] = 12507,
  [SMALL_STATE(368)] = 12519,
  [SMALL_STATE(369)] = 12535,
  [SMALL_STATE(370)] = 12552,
  [SMALL_STATE(371)] = 12567,
  [SMALL_STATE(372)] = 12576,
  [SMALL_STATE(373)] = 12589,
  [SMALL_STATE(374)] = 12602,
  [SMALL_STATE(375)] = 12619,
  [SMALL_STATE(376)] = 12628,
  [SMALL_STATE(377)] = 12647,
  [SMALL_STATE(378)] = 12664,
  [SMALL_STATE(379)] = 12673,
  [SMALL_STATE(380)] = 12692,
  [SMALL_STATE(381)] = 12707,
  [SMALL_STATE(382)] = 12726,
  [SMALL_STATE(383)] = 12741,
  [SMALL_STATE(384)] = 12758,
  [SMALL_STATE(385)] = 12767,
  [SMALL_STATE(386)] = 12786,
  [SMALL_STATE(387)] = 12805,
  [SMALL_STATE(388)] = 12814,
  [SMALL_STATE(389)] = 12833,
  [SMALL_STATE(390)] = 12842,
  [SMALL_STATE(391)] = 12861,
  [SMALL_STATE(392)] = 12880,
  [SMALL_STATE(393)] = 12899,
  [SMALL_STATE(394)] = 12918,
  [SMALL_STATE(395)] = 12933,
  [SMALL_STATE(396)] = 12952,
  [SMALL_STATE(397)] = 12971,
  [SMALL_STATE(398)] = 12990,
  [SMALL_STATE(399)] = 13005,
  [SMALL_STATE(400)] = 13024,
  [SMALL_STATE(401)] = 13033,
  [SMALL_STATE(402)] = 13052,
  [SMALL_STATE(403)] = 13065,
  [SMALL_STATE(404)] = 13084,
  [SMALL_STATE(405)] = 13103,
  [SMALL_STATE(406)] = 13116,
  [SMALL_STATE(407)] = 13125,
  [SMALL_STATE(408)] = 13142,
  [SMALL_STATE(409)] = 13159,
  [SMALL_STATE(410)] = 13178,
  [SMALL_STATE(411)] = 13187,
  [SMALL_STATE(412)] = 13204,
  [SMALL_STATE(413)] = 13223,
  [SMALL_STATE(414)] = 13239,
  [SMALL_STATE(415)] = 13255,
  [SMALL_STATE(416)] = 13271,
  [SMALL_STATE(417)] = 13287,
  [SMALL_STATE(418)] = 13303,
  [SMALL_STATE(419)] = 13319,
  [SMALL_STATE(420)] = 13335,
  [SMALL_STATE(421)] = 13351,
  [SMALL_STATE(422)] = 13367,
  [SMALL_STATE(423)] = 13383,
  [SMALL_STATE(424)] = 13399,
  [SMALL_STATE(425)] = 13415,
  [SMALL_STATE(426)] = 13431,
  [SMALL_STATE(427)] = 13447,
  [SMALL_STATE(428)] = 13463,
  [SMALL_STATE(429)] = 13479,
  [SMALL_STATE(430)] = 13495,
  [SMALL_STATE(431)] = 13511,
  [SMALL_STATE(432)] = 13527,
  [SMALL_STATE(433)] = 13543,
  [SMALL_STATE(434)] = 13559,
  [SMALL_STATE(435)] = 13575,
  [SMALL_STATE(436)] = 13591,
  [SMALL_STATE(437)] = 13607,
  [SMALL_STATE(438)] = 13623,
  [SMALL_STATE(439)] = 13639,
  [SMALL_STATE(440)] = 13655,
  [SMALL_STATE(441)] = 13663,
  [SMALL_STATE(442)] = 13675,
  [SMALL_STATE(443)] = 13691,
  [SMALL_STATE(444)] = 13707,
  [SMALL_STATE(445)] = 13723,
  [SMALL_STATE(446)] = 13739,
  [SMALL_STATE(447)] = 13755,
  [SMALL_STATE(448)] = 13771,
  [SMALL_STATE(449)] = 13787,
  [SMALL_STATE(450)] = 13803,
  [SMALL_STATE(451)] = 13819,
  [SMALL_STATE(452)] = 13835,
  [SMALL_STATE(453)] = 13851,
  [SMALL_STATE(454)] = 13863,
  [SMALL_STATE(455)] = 13879,
  [SMALL_STATE(456)] = 13895,
  [SMALL_STATE(457)] = 13911,
  [SMALL_STATE(458)] = 13927,
  [SMALL_STATE(459)] = 13943,
  [SMALL_STATE(460)] = 13955,
  [SMALL_STATE(461)] = 13966,
  [SMALL_STATE(462)] = 13979,
  [SMALL_STATE(463)] = 13990,
  [SMALL_STATE(464)] = 13999,
  [SMALL_STATE(465)] = 14006,
  [SMALL_STATE(466)] = 14013,
  [SMALL_STATE(467)] = 14020,
  [SMALL_STATE(468)] = 14033,
  [SMALL_STATE(469)] = 14046,
  [SMALL_STATE(470)] = 14059,
  [SMALL_STATE(471)] = 14070,
  [SMALL_STATE(472)] = 14077,
  [SMALL_STATE(473)] = 14090,
  [SMALL_STATE(474)] = 14101,
  [SMALL_STATE(475)] = 14114,
  [SMALL_STATE(476)] = 14121,
  [SMALL_STATE(477)] = 14134,
  [SMALL_STATE(478)] = 14145,
  [SMALL_STATE(479)] = 14156,
  [SMALL_STATE(480)] = 14163,
  [SMALL_STATE(481)] = 14176,
  [SMALL_STATE(482)] = 14187,
  [SMALL_STATE(483)] = 14198,
  [SMALL_STATE(484)] = 14209,
  [SMALL_STATE(485)] = 14216,
  [SMALL_STATE(486)] = 14229,
  [SMALL_STATE(487)] = 14236,
  [SMALL_STATE(488)] = 14247,
  [SMALL_STATE(489)] = 14258,
  [SMALL_STATE(490)] = 14265,
  [SMALL_STATE(491)] = 14278,
  [SMALL_STATE(492)] = 14289,
  [SMALL_STATE(493)] = 14302,
  [SMALL_STATE(494)] = 14313,
  [SMALL_STATE(495)] = 14326,
  [SMALL_STATE(496)] = 14334,
  [SMALL_STATE(497)] = 14344,
  [SMALL_STATE(498)] = 14354,
  [SMALL_STATE(499)] = 14360,
  [SMALL_STATE(500)] = 14366,
  [SMALL_STATE(501)] = 14374,
  [SMALL_STATE(502)] = 14384,
  [SMALL_STATE(503)] = 14390,
  [SMALL_STATE(504)] = 14400,
  [SMALL_STATE(505)] = 14410,
  [SMALL_STATE(506)] = 14420,
  [SMALL_STATE(507)] = 14430,
  [SMALL_STATE(508)] = 14440,
  [SMALL_STATE(509)] = 14450,
  [SMALL_STATE(510)] = 14460,
  [SMALL_STATE(511)] = 14470,
  [SMALL_STATE(512)] = 14478,
  [SMALL_STATE(513)] = 14488,
  [SMALL_STATE(514)] = 14495,
  [SMALL_STATE(515)] = 14502,
  [SMALL_STATE(516)] = 14509,
  [SMALL_STATE(517)] = 14516,
  [SMALL_STATE(518)] = 14523,
  [SMALL_STATE(519)] = 14530,
  [SMALL_STATE(520)] = 14535,
  [SMALL_STATE(521)] = 14542,
  [SMALL_STATE(522)] = 14549,
  [SMALL_STATE(523)] = 14556,
  [SMALL_STATE(524)] = 14563,
  [SMALL_STATE(525)] = 14570,
  [SMALL_STATE(526)] = 14575,
  [SMALL_STATE(527)] = 14580,
  [SMALL_STATE(528)] = 14587,
  [SMALL_STATE(529)] = 14594,
  [SMALL_STATE(530)] = 14601,
  [SMALL_STATE(531)] = 14608,
  [SMALL_STATE(532)] = 14615,
  [SMALL_STATE(533)] = 14622,
  [SMALL_STATE(534)] = 14629,
  [SMALL_STATE(535)] = 14636,
  [SMALL_STATE(536)] = 14643,
  [SMALL_STATE(537)] = 14648,
  [SMALL_STATE(538)] = 14653,
  [SMALL_STATE(539)] = 14660,
  [SMALL_STATE(540)] = 14667,
  [SMALL_STATE(541)] = 14672,
  [SMALL_STATE(542)] = 14679,
  [SMALL_STATE(543)] = 14686,
  [SMALL_STATE(544)] = 14691,
  [SMALL_STATE(545)] = 14698,
  [SMALL_STATE(546)] = 14705,
  [SMALL_STATE(547)] = 14712,
  [SMALL_STATE(548)] = 14719,
  [SMALL_STATE(549)] = 14726,
  [SMALL_STATE(550)] = 14733,
  [SMALL_STATE(551)] = 14740,
  [SMALL_STATE(552)] = 14747,
  [SMALL_STATE(553)] = 14754,
  [SMALL_STATE(554)] = 14759,
  [SMALL_STATE(555)] = 14766,
  [SMALL_STATE(556)] = 14773,
  [SMALL_STATE(557)] = 14780,
  [SMALL_STATE(558)] = 14787,
  [SMALL_STATE(559)] = 14792,
  [SMALL_STATE(560)] = 14799,
  [SMALL_STATE(561)] = 14804,
  [SMALL_STATE(562)] = 14809,
  [SMALL_STATE(563)] = 14816,
  [SMALL_STATE(564)] = 14823,
  [SMALL_STATE(565)] = 14827,
  [SMALL_STATE(566)] = 14831,
  [SMALL_STATE(567)] = 14835,
  [SMALL_STATE(568)] = 14839,
  [SMALL_STATE(569)] = 14843,
  [SMALL_STATE(570)] = 14847,
  [SMALL_STATE(571)] = 14851,
  [SMALL_STATE(572)] = 14855,
  [SMALL_STATE(573)] = 14859,
  [SMALL_STATE(574)] = 14863,
  [SMALL_STATE(575)] = 14867,
  [SMALL_STATE(576)] = 14871,
  [SMALL_STATE(577)] = 14875,
  [SMALL_STATE(578)] = 14879,
  [SMALL_STATE(579)] = 14883,
  [SMALL_STATE(580)] = 14887,
  [SMALL_STATE(581)] = 14891,
  [SMALL_STATE(582)] = 14895,
  [SMALL_STATE(583)] = 14899,
  [SMALL_STATE(584)] = 14903,
  [SMALL_STATE(585)] = 14907,
  [SMALL_STATE(586)] = 14911,
  [SMALL_STATE(587)] = 14915,
  [SMALL_STATE(588)] = 14919,
  [SMALL_STATE(589)] = 14923,
  [SMALL_STATE(590)] = 14927,
  [SMALL_STATE(591)] = 14931,
  [SMALL_STATE(592)] = 14935,
  [SMALL_STATE(593)] = 14939,
  [SMALL_STATE(594)] = 14943,
  [SMALL_STATE(595)] = 14947,
  [SMALL_STATE(596)] = 14951,
  [SMALL_STATE(597)] = 14955,
  [SMALL_STATE(598)] = 14959,
  [SMALL_STATE(599)] = 14963,
  [SMALL_STATE(600)] = 14967,
  [SMALL_STATE(601)] = 14971,
  [SMALL_STATE(602)] = 14975,
  [SMALL_STATE(603)] = 14979,
  [SMALL_STATE(604)] = 14983,
  [SMALL_STATE(605)] = 14987,
  [SMALL_STATE(606)] = 14991,
  [SMALL_STATE(607)] = 14995,
  [SMALL_STATE(608)] = 14999,
  [SMALL_STATE(609)] = 15003,
  [SMALL_STATE(610)] = 15007,
  [SMALL_STATE(611)] = 15011,
  [SMALL_STATE(612)] = 15015,
  [SMALL_STATE(613)] = 15019,
  [SMALL_STATE(614)] = 15023,
  [SMALL_STATE(615)] = 15027,
  [SMALL_STATE(616)] = 15031,
  [SMALL_STATE(617)] = 15035,
  [SMALL_STATE(618)] = 15039,
  [SMALL_STATE(619)] = 15043,
  [SMALL_STATE(620)] = 15047,
  [SMALL_STATE(621)] = 15051,
  [SMALL_STATE(622)] = 15055,
  [SMALL_STATE(623)] = 15059,
  [SMALL_STATE(624)] = 15063,
  [SMALL_STATE(625)] = 15067,
  [SMALL_STATE(626)] = 15071,
  [SMALL_STATE(627)] = 15075,
  [SMALL_STATE(628)] = 15079,
  [SMALL_STATE(629)] = 15083,
  [SMALL_STATE(630)] = 15087,
  [SMALL_STATE(631)] = 15091,
  [SMALL_STATE(632)] = 15095,
  [SMALL_STATE(633)] = 15099,
  [SMALL_STATE(634)] = 15103,
  [SMALL_STATE(635)] = 15107,
  [SMALL_STATE(636)] = 15111,
  [SMALL_STATE(637)] = 15115,
  [SMALL_STATE(638)] = 15119,
  [SMALL_STATE(639)] = 15123,
  [SMALL_STATE(640)] = 15127,
  [SMALL_STATE(641)] = 15131,
  [SMALL_STATE(642)] = 15135,
  [SMALL_STATE(643)] = 15139,
  [SMALL_STATE(644)] = 15143,
  [SMALL_STATE(645)] = 15147,
  [SMALL_STATE(646)] = 15151,
  [SMALL_STATE(647)] = 15155,
  [SMALL_STATE(648)] = 15159,
  [SMALL_STATE(649)] = 15163,
  [SMALL_STATE(650)] = 15167,
  [SMALL_STATE(651)] = 15171,
  [SMALL_STATE(652)] = 15175,
  [SMALL_STATE(653)] = 15179,
  [SMALL_STATE(654)] = 15183,
  [SMALL_STATE(655)] = 15187,
  [SMALL_STATE(656)] = 15191,
  [SMALL_STATE(657)] = 15195,
  [SMALL_STATE(658)] = 15199,
  [SMALL_STATE(659)] = 15203,
  [SMALL_STATE(660)] = 15207,
  [SMALL_STATE(661)] = 15211,
  [SMALL_STATE(662)] = 15215,
  [SMALL_STATE(663)] = 15219,
  [SMALL_STATE(664)] = 15223,
  [SMALL_STATE(665)] = 15227,
  [SMALL_STATE(666)] = 15231,
  [SMALL_STATE(667)] = 15235,
  [SMALL_STATE(668)] = 15239,
  [SMALL_STATE(669)] = 15243,
  [SMALL_STATE(670)] = 15247,
  [SMALL_STATE(671)] = 15251,
  [SMALL_STATE(672)] = 15255,
  [SMALL_STATE(673)] = 15259,
  [SMALL_STATE(674)] = 15263,
  [SMALL_STATE(675)] = 15267,
  [SMALL_STATE(676)] = 15271,
  [SMALL_STATE(677)] = 15275,
  [SMALL_STATE(678)] = 15279,
  [SMALL_STATE(679)] = 15283,
  [SMALL_STATE(680)] = 15287,
  [SMALL_STATE(681)] = 15291,
  [SMALL_STATE(682)] = 15295,
  [SMALL_STATE(683)] = 15299,
  [SMALL_STATE(684)] = 15303,
  [SMALL_STATE(685)] = 15307,
  [SMALL_STATE(686)] = 15311,
  [SMALL_STATE(687)] = 15315,
  [SMALL_STATE(688)] = 15319,
  [SMALL_STATE(689)] = 15323,
  [SMALL_STATE(690)] = 15327,
  [SMALL_STATE(691)] = 15331,
  [SMALL_STATE(692)] = 15335,
  [SMALL_STATE(693)] = 15339,
  [SMALL_STATE(694)] = 15343,
  [SMALL_STATE(695)] = 15347,
  [SMALL_STATE(696)] = 15351,
  [SMALL_STATE(697)] = 15355,
  [SMALL_STATE(698)] = 15359,
  [SMALL_STATE(699)] = 15363,
  [SMALL_STATE(700)] = 15367,
  [SMALL_STATE(701)] = 15371,
  [SMALL_STATE(702)] = 15375,
  [SMALL_STATE(703)] = 15379,
  [SMALL_STATE(704)] = 15383,
  [SMALL_STATE(705)] = 15387,
  [SMALL_STATE(706)] = 15391,
  [SMALL_STATE(707)] = 15395,
  [SMALL_STATE(708)] = 15399,
  [SMALL_STATE(709)] = 15403,
  [SMALL_STATE(710)] = 15407,
  [SMALL_STATE(711)] = 15411,
  [SMALL_STATE(712)] = 15415,
  [SMALL_STATE(713)] = 15419,
  [SMALL_STATE(714)] = 15423,
  [SMALL_STATE(715)] = 15427,
  [SMALL_STATE(716)] = 15431,
  [SMALL_STATE(717)] = 15435,
  [SMALL_STATE(718)] = 15439,
  [SMALL_STATE(719)] = 15443,
  [SMALL_STATE(720)] = 15447,
  [SMALL_STATE(721)] = 15451,
  [SMALL_STATE(722)] = 15455,
  [SMALL_STATE(723)] = 15459,
  [SMALL_STATE(724)] = 15463,
  [SMALL_STATE(725)] = 15467,
  [SMALL_STATE(726)] = 15471,
  [SMALL_STATE(727)] = 15475,
  [SMALL_STATE(728)] = 15479,
  [SMALL_STATE(729)] = 15483,
  [SMALL_STATE(730)] = 15487,
  [SMALL_STATE(731)] = 15491,
  [SMALL_STATE(732)] = 15495,
  [SMALL_STATE(733)] = 15499,
  [SMALL_STATE(734)] = 15503,
  [SMALL_STATE(735)] = 15507,
  [SMALL_STATE(736)] = 15511,
  [SMALL_STATE(737)] = 15515,
  [SMALL_STATE(738)] = 15519,
  [SMALL_STATE(739)] = 15523,
  [SMALL_STATE(740)] = 15527,
  [SMALL_STATE(741)] = 15531,
  [SMALL_STATE(742)] = 15535,
  [SMALL_STATE(743)] = 15539,
  [SMALL_STATE(744)] = 15543,
  [SMALL_STATE(745)] = 15547,
  [SMALL_STATE(746)] = 15551,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsql_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(662),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(660),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(656),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(655),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(652),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(650),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(649),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(643),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(642),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(641),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(566),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(717),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(694),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(746),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(737),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(718),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(695),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(696),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(697),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(719),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(698),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(709),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(678),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(745),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(735),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(710),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(679),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(680),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(681),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(711),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(682),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_operator, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_operator, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsql_file, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(390),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 3, 0, 10),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 3, 0, 10),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_expression, 1, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_expression, 1, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_LOCAL_ID_, 1, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_LOCAL_ID_, 1, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body_batch, 1, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body_batch, 1, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udt_elem, 3, 0, 13),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_udt_elem, 3, 0, 13),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_var_string, 3, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_var_string, 3, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_var_string, 1, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_var_string, 1, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_batch, 2, 0, 0),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 2, 0, 0), SHIFT(292),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 2, 0, 0), SHIFT(84),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 2, 0, 0), SHIFT(2),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_batch, 2, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_batch, 1, 0, 0),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 1, 0, 0), SHIFT(292),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 1, 0, 0), SHIFT(84),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 1, 0, 0), SHIFT(2),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_batch, 1, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_elem, 1, 0, 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_elem, 1, 0, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udt_elem, 4, 0, 13),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_udt_elem, 4, 0, 13),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_var_string, 5, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_var_string, 5, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_, 1, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_, 1, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_batch_repeat1, 2, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_batch_repeat1, 2, 0, 0),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_batch_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_batch_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 26),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 26),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_go_statement, 1, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_go_statement, 1, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 17),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 17),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 19),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 19),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(608),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_column_name, 1, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_column_name, 1, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_alias, 1, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_schema, 1, 0, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 18),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 18),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 3, 0, 5),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_database_schema, 3, 0, 5),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 20),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 20),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_schema, 3, 0, 7),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_schema, 3, 0, 7),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 4, 0, 8),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 4, 0, 8),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 1, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 1, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 1, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_database_schema, 1, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_schema, 1, 0, 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 16),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 16),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 4, 0, 15),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_database_schema, 4, 0, 15),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 4, 0, 9),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_database_schema, 4, 0, 9),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 7, 0, 31),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 7, 0, 31),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 5, 0, 21),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_database_schema, 5, 0, 21),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 25),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 25),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 22),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 22),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_, 1, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_, 1, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_, 1, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_, 1, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(700),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(714),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_money_, 2, 0, 6),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_money_, 2, 0, 6),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 4, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 4, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real_, 4, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real_, 4, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranking_windowed_function, 4, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ranking_windowed_function, 4, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(732),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(704),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(665),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hierarchyid_static_method, 5, 0, 0),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hierarchyid_static_method, 5, 0, 0),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_over_clause, 3, 0, 0),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_over_clause, 3, 0, 0),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 0),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 0),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 5, 0, 0),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 5, 0, 0),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_windowed_function, 5, 0, 18),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_windowed_function, 5, 0, 18),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_constant, 1, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_constant, 1, 0, 0),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_windowed_function, 5, 0, 19),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_windowed_function, 5, 0, 19),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real_, 3, 0, 0),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real_, 3, 0, 0),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, 0, 0),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, 0, 0),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 12, 0, 0),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 12, 0, 0),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 11, 0, 0),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 11, 0, 0),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_function, 8, 0, 37),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partition_function, 8, 0, 37),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hierarchyid_static_method, 8, 0, 0),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hierarchyid_static_method, 8, 0, 0),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_over_clause, 6, 0, 0),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_over_clause, 6, 0, 0),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 8, 0, 0),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 8, 0, 0),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranking_windowed_function, 5, 0, 0),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ranking_windowed_function, 5, 0, 0),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_over_clause, 5, 0, 0),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_over_clause, 5, 0, 0),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 7, 0, 0),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 7, 0, 0),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 3, 0, 0),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 3, 0, 0),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hierarchyid_static_method, 6, 0, 0),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hierarchyid_static_method, 6, 0, 0),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_over_clause, 4, 0, 0),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_over_clause, 4, 0, 0),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(727),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(689),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(645),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_money_, 3, 0, 6),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_money_, 3, 0, 6),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_function, 6, 0, 29),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partition_function, 6, 0, 29),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hierarchyid_static_method, 6, 0, 28),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hierarchyid_static_method, 6, 0, 28),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udt_method_arguments, 3, 0, 0),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_udt_method_arguments, 3, 0, 0),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udt_method_arguments, 4, 0, 0),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_udt_method_arguments, 4, 0, 0),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(646),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_statement_arg, 2, 0, 0),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_statement_arg, 2, 0, 0),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_statement_arg, 1, 0, 0),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_statement_arg, 1, 0, 0),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_parameter, 1, 0, 0),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_parameter, 1, 0, 0),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_body_batch_repeat1, 2, 0, 0),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_execute_body_batch_repeat1, 2, 0, 0),
  [679] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_body_batch_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_statement_arg_repeat1, 2, 0, 0),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_execute_statement_arg_repeat1, 2, 0, 0),
  [686] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_statement_arg_repeat1, 2, 0, 0), SHIFT_REPEAT(527),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 3, 0, 0),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 3, 0, 0),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(560),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list, 2, 0, 0),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_list, 2, 0, 0),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list, 1, 0, 0),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_list, 1, 0, 0),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_list_repeat1, 2, 0, 0),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_select_list_repeat1, 2, 0, 0),
  [713] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_list_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 4, 0, 0),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 4, 0, 0),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_column_alias, 2, 0, 0),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as_column_alias, 2, 0, 0),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_statement_arg_unnamed, 1, 0, 4),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_statement_arg_unnamed, 1, 0, 4),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_statement_arg_named, 3, 0, 14),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_statement_arg_named, 3, 0, 14),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1, 0, 0),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1, 0, 0),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_parameter, 2, 0, 0),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_parameter, 2, 0, 0),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2, 0, 0),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 2, 0, 0),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_column_alias, 1, 0, 0),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as_column_alias, 1, 0, 0),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_elem, 2, 0, 3),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_elem, 2, 0, 3),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_alias, 1, 0, 0),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 7, 0, 10),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 7, 0, 10),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_body_repeat1, 2, 0, 0),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_execute_body_repeat1, 2, 0, 0),
  [770] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_body_repeat1, 2, 0, 0), SHIFT_REPEAT(468),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 5, 0, 0),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 5, 0, 0),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 5, 0, 10),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 5, 0, 10),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list_elem, 1, 0, 0),
  [783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_list_elem, 1, 0, 0),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list_elem, 3, 0, 0),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_list_elem, 3, 0, 0),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_elem, 3, 0, 12),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_elem, 3, 0, 12),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 6, 0, 10),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 6, 0, 10),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udt_elem, 5, 0, 13),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_udt_elem, 5, 0, 13),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_option, 1, 0, 0),
  [805] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_option, 1, 0, 0),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 8, 0, 0),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 8, 0, 0),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_specification, 2, 0, 0),
  [821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_specification, 2, 0, 0),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat2, 2, 0, 0),
  [827] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat2, 2, 0, 0), SHIFT_REPEAT(292),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat2, 2, 0, 0),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 7, 0, 0),
  [834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 7, 0, 0),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_batch, 3, 0, 0),
  [840] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 3, 0, 0), SHIFT(292),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_batch, 3, 0, 0),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 4, 0, 10),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 4, 0, 10),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 2, 0, 0),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 2, 0, 0),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_option, 2, 0, 0),
  [859] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_option, 2, 0, 0),
  [861] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat2, 1, 0, 0), REDUCE(sym_batch, 2, 0, 0),
  [864] = {.entry = {.count = 3, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat2, 1, 0, 0), REDUCE(sym_batch, 2, 0, 0), SHIFT(292),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_table_name, 1, 0, 11),
  [870] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_table_name, 1, 0, 11),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_table_name, 3, 0, 24),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_table_name, 3, 0, 24),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_source_item, 1, 0, 0),
  [884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_source_item, 1, 0, 0),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_source, 1, 0, 0),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_source, 1, 0, 0),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 6, 0, 27),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 6, 0, 27),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_sources, 1, 0, 0),
  [896] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_sources, 1, 0, 0),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_specification, 4, 0, 0),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_specification, 4, 0, 0),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_statement, 2, 0, 0),
  [904] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_statement, 2, 0, 0),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 10, 0, 43),
  [916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 10, 0, 43),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_table_name, 7, 0, 42),
  [920] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_table_name, 7, 0, 42),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1, 0, 0),
  [924] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 1, 0, 0),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_expression, 1, 0, 0),
  [928] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_expression, 1, 0, 0),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_another_statement, 1, 0, 0),
  [932] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_another_statement, 1, 0, 0),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 5, 0, 23),
  [936] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 5, 0, 23),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 9, 0, 38),
  [942] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 9, 0, 38),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 1, 0, 32),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_table_name, 5, 0, 33),
  [954] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_table_name, 5, 0, 33),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement_standalone, 1, 0, 0),
  [960] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement_standalone, 1, 0, 0),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_clauses, 1, 0, 0),
  [964] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_clauses, 1, 0, 0),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_clause, 1, 0, 0),
  [970] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dml_clause, 1, 0, 0),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [976] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_body_batch_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body_batch, 3, 0, 0),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [985] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_statement_arg_repeat1, 2, 0, 0), SHIFT_REPEAT(538),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [990] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1, 0, 0),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_go_statement, 2, 0, 2),
  [994] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_go_statement, 2, 0, 2),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_clauses, 2, 0, 0),
  [998] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_clauses, 2, 0, 0),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body_batch, 2, 0, 0),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1010] = {.entry = {.count = 1, .reusable = false}}, SHIFT(610),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list_, 2, 0, 0),
  [1018] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list__repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list__repeat1, 2, 0, 0),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collation_, 2, 0, 39),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1033] = {.entry = {.count = 1, .reusable = false}}, SHIFT(574),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1037] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1069] = {.entry = {.count = 1, .reusable = false}}, SHIFT(576),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list_, 1, 0, 0),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 2, 0, 32),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1099] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_order_by_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_order_by_clause_repeat1, 2, 0, 0),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 4, 0, 0),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 3, 0, 0),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsql_file, 2, 0, 0),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as, 1, 0, 0),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as, 1, 0, 0),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 2, 0, 36),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 2, 0, 35),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body_batch, 4, 0, 0),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_by_clause, 3, 0, 0),
  [1134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat2, 2, 0, 0), SHIFT_REPEAT(473),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 3, 0, 41),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 3, 0, 40),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_body_repeat2, 2, 0, 0), SHIFT_REPEAT(476),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_body_repeat2, 2, 0, 0),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lag_lead_args, 7, 0, 34),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lag_lead_args, 5, 0, 30),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lag_lead_args, 3, 0, 0),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list__repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_frame_following, 2, 0, 0),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_frame_bound, 1, 0, 0),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_frame_preceding, 2, 0, 0),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_RESULT_SETS, 2, 0, 0),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AS, 1, 0, 0),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_frame_extent, 4, 0, 0),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_all_distinct_expression, 1, 0, 0),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_frame_extent, 1, 0, 0),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row_or_range_clause, 2, 0, 0),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_function_name, 1, 0, 0),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_within_group_, 2, 0, 0),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_all_distinct_expression, 2, 0, 0),
  [1535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_respect_nulls_, 2, 0, 0),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ignore_nulls_, 2, 0, 0),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_over_, 1, 0, 0),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1575] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
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
