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
#define STATE_COUNT 651
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 182
#define ALIAS_COUNT 0
#define TOKEN_COUNT 100
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 24
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 41

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
  sym_right_ = 41,
  sym_left_ = 42,
  sym_binary_checksum_ = 43,
  sym_checksum_ = 44,
  aux_sym_over__token1 = 45,
  aux_sym_within_group__token1 = 46,
  aux_sym_within_group__token2 = 47,
  sym_percentile_cont_ = 48,
  sym_percentile_disc_ = 49,
  sym_cume_dist_ = 50,
  sym_percent_rank_ = 51,
  aux_sym_ignore_nulls__token1 = 52,
  aux_sym_ignore_nulls__token2 = 53,
  aux_sym_respect_nulls__token1 = 54,
  sym_lag_ = 55,
  sym_lead_ = 56,
  sym_first_value_ = 57,
  sym_last_value_ = 58,
  sym_checksum_agg_ = 59,
  sym_count_ = 60,
  sym_count_big_ = 61,
  sym_avg_ = 62,
  sym_max_ = 63,
  sym_min_ = 64,
  sym_sum_ = 65,
  sym_stdev_ = 66,
  sym_stdevp_ = 67,
  sym_var_ = 68,
  sym_varp_ = 69,
  sym_all_ = 70,
  sym_distinct_ = 71,
  sym_ntile_ = 72,
  sym_rank_ = 73,
  sym_dense_rank_ = 74,
  sym_row_number_ = 75,
  aux_sym_partition_by_clause_token1 = 76,
  aux_sym_partition_by_clause_token2 = 77,
  aux_sym_order_by_clause_token1 = 78,
  aux_sym_collation__token1 = 79,
  sym_asc_ = 80,
  sym_desc_ = 81,
  aux_sym_window_frame_extent_token1 = 82,
  aux_sym_window_frame_extent_token2 = 83,
  aux_sym_window_frame_following_token1 = 84,
  aux_sym_window_frame_following_token2 = 85,
  aux_sym_window_frame_preceding_token1 = 86,
  aux_sym_window_frame_preceding_token2 = 87,
  aux_sym_window_frame_preceding_token3 = 88,
  aux_sym_row_or_range_clause_token1 = 89,
  aux_sym_row_or_range_clause_token2 = 90,
  sym_binary = 91,
  anon_sym_DOLLAR = 92,
  anon_sym_DASH = 93,
  anon_sym_PLUS = 94,
  aux_sym_real__token1 = 95,
  aux_sym_real__token2 = 96,
  aux_sym_id__token1 = 97,
  aux_sym_id__token2 = 98,
  anon_sym_TODO = 99,
  sym_tsql_file = 100,
  sym_batch = 101,
  sym_go_statement = 102,
  sym_execute_body_batch = 103,
  sym_func_proc_name_server_database_schema = 104,
  sym_func_proc_name_database_schema = 105,
  sym_func_proc_name_schema = 106,
  sym_execute_statement_arg = 107,
  sym_execute_statement_arg_named = 108,
  sym_execute_statement_arg_unnamed = 109,
  sym_execute_parameter = 110,
  sym_LOCAL_ID_ = 111,
  sym_constant = 112,
  sym_sql_clauses = 113,
  sym_another_statement = 114,
  sym_execute_statement = 115,
  sym_execute_body = 116,
  sym_execute_option = 117,
  sym_RESULT_SETS = 118,
  sym_AS = 119,
  sym_execute_var_string = 120,
  sym_dml_clause = 121,
  sym_select_statement_standalone = 122,
  sym_select_statement = 123,
  sym_query_expression = 124,
  sym_query_specification = 125,
  sym_select_list = 126,
  sym_select_list_elem = 127,
  sym_assignment_operator = 128,
  sym_udt_elem = 129,
  sym_udt_method_arguments = 130,
  sym_expression_elem = 131,
  sym_as_column_alias = 132,
  sym_as = 133,
  sym_column_alias = 134,
  sym_table_sources = 135,
  sym_table_source = 136,
  sym_table_source_item = 137,
  sym_full_table_name = 138,
  sym_full_column_name = 139,
  sym_expression = 140,
  sym_function_call = 141,
  sym_scalar_function_name = 142,
  sym_analytic_windowed_function = 143,
  sym_over_ = 144,
  sym_within_group_ = 145,
  sym_lag_lead_args = 146,
  sym_ignore_nulls_ = 147,
  sym_respect_nulls_ = 148,
  sym_aggregate_windowed_function = 149,
  sym_all_distinct_expression = 150,
  sym_ranking_windowed_function = 151,
  sym_over_clause = 152,
  sym_partition_by_clause = 153,
  sym_expression_list_ = 154,
  sym_order_by_clause = 155,
  sym_order_by_expression = 156,
  sym_collation_ = 157,
  sym_window_frame_extent = 158,
  sym_window_frame_bound = 159,
  sym_window_frame_following = 160,
  sym_window_frame_preceding = 161,
  sym_row_or_range_clause = 162,
  sym_primitive_expression = 163,
  sym_primitive_constant = 164,
  sym_money_ = 165,
  sym_real_ = 166,
  sym_float_ = 167,
  sym_decimal_ = 168,
  sym_id_ = 169,
  sym_keyword = 170,
  sym_integer = 171,
  aux_sym_tsql_file_repeat1 = 172,
  aux_sym_tsql_file_repeat2 = 173,
  aux_sym_batch_repeat1 = 174,
  aux_sym_execute_body_batch_repeat1 = 175,
  aux_sym_execute_statement_arg_repeat1 = 176,
  aux_sym_execute_body_repeat1 = 177,
  aux_sym_execute_body_repeat2 = 178,
  aux_sym_select_list_repeat1 = 179,
  aux_sym_expression_list__repeat1 = 180,
  aux_sym_order_by_clause_repeat1 = 181,
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
  field_leftAlias = 11,
  field_leftAssignment = 12,
  field_linkedServer = 13,
  field_name = 14,
  field_non_static_attr = 15,
  field_offset = 16,
  field_order_by = 17,
  field_procedure = 18,
  field_return_status = 19,
  field_schema = 20,
  field_server = 21,
  field_table = 22,
  field_udt_column_name = 23,
  field_value = 24,
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
  [29] = {.index = 46, .length = 4},
  [30] = {.index = 50, .length = 1},
  [31] = {.index = 51, .length = 3},
  [32] = {.index = 54, .length = 2},
  [33] = {.index = 56, .length = 2},
  [34] = {.index = 58, .length = 2},
  [35] = {.index = 60, .length = 1},
  [36] = {.index = 61, .length = 1},
  [37] = {.index = 62, .length = 2},
  [38] = {.index = 64, .length = 2},
  [39] = {.index = 66, .length = 4},
  [40] = {.index = 70, .length = 1},
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
    {field_offset, 3},
  [46] =
    {field_database, 2},
    {field_procedure, 6},
    {field_schema, 4},
    {field_server, 0},
  [50] =
    {field_order_by, 0},
  [51] =
    {field_database, 0},
    {field_schema, 2},
    {field_table, 4},
  [54] =
    {field_default, 5},
    {field_offset, 3},
  [56] =
    {field_ascending, 1},
    {field_order_by, 0},
  [58] =
    {field_descending, 1},
    {field_order_by, 0},
  [60] =
    {field_linkedServer, 8},
  [61] =
    {field_collation_name, 1},
  [62] =
    {field_ascending, 2},
    {field_order_by, 0},
  [64] =
    {field_descending, 2},
    {field_order_by, 0},
  [66] =
    {field_database, 2},
    {field_schema, 4},
    {field_server, 0},
    {field_table, 6},
  [70] =
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
  [11] = 7,
  [12] = 8,
  [13] = 13,
  [14] = 14,
  [15] = 14,
  [16] = 13,
  [17] = 13,
  [18] = 14,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 20,
  [23] = 23,
  [24] = 24,
  [25] = 24,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 23,
  [31] = 31,
  [32] = 32,
  [33] = 29,
  [34] = 29,
  [35] = 35,
  [36] = 36,
  [37] = 26,
  [38] = 26,
  [39] = 23,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 47,
  [49] = 49,
  [50] = 46,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 58,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 56,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 55,
  [73] = 73,
  [74] = 56,
  [75] = 75,
  [76] = 76,
  [77] = 56,
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
  [89] = 55,
  [90] = 90,
  [91] = 88,
  [92] = 78,
  [93] = 80,
  [94] = 94,
  [95] = 75,
  [96] = 71,
  [97] = 55,
  [98] = 98,
  [99] = 46,
  [100] = 100,
  [101] = 69,
  [102] = 100,
  [103] = 82,
  [104] = 71,
  [105] = 82,
  [106] = 65,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 76,
  [111] = 111,
  [112] = 87,
  [113] = 56,
  [114] = 86,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 88,
  [127] = 55,
  [128] = 85,
  [129] = 83,
  [130] = 130,
  [131] = 131,
  [132] = 68,
  [133] = 133,
  [134] = 79,
  [135] = 135,
  [136] = 136,
  [137] = 80,
  [138] = 138,
  [139] = 139,
  [140] = 64,
  [141] = 141,
  [142] = 142,
  [143] = 78,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 75,
  [150] = 83,
  [151] = 76,
  [152] = 65,
  [153] = 68,
  [154] = 154,
  [155] = 81,
  [156] = 64,
  [157] = 90,
  [158] = 79,
  [159] = 159,
  [160] = 87,
  [161] = 161,
  [162] = 86,
  [163] = 85,
  [164] = 164,
  [165] = 69,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 98,
  [176] = 94,
  [177] = 177,
  [178] = 56,
  [179] = 55,
  [180] = 170,
  [181] = 46,
  [182] = 173,
  [183] = 183,
  [184] = 177,
  [185] = 185,
  [186] = 168,
  [187] = 121,
  [188] = 141,
  [189] = 111,
  [190] = 190,
  [191] = 142,
  [192] = 192,
  [193] = 144,
  [194] = 148,
  [195] = 154,
  [196] = 120,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 145,
  [201] = 109,
  [202] = 107,
  [203] = 125,
  [204] = 204,
  [205] = 108,
  [206] = 206,
  [207] = 146,
  [208] = 208,
  [209] = 56,
  [210] = 210,
  [211] = 211,
  [212] = 55,
  [213] = 213,
  [214] = 131,
  [215] = 215,
  [216] = 216,
  [217] = 122,
  [218] = 218,
  [219] = 124,
  [220] = 119,
  [221] = 116,
  [222] = 222,
  [223] = 223,
  [224] = 138,
  [225] = 225,
  [226] = 115,
  [227] = 227,
  [228] = 117,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 118,
  [233] = 123,
  [234] = 234,
  [235] = 130,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 133,
  [242] = 90,
  [243] = 135,
  [244] = 46,
  [245] = 81,
  [246] = 246,
  [247] = 98,
  [248] = 94,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 120,
  [265] = 116,
  [266] = 142,
  [267] = 144,
  [268] = 148,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 145,
  [274] = 274,
  [275] = 275,
  [276] = 118,
  [277] = 277,
  [278] = 278,
  [279] = 123,
  [280] = 130,
  [281] = 133,
  [282] = 282,
  [283] = 111,
  [284] = 109,
  [285] = 107,
  [286] = 108,
  [287] = 287,
  [288] = 146,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 135,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 115,
  [300] = 55,
  [301] = 56,
  [302] = 125,
  [303] = 303,
  [304] = 161,
  [305] = 124,
  [306] = 122,
  [307] = 294,
  [308] = 119,
  [309] = 138,
  [310] = 131,
  [311] = 294,
  [312] = 117,
  [313] = 121,
  [314] = 314,
  [315] = 141,
  [316] = 316,
  [317] = 169,
  [318] = 170,
  [319] = 185,
  [320] = 168,
  [321] = 177,
  [322] = 173,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 167,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 192,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 336,
  [338] = 333,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 341,
  [343] = 339,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 335,
  [348] = 331,
  [349] = 349,
  [350] = 222,
  [351] = 351,
  [352] = 334,
  [353] = 211,
  [354] = 354,
  [355] = 355,
  [356] = 330,
  [357] = 357,
  [358] = 330,
  [359] = 331,
  [360] = 199,
  [361] = 361,
  [362] = 335,
  [363] = 198,
  [364] = 333,
  [365] = 340,
  [366] = 336,
  [367] = 340,
  [368] = 190,
  [369] = 369,
  [370] = 339,
  [371] = 227,
  [372] = 334,
  [373] = 218,
  [374] = 341,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 380,
  [382] = 378,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 376,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 384,
  [394] = 388,
  [395] = 387,
  [396] = 384,
  [397] = 397,
  [398] = 398,
  [399] = 378,
  [400] = 377,
  [401] = 380,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 398,
  [406] = 377,
  [407] = 407,
  [408] = 376,
  [409] = 387,
  [410] = 388,
  [411] = 411,
  [412] = 412,
  [413] = 398,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 422,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 425,
  [440] = 440,
  [441] = 425,
  [442] = 253,
  [443] = 418,
  [444] = 435,
  [445] = 435,
  [446] = 418,
  [447] = 422,
  [448] = 258,
  [449] = 449,
  [450] = 355,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 452,
  [456] = 451,
  [457] = 457,
  [458] = 458,
  [459] = 452,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 451,
  [465] = 354,
  [466] = 369,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 471,
  [476] = 476,
  [477] = 472,
  [478] = 478,
  [479] = 472,
  [480] = 476,
  [481] = 470,
  [482] = 470,
  [483] = 478,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 325,
  [494] = 327,
  [495] = 495,
  [496] = 496,
  [497] = 492,
  [498] = 496,
  [499] = 499,
  [500] = 489,
  [501] = 478,
  [502] = 502,
  [503] = 492,
  [504] = 476,
  [505] = 496,
  [506] = 506,
  [507] = 507,
  [508] = 491,
  [509] = 495,
  [510] = 495,
  [511] = 471,
  [512] = 489,
  [513] = 469,
  [514] = 514,
  [515] = 491,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
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
  [548] = 531,
  [549] = 549,
  [550] = 516,
  [551] = 551,
  [552] = 541,
  [553] = 524,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 534,
  [558] = 558,
  [559] = 555,
  [560] = 560,
  [561] = 537,
  [562] = 562,
  [563] = 539,
  [564] = 540,
  [565] = 565,
  [566] = 542,
  [567] = 543,
  [568] = 544,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 535,
  [575] = 531,
  [576] = 549,
  [577] = 551,
  [578] = 516,
  [579] = 541,
  [580] = 524,
  [581] = 581,
  [582] = 555,
  [583] = 583,
  [584] = 519,
  [585] = 549,
  [586] = 586,
  [587] = 587,
  [588] = 534,
  [589] = 587,
  [590] = 590,
  [591] = 554,
  [592] = 592,
  [593] = 593,
  [594] = 537,
  [595] = 520,
  [596] = 596,
  [597] = 519,
  [598] = 542,
  [599] = 599,
  [600] = 600,
  [601] = 539,
  [602] = 587,
  [603] = 590,
  [604] = 554,
  [605] = 592,
  [606] = 606,
  [607] = 540,
  [608] = 520,
  [609] = 538,
  [610] = 529,
  [611] = 528,
  [612] = 527,
  [613] = 525,
  [614] = 543,
  [615] = 615,
  [616] = 565,
  [617] = 617,
  [618] = 538,
  [619] = 529,
  [620] = 528,
  [621] = 527,
  [622] = 525,
  [623] = 544,
  [624] = 546,
  [625] = 565,
  [626] = 590,
  [627] = 530,
  [628] = 526,
  [629] = 629,
  [630] = 545,
  [631] = 530,
  [632] = 526,
  [633] = 633,
  [634] = 545,
  [635] = 517,
  [636] = 592,
  [637] = 517,
  [638] = 638,
  [639] = 633,
  [640] = 606,
  [641] = 633,
  [642] = 606,
  [643] = 643,
  [644] = 644,
  [645] = 617,
  [646] = 617,
  [647] = 647,
  [648] = 648,
  [649] = 533,
  [650] = 533,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(304);
      ADVANCE_MAP(
        '$', 445,
        '%', 10,
        '&', 11,
        '\'', 5,
        '(', 331,
        ')', 332,
        '*', 361,
        '+', 449,
        ',', 307,
        '-', 447,
        '.', 310,
        '/', 15,
        '0', 323,
        ':', 9,
        ';', 308,
        '=', 312,
        '@', 288,
        'N', 4,
        'T', 19,
        '[', 287,
        '^', 16,
        'n', 199,
        '|', 17,
        'A', 150,
        'a', 150,
        'B', 73,
        'b', 73,
        'C', 123,
        'c', 123,
        'D', 74,
        'd', 74,
        'E', 452,
        'e', 452,
        'F', 128,
        'f', 128,
        'G', 201,
        'g', 201,
        'I', 119,
        'i', 119,
        'L', 29,
        'l', 29,
        'M', 30,
        'm', 30,
        'O', 221,
        'o', 221,
        'P', 32,
        'p', 32,
        'R', 36,
        'r', 36,
        'S', 75,
        's', 75,
        'U', 175,
        'u', 175,
        'V', 35,
        'v', 35,
        'W', 130,
        'w', 130,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '$', 445,
        '\'', 6,
        ')', 332,
        '*', 360,
        '.', 310,
        '0', 323,
        '=', 312,
        '@', 288,
        'N', 454,
        '[', 287,
        'n', 595,
        'A', 611,
        'a', 611,
        'B', 522,
        'b', 522,
        'C', 520,
        'c', 520,
        'D', 494,
        'd', 494,
        'F', 523,
        'f', 523,
        'G', 561,
        'g', 561,
        'L', 464,
        'l', 464,
        'M', 465,
        'm', 465,
        'P', 501,
        'p', 501,
        'R', 468,
        'r', 468,
        'S', 583,
        's', 583,
        'V', 469,
        'v', 469,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(324);
      if (lookahead == '#' ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '$', 445,
        '\'', 6,
        '*', 360,
        '.', 310,
        '0', 323,
        '@', 288,
        'N', 454,
        '[', 287,
        'n', 595,
        'A', 540,
        'a', 540,
        'B', 522,
        'b', 522,
        'C', 520,
        'c', 520,
        'D', 493,
        'd', 493,
        'F', 523,
        'f', 523,
        'G', 561,
        'g', 561,
        'L', 464,
        'l', 464,
        'M', 465,
        'm', 465,
        'P', 501,
        'p', 501,
        'R', 468,
        'r', 468,
        'S', 583,
        's', 583,
        'V', 469,
        'v', 469,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(324);
      if (lookahead == '#' ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\'', 5,
        '-', 322,
        '@', 288,
        'N', 453,
        '[', 287,
        'n', 601,
        'D', 498,
        'd', 498,
        'G', 561,
        'g', 561,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(183);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(321);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(346);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '\'', 6,
        '(', 331,
        '+', 448,
        '-', 446,
        '.', 310,
        '@', 288,
        'N', 455,
        '[', 287,
        'G', 561,
        'g', 561,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(309);
      if (lookahead == '[') ADVANCE(287);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(561);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(362);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(356);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(357);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(354);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(352);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(353);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(355);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(358);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(359);
      END_STATE();
    case 18:
      if (lookahead == 'D') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'O') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 'O') ADVANCE(622);
      END_STATE();
    case 21:
      if (lookahead == ']') ADVANCE(621);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(55);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(278);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(67);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(54);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(223);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(230);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(279);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(112);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(285);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(225);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(275);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(64);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(244);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 36:
      ADVANCE_MAP(
        'A', 177,
        'a', 177,
        'E', 60,
        'e', 60,
        'I', 113,
        'i', 113,
        'O', 280,
        'o', 280,
      );
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(191);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 45:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(206);
      END_STATE();
    case 46:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(206);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 47:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(131);
      END_STATE();
    case 48:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(101);
      END_STATE();
    case 49:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(146);
      END_STATE();
    case 50:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(433);
      END_STATE();
    case 51:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(328);
      END_STATE();
    case 52:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(377);
      END_STATE();
    case 53:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(432);
      END_STATE();
    case 54:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(127);
      END_STATE();
    case 55:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(211);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(132);
      END_STATE();
    case 56:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 57:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(249);
      END_STATE();
    case 58:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(253);
      END_STATE();
    case 59:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(254);
      END_STATE();
    case 60:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(205);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(213);
      END_STATE();
    case 61:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(147);
      END_STATE();
    case 62:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 63:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(435);
      END_STATE();
    case 64:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(388);
      END_STATE();
    case 65:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(436);
      END_STATE();
    case 66:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(338);
      END_STATE();
    case 67:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(143);
      END_STATE();
    case 68:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 69:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 70:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 71:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(139);
      END_STATE();
    case 72:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(257);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(196);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(429);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(235);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(167);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(68);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(168);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(443);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 106:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 107:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 108:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 109:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(33);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(240);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(50);
      END_STATE();
    case 110:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(141);
      END_STATE();
    case 111:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(400);
      END_STATE();
    case 112:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(386);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(259);
      END_STATE();
    case 113:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(125);
      END_STATE();
    case 114:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(398);
      END_STATE();
    case 115:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(437);
      END_STATE();
    case 116:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(438);
      END_STATE();
    case 117:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(394);
      END_STATE();
    case 118:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(134);
      END_STATE();
    case 119:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(184);
      END_STATE();
    case 120:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(117);
      END_STATE();
    case 121:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(82);
      END_STATE();
    case 122:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(82);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(422);
      END_STATE();
    case 123:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(76);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(154);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(174);
      END_STATE();
    case 124:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(333);
      END_STATE();
    case 125:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(246);
      END_STATE();
    case 126:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(136);
      END_STATE();
    case 127:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(108);
      END_STATE();
    case 128:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(229);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(156);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 129:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 130:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(258);
      END_STATE();
    case 131:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 132:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 133:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 134:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 135:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 136:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 137:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(261);
      END_STATE();
    case 138:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 139:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 140:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(260);
      END_STATE();
    case 141:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 142:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 143:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(241);
      END_STATE();
    case 144:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(424);
      END_STATE();
    case 145:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(381);
      END_STATE();
    case 146:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(236);
      END_STATE();
    case 147:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(239);
      END_STATE();
    case 148:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(416);
      END_STATE();
    case 149:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(319);
      END_STATE();
    case 150:
      ADVANCE_MAP(
        'L', 148,
        'l', 148,
        'N', 63,
        'n', 63,
        'S', 340,
        's', 340,
        'T', 344,
        't', 344,
        'V', 111,
        'v', 111,
      );
      END_STATE();
    case 151:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 152:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 153:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 154:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(151);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 155:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 156:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 157:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 158:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(273);
      END_STATE();
    case 159:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 160:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 161:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(248);
      END_STATE();
    case 162:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(251);
      END_STATE();
    case 163:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 164:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 165:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(274);
      END_STATE();
    case 166:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 167:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(92);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(232);
      END_STATE();
    case 168:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(406);
      END_STATE();
    case 169:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(348);
      END_STATE();
    case 170:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(370);
      END_STATE();
    case 171:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(367);
      END_STATE();
    case 172:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(214);
      END_STATE();
    case 173:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 174:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(78);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 175:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(46);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(98);
      END_STATE();
    case 176:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(404);
      END_STATE();
    case 177:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 178:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(342);
      END_STATE();
    case 179:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(373);
      END_STATE();
    case 180:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 181:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 182:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 183:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 184:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 185:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 186:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 187:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(268);
      END_STATE();
    case 188:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 189:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 190:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 191:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 192:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 193:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 194:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 195:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 196:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 197:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 198:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 199:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(183);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 200:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 201:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(305);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 202:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(267);
      END_STATE();
    case 203:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 204:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 205:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 206:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 207:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 208:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 209:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 210:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(153);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(224);
      END_STATE();
    case 211:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 212:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(374);
      END_STATE();
    case 213:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(105);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 214:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(142);
      END_STATE();
    case 215:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(412);
      END_STATE();
    case 216:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(371);
      END_STATE();
    case 217:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(343);
      END_STATE();
    case 218:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 219:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(430);
      END_STATE();
    case 220:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(426);
      END_STATE();
    case 221:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(70);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(243);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(96);
      END_STATE();
    case 222:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 223:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 224:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 225:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(264);
      END_STATE();
    case 226:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 227:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(207);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(227);
      END_STATE();
    case 228:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 229:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(242);
      END_STATE();
    case 230:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 231:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(442);
      END_STATE();
    case 232:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(336);
      END_STATE();
    case 233:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(384);
      END_STATE();
    case 234:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(50);
      END_STATE();
    case 235:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(265);
      END_STATE();
    case 236:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(269);
      END_STATE();
    case 237:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(52);
      END_STATE();
    case 238:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(53);
      END_STATE();
    case 239:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(270);
      END_STATE();
    case 240:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(90);
      END_STATE();
    case 241:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(255);
      END_STATE();
    case 242:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(266);
      END_STATE();
    case 243:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(314);
      END_STATE();
    case 244:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(365);
      END_STATE();
    case 245:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(396);
      END_STATE();
    case 246:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(363);
      END_STATE();
    case 247:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(313);
      END_STATE();
    case 248:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(335);
      END_STATE();
    case 249:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(350);
      END_STATE();
    case 250:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(439);
      END_STATE();
    case 251:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(317);
      END_STATE();
    case 252:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(27);
      END_STATE();
    case 253:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(385);
      END_STATE();
    case 254:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(418);
      END_STATE();
    case 255:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(379);
      END_STATE();
    case 256:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(375);
      END_STATE();
    case 257:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(283);
      END_STATE();
    case 258:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(124);
      END_STATE();
    case 259:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(23);
      END_STATE();
    case 260:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(126);
      END_STATE();
    case 261:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      END_STATE();
    case 262:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(84);
      END_STATE();
    case 263:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(85);
      END_STATE();
    case 264:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(137);
      END_STATE();
    case 265:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      END_STATE();
    case 266:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(28);
      END_STATE();
    case 267:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(212);
      END_STATE();
    case 268:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 269:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 270:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(171);
      END_STATE();
    case 271:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 272:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(247);
      END_STATE();
    case 273:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 274:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 275:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(162);
      END_STATE();
    case 276:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(160);
      END_STATE();
    case 277:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(408);
      END_STATE();
    case 278:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(38);
      END_STATE();
    case 279:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(44);
      END_STATE();
    case 280:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(441);
      END_STATE();
    case 281:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(440);
      END_STATE();
    case 282:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(231);
      END_STATE();
    case 283:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(103);
      END_STATE();
    case 284:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(138);
      END_STATE();
    case 285:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(402);
      END_STATE();
    case 286:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(25);
      END_STATE();
    case 287:
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 288:
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 289:
      if (eof) ADVANCE(304);
      ADVANCE_MAP(
        '%', 10,
        '&', 11,
        '\'', 6,
        '(', 331,
        ')', 332,
        '*', 12,
        '+', 13,
        ',', 307,
        '-', 14,
        '.', 310,
        '/', 15,
        ';', 308,
        '=', 312,
        'N', 455,
        '[', 287,
        '^', 16,
        '|', 17,
        'A', 574,
        'a', 574,
        'E', 618,
        'e', 618,
        'F', 569,
        'f', 569,
        'G', 561,
        'g', 561,
        'S', 490,
        's', 490,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 290:
      if (eof) ADVANCE(304);
      ADVANCE_MAP(
        '\'', 5,
        '(', 331,
        ')', 332,
        '+', 347,
        ',', 307,
        '-', 322,
        '.', 309,
        ';', 308,
        '=', 330,
        '@', 288,
        'N', 453,
        '[', 287,
        'n', 601,
        'D', 498,
        'd', 498,
        'E', 618,
        'e', 618,
        'G', 561,
        'g', 561,
        'S', 490,
        's', 490,
        'W', 527,
        'w', 527,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 291:
      if (eof) ADVANCE(304);
      ADVANCE_MAP(
        '\'', 5,
        '(', 331,
        ')', 332,
        ',', 307,
        '-', 322,
        '.', 309,
        ';', 308,
        '@', 288,
        'N', 453,
        '[', 287,
        'n', 601,
        'D', 498,
        'd', 498,
        'E', 618,
        'e', 618,
        'G', 561,
        'g', 561,
        'S', 490,
        's', 490,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 292:
      if (eof) ADVANCE(304);
      ADVANCE_MAP(
        '\'', 6,
        '(', 331,
        ',', 307,
        '.', 309,
        ':', 9,
        ';', 308,
        '=', 330,
        'N', 455,
        '[', 287,
        'A', 574,
        'a', 574,
        'E', 618,
        'e', 618,
        'F', 569,
        'f', 569,
        'G', 561,
        'g', 561,
        'S', 490,
        's', 490,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(292);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 293:
      if (eof) ADVANCE(304);
      ADVANCE_MAP(
        '\'', 6,
        ')', 332,
        ',', 307,
        '.', 309,
        ';', 308,
        'N', 455,
        '[', 287,
        'A', 574,
        'a', 574,
        'E', 618,
        'e', 618,
        'F', 569,
        'f', 569,
        'G', 561,
        'g', 561,
        'O', 614,
        'o', 614,
        'S', 490,
        's', 490,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(293);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 294:
      if (eof) ADVANCE(304);
      ADVANCE_MAP(
        '\'', 6,
        ')', 332,
        ',', 307,
        '.', 309,
        ';', 308,
        'N', 455,
        '[', 287,
        'A', 574,
        'a', 574,
        'E', 451,
        'e', 451,
        'F', 569,
        'f', 569,
        'G', 561,
        'g', 561,
        'S', 490,
        's', 490,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(294);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 295:
      if (eof) ADVANCE(304);
      ADVANCE_MAP(
        '(', 331,
        ')', 332,
        ',', 307,
        '.', 309,
        ';', 308,
        '=', 312,
        'A', 238,
        'a', 238,
        'B', 72,
        'b', 72,
        'C', 210,
        'c', 210,
        'D', 95,
        'd', 95,
        'E', 452,
        'e', 452,
        'G', 200,
        'g', 200,
        'N', 276,
        'n', 276,
        'O', 221,
        'o', 221,
        'P', 31,
        'p', 31,
        'R', 43,
        'r', 43,
        'S', 99,
        's', 99,
        'U', 186,
        'u', 186,
        'W', 140,
        'w', 140,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(295);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 296:
      if (eof) ADVANCE(304);
      ADVANCE_MAP(
        '(', 331,
        ')', 332,
        ',', 307,
        '.', 309,
        ';', 308,
        '[', 287,
        'E', 618,
        'e', 618,
        'F', 569,
        'f', 569,
        'G', 561,
        'g', 561,
        'S', 490,
        's', 490,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(296);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 297:
      if (eof) ADVANCE(304);
      ADVANCE_MAP(
        '+', 448,
        ',', 307,
        '-', 446,
        '.', 309,
        ';', 308,
        '=', 330,
        '[', 287,
        'E', 618,
        'e', 618,
        'G', 561,
        'g', 561,
        'S', 490,
        's', 490,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(297);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 298:
      if (eof) ADVANCE(304);
      ADVANCE_MAP(
        ',', 307,
        '.', 309,
        ';', 308,
        '=', 312,
        '[', 287,
        'E', 618,
        'e', 618,
        'G', 561,
        'g', 561,
        'O', 608,
        'o', 608,
        'S', 490,
        's', 490,
        'W', 527,
        'w', 527,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(298);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 299:
      if (eof) ADVANCE(304);
      ADVANCE_MAP(
        ',', 307,
        '.', 309,
        ';', 308,
        '[', 287,
        'E', 618,
        'e', 618,
        'F', 569,
        'f', 569,
        'G', 561,
        'g', 561,
        'O', 614,
        'o', 614,
        'S', 490,
        's', 490,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(299);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 300:
      if (eof) ADVANCE(304);
      ADVANCE_MAP(
        ',', 307,
        '.', 309,
        ';', 308,
        '[', 287,
        'E', 618,
        'e', 618,
        'G', 561,
        'g', 561,
        'S', 490,
        's', 490,
        'W', 527,
        'w', 527,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(300);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 301:
      if (eof) ADVANCE(304);
      ADVANCE_MAP(
        ',', 307,
        '.', 309,
        ';', 308,
        '[', 287,
        'E', 451,
        'e', 451,
        'F', 569,
        'f', 569,
        'G', 561,
        'g', 561,
        'S', 490,
        's', 490,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(301);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 302:
      if (eof) ADVANCE(304);
      ADVANCE_MAP(
        '.', 309,
        ';', 308,
        '[', 287,
        'A', 573,
        'a', 573,
        'E', 618,
        'e', 618,
        'G', 561,
        'g', 561,
        'S', 490,
        's', 490,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(302);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 303:
      if (eof) ADVANCE(304);
      ADVANCE_MAP(
        '.', 309,
        ';', 308,
        '[', 287,
        'A', 594,
        'a', 594,
        'E', 618,
        'e', 618,
        'G', 561,
        'g', 561,
        'S', 490,
        's', 490,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(303);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_go_statement_token1);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_go_statement_token1);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_func_proc_name_server_database_schema_token1);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_func_proc_name_server_database_schema_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_execute_statement_arg_named_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_OUTPUT);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_OUTPUT);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(272);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_OUTPUT);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(609);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_OUTPUT);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_default);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_default);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_null_);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_null_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '\'') ADVANCE(5);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_constant_token3);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'x') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_constant_token3);
      if (lookahead == '.') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_constant_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_execute);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_execute);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(598);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_execute);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(263);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_execute);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_execute_body_token1);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_WITH);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_WITH);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_RESULT_SETS_token1);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_RESULT_SETS_token2);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_NONE);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_UNDEFINED);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_RECOMPILE);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_AS_token1);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_AS_token1);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_LOGIN);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_USER);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_AT_KEYWORD);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_AT_KEYWORD);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_string_lit);
      if (lookahead == '\'') ADVANCE(6);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_PLUS);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_query_specification_token1);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_query_specification_token1);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_select);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_select);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_asterisk);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_asterisk);
      if (lookahead == '=') ADVANCE(354);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_right_);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_right_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_left_);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_left_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_binary_checksum_);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_binary_checksum_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_checksum_);
      if (lookahead == '_') ADVANCE(470);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_checksum_);
      if (lookahead == '_') ADVANCE(37);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_over__token1);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_over__token1);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_within_group__token1);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_within_group__token2);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_percentile_cont_);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_percentile_cont_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_percentile_disc_);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_percentile_disc_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_cume_dist_);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_cume_dist_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_percent_rank_);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_percent_rank_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_ignore_nulls__token1);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_ignore_nulls__token2);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_respect_nulls__token1);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_lag_);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_lag_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_lead_);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_lead_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_first_value_);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_first_value_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_last_value_);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_last_value_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_checksum_agg_);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_checksum_agg_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_count_);
      if (lookahead == '_') ADVANCE(47);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_count_);
      if (lookahead == '_') ADVANCE(476);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_count_big_);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_count_big_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_avg_);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_avg_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_max_);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_max_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_min_);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_min_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_sum_);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_sum_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_stdev_);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(410);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_stdev_);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(411);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_stdevp_);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_stdevp_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_var_);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(414);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_var_);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(415);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_varp_);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_varp_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_all_);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_all_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_distinct_);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_distinct_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_ntile_);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_ntile_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_rank_);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_rank_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_dense_rank_);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_dense_rank_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_row_number_);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_row_number_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_partition_by_clause_token1);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_partition_by_clause_token2);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_collation__token1);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_asc_);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_desc_);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_window_frame_extent_token1);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_window_frame_extent_token2);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_window_frame_following_token1);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_window_frame_following_token2);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_window_frame_preceding_token1);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_window_frame_preceding_token2);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_window_frame_preceding_token3);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_window_frame_preceding_token3);
      if (lookahead == '_') ADVANCE(187);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(442);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_row_or_range_clause_token1);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_row_or_range_clause_token2);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_binary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(444);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(353);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(352);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_real__token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_real__token2);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(491);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_real__token2);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(89);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(538);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(528);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(538);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(480);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(613);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(483);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(553);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(571);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(572);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(543);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(615);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(513);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(467);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(617);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(551);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(603);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(487);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(584);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(552);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(514);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(616);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(564);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(517);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(565);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(539);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(554);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(555);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(544);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(524);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(505);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(327);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(378);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(563);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(525);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(582);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(533);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(521);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(508);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(591);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(534);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(389);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(529);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(500);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(537);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(478);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(329);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(510);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(578);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(510);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(421);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(393);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(391);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(511);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(481);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(612);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(570);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(458);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(482);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(461);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(566);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(456);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(567);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(557);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(486);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(466);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(577);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(466);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(401);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(387);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(597);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(519);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(399);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(395);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(516);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(334);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(586);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(503);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(604);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(550);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(509);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(559);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(568);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(515);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(575);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(560);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(596);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(542);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(576);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(423);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(425);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(382);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(579);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(580);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(320);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(417);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(499);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(535);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(607);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(536);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(512);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(587);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(495);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(506);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(610);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(407);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(369);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(368);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(349);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(477);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(502);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(405);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(530);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(602);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(531);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(532);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(585);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(588);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(590);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(471);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(485);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(306);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(548);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(558);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(413);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(619);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(427);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(372);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(581);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(562);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(484);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(473);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(474);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(341);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(345);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(341);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(479);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(589);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(504);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(599);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(605);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(606);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(600);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(351);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(489);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(545);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(366);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(397);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(364);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(318);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(462);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(380);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(376);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(419);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(315);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(316);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(345);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(528);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(538);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(518);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(457);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(492);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(526);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(463);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(538);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(549);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(541);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(556);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(546);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(547);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(496);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(592);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(593);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(497);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(512);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(409);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(472);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(507);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(475);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(460);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(403);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(491);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(459);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_id__token2);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 297},
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
  [41] = {.lex_state = 297},
  [42] = {.lex_state = 297},
  [43] = {.lex_state = 290},
  [44] = {.lex_state = 290},
  [45] = {.lex_state = 289},
  [46] = {.lex_state = 289},
  [47] = {.lex_state = 291},
  [48] = {.lex_state = 291},
  [49] = {.lex_state = 289},
  [50] = {.lex_state = 290},
  [51] = {.lex_state = 297},
  [52] = {.lex_state = 297},
  [53] = {.lex_state = 290},
  [54] = {.lex_state = 290},
  [55] = {.lex_state = 290},
  [56] = {.lex_state = 291},
  [57] = {.lex_state = 289},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 289},
  [61] = {.lex_state = 290},
  [62] = {.lex_state = 290},
  [63] = {.lex_state = 297},
  [64] = {.lex_state = 290},
  [65] = {.lex_state = 290},
  [66] = {.lex_state = 290},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 290},
  [69] = {.lex_state = 290},
  [70] = {.lex_state = 292},
  [71] = {.lex_state = 290},
  [72] = {.lex_state = 292},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 292},
  [75] = {.lex_state = 290},
  [76] = {.lex_state = 290},
  [77] = {.lex_state = 295},
  [78] = {.lex_state = 290},
  [79] = {.lex_state = 290},
  [80] = {.lex_state = 290},
  [81] = {.lex_state = 293},
  [82] = {.lex_state = 290},
  [83] = {.lex_state = 290},
  [84] = {.lex_state = 291},
  [85] = {.lex_state = 290},
  [86] = {.lex_state = 290},
  [87] = {.lex_state = 290},
  [88] = {.lex_state = 290},
  [89] = {.lex_state = 295},
  [90] = {.lex_state = 293},
  [91] = {.lex_state = 291},
  [92] = {.lex_state = 291},
  [93] = {.lex_state = 291},
  [94] = {.lex_state = 294},
  [95] = {.lex_state = 291},
  [96] = {.lex_state = 291},
  [97] = {.lex_state = 291},
  [98] = {.lex_state = 294},
  [99] = {.lex_state = 295},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 291},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 291},
  [104] = {.lex_state = 291},
  [105] = {.lex_state = 291},
  [106] = {.lex_state = 291},
  [107] = {.lex_state = 289},
  [108] = {.lex_state = 289},
  [109] = {.lex_state = 289},
  [110] = {.lex_state = 291},
  [111] = {.lex_state = 289},
  [112] = {.lex_state = 291},
  [113] = {.lex_state = 291},
  [114] = {.lex_state = 291},
  [115] = {.lex_state = 289},
  [116] = {.lex_state = 289},
  [117] = {.lex_state = 289},
  [118] = {.lex_state = 289},
  [119] = {.lex_state = 289},
  [120] = {.lex_state = 289},
  [121] = {.lex_state = 289},
  [122] = {.lex_state = 289},
  [123] = {.lex_state = 289},
  [124] = {.lex_state = 289},
  [125] = {.lex_state = 289},
  [126] = {.lex_state = 291},
  [127] = {.lex_state = 291},
  [128] = {.lex_state = 291},
  [129] = {.lex_state = 291},
  [130] = {.lex_state = 289},
  [131] = {.lex_state = 289},
  [132] = {.lex_state = 291},
  [133] = {.lex_state = 289},
  [134] = {.lex_state = 291},
  [135] = {.lex_state = 289},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 291},
  [138] = {.lex_state = 289},
  [139] = {.lex_state = 292},
  [140] = {.lex_state = 291},
  [141] = {.lex_state = 289},
  [142] = {.lex_state = 289},
  [143] = {.lex_state = 291},
  [144] = {.lex_state = 289},
  [145] = {.lex_state = 289},
  [146] = {.lex_state = 289},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 289},
  [149] = {.lex_state = 291},
  [150] = {.lex_state = 291},
  [151] = {.lex_state = 291},
  [152] = {.lex_state = 291},
  [153] = {.lex_state = 291},
  [154] = {.lex_state = 296},
  [155] = {.lex_state = 299},
  [156] = {.lex_state = 291},
  [157] = {.lex_state = 299},
  [158] = {.lex_state = 291},
  [159] = {.lex_state = 289},
  [160] = {.lex_state = 291},
  [161] = {.lex_state = 298},
  [162] = {.lex_state = 291},
  [163] = {.lex_state = 291},
  [164] = {.lex_state = 289},
  [165] = {.lex_state = 291},
  [166] = {.lex_state = 296},
  [167] = {.lex_state = 298},
  [168] = {.lex_state = 300},
  [169] = {.lex_state = 300},
  [170] = {.lex_state = 300},
  [171] = {.lex_state = 296},
  [172] = {.lex_state = 302},
  [173] = {.lex_state = 300},
  [174] = {.lex_state = 302},
  [175] = {.lex_state = 301},
  [176] = {.lex_state = 301},
  [177] = {.lex_state = 300},
  [178] = {.lex_state = 296},
  [179] = {.lex_state = 296},
  [180] = {.lex_state = 300},
  [181] = {.lex_state = 298},
  [182] = {.lex_state = 300},
  [183] = {.lex_state = 296},
  [184] = {.lex_state = 300},
  [185] = {.lex_state = 300},
  [186] = {.lex_state = 300},
  [187] = {.lex_state = 296},
  [188] = {.lex_state = 296},
  [189] = {.lex_state = 296},
  [190] = {.lex_state = 300},
  [191] = {.lex_state = 296},
  [192] = {.lex_state = 300},
  [193] = {.lex_state = 296},
  [194] = {.lex_state = 296},
  [195] = {.lex_state = 295},
  [196] = {.lex_state = 296},
  [197] = {.lex_state = 296},
  [198] = {.lex_state = 300},
  [199] = {.lex_state = 300},
  [200] = {.lex_state = 296},
  [201] = {.lex_state = 296},
  [202] = {.lex_state = 296},
  [203] = {.lex_state = 296},
  [204] = {.lex_state = 296},
  [205] = {.lex_state = 296},
  [206] = {.lex_state = 297},
  [207] = {.lex_state = 296},
  [208] = {.lex_state = 297},
  [209] = {.lex_state = 300},
  [210] = {.lex_state = 297},
  [211] = {.lex_state = 300},
  [212] = {.lex_state = 300},
  [213] = {.lex_state = 296},
  [214] = {.lex_state = 296},
  [215] = {.lex_state = 296},
  [216] = {.lex_state = 296},
  [217] = {.lex_state = 296},
  [218] = {.lex_state = 300},
  [219] = {.lex_state = 296},
  [220] = {.lex_state = 296},
  [221] = {.lex_state = 296},
  [222] = {.lex_state = 300},
  [223] = {.lex_state = 296},
  [224] = {.lex_state = 296},
  [225] = {.lex_state = 297},
  [226] = {.lex_state = 296},
  [227] = {.lex_state = 300},
  [228] = {.lex_state = 296},
  [229] = {.lex_state = 297},
  [230] = {.lex_state = 297},
  [231] = {.lex_state = 297},
  [232] = {.lex_state = 296},
  [233] = {.lex_state = 296},
  [234] = {.lex_state = 296},
  [235] = {.lex_state = 296},
  [236] = {.lex_state = 296},
  [237] = {.lex_state = 297},
  [238] = {.lex_state = 297},
  [239] = {.lex_state = 296},
  [240] = {.lex_state = 296},
  [241] = {.lex_state = 296},
  [242] = {.lex_state = 295},
  [243] = {.lex_state = 296},
  [244] = {.lex_state = 296},
  [245] = {.lex_state = 295},
  [246] = {.lex_state = 300},
  [247] = {.lex_state = 295},
  [248] = {.lex_state = 295},
  [249] = {.lex_state = 8},
  [250] = {.lex_state = 297},
  [251] = {.lex_state = 297},
  [252] = {.lex_state = 303},
  [253] = {.lex_state = 297},
  [254] = {.lex_state = 297},
  [255] = {.lex_state = 303},
  [256] = {.lex_state = 297},
  [257] = {.lex_state = 297},
  [258] = {.lex_state = 297},
  [259] = {.lex_state = 297},
  [260] = {.lex_state = 296},
  [261] = {.lex_state = 300},
  [262] = {.lex_state = 297},
  [263] = {.lex_state = 297},
  [264] = {.lex_state = 295},
  [265] = {.lex_state = 295},
  [266] = {.lex_state = 295},
  [267] = {.lex_state = 295},
  [268] = {.lex_state = 295},
  [269] = {.lex_state = 297},
  [270] = {.lex_state = 297},
  [271] = {.lex_state = 297},
  [272] = {.lex_state = 297},
  [273] = {.lex_state = 295},
  [274] = {.lex_state = 297},
  [275] = {.lex_state = 297},
  [276] = {.lex_state = 295},
  [277] = {.lex_state = 297},
  [278] = {.lex_state = 297},
  [279] = {.lex_state = 295},
  [280] = {.lex_state = 295},
  [281] = {.lex_state = 295},
  [282] = {.lex_state = 297},
  [283] = {.lex_state = 295},
  [284] = {.lex_state = 295},
  [285] = {.lex_state = 295},
  [286] = {.lex_state = 295},
  [287] = {.lex_state = 297},
  [288] = {.lex_state = 295},
  [289] = {.lex_state = 297},
  [290] = {.lex_state = 297},
  [291] = {.lex_state = 297},
  [292] = {.lex_state = 295},
  [293] = {.lex_state = 297},
  [294] = {.lex_state = 295},
  [295] = {.lex_state = 297},
  [296] = {.lex_state = 297},
  [297] = {.lex_state = 297},
  [298] = {.lex_state = 297},
  [299] = {.lex_state = 295},
  [300] = {.lex_state = 297},
  [301] = {.lex_state = 297},
  [302] = {.lex_state = 295},
  [303] = {.lex_state = 297},
  [304] = {.lex_state = 295},
  [305] = {.lex_state = 295},
  [306] = {.lex_state = 295},
  [307] = {.lex_state = 295},
  [308] = {.lex_state = 295},
  [309] = {.lex_state = 295},
  [310] = {.lex_state = 295},
  [311] = {.lex_state = 295},
  [312] = {.lex_state = 295},
  [313] = {.lex_state = 295},
  [314] = {.lex_state = 295},
  [315] = {.lex_state = 295},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 7},
  [325] = {.lex_state = 297},
  [326] = {.lex_state = 297},
  [327] = {.lex_state = 297},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 8},
  [330] = {.lex_state = 8},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 7},
  [334] = {.lex_state = 295},
  [335] = {.lex_state = 8},
  [336] = {.lex_state = 8},
  [337] = {.lex_state = 8},
  [338] = {.lex_state = 7},
  [339] = {.lex_state = 8},
  [340] = {.lex_state = 8},
  [341] = {.lex_state = 8},
  [342] = {.lex_state = 8},
  [343] = {.lex_state = 8},
  [344] = {.lex_state = 295},
  [345] = {.lex_state = 8},
  [346] = {.lex_state = 295},
  [347] = {.lex_state = 8},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 8},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 295},
  [352] = {.lex_state = 295},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 295},
  [355] = {.lex_state = 295},
  [356] = {.lex_state = 8},
  [357] = {.lex_state = 295},
  [358] = {.lex_state = 8},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 295},
  [362] = {.lex_state = 8},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 7},
  [365] = {.lex_state = 8},
  [366] = {.lex_state = 8},
  [367] = {.lex_state = 8},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 295},
  [370] = {.lex_state = 8},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 295},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 8},
  [375] = {.lex_state = 8},
  [376] = {.lex_state = 8},
  [377] = {.lex_state = 8},
  [378] = {.lex_state = 8},
  [379] = {.lex_state = 8},
  [380] = {.lex_state = 8},
  [381] = {.lex_state = 8},
  [382] = {.lex_state = 8},
  [383] = {.lex_state = 8},
  [384] = {.lex_state = 8},
  [385] = {.lex_state = 295},
  [386] = {.lex_state = 8},
  [387] = {.lex_state = 8},
  [388] = {.lex_state = 8},
  [389] = {.lex_state = 8},
  [390] = {.lex_state = 8},
  [391] = {.lex_state = 8},
  [392] = {.lex_state = 8},
  [393] = {.lex_state = 8},
  [394] = {.lex_state = 8},
  [395] = {.lex_state = 8},
  [396] = {.lex_state = 8},
  [397] = {.lex_state = 295},
  [398] = {.lex_state = 8},
  [399] = {.lex_state = 8},
  [400] = {.lex_state = 8},
  [401] = {.lex_state = 8},
  [402] = {.lex_state = 295},
  [403] = {.lex_state = 8},
  [404] = {.lex_state = 8},
  [405] = {.lex_state = 8},
  [406] = {.lex_state = 8},
  [407] = {.lex_state = 295},
  [408] = {.lex_state = 8},
  [409] = {.lex_state = 8},
  [410] = {.lex_state = 8},
  [411] = {.lex_state = 8},
  [412] = {.lex_state = 8},
  [413] = {.lex_state = 8},
  [414] = {.lex_state = 8},
  [415] = {.lex_state = 8},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 295},
  [418] = {.lex_state = 295},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 7},
  [422] = {.lex_state = 289},
  [423] = {.lex_state = 295},
  [424] = {.lex_state = 295},
  [425] = {.lex_state = 295},
  [426] = {.lex_state = 289},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 1},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 295},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 1},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 295},
  [437] = {.lex_state = 1},
  [438] = {.lex_state = 1},
  [439] = {.lex_state = 295},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 295},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 295},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 295},
  [447] = {.lex_state = 289},
  [448] = {.lex_state = 295},
  [449] = {.lex_state = 295},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 297},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 297},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 297},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
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
  [495] = {.lex_state = 295},
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
  [509] = {.lex_state = 295},
  [510] = {.lex_state = 295},
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
  [522] = {.lex_state = 297},
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
  [535] = {.lex_state = 297},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 297},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 1},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 1},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 1},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 297},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 227},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 297},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 1},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
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
  [599] = {.lex_state = 1},
  [600] = {.lex_state = 1},
  [601] = {.lex_state = 297},
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
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
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
  [629] = {.lex_state = 295},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 295},
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
    [sym_tsql_file] = STATE(648),
    [sym_batch] = STATE(42),
    [sym_go_statement] = STATE(259),
    [sym_execute_body_batch] = STATE(73),
    [sym_func_proc_name_server_database_schema] = STATE(47),
    [sym_func_proc_name_database_schema] = STATE(132),
    [sym_func_proc_name_schema] = STATE(101),
    [sym_sql_clauses] = STATE(51),
    [sym_another_statement] = STATE(269),
    [sym_execute_statement] = STATE(270),
    [sym_dml_clause] = STATE(269),
    [sym_select_statement_standalone] = STATE(271),
    [sym_select_statement] = STATE(272),
    [sym_query_expression] = STATE(275),
    [sym_query_specification] = STATE(277),
    [sym_id_] = STATE(96),
    [sym_keyword] = STATE(56),
    [aux_sym_tsql_file_repeat1] = STATE(42),
    [aux_sym_batch_repeat1] = STATE(51),
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
    ACTIONS(43), 1,
      sym_checksum_agg_,
    ACTIONS(49), 1,
      sym_ntile_,
    ACTIONS(53), 1,
      sym_binary,
    ACTIONS(55), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym_real__token1,
    ACTIONS(59), 1,
      aux_sym_id__token1,
    ACTIONS(61), 1,
      aux_sym_id__token2,
    STATE(45), 1,
      sym_LOCAL_ID_,
    STATE(60), 1,
      sym_expression,
    STATE(70), 1,
      sym_id_,
    STATE(74), 1,
      sym_keyword,
    STATE(101), 1,
      sym_func_proc_name_schema,
    STATE(146), 1,
      sym_primitive_constant,
    STATE(171), 1,
      sym_select_list_elem,
    STATE(260), 1,
      sym_select_list,
    STATE(519), 1,
      sym_scalar_function_name,
    STATE(522), 1,
      sym_column_alias,
    STATE(562), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_right_,
      sym_left_,
    ACTIONS(33), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(35), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(37), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(39), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(41), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(45), 2,
      sym_count_,
      sym_count_big_,
    STATE(204), 2,
      sym_udt_elem,
      sym_expression_elem,
    ACTIONS(51), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(107), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(109), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(108), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(47), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [140] = 37,
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
    ACTIONS(43), 1,
      sym_checksum_agg_,
    ACTIONS(49), 1,
      sym_ntile_,
    ACTIONS(53), 1,
      sym_binary,
    ACTIONS(55), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym_real__token1,
    ACTIONS(59), 1,
      aux_sym_id__token1,
    ACTIONS(61), 1,
      aux_sym_id__token2,
    STATE(45), 1,
      sym_LOCAL_ID_,
    STATE(60), 1,
      sym_expression,
    STATE(70), 1,
      sym_id_,
    STATE(74), 1,
      sym_keyword,
    STATE(101), 1,
      sym_func_proc_name_schema,
    STATE(146), 1,
      sym_primitive_constant,
    STATE(213), 1,
      sym_select_list_elem,
    STATE(519), 1,
      sym_scalar_function_name,
    STATE(522), 1,
      sym_column_alias,
    STATE(562), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_right_,
      sym_left_,
    ACTIONS(33), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(35), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(37), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(39), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(41), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(45), 2,
      sym_count_,
      sym_count_big_,
    STATE(204), 2,
      sym_udt_elem,
      sym_expression_elem,
    ACTIONS(51), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(107), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(109), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(108), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(47), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [277] = 34,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(43), 1,
      sym_checksum_agg_,
    ACTIONS(49), 1,
      sym_ntile_,
    ACTIONS(55), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym_real__token1,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(67), 1,
      sym_asterisk,
    STATE(56), 1,
      sym_keyword,
    STATE(101), 1,
      sym_func_proc_name_schema,
    STATE(154), 1,
      sym_id_,
    STATE(519), 1,
      sym_scalar_function_name,
    STATE(543), 1,
      sym_all_distinct_expression,
    STATE(562), 1,
      sym_func_proc_name_database_schema,
    STATE(586), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_right_,
      sym_left_,
    ACTIONS(33), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(35), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(37), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(39), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(41), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(45), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(53), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(69), 2,
      sym_all_,
      sym_distinct_,
    STATE(146), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(51), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(107), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(109), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(108), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(47), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [407] = 34,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(43), 1,
      sym_checksum_agg_,
    ACTIONS(49), 1,
      sym_ntile_,
    ACTIONS(55), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym_real__token1,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(71), 1,
      sym_asterisk,
    STATE(56), 1,
      sym_keyword,
    STATE(101), 1,
      sym_func_proc_name_schema,
    STATE(154), 1,
      sym_id_,
    STATE(519), 1,
      sym_scalar_function_name,
    STATE(562), 1,
      sym_func_proc_name_database_schema,
    STATE(586), 1,
      sym_expression,
    STATE(614), 1,
      sym_all_distinct_expression,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_right_,
      sym_left_,
    ACTIONS(33), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(35), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(37), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(39), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(41), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(45), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(53), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(69), 2,
      sym_all_,
      sym_distinct_,
    STATE(146), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(51), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(107), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(109), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(108), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(47), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [537] = 34,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(43), 1,
      sym_checksum_agg_,
    ACTIONS(49), 1,
      sym_ntile_,
    ACTIONS(55), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym_real__token1,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(73), 1,
      sym_asterisk,
    STATE(56), 1,
      sym_keyword,
    STATE(101), 1,
      sym_func_proc_name_schema,
    STATE(154), 1,
      sym_id_,
    STATE(519), 1,
      sym_scalar_function_name,
    STATE(562), 1,
      sym_func_proc_name_database_schema,
    STATE(567), 1,
      sym_all_distinct_expression,
    STATE(586), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_right_,
      sym_left_,
    ACTIONS(33), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(35), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(37), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(39), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(41), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(45), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(53), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(69), 2,
      sym_all_,
      sym_distinct_,
    STATE(146), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(51), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(107), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(109), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(108), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(47), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [667] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(43), 1,
      sym_checksum_agg_,
    ACTIONS(49), 1,
      sym_ntile_,
    ACTIONS(55), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym_real__token1,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(101), 1,
      sym_func_proc_name_schema,
    STATE(154), 1,
      sym_id_,
    STATE(519), 1,
      sym_scalar_function_name,
    STATE(562), 1,
      sym_func_proc_name_database_schema,
    STATE(586), 1,
      sym_expression,
    STATE(598), 1,
      sym_all_distinct_expression,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_right_,
      sym_left_,
    ACTIONS(33), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(35), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(37), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(39), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(41), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(45), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(53), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(69), 2,
      sym_all_,
      sym_distinct_,
    STATE(146), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(51), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(107), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(109), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(108), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(47), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [794] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(43), 1,
      sym_checksum_agg_,
    ACTIONS(49), 1,
      sym_ntile_,
    ACTIONS(55), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym_real__token1,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(101), 1,
      sym_func_proc_name_schema,
    STATE(154), 1,
      sym_id_,
    STATE(519), 1,
      sym_scalar_function_name,
    STATE(562), 1,
      sym_func_proc_name_database_schema,
    STATE(586), 1,
      sym_expression,
    STATE(623), 1,
      sym_all_distinct_expression,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_right_,
      sym_left_,
    ACTIONS(33), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(35), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(37), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(39), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(41), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(45), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(53), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(69), 2,
      sym_all_,
      sym_distinct_,
    STATE(146), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(51), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(107), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(109), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(108), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(47), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [921] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(43), 1,
      sym_checksum_agg_,
    ACTIONS(49), 1,
      sym_ntile_,
    ACTIONS(55), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym_real__token1,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(101), 1,
      sym_func_proc_name_schema,
    STATE(154), 1,
      sym_id_,
    STATE(519), 1,
      sym_scalar_function_name,
    STATE(542), 1,
      sym_all_distinct_expression,
    STATE(562), 1,
      sym_func_proc_name_database_schema,
    STATE(586), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_right_,
      sym_left_,
    ACTIONS(33), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(35), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(37), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(39), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(41), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(45), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(53), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(69), 2,
      sym_all_,
      sym_distinct_,
    STATE(146), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(51), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(107), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(109), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(108), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(47), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1048] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(43), 1,
      sym_checksum_agg_,
    ACTIONS(49), 1,
      sym_ntile_,
    ACTIONS(55), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym_real__token1,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(101), 1,
      sym_func_proc_name_schema,
    STATE(154), 1,
      sym_id_,
    STATE(519), 1,
      sym_scalar_function_name,
    STATE(544), 1,
      sym_all_distinct_expression,
    STATE(562), 1,
      sym_func_proc_name_database_schema,
    STATE(586), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_right_,
      sym_left_,
    ACTIONS(33), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(35), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(37), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(39), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(41), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(45), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(53), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(69), 2,
      sym_all_,
      sym_distinct_,
    STATE(146), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(51), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(107), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(109), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(108), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(47), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1175] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(43), 1,
      sym_checksum_agg_,
    ACTIONS(49), 1,
      sym_ntile_,
    ACTIONS(55), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym_real__token1,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(101), 1,
      sym_func_proc_name_schema,
    STATE(154), 1,
      sym_id_,
    STATE(519), 1,
      sym_scalar_function_name,
    STATE(562), 1,
      sym_func_proc_name_database_schema,
    STATE(566), 1,
      sym_all_distinct_expression,
    STATE(586), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_right_,
      sym_left_,
    ACTIONS(33), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(35), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(37), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(39), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(41), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(45), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(53), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(69), 2,
      sym_all_,
      sym_distinct_,
    STATE(146), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(51), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(107), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(109), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(108), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(47), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1302] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(43), 1,
      sym_checksum_agg_,
    ACTIONS(49), 1,
      sym_ntile_,
    ACTIONS(55), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym_real__token1,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(101), 1,
      sym_func_proc_name_schema,
    STATE(154), 1,
      sym_id_,
    STATE(519), 1,
      sym_scalar_function_name,
    STATE(562), 1,
      sym_func_proc_name_database_schema,
    STATE(568), 1,
      sym_all_distinct_expression,
    STATE(586), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_right_,
      sym_left_,
    ACTIONS(33), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(35), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(37), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(39), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(41), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(45), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(53), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(69), 2,
      sym_all_,
      sym_distinct_,
    STATE(146), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(51), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(107), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(109), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(108), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(47), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1429] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(43), 1,
      sym_checksum_agg_,
    ACTIONS(49), 1,
      sym_ntile_,
    ACTIONS(55), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym_real__token1,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      sym_keyword,
    STATE(101), 1,
      sym_func_proc_name_schema,
    STATE(154), 1,
      sym_id_,
    STATE(466), 1,
      sym_expression,
    STATE(519), 1,
      sym_scalar_function_name,
    STATE(562), 1,
      sym_func_proc_name_database_schema,
    STATE(564), 1,
      sym_expression_list_,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_right_,
      sym_left_,
    ACTIONS(33), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(35), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(37), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(39), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(41), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(45), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(53), 2,
      sym_string_lit,
      sym_binary,
    STATE(146), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(51), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(107), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(109), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(108), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(47), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1555] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(43), 1,
      sym_checksum_agg_,
    ACTIONS(49), 1,
      sym_ntile_,
    ACTIONS(55), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym_real__token1,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(77), 1,
      sym_asterisk,
    STATE(56), 1,
      sym_keyword,
    STATE(101), 1,
      sym_func_proc_name_schema,
    STATE(154), 1,
      sym_id_,
    STATE(466), 1,
      sym_expression,
    STATE(519), 1,
      sym_scalar_function_name,
    STATE(540), 1,
      sym_expression_list_,
    STATE(562), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_right_,
      sym_left_,
    ACTIONS(33), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(35), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(37), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(39), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(41), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(45), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(53), 2,
      sym_string_lit,
      sym_binary,
    STATE(146), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(51), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(107), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(109), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(108), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(47), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1681] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(43), 1,
      sym_checksum_agg_,
    ACTIONS(49), 1,
      sym_ntile_,
    ACTIONS(55), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym_real__token1,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(79), 1,
      sym_asterisk,
    STATE(56), 1,
      sym_keyword,
    STATE(101), 1,
      sym_func_proc_name_schema,
    STATE(154), 1,
      sym_id_,
    STATE(466), 1,
      sym_expression,
    STATE(519), 1,
      sym_scalar_function_name,
    STATE(562), 1,
      sym_func_proc_name_database_schema,
    STATE(607), 1,
      sym_expression_list_,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_right_,
      sym_left_,
    ACTIONS(33), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(35), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(37), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(39), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(41), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(45), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(53), 2,
      sym_string_lit,
      sym_binary,
    STATE(146), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(51), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(107), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(109), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(108), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(47), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1807] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(43), 1,
      sym_checksum_agg_,
    ACTIONS(49), 1,
      sym_ntile_,
    ACTIONS(55), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym_real__token1,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      sym_keyword,
    STATE(101), 1,
      sym_func_proc_name_schema,
    STATE(154), 1,
      sym_id_,
    STATE(466), 1,
      sym_expression,
    STATE(519), 1,
      sym_scalar_function_name,
    STATE(562), 1,
      sym_func_proc_name_database_schema,
    STATE(607), 1,
      sym_expression_list_,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_right_,
      sym_left_,
    ACTIONS(33), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(35), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(37), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(39), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(41), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(45), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(53), 2,
      sym_string_lit,
      sym_binary,
    STATE(146), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(51), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(107), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(109), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(108), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(47), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1933] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(43), 1,
      sym_checksum_agg_,
    ACTIONS(49), 1,
      sym_ntile_,
    ACTIONS(55), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym_real__token1,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      sym_keyword,
    STATE(101), 1,
      sym_func_proc_name_schema,
    STATE(154), 1,
      sym_id_,
    STATE(466), 1,
      sym_expression,
    STATE(519), 1,
      sym_scalar_function_name,
    STATE(540), 1,
      sym_expression_list_,
    STATE(562), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_right_,
      sym_left_,
    ACTIONS(33), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(35), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(37), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(39), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(41), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(45), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(53), 2,
      sym_string_lit,
      sym_binary,
    STATE(146), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(51), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(107), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(109), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(108), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(47), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2059] = 33,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(43), 1,
      sym_checksum_agg_,
    ACTIONS(49), 1,
      sym_ntile_,
    ACTIONS(55), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym_real__token1,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(85), 1,
      sym_asterisk,
    STATE(56), 1,
      sym_keyword,
    STATE(101), 1,
      sym_func_proc_name_schema,
    STATE(154), 1,
      sym_id_,
    STATE(466), 1,
      sym_expression,
    STATE(519), 1,
      sym_scalar_function_name,
    STATE(562), 1,
      sym_func_proc_name_database_schema,
    STATE(564), 1,
      sym_expression_list_,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_right_,
      sym_left_,
    ACTIONS(33), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(35), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(37), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(39), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(41), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(45), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(53), 2,
      sym_string_lit,
      sym_binary,
    STATE(146), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(51), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(107), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(109), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(108), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(47), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2185] = 32,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(87), 1,
      aux_sym_go_statement_token1,
    ACTIONS(89), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(93), 1,
      aux_sym_constant_token3,
    ACTIONS(107), 1,
      sym_checksum_agg_,
    ACTIONS(113), 1,
      sym_ntile_,
    ACTIONS(117), 1,
      anon_sym_DOLLAR,
    ACTIONS(119), 1,
      aux_sym_real__token1,
    ACTIONS(121), 1,
      aux_sym_id__token1,
    ACTIONS(123), 1,
      aux_sym_id__token2,
    STATE(77), 1,
      sym_keyword,
    STATE(101), 1,
      sym_func_proc_name_schema,
    STATE(195), 1,
      sym_id_,
    STATE(314), 1,
      sym_expression,
    STATE(385), 1,
      sym_order_by_expression,
    STATE(562), 1,
      sym_func_proc_name_database_schema,
    STATE(597), 1,
      sym_scalar_function_name,
    ACTIONS(31), 2,
      sym_right_,
      sym_left_,
    ACTIONS(91), 2,
      sym_default,
      sym_null_,
    ACTIONS(95), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(97), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(99), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(101), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(103), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(105), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(109), 2,
      sym_count_,
      sym_count_big_,
    STATE(288), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(115), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(284), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(285), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(286), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(111), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2308] = 32,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(87), 1,
      aux_sym_go_statement_token1,
    ACTIONS(89), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(93), 1,
      aux_sym_constant_token3,
    ACTIONS(107), 1,
      sym_checksum_agg_,
    ACTIONS(113), 1,
      sym_ntile_,
    ACTIONS(117), 1,
      anon_sym_DOLLAR,
    ACTIONS(119), 1,
      aux_sym_real__token1,
    ACTIONS(121), 1,
      aux_sym_id__token1,
    ACTIONS(123), 1,
      aux_sym_id__token2,
    STATE(77), 1,
      sym_keyword,
    STATE(101), 1,
      sym_func_proc_name_schema,
    STATE(195), 1,
      sym_id_,
    STATE(369), 1,
      sym_expression,
    STATE(449), 1,
      sym_expression_list_,
    STATE(562), 1,
      sym_func_proc_name_database_schema,
    STATE(597), 1,
      sym_scalar_function_name,
    ACTIONS(31), 2,
      sym_right_,
      sym_left_,
    ACTIONS(91), 2,
      sym_default,
      sym_null_,
    ACTIONS(95), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(97), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(99), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(101), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(103), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(105), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(109), 2,
      sym_count_,
      sym_count_big_,
    STATE(288), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(115), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(284), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(285), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(286), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(111), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2431] = 32,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(87), 1,
      aux_sym_go_statement_token1,
    ACTIONS(89), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(93), 1,
      aux_sym_constant_token3,
    ACTIONS(107), 1,
      sym_checksum_agg_,
    ACTIONS(113), 1,
      sym_ntile_,
    ACTIONS(117), 1,
      anon_sym_DOLLAR,
    ACTIONS(119), 1,
      aux_sym_real__token1,
    ACTIONS(121), 1,
      aux_sym_id__token1,
    ACTIONS(123), 1,
      aux_sym_id__token2,
    STATE(77), 1,
      sym_keyword,
    STATE(101), 1,
      sym_func_proc_name_schema,
    STATE(195), 1,
      sym_id_,
    STATE(314), 1,
      sym_expression,
    STATE(424), 1,
      sym_order_by_expression,
    STATE(562), 1,
      sym_func_proc_name_database_schema,
    STATE(597), 1,
      sym_scalar_function_name,
    ACTIONS(31), 2,
      sym_right_,
      sym_left_,
    ACTIONS(91), 2,
      sym_default,
      sym_null_,
    ACTIONS(95), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(97), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(99), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(101), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(103), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(105), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(109), 2,
      sym_count_,
      sym_count_big_,
    STATE(288), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(115), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(284), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(285), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(286), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(111), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2554] = 32,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(43), 1,
      sym_checksum_agg_,
    ACTIONS(49), 1,
      sym_ntile_,
    ACTIONS(55), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym_real__token1,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(101), 1,
      sym_func_proc_name_schema,
    STATE(154), 1,
      sym_id_,
    STATE(449), 1,
      sym_expression_list_,
    STATE(466), 1,
      sym_expression,
    STATE(519), 1,
      sym_scalar_function_name,
    STATE(562), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_right_,
      sym_left_,
    ACTIONS(33), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(35), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(37), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(39), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(41), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(45), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(53), 2,
      sym_string_lit,
      sym_binary,
    STATE(146), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(51), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(107), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(109), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(108), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(47), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2677] = 31,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(43), 1,
      sym_checksum_agg_,
    ACTIONS(49), 1,
      sym_ntile_,
    ACTIONS(55), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym_real__token1,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(101), 1,
      sym_func_proc_name_schema,
    STATE(154), 1,
      sym_id_,
    STATE(519), 1,
      sym_scalar_function_name,
    STATE(554), 1,
      sym_expression,
    STATE(562), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_right_,
      sym_left_,
    ACTIONS(33), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(35), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(37), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(39), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(41), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(45), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(53), 2,
      sym_string_lit,
      sym_binary,
    STATE(146), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(51), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(107), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(109), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(108), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(47), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2797] = 31,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(43), 1,
      sym_checksum_agg_,
    ACTIONS(49), 1,
      sym_ntile_,
    ACTIONS(55), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym_real__token1,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(101), 1,
      sym_func_proc_name_schema,
    STATE(154), 1,
      sym_id_,
    STATE(402), 1,
      sym_expression,
    STATE(519), 1,
      sym_scalar_function_name,
    STATE(562), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_right_,
      sym_left_,
    ACTIONS(33), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(35), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(37), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(39), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(41), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(45), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(53), 2,
      sym_string_lit,
      sym_binary,
    STATE(146), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(51), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(107), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(109), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(108), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(47), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2917] = 31,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(87), 1,
      aux_sym_go_statement_token1,
    ACTIONS(89), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(93), 1,
      aux_sym_constant_token3,
    ACTIONS(107), 1,
      sym_checksum_agg_,
    ACTIONS(113), 1,
      sym_ntile_,
    ACTIONS(117), 1,
      anon_sym_DOLLAR,
    ACTIONS(119), 1,
      aux_sym_real__token1,
    ACTIONS(121), 1,
      aux_sym_id__token1,
    ACTIONS(123), 1,
      aux_sym_id__token2,
    STATE(77), 1,
      sym_keyword,
    STATE(101), 1,
      sym_func_proc_name_schema,
    STATE(195), 1,
      sym_id_,
    STATE(402), 1,
      sym_expression,
    STATE(562), 1,
      sym_func_proc_name_database_schema,
    STATE(597), 1,
      sym_scalar_function_name,
    ACTIONS(31), 2,
      sym_right_,
      sym_left_,
    ACTIONS(91), 2,
      sym_default,
      sym_null_,
    ACTIONS(95), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(97), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(99), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(101), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(103), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(105), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(109), 2,
      sym_count_,
      sym_count_big_,
    STATE(288), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(115), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(284), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(285), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(286), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(111), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [3037] = 31,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(43), 1,
      sym_checksum_agg_,
    ACTIONS(49), 1,
      sym_ntile_,
    ACTIONS(55), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym_real__token1,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(101), 1,
      sym_func_proc_name_schema,
    STATE(154), 1,
      sym_id_,
    STATE(519), 1,
      sym_scalar_function_name,
    STATE(562), 1,
      sym_func_proc_name_database_schema,
    STATE(636), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_right_,
      sym_left_,
    ACTIONS(33), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(35), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(37), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(39), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(41), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(45), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(53), 2,
      sym_string_lit,
      sym_binary,
    STATE(146), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(51), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(107), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(109), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(108), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(47), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [3157] = 31,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(43), 1,
      sym_checksum_agg_,
    ACTIONS(49), 1,
      sym_ntile_,
    ACTIONS(55), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym_real__token1,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(101), 1,
      sym_func_proc_name_schema,
    STATE(154), 1,
      sym_id_,
    STATE(519), 1,
      sym_scalar_function_name,
    STATE(536), 1,
      sym_expression,
    STATE(562), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_right_,
      sym_left_,
    ACTIONS(33), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(35), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(37), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(39), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(41), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(45), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(53), 2,
      sym_string_lit,
      sym_binary,
    STATE(146), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(51), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(107), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(109), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(108), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(47), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [3277] = 31,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(125), 1,
      aux_sym_go_statement_token1,
    ACTIONS(127), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(131), 1,
      aux_sym_constant_token3,
    ACTIONS(145), 1,
      sym_checksum_agg_,
    ACTIONS(151), 1,
      sym_ntile_,
    ACTIONS(155), 1,
      anon_sym_DOLLAR,
    ACTIONS(157), 1,
      aux_sym_real__token1,
    ACTIONS(159), 1,
      aux_sym_id__token1,
    ACTIONS(161), 1,
      aux_sym_id__token2,
    STATE(101), 1,
      sym_func_proc_name_schema,
    STATE(154), 1,
      sym_id_,
    STATE(178), 1,
      sym_keyword,
    STATE(197), 1,
      sym_expression,
    STATE(562), 1,
      sym_func_proc_name_database_schema,
    STATE(584), 1,
      sym_scalar_function_name,
    ACTIONS(31), 2,
      sym_right_,
      sym_left_,
    ACTIONS(129), 2,
      sym_default,
      sym_null_,
    ACTIONS(133), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(135), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(137), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(139), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(141), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(143), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(147), 2,
      sym_count_,
      sym_count_big_,
    STATE(207), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(153), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(201), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(202), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(205), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(149), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [3397] = 31,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(43), 1,
      sym_checksum_agg_,
    ACTIONS(49), 1,
      sym_ntile_,
    ACTIONS(55), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym_real__token1,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(101), 1,
      sym_func_proc_name_schema,
    STATE(154), 1,
      sym_id_,
    STATE(519), 1,
      sym_scalar_function_name,
    STATE(562), 1,
      sym_func_proc_name_database_schema,
    STATE(646), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_right_,
      sym_left_,
    ACTIONS(33), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(35), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(37), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(39), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(41), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(45), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(53), 2,
      sym_string_lit,
      sym_binary,
    STATE(146), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(51), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(107), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(109), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(108), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(47), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [3517] = 31,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(43), 1,
      sym_checksum_agg_,
    ACTIONS(49), 1,
      sym_ntile_,
    ACTIONS(55), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym_real__token1,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(101), 1,
      sym_func_proc_name_schema,
    STATE(154), 1,
      sym_id_,
    STATE(519), 1,
      sym_scalar_function_name,
    STATE(562), 1,
      sym_func_proc_name_database_schema,
    STATE(591), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_right_,
      sym_left_,
    ACTIONS(33), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(35), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(37), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(39), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(41), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(45), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(53), 2,
      sym_string_lit,
      sym_binary,
    STATE(146), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(51), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(107), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(109), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(108), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(47), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [3637] = 31,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(125), 1,
      aux_sym_go_statement_token1,
    ACTIONS(127), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(131), 1,
      aux_sym_constant_token3,
    ACTIONS(145), 1,
      sym_checksum_agg_,
    ACTIONS(151), 1,
      sym_ntile_,
    ACTIONS(155), 1,
      anon_sym_DOLLAR,
    ACTIONS(157), 1,
      aux_sym_real__token1,
    ACTIONS(159), 1,
      aux_sym_id__token1,
    ACTIONS(161), 1,
      aux_sym_id__token2,
    STATE(101), 1,
      sym_func_proc_name_schema,
    STATE(154), 1,
      sym_id_,
    STATE(178), 1,
      sym_keyword,
    STATE(215), 1,
      sym_expression,
    STATE(562), 1,
      sym_func_proc_name_database_schema,
    STATE(584), 1,
      sym_scalar_function_name,
    ACTIONS(31), 2,
      sym_right_,
      sym_left_,
    ACTIONS(129), 2,
      sym_default,
      sym_null_,
    ACTIONS(133), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(135), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(137), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(139), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(141), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(143), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(147), 2,
      sym_count_,
      sym_count_big_,
    STATE(207), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(153), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(201), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(202), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(205), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(149), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [3757] = 31,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(43), 1,
      sym_checksum_agg_,
    ACTIONS(49), 1,
      sym_ntile_,
    ACTIONS(55), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym_real__token1,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(101), 1,
      sym_func_proc_name_schema,
    STATE(154), 1,
      sym_id_,
    STATE(519), 1,
      sym_scalar_function_name,
    STATE(523), 1,
      sym_expression,
    STATE(562), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_right_,
      sym_left_,
    ACTIONS(33), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(35), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(37), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(39), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(41), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(45), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(53), 2,
      sym_string_lit,
      sym_binary,
    STATE(146), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(51), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(107), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(109), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(108), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(47), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [3877] = 31,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(43), 1,
      sym_checksum_agg_,
    ACTIONS(49), 1,
      sym_ntile_,
    ACTIONS(55), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym_real__token1,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(101), 1,
      sym_func_proc_name_schema,
    STATE(154), 1,
      sym_id_,
    STATE(519), 1,
      sym_scalar_function_name,
    STATE(562), 1,
      sym_func_proc_name_database_schema,
    STATE(617), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_right_,
      sym_left_,
    ACTIONS(33), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(35), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(37), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(39), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(41), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(45), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(53), 2,
      sym_string_lit,
      sym_binary,
    STATE(146), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(51), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(107), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(109), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(108), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(47), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [3997] = 31,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(43), 1,
      sym_checksum_agg_,
    ACTIONS(49), 1,
      sym_ntile_,
    ACTIONS(55), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym_real__token1,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(101), 1,
      sym_func_proc_name_schema,
    STATE(154), 1,
      sym_id_,
    STATE(519), 1,
      sym_scalar_function_name,
    STATE(562), 1,
      sym_func_proc_name_database_schema,
    STATE(645), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_right_,
      sym_left_,
    ACTIONS(33), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(35), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(37), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(39), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(41), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(45), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(53), 2,
      sym_string_lit,
      sym_binary,
    STATE(146), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(51), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(107), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(109), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(108), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(47), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [4117] = 31,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(43), 1,
      sym_checksum_agg_,
    ACTIONS(49), 1,
      sym_ntile_,
    ACTIONS(55), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym_real__token1,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(101), 1,
      sym_func_proc_name_schema,
    STATE(154), 1,
      sym_id_,
    STATE(468), 1,
      sym_expression,
    STATE(519), 1,
      sym_scalar_function_name,
    STATE(562), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_right_,
      sym_left_,
    ACTIONS(33), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(35), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(37), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(39), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(41), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(45), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(53), 2,
      sym_string_lit,
      sym_binary,
    STATE(146), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(51), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(107), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(109), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(108), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(47), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [4237] = 31,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(43), 1,
      sym_checksum_agg_,
    ACTIONS(49), 1,
      sym_ntile_,
    ACTIONS(55), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym_real__token1,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(101), 1,
      sym_func_proc_name_schema,
    STATE(154), 1,
      sym_id_,
    STATE(473), 1,
      sym_expression,
    STATE(519), 1,
      sym_scalar_function_name,
    STATE(562), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_right_,
      sym_left_,
    ACTIONS(33), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(35), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(37), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(39), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(41), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(45), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(53), 2,
      sym_string_lit,
      sym_binary,
    STATE(146), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(51), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(107), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(109), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(108), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(47), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [4357] = 31,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(43), 1,
      sym_checksum_agg_,
    ACTIONS(49), 1,
      sym_ntile_,
    ACTIONS(55), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym_real__token1,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(101), 1,
      sym_func_proc_name_schema,
    STATE(154), 1,
      sym_id_,
    STATE(519), 1,
      sym_scalar_function_name,
    STATE(562), 1,
      sym_func_proc_name_database_schema,
    STATE(605), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_right_,
      sym_left_,
    ACTIONS(33), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(35), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(37), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(39), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(41), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(45), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(53), 2,
      sym_string_lit,
      sym_binary,
    STATE(146), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(51), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(107), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(109), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(108), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(47), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [4477] = 31,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(43), 1,
      sym_checksum_agg_,
    ACTIONS(49), 1,
      sym_ntile_,
    ACTIONS(55), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym_real__token1,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(101), 1,
      sym_func_proc_name_schema,
    STATE(154), 1,
      sym_id_,
    STATE(519), 1,
      sym_scalar_function_name,
    STATE(562), 1,
      sym_func_proc_name_database_schema,
    STATE(592), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_right_,
      sym_left_,
    ACTIONS(33), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(35), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(37), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(39), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(41), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(45), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(53), 2,
      sym_string_lit,
      sym_binary,
    STATE(146), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(51), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(107), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(109), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(108), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(47), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [4597] = 31,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(19), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_constant_token3,
    ACTIONS(43), 1,
      sym_checksum_agg_,
    ACTIONS(49), 1,
      sym_ntile_,
    ACTIONS(55), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym_real__token1,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(101), 1,
      sym_func_proc_name_schema,
    STATE(154), 1,
      sym_id_,
    STATE(519), 1,
      sym_scalar_function_name,
    STATE(562), 1,
      sym_func_proc_name_database_schema,
    STATE(604), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_default,
      sym_null_,
    ACTIONS(31), 2,
      sym_right_,
      sym_left_,
    ACTIONS(33), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(35), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(37), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(39), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(41), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(45), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(53), 2,
      sym_string_lit,
      sym_binary,
    STATE(146), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(51), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(107), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(109), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(108), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(47), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [4717] = 2,
    ACTIONS(165), 5,
      aux_sym_execute_statement_arg_named_token1,
      sym_string_lit,
      sym_binary,
      anon_sym_DOLLAR,
      aux_sym_id__token2,
    ACTIONS(163), 34,
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
      aux_sym_real__token1,
      aux_sym_id__token1,
  [4761] = 22,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    ACTIONS(169), 1,
      aux_sym_go_statement_token1,
    ACTIONS(172), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(175), 1,
      sym_execute,
    ACTIONS(178), 1,
      sym_select,
    ACTIONS(181), 1,
      aux_sym_id__token1,
    ACTIONS(184), 1,
      aux_sym_id__token2,
    STATE(48), 1,
      sym_func_proc_name_server_database_schema,
    STATE(104), 1,
      sym_id_,
    STATE(113), 1,
      sym_keyword,
    STATE(147), 1,
      sym_execute_body_batch,
    STATE(153), 1,
      sym_func_proc_name_database_schema,
    STATE(165), 1,
      sym_func_proc_name_schema,
    STATE(259), 1,
      sym_go_statement,
    STATE(270), 1,
      sym_execute_statement,
    STATE(271), 1,
      sym_select_statement_standalone,
    STATE(272), 1,
      sym_select_statement,
    STATE(275), 1,
      sym_query_expression,
    STATE(277), 1,
      sym_query_specification,
    STATE(41), 2,
      sym_batch,
      aux_sym_tsql_file_repeat1,
    STATE(51), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(269), 2,
      sym_another_statement,
      sym_dml_clause,
  [4831] = 22,
    ACTIONS(5), 1,
      aux_sym_go_statement_token1,
    ACTIONS(9), 1,
      sym_execute,
    ACTIONS(11), 1,
      sym_select,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    ACTIONS(189), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(191), 1,
      aux_sym_id__token1,
    ACTIONS(193), 1,
      aux_sym_id__token2,
    STATE(48), 1,
      sym_func_proc_name_server_database_schema,
    STATE(104), 1,
      sym_id_,
    STATE(113), 1,
      sym_keyword,
    STATE(147), 1,
      sym_execute_body_batch,
    STATE(153), 1,
      sym_func_proc_name_database_schema,
    STATE(165), 1,
      sym_func_proc_name_schema,
    STATE(259), 1,
      sym_go_statement,
    STATE(270), 1,
      sym_execute_statement,
    STATE(271), 1,
      sym_select_statement_standalone,
    STATE(272), 1,
      sym_select_statement,
    STATE(275), 1,
      sym_query_expression,
    STATE(277), 1,
      sym_query_specification,
    STATE(41), 2,
      sym_batch,
      aux_sym_tsql_file_repeat1,
    STATE(51), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(269), 2,
      sym_another_statement,
      sym_dml_clause,
  [4901] = 14,
    ACTIONS(199), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(205), 1,
      aux_sym_constant_token2,
    ACTIONS(207), 1,
      sym_WITH,
    STATE(167), 1,
      sym_LOCAL_ID_,
    STATE(168), 1,
      sym_execute_statement_arg_unnamed,
    STATE(170), 1,
      sym_execute_statement_arg_named,
    STATE(192), 1,
      sym_execute_parameter,
    STATE(209), 1,
      sym_keyword,
    STATE(261), 1,
      sym_execute_statement_arg,
    ACTIONS(201), 2,
      sym_default,
      sym_null_,
    ACTIONS(203), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(199), 2,
      sym_constant,
      sym_id_,
    ACTIONS(195), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(197), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [4953] = 14,
    ACTIONS(199), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(205), 1,
      aux_sym_constant_token2,
    ACTIONS(213), 1,
      sym_WITH,
    STATE(167), 1,
      sym_LOCAL_ID_,
    STATE(168), 1,
      sym_execute_statement_arg_unnamed,
    STATE(170), 1,
      sym_execute_statement_arg_named,
    STATE(192), 1,
      sym_execute_parameter,
    STATE(209), 1,
      sym_keyword,
    STATE(246), 1,
      sym_execute_statement_arg,
    ACTIONS(201), 2,
      sym_default,
      sym_null_,
    ACTIONS(203), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(199), 2,
      sym_constant,
      sym_id_,
    ACTIONS(209), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(211), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [5005] = 5,
    ACTIONS(219), 1,
      anon_sym_EQ,
    STATE(28), 1,
      sym_assignment_operator,
    ACTIONS(215), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
    ACTIONS(217), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(221), 8,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [5038] = 2,
    ACTIONS(225), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(223), 15,
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
  [5064] = 16,
    ACTIONS(121), 1,
      aux_sym_id__token1,
    ACTIONS(123), 1,
      aux_sym_id__token2,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    ACTIONS(231), 1,
      anon_sym_SEMI,
    ACTIONS(233), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(239), 1,
      aux_sym_constant_token2,
    STATE(77), 1,
      sym_keyword,
    STATE(316), 1,
      sym_execute_statement_arg,
    STATE(318), 1,
      sym_execute_statement_arg_named,
    STATE(320), 1,
      sym_execute_statement_arg_unnamed,
    STATE(328), 1,
      sym_LOCAL_ID_,
    STATE(332), 1,
      sym_execute_parameter,
    ACTIONS(235), 2,
      sym_default,
      sym_null_,
    ACTIONS(237), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(360), 2,
      sym_constant,
      sym_id_,
    ACTIONS(229), 3,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [5118] = 15,
    ACTIONS(121), 1,
      aux_sym_id__token1,
    ACTIONS(123), 1,
      aux_sym_id__token2,
    ACTIONS(231), 1,
      anon_sym_SEMI,
    ACTIONS(233), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(239), 1,
      aux_sym_constant_token2,
    STATE(77), 1,
      sym_keyword,
    STATE(316), 1,
      sym_execute_statement_arg,
    STATE(318), 1,
      sym_execute_statement_arg_named,
    STATE(320), 1,
      sym_execute_statement_arg_unnamed,
    STATE(328), 1,
      sym_LOCAL_ID_,
    STATE(332), 1,
      sym_execute_parameter,
    ACTIONS(235), 2,
      sym_default,
      sym_null_,
    ACTIONS(237), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(360), 2,
      sym_constant,
      sym_id_,
    ACTIONS(229), 3,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [5169] = 11,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      aux_sym_AS_token1,
    ACTIONS(249), 1,
      sym_string_lit,
    STATE(57), 1,
      sym_udt_method_arguments,
    STATE(178), 1,
      sym_keyword,
    STATE(234), 1,
      sym_column_alias,
    STATE(239), 1,
      sym_id_,
    STATE(240), 1,
      sym_as_column_alias,
    STATE(324), 1,
      sym_as,
    ACTIONS(241), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(243), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [5211] = 2,
    ACTIONS(225), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(223), 12,
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
  [5235] = 13,
    ACTIONS(253), 1,
      aux_sym_go_statement_token1,
    ACTIONS(256), 1,
      sym_execute,
    ACTIONS(259), 1,
      sym_select,
    ACTIONS(262), 1,
      aux_sym_id__token1,
    STATE(270), 1,
      sym_execute_statement,
    STATE(271), 1,
      sym_select_statement_standalone,
    STATE(272), 1,
      sym_select_statement,
    STATE(275), 1,
      sym_query_expression,
    STATE(277), 1,
      sym_query_specification,
    STATE(63), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(257), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    STATE(269), 2,
      sym_another_statement,
      sym_dml_clause,
    ACTIONS(251), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [5280] = 13,
    ACTIONS(266), 1,
      aux_sym_go_statement_token1,
    ACTIONS(269), 1,
      sym_execute,
    ACTIONS(272), 1,
      sym_select,
    ACTIONS(275), 1,
      aux_sym_id__token1,
    STATE(270), 1,
      sym_execute_statement,
    STATE(271), 1,
      sym_select_statement_standalone,
    STATE(272), 1,
      sym_select_statement,
    STATE(275), 1,
      sym_query_expression,
    STATE(277), 1,
      sym_query_specification,
    STATE(63), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(254), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    STATE(269), 2,
      sym_another_statement,
      sym_dml_clause,
    ACTIONS(264), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [5325] = 3,
    ACTIONS(281), 1,
      sym_PLUS,
    ACTIONS(279), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(277), 10,
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
  [5350] = 3,
    ACTIONS(287), 1,
      sym_PLUS,
    ACTIONS(285), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(283), 10,
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
  [5375] = 2,
    ACTIONS(291), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(289), 11,
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
  [5398] = 2,
    ACTIONS(295), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(293), 11,
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
  [5420] = 9,
    ACTIONS(247), 1,
      aux_sym_AS_token1,
    ACTIONS(249), 1,
      sym_string_lit,
    STATE(178), 1,
      sym_keyword,
    STATE(223), 1,
      sym_as_column_alias,
    STATE(234), 1,
      sym_column_alias,
    STATE(239), 1,
      sym_id_,
    STATE(324), 1,
      sym_as,
    ACTIONS(297), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(299), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [5456] = 14,
    ACTIONS(87), 1,
      aux_sym_go_statement_token1,
    ACTIONS(121), 1,
      aux_sym_id__token1,
    ACTIONS(123), 1,
      aux_sym_id__token2,
    ACTIONS(233), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(239), 1,
      aux_sym_constant_token2,
    STATE(77), 1,
      sym_keyword,
    STATE(318), 1,
      sym_execute_statement_arg_named,
    STATE(320), 1,
      sym_execute_statement_arg_unnamed,
    STATE(328), 1,
      sym_LOCAL_ID_,
    STATE(332), 1,
      sym_execute_parameter,
    STATE(371), 1,
      sym_execute_statement_arg,
    ACTIONS(235), 2,
      sym_default,
      sym_null_,
    ACTIONS(237), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(360), 2,
      sym_constant,
      sym_id_,
  [5502] = 14,
    ACTIONS(199), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(205), 1,
      aux_sym_constant_token2,
    ACTIONS(301), 1,
      aux_sym_go_statement_token1,
    ACTIONS(303), 1,
      aux_sym_id__token1,
    ACTIONS(305), 1,
      aux_sym_id__token2,
    STATE(167), 1,
      sym_LOCAL_ID_,
    STATE(180), 1,
      sym_execute_statement_arg_named,
    STATE(186), 1,
      sym_execute_statement_arg_unnamed,
    STATE(192), 1,
      sym_execute_parameter,
    STATE(209), 1,
      sym_keyword,
    STATE(227), 1,
      sym_execute_statement_arg,
    ACTIONS(201), 2,
      sym_default,
      sym_null_,
    ACTIONS(203), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(199), 2,
      sym_constant,
      sym_id_,
  [5548] = 12,
    ACTIONS(125), 1,
      aux_sym_go_statement_token1,
    ACTIONS(159), 1,
      aux_sym_id__token1,
    ACTIONS(161), 1,
      aux_sym_id__token2,
    ACTIONS(247), 1,
      aux_sym_AS_token1,
    ACTIONS(249), 1,
      sym_string_lit,
    STATE(178), 1,
      sym_keyword,
    STATE(234), 1,
      sym_column_alias,
    STATE(236), 1,
      sym_as_column_alias,
    STATE(239), 1,
      sym_id_,
    STATE(324), 1,
      sym_as,
    ACTIONS(309), 3,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
    ACTIONS(307), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
  [5590] = 4,
    ACTIONS(287), 1,
      sym_PLUS,
    ACTIONS(311), 1,
      aux_sym_execute_body_token1,
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
  [5616] = 2,
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
  [5638] = 11,
    ACTIONS(321), 1,
      sym_execute,
    ACTIONS(324), 1,
      sym_select,
    STATE(270), 1,
      sym_execute_statement,
    STATE(271), 1,
      sym_select_statement_standalone,
    STATE(272), 1,
      sym_select_statement,
    STATE(275), 1,
      sym_query_expression,
    STATE(277), 1,
      sym_query_specification,
    ACTIONS(319), 2,
      aux_sym_go_statement_token1,
      aux_sym_id__token1,
    STATE(63), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(269), 2,
      sym_another_statement,
      sym_dml_clause,
    ACTIONS(317), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [5677] = 2,
    ACTIONS(329), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(327), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [5697] = 2,
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
  [5717] = 2,
    ACTIONS(295), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(293), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [5737] = 14,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(335), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(337), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      sym_string_lit,
    ACTIONS(341), 1,
      aux_sym_id__token1,
    ACTIONS(343), 1,
      aux_sym_id__token2,
    STATE(61), 1,
      sym_LOCAL_ID_,
    STATE(66), 1,
      sym_keyword,
    STATE(68), 1,
      sym_func_proc_name_database_schema,
    STATE(69), 1,
      sym_func_proc_name_schema,
    STATE(71), 1,
      sym_id_,
    STATE(287), 1,
      sym_execute_body,
    STATE(44), 2,
      sym_func_proc_name_server_database_schema,
      sym_execute_var_string,
  [5781] = 2,
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
  [5801] = 2,
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
  [5821] = 6,
    ACTIONS(357), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(359), 1,
      aux_sym_execute_body_token1,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      anon_sym_COLON_COLON,
    ACTIONS(353), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_string_lit,
      aux_sym_id__token2,
    ACTIONS(355), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [5849] = 3,
    ACTIONS(367), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(361), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(365), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [5871] = 2,
    ACTIONS(291), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(289), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_body_token1,
      anon_sym_LPAREN,
      sym_string_lit,
      anon_sym_COLON_COLON,
      aux_sym_id__token2,
  [5891] = 13,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    ACTIONS(369), 1,
      aux_sym_go_statement_token1,
    ACTIONS(371), 1,
      sym_execute,
    ACTIONS(373), 1,
      sym_select,
    STATE(250), 1,
      sym_go_statement,
    STATE(270), 1,
      sym_execute_statement,
    STATE(271), 1,
      sym_select_statement_standalone,
    STATE(272), 1,
      sym_select_statement,
    STATE(275), 1,
      sym_query_expression,
    STATE(277), 1,
      sym_query_specification,
    STATE(419), 1,
      aux_sym_tsql_file_repeat2,
    STATE(52), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(269), 2,
      sym_another_statement,
      sym_dml_clause,
  [5933] = 2,
    ACTIONS(295), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(293), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_body_token1,
      anon_sym_LPAREN,
      sym_string_lit,
      anon_sym_COLON_COLON,
      aux_sym_id__token2,
  [5953] = 3,
    ACTIONS(379), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(375), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(377), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [5975] = 2,
    ACTIONS(383), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(381), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [5995] = 1,
    ACTIONS(293), 15,
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
  [6013] = 3,
    ACTIONS(389), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(385), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(387), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [6035] = 2,
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
  [6055] = 3,
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
  [6077] = 4,
    ACTIONS(405), 1,
      aux_sym_over__token1,
    STATE(138), 1,
      sym_over_clause,
    ACTIONS(403), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(401), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [6101] = 3,
    ACTIONS(411), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(407), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(409), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [6123] = 2,
    ACTIONS(415), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(413), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [6143] = 6,
    ACTIONS(421), 1,
      aux_sym_constant_token3,
    STATE(325), 1,
      sym_integer,
    ACTIONS(291), 2,
      sym_default,
      sym_null_,
    ACTIONS(417), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(289), 4,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(419), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6171] = 2,
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
  [6191] = 2,
    ACTIONS(429), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(427), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [6211] = 2,
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
  [6231] = 3,
    ACTIONS(439), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(435), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(437), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [6253] = 1,
    ACTIONS(289), 15,
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
  [6271] = 4,
    ACTIONS(405), 1,
      aux_sym_over__token1,
    STATE(121), 1,
      sym_over_clause,
    ACTIONS(443), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(441), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [6295] = 3,
    ACTIONS(445), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(437), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(435), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [6316] = 3,
    ACTIONS(447), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(387), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(385), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [6337] = 3,
    ACTIONS(449), 1,
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
  [6358] = 3,
    ACTIONS(455), 1,
      aux_sym_real__token2,
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
  [6379] = 3,
    ACTIONS(457), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(377), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(375), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [6400] = 3,
    ACTIONS(459), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(365), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(361), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [6421] = 2,
    ACTIONS(291), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(289), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [6440] = 3,
    ACTIONS(455), 1,
      aux_sym_real__token2,
    ACTIONS(463), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(461), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [6461] = 1,
    ACTIONS(223), 14,
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
  [6478] = 11,
    ACTIONS(87), 1,
      aux_sym_go_statement_token1,
    ACTIONS(89), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(121), 1,
      aux_sym_id__token1,
    ACTIONS(123), 1,
      aux_sym_id__token2,
    ACTIONS(239), 1,
      aux_sym_constant_token2,
    STATE(77), 1,
      sym_keyword,
    STATE(328), 1,
      sym_LOCAL_ID_,
    STATE(368), 1,
      sym_execute_parameter,
    ACTIONS(235), 2,
      sym_default,
      sym_null_,
    ACTIONS(237), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(360), 2,
      sym_constant,
      sym_id_,
  [6515] = 2,
    ACTIONS(351), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(349), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_LPAREN,
      aux_sym_id__token2,
  [6534] = 11,
    ACTIONS(205), 1,
      aux_sym_constant_token2,
    ACTIONS(301), 1,
      aux_sym_go_statement_token1,
    ACTIONS(303), 1,
      aux_sym_id__token1,
    ACTIONS(305), 1,
      aux_sym_id__token2,
    ACTIONS(465), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(167), 1,
      sym_LOCAL_ID_,
    STATE(190), 1,
      sym_execute_parameter,
    STATE(209), 1,
      sym_keyword,
    ACTIONS(201), 2,
      sym_default,
      sym_null_,
    ACTIONS(203), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(199), 2,
      sym_constant,
      sym_id_,
  [6571] = 3,
    ACTIONS(467), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
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
  [6592] = 3,
    ACTIONS(469), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(361), 6,
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
  [6612] = 3,
    ACTIONS(471), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
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
  [6632] = 2,
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
  [6650] = 2,
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
  [6668] = 2,
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
  [6686] = 2,
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
  [6704] = 2,
    ACTIONS(383), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(381), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [6722] = 2,
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
  [6740] = 2,
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
  [6758] = 2,
    ACTIONS(295), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(293), 7,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [6776] = 2,
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
  [6794] = 2,
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
  [6812] = 2,
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
  [6830] = 2,
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
  [6848] = 2,
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
  [6866] = 2,
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
  [6884] = 2,
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
  [6902] = 2,
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
  [6920] = 2,
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
  [6938] = 2,
    ACTIONS(523), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(521), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [6956] = 2,
    ACTIONS(527), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(525), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [6974] = 2,
    ACTIONS(531), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(529), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [6992] = 3,
    ACTIONS(533), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(435), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(437), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [7012] = 2,
    ACTIONS(291), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(289), 7,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [7030] = 2,
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
  [7048] = 2,
    ACTIONS(415), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(413), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [7066] = 2,
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
  [7084] = 2,
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
  [7102] = 2,
    ACTIONS(347), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(345), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [7120] = 2,
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
  [7138] = 2,
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
  [7156] = 2,
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
  [7174] = 12,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(335), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(339), 1,
      sym_string_lit,
    ACTIONS(341), 1,
      aux_sym_id__token1,
    ACTIONS(343), 1,
      aux_sym_id__token2,
    STATE(54), 1,
      sym_LOCAL_ID_,
    STATE(66), 1,
      sym_keyword,
    STATE(68), 1,
      sym_func_proc_name_database_schema,
    STATE(69), 1,
      sym_func_proc_name_schema,
    STATE(71), 1,
      sym_id_,
    STATE(43), 2,
      sym_func_proc_name_server_database_schema,
      sym_execute_var_string,
  [7212] = 3,
    ACTIONS(551), 1,
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
  [7232] = 2,
    ACTIONS(555), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(553), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [7250] = 3,
    ACTIONS(359), 1,
      aux_sym_execute_body_token1,
    ACTIONS(477), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
    ACTIONS(479), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [7270] = 2,
    ACTIONS(329), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(327), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [7288] = 2,
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
  [7306] = 2,
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
  [7324] = 3,
    ACTIONS(565), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(385), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(387), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [7344] = 2,
    ACTIONS(569), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(567), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [7362] = 2,
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
  [7380] = 2,
    ACTIONS(217), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(215), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [7398] = 11,
    ACTIONS(369), 1,
      aux_sym_go_statement_token1,
    ACTIONS(371), 1,
      sym_execute,
    ACTIONS(373), 1,
      sym_select,
    STATE(256), 1,
      sym_go_statement,
    STATE(270), 1,
      sym_execute_statement,
    STATE(271), 1,
      sym_select_statement_standalone,
    STATE(272), 1,
      sym_select_statement,
    STATE(275), 1,
      sym_query_expression,
    STATE(277), 1,
      sym_query_specification,
    STATE(52), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(269), 2,
      sym_another_statement,
      sym_dml_clause,
  [7434] = 2,
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
  [7452] = 3,
    ACTIONS(579), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(375), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(377), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [7472] = 2,
    ACTIONS(413), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(415), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [7489] = 2,
    ACTIONS(381), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(383), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [7506] = 2,
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
  [7523] = 2,
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
  [7540] = 4,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(581), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(353), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      aux_sym_id__token2,
    ACTIONS(355), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [7561] = 4,
    ACTIONS(583), 1,
      aux_sym_over__token1,
    STATE(224), 1,
      sym_over_clause,
    ACTIONS(401), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(403), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [7582] = 2,
    ACTIONS(327), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(329), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [7599] = 4,
    ACTIONS(583), 1,
      aux_sym_over__token1,
    STATE(187), 1,
      sym_over_clause,
    ACTIONS(441), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(443), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [7620] = 2,
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
  [7637] = 2,
    ACTIONS(585), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
    ACTIONS(587), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [7654] = 2,
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
  [7671] = 3,
    ACTIONS(589), 1,
      anon_sym_EQ,
    ACTIONS(223), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(225), 6,
      aux_sym_go_statement_token1,
      sym_OUTPUT,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [7690] = 2,
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
  [7707] = 2,
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
  [7724] = 2,
    ACTIONS(591), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
    ACTIONS(593), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [7741] = 2,
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
  [7758] = 4,
    ACTIONS(599), 1,
      anon_sym_COMMA,
    STATE(166), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(595), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(597), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [7778] = 3,
    ACTIONS(606), 1,
      sym_OUTPUT,
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
  [7796] = 4,
    ACTIONS(612), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(608), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(610), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [7816] = 4,
    ACTIONS(618), 1,
      anon_sym_COMMA,
    STATE(169), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(614), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(616), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [7836] = 4,
    ACTIONS(621), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(608), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(610), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [7856] = 4,
    ACTIONS(627), 1,
      anon_sym_COMMA,
    STATE(183), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(623), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(625), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [7876] = 5,
    ACTIONS(633), 1,
      aux_sym_AS_token1,
    ACTIONS(635), 1,
      sym_AT_KEYWORD,
    STATE(487), 1,
      sym_AS,
    ACTIONS(629), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(631), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [7898] = 4,
    ACTIONS(621), 1,
      anon_sym_COMMA,
    STATE(169), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(637), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(639), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [7918] = 5,
    ACTIONS(633), 1,
      aux_sym_AS_token1,
    ACTIONS(645), 1,
      sym_AT_KEYWORD,
    STATE(484), 1,
      sym_AS,
    ACTIONS(641), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(643), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [7940] = 3,
    ACTIONS(647), 1,
      aux_sym_real__token2,
    ACTIONS(461), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(463), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [7958] = 3,
    ACTIONS(647), 1,
      aux_sym_real__token2,
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
  [7976] = 4,
    ACTIONS(612), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(637), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(639), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [7996] = 2,
    ACTIONS(295), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(293), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_LPAREN,
      aux_sym_id__token2,
  [8012] = 2,
    ACTIONS(291), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(289), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_LPAREN,
      aux_sym_id__token2,
  [8028] = 3,
    STATE(182), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(608), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(610), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [8046] = 2,
    ACTIONS(223), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(225), 6,
      aux_sym_go_statement_token1,
      sym_OUTPUT,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [8062] = 3,
    STATE(169), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(637), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(639), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [8080] = 4,
    ACTIONS(627), 1,
      anon_sym_COMMA,
    STATE(166), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(649), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(651), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [8100] = 3,
    STATE(185), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(637), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(639), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [8118] = 4,
    ACTIONS(657), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(653), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(655), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [8138] = 3,
    STATE(184), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(608), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(610), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [8156] = 2,
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
  [8171] = 2,
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
  [8186] = 2,
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
  [8201] = 2,
    ACTIONS(660), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(662), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [8216] = 2,
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
  [8231] = 2,
    ACTIONS(664), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(666), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [8246] = 2,
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
  [8261] = 2,
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
  [8276] = 3,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(581), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(353), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8293] = 2,
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
  [8308] = 2,
    ACTIONS(668), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(670), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [8323] = 2,
    ACTIONS(672), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(674), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [8338] = 2,
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
  [8353] = 2,
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
  [8368] = 2,
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
  [8383] = 2,
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
  [8398] = 2,
    ACTIONS(529), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(531), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [8413] = 2,
    ACTIONS(676), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(678), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [8428] = 2,
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
  [8443] = 4,
    ACTIONS(680), 1,
      anon_sym_COMMA,
    STATE(208), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(629), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(631), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [8462] = 2,
    ACTIONS(215), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(217), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [8477] = 4,
    ACTIONS(680), 1,
      anon_sym_COMMA,
    STATE(238), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(641), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(643), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [8496] = 2,
    ACTIONS(293), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(295), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [8511] = 4,
    ACTIONS(680), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(641), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(643), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [8530] = 2,
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
  [8545] = 2,
    ACTIONS(289), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(291), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [8560] = 2,
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
  [8575] = 2,
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
  [8590] = 2,
    ACTIONS(686), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(688), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [8605] = 2,
    ACTIONS(690), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(692), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [8620] = 2,
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
  [8635] = 2,
    ACTIONS(614), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(616), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [8650] = 2,
    ACTIONS(525), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(527), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [8665] = 2,
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
  [8680] = 2,
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
  [8695] = 2,
    ACTIONS(694), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(696), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [8710] = 2,
    ACTIONS(698), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(700), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [8725] = 2,
    ACTIONS(553), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(555), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [8740] = 4,
    ACTIONS(680), 1,
      anon_sym_COMMA,
    STATE(238), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(702), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(704), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [8759] = 2,
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
  [8774] = 2,
    ACTIONS(653), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(655), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [8789] = 2,
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
  [8804] = 4,
    ACTIONS(680), 1,
      anon_sym_COMMA,
    STATE(237), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(702), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(704), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [8823] = 4,
    ACTIONS(680), 1,
      anon_sym_COMMA,
    STATE(225), 1,
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
  [8842] = 4,
    ACTIONS(680), 1,
      anon_sym_COMMA,
    STATE(238), 1,
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
  [8861] = 2,
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
  [8876] = 2,
    ACTIONS(521), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(523), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [8891] = 2,
    ACTIONS(714), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(716), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [8906] = 2,
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
  [8921] = 2,
    ACTIONS(718), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(720), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [8936] = 4,
    ACTIONS(680), 1,
      anon_sym_COMMA,
    STATE(238), 1,
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
  [8955] = 4,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    STATE(238), 1,
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
  [8974] = 2,
    ACTIONS(359), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(733), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [8989] = 2,
    ACTIONS(297), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(299), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [9004] = 2,
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
  [9019] = 3,
    ACTIONS(735), 1,
      aux_sym_over__token1,
    STATE(313), 1,
      sym_over_clause,
    ACTIONS(441), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9036] = 2,
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
  [9051] = 2,
    ACTIONS(223), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(225), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [9066] = 3,
    ACTIONS(735), 1,
      aux_sym_over__token1,
    STATE(309), 1,
      sym_over_clause,
    ACTIONS(401), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9083] = 3,
    ACTIONS(741), 1,
      sym_WITH,
    ACTIONS(737), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(739), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9099] = 2,
    ACTIONS(743), 1,
      aux_sym_real__token2,
    ACTIONS(461), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9113] = 2,
    ACTIONS(743), 1,
      aux_sym_real__token2,
    ACTIONS(451), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9127] = 9,
    ACTIONS(745), 1,
      aux_sym_go_statement_token1,
    ACTIONS(747), 1,
      aux_sym_id__token1,
    ACTIONS(749), 1,
      aux_sym_id__token2,
    STATE(278), 1,
      sym_full_table_name,
    STATE(293), 1,
      sym_table_sources,
    STATE(295), 1,
      sym_table_source,
    STATE(296), 1,
      sym_table_source_item,
    STATE(297), 1,
      sym_id_,
    STATE(301), 1,
      sym_keyword,
  [9155] = 5,
    ACTIONS(751), 1,
      ts_builtin_sym_end,
    ACTIONS(754), 1,
      aux_sym_go_statement_token1,
    ACTIONS(264), 2,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    STATE(254), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(275), 3,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9175] = 2,
    ACTIONS(728), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(726), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [9189] = 3,
    ACTIONS(762), 1,
      sym_AT_KEYWORD,
    ACTIONS(758), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(760), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9205] = 4,
    ACTIONS(766), 1,
      aux_sym_go_statement_token1,
    STATE(253), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(764), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(769), 3,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9223] = 4,
    ACTIONS(773), 1,
      aux_sym_go_statement_token1,
    STATE(253), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(771), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(776), 3,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9241] = 3,
    ACTIONS(782), 1,
      sym_AT_KEYWORD,
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
  [9257] = 4,
    ACTIONS(266), 1,
      aux_sym_go_statement_token1,
    STATE(254), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(264), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(275), 3,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9275] = 4,
    ACTIONS(266), 1,
      aux_sym_go_statement_token1,
    STATE(253), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(264), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(275), 3,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9293] = 4,
    ACTIONS(421), 1,
      aux_sym_constant_token3,
    STATE(325), 1,
      sym_integer,
    ACTIONS(417), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(419), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9311] = 3,
    STATE(257), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(251), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(262), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9327] = 3,
    ACTIONS(788), 1,
      aux_sym_query_specification_token1,
    ACTIONS(784), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(786), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9343] = 3,
    ACTIONS(794), 1,
      sym_WITH,
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
  [9359] = 2,
    ACTIONS(798), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(796), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [9373] = 2,
    ACTIONS(802), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(800), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [9387] = 1,
    ACTIONS(509), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9398] = 1,
    ACTIONS(493), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9409] = 1,
    ACTIONS(561), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9420] = 1,
    ACTIONS(567), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9431] = 1,
    ACTIONS(575), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9442] = 3,
    ACTIONS(808), 1,
      anon_sym_SEMI,
    ACTIONS(804), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(806), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9457] = 2,
    ACTIONS(810), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(812), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9470] = 2,
    ACTIONS(814), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(816), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9483] = 2,
    ACTIONS(818), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(820), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9496] = 1,
    ACTIONS(571), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9507] = 3,
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
  [9522] = 2,
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
  [9535] = 1,
    ACTIONS(501), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9546] = 2,
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
  [9559] = 2,
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
  [9572] = 1,
    ACTIONS(521), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9583] = 1,
    ACTIONS(535), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9594] = 1,
    ACTIONS(543), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9605] = 2,
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
  [9618] = 1,
    ACTIONS(485), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9629] = 1,
    ACTIONS(481), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9640] = 1,
    ACTIONS(473), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9651] = 1,
    ACTIONS(477), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9662] = 2,
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
  [9675] = 1,
    ACTIONS(215), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9686] = 2,
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
  [9699] = 2,
    ACTIONS(852), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(854), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9712] = 3,
    ACTIONS(860), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(856), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_id__token2,
    ACTIONS(858), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9727] = 1,
    ACTIONS(547), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9738] = 2,
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
  [9751] = 7,
    ACTIONS(866), 1,
      anon_sym_RPAREN,
    ACTIONS(868), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(870), 1,
      aux_sym_order_by_clause_token1,
    STATE(352), 1,
      sym_partition_by_clause,
    STATE(418), 1,
      sym_order_by_clause,
    STATE(575), 1,
      sym_row_or_range_clause,
    ACTIONS(872), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9774] = 2,
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
  [9787] = 2,
    ACTIONS(878), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(880), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9800] = 3,
    ACTIONS(886), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(882), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_id__token2,
    ACTIONS(884), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9815] = 2,
    ACTIONS(888), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(890), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9828] = 1,
    ACTIONS(489), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9839] = 2,
    ACTIONS(289), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(291), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9852] = 2,
    ACTIONS(293), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(295), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9865] = 1,
    ACTIONS(529), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9876] = 2,
    ACTIONS(892), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(894), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9889] = 2,
    ACTIONS(896), 1,
      anon_sym_EQ,
    ACTIONS(223), 7,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_OUTPUT,
      sym_execute,
      sym_select,
  [9902] = 1,
    ACTIONS(525), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9913] = 1,
    ACTIONS(517), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9924] = 7,
    ACTIONS(868), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(870), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(898), 1,
      anon_sym_RPAREN,
    STATE(372), 1,
      sym_partition_by_clause,
    STATE(443), 1,
      sym_order_by_clause,
    STATE(548), 1,
      sym_row_or_range_clause,
    ACTIONS(872), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9947] = 1,
    ACTIONS(505), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9958] = 1,
    ACTIONS(553), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9969] = 1,
    ACTIONS(539), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9980] = 7,
    ACTIONS(868), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(870), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(900), 1,
      anon_sym_RPAREN,
    STATE(334), 1,
      sym_partition_by_clause,
    STATE(446), 1,
      sym_order_by_clause,
    STATE(531), 1,
      sym_row_or_range_clause,
    ACTIONS(872), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10003] = 1,
    ACTIONS(497), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10014] = 1,
    ACTIONS(513), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10025] = 5,
    ACTIONS(904), 1,
      aux_sym_collation__token1,
    ACTIONS(906), 1,
      sym_asc_,
    ACTIONS(908), 1,
      sym_desc_,
    STATE(344), 1,
      sym_collation_,
    ACTIONS(902), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10044] = 1,
    ACTIONS(557), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10055] = 4,
    ACTIONS(912), 1,
      anon_sym_COMMA,
    ACTIONS(914), 1,
      anon_sym_SEMI,
    STATE(323), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(910), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [10071] = 3,
    ACTIONS(916), 1,
      anon_sym_COMMA,
    STATE(317), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(614), 5,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [10085] = 2,
    STATE(322), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(608), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [10097] = 3,
    ACTIONS(919), 1,
      anon_sym_COMMA,
    STATE(319), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(653), 5,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [10111] = 2,
    STATE(321), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(608), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [10123] = 2,
    STATE(319), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(637), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [10135] = 2,
    STATE(317), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(637), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [10147] = 4,
    ACTIONS(912), 1,
      anon_sym_COMMA,
    ACTIONS(924), 1,
      anon_sym_SEMI,
    STATE(319), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(922), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [10163] = 7,
    ACTIONS(125), 1,
      aux_sym_go_statement_token1,
    ACTIONS(159), 1,
      aux_sym_id__token1,
    ACTIONS(161), 1,
      aux_sym_id__token2,
    ACTIONS(249), 1,
      sym_string_lit,
    STATE(178), 1,
      sym_keyword,
    STATE(216), 1,
      sym_column_alias,
    STATE(239), 1,
      sym_id_,
  [10185] = 2,
    ACTIONS(926), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(928), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [10197] = 2,
    ACTIONS(930), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(932), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [10209] = 2,
    ACTIONS(934), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(936), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [10221] = 2,
    ACTIONS(938), 1,
      sym_OUTPUT,
    ACTIONS(602), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [10233] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(940), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(474), 1,
      sym_id_,
  [10252] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(942), 1,
      aux_sym_go_statement_token1,
    ACTIONS(944), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(91), 1,
      sym_id_,
  [10271] = 5,
    ACTIONS(946), 1,
      aux_sym_over__token1,
    ACTIONS(948), 1,
      aux_sym_ignore_nulls__token1,
    ACTIONS(950), 1,
      aux_sym_respect_nulls__token1,
    STATE(194), 1,
      sym_over_clause,
    STATE(505), 2,
      sym_ignore_nulls_,
      sym_respect_nulls_,
  [10288] = 1,
    ACTIONS(664), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [10297] = 4,
    ACTIONS(157), 1,
      aux_sym_real__token1,
    ACTIONS(952), 1,
      aux_sym_constant_token3,
    ACTIONS(954), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(189), 2,
      sym_real_,
      sym_float_,
  [10312] = 5,
    ACTIONS(870), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(956), 1,
      anon_sym_RPAREN,
    STATE(441), 1,
      sym_order_by_clause,
    STATE(550), 1,
      sym_row_or_range_clause,
    ACTIONS(872), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10329] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(942), 1,
      aux_sym_go_statement_token1,
    ACTIONS(958), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(95), 1,
      sym_id_,
  [10348] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(960), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(534), 1,
      sym_id_,
  [10367] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(962), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(588), 1,
      sym_id_,
  [10386] = 4,
    ACTIONS(57), 1,
      aux_sym_real__token1,
    ACTIONS(964), 1,
      aux_sym_constant_token3,
    ACTIONS(966), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(111), 2,
      sym_real_,
      sym_float_,
  [10401] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(942), 1,
      aux_sym_go_statement_token1,
    ACTIONS(968), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(92), 1,
      sym_id_,
  [10420] = 6,
    ACTIONS(191), 1,
      aux_sym_id__token1,
    ACTIONS(193), 1,
      aux_sym_id__token2,
    ACTIONS(970), 1,
      aux_sym_go_statement_token1,
    ACTIONS(972), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(105), 1,
      sym_id_,
    STATE(113), 1,
      sym_keyword,
  [10439] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(942), 1,
      aux_sym_go_statement_token1,
    ACTIONS(974), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(93), 1,
      sym_id_,
  [10458] = 6,
    ACTIONS(191), 1,
      aux_sym_id__token1,
    ACTIONS(193), 1,
      aux_sym_id__token2,
    ACTIONS(970), 1,
      aux_sym_go_statement_token1,
    ACTIONS(976), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(113), 1,
      sym_keyword,
    STATE(137), 1,
      sym_id_,
  [10477] = 6,
    ACTIONS(191), 1,
      aux_sym_id__token1,
    ACTIONS(193), 1,
      aux_sym_id__token2,
    ACTIONS(970), 1,
      aux_sym_go_statement_token1,
    ACTIONS(978), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(113), 1,
      sym_keyword,
    STATE(143), 1,
      sym_id_,
  [10496] = 3,
    ACTIONS(982), 1,
      sym_asc_,
    ACTIONS(984), 1,
      sym_desc_,
    ACTIONS(980), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10509] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(986), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(644), 1,
      sym_id_,
  [10528] = 4,
    ACTIONS(990), 1,
      aux_sym_window_frame_preceding_token2,
    STATE(518), 1,
      sym_window_frame_bound,
    ACTIONS(988), 2,
      aux_sym_constant_token3,
      aux_sym_window_frame_following_token1,
    STATE(506), 2,
      sym_window_frame_following,
      sym_window_frame_preceding,
  [10543] = 6,
    ACTIONS(191), 1,
      aux_sym_id__token1,
    ACTIONS(193), 1,
      aux_sym_id__token2,
    ACTIONS(970), 1,
      aux_sym_go_statement_token1,
    ACTIONS(992), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(113), 1,
      sym_keyword,
    STATE(149), 1,
      sym_id_,
  [10562] = 5,
    ACTIONS(948), 1,
      aux_sym_ignore_nulls__token1,
    ACTIONS(950), 1,
      aux_sym_respect_nulls__token1,
    ACTIONS(994), 1,
      aux_sym_over__token1,
    STATE(148), 1,
      sym_over_clause,
    STATE(498), 2,
      sym_ignore_nulls_,
      sym_respect_nulls_,
  [10579] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(940), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(461), 1,
      sym_id_,
  [10598] = 1,
    ACTIONS(694), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [10607] = 1,
    ACTIONS(996), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10616] = 5,
    ACTIONS(870), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(998), 1,
      anon_sym_RPAREN,
    STATE(425), 1,
      sym_order_by_clause,
    STATE(578), 1,
      sym_row_or_range_clause,
    ACTIONS(872), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10633] = 1,
    ACTIONS(682), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [10642] = 3,
    ACTIONS(1000), 1,
      anon_sym_COMMA,
    STATE(354), 1,
      aux_sym_expression_list__repeat1,
    ACTIONS(1003), 4,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10655] = 3,
    ACTIONS(1005), 1,
      anon_sym_COMMA,
    STATE(354), 1,
      aux_sym_expression_list__repeat1,
    ACTIONS(1007), 4,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10668] = 6,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(341), 1,
      aux_sym_id__token1,
    ACTIONS(343), 1,
      aux_sym_id__token2,
    ACTIONS(1009), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(66), 1,
      sym_keyword,
    STATE(88), 1,
      sym_id_,
  [10687] = 4,
    ACTIONS(990), 1,
      aux_sym_window_frame_preceding_token2,
    STATE(532), 1,
      sym_window_frame_bound,
    ACTIONS(988), 2,
      aux_sym_constant_token3,
      aux_sym_window_frame_following_token1,
    STATE(506), 2,
      sym_window_frame_following,
      sym_window_frame_preceding,
  [10702] = 6,
    ACTIONS(191), 1,
      aux_sym_id__token1,
    ACTIONS(193), 1,
      aux_sym_id__token2,
    ACTIONS(970), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1011), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(113), 1,
      sym_keyword,
    STATE(126), 1,
      sym_id_,
  [10721] = 5,
    ACTIONS(735), 1,
      aux_sym_over__token1,
    ACTIONS(948), 1,
      aux_sym_ignore_nulls__token1,
    ACTIONS(950), 1,
      aux_sym_respect_nulls__token1,
    STATE(268), 1,
      sym_over_clause,
    STATE(496), 2,
      sym_ignore_nulls_,
      sym_respect_nulls_,
  [10738] = 1,
    ACTIONS(602), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [10747] = 5,
    ACTIONS(990), 1,
      aux_sym_window_frame_preceding_token2,
    ACTIONS(1015), 1,
      aux_sym_window_frame_extent_token1,
    STATE(558), 1,
      sym_window_frame_preceding,
    STATE(560), 1,
      sym_window_frame_extent,
    ACTIONS(1013), 2,
      aux_sym_constant_token3,
      aux_sym_window_frame_following_token1,
  [10764] = 6,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(341), 1,
      aux_sym_id__token1,
    ACTIONS(343), 1,
      aux_sym_id__token2,
    ACTIONS(1017), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(66), 1,
      sym_keyword,
    STATE(75), 1,
      sym_id_,
  [10783] = 1,
    ACTIONS(672), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [10792] = 4,
    ACTIONS(119), 1,
      aux_sym_real__token1,
    ACTIONS(1019), 1,
      aux_sym_constant_token3,
    ACTIONS(1021), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(283), 2,
      sym_real_,
      sym_float_,
  [10807] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(942), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1023), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(103), 1,
      sym_id_,
  [10826] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1025), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(557), 1,
      sym_id_,
  [10845] = 6,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(341), 1,
      aux_sym_id__token1,
    ACTIONS(343), 1,
      aux_sym_id__token2,
    ACTIONS(1027), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(66), 1,
      sym_keyword,
    STATE(82), 1,
      sym_id_,
  [10864] = 1,
    ACTIONS(660), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [10873] = 3,
    ACTIONS(1005), 1,
      anon_sym_COMMA,
    STATE(355), 1,
      aux_sym_expression_list__repeat1,
    ACTIONS(1029), 4,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10886] = 6,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(341), 1,
      aux_sym_id__token1,
    ACTIONS(343), 1,
      aux_sym_id__token2,
    ACTIONS(1031), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(66), 1,
      sym_keyword,
    STATE(78), 1,
      sym_id_,
  [10905] = 1,
    ACTIONS(653), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [10914] = 5,
    ACTIONS(870), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(1033), 1,
      anon_sym_RPAREN,
    STATE(439), 1,
      sym_order_by_clause,
    STATE(516), 1,
      sym_row_or_range_clause,
    ACTIONS(872), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10931] = 1,
    ACTIONS(614), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [10940] = 6,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(341), 1,
      aux_sym_id__token1,
    ACTIONS(343), 1,
      aux_sym_id__token2,
    ACTIONS(1035), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(66), 1,
      sym_keyword,
    STATE(80), 1,
      sym_id_,
  [10959] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(581), 1,
      sym_id_,
  [10975] = 5,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(341), 1,
      aux_sym_id__token1,
    ACTIONS(343), 1,
      aux_sym_id__token2,
    STATE(66), 1,
      sym_keyword,
    STATE(76), 1,
      sym_id_,
  [10991] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(942), 1,
      aux_sym_go_statement_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(114), 1,
      sym_id_,
  [11007] = 5,
    ACTIONS(191), 1,
      aux_sym_id__token1,
    ACTIONS(193), 1,
      aux_sym_id__token2,
    ACTIONS(970), 1,
      aux_sym_go_statement_token1,
    STATE(113), 1,
      sym_keyword,
    STATE(160), 1,
      sym_id_,
  [11023] = 5,
    ACTIONS(745), 1,
      aux_sym_go_statement_token1,
    ACTIONS(747), 1,
      aux_sym_id__token1,
    ACTIONS(749), 1,
      aux_sym_id__token2,
    STATE(301), 1,
      sym_keyword,
    STATE(303), 1,
      sym_id_,
  [11039] = 5,
    ACTIONS(191), 1,
      aux_sym_id__token1,
    ACTIONS(193), 1,
      aux_sym_id__token2,
    ACTIONS(970), 1,
      aux_sym_go_statement_token1,
    STATE(113), 1,
      sym_keyword,
    STATE(156), 1,
      sym_id_,
  [11055] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(942), 1,
      aux_sym_go_statement_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(140), 1,
      sym_id_,
  [11071] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(942), 1,
      aux_sym_go_statement_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(112), 1,
      sym_id_,
  [11087] = 5,
    ACTIONS(745), 1,
      aux_sym_go_statement_token1,
    ACTIONS(747), 1,
      aux_sym_id__token1,
    ACTIONS(749), 1,
      aux_sym_id__token2,
    STATE(291), 1,
      sym_id_,
    STATE(301), 1,
      sym_keyword,
  [11103] = 5,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(341), 1,
      aux_sym_id__token1,
    ACTIONS(343), 1,
      aux_sym_id__token2,
    STATE(66), 1,
      sym_keyword,
    STATE(79), 1,
      sym_id_,
  [11119] = 3,
    ACTIONS(1037), 1,
      anon_sym_COMMA,
    STATE(397), 1,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(1039), 3,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11131] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(942), 1,
      aux_sym_go_statement_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(110), 1,
      sym_id_,
  [11147] = 5,
    ACTIONS(191), 1,
      aux_sym_id__token1,
    ACTIONS(193), 1,
      aux_sym_id__token2,
    ACTIONS(970), 1,
      aux_sym_go_statement_token1,
    STATE(113), 1,
      sym_keyword,
    STATE(163), 1,
      sym_id_,
  [11163] = 5,
    ACTIONS(191), 1,
      aux_sym_id__token1,
    ACTIONS(193), 1,
      aux_sym_id__token2,
    ACTIONS(970), 1,
      aux_sym_go_statement_token1,
    STATE(113), 1,
      sym_keyword,
    STATE(150), 1,
      sym_id_,
  [11179] = 5,
    ACTIONS(745), 1,
      aux_sym_go_statement_token1,
    ACTIONS(747), 1,
      aux_sym_id__token1,
    ACTIONS(749), 1,
      aux_sym_id__token2,
    STATE(274), 1,
      sym_id_,
    STATE(301), 1,
      sym_keyword,
  [11195] = 5,
    ACTIONS(745), 1,
      aux_sym_go_statement_token1,
    ACTIONS(747), 1,
      aux_sym_id__token1,
    ACTIONS(749), 1,
      aux_sym_id__token2,
    STATE(290), 1,
      sym_id_,
    STATE(301), 1,
      sym_keyword,
  [11211] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(615), 1,
      sym_id_,
  [11227] = 5,
    ACTIONS(87), 1,
      aux_sym_go_statement_token1,
    ACTIONS(121), 1,
      aux_sym_id__token1,
    ACTIONS(123), 1,
      aux_sym_id__token2,
    STATE(77), 1,
      sym_keyword,
    STATE(351), 1,
      sym_id_,
  [11243] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(942), 1,
      aux_sym_go_statement_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(134), 1,
      sym_id_,
  [11259] = 5,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(341), 1,
      aux_sym_id__token1,
    ACTIONS(343), 1,
      aux_sym_id__token2,
    STATE(66), 1,
      sym_keyword,
    STATE(83), 1,
      sym_id_,
  [11275] = 5,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(341), 1,
      aux_sym_id__token1,
    ACTIONS(343), 1,
      aux_sym_id__token2,
    STATE(66), 1,
      sym_keyword,
    STATE(85), 1,
      sym_id_,
  [11291] = 5,
    ACTIONS(191), 1,
      aux_sym_id__token1,
    ACTIONS(193), 1,
      aux_sym_id__token2,
    ACTIONS(970), 1,
      aux_sym_go_statement_token1,
    STATE(113), 1,
      sym_keyword,
    STATE(158), 1,
      sym_id_,
  [11307] = 3,
    ACTIONS(1037), 1,
      anon_sym_COMMA,
    STATE(407), 1,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(1041), 3,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11319] = 5,
    ACTIONS(191), 1,
      aux_sym_id__token1,
    ACTIONS(193), 1,
      aux_sym_id__token2,
    ACTIONS(970), 1,
      aux_sym_go_statement_token1,
    STATE(113), 1,
      sym_keyword,
    STATE(152), 1,
      sym_id_,
  [11335] = 5,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(341), 1,
      aux_sym_id__token1,
    ACTIONS(343), 1,
      aux_sym_id__token2,
    STATE(66), 1,
      sym_keyword,
    STATE(87), 1,
      sym_id_,
  [11351] = 5,
    ACTIONS(191), 1,
      aux_sym_id__token1,
    ACTIONS(193), 1,
      aux_sym_id__token2,
    ACTIONS(970), 1,
      aux_sym_go_statement_token1,
    STATE(113), 1,
      sym_keyword,
    STATE(162), 1,
      sym_id_,
  [11367] = 5,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(341), 1,
      aux_sym_id__token1,
    ACTIONS(343), 1,
      aux_sym_id__token2,
    STATE(64), 1,
      sym_id_,
    STATE(66), 1,
      sym_keyword,
  [11383] = 1,
    ACTIONS(1003), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11391] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(572), 1,
      sym_id_,
  [11407] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(596), 1,
      sym_id_,
  [11423] = 5,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(341), 1,
      aux_sym_id__token1,
    ACTIONS(343), 1,
      aux_sym_id__token2,
    STATE(65), 1,
      sym_id_,
    STATE(66), 1,
      sym_keyword,
  [11439] = 5,
    ACTIONS(63), 1,
      aux_sym_go_statement_token1,
    ACTIONS(341), 1,
      aux_sym_id__token1,
    ACTIONS(343), 1,
      aux_sym_id__token2,
    STATE(66), 1,
      sym_keyword,
    STATE(86), 1,
      sym_id_,
  [11455] = 3,
    ACTIONS(1043), 1,
      anon_sym_COMMA,
    STATE(407), 1,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(1046), 3,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11467] = 5,
    ACTIONS(191), 1,
      aux_sym_id__token1,
    ACTIONS(193), 1,
      aux_sym_id__token2,
    ACTIONS(970), 1,
      aux_sym_go_statement_token1,
    STATE(113), 1,
      sym_keyword,
    STATE(151), 1,
      sym_id_,
  [11483] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(942), 1,
      aux_sym_go_statement_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(128), 1,
      sym_id_,
  [11499] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(942), 1,
      aux_sym_go_statement_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(129), 1,
      sym_id_,
  [11515] = 5,
    ACTIONS(745), 1,
      aux_sym_go_statement_token1,
    ACTIONS(747), 1,
      aux_sym_id__token1,
    ACTIONS(749), 1,
      aux_sym_id__token2,
    STATE(298), 1,
      sym_id_,
    STATE(301), 1,
      sym_keyword,
  [11531] = 5,
    ACTIONS(745), 1,
      aux_sym_go_statement_token1,
    ACTIONS(747), 1,
      aux_sym_id__token1,
    ACTIONS(749), 1,
      aux_sym_id__token2,
    STATE(282), 1,
      sym_id_,
    STATE(301), 1,
      sym_keyword,
  [11547] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(942), 1,
      aux_sym_go_statement_token1,
    STATE(56), 1,
      sym_keyword,
    STATE(106), 1,
      sym_id_,
  [11563] = 5,
    ACTIONS(745), 1,
      aux_sym_go_statement_token1,
    ACTIONS(747), 1,
      aux_sym_id__token1,
    ACTIONS(749), 1,
      aux_sym_id__token2,
    STATE(289), 1,
      sym_id_,
    STATE(301), 1,
      sym_keyword,
  [11579] = 5,
    ACTIONS(17), 1,
      aux_sym_go_statement_token1,
    ACTIONS(59), 1,
      aux_sym_id__token1,
    ACTIONS(61), 1,
      aux_sym_id__token2,
    STATE(49), 1,
      sym_id_,
    STATE(74), 1,
      sym_keyword,
  [11595] = 4,
    ACTIONS(1048), 1,
      aux_sym_RESULT_SETS_token1,
    ACTIONS(1050), 1,
      sym_RECOMPILE,
    STATE(251), 1,
      sym_execute_option,
    STATE(502), 1,
      sym_RESULT_SETS,
  [11608] = 1,
    ACTIONS(1052), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11615] = 3,
    ACTIONS(998), 1,
      anon_sym_RPAREN,
    STATE(578), 1,
      sym_row_or_range_clause,
    ACTIONS(872), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11626] = 3,
    ACTIONS(1054), 1,
      ts_builtin_sym_end,
    ACTIONS(1056), 1,
      aux_sym_go_statement_token1,
    STATE(442), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
  [11637] = 4,
    ACTIONS(1048), 1,
      aux_sym_RESULT_SETS_token1,
    ACTIONS(1050), 1,
      sym_RECOMPILE,
    STATE(229), 1,
      sym_execute_option,
    STATE(502), 1,
      sym_RESULT_SETS,
  [11650] = 2,
    ACTIONS(1058), 2,
      aux_sym_go_statement_token1,
      aux_sym_id__token1,
    ACTIONS(1060), 2,
      sym_string_lit,
      aux_sym_id__token2,
  [11659] = 3,
    ACTIONS(57), 1,
      aux_sym_real__token1,
    ACTIONS(964), 1,
      aux_sym_constant_token3,
    STATE(144), 2,
      sym_real_,
      sym_float_,
  [11670] = 1,
    ACTIONS(1062), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11677] = 1,
    ACTIONS(1046), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11684] = 3,
    ACTIONS(1064), 1,
      anon_sym_RPAREN,
    STATE(580), 1,
      sym_row_or_range_clause,
    ACTIONS(872), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11695] = 3,
    ACTIONS(119), 1,
      aux_sym_real__token1,
    ACTIONS(1019), 1,
      aux_sym_constant_token3,
    STATE(267), 2,
      sym_real_,
      sym_float_,
  [11706] = 4,
    ACTIONS(1048), 1,
      aux_sym_RESULT_SETS_token1,
    ACTIONS(1050), 1,
      sym_RECOMPILE,
    STATE(210), 1,
      sym_execute_option,
    STATE(502), 1,
      sym_RESULT_SETS,
  [11719] = 4,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(339), 1,
      sym_string_lit,
    STATE(54), 1,
      sym_LOCAL_ID_,
    STATE(463), 1,
      sym_execute_var_string,
  [11732] = 1,
    ACTIONS(910), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [11739] = 4,
    ACTIONS(1048), 1,
      aux_sym_RESULT_SETS_token1,
    ACTIONS(1050), 1,
      sym_RECOMPILE,
    STATE(206), 1,
      sym_execute_option,
    STATE(502), 1,
      sym_RESULT_SETS,
  [11752] = 4,
    ACTIONS(1048), 1,
      aux_sym_RESULT_SETS_token1,
    ACTIONS(1050), 1,
      sym_RECOMPILE,
    STATE(230), 1,
      sym_execute_option,
    STATE(502), 1,
      sym_RESULT_SETS,
  [11765] = 1,
    ACTIONS(1066), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11772] = 1,
    ACTIONS(922), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [11779] = 4,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(339), 1,
      sym_string_lit,
    STATE(54), 1,
      sym_LOCAL_ID_,
    STATE(485), 1,
      sym_execute_var_string,
  [11792] = 4,
    ACTIONS(868), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(870), 1,
      aux_sym_order_by_clause_token1,
    STATE(477), 1,
      sym_partition_by_clause,
    STATE(549), 1,
      sym_order_by_clause,
  [11805] = 1,
    ACTIONS(1068), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11812] = 4,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(339), 1,
      sym_string_lit,
    STATE(54), 1,
      sym_LOCAL_ID_,
    STATE(467), 1,
      sym_execute_var_string,
  [11825] = 4,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(339), 1,
      sym_string_lit,
    STATE(54), 1,
      sym_LOCAL_ID_,
    STATE(62), 1,
      sym_execute_var_string,
  [11838] = 3,
    ACTIONS(1070), 1,
      anon_sym_RPAREN,
    STATE(553), 1,
      sym_row_or_range_clause,
    ACTIONS(872), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11849] = 1,
    ACTIONS(1072), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [11856] = 3,
    ACTIONS(1074), 1,
      anon_sym_RPAREN,
    STATE(524), 1,
      sym_row_or_range_clause,
    ACTIONS(872), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11867] = 3,
    ACTIONS(764), 1,
      ts_builtin_sym_end,
    ACTIONS(1076), 1,
      aux_sym_go_statement_token1,
    STATE(442), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
  [11878] = 3,
    ACTIONS(1033), 1,
      anon_sym_RPAREN,
    STATE(516), 1,
      sym_row_or_range_clause,
    ACTIONS(872), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11889] = 4,
    ACTIONS(868), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(870), 1,
      aux_sym_order_by_clause_token1,
    STATE(472), 1,
      sym_partition_by_clause,
    STATE(576), 1,
      sym_order_by_clause,
  [11902] = 4,
    ACTIONS(868), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(870), 1,
      aux_sym_order_by_clause_token1,
    STATE(479), 1,
      sym_partition_by_clause,
    STATE(585), 1,
      sym_order_by_clause,
  [11915] = 3,
    ACTIONS(956), 1,
      anon_sym_RPAREN,
    STATE(550), 1,
      sym_row_or_range_clause,
    ACTIONS(872), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11926] = 3,
    ACTIONS(157), 1,
      aux_sym_real__token1,
    ACTIONS(952), 1,
      aux_sym_constant_token3,
    STATE(193), 2,
      sym_real_,
      sym_float_,
  [11937] = 3,
    ACTIONS(1079), 1,
      aux_sym_constant_token3,
    STATE(493), 1,
      sym_integer,
    ACTIONS(417), 2,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
  [11948] = 1,
    ACTIONS(1081), 4,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11955] = 3,
    ACTIONS(1007), 1,
      anon_sym_RPAREN,
    ACTIONS(1083), 1,
      anon_sym_COMMA,
    STATE(465), 1,
      aux_sym_expression_list__repeat1,
  [11965] = 3,
    ACTIONS(1085), 1,
      anon_sym_RPAREN,
    ACTIONS(1087), 1,
      aux_sym_partition_by_clause_token1,
    STATE(555), 1,
      sym_partition_by_clause,
  [11975] = 2,
    ACTIONS(1089), 1,
      aux_sym_constant_token3,
    ACTIONS(1091), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [11983] = 3,
    ACTIONS(1093), 1,
      anon_sym_COMMA,
    ACTIONS(1095), 1,
      anon_sym_RPAREN,
    STATE(460), 1,
      aux_sym_execute_body_repeat2,
  [11993] = 1,
    ACTIONS(1097), 3,
      aux_sym_over__token1,
      aux_sym_ignore_nulls__token1,
      aux_sym_respect_nulls__token1,
  [11999] = 2,
    ACTIONS(1099), 1,
      aux_sym_constant_token3,
    ACTIONS(1101), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [12007] = 3,
    ACTIONS(1087), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(1103), 1,
      anon_sym_RPAREN,
    STATE(559), 1,
      sym_partition_by_clause,
  [12017] = 1,
    ACTIONS(1105), 3,
      aux_sym_over__token1,
      aux_sym_ignore_nulls__token1,
      aux_sym_respect_nulls__token1,
  [12023] = 3,
    ACTIONS(1093), 1,
      anon_sym_COMMA,
    ACTIONS(1107), 1,
      anon_sym_RPAREN,
    STATE(460), 1,
      aux_sym_execute_body_repeat2,
  [12033] = 2,
    ACTIONS(1109), 1,
      aux_sym_constant_token3,
    ACTIONS(1111), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [12041] = 3,
    ACTIONS(1113), 1,
      anon_sym_COMMA,
    ACTIONS(1116), 1,
      anon_sym_RPAREN,
    STATE(460), 1,
      aux_sym_execute_body_repeat2,
  [12051] = 3,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(1118), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(57), 1,
      sym_udt_method_arguments,
  [12061] = 1,
    ACTIONS(1120), 3,
      aux_sym_over__token1,
      aux_sym_ignore_nulls__token1,
      aux_sym_respect_nulls__token1,
  [12067] = 3,
    ACTIONS(1093), 1,
      anon_sym_COMMA,
    ACTIONS(1122), 1,
      anon_sym_RPAREN,
    STATE(458), 1,
      aux_sym_execute_body_repeat2,
  [12077] = 3,
    ACTIONS(1087), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(1124), 1,
      anon_sym_RPAREN,
    STATE(582), 1,
      sym_partition_by_clause,
  [12087] = 3,
    ACTIONS(1003), 1,
      anon_sym_RPAREN,
    ACTIONS(1126), 1,
      anon_sym_COMMA,
    STATE(465), 1,
      aux_sym_expression_list__repeat1,
  [12097] = 3,
    ACTIONS(1029), 1,
      anon_sym_RPAREN,
    ACTIONS(1083), 1,
      anon_sym_COMMA,
    STATE(450), 1,
      aux_sym_expression_list__repeat1,
  [12107] = 3,
    ACTIONS(1093), 1,
      anon_sym_COMMA,
    ACTIONS(1129), 1,
      anon_sym_RPAREN,
    STATE(453), 1,
      aux_sym_execute_body_repeat2,
  [12117] = 2,
    ACTIONS(1131), 1,
      anon_sym_COMMA,
    ACTIONS(1133), 1,
      anon_sym_RPAREN,
  [12124] = 2,
    ACTIONS(1135), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(373), 1,
      sym_execute_statement_arg_named,
  [12131] = 2,
    ACTIONS(1137), 1,
      aux_sym_over__token1,
    STATE(565), 1,
      sym_over_,
  [12138] = 2,
    ACTIONS(1137), 1,
      aux_sym_over__token1,
    STATE(595), 1,
      sym_over_,
  [12145] = 2,
    ACTIONS(870), 1,
      aux_sym_order_by_clause_token1,
    STATE(579), 1,
      sym_order_by_clause,
  [12152] = 2,
    ACTIONS(1139), 1,
      anon_sym_COMMA,
    ACTIONS(1141), 1,
      anon_sym_RPAREN,
  [12159] = 2,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
    ACTIONS(1118), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [12166] = 2,
    ACTIONS(1137), 1,
      aux_sym_over__token1,
    STATE(608), 1,
      sym_over_,
  [12173] = 2,
    ACTIONS(1143), 1,
      anon_sym_LPAREN,
    STATE(359), 1,
      sym_lag_lead_args,
  [12180] = 2,
    ACTIONS(870), 1,
      aux_sym_order_by_clause_token1,
    STATE(552), 1,
      sym_order_by_clause,
  [12187] = 2,
    ACTIONS(870), 1,
      aux_sym_order_by_clause_token1,
    STATE(545), 1,
      sym_order_by_clause,
  [12194] = 2,
    ACTIONS(870), 1,
      aux_sym_order_by_clause_token1,
    STATE(541), 1,
      sym_order_by_clause,
  [12201] = 2,
    ACTIONS(1143), 1,
      anon_sym_LPAREN,
    STATE(331), 1,
      sym_lag_lead_args,
  [12208] = 2,
    ACTIONS(1137), 1,
      aux_sym_over__token1,
    STATE(616), 1,
      sym_over_,
  [12215] = 2,
    ACTIONS(1137), 1,
      aux_sym_over__token1,
    STATE(625), 1,
      sym_over_,
  [12222] = 2,
    ACTIONS(870), 1,
      aux_sym_order_by_clause_token1,
    STATE(630), 1,
      sym_order_by_clause,
  [12229] = 1,
    ACTIONS(1145), 2,
      sym_LOGIN,
      sym_USER,
  [12234] = 1,
    ACTIONS(1116), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12239] = 1,
    ACTIONS(1147), 2,
      sym_LOGIN,
      sym_USER,
  [12244] = 1,
    ACTIONS(1149), 2,
      sym_LOGIN,
      sym_USER,
  [12249] = 2,
    ACTIONS(65), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(53), 1,
      sym_LOCAL_ID_,
  [12256] = 2,
    ACTIONS(735), 1,
      aux_sym_over__token1,
    STATE(299), 1,
      sym_over_clause,
  [12263] = 1,
    ACTIONS(1151), 2,
      sym_NONE,
      sym_UNDEFINED,
  [12268] = 2,
    ACTIONS(735), 1,
      aux_sym_over__token1,
    STATE(310), 1,
      sym_over_clause,
  [12275] = 2,
    ACTIONS(735), 1,
      aux_sym_over__token1,
    STATE(308), 1,
      sym_over_clause,
  [12282] = 1,
    ACTIONS(926), 2,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
  [12287] = 1,
    ACTIONS(934), 2,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
  [12292] = 2,
    ACTIONS(1153), 1,
      aux_sym_within_group__token1,
    STATE(606), 1,
      sym_within_group_,
  [12299] = 2,
    ACTIONS(735), 1,
      aux_sym_over__token1,
    STATE(305), 1,
      sym_over_clause,
  [12306] = 2,
    ACTIONS(994), 1,
      aux_sym_over__token1,
    STATE(119), 1,
      sym_over_clause,
  [12313] = 2,
    ACTIONS(994), 1,
      aux_sym_over__token1,
    STATE(124), 1,
      sym_over_clause,
  [12320] = 1,
    ACTIONS(1155), 2,
      anon_sym_RPAREN,
      aux_sym_window_frame_extent_token2,
  [12325] = 2,
    ACTIONS(946), 1,
      aux_sym_over__token1,
    STATE(226), 1,
      sym_over_clause,
  [12332] = 2,
    ACTIONS(870), 1,
      aux_sym_order_by_clause_token1,
    STATE(634), 1,
      sym_order_by_clause,
  [12339] = 1,
    ACTIONS(1157), 2,
      sym_NONE,
      sym_UNDEFINED,
  [12344] = 2,
    ACTIONS(946), 1,
      aux_sym_over__token1,
    STATE(220), 1,
      sym_over_clause,
  [12351] = 2,
    ACTIONS(1143), 1,
      anon_sym_LPAREN,
    STATE(348), 1,
      sym_lag_lead_args,
  [12358] = 2,
    ACTIONS(946), 1,
      aux_sym_over__token1,
    STATE(219), 1,
      sym_over_clause,
  [12365] = 1,
    ACTIONS(1159), 2,
      anon_sym_RPAREN,
      aux_sym_window_frame_extent_token2,
  [12370] = 1,
    ACTIONS(1161), 2,
      anon_sym_RPAREN,
      aux_sym_window_frame_extent_token2,
  [12375] = 2,
    ACTIONS(994), 1,
      aux_sym_over__token1,
    STATE(131), 1,
      sym_over_clause,
  [12382] = 2,
    ACTIONS(1153), 1,
      aux_sym_within_group__token1,
    STATE(640), 1,
      sym_within_group_,
  [12389] = 2,
    ACTIONS(1153), 1,
      aux_sym_within_group__token1,
    STATE(642), 1,
      sym_within_group_,
  [12396] = 2,
    ACTIONS(1137), 1,
      aux_sym_over__token1,
    STATE(520), 1,
      sym_over_,
  [12403] = 2,
    ACTIONS(994), 1,
      aux_sym_over__token1,
    STATE(115), 1,
      sym_over_clause,
  [12410] = 2,
    ACTIONS(1163), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(218), 1,
      sym_execute_statement_arg_named,
  [12417] = 2,
    ACTIONS(1165), 1,
      aux_sym_window_frame_following_token2,
    ACTIONS(1167), 1,
      aux_sym_window_frame_preceding_token1,
  [12424] = 2,
    ACTIONS(946), 1,
      aux_sym_over__token1,
    STATE(214), 1,
      sym_over_clause,
  [12431] = 1,
    ACTIONS(1070), 1,
      anon_sym_RPAREN,
  [12435] = 1,
    ACTIONS(1169), 1,
      anon_sym_RPAREN,
  [12439] = 1,
    ACTIONS(1171), 1,
      anon_sym_RPAREN,
  [12443] = 1,
    ACTIONS(1173), 1,
      anon_sym_LPAREN,
  [12447] = 1,
    ACTIONS(1175), 1,
      anon_sym_LPAREN,
  [12451] = 1,
    ACTIONS(1177), 1,
      aux_sym_over__token1,
  [12455] = 1,
    ACTIONS(1179), 1,
      aux_sym_execute_body_token1,
  [12459] = 1,
    ACTIONS(1181), 1,
      anon_sym_RPAREN,
  [12463] = 1,
    ACTIONS(1183), 1,
      anon_sym_RPAREN,
  [12467] = 1,
    ACTIONS(1185), 1,
      anon_sym_LPAREN,
  [12471] = 1,
    ACTIONS(1187), 1,
      anon_sym_LPAREN,
  [12475] = 1,
    ACTIONS(1189), 1,
      anon_sym_LPAREN,
  [12479] = 1,
    ACTIONS(1191), 1,
      anon_sym_LPAREN,
  [12483] = 1,
    ACTIONS(1193), 1,
      anon_sym_LPAREN,
  [12487] = 1,
    ACTIONS(1195), 1,
      anon_sym_LPAREN,
  [12491] = 1,
    ACTIONS(956), 1,
      anon_sym_RPAREN,
  [12495] = 1,
    ACTIONS(1197), 1,
      aux_sym_window_frame_extent_token2,
  [12499] = 1,
    ACTIONS(1199), 1,
      anon_sym_LPAREN,
  [12503] = 1,
    ACTIONS(1201), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [12507] = 1,
    ACTIONS(1203), 1,
      aux_sym_constant_token3,
  [12511] = 1,
    ACTIONS(1205), 1,
      anon_sym_RPAREN,
  [12515] = 1,
    ACTIONS(1207), 1,
      aux_sym_real__token2,
  [12519] = 1,
    ACTIONS(1209), 1,
      anon_sym_LPAREN,
  [12523] = 1,
    ACTIONS(1211), 1,
      aux_sym_constant_token3,
  [12527] = 1,
    ACTIONS(1213), 1,
      anon_sym_RPAREN,
  [12531] = 1,
    ACTIONS(1215), 1,
      anon_sym_RPAREN,
  [12535] = 1,
    ACTIONS(1217), 1,
      anon_sym_RPAREN,
  [12539] = 1,
    ACTIONS(1219), 1,
      anon_sym_RPAREN,
  [12543] = 1,
    ACTIONS(1221), 1,
      anon_sym_RPAREN,
  [12547] = 1,
    ACTIONS(1223), 1,
      anon_sym_RPAREN,
  [12551] = 1,
    ACTIONS(1225), 1,
      aux_sym_partition_by_clause_token2,
  [12555] = 1,
    ACTIONS(1227), 1,
      sym_string_lit,
  [12559] = 1,
    ACTIONS(1033), 1,
      anon_sym_RPAREN,
  [12563] = 1,
    ACTIONS(1229), 1,
      anon_sym_RPAREN,
  [12567] = 1,
    ACTIONS(1074), 1,
      anon_sym_RPAREN,
  [12571] = 1,
    ACTIONS(589), 1,
      anon_sym_EQ,
  [12575] = 1,
    ACTIONS(1231), 1,
      anon_sym_RPAREN,
  [12579] = 1,
    ACTIONS(1233), 1,
      anon_sym_RPAREN,
  [12583] = 1,
    ACTIONS(1235), 1,
      anon_sym_RPAREN,
  [12587] = 1,
    ACTIONS(1237), 1,
      anon_sym_RPAREN,
  [12591] = 1,
    ACTIONS(1239), 1,
      anon_sym_EQ,
  [12595] = 1,
    ACTIONS(1241), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [12599] = 1,
    ACTIONS(1243), 1,
      anon_sym_RPAREN,
  [12603] = 1,
    ACTIONS(1245), 1,
      anon_sym_RPAREN,
  [12607] = 1,
    ACTIONS(1247), 1,
      anon_sym_RPAREN,
  [12611] = 1,
    ACTIONS(743), 1,
      aux_sym_real__token2,
  [12615] = 1,
    ACTIONS(1249), 1,
      anon_sym_LPAREN,
  [12619] = 1,
    ACTIONS(1251), 1,
      aux_sym_constant_token3,
  [12623] = 1,
    ACTIONS(1253), 1,
      anon_sym_RPAREN,
  [12627] = 1,
    ACTIONS(1255), 1,
      anon_sym_LPAREN,
  [12631] = 1,
    ACTIONS(1257), 1,
      anon_sym_RPAREN,
  [12635] = 1,
    ACTIONS(1259), 1,
      anon_sym_RPAREN,
  [12639] = 1,
    ACTIONS(1261), 1,
      anon_sym_RPAREN,
  [12643] = 1,
    ACTIONS(1263), 1,
      anon_sym_LPAREN,
  [12647] = 1,
    ACTIONS(1167), 1,
      aux_sym_window_frame_preceding_token3,
  [12651] = 1,
    ACTIONS(1265), 1,
      aux_sym_partition_by_clause_token2,
  [12655] = 1,
    ACTIONS(395), 1,
      anon_sym_LPAREN,
  [12659] = 1,
    ACTIONS(1167), 1,
      aux_sym_window_frame_preceding_token1,
  [12663] = 1,
    ACTIONS(1267), 1,
      aux_sym_constant_token3,
  [12667] = 1,
    ACTIONS(998), 1,
      anon_sym_RPAREN,
  [12671] = 1,
    ACTIONS(1269), 1,
      anon_sym_RPAREN,
  [12675] = 1,
    ACTIONS(896), 1,
      anon_sym_EQ,
  [12679] = 1,
    ACTIONS(1064), 1,
      anon_sym_RPAREN,
  [12683] = 1,
    ACTIONS(1271), 1,
      anon_sym_RPAREN,
  [12687] = 1,
    ACTIONS(1273), 1,
      anon_sym_RPAREN,
  [12691] = 1,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
  [12695] = 1,
    ACTIONS(1275), 1,
      anon_sym_RPAREN,
  [12699] = 1,
    ACTIONS(1277), 1,
      aux_sym_over__token1,
  [12703] = 1,
    ACTIONS(1279), 1,
      anon_sym_LPAREN,
  [12707] = 1,
    ACTIONS(1281), 1,
      anon_sym_RPAREN,
  [12711] = 1,
    ACTIONS(1283), 1,
      anon_sym_RPAREN,
  [12715] = 1,
    ACTIONS(1285), 1,
      anon_sym_RPAREN,
  [12719] = 1,
    ACTIONS(1287), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [12723] = 1,
    ACTIONS(1289), 1,
      anon_sym_RPAREN,
  [12727] = 1,
    ACTIONS(1291), 1,
      anon_sym_LPAREN,
  [12731] = 1,
    ACTIONS(1293), 1,
      anon_sym_RPAREN,
  [12735] = 1,
    ACTIONS(1295), 1,
      anon_sym_RPAREN,
  [12739] = 1,
    ACTIONS(1297), 1,
      anon_sym_LPAREN,
  [12743] = 1,
    ACTIONS(1299), 1,
      aux_sym_real__token2,
  [12747] = 1,
    ACTIONS(1301), 1,
      anon_sym_LPAREN,
  [12751] = 1,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
  [12755] = 1,
    ACTIONS(1303), 1,
      anon_sym_LPAREN,
  [12759] = 1,
    ACTIONS(1305), 1,
      anon_sym_RPAREN,
  [12763] = 1,
    ACTIONS(1307), 1,
      anon_sym_EQ,
  [12767] = 1,
    ACTIONS(1309), 1,
      sym_string_lit,
  [12771] = 1,
    ACTIONS(1311), 1,
      aux_sym_constant_token3,
  [12775] = 1,
    ACTIONS(1313), 1,
      anon_sym_RPAREN,
  [12779] = 1,
    ACTIONS(1315), 1,
      anon_sym_LPAREN,
  [12783] = 1,
    ACTIONS(1317), 1,
      anon_sym_RPAREN,
  [12787] = 1,
    ACTIONS(1319), 1,
      anon_sym_RPAREN,
  [12791] = 1,
    ACTIONS(1321), 1,
      anon_sym_LPAREN,
  [12795] = 1,
    ACTIONS(1323), 1,
      anon_sym_RPAREN,
  [12799] = 1,
    ACTIONS(1325), 1,
      anon_sym_LPAREN,
  [12803] = 1,
    ACTIONS(1327), 1,
      anon_sym_LPAREN,
  [12807] = 1,
    ACTIONS(1329), 1,
      anon_sym_LPAREN,
  [12811] = 1,
    ACTIONS(1331), 1,
      anon_sym_LPAREN,
  [12815] = 1,
    ACTIONS(1333), 1,
      anon_sym_LPAREN,
  [12819] = 1,
    ACTIONS(1335), 1,
      anon_sym_LPAREN,
  [12823] = 1,
    ACTIONS(1337), 1,
      anon_sym_RPAREN,
  [12827] = 1,
    ACTIONS(435), 1,
      anon_sym_LPAREN,
  [12831] = 1,
    ACTIONS(1339), 1,
      anon_sym_LPAREN,
  [12835] = 1,
    ACTIONS(1341), 1,
      anon_sym_RPAREN,
  [12839] = 1,
    ACTIONS(1343), 1,
      anon_sym_LPAREN,
  [12843] = 1,
    ACTIONS(1345), 1,
      anon_sym_LPAREN,
  [12847] = 1,
    ACTIONS(1347), 1,
      anon_sym_LPAREN,
  [12851] = 1,
    ACTIONS(1349), 1,
      anon_sym_LPAREN,
  [12855] = 1,
    ACTIONS(1351), 1,
      anon_sym_LPAREN,
  [12859] = 1,
    ACTIONS(1353), 1,
      anon_sym_RPAREN,
  [12863] = 1,
    ACTIONS(1355), 1,
      aux_sym_partition_by_clause_token2,
  [12867] = 1,
    ACTIONS(1357), 1,
      anon_sym_LPAREN,
  [12871] = 1,
    ACTIONS(1359), 1,
      anon_sym_LPAREN,
  [12875] = 1,
    ACTIONS(1361), 1,
      anon_sym_LPAREN,
  [12879] = 1,
    ACTIONS(1363), 1,
      anon_sym_LPAREN,
  [12883] = 1,
    ACTIONS(1365), 1,
      aux_sym_ignore_nulls__token2,
  [12887] = 1,
    ACTIONS(1367), 1,
      anon_sym_RPAREN,
  [12891] = 1,
    ACTIONS(1369), 1,
      anon_sym_LPAREN,
  [12895] = 1,
    ACTIONS(1371), 1,
      anon_sym_LPAREN,
  [12899] = 1,
    ACTIONS(1373), 1,
      anon_sym_LPAREN,
  [12903] = 1,
    ACTIONS(1375), 1,
      anon_sym_RPAREN,
  [12907] = 1,
    ACTIONS(1377), 1,
      anon_sym_RPAREN,
  [12911] = 1,
    ACTIONS(1379), 1,
      anon_sym_RPAREN,
  [12915] = 1,
    ACTIONS(1381), 1,
      anon_sym_RPAREN,
  [12919] = 1,
    ACTIONS(1383), 1,
      aux_sym_ignore_nulls__token2,
  [12923] = 1,
    ACTIONS(1385), 1,
      anon_sym_LPAREN,
  [12927] = 1,
    ACTIONS(1387), 1,
      anon_sym_LPAREN,
  [12931] = 1,
    ACTIONS(1389), 1,
      anon_sym_LPAREN,
  [12935] = 1,
    ACTIONS(1391), 1,
      anon_sym_LPAREN,
  [12939] = 1,
    ACTIONS(1393), 1,
      aux_sym_RESULT_SETS_token2,
  [12943] = 1,
    ACTIONS(1395), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [12947] = 1,
    ACTIONS(1397), 1,
      anon_sym_RPAREN,
  [12951] = 1,
    ACTIONS(1399), 1,
      anon_sym_RPAREN,
  [12955] = 1,
    ACTIONS(1401), 1,
      aux_sym_within_group__token2,
  [12959] = 1,
    ACTIONS(1403), 1,
      ts_builtin_sym_end,
  [12963] = 1,
    ACTIONS(1405), 1,
      anon_sym_LPAREN,
  [12967] = 1,
    ACTIONS(1407), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 140,
  [SMALL_STATE(4)] = 277,
  [SMALL_STATE(5)] = 407,
  [SMALL_STATE(6)] = 537,
  [SMALL_STATE(7)] = 667,
  [SMALL_STATE(8)] = 794,
  [SMALL_STATE(9)] = 921,
  [SMALL_STATE(10)] = 1048,
  [SMALL_STATE(11)] = 1175,
  [SMALL_STATE(12)] = 1302,
  [SMALL_STATE(13)] = 1429,
  [SMALL_STATE(14)] = 1555,
  [SMALL_STATE(15)] = 1681,
  [SMALL_STATE(16)] = 1807,
  [SMALL_STATE(17)] = 1933,
  [SMALL_STATE(18)] = 2059,
  [SMALL_STATE(19)] = 2185,
  [SMALL_STATE(20)] = 2308,
  [SMALL_STATE(21)] = 2431,
  [SMALL_STATE(22)] = 2554,
  [SMALL_STATE(23)] = 2677,
  [SMALL_STATE(24)] = 2797,
  [SMALL_STATE(25)] = 2917,
  [SMALL_STATE(26)] = 3037,
  [SMALL_STATE(27)] = 3157,
  [SMALL_STATE(28)] = 3277,
  [SMALL_STATE(29)] = 3397,
  [SMALL_STATE(30)] = 3517,
  [SMALL_STATE(31)] = 3637,
  [SMALL_STATE(32)] = 3757,
  [SMALL_STATE(33)] = 3877,
  [SMALL_STATE(34)] = 3997,
  [SMALL_STATE(35)] = 4117,
  [SMALL_STATE(36)] = 4237,
  [SMALL_STATE(37)] = 4357,
  [SMALL_STATE(38)] = 4477,
  [SMALL_STATE(39)] = 4597,
  [SMALL_STATE(40)] = 4717,
  [SMALL_STATE(41)] = 4761,
  [SMALL_STATE(42)] = 4831,
  [SMALL_STATE(43)] = 4901,
  [SMALL_STATE(44)] = 4953,
  [SMALL_STATE(45)] = 5005,
  [SMALL_STATE(46)] = 5038,
  [SMALL_STATE(47)] = 5064,
  [SMALL_STATE(48)] = 5118,
  [SMALL_STATE(49)] = 5169,
  [SMALL_STATE(50)] = 5211,
  [SMALL_STATE(51)] = 5235,
  [SMALL_STATE(52)] = 5280,
  [SMALL_STATE(53)] = 5325,
  [SMALL_STATE(54)] = 5350,
  [SMALL_STATE(55)] = 5375,
  [SMALL_STATE(56)] = 5398,
  [SMALL_STATE(57)] = 5420,
  [SMALL_STATE(58)] = 5456,
  [SMALL_STATE(59)] = 5502,
  [SMALL_STATE(60)] = 5548,
  [SMALL_STATE(61)] = 5590,
  [SMALL_STATE(62)] = 5616,
  [SMALL_STATE(63)] = 5638,
  [SMALL_STATE(64)] = 5677,
  [SMALL_STATE(65)] = 5697,
  [SMALL_STATE(66)] = 5717,
  [SMALL_STATE(67)] = 5737,
  [SMALL_STATE(68)] = 5781,
  [SMALL_STATE(69)] = 5801,
  [SMALL_STATE(70)] = 5821,
  [SMALL_STATE(71)] = 5849,
  [SMALL_STATE(72)] = 5871,
  [SMALL_STATE(73)] = 5891,
  [SMALL_STATE(74)] = 5933,
  [SMALL_STATE(75)] = 5953,
  [SMALL_STATE(76)] = 5975,
  [SMALL_STATE(77)] = 5995,
  [SMALL_STATE(78)] = 6013,
  [SMALL_STATE(79)] = 6035,
  [SMALL_STATE(80)] = 6055,
  [SMALL_STATE(81)] = 6077,
  [SMALL_STATE(82)] = 6101,
  [SMALL_STATE(83)] = 6123,
  [SMALL_STATE(84)] = 6143,
  [SMALL_STATE(85)] = 6171,
  [SMALL_STATE(86)] = 6191,
  [SMALL_STATE(87)] = 6211,
  [SMALL_STATE(88)] = 6231,
  [SMALL_STATE(89)] = 6253,
  [SMALL_STATE(90)] = 6271,
  [SMALL_STATE(91)] = 6295,
  [SMALL_STATE(92)] = 6316,
  [SMALL_STATE(93)] = 6337,
  [SMALL_STATE(94)] = 6358,
  [SMALL_STATE(95)] = 6379,
  [SMALL_STATE(96)] = 6400,
  [SMALL_STATE(97)] = 6421,
  [SMALL_STATE(98)] = 6440,
  [SMALL_STATE(99)] = 6461,
  [SMALL_STATE(100)] = 6478,
  [SMALL_STATE(101)] = 6515,
  [SMALL_STATE(102)] = 6534,
  [SMALL_STATE(103)] = 6571,
  [SMALL_STATE(104)] = 6592,
  [SMALL_STATE(105)] = 6612,
  [SMALL_STATE(106)] = 6632,
  [SMALL_STATE(107)] = 6650,
  [SMALL_STATE(108)] = 6668,
  [SMALL_STATE(109)] = 6686,
  [SMALL_STATE(110)] = 6704,
  [SMALL_STATE(111)] = 6722,
  [SMALL_STATE(112)] = 6740,
  [SMALL_STATE(113)] = 6758,
  [SMALL_STATE(114)] = 6776,
  [SMALL_STATE(115)] = 6794,
  [SMALL_STATE(116)] = 6812,
  [SMALL_STATE(117)] = 6830,
  [SMALL_STATE(118)] = 6848,
  [SMALL_STATE(119)] = 6866,
  [SMALL_STATE(120)] = 6884,
  [SMALL_STATE(121)] = 6902,
  [SMALL_STATE(122)] = 6920,
  [SMALL_STATE(123)] = 6938,
  [SMALL_STATE(124)] = 6956,
  [SMALL_STATE(125)] = 6974,
  [SMALL_STATE(126)] = 6992,
  [SMALL_STATE(127)] = 7012,
  [SMALL_STATE(128)] = 7030,
  [SMALL_STATE(129)] = 7048,
  [SMALL_STATE(130)] = 7066,
  [SMALL_STATE(131)] = 7084,
  [SMALL_STATE(132)] = 7102,
  [SMALL_STATE(133)] = 7120,
  [SMALL_STATE(134)] = 7138,
  [SMALL_STATE(135)] = 7156,
  [SMALL_STATE(136)] = 7174,
  [SMALL_STATE(137)] = 7212,
  [SMALL_STATE(138)] = 7232,
  [SMALL_STATE(139)] = 7250,
  [SMALL_STATE(140)] = 7270,
  [SMALL_STATE(141)] = 7288,
  [SMALL_STATE(142)] = 7306,
  [SMALL_STATE(143)] = 7324,
  [SMALL_STATE(144)] = 7344,
  [SMALL_STATE(145)] = 7362,
  [SMALL_STATE(146)] = 7380,
  [SMALL_STATE(147)] = 7398,
  [SMALL_STATE(148)] = 7434,
  [SMALL_STATE(149)] = 7452,
  [SMALL_STATE(150)] = 7472,
  [SMALL_STATE(151)] = 7489,
  [SMALL_STATE(152)] = 7506,
  [SMALL_STATE(153)] = 7523,
  [SMALL_STATE(154)] = 7540,
  [SMALL_STATE(155)] = 7561,
  [SMALL_STATE(156)] = 7582,
  [SMALL_STATE(157)] = 7599,
  [SMALL_STATE(158)] = 7620,
  [SMALL_STATE(159)] = 7637,
  [SMALL_STATE(160)] = 7654,
  [SMALL_STATE(161)] = 7671,
  [SMALL_STATE(162)] = 7690,
  [SMALL_STATE(163)] = 7707,
  [SMALL_STATE(164)] = 7724,
  [SMALL_STATE(165)] = 7741,
  [SMALL_STATE(166)] = 7758,
  [SMALL_STATE(167)] = 7778,
  [SMALL_STATE(168)] = 7796,
  [SMALL_STATE(169)] = 7816,
  [SMALL_STATE(170)] = 7836,
  [SMALL_STATE(171)] = 7856,
  [SMALL_STATE(172)] = 7876,
  [SMALL_STATE(173)] = 7898,
  [SMALL_STATE(174)] = 7918,
  [SMALL_STATE(175)] = 7940,
  [SMALL_STATE(176)] = 7958,
  [SMALL_STATE(177)] = 7976,
  [SMALL_STATE(178)] = 7996,
  [SMALL_STATE(179)] = 8012,
  [SMALL_STATE(180)] = 8028,
  [SMALL_STATE(181)] = 8046,
  [SMALL_STATE(182)] = 8062,
  [SMALL_STATE(183)] = 8080,
  [SMALL_STATE(184)] = 8100,
  [SMALL_STATE(185)] = 8118,
  [SMALL_STATE(186)] = 8138,
  [SMALL_STATE(187)] = 8156,
  [SMALL_STATE(188)] = 8171,
  [SMALL_STATE(189)] = 8186,
  [SMALL_STATE(190)] = 8201,
  [SMALL_STATE(191)] = 8216,
  [SMALL_STATE(192)] = 8231,
  [SMALL_STATE(193)] = 8246,
  [SMALL_STATE(194)] = 8261,
  [SMALL_STATE(195)] = 8276,
  [SMALL_STATE(196)] = 8293,
  [SMALL_STATE(197)] = 8308,
  [SMALL_STATE(198)] = 8323,
  [SMALL_STATE(199)] = 8338,
  [SMALL_STATE(200)] = 8353,
  [SMALL_STATE(201)] = 8368,
  [SMALL_STATE(202)] = 8383,
  [SMALL_STATE(203)] = 8398,
  [SMALL_STATE(204)] = 8413,
  [SMALL_STATE(205)] = 8428,
  [SMALL_STATE(206)] = 8443,
  [SMALL_STATE(207)] = 8462,
  [SMALL_STATE(208)] = 8477,
  [SMALL_STATE(209)] = 8496,
  [SMALL_STATE(210)] = 8511,
  [SMALL_STATE(211)] = 8530,
  [SMALL_STATE(212)] = 8545,
  [SMALL_STATE(213)] = 8560,
  [SMALL_STATE(214)] = 8575,
  [SMALL_STATE(215)] = 8590,
  [SMALL_STATE(216)] = 8605,
  [SMALL_STATE(217)] = 8620,
  [SMALL_STATE(218)] = 8635,
  [SMALL_STATE(219)] = 8650,
  [SMALL_STATE(220)] = 8665,
  [SMALL_STATE(221)] = 8680,
  [SMALL_STATE(222)] = 8695,
  [SMALL_STATE(223)] = 8710,
  [SMALL_STATE(224)] = 8725,
  [SMALL_STATE(225)] = 8740,
  [SMALL_STATE(226)] = 8759,
  [SMALL_STATE(227)] = 8774,
  [SMALL_STATE(228)] = 8789,
  [SMALL_STATE(229)] = 8804,
  [SMALL_STATE(230)] = 8823,
  [SMALL_STATE(231)] = 8842,
  [SMALL_STATE(232)] = 8861,
  [SMALL_STATE(233)] = 8876,
  [SMALL_STATE(234)] = 8891,
  [SMALL_STATE(235)] = 8906,
  [SMALL_STATE(236)] = 8921,
  [SMALL_STATE(237)] = 8936,
  [SMALL_STATE(238)] = 8955,
  [SMALL_STATE(239)] = 8974,
  [SMALL_STATE(240)] = 8989,
  [SMALL_STATE(241)] = 9004,
  [SMALL_STATE(242)] = 9019,
  [SMALL_STATE(243)] = 9036,
  [SMALL_STATE(244)] = 9051,
  [SMALL_STATE(245)] = 9066,
  [SMALL_STATE(246)] = 9083,
  [SMALL_STATE(247)] = 9099,
  [SMALL_STATE(248)] = 9113,
  [SMALL_STATE(249)] = 9127,
  [SMALL_STATE(250)] = 9155,
  [SMALL_STATE(251)] = 9175,
  [SMALL_STATE(252)] = 9189,
  [SMALL_STATE(253)] = 9205,
  [SMALL_STATE(254)] = 9223,
  [SMALL_STATE(255)] = 9241,
  [SMALL_STATE(256)] = 9257,
  [SMALL_STATE(257)] = 9275,
  [SMALL_STATE(258)] = 9293,
  [SMALL_STATE(259)] = 9311,
  [SMALL_STATE(260)] = 9327,
  [SMALL_STATE(261)] = 9343,
  [SMALL_STATE(262)] = 9359,
  [SMALL_STATE(263)] = 9373,
  [SMALL_STATE(264)] = 9387,
  [SMALL_STATE(265)] = 9398,
  [SMALL_STATE(266)] = 9409,
  [SMALL_STATE(267)] = 9420,
  [SMALL_STATE(268)] = 9431,
  [SMALL_STATE(269)] = 9442,
  [SMALL_STATE(270)] = 9457,
  [SMALL_STATE(271)] = 9470,
  [SMALL_STATE(272)] = 9483,
  [SMALL_STATE(273)] = 9496,
  [SMALL_STATE(274)] = 9507,
  [SMALL_STATE(275)] = 9522,
  [SMALL_STATE(276)] = 9535,
  [SMALL_STATE(277)] = 9546,
  [SMALL_STATE(278)] = 9559,
  [SMALL_STATE(279)] = 9572,
  [SMALL_STATE(280)] = 9583,
  [SMALL_STATE(281)] = 9594,
  [SMALL_STATE(282)] = 9605,
  [SMALL_STATE(283)] = 9618,
  [SMALL_STATE(284)] = 9629,
  [SMALL_STATE(285)] = 9640,
  [SMALL_STATE(286)] = 9651,
  [SMALL_STATE(287)] = 9662,
  [SMALL_STATE(288)] = 9675,
  [SMALL_STATE(289)] = 9686,
  [SMALL_STATE(290)] = 9699,
  [SMALL_STATE(291)] = 9712,
  [SMALL_STATE(292)] = 9727,
  [SMALL_STATE(293)] = 9738,
  [SMALL_STATE(294)] = 9751,
  [SMALL_STATE(295)] = 9774,
  [SMALL_STATE(296)] = 9787,
  [SMALL_STATE(297)] = 9800,
  [SMALL_STATE(298)] = 9815,
  [SMALL_STATE(299)] = 9828,
  [SMALL_STATE(300)] = 9839,
  [SMALL_STATE(301)] = 9852,
  [SMALL_STATE(302)] = 9865,
  [SMALL_STATE(303)] = 9876,
  [SMALL_STATE(304)] = 9889,
  [SMALL_STATE(305)] = 9902,
  [SMALL_STATE(306)] = 9913,
  [SMALL_STATE(307)] = 9924,
  [SMALL_STATE(308)] = 9947,
  [SMALL_STATE(309)] = 9958,
  [SMALL_STATE(310)] = 9969,
  [SMALL_STATE(311)] = 9980,
  [SMALL_STATE(312)] = 10003,
  [SMALL_STATE(313)] = 10014,
  [SMALL_STATE(314)] = 10025,
  [SMALL_STATE(315)] = 10044,
  [SMALL_STATE(316)] = 10055,
  [SMALL_STATE(317)] = 10071,
  [SMALL_STATE(318)] = 10085,
  [SMALL_STATE(319)] = 10097,
  [SMALL_STATE(320)] = 10111,
  [SMALL_STATE(321)] = 10123,
  [SMALL_STATE(322)] = 10135,
  [SMALL_STATE(323)] = 10147,
  [SMALL_STATE(324)] = 10163,
  [SMALL_STATE(325)] = 10185,
  [SMALL_STATE(326)] = 10197,
  [SMALL_STATE(327)] = 10209,
  [SMALL_STATE(328)] = 10221,
  [SMALL_STATE(329)] = 10233,
  [SMALL_STATE(330)] = 10252,
  [SMALL_STATE(331)] = 10271,
  [SMALL_STATE(332)] = 10288,
  [SMALL_STATE(333)] = 10297,
  [SMALL_STATE(334)] = 10312,
  [SMALL_STATE(335)] = 10329,
  [SMALL_STATE(336)] = 10348,
  [SMALL_STATE(337)] = 10367,
  [SMALL_STATE(338)] = 10386,
  [SMALL_STATE(339)] = 10401,
  [SMALL_STATE(340)] = 10420,
  [SMALL_STATE(341)] = 10439,
  [SMALL_STATE(342)] = 10458,
  [SMALL_STATE(343)] = 10477,
  [SMALL_STATE(344)] = 10496,
  [SMALL_STATE(345)] = 10509,
  [SMALL_STATE(346)] = 10528,
  [SMALL_STATE(347)] = 10543,
  [SMALL_STATE(348)] = 10562,
  [SMALL_STATE(349)] = 10579,
  [SMALL_STATE(350)] = 10598,
  [SMALL_STATE(351)] = 10607,
  [SMALL_STATE(352)] = 10616,
  [SMALL_STATE(353)] = 10633,
  [SMALL_STATE(354)] = 10642,
  [SMALL_STATE(355)] = 10655,
  [SMALL_STATE(356)] = 10668,
  [SMALL_STATE(357)] = 10687,
  [SMALL_STATE(358)] = 10702,
  [SMALL_STATE(359)] = 10721,
  [SMALL_STATE(360)] = 10738,
  [SMALL_STATE(361)] = 10747,
  [SMALL_STATE(362)] = 10764,
  [SMALL_STATE(363)] = 10783,
  [SMALL_STATE(364)] = 10792,
  [SMALL_STATE(365)] = 10807,
  [SMALL_STATE(366)] = 10826,
  [SMALL_STATE(367)] = 10845,
  [SMALL_STATE(368)] = 10864,
  [SMALL_STATE(369)] = 10873,
  [SMALL_STATE(370)] = 10886,
  [SMALL_STATE(371)] = 10905,
  [SMALL_STATE(372)] = 10914,
  [SMALL_STATE(373)] = 10931,
  [SMALL_STATE(374)] = 10940,
  [SMALL_STATE(375)] = 10959,
  [SMALL_STATE(376)] = 10975,
  [SMALL_STATE(377)] = 10991,
  [SMALL_STATE(378)] = 11007,
  [SMALL_STATE(379)] = 11023,
  [SMALL_STATE(380)] = 11039,
  [SMALL_STATE(381)] = 11055,
  [SMALL_STATE(382)] = 11071,
  [SMALL_STATE(383)] = 11087,
  [SMALL_STATE(384)] = 11103,
  [SMALL_STATE(385)] = 11119,
  [SMALL_STATE(386)] = 11131,
  [SMALL_STATE(387)] = 11147,
  [SMALL_STATE(388)] = 11163,
  [SMALL_STATE(389)] = 11179,
  [SMALL_STATE(390)] = 11195,
  [SMALL_STATE(391)] = 11211,
  [SMALL_STATE(392)] = 11227,
  [SMALL_STATE(393)] = 11243,
  [SMALL_STATE(394)] = 11259,
  [SMALL_STATE(395)] = 11275,
  [SMALL_STATE(396)] = 11291,
  [SMALL_STATE(397)] = 11307,
  [SMALL_STATE(398)] = 11319,
  [SMALL_STATE(399)] = 11335,
  [SMALL_STATE(400)] = 11351,
  [SMALL_STATE(401)] = 11367,
  [SMALL_STATE(402)] = 11383,
  [SMALL_STATE(403)] = 11391,
  [SMALL_STATE(404)] = 11407,
  [SMALL_STATE(405)] = 11423,
  [SMALL_STATE(406)] = 11439,
  [SMALL_STATE(407)] = 11455,
  [SMALL_STATE(408)] = 11467,
  [SMALL_STATE(409)] = 11483,
  [SMALL_STATE(410)] = 11499,
  [SMALL_STATE(411)] = 11515,
  [SMALL_STATE(412)] = 11531,
  [SMALL_STATE(413)] = 11547,
  [SMALL_STATE(414)] = 11563,
  [SMALL_STATE(415)] = 11579,
  [SMALL_STATE(416)] = 11595,
  [SMALL_STATE(417)] = 11608,
  [SMALL_STATE(418)] = 11615,
  [SMALL_STATE(419)] = 11626,
  [SMALL_STATE(420)] = 11637,
  [SMALL_STATE(421)] = 11650,
  [SMALL_STATE(422)] = 11659,
  [SMALL_STATE(423)] = 11670,
  [SMALL_STATE(424)] = 11677,
  [SMALL_STATE(425)] = 11684,
  [SMALL_STATE(426)] = 11695,
  [SMALL_STATE(427)] = 11706,
  [SMALL_STATE(428)] = 11719,
  [SMALL_STATE(429)] = 11732,
  [SMALL_STATE(430)] = 11739,
  [SMALL_STATE(431)] = 11752,
  [SMALL_STATE(432)] = 11765,
  [SMALL_STATE(433)] = 11772,
  [SMALL_STATE(434)] = 11779,
  [SMALL_STATE(435)] = 11792,
  [SMALL_STATE(436)] = 11805,
  [SMALL_STATE(437)] = 11812,
  [SMALL_STATE(438)] = 11825,
  [SMALL_STATE(439)] = 11838,
  [SMALL_STATE(440)] = 11849,
  [SMALL_STATE(441)] = 11856,
  [SMALL_STATE(442)] = 11867,
  [SMALL_STATE(443)] = 11878,
  [SMALL_STATE(444)] = 11889,
  [SMALL_STATE(445)] = 11902,
  [SMALL_STATE(446)] = 11915,
  [SMALL_STATE(447)] = 11926,
  [SMALL_STATE(448)] = 11937,
  [SMALL_STATE(449)] = 11948,
  [SMALL_STATE(450)] = 11955,
  [SMALL_STATE(451)] = 11965,
  [SMALL_STATE(452)] = 11975,
  [SMALL_STATE(453)] = 11983,
  [SMALL_STATE(454)] = 11993,
  [SMALL_STATE(455)] = 11999,
  [SMALL_STATE(456)] = 12007,
  [SMALL_STATE(457)] = 12017,
  [SMALL_STATE(458)] = 12023,
  [SMALL_STATE(459)] = 12033,
  [SMALL_STATE(460)] = 12041,
  [SMALL_STATE(461)] = 12051,
  [SMALL_STATE(462)] = 12061,
  [SMALL_STATE(463)] = 12067,
  [SMALL_STATE(464)] = 12077,
  [SMALL_STATE(465)] = 12087,
  [SMALL_STATE(466)] = 12097,
  [SMALL_STATE(467)] = 12107,
  [SMALL_STATE(468)] = 12117,
  [SMALL_STATE(469)] = 12124,
  [SMALL_STATE(470)] = 12131,
  [SMALL_STATE(471)] = 12138,
  [SMALL_STATE(472)] = 12145,
  [SMALL_STATE(473)] = 12152,
  [SMALL_STATE(474)] = 12159,
  [SMALL_STATE(475)] = 12166,
  [SMALL_STATE(476)] = 12173,
  [SMALL_STATE(477)] = 12180,
  [SMALL_STATE(478)] = 12187,
  [SMALL_STATE(479)] = 12194,
  [SMALL_STATE(480)] = 12201,
  [SMALL_STATE(481)] = 12208,
  [SMALL_STATE(482)] = 12215,
  [SMALL_STATE(483)] = 12222,
  [SMALL_STATE(484)] = 12229,
  [SMALL_STATE(485)] = 12234,
  [SMALL_STATE(486)] = 12239,
  [SMALL_STATE(487)] = 12244,
  [SMALL_STATE(488)] = 12249,
  [SMALL_STATE(489)] = 12256,
  [SMALL_STATE(490)] = 12263,
  [SMALL_STATE(491)] = 12268,
  [SMALL_STATE(492)] = 12275,
  [SMALL_STATE(493)] = 12282,
  [SMALL_STATE(494)] = 12287,
  [SMALL_STATE(495)] = 12292,
  [SMALL_STATE(496)] = 12299,
  [SMALL_STATE(497)] = 12306,
  [SMALL_STATE(498)] = 12313,
  [SMALL_STATE(499)] = 12320,
  [SMALL_STATE(500)] = 12325,
  [SMALL_STATE(501)] = 12332,
  [SMALL_STATE(502)] = 12339,
  [SMALL_STATE(503)] = 12344,
  [SMALL_STATE(504)] = 12351,
  [SMALL_STATE(505)] = 12358,
  [SMALL_STATE(506)] = 12365,
  [SMALL_STATE(507)] = 12370,
  [SMALL_STATE(508)] = 12375,
  [SMALL_STATE(509)] = 12382,
  [SMALL_STATE(510)] = 12389,
  [SMALL_STATE(511)] = 12396,
  [SMALL_STATE(512)] = 12403,
  [SMALL_STATE(513)] = 12410,
  [SMALL_STATE(514)] = 12417,
  [SMALL_STATE(515)] = 12424,
  [SMALL_STATE(516)] = 12431,
  [SMALL_STATE(517)] = 12435,
  [SMALL_STATE(518)] = 12439,
  [SMALL_STATE(519)] = 12443,
  [SMALL_STATE(520)] = 12447,
  [SMALL_STATE(521)] = 12451,
  [SMALL_STATE(522)] = 12455,
  [SMALL_STATE(523)] = 12459,
  [SMALL_STATE(524)] = 12463,
  [SMALL_STATE(525)] = 12467,
  [SMALL_STATE(526)] = 12471,
  [SMALL_STATE(527)] = 12475,
  [SMALL_STATE(528)] = 12479,
  [SMALL_STATE(529)] = 12483,
  [SMALL_STATE(530)] = 12487,
  [SMALL_STATE(531)] = 12491,
  [SMALL_STATE(532)] = 12495,
  [SMALL_STATE(533)] = 12499,
  [SMALL_STATE(534)] = 12503,
  [SMALL_STATE(535)] = 12507,
  [SMALL_STATE(536)] = 12511,
  [SMALL_STATE(537)] = 12515,
  [SMALL_STATE(538)] = 12519,
  [SMALL_STATE(539)] = 12523,
  [SMALL_STATE(540)] = 12527,
  [SMALL_STATE(541)] = 12531,
  [SMALL_STATE(542)] = 12535,
  [SMALL_STATE(543)] = 12539,
  [SMALL_STATE(544)] = 12543,
  [SMALL_STATE(545)] = 12547,
  [SMALL_STATE(546)] = 12551,
  [SMALL_STATE(547)] = 12555,
  [SMALL_STATE(548)] = 12559,
  [SMALL_STATE(549)] = 12563,
  [SMALL_STATE(550)] = 12567,
  [SMALL_STATE(551)] = 12571,
  [SMALL_STATE(552)] = 12575,
  [SMALL_STATE(553)] = 12579,
  [SMALL_STATE(554)] = 12583,
  [SMALL_STATE(555)] = 12587,
  [SMALL_STATE(556)] = 12591,
  [SMALL_STATE(557)] = 12595,
  [SMALL_STATE(558)] = 12599,
  [SMALL_STATE(559)] = 12603,
  [SMALL_STATE(560)] = 12607,
  [SMALL_STATE(561)] = 12611,
  [SMALL_STATE(562)] = 12615,
  [SMALL_STATE(563)] = 12619,
  [SMALL_STATE(564)] = 12623,
  [SMALL_STATE(565)] = 12627,
  [SMALL_STATE(566)] = 12631,
  [SMALL_STATE(567)] = 12635,
  [SMALL_STATE(568)] = 12639,
  [SMALL_STATE(569)] = 12643,
  [SMALL_STATE(570)] = 12647,
  [SMALL_STATE(571)] = 12651,
  [SMALL_STATE(572)] = 12655,
  [SMALL_STATE(573)] = 12659,
  [SMALL_STATE(574)] = 12663,
  [SMALL_STATE(575)] = 12667,
  [SMALL_STATE(576)] = 12671,
  [SMALL_STATE(577)] = 12675,
  [SMALL_STATE(578)] = 12679,
  [SMALL_STATE(579)] = 12683,
  [SMALL_STATE(580)] = 12687,
  [SMALL_STATE(581)] = 12691,
  [SMALL_STATE(582)] = 12695,
  [SMALL_STATE(583)] = 12699,
  [SMALL_STATE(584)] = 12703,
  [SMALL_STATE(585)] = 12707,
  [SMALL_STATE(586)] = 12711,
  [SMALL_STATE(587)] = 12715,
  [SMALL_STATE(588)] = 12719,
  [SMALL_STATE(589)] = 12723,
  [SMALL_STATE(590)] = 12727,
  [SMALL_STATE(591)] = 12731,
  [SMALL_STATE(592)] = 12735,
  [SMALL_STATE(593)] = 12739,
  [SMALL_STATE(594)] = 12743,
  [SMALL_STATE(595)] = 12747,
  [SMALL_STATE(596)] = 12751,
  [SMALL_STATE(597)] = 12755,
  [SMALL_STATE(598)] = 12759,
  [SMALL_STATE(599)] = 12763,
  [SMALL_STATE(600)] = 12767,
  [SMALL_STATE(601)] = 12771,
  [SMALL_STATE(602)] = 12775,
  [SMALL_STATE(603)] = 12779,
  [SMALL_STATE(604)] = 12783,
  [SMALL_STATE(605)] = 12787,
  [SMALL_STATE(606)] = 12791,
  [SMALL_STATE(607)] = 12795,
  [SMALL_STATE(608)] = 12799,
  [SMALL_STATE(609)] = 12803,
  [SMALL_STATE(610)] = 12807,
  [SMALL_STATE(611)] = 12811,
  [SMALL_STATE(612)] = 12815,
  [SMALL_STATE(613)] = 12819,
  [SMALL_STATE(614)] = 12823,
  [SMALL_STATE(615)] = 12827,
  [SMALL_STATE(616)] = 12831,
  [SMALL_STATE(617)] = 12835,
  [SMALL_STATE(618)] = 12839,
  [SMALL_STATE(619)] = 12843,
  [SMALL_STATE(620)] = 12847,
  [SMALL_STATE(621)] = 12851,
  [SMALL_STATE(622)] = 12855,
  [SMALL_STATE(623)] = 12859,
  [SMALL_STATE(624)] = 12863,
  [SMALL_STATE(625)] = 12867,
  [SMALL_STATE(626)] = 12871,
  [SMALL_STATE(627)] = 12875,
  [SMALL_STATE(628)] = 12879,
  [SMALL_STATE(629)] = 12883,
  [SMALL_STATE(630)] = 12887,
  [SMALL_STATE(631)] = 12891,
  [SMALL_STATE(632)] = 12895,
  [SMALL_STATE(633)] = 12899,
  [SMALL_STATE(634)] = 12903,
  [SMALL_STATE(635)] = 12907,
  [SMALL_STATE(636)] = 12911,
  [SMALL_STATE(637)] = 12915,
  [SMALL_STATE(638)] = 12919,
  [SMALL_STATE(639)] = 12923,
  [SMALL_STATE(640)] = 12927,
  [SMALL_STATE(641)] = 12931,
  [SMALL_STATE(642)] = 12935,
  [SMALL_STATE(643)] = 12939,
  [SMALL_STATE(644)] = 12943,
  [SMALL_STATE(645)] = 12947,
  [SMALL_STATE(646)] = 12951,
  [SMALL_STATE(647)] = 12955,
  [SMALL_STATE(648)] = 12959,
  [SMALL_STATE(649)] = 12963,
  [SMALL_STATE(650)] = 12967,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsql_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(562),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(633),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(618),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(650),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(641),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(631),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(619),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(620),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(621),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(632),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(622),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(649),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(639),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(627),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(610),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(611),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(612),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(628),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(613),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_operator, 1, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_operator, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(366),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsql_file, 1, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 3, 0, 10),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 3, 0, 10),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 1, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_expression, 1, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_expression, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_LOCAL_ID_, 1, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_LOCAL_ID_, 1, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body_batch, 1, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body_batch, 1, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udt_elem, 3, 0, 13),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_udt_elem, 3, 0, 13),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_batch, 1, 0, 0),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 1, 0, 0), SHIFT(258),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 1, 0, 0), SHIFT(67),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 1, 0, 0), SHIFT(2),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_batch, 1, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_batch, 2, 0, 0),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 2, 0, 0), SHIFT(258),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 2, 0, 0), SHIFT(67),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 2, 0, 0), SHIFT(2),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_batch, 2, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_var_string, 3, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_var_string, 3, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_var_string, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_var_string, 1, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_, 1, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_, 1, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udt_elem, 4, 0, 13),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_udt_elem, 4, 0, 13),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_elem, 1, 0, 3),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_elem, 1, 0, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_var_string, 5, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_var_string, 5, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_batch_repeat1, 2, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_batch_repeat1, 2, 0, 0),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_batch_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_batch_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 22),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 22),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 25),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 25),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 1, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 1, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 1, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_database_schema, 1, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_column_name, 1, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_column_name, 1, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_alias, 1, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_schema, 1, 0, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_schema, 1, 0, 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 3, 0, 5),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_database_schema, 3, 0, 5),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 7, 0, 29),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 7, 0, 29),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_schema, 3, 0, 7),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_schema, 3, 0, 7),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 4, 0, 8),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 4, 0, 8),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 4, 0, 9),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_database_schema, 4, 0, 9),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 18),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 18),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(626),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 4, 0, 15),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_database_schema, 4, 0, 15),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 16),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 16),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_go_statement, 1, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_go_statement, 1, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 17),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 17),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 26),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 26),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 20),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 20),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 5, 0, 21),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_database_schema, 5, 0, 21),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 19),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 19),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_, 1, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_, 1, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_, 1, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_, 1, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_constant, 1, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_constant, 1, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_money_, 2, 0, 6),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_money_, 2, 0, 6),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranking_windowed_function, 5, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ranking_windowed_function, 5, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_over_clause, 3, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_over_clause, 3, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 7, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 7, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_over_clause, 5, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_over_clause, 5, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranking_windowed_function, 4, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ranking_windowed_function, 4, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_windowed_function, 5, 0, 19),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_windowed_function, 5, 0, 19),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 8, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 8, 0, 0),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 4, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 4, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real_, 4, 0, 0),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real_, 4, 0, 0),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_over_clause, 6, 0, 0),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_over_clause, 6, 0, 0),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 5, 0, 0),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 5, 0, 0),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 11, 0, 0),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 11, 0, 0),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 12, 0, 0),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 12, 0, 0),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_windowed_function, 5, 0, 18),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_windowed_function, 5, 0, 18),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_over_clause, 4, 0, 0),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_over_clause, 4, 0, 0),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 0),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 0),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_money_, 3, 0, 6),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_money_, 3, 0, 6),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real_, 3, 0, 0),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real_, 3, 0, 0),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 3, 0, 0),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 3, 0, 0),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(590),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udt_method_arguments, 4, 0, 0),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_udt_method_arguments, 4, 0, 0),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udt_method_arguments, 3, 0, 0),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_udt_method_arguments, 3, 0, 0),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_list_repeat1, 2, 0, 0),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_select_list_repeat1, 2, 0, 0),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_list_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_parameter, 1, 0, 0),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_parameter, 1, 0, 0),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_statement_arg, 1, 0, 0),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_statement_arg, 1, 0, 0),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_statement_arg_repeat1, 2, 0, 0),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_execute_statement_arg_repeat1, 2, 0, 0),
  [618] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_statement_arg_repeat1, 2, 0, 0), SHIFT_REPEAT(513),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list, 1, 0, 0),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_list, 1, 0, 0),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 3, 0, 0),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 3, 0, 0),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_statement_arg, 2, 0, 0),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_statement_arg, 2, 0, 0),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 4, 0, 0),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 4, 0, 0),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list, 2, 0, 0),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_list, 2, 0, 0),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_body_batch_repeat1, 2, 0, 0),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_execute_body_batch_repeat1, 2, 0, 0),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_body_batch_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_statement_arg_named, 3, 0, 14),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_statement_arg_named, 3, 0, 14),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_statement_arg_unnamed, 1, 0, 4),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_statement_arg_unnamed, 1, 0, 4),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list_elem, 3, 0, 0),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_list_elem, 3, 0, 0),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1, 0, 0),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1, 0, 0),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list_elem, 1, 0, 0),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_list_elem, 1, 0, 0),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_parameter, 2, 0, 0),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_parameter, 2, 0, 0),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_elem, 3, 0, 12),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_elem, 3, 0, 12),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_column_alias, 2, 0, 0),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as_column_alias, 2, 0, 0),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2, 0, 0),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 2, 0, 0),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udt_elem, 5, 0, 13),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_udt_elem, 5, 0, 13),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 6, 0, 10),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 6, 0, 10),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 5, 0, 10),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 5, 0, 10),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 5, 0, 0),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 5, 0, 0),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_column_alias, 1, 0, 0),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as_column_alias, 1, 0, 0),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_elem, 2, 0, 3),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_elem, 2, 0, 3),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 7, 0, 10),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 7, 0, 10),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_body_repeat1, 2, 0, 0),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_execute_body_repeat1, 2, 0, 0),
  [730] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_body_repeat1, 2, 0, 0), SHIFT_REPEAT(416),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_alias, 1, 0, 0),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 2, 0, 0),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 2, 0, 0),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat2, 1, 0, 0), REDUCE(sym_batch, 2, 0, 0),
  [754] = {.entry = {.count = 3, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat2, 1, 0, 0), REDUCE(sym_batch, 2, 0, 0), SHIFT(258),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 7, 0, 0),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 7, 0, 0),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat2, 2, 0, 0),
  [766] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat2, 2, 0, 0), SHIFT_REPEAT(258),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat2, 2, 0, 0),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_batch, 3, 0, 0),
  [773] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 3, 0, 0), SHIFT(258),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_batch, 3, 0, 0),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 8, 0, 0),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 8, 0, 0),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_specification, 2, 0, 0),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_specification, 2, 0, 0),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 4, 0, 10),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 4, 0, 10),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_option, 2, 0, 0),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_option, 2, 0, 0),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_option, 1, 0, 0),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_option, 1, 0, 0),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_clauses, 1, 0, 0),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_clauses, 1, 0, 0),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_another_statement, 1, 0, 0),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_another_statement, 1, 0, 0),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_clause, 1, 0, 0),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dml_clause, 1, 0, 0),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement_standalone, 1, 0, 0),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement_standalone, 1, 0, 0),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_table_name, 3, 0, 24),
  [824] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_table_name, 3, 0, 24),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1, 0, 0),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 1, 0, 0),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_expression, 1, 0, 0),
  [834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_expression, 1, 0, 0),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_source_item, 1, 0, 0),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_source_item, 1, 0, 0),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 6, 0, 27),
  [842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 6, 0, 27),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_statement, 2, 0, 0),
  [846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_statement, 2, 0, 0),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 10, 0, 40),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 10, 0, 40),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 9, 0, 35),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 9, 0, 35),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_table_name, 5, 0, 31),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_table_name, 5, 0, 31),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_specification, 4, 0, 0),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_specification, 4, 0, 0),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_sources, 1, 0, 0),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_sources, 1, 0, 0),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_source, 1, 0, 0),
  [880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_source, 1, 0, 0),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_table_name, 1, 0, 11),
  [884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_table_name, 1, 0, 11),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_table_name, 7, 0, 39),
  [890] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_table_name, 7, 0, 39),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 5, 0, 23),
  [894] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 5, 0, 23),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 1, 0, 30),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body_batch, 2, 0, 0),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [916] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_statement_arg_repeat1, 2, 0, 0), SHIFT_REPEAT(469),
  [919] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_body_batch_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body_batch, 3, 0, 0),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_go_statement, 2, 0, 2),
  [928] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_go_statement, 2, 0, 2),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_clauses, 2, 0, 0),
  [932] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_clauses, 2, 0, 0),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [936] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1, 0, 0),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [942] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [952] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(594),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 2, 0, 30),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collation_, 2, 0, 36),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1000] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list__repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list__repeat1, 2, 0, 0),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list_, 2, 0, 0),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list_, 1, 0, 0),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 3, 0, 0),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 4, 0, 0),
  [1043] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_order_by_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_order_by_clause_repeat1, 2, 0, 0),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 2, 0, 34),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsql_file, 2, 0, 0),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1058] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as, 1, 0, 0),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as, 1, 0, 0),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 3, 0, 38),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 3, 0, 37),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 2, 0, 33),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body_batch, 4, 0, 0),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1076] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat2, 2, 0, 0), SHIFT_REPEAT(448),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_by_clause, 3, 0, 0),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lag_lead_args, 7, 0, 32),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lag_lead_args, 3, 0, 0),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_body_repeat2, 2, 0, 0), SHIFT_REPEAT(434),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_body_repeat2, 2, 0, 0),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lag_lead_args, 5, 0, 28),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list__repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AS, 1, 0, 0),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_RESULT_SETS, 2, 0, 0),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_frame_preceding, 2, 0, 0),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_frame_bound, 1, 0, 0),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_frame_following, 2, 0, 0),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_frame_extent, 4, 0, 0),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_respect_nulls_, 2, 0, 0),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_all_distinct_expression, 2, 0, 0),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_frame_extent, 1, 0, 0),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row_or_range_clause, 2, 0, 0),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_function_name, 1, 0, 0),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_over_, 1, 0, 0),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ignore_nulls_, 2, 0, 0),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_all_distinct_expression, 1, 0, 0),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_within_group_, 2, 0, 0),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1403] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
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
