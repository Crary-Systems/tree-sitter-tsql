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
#define STATE_COUNT 690
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 184
#define ALIAS_COUNT 0
#define TOKEN_COUNT 101
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 25
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 43

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
  sym_dollar_partition_ = 41,
  sym_right_ = 42,
  sym_left_ = 43,
  sym_binary_checksum_ = 44,
  sym_checksum_ = 45,
  aux_sym_over__token1 = 46,
  aux_sym_within_group__token1 = 47,
  aux_sym_within_group__token2 = 48,
  sym_percentile_cont_ = 49,
  sym_percentile_disc_ = 50,
  sym_cume_dist_ = 51,
  sym_percent_rank_ = 52,
  aux_sym_ignore_nulls__token1 = 53,
  aux_sym_ignore_nulls__token2 = 54,
  aux_sym_respect_nulls__token1 = 55,
  sym_lag_ = 56,
  sym_lead_ = 57,
  sym_first_value_ = 58,
  sym_last_value_ = 59,
  sym_checksum_agg_ = 60,
  sym_count_ = 61,
  sym_count_big_ = 62,
  sym_avg_ = 63,
  sym_max_ = 64,
  sym_min_ = 65,
  sym_sum_ = 66,
  sym_stdev_ = 67,
  sym_stdevp_ = 68,
  sym_var_ = 69,
  sym_varp_ = 70,
  sym_all_ = 71,
  sym_distinct_ = 72,
  sym_ntile_ = 73,
  sym_rank_ = 74,
  sym_dense_rank_ = 75,
  sym_row_number_ = 76,
  aux_sym_partition_by_clause_token1 = 77,
  aux_sym_partition_by_clause_token2 = 78,
  aux_sym_order_by_clause_token1 = 79,
  aux_sym_collation__token1 = 80,
  sym_asc_ = 81,
  sym_desc_ = 82,
  aux_sym_window_frame_extent_token1 = 83,
  aux_sym_window_frame_extent_token2 = 84,
  aux_sym_window_frame_following_token1 = 85,
  aux_sym_window_frame_following_token2 = 86,
  aux_sym_window_frame_preceding_token1 = 87,
  aux_sym_window_frame_preceding_token2 = 88,
  aux_sym_window_frame_preceding_token3 = 89,
  aux_sym_row_or_range_clause_token1 = 90,
  aux_sym_row_or_range_clause_token2 = 91,
  sym_binary = 92,
  anon_sym_DOLLAR = 93,
  anon_sym_DASH = 94,
  anon_sym_PLUS = 95,
  aux_sym_real__token1 = 96,
  aux_sym_real__token2 = 97,
  aux_sym_id__token1 = 98,
  aux_sym_id__token2 = 99,
  anon_sym_TODO = 100,
  sym_tsql_file = 101,
  sym_batch = 102,
  sym_go_statement = 103,
  sym_execute_body_batch = 104,
  sym_func_proc_name_server_database_schema = 105,
  sym_func_proc_name_database_schema = 106,
  sym_func_proc_name_schema = 107,
  sym_execute_statement_arg = 108,
  sym_execute_statement_arg_named = 109,
  sym_execute_statement_arg_unnamed = 110,
  sym_execute_parameter = 111,
  sym_LOCAL_ID_ = 112,
  sym_constant = 113,
  sym_sql_clauses = 114,
  sym_another_statement = 115,
  sym_execute_statement = 116,
  sym_execute_body = 117,
  sym_execute_option = 118,
  sym_RESULT_SETS = 119,
  sym_AS = 120,
  sym_execute_var_string = 121,
  sym_dml_clause = 122,
  sym_select_statement_standalone = 123,
  sym_select_statement = 124,
  sym_query_expression = 125,
  sym_query_specification = 126,
  sym_select_list = 127,
  sym_select_list_elem = 128,
  sym_assignment_operator = 129,
  sym_udt_elem = 130,
  sym_udt_method_arguments = 131,
  sym_expression_elem = 132,
  sym_as_column_alias = 133,
  sym_as = 134,
  sym_column_alias = 135,
  sym_table_sources = 136,
  sym_table_source = 137,
  sym_table_source_item = 138,
  sym_full_table_name = 139,
  sym_full_column_name = 140,
  sym_expression = 141,
  sym_function_call = 142,
  sym_partition_function = 143,
  sym_scalar_function_name = 144,
  sym_analytic_windowed_function = 145,
  sym_over_ = 146,
  sym_within_group_ = 147,
  sym_lag_lead_args = 148,
  sym_ignore_nulls_ = 149,
  sym_respect_nulls_ = 150,
  sym_aggregate_windowed_function = 151,
  sym_all_distinct_expression = 152,
  sym_ranking_windowed_function = 153,
  sym_over_clause = 154,
  sym_partition_by_clause = 155,
  sym_expression_list_ = 156,
  sym_order_by_clause = 157,
  sym_order_by_expression = 158,
  sym_collation_ = 159,
  sym_window_frame_extent = 160,
  sym_window_frame_bound = 161,
  sym_window_frame_following = 162,
  sym_window_frame_preceding = 163,
  sym_row_or_range_clause = 164,
  sym_primitive_expression = 165,
  sym_primitive_constant = 166,
  sym_money_ = 167,
  sym_real_ = 168,
  sym_float_ = 169,
  sym_decimal_ = 170,
  sym_id_ = 171,
  sym_keyword = 172,
  sym_integer = 173,
  aux_sym_tsql_file_repeat1 = 174,
  aux_sym_tsql_file_repeat2 = 175,
  aux_sym_batch_repeat1 = 176,
  aux_sym_execute_body_batch_repeat1 = 177,
  aux_sym_execute_statement_arg_repeat1 = 178,
  aux_sym_execute_body_repeat1 = 179,
  aux_sym_execute_body_repeat2 = 180,
  aux_sym_select_list_repeat1 = 181,
  aux_sym_expression_list__repeat1 = 182,
  aux_sym_order_by_clause_repeat1 = 183,
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
  field_leftAlias = 12,
  field_leftAssignment = 13,
  field_linkedServer = 14,
  field_name = 15,
  field_non_static_attr = 16,
  field_offset = 17,
  field_order_by = 18,
  field_procedure = 19,
  field_return_status = 20,
  field_schema = 21,
  field_server = 22,
  field_table = 23,
  field_udt_column_name = 24,
  field_value = 25,
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
  [30] = {.index = 47, .length = 4},
  [31] = {.index = 51, .length = 1},
  [32] = {.index = 52, .length = 3},
  [33] = {.index = 55, .length = 2},
  [34] = {.index = 57, .length = 2},
  [35] = {.index = 59, .length = 2},
  [36] = {.index = 61, .length = 2},
  [37] = {.index = 63, .length = 1},
  [38] = {.index = 64, .length = 1},
  [39] = {.index = 65, .length = 2},
  [40] = {.index = 67, .length = 2},
  [41] = {.index = 69, .length = 4},
  [42] = {.index = 73, .length = 1},
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
    {field_func_name, 2},
  [46] =
    {field_offset, 3},
  [47] =
    {field_database, 2},
    {field_procedure, 6},
    {field_schema, 4},
    {field_server, 0},
  [51] =
    {field_order_by, 0},
  [52] =
    {field_database, 0},
    {field_schema, 2},
    {field_table, 4},
  [55] =
    {field_default, 5},
    {field_offset, 3},
  [57] =
    {field_ascending, 1},
    {field_order_by, 0},
  [59] =
    {field_descending, 1},
    {field_order_by, 0},
  [61] =
    {field_database, 0},
    {field_func_name, 4},
  [63] =
    {field_linkedServer, 8},
  [64] =
    {field_collation_name, 1},
  [65] =
    {field_ascending, 2},
    {field_order_by, 0},
  [67] =
    {field_descending, 2},
    {field_order_by, 0},
  [69] =
    {field_database, 2},
    {field_schema, 4},
    {field_server, 0},
    {field_table, 6},
  [73] =
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
  [9] = 8,
  [10] = 7,
  [11] = 8,
  [12] = 7,
  [13] = 13,
  [14] = 13,
  [15] = 15,
  [16] = 13,
  [17] = 15,
  [18] = 15,
  [19] = 19,
  [20] = 20,
  [21] = 20,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 25,
  [27] = 24,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 34,
  [36] = 32,
  [37] = 34,
  [38] = 31,
  [39] = 28,
  [40] = 31,
  [41] = 28,
  [42] = 25,
  [43] = 43,
  [44] = 44,
  [45] = 32,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 52,
  [55] = 53,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 64,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 59,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 63,
  [77] = 77,
  [78] = 59,
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
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 63,
  [95] = 95,
  [96] = 63,
  [97] = 53,
  [98] = 59,
  [99] = 75,
  [100] = 91,
  [101] = 88,
  [102] = 102,
  [103] = 84,
  [104] = 87,
  [105] = 105,
  [106] = 74,
  [107] = 107,
  [108] = 102,
  [109] = 71,
  [110] = 110,
  [111] = 111,
  [112] = 87,
  [113] = 113,
  [114] = 114,
  [115] = 95,
  [116] = 116,
  [117] = 73,
  [118] = 93,
  [119] = 119,
  [120] = 79,
  [121] = 80,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 88,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 74,
  [134] = 134,
  [135] = 63,
  [136] = 89,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 75,
  [141] = 91,
  [142] = 83,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 85,
  [147] = 147,
  [148] = 84,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 77,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 59,
  [158] = 79,
  [159] = 159,
  [160] = 73,
  [161] = 161,
  [162] = 85,
  [163] = 77,
  [164] = 164,
  [165] = 83,
  [166] = 82,
  [167] = 71,
  [168] = 95,
  [169] = 89,
  [170] = 93,
  [171] = 80,
  [172] = 81,
  [173] = 173,
  [174] = 174,
  [175] = 105,
  [176] = 107,
  [177] = 177,
  [178] = 53,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 180,
  [188] = 179,
  [189] = 59,
  [190] = 190,
  [191] = 191,
  [192] = 181,
  [193] = 63,
  [194] = 184,
  [195] = 63,
  [196] = 123,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 129,
  [202] = 202,
  [203] = 138,
  [204] = 204,
  [205] = 130,
  [206] = 113,
  [207] = 53,
  [208] = 134,
  [209] = 119,
  [210] = 143,
  [211] = 144,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 116,
  [216] = 145,
  [217] = 156,
  [218] = 127,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 154,
  [223] = 173,
  [224] = 132,
  [225] = 151,
  [226] = 111,
  [227] = 227,
  [228] = 114,
  [229] = 229,
  [230] = 230,
  [231] = 59,
  [232] = 232,
  [233] = 122,
  [234] = 139,
  [235] = 131,
  [236] = 236,
  [237] = 237,
  [238] = 124,
  [239] = 239,
  [240] = 125,
  [241] = 128,
  [242] = 242,
  [243] = 243,
  [244] = 81,
  [245] = 82,
  [246] = 246,
  [247] = 247,
  [248] = 155,
  [249] = 249,
  [250] = 152,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 149,
  [255] = 110,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 105,
  [273] = 107,
  [274] = 114,
  [275] = 131,
  [276] = 151,
  [277] = 154,
  [278] = 278,
  [279] = 123,
  [280] = 124,
  [281] = 130,
  [282] = 282,
  [283] = 283,
  [284] = 113,
  [285] = 125,
  [286] = 286,
  [287] = 287,
  [288] = 128,
  [289] = 155,
  [290] = 290,
  [291] = 156,
  [292] = 149,
  [293] = 110,
  [294] = 111,
  [295] = 116,
  [296] = 144,
  [297] = 132,
  [298] = 143,
  [299] = 119,
  [300] = 129,
  [301] = 134,
  [302] = 139,
  [303] = 145,
  [304] = 59,
  [305] = 127,
  [306] = 306,
  [307] = 63,
  [308] = 152,
  [309] = 138,
  [310] = 122,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 315,
  [317] = 159,
  [318] = 315,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 328,
  [330] = 330,
  [331] = 331,
  [332] = 328,
  [333] = 333,
  [334] = 179,
  [335] = 180,
  [336] = 177,
  [337] = 337,
  [338] = 185,
  [339] = 339,
  [340] = 340,
  [341] = 186,
  [342] = 181,
  [343] = 184,
  [344] = 344,
  [345] = 345,
  [346] = 200,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 204,
  [356] = 213,
  [357] = 221,
  [358] = 349,
  [359] = 348,
  [360] = 350,
  [361] = 202,
  [362] = 236,
  [363] = 363,
  [364] = 364,
  [365] = 243,
  [366] = 366,
  [367] = 349,
  [368] = 368,
  [369] = 352,
  [370] = 353,
  [371] = 353,
  [372] = 350,
  [373] = 373,
  [374] = 348,
  [375] = 375,
  [376] = 376,
  [377] = 352,
  [378] = 368,
  [379] = 363,
  [380] = 376,
  [381] = 381,
  [382] = 199,
  [383] = 373,
  [384] = 384,
  [385] = 363,
  [386] = 376,
  [387] = 368,
  [388] = 373,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 401,
  [404] = 404,
  [405] = 405,
  [406] = 393,
  [407] = 407,
  [408] = 392,
  [409] = 400,
  [410] = 410,
  [411] = 389,
  [412] = 396,
  [413] = 395,
  [414] = 395,
  [415] = 396,
  [416] = 390,
  [417] = 417,
  [418] = 401,
  [419] = 389,
  [420] = 393,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 407,
  [425] = 392,
  [426] = 400,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 404,
  [432] = 432,
  [433] = 407,
  [434] = 404,
  [435] = 390,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 438,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 173,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 268,
  [451] = 451,
  [452] = 438,
  [453] = 453,
  [454] = 454,
  [455] = 440,
  [456] = 456,
  [457] = 457,
  [458] = 444,
  [459] = 459,
  [460] = 460,
  [461] = 460,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 440,
  [466] = 460,
  [467] = 261,
  [468] = 444,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 364,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 366,
  [481] = 481,
  [482] = 473,
  [483] = 479,
  [484] = 479,
  [485] = 485,
  [486] = 473,
  [487] = 375,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 492,
  [494] = 494,
  [495] = 494,
  [496] = 496,
  [497] = 497,
  [498] = 496,
  [499] = 496,
  [500] = 500,
  [501] = 490,
  [502] = 502,
  [503] = 502,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 506,
  [508] = 504,
  [509] = 509,
  [510] = 506,
  [511] = 511,
  [512] = 331,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 330,
  [518] = 492,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 520,
  [523] = 523,
  [524] = 521,
  [525] = 521,
  [526] = 519,
  [527] = 502,
  [528] = 519,
  [529] = 491,
  [530] = 494,
  [531] = 504,
  [532] = 491,
  [533] = 533,
  [534] = 490,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 541,
  [558] = 554,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 547,
  [567] = 551,
  [568] = 568,
  [569] = 569,
  [570] = 555,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 571,
  [578] = 552,
  [579] = 579,
  [580] = 580,
  [581] = 541,
  [582] = 582,
  [583] = 559,
  [584] = 560,
  [585] = 562,
  [586] = 563,
  [587] = 564,
  [588] = 575,
  [589] = 589,
  [590] = 590,
  [591] = 547,
  [592] = 592,
  [593] = 574,
  [594] = 555,
  [595] = 571,
  [596] = 596,
  [597] = 572,
  [598] = 573,
  [599] = 574,
  [600] = 575,
  [601] = 601,
  [602] = 576,
  [603] = 603,
  [604] = 604,
  [605] = 605,
  [606] = 604,
  [607] = 607,
  [608] = 537,
  [609] = 542,
  [610] = 610,
  [611] = 550,
  [612] = 612,
  [613] = 613,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 604,
  [620] = 620,
  [621] = 621,
  [622] = 622,
  [623] = 623,
  [624] = 542,
  [625] = 610,
  [626] = 550,
  [627] = 612,
  [628] = 628,
  [629] = 562,
  [630] = 559,
  [631] = 631,
  [632] = 617,
  [633] = 633,
  [634] = 622,
  [635] = 621,
  [636] = 620,
  [637] = 613,
  [638] = 638,
  [639] = 633,
  [640] = 640,
  [641] = 590,
  [642] = 556,
  [643] = 640,
  [644] = 633,
  [645] = 622,
  [646] = 621,
  [647] = 620,
  [648] = 613,
  [649] = 649,
  [650] = 650,
  [651] = 640,
  [652] = 590,
  [653] = 556,
  [654] = 560,
  [655] = 623,
  [656] = 616,
  [657] = 612,
  [658] = 658,
  [659] = 576,
  [660] = 568,
  [661] = 623,
  [662] = 616,
  [663] = 663,
  [664] = 563,
  [665] = 665,
  [666] = 568,
  [667] = 650,
  [668] = 543,
  [669] = 669,
  [670] = 617,
  [671] = 610,
  [672] = 650,
  [673] = 543,
  [674] = 669,
  [675] = 572,
  [676] = 564,
  [677] = 631,
  [678] = 552,
  [679] = 549,
  [680] = 631,
  [681] = 549,
  [682] = 682,
  [683] = 669,
  [684] = 658,
  [685] = 658,
  [686] = 573,
  [687] = 687,
  [688] = 638,
  [689] = 638,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(313);
      ADVANCE_MAP(
        '$', 455,
        '%', 10,
        '&', 11,
        '\'', 6,
        '(', 340,
        ')', 341,
        '*', 370,
        '+', 459,
        ',', 316,
        '-', 457,
        '.', 319,
        '/', 15,
        '0', 332,
        ':', 9,
        ';', 317,
        '=', 321,
        '@', 297,
        'N', 5,
        'T', 19,
        '[', 296,
        '^', 16,
        'n', 203,
        '|', 17,
        'A', 153,
        'a', 153,
        'B', 74,
        'b', 74,
        'C', 124,
        'c', 124,
        'D', 75,
        'd', 75,
        'E', 462,
        'e', 462,
        'F', 129,
        'f', 129,
        'G', 205,
        'g', 205,
        'I', 120,
        'i', 120,
        'L', 29,
        'l', 29,
        'M', 30,
        'm', 30,
        'O', 227,
        'o', 227,
        'P', 32,
        'p', 32,
        'R', 36,
        'r', 36,
        'S', 76,
        's', 76,
        'U', 178,
        'u', 178,
        'V', 35,
        'v', 35,
        'W', 131,
        'w', 131,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '$', 455,
        '\'', 7,
        ')', 341,
        '*', 369,
        '.', 319,
        '0', 332,
        '=', 339,
        '@', 297,
        'N', 464,
        '[', 296,
        'n', 605,
        'A', 621,
        'a', 621,
        'B', 532,
        'b', 532,
        'C', 530,
        'c', 530,
        'D', 504,
        'd', 504,
        'F', 533,
        'f', 533,
        'G', 571,
        'g', 571,
        'L', 474,
        'l', 474,
        'M', 475,
        'm', 475,
        'P', 511,
        'p', 511,
        'R', 478,
        'r', 478,
        'S', 593,
        's', 593,
        'V', 479,
        'v', 479,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (lookahead == '#' ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '$', 455,
        '\'', 7,
        '*', 369,
        '.', 319,
        '0', 332,
        '@', 297,
        'N', 464,
        '[', 296,
        'n', 605,
        'A', 550,
        'a', 550,
        'B', 532,
        'b', 532,
        'C', 530,
        'c', 530,
        'D', 503,
        'd', 503,
        'F', 533,
        'f', 533,
        'G', 571,
        'g', 571,
        'L', 474,
        'l', 474,
        'M', 475,
        'm', 475,
        'P', 511,
        'p', 511,
        'R', 478,
        'r', 478,
        'S', 593,
        's', 593,
        'V', 479,
        'v', 479,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (lookahead == '#' ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(218);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == '[') ADVANCE(296);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(571);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\'', 6,
        '-', 331,
        '@', 297,
        'N', 463,
        '[', 296,
        'n', 611,
        'D', 508,
        'd', 508,
        'G', 571,
        'g', 571,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(187);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(130);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(330);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(355);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '\'', 7,
        '(', 340,
        '.', 318,
        '@', 297,
        'N', 465,
        '[', 296,
        'G', 571,
        'g', 571,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(371);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(365);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(366);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(363);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(361);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(362);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(364);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(367);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(368);
      END_STATE();
    case 18:
      if (lookahead == 'D') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'O') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 'O') ADVANCE(632);
      END_STATE();
    case 21:
      if (lookahead == ']') ADVANCE(631);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(56);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(287);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(68);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(55);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(229);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(236);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(288);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(113);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(294);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(231);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(231);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(228);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(284);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(65);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(251);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 36:
      ADVANCE_MAP(
        'A', 180,
        'a', 180,
        'E', 61,
        'e', 61,
        'I', 114,
        'i', 114,
        'O', 289,
        'o', 289,
      );
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(195);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(237);
      END_STATE();
    case 46:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(210);
      END_STATE();
    case 47:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(210);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 48:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(132);
      END_STATE();
    case 49:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(102);
      END_STATE();
    case 50:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(149);
      END_STATE();
    case 51:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(443);
      END_STATE();
    case 52:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(337);
      END_STATE();
    case 53:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(387);
      END_STATE();
    case 54:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(442);
      END_STATE();
    case 55:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 56:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(216);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 57:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 58:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(256);
      END_STATE();
    case 59:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(260);
      END_STATE();
    case 60:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(261);
      END_STATE();
    case 61:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(209);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(219);
      END_STATE();
    case 62:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(150);
      END_STATE();
    case 63:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 64:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(445);
      END_STATE();
    case 65:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(398);
      END_STATE();
    case 66:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(446);
      END_STATE();
    case 67:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(347);
      END_STATE();
    case 68:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(145);
      END_STATE();
    case 69:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 70:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 71:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 72:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(140);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(264);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(439);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(110);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(170);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(69);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(171);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(430);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 106:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 107:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 108:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 110:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(33);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(247);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(51);
      END_STATE();
    case 111:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(142);
      END_STATE();
    case 112:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(410);
      END_STATE();
    case 113:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(396);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(266);
      END_STATE();
    case 114:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(126);
      END_STATE();
    case 115:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(408);
      END_STATE();
    case 116:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(447);
      END_STATE();
    case 117:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(448);
      END_STATE();
    case 118:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(404);
      END_STATE();
    case 119:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(135);
      END_STATE();
    case 120:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(188);
      END_STATE();
    case 121:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(118);
      END_STATE();
    case 122:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(83);
      END_STATE();
    case 123:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(83);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(432);
      END_STATE();
    case 124:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(77);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(157);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(177);
      END_STATE();
    case 125:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(342);
      END_STATE();
    case 126:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(253);
      END_STATE();
    case 127:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(137);
      END_STATE();
    case 128:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(109);
      END_STATE();
    case 129:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(235);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(159);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 130:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 131:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(265);
      END_STATE();
    case 132:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 133:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 134:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 135:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 136:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 137:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 138:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(268);
      END_STATE();
    case 139:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 140:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 141:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 142:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 143:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 144:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 145:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      END_STATE();
    case 146:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      END_STATE();
    case 147:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(434);
      END_STATE();
    case 148:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(391);
      END_STATE();
    case 149:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(243);
      END_STATE();
    case 150:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(246);
      END_STATE();
    case 151:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(426);
      END_STATE();
    case 152:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(328);
      END_STATE();
    case 153:
      ADVANCE_MAP(
        'L', 151,
        'l', 151,
        'N', 64,
        'n', 64,
        'S', 349,
        's', 349,
        'T', 353,
        't', 353,
        'V', 112,
        'v', 112,
      );
      END_STATE();
    case 154:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 155:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 156:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 157:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(154);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(194);
      END_STATE();
    case 158:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 159:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 160:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 161:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(282);
      END_STATE();
    case 162:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(240);
      END_STATE();
    case 163:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 164:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(255);
      END_STATE();
    case 165:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(258);
      END_STATE();
    case 166:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 167:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 168:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(283);
      END_STATE();
    case 169:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 170:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(93);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(239);
      END_STATE();
    case 171:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(416);
      END_STATE();
    case 172:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(357);
      END_STATE();
    case 173:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(380);
      END_STATE();
    case 174:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(377);
      END_STATE();
    case 175:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(220);
      END_STATE();
    case 176:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 177:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(79);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 178:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(47);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(99);
      END_STATE();
    case 179:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(414);
      END_STATE();
    case 180:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 181:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(351);
      END_STATE();
    case 182:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(383);
      END_STATE();
    case 183:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(444);
      END_STATE();
    case 184:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(438);
      END_STATE();
    case 185:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(372);
      END_STATE();
    case 186:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 187:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 188:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 189:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 190:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 191:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 192:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 193:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 194:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 195:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 196:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 197:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 198:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 199:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 200:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 201:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 202:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 203:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(187);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(130);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 204:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(314);
      END_STATE();
    case 205:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(314);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 206:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 207:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 208:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(293);
      END_STATE();
    case 209:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 210:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(280);
      END_STATE();
    case 211:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 212:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 213:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 214:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 215:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(156);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(230);
      END_STATE();
    case 216:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 217:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(384);
      END_STATE();
    case 218:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 219:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(106);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 220:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(143);
      END_STATE();
    case 221:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(422);
      END_STATE();
    case 222:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(381);
      END_STATE();
    case 223:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(352);
      END_STATE();
    case 224:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(295);
      END_STATE();
    case 225:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(440);
      END_STATE();
    case 226:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(436);
      END_STATE();
    case 227:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(71);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(250);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(97);
      END_STATE();
    case 228:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 229:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 230:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 231:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 232:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 233:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(211);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(233);
      END_STATE();
    case 234:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 235:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 236:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 237:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(274);
      END_STATE();
    case 238:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(452);
      END_STATE();
    case 239:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(345);
      END_STATE();
    case 240:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(394);
      END_STATE();
    case 241:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(51);
      END_STATE();
    case 242:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(272);
      END_STATE();
    case 243:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(278);
      END_STATE();
    case 244:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(53);
      END_STATE();
    case 245:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(54);
      END_STATE();
    case 246:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(279);
      END_STATE();
    case 247:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(91);
      END_STATE();
    case 248:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(262);
      END_STATE();
    case 249:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(275);
      END_STATE();
    case 250:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(323);
      END_STATE();
    case 251:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(375);
      END_STATE();
    case 252:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(406);
      END_STATE();
    case 253:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(373);
      END_STATE();
    case 254:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(322);
      END_STATE();
    case 255:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(344);
      END_STATE();
    case 256:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(359);
      END_STATE();
    case 257:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(449);
      END_STATE();
    case 258:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(326);
      END_STATE();
    case 259:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(27);
      END_STATE();
    case 260:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(395);
      END_STATE();
    case 261:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(428);
      END_STATE();
    case 262:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(389);
      END_STATE();
    case 263:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(385);
      END_STATE();
    case 264:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(292);
      END_STATE();
    case 265:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(125);
      END_STATE();
    case 266:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(23);
      END_STATE();
    case 267:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(127);
      END_STATE();
    case 268:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(134);
      END_STATE();
    case 269:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(85);
      END_STATE();
    case 270:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      END_STATE();
    case 271:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      END_STATE();
    case 272:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(136);
      END_STATE();
    case 273:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(144);
      END_STATE();
    case 274:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 275:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(28);
      END_STATE();
    case 276:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(217);
      END_STATE();
    case 277:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 278:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 279:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(174);
      END_STATE();
    case 280:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(201);
      END_STATE();
    case 281:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(254);
      END_STATE();
    case 282:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 283:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 284:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(165);
      END_STATE();
    case 285:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 286:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(418);
      END_STATE();
    case 287:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(38);
      END_STATE();
    case 288:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(44);
      END_STATE();
    case 289:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(451);
      END_STATE();
    case 290:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(450);
      END_STATE();
    case 291:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(238);
      END_STATE();
    case 292:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(104);
      END_STATE();
    case 293:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(139);
      END_STATE();
    case 294:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(412);
      END_STATE();
    case 295:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(25);
      END_STATE();
    case 296:
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 297:
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 298:
      if (eof) ADVANCE(313);
      ADVANCE_MAP(
        '%', 10,
        '&', 11,
        '\'', 7,
        '(', 340,
        ')', 341,
        '*', 12,
        '+', 13,
        ',', 316,
        '-', 14,
        '.', 319,
        '/', 15,
        ';', 317,
        '=', 321,
        'N', 465,
        '[', 296,
        '^', 16,
        '|', 17,
        'A', 584,
        'a', 584,
        'E', 628,
        'e', 628,
        'F', 579,
        'f', 579,
        'G', 571,
        'g', 571,
        'S', 500,
        's', 500,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(298);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 299:
      if (eof) ADVANCE(313);
      ADVANCE_MAP(
        '\'', 6,
        '(', 340,
        ')', 341,
        '+', 356,
        ',', 316,
        '-', 331,
        '.', 318,
        ';', 317,
        '=', 339,
        '@', 297,
        'N', 463,
        '[', 296,
        'n', 611,
        'D', 508,
        'd', 508,
        'E', 628,
        'e', 628,
        'G', 571,
        'g', 571,
        'S', 500,
        's', 500,
        'W', 537,
        'w', 537,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(299);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 300:
      if (eof) ADVANCE(313);
      ADVANCE_MAP(
        '\'', 6,
        '(', 340,
        ')', 341,
        ',', 316,
        '-', 331,
        '.', 318,
        ';', 317,
        '@', 297,
        'N', 463,
        '[', 296,
        'n', 611,
        'D', 508,
        'd', 508,
        'E', 628,
        'e', 628,
        'G', 571,
        'g', 571,
        'S', 500,
        's', 500,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(300);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 301:
      if (eof) ADVANCE(313);
      ADVANCE_MAP(
        '\'', 7,
        '(', 340,
        '+', 458,
        ',', 316,
        '-', 456,
        '.', 319,
        ':', 9,
        ';', 317,
        '=', 339,
        'N', 465,
        '[', 296,
        'A', 584,
        'a', 584,
        'E', 628,
        'e', 628,
        'F', 579,
        'f', 579,
        'G', 571,
        'g', 571,
        'S', 500,
        's', 500,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(301);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 302:
      if (eof) ADVANCE(313);
      ADVANCE_MAP(
        '\'', 7,
        ')', 341,
        ',', 316,
        '.', 318,
        ';', 317,
        'N', 465,
        '[', 296,
        'A', 584,
        'a', 584,
        'E', 628,
        'e', 628,
        'F', 579,
        'f', 579,
        'G', 571,
        'g', 571,
        'O', 624,
        'o', 624,
        'S', 500,
        's', 500,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(302);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 303:
      if (eof) ADVANCE(313);
      ADVANCE_MAP(
        '\'', 7,
        ')', 341,
        ',', 316,
        '.', 318,
        ';', 317,
        'N', 465,
        '[', 296,
        'A', 584,
        'a', 584,
        'E', 461,
        'e', 461,
        'F', 579,
        'f', 579,
        'G', 571,
        'g', 571,
        'S', 500,
        's', 500,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(303);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 304:
      if (eof) ADVANCE(313);
      ADVANCE_MAP(
        '(', 340,
        ')', 341,
        ',', 316,
        '.', 318,
        ';', 317,
        '=', 321,
        'A', 245,
        'a', 245,
        'B', 73,
        'b', 73,
        'C', 215,
        'c', 215,
        'D', 96,
        'd', 96,
        'E', 462,
        'e', 462,
        'G', 204,
        'g', 204,
        'N', 285,
        'n', 285,
        'O', 227,
        'o', 227,
        'P', 31,
        'p', 31,
        'R', 43,
        'r', 43,
        'S', 100,
        's', 100,
        'U', 190,
        'u', 190,
        'W', 141,
        'w', 141,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(304);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 305:
      if (eof) ADVANCE(313);
      ADVANCE_MAP(
        '(', 340,
        ',', 316,
        '.', 318,
        ';', 317,
        '[', 296,
        'E', 628,
        'e', 628,
        'F', 579,
        'f', 579,
        'G', 571,
        'g', 571,
        'S', 500,
        's', 500,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(305);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 306:
      if (eof) ADVANCE(313);
      ADVANCE_MAP(
        '+', 458,
        ',', 316,
        '-', 456,
        '.', 318,
        ';', 317,
        '=', 321,
        '[', 296,
        'E', 628,
        'e', 628,
        'G', 571,
        'g', 571,
        'S', 500,
        's', 500,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(306);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 307:
      if (eof) ADVANCE(313);
      ADVANCE_MAP(
        ',', 316,
        '.', 318,
        ';', 317,
        '=', 321,
        '[', 296,
        'E', 628,
        'e', 628,
        'G', 571,
        'g', 571,
        'O', 618,
        'o', 618,
        'S', 500,
        's', 500,
        'W', 537,
        'w', 537,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(307);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 308:
      if (eof) ADVANCE(313);
      ADVANCE_MAP(
        ',', 316,
        '.', 318,
        ';', 317,
        '[', 296,
        'E', 628,
        'e', 628,
        'F', 579,
        'f', 579,
        'G', 571,
        'g', 571,
        'O', 624,
        'o', 624,
        'S', 500,
        's', 500,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(308);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 309:
      if (eof) ADVANCE(313);
      ADVANCE_MAP(
        ',', 316,
        '.', 318,
        ';', 317,
        '[', 296,
        'E', 628,
        'e', 628,
        'G', 571,
        'g', 571,
        'S', 500,
        's', 500,
        'W', 537,
        'w', 537,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(309);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 310:
      if (eof) ADVANCE(313);
      ADVANCE_MAP(
        ',', 316,
        '.', 318,
        ';', 317,
        '[', 296,
        'E', 461,
        'e', 461,
        'F', 579,
        'f', 579,
        'G', 571,
        'g', 571,
        'S', 500,
        's', 500,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(310);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 311:
      if (eof) ADVANCE(313);
      ADVANCE_MAP(
        '.', 318,
        ';', 317,
        '[', 296,
        'A', 583,
        'a', 583,
        'E', 628,
        'e', 628,
        'G', 571,
        'g', 571,
        'S', 500,
        's', 500,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(311);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 312:
      if (eof) ADVANCE(313);
      ADVANCE_MAP(
        '.', 318,
        ';', 317,
        '[', 296,
        'A', 604,
        'a', 604,
        'E', 628,
        'e', 628,
        'G', 571,
        'g', 571,
        'S', 500,
        's', 500,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(312);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_go_statement_token1);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_go_statement_token1);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_func_proc_name_server_database_schema_token1);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_func_proc_name_server_database_schema_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(460);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_execute_statement_arg_named_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_OUTPUT);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_OUTPUT);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(281);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_OUTPUT);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(619);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_OUTPUT);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_default);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_default);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_null_);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_null_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '\'') ADVANCE(6);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_constant_token3);
      if (lookahead == '.') ADVANCE(460);
      if (lookahead == 'x') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_constant_token3);
      if (lookahead == '.') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_constant_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_execute);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_execute);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(608);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_execute);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(270);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_execute);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_execute_body_token1);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_WITH);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_WITH);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_RESULT_SETS_token1);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_RESULT_SETS_token2);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_NONE);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_UNDEFINED);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_RECOMPILE);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_AS_token1);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_AS_token1);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_LOGIN);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_USER);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_AT_KEYWORD);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_AT_KEYWORD);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_string_lit);
      if (lookahead == '\'') ADVANCE(7);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_PLUS);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_query_specification_token1);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_query_specification_token1);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_select);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_select);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_asterisk);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_asterisk);
      if (lookahead == '=') ADVANCE(363);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_dollar_partition_);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_right_);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_right_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_left_);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_left_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_binary_checksum_);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_binary_checksum_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_checksum_);
      if (lookahead == '_') ADVANCE(480);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_checksum_);
      if (lookahead == '_') ADVANCE(37);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_over__token1);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_over__token1);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_within_group__token1);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_within_group__token2);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_percentile_cont_);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_percentile_cont_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_percentile_disc_);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_percentile_disc_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_cume_dist_);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_cume_dist_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_percent_rank_);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_percent_rank_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_ignore_nulls__token1);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_ignore_nulls__token2);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_respect_nulls__token1);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_lag_);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_lag_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_lead_);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_lead_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_first_value_);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_first_value_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_last_value_);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_last_value_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_checksum_agg_);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_checksum_agg_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_count_);
      if (lookahead == '_') ADVANCE(48);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_count_);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_count_big_);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_count_big_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_avg_);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_avg_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_max_);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_max_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_min_);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_min_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_sum_);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_sum_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_stdev_);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(420);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_stdev_);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(421);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_stdevp_);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_stdevp_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_var_);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(424);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_var_);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(425);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_varp_);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_varp_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_all_);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_all_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_distinct_);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_distinct_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_ntile_);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_ntile_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_rank_);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_rank_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_dense_rank_);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_dense_rank_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_row_number_);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_row_number_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_partition_by_clause_token1);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_partition_by_clause_token2);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_collation__token1);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_asc_);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_desc_);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_window_frame_extent_token1);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_window_frame_extent_token2);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_window_frame_following_token1);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_window_frame_following_token2);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_window_frame_preceding_token1);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_window_frame_preceding_token2);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_window_frame_preceding_token3);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_window_frame_preceding_token3);
      if (lookahead == '_') ADVANCE(191);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(452);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_row_or_range_clause_token1);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_row_or_range_clause_token2);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_binary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(454);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(362);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(361);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_real__token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(460);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_real__token2);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(501);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_real__token2);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(90);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(548);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(538);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(548);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(490);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(623);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(498);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(493);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(563);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(581);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(582);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(553);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(625);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(523);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(477);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(627);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(561);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(613);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(497);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(594);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(562);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(524);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(626);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(574);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(527);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(575);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(549);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(564);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(565);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(554);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(534);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(515);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(336);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(388);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(573);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(535);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(592);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(543);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(531);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(518);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(601);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(544);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(399);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(539);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(510);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(547);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(488);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(338);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(520);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(588);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(520);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(431);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(403);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(401);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(521);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(491);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(622);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(580);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(468);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(492);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(471);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(576);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(466);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(577);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(567);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(496);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(476);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(587);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(476);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(411);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(397);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(607);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(529);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(409);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(405);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(526);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(343);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(596);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(513);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(614);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(560);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(519);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(569);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(578);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(525);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(585);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(570);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(606);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(552);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(586);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(433);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(435);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(392);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(589);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(590);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(329);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(427);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(509);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(545);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(617);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(546);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(522);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(597);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(505);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(516);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(620);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(417);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(379);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(378);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(358);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(487);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(512);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(415);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(540);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(612);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(541);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(542);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(595);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(598);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(600);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(481);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(495);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(315);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(558);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(568);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(423);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(629);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(437);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(382);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(591);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(572);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(494);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(483);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(484);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(350);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(354);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(350);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(489);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(599);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(514);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(609);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(615);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(616);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(610);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(360);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(499);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(555);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(376);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(407);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(374);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(327);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(472);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(390);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(386);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(429);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(324);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(325);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(354);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(538);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(548);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(528);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(467);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(502);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(536);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(473);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(548);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(559);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(551);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(566);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(556);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(557);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(506);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(602);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(603);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(507);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(522);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(419);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(482);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(517);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(485);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(470);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(413);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(501);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(469);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_id__token2);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 306},
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
  [47] = {.lex_state = 306},
  [48] = {.lex_state = 306},
  [49] = {.lex_state = 299},
  [50] = {.lex_state = 299},
  [51] = {.lex_state = 298},
  [52] = {.lex_state = 300},
  [53] = {.lex_state = 298},
  [54] = {.lex_state = 300},
  [55] = {.lex_state = 299},
  [56] = {.lex_state = 298},
  [57] = {.lex_state = 306},
  [58] = {.lex_state = 299},
  [59] = {.lex_state = 299},
  [60] = {.lex_state = 299},
  [61] = {.lex_state = 306},
  [62] = {.lex_state = 298},
  [63] = {.lex_state = 300},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 299},
  [67] = {.lex_state = 298},
  [68] = {.lex_state = 299},
  [69] = {.lex_state = 306},
  [70] = {.lex_state = 301},
  [71] = {.lex_state = 299},
  [72] = {.lex_state = 304},
  [73] = {.lex_state = 299},
  [74] = {.lex_state = 299},
  [75] = {.lex_state = 299},
  [76] = {.lex_state = 301},
  [77] = {.lex_state = 299},
  [78] = {.lex_state = 301},
  [79] = {.lex_state = 299},
  [80] = {.lex_state = 299},
  [81] = {.lex_state = 302},
  [82] = {.lex_state = 302},
  [83] = {.lex_state = 299},
  [84] = {.lex_state = 299},
  [85] = {.lex_state = 299},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 299},
  [88] = {.lex_state = 299},
  [89] = {.lex_state = 299},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 299},
  [92] = {.lex_state = 300},
  [93] = {.lex_state = 299},
  [94] = {.lex_state = 299},
  [95] = {.lex_state = 299},
  [96] = {.lex_state = 304},
  [97] = {.lex_state = 304},
  [98] = {.lex_state = 300},
  [99] = {.lex_state = 300},
  [100] = {.lex_state = 300},
  [101] = {.lex_state = 300},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 300},
  [104] = {.lex_state = 300},
  [105] = {.lex_state = 303},
  [106] = {.lex_state = 300},
  [107] = {.lex_state = 303},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 300},
  [110] = {.lex_state = 298},
  [111] = {.lex_state = 298},
  [112] = {.lex_state = 300},
  [113] = {.lex_state = 298},
  [114] = {.lex_state = 298},
  [115] = {.lex_state = 300},
  [116] = {.lex_state = 298},
  [117] = {.lex_state = 300},
  [118] = {.lex_state = 300},
  [119] = {.lex_state = 298},
  [120] = {.lex_state = 300},
  [121] = {.lex_state = 300},
  [122] = {.lex_state = 298},
  [123] = {.lex_state = 298},
  [124] = {.lex_state = 298},
  [125] = {.lex_state = 298},
  [126] = {.lex_state = 300},
  [127] = {.lex_state = 298},
  [128] = {.lex_state = 298},
  [129] = {.lex_state = 298},
  [130] = {.lex_state = 298},
  [131] = {.lex_state = 298},
  [132] = {.lex_state = 298},
  [133] = {.lex_state = 300},
  [134] = {.lex_state = 298},
  [135] = {.lex_state = 300},
  [136] = {.lex_state = 300},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 298},
  [139] = {.lex_state = 298},
  [140] = {.lex_state = 300},
  [141] = {.lex_state = 300},
  [142] = {.lex_state = 300},
  [143] = {.lex_state = 298},
  [144] = {.lex_state = 298},
  [145] = {.lex_state = 298},
  [146] = {.lex_state = 300},
  [147] = {.lex_state = 301},
  [148] = {.lex_state = 300},
  [149] = {.lex_state = 298},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 298},
  [152] = {.lex_state = 298},
  [153] = {.lex_state = 300},
  [154] = {.lex_state = 298},
  [155] = {.lex_state = 298},
  [156] = {.lex_state = 298},
  [157] = {.lex_state = 300},
  [158] = {.lex_state = 300},
  [159] = {.lex_state = 307},
  [160] = {.lex_state = 300},
  [161] = {.lex_state = 298},
  [162] = {.lex_state = 300},
  [163] = {.lex_state = 300},
  [164] = {.lex_state = 298},
  [165] = {.lex_state = 300},
  [166] = {.lex_state = 308},
  [167] = {.lex_state = 300},
  [168] = {.lex_state = 300},
  [169] = {.lex_state = 300},
  [170] = {.lex_state = 300},
  [171] = {.lex_state = 300},
  [172] = {.lex_state = 308},
  [173] = {.lex_state = 305},
  [174] = {.lex_state = 305},
  [175] = {.lex_state = 310},
  [176] = {.lex_state = 310},
  [177] = {.lex_state = 307},
  [178] = {.lex_state = 307},
  [179] = {.lex_state = 309},
  [180] = {.lex_state = 309},
  [181] = {.lex_state = 309},
  [182] = {.lex_state = 305},
  [183] = {.lex_state = 311},
  [184] = {.lex_state = 309},
  [185] = {.lex_state = 309},
  [186] = {.lex_state = 309},
  [187] = {.lex_state = 309},
  [188] = {.lex_state = 309},
  [189] = {.lex_state = 305},
  [190] = {.lex_state = 311},
  [191] = {.lex_state = 305},
  [192] = {.lex_state = 309},
  [193] = {.lex_state = 305},
  [194] = {.lex_state = 309},
  [195] = {.lex_state = 309},
  [196] = {.lex_state = 305},
  [197] = {.lex_state = 305},
  [198] = {.lex_state = 305},
  [199] = {.lex_state = 309},
  [200] = {.lex_state = 309},
  [201] = {.lex_state = 305},
  [202] = {.lex_state = 309},
  [203] = {.lex_state = 305},
  [204] = {.lex_state = 309},
  [205] = {.lex_state = 305},
  [206] = {.lex_state = 305},
  [207] = {.lex_state = 305},
  [208] = {.lex_state = 305},
  [209] = {.lex_state = 305},
  [210] = {.lex_state = 305},
  [211] = {.lex_state = 305},
  [212] = {.lex_state = 306},
  [213] = {.lex_state = 309},
  [214] = {.lex_state = 306},
  [215] = {.lex_state = 305},
  [216] = {.lex_state = 305},
  [217] = {.lex_state = 305},
  [218] = {.lex_state = 305},
  [219] = {.lex_state = 305},
  [220] = {.lex_state = 305},
  [221] = {.lex_state = 309},
  [222] = {.lex_state = 305},
  [223] = {.lex_state = 304},
  [224] = {.lex_state = 305},
  [225] = {.lex_state = 305},
  [226] = {.lex_state = 305},
  [227] = {.lex_state = 305},
  [228] = {.lex_state = 305},
  [229] = {.lex_state = 306},
  [230] = {.lex_state = 306},
  [231] = {.lex_state = 309},
  [232] = {.lex_state = 306},
  [233] = {.lex_state = 305},
  [234] = {.lex_state = 305},
  [235] = {.lex_state = 305},
  [236] = {.lex_state = 309},
  [237] = {.lex_state = 306},
  [238] = {.lex_state = 305},
  [239] = {.lex_state = 306},
  [240] = {.lex_state = 305},
  [241] = {.lex_state = 305},
  [242] = {.lex_state = 306},
  [243] = {.lex_state = 309},
  [244] = {.lex_state = 304},
  [245] = {.lex_state = 304},
  [246] = {.lex_state = 305},
  [247] = {.lex_state = 305},
  [248] = {.lex_state = 305},
  [249] = {.lex_state = 306},
  [250] = {.lex_state = 305},
  [251] = {.lex_state = 305},
  [252] = {.lex_state = 305},
  [253] = {.lex_state = 305},
  [254] = {.lex_state = 305},
  [255] = {.lex_state = 305},
  [256] = {.lex_state = 306},
  [257] = {.lex_state = 306},
  [258] = {.lex_state = 3},
  [259] = {.lex_state = 309},
  [260] = {.lex_state = 312},
  [261] = {.lex_state = 306},
  [262] = {.lex_state = 312},
  [263] = {.lex_state = 306},
  [264] = {.lex_state = 306},
  [265] = {.lex_state = 306},
  [266] = {.lex_state = 306},
  [267] = {.lex_state = 306},
  [268] = {.lex_state = 306},
  [269] = {.lex_state = 305},
  [270] = {.lex_state = 309},
  [271] = {.lex_state = 306},
  [272] = {.lex_state = 304},
  [273] = {.lex_state = 304},
  [274] = {.lex_state = 304},
  [275] = {.lex_state = 304},
  [276] = {.lex_state = 304},
  [277] = {.lex_state = 304},
  [278] = {.lex_state = 306},
  [279] = {.lex_state = 304},
  [280] = {.lex_state = 304},
  [281] = {.lex_state = 304},
  [282] = {.lex_state = 306},
  [283] = {.lex_state = 306},
  [284] = {.lex_state = 304},
  [285] = {.lex_state = 304},
  [286] = {.lex_state = 306},
  [287] = {.lex_state = 306},
  [288] = {.lex_state = 304},
  [289] = {.lex_state = 304},
  [290] = {.lex_state = 306},
  [291] = {.lex_state = 304},
  [292] = {.lex_state = 304},
  [293] = {.lex_state = 304},
  [294] = {.lex_state = 304},
  [295] = {.lex_state = 304},
  [296] = {.lex_state = 304},
  [297] = {.lex_state = 304},
  [298] = {.lex_state = 304},
  [299] = {.lex_state = 304},
  [300] = {.lex_state = 304},
  [301] = {.lex_state = 304},
  [302] = {.lex_state = 304},
  [303] = {.lex_state = 304},
  [304] = {.lex_state = 306},
  [305] = {.lex_state = 304},
  [306] = {.lex_state = 306},
  [307] = {.lex_state = 306},
  [308] = {.lex_state = 304},
  [309] = {.lex_state = 304},
  [310] = {.lex_state = 304},
  [311] = {.lex_state = 304},
  [312] = {.lex_state = 306},
  [313] = {.lex_state = 306},
  [314] = {.lex_state = 306},
  [315] = {.lex_state = 304},
  [316] = {.lex_state = 304},
  [317] = {.lex_state = 304},
  [318] = {.lex_state = 304},
  [319] = {.lex_state = 306},
  [320] = {.lex_state = 306},
  [321] = {.lex_state = 306},
  [322] = {.lex_state = 306},
  [323] = {.lex_state = 306},
  [324] = {.lex_state = 306},
  [325] = {.lex_state = 306},
  [326] = {.lex_state = 306},
  [327] = {.lex_state = 306},
  [328] = {.lex_state = 3},
  [329] = {.lex_state = 3},
  [330] = {.lex_state = 306},
  [331] = {.lex_state = 306},
  [332] = {.lex_state = 3},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 306},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 8},
  [340] = {.lex_state = 3},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 304},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 304},
  [348] = {.lex_state = 3},
  [349] = {.lex_state = 3},
  [350] = {.lex_state = 3},
  [351] = {.lex_state = 3},
  [352] = {.lex_state = 3},
  [353] = {.lex_state = 3},
  [354] = {.lex_state = 304},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 3},
  [359] = {.lex_state = 3},
  [360] = {.lex_state = 3},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 304},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 304},
  [367] = {.lex_state = 3},
  [368] = {.lex_state = 301},
  [369] = {.lex_state = 3},
  [370] = {.lex_state = 3},
  [371] = {.lex_state = 3},
  [372] = {.lex_state = 3},
  [373] = {.lex_state = 304},
  [374] = {.lex_state = 3},
  [375] = {.lex_state = 304},
  [376] = {.lex_state = 3},
  [377] = {.lex_state = 3},
  [378] = {.lex_state = 301},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 3},
  [381] = {.lex_state = 304},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 304},
  [384] = {.lex_state = 304},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 3},
  [387] = {.lex_state = 301},
  [388] = {.lex_state = 304},
  [389] = {.lex_state = 3},
  [390] = {.lex_state = 3},
  [391] = {.lex_state = 3},
  [392] = {.lex_state = 3},
  [393] = {.lex_state = 3},
  [394] = {.lex_state = 3},
  [395] = {.lex_state = 3},
  [396] = {.lex_state = 3},
  [397] = {.lex_state = 3},
  [398] = {.lex_state = 3},
  [399] = {.lex_state = 3},
  [400] = {.lex_state = 3},
  [401] = {.lex_state = 3},
  [402] = {.lex_state = 304},
  [403] = {.lex_state = 3},
  [404] = {.lex_state = 3},
  [405] = {.lex_state = 304},
  [406] = {.lex_state = 3},
  [407] = {.lex_state = 3},
  [408] = {.lex_state = 3},
  [409] = {.lex_state = 3},
  [410] = {.lex_state = 3},
  [411] = {.lex_state = 3},
  [412] = {.lex_state = 3},
  [413] = {.lex_state = 3},
  [414] = {.lex_state = 3},
  [415] = {.lex_state = 3},
  [416] = {.lex_state = 3},
  [417] = {.lex_state = 3},
  [418] = {.lex_state = 3},
  [419] = {.lex_state = 3},
  [420] = {.lex_state = 3},
  [421] = {.lex_state = 3},
  [422] = {.lex_state = 3},
  [423] = {.lex_state = 3},
  [424] = {.lex_state = 3},
  [425] = {.lex_state = 3},
  [426] = {.lex_state = 3},
  [427] = {.lex_state = 304},
  [428] = {.lex_state = 3},
  [429] = {.lex_state = 304},
  [430] = {.lex_state = 3},
  [431] = {.lex_state = 3},
  [432] = {.lex_state = 3},
  [433] = {.lex_state = 3},
  [434] = {.lex_state = 3},
  [435] = {.lex_state = 3},
  [436] = {.lex_state = 1},
  [437] = {.lex_state = 304},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 1},
  [440] = {.lex_state = 304},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 298},
  [445] = {.lex_state = 8},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 1},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 304},
  [451] = {.lex_state = 304},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 304},
  [454] = {.lex_state = 304},
  [455] = {.lex_state = 304},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 298},
  [459] = {.lex_state = 1},
  [460] = {.lex_state = 304},
  [461] = {.lex_state = 304},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 304},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 304},
  [466] = {.lex_state = 304},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 298},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 304},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 306},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 306},
  [484] = {.lex_state = 306},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 304},
  [493] = {.lex_state = 304},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
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
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 304},
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
  [537] = {.lex_state = 306},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 306},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 306},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 306},
  [559] = {.lex_state = 306},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 1},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 1},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 306},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 304},
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
  [605] = {.lex_state = 233},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 1},
  [608] = {.lex_state = 306},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 306},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 306},
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
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 304},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0},
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
    [sym_tsql_file] = STATE(687),
    [sym_batch] = STATE(48),
    [sym_go_statement] = STATE(264),
    [sym_execute_body_batch] = STATE(90),
    [sym_func_proc_name_server_database_schema] = STATE(52),
    [sym_func_proc_name_database_schema] = STATE(118),
    [sym_func_proc_name_schema] = STATE(109),
    [sym_sql_clauses] = STATE(57),
    [sym_another_statement] = STATE(282),
    [sym_execute_statement] = STATE(283),
    [sym_dml_clause] = STATE(282),
    [sym_select_statement_standalone] = STATE(286),
    [sym_select_statement] = STATE(306),
    [sym_query_expression] = STATE(312),
    [sym_query_specification] = STATE(324),
    [sym_id_] = STATE(104),
    [sym_keyword] = STATE(63),
    [aux_sym_tsql_file_repeat1] = STATE(48),
    [aux_sym_batch_repeat1] = STATE(57),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_go_statement_token1] = ACTIONS(5),
    [aux_sym_func_proc_name_server_database_schema_token1] = ACTIONS(7),
    [sym_execute] = ACTIONS(9),
    [sym_select] = ACTIONS(11),
    [aux_sym_id__token1] = ACTIONS(13),
    [aux_sym_id__token2] = ACTIONS(15),
  },
  [2] = {
    [sym_func_proc_name_database_schema] = STATE(649),
    [sym_func_proc_name_schema] = STATE(109),
    [sym_LOCAL_ID_] = STATE(51),
    [sym_select_list] = STATE(269),
    [sym_select_list_elem] = STATE(174),
    [sym_udt_elem] = STATE(219),
    [sym_expression_elem] = STATE(219),
    [sym_column_alias] = STATE(607),
    [sym_full_column_name] = STATE(130),
    [sym_expression] = STATE(67),
    [sym_function_call] = STATE(130),
    [sym_partition_function] = STATE(138),
    [sym_scalar_function_name] = STATE(606),
    [sym_analytic_windowed_function] = STATE(138),
    [sym_aggregate_windowed_function] = STATE(138),
    [sym_ranking_windowed_function] = STATE(138),
    [sym_primitive_expression] = STATE(130),
    [sym_primitive_constant] = STATE(127),
    [sym_money_] = STATE(113),
    [sym_real_] = STATE(113),
    [sym_float_] = STATE(113),
    [sym_decimal_] = STATE(113),
    [sym_id_] = STATE(70),
    [sym_keyword] = STATE(76),
    [aux_sym_go_statement_token1] = ACTIONS(17),
    [aux_sym_func_proc_name_server_database_schema_token1] = ACTIONS(19),
    [aux_sym_execute_statement_arg_named_token1] = ACTIONS(21),
    [sym_default] = ACTIONS(23),
    [sym_null_] = ACTIONS(23),
    [aux_sym_constant_token3] = ACTIONS(25),
    [sym_string_lit] = ACTIONS(27),
    [sym_asterisk] = ACTIONS(29),
    [sym_dollar_partition_] = ACTIONS(31),
    [sym_right_] = ACTIONS(33),
    [sym_left_] = ACTIONS(33),
    [sym_binary_checksum_] = ACTIONS(35),
    [sym_checksum_] = ACTIONS(35),
    [sym_percentile_cont_] = ACTIONS(37),
    [sym_percentile_disc_] = ACTIONS(37),
    [sym_cume_dist_] = ACTIONS(39),
    [sym_percent_rank_] = ACTIONS(39),
    [sym_lag_] = ACTIONS(41),
    [sym_lead_] = ACTIONS(41),
    [sym_first_value_] = ACTIONS(43),
    [sym_last_value_] = ACTIONS(43),
    [sym_checksum_agg_] = ACTIONS(45),
    [sym_count_] = ACTIONS(47),
    [sym_count_big_] = ACTIONS(47),
    [sym_avg_] = ACTIONS(49),
    [sym_max_] = ACTIONS(49),
    [sym_min_] = ACTIONS(49),
    [sym_sum_] = ACTIONS(49),
    [sym_stdev_] = ACTIONS(49),
    [sym_stdevp_] = ACTIONS(49),
    [sym_var_] = ACTIONS(49),
    [sym_varp_] = ACTIONS(49),
    [sym_ntile_] = ACTIONS(51),
    [sym_rank_] = ACTIONS(53),
    [sym_dense_rank_] = ACTIONS(53),
    [sym_row_number_] = ACTIONS(53),
    [sym_binary] = ACTIONS(55),
    [anon_sym_DOLLAR] = ACTIONS(57),
    [aux_sym_real__token1] = ACTIONS(59),
    [aux_sym_id__token1] = ACTIONS(61),
    [aux_sym_id__token2] = ACTIONS(63),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 38,
    ACTIONS(17), 1,
      aux_sym_go_statement_token1,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(21), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(27), 1,
      sym_string_lit,
    ACTIONS(29), 1,
      sym_asterisk,
    ACTIONS(31), 1,
      sym_dollar_partition_,
    ACTIONS(45), 1,
      sym_checksum_agg_,
    ACTIONS(51), 1,
      sym_ntile_,
    ACTIONS(55), 1,
      sym_binary,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      aux_sym_real__token1,
    ACTIONS(61), 1,
      aux_sym_id__token1,
    ACTIONS(63), 1,
      aux_sym_id__token2,
    STATE(51), 1,
      sym_LOCAL_ID_,
    STATE(67), 1,
      sym_expression,
    STATE(70), 1,
      sym_id_,
    STATE(76), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(127), 1,
      sym_primitive_constant,
    STATE(220), 1,
      sym_select_list_elem,
    STATE(606), 1,
      sym_scalar_function_name,
    STATE(607), 1,
      sym_column_alias,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(35), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(37), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(39), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(41), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(43), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(47), 2,
      sym_count_,
      sym_count_big_,
    STATE(219), 2,
      sym_udt_elem,
      sym_expression_elem,
    ACTIONS(53), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(130), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(113), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(138), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(49), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [141] = 35,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_dollar_partition_,
    ACTIONS(45), 1,
      sym_checksum_agg_,
    ACTIONS(51), 1,
      sym_ntile_,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      aux_sym_real__token1,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(69), 1,
      sym_asterisk,
    STATE(63), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(446), 1,
      sym_id_,
    STATE(606), 1,
      sym_scalar_function_name,
    STATE(628), 1,
      sym_expression,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    STATE(664), 1,
      sym_all_distinct_expression,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(35), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(37), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(39), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(41), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(43), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(47), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(55), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(71), 2,
      sym_all_,
      sym_distinct_,
    STATE(127), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(53), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(130), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(113), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(138), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(49), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [275] = 35,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_dollar_partition_,
    ACTIONS(45), 1,
      sym_checksum_agg_,
    ACTIONS(51), 1,
      sym_ntile_,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      aux_sym_real__token1,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(73), 1,
      sym_asterisk,
    STATE(63), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(446), 1,
      sym_id_,
    STATE(586), 1,
      sym_all_distinct_expression,
    STATE(606), 1,
      sym_scalar_function_name,
    STATE(628), 1,
      sym_expression,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(35), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(37), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(39), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(41), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(43), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(47), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(55), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(71), 2,
      sym_all_,
      sym_distinct_,
    STATE(127), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(53), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(130), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(113), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(138), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(49), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [409] = 35,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_dollar_partition_,
    ACTIONS(45), 1,
      sym_checksum_agg_,
    ACTIONS(51), 1,
      sym_ntile_,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      aux_sym_real__token1,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(75), 1,
      sym_asterisk,
    STATE(63), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(446), 1,
      sym_id_,
    STATE(563), 1,
      sym_all_distinct_expression,
    STATE(606), 1,
      sym_scalar_function_name,
    STATE(628), 1,
      sym_expression,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(35), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(37), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(39), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(41), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(43), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(47), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(55), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(71), 2,
      sym_all_,
      sym_distinct_,
    STATE(127), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(53), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(130), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(113), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(138), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(49), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [543] = 34,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_dollar_partition_,
    ACTIONS(45), 1,
      sym_checksum_agg_,
    ACTIONS(51), 1,
      sym_ntile_,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      aux_sym_real__token1,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(446), 1,
      sym_id_,
    STATE(587), 1,
      sym_all_distinct_expression,
    STATE(606), 1,
      sym_scalar_function_name,
    STATE(628), 1,
      sym_expression,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(35), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(37), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(39), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(41), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(43), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(47), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(55), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(71), 2,
      sym_all_,
      sym_distinct_,
    STATE(127), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(53), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(130), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(113), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(138), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(49), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [674] = 34,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_dollar_partition_,
    ACTIONS(45), 1,
      sym_checksum_agg_,
    ACTIONS(51), 1,
      sym_ntile_,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      aux_sym_real__token1,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(446), 1,
      sym_id_,
    STATE(606), 1,
      sym_scalar_function_name,
    STATE(628), 1,
      sym_expression,
    STATE(629), 1,
      sym_all_distinct_expression,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(35), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(37), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(39), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(41), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(43), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(47), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(55), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(71), 2,
      sym_all_,
      sym_distinct_,
    STATE(127), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(53), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(130), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(113), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(138), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(49), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [805] = 34,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_dollar_partition_,
    ACTIONS(45), 1,
      sym_checksum_agg_,
    ACTIONS(51), 1,
      sym_ntile_,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      aux_sym_real__token1,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(446), 1,
      sym_id_,
    STATE(562), 1,
      sym_all_distinct_expression,
    STATE(606), 1,
      sym_scalar_function_name,
    STATE(628), 1,
      sym_expression,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(35), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(37), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(39), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(41), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(43), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(47), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(55), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(71), 2,
      sym_all_,
      sym_distinct_,
    STATE(127), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(53), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(130), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(113), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(138), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(49), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [936] = 34,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_dollar_partition_,
    ACTIONS(45), 1,
      sym_checksum_agg_,
    ACTIONS(51), 1,
      sym_ntile_,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      aux_sym_real__token1,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(446), 1,
      sym_id_,
    STATE(606), 1,
      sym_scalar_function_name,
    STATE(628), 1,
      sym_expression,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    STATE(676), 1,
      sym_all_distinct_expression,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(35), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(37), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(39), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(41), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(43), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(47), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(55), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(71), 2,
      sym_all_,
      sym_distinct_,
    STATE(127), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(53), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(130), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(113), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(138), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(49), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1067] = 34,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_dollar_partition_,
    ACTIONS(45), 1,
      sym_checksum_agg_,
    ACTIONS(51), 1,
      sym_ntile_,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      aux_sym_real__token1,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(446), 1,
      sym_id_,
    STATE(585), 1,
      sym_all_distinct_expression,
    STATE(606), 1,
      sym_scalar_function_name,
    STATE(628), 1,
      sym_expression,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(35), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(37), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(39), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(41), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(43), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(47), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(55), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(71), 2,
      sym_all_,
      sym_distinct_,
    STATE(127), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(53), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(130), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(113), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(138), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(49), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1198] = 34,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_dollar_partition_,
    ACTIONS(45), 1,
      sym_checksum_agg_,
    ACTIONS(51), 1,
      sym_ntile_,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      aux_sym_real__token1,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(446), 1,
      sym_id_,
    STATE(564), 1,
      sym_all_distinct_expression,
    STATE(606), 1,
      sym_scalar_function_name,
    STATE(628), 1,
      sym_expression,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(35), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(37), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(39), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(41), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(43), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(47), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(55), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(71), 2,
      sym_all_,
      sym_distinct_,
    STATE(127), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(53), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(130), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(113), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(138), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(49), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1329] = 34,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_dollar_partition_,
    ACTIONS(45), 1,
      sym_checksum_agg_,
    ACTIONS(51), 1,
      sym_ntile_,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      aux_sym_real__token1,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(77), 1,
      sym_asterisk,
    STATE(63), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(446), 1,
      sym_id_,
    STATE(487), 1,
      sym_expression,
    STATE(606), 1,
      sym_scalar_function_name,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    STATE(654), 1,
      sym_expression_list_,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(35), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(37), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(39), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(41), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(43), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(47), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(55), 2,
      sym_string_lit,
      sym_binary,
    STATE(127), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(53), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(130), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(113), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(138), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(49), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1459] = 34,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_dollar_partition_,
    ACTIONS(45), 1,
      sym_checksum_agg_,
    ACTIONS(51), 1,
      sym_ntile_,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      aux_sym_real__token1,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(79), 1,
      sym_asterisk,
    STATE(63), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(446), 1,
      sym_id_,
    STATE(487), 1,
      sym_expression,
    STATE(560), 1,
      sym_expression_list_,
    STATE(606), 1,
      sym_scalar_function_name,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(35), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(37), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(39), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(41), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(43), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(47), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(55), 2,
      sym_string_lit,
      sym_binary,
    STATE(127), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(53), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(130), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(113), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(138), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(49), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1589] = 34,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_dollar_partition_,
    ACTIONS(45), 1,
      sym_checksum_agg_,
    ACTIONS(51), 1,
      sym_ntile_,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      aux_sym_real__token1,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(446), 1,
      sym_id_,
    STATE(487), 1,
      sym_expression,
    STATE(584), 1,
      sym_expression_list_,
    STATE(606), 1,
      sym_scalar_function_name,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(35), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(37), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(39), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(41), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(43), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(47), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(55), 2,
      sym_string_lit,
      sym_binary,
    STATE(127), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(53), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(130), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(113), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(138), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(49), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1719] = 34,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_dollar_partition_,
    ACTIONS(45), 1,
      sym_checksum_agg_,
    ACTIONS(51), 1,
      sym_ntile_,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      aux_sym_real__token1,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(83), 1,
      sym_asterisk,
    STATE(63), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(446), 1,
      sym_id_,
    STATE(487), 1,
      sym_expression,
    STATE(584), 1,
      sym_expression_list_,
    STATE(606), 1,
      sym_scalar_function_name,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(35), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(37), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(39), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(41), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(43), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(47), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(55), 2,
      sym_string_lit,
      sym_binary,
    STATE(127), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(53), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(130), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(113), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(138), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(49), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1849] = 34,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_dollar_partition_,
    ACTIONS(45), 1,
      sym_checksum_agg_,
    ACTIONS(51), 1,
      sym_ntile_,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      aux_sym_real__token1,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(446), 1,
      sym_id_,
    STATE(487), 1,
      sym_expression,
    STATE(606), 1,
      sym_scalar_function_name,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    STATE(654), 1,
      sym_expression_list_,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(35), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(37), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(39), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(41), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(43), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(47), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(55), 2,
      sym_string_lit,
      sym_binary,
    STATE(127), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(53), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(130), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(113), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(138), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(49), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1979] = 34,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_dollar_partition_,
    ACTIONS(45), 1,
      sym_checksum_agg_,
    ACTIONS(51), 1,
      sym_ntile_,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      aux_sym_real__token1,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(446), 1,
      sym_id_,
    STATE(487), 1,
      sym_expression,
    STATE(560), 1,
      sym_expression_list_,
    STATE(606), 1,
      sym_scalar_function_name,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(35), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(37), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(39), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(41), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(43), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(47), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(55), 2,
      sym_string_lit,
      sym_binary,
    STATE(127), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(53), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(130), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(113), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(138), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(49), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2109] = 33,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(89), 1,
      aux_sym_go_statement_token1,
    ACTIONS(91), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(95), 1,
      aux_sym_constant_token3,
    ACTIONS(99), 1,
      sym_dollar_partition_,
    ACTIONS(111), 1,
      sym_checksum_agg_,
    ACTIONS(117), 1,
      sym_ntile_,
    ACTIONS(121), 1,
      anon_sym_DOLLAR,
    ACTIONS(123), 1,
      aux_sym_real__token1,
    ACTIONS(125), 1,
      aux_sym_id__token1,
    ACTIONS(127), 1,
      aux_sym_id__token2,
    STATE(96), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(223), 1,
      sym_id_,
    STATE(311), 1,
      sym_expression,
    STATE(429), 1,
      sym_order_by_expression,
    STATE(619), 1,
      sym_scalar_function_name,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(93), 2,
      sym_default,
      sym_null_,
    ACTIONS(97), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(101), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(103), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(105), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(107), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(109), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(113), 2,
      sym_count_,
      sym_count_big_,
    STATE(305), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(119), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(281), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(284), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(309), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(115), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2236] = 33,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(89), 1,
      aux_sym_go_statement_token1,
    ACTIONS(91), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(95), 1,
      aux_sym_constant_token3,
    ACTIONS(99), 1,
      sym_dollar_partition_,
    ACTIONS(111), 1,
      sym_checksum_agg_,
    ACTIONS(117), 1,
      sym_ntile_,
    ACTIONS(121), 1,
      anon_sym_DOLLAR,
    ACTIONS(123), 1,
      aux_sym_real__token1,
    ACTIONS(125), 1,
      aux_sym_id__token1,
    ACTIONS(127), 1,
      aux_sym_id__token2,
    STATE(96), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(223), 1,
      sym_id_,
    STATE(375), 1,
      sym_expression,
    STATE(437), 1,
      sym_expression_list_,
    STATE(619), 1,
      sym_scalar_function_name,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(93), 2,
      sym_default,
      sym_null_,
    ACTIONS(97), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(101), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(103), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(105), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(107), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(109), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(113), 2,
      sym_count_,
      sym_count_big_,
    STATE(305), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(119), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(281), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(284), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(309), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(115), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2363] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_dollar_partition_,
    ACTIONS(45), 1,
      sym_checksum_agg_,
    ACTIONS(51), 1,
      sym_ntile_,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      aux_sym_real__token1,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(437), 1,
      sym_expression_list_,
    STATE(446), 1,
      sym_id_,
    STATE(487), 1,
      sym_expression,
    STATE(606), 1,
      sym_scalar_function_name,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(35), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(37), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(39), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(41), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(43), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(47), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(55), 2,
      sym_string_lit,
      sym_binary,
    STATE(127), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(53), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(130), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(113), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(138), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(49), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2490] = 33,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(89), 1,
      aux_sym_go_statement_token1,
    ACTIONS(91), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(95), 1,
      aux_sym_constant_token3,
    ACTIONS(99), 1,
      sym_dollar_partition_,
    ACTIONS(111), 1,
      sym_checksum_agg_,
    ACTIONS(117), 1,
      sym_ntile_,
    ACTIONS(121), 1,
      anon_sym_DOLLAR,
    ACTIONS(123), 1,
      aux_sym_real__token1,
    ACTIONS(125), 1,
      aux_sym_id__token1,
    ACTIONS(127), 1,
      aux_sym_id__token2,
    STATE(96), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(223), 1,
      sym_id_,
    STATE(311), 1,
      sym_expression,
    STATE(470), 1,
      sym_order_by_expression,
    STATE(619), 1,
      sym_scalar_function_name,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(93), 2,
      sym_default,
      sym_null_,
    ACTIONS(97), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(101), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(103), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(105), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(107), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(109), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(113), 2,
      sym_count_,
      sym_count_big_,
    STATE(305), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(119), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(281), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(284), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(309), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(115), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2617] = 32,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_dollar_partition_,
    ACTIONS(45), 1,
      sym_checksum_agg_,
    ACTIONS(51), 1,
      sym_ntile_,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      aux_sym_real__token1,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(446), 1,
      sym_id_,
    STATE(606), 1,
      sym_scalar_function_name,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    STATE(663), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(35), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(37), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(39), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(41), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(43), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(47), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(55), 2,
      sym_string_lit,
      sym_binary,
    STATE(127), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(53), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(130), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(113), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(138), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(49), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2741] = 32,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(89), 1,
      aux_sym_go_statement_token1,
    ACTIONS(91), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(95), 1,
      aux_sym_constant_token3,
    ACTIONS(99), 1,
      sym_dollar_partition_,
    ACTIONS(111), 1,
      sym_checksum_agg_,
    ACTIONS(117), 1,
      sym_ntile_,
    ACTIONS(121), 1,
      anon_sym_DOLLAR,
    ACTIONS(123), 1,
      aux_sym_real__token1,
    ACTIONS(125), 1,
      aux_sym_id__token1,
    ACTIONS(127), 1,
      aux_sym_id__token2,
    STATE(96), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(223), 1,
      sym_id_,
    STATE(427), 1,
      sym_expression,
    STATE(619), 1,
      sym_scalar_function_name,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(93), 2,
      sym_default,
      sym_null_,
    ACTIONS(97), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(101), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(103), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(105), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(107), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(109), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(113), 2,
      sym_count_,
      sym_count_big_,
    STATE(305), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(119), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(281), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(284), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(309), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(115), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2865] = 32,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_dollar_partition_,
    ACTIONS(45), 1,
      sym_checksum_agg_,
    ACTIONS(51), 1,
      sym_ntile_,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      aux_sym_real__token1,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(446), 1,
      sym_id_,
    STATE(591), 1,
      sym_expression,
    STATE(606), 1,
      sym_scalar_function_name,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(35), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(37), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(39), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(41), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(43), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(47), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(55), 2,
      sym_string_lit,
      sym_binary,
    STATE(127), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(53), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(130), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(113), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(138), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(49), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2989] = 32,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_dollar_partition_,
    ACTIONS(45), 1,
      sym_checksum_agg_,
    ACTIONS(51), 1,
      sym_ntile_,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      aux_sym_real__token1,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(446), 1,
      sym_id_,
    STATE(547), 1,
      sym_expression,
    STATE(606), 1,
      sym_scalar_function_name,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(35), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(37), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(39), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(41), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(43), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(47), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(55), 2,
      sym_string_lit,
      sym_binary,
    STATE(127), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(53), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(130), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(113), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(138), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(49), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [3113] = 32,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_dollar_partition_,
    ACTIONS(45), 1,
      sym_checksum_agg_,
    ACTIONS(51), 1,
      sym_ntile_,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      aux_sym_real__token1,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(427), 1,
      sym_expression,
    STATE(446), 1,
      sym_id_,
    STATE(606), 1,
      sym_scalar_function_name,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(35), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(37), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(39), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(41), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(43), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(47), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(55), 2,
      sym_string_lit,
      sym_binary,
    STATE(127), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(53), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(130), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(113), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(138), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(49), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [3237] = 32,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_dollar_partition_,
    ACTIONS(45), 1,
      sym_checksum_agg_,
    ACTIONS(51), 1,
      sym_ntile_,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      aux_sym_real__token1,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(446), 1,
      sym_id_,
    STATE(606), 1,
      sym_scalar_function_name,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    STATE(685), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(35), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(37), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(39), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(41), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(43), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(47), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(55), 2,
      sym_string_lit,
      sym_binary,
    STATE(127), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(53), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(130), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(113), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(138), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(49), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [3361] = 32,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_dollar_partition_,
    ACTIONS(45), 1,
      sym_checksum_agg_,
    ACTIONS(51), 1,
      sym_ntile_,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      aux_sym_real__token1,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(446), 1,
      sym_id_,
    STATE(523), 1,
      sym_expression,
    STATE(606), 1,
      sym_scalar_function_name,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(35), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(37), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(39), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(41), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(43), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(47), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(55), 2,
      sym_string_lit,
      sym_binary,
    STATE(127), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(53), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(130), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(113), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(138), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(49), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [3485] = 32,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_dollar_partition_,
    ACTIONS(45), 1,
      sym_checksum_agg_,
    ACTIONS(51), 1,
      sym_ntile_,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      aux_sym_real__token1,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(446), 1,
      sym_id_,
    STATE(540), 1,
      sym_expression,
    STATE(606), 1,
      sym_scalar_function_name,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(35), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(37), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(39), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(41), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(43), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(47), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(55), 2,
      sym_string_lit,
      sym_binary,
    STATE(127), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(53), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(130), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(113), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(138), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(49), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [3609] = 32,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_dollar_partition_,
    ACTIONS(45), 1,
      sym_checksum_agg_,
    ACTIONS(51), 1,
      sym_ntile_,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      aux_sym_real__token1,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(446), 1,
      sym_id_,
    STATE(600), 1,
      sym_expression,
    STATE(606), 1,
      sym_scalar_function_name,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(35), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(37), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(39), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(41), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(43), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(47), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(55), 2,
      sym_string_lit,
      sym_binary,
    STATE(127), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(53), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(130), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(113), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(138), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(49), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [3733] = 32,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_dollar_partition_,
    ACTIONS(45), 1,
      sym_checksum_agg_,
    ACTIONS(51), 1,
      sym_ntile_,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      aux_sym_real__token1,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(446), 1,
      sym_id_,
    STATE(606), 1,
      sym_scalar_function_name,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    STATE(657), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(35), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(37), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(39), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(41), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(43), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(47), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(55), 2,
      sym_string_lit,
      sym_binary,
    STATE(127), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(53), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(130), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(113), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(138), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(49), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [3857] = 32,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(129), 1,
      aux_sym_go_statement_token1,
    ACTIONS(131), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(135), 1,
      aux_sym_constant_token3,
    ACTIONS(139), 1,
      sym_dollar_partition_,
    ACTIONS(151), 1,
      sym_checksum_agg_,
    ACTIONS(157), 1,
      sym_ntile_,
    ACTIONS(161), 1,
      anon_sym_DOLLAR,
    ACTIONS(163), 1,
      aux_sym_real__token1,
    ACTIONS(165), 1,
      aux_sym_id__token1,
    ACTIONS(167), 1,
      aux_sym_id__token2,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(173), 1,
      sym_id_,
    STATE(193), 1,
      sym_keyword,
    STATE(227), 1,
      sym_expression,
    STATE(604), 1,
      sym_scalar_function_name,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(133), 2,
      sym_default,
      sym_null_,
    ACTIONS(137), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(141), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(143), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(145), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(147), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(149), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(153), 2,
      sym_count_,
      sym_count_big_,
    STATE(218), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(159), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(205), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(203), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(206), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(155), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [3981] = 32,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_dollar_partition_,
    ACTIONS(45), 1,
      sym_checksum_agg_,
    ACTIONS(51), 1,
      sym_ntile_,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      aux_sym_real__token1,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(446), 1,
      sym_id_,
    STATE(606), 1,
      sym_scalar_function_name,
    STATE(611), 1,
      sym_expression,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(35), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(37), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(39), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(41), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(43), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(47), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(55), 2,
      sym_string_lit,
      sym_binary,
    STATE(127), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(53), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(130), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(113), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(138), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(49), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [4105] = 32,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_dollar_partition_,
    ACTIONS(45), 1,
      sym_checksum_agg_,
    ACTIONS(51), 1,
      sym_ntile_,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      aux_sym_real__token1,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(446), 1,
      sym_id_,
    STATE(550), 1,
      sym_expression,
    STATE(606), 1,
      sym_scalar_function_name,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(35), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(37), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(39), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(41), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(43), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(47), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(55), 2,
      sym_string_lit,
      sym_binary,
    STATE(127), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(53), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(130), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(113), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(138), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(49), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [4229] = 32,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_dollar_partition_,
    ACTIONS(45), 1,
      sym_checksum_agg_,
    ACTIONS(51), 1,
      sym_ntile_,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      aux_sym_real__token1,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(446), 1,
      sym_id_,
    STATE(606), 1,
      sym_scalar_function_name,
    STATE(612), 1,
      sym_expression,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(35), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(37), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(39), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(41), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(43), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(47), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(55), 2,
      sym_string_lit,
      sym_binary,
    STATE(127), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(53), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(130), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(113), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(138), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(49), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [4353] = 32,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_dollar_partition_,
    ACTIONS(45), 1,
      sym_checksum_agg_,
    ACTIONS(51), 1,
      sym_ntile_,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      aux_sym_real__token1,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(446), 1,
      sym_id_,
    STATE(606), 1,
      sym_scalar_function_name,
    STATE(626), 1,
      sym_expression,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(35), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(37), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(39), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(41), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(43), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(47), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(55), 2,
      sym_string_lit,
      sym_binary,
    STATE(127), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(53), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(130), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(113), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(138), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(49), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [4477] = 32,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_dollar_partition_,
    ACTIONS(45), 1,
      sym_checksum_agg_,
    ACTIONS(51), 1,
      sym_ntile_,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      aux_sym_real__token1,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(446), 1,
      sym_id_,
    STATE(588), 1,
      sym_expression,
    STATE(606), 1,
      sym_scalar_function_name,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(35), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(37), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(39), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(41), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(43), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(47), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(55), 2,
      sym_string_lit,
      sym_binary,
    STATE(127), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(53), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(130), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(113), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(138), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(49), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [4601] = 32,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_dollar_partition_,
    ACTIONS(45), 1,
      sym_checksum_agg_,
    ACTIONS(51), 1,
      sym_ntile_,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      aux_sym_real__token1,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(446), 1,
      sym_id_,
    STATE(606), 1,
      sym_scalar_function_name,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    STATE(684), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(35), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(37), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(39), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(41), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(43), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(47), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(55), 2,
      sym_string_lit,
      sym_binary,
    STATE(127), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(53), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(130), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(113), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(138), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(49), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [4725] = 32,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_dollar_partition_,
    ACTIONS(45), 1,
      sym_checksum_agg_,
    ACTIONS(51), 1,
      sym_ntile_,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      aux_sym_real__token1,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(446), 1,
      sym_id_,
    STATE(575), 1,
      sym_expression,
    STATE(606), 1,
      sym_scalar_function_name,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(35), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(37), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(39), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(41), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(43), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(47), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(55), 2,
      sym_string_lit,
      sym_binary,
    STATE(127), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(53), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(130), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(113), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(138), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(49), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [4849] = 32,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_dollar_partition_,
    ACTIONS(45), 1,
      sym_checksum_agg_,
    ACTIONS(51), 1,
      sym_ntile_,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      aux_sym_real__token1,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(446), 1,
      sym_id_,
    STATE(606), 1,
      sym_scalar_function_name,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    STATE(658), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(35), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(37), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(39), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(41), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(43), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(47), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(55), 2,
      sym_string_lit,
      sym_binary,
    STATE(127), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(53), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(130), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(113), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(138), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(49), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [4973] = 32,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_dollar_partition_,
    ACTIONS(45), 1,
      sym_checksum_agg_,
    ACTIONS(51), 1,
      sym_ntile_,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      aux_sym_real__token1,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(446), 1,
      sym_id_,
    STATE(566), 1,
      sym_expression,
    STATE(606), 1,
      sym_scalar_function_name,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(35), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(37), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(39), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(41), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(43), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(47), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(55), 2,
      sym_string_lit,
      sym_binary,
    STATE(127), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(53), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(130), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(113), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(138), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(49), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [5097] = 32,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_dollar_partition_,
    ACTIONS(45), 1,
      sym_checksum_agg_,
    ACTIONS(51), 1,
      sym_ntile_,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      aux_sym_real__token1,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(446), 1,
      sym_id_,
    STATE(497), 1,
      sym_expression,
    STATE(606), 1,
      sym_scalar_function_name,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(35), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(37), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(39), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(41), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(43), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(47), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(55), 2,
      sym_string_lit,
      sym_binary,
    STATE(127), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(53), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(130), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(113), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(138), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(49), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [5221] = 32,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(129), 1,
      aux_sym_go_statement_token1,
    ACTIONS(131), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(135), 1,
      aux_sym_constant_token3,
    ACTIONS(139), 1,
      sym_dollar_partition_,
    ACTIONS(151), 1,
      sym_checksum_agg_,
    ACTIONS(157), 1,
      sym_ntile_,
    ACTIONS(161), 1,
      anon_sym_DOLLAR,
    ACTIONS(163), 1,
      aux_sym_real__token1,
    ACTIONS(165), 1,
      aux_sym_id__token1,
    ACTIONS(167), 1,
      aux_sym_id__token2,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(173), 1,
      sym_id_,
    STATE(193), 1,
      sym_keyword,
    STATE(197), 1,
      sym_expression,
    STATE(604), 1,
      sym_scalar_function_name,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(133), 2,
      sym_default,
      sym_null_,
    ACTIONS(137), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(141), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(143), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(145), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(147), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(149), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(153), 2,
      sym_count_,
      sym_count_big_,
    STATE(218), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(159), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(205), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(203), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(206), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(155), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [5345] = 32,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(31), 1,
      sym_dollar_partition_,
    ACTIONS(45), 1,
      sym_checksum_agg_,
    ACTIONS(51), 1,
      sym_ntile_,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      aux_sym_real__token1,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(109), 1,
      sym_func_proc_name_schema,
    STATE(446), 1,
      sym_id_,
    STATE(606), 1,
      sym_scalar_function_name,
    STATE(627), 1,
      sym_expression,
    STATE(649), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(33), 2,
      sym_right_,
      sym_left_,
    ACTIONS(35), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(37), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(39), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(41), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(43), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(47), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(55), 2,
      sym_string_lit,
      sym_binary,
    STATE(127), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(53), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(130), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(113), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(138), 4,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(49), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [5469] = 2,
    ACTIONS(171), 5,
      aux_sym_execute_statement_arg_named_token1,
      sym_string_lit,
      sym_dollar_partition_,
      sym_binary,
      aux_sym_id__token2,
    ACTIONS(169), 35,
      aux_sym_go_statement_token1,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_default,
      sym_null_,
      aux_sym_constant_token3,
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
  [5514] = 22,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(175), 1,
      aux_sym_go_statement_token1,
    ACTIONS(178), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(181), 1,
      sym_execute,
    ACTIONS(184), 1,
      sym_select,
    ACTIONS(187), 1,
      aux_sym_id__token1,
    ACTIONS(190), 1,
      aux_sym_id__token2,
    STATE(54), 1,
      sym_func_proc_name_server_database_schema,
    STATE(112), 1,
      sym_id_,
    STATE(135), 1,
      sym_keyword,
    STATE(150), 1,
      sym_execute_body_batch,
    STATE(167), 1,
      sym_func_proc_name_schema,
    STATE(170), 1,
      sym_func_proc_name_database_schema,
    STATE(264), 1,
      sym_go_statement,
    STATE(283), 1,
      sym_execute_statement,
    STATE(286), 1,
      sym_select_statement_standalone,
    STATE(306), 1,
      sym_select_statement,
    STATE(312), 1,
      sym_query_expression,
    STATE(324), 1,
      sym_query_specification,
    STATE(47), 2,
      sym_batch,
      aux_sym_tsql_file_repeat1,
    STATE(57), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(282), 2,
      sym_another_statement,
      sym_dml_clause,
  [5584] = 22,
    ACTIONS(5), 1,
      aux_sym_go_statement_token1,
    ACTIONS(9), 1,
      sym_execute,
    ACTIONS(11), 1,
      sym_select,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(197), 1,
      aux_sym_id__token1,
    ACTIONS(199), 1,
      aux_sym_id__token2,
    STATE(54), 1,
      sym_func_proc_name_server_database_schema,
    STATE(112), 1,
      sym_id_,
    STATE(135), 1,
      sym_keyword,
    STATE(150), 1,
      sym_execute_body_batch,
    STATE(167), 1,
      sym_func_proc_name_schema,
    STATE(170), 1,
      sym_func_proc_name_database_schema,
    STATE(264), 1,
      sym_go_statement,
    STATE(283), 1,
      sym_execute_statement,
    STATE(286), 1,
      sym_select_statement_standalone,
    STATE(306), 1,
      sym_select_statement,
    STATE(312), 1,
      sym_query_expression,
    STATE(324), 1,
      sym_query_specification,
    STATE(47), 2,
      sym_batch,
      aux_sym_tsql_file_repeat1,
    STATE(57), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(282), 2,
      sym_another_statement,
      sym_dml_clause,
  [5654] = 14,
    ACTIONS(205), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(211), 1,
      aux_sym_constant_token2,
    ACTIONS(213), 1,
      sym_WITH,
    STATE(177), 1,
      sym_LOCAL_ID_,
    STATE(179), 1,
      sym_execute_statement_arg_named,
    STATE(180), 1,
      sym_execute_statement_arg_unnamed,
    STATE(195), 1,
      sym_keyword,
    STATE(199), 1,
      sym_execute_parameter,
    STATE(259), 1,
      sym_execute_statement_arg,
    ACTIONS(207), 2,
      sym_default,
      sym_null_,
    ACTIONS(209), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(202), 2,
      sym_constant,
      sym_id_,
    ACTIONS(201), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(203), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [5706] = 14,
    ACTIONS(205), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(211), 1,
      aux_sym_constant_token2,
    ACTIONS(219), 1,
      sym_WITH,
    STATE(177), 1,
      sym_LOCAL_ID_,
    STATE(179), 1,
      sym_execute_statement_arg_named,
    STATE(180), 1,
      sym_execute_statement_arg_unnamed,
    STATE(195), 1,
      sym_keyword,
    STATE(199), 1,
      sym_execute_parameter,
    STATE(270), 1,
      sym_execute_statement_arg,
    ACTIONS(207), 2,
      sym_default,
      sym_null_,
    ACTIONS(209), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(202), 2,
      sym_constant,
      sym_id_,
    ACTIONS(215), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(217), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [5758] = 5,
    ACTIONS(225), 1,
      anon_sym_EQ,
    STATE(33), 1,
      sym_assignment_operator,
    ACTIONS(221), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
    ACTIONS(223), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(227), 8,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [5791] = 16,
    ACTIONS(125), 1,
      aux_sym_id__token1,
    ACTIONS(127), 1,
      aux_sym_id__token2,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
    ACTIONS(233), 1,
      anon_sym_SEMI,
    ACTIONS(235), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(241), 1,
      aux_sym_constant_token2,
    STATE(96), 1,
      sym_keyword,
    STATE(333), 1,
      sym_execute_statement_arg,
    STATE(334), 1,
      sym_execute_statement_arg_named,
    STATE(335), 1,
      sym_execute_statement_arg_unnamed,
    STATE(336), 1,
      sym_LOCAL_ID_,
    STATE(382), 1,
      sym_execute_parameter,
    ACTIONS(237), 2,
      sym_default,
      sym_null_,
    ACTIONS(239), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(361), 2,
      sym_constant,
      sym_id_,
    ACTIONS(231), 3,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [5845] = 2,
    ACTIONS(245), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(243), 15,
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
  [5871] = 15,
    ACTIONS(125), 1,
      aux_sym_id__token1,
    ACTIONS(127), 1,
      aux_sym_id__token2,
    ACTIONS(233), 1,
      anon_sym_SEMI,
    ACTIONS(235), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(241), 1,
      aux_sym_constant_token2,
    STATE(96), 1,
      sym_keyword,
    STATE(333), 1,
      sym_execute_statement_arg,
    STATE(334), 1,
      sym_execute_statement_arg_named,
    STATE(335), 1,
      sym_execute_statement_arg_unnamed,
    STATE(336), 1,
      sym_LOCAL_ID_,
    STATE(382), 1,
      sym_execute_parameter,
    ACTIONS(237), 2,
      sym_default,
      sym_null_,
    ACTIONS(239), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(361), 2,
      sym_constant,
      sym_id_,
    ACTIONS(231), 3,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [5922] = 2,
    ACTIONS(245), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(243), 12,
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
  [5946] = 11,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      aux_sym_AS_token1,
    ACTIONS(255), 1,
      sym_string_lit,
    STATE(62), 1,
      sym_udt_method_arguments,
    STATE(193), 1,
      sym_keyword,
    STATE(246), 1,
      sym_as_column_alias,
    STATE(247), 1,
      sym_id_,
    STATE(253), 1,
      sym_column_alias,
    STATE(339), 1,
      sym_as,
    ACTIONS(247), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(249), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [5988] = 13,
    ACTIONS(259), 1,
      aux_sym_go_statement_token1,
    ACTIONS(262), 1,
      sym_execute,
    ACTIONS(265), 1,
      sym_select,
    ACTIONS(268), 1,
      aux_sym_id__token1,
    STATE(283), 1,
      sym_execute_statement,
    STATE(286), 1,
      sym_select_statement_standalone,
    STATE(306), 1,
      sym_select_statement,
    STATE(312), 1,
      sym_query_expression,
    STATE(324), 1,
      sym_query_specification,
    STATE(69), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(267), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    STATE(282), 2,
      sym_another_statement,
      sym_dml_clause,
    ACTIONS(257), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [6033] = 3,
    ACTIONS(274), 1,
      sym_PLUS,
    ACTIONS(272), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(270), 10,
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
  [6058] = 2,
    ACTIONS(278), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(276), 11,
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
  [6081] = 3,
    ACTIONS(284), 1,
      sym_PLUS,
    ACTIONS(282), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(280), 10,
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
  [6106] = 13,
    ACTIONS(288), 1,
      aux_sym_go_statement_token1,
    ACTIONS(291), 1,
      sym_execute,
    ACTIONS(294), 1,
      sym_select,
    ACTIONS(297), 1,
      aux_sym_id__token1,
    STATE(283), 1,
      sym_execute_statement,
    STATE(286), 1,
      sym_select_statement_standalone,
    STATE(306), 1,
      sym_select_statement,
    STATE(312), 1,
      sym_query_expression,
    STATE(324), 1,
      sym_query_specification,
    STATE(69), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(266), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    STATE(282), 2,
      sym_another_statement,
      sym_dml_clause,
    ACTIONS(286), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [6151] = 9,
    ACTIONS(253), 1,
      aux_sym_AS_token1,
    ACTIONS(255), 1,
      sym_string_lit,
    STATE(193), 1,
      sym_keyword,
    STATE(247), 1,
      sym_id_,
    STATE(252), 1,
      sym_as_column_alias,
    STATE(253), 1,
      sym_column_alias,
    STATE(339), 1,
      sym_as,
    ACTIONS(299), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(301), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [6187] = 2,
    ACTIONS(305), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(303), 11,
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
  [6209] = 14,
    ACTIONS(89), 1,
      aux_sym_go_statement_token1,
    ACTIONS(125), 1,
      aux_sym_id__token1,
    ACTIONS(127), 1,
      aux_sym_id__token2,
    ACTIONS(235), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(241), 1,
      aux_sym_constant_token2,
    STATE(96), 1,
      sym_keyword,
    STATE(334), 1,
      sym_execute_statement_arg_named,
    STATE(335), 1,
      sym_execute_statement_arg_unnamed,
    STATE(336), 1,
      sym_LOCAL_ID_,
    STATE(356), 1,
      sym_execute_statement_arg,
    STATE(382), 1,
      sym_execute_parameter,
    ACTIONS(237), 2,
      sym_default,
      sym_null_,
    ACTIONS(239), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(361), 2,
      sym_constant,
      sym_id_,
  [6255] = 14,
    ACTIONS(205), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(211), 1,
      aux_sym_constant_token2,
    ACTIONS(307), 1,
      aux_sym_go_statement_token1,
    ACTIONS(309), 1,
      aux_sym_id__token1,
    ACTIONS(311), 1,
      aux_sym_id__token2,
    STATE(177), 1,
      sym_LOCAL_ID_,
    STATE(187), 1,
      sym_execute_statement_arg_unnamed,
    STATE(188), 1,
      sym_execute_statement_arg_named,
    STATE(195), 1,
      sym_keyword,
    STATE(199), 1,
      sym_execute_parameter,
    STATE(213), 1,
      sym_execute_statement_arg,
    ACTIONS(207), 2,
      sym_default,
      sym_null_,
    ACTIONS(209), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(202), 2,
      sym_constant,
      sym_id_,
  [6301] = 4,
    ACTIONS(274), 1,
      sym_PLUS,
    ACTIONS(313), 1,
      aux_sym_execute_body_token1,
    ACTIONS(272), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(270), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [6327] = 12,
    ACTIONS(129), 1,
      aux_sym_go_statement_token1,
    ACTIONS(165), 1,
      aux_sym_id__token1,
    ACTIONS(167), 1,
      aux_sym_id__token2,
    ACTIONS(253), 1,
      aux_sym_AS_token1,
    ACTIONS(255), 1,
      sym_string_lit,
    STATE(193), 1,
      sym_keyword,
    STATE(247), 1,
      sym_id_,
    STATE(251), 1,
      sym_as_column_alias,
    STATE(253), 1,
      sym_column_alias,
    STATE(339), 1,
      sym_as,
    ACTIONS(317), 3,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
    ACTIONS(315), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
  [6369] = 2,
    ACTIONS(321), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(319), 10,
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
  [6391] = 11,
    ACTIONS(327), 1,
      sym_execute,
    ACTIONS(330), 1,
      sym_select,
    STATE(283), 1,
      sym_execute_statement,
    STATE(286), 1,
      sym_select_statement_standalone,
    STATE(306), 1,
      sym_select_statement,
    STATE(312), 1,
      sym_query_expression,
    STATE(324), 1,
      sym_query_specification,
    ACTIONS(325), 2,
      aux_sym_go_statement_token1,
      aux_sym_id__token1,
    STATE(69), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(282), 2,
      sym_another_statement,
      sym_dml_clause,
    ACTIONS(323), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [6430] = 6,
    ACTIONS(337), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(339), 1,
      aux_sym_execute_body_token1,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_COLON_COLON,
    ACTIONS(333), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_string_lit,
      aux_sym_id__token2,
    ACTIONS(335), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [6458] = 2,
    ACTIONS(347), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(345), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [6478] = 1,
    ACTIONS(276), 15,
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
  [6496] = 2,
    ACTIONS(351), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(349), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [6516] = 3,
    ACTIONS(357), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(353), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(355), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [6538] = 3,
    ACTIONS(363), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(359), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(361), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [6560] = 2,
    ACTIONS(305), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(303), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_body_token1,
      anon_sym_LPAREN,
      sym_string_lit,
      anon_sym_COLON_COLON,
      aux_sym_id__token2,
  [6580] = 2,
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
  [6600] = 2,
    ACTIONS(278), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(276), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_body_token1,
      anon_sym_LPAREN,
      sym_string_lit,
      anon_sym_COLON_COLON,
      aux_sym_id__token2,
  [6620] = 2,
    ACTIONS(371), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(369), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [6640] = 2,
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
  [6660] = 4,
    ACTIONS(381), 1,
      aux_sym_over__token1,
    STATE(124), 1,
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
  [6684] = 4,
    ACTIONS(381), 1,
      aux_sym_over__token1,
    STATE(123), 1,
      sym_over_clause,
    ACTIONS(385), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(383), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [6708] = 2,
    ACTIONS(389), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(387), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [6728] = 3,
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
  [6750] = 2,
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
  [6770] = 14,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(401), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(403), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_string_lit,
    ACTIONS(407), 1,
      aux_sym_id__token1,
    ACTIONS(409), 1,
      aux_sym_id__token2,
    STATE(66), 1,
      sym_LOCAL_ID_,
    STATE(71), 1,
      sym_func_proc_name_schema,
    STATE(87), 1,
      sym_id_,
    STATE(93), 1,
      sym_func_proc_name_database_schema,
    STATE(94), 1,
      sym_keyword,
    STATE(327), 1,
      sym_execute_body,
    STATE(49), 2,
      sym_func_proc_name_server_database_schema,
      sym_execute_var_string,
  [6814] = 3,
    ACTIONS(413), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(341), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(411), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [6836] = 3,
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
  [6858] = 2,
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
  [6878] = 13,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    ACTIONS(425), 1,
      aux_sym_go_statement_token1,
    ACTIONS(427), 1,
      sym_execute,
    ACTIONS(429), 1,
      sym_select,
    STATE(263), 1,
      sym_go_statement,
    STATE(283), 1,
      sym_execute_statement,
    STATE(286), 1,
      sym_select_statement_standalone,
    STATE(306), 1,
      sym_select_statement,
    STATE(312), 1,
      sym_query_expression,
    STATE(324), 1,
      sym_query_specification,
    STATE(447), 1,
      aux_sym_tsql_file_repeat2,
    STATE(61), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(282), 2,
      sym_another_statement,
      sym_dml_clause,
  [6920] = 3,
    ACTIONS(435), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(431), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(433), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [6942] = 6,
    ACTIONS(441), 1,
      aux_sym_constant_token3,
    STATE(330), 1,
      sym_integer,
    ACTIONS(278), 2,
      sym_default,
      sym_null_,
    ACTIONS(437), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(276), 4,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(439), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6970] = 2,
    ACTIONS(445), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(443), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [6990] = 2,
    ACTIONS(305), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(303), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [7010] = 2,
    ACTIONS(449), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(447), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [7030] = 1,
    ACTIONS(303), 15,
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
  [7048] = 1,
    ACTIONS(243), 14,
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
  [7065] = 2,
    ACTIONS(278), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(276), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [7084] = 3,
    ACTIONS(451), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
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
  [7105] = 3,
    ACTIONS(453), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
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
  [7126] = 3,
    ACTIONS(455), 1,
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
  [7147] = 11,
    ACTIONS(211), 1,
      aux_sym_constant_token2,
    ACTIONS(307), 1,
      aux_sym_go_statement_token1,
    ACTIONS(309), 1,
      aux_sym_id__token1,
    ACTIONS(311), 1,
      aux_sym_id__token2,
    ACTIONS(457), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(177), 1,
      sym_LOCAL_ID_,
    STATE(195), 1,
      sym_keyword,
    STATE(204), 1,
      sym_execute_parameter,
    ACTIONS(207), 2,
      sym_default,
      sym_null_,
    ACTIONS(209), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(202), 2,
      sym_constant,
      sym_id_,
  [7184] = 3,
    ACTIONS(459), 1,
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
  [7205] = 3,
    ACTIONS(461), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(411), 6,
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
  [7226] = 3,
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
  [7247] = 3,
    ACTIONS(469), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(355), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(353), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [7268] = 3,
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
  [7289] = 11,
    ACTIONS(89), 1,
      aux_sym_go_statement_token1,
    ACTIONS(91), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(125), 1,
      aux_sym_id__token1,
    ACTIONS(127), 1,
      aux_sym_id__token2,
    ACTIONS(241), 1,
      aux_sym_constant_token2,
    STATE(96), 1,
      sym_keyword,
    STATE(336), 1,
      sym_LOCAL_ID_,
    STATE(355), 1,
      sym_execute_parameter,
    ACTIONS(237), 2,
      sym_default,
      sym_null_,
    ACTIONS(239), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(361), 2,
      sym_constant,
      sym_id_,
  [7326] = 2,
    ACTIONS(347), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(345), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_LPAREN,
      aux_sym_id__token2,
  [7345] = 2,
    ACTIONS(477), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(475), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [7363] = 2,
    ACTIONS(481), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(479), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [7381] = 3,
    ACTIONS(483), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(341), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(411), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [7401] = 2,
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
  [7419] = 2,
    ACTIONS(491), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(489), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [7437] = 2,
    ACTIONS(449), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(447), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [7455] = 2,
    ACTIONS(495), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(493), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [7473] = 2,
    ACTIONS(351), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(349), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [7491] = 2,
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
  [7509] = 2,
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
  [7527] = 2,
    ACTIONS(371), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(369), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [7545] = 2,
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
  [7563] = 2,
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
  [7581] = 2,
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
  [7599] = 2,
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
  [7617] = 2,
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
  [7635] = 3,
    ACTIONS(517), 1,
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
  [7655] = 2,
    ACTIONS(223), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(221), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [7673] = 2,
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
  [7691] = 2,
    ACTIONS(525), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(523), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [7709] = 2,
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
  [7727] = 2,
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
  [7745] = 2,
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
  [7763] = 3,
    ACTIONS(539), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(353), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(355), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [7783] = 2,
    ACTIONS(543), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(541), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [7801] = 2,
    ACTIONS(305), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(303), 7,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [7819] = 2,
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
  [7837] = 12,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(401), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(405), 1,
      sym_string_lit,
    ACTIONS(407), 1,
      aux_sym_id__token1,
    ACTIONS(409), 1,
      aux_sym_id__token2,
    STATE(58), 1,
      sym_LOCAL_ID_,
    STATE(71), 1,
      sym_func_proc_name_schema,
    STATE(87), 1,
      sym_id_,
    STATE(93), 1,
      sym_func_proc_name_database_schema,
    STATE(94), 1,
      sym_keyword,
    STATE(50), 2,
      sym_func_proc_name_server_database_schema,
      sym_execute_var_string,
  [7875] = 2,
    ACTIONS(547), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(545), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [7893] = 2,
    ACTIONS(551), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(549), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [7911] = 3,
    ACTIONS(553), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
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
  [7931] = 3,
    ACTIONS(555), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
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
  [7951] = 2,
    ACTIONS(389), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(387), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [7969] = 2,
    ACTIONS(559), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(557), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [7987] = 2,
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
  [8005] = 2,
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
  [8023] = 2,
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
  [8041] = 3,
    ACTIONS(339), 1,
      aux_sym_execute_body_token1,
    ACTIONS(485), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
    ACTIONS(487), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [8061] = 3,
    ACTIONS(569), 1,
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
  [8081] = 2,
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
  [8099] = 11,
    ACTIONS(425), 1,
      aux_sym_go_statement_token1,
    ACTIONS(427), 1,
      sym_execute,
    ACTIONS(429), 1,
      sym_select,
    STATE(265), 1,
      sym_go_statement,
    STATE(283), 1,
      sym_execute_statement,
    STATE(286), 1,
      sym_select_statement_standalone,
    STATE(306), 1,
      sym_select_statement,
    STATE(312), 1,
      sym_query_expression,
    STATE(324), 1,
      sym_query_specification,
    STATE(61), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(282), 2,
      sym_another_statement,
      sym_dml_clause,
  [8135] = 2,
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
  [8153] = 2,
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
  [8171] = 2,
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
  [8189] = 2,
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
  [8207] = 2,
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
  [8225] = 2,
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
  [8243] = 2,
    ACTIONS(278), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(276), 7,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8261] = 2,
    ACTIONS(369), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(371), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [8278] = 3,
    ACTIONS(595), 1,
      anon_sym_EQ,
    ACTIONS(243), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(245), 6,
      aux_sym_go_statement_token1,
      sym_OUTPUT,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [8297] = 2,
    ACTIONS(349), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(351), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [8314] = 2,
    ACTIONS(597), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
    ACTIONS(599), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [8331] = 2,
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
  [8348] = 2,
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
  [8365] = 2,
    ACTIONS(601), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
    ACTIONS(603), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [8382] = 2,
    ACTIONS(387), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(389), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [8399] = 4,
    ACTIONS(605), 1,
      aux_sym_over__token1,
    STATE(196), 1,
      sym_over_clause,
    ACTIONS(383), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(385), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [8420] = 2,
    ACTIONS(345), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(347), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [8437] = 2,
    ACTIONS(447), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(449), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [8454] = 2,
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
  [8471] = 2,
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
  [8488] = 2,
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
  [8505] = 4,
    ACTIONS(605), 1,
      aux_sym_over__token1,
    STATE(238), 1,
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
  [8526] = 4,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(607), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(333), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_id__token2,
    ACTIONS(335), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [8546] = 4,
    ACTIONS(613), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(609), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(611), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [8566] = 3,
    ACTIONS(615), 1,
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
  [8584] = 3,
    ACTIONS(615), 1,
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
  [8602] = 3,
    ACTIONS(621), 1,
      sym_OUTPUT,
    ACTIONS(617), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(619), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [8620] = 2,
    ACTIONS(243), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(245), 6,
      aux_sym_go_statement_token1,
      sym_OUTPUT,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [8636] = 4,
    ACTIONS(627), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(623), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(625), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [8656] = 4,
    ACTIONS(629), 1,
      anon_sym_COMMA,
    STATE(192), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(623), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(625), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [8676] = 3,
    STATE(186), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(631), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(633), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [8694] = 4,
    ACTIONS(639), 1,
      anon_sym_COMMA,
    STATE(182), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(635), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(637), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [8714] = 5,
    ACTIONS(646), 1,
      aux_sym_AS_token1,
    ACTIONS(648), 1,
      sym_AT_KEYWORD,
    STATE(515), 1,
      sym_AS,
    ACTIONS(642), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(644), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [8736] = 3,
    STATE(185), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(631), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(633), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [8754] = 4,
    ACTIONS(654), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(650), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(652), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [8774] = 4,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    STATE(186), 1,
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
  [8794] = 3,
    STATE(181), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(623), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(625), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [8812] = 3,
    STATE(184), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(623), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(625), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [8830] = 2,
    ACTIONS(278), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(276), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_LPAREN,
      aux_sym_id__token2,
  [8846] = 5,
    ACTIONS(646), 1,
      aux_sym_AS_token1,
    ACTIONS(668), 1,
      sym_AT_KEYWORD,
    STATE(489), 1,
      sym_AS,
    ACTIONS(664), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(666), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [8868] = 4,
    ACTIONS(613), 1,
      anon_sym_COMMA,
    STATE(182), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(670), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(672), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [8888] = 4,
    ACTIONS(629), 1,
      anon_sym_COMMA,
    STATE(186), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(631), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(633), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [8908] = 2,
    ACTIONS(305), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(303), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_LPAREN,
      aux_sym_id__token2,
  [8924] = 4,
    ACTIONS(627), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(631), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(633), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [8944] = 2,
    ACTIONS(303), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(305), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [8959] = 2,
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
  [8974] = 2,
    ACTIONS(674), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(676), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [8989] = 2,
    ACTIONS(678), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(680), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [9004] = 2,
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
  [9019] = 2,
    ACTIONS(686), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(688), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [9034] = 2,
    ACTIONS(523), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(525), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [9049] = 2,
    ACTIONS(617), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(619), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [9064] = 2,
    ACTIONS(545), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(547), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [9079] = 2,
    ACTIONS(690), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(692), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [9094] = 2,
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
  [9109] = 2,
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
  [9124] = 2,
    ACTIONS(243), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(245), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [9139] = 2,
    ACTIONS(541), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(543), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [9154] = 2,
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
  [9169] = 2,
    ACTIONS(557), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(559), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [9184] = 2,
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
  [9199] = 4,
    ACTIONS(694), 1,
      anon_sym_COMMA,
    STATE(237), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(664), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(666), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9218] = 2,
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
  [9233] = 4,
    ACTIONS(694), 1,
      anon_sym_COMMA,
    STATE(232), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(664), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(666), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9252] = 2,
    ACTIONS(493), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(495), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [9267] = 2,
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
  [9282] = 2,
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
  [9297] = 2,
    ACTIONS(221), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(223), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [9312] = 2,
    ACTIONS(696), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(698), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [9327] = 2,
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
  [9342] = 2,
    ACTIONS(650), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(652), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [9357] = 2,
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
  [9372] = 3,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(700), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(333), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9389] = 2,
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
  [9404] = 2,
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
  [9419] = 2,
    ACTIONS(479), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(481), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [9434] = 2,
    ACTIONS(702), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(704), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [9449] = 2,
    ACTIONS(489), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(491), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [9464] = 4,
    ACTIONS(694), 1,
      anon_sym_COMMA,
    STATE(237), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(706), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(708), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9483] = 4,
    ACTIONS(694), 1,
      anon_sym_COMMA,
    STATE(242), 1,
      aux_sym_execute_body_repeat1,
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
  [9502] = 2,
    ACTIONS(276), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(278), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [9517] = 4,
    ACTIONS(694), 1,
      anon_sym_COMMA,
    STATE(237), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(714), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(716), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9536] = 2,
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
  [9551] = 2,
    ACTIONS(549), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(551), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [9566] = 2,
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
  [9581] = 2,
    ACTIONS(718), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(720), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [9596] = 4,
    ACTIONS(726), 1,
      anon_sym_COMMA,
    STATE(237), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(722), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(724), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9615] = 2,
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
  [9630] = 4,
    ACTIONS(694), 1,
      anon_sym_COMMA,
    STATE(229), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(729), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(731), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9649] = 2,
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
  [9664] = 2,
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
  [9679] = 4,
    ACTIONS(694), 1,
      anon_sym_COMMA,
    STATE(237), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(729), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(731), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9698] = 2,
    ACTIONS(733), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(735), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [9713] = 3,
    ACTIONS(737), 1,
      aux_sym_over__token1,
    STATE(280), 1,
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
  [9730] = 3,
    ACTIONS(737), 1,
      aux_sym_over__token1,
    STATE(279), 1,
      sym_over_clause,
    ACTIONS(383), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9747] = 2,
    ACTIONS(299), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(301), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [9762] = 2,
    ACTIONS(339), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(739), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [9777] = 2,
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
  [9792] = 4,
    ACTIONS(694), 1,
      anon_sym_COMMA,
    STATE(212), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(642), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(644), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9811] = 2,
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
  [9826] = 2,
    ACTIONS(741), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(743), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [9841] = 2,
    ACTIONS(745), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(747), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [9856] = 2,
    ACTIONS(749), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(751), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [9871] = 2,
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
  [9886] = 2,
    ACTIONS(475), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(477), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [9901] = 2,
    ACTIONS(755), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(753), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [9915] = 2,
    ACTIONS(724), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(722), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [9929] = 9,
    ACTIONS(757), 1,
      aux_sym_go_statement_token1,
    ACTIONS(759), 1,
      aux_sym_id__token1,
    ACTIONS(761), 1,
      aux_sym_id__token2,
    STATE(307), 1,
      sym_keyword,
    STATE(314), 1,
      sym_id_,
    STATE(319), 1,
      sym_table_sources,
    STATE(320), 1,
      sym_table_source,
    STATE(325), 1,
      sym_table_source_item,
    STATE(326), 1,
      sym_full_table_name,
  [9957] = 3,
    ACTIONS(767), 1,
      sym_WITH,
    ACTIONS(763), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(765), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9973] = 3,
    ACTIONS(773), 1,
      sym_AT_KEYWORD,
    ACTIONS(769), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(771), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9989] = 4,
    ACTIONS(777), 1,
      aux_sym_go_statement_token1,
    STATE(261), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(775), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(780), 3,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [10007] = 3,
    ACTIONS(786), 1,
      sym_AT_KEYWORD,
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
  [10023] = 5,
    ACTIONS(788), 1,
      ts_builtin_sym_end,
    ACTIONS(791), 1,
      aux_sym_go_statement_token1,
    ACTIONS(286), 2,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    STATE(266), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(297), 3,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [10043] = 3,
    STATE(267), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(257), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(268), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [10059] = 4,
    ACTIONS(288), 1,
      aux_sym_go_statement_token1,
    STATE(266), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(286), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(297), 3,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [10077] = 4,
    ACTIONS(797), 1,
      aux_sym_go_statement_token1,
    STATE(261), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(795), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(800), 3,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [10095] = 4,
    ACTIONS(288), 1,
      aux_sym_go_statement_token1,
    STATE(261), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(286), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(297), 3,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [10113] = 4,
    ACTIONS(441), 1,
      aux_sym_constant_token3,
    STATE(330), 1,
      sym_integer,
    ACTIONS(437), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(439), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [10131] = 3,
    ACTIONS(806), 1,
      aux_sym_query_specification_token1,
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
  [10147] = 3,
    ACTIONS(812), 1,
      sym_WITH,
    ACTIONS(808), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(810), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [10163] = 2,
    ACTIONS(816), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(814), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [10177] = 2,
    ACTIONS(818), 1,
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
  [10191] = 2,
    ACTIONS(818), 1,
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
  [10205] = 1,
    ACTIONS(489), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10216] = 1,
    ACTIONS(531), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10227] = 1,
    ACTIONS(575), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10238] = 1,
    ACTIONS(583), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10249] = 3,
    ACTIONS(824), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(820), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_id__token2,
    ACTIONS(822), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [10264] = 1,
    ACTIONS(505), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10275] = 1,
    ACTIONS(509), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10286] = 1,
    ACTIONS(527), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10297] = 3,
    ACTIONS(830), 1,
      anon_sym_SEMI,
    ACTIONS(826), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(828), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [10312] = 2,
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
  [10325] = 1,
    ACTIONS(485), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10336] = 1,
    ACTIONS(513), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10347] = 2,
    ACTIONS(836), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(838), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [10360] = 2,
    ACTIONS(840), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(842), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [10373] = 1,
    ACTIONS(519), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10384] = 1,
    ACTIONS(587), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10395] = 2,
    ACTIONS(844), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(846), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [10408] = 1,
    ACTIONS(591), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10419] = 1,
    ACTIONS(571), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10430] = 1,
    ACTIONS(475), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10441] = 1,
    ACTIONS(479), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10452] = 1,
    ACTIONS(493), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10463] = 1,
    ACTIONS(561), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10474] = 1,
    ACTIONS(535), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10485] = 1,
    ACTIONS(557), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10496] = 1,
    ACTIONS(497), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10507] = 1,
    ACTIONS(523), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10518] = 1,
    ACTIONS(541), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10529] = 1,
    ACTIONS(549), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10540] = 1,
    ACTIONS(565), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10551] = 2,
    ACTIONS(276), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(278), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [10564] = 1,
    ACTIONS(221), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10575] = 2,
    ACTIONS(848), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(850), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [10588] = 2,
    ACTIONS(303), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(305), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [10601] = 1,
    ACTIONS(579), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10612] = 1,
    ACTIONS(545), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10623] = 1,
    ACTIONS(501), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10634] = 5,
    ACTIONS(854), 1,
      aux_sym_collation__token1,
    ACTIONS(856), 1,
      sym_asc_,
    ACTIONS(858), 1,
      sym_desc_,
    STATE(345), 1,
      sym_collation_,
    ACTIONS(852), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10653] = 2,
    ACTIONS(860), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(862), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [10666] = 3,
    ACTIONS(868), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(864), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_id__token2,
    ACTIONS(866), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [10681] = 3,
    ACTIONS(874), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(870), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_id__token2,
    ACTIONS(872), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [10696] = 7,
    ACTIONS(876), 1,
      anon_sym_RPAREN,
    ACTIONS(878), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(880), 1,
      aux_sym_order_by_clause_token1,
    STATE(383), 1,
      sym_partition_by_clause,
    STATE(455), 1,
      sym_order_by_clause,
    STATE(555), 1,
      sym_row_or_range_clause,
    ACTIONS(882), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10719] = 7,
    ACTIONS(878), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(880), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(884), 1,
      anon_sym_RPAREN,
    STATE(388), 1,
      sym_partition_by_clause,
    STATE(465), 1,
      sym_order_by_clause,
    STATE(570), 1,
      sym_row_or_range_clause,
    ACTIONS(882), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10742] = 2,
    ACTIONS(886), 1,
      anon_sym_EQ,
    ACTIONS(243), 7,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_OUTPUT,
      sym_execute,
      sym_select,
  [10755] = 7,
    ACTIONS(878), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(880), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(888), 1,
      anon_sym_RPAREN,
    STATE(373), 1,
      sym_partition_by_clause,
    STATE(440), 1,
      sym_order_by_clause,
    STATE(594), 1,
      sym_row_or_range_clause,
    ACTIONS(882), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10778] = 2,
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
  [10791] = 2,
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
  [10804] = 2,
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
  [10817] = 2,
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
  [10830] = 2,
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
  [10843] = 2,
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
  [10856] = 2,
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
  [10869] = 2,
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
  [10882] = 2,
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
  [10895] = 7,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(926), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(928), 1,
      sym_dollar_partition_,
    STATE(63), 1,
      sym_keyword,
    STATE(536), 1,
      sym_id_,
  [10917] = 7,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(926), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(930), 1,
      sym_dollar_partition_,
    STATE(63), 1,
      sym_keyword,
    STATE(536), 1,
      sym_id_,
  [10939] = 2,
    ACTIONS(932), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(934), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [10951] = 2,
    ACTIONS(936), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(938), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [10963] = 7,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(926), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(940), 1,
      sym_dollar_partition_,
    STATE(63), 1,
      sym_keyword,
    STATE(536), 1,
      sym_id_,
  [10985] = 4,
    ACTIONS(944), 1,
      anon_sym_COMMA,
    ACTIONS(946), 1,
      anon_sym_SEMI,
    STATE(344), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(942), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [11001] = 2,
    STATE(343), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(623), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [11013] = 2,
    STATE(342), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(623), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [11025] = 2,
    ACTIONS(948), 1,
      sym_OUTPUT,
    ACTIONS(617), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [11037] = 2,
    ACTIONS(950), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(952), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11049] = 3,
    ACTIONS(954), 1,
      anon_sym_COMMA,
    STATE(338), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(650), 5,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [11063] = 7,
    ACTIONS(129), 1,
      aux_sym_go_statement_token1,
    ACTIONS(165), 1,
      aux_sym_id__token1,
    ACTIONS(167), 1,
      aux_sym_id__token2,
    ACTIONS(255), 1,
      sym_string_lit,
    STATE(193), 1,
      sym_keyword,
    STATE(198), 1,
      sym_column_alias,
    STATE(247), 1,
      sym_id_,
  [11085] = 7,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(926), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(940), 1,
      sym_dollar_partition_,
    STATE(63), 1,
      sym_keyword,
    STATE(474), 1,
      sym_id_,
  [11107] = 3,
    ACTIONS(957), 1,
      anon_sym_COMMA,
    STATE(341), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(657), 5,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [11121] = 2,
    STATE(341), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(631), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [11133] = 2,
    STATE(338), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(631), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [11145] = 4,
    ACTIONS(944), 1,
      anon_sym_COMMA,
    ACTIONS(962), 1,
      anon_sym_SEMI,
    STATE(341), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(960), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [11161] = 3,
    ACTIONS(966), 1,
      sym_asc_,
    ACTIONS(968), 1,
      sym_desc_,
    ACTIONS(964), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11174] = 1,
    ACTIONS(686), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [11183] = 4,
    ACTIONS(972), 1,
      aux_sym_window_frame_preceding_token2,
    STATE(665), 1,
      sym_window_frame_bound,
    ACTIONS(970), 2,
      aux_sym_constant_token3,
      aux_sym_window_frame_following_token1,
    STATE(509), 2,
      sym_window_frame_following,
      sym_window_frame_preceding,
  [11198] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(974), 1,
      aux_sym_go_statement_token1,
    ACTIONS(976), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(101), 1,
      sym_id_,
  [11217] = 6,
    ACTIONS(197), 1,
      aux_sym_id__token1,
    ACTIONS(199), 1,
      aux_sym_id__token2,
    ACTIONS(978), 1,
      aux_sym_go_statement_token1,
    ACTIONS(980), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(135), 1,
      sym_keyword,
    STATE(148), 1,
      sym_id_,
  [11236] = 6,
    ACTIONS(197), 1,
      aux_sym_id__token1,
    ACTIONS(199), 1,
      aux_sym_id__token2,
    ACTIONS(978), 1,
      aux_sym_go_statement_token1,
    ACTIONS(982), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(133), 1,
      sym_id_,
    STATE(135), 1,
      sym_keyword,
  [11255] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(984), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(546), 1,
      sym_id_,
  [11274] = 6,
    ACTIONS(197), 1,
      aux_sym_id__token1,
    ACTIONS(199), 1,
      aux_sym_id__token2,
    ACTIONS(978), 1,
      aux_sym_go_statement_token1,
    ACTIONS(986), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(135), 1,
      sym_keyword,
    STATE(141), 1,
      sym_id_,
  [11293] = 6,
    ACTIONS(197), 1,
      aux_sym_id__token1,
    ACTIONS(199), 1,
      aux_sym_id__token2,
    ACTIONS(978), 1,
      aux_sym_go_statement_token1,
    ACTIONS(988), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(135), 1,
      sym_keyword,
    STATE(140), 1,
      sym_id_,
  [11312] = 1,
    ACTIONS(990), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11321] = 1,
    ACTIONS(690), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [11330] = 1,
    ACTIONS(657), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [11339] = 1,
    ACTIONS(650), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [11348] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(974), 1,
      aux_sym_go_statement_token1,
    ACTIONS(992), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(103), 1,
      sym_id_,
  [11367] = 6,
    ACTIONS(197), 1,
      aux_sym_id__token1,
    ACTIONS(199), 1,
      aux_sym_id__token2,
    ACTIONS(978), 1,
      aux_sym_go_statement_token1,
    ACTIONS(994), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(126), 1,
      sym_id_,
    STATE(135), 1,
      sym_keyword,
  [11386] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(974), 1,
      aux_sym_go_statement_token1,
    ACTIONS(996), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(106), 1,
      sym_id_,
  [11405] = 1,
    ACTIONS(617), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [11414] = 1,
    ACTIONS(718), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [11423] = 5,
    ACTIONS(998), 1,
      aux_sym_over__token1,
    ACTIONS(1000), 1,
      aux_sym_ignore_nulls__token1,
    ACTIONS(1002), 1,
      aux_sym_respect_nulls__token1,
    STATE(145), 1,
      sym_over_clause,
    STATE(491), 2,
      sym_ignore_nulls_,
      sym_respect_nulls_,
  [11440] = 3,
    ACTIONS(1004), 1,
      anon_sym_COMMA,
    STATE(364), 1,
      aux_sym_expression_list__repeat1,
    ACTIONS(1007), 4,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11453] = 1,
    ACTIONS(733), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [11462] = 3,
    ACTIONS(1009), 1,
      anon_sym_COMMA,
    STATE(364), 1,
      aux_sym_expression_list__repeat1,
    ACTIONS(1011), 4,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11475] = 6,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(407), 1,
      aux_sym_id__token1,
    ACTIONS(409), 1,
      aux_sym_id__token2,
    ACTIONS(1013), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(84), 1,
      sym_id_,
    STATE(94), 1,
      sym_keyword,
  [11494] = 4,
    ACTIONS(59), 1,
      aux_sym_real__token1,
    ACTIONS(1015), 1,
      aux_sym_constant_token3,
    ACTIONS(1017), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(131), 2,
      sym_real_,
      sym_float_,
  [11509] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(974), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1019), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(100), 1,
      sym_id_,
  [11528] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(974), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1021), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(99), 1,
      sym_id_,
  [11547] = 6,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(407), 1,
      aux_sym_id__token1,
    ACTIONS(409), 1,
      aux_sym_id__token2,
    ACTIONS(1023), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(75), 1,
      sym_id_,
    STATE(94), 1,
      sym_keyword,
  [11566] = 6,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(407), 1,
      aux_sym_id__token1,
    ACTIONS(409), 1,
      aux_sym_id__token2,
    ACTIONS(1025), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(74), 1,
      sym_id_,
    STATE(94), 1,
      sym_keyword,
  [11585] = 5,
    ACTIONS(880), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(1027), 1,
      anon_sym_RPAREN,
    STATE(461), 1,
      sym_order_by_clause,
    STATE(597), 1,
      sym_row_or_range_clause,
    ACTIONS(882), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11602] = 6,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(407), 1,
      aux_sym_id__token1,
    ACTIONS(409), 1,
      aux_sym_id__token2,
    ACTIONS(1029), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(88), 1,
      sym_id_,
    STATE(94), 1,
      sym_keyword,
  [11621] = 3,
    ACTIONS(1009), 1,
      anon_sym_COMMA,
    STATE(366), 1,
      aux_sym_expression_list__repeat1,
    ACTIONS(1031), 4,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11634] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1033), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(678), 1,
      sym_id_,
  [11653] = 6,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(407), 1,
      aux_sym_id__token1,
    ACTIONS(409), 1,
      aux_sym_id__token2,
    ACTIONS(1035), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(91), 1,
      sym_id_,
    STATE(94), 1,
      sym_keyword,
  [11672] = 4,
    ACTIONS(163), 1,
      aux_sym_real__token1,
    ACTIONS(1037), 1,
      aux_sym_constant_token3,
    ACTIONS(1039), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(235), 2,
      sym_real_,
      sym_float_,
  [11687] = 5,
    ACTIONS(737), 1,
      aux_sym_over__token1,
    ACTIONS(1000), 1,
      aux_sym_ignore_nulls__token1,
    ACTIONS(1002), 1,
      aux_sym_respect_nulls__token1,
    STATE(303), 1,
      sym_over_clause,
    STATE(532), 2,
      sym_ignore_nulls_,
      sym_respect_nulls_,
  [11704] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1041), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(578), 1,
      sym_id_,
  [11723] = 4,
    ACTIONS(972), 1,
      aux_sym_window_frame_preceding_token2,
    STATE(538), 1,
      sym_window_frame_bound,
    ACTIONS(970), 2,
      aux_sym_constant_token3,
      aux_sym_window_frame_following_token1,
    STATE(509), 2,
      sym_window_frame_following,
      sym_window_frame_preceding,
  [11738] = 1,
    ACTIONS(682), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [11747] = 5,
    ACTIONS(880), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(1043), 1,
      anon_sym_RPAREN,
    STATE(460), 1,
      sym_order_by_clause,
    STATE(675), 1,
      sym_row_or_range_clause,
    ACTIONS(882), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11764] = 5,
    ACTIONS(972), 1,
      aux_sym_window_frame_preceding_token2,
    ACTIONS(1047), 1,
      aux_sym_window_frame_extent_token1,
    STATE(582), 1,
      sym_window_frame_preceding,
    STATE(592), 1,
      sym_window_frame_extent,
    ACTIONS(1045), 2,
      aux_sym_constant_token3,
      aux_sym_window_frame_following_token1,
  [11781] = 5,
    ACTIONS(1000), 1,
      aux_sym_ignore_nulls__token1,
    ACTIONS(1002), 1,
      aux_sym_respect_nulls__token1,
    ACTIONS(1049), 1,
      aux_sym_over__token1,
    STATE(216), 1,
      sym_over_clause,
    STATE(529), 2,
      sym_ignore_nulls_,
      sym_respect_nulls_,
  [11798] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1051), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(552), 1,
      sym_id_,
  [11817] = 4,
    ACTIONS(123), 1,
      aux_sym_real__token1,
    ACTIONS(1053), 1,
      aux_sym_constant_token3,
    ACTIONS(1055), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(275), 2,
      sym_real_,
      sym_float_,
  [11832] = 5,
    ACTIONS(880), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(1057), 1,
      anon_sym_RPAREN,
    STATE(466), 1,
      sym_order_by_clause,
    STATE(572), 1,
      sym_row_or_range_clause,
    ACTIONS(882), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11849] = 5,
    ACTIONS(197), 1,
      aux_sym_id__token1,
    ACTIONS(199), 1,
      aux_sym_id__token2,
    ACTIONS(978), 1,
      aux_sym_go_statement_token1,
    STATE(135), 1,
      sym_keyword,
    STATE(163), 1,
      sym_id_,
  [11865] = 5,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(407), 1,
      aux_sym_id__token1,
    ACTIONS(409), 1,
      aux_sym_id__token2,
    STATE(80), 1,
      sym_id_,
    STATE(94), 1,
      sym_keyword,
  [11881] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(601), 1,
      sym_id_,
  [11897] = 5,
    ACTIONS(197), 1,
      aux_sym_id__token1,
    ACTIONS(199), 1,
      aux_sym_id__token2,
    ACTIONS(978), 1,
      aux_sym_go_statement_token1,
    STATE(135), 1,
      sym_keyword,
    STATE(165), 1,
      sym_id_,
  [11913] = 5,
    ACTIONS(197), 1,
      aux_sym_id__token1,
    ACTIONS(199), 1,
      aux_sym_id__token2,
    ACTIONS(978), 1,
      aux_sym_go_statement_token1,
    STATE(135), 1,
      sym_keyword,
    STATE(162), 1,
      sym_id_,
  [11929] = 5,
    ACTIONS(757), 1,
      aux_sym_go_statement_token1,
    ACTIONS(759), 1,
      aux_sym_id__token1,
    ACTIONS(761), 1,
      aux_sym_id__token2,
    STATE(307), 1,
      sym_keyword,
    STATE(321), 1,
      sym_id_,
  [11945] = 5,
    ACTIONS(197), 1,
      aux_sym_id__token1,
    ACTIONS(199), 1,
      aux_sym_id__token2,
    ACTIONS(978), 1,
      aux_sym_go_statement_token1,
    STATE(135), 1,
      sym_keyword,
    STATE(168), 1,
      sym_id_,
  [11961] = 5,
    ACTIONS(197), 1,
      aux_sym_id__token1,
    ACTIONS(199), 1,
      aux_sym_id__token2,
    ACTIONS(978), 1,
      aux_sym_go_statement_token1,
    STATE(135), 1,
      sym_keyword,
    STATE(160), 1,
      sym_id_,
  [11977] = 5,
    ACTIONS(757), 1,
      aux_sym_go_statement_token1,
    ACTIONS(759), 1,
      aux_sym_id__token1,
    ACTIONS(761), 1,
      aux_sym_id__token2,
    STATE(307), 1,
      sym_keyword,
    STATE(323), 1,
      sym_id_,
  [11993] = 5,
    ACTIONS(89), 1,
      aux_sym_go_statement_token1,
    ACTIONS(125), 1,
      aux_sym_id__token1,
    ACTIONS(127), 1,
      aux_sym_id__token2,
    STATE(96), 1,
      sym_keyword,
    STATE(354), 1,
      sym_id_,
  [12009] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(544), 1,
      sym_id_,
  [12025] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(653), 1,
      sym_id_,
  [12041] = 5,
    ACTIONS(197), 1,
      aux_sym_id__token1,
    ACTIONS(199), 1,
      aux_sym_id__token2,
    ACTIONS(978), 1,
      aux_sym_go_statement_token1,
    STATE(135), 1,
      sym_keyword,
    STATE(169), 1,
      sym_id_,
  [12057] = 3,
    ACTIONS(1059), 1,
      anon_sym_COMMA,
    STATE(405), 1,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(1061), 3,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12069] = 5,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(407), 1,
      aux_sym_id__token1,
    ACTIONS(409), 1,
      aux_sym_id__token2,
    STATE(89), 1,
      sym_id_,
    STATE(94), 1,
      sym_keyword,
  [12085] = 5,
    ACTIONS(197), 1,
      aux_sym_id__token1,
    ACTIONS(199), 1,
      aux_sym_id__token2,
    ACTIONS(978), 1,
      aux_sym_go_statement_token1,
    STATE(135), 1,
      sym_keyword,
    STATE(158), 1,
      sym_id_,
  [12101] = 3,
    ACTIONS(1063), 1,
      anon_sym_COMMA,
    STATE(405), 1,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(1066), 3,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12113] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(974), 1,
      aux_sym_go_statement_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(146), 1,
      sym_id_,
  [12129] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(651), 1,
      sym_id_,
  [12145] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(974), 1,
      aux_sym_go_statement_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(142), 1,
      sym_id_,
  [12161] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(642), 1,
      sym_id_,
  [12177] = 5,
    ACTIONS(757), 1,
      aux_sym_go_statement_token1,
    ACTIONS(759), 1,
      aux_sym_id__token1,
    ACTIONS(761), 1,
      aux_sym_id__token2,
    STATE(287), 1,
      sym_id_,
    STATE(307), 1,
      sym_keyword,
  [12193] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(974), 1,
      aux_sym_go_statement_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(153), 1,
      sym_id_,
  [12209] = 5,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(407), 1,
      aux_sym_id__token1,
    ACTIONS(409), 1,
      aux_sym_id__token2,
    STATE(73), 1,
      sym_id_,
    STATE(94), 1,
      sym_keyword,
  [12225] = 5,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(407), 1,
      aux_sym_id__token1,
    ACTIONS(409), 1,
      aux_sym_id__token2,
    STATE(94), 1,
      sym_keyword,
    STATE(95), 1,
      sym_id_,
  [12241] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(974), 1,
      aux_sym_go_statement_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(115), 1,
      sym_id_,
  [12257] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(974), 1,
      aux_sym_go_statement_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(117), 1,
      sym_id_,
  [12273] = 5,
    ACTIONS(197), 1,
      aux_sym_id__token1,
    ACTIONS(199), 1,
      aux_sym_id__token2,
    ACTIONS(978), 1,
      aux_sym_go_statement_token1,
    STATE(135), 1,
      sym_keyword,
    STATE(171), 1,
      sym_id_,
  [12289] = 5,
    ACTIONS(757), 1,
      aux_sym_go_statement_token1,
    ACTIONS(759), 1,
      aux_sym_id__token1,
    ACTIONS(761), 1,
      aux_sym_id__token2,
    STATE(307), 1,
      sym_keyword,
    STATE(322), 1,
      sym_id_,
  [12305] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(974), 1,
      aux_sym_go_statement_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(136), 1,
      sym_id_,
  [12321] = 5,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(407), 1,
      aux_sym_id__token1,
    ACTIONS(409), 1,
      aux_sym_id__token2,
    STATE(77), 1,
      sym_id_,
    STATE(94), 1,
      sym_keyword,
  [12337] = 5,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(407), 1,
      aux_sym_id__token1,
    ACTIONS(409), 1,
      aux_sym_id__token2,
    STATE(85), 1,
      sym_id_,
    STATE(94), 1,
      sym_keyword,
  [12353] = 5,
    ACTIONS(757), 1,
      aux_sym_go_statement_token1,
    ACTIONS(759), 1,
      aux_sym_id__token1,
    ACTIONS(761), 1,
      aux_sym_id__token2,
    STATE(307), 1,
      sym_keyword,
    STATE(313), 1,
      sym_id_,
  [12369] = 5,
    ACTIONS(17), 1,
      aux_sym_go_statement_token1,
    ACTIONS(61), 1,
      aux_sym_id__token1,
    ACTIONS(63), 1,
      aux_sym_id__token2,
    STATE(56), 1,
      sym_id_,
    STATE(76), 1,
      sym_keyword,
  [12385] = 5,
    ACTIONS(757), 1,
      aux_sym_go_statement_token1,
    ACTIONS(759), 1,
      aux_sym_id__token1,
    ACTIONS(761), 1,
      aux_sym_id__token2,
    STATE(278), 1,
      sym_id_,
    STATE(307), 1,
      sym_keyword,
  [12401] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(640), 1,
      sym_id_,
  [12417] = 5,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(407), 1,
      aux_sym_id__token1,
    ACTIONS(409), 1,
      aux_sym_id__token2,
    STATE(83), 1,
      sym_id_,
    STATE(94), 1,
      sym_keyword,
  [12433] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(556), 1,
      sym_id_,
  [12449] = 1,
    ACTIONS(1007), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12457] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(615), 1,
      sym_id_,
  [12473] = 3,
    ACTIONS(1059), 1,
      anon_sym_COMMA,
    STATE(402), 1,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(1068), 3,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12485] = 5,
    ACTIONS(757), 1,
      aux_sym_go_statement_token1,
    ACTIONS(759), 1,
      aux_sym_id__token1,
    ACTIONS(761), 1,
      aux_sym_id__token2,
    STATE(290), 1,
      sym_id_,
    STATE(307), 1,
      sym_keyword,
  [12501] = 5,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    ACTIONS(407), 1,
      aux_sym_id__token1,
    ACTIONS(409), 1,
      aux_sym_id__token2,
    STATE(79), 1,
      sym_id_,
    STATE(94), 1,
      sym_keyword,
  [12517] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(561), 1,
      sym_id_,
  [12533] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(65), 1,
      aux_sym_go_statement_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(643), 1,
      sym_id_,
  [12549] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(974), 1,
      aux_sym_go_statement_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(120), 1,
      sym_id_,
  [12565] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(974), 1,
      aux_sym_go_statement_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(121), 1,
      sym_id_,
  [12581] = 4,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(405), 1,
      sym_string_lit,
    STATE(58), 1,
      sym_LOCAL_ID_,
    STATE(513), 1,
      sym_execute_var_string,
  [12594] = 1,
    ACTIONS(1070), 4,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12601] = 4,
    ACTIONS(878), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(880), 1,
      aux_sym_order_by_clause_token1,
    STATE(504), 1,
      sym_partition_by_clause,
    STATE(595), 1,
      sym_order_by_clause,
  [12614] = 4,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(405), 1,
      sym_string_lit,
    STATE(58), 1,
      sym_LOCAL_ID_,
    STATE(477), 1,
      sym_execute_var_string,
  [12627] = 3,
    ACTIONS(1027), 1,
      anon_sym_RPAREN,
    STATE(597), 1,
      sym_row_or_range_clause,
    ACTIONS(882), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12638] = 4,
    ACTIONS(878), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(880), 1,
      aux_sym_order_by_clause_token1,
    STATE(508), 1,
      sym_partition_by_clause,
    STATE(571), 1,
      sym_order_by_clause,
  [12651] = 1,
    ACTIONS(942), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [12658] = 4,
    ACTIONS(1072), 1,
      aux_sym_RESULT_SETS_token1,
    ACTIONS(1074), 1,
      sym_RECOMPILE,
    STATE(249), 1,
      sym_execute_option,
    STATE(511), 1,
      sym_RESULT_SETS,
  [12671] = 3,
    ACTIONS(59), 1,
      aux_sym_real__token1,
    ACTIONS(1015), 1,
      aux_sym_constant_token3,
    STATE(139), 2,
      sym_real_,
      sym_float_,
  [12682] = 2,
    ACTIONS(1076), 2,
      aux_sym_go_statement_token1,
      aux_sym_id__token1,
    ACTIONS(1078), 2,
      sym_string_lit,
      aux_sym_id__token2,
  [12691] = 3,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(1080), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(333), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12702] = 3,
    ACTIONS(1082), 1,
      ts_builtin_sym_end,
    ACTIONS(1084), 1,
      aux_sym_go_statement_token1,
    STATE(467), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
  [12713] = 4,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(405), 1,
      sym_string_lit,
    STATE(58), 1,
      sym_LOCAL_ID_,
    STATE(488), 1,
      sym_execute_var_string,
  [12726] = 1,
    ACTIONS(960), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [12733] = 3,
    ACTIONS(1086), 1,
      aux_sym_constant_token3,
    STATE(517), 1,
      sym_integer,
    ACTIONS(437), 2,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
  [12744] = 1,
    ACTIONS(1088), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12751] = 4,
    ACTIONS(878), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(880), 1,
      aux_sym_order_by_clause_token1,
    STATE(531), 1,
      sym_partition_by_clause,
    STATE(577), 1,
      sym_order_by_clause,
  [12764] = 1,
    ACTIONS(1090), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12771] = 1,
    ACTIONS(1092), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12778] = 3,
    ACTIONS(1043), 1,
      anon_sym_RPAREN,
    STATE(675), 1,
      sym_row_or_range_clause,
    ACTIONS(882), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12789] = 4,
    ACTIONS(1072), 1,
      aux_sym_RESULT_SETS_token1,
    ACTIONS(1074), 1,
      sym_RECOMPILE,
    STATE(230), 1,
      sym_execute_option,
    STATE(511), 1,
      sym_RESULT_SETS,
  [12802] = 4,
    ACTIONS(1072), 1,
      aux_sym_RESULT_SETS_token1,
    ACTIONS(1074), 1,
      sym_RECOMPILE,
    STATE(257), 1,
      sym_execute_option,
    STATE(511), 1,
      sym_RESULT_SETS,
  [12815] = 3,
    ACTIONS(123), 1,
      aux_sym_real__token1,
    ACTIONS(1053), 1,
      aux_sym_constant_token3,
    STATE(302), 2,
      sym_real_,
      sym_float_,
  [12826] = 4,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(405), 1,
      sym_string_lit,
    STATE(58), 1,
      sym_LOCAL_ID_,
    STATE(68), 1,
      sym_execute_var_string,
  [12839] = 3,
    ACTIONS(1094), 1,
      anon_sym_RPAREN,
    STATE(593), 1,
      sym_row_or_range_clause,
    ACTIONS(882), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12850] = 3,
    ACTIONS(1096), 1,
      anon_sym_RPAREN,
    STATE(599), 1,
      sym_row_or_range_clause,
    ACTIONS(882), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12861] = 4,
    ACTIONS(1072), 1,
      aux_sym_RESULT_SETS_token1,
    ACTIONS(1074), 1,
      sym_RECOMPILE,
    STATE(239), 1,
      sym_execute_option,
    STATE(511), 1,
      sym_RESULT_SETS,
  [12874] = 1,
    ACTIONS(1098), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12881] = 4,
    ACTIONS(1072), 1,
      aux_sym_RESULT_SETS_token1,
    ACTIONS(1074), 1,
      sym_RECOMPILE,
    STATE(214), 1,
      sym_execute_option,
    STATE(511), 1,
      sym_RESULT_SETS,
  [12894] = 3,
    ACTIONS(1057), 1,
      anon_sym_RPAREN,
    STATE(572), 1,
      sym_row_or_range_clause,
    ACTIONS(882), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12905] = 3,
    ACTIONS(1100), 1,
      anon_sym_RPAREN,
    STATE(574), 1,
      sym_row_or_range_clause,
    ACTIONS(882), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12916] = 3,
    ACTIONS(775), 1,
      ts_builtin_sym_end,
    ACTIONS(1102), 1,
      aux_sym_go_statement_token1,
    STATE(467), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
  [12927] = 3,
    ACTIONS(163), 1,
      aux_sym_real__token1,
    ACTIONS(1037), 1,
      aux_sym_constant_token3,
    STATE(234), 2,
      sym_real_,
      sym_float_,
  [12938] = 1,
    ACTIONS(1105), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [12945] = 1,
    ACTIONS(1066), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12952] = 1,
    ACTIONS(1107), 3,
      aux_sym_over__token1,
      aux_sym_ignore_nulls__token1,
      aux_sym_respect_nulls__token1,
  [12958] = 1,
    ACTIONS(1109), 3,
      aux_sym_over__token1,
      aux_sym_ignore_nulls__token1,
      aux_sym_respect_nulls__token1,
  [12964] = 3,
    ACTIONS(1111), 1,
      anon_sym_RPAREN,
    ACTIONS(1113), 1,
      aux_sym_partition_by_clause_token1,
    STATE(576), 1,
      sym_partition_by_clause,
  [12974] = 3,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    ACTIONS(1115), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(62), 1,
      sym_udt_method_arguments,
  [12984] = 3,
    ACTIONS(1007), 1,
      anon_sym_RPAREN,
    ACTIONS(1117), 1,
      anon_sym_COMMA,
    STATE(475), 1,
      aux_sym_expression_list__repeat1,
  [12994] = 3,
    ACTIONS(1120), 1,
      anon_sym_COMMA,
    ACTIONS(1122), 1,
      anon_sym_RPAREN,
    STATE(478), 1,
      aux_sym_execute_body_repeat2,
  [13004] = 3,
    ACTIONS(1120), 1,
      anon_sym_COMMA,
    ACTIONS(1124), 1,
      anon_sym_RPAREN,
    STATE(485), 1,
      aux_sym_execute_body_repeat2,
  [13014] = 3,
    ACTIONS(1126), 1,
      anon_sym_COMMA,
    ACTIONS(1129), 1,
      anon_sym_RPAREN,
    STATE(478), 1,
      aux_sym_execute_body_repeat2,
  [13024] = 2,
    ACTIONS(1131), 1,
      aux_sym_constant_token3,
    ACTIONS(1133), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [13032] = 3,
    ACTIONS(1011), 1,
      anon_sym_RPAREN,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    STATE(475), 1,
      aux_sym_expression_list__repeat1,
  [13042] = 1,
    ACTIONS(1137), 3,
      aux_sym_over__token1,
      aux_sym_ignore_nulls__token1,
      aux_sym_respect_nulls__token1,
  [13048] = 3,
    ACTIONS(1113), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(1139), 1,
      anon_sym_RPAREN,
    STATE(659), 1,
      sym_partition_by_clause,
  [13058] = 2,
    ACTIONS(1141), 1,
      aux_sym_constant_token3,
    ACTIONS(1143), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [13066] = 2,
    ACTIONS(1145), 1,
      aux_sym_constant_token3,
    ACTIONS(1147), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [13074] = 3,
    ACTIONS(1120), 1,
      anon_sym_COMMA,
    ACTIONS(1149), 1,
      anon_sym_RPAREN,
    STATE(478), 1,
      aux_sym_execute_body_repeat2,
  [13084] = 3,
    ACTIONS(1113), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(1151), 1,
      anon_sym_RPAREN,
    STATE(602), 1,
      sym_partition_by_clause,
  [13094] = 3,
    ACTIONS(1031), 1,
      anon_sym_RPAREN,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    STATE(480), 1,
      aux_sym_expression_list__repeat1,
  [13104] = 3,
    ACTIONS(1120), 1,
      anon_sym_COMMA,
    ACTIONS(1153), 1,
      anon_sym_RPAREN,
    STATE(476), 1,
      aux_sym_execute_body_repeat2,
  [13114] = 1,
    ACTIONS(1155), 2,
      sym_LOGIN,
      sym_USER,
  [13119] = 2,
    ACTIONS(737), 1,
      aux_sym_over__token1,
    STATE(289), 1,
      sym_over_clause,
  [13126] = 2,
    ACTIONS(998), 1,
      aux_sym_over__token1,
    STATE(110), 1,
      sym_over_clause,
  [13133] = 2,
    ACTIONS(1157), 1,
      aux_sym_within_group__token1,
    STATE(681), 1,
      sym_within_group_,
  [13140] = 2,
    ACTIONS(1157), 1,
      aux_sym_within_group__token1,
    STATE(679), 1,
      sym_within_group_,
  [13147] = 2,
    ACTIONS(880), 1,
      aux_sym_order_by_clause_token1,
    STATE(666), 1,
      sym_order_by_clause,
  [13154] = 2,
    ACTIONS(880), 1,
      aux_sym_order_by_clause_token1,
    STATE(660), 1,
      sym_order_by_clause,
  [13161] = 2,
    ACTIONS(1159), 1,
      aux_sym_over__token1,
    STATE(652), 1,
      sym_over_,
  [13168] = 2,
    ACTIONS(1161), 1,
      anon_sym_COMMA,
    ACTIONS(1163), 1,
      anon_sym_RPAREN,
  [13175] = 2,
    ACTIONS(1159), 1,
      aux_sym_over__token1,
    STATE(641), 1,
      sym_over_,
  [13182] = 2,
    ACTIONS(1159), 1,
      aux_sym_over__token1,
    STATE(590), 1,
      sym_over_,
  [13189] = 1,
    ACTIONS(1165), 2,
      anon_sym_RPAREN,
      aux_sym_window_frame_extent_token2,
  [13194] = 2,
    ACTIONS(998), 1,
      aux_sym_over__token1,
    STATE(155), 1,
      sym_over_clause,
  [13201] = 2,
    ACTIONS(1159), 1,
      aux_sym_over__token1,
    STATE(632), 1,
      sym_over_,
  [13208] = 2,
    ACTIONS(1159), 1,
      aux_sym_over__token1,
    STATE(617), 1,
      sym_over_,
  [13215] = 2,
    ACTIONS(880), 1,
      aux_sym_order_by_clause_token1,
    STATE(598), 1,
      sym_order_by_clause,
  [13222] = 2,
    ACTIONS(1167), 1,
      aux_sym_window_frame_following_token2,
    ACTIONS(1169), 1,
      aux_sym_window_frame_preceding_token1,
  [13229] = 2,
    ACTIONS(1171), 1,
      anon_sym_LPAREN,
    STATE(363), 1,
      sym_lag_lead_args,
  [13236] = 2,
    ACTIONS(1171), 1,
      anon_sym_LPAREN,
    STATE(379), 1,
      sym_lag_lead_args,
  [13243] = 2,
    ACTIONS(880), 1,
      aux_sym_order_by_clause_token1,
    STATE(573), 1,
      sym_order_by_clause,
  [13250] = 1,
    ACTIONS(1173), 2,
      anon_sym_RPAREN,
      aux_sym_window_frame_extent_token2,
  [13255] = 2,
    ACTIONS(1171), 1,
      anon_sym_LPAREN,
    STATE(385), 1,
      sym_lag_lead_args,
  [13262] = 1,
    ACTIONS(1175), 2,
      sym_NONE,
      sym_UNDEFINED,
  [13267] = 1,
    ACTIONS(936), 2,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
  [13272] = 1,
    ACTIONS(1129), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13277] = 1,
    ACTIONS(1177), 2,
      sym_LOGIN,
      sym_USER,
  [13282] = 1,
    ACTIONS(1179), 2,
      sym_LOGIN,
      sym_USER,
  [13287] = 1,
    ACTIONS(1181), 2,
      sym_NONE,
      sym_UNDEFINED,
  [13292] = 1,
    ACTIONS(932), 2,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
  [13297] = 2,
    ACTIONS(1157), 1,
      aux_sym_within_group__token1,
    STATE(549), 1,
      sym_within_group_,
  [13304] = 2,
    ACTIONS(737), 1,
      aux_sym_over__token1,
    STATE(310), 1,
      sym_over_clause,
  [13311] = 2,
    ACTIONS(1183), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(357), 1,
      sym_execute_statement_arg_named,
  [13318] = 2,
    ACTIONS(737), 1,
      aux_sym_over__token1,
    STATE(285), 1,
      sym_over_clause,
  [13325] = 2,
    ACTIONS(1185), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(221), 1,
      sym_execute_statement_arg_named,
  [13332] = 2,
    ACTIONS(1187), 1,
      anon_sym_COMMA,
    ACTIONS(1189), 1,
      anon_sym_RPAREN,
  [13339] = 2,
    ACTIONS(998), 1,
      aux_sym_over__token1,
    STATE(125), 1,
      sym_over_clause,
  [13346] = 2,
    ACTIONS(1049), 1,
      aux_sym_over__token1,
    STATE(240), 1,
      sym_over_clause,
  [13353] = 2,
    ACTIONS(1049), 1,
      aux_sym_over__token1,
    STATE(233), 1,
      sym_over_clause,
  [13360] = 2,
    ACTIONS(1159), 1,
      aux_sym_over__token1,
    STATE(670), 1,
      sym_over_,
  [13367] = 2,
    ACTIONS(998), 1,
      aux_sym_over__token1,
    STATE(122), 1,
      sym_over_clause,
  [13374] = 2,
    ACTIONS(1049), 1,
      aux_sym_over__token1,
    STATE(255), 1,
      sym_over_clause,
  [13381] = 2,
    ACTIONS(880), 1,
      aux_sym_order_by_clause_token1,
    STATE(568), 1,
      sym_order_by_clause,
  [13388] = 2,
    ACTIONS(880), 1,
      aux_sym_order_by_clause_token1,
    STATE(686), 1,
      sym_order_by_clause,
  [13395] = 2,
    ACTIONS(737), 1,
      aux_sym_over__token1,
    STATE(293), 1,
      sym_over_clause,
  [13402] = 1,
    ACTIONS(1191), 2,
      anon_sym_RPAREN,
      aux_sym_window_frame_extent_token2,
  [13407] = 2,
    ACTIONS(1049), 1,
      aux_sym_over__token1,
    STATE(248), 1,
      sym_over_clause,
  [13414] = 2,
    ACTIONS(67), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(60), 1,
      sym_LOCAL_ID_,
  [13421] = 2,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
    ACTIONS(1115), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [13428] = 1,
    ACTIONS(595), 1,
      anon_sym_EQ,
  [13432] = 1,
    ACTIONS(1193), 1,
      aux_sym_window_frame_extent_token2,
  [13436] = 1,
    ACTIONS(1195), 1,
      aux_sym_over__token1,
  [13440] = 1,
    ACTIONS(1197), 1,
      anon_sym_RPAREN,
  [13444] = 1,
    ACTIONS(1199), 1,
      aux_sym_real__token2,
  [13448] = 1,
    ACTIONS(1201), 1,
      anon_sym_RPAREN,
  [13452] = 1,
    ACTIONS(1203), 1,
      anon_sym_RPAREN,
  [13456] = 1,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
  [13460] = 1,
    ACTIONS(1205), 1,
      anon_sym_EQ,
  [13464] = 1,
    ACTIONS(1207), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [13468] = 1,
    ACTIONS(1209), 1,
      anon_sym_RPAREN,
  [13472] = 1,
    ACTIONS(1211), 1,
      aux_sym_within_group__token2,
  [13476] = 1,
    ACTIONS(1213), 1,
      anon_sym_LPAREN,
  [13480] = 1,
    ACTIONS(1215), 1,
      anon_sym_RPAREN,
  [13484] = 1,
    ACTIONS(1217), 1,
      aux_sym_partition_by_clause_token2,
  [13488] = 1,
    ACTIONS(1219), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [13492] = 1,
    ACTIONS(1221), 1,
      aux_sym_partition_by_clause_token2,
  [13496] = 1,
    ACTIONS(1223), 1,
      aux_sym_constant_token3,
  [13500] = 1,
    ACTIONS(1043), 1,
      anon_sym_RPAREN,
  [13504] = 1,
    ACTIONS(1225), 1,
      anon_sym_LPAREN,
  [13508] = 1,
    ACTIONS(1227), 1,
      aux_sym_real__token2,
  [13512] = 1,
    ACTIONS(1229), 1,
      aux_sym_constant_token3,
  [13516] = 1,
    ACTIONS(1231), 1,
      aux_sym_constant_token3,
  [13520] = 1,
    ACTIONS(1233), 1,
      anon_sym_RPAREN,
  [13524] = 1,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
  [13528] = 1,
    ACTIONS(1235), 1,
      anon_sym_RPAREN,
  [13532] = 1,
    ACTIONS(1237), 1,
      anon_sym_RPAREN,
  [13536] = 1,
    ACTIONS(1239), 1,
      anon_sym_RPAREN,
  [13540] = 1,
    ACTIONS(1241), 1,
      sym_string_lit,
  [13544] = 1,
    ACTIONS(1243), 1,
      anon_sym_RPAREN,
  [13548] = 1,
    ACTIONS(1245), 1,
      aux_sym_partition_by_clause_token2,
  [13552] = 1,
    ACTIONS(1247), 1,
      anon_sym_RPAREN,
  [13556] = 1,
    ACTIONS(1249), 1,
      anon_sym_LPAREN,
  [13560] = 1,
    ACTIONS(1057), 1,
      anon_sym_RPAREN,
  [13564] = 1,
    ACTIONS(1251), 1,
      anon_sym_RPAREN,
  [13568] = 1,
    ACTIONS(1100), 1,
      anon_sym_RPAREN,
  [13572] = 1,
    ACTIONS(1253), 1,
      anon_sym_RPAREN,
  [13576] = 1,
    ACTIONS(1255), 1,
      anon_sym_RPAREN,
  [13580] = 1,
    ACTIONS(1257), 1,
      anon_sym_RPAREN,
  [13584] = 1,
    ACTIONS(1259), 1,
      anon_sym_RPAREN,
  [13588] = 1,
    ACTIONS(1261), 1,
      anon_sym_RPAREN,
  [13592] = 1,
    ACTIONS(1263), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [13596] = 1,
    ACTIONS(1169), 1,
      aux_sym_window_frame_preceding_token1,
  [13600] = 1,
    ACTIONS(1265), 1,
      sym_string_lit,
  [13604] = 1,
    ACTIONS(818), 1,
      aux_sym_real__token2,
  [13608] = 1,
    ACTIONS(1267), 1,
      anon_sym_RPAREN,
  [13612] = 1,
    ACTIONS(1269), 1,
      aux_sym_constant_token3,
  [13616] = 1,
    ACTIONS(1271), 1,
      anon_sym_RPAREN,
  [13620] = 1,
    ACTIONS(1273), 1,
      anon_sym_RPAREN,
  [13624] = 1,
    ACTIONS(1275), 1,
      anon_sym_RPAREN,
  [13628] = 1,
    ACTIONS(1277), 1,
      anon_sym_RPAREN,
  [13632] = 1,
    ACTIONS(1279), 1,
      anon_sym_RPAREN,
  [13636] = 1,
    ACTIONS(1281), 1,
      aux_sym_ignore_nulls__token2,
  [13640] = 1,
    ACTIONS(1283), 1,
      anon_sym_LPAREN,
  [13644] = 1,
    ACTIONS(1285), 1,
      anon_sym_RPAREN,
  [13648] = 1,
    ACTIONS(1287), 1,
      anon_sym_RPAREN,
  [13652] = 1,
    ACTIONS(1289), 1,
      anon_sym_RPAREN,
  [13656] = 1,
    ACTIONS(1027), 1,
      anon_sym_RPAREN,
  [13660] = 1,
    ACTIONS(1291), 1,
      anon_sym_RPAREN,
  [13664] = 1,
    ACTIONS(1293), 1,
      anon_sym_LPAREN,
  [13668] = 1,
    ACTIONS(1096), 1,
      anon_sym_RPAREN,
  [13672] = 1,
    ACTIONS(1295), 1,
      anon_sym_RPAREN,
  [13676] = 1,
    ACTIONS(1297), 1,
      anon_sym_RPAREN,
  [13680] = 1,
    ACTIONS(1299), 1,
      anon_sym_RPAREN,
  [13684] = 1,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
  [13688] = 1,
    ACTIONS(1301), 1,
      anon_sym_RPAREN,
  [13692] = 1,
    ACTIONS(1303), 1,
      aux_sym_RESULT_SETS_token2,
  [13696] = 1,
    ACTIONS(1305), 1,
      anon_sym_LPAREN,
  [13700] = 1,
    ACTIONS(1169), 1,
      aux_sym_window_frame_preceding_token3,
  [13704] = 1,
    ACTIONS(1307), 1,
      anon_sym_LPAREN,
  [13708] = 1,
    ACTIONS(1309), 1,
      aux_sym_execute_body_token1,
  [13712] = 1,
    ACTIONS(886), 1,
      anon_sym_EQ,
  [13716] = 1,
    ACTIONS(1311), 1,
      anon_sym_RPAREN,
  [13720] = 1,
    ACTIONS(1313), 1,
      anon_sym_LPAREN,
  [13724] = 1,
    ACTIONS(1315), 1,
      anon_sym_RPAREN,
  [13728] = 1,
    ACTIONS(1317), 1,
      anon_sym_RPAREN,
  [13732] = 1,
    ACTIONS(1319), 1,
      anon_sym_LPAREN,
  [13736] = 1,
    ACTIONS(1321), 1,
      aux_sym_over__token1,
  [13740] = 1,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
  [13744] = 1,
    ACTIONS(1323), 1,
      anon_sym_LPAREN,
  [13748] = 1,
    ACTIONS(1325), 1,
      anon_sym_LPAREN,
  [13752] = 1,
    ACTIONS(1327), 1,
      anon_sym_EQ,
  [13756] = 1,
    ACTIONS(1329), 1,
      anon_sym_LPAREN,
  [13760] = 1,
    ACTIONS(1331), 1,
      anon_sym_LPAREN,
  [13764] = 1,
    ACTIONS(1333), 1,
      anon_sym_LPAREN,
  [13768] = 1,
    ACTIONS(1335), 1,
      anon_sym_LPAREN,
  [13772] = 1,
    ACTIONS(1337), 1,
      anon_sym_LPAREN,
  [13776] = 1,
    ACTIONS(1339), 1,
      anon_sym_RPAREN,
  [13780] = 1,
    ACTIONS(1341), 1,
      anon_sym_LPAREN,
  [13784] = 1,
    ACTIONS(1343), 1,
      anon_sym_RPAREN,
  [13788] = 1,
    ACTIONS(1345), 1,
      anon_sym_RPAREN,
  [13792] = 1,
    ACTIONS(1347), 1,
      anon_sym_RPAREN,
  [13796] = 1,
    ACTIONS(1349), 1,
      anon_sym_RPAREN,
  [13800] = 1,
    ACTIONS(1351), 1,
      aux_sym_constant_token3,
  [13804] = 1,
    ACTIONS(1353), 1,
      anon_sym_LPAREN,
  [13808] = 1,
    ACTIONS(1355), 1,
      anon_sym_LPAREN,
  [13812] = 1,
    ACTIONS(1357), 1,
      anon_sym_LPAREN,
  [13816] = 1,
    ACTIONS(1359), 1,
      anon_sym_LPAREN,
  [13820] = 1,
    ACTIONS(1361), 1,
      anon_sym_LPAREN,
  [13824] = 1,
    ACTIONS(1363), 1,
      anon_sym_LPAREN,
  [13828] = 1,
    ACTIONS(1365), 1,
      anon_sym_LPAREN,
  [13832] = 1,
    ACTIONS(1367), 1,
      anon_sym_LPAREN,
  [13836] = 1,
    ACTIONS(1369), 1,
      anon_sym_LPAREN,
  [13840] = 1,
    ACTIONS(1371), 1,
      anon_sym_LPAREN,
  [13844] = 1,
    ACTIONS(1373), 1,
      anon_sym_LPAREN,
  [13848] = 1,
    ACTIONS(1375), 1,
      anon_sym_LPAREN,
  [13852] = 1,
    ACTIONS(1377), 1,
      anon_sym_LPAREN,
  [13856] = 1,
    ACTIONS(1379), 1,
      anon_sym_LPAREN,
  [13860] = 1,
    ACTIONS(1381), 1,
      anon_sym_LPAREN,
  [13864] = 1,
    ACTIONS(1383), 1,
      anon_sym_LPAREN,
  [13868] = 1,
    ACTIONS(1385), 1,
      anon_sym_LPAREN,
  [13872] = 1,
    ACTIONS(1387), 1,
      anon_sym_LPAREN,
  [13876] = 1,
    ACTIONS(1389), 1,
      anon_sym_LPAREN,
  [13880] = 1,
    ACTIONS(1391), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [13884] = 1,
    ACTIONS(1393), 1,
      anon_sym_LPAREN,
  [13888] = 1,
    ACTIONS(1395), 1,
      anon_sym_LPAREN,
  [13892] = 1,
    ACTIONS(1397), 1,
      anon_sym_LPAREN,
  [13896] = 1,
    ACTIONS(1399), 1,
      anon_sym_RPAREN,
  [13900] = 1,
    ACTIONS(1401), 1,
      anon_sym_LPAREN,
  [13904] = 1,
    ACTIONS(1403), 1,
      anon_sym_LPAREN,
  [13908] = 1,
    ACTIONS(1405), 1,
      anon_sym_RPAREN,
  [13912] = 1,
    ACTIONS(1407), 1,
      anon_sym_RPAREN,
  [13916] = 1,
    ACTIONS(1409), 1,
      anon_sym_RPAREN,
  [13920] = 1,
    ACTIONS(1411), 1,
      anon_sym_RPAREN,
  [13924] = 1,
    ACTIONS(1413), 1,
      anon_sym_LPAREN,
  [13928] = 1,
    ACTIONS(1415), 1,
      anon_sym_LPAREN,
  [13932] = 1,
    ACTIONS(1417), 1,
      anon_sym_RPAREN,
  [13936] = 1,
    ACTIONS(1419), 1,
      anon_sym_RPAREN,
  [13940] = 1,
    ACTIONS(1421), 1,
      anon_sym_RPAREN,
  [13944] = 1,
    ACTIONS(1423), 1,
      anon_sym_RPAREN,
  [13948] = 1,
    ACTIONS(1425), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [13952] = 1,
    ACTIONS(1427), 1,
      anon_sym_RPAREN,
  [13956] = 1,
    ACTIONS(1429), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [13960] = 1,
    ACTIONS(1431), 1,
      anon_sym_LPAREN,
  [13964] = 1,
    ACTIONS(1433), 1,
      anon_sym_LPAREN,
  [13968] = 1,
    ACTIONS(1435), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [13972] = 1,
    ACTIONS(1437), 1,
      anon_sym_RPAREN,
  [13976] = 1,
    ACTIONS(1439), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [13980] = 1,
    ACTIONS(1094), 1,
      anon_sym_RPAREN,
  [13984] = 1,
    ACTIONS(1441), 1,
      anon_sym_RPAREN,
  [13988] = 1,
    ACTIONS(1443), 1,
      anon_sym_LPAREN,
  [13992] = 1,
    ACTIONS(1445), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [13996] = 1,
    ACTIONS(1447), 1,
      anon_sym_LPAREN,
  [14000] = 1,
    ACTIONS(1449), 1,
      anon_sym_LPAREN,
  [14004] = 1,
    ACTIONS(1451), 1,
      anon_sym_LPAREN,
  [14008] = 1,
    ACTIONS(1453), 1,
      aux_sym_ignore_nulls__token2,
  [14012] = 1,
    ACTIONS(1455), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [14016] = 1,
    ACTIONS(1457), 1,
      anon_sym_RPAREN,
  [14020] = 1,
    ACTIONS(1459), 1,
      anon_sym_RPAREN,
  [14024] = 1,
    ACTIONS(1461), 1,
      anon_sym_RPAREN,
  [14028] = 1,
    ACTIONS(1463), 1,
      ts_builtin_sym_end,
  [14032] = 1,
    ACTIONS(1465), 1,
      anon_sym_LPAREN,
  [14036] = 1,
    ACTIONS(1467), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 141,
  [SMALL_STATE(5)] = 275,
  [SMALL_STATE(6)] = 409,
  [SMALL_STATE(7)] = 543,
  [SMALL_STATE(8)] = 674,
  [SMALL_STATE(9)] = 805,
  [SMALL_STATE(10)] = 936,
  [SMALL_STATE(11)] = 1067,
  [SMALL_STATE(12)] = 1198,
  [SMALL_STATE(13)] = 1329,
  [SMALL_STATE(14)] = 1459,
  [SMALL_STATE(15)] = 1589,
  [SMALL_STATE(16)] = 1719,
  [SMALL_STATE(17)] = 1849,
  [SMALL_STATE(18)] = 1979,
  [SMALL_STATE(19)] = 2109,
  [SMALL_STATE(20)] = 2236,
  [SMALL_STATE(21)] = 2363,
  [SMALL_STATE(22)] = 2490,
  [SMALL_STATE(23)] = 2617,
  [SMALL_STATE(24)] = 2741,
  [SMALL_STATE(25)] = 2865,
  [SMALL_STATE(26)] = 2989,
  [SMALL_STATE(27)] = 3113,
  [SMALL_STATE(28)] = 3237,
  [SMALL_STATE(29)] = 3361,
  [SMALL_STATE(30)] = 3485,
  [SMALL_STATE(31)] = 3609,
  [SMALL_STATE(32)] = 3733,
  [SMALL_STATE(33)] = 3857,
  [SMALL_STATE(34)] = 3981,
  [SMALL_STATE(35)] = 4105,
  [SMALL_STATE(36)] = 4229,
  [SMALL_STATE(37)] = 4353,
  [SMALL_STATE(38)] = 4477,
  [SMALL_STATE(39)] = 4601,
  [SMALL_STATE(40)] = 4725,
  [SMALL_STATE(41)] = 4849,
  [SMALL_STATE(42)] = 4973,
  [SMALL_STATE(43)] = 5097,
  [SMALL_STATE(44)] = 5221,
  [SMALL_STATE(45)] = 5345,
  [SMALL_STATE(46)] = 5469,
  [SMALL_STATE(47)] = 5514,
  [SMALL_STATE(48)] = 5584,
  [SMALL_STATE(49)] = 5654,
  [SMALL_STATE(50)] = 5706,
  [SMALL_STATE(51)] = 5758,
  [SMALL_STATE(52)] = 5791,
  [SMALL_STATE(53)] = 5845,
  [SMALL_STATE(54)] = 5871,
  [SMALL_STATE(55)] = 5922,
  [SMALL_STATE(56)] = 5946,
  [SMALL_STATE(57)] = 5988,
  [SMALL_STATE(58)] = 6033,
  [SMALL_STATE(59)] = 6058,
  [SMALL_STATE(60)] = 6081,
  [SMALL_STATE(61)] = 6106,
  [SMALL_STATE(62)] = 6151,
  [SMALL_STATE(63)] = 6187,
  [SMALL_STATE(64)] = 6209,
  [SMALL_STATE(65)] = 6255,
  [SMALL_STATE(66)] = 6301,
  [SMALL_STATE(67)] = 6327,
  [SMALL_STATE(68)] = 6369,
  [SMALL_STATE(69)] = 6391,
  [SMALL_STATE(70)] = 6430,
  [SMALL_STATE(71)] = 6458,
  [SMALL_STATE(72)] = 6478,
  [SMALL_STATE(73)] = 6496,
  [SMALL_STATE(74)] = 6516,
  [SMALL_STATE(75)] = 6538,
  [SMALL_STATE(76)] = 6560,
  [SMALL_STATE(77)] = 6580,
  [SMALL_STATE(78)] = 6600,
  [SMALL_STATE(79)] = 6620,
  [SMALL_STATE(80)] = 6640,
  [SMALL_STATE(81)] = 6660,
  [SMALL_STATE(82)] = 6684,
  [SMALL_STATE(83)] = 6708,
  [SMALL_STATE(84)] = 6728,
  [SMALL_STATE(85)] = 6750,
  [SMALL_STATE(86)] = 6770,
  [SMALL_STATE(87)] = 6814,
  [SMALL_STATE(88)] = 6836,
  [SMALL_STATE(89)] = 6858,
  [SMALL_STATE(90)] = 6878,
  [SMALL_STATE(91)] = 6920,
  [SMALL_STATE(92)] = 6942,
  [SMALL_STATE(93)] = 6970,
  [SMALL_STATE(94)] = 6990,
  [SMALL_STATE(95)] = 7010,
  [SMALL_STATE(96)] = 7030,
  [SMALL_STATE(97)] = 7048,
  [SMALL_STATE(98)] = 7065,
  [SMALL_STATE(99)] = 7084,
  [SMALL_STATE(100)] = 7105,
  [SMALL_STATE(101)] = 7126,
  [SMALL_STATE(102)] = 7147,
  [SMALL_STATE(103)] = 7184,
  [SMALL_STATE(104)] = 7205,
  [SMALL_STATE(105)] = 7226,
  [SMALL_STATE(106)] = 7247,
  [SMALL_STATE(107)] = 7268,
  [SMALL_STATE(108)] = 7289,
  [SMALL_STATE(109)] = 7326,
  [SMALL_STATE(110)] = 7345,
  [SMALL_STATE(111)] = 7363,
  [SMALL_STATE(112)] = 7381,
  [SMALL_STATE(113)] = 7401,
  [SMALL_STATE(114)] = 7419,
  [SMALL_STATE(115)] = 7437,
  [SMALL_STATE(116)] = 7455,
  [SMALL_STATE(117)] = 7473,
  [SMALL_STATE(118)] = 7491,
  [SMALL_STATE(119)] = 7509,
  [SMALL_STATE(120)] = 7527,
  [SMALL_STATE(121)] = 7545,
  [SMALL_STATE(122)] = 7563,
  [SMALL_STATE(123)] = 7581,
  [SMALL_STATE(124)] = 7599,
  [SMALL_STATE(125)] = 7617,
  [SMALL_STATE(126)] = 7635,
  [SMALL_STATE(127)] = 7655,
  [SMALL_STATE(128)] = 7673,
  [SMALL_STATE(129)] = 7691,
  [SMALL_STATE(130)] = 7709,
  [SMALL_STATE(131)] = 7727,
  [SMALL_STATE(132)] = 7745,
  [SMALL_STATE(133)] = 7763,
  [SMALL_STATE(134)] = 7783,
  [SMALL_STATE(135)] = 7801,
  [SMALL_STATE(136)] = 7819,
  [SMALL_STATE(137)] = 7837,
  [SMALL_STATE(138)] = 7875,
  [SMALL_STATE(139)] = 7893,
  [SMALL_STATE(140)] = 7911,
  [SMALL_STATE(141)] = 7931,
  [SMALL_STATE(142)] = 7951,
  [SMALL_STATE(143)] = 7969,
  [SMALL_STATE(144)] = 7987,
  [SMALL_STATE(145)] = 8005,
  [SMALL_STATE(146)] = 8023,
  [SMALL_STATE(147)] = 8041,
  [SMALL_STATE(148)] = 8061,
  [SMALL_STATE(149)] = 8081,
  [SMALL_STATE(150)] = 8099,
  [SMALL_STATE(151)] = 8135,
  [SMALL_STATE(152)] = 8153,
  [SMALL_STATE(153)] = 8171,
  [SMALL_STATE(154)] = 8189,
  [SMALL_STATE(155)] = 8207,
  [SMALL_STATE(156)] = 8225,
  [SMALL_STATE(157)] = 8243,
  [SMALL_STATE(158)] = 8261,
  [SMALL_STATE(159)] = 8278,
  [SMALL_STATE(160)] = 8297,
  [SMALL_STATE(161)] = 8314,
  [SMALL_STATE(162)] = 8331,
  [SMALL_STATE(163)] = 8348,
  [SMALL_STATE(164)] = 8365,
  [SMALL_STATE(165)] = 8382,
  [SMALL_STATE(166)] = 8399,
  [SMALL_STATE(167)] = 8420,
  [SMALL_STATE(168)] = 8437,
  [SMALL_STATE(169)] = 8454,
  [SMALL_STATE(170)] = 8471,
  [SMALL_STATE(171)] = 8488,
  [SMALL_STATE(172)] = 8505,
  [SMALL_STATE(173)] = 8526,
  [SMALL_STATE(174)] = 8546,
  [SMALL_STATE(175)] = 8566,
  [SMALL_STATE(176)] = 8584,
  [SMALL_STATE(177)] = 8602,
  [SMALL_STATE(178)] = 8620,
  [SMALL_STATE(179)] = 8636,
  [SMALL_STATE(180)] = 8656,
  [SMALL_STATE(181)] = 8676,
  [SMALL_STATE(182)] = 8694,
  [SMALL_STATE(183)] = 8714,
  [SMALL_STATE(184)] = 8736,
  [SMALL_STATE(185)] = 8754,
  [SMALL_STATE(186)] = 8774,
  [SMALL_STATE(187)] = 8794,
  [SMALL_STATE(188)] = 8812,
  [SMALL_STATE(189)] = 8830,
  [SMALL_STATE(190)] = 8846,
  [SMALL_STATE(191)] = 8868,
  [SMALL_STATE(192)] = 8888,
  [SMALL_STATE(193)] = 8908,
  [SMALL_STATE(194)] = 8924,
  [SMALL_STATE(195)] = 8944,
  [SMALL_STATE(196)] = 8959,
  [SMALL_STATE(197)] = 8974,
  [SMALL_STATE(198)] = 8989,
  [SMALL_STATE(199)] = 9004,
  [SMALL_STATE(200)] = 9019,
  [SMALL_STATE(201)] = 9034,
  [SMALL_STATE(202)] = 9049,
  [SMALL_STATE(203)] = 9064,
  [SMALL_STATE(204)] = 9079,
  [SMALL_STATE(205)] = 9094,
  [SMALL_STATE(206)] = 9109,
  [SMALL_STATE(207)] = 9124,
  [SMALL_STATE(208)] = 9139,
  [SMALL_STATE(209)] = 9154,
  [SMALL_STATE(210)] = 9169,
  [SMALL_STATE(211)] = 9184,
  [SMALL_STATE(212)] = 9199,
  [SMALL_STATE(213)] = 9218,
  [SMALL_STATE(214)] = 9233,
  [SMALL_STATE(215)] = 9252,
  [SMALL_STATE(216)] = 9267,
  [SMALL_STATE(217)] = 9282,
  [SMALL_STATE(218)] = 9297,
  [SMALL_STATE(219)] = 9312,
  [SMALL_STATE(220)] = 9327,
  [SMALL_STATE(221)] = 9342,
  [SMALL_STATE(222)] = 9357,
  [SMALL_STATE(223)] = 9372,
  [SMALL_STATE(224)] = 9389,
  [SMALL_STATE(225)] = 9404,
  [SMALL_STATE(226)] = 9419,
  [SMALL_STATE(227)] = 9434,
  [SMALL_STATE(228)] = 9449,
  [SMALL_STATE(229)] = 9464,
  [SMALL_STATE(230)] = 9483,
  [SMALL_STATE(231)] = 9502,
  [SMALL_STATE(232)] = 9517,
  [SMALL_STATE(233)] = 9536,
  [SMALL_STATE(234)] = 9551,
  [SMALL_STATE(235)] = 9566,
  [SMALL_STATE(236)] = 9581,
  [SMALL_STATE(237)] = 9596,
  [SMALL_STATE(238)] = 9615,
  [SMALL_STATE(239)] = 9630,
  [SMALL_STATE(240)] = 9649,
  [SMALL_STATE(241)] = 9664,
  [SMALL_STATE(242)] = 9679,
  [SMALL_STATE(243)] = 9698,
  [SMALL_STATE(244)] = 9713,
  [SMALL_STATE(245)] = 9730,
  [SMALL_STATE(246)] = 9747,
  [SMALL_STATE(247)] = 9762,
  [SMALL_STATE(248)] = 9777,
  [SMALL_STATE(249)] = 9792,
  [SMALL_STATE(250)] = 9811,
  [SMALL_STATE(251)] = 9826,
  [SMALL_STATE(252)] = 9841,
  [SMALL_STATE(253)] = 9856,
  [SMALL_STATE(254)] = 9871,
  [SMALL_STATE(255)] = 9886,
  [SMALL_STATE(256)] = 9901,
  [SMALL_STATE(257)] = 9915,
  [SMALL_STATE(258)] = 9929,
  [SMALL_STATE(259)] = 9957,
  [SMALL_STATE(260)] = 9973,
  [SMALL_STATE(261)] = 9989,
  [SMALL_STATE(262)] = 10007,
  [SMALL_STATE(263)] = 10023,
  [SMALL_STATE(264)] = 10043,
  [SMALL_STATE(265)] = 10059,
  [SMALL_STATE(266)] = 10077,
  [SMALL_STATE(267)] = 10095,
  [SMALL_STATE(268)] = 10113,
  [SMALL_STATE(269)] = 10131,
  [SMALL_STATE(270)] = 10147,
  [SMALL_STATE(271)] = 10163,
  [SMALL_STATE(272)] = 10177,
  [SMALL_STATE(273)] = 10191,
  [SMALL_STATE(274)] = 10205,
  [SMALL_STATE(275)] = 10216,
  [SMALL_STATE(276)] = 10227,
  [SMALL_STATE(277)] = 10238,
  [SMALL_STATE(278)] = 10249,
  [SMALL_STATE(279)] = 10264,
  [SMALL_STATE(280)] = 10275,
  [SMALL_STATE(281)] = 10286,
  [SMALL_STATE(282)] = 10297,
  [SMALL_STATE(283)] = 10312,
  [SMALL_STATE(284)] = 10325,
  [SMALL_STATE(285)] = 10336,
  [SMALL_STATE(286)] = 10347,
  [SMALL_STATE(287)] = 10360,
  [SMALL_STATE(288)] = 10373,
  [SMALL_STATE(289)] = 10384,
  [SMALL_STATE(290)] = 10395,
  [SMALL_STATE(291)] = 10408,
  [SMALL_STATE(292)] = 10419,
  [SMALL_STATE(293)] = 10430,
  [SMALL_STATE(294)] = 10441,
  [SMALL_STATE(295)] = 10452,
  [SMALL_STATE(296)] = 10463,
  [SMALL_STATE(297)] = 10474,
  [SMALL_STATE(298)] = 10485,
  [SMALL_STATE(299)] = 10496,
  [SMALL_STATE(300)] = 10507,
  [SMALL_STATE(301)] = 10518,
  [SMALL_STATE(302)] = 10529,
  [SMALL_STATE(303)] = 10540,
  [SMALL_STATE(304)] = 10551,
  [SMALL_STATE(305)] = 10564,
  [SMALL_STATE(306)] = 10575,
  [SMALL_STATE(307)] = 10588,
  [SMALL_STATE(308)] = 10601,
  [SMALL_STATE(309)] = 10612,
  [SMALL_STATE(310)] = 10623,
  [SMALL_STATE(311)] = 10634,
  [SMALL_STATE(312)] = 10653,
  [SMALL_STATE(313)] = 10666,
  [SMALL_STATE(314)] = 10681,
  [SMALL_STATE(315)] = 10696,
  [SMALL_STATE(316)] = 10719,
  [SMALL_STATE(317)] = 10742,
  [SMALL_STATE(318)] = 10755,
  [SMALL_STATE(319)] = 10778,
  [SMALL_STATE(320)] = 10791,
  [SMALL_STATE(321)] = 10804,
  [SMALL_STATE(322)] = 10817,
  [SMALL_STATE(323)] = 10830,
  [SMALL_STATE(324)] = 10843,
  [SMALL_STATE(325)] = 10856,
  [SMALL_STATE(326)] = 10869,
  [SMALL_STATE(327)] = 10882,
  [SMALL_STATE(328)] = 10895,
  [SMALL_STATE(329)] = 10917,
  [SMALL_STATE(330)] = 10939,
  [SMALL_STATE(331)] = 10951,
  [SMALL_STATE(332)] = 10963,
  [SMALL_STATE(333)] = 10985,
  [SMALL_STATE(334)] = 11001,
  [SMALL_STATE(335)] = 11013,
  [SMALL_STATE(336)] = 11025,
  [SMALL_STATE(337)] = 11037,
  [SMALL_STATE(338)] = 11049,
  [SMALL_STATE(339)] = 11063,
  [SMALL_STATE(340)] = 11085,
  [SMALL_STATE(341)] = 11107,
  [SMALL_STATE(342)] = 11121,
  [SMALL_STATE(343)] = 11133,
  [SMALL_STATE(344)] = 11145,
  [SMALL_STATE(345)] = 11161,
  [SMALL_STATE(346)] = 11174,
  [SMALL_STATE(347)] = 11183,
  [SMALL_STATE(348)] = 11198,
  [SMALL_STATE(349)] = 11217,
  [SMALL_STATE(350)] = 11236,
  [SMALL_STATE(351)] = 11255,
  [SMALL_STATE(352)] = 11274,
  [SMALL_STATE(353)] = 11293,
  [SMALL_STATE(354)] = 11312,
  [SMALL_STATE(355)] = 11321,
  [SMALL_STATE(356)] = 11330,
  [SMALL_STATE(357)] = 11339,
  [SMALL_STATE(358)] = 11348,
  [SMALL_STATE(359)] = 11367,
  [SMALL_STATE(360)] = 11386,
  [SMALL_STATE(361)] = 11405,
  [SMALL_STATE(362)] = 11414,
  [SMALL_STATE(363)] = 11423,
  [SMALL_STATE(364)] = 11440,
  [SMALL_STATE(365)] = 11453,
  [SMALL_STATE(366)] = 11462,
  [SMALL_STATE(367)] = 11475,
  [SMALL_STATE(368)] = 11494,
  [SMALL_STATE(369)] = 11509,
  [SMALL_STATE(370)] = 11528,
  [SMALL_STATE(371)] = 11547,
  [SMALL_STATE(372)] = 11566,
  [SMALL_STATE(373)] = 11585,
  [SMALL_STATE(374)] = 11602,
  [SMALL_STATE(375)] = 11621,
  [SMALL_STATE(376)] = 11634,
  [SMALL_STATE(377)] = 11653,
  [SMALL_STATE(378)] = 11672,
  [SMALL_STATE(379)] = 11687,
  [SMALL_STATE(380)] = 11704,
  [SMALL_STATE(381)] = 11723,
  [SMALL_STATE(382)] = 11738,
  [SMALL_STATE(383)] = 11747,
  [SMALL_STATE(384)] = 11764,
  [SMALL_STATE(385)] = 11781,
  [SMALL_STATE(386)] = 11798,
  [SMALL_STATE(387)] = 11817,
  [SMALL_STATE(388)] = 11832,
  [SMALL_STATE(389)] = 11849,
  [SMALL_STATE(390)] = 11865,
  [SMALL_STATE(391)] = 11881,
  [SMALL_STATE(392)] = 11897,
  [SMALL_STATE(393)] = 11913,
  [SMALL_STATE(394)] = 11929,
  [SMALL_STATE(395)] = 11945,
  [SMALL_STATE(396)] = 11961,
  [SMALL_STATE(397)] = 11977,
  [SMALL_STATE(398)] = 11993,
  [SMALL_STATE(399)] = 12009,
  [SMALL_STATE(400)] = 12025,
  [SMALL_STATE(401)] = 12041,
  [SMALL_STATE(402)] = 12057,
  [SMALL_STATE(403)] = 12069,
  [SMALL_STATE(404)] = 12085,
  [SMALL_STATE(405)] = 12101,
  [SMALL_STATE(406)] = 12113,
  [SMALL_STATE(407)] = 12129,
  [SMALL_STATE(408)] = 12145,
  [SMALL_STATE(409)] = 12161,
  [SMALL_STATE(410)] = 12177,
  [SMALL_STATE(411)] = 12193,
  [SMALL_STATE(412)] = 12209,
  [SMALL_STATE(413)] = 12225,
  [SMALL_STATE(414)] = 12241,
  [SMALL_STATE(415)] = 12257,
  [SMALL_STATE(416)] = 12273,
  [SMALL_STATE(417)] = 12289,
  [SMALL_STATE(418)] = 12305,
  [SMALL_STATE(419)] = 12321,
  [SMALL_STATE(420)] = 12337,
  [SMALL_STATE(421)] = 12353,
  [SMALL_STATE(422)] = 12369,
  [SMALL_STATE(423)] = 12385,
  [SMALL_STATE(424)] = 12401,
  [SMALL_STATE(425)] = 12417,
  [SMALL_STATE(426)] = 12433,
  [SMALL_STATE(427)] = 12449,
  [SMALL_STATE(428)] = 12457,
  [SMALL_STATE(429)] = 12473,
  [SMALL_STATE(430)] = 12485,
  [SMALL_STATE(431)] = 12501,
  [SMALL_STATE(432)] = 12517,
  [SMALL_STATE(433)] = 12533,
  [SMALL_STATE(434)] = 12549,
  [SMALL_STATE(435)] = 12565,
  [SMALL_STATE(436)] = 12581,
  [SMALL_STATE(437)] = 12594,
  [SMALL_STATE(438)] = 12601,
  [SMALL_STATE(439)] = 12614,
  [SMALL_STATE(440)] = 12627,
  [SMALL_STATE(441)] = 12638,
  [SMALL_STATE(442)] = 12651,
  [SMALL_STATE(443)] = 12658,
  [SMALL_STATE(444)] = 12671,
  [SMALL_STATE(445)] = 12682,
  [SMALL_STATE(446)] = 12691,
  [SMALL_STATE(447)] = 12702,
  [SMALL_STATE(448)] = 12713,
  [SMALL_STATE(449)] = 12726,
  [SMALL_STATE(450)] = 12733,
  [SMALL_STATE(451)] = 12744,
  [SMALL_STATE(452)] = 12751,
  [SMALL_STATE(453)] = 12764,
  [SMALL_STATE(454)] = 12771,
  [SMALL_STATE(455)] = 12778,
  [SMALL_STATE(456)] = 12789,
  [SMALL_STATE(457)] = 12802,
  [SMALL_STATE(458)] = 12815,
  [SMALL_STATE(459)] = 12826,
  [SMALL_STATE(460)] = 12839,
  [SMALL_STATE(461)] = 12850,
  [SMALL_STATE(462)] = 12861,
  [SMALL_STATE(463)] = 12874,
  [SMALL_STATE(464)] = 12881,
  [SMALL_STATE(465)] = 12894,
  [SMALL_STATE(466)] = 12905,
  [SMALL_STATE(467)] = 12916,
  [SMALL_STATE(468)] = 12927,
  [SMALL_STATE(469)] = 12938,
  [SMALL_STATE(470)] = 12945,
  [SMALL_STATE(471)] = 12952,
  [SMALL_STATE(472)] = 12958,
  [SMALL_STATE(473)] = 12964,
  [SMALL_STATE(474)] = 12974,
  [SMALL_STATE(475)] = 12984,
  [SMALL_STATE(476)] = 12994,
  [SMALL_STATE(477)] = 13004,
  [SMALL_STATE(478)] = 13014,
  [SMALL_STATE(479)] = 13024,
  [SMALL_STATE(480)] = 13032,
  [SMALL_STATE(481)] = 13042,
  [SMALL_STATE(482)] = 13048,
  [SMALL_STATE(483)] = 13058,
  [SMALL_STATE(484)] = 13066,
  [SMALL_STATE(485)] = 13074,
  [SMALL_STATE(486)] = 13084,
  [SMALL_STATE(487)] = 13094,
  [SMALL_STATE(488)] = 13104,
  [SMALL_STATE(489)] = 13114,
  [SMALL_STATE(490)] = 13119,
  [SMALL_STATE(491)] = 13126,
  [SMALL_STATE(492)] = 13133,
  [SMALL_STATE(493)] = 13140,
  [SMALL_STATE(494)] = 13147,
  [SMALL_STATE(495)] = 13154,
  [SMALL_STATE(496)] = 13161,
  [SMALL_STATE(497)] = 13168,
  [SMALL_STATE(498)] = 13175,
  [SMALL_STATE(499)] = 13182,
  [SMALL_STATE(500)] = 13189,
  [SMALL_STATE(501)] = 13194,
  [SMALL_STATE(502)] = 13201,
  [SMALL_STATE(503)] = 13208,
  [SMALL_STATE(504)] = 13215,
  [SMALL_STATE(505)] = 13222,
  [SMALL_STATE(506)] = 13229,
  [SMALL_STATE(507)] = 13236,
  [SMALL_STATE(508)] = 13243,
  [SMALL_STATE(509)] = 13250,
  [SMALL_STATE(510)] = 13255,
  [SMALL_STATE(511)] = 13262,
  [SMALL_STATE(512)] = 13267,
  [SMALL_STATE(513)] = 13272,
  [SMALL_STATE(514)] = 13277,
  [SMALL_STATE(515)] = 13282,
  [SMALL_STATE(516)] = 13287,
  [SMALL_STATE(517)] = 13292,
  [SMALL_STATE(518)] = 13297,
  [SMALL_STATE(519)] = 13304,
  [SMALL_STATE(520)] = 13311,
  [SMALL_STATE(521)] = 13318,
  [SMALL_STATE(522)] = 13325,
  [SMALL_STATE(523)] = 13332,
  [SMALL_STATE(524)] = 13339,
  [SMALL_STATE(525)] = 13346,
  [SMALL_STATE(526)] = 13353,
  [SMALL_STATE(527)] = 13360,
  [SMALL_STATE(528)] = 13367,
  [SMALL_STATE(529)] = 13374,
  [SMALL_STATE(530)] = 13381,
  [SMALL_STATE(531)] = 13388,
  [SMALL_STATE(532)] = 13395,
  [SMALL_STATE(533)] = 13402,
  [SMALL_STATE(534)] = 13407,
  [SMALL_STATE(535)] = 13414,
  [SMALL_STATE(536)] = 13421,
  [SMALL_STATE(537)] = 13428,
  [SMALL_STATE(538)] = 13432,
  [SMALL_STATE(539)] = 13436,
  [SMALL_STATE(540)] = 13440,
  [SMALL_STATE(541)] = 13444,
  [SMALL_STATE(542)] = 13448,
  [SMALL_STATE(543)] = 13452,
  [SMALL_STATE(544)] = 13456,
  [SMALL_STATE(545)] = 13460,
  [SMALL_STATE(546)] = 13464,
  [SMALL_STATE(547)] = 13468,
  [SMALL_STATE(548)] = 13472,
  [SMALL_STATE(549)] = 13476,
  [SMALL_STATE(550)] = 13480,
  [SMALL_STATE(551)] = 13484,
  [SMALL_STATE(552)] = 13488,
  [SMALL_STATE(553)] = 13492,
  [SMALL_STATE(554)] = 13496,
  [SMALL_STATE(555)] = 13500,
  [SMALL_STATE(556)] = 13504,
  [SMALL_STATE(557)] = 13508,
  [SMALL_STATE(558)] = 13512,
  [SMALL_STATE(559)] = 13516,
  [SMALL_STATE(560)] = 13520,
  [SMALL_STATE(561)] = 13524,
  [SMALL_STATE(562)] = 13528,
  [SMALL_STATE(563)] = 13532,
  [SMALL_STATE(564)] = 13536,
  [SMALL_STATE(565)] = 13540,
  [SMALL_STATE(566)] = 13544,
  [SMALL_STATE(567)] = 13548,
  [SMALL_STATE(568)] = 13552,
  [SMALL_STATE(569)] = 13556,
  [SMALL_STATE(570)] = 13560,
  [SMALL_STATE(571)] = 13564,
  [SMALL_STATE(572)] = 13568,
  [SMALL_STATE(573)] = 13572,
  [SMALL_STATE(574)] = 13576,
  [SMALL_STATE(575)] = 13580,
  [SMALL_STATE(576)] = 13584,
  [SMALL_STATE(577)] = 13588,
  [SMALL_STATE(578)] = 13592,
  [SMALL_STATE(579)] = 13596,
  [SMALL_STATE(580)] = 13600,
  [SMALL_STATE(581)] = 13604,
  [SMALL_STATE(582)] = 13608,
  [SMALL_STATE(583)] = 13612,
  [SMALL_STATE(584)] = 13616,
  [SMALL_STATE(585)] = 13620,
  [SMALL_STATE(586)] = 13624,
  [SMALL_STATE(587)] = 13628,
  [SMALL_STATE(588)] = 13632,
  [SMALL_STATE(589)] = 13636,
  [SMALL_STATE(590)] = 13640,
  [SMALL_STATE(591)] = 13644,
  [SMALL_STATE(592)] = 13648,
  [SMALL_STATE(593)] = 13652,
  [SMALL_STATE(594)] = 13656,
  [SMALL_STATE(595)] = 13660,
  [SMALL_STATE(596)] = 13664,
  [SMALL_STATE(597)] = 13668,
  [SMALL_STATE(598)] = 13672,
  [SMALL_STATE(599)] = 13676,
  [SMALL_STATE(600)] = 13680,
  [SMALL_STATE(601)] = 13684,
  [SMALL_STATE(602)] = 13688,
  [SMALL_STATE(603)] = 13692,
  [SMALL_STATE(604)] = 13696,
  [SMALL_STATE(605)] = 13700,
  [SMALL_STATE(606)] = 13704,
  [SMALL_STATE(607)] = 13708,
  [SMALL_STATE(608)] = 13712,
  [SMALL_STATE(609)] = 13716,
  [SMALL_STATE(610)] = 13720,
  [SMALL_STATE(611)] = 13724,
  [SMALL_STATE(612)] = 13728,
  [SMALL_STATE(613)] = 13732,
  [SMALL_STATE(614)] = 13736,
  [SMALL_STATE(615)] = 13740,
  [SMALL_STATE(616)] = 13744,
  [SMALL_STATE(617)] = 13748,
  [SMALL_STATE(618)] = 13752,
  [SMALL_STATE(619)] = 13756,
  [SMALL_STATE(620)] = 13760,
  [SMALL_STATE(621)] = 13764,
  [SMALL_STATE(622)] = 13768,
  [SMALL_STATE(623)] = 13772,
  [SMALL_STATE(624)] = 13776,
  [SMALL_STATE(625)] = 13780,
  [SMALL_STATE(626)] = 13784,
  [SMALL_STATE(627)] = 13788,
  [SMALL_STATE(628)] = 13792,
  [SMALL_STATE(629)] = 13796,
  [SMALL_STATE(630)] = 13800,
  [SMALL_STATE(631)] = 13804,
  [SMALL_STATE(632)] = 13808,
  [SMALL_STATE(633)] = 13812,
  [SMALL_STATE(634)] = 13816,
  [SMALL_STATE(635)] = 13820,
  [SMALL_STATE(636)] = 13824,
  [SMALL_STATE(637)] = 13828,
  [SMALL_STATE(638)] = 13832,
  [SMALL_STATE(639)] = 13836,
  [SMALL_STATE(640)] = 13840,
  [SMALL_STATE(641)] = 13844,
  [SMALL_STATE(642)] = 13848,
  [SMALL_STATE(643)] = 13852,
  [SMALL_STATE(644)] = 13856,
  [SMALL_STATE(645)] = 13860,
  [SMALL_STATE(646)] = 13864,
  [SMALL_STATE(647)] = 13868,
  [SMALL_STATE(648)] = 13872,
  [SMALL_STATE(649)] = 13876,
  [SMALL_STATE(650)] = 13880,
  [SMALL_STATE(651)] = 13884,
  [SMALL_STATE(652)] = 13888,
  [SMALL_STATE(653)] = 13892,
  [SMALL_STATE(654)] = 13896,
  [SMALL_STATE(655)] = 13900,
  [SMALL_STATE(656)] = 13904,
  [SMALL_STATE(657)] = 13908,
  [SMALL_STATE(658)] = 13912,
  [SMALL_STATE(659)] = 13916,
  [SMALL_STATE(660)] = 13920,
  [SMALL_STATE(661)] = 13924,
  [SMALL_STATE(662)] = 13928,
  [SMALL_STATE(663)] = 13932,
  [SMALL_STATE(664)] = 13936,
  [SMALL_STATE(665)] = 13940,
  [SMALL_STATE(666)] = 13944,
  [SMALL_STATE(667)] = 13948,
  [SMALL_STATE(668)] = 13952,
  [SMALL_STATE(669)] = 13956,
  [SMALL_STATE(670)] = 13960,
  [SMALL_STATE(671)] = 13964,
  [SMALL_STATE(672)] = 13968,
  [SMALL_STATE(673)] = 13972,
  [SMALL_STATE(674)] = 13976,
  [SMALL_STATE(675)] = 13980,
  [SMALL_STATE(676)] = 13984,
  [SMALL_STATE(677)] = 13988,
  [SMALL_STATE(678)] = 13992,
  [SMALL_STATE(679)] = 13996,
  [SMALL_STATE(680)] = 14000,
  [SMALL_STATE(681)] = 14004,
  [SMALL_STATE(682)] = 14008,
  [SMALL_STATE(683)] = 14012,
  [SMALL_STATE(684)] = 14016,
  [SMALL_STATE(685)] = 14020,
  [SMALL_STATE(686)] = 14024,
  [SMALL_STATE(687)] = 14028,
  [SMALL_STATE(688)] = 14032,
  [SMALL_STATE(689)] = 14036,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsql_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(649),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(639),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(638),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(631),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(623),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(622),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(621),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(620),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(616),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(613),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(689),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(680),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(661),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(645),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(646),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(647),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(662),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(648),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(633),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(688),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(677),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(655),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(634),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(635),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(636),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(656),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(637),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_operator, 1, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_operator, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(380),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsql_file, 1, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 1, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 3, 0, 10),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 3, 0, 10),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_expression, 1, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_expression, 1, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body_batch, 1, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body_batch, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_LOCAL_ID_, 1, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_LOCAL_ID_, 1, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udt_elem, 3, 0, 13),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_udt_elem, 3, 0, 13),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_batch, 1, 0, 0),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 1, 0, 0), SHIFT(268),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 1, 0, 0), SHIFT(86),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 1, 0, 0), SHIFT(2),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_batch, 1, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_var_string, 1, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_var_string, 1, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_var_string, 3, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_var_string, 3, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_batch, 2, 0, 0),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 2, 0, 0), SHIFT(268),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 2, 0, 0), SHIFT(86),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 2, 0, 0), SHIFT(2),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_batch, 2, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udt_elem, 4, 0, 13),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_udt_elem, 4, 0, 13),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_, 1, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_, 1, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_elem, 1, 0, 3),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_elem, 1, 0, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_var_string, 5, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_var_string, 5, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_batch_repeat1, 2, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_batch_repeat1, 2, 0, 0),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_batch_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_batch_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_column_name, 1, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_column_name, 1, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_alias, 1, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_schema, 1, 0, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 1, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_database_schema, 1, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 16),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 16),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 4, 0, 15),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_database_schema, 4, 0, 15),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_schema, 3, 0, 7),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_schema, 3, 0, 7),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 7, 0, 30),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 7, 0, 30),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 26),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 26),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 25),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 25),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 18),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 18),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(671),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 19),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 19),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 22),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 22),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 5, 0, 21),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_database_schema, 5, 0, 21),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 20),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 20),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_schema, 1, 0, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 3, 0, 5),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_database_schema, 3, 0, 5),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 4, 0, 8),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 4, 0, 8),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 4, 0, 9),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_database_schema, 4, 0, 9),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_go_statement, 1, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_go_statement, 1, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 1, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 1, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 17),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 17),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_, 1, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_, 1, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_, 1, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_, 1, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 4, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 4, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_constant, 1, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_constant, 1, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_function, 6, 0, 28),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partition_function, 6, 0, 28),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 8, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 8, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 11, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 11, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranking_windowed_function, 5, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ranking_windowed_function, 5, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_windowed_function, 5, 0, 19),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_windowed_function, 5, 0, 19),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_windowed_function, 5, 0, 18),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_windowed_function, 5, 0, 18),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 5, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 5, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_over_clause, 3, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_over_clause, 3, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 0),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_money_, 2, 0, 6),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_money_, 2, 0, 6),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real_, 4, 0, 0),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real_, 4, 0, 0),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 12, 0, 0),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 12, 0, 0),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, 0, 0),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, 0, 0),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_money_, 3, 0, 6),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_money_, 3, 0, 6),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_function, 8, 0, 36),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partition_function, 8, 0, 36),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_over_clause, 6, 0, 0),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_over_clause, 6, 0, 0),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 3, 0, 0),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 3, 0, 0),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 0),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 0),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_over_clause, 4, 0, 0),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_over_clause, 4, 0, 0),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real_, 3, 0, 0),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real_, 3, 0, 0),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 7, 0, 0),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 7, 0, 0),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranking_windowed_function, 4, 0, 0),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ranking_windowed_function, 4, 0, 0),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_over_clause, 5, 0, 0),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_over_clause, 5, 0, 0),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udt_method_arguments, 3, 0, 0),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_udt_method_arguments, 3, 0, 0),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udt_method_arguments, 4, 0, 0),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_udt_method_arguments, 4, 0, 0),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(610),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list, 1, 0, 0),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_list, 1, 0, 0),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_parameter, 1, 0, 0),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_parameter, 1, 0, 0),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_statement_arg, 1, 0, 0),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_statement_arg, 1, 0, 0),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_statement_arg, 2, 0, 0),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_statement_arg, 2, 0, 0),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_list_repeat1, 2, 0, 0),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_select_list_repeat1, 2, 0, 0),
  [639] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_list_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 3, 0, 0),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 3, 0, 0),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_statement_arg_repeat1, 2, 0, 0),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_execute_statement_arg_repeat1, 2, 0, 0),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_statement_arg_repeat1, 2, 0, 0), SHIFT_REPEAT(522),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_body_batch_repeat1, 2, 0, 0),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_execute_body_batch_repeat1, 2, 0, 0),
  [661] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_body_batch_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 4, 0, 0),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 4, 0, 0),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list, 2, 0, 0),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_list, 2, 0, 0),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_elem, 3, 0, 12),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_elem, 3, 0, 12),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_column_alias, 2, 0, 0),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as_column_alias, 2, 0, 0),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_statement_arg_unnamed, 1, 0, 4),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_statement_arg_unnamed, 1, 0, 4),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1, 0, 0),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1, 0, 0),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_statement_arg_named, 3, 0, 14),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_statement_arg_named, 3, 0, 14),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list_elem, 1, 0, 0),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_list_elem, 1, 0, 0),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list_elem, 3, 0, 0),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_list_elem, 3, 0, 0),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 7, 0, 10),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 7, 0, 10),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 5, 0, 10),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 5, 0, 10),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 5, 0, 0),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 5, 0, 0),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2, 0, 0),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 2, 0, 0),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_body_repeat1, 2, 0, 0),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_execute_body_repeat1, 2, 0, 0),
  [726] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_body_repeat1, 2, 0, 0), SHIFT_REPEAT(457),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 6, 0, 10),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 6, 0, 10),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_parameter, 2, 0, 0),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_parameter, 2, 0, 0),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_alias, 1, 0, 0),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_elem, 2, 0, 3),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_elem, 2, 0, 3),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udt_elem, 5, 0, 13),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_udt_elem, 5, 0, 13),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_column_alias, 1, 0, 0),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as_column_alias, 1, 0, 0),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_option, 1, 0, 0),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_option, 1, 0, 0),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 2, 0, 0),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 2, 0, 0),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 7, 0, 0),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 7, 0, 0),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat2, 2, 0, 0),
  [777] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat2, 2, 0, 0), SHIFT_REPEAT(268),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat2, 2, 0, 0),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 8, 0, 0),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 8, 0, 0),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [788] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat2, 1, 0, 0), REDUCE(sym_batch, 2, 0, 0),
  [791] = {.entry = {.count = 3, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat2, 1, 0, 0), REDUCE(sym_batch, 2, 0, 0), SHIFT(268),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_batch, 3, 0, 0),
  [797] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 3, 0, 0), SHIFT(268),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_batch, 3, 0, 0),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_specification, 2, 0, 0),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_specification, 2, 0, 0),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 4, 0, 10),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 4, 0, 10),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_option, 2, 0, 0),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_option, 2, 0, 0),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_table_name, 3, 0, 24),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_table_name, 3, 0, 24),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_clauses, 1, 0, 0),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_clauses, 1, 0, 0),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_another_statement, 1, 0, 0),
  [834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_another_statement, 1, 0, 0),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_clause, 1, 0, 0),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dml_clause, 1, 0, 0),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 5, 0, 23),
  [842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 5, 0, 23),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 6, 0, 27),
  [846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 6, 0, 27),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement_standalone, 1, 0, 0),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement_standalone, 1, 0, 0),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 1, 0, 31),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1, 0, 0),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 1, 0, 0),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_table_name, 5, 0, 32),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_table_name, 5, 0, 32),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_table_name, 1, 0, 11),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_table_name, 1, 0, 11),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_specification, 4, 0, 0),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_specification, 4, 0, 0),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_sources, 1, 0, 0),
  [896] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_sources, 1, 0, 0),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 9, 0, 37),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 9, 0, 37),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_table_name, 7, 0, 41),
  [904] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_table_name, 7, 0, 41),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 10, 0, 42),
  [908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 10, 0, 42),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_expression, 1, 0, 0),
  [912] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_expression, 1, 0, 0),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_source, 1, 0, 0),
  [916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_source, 1, 0, 0),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_source_item, 1, 0, 0),
  [920] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_source_item, 1, 0, 0),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_statement, 2, 0, 0),
  [924] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_statement, 2, 0, 0),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_go_statement, 2, 0, 2),
  [934] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_go_statement, 2, 0, 2),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [938] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1, 0, 0),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body_batch, 2, 0, 0),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_clauses, 2, 0, 0),
  [952] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_clauses, 2, 0, 0),
  [954] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_statement_arg_repeat1, 2, 0, 0), SHIFT_REPEAT(520),
  [957] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_body_batch_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body_batch, 3, 0, 0),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 2, 0, 31),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collation_, 2, 0, 38),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1004] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list__repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list__repeat1, 2, 0, 0),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list_, 2, 0, 0),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1015] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list_, 1, 0, 0),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1037] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(581),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 4, 0, 0),
  [1063] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_order_by_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_order_by_clause_repeat1, 2, 0, 0),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 3, 0, 0),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_by_clause, 3, 0, 0),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1076] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as, 1, 0, 0),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as, 1, 0, 0),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsql_file, 2, 0, 0),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 2, 0, 34),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 3, 0, 40),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 2, 0, 35),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 3, 0, 39),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat2, 2, 0, 0), SHIFT_REPEAT(450),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body_batch, 4, 0, 0),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lag_lead_args, 3, 0, 0),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lag_lead_args, 5, 0, 29),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list__repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_body_repeat2, 2, 0, 0), SHIFT_REPEAT(436),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_body_repeat2, 2, 0, 0),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lag_lead_args, 7, 0, 33),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_frame_preceding, 2, 0, 0),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_frame_bound, 1, 0, 0),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AS, 1, 0, 0),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_RESULT_SETS, 2, 0, 0),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_frame_following, 2, 0, 0),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_respect_nulls_, 2, 0, 0),
  [1197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_all_distinct_expression, 2, 0, 0),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_within_group_, 2, 0, 0),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_frame_extent, 1, 0, 0),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row_or_range_clause, 2, 0, 0),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_over_, 1, 0, 0),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ignore_nulls_, 2, 0, 0),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_all_distinct_expression, 1, 0, 0),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_function_name, 1, 0, 0),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_frame_extent, 4, 0, 0),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1463] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
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
