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
#define STATE_COUNT 617
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 177
#define ALIAS_COUNT 0
#define TOKEN_COUNT 96
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
  aux_sym_over__token1 = 41,
  aux_sym_within_group__token1 = 42,
  aux_sym_within_group__token2 = 43,
  sym_percentile_cont_ = 44,
  sym_percentile_disc_ = 45,
  sym_cume_dist_ = 46,
  sym_percent_rank_ = 47,
  aux_sym_ignore_nulls__token1 = 48,
  aux_sym_ignore_nulls__token2 = 49,
  aux_sym_respect_nulls__token1 = 50,
  sym_lag_ = 51,
  sym_lead_ = 52,
  sym_first_value_ = 53,
  sym_last_value_ = 54,
  sym_checksum_agg_ = 55,
  sym_count_ = 56,
  sym_count_big_ = 57,
  sym_avg_ = 58,
  sym_max_ = 59,
  sym_min_ = 60,
  sym_sum_ = 61,
  sym_stdev_ = 62,
  sym_stdevp_ = 63,
  sym_var_ = 64,
  sym_varp_ = 65,
  sym_all_ = 66,
  sym_distinct_ = 67,
  sym_ntile_ = 68,
  sym_rank_ = 69,
  sym_dense_rank_ = 70,
  sym_row_number_ = 71,
  aux_sym_partition_by_clause_token1 = 72,
  aux_sym_partition_by_clause_token2 = 73,
  aux_sym_order_by_clause_token1 = 74,
  aux_sym_collation__token1 = 75,
  sym_asc_ = 76,
  sym_desc_ = 77,
  aux_sym_window_frame_extent_token1 = 78,
  aux_sym_window_frame_extent_token2 = 79,
  aux_sym_window_frame_following_token1 = 80,
  aux_sym_window_frame_following_token2 = 81,
  aux_sym_window_frame_preceding_token1 = 82,
  aux_sym_window_frame_preceding_token2 = 83,
  aux_sym_window_frame_preceding_token3 = 84,
  aux_sym_row_or_range_clause_token1 = 85,
  aux_sym_row_or_range_clause_token2 = 86,
  sym_binary = 87,
  anon_sym_DOLLAR = 88,
  anon_sym_DASH = 89,
  anon_sym_PLUS = 90,
  aux_sym_real__token1 = 91,
  aux_sym_real__token2 = 92,
  aux_sym_id__token1 = 93,
  aux_sym_id__token2 = 94,
  anon_sym_TODO = 95,
  sym_tsql_file = 96,
  sym_batch = 97,
  sym_go_statement = 98,
  sym_execute_body_batch = 99,
  sym_func_proc_name_server_database_schema = 100,
  sym_func_proc_name_database_schema = 101,
  sym_func_proc_name_schema = 102,
  sym_execute_statement_arg = 103,
  sym_execute_statement_arg_named = 104,
  sym_execute_statement_arg_unnamed = 105,
  sym_execute_parameter = 106,
  sym_LOCAL_ID_ = 107,
  sym_constant = 108,
  sym_sql_clauses = 109,
  sym_another_statement = 110,
  sym_execute_statement = 111,
  sym_execute_body = 112,
  sym_execute_option = 113,
  sym_RESULT_SETS = 114,
  sym_AS = 115,
  sym_execute_var_string = 116,
  sym_dml_clause = 117,
  sym_select_statement_standalone = 118,
  sym_select_statement = 119,
  sym_query_expression = 120,
  sym_query_specification = 121,
  sym_select_list = 122,
  sym_select_list_elem = 123,
  sym_assignment_operator = 124,
  sym_udt_elem = 125,
  sym_udt_method_arguments = 126,
  sym_expression_elem = 127,
  sym_as_column_alias = 128,
  sym_as = 129,
  sym_column_alias = 130,
  sym_table_sources = 131,
  sym_table_source = 132,
  sym_table_source_item = 133,
  sym_full_table_name = 134,
  sym_full_column_name = 135,
  sym_expression = 136,
  sym_function_call = 137,
  sym_analytic_windowed_function = 138,
  sym_over_ = 139,
  sym_within_group_ = 140,
  sym_lag_lead_args = 141,
  sym_ignore_nulls_ = 142,
  sym_respect_nulls_ = 143,
  sym_aggregate_windowed_function = 144,
  sym_all_distinct_expression = 145,
  sym_ranking_windowed_function = 146,
  sym_over_clause = 147,
  sym_partition_by_clause = 148,
  sym_expression_list_ = 149,
  sym_order_by_clause = 150,
  sym_order_by_expression = 151,
  sym_collation_ = 152,
  sym_window_frame_extent = 153,
  sym_window_frame_bound = 154,
  sym_window_frame_following = 155,
  sym_window_frame_preceding = 156,
  sym_row_or_range_clause = 157,
  sym_primitive_expression = 158,
  sym_primitive_constant = 159,
  sym_money_ = 160,
  sym_real_ = 161,
  sym_float_ = 162,
  sym_decimal_ = 163,
  sym_id_ = 164,
  sym_keyword = 165,
  sym_integer = 166,
  aux_sym_tsql_file_repeat1 = 167,
  aux_sym_tsql_file_repeat2 = 168,
  aux_sym_batch_repeat1 = 169,
  aux_sym_execute_body_batch_repeat1 = 170,
  aux_sym_execute_statement_arg_repeat1 = 171,
  aux_sym_execute_body_repeat1 = 172,
  aux_sym_execute_body_repeat2 = 173,
  aux_sym_select_list_repeat1 = 174,
  aux_sym_expression_list__repeat1 = 175,
  aux_sym_order_by_clause_repeat1 = 176,
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
  [9] = 8,
  [10] = 7,
  [11] = 8,
  [12] = 7,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 13,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 18,
  [25] = 25,
  [26] = 23,
  [27] = 21,
  [28] = 20,
  [29] = 23,
  [30] = 30,
  [31] = 21,
  [32] = 32,
  [33] = 20,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 41,
  [43] = 43,
  [44] = 40,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 50,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 47,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 53,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 53,
  [82] = 77,
  [83] = 83,
  [84] = 84,
  [85] = 40,
  [86] = 75,
  [87] = 47,
  [88] = 88,
  [89] = 68,
  [90] = 84,
  [91] = 63,
  [92] = 92,
  [93] = 76,
  [94] = 58,
  [95] = 67,
  [96] = 65,
  [97] = 97,
  [98] = 47,
  [99] = 99,
  [100] = 76,
  [101] = 101,
  [102] = 47,
  [103] = 103,
  [104] = 104,
  [105] = 70,
  [106] = 106,
  [107] = 63,
  [108] = 108,
  [109] = 68,
  [110] = 74,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 77,
  [120] = 80,
  [121] = 58,
  [122] = 79,
  [123] = 59,
  [124] = 124,
  [125] = 125,
  [126] = 60,
  [127] = 127,
  [128] = 69,
  [129] = 129,
  [130] = 53,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 53,
  [136] = 136,
  [137] = 61,
  [138] = 138,
  [139] = 75,
  [140] = 140,
  [141] = 141,
  [142] = 79,
  [143] = 80,
  [144] = 74,
  [145] = 145,
  [146] = 67,
  [147] = 147,
  [148] = 65,
  [149] = 149,
  [150] = 59,
  [151] = 60,
  [152] = 61,
  [153] = 69,
  [154] = 70,
  [155] = 62,
  [156] = 71,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 40,
  [167] = 167,
  [168] = 168,
  [169] = 83,
  [170] = 92,
  [171] = 159,
  [172] = 164,
  [173] = 173,
  [174] = 161,
  [175] = 163,
  [176] = 176,
  [177] = 62,
  [178] = 117,
  [179] = 118,
  [180] = 103,
  [181] = 108,
  [182] = 112,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 141,
  [187] = 136,
  [188] = 133,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 97,
  [193] = 71,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 131,
  [200] = 132,
  [201] = 134,
  [202] = 140,
  [203] = 203,
  [204] = 99,
  [205] = 129,
  [206] = 127,
  [207] = 125,
  [208] = 124,
  [209] = 114,
  [210] = 106,
  [211] = 101,
  [212] = 212,
  [213] = 111,
  [214] = 214,
  [215] = 215,
  [216] = 113,
  [217] = 115,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 40,
  [224] = 47,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 53,
  [229] = 53,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 47,
  [235] = 92,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 83,
  [253] = 115,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 111,
  [259] = 101,
  [260] = 260,
  [261] = 162,
  [262] = 136,
  [263] = 263,
  [264] = 254,
  [265] = 265,
  [266] = 266,
  [267] = 131,
  [268] = 99,
  [269] = 132,
  [270] = 124,
  [271] = 271,
  [272] = 134,
  [273] = 140,
  [274] = 125,
  [275] = 275,
  [276] = 118,
  [277] = 277,
  [278] = 278,
  [279] = 133,
  [280] = 280,
  [281] = 97,
  [282] = 114,
  [283] = 113,
  [284] = 284,
  [285] = 129,
  [286] = 286,
  [287] = 127,
  [288] = 147,
  [289] = 254,
  [290] = 290,
  [291] = 106,
  [292] = 141,
  [293] = 103,
  [294] = 108,
  [295] = 117,
  [296] = 47,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 112,
  [301] = 301,
  [302] = 302,
  [303] = 53,
  [304] = 304,
  [305] = 159,
  [306] = 164,
  [307] = 157,
  [308] = 308,
  [309] = 168,
  [310] = 310,
  [311] = 176,
  [312] = 312,
  [313] = 161,
  [314] = 163,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 183,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 317,
  [325] = 325,
  [326] = 323,
  [327] = 318,
  [328] = 328,
  [329] = 184,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 331,
  [334] = 334,
  [335] = 318,
  [336] = 336,
  [337] = 195,
  [338] = 331,
  [339] = 320,
  [340] = 340,
  [341] = 330,
  [342] = 342,
  [343] = 336,
  [344] = 317,
  [345] = 197,
  [346] = 334,
  [347] = 198,
  [348] = 189,
  [349] = 342,
  [350] = 185,
  [351] = 330,
  [352] = 352,
  [353] = 320,
  [354] = 354,
  [355] = 336,
  [356] = 342,
  [357] = 323,
  [358] = 334,
  [359] = 191,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 367,
  [370] = 366,
  [371] = 371,
  [372] = 372,
  [373] = 365,
  [374] = 374,
  [375] = 366,
  [376] = 376,
  [377] = 377,
  [378] = 361,
  [379] = 379,
  [380] = 380,
  [381] = 363,
  [382] = 363,
  [383] = 372,
  [384] = 376,
  [385] = 385,
  [386] = 380,
  [387] = 387,
  [388] = 365,
  [389] = 380,
  [390] = 361,
  [391] = 391,
  [392] = 372,
  [393] = 393,
  [394] = 394,
  [395] = 376,
  [396] = 396,
  [397] = 367,
  [398] = 398,
  [399] = 399,
  [400] = 245,
  [401] = 401,
  [402] = 402,
  [403] = 249,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 401,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 401,
  [418] = 418,
  [419] = 407,
  [420] = 407,
  [421] = 399,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 423,
  [430] = 423,
  [431] = 399,
  [432] = 432,
  [433] = 352,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 432,
  [441] = 321,
  [442] = 340,
  [443] = 438,
  [444] = 444,
  [445] = 445,
  [446] = 432,
  [447] = 438,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 449,
  [458] = 458,
  [459] = 453,
  [460] = 460,
  [461] = 461,
  [462] = 451,
  [463] = 460,
  [464] = 451,
  [465] = 465,
  [466] = 460,
  [467] = 467,
  [468] = 468,
  [469] = 467,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 470,
  [475] = 475,
  [476] = 476,
  [477] = 452,
  [478] = 478,
  [479] = 458,
  [480] = 449,
  [481] = 453,
  [482] = 482,
  [483] = 452,
  [484] = 455,
  [485] = 455,
  [486] = 458,
  [487] = 487,
  [488] = 488,
  [489] = 470,
  [490] = 467,
  [491] = 491,
  [492] = 465,
  [493] = 465,
  [494] = 456,
  [495] = 316,
  [496] = 315,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 503,
  [509] = 500,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 511,
  [518] = 518,
  [519] = 512,
  [520] = 513,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 507,
  [527] = 527,
  [528] = 528,
  [529] = 510,
  [530] = 530,
  [531] = 504,
  [532] = 532,
  [533] = 533,
  [534] = 506,
  [535] = 503,
  [536] = 500,
  [537] = 537,
  [538] = 511,
  [539] = 512,
  [540] = 513,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 518,
  [545] = 545,
  [546] = 521,
  [547] = 521,
  [548] = 522,
  [549] = 549,
  [550] = 524,
  [551] = 525,
  [552] = 527,
  [553] = 553,
  [554] = 510,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 505,
  [560] = 560,
  [561] = 515,
  [562] = 523,
  [563] = 560,
  [564] = 522,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 505,
  [571] = 560,
  [572] = 515,
  [573] = 523,
  [574] = 574,
  [575] = 575,
  [576] = 565,
  [577] = 569,
  [578] = 568,
  [579] = 567,
  [580] = 557,
  [581] = 581,
  [582] = 582,
  [583] = 530,
  [584] = 524,
  [585] = 569,
  [586] = 568,
  [587] = 567,
  [588] = 557,
  [589] = 589,
  [590] = 590,
  [591] = 530,
  [592] = 592,
  [593] = 581,
  [594] = 558,
  [595] = 595,
  [596] = 595,
  [597] = 581,
  [598] = 558,
  [599] = 525,
  [600] = 595,
  [601] = 497,
  [602] = 602,
  [603] = 497,
  [604] = 604,
  [605] = 589,
  [606] = 543,
  [607] = 589,
  [608] = 543,
  [609] = 527,
  [610] = 565,
  [611] = 499,
  [612] = 499,
  [613] = 613,
  [614] = 504,
  [615] = 590,
  [616] = 590,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(289);
      ADVANCE_MAP(
        '$', 422,
        '%', 11,
        '&', 12,
        '\'', 5,
        '(', 316,
        ')', 317,
        '*', 346,
        '+', 426,
        ',', 292,
        '-', 424,
        '.', 295,
        '/', 16,
        '0', 308,
        ':', 10,
        ';', 293,
        '=', 297,
        '@', 273,
        'N', 4,
        'T', 20,
        '[', 272,
        '^', 17,
        'n', 190,
        '|', 18,
        'A', 143,
        'a', 143,
        'B', 71,
        'b', 71,
        'C', 119,
        'c', 119,
        'D', 72,
        'd', 72,
        'E', 429,
        'e', 429,
        'F', 122,
        'f', 122,
        'G', 192,
        'g', 192,
        'I', 114,
        'i', 114,
        'L', 30,
        'l', 30,
        'M', 31,
        'm', 31,
        'O', 211,
        'o', 211,
        'P', 33,
        'p', 33,
        'R', 36,
        'r', 36,
        'S', 73,
        's', 73,
        'U', 167,
        'u', 167,
        'V', 37,
        'v', 37,
        'W', 124,
        'w', 124,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '$', 422,
        '\'', 6,
        '*', 345,
        '.', 271,
        '0', 308,
        '=', 297,
        '@', 273,
        'N', 431,
        '[', 272,
        'n', 558,
        'A', 572,
        'a', 572,
        'C', 491,
        'c', 491,
        'D', 468,
        'd', 468,
        'F', 492,
        'f', 492,
        'G', 527,
        'g', 527,
        'L', 441,
        'l', 441,
        'M', 442,
        'm', 442,
        'P', 475,
        'p', 475,
        'R', 444,
        'r', 444,
        'S', 547,
        's', 547,
        'V', 447,
        'v', 447,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '$', 422,
        '\'', 6,
        '*', 345,
        '.', 271,
        '0', 308,
        '@', 273,
        'N', 431,
        '[', 272,
        'n', 558,
        'A', 509,
        'a', 509,
        'C', 491,
        'c', 491,
        'D', 467,
        'd', 467,
        'F', 492,
        'f', 492,
        'G', 527,
        'g', 527,
        'L', 441,
        'l', 441,
        'M', 442,
        'm', 442,
        'P', 475,
        'p', 475,
        'R', 444,
        'r', 444,
        'S', 547,
        's', 547,
        'V', 447,
        'v', 447,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\'', 5,
        '-', 307,
        '@', 273,
        'N', 430,
        '[', 272,
        'n', 563,
        'D', 472,
        'd', 472,
        'G', 527,
        'g', 527,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(175);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(123);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(306);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(331);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '\'', 6,
        '(', 316,
        '.', 294,
        '@', 273,
        'N', 432,
        '[', 272,
        'G', 527,
        'g', 527,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 8:
      if (lookahead == '+') ADVANCE(425);
      if (lookahead == '-') ADVANCE(423);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(198);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(294);
      if (lookahead == '[') ADVANCE(272);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(527);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(347);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(341);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(342);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(339);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(337);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(338);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(340);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(343);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(344);
      END_STATE();
    case 19:
      if (lookahead == 'D') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 'O') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 'O') ADVANCE(582);
      END_STATE();
    case 22:
      if (lookahead == ']') ADVANCE(581);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(54);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(263);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(65);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(38);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(214);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(219);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(264);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(35);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(270);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(215);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(212);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(169);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(265);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(248);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(183);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(267);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 45:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(197);
      END_STATE();
    case 46:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(197);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(78);
      END_STATE();
    case 47:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(125);
      END_STATE();
    case 48:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(99);
      END_STATE();
    case 49:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 50:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(410);
      END_STATE();
    case 51:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(313);
      END_STATE();
    case 52:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(354);
      END_STATE();
    case 53:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(409);
      END_STATE();
    case 54:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(202);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 55:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 56:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(236);
      END_STATE();
    case 57:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(240);
      END_STATE();
    case 58:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(241);
      END_STATE();
    case 59:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(196);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(204);
      END_STATE();
    case 60:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 61:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(412);
      END_STATE();
    case 62:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(365);
      END_STATE();
    case 63:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(413);
      END_STATE();
    case 64:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(323);
      END_STATE();
    case 65:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(137);
      END_STATE();
    case 66:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(77);
      END_STATE();
    case 67:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 68:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 69:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 70:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(244);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(406);
      END_STATE();
    case 72:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(66);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 106:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(228);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(50);
      END_STATE();
    case 107:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(135);
      END_STATE();
    case 108:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(377);
      END_STATE();
    case 109:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(363);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(246);
      END_STATE();
    case 110:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(375);
      END_STATE();
    case 111:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(414);
      END_STATE();
    case 112:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(415);
      END_STATE();
    case 113:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(371);
      END_STATE();
    case 114:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(176);
      END_STATE();
    case 115:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(127);
      END_STATE();
    case 116:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(113);
      END_STATE();
    case 117:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(80);
      END_STATE();
    case 118:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(80);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(399);
      END_STATE();
    case 119:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(74);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(147);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(165);
      END_STATE();
    case 120:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(318);
      END_STATE();
    case 121:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(130);
      END_STATE();
    case 122:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(218);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(149);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 123:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 124:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 125:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 126:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(225);
      END_STATE();
    case 127:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 128:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 129:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 130:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 131:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(247);
      END_STATE();
    case 132:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 133:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 134:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 135:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 136:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 137:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 138:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(401);
      END_STATE();
    case 139:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(358);
      END_STATE();
    case 140:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(226);
      END_STATE();
    case 141:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(393);
      END_STATE();
    case 142:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(304);
      END_STATE();
    case 143:
      ADVANCE_MAP(
        'L', 141,
        'l', 141,
        'N', 61,
        'n', 61,
        'S', 325,
        's', 325,
        'T', 329,
        't', 329,
        'V', 108,
        'v', 108,
      );
      END_STATE();
    case 144:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 145:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 146:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 147:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(144);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 148:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 149:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 150:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 151:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(258);
      END_STATE();
    case 152:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 153:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 154:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 155:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 156:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 157:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 158:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(259);
      END_STATE();
    case 159:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 160:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(90);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(221);
      END_STATE();
    case 161:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(383);
      END_STATE();
    case 162:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(333);
      END_STATE();
    case 163:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(205);
      END_STATE();
    case 164:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 165:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(76);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 166:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 167:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(46);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      END_STATE();
    case 168:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(381);
      END_STATE();
    case 169:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 170:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(327);
      END_STATE();
    case 171:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(350);
      END_STATE();
    case 172:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(411);
      END_STATE();
    case 173:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(405);
      END_STATE();
    case 174:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 175:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 176:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 177:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 178:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 179:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 180:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 181:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 182:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 183:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 184:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(237);
      END_STATE();
    case 185:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(239);
      END_STATE();
    case 186:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 187:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(243);
      END_STATE();
    case 188:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 189:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 190:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(175);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(123);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 191:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 192:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(290);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 193:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 194:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 195:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 196:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 197:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 198:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(266);
      END_STATE();
    case 199:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 200:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 201:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(146);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(213);
      END_STATE();
    case 202:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 203:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(351);
      END_STATE();
    case 204:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(104);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(154);
      END_STATE();
    case 205:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(136);
      END_STATE();
    case 206:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(389);
      END_STATE();
    case 207:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(348);
      END_STATE();
    case 208:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(328);
      END_STATE();
    case 209:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(407);
      END_STATE();
    case 210:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(403);
      END_STATE();
    case 211:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(68);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(231);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(94);
      END_STATE();
    case 212:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 213:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 214:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 215:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 216:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 217:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 218:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 219:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 220:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(419);
      END_STATE();
    case 221:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(321);
      END_STATE();
    case 222:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(361);
      END_STATE();
    case 223:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(50);
      END_STATE();
    case 224:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(251);
      END_STATE();
    case 225:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(52);
      END_STATE();
    case 226:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(255);
      END_STATE();
    case 227:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(53);
      END_STATE();
    case 228:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(88);
      END_STATE();
    case 229:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(242);
      END_STATE();
    case 230:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(252);
      END_STATE();
    case 231:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(299);
      END_STATE();
    case 232:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(120);
      END_STATE();
    case 233:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(373);
      END_STATE();
    case 234:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(298);
      END_STATE();
    case 235:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(320);
      END_STATE();
    case 236:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(335);
      END_STATE();
    case 237:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(416);
      END_STATE();
    case 238:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(302);
      END_STATE();
    case 239:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(28);
      END_STATE();
    case 240:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(362);
      END_STATE();
    case 241:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(395);
      END_STATE();
    case 242:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(356);
      END_STATE();
    case 243:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(352);
      END_STATE();
    case 244:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(268);
      END_STATE();
    case 245:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 246:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(24);
      END_STATE();
    case 247:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(128);
      END_STATE();
    case 248:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(82);
      END_STATE();
    case 249:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      END_STATE();
    case 250:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(131);
      END_STATE();
    case 251:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      END_STATE();
    case 252:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(29);
      END_STATE();
    case 253:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(203);
      END_STATE();
    case 254:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 255:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 256:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 257:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(234);
      END_STATE();
    case 258:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 259:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 260:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 261:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 262:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(385);
      END_STATE();
    case 263:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(39);
      END_STATE();
    case 264:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(44);
      END_STATE();
    case 265:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(418);
      END_STATE();
    case 266:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(417);
      END_STATE();
    case 267:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(220);
      END_STATE();
    case 268:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(101);
      END_STATE();
    case 269:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(132);
      END_STATE();
    case 270:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(379);
      END_STATE();
    case 271:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(427);
      END_STATE();
    case 272:
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 273:
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 274:
      if (eof) ADVANCE(289);
      ADVANCE_MAP(
        '%', 11,
        '&', 12,
        '\'', 6,
        '(', 316,
        ')', 317,
        '*', 13,
        '+', 14,
        ',', 292,
        '-', 15,
        '.', 294,
        '/', 16,
        ';', 293,
        '=', 297,
        'N', 432,
        '[', 272,
        '^', 17,
        '|', 18,
        'A', 539,
        'a', 539,
        'E', 579,
        'e', 579,
        'F', 534,
        'f', 534,
        'G', 527,
        'g', 527,
        'S', 464,
        's', 464,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(274);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 275:
      if (eof) ADVANCE(289);
      ADVANCE_MAP(
        '\'', 5,
        '(', 316,
        ')', 317,
        '+', 332,
        ',', 292,
        '-', 307,
        '.', 294,
        ';', 293,
        '=', 315,
        '@', 273,
        'N', 430,
        '[', 272,
        'n', 563,
        'D', 472,
        'd', 472,
        'E', 579,
        'e', 579,
        'G', 527,
        'g', 527,
        'S', 464,
        's', 464,
        'W', 496,
        'w', 496,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 276:
      if (eof) ADVANCE(289);
      ADVANCE_MAP(
        '\'', 5,
        '(', 316,
        ')', 317,
        ',', 292,
        '-', 307,
        '.', 294,
        ';', 293,
        '@', 273,
        'N', 430,
        '[', 272,
        'n', 563,
        'D', 472,
        'd', 472,
        'E', 579,
        'e', 579,
        'G', 527,
        'g', 527,
        'S', 464,
        's', 464,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(276);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 277:
      if (eof) ADVANCE(289);
      ADVANCE_MAP(
        '\'', 6,
        '(', 316,
        ',', 292,
        '.', 294,
        ':', 10,
        ';', 293,
        '=', 315,
        'N', 432,
        '[', 272,
        'A', 539,
        'a', 539,
        'E', 579,
        'e', 579,
        'F', 534,
        'f', 534,
        'G', 527,
        'g', 527,
        'S', 464,
        's', 464,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(277);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 278:
      if (eof) ADVANCE(289);
      ADVANCE_MAP(
        '\'', 6,
        ')', 317,
        ',', 292,
        '.', 294,
        ';', 293,
        'N', 432,
        '[', 272,
        'A', 539,
        'a', 539,
        'E', 579,
        'e', 579,
        'F', 534,
        'f', 534,
        'G', 527,
        'g', 527,
        'O', 575,
        'o', 575,
        'S', 464,
        's', 464,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(278);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 279:
      if (eof) ADVANCE(289);
      ADVANCE_MAP(
        '\'', 6,
        ')', 317,
        ',', 292,
        '.', 294,
        ';', 293,
        'N', 432,
        '[', 272,
        'A', 539,
        'a', 539,
        'E', 428,
        'e', 428,
        'F', 534,
        'f', 534,
        'G', 527,
        'g', 527,
        'S', 464,
        's', 464,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(279);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 280:
      if (eof) ADVANCE(289);
      ADVANCE_MAP(
        ')', 317,
        ',', 292,
        '.', 294,
        ';', 293,
        '[', 272,
        'E', 579,
        'e', 579,
        'F', 534,
        'f', 534,
        'G', 527,
        'g', 527,
        'S', 464,
        's', 464,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(280);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 281:
      if (eof) ADVANCE(289);
      ADVANCE_MAP(
        ')', 317,
        ',', 292,
        ';', 293,
        '=', 297,
        'A', 227,
        'a', 227,
        'B', 70,
        'b', 70,
        'C', 201,
        'c', 201,
        'D', 93,
        'd', 93,
        'E', 429,
        'e', 429,
        'G', 191,
        'g', 191,
        'N', 261,
        'n', 261,
        'O', 211,
        'o', 211,
        'P', 32,
        'p', 32,
        'R', 43,
        'r', 43,
        'S', 98,
        's', 98,
        'U', 178,
        'u', 178,
        'W', 134,
        'w', 134,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 282:
      if (eof) ADVANCE(289);
      ADVANCE_MAP(
        '+', 425,
        ',', 292,
        '-', 423,
        '.', 294,
        ';', 293,
        '=', 315,
        '[', 272,
        'E', 579,
        'e', 579,
        'G', 527,
        'g', 527,
        'S', 464,
        's', 464,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 283:
      if (eof) ADVANCE(289);
      ADVANCE_MAP(
        ',', 292,
        '.', 294,
        ';', 293,
        '=', 297,
        '[', 272,
        'E', 579,
        'e', 579,
        'G', 527,
        'g', 527,
        'O', 568,
        'o', 568,
        'S', 464,
        's', 464,
        'W', 496,
        'w', 496,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(283);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 284:
      if (eof) ADVANCE(289);
      ADVANCE_MAP(
        ',', 292,
        '.', 294,
        ';', 293,
        '[', 272,
        'E', 579,
        'e', 579,
        'F', 534,
        'f', 534,
        'G', 527,
        'g', 527,
        'O', 575,
        'o', 575,
        'S', 464,
        's', 464,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(284);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 285:
      if (eof) ADVANCE(289);
      ADVANCE_MAP(
        ',', 292,
        '.', 294,
        ';', 293,
        '[', 272,
        'E', 579,
        'e', 579,
        'G', 527,
        'g', 527,
        'S', 464,
        's', 464,
        'W', 496,
        'w', 496,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(285);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 286:
      if (eof) ADVANCE(289);
      ADVANCE_MAP(
        ',', 292,
        '.', 294,
        ';', 293,
        '[', 272,
        'E', 428,
        'e', 428,
        'F', 534,
        'f', 534,
        'G', 527,
        'g', 527,
        'S', 464,
        's', 464,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(286);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 287:
      if (eof) ADVANCE(289);
      ADVANCE_MAP(
        '.', 294,
        ';', 293,
        '[', 272,
        'A', 538,
        'a', 538,
        'E', 579,
        'e', 579,
        'G', 527,
        'g', 527,
        'S', 464,
        's', 464,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(287);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 288:
      if (eof) ADVANCE(289);
      ADVANCE_MAP(
        '.', 294,
        ';', 293,
        '[', 272,
        'A', 557,
        'a', 557,
        'E', 579,
        'e', 579,
        'G', 527,
        'g', 527,
        'S', 464,
        's', 464,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(288);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_go_statement_token1);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_go_statement_token1);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_func_proc_name_server_database_schema_token1);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_func_proc_name_server_database_schema_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(427);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_execute_statement_arg_named_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_OUTPUT);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_OUTPUT);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(257);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_OUTPUT);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(569);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_OUTPUT);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_default);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_default);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_null_);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_null_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '\'') ADVANCE(5);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_constant_token3);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'x') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_constant_token3);
      if (lookahead == '.') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_constant_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_execute);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_execute);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(560);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_execute);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(249);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_execute);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_execute_body_token1);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_WITH);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_WITH);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_RESULT_SETS_token1);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_RESULT_SETS_token2);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_NONE);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_UNDEFINED);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_RECOMPILE);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_AS_token1);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_AS_token1);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_LOGIN);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_USER);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_AT_KEYWORD);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_AT_KEYWORD);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_string_lit);
      if (lookahead == '\'') ADVANCE(6);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_PLUS);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_query_specification_token1);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_query_specification_token1);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_select);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_select);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_asterisk);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_asterisk);
      if (lookahead == '=') ADVANCE(339);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_over__token1);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_over__token1);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_within_group__token1);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_within_group__token2);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_percentile_cont_);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_percentile_cont_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_percentile_disc_);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_percentile_disc_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_cume_dist_);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_cume_dist_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_percent_rank_);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_percent_rank_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_ignore_nulls__token1);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_ignore_nulls__token2);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_respect_nulls__token1);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_lag_);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_lag_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_lead_);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_lead_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_first_value_);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_first_value_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_last_value_);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_last_value_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_checksum_agg_);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_checksum_agg_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_count_);
      if (lookahead == '_') ADVANCE(47);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_count_);
      if (lookahead == '_') ADVANCE(452);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_count_big_);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_count_big_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_avg_);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_avg_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_max_);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_max_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_min_);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_min_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_sum_);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_sum_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_stdev_);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(387);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_stdev_);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(388);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_stdevp_);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_stdevp_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_var_);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(391);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_var_);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(392);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_varp_);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_varp_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_all_);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_all_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_distinct_);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_distinct_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_ntile_);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_ntile_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_rank_);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_rank_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_dense_rank_);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_dense_rank_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_row_number_);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_row_number_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_partition_by_clause_token1);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_partition_by_clause_token2);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_collation__token1);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_asc_);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_desc_);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_window_frame_extent_token1);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_window_frame_extent_token2);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_window_frame_following_token1);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_window_frame_following_token2);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_window_frame_preceding_token1);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_window_frame_preceding_token2);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_window_frame_preceding_token3);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_window_frame_preceding_token3);
      if (lookahead == '_') ADVANCE(180);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(419);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_row_or_range_clause_token1);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_row_or_range_clause_token2);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_binary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(338);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(337);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_real__token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_real__token2);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(465);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_real__token2);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(87);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(506);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(497);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(506);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(574);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(462);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(536);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(446);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(537);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(511);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(576);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(486);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(445);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(578);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(518);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(566);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(519);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(577);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(461);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(489);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(530);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(507);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(521);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(523);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(512);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(493);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(479);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(312);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(355);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(529);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(494);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(546);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(502);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(553);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(482);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(366);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(498);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(474);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(505);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(454);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(314);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(483);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(542);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(483);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(398);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(370);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(368);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(484);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(457);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(573);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(535);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(435);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(458);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(436);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(531);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(433);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(532);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(524);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(443);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(543);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(443);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(378);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(364);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(559);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(376);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(372);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(488);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(319);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(477);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(565);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(517);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(533);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(487);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(540);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(526);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(554);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(510);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(541);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(400);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(402);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(359);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(544);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(305);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(394);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(473);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(503);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(570);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(549);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(504);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(485);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(469);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(480);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(571);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(384);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(334);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(453);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(438);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(476);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(382);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(499);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(564);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(500);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(548);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(501);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(550);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(552);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(459);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(291);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(514);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(525);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(390);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(404);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(349);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(545);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(528);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(460);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(449);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(450);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(326);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(330);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(326);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(455);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(551);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(561);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(478);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(567);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(562);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(336);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(463);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(513);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(374);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(303);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(439);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(357);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(353);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(396);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(490);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(300);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(301);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(330);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(497);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(506);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(434);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(466);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(495);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(440);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(506);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(515);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(522);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(508);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(516);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(555);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(556);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(470);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(471);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(485);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(386);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(448);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(481);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(451);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(437);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(380);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(465);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_id__token2);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 282},
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
  [35] = {.lex_state = 282},
  [36] = {.lex_state = 282},
  [37] = {.lex_state = 275},
  [38] = {.lex_state = 275},
  [39] = {.lex_state = 274},
  [40] = {.lex_state = 274},
  [41] = {.lex_state = 276},
  [42] = {.lex_state = 276},
  [43] = {.lex_state = 274},
  [44] = {.lex_state = 275},
  [45] = {.lex_state = 275},
  [46] = {.lex_state = 275},
  [47] = {.lex_state = 275},
  [48] = {.lex_state = 282},
  [49] = {.lex_state = 282},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 275},
  [53] = {.lex_state = 276},
  [54] = {.lex_state = 274},
  [55] = {.lex_state = 275},
  [56] = {.lex_state = 274},
  [57] = {.lex_state = 282},
  [58] = {.lex_state = 275},
  [59] = {.lex_state = 275},
  [60] = {.lex_state = 275},
  [61] = {.lex_state = 275},
  [62] = {.lex_state = 278},
  [63] = {.lex_state = 275},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 275},
  [66] = {.lex_state = 277},
  [67] = {.lex_state = 275},
  [68] = {.lex_state = 275},
  [69] = {.lex_state = 275},
  [70] = {.lex_state = 275},
  [71] = {.lex_state = 278},
  [72] = {.lex_state = 275},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 275},
  [75] = {.lex_state = 275},
  [76] = {.lex_state = 275},
  [77] = {.lex_state = 275},
  [78] = {.lex_state = 276},
  [79] = {.lex_state = 275},
  [80] = {.lex_state = 275},
  [81] = {.lex_state = 277},
  [82] = {.lex_state = 276},
  [83] = {.lex_state = 279},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 281},
  [86] = {.lex_state = 276},
  [87] = {.lex_state = 276},
  [88] = {.lex_state = 277},
  [89] = {.lex_state = 276},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 276},
  [92] = {.lex_state = 279},
  [93] = {.lex_state = 276},
  [94] = {.lex_state = 276},
  [95] = {.lex_state = 276},
  [96] = {.lex_state = 276},
  [97] = {.lex_state = 274},
  [98] = {.lex_state = 276},
  [99] = {.lex_state = 274},
  [100] = {.lex_state = 276},
  [101] = {.lex_state = 274},
  [102] = {.lex_state = 281},
  [103] = {.lex_state = 274},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 276},
  [106] = {.lex_state = 274},
  [107] = {.lex_state = 276},
  [108] = {.lex_state = 274},
  [109] = {.lex_state = 276},
  [110] = {.lex_state = 276},
  [111] = {.lex_state = 274},
  [112] = {.lex_state = 274},
  [113] = {.lex_state = 274},
  [114] = {.lex_state = 274},
  [115] = {.lex_state = 274},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 274},
  [118] = {.lex_state = 274},
  [119] = {.lex_state = 276},
  [120] = {.lex_state = 276},
  [121] = {.lex_state = 276},
  [122] = {.lex_state = 276},
  [123] = {.lex_state = 276},
  [124] = {.lex_state = 274},
  [125] = {.lex_state = 274},
  [126] = {.lex_state = 276},
  [127] = {.lex_state = 274},
  [128] = {.lex_state = 276},
  [129] = {.lex_state = 274},
  [130] = {.lex_state = 276},
  [131] = {.lex_state = 274},
  [132] = {.lex_state = 274},
  [133] = {.lex_state = 274},
  [134] = {.lex_state = 274},
  [135] = {.lex_state = 281},
  [136] = {.lex_state = 274},
  [137] = {.lex_state = 276},
  [138] = {.lex_state = 277},
  [139] = {.lex_state = 276},
  [140] = {.lex_state = 274},
  [141] = {.lex_state = 274},
  [142] = {.lex_state = 276},
  [143] = {.lex_state = 276},
  [144] = {.lex_state = 276},
  [145] = {.lex_state = 274},
  [146] = {.lex_state = 276},
  [147] = {.lex_state = 283},
  [148] = {.lex_state = 276},
  [149] = {.lex_state = 274},
  [150] = {.lex_state = 276},
  [151] = {.lex_state = 276},
  [152] = {.lex_state = 276},
  [153] = {.lex_state = 276},
  [154] = {.lex_state = 276},
  [155] = {.lex_state = 284},
  [156] = {.lex_state = 284},
  [157] = {.lex_state = 283},
  [158] = {.lex_state = 280},
  [159] = {.lex_state = 285},
  [160] = {.lex_state = 280},
  [161] = {.lex_state = 285},
  [162] = {.lex_state = 280},
  [163] = {.lex_state = 285},
  [164] = {.lex_state = 285},
  [165] = {.lex_state = 287},
  [166] = {.lex_state = 283},
  [167] = {.lex_state = 287},
  [168] = {.lex_state = 285},
  [169] = {.lex_state = 286},
  [170] = {.lex_state = 286},
  [171] = {.lex_state = 285},
  [172] = {.lex_state = 285},
  [173] = {.lex_state = 280},
  [174] = {.lex_state = 285},
  [175] = {.lex_state = 285},
  [176] = {.lex_state = 285},
  [177] = {.lex_state = 281},
  [178] = {.lex_state = 280},
  [179] = {.lex_state = 280},
  [180] = {.lex_state = 280},
  [181] = {.lex_state = 280},
  [182] = {.lex_state = 280},
  [183] = {.lex_state = 285},
  [184] = {.lex_state = 285},
  [185] = {.lex_state = 285},
  [186] = {.lex_state = 280},
  [187] = {.lex_state = 280},
  [188] = {.lex_state = 280},
  [189] = {.lex_state = 285},
  [190] = {.lex_state = 280},
  [191] = {.lex_state = 285},
  [192] = {.lex_state = 280},
  [193] = {.lex_state = 281},
  [194] = {.lex_state = 282},
  [195] = {.lex_state = 285},
  [196] = {.lex_state = 282},
  [197] = {.lex_state = 285},
  [198] = {.lex_state = 285},
  [199] = {.lex_state = 280},
  [200] = {.lex_state = 280},
  [201] = {.lex_state = 280},
  [202] = {.lex_state = 280},
  [203] = {.lex_state = 280},
  [204] = {.lex_state = 280},
  [205] = {.lex_state = 280},
  [206] = {.lex_state = 280},
  [207] = {.lex_state = 280},
  [208] = {.lex_state = 280},
  [209] = {.lex_state = 280},
  [210] = {.lex_state = 280},
  [211] = {.lex_state = 280},
  [212] = {.lex_state = 280},
  [213] = {.lex_state = 280},
  [214] = {.lex_state = 280},
  [215] = {.lex_state = 280},
  [216] = {.lex_state = 280},
  [217] = {.lex_state = 280},
  [218] = {.lex_state = 280},
  [219] = {.lex_state = 280},
  [220] = {.lex_state = 280},
  [221] = {.lex_state = 280},
  [222] = {.lex_state = 282},
  [223] = {.lex_state = 280},
  [224] = {.lex_state = 280},
  [225] = {.lex_state = 282},
  [226] = {.lex_state = 282},
  [227] = {.lex_state = 280},
  [228] = {.lex_state = 285},
  [229] = {.lex_state = 280},
  [230] = {.lex_state = 282},
  [231] = {.lex_state = 282},
  [232] = {.lex_state = 282},
  [233] = {.lex_state = 282},
  [234] = {.lex_state = 285},
  [235] = {.lex_state = 281},
  [236] = {.lex_state = 282},
  [237] = {.lex_state = 285},
  [238] = {.lex_state = 288},
  [239] = {.lex_state = 9},
  [240] = {.lex_state = 285},
  [241] = {.lex_state = 282},
  [242] = {.lex_state = 282},
  [243] = {.lex_state = 288},
  [244] = {.lex_state = 282},
  [245] = {.lex_state = 282},
  [246] = {.lex_state = 282},
  [247] = {.lex_state = 282},
  [248] = {.lex_state = 282},
  [249] = {.lex_state = 282},
  [250] = {.lex_state = 282},
  [251] = {.lex_state = 280},
  [252] = {.lex_state = 281},
  [253] = {.lex_state = 281},
  [254] = {.lex_state = 281},
  [255] = {.lex_state = 282},
  [256] = {.lex_state = 282},
  [257] = {.lex_state = 282},
  [258] = {.lex_state = 281},
  [259] = {.lex_state = 281},
  [260] = {.lex_state = 282},
  [261] = {.lex_state = 281},
  [262] = {.lex_state = 281},
  [263] = {.lex_state = 282},
  [264] = {.lex_state = 281},
  [265] = {.lex_state = 282},
  [266] = {.lex_state = 282},
  [267] = {.lex_state = 281},
  [268] = {.lex_state = 281},
  [269] = {.lex_state = 281},
  [270] = {.lex_state = 281},
  [271] = {.lex_state = 282},
  [272] = {.lex_state = 281},
  [273] = {.lex_state = 281},
  [274] = {.lex_state = 281},
  [275] = {.lex_state = 282},
  [276] = {.lex_state = 281},
  [277] = {.lex_state = 282},
  [278] = {.lex_state = 282},
  [279] = {.lex_state = 281},
  [280] = {.lex_state = 282},
  [281] = {.lex_state = 281},
  [282] = {.lex_state = 281},
  [283] = {.lex_state = 281},
  [284] = {.lex_state = 282},
  [285] = {.lex_state = 281},
  [286] = {.lex_state = 282},
  [287] = {.lex_state = 281},
  [288] = {.lex_state = 281},
  [289] = {.lex_state = 281},
  [290] = {.lex_state = 281},
  [291] = {.lex_state = 281},
  [292] = {.lex_state = 281},
  [293] = {.lex_state = 281},
  [294] = {.lex_state = 281},
  [295] = {.lex_state = 281},
  [296] = {.lex_state = 282},
  [297] = {.lex_state = 282},
  [298] = {.lex_state = 282},
  [299] = {.lex_state = 282},
  [300] = {.lex_state = 281},
  [301] = {.lex_state = 282},
  [302] = {.lex_state = 282},
  [303] = {.lex_state = 282},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 282},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 7},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 282},
  [316] = {.lex_state = 282},
  [317] = {.lex_state = 9},
  [318] = {.lex_state = 9},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 9},
  [321] = {.lex_state = 281},
  [322] = {.lex_state = 281},
  [323] = {.lex_state = 281},
  [324] = {.lex_state = 9},
  [325] = {.lex_state = 281},
  [326] = {.lex_state = 281},
  [327] = {.lex_state = 9},
  [328] = {.lex_state = 281},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 9},
  [332] = {.lex_state = 281},
  [333] = {.lex_state = 9},
  [334] = {.lex_state = 9},
  [335] = {.lex_state = 9},
  [336] = {.lex_state = 8},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 9},
  [339] = {.lex_state = 9},
  [340] = {.lex_state = 281},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 9},
  [343] = {.lex_state = 8},
  [344] = {.lex_state = 9},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 9},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 9},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 281},
  [353] = {.lex_state = 9},
  [354] = {.lex_state = 281},
  [355] = {.lex_state = 8},
  [356] = {.lex_state = 9},
  [357] = {.lex_state = 281},
  [358] = {.lex_state = 9},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 9},
  [361] = {.lex_state = 9},
  [362] = {.lex_state = 9},
  [363] = {.lex_state = 9},
  [364] = {.lex_state = 9},
  [365] = {.lex_state = 9},
  [366] = {.lex_state = 9},
  [367] = {.lex_state = 9},
  [368] = {.lex_state = 9},
  [369] = {.lex_state = 9},
  [370] = {.lex_state = 9},
  [371] = {.lex_state = 281},
  [372] = {.lex_state = 9},
  [373] = {.lex_state = 9},
  [374] = {.lex_state = 9},
  [375] = {.lex_state = 9},
  [376] = {.lex_state = 9},
  [377] = {.lex_state = 9},
  [378] = {.lex_state = 9},
  [379] = {.lex_state = 9},
  [380] = {.lex_state = 9},
  [381] = {.lex_state = 9},
  [382] = {.lex_state = 9},
  [383] = {.lex_state = 9},
  [384] = {.lex_state = 9},
  [385] = {.lex_state = 9},
  [386] = {.lex_state = 9},
  [387] = {.lex_state = 9},
  [388] = {.lex_state = 9},
  [389] = {.lex_state = 9},
  [390] = {.lex_state = 9},
  [391] = {.lex_state = 281},
  [392] = {.lex_state = 9},
  [393] = {.lex_state = 281},
  [394] = {.lex_state = 9},
  [395] = {.lex_state = 9},
  [396] = {.lex_state = 281},
  [397] = {.lex_state = 9},
  [398] = {.lex_state = 281},
  [399] = {.lex_state = 281},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 8},
  [402] = {.lex_state = 1},
  [403] = {.lex_state = 281},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 1},
  [407] = {.lex_state = 281},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 281},
  [410] = {.lex_state = 281},
  [411] = {.lex_state = 281},
  [412] = {.lex_state = 8},
  [413] = {.lex_state = 7},
  [414] = {.lex_state = 281},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 8},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 281},
  [420] = {.lex_state = 281},
  [421] = {.lex_state = 281},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 281},
  [425] = {.lex_state = 1},
  [426] = {.lex_state = 1},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 281},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 282},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 282},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 282},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 281},
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
  [492] = {.lex_state = 281},
  [493] = {.lex_state = 281},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 282},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 282},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 282},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 282},
  [507] = {.lex_state = 1},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 282},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 281},
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
  [526] = {.lex_state = 1},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 282},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 282},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 282},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 1},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 1},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 1},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 281},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 8},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
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
  [592] = {.lex_state = 1},
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
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 282},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
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
    [sym_tsql_file] = STATE(501),
    [sym_batch] = STATE(35),
    [sym_go_statement] = STATE(236),
    [sym_execute_body_batch] = STATE(64),
    [sym_func_proc_name_server_database_schema] = STATE(41),
    [sym_func_proc_name_database_schema] = STATE(105),
    [sym_func_proc_name_schema] = STATE(128),
    [sym_sql_clauses] = STATE(49),
    [sym_another_statement] = STATE(301),
    [sym_execute_statement] = STATE(299),
    [sym_dml_clause] = STATE(301),
    [sym_select_statement_standalone] = STATE(280),
    [sym_select_statement] = STATE(278),
    [sym_query_expression] = STATE(255),
    [sym_query_specification] = STATE(256),
    [sym_id_] = STATE(89),
    [sym_keyword] = STATE(53),
    [aux_sym_tsql_file_repeat1] = STATE(35),
    [aux_sym_batch_repeat1] = STATE(49),
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
  [0] = 32,
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
    ACTIONS(37), 1,
      sym_checksum_agg_,
    ACTIONS(43), 1,
      sym_ntile_,
    ACTIONS(47), 1,
      sym_binary,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      aux_sym_real__token1,
    ACTIONS(53), 1,
      aux_sym_id__token1,
    ACTIONS(55), 1,
      aux_sym_id__token2,
    STATE(39), 1,
      sym_LOCAL_ID_,
    STATE(54), 1,
      sym_expression,
    STATE(81), 1,
      sym_keyword,
    STATE(88), 1,
      sym_id_,
    STATE(140), 1,
      sym_primitive_constant,
    STATE(173), 1,
      sym_select_list_elem,
    STATE(251), 1,
      sym_select_list,
    STATE(498), 1,
      sym_column_alias,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(29), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(31), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(33), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(35), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(39), 2,
      sym_count_,
      sym_count_big_,
    STATE(190), 2,
      sym_udt_elem,
      sym_expression_elem,
    ACTIONS(45), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(131), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(132), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(134), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(41), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [120] = 31,
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
    ACTIONS(37), 1,
      sym_checksum_agg_,
    ACTIONS(43), 1,
      sym_ntile_,
    ACTIONS(47), 1,
      sym_binary,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      aux_sym_real__token1,
    ACTIONS(53), 1,
      aux_sym_id__token1,
    ACTIONS(55), 1,
      aux_sym_id__token2,
    STATE(39), 1,
      sym_LOCAL_ID_,
    STATE(54), 1,
      sym_expression,
    STATE(81), 1,
      sym_keyword,
    STATE(88), 1,
      sym_id_,
    STATE(140), 1,
      sym_primitive_constant,
    STATE(212), 1,
      sym_select_list_elem,
    STATE(498), 1,
      sym_column_alias,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(29), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(31), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(33), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(35), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(39), 2,
      sym_count_,
      sym_count_big_,
    STATE(190), 2,
      sym_udt_elem,
      sym_expression_elem,
    ACTIONS(45), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(131), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(132), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(134), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(41), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [237] = 28,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_constant_token3,
    ACTIONS(37), 1,
      sym_checksum_agg_,
    ACTIONS(43), 1,
      sym_ntile_,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      aux_sym_real__token1,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(59), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(61), 1,
      sym_asterisk,
    STATE(53), 1,
      sym_keyword,
    STATE(162), 1,
      sym_id_,
    STATE(516), 1,
      sym_expression,
    STATE(539), 1,
      sym_all_distinct_expression,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(29), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(31), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(33), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(35), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(39), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(47), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(63), 2,
      sym_all_,
      sym_distinct_,
    STATE(140), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(45), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(131), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(132), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(134), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(41), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [347] = 28,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_constant_token3,
    ACTIONS(37), 1,
      sym_checksum_agg_,
    ACTIONS(43), 1,
      sym_ntile_,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      aux_sym_real__token1,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(59), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(65), 1,
      sym_asterisk,
    STATE(53), 1,
      sym_keyword,
    STATE(162), 1,
      sym_id_,
    STATE(516), 1,
      sym_expression,
    STATE(519), 1,
      sym_all_distinct_expression,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(29), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(31), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(33), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(35), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(39), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(47), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(63), 2,
      sym_all_,
      sym_distinct_,
    STATE(140), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(45), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(131), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(132), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(134), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(41), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [457] = 28,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_constant_token3,
    ACTIONS(37), 1,
      sym_checksum_agg_,
    ACTIONS(43), 1,
      sym_ntile_,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      aux_sym_real__token1,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(59), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(67), 1,
      sym_asterisk,
    STATE(53), 1,
      sym_keyword,
    STATE(162), 1,
      sym_id_,
    STATE(512), 1,
      sym_all_distinct_expression,
    STATE(516), 1,
      sym_expression,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(29), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(31), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(33), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(35), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(39), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(47), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(63), 2,
      sym_all_,
      sym_distinct_,
    STATE(140), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(45), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(131), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(132), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(134), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(41), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [567] = 27,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_constant_token3,
    ACTIONS(37), 1,
      sym_checksum_agg_,
    ACTIONS(43), 1,
      sym_ntile_,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      aux_sym_real__token1,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(59), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(53), 1,
      sym_keyword,
    STATE(162), 1,
      sym_id_,
    STATE(516), 1,
      sym_expression,
    STATE(520), 1,
      sym_all_distinct_expression,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(29), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(31), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(33), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(35), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(39), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(47), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(63), 2,
      sym_all_,
      sym_distinct_,
    STATE(140), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(45), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(131), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(132), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(134), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(41), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [674] = 27,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_constant_token3,
    ACTIONS(37), 1,
      sym_checksum_agg_,
    ACTIONS(43), 1,
      sym_ntile_,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      aux_sym_real__token1,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(59), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(53), 1,
      sym_keyword,
    STATE(162), 1,
      sym_id_,
    STATE(516), 1,
      sym_expression,
    STATE(517), 1,
      sym_all_distinct_expression,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(29), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(31), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(33), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(35), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(39), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(47), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(63), 2,
      sym_all_,
      sym_distinct_,
    STATE(140), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(45), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(131), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(132), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(134), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(41), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [781] = 27,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_constant_token3,
    ACTIONS(37), 1,
      sym_checksum_agg_,
    ACTIONS(43), 1,
      sym_ntile_,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      aux_sym_real__token1,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(59), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(53), 1,
      sym_keyword,
    STATE(162), 1,
      sym_id_,
    STATE(516), 1,
      sym_expression,
    STATE(538), 1,
      sym_all_distinct_expression,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(29), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(31), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(33), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(35), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(39), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(47), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(63), 2,
      sym_all_,
      sym_distinct_,
    STATE(140), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(45), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(131), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(132), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(134), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(41), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [888] = 27,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_constant_token3,
    ACTIONS(37), 1,
      sym_checksum_agg_,
    ACTIONS(43), 1,
      sym_ntile_,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      aux_sym_real__token1,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(59), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(53), 1,
      sym_keyword,
    STATE(162), 1,
      sym_id_,
    STATE(513), 1,
      sym_all_distinct_expression,
    STATE(516), 1,
      sym_expression,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(29), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(31), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(33), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(35), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(39), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(47), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(63), 2,
      sym_all_,
      sym_distinct_,
    STATE(140), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(45), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(131), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(132), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(134), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(41), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [995] = 27,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_constant_token3,
    ACTIONS(37), 1,
      sym_checksum_agg_,
    ACTIONS(43), 1,
      sym_ntile_,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      aux_sym_real__token1,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(59), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(53), 1,
      sym_keyword,
    STATE(162), 1,
      sym_id_,
    STATE(511), 1,
      sym_all_distinct_expression,
    STATE(516), 1,
      sym_expression,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(29), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(31), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(33), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(35), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(39), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(47), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(63), 2,
      sym_all_,
      sym_distinct_,
    STATE(140), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(45), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(131), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(132), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(134), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(41), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1102] = 27,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_constant_token3,
    ACTIONS(37), 1,
      sym_checksum_agg_,
    ACTIONS(43), 1,
      sym_ntile_,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      aux_sym_real__token1,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(59), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(53), 1,
      sym_keyword,
    STATE(162), 1,
      sym_id_,
    STATE(516), 1,
      sym_expression,
    STATE(540), 1,
      sym_all_distinct_expression,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(29), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(31), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(33), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(35), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(39), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(47), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(63), 2,
      sym_all_,
      sym_distinct_,
    STATE(140), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(45), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(131), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(132), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(134), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(41), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1209] = 26,
    ACTIONS(69), 1,
      aux_sym_go_statement_token1,
    ACTIONS(71), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(75), 1,
      aux_sym_constant_token3,
    ACTIONS(87), 1,
      sym_checksum_agg_,
    ACTIONS(93), 1,
      sym_ntile_,
    ACTIONS(97), 1,
      anon_sym_DOLLAR,
    ACTIONS(99), 1,
      aux_sym_real__token1,
    ACTIONS(101), 1,
      aux_sym_id__token1,
    ACTIONS(103), 1,
      aux_sym_id__token2,
    STATE(135), 1,
      sym_keyword,
    STATE(261), 1,
      sym_id_,
    STATE(352), 1,
      sym_expression,
    STATE(424), 1,
      sym_expression_list_,
    ACTIONS(73), 2,
      sym_default,
      sym_null_,
    ACTIONS(77), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(79), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(81), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(83), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(85), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(89), 2,
      sym_count_,
      sym_count_big_,
    STATE(273), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(95), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(267), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(269), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(272), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(91), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1312] = 26,
    ACTIONS(69), 1,
      aux_sym_go_statement_token1,
    ACTIONS(71), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(75), 1,
      aux_sym_constant_token3,
    ACTIONS(87), 1,
      sym_checksum_agg_,
    ACTIONS(93), 1,
      sym_ntile_,
    ACTIONS(97), 1,
      anon_sym_DOLLAR,
    ACTIONS(99), 1,
      aux_sym_real__token1,
    ACTIONS(101), 1,
      aux_sym_id__token1,
    ACTIONS(103), 1,
      aux_sym_id__token2,
    STATE(135), 1,
      sym_keyword,
    STATE(261), 1,
      sym_id_,
    STATE(290), 1,
      sym_expression,
    STATE(371), 1,
      sym_order_by_expression,
    ACTIONS(73), 2,
      sym_default,
      sym_null_,
    ACTIONS(77), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(79), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(81), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(83), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(85), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(89), 2,
      sym_count_,
      sym_count_big_,
    STATE(273), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(95), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(267), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(269), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(272), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(91), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1415] = 26,
    ACTIONS(69), 1,
      aux_sym_go_statement_token1,
    ACTIONS(71), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(75), 1,
      aux_sym_constant_token3,
    ACTIONS(87), 1,
      sym_checksum_agg_,
    ACTIONS(93), 1,
      sym_ntile_,
    ACTIONS(97), 1,
      anon_sym_DOLLAR,
    ACTIONS(99), 1,
      aux_sym_real__token1,
    ACTIONS(101), 1,
      aux_sym_id__token1,
    ACTIONS(103), 1,
      aux_sym_id__token2,
    STATE(135), 1,
      sym_keyword,
    STATE(261), 1,
      sym_id_,
    STATE(290), 1,
      sym_expression,
    STATE(409), 1,
      sym_order_by_expression,
    ACTIONS(73), 2,
      sym_default,
      sym_null_,
    ACTIONS(77), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(79), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(81), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(83), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(85), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(89), 2,
      sym_count_,
      sym_count_big_,
    STATE(273), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(95), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(267), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(269), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(272), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(91), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1518] = 26,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_constant_token3,
    ACTIONS(37), 1,
      sym_checksum_agg_,
    ACTIONS(43), 1,
      sym_ntile_,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      aux_sym_real__token1,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(59), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(53), 1,
      sym_keyword,
    STATE(162), 1,
      sym_id_,
    STATE(424), 1,
      sym_expression_list_,
    STATE(433), 1,
      sym_expression,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(29), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(31), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(33), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(35), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(39), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(47), 2,
      sym_string_lit,
      sym_binary,
    STATE(140), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(45), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(131), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(132), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(134), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(41), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1621] = 25,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_constant_token3,
    ACTIONS(37), 1,
      sym_checksum_agg_,
    ACTIONS(43), 1,
      sym_ntile_,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      aux_sym_real__token1,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(59), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(53), 1,
      sym_keyword,
    STATE(162), 1,
      sym_id_,
    STATE(488), 1,
      sym_expression,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(29), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(31), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(33), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(35), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(39), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(47), 2,
      sym_string_lit,
      sym_binary,
    STATE(140), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(45), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(131), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(132), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(134), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(41), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1721] = 25,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_constant_token3,
    ACTIONS(37), 1,
      sym_checksum_agg_,
    ACTIONS(43), 1,
      sym_ntile_,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      aux_sym_real__token1,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(59), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(53), 1,
      sym_keyword,
    STATE(162), 1,
      sym_id_,
    STATE(396), 1,
      sym_expression,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(29), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(31), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(33), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(35), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(39), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(47), 2,
      sym_string_lit,
      sym_binary,
    STATE(140), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(45), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(131), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(132), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(134), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(41), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1821] = 25,
    ACTIONS(105), 1,
      aux_sym_go_statement_token1,
    ACTIONS(107), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(111), 1,
      aux_sym_constant_token3,
    ACTIONS(123), 1,
      sym_checksum_agg_,
    ACTIONS(129), 1,
      sym_ntile_,
    ACTIONS(133), 1,
      anon_sym_DOLLAR,
    ACTIONS(135), 1,
      aux_sym_real__token1,
    ACTIONS(137), 1,
      aux_sym_id__token1,
    ACTIONS(139), 1,
      aux_sym_id__token2,
    STATE(162), 1,
      sym_id_,
    STATE(203), 1,
      sym_expression,
    STATE(229), 1,
      sym_keyword,
    ACTIONS(109), 2,
      sym_default,
      sym_null_,
    ACTIONS(113), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(115), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(117), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(119), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(121), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(125), 2,
      sym_count_,
      sym_count_big_,
    STATE(202), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(131), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(199), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(200), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(201), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(127), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1921] = 25,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_constant_token3,
    ACTIONS(37), 1,
      sym_checksum_agg_,
    ACTIONS(43), 1,
      sym_ntile_,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      aux_sym_real__token1,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(59), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(53), 1,
      sym_keyword,
    STATE(162), 1,
      sym_id_,
    STATE(523), 1,
      sym_expression,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(29), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(31), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(33), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(35), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(39), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(47), 2,
      sym_string_lit,
      sym_binary,
    STATE(140), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(45), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(131), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(132), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(134), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(41), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2021] = 25,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_constant_token3,
    ACTIONS(37), 1,
      sym_checksum_agg_,
    ACTIONS(43), 1,
      sym_ntile_,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      aux_sym_real__token1,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(59), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(53), 1,
      sym_keyword,
    STATE(162), 1,
      sym_id_,
    STATE(612), 1,
      sym_expression,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(29), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(31), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(33), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(35), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(39), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(47), 2,
      sym_string_lit,
      sym_binary,
    STATE(140), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(45), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(131), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(132), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(134), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(41), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2121] = 25,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_constant_token3,
    ACTIONS(37), 1,
      sym_checksum_agg_,
    ACTIONS(43), 1,
      sym_ntile_,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      aux_sym_real__token1,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(59), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(53), 1,
      sym_keyword,
    STATE(162), 1,
      sym_id_,
    STATE(450), 1,
      sym_expression,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(29), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(31), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(33), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(35), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(39), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(47), 2,
      sym_string_lit,
      sym_binary,
    STATE(140), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(45), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(131), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(132), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(134), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(41), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2221] = 25,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_constant_token3,
    ACTIONS(37), 1,
      sym_checksum_agg_,
    ACTIONS(43), 1,
      sym_ntile_,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      aux_sym_real__token1,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(59), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(53), 1,
      sym_keyword,
    STATE(162), 1,
      sym_id_,
    STATE(515), 1,
      sym_expression,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(29), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(31), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(33), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(35), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(39), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(47), 2,
      sym_string_lit,
      sym_binary,
    STATE(140), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(45), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(131), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(132), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(134), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(41), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2321] = 25,
    ACTIONS(69), 1,
      aux_sym_go_statement_token1,
    ACTIONS(71), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(75), 1,
      aux_sym_constant_token3,
    ACTIONS(87), 1,
      sym_checksum_agg_,
    ACTIONS(93), 1,
      sym_ntile_,
    ACTIONS(97), 1,
      anon_sym_DOLLAR,
    ACTIONS(99), 1,
      aux_sym_real__token1,
    ACTIONS(101), 1,
      aux_sym_id__token1,
    ACTIONS(103), 1,
      aux_sym_id__token2,
    STATE(135), 1,
      sym_keyword,
    STATE(261), 1,
      sym_id_,
    STATE(396), 1,
      sym_expression,
    ACTIONS(73), 2,
      sym_default,
      sym_null_,
    ACTIONS(77), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(79), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(81), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(83), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(85), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(89), 2,
      sym_count_,
      sym_count_big_,
    STATE(273), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(95), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(267), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(269), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(272), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(91), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2421] = 25,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_constant_token3,
    ACTIONS(37), 1,
      sym_checksum_agg_,
    ACTIONS(43), 1,
      sym_ntile_,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      aux_sym_real__token1,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(59), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(53), 1,
      sym_keyword,
    STATE(162), 1,
      sym_id_,
    STATE(602), 1,
      sym_expression,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(29), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(31), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(33), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(35), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(39), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(47), 2,
      sym_string_lit,
      sym_binary,
    STATE(140), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(45), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(131), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(132), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(134), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(41), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2521] = 25,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_constant_token3,
    ACTIONS(37), 1,
      sym_checksum_agg_,
    ACTIONS(43), 1,
      sym_ntile_,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      aux_sym_real__token1,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(59), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(53), 1,
      sym_keyword,
    STATE(162), 1,
      sym_id_,
    STATE(561), 1,
      sym_expression,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(29), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(31), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(33), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(35), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(39), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(47), 2,
      sym_string_lit,
      sym_binary,
    STATE(140), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(45), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(131), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(132), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(134), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(41), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2621] = 25,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_constant_token3,
    ACTIONS(37), 1,
      sym_checksum_agg_,
    ACTIONS(43), 1,
      sym_ntile_,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      aux_sym_real__token1,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(59), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(53), 1,
      sym_keyword,
    STATE(162), 1,
      sym_id_,
    STATE(499), 1,
      sym_expression,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(29), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(31), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(33), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(35), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(39), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(47), 2,
      sym_string_lit,
      sym_binary,
    STATE(140), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(45), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(131), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(132), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(134), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(41), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2721] = 25,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_constant_token3,
    ACTIONS(37), 1,
      sym_checksum_agg_,
    ACTIONS(43), 1,
      sym_ntile_,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      aux_sym_real__token1,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(59), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(53), 1,
      sym_keyword,
    STATE(162), 1,
      sym_id_,
    STATE(562), 1,
      sym_expression,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(29), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(31), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(33), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(35), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(39), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(47), 2,
      sym_string_lit,
      sym_binary,
    STATE(140), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(45), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(131), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(132), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(134), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(41), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2821] = 25,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_constant_token3,
    ACTIONS(37), 1,
      sym_checksum_agg_,
    ACTIONS(43), 1,
      sym_ntile_,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      aux_sym_real__token1,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(59), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(53), 1,
      sym_keyword,
    STATE(162), 1,
      sym_id_,
    STATE(572), 1,
      sym_expression,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(29), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(31), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(33), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(35), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(39), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(47), 2,
      sym_string_lit,
      sym_binary,
    STATE(140), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(45), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(131), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(132), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(134), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(41), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2921] = 25,
    ACTIONS(105), 1,
      aux_sym_go_statement_token1,
    ACTIONS(107), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(111), 1,
      aux_sym_constant_token3,
    ACTIONS(123), 1,
      sym_checksum_agg_,
    ACTIONS(129), 1,
      sym_ntile_,
    ACTIONS(133), 1,
      anon_sym_DOLLAR,
    ACTIONS(135), 1,
      aux_sym_real__token1,
    ACTIONS(137), 1,
      aux_sym_id__token1,
    ACTIONS(139), 1,
      aux_sym_id__token2,
    STATE(162), 1,
      sym_id_,
    STATE(215), 1,
      sym_expression,
    STATE(229), 1,
      sym_keyword,
    ACTIONS(109), 2,
      sym_default,
      sym_null_,
    ACTIONS(113), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(115), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(117), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(119), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(121), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(125), 2,
      sym_count_,
      sym_count_big_,
    STATE(202), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(131), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(199), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(200), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(201), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(127), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [3021] = 25,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_constant_token3,
    ACTIONS(37), 1,
      sym_checksum_agg_,
    ACTIONS(43), 1,
      sym_ntile_,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      aux_sym_real__token1,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(59), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(53), 1,
      sym_keyword,
    STATE(162), 1,
      sym_id_,
    STATE(611), 1,
      sym_expression,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(29), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(31), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(33), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(35), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(39), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(47), 2,
      sym_string_lit,
      sym_binary,
    STATE(140), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(45), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(131), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(132), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(134), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(41), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [3121] = 25,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_constant_token3,
    ACTIONS(37), 1,
      sym_checksum_agg_,
    ACTIONS(43), 1,
      sym_ntile_,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      aux_sym_real__token1,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(59), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(53), 1,
      sym_keyword,
    STATE(162), 1,
      sym_id_,
    STATE(537), 1,
      sym_expression,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(29), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(31), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(33), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(35), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(39), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(47), 2,
      sym_string_lit,
      sym_binary,
    STATE(140), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(45), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(131), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(132), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(134), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(41), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [3221] = 25,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_constant_token3,
    ACTIONS(37), 1,
      sym_checksum_agg_,
    ACTIONS(43), 1,
      sym_ntile_,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      aux_sym_real__token1,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(59), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(53), 1,
      sym_keyword,
    STATE(162), 1,
      sym_id_,
    STATE(573), 1,
      sym_expression,
    ACTIONS(21), 2,
      sym_default,
      sym_null_,
    ACTIONS(29), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(31), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(33), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(35), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(39), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(47), 2,
      sym_string_lit,
      sym_binary,
    STATE(140), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(45), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(131), 3,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    STATE(132), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(134), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    ACTIONS(41), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [3321] = 2,
    ACTIONS(143), 5,
      aux_sym_execute_statement_arg_named_token1,
      sym_string_lit,
      sym_binary,
      anon_sym_DOLLAR,
      aux_sym_id__token2,
    ACTIONS(141), 29,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      aux_sym_constant_token3,
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
  [3360] = 22,
    ACTIONS(5), 1,
      aux_sym_go_statement_token1,
    ACTIONS(9), 1,
      sym_execute,
    ACTIONS(11), 1,
      sym_select,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(147), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(149), 1,
      aux_sym_id__token1,
    ACTIONS(151), 1,
      aux_sym_id__token2,
    STATE(42), 1,
      sym_func_proc_name_server_database_schema,
    STATE(109), 1,
      sym_id_,
    STATE(116), 1,
      sym_execute_body_batch,
    STATE(130), 1,
      sym_keyword,
    STATE(153), 1,
      sym_func_proc_name_schema,
    STATE(154), 1,
      sym_func_proc_name_database_schema,
    STATE(236), 1,
      sym_go_statement,
    STATE(255), 1,
      sym_query_expression,
    STATE(256), 1,
      sym_query_specification,
    STATE(278), 1,
      sym_select_statement,
    STATE(280), 1,
      sym_select_statement_standalone,
    STATE(299), 1,
      sym_execute_statement,
    STATE(36), 2,
      sym_batch,
      aux_sym_tsql_file_repeat1,
    STATE(49), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(301), 2,
      sym_another_statement,
      sym_dml_clause,
  [3430] = 22,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 1,
      aux_sym_go_statement_token1,
    ACTIONS(158), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(161), 1,
      sym_execute,
    ACTIONS(164), 1,
      sym_select,
    ACTIONS(167), 1,
      aux_sym_id__token1,
    ACTIONS(170), 1,
      aux_sym_id__token2,
    STATE(42), 1,
      sym_func_proc_name_server_database_schema,
    STATE(109), 1,
      sym_id_,
    STATE(116), 1,
      sym_execute_body_batch,
    STATE(130), 1,
      sym_keyword,
    STATE(153), 1,
      sym_func_proc_name_schema,
    STATE(154), 1,
      sym_func_proc_name_database_schema,
    STATE(236), 1,
      sym_go_statement,
    STATE(255), 1,
      sym_query_expression,
    STATE(256), 1,
      sym_query_specification,
    STATE(278), 1,
      sym_select_statement,
    STATE(280), 1,
      sym_select_statement_standalone,
    STATE(299), 1,
      sym_execute_statement,
    STATE(36), 2,
      sym_batch,
      aux_sym_tsql_file_repeat1,
    STATE(49), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(301), 2,
      sym_another_statement,
      sym_dml_clause,
  [3500] = 14,
    ACTIONS(177), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(183), 1,
      aux_sym_constant_token2,
    ACTIONS(185), 1,
      sym_WITH,
    STATE(157), 1,
      sym_LOCAL_ID_,
    STATE(171), 1,
      sym_execute_statement_arg_named,
    STATE(172), 1,
      sym_execute_statement_arg_unnamed,
    STATE(195), 1,
      sym_execute_parameter,
    STATE(228), 1,
      sym_keyword,
    STATE(237), 1,
      sym_execute_statement_arg,
    ACTIONS(179), 2,
      sym_default,
      sym_null_,
    ACTIONS(181), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(198), 2,
      sym_constant,
      sym_id_,
    ACTIONS(173), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(175), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [3552] = 14,
    ACTIONS(177), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(183), 1,
      aux_sym_constant_token2,
    ACTIONS(191), 1,
      sym_WITH,
    STATE(157), 1,
      sym_LOCAL_ID_,
    STATE(171), 1,
      sym_execute_statement_arg_named,
    STATE(172), 1,
      sym_execute_statement_arg_unnamed,
    STATE(195), 1,
      sym_execute_parameter,
    STATE(228), 1,
      sym_keyword,
    STATE(240), 1,
      sym_execute_statement_arg,
    ACTIONS(179), 2,
      sym_default,
      sym_null_,
    ACTIONS(181), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(198), 2,
      sym_constant,
      sym_id_,
    ACTIONS(187), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(189), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [3604] = 5,
    ACTIONS(197), 1,
      anon_sym_EQ,
    STATE(19), 1,
      sym_assignment_operator,
    ACTIONS(193), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
    ACTIONS(195), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(199), 8,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [3637] = 2,
    ACTIONS(203), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(201), 15,
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
  [3663] = 16,
    ACTIONS(101), 1,
      aux_sym_id__token1,
    ACTIONS(103), 1,
      aux_sym_id__token2,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    ACTIONS(209), 1,
      anon_sym_SEMI,
    ACTIONS(211), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(217), 1,
      aux_sym_constant_token2,
    STATE(135), 1,
      sym_keyword,
    STATE(304), 1,
      sym_execute_statement_arg,
    STATE(305), 1,
      sym_execute_statement_arg_named,
    STATE(306), 1,
      sym_execute_statement_arg_unnamed,
    STATE(307), 1,
      sym_LOCAL_ID_,
    STATE(337), 1,
      sym_execute_parameter,
    ACTIONS(213), 2,
      sym_default,
      sym_null_,
    ACTIONS(215), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(347), 2,
      sym_constant,
      sym_id_,
    ACTIONS(207), 3,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [3717] = 15,
    ACTIONS(101), 1,
      aux_sym_id__token1,
    ACTIONS(103), 1,
      aux_sym_id__token2,
    ACTIONS(209), 1,
      anon_sym_SEMI,
    ACTIONS(211), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(217), 1,
      aux_sym_constant_token2,
    STATE(135), 1,
      sym_keyword,
    STATE(304), 1,
      sym_execute_statement_arg,
    STATE(305), 1,
      sym_execute_statement_arg_named,
    STATE(306), 1,
      sym_execute_statement_arg_unnamed,
    STATE(307), 1,
      sym_LOCAL_ID_,
    STATE(337), 1,
      sym_execute_parameter,
    ACTIONS(213), 2,
      sym_default,
      sym_null_,
    ACTIONS(215), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(347), 2,
      sym_constant,
      sym_id_,
    ACTIONS(207), 3,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [3768] = 11,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      aux_sym_AS_token1,
    ACTIONS(227), 1,
      sym_string_lit,
    STATE(56), 1,
      sym_udt_method_arguments,
    STATE(214), 1,
      sym_id_,
    STATE(219), 1,
      sym_as_column_alias,
    STATE(221), 1,
      sym_column_alias,
    STATE(229), 1,
      sym_keyword,
    STATE(310), 1,
      sym_as,
    ACTIONS(219), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(221), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [3810] = 2,
    ACTIONS(203), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(201), 12,
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
  [3834] = 3,
    ACTIONS(233), 1,
      sym_PLUS,
    ACTIONS(231), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(229), 10,
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
  [3859] = 3,
    ACTIONS(239), 1,
      sym_PLUS,
    ACTIONS(237), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(235), 10,
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
  [3884] = 2,
    ACTIONS(243), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(241), 11,
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
  [3907] = 13,
    ACTIONS(247), 1,
      aux_sym_go_statement_token1,
    ACTIONS(250), 1,
      sym_execute,
    ACTIONS(253), 1,
      sym_select,
    ACTIONS(256), 1,
      aux_sym_id__token1,
    STATE(255), 1,
      sym_query_expression,
    STATE(256), 1,
      sym_query_specification,
    STATE(278), 1,
      sym_select_statement,
    STATE(280), 1,
      sym_select_statement_standalone,
    STATE(299), 1,
      sym_execute_statement,
    STATE(57), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(247), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    STATE(301), 2,
      sym_another_statement,
      sym_dml_clause,
    ACTIONS(245), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [3952] = 13,
    ACTIONS(260), 1,
      aux_sym_go_statement_token1,
    ACTIONS(263), 1,
      sym_execute,
    ACTIONS(266), 1,
      sym_select,
    ACTIONS(269), 1,
      aux_sym_id__token1,
    STATE(255), 1,
      sym_query_expression,
    STATE(256), 1,
      sym_query_specification,
    STATE(278), 1,
      sym_select_statement,
    STATE(280), 1,
      sym_select_statement_standalone,
    STATE(299), 1,
      sym_execute_statement,
    STATE(57), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(248), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    STATE(301), 2,
      sym_another_statement,
      sym_dml_clause,
    ACTIONS(258), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [3997] = 14,
    ACTIONS(69), 1,
      aux_sym_go_statement_token1,
    ACTIONS(101), 1,
      aux_sym_id__token1,
    ACTIONS(103), 1,
      aux_sym_id__token2,
    ACTIONS(211), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(217), 1,
      aux_sym_constant_token2,
    STATE(135), 1,
      sym_keyword,
    STATE(305), 1,
      sym_execute_statement_arg_named,
    STATE(306), 1,
      sym_execute_statement_arg_unnamed,
    STATE(307), 1,
      sym_LOCAL_ID_,
    STATE(329), 1,
      sym_execute_statement_arg,
    STATE(337), 1,
      sym_execute_parameter,
    ACTIONS(213), 2,
      sym_default,
      sym_null_,
    ACTIONS(215), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(347), 2,
      sym_constant,
      sym_id_,
  [4043] = 14,
    ACTIONS(177), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(183), 1,
      aux_sym_constant_token2,
    ACTIONS(271), 1,
      aux_sym_go_statement_token1,
    ACTIONS(273), 1,
      aux_sym_id__token1,
    ACTIONS(275), 1,
      aux_sym_id__token2,
    STATE(157), 1,
      sym_LOCAL_ID_,
    STATE(159), 1,
      sym_execute_statement_arg_named,
    STATE(164), 1,
      sym_execute_statement_arg_unnamed,
    STATE(184), 1,
      sym_execute_statement_arg,
    STATE(195), 1,
      sym_execute_parameter,
    STATE(228), 1,
      sym_keyword,
    ACTIONS(179), 2,
      sym_default,
      sym_null_,
    ACTIONS(181), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(198), 2,
      sym_constant,
      sym_id_,
  [4089] = 4,
    ACTIONS(239), 1,
      sym_PLUS,
    ACTIONS(277), 1,
      aux_sym_execute_body_token1,
    ACTIONS(237), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(235), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [4115] = 2,
    ACTIONS(281), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(279), 11,
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
  [4137] = 12,
    ACTIONS(105), 1,
      aux_sym_go_statement_token1,
    ACTIONS(137), 1,
      aux_sym_id__token1,
    ACTIONS(139), 1,
      aux_sym_id__token2,
    ACTIONS(225), 1,
      aux_sym_AS_token1,
    ACTIONS(227), 1,
      sym_string_lit,
    STATE(214), 1,
      sym_id_,
    STATE(220), 1,
      sym_as_column_alias,
    STATE(221), 1,
      sym_column_alias,
    STATE(229), 1,
      sym_keyword,
    STATE(310), 1,
      sym_as,
    ACTIONS(285), 3,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
    ACTIONS(283), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
  [4179] = 2,
    ACTIONS(289), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(287), 10,
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
  [4201] = 9,
    ACTIONS(225), 1,
      aux_sym_AS_token1,
    ACTIONS(227), 1,
      sym_string_lit,
    STATE(214), 1,
      sym_id_,
    STATE(221), 1,
      sym_column_alias,
    STATE(227), 1,
      sym_as_column_alias,
    STATE(229), 1,
      sym_keyword,
    STATE(310), 1,
      sym_as,
    ACTIONS(291), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(293), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [4237] = 11,
    ACTIONS(299), 1,
      sym_execute,
    ACTIONS(302), 1,
      sym_select,
    STATE(255), 1,
      sym_query_expression,
    STATE(256), 1,
      sym_query_specification,
    STATE(278), 1,
      sym_select_statement,
    STATE(280), 1,
      sym_select_statement_standalone,
    STATE(299), 1,
      sym_execute_statement,
    ACTIONS(297), 2,
      aux_sym_go_statement_token1,
      aux_sym_id__token1,
    STATE(57), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(301), 2,
      sym_another_statement,
      sym_dml_clause,
    ACTIONS(295), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [4276] = 3,
    ACTIONS(309), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(305), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(307), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [4298] = 2,
    ACTIONS(313), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(311), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [4318] = 2,
    ACTIONS(317), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(315), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [4338] = 2,
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
  [4358] = 4,
    ACTIONS(327), 1,
      aux_sym_over__token1,
    STATE(127), 1,
      sym_over_clause,
    ACTIONS(325), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(323), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [4382] = 3,
    ACTIONS(333), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(329), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(331), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [4404] = 13,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(335), 1,
      aux_sym_go_statement_token1,
    ACTIONS(337), 1,
      sym_execute,
    ACTIONS(339), 1,
      sym_select,
    STATE(241), 1,
      sym_go_statement,
    STATE(255), 1,
      sym_query_expression,
    STATE(256), 1,
      sym_query_specification,
    STATE(278), 1,
      sym_select_statement,
    STATE(280), 1,
      sym_select_statement_standalone,
    STATE(299), 1,
      sym_execute_statement,
    STATE(415), 1,
      aux_sym_tsql_file_repeat2,
    STATE(48), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(301), 2,
      sym_another_statement,
      sym_dml_clause,
  [4446] = 2,
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
  [4466] = 2,
    ACTIONS(243), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(241), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_body_token1,
      anon_sym_LPAREN,
      sym_string_lit,
      anon_sym_COLON_COLON,
      aux_sym_id__token2,
  [4486] = 2,
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
  [4506] = 3,
    ACTIONS(353), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(349), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(351), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [4528] = 2,
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
  [4548] = 2,
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
  [4568] = 4,
    ACTIONS(327), 1,
      aux_sym_over__token1,
    STATE(125), 1,
      sym_over_clause,
    ACTIONS(365), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(363), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [4592] = 2,
    ACTIONS(281), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(279), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [4612] = 14,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(59), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(367), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      sym_string_lit,
    ACTIONS(373), 1,
      aux_sym_id__token1,
    ACTIONS(375), 1,
      aux_sym_id__token2,
    STATE(52), 1,
      sym_LOCAL_ID_,
    STATE(68), 1,
      sym_id_,
    STATE(69), 1,
      sym_func_proc_name_schema,
    STATE(70), 1,
      sym_func_proc_name_database_schema,
    STATE(72), 1,
      sym_keyword,
    STATE(265), 1,
      sym_execute_body,
    STATE(37), 2,
      sym_func_proc_name_server_database_schema,
      sym_execute_var_string,
  [4656] = 2,
    ACTIONS(379), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(377), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [4676] = 3,
    ACTIONS(385), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(381), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(383), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [4698] = 3,
    ACTIONS(391), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(387), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(389), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [4720] = 3,
    ACTIONS(397), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(393), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(395), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [4742] = 6,
    ACTIONS(403), 1,
      aux_sym_constant_token3,
    STATE(315), 1,
      sym_integer,
    ACTIONS(243), 2,
      sym_default,
      sym_null_,
    ACTIONS(399), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(241), 4,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(401), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [4770] = 2,
    ACTIONS(407), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(405), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [4790] = 2,
    ACTIONS(411), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(409), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [4810] = 2,
    ACTIONS(281), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(279), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_body_token1,
      anon_sym_LPAREN,
      sym_string_lit,
      anon_sym_COLON_COLON,
      aux_sym_id__token2,
  [4830] = 3,
    ACTIONS(413), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(395), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(393), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [4851] = 3,
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
  [4872] = 11,
    ACTIONS(69), 1,
      aux_sym_go_statement_token1,
    ACTIONS(71), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(101), 1,
      aux_sym_id__token1,
    ACTIONS(103), 1,
      aux_sym_id__token2,
    ACTIONS(217), 1,
      aux_sym_constant_token2,
    STATE(135), 1,
      sym_keyword,
    STATE(307), 1,
      sym_LOCAL_ID_,
    STATE(350), 1,
      sym_execute_parameter,
    ACTIONS(213), 2,
      sym_default,
      sym_null_,
    ACTIONS(215), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(347), 2,
      sym_constant,
      sym_id_,
  [4909] = 1,
    ACTIONS(201), 14,
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
  [4926] = 3,
    ACTIONS(421), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
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
  [4947] = 2,
    ACTIONS(243), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(241), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [4966] = 5,
    ACTIONS(427), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(429), 1,
      aux_sym_execute_body_token1,
    ACTIONS(431), 1,
      anon_sym_COLON_COLON,
    ACTIONS(423), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_string_lit,
      aux_sym_id__token2,
    ACTIONS(425), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [4991] = 3,
    ACTIONS(433), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
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
  [5012] = 11,
    ACTIONS(183), 1,
      aux_sym_constant_token2,
    ACTIONS(271), 1,
      aux_sym_go_statement_token1,
    ACTIONS(273), 1,
      aux_sym_id__token1,
    ACTIONS(275), 1,
      aux_sym_id__token2,
    ACTIONS(435), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(157), 1,
      sym_LOCAL_ID_,
    STATE(185), 1,
      sym_execute_parameter,
    STATE(228), 1,
      sym_keyword,
    ACTIONS(179), 2,
      sym_default,
      sym_null_,
    ACTIONS(181), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(198), 2,
      sym_constant,
      sym_id_,
  [5049] = 3,
    ACTIONS(437), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(331), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(329), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [5070] = 3,
    ACTIONS(419), 1,
      aux_sym_real__token2,
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
  [5091] = 3,
    ACTIONS(443), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
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
  [5112] = 3,
    ACTIONS(445), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(307), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(305), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [5133] = 2,
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
  [5151] = 2,
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
  [5169] = 2,
    ACTIONS(449), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(447), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [5187] = 2,
    ACTIONS(243), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(241), 7,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [5205] = 2,
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
  [5223] = 3,
    ACTIONS(455), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
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
  [5243] = 2,
    ACTIONS(459), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(457), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [5261] = 1,
    ACTIONS(241), 13,
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
  [5277] = 2,
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
  [5295] = 12,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(59), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(367), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(371), 1,
      sym_string_lit,
    ACTIONS(373), 1,
      aux_sym_id__token1,
    ACTIONS(375), 1,
      aux_sym_id__token2,
    STATE(46), 1,
      sym_LOCAL_ID_,
    STATE(68), 1,
      sym_id_,
    STATE(69), 1,
      sym_func_proc_name_schema,
    STATE(70), 1,
      sym_func_proc_name_database_schema,
    STATE(72), 1,
      sym_keyword,
    STATE(38), 2,
      sym_func_proc_name_server_database_schema,
      sym_execute_var_string,
  [5333] = 2,
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
  [5351] = 2,
    ACTIONS(467), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(465), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [5369] = 3,
    ACTIONS(469), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(329), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(331), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [5389] = 2,
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
  [5407] = 3,
    ACTIONS(475), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
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
  [5427] = 2,
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
  [5445] = 2,
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
  [5463] = 2,
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
  [5481] = 2,
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
  [5499] = 2,
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
  [5517] = 2,
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
  [5535] = 11,
    ACTIONS(335), 1,
      aux_sym_go_statement_token1,
    ACTIONS(337), 1,
      sym_execute,
    ACTIONS(339), 1,
      sym_select,
    STATE(250), 1,
      sym_go_statement,
    STATE(255), 1,
      sym_query_expression,
    STATE(256), 1,
      sym_query_specification,
    STATE(278), 1,
      sym_select_statement,
    STATE(280), 1,
      sym_select_statement_standalone,
    STATE(299), 1,
      sym_execute_statement,
    STATE(48), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(301), 2,
      sym_another_statement,
      sym_dml_clause,
  [5571] = 2,
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
  [5589] = 2,
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
  [5607] = 3,
    ACTIONS(505), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(393), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(395), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [5627] = 2,
    ACTIONS(411), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(409), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [5645] = 3,
    ACTIONS(507), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(305), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(307), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [5665] = 2,
    ACTIONS(407), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(405), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [5683] = 2,
    ACTIONS(313), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(311), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [5701] = 2,
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
  [5719] = 2,
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
  [5737] = 2,
    ACTIONS(317), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(315), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [5755] = 2,
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
  [5773] = 2,
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
  [5791] = 2,
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
  [5809] = 2,
    ACTIONS(281), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(279), 7,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [5827] = 2,
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
  [5845] = 2,
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
  [5863] = 2,
    ACTIONS(535), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(533), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [5881] = 2,
    ACTIONS(539), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(537), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [5899] = 1,
    ACTIONS(279), 13,
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
  [5915] = 2,
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
  [5933] = 2,
    ACTIONS(321), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(319), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [5951] = 3,
    ACTIONS(429), 1,
      aux_sym_execute_body_token1,
    ACTIONS(537), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
    ACTIONS(539), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [5971] = 3,
    ACTIONS(545), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
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
  [5991] = 2,
    ACTIONS(195), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(193), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      sym_string_lit,
      aux_sym_id__token2,
  [6009] = 2,
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
  [6027] = 2,
    ACTIONS(405), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(407), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6044] = 2,
    ACTIONS(409), 6,
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
  [6061] = 2,
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
  [6078] = 2,
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
  [6095] = 2,
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
  [6112] = 3,
    ACTIONS(555), 1,
      anon_sym_EQ,
    ACTIONS(201), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(203), 6,
      aux_sym_go_statement_token1,
      sym_OUTPUT,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [6131] = 2,
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
  [6148] = 2,
    ACTIONS(557), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
    ACTIONS(559), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [6165] = 2,
    ACTIONS(311), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(313), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6182] = 2,
    ACTIONS(315), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(317), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6199] = 2,
    ACTIONS(319), 6,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(321), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6216] = 2,
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
  [6233] = 2,
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
  [6250] = 4,
    ACTIONS(561), 1,
      aux_sym_over__token1,
    STATE(206), 1,
      sym_over_clause,
    ACTIONS(323), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(325), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [6271] = 4,
    ACTIONS(561), 1,
      aux_sym_over__token1,
    STATE(207), 1,
      sym_over_clause,
    ACTIONS(363), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(365), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [6292] = 3,
    ACTIONS(567), 1,
      sym_OUTPUT,
    ACTIONS(563), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(565), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [6310] = 4,
    ACTIONS(573), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(569), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(571), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [6330] = 3,
    STATE(161), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(575), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(577), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [6348] = 4,
    ACTIONS(583), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(579), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(581), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [6368] = 3,
    STATE(168), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(586), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(588), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [6386] = 2,
    ACTIONS(425), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(423), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      anon_sym_RPAREN,
      aux_sym_id__token2,
  [6402] = 3,
    STATE(176), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(586), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(588), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [6420] = 3,
    STATE(163), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(575), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(577), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [6438] = 5,
    ACTIONS(594), 1,
      aux_sym_AS_token1,
    ACTIONS(596), 1,
      sym_AT_KEYWORD,
    STATE(471), 1,
      sym_AS,
    ACTIONS(590), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(592), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6460] = 2,
    ACTIONS(201), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(203), 6,
      aux_sym_go_statement_token1,
      sym_OUTPUT,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [6476] = 5,
    ACTIONS(594), 1,
      aux_sym_AS_token1,
    ACTIONS(602), 1,
      sym_AT_KEYWORD,
    STATE(454), 1,
      sym_AS,
    ACTIONS(598), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(600), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6498] = 4,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(604), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(606), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [6518] = 3,
    ACTIONS(611), 1,
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
  [6536] = 3,
    ACTIONS(611), 1,
      aux_sym_real__token2,
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
  [6554] = 4,
    ACTIONS(613), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(575), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(577), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [6574] = 4,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(575), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(577), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [6594] = 4,
    ACTIONS(573), 1,
      anon_sym_COMMA,
    STATE(158), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(617), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(619), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [6614] = 4,
    ACTIONS(613), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(586), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(588), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [6634] = 4,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    STATE(176), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(586), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(588), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [6654] = 4,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    STATE(176), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(621), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(623), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [6674] = 3,
    ACTIONS(628), 1,
      aux_sym_over__token1,
    STATE(287), 1,
      sym_over_clause,
    ACTIONS(323), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [6691] = 2,
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
  [6706] = 2,
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
  [6721] = 2,
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
  [6736] = 2,
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
  [6751] = 2,
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
  [6766] = 2,
    ACTIONS(604), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(606), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [6781] = 2,
    ACTIONS(621), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(623), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [6796] = 2,
    ACTIONS(630), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(632), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [6811] = 2,
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
  [6826] = 2,
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
  [6841] = 2,
    ACTIONS(533), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(535), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [6856] = 2,
    ACTIONS(634), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(636), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [6871] = 2,
    ACTIONS(638), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(640), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [6886] = 2,
    ACTIONS(642), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(644), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [6901] = 2,
    ACTIONS(447), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(449), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [6916] = 3,
    ACTIONS(628), 1,
      aux_sym_over__token1,
    STATE(274), 1,
      sym_over_clause,
    ACTIONS(363), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [6933] = 4,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(598), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(600), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6952] = 2,
    ACTIONS(648), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(650), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [6967] = 4,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    STATE(232), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(598), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(600), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6986] = 2,
    ACTIONS(652), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(654), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [7001] = 2,
    ACTIONS(563), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(565), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [7016] = 2,
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
  [7031] = 2,
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
  [7046] = 2,
    ACTIONS(537), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(539), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [7061] = 2,
    ACTIONS(193), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(195), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [7076] = 2,
    ACTIONS(656), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(658), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [7091] = 2,
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
  [7106] = 2,
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
  [7121] = 2,
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
  [7136] = 2,
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
  [7151] = 2,
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
  [7166] = 2,
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
  [7181] = 2,
    ACTIONS(465), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(467), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [7196] = 2,
    ACTIONS(457), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(459), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [7211] = 2,
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
  [7226] = 2,
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
  [7241] = 2,
    ACTIONS(429), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(660), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [7256] = 2,
    ACTIONS(662), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(664), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [7271] = 2,
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
  [7286] = 2,
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
  [7301] = 2,
    ACTIONS(666), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(668), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [7316] = 2,
    ACTIONS(291), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(293), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [7331] = 2,
    ACTIONS(670), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(672), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [7346] = 2,
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
  [7361] = 4,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(678), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(680), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [7380] = 2,
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
  [7395] = 2,
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
  [7410] = 4,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    STATE(222), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(682), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(684), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [7429] = 4,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(682), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(684), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [7448] = 2,
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
  [7463] = 2,
    ACTIONS(279), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(281), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [7478] = 2,
    ACTIONS(279), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(281), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [7493] = 4,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(590), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(592), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [7512] = 4,
    ACTIONS(694), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(690), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(692), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [7531] = 4,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(697), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(699), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [7550] = 4,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    STATE(226), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(701), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(703), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [7569] = 2,
    ACTIONS(241), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(243), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [7584] = 2,
    ACTIONS(705), 1,
      aux_sym_real__token2,
    ACTIONS(439), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [7598] = 3,
    STATE(248), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(258), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(269), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [7614] = 3,
    ACTIONS(711), 1,
      sym_WITH,
    ACTIONS(707), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(709), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [7630] = 3,
    ACTIONS(717), 1,
      sym_AT_KEYWORD,
    ACTIONS(713), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(715), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [7646] = 9,
    ACTIONS(719), 1,
      aux_sym_go_statement_token1,
    ACTIONS(721), 1,
      aux_sym_id__token1,
    ACTIONS(723), 1,
      aux_sym_id__token2,
    STATE(266), 1,
      sym_table_source,
    STATE(275), 1,
      sym_table_source_item,
    STATE(286), 1,
      sym_table_sources,
    STATE(297), 1,
      sym_id_,
    STATE(302), 1,
      sym_full_table_name,
    STATE(303), 1,
      sym_keyword,
  [7674] = 3,
    ACTIONS(729), 1,
      sym_WITH,
    ACTIONS(725), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(727), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [7690] = 5,
    ACTIONS(731), 1,
      ts_builtin_sym_end,
    ACTIONS(734), 1,
      aux_sym_go_statement_token1,
    ACTIONS(245), 2,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    STATE(247), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(256), 3,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [7710] = 2,
    ACTIONS(740), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(738), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [7724] = 3,
    ACTIONS(746), 1,
      sym_AT_KEYWORD,
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
  [7740] = 2,
    ACTIONS(692), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(690), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [7754] = 4,
    ACTIONS(750), 1,
      aux_sym_go_statement_token1,
    STATE(245), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(748), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(753), 3,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [7772] = 2,
    ACTIONS(757), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(755), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [7786] = 4,
    ACTIONS(761), 1,
      aux_sym_go_statement_token1,
    STATE(245), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(759), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(764), 3,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [7804] = 4,
    ACTIONS(247), 1,
      aux_sym_go_statement_token1,
    STATE(245), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(245), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(256), 3,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [7822] = 4,
    ACTIONS(403), 1,
      aux_sym_constant_token3,
    STATE(315), 1,
      sym_integer,
    ACTIONS(399), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(401), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [7840] = 4,
    ACTIONS(247), 1,
      aux_sym_go_statement_token1,
    STATE(247), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(245), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(256), 3,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [7858] = 3,
    ACTIONS(770), 1,
      aux_sym_query_specification_token1,
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
  [7874] = 2,
    ACTIONS(705), 1,
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
  [7888] = 1,
    ACTIONS(493), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [7899] = 7,
    ACTIONS(772), 1,
      anon_sym_RPAREN,
    ACTIONS(774), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(776), 1,
      aux_sym_order_by_clause_token1,
    STATE(357), 1,
      sym_partition_by_clause,
    STATE(419), 1,
      sym_order_by_clause,
    STATE(547), 1,
      sym_row_or_range_clause,
    ACTIONS(778), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [7922] = 2,
    ACTIONS(780), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(782), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [7935] = 2,
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
  [7948] = 2,
    ACTIONS(788), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(790), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [7961] = 1,
    ACTIONS(477), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [7972] = 1,
    ACTIONS(457), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [7983] = 2,
    ACTIONS(792), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(794), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [7996] = 1,
    ACTIONS(423), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8007] = 1,
    ACTIONS(541), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8018] = 2,
    ACTIONS(796), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(798), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [8031] = 7,
    ACTIONS(774), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(776), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(800), 1,
      anon_sym_RPAREN,
    STATE(323), 1,
      sym_partition_by_clause,
    STATE(420), 1,
      sym_order_by_clause,
    STATE(521), 1,
      sym_row_or_range_clause,
    ACTIONS(778), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8054] = 2,
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
  [8067] = 2,
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
  [8080] = 1,
    ACTIONS(525), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8091] = 1,
    ACTIONS(451), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8102] = 1,
    ACTIONS(529), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8113] = 1,
    ACTIONS(509), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8124] = 2,
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
  [8137] = 1,
    ACTIONS(537), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8148] = 1,
    ACTIONS(193), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8159] = 1,
    ACTIONS(513), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8170] = 2,
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
  [8183] = 1,
    ACTIONS(501), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8194] = 2,
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
  [8207] = 2,
    ACTIONS(822), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(824), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [8220] = 1,
    ACTIONS(533), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8231] = 2,
    ACTIONS(826), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(828), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [8244] = 1,
    ACTIONS(447), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8255] = 1,
    ACTIONS(489), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8266] = 1,
    ACTIONS(485), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8277] = 3,
    ACTIONS(834), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(830), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_id__token2,
    ACTIONS(832), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [8292] = 1,
    ACTIONS(521), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8303] = 2,
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
  [8316] = 1,
    ACTIONS(517), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8327] = 2,
    ACTIONS(840), 1,
      anon_sym_EQ,
    ACTIONS(201), 7,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_OUTPUT,
      sym_execute,
      sym_select,
  [8340] = 7,
    ACTIONS(774), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(776), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(842), 1,
      anon_sym_RPAREN,
    STATE(326), 1,
      sym_partition_by_clause,
    STATE(407), 1,
      sym_order_by_clause,
    STATE(546), 1,
      sym_row_or_range_clause,
    ACTIONS(778), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8363] = 5,
    ACTIONS(846), 1,
      aux_sym_collation__token1,
    ACTIONS(848), 1,
      sym_asc_,
    ACTIONS(850), 1,
      sym_desc_,
    STATE(332), 1,
      sym_collation_,
    ACTIONS(844), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8382] = 1,
    ACTIONS(465), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8393] = 1,
    ACTIONS(547), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8404] = 1,
    ACTIONS(461), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8415] = 1,
    ACTIONS(471), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8426] = 1,
    ACTIONS(497), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8437] = 2,
    ACTIONS(241), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(243), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [8450] = 3,
    ACTIONS(856), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(852), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_id__token2,
    ACTIONS(854), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [8465] = 3,
    ACTIONS(862), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(858), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_id__token2,
    ACTIONS(860), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [8480] = 2,
    ACTIONS(864), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(866), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [8493] = 1,
    ACTIONS(481), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8504] = 3,
    ACTIONS(872), 1,
      anon_sym_SEMI,
    ACTIONS(868), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(870), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [8519] = 2,
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
  [8532] = 2,
    ACTIONS(279), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(281), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [8545] = 4,
    ACTIONS(880), 1,
      anon_sym_COMMA,
    ACTIONS(882), 1,
      anon_sym_SEMI,
    STATE(312), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(878), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [8561] = 2,
    STATE(313), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(575), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [8573] = 2,
    STATE(314), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(575), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [8585] = 2,
    ACTIONS(884), 1,
      sym_OUTPUT,
    ACTIONS(563), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [8597] = 2,
    ACTIONS(886), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(888), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [8609] = 3,
    ACTIONS(890), 1,
      anon_sym_COMMA,
    STATE(309), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(604), 5,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [8623] = 7,
    ACTIONS(105), 1,
      aux_sym_go_statement_token1,
    ACTIONS(137), 1,
      aux_sym_id__token1,
    ACTIONS(139), 1,
      aux_sym_id__token2,
    ACTIONS(227), 1,
      sym_string_lit,
    STATE(214), 1,
      sym_id_,
    STATE(218), 1,
      sym_column_alias,
    STATE(229), 1,
      sym_keyword,
  [8645] = 3,
    ACTIONS(893), 1,
      anon_sym_COMMA,
    STATE(311), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(621), 5,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [8659] = 4,
    ACTIONS(880), 1,
      anon_sym_COMMA,
    ACTIONS(898), 1,
      anon_sym_SEMI,
    STATE(311), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(896), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [8675] = 2,
    STATE(309), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(586), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [8687] = 2,
    STATE(311), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(586), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [8699] = 2,
    ACTIONS(900), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(902), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [8711] = 2,
    ACTIONS(904), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(906), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [8723] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(908), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(53), 1,
      sym_keyword,
    STATE(614), 1,
      sym_id_,
  [8742] = 6,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(373), 1,
      aux_sym_id__token1,
    ACTIONS(375), 1,
      aux_sym_id__token2,
    ACTIONS(910), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(58), 1,
      sym_id_,
    STATE(72), 1,
      sym_keyword,
  [8761] = 1,
    ACTIONS(604), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [8770] = 6,
    ACTIONS(149), 1,
      aux_sym_id__token1,
    ACTIONS(151), 1,
      aux_sym_id__token2,
    ACTIONS(912), 1,
      aux_sym_go_statement_token1,
    ACTIONS(914), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(107), 1,
      sym_id_,
    STATE(130), 1,
      sym_keyword,
  [8789] = 3,
    ACTIONS(916), 1,
      anon_sym_COMMA,
    STATE(321), 1,
      aux_sym_expression_list__repeat1,
    ACTIONS(919), 4,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8802] = 1,
    ACTIONS(921), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8811] = 5,
    ACTIONS(776), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(923), 1,
      anon_sym_RPAREN,
    STATE(399), 1,
      sym_order_by_clause,
    STATE(524), 1,
      sym_row_or_range_clause,
    ACTIONS(778), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8828] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(925), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(53), 1,
      sym_keyword,
    STATE(531), 1,
      sym_id_,
  [8847] = 5,
    ACTIONS(929), 1,
      aux_sym_window_frame_extent_token1,
    ACTIONS(931), 1,
      aux_sym_window_frame_preceding_token2,
    STATE(575), 1,
      sym_window_frame_extent,
    STATE(582), 1,
      sym_window_frame_preceding,
    ACTIONS(927), 2,
      aux_sym_constant_token3,
      aux_sym_window_frame_following_token1,
  [8864] = 5,
    ACTIONS(776), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(933), 1,
      anon_sym_RPAREN,
    STATE(431), 1,
      sym_order_by_clause,
    STATE(584), 1,
      sym_row_or_range_clause,
    ACTIONS(778), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8881] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(935), 1,
      aux_sym_go_statement_token1,
    ACTIONS(937), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(53), 1,
      sym_keyword,
    STATE(94), 1,
      sym_id_,
  [8900] = 4,
    ACTIONS(931), 1,
      aux_sym_window_frame_preceding_token2,
    STATE(613), 1,
      sym_window_frame_bound,
    ACTIONS(939), 2,
      aux_sym_constant_token3,
      aux_sym_window_frame_following_token1,
    STATE(482), 2,
      sym_window_frame_following,
      sym_window_frame_preceding,
  [8915] = 1,
    ACTIONS(621), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [8924] = 5,
    ACTIONS(941), 1,
      aux_sym_over__token1,
    ACTIONS(943), 1,
      aux_sym_ignore_nulls__token1,
    ACTIONS(945), 1,
      aux_sym_respect_nulls__token1,
    STATE(187), 1,
      sym_over_clause,
    STATE(485), 2,
      sym_ignore_nulls_,
      sym_respect_nulls_,
  [8941] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(935), 1,
      aux_sym_go_statement_token1,
    ACTIONS(947), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(53), 1,
      sym_keyword,
    STATE(86), 1,
      sym_id_,
  [8960] = 3,
    ACTIONS(951), 1,
      sym_asc_,
    ACTIONS(953), 1,
      sym_desc_,
    ACTIONS(949), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8973] = 6,
    ACTIONS(149), 1,
      aux_sym_id__token1,
    ACTIONS(151), 1,
      aux_sym_id__token2,
    ACTIONS(912), 1,
      aux_sym_go_statement_token1,
    ACTIONS(955), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(130), 1,
      sym_keyword,
    STATE(139), 1,
      sym_id_,
  [8992] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(935), 1,
      aux_sym_go_statement_token1,
    ACTIONS(957), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(53), 1,
      sym_keyword,
    STATE(93), 1,
      sym_id_,
  [9011] = 6,
    ACTIONS(149), 1,
      aux_sym_id__token1,
    ACTIONS(151), 1,
      aux_sym_id__token2,
    ACTIONS(912), 1,
      aux_sym_go_statement_token1,
    ACTIONS(959), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(121), 1,
      sym_id_,
    STATE(130), 1,
      sym_keyword,
  [9030] = 4,
    ACTIONS(135), 1,
      aux_sym_real__token1,
    ACTIONS(961), 1,
      aux_sym_constant_token3,
    ACTIONS(963), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(192), 2,
      sym_real_,
      sym_float_,
  [9045] = 1,
    ACTIONS(648), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [9054] = 6,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(373), 1,
      aux_sym_id__token1,
    ACTIONS(375), 1,
      aux_sym_id__token2,
    ACTIONS(965), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(72), 1,
      sym_keyword,
    STATE(75), 1,
      sym_id_,
  [9073] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(935), 1,
      aux_sym_go_statement_token1,
    ACTIONS(967), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(53), 1,
      sym_keyword,
    STATE(91), 1,
      sym_id_,
  [9092] = 3,
    ACTIONS(969), 1,
      anon_sym_COMMA,
    STATE(321), 1,
      aux_sym_expression_list__repeat1,
    ACTIONS(971), 4,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9105] = 5,
    ACTIONS(943), 1,
      aux_sym_ignore_nulls__token1,
    ACTIONS(945), 1,
      aux_sym_respect_nulls__token1,
    ACTIONS(973), 1,
      aux_sym_over__token1,
    STATE(136), 1,
      sym_over_clause,
    STATE(484), 2,
      sym_ignore_nulls_,
      sym_respect_nulls_,
  [9122] = 6,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(373), 1,
      aux_sym_id__token1,
    ACTIONS(375), 1,
      aux_sym_id__token2,
    ACTIONS(975), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(72), 1,
      sym_keyword,
    STATE(77), 1,
      sym_id_,
  [9141] = 4,
    ACTIONS(99), 1,
      aux_sym_real__token1,
    ACTIONS(977), 1,
      aux_sym_constant_token3,
    ACTIONS(979), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(281), 2,
      sym_real_,
      sym_float_,
  [9156] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(981), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(53), 1,
      sym_keyword,
    STATE(504), 1,
      sym_id_,
  [9175] = 1,
    ACTIONS(652), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [9184] = 6,
    ACTIONS(149), 1,
      aux_sym_id__token1,
    ACTIONS(151), 1,
      aux_sym_id__token2,
    ACTIONS(912), 1,
      aux_sym_go_statement_token1,
    ACTIONS(983), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(100), 1,
      sym_id_,
    STATE(130), 1,
      sym_keyword,
  [9203] = 1,
    ACTIONS(563), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [9212] = 1,
    ACTIONS(634), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [9221] = 6,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(935), 1,
      aux_sym_go_statement_token1,
    ACTIONS(985), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(53), 1,
      sym_keyword,
    STATE(82), 1,
      sym_id_,
  [9240] = 1,
    ACTIONS(630), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [9249] = 5,
    ACTIONS(628), 1,
      aux_sym_over__token1,
    ACTIONS(943), 1,
      aux_sym_ignore_nulls__token1,
    ACTIONS(945), 1,
      aux_sym_respect_nulls__token1,
    STATE(262), 1,
      sym_over_clause,
    STATE(455), 2,
      sym_ignore_nulls_,
      sym_respect_nulls_,
  [9266] = 3,
    ACTIONS(969), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym_expression_list__repeat1,
    ACTIONS(987), 4,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9279] = 6,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(373), 1,
      aux_sym_id__token1,
    ACTIONS(375), 1,
      aux_sym_id__token2,
    ACTIONS(989), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(63), 1,
      sym_id_,
    STATE(72), 1,
      sym_keyword,
  [9298] = 4,
    ACTIONS(931), 1,
      aux_sym_window_frame_preceding_token2,
    STATE(604), 1,
      sym_window_frame_bound,
    ACTIONS(939), 2,
      aux_sym_constant_token3,
      aux_sym_window_frame_following_token1,
    STATE(482), 2,
      sym_window_frame_following,
      sym_window_frame_preceding,
  [9313] = 4,
    ACTIONS(51), 1,
      aux_sym_real__token1,
    ACTIONS(991), 1,
      aux_sym_constant_token3,
    ACTIONS(993), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(97), 2,
      sym_real_,
      sym_float_,
  [9328] = 6,
    ACTIONS(149), 1,
      aux_sym_id__token1,
    ACTIONS(151), 1,
      aux_sym_id__token2,
    ACTIONS(912), 1,
      aux_sym_go_statement_token1,
    ACTIONS(995), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(119), 1,
      sym_id_,
    STATE(130), 1,
      sym_keyword,
  [9347] = 5,
    ACTIONS(776), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(997), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_order_by_clause,
    STATE(550), 1,
      sym_row_or_range_clause,
    ACTIONS(778), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9364] = 6,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(373), 1,
      aux_sym_id__token1,
    ACTIONS(375), 1,
      aux_sym_id__token2,
    ACTIONS(999), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(72), 1,
      sym_keyword,
    STATE(76), 1,
      sym_id_,
  [9383] = 1,
    ACTIONS(642), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [9392] = 5,
    ACTIONS(17), 1,
      aux_sym_go_statement_token1,
    ACTIONS(53), 1,
      aux_sym_id__token1,
    ACTIONS(55), 1,
      aux_sym_id__token2,
    STATE(43), 1,
      sym_id_,
    STATE(81), 1,
      sym_keyword,
  [9408] = 5,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(373), 1,
      aux_sym_id__token1,
    ACTIONS(375), 1,
      aux_sym_id__token2,
    STATE(59), 1,
      sym_id_,
    STATE(72), 1,
      sym_keyword,
  [9424] = 5,
    ACTIONS(719), 1,
      aux_sym_go_statement_token1,
    ACTIONS(721), 1,
      aux_sym_id__token1,
    ACTIONS(723), 1,
      aux_sym_id__token2,
    STATE(298), 1,
      sym_id_,
    STATE(303), 1,
      sym_keyword,
  [9440] = 5,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(373), 1,
      aux_sym_id__token1,
    ACTIONS(375), 1,
      aux_sym_id__token2,
    STATE(72), 1,
      sym_keyword,
    STATE(74), 1,
      sym_id_,
  [9456] = 5,
    ACTIONS(719), 1,
      aux_sym_go_statement_token1,
    ACTIONS(721), 1,
      aux_sym_id__token1,
    ACTIONS(723), 1,
      aux_sym_id__token2,
    STATE(277), 1,
      sym_id_,
    STATE(303), 1,
      sym_keyword,
  [9472] = 5,
    ACTIONS(149), 1,
      aux_sym_id__token1,
    ACTIONS(151), 1,
      aux_sym_id__token2,
    ACTIONS(912), 1,
      aux_sym_go_statement_token1,
    STATE(130), 1,
      sym_keyword,
    STATE(151), 1,
      sym_id_,
  [9488] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(935), 1,
      aux_sym_go_statement_token1,
    STATE(53), 1,
      sym_keyword,
    STATE(120), 1,
      sym_id_,
  [9504] = 5,
    ACTIONS(149), 1,
      aux_sym_id__token1,
    ACTIONS(151), 1,
      aux_sym_id__token2,
    ACTIONS(912), 1,
      aux_sym_go_statement_token1,
    STATE(130), 1,
      sym_keyword,
    STATE(142), 1,
      sym_id_,
  [9520] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    STATE(53), 1,
      sym_keyword,
    STATE(476), 1,
      sym_id_,
  [9536] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(935), 1,
      aux_sym_go_statement_token1,
    STATE(53), 1,
      sym_keyword,
    STATE(122), 1,
      sym_id_,
  [9552] = 5,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(373), 1,
      aux_sym_id__token1,
    ACTIONS(375), 1,
      aux_sym_id__token2,
    STATE(72), 1,
      sym_keyword,
    STATE(80), 1,
      sym_id_,
  [9568] = 3,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    STATE(391), 1,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(1003), 3,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9580] = 5,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(373), 1,
      aux_sym_id__token1,
    ACTIONS(375), 1,
      aux_sym_id__token2,
    STATE(61), 1,
      sym_id_,
    STATE(72), 1,
      sym_keyword,
  [9596] = 5,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(373), 1,
      aux_sym_id__token1,
    ACTIONS(375), 1,
      aux_sym_id__token2,
    STATE(60), 1,
      sym_id_,
    STATE(72), 1,
      sym_keyword,
  [9612] = 5,
    ACTIONS(719), 1,
      aux_sym_go_statement_token1,
    ACTIONS(721), 1,
      aux_sym_id__token1,
    ACTIONS(723), 1,
      aux_sym_id__token2,
    STATE(284), 1,
      sym_id_,
    STATE(303), 1,
      sym_keyword,
  [9628] = 5,
    ACTIONS(149), 1,
      aux_sym_id__token1,
    ACTIONS(151), 1,
      aux_sym_id__token2,
    ACTIONS(912), 1,
      aux_sym_go_statement_token1,
    STATE(130), 1,
      sym_keyword,
    STATE(143), 1,
      sym_id_,
  [9644] = 5,
    ACTIONS(149), 1,
      aux_sym_id__token1,
    ACTIONS(151), 1,
      aux_sym_id__token2,
    ACTIONS(912), 1,
      aux_sym_go_statement_token1,
    STATE(130), 1,
      sym_keyword,
    STATE(148), 1,
      sym_id_,
  [9660] = 5,
    ACTIONS(719), 1,
      aux_sym_go_statement_token1,
    ACTIONS(721), 1,
      aux_sym_id__token1,
    ACTIONS(723), 1,
      aux_sym_id__token2,
    STATE(263), 1,
      sym_id_,
    STATE(303), 1,
      sym_keyword,
  [9676] = 5,
    ACTIONS(149), 1,
      aux_sym_id__token1,
    ACTIONS(151), 1,
      aux_sym_id__token2,
    ACTIONS(912), 1,
      aux_sym_go_statement_token1,
    STATE(130), 1,
      sym_keyword,
    STATE(150), 1,
      sym_id_,
  [9692] = 5,
    ACTIONS(719), 1,
      aux_sym_go_statement_token1,
    ACTIONS(721), 1,
      aux_sym_id__token1,
    ACTIONS(723), 1,
      aux_sym_id__token2,
    STATE(257), 1,
      sym_id_,
    STATE(303), 1,
      sym_keyword,
  [9708] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(935), 1,
      aux_sym_go_statement_token1,
    STATE(53), 1,
      sym_keyword,
    STATE(95), 1,
      sym_id_,
  [9724] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(935), 1,
      aux_sym_go_statement_token1,
    STATE(53), 1,
      sym_keyword,
    STATE(110), 1,
      sym_id_,
  [9740] = 5,
    ACTIONS(149), 1,
      aux_sym_id__token1,
    ACTIONS(151), 1,
      aux_sym_id__token2,
    ACTIONS(912), 1,
      aux_sym_go_statement_token1,
    STATE(130), 1,
      sym_keyword,
    STATE(144), 1,
      sym_id_,
  [9756] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(935), 1,
      aux_sym_go_statement_token1,
    STATE(53), 1,
      sym_keyword,
    STATE(137), 1,
      sym_id_,
  [9772] = 5,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(373), 1,
      aux_sym_id__token1,
    ACTIONS(375), 1,
      aux_sym_id__token2,
    STATE(65), 1,
      sym_id_,
    STATE(72), 1,
      sym_keyword,
  [9788] = 5,
    ACTIONS(719), 1,
      aux_sym_go_statement_token1,
    ACTIONS(721), 1,
      aux_sym_id__token1,
    ACTIONS(723), 1,
      aux_sym_id__token2,
    STATE(260), 1,
      sym_id_,
    STATE(303), 1,
      sym_keyword,
  [9804] = 5,
    ACTIONS(149), 1,
      aux_sym_id__token1,
    ACTIONS(151), 1,
      aux_sym_id__token2,
    ACTIONS(912), 1,
      aux_sym_go_statement_token1,
    STATE(130), 1,
      sym_keyword,
    STATE(146), 1,
      sym_id_,
  [9820] = 5,
    ACTIONS(69), 1,
      aux_sym_go_statement_token1,
    ACTIONS(101), 1,
      aux_sym_id__token1,
    ACTIONS(103), 1,
      aux_sym_id__token2,
    STATE(135), 1,
      sym_keyword,
    STATE(322), 1,
      sym_id_,
  [9836] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(935), 1,
      aux_sym_go_statement_token1,
    STATE(53), 1,
      sym_keyword,
    STATE(126), 1,
      sym_id_,
  [9852] = 5,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(373), 1,
      aux_sym_id__token1,
    ACTIONS(375), 1,
      aux_sym_id__token2,
    STATE(67), 1,
      sym_id_,
    STATE(72), 1,
      sym_keyword,
  [9868] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(935), 1,
      aux_sym_go_statement_token1,
    STATE(53), 1,
      sym_keyword,
    STATE(123), 1,
      sym_id_,
  [9884] = 3,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    STATE(393), 1,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(1005), 3,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9896] = 5,
    ACTIONS(149), 1,
      aux_sym_id__token1,
    ACTIONS(151), 1,
      aux_sym_id__token2,
    ACTIONS(912), 1,
      aux_sym_go_statement_token1,
    STATE(130), 1,
      sym_keyword,
    STATE(152), 1,
      sym_id_,
  [9912] = 3,
    ACTIONS(1007), 1,
      anon_sym_COMMA,
    STATE(393), 1,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(1010), 3,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9924] = 5,
    ACTIONS(719), 1,
      aux_sym_go_statement_token1,
    ACTIONS(721), 1,
      aux_sym_id__token1,
    ACTIONS(723), 1,
      aux_sym_id__token2,
    STATE(271), 1,
      sym_id_,
    STATE(303), 1,
      sym_keyword,
  [9940] = 5,
    ACTIONS(13), 1,
      aux_sym_id__token1,
    ACTIONS(15), 1,
      aux_sym_id__token2,
    ACTIONS(935), 1,
      aux_sym_go_statement_token1,
    STATE(53), 1,
      sym_keyword,
    STATE(96), 1,
      sym_id_,
  [9956] = 1,
    ACTIONS(919), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9964] = 5,
    ACTIONS(57), 1,
      aux_sym_go_statement_token1,
    ACTIONS(373), 1,
      aux_sym_id__token1,
    ACTIONS(375), 1,
      aux_sym_id__token2,
    STATE(72), 1,
      sym_keyword,
    STATE(79), 1,
      sym_id_,
  [9980] = 1,
    ACTIONS(1012), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9987] = 3,
    ACTIONS(1014), 1,
      anon_sym_RPAREN,
    STATE(527), 1,
      sym_row_or_range_clause,
    ACTIONS(778), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [9998] = 3,
    ACTIONS(748), 1,
      ts_builtin_sym_end,
    ACTIONS(1016), 1,
      aux_sym_go_statement_token1,
    STATE(400), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
  [10009] = 3,
    ACTIONS(135), 1,
      aux_sym_real__token1,
    ACTIONS(961), 1,
      aux_sym_constant_token3,
    STATE(186), 2,
      sym_real_,
      sym_float_,
  [10020] = 4,
    ACTIONS(59), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(371), 1,
      sym_string_lit,
    STATE(46), 1,
      sym_LOCAL_ID_,
    STATE(473), 1,
      sym_execute_var_string,
  [10033] = 3,
    ACTIONS(1019), 1,
      aux_sym_constant_token3,
    STATE(496), 1,
      sym_integer,
    ACTIONS(399), 2,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
  [10044] = 1,
    ACTIONS(878), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [10051] = 4,
    ACTIONS(1021), 1,
      aux_sym_RESULT_SETS_token1,
    ACTIONS(1023), 1,
      sym_RECOMPILE,
    STATE(225), 1,
      sym_execute_option,
    STATE(487), 1,
      sym_RESULT_SETS,
  [10064] = 4,
    ACTIONS(59), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(371), 1,
      sym_string_lit,
    STATE(46), 1,
      sym_LOCAL_ID_,
    STATE(435), 1,
      sym_execute_var_string,
  [10077] = 3,
    ACTIONS(933), 1,
      anon_sym_RPAREN,
    STATE(584), 1,
      sym_row_or_range_clause,
    ACTIONS(778), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10088] = 4,
    ACTIONS(1021), 1,
      aux_sym_RESULT_SETS_token1,
    ACTIONS(1023), 1,
      sym_RECOMPILE,
    STATE(196), 1,
      sym_execute_option,
    STATE(487), 1,
      sym_RESULT_SETS,
  [10101] = 1,
    ACTIONS(1010), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10108] = 1,
    ACTIONS(1025), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10115] = 1,
    ACTIONS(1027), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10122] = 3,
    ACTIONS(51), 1,
      aux_sym_real__token1,
    ACTIONS(991), 1,
      aux_sym_constant_token3,
    STATE(141), 2,
      sym_real_,
      sym_float_,
  [10133] = 2,
    ACTIONS(1029), 2,
      aux_sym_go_statement_token1,
      aux_sym_id__token1,
    ACTIONS(1031), 2,
      sym_string_lit,
      aux_sym_id__token2,
  [10142] = 1,
    ACTIONS(1033), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10149] = 3,
    ACTIONS(1035), 1,
      ts_builtin_sym_end,
    ACTIONS(1037), 1,
      aux_sym_go_statement_token1,
    STATE(400), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
  [10160] = 1,
    ACTIONS(896), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [10167] = 3,
    ACTIONS(99), 1,
      aux_sym_real__token1,
    ACTIONS(977), 1,
      aux_sym_constant_token3,
    STATE(292), 2,
      sym_real_,
      sym_float_,
  [10178] = 4,
    ACTIONS(1021), 1,
      aux_sym_RESULT_SETS_token1,
    ACTIONS(1023), 1,
      sym_RECOMPILE,
    STATE(230), 1,
      sym_execute_option,
    STATE(487), 1,
      sym_RESULT_SETS,
  [10191] = 3,
    ACTIONS(997), 1,
      anon_sym_RPAREN,
    STATE(550), 1,
      sym_row_or_range_clause,
    ACTIONS(778), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10202] = 3,
    ACTIONS(923), 1,
      anon_sym_RPAREN,
    STATE(524), 1,
      sym_row_or_range_clause,
    ACTIONS(778), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10213] = 3,
    ACTIONS(1039), 1,
      anon_sym_RPAREN,
    STATE(552), 1,
      sym_row_or_range_clause,
    ACTIONS(778), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10224] = 1,
    ACTIONS(1041), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [10231] = 4,
    ACTIONS(774), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(776), 1,
      aux_sym_order_by_clause_token1,
    STATE(451), 1,
      sym_partition_by_clause,
    STATE(564), 1,
      sym_order_by_clause,
  [10244] = 1,
    ACTIONS(1043), 4,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10251] = 4,
    ACTIONS(59), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(371), 1,
      sym_string_lit,
    STATE(46), 1,
      sym_LOCAL_ID_,
    STATE(444), 1,
      sym_execute_var_string,
  [10264] = 4,
    ACTIONS(59), 1,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(371), 1,
      sym_string_lit,
    STATE(46), 1,
      sym_LOCAL_ID_,
    STATE(55), 1,
      sym_execute_var_string,
  [10277] = 4,
    ACTIONS(1021), 1,
      aux_sym_RESULT_SETS_token1,
    ACTIONS(1023), 1,
      sym_RECOMPILE,
    STATE(244), 1,
      sym_execute_option,
    STATE(487), 1,
      sym_RESULT_SETS,
  [10290] = 4,
    ACTIONS(1021), 1,
      aux_sym_RESULT_SETS_token1,
    ACTIONS(1023), 1,
      sym_RECOMPILE,
    STATE(233), 1,
      sym_execute_option,
    STATE(487), 1,
      sym_RESULT_SETS,
  [10303] = 4,
    ACTIONS(774), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(776), 1,
      aux_sym_order_by_clause_token1,
    STATE(462), 1,
      sym_partition_by_clause,
    STATE(522), 1,
      sym_order_by_clause,
  [10316] = 4,
    ACTIONS(774), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(776), 1,
      aux_sym_order_by_clause_token1,
    STATE(464), 1,
      sym_partition_by_clause,
    STATE(548), 1,
      sym_order_by_clause,
  [10329] = 3,
    ACTIONS(1045), 1,
      anon_sym_RPAREN,
    STATE(609), 1,
      sym_row_or_range_clause,
    ACTIONS(778), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10340] = 3,
    ACTIONS(1047), 1,
      anon_sym_RPAREN,
    ACTIONS(1049), 1,
      aux_sym_partition_by_clause_token1,
    STATE(529), 1,
      sym_partition_by_clause,
  [10350] = 3,
    ACTIONS(987), 1,
      anon_sym_RPAREN,
    ACTIONS(1051), 1,
      anon_sym_COMMA,
    STATE(442), 1,
      aux_sym_expression_list__repeat1,
  [10360] = 1,
    ACTIONS(1053), 3,
      aux_sym_over__token1,
      aux_sym_ignore_nulls__token1,
      aux_sym_respect_nulls__token1,
  [10366] = 3,
    ACTIONS(1055), 1,
      anon_sym_COMMA,
    ACTIONS(1057), 1,
      anon_sym_RPAREN,
    STATE(448), 1,
      aux_sym_execute_body_repeat2,
  [10376] = 1,
    ACTIONS(1059), 3,
      aux_sym_over__token1,
      aux_sym_ignore_nulls__token1,
      aux_sym_respect_nulls__token1,
  [10382] = 3,
    ACTIONS(1055), 1,
      anon_sym_COMMA,
    ACTIONS(1061), 1,
      anon_sym_RPAREN,
    STATE(439), 1,
      aux_sym_execute_body_repeat2,
  [10392] = 2,
    ACTIONS(1063), 1,
      aux_sym_constant_token3,
    ACTIONS(1065), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [10400] = 3,
    ACTIONS(1067), 1,
      anon_sym_COMMA,
    ACTIONS(1070), 1,
      anon_sym_RPAREN,
    STATE(439), 1,
      aux_sym_execute_body_repeat2,
  [10410] = 3,
    ACTIONS(1049), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(1072), 1,
      anon_sym_RPAREN,
    STATE(554), 1,
      sym_partition_by_clause,
  [10420] = 3,
    ACTIONS(919), 1,
      anon_sym_RPAREN,
    ACTIONS(1074), 1,
      anon_sym_COMMA,
    STATE(441), 1,
      aux_sym_expression_list__repeat1,
  [10430] = 3,
    ACTIONS(971), 1,
      anon_sym_RPAREN,
    ACTIONS(1051), 1,
      anon_sym_COMMA,
    STATE(441), 1,
      aux_sym_expression_list__repeat1,
  [10440] = 2,
    ACTIONS(1077), 1,
      aux_sym_constant_token3,
    ACTIONS(1079), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [10448] = 3,
    ACTIONS(1055), 1,
      anon_sym_COMMA,
    ACTIONS(1081), 1,
      anon_sym_RPAREN,
    STATE(437), 1,
      aux_sym_execute_body_repeat2,
  [10458] = 1,
    ACTIONS(1083), 3,
      aux_sym_over__token1,
      aux_sym_ignore_nulls__token1,
      aux_sym_respect_nulls__token1,
  [10464] = 3,
    ACTIONS(1049), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(1085), 1,
      anon_sym_RPAREN,
    STATE(510), 1,
      sym_partition_by_clause,
  [10474] = 2,
    ACTIONS(1087), 1,
      aux_sym_constant_token3,
    ACTIONS(1089), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [10482] = 3,
    ACTIONS(1055), 1,
      anon_sym_COMMA,
    ACTIONS(1091), 1,
      anon_sym_RPAREN,
    STATE(439), 1,
      aux_sym_execute_body_repeat2,
  [10492] = 2,
    ACTIONS(628), 1,
      aux_sym_over__token1,
    STATE(270), 1,
      sym_over_clause,
  [10499] = 2,
    ACTIONS(1093), 1,
      anon_sym_COMMA,
    ACTIONS(1095), 1,
      anon_sym_RPAREN,
  [10506] = 2,
    ACTIONS(776), 1,
      aux_sym_order_by_clause_token1,
    STATE(599), 1,
      sym_order_by_clause,
  [10513] = 2,
    ACTIONS(628), 1,
      aux_sym_over__token1,
    STATE(276), 1,
      sym_over_clause,
  [10520] = 2,
    ACTIONS(628), 1,
      aux_sym_over__token1,
    STATE(285), 1,
      sym_over_clause,
  [10527] = 1,
    ACTIONS(1097), 2,
      sym_LOGIN,
      sym_USER,
  [10532] = 2,
    ACTIONS(628), 1,
      aux_sym_over__token1,
    STATE(294), 1,
      sym_over_clause,
  [10539] = 2,
    ACTIONS(1099), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(319), 1,
      sym_execute_statement_arg_named,
  [10546] = 2,
    ACTIONS(973), 1,
      aux_sym_over__token1,
    STATE(124), 1,
      sym_over_clause,
  [10553] = 2,
    ACTIONS(776), 1,
      aux_sym_order_by_clause_token1,
    STATE(595), 1,
      sym_order_by_clause,
  [10560] = 2,
    ACTIONS(973), 1,
      aux_sym_over__token1,
    STATE(129), 1,
      sym_over_clause,
  [10567] = 2,
    ACTIONS(1101), 1,
      anon_sym_LPAREN,
    STATE(330), 1,
      sym_lag_lead_args,
  [10574] = 2,
    ACTIONS(59), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(45), 1,
      sym_LOCAL_ID_,
  [10581] = 2,
    ACTIONS(776), 1,
      aux_sym_order_by_clause_token1,
    STATE(525), 1,
      sym_order_by_clause,
  [10588] = 2,
    ACTIONS(1101), 1,
      anon_sym_LPAREN,
    STATE(351), 1,
      sym_lag_lead_args,
  [10595] = 2,
    ACTIONS(776), 1,
      aux_sym_order_by_clause_token1,
    STATE(551), 1,
      sym_order_by_clause,
  [10602] = 2,
    ACTIONS(1103), 1,
      aux_sym_within_group__token1,
    STATE(543), 1,
      sym_within_group_,
  [10609] = 2,
    ACTIONS(1101), 1,
      anon_sym_LPAREN,
    STATE(341), 1,
      sym_lag_lead_args,
  [10616] = 2,
    ACTIONS(1105), 1,
      aux_sym_over__token1,
    STATE(565), 1,
      sym_over_,
  [10623] = 1,
    ACTIONS(1107), 2,
      sym_NONE,
      sym_UNDEFINED,
  [10628] = 2,
    ACTIONS(1105), 1,
      aux_sym_over__token1,
    STATE(576), 1,
      sym_over_,
  [10635] = 2,
    ACTIONS(1105), 1,
      aux_sym_over__token1,
    STATE(583), 1,
      sym_over_,
  [10642] = 1,
    ACTIONS(1109), 2,
      sym_LOGIN,
      sym_USER,
  [10647] = 1,
    ACTIONS(1111), 2,
      sym_LOGIN,
      sym_USER,
  [10652] = 1,
    ACTIONS(1070), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10657] = 2,
    ACTIONS(1105), 1,
      aux_sym_over__token1,
    STATE(591), 1,
      sym_over_,
  [10664] = 1,
    ACTIONS(1113), 2,
      anon_sym_RPAREN,
      aux_sym_window_frame_extent_token2,
  [10669] = 2,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_udt_method_arguments,
  [10676] = 2,
    ACTIONS(973), 1,
      aux_sym_over__token1,
    STATE(118), 1,
      sym_over_clause,
  [10683] = 2,
    ACTIONS(1115), 1,
      aux_sym_window_frame_following_token2,
    ACTIONS(1117), 1,
      aux_sym_window_frame_preceding_token1,
  [10690] = 2,
    ACTIONS(776), 1,
      aux_sym_order_by_clause_token1,
    STATE(596), 1,
      sym_order_by_clause,
  [10697] = 2,
    ACTIONS(941), 1,
      aux_sym_over__token1,
    STATE(208), 1,
      sym_over_clause,
  [10704] = 2,
    ACTIONS(941), 1,
      aux_sym_over__token1,
    STATE(205), 1,
      sym_over_clause,
  [10711] = 1,
    ACTIONS(1119), 2,
      anon_sym_RPAREN,
      aux_sym_window_frame_extent_token2,
  [10716] = 2,
    ACTIONS(941), 1,
      aux_sym_over__token1,
    STATE(179), 1,
      sym_over_clause,
  [10723] = 2,
    ACTIONS(973), 1,
      aux_sym_over__token1,
    STATE(108), 1,
      sym_over_clause,
  [10730] = 2,
    ACTIONS(941), 1,
      aux_sym_over__token1,
    STATE(181), 1,
      sym_over_clause,
  [10737] = 2,
    ACTIONS(776), 1,
      aux_sym_order_by_clause_token1,
    STATE(600), 1,
      sym_order_by_clause,
  [10744] = 1,
    ACTIONS(1121), 2,
      sym_NONE,
      sym_UNDEFINED,
  [10749] = 2,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    ACTIONS(1125), 1,
      anon_sym_RPAREN,
  [10756] = 2,
    ACTIONS(1105), 1,
      aux_sym_over__token1,
    STATE(530), 1,
      sym_over_,
  [10763] = 2,
    ACTIONS(1105), 1,
      aux_sym_over__token1,
    STATE(610), 1,
      sym_over_,
  [10770] = 1,
    ACTIONS(1127), 2,
      anon_sym_RPAREN,
      aux_sym_window_frame_extent_token2,
  [10775] = 2,
    ACTIONS(1103), 1,
      aux_sym_within_group__token1,
    STATE(606), 1,
      sym_within_group_,
  [10782] = 2,
    ACTIONS(1103), 1,
      aux_sym_within_group__token1,
    STATE(608), 1,
      sym_within_group_,
  [10789] = 2,
    ACTIONS(1129), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(183), 1,
      sym_execute_statement_arg_named,
  [10796] = 1,
    ACTIONS(904), 2,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
  [10801] = 1,
    ACTIONS(900), 2,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
  [10806] = 1,
    ACTIONS(1131), 1,
      anon_sym_RPAREN,
  [10810] = 1,
    ACTIONS(1133), 1,
      aux_sym_execute_body_token1,
  [10814] = 1,
    ACTIONS(1135), 1,
      anon_sym_RPAREN,
  [10818] = 1,
    ACTIONS(1137), 1,
      aux_sym_constant_token3,
  [10822] = 1,
    ACTIONS(1139), 1,
      ts_builtin_sym_end,
  [10826] = 1,
    ACTIONS(1141), 1,
      aux_sym_RESULT_SETS_token2,
  [10830] = 1,
    ACTIONS(1143), 1,
      aux_sym_real__token2,
  [10834] = 1,
    ACTIONS(1145), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [10838] = 1,
    ACTIONS(1147), 1,
      anon_sym_RPAREN,
  [10842] = 1,
    ACTIONS(1149), 1,
      aux_sym_constant_token3,
  [10846] = 1,
    ACTIONS(555), 1,
      anon_sym_EQ,
  [10850] = 1,
    ACTIONS(1151), 1,
      aux_sym_real__token2,
  [10854] = 1,
    ACTIONS(1153), 1,
      aux_sym_constant_token3,
  [10858] = 1,
    ACTIONS(1155), 1,
      anon_sym_RPAREN,
  [10862] = 1,
    ACTIONS(1157), 1,
      anon_sym_RPAREN,
  [10866] = 1,
    ACTIONS(1159), 1,
      anon_sym_RPAREN,
  [10870] = 1,
    ACTIONS(1161), 1,
      anon_sym_RPAREN,
  [10874] = 1,
    ACTIONS(1163), 1,
      aux_sym_ignore_nulls__token2,
  [10878] = 1,
    ACTIONS(1165), 1,
      anon_sym_RPAREN,
  [10882] = 1,
    ACTIONS(1167), 1,
      anon_sym_RPAREN,
  [10886] = 1,
    ACTIONS(1169), 1,
      anon_sym_RPAREN,
  [10890] = 1,
    ACTIONS(1171), 1,
      aux_sym_partition_by_clause_token2,
  [10894] = 1,
    ACTIONS(1173), 1,
      anon_sym_RPAREN,
  [10898] = 1,
    ACTIONS(1175), 1,
      anon_sym_RPAREN,
  [10902] = 1,
    ACTIONS(923), 1,
      anon_sym_RPAREN,
  [10906] = 1,
    ACTIONS(1177), 1,
      anon_sym_RPAREN,
  [10910] = 1,
    ACTIONS(1179), 1,
      anon_sym_RPAREN,
  [10914] = 1,
    ACTIONS(1014), 1,
      anon_sym_RPAREN,
  [10918] = 1,
    ACTIONS(1181), 1,
      anon_sym_RPAREN,
  [10922] = 1,
    ACTIONS(840), 1,
      anon_sym_EQ,
  [10926] = 1,
    ACTIONS(1183), 1,
      anon_sym_RPAREN,
  [10930] = 1,
    ACTIONS(1185), 1,
      anon_sym_LPAREN,
  [10934] = 1,
    ACTIONS(1187), 1,
      anon_sym_RPAREN,
  [10938] = 1,
    ACTIONS(1189), 1,
      anon_sym_LPAREN,
  [10942] = 1,
    ACTIONS(1191), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [10946] = 1,
    ACTIONS(1193), 1,
      aux_sym_over__token1,
  [10950] = 1,
    ACTIONS(1195), 1,
      aux_sym_over__token1,
  [10954] = 1,
    ACTIONS(1197), 1,
      aux_sym_constant_token3,
  [10958] = 1,
    ACTIONS(705), 1,
      aux_sym_real__token2,
  [10962] = 1,
    ACTIONS(1199), 1,
      aux_sym_constant_token3,
  [10966] = 1,
    ACTIONS(1201), 1,
      anon_sym_RPAREN,
  [10970] = 1,
    ACTIONS(1203), 1,
      anon_sym_RPAREN,
  [10974] = 1,
    ACTIONS(1205), 1,
      anon_sym_RPAREN,
  [10978] = 1,
    ACTIONS(1207), 1,
      anon_sym_RPAREN,
  [10982] = 1,
    ACTIONS(1209), 1,
      anon_sym_EQ,
  [10986] = 1,
    ACTIONS(1211), 1,
      aux_sym_within_group__token2,
  [10990] = 1,
    ACTIONS(1213), 1,
      anon_sym_LPAREN,
  [10994] = 1,
    ACTIONS(1215), 1,
      aux_sym_partition_by_clause_token2,
  [10998] = 1,
    ACTIONS(1217), 1,
      aux_sym_partition_by_clause_token2,
  [11002] = 1,
    ACTIONS(933), 1,
      anon_sym_RPAREN,
  [11006] = 1,
    ACTIONS(997), 1,
      anon_sym_RPAREN,
  [11010] = 1,
    ACTIONS(1219), 1,
      anon_sym_RPAREN,
  [11014] = 1,
    ACTIONS(1221), 1,
      sym_string_lit,
  [11018] = 1,
    ACTIONS(1039), 1,
      anon_sym_RPAREN,
  [11022] = 1,
    ACTIONS(1223), 1,
      anon_sym_RPAREN,
  [11026] = 1,
    ACTIONS(1225), 1,
      anon_sym_RPAREN,
  [11030] = 1,
    ACTIONS(1227), 1,
      anon_sym_EQ,
  [11034] = 1,
    ACTIONS(1229), 1,
      anon_sym_RPAREN,
  [11038] = 1,
    ACTIONS(1231), 1,
      anon_sym_LPAREN,
  [11042] = 1,
    ACTIONS(1233), 1,
      aux_sym_ignore_nulls__token2,
  [11046] = 1,
    ACTIONS(1235), 1,
      anon_sym_LPAREN,
  [11050] = 1,
    ACTIONS(1237), 1,
      anon_sym_LPAREN,
  [11054] = 1,
    ACTIONS(1239), 1,
      anon_sym_RPAREN,
  [11058] = 1,
    ACTIONS(1241), 1,
      anon_sym_LPAREN,
  [11062] = 1,
    ACTIONS(1243), 1,
      anon_sym_RPAREN,
  [11066] = 1,
    ACTIONS(1245), 1,
      anon_sym_RPAREN,
  [11070] = 1,
    ACTIONS(1247), 1,
      anon_sym_LPAREN,
  [11074] = 1,
    ACTIONS(1249), 1,
      anon_sym_RPAREN,
  [11078] = 1,
    ACTIONS(1251), 1,
      anon_sym_LPAREN,
  [11082] = 1,
    ACTIONS(1117), 1,
      aux_sym_window_frame_preceding_token1,
  [11086] = 1,
    ACTIONS(1253), 1,
      anon_sym_LPAREN,
  [11090] = 1,
    ACTIONS(1255), 1,
      anon_sym_LPAREN,
  [11094] = 1,
    ACTIONS(1257), 1,
      anon_sym_LPAREN,
  [11098] = 1,
    ACTIONS(1259), 1,
      anon_sym_RPAREN,
  [11102] = 1,
    ACTIONS(1261), 1,
      anon_sym_LPAREN,
  [11106] = 1,
    ACTIONS(1263), 1,
      anon_sym_RPAREN,
  [11110] = 1,
    ACTIONS(1265), 1,
      anon_sym_RPAREN,
  [11114] = 1,
    ACTIONS(1117), 1,
      aux_sym_window_frame_preceding_token3,
  [11118] = 1,
    ACTIONS(1267), 1,
      anon_sym_RPAREN,
  [11122] = 1,
    ACTIONS(1269), 1,
      anon_sym_LPAREN,
  [11126] = 1,
    ACTIONS(1271), 1,
      anon_sym_LPAREN,
  [11130] = 1,
    ACTIONS(1273), 1,
      anon_sym_LPAREN,
  [11134] = 1,
    ACTIONS(1275), 1,
      anon_sym_LPAREN,
  [11138] = 1,
    ACTIONS(1277), 1,
      anon_sym_LPAREN,
  [11142] = 1,
    ACTIONS(1279), 1,
      anon_sym_LPAREN,
  [11146] = 1,
    ACTIONS(1281), 1,
      anon_sym_RPAREN,
  [11150] = 1,
    ACTIONS(1283), 1,
      anon_sym_LPAREN,
  [11154] = 1,
    ACTIONS(1045), 1,
      anon_sym_RPAREN,
  [11158] = 1,
    ACTIONS(1285), 1,
      anon_sym_LPAREN,
  [11162] = 1,
    ACTIONS(1287), 1,
      anon_sym_LPAREN,
  [11166] = 1,
    ACTIONS(1289), 1,
      anon_sym_LPAREN,
  [11170] = 1,
    ACTIONS(1291), 1,
      anon_sym_LPAREN,
  [11174] = 1,
    ACTIONS(1293), 1,
      anon_sym_LPAREN,
  [11178] = 1,
    ACTIONS(1295), 1,
      anon_sym_LPAREN,
  [11182] = 1,
    ACTIONS(1297), 1,
      anon_sym_LPAREN,
  [11186] = 1,
    ACTIONS(1299), 1,
      sym_string_lit,
  [11190] = 1,
    ACTIONS(1301), 1,
      anon_sym_LPAREN,
  [11194] = 1,
    ACTIONS(1303), 1,
      anon_sym_LPAREN,
  [11198] = 1,
    ACTIONS(1305), 1,
      anon_sym_RPAREN,
  [11202] = 1,
    ACTIONS(1307), 1,
      anon_sym_RPAREN,
  [11206] = 1,
    ACTIONS(1309), 1,
      anon_sym_LPAREN,
  [11210] = 1,
    ACTIONS(1311), 1,
      anon_sym_LPAREN,
  [11214] = 1,
    ACTIONS(1313), 1,
      anon_sym_RPAREN,
  [11218] = 1,
    ACTIONS(1315), 1,
      anon_sym_RPAREN,
  [11222] = 1,
    ACTIONS(1317), 1,
      anon_sym_RPAREN,
  [11226] = 1,
    ACTIONS(1319), 1,
      anon_sym_RPAREN,
  [11230] = 1,
    ACTIONS(1321), 1,
      anon_sym_RPAREN,
  [11234] = 1,
    ACTIONS(1323), 1,
      aux_sym_window_frame_extent_token2,
  [11238] = 1,
    ACTIONS(1325), 1,
      anon_sym_LPAREN,
  [11242] = 1,
    ACTIONS(1327), 1,
      anon_sym_LPAREN,
  [11246] = 1,
    ACTIONS(1329), 1,
      anon_sym_LPAREN,
  [11250] = 1,
    ACTIONS(1331), 1,
      anon_sym_LPAREN,
  [11254] = 1,
    ACTIONS(1333), 1,
      anon_sym_RPAREN,
  [11258] = 1,
    ACTIONS(1335), 1,
      anon_sym_LPAREN,
  [11262] = 1,
    ACTIONS(1337), 1,
      anon_sym_RPAREN,
  [11266] = 1,
    ACTIONS(1339), 1,
      anon_sym_RPAREN,
  [11270] = 1,
    ACTIONS(1341), 1,
      anon_sym_RPAREN,
  [11274] = 1,
    ACTIONS(1343), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [11278] = 1,
    ACTIONS(1345), 1,
      anon_sym_LPAREN,
  [11282] = 1,
    ACTIONS(1347), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 120,
  [SMALL_STATE(4)] = 237,
  [SMALL_STATE(5)] = 347,
  [SMALL_STATE(6)] = 457,
  [SMALL_STATE(7)] = 567,
  [SMALL_STATE(8)] = 674,
  [SMALL_STATE(9)] = 781,
  [SMALL_STATE(10)] = 888,
  [SMALL_STATE(11)] = 995,
  [SMALL_STATE(12)] = 1102,
  [SMALL_STATE(13)] = 1209,
  [SMALL_STATE(14)] = 1312,
  [SMALL_STATE(15)] = 1415,
  [SMALL_STATE(16)] = 1518,
  [SMALL_STATE(17)] = 1621,
  [SMALL_STATE(18)] = 1721,
  [SMALL_STATE(19)] = 1821,
  [SMALL_STATE(20)] = 1921,
  [SMALL_STATE(21)] = 2021,
  [SMALL_STATE(22)] = 2121,
  [SMALL_STATE(23)] = 2221,
  [SMALL_STATE(24)] = 2321,
  [SMALL_STATE(25)] = 2421,
  [SMALL_STATE(26)] = 2521,
  [SMALL_STATE(27)] = 2621,
  [SMALL_STATE(28)] = 2721,
  [SMALL_STATE(29)] = 2821,
  [SMALL_STATE(30)] = 2921,
  [SMALL_STATE(31)] = 3021,
  [SMALL_STATE(32)] = 3121,
  [SMALL_STATE(33)] = 3221,
  [SMALL_STATE(34)] = 3321,
  [SMALL_STATE(35)] = 3360,
  [SMALL_STATE(36)] = 3430,
  [SMALL_STATE(37)] = 3500,
  [SMALL_STATE(38)] = 3552,
  [SMALL_STATE(39)] = 3604,
  [SMALL_STATE(40)] = 3637,
  [SMALL_STATE(41)] = 3663,
  [SMALL_STATE(42)] = 3717,
  [SMALL_STATE(43)] = 3768,
  [SMALL_STATE(44)] = 3810,
  [SMALL_STATE(45)] = 3834,
  [SMALL_STATE(46)] = 3859,
  [SMALL_STATE(47)] = 3884,
  [SMALL_STATE(48)] = 3907,
  [SMALL_STATE(49)] = 3952,
  [SMALL_STATE(50)] = 3997,
  [SMALL_STATE(51)] = 4043,
  [SMALL_STATE(52)] = 4089,
  [SMALL_STATE(53)] = 4115,
  [SMALL_STATE(54)] = 4137,
  [SMALL_STATE(55)] = 4179,
  [SMALL_STATE(56)] = 4201,
  [SMALL_STATE(57)] = 4237,
  [SMALL_STATE(58)] = 4276,
  [SMALL_STATE(59)] = 4298,
  [SMALL_STATE(60)] = 4318,
  [SMALL_STATE(61)] = 4338,
  [SMALL_STATE(62)] = 4358,
  [SMALL_STATE(63)] = 4382,
  [SMALL_STATE(64)] = 4404,
  [SMALL_STATE(65)] = 4446,
  [SMALL_STATE(66)] = 4466,
  [SMALL_STATE(67)] = 4486,
  [SMALL_STATE(68)] = 4506,
  [SMALL_STATE(69)] = 4528,
  [SMALL_STATE(70)] = 4548,
  [SMALL_STATE(71)] = 4568,
  [SMALL_STATE(72)] = 4592,
  [SMALL_STATE(73)] = 4612,
  [SMALL_STATE(74)] = 4656,
  [SMALL_STATE(75)] = 4676,
  [SMALL_STATE(76)] = 4698,
  [SMALL_STATE(77)] = 4720,
  [SMALL_STATE(78)] = 4742,
  [SMALL_STATE(79)] = 4770,
  [SMALL_STATE(80)] = 4790,
  [SMALL_STATE(81)] = 4810,
  [SMALL_STATE(82)] = 4830,
  [SMALL_STATE(83)] = 4851,
  [SMALL_STATE(84)] = 4872,
  [SMALL_STATE(85)] = 4909,
  [SMALL_STATE(86)] = 4926,
  [SMALL_STATE(87)] = 4947,
  [SMALL_STATE(88)] = 4966,
  [SMALL_STATE(89)] = 4991,
  [SMALL_STATE(90)] = 5012,
  [SMALL_STATE(91)] = 5049,
  [SMALL_STATE(92)] = 5070,
  [SMALL_STATE(93)] = 5091,
  [SMALL_STATE(94)] = 5112,
  [SMALL_STATE(95)] = 5133,
  [SMALL_STATE(96)] = 5151,
  [SMALL_STATE(97)] = 5169,
  [SMALL_STATE(98)] = 5187,
  [SMALL_STATE(99)] = 5205,
  [SMALL_STATE(100)] = 5223,
  [SMALL_STATE(101)] = 5243,
  [SMALL_STATE(102)] = 5261,
  [SMALL_STATE(103)] = 5277,
  [SMALL_STATE(104)] = 5295,
  [SMALL_STATE(105)] = 5333,
  [SMALL_STATE(106)] = 5351,
  [SMALL_STATE(107)] = 5369,
  [SMALL_STATE(108)] = 5389,
  [SMALL_STATE(109)] = 5407,
  [SMALL_STATE(110)] = 5427,
  [SMALL_STATE(111)] = 5445,
  [SMALL_STATE(112)] = 5463,
  [SMALL_STATE(113)] = 5481,
  [SMALL_STATE(114)] = 5499,
  [SMALL_STATE(115)] = 5517,
  [SMALL_STATE(116)] = 5535,
  [SMALL_STATE(117)] = 5571,
  [SMALL_STATE(118)] = 5589,
  [SMALL_STATE(119)] = 5607,
  [SMALL_STATE(120)] = 5627,
  [SMALL_STATE(121)] = 5645,
  [SMALL_STATE(122)] = 5665,
  [SMALL_STATE(123)] = 5683,
  [SMALL_STATE(124)] = 5701,
  [SMALL_STATE(125)] = 5719,
  [SMALL_STATE(126)] = 5737,
  [SMALL_STATE(127)] = 5755,
  [SMALL_STATE(128)] = 5773,
  [SMALL_STATE(129)] = 5791,
  [SMALL_STATE(130)] = 5809,
  [SMALL_STATE(131)] = 5827,
  [SMALL_STATE(132)] = 5845,
  [SMALL_STATE(133)] = 5863,
  [SMALL_STATE(134)] = 5881,
  [SMALL_STATE(135)] = 5899,
  [SMALL_STATE(136)] = 5915,
  [SMALL_STATE(137)] = 5933,
  [SMALL_STATE(138)] = 5951,
  [SMALL_STATE(139)] = 5971,
  [SMALL_STATE(140)] = 5991,
  [SMALL_STATE(141)] = 6009,
  [SMALL_STATE(142)] = 6027,
  [SMALL_STATE(143)] = 6044,
  [SMALL_STATE(144)] = 6061,
  [SMALL_STATE(145)] = 6078,
  [SMALL_STATE(146)] = 6095,
  [SMALL_STATE(147)] = 6112,
  [SMALL_STATE(148)] = 6131,
  [SMALL_STATE(149)] = 6148,
  [SMALL_STATE(150)] = 6165,
  [SMALL_STATE(151)] = 6182,
  [SMALL_STATE(152)] = 6199,
  [SMALL_STATE(153)] = 6216,
  [SMALL_STATE(154)] = 6233,
  [SMALL_STATE(155)] = 6250,
  [SMALL_STATE(156)] = 6271,
  [SMALL_STATE(157)] = 6292,
  [SMALL_STATE(158)] = 6310,
  [SMALL_STATE(159)] = 6330,
  [SMALL_STATE(160)] = 6348,
  [SMALL_STATE(161)] = 6368,
  [SMALL_STATE(162)] = 6386,
  [SMALL_STATE(163)] = 6402,
  [SMALL_STATE(164)] = 6420,
  [SMALL_STATE(165)] = 6438,
  [SMALL_STATE(166)] = 6460,
  [SMALL_STATE(167)] = 6476,
  [SMALL_STATE(168)] = 6498,
  [SMALL_STATE(169)] = 6518,
  [SMALL_STATE(170)] = 6536,
  [SMALL_STATE(171)] = 6554,
  [SMALL_STATE(172)] = 6574,
  [SMALL_STATE(173)] = 6594,
  [SMALL_STATE(174)] = 6614,
  [SMALL_STATE(175)] = 6634,
  [SMALL_STATE(176)] = 6654,
  [SMALL_STATE(177)] = 6674,
  [SMALL_STATE(178)] = 6691,
  [SMALL_STATE(179)] = 6706,
  [SMALL_STATE(180)] = 6721,
  [SMALL_STATE(181)] = 6736,
  [SMALL_STATE(182)] = 6751,
  [SMALL_STATE(183)] = 6766,
  [SMALL_STATE(184)] = 6781,
  [SMALL_STATE(185)] = 6796,
  [SMALL_STATE(186)] = 6811,
  [SMALL_STATE(187)] = 6826,
  [SMALL_STATE(188)] = 6841,
  [SMALL_STATE(189)] = 6856,
  [SMALL_STATE(190)] = 6871,
  [SMALL_STATE(191)] = 6886,
  [SMALL_STATE(192)] = 6901,
  [SMALL_STATE(193)] = 6916,
  [SMALL_STATE(194)] = 6933,
  [SMALL_STATE(195)] = 6952,
  [SMALL_STATE(196)] = 6967,
  [SMALL_STATE(197)] = 6986,
  [SMALL_STATE(198)] = 7001,
  [SMALL_STATE(199)] = 7016,
  [SMALL_STATE(200)] = 7031,
  [SMALL_STATE(201)] = 7046,
  [SMALL_STATE(202)] = 7061,
  [SMALL_STATE(203)] = 7076,
  [SMALL_STATE(204)] = 7091,
  [SMALL_STATE(205)] = 7106,
  [SMALL_STATE(206)] = 7121,
  [SMALL_STATE(207)] = 7136,
  [SMALL_STATE(208)] = 7151,
  [SMALL_STATE(209)] = 7166,
  [SMALL_STATE(210)] = 7181,
  [SMALL_STATE(211)] = 7196,
  [SMALL_STATE(212)] = 7211,
  [SMALL_STATE(213)] = 7226,
  [SMALL_STATE(214)] = 7241,
  [SMALL_STATE(215)] = 7256,
  [SMALL_STATE(216)] = 7271,
  [SMALL_STATE(217)] = 7286,
  [SMALL_STATE(218)] = 7301,
  [SMALL_STATE(219)] = 7316,
  [SMALL_STATE(220)] = 7331,
  [SMALL_STATE(221)] = 7346,
  [SMALL_STATE(222)] = 7361,
  [SMALL_STATE(223)] = 7380,
  [SMALL_STATE(224)] = 7395,
  [SMALL_STATE(225)] = 7410,
  [SMALL_STATE(226)] = 7429,
  [SMALL_STATE(227)] = 7448,
  [SMALL_STATE(228)] = 7463,
  [SMALL_STATE(229)] = 7478,
  [SMALL_STATE(230)] = 7493,
  [SMALL_STATE(231)] = 7512,
  [SMALL_STATE(232)] = 7531,
  [SMALL_STATE(233)] = 7550,
  [SMALL_STATE(234)] = 7569,
  [SMALL_STATE(235)] = 7584,
  [SMALL_STATE(236)] = 7598,
  [SMALL_STATE(237)] = 7614,
  [SMALL_STATE(238)] = 7630,
  [SMALL_STATE(239)] = 7646,
  [SMALL_STATE(240)] = 7674,
  [SMALL_STATE(241)] = 7690,
  [SMALL_STATE(242)] = 7710,
  [SMALL_STATE(243)] = 7724,
  [SMALL_STATE(244)] = 7740,
  [SMALL_STATE(245)] = 7754,
  [SMALL_STATE(246)] = 7772,
  [SMALL_STATE(247)] = 7786,
  [SMALL_STATE(248)] = 7804,
  [SMALL_STATE(249)] = 7822,
  [SMALL_STATE(250)] = 7840,
  [SMALL_STATE(251)] = 7858,
  [SMALL_STATE(252)] = 7874,
  [SMALL_STATE(253)] = 7888,
  [SMALL_STATE(254)] = 7899,
  [SMALL_STATE(255)] = 7922,
  [SMALL_STATE(256)] = 7935,
  [SMALL_STATE(257)] = 7948,
  [SMALL_STATE(258)] = 7961,
  [SMALL_STATE(259)] = 7972,
  [SMALL_STATE(260)] = 7983,
  [SMALL_STATE(261)] = 7996,
  [SMALL_STATE(262)] = 8007,
  [SMALL_STATE(263)] = 8018,
  [SMALL_STATE(264)] = 8031,
  [SMALL_STATE(265)] = 8054,
  [SMALL_STATE(266)] = 8067,
  [SMALL_STATE(267)] = 8080,
  [SMALL_STATE(268)] = 8091,
  [SMALL_STATE(269)] = 8102,
  [SMALL_STATE(270)] = 8113,
  [SMALL_STATE(271)] = 8124,
  [SMALL_STATE(272)] = 8137,
  [SMALL_STATE(273)] = 8148,
  [SMALL_STATE(274)] = 8159,
  [SMALL_STATE(275)] = 8170,
  [SMALL_STATE(276)] = 8183,
  [SMALL_STATE(277)] = 8194,
  [SMALL_STATE(278)] = 8207,
  [SMALL_STATE(279)] = 8220,
  [SMALL_STATE(280)] = 8231,
  [SMALL_STATE(281)] = 8244,
  [SMALL_STATE(282)] = 8255,
  [SMALL_STATE(283)] = 8266,
  [SMALL_STATE(284)] = 8277,
  [SMALL_STATE(285)] = 8292,
  [SMALL_STATE(286)] = 8303,
  [SMALL_STATE(287)] = 8316,
  [SMALL_STATE(288)] = 8327,
  [SMALL_STATE(289)] = 8340,
  [SMALL_STATE(290)] = 8363,
  [SMALL_STATE(291)] = 8382,
  [SMALL_STATE(292)] = 8393,
  [SMALL_STATE(293)] = 8404,
  [SMALL_STATE(294)] = 8415,
  [SMALL_STATE(295)] = 8426,
  [SMALL_STATE(296)] = 8437,
  [SMALL_STATE(297)] = 8450,
  [SMALL_STATE(298)] = 8465,
  [SMALL_STATE(299)] = 8480,
  [SMALL_STATE(300)] = 8493,
  [SMALL_STATE(301)] = 8504,
  [SMALL_STATE(302)] = 8519,
  [SMALL_STATE(303)] = 8532,
  [SMALL_STATE(304)] = 8545,
  [SMALL_STATE(305)] = 8561,
  [SMALL_STATE(306)] = 8573,
  [SMALL_STATE(307)] = 8585,
  [SMALL_STATE(308)] = 8597,
  [SMALL_STATE(309)] = 8609,
  [SMALL_STATE(310)] = 8623,
  [SMALL_STATE(311)] = 8645,
  [SMALL_STATE(312)] = 8659,
  [SMALL_STATE(313)] = 8675,
  [SMALL_STATE(314)] = 8687,
  [SMALL_STATE(315)] = 8699,
  [SMALL_STATE(316)] = 8711,
  [SMALL_STATE(317)] = 8723,
  [SMALL_STATE(318)] = 8742,
  [SMALL_STATE(319)] = 8761,
  [SMALL_STATE(320)] = 8770,
  [SMALL_STATE(321)] = 8789,
  [SMALL_STATE(322)] = 8802,
  [SMALL_STATE(323)] = 8811,
  [SMALL_STATE(324)] = 8828,
  [SMALL_STATE(325)] = 8847,
  [SMALL_STATE(326)] = 8864,
  [SMALL_STATE(327)] = 8881,
  [SMALL_STATE(328)] = 8900,
  [SMALL_STATE(329)] = 8915,
  [SMALL_STATE(330)] = 8924,
  [SMALL_STATE(331)] = 8941,
  [SMALL_STATE(332)] = 8960,
  [SMALL_STATE(333)] = 8973,
  [SMALL_STATE(334)] = 8992,
  [SMALL_STATE(335)] = 9011,
  [SMALL_STATE(336)] = 9030,
  [SMALL_STATE(337)] = 9045,
  [SMALL_STATE(338)] = 9054,
  [SMALL_STATE(339)] = 9073,
  [SMALL_STATE(340)] = 9092,
  [SMALL_STATE(341)] = 9105,
  [SMALL_STATE(342)] = 9122,
  [SMALL_STATE(343)] = 9141,
  [SMALL_STATE(344)] = 9156,
  [SMALL_STATE(345)] = 9175,
  [SMALL_STATE(346)] = 9184,
  [SMALL_STATE(347)] = 9203,
  [SMALL_STATE(348)] = 9212,
  [SMALL_STATE(349)] = 9221,
  [SMALL_STATE(350)] = 9240,
  [SMALL_STATE(351)] = 9249,
  [SMALL_STATE(352)] = 9266,
  [SMALL_STATE(353)] = 9279,
  [SMALL_STATE(354)] = 9298,
  [SMALL_STATE(355)] = 9313,
  [SMALL_STATE(356)] = 9328,
  [SMALL_STATE(357)] = 9347,
  [SMALL_STATE(358)] = 9364,
  [SMALL_STATE(359)] = 9383,
  [SMALL_STATE(360)] = 9392,
  [SMALL_STATE(361)] = 9408,
  [SMALL_STATE(362)] = 9424,
  [SMALL_STATE(363)] = 9440,
  [SMALL_STATE(364)] = 9456,
  [SMALL_STATE(365)] = 9472,
  [SMALL_STATE(366)] = 9488,
  [SMALL_STATE(367)] = 9504,
  [SMALL_STATE(368)] = 9520,
  [SMALL_STATE(369)] = 9536,
  [SMALL_STATE(370)] = 9552,
  [SMALL_STATE(371)] = 9568,
  [SMALL_STATE(372)] = 9580,
  [SMALL_STATE(373)] = 9596,
  [SMALL_STATE(374)] = 9612,
  [SMALL_STATE(375)] = 9628,
  [SMALL_STATE(376)] = 9644,
  [SMALL_STATE(377)] = 9660,
  [SMALL_STATE(378)] = 9676,
  [SMALL_STATE(379)] = 9692,
  [SMALL_STATE(380)] = 9708,
  [SMALL_STATE(381)] = 9724,
  [SMALL_STATE(382)] = 9740,
  [SMALL_STATE(383)] = 9756,
  [SMALL_STATE(384)] = 9772,
  [SMALL_STATE(385)] = 9788,
  [SMALL_STATE(386)] = 9804,
  [SMALL_STATE(387)] = 9820,
  [SMALL_STATE(388)] = 9836,
  [SMALL_STATE(389)] = 9852,
  [SMALL_STATE(390)] = 9868,
  [SMALL_STATE(391)] = 9884,
  [SMALL_STATE(392)] = 9896,
  [SMALL_STATE(393)] = 9912,
  [SMALL_STATE(394)] = 9924,
  [SMALL_STATE(395)] = 9940,
  [SMALL_STATE(396)] = 9956,
  [SMALL_STATE(397)] = 9964,
  [SMALL_STATE(398)] = 9980,
  [SMALL_STATE(399)] = 9987,
  [SMALL_STATE(400)] = 9998,
  [SMALL_STATE(401)] = 10009,
  [SMALL_STATE(402)] = 10020,
  [SMALL_STATE(403)] = 10033,
  [SMALL_STATE(404)] = 10044,
  [SMALL_STATE(405)] = 10051,
  [SMALL_STATE(406)] = 10064,
  [SMALL_STATE(407)] = 10077,
  [SMALL_STATE(408)] = 10088,
  [SMALL_STATE(409)] = 10101,
  [SMALL_STATE(410)] = 10108,
  [SMALL_STATE(411)] = 10115,
  [SMALL_STATE(412)] = 10122,
  [SMALL_STATE(413)] = 10133,
  [SMALL_STATE(414)] = 10142,
  [SMALL_STATE(415)] = 10149,
  [SMALL_STATE(416)] = 10160,
  [SMALL_STATE(417)] = 10167,
  [SMALL_STATE(418)] = 10178,
  [SMALL_STATE(419)] = 10191,
  [SMALL_STATE(420)] = 10202,
  [SMALL_STATE(421)] = 10213,
  [SMALL_STATE(422)] = 10224,
  [SMALL_STATE(423)] = 10231,
  [SMALL_STATE(424)] = 10244,
  [SMALL_STATE(425)] = 10251,
  [SMALL_STATE(426)] = 10264,
  [SMALL_STATE(427)] = 10277,
  [SMALL_STATE(428)] = 10290,
  [SMALL_STATE(429)] = 10303,
  [SMALL_STATE(430)] = 10316,
  [SMALL_STATE(431)] = 10329,
  [SMALL_STATE(432)] = 10340,
  [SMALL_STATE(433)] = 10350,
  [SMALL_STATE(434)] = 10360,
  [SMALL_STATE(435)] = 10366,
  [SMALL_STATE(436)] = 10376,
  [SMALL_STATE(437)] = 10382,
  [SMALL_STATE(438)] = 10392,
  [SMALL_STATE(439)] = 10400,
  [SMALL_STATE(440)] = 10410,
  [SMALL_STATE(441)] = 10420,
  [SMALL_STATE(442)] = 10430,
  [SMALL_STATE(443)] = 10440,
  [SMALL_STATE(444)] = 10448,
  [SMALL_STATE(445)] = 10458,
  [SMALL_STATE(446)] = 10464,
  [SMALL_STATE(447)] = 10474,
  [SMALL_STATE(448)] = 10482,
  [SMALL_STATE(449)] = 10492,
  [SMALL_STATE(450)] = 10499,
  [SMALL_STATE(451)] = 10506,
  [SMALL_STATE(452)] = 10513,
  [SMALL_STATE(453)] = 10520,
  [SMALL_STATE(454)] = 10527,
  [SMALL_STATE(455)] = 10532,
  [SMALL_STATE(456)] = 10539,
  [SMALL_STATE(457)] = 10546,
  [SMALL_STATE(458)] = 10553,
  [SMALL_STATE(459)] = 10560,
  [SMALL_STATE(460)] = 10567,
  [SMALL_STATE(461)] = 10574,
  [SMALL_STATE(462)] = 10581,
  [SMALL_STATE(463)] = 10588,
  [SMALL_STATE(464)] = 10595,
  [SMALL_STATE(465)] = 10602,
  [SMALL_STATE(466)] = 10609,
  [SMALL_STATE(467)] = 10616,
  [SMALL_STATE(468)] = 10623,
  [SMALL_STATE(469)] = 10628,
  [SMALL_STATE(470)] = 10635,
  [SMALL_STATE(471)] = 10642,
  [SMALL_STATE(472)] = 10647,
  [SMALL_STATE(473)] = 10652,
  [SMALL_STATE(474)] = 10657,
  [SMALL_STATE(475)] = 10664,
  [SMALL_STATE(476)] = 10669,
  [SMALL_STATE(477)] = 10676,
  [SMALL_STATE(478)] = 10683,
  [SMALL_STATE(479)] = 10690,
  [SMALL_STATE(480)] = 10697,
  [SMALL_STATE(481)] = 10704,
  [SMALL_STATE(482)] = 10711,
  [SMALL_STATE(483)] = 10716,
  [SMALL_STATE(484)] = 10723,
  [SMALL_STATE(485)] = 10730,
  [SMALL_STATE(486)] = 10737,
  [SMALL_STATE(487)] = 10744,
  [SMALL_STATE(488)] = 10749,
  [SMALL_STATE(489)] = 10756,
  [SMALL_STATE(490)] = 10763,
  [SMALL_STATE(491)] = 10770,
  [SMALL_STATE(492)] = 10775,
  [SMALL_STATE(493)] = 10782,
  [SMALL_STATE(494)] = 10789,
  [SMALL_STATE(495)] = 10796,
  [SMALL_STATE(496)] = 10801,
  [SMALL_STATE(497)] = 10806,
  [SMALL_STATE(498)] = 10810,
  [SMALL_STATE(499)] = 10814,
  [SMALL_STATE(500)] = 10818,
  [SMALL_STATE(501)] = 10822,
  [SMALL_STATE(502)] = 10826,
  [SMALL_STATE(503)] = 10830,
  [SMALL_STATE(504)] = 10834,
  [SMALL_STATE(505)] = 10838,
  [SMALL_STATE(506)] = 10842,
  [SMALL_STATE(507)] = 10846,
  [SMALL_STATE(508)] = 10850,
  [SMALL_STATE(509)] = 10854,
  [SMALL_STATE(510)] = 10858,
  [SMALL_STATE(511)] = 10862,
  [SMALL_STATE(512)] = 10866,
  [SMALL_STATE(513)] = 10870,
  [SMALL_STATE(514)] = 10874,
  [SMALL_STATE(515)] = 10878,
  [SMALL_STATE(516)] = 10882,
  [SMALL_STATE(517)] = 10886,
  [SMALL_STATE(518)] = 10890,
  [SMALL_STATE(519)] = 10894,
  [SMALL_STATE(520)] = 10898,
  [SMALL_STATE(521)] = 10902,
  [SMALL_STATE(522)] = 10906,
  [SMALL_STATE(523)] = 10910,
  [SMALL_STATE(524)] = 10914,
  [SMALL_STATE(525)] = 10918,
  [SMALL_STATE(526)] = 10922,
  [SMALL_STATE(527)] = 10926,
  [SMALL_STATE(528)] = 10930,
  [SMALL_STATE(529)] = 10934,
  [SMALL_STATE(530)] = 10938,
  [SMALL_STATE(531)] = 10942,
  [SMALL_STATE(532)] = 10946,
  [SMALL_STATE(533)] = 10950,
  [SMALL_STATE(534)] = 10954,
  [SMALL_STATE(535)] = 10958,
  [SMALL_STATE(536)] = 10962,
  [SMALL_STATE(537)] = 10966,
  [SMALL_STATE(538)] = 10970,
  [SMALL_STATE(539)] = 10974,
  [SMALL_STATE(540)] = 10978,
  [SMALL_STATE(541)] = 10982,
  [SMALL_STATE(542)] = 10986,
  [SMALL_STATE(543)] = 10990,
  [SMALL_STATE(544)] = 10994,
  [SMALL_STATE(545)] = 10998,
  [SMALL_STATE(546)] = 11002,
  [SMALL_STATE(547)] = 11006,
  [SMALL_STATE(548)] = 11010,
  [SMALL_STATE(549)] = 11014,
  [SMALL_STATE(550)] = 11018,
  [SMALL_STATE(551)] = 11022,
  [SMALL_STATE(552)] = 11026,
  [SMALL_STATE(553)] = 11030,
  [SMALL_STATE(554)] = 11034,
  [SMALL_STATE(555)] = 11038,
  [SMALL_STATE(556)] = 11042,
  [SMALL_STATE(557)] = 11046,
  [SMALL_STATE(558)] = 11050,
  [SMALL_STATE(559)] = 11054,
  [SMALL_STATE(560)] = 11058,
  [SMALL_STATE(561)] = 11062,
  [SMALL_STATE(562)] = 11066,
  [SMALL_STATE(563)] = 11070,
  [SMALL_STATE(564)] = 11074,
  [SMALL_STATE(565)] = 11078,
  [SMALL_STATE(566)] = 11082,
  [SMALL_STATE(567)] = 11086,
  [SMALL_STATE(568)] = 11090,
  [SMALL_STATE(569)] = 11094,
  [SMALL_STATE(570)] = 11098,
  [SMALL_STATE(571)] = 11102,
  [SMALL_STATE(572)] = 11106,
  [SMALL_STATE(573)] = 11110,
  [SMALL_STATE(574)] = 11114,
  [SMALL_STATE(575)] = 11118,
  [SMALL_STATE(576)] = 11122,
  [SMALL_STATE(577)] = 11126,
  [SMALL_STATE(578)] = 11130,
  [SMALL_STATE(579)] = 11134,
  [SMALL_STATE(580)] = 11138,
  [SMALL_STATE(581)] = 11142,
  [SMALL_STATE(582)] = 11146,
  [SMALL_STATE(583)] = 11150,
  [SMALL_STATE(584)] = 11154,
  [SMALL_STATE(585)] = 11158,
  [SMALL_STATE(586)] = 11162,
  [SMALL_STATE(587)] = 11166,
  [SMALL_STATE(588)] = 11170,
  [SMALL_STATE(589)] = 11174,
  [SMALL_STATE(590)] = 11178,
  [SMALL_STATE(591)] = 11182,
  [SMALL_STATE(592)] = 11186,
  [SMALL_STATE(593)] = 11190,
  [SMALL_STATE(594)] = 11194,
  [SMALL_STATE(595)] = 11198,
  [SMALL_STATE(596)] = 11202,
  [SMALL_STATE(597)] = 11206,
  [SMALL_STATE(598)] = 11210,
  [SMALL_STATE(599)] = 11214,
  [SMALL_STATE(600)] = 11218,
  [SMALL_STATE(601)] = 11222,
  [SMALL_STATE(602)] = 11226,
  [SMALL_STATE(603)] = 11230,
  [SMALL_STATE(604)] = 11234,
  [SMALL_STATE(605)] = 11238,
  [SMALL_STATE(606)] = 11242,
  [SMALL_STATE(607)] = 11246,
  [SMALL_STATE(608)] = 11250,
  [SMALL_STATE(609)] = 11254,
  [SMALL_STATE(610)] = 11258,
  [SMALL_STATE(611)] = 11262,
  [SMALL_STATE(612)] = 11266,
  [SMALL_STATE(613)] = 11270,
  [SMALL_STATE(614)] = 11274,
  [SMALL_STATE(615)] = 11278,
  [SMALL_STATE(616)] = 11282,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsql_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(590),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(589),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(581),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(569),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(568),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(567),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(558),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(616),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(607),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(597),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(585),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(586),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(598),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(588),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(615),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(605),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(577),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(578),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(594),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(580),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_operator, 1, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_operator, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsql_file, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(324),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 3, 0, 10),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 3, 0, 10),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_expression, 1, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_expression, 1, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_LOCAL_ID_, 1, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_LOCAL_ID_, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body_batch, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body_batch, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udt_elem, 3, 0, 13),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_udt_elem, 3, 0, 13),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_var_string, 3, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_var_string, 3, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_var_string, 1, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_var_string, 1, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_batch, 2, 0, 0),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 2, 0, 0), SHIFT(249),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 2, 0, 0), SHIFT(73),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 2, 0, 0), SHIFT(2),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_batch, 2, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_batch, 1, 0, 0),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 1, 0, 0), SHIFT(249),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 1, 0, 0), SHIFT(73),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 1, 0, 0), SHIFT(2),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_batch, 1, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_, 1, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_, 1, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_elem, 1, 0, 3),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_elem, 1, 0, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_var_string, 5, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_var_string, 5, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udt_elem, 4, 0, 13),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_udt_elem, 4, 0, 13),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_batch_repeat1, 2, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_batch_repeat1, 2, 0, 0),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_batch_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_batch_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 5, 0, 21),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_database_schema, 5, 0, 21),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 4, 0, 8),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 4, 0, 8),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 17),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 17),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 16),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 16),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 18),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 18),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(563),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 4, 0, 15),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_database_schema, 4, 0, 15),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 20),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 20),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 22),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 22),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_schema, 1, 0, 1),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_schema, 1, 0, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 1, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_database_schema, 1, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 1, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 1, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 19),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 19),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 7, 0, 29),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 7, 0, 29),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 4, 0, 9),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_database_schema, 4, 0, 9),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_schema, 3, 0, 7),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_schema, 3, 0, 7),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 3, 0, 5),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_database_schema, 3, 0, 5),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_go_statement, 1, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_go_statement, 1, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 25),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 25),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 26),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 26),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_, 1, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_, 1, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_column_name, 1, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_column_name, 1, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_alias, 1, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_, 1, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_, 1, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_money_, 2, 0, 6),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_money_, 2, 0, 6),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_over_clause, 3, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_over_clause, 3, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_over_clause, 5, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_over_clause, 5, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 7, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 7, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 4, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 4, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 8, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 8, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real_, 4, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real_, 4, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_over_clause, 6, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_over_clause, 6, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_over_clause, 4, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_over_clause, 4, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 11, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 11, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 12, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 12, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranking_windowed_function, 4, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ranking_windowed_function, 4, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranking_windowed_function, 5, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ranking_windowed_function, 5, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_windowed_function, 5, 0, 19),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_windowed_function, 5, 0, 19),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_windowed_function, 5, 0, 18),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_windowed_function, 5, 0, 18),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 5, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 5, 0, 0),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real_, 3, 0, 0),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real_, 3, 0, 0),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_constant, 1, 0, 0),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_constant, 1, 0, 0),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 3, 0, 0),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 3, 0, 0),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_money_, 3, 0, 6),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_money_, 3, 0, 6),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udt_method_arguments, 4, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_udt_method_arguments, 4, 0, 0),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udt_method_arguments, 3, 0, 0),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_udt_method_arguments, 3, 0, 0),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(560),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_parameter, 1, 0, 0),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_parameter, 1, 0, 0),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list, 2, 0, 0),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_list, 2, 0, 0),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_statement_arg, 1, 0, 0),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_statement_arg, 1, 0, 0),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_list_repeat1, 2, 0, 0),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_select_list_repeat1, 2, 0, 0),
  [583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_list_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_statement_arg, 2, 0, 0),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_statement_arg, 2, 0, 0),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 3, 0, 0),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 3, 0, 0),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 4, 0, 0),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 4, 0, 0),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_statement_arg_repeat1, 2, 0, 0),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_execute_statement_arg_repeat1, 2, 0, 0),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_statement_arg_repeat1, 2, 0, 0), SHIFT_REPEAT(494),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list, 1, 0, 0),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_list, 1, 0, 0),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_body_batch_repeat1, 2, 0, 0),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_execute_body_batch_repeat1, 2, 0, 0),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_body_batch_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_statement_arg_named, 3, 0, 14),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_statement_arg_named, 3, 0, 14),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_parameter, 2, 0, 0),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_parameter, 2, 0, 0),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list_elem, 1, 0, 0),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_list_elem, 1, 0, 0),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2, 0, 0),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 2, 0, 0),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_statement_arg_unnamed, 1, 0, 4),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_statement_arg_unnamed, 1, 0, 4),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1, 0, 0),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1, 0, 0),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list_elem, 3, 0, 0),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_list_elem, 3, 0, 0),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_alias, 1, 0, 0),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_elem, 3, 0, 12),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_elem, 3, 0, 12),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_column_alias, 2, 0, 0),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as_column_alias, 2, 0, 0),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_elem, 2, 0, 3),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_elem, 2, 0, 3),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_column_alias, 1, 0, 0),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as_column_alias, 1, 0, 0),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 7, 0, 10),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 7, 0, 10),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 6, 0, 10),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 6, 0, 10),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udt_elem, 5, 0, 13),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_udt_elem, 5, 0, 13),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_body_repeat1, 2, 0, 0),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_execute_body_repeat1, 2, 0, 0),
  [694] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_body_repeat1, 2, 0, 0), SHIFT_REPEAT(427),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 5, 0, 0),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 5, 0, 0),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 5, 0, 10),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 5, 0, 10),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 2, 0, 0),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 2, 0, 0),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 8, 0, 0),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 8, 0, 0),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 4, 0, 10),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 4, 0, 10),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [731] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat2, 1, 0, 0), REDUCE(sym_batch, 2, 0, 0),
  [734] = {.entry = {.count = 3, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat2, 1, 0, 0), REDUCE(sym_batch, 2, 0, 0), SHIFT(249),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_option, 2, 0, 0),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_option, 2, 0, 0),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 7, 0, 0),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 7, 0, 0),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat2, 2, 0, 0),
  [750] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat2, 2, 0, 0), SHIFT_REPEAT(249),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat2, 2, 0, 0),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_option, 1, 0, 0),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_option, 1, 0, 0),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_batch, 3, 0, 0),
  [761] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 3, 0, 0), SHIFT(249),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_batch, 3, 0, 0),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_specification, 2, 0, 0),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_specification, 2, 0, 0),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1, 0, 0),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 1, 0, 0),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_expression, 1, 0, 0),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_expression, 1, 0, 0),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 9, 0, 35),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 9, 0, 35),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 6, 0, 27),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 6, 0, 27),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 5, 0, 23),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 5, 0, 23),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_statement, 2, 0, 0),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_statement, 2, 0, 0),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_sources, 1, 0, 0),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_sources, 1, 0, 0),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_table_name, 7, 0, 39),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_table_name, 7, 0, 39),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_source, 1, 0, 0),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_source, 1, 0, 0),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 10, 0, 40),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 10, 0, 40),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement_standalone, 1, 0, 0),
  [824] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement_standalone, 1, 0, 0),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_clause, 1, 0, 0),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dml_clause, 1, 0, 0),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_table_name, 3, 0, 24),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_table_name, 3, 0, 24),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_specification, 4, 0, 0),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_specification, 4, 0, 0),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 1, 0, 30),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_table_name, 1, 0, 11),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_table_name, 1, 0, 11),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_table_name, 5, 0, 31),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_table_name, 5, 0, 31),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_another_statement, 1, 0, 0),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_another_statement, 1, 0, 0),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_clauses, 1, 0, 0),
  [870] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_clauses, 1, 0, 0),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_source_item, 1, 0, 0),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_source_item, 1, 0, 0),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body_batch, 2, 0, 0),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_clauses, 2, 0, 0),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_clauses, 2, 0, 0),
  [890] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_statement_arg_repeat1, 2, 0, 0), SHIFT_REPEAT(456),
  [893] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_body_batch_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body_batch, 3, 0, 0),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_go_statement, 2, 0, 2),
  [902] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_go_statement, 2, 0, 2),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [906] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1, 0, 0),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [916] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list__repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list__repeat1, 2, 0, 0),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collation_, 2, 0, 36),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 2, 0, 30),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list_, 2, 0, 0),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list_, 1, 0, 0),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [991] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 3, 0, 0),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 4, 0, 0),
  [1007] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_order_by_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_order_by_clause_repeat1, 2, 0, 0),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 2, 0, 33),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1016] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat2, 2, 0, 0), SHIFT_REPEAT(403),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 3, 0, 38),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 3, 0, 37),
  [1029] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as, 1, 0, 0),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as, 1, 0, 0),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 2, 0, 34),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsql_file, 2, 0, 0),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body_batch, 4, 0, 0),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_by_clause, 3, 0, 0),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lag_lead_args, 3, 0, 0),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lag_lead_args, 5, 0, 28),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1067] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_body_repeat2, 2, 0, 0), SHIFT_REPEAT(402),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_body_repeat2, 2, 0, 0),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1074] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list__repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lag_lead_args, 7, 0, 32),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_RESULT_SETS, 2, 0, 0),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AS, 1, 0, 0),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_frame_preceding, 2, 0, 0),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_frame_bound, 1, 0, 0),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_frame_following, 2, 0, 0),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1139] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_all_distinct_expression, 1, 0, 0),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_over_, 1, 0, 0),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ignore_nulls_, 2, 0, 0),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_respect_nulls_, 2, 0, 0),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_all_distinct_expression, 2, 0, 0),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_within_group_, 2, 0, 0),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row_or_range_clause, 2, 0, 0),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_frame_extent, 1, 0, 0),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_frame_extent, 4, 0, 0),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
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
