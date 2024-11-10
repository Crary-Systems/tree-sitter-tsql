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
#define STATE_COUNT 731
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 197
#define ALIAS_COUNT 0
#define TOKEN_COUNT 110
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 28
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 45

enum ts_symbol_identifiers {
  anon_sym_LPAREN = 1,
  anon_sym_COMMA = 2,
  anon_sym_RPAREN = 3,
  aux_sym_pstmt_vardecl_token1 = 4,
  aux_sym_go_statement_token1 = 5,
  anon_sym_SEMI = 6,
  aux_sym_func_proc_name_server_database_schema_token1 = 7,
  anon_sym_EQ = 8,
  sym_OUTPUT = 9,
  sym_default = 10,
  sym_null_ = 11,
  aux_sym_constant_token1 = 12,
  aux_sym_constant_token2 = 13,
  aux_sym_constant_token3 = 14,
  sym_execute = 15,
  aux_sym_execute_body_token1 = 16,
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
  sym_prepared_stmt_vardecls = 112,
  sym_pstmt_vardecl = 113,
  sym_data_type = 114,
  sym_go_statement = 115,
  sym_execute_body_batch = 116,
  sym_func_proc_name_server_database_schema = 117,
  sym_func_proc_name_database_schema = 118,
  sym_func_proc_name_schema = 119,
  sym_execute_statement_arg = 120,
  sym_execute_statement_arg_named = 121,
  sym_execute_statement_arg_unnamed = 122,
  sym_execute_parameter = 123,
  sym_LOCAL_ID_ = 124,
  sym_constant = 125,
  sym_sql_clauses = 126,
  sym_another_statement = 127,
  sym_execute_statement = 128,
  sym_execute_body = 129,
  sym_execute_option = 130,
  sym_RESULT_SETS = 131,
  sym_AS = 132,
  sym_execute_var_string = 133,
  sym_dml_clause = 134,
  sym_select_statement_standalone = 135,
  sym_select_statement = 136,
  sym_query_expression = 137,
  sym_query_specification = 138,
  sym_select_list = 139,
  sym_select_list_elem = 140,
  sym_assignment_operator = 141,
  sym_udt_elem = 142,
  sym_udt_method_arguments = 143,
  sym_expression_elem = 144,
  sym_as_column_alias = 145,
  sym_column_alias = 146,
  sym_table_sources = 147,
  sym_table_source = 148,
  sym_table_source_item = 149,
  sym_full_table_name = 150,
  sym_full_column_name = 151,
  sym_expression = 152,
  sym_function_call = 153,
  sym_hierarchyid_static_method = 154,
  sym_partition_function = 155,
  sym_scalar_function_name = 156,
  sym_analytic_windowed_function = 157,
  sym_over_ = 158,
  sym_within_group_ = 159,
  sym_lag_lead_args = 160,
  sym_ignore_nulls_ = 161,
  sym_respect_nulls_ = 162,
  sym_aggregate_windowed_function = 163,
  sym_all_distinct_expression = 164,
  sym_ranking_windowed_function = 165,
  sym_over_clause = 166,
  sym_partition_by_clause = 167,
  sym_expression_list_ = 168,
  sym_order_by_clause = 169,
  sym_order_by_expression = 170,
  sym_collation_ = 171,
  sym_window_frame_extent = 172,
  sym_window_frame_bound = 173,
  sym_window_frame_following = 174,
  sym_window_frame_preceding = 175,
  sym_row_or_range_clause = 176,
  sym_primitive_expression = 177,
  sym_primitive_constant = 178,
  sym_money_ = 179,
  sym_real_ = 180,
  sym_float_ = 181,
  sym_decimal_ = 182,
  sym_id_ = 183,
  sym_keyword = 184,
  sym_integer = 185,
  aux_sym_tsql_file_repeat1 = 186,
  aux_sym_tsql_file_repeat2 = 187,
  aux_sym_batch_repeat1 = 188,
  aux_sym_prepared_stmt_vardecls_repeat1 = 189,
  aux_sym_execute_body_batch_repeat1 = 190,
  aux_sym_execute_statement_arg_repeat1 = 191,
  aux_sym_execute_body_repeat1 = 192,
  aux_sym_execute_body_repeat2 = 193,
  aux_sym_select_list_repeat1 = 194,
  aux_sym_expression_list__repeat1 = 195,
  aux_sym_order_by_clause_repeat1 = 196,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [aux_sym_pstmt_vardecl_token1] = "pstmt_vardecl_token1",
  [aux_sym_go_statement_token1] = "go_statement_token1",
  [anon_sym_SEMI] = ";",
  [aux_sym_func_proc_name_server_database_schema_token1] = "func_proc_name_server_database_schema_token1",
  [anon_sym_EQ] = "=",
  [sym_OUTPUT] = "OUTPUT",
  [sym_default] = "default",
  [sym_null_] = "null_",
  [aux_sym_constant_token1] = "constant_token1",
  [aux_sym_constant_token2] = "constant_token2",
  [aux_sym_constant_token3] = "constant_token3",
  [sym_execute] = "execute",
  [aux_sym_execute_body_token1] = "execute_body_token1",
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
  [sym_prepared_stmt_vardecls] = "prepared_stmt_vardecls",
  [sym_pstmt_vardecl] = "pstmt_vardecl",
  [sym_data_type] = "data_type",
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
  [aux_sym_prepared_stmt_vardecls_repeat1] = "prepared_stmt_vardecls_repeat1",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_pstmt_vardecl_token1] = aux_sym_pstmt_vardecl_token1,
  [aux_sym_go_statement_token1] = aux_sym_go_statement_token1,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_func_proc_name_server_database_schema_token1] = aux_sym_func_proc_name_server_database_schema_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_OUTPUT] = sym_OUTPUT,
  [sym_default] = sym_default,
  [sym_null_] = sym_null_,
  [aux_sym_constant_token1] = aux_sym_constant_token1,
  [aux_sym_constant_token2] = aux_sym_constant_token2,
  [aux_sym_constant_token3] = aux_sym_constant_token3,
  [sym_execute] = sym_execute,
  [aux_sym_execute_body_token1] = aux_sym_execute_body_token1,
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
  [sym_prepared_stmt_vardecls] = sym_prepared_stmt_vardecls,
  [sym_pstmt_vardecl] = sym_pstmt_vardecl,
  [sym_data_type] = sym_data_type,
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
  [aux_sym_prepared_stmt_vardecls_repeat1] = aux_sym_prepared_stmt_vardecls_repeat1,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_pstmt_vardecl_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_go_statement_token1] = {
    .visible = false,
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
  [sym_prepared_stmt_vardecls] = {
    .visible = true,
    .named = true,
  },
  [sym_pstmt_vardecl] = {
    .visible = true,
    .named = true,
  },
  [sym_data_type] = {
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
  [aux_sym_prepared_stmt_vardecls_repeat1] = {
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
  field_ext_type = 11,
  field_func_name = 12,
  field_input = 13,
  field_leftAlias = 14,
  field_leftAssignment = 15,
  field_linkedServer = 16,
  field_name = 17,
  field_non_static_attr = 18,
  field_offset = 19,
  field_order_by = 20,
  field_procedure = 21,
  field_return_status = 22,
  field_scale = 23,
  field_schema = 24,
  field_server = 25,
  field_table = 26,
  field_udt_column_name = 27,
  field_value = 28,
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
  [field_ext_type] = "ext_type",
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
  [field_scale] = "scale",
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
  [22] = {.index = 32, .length = 2},
  [23] = {.index = 34, .length = 3},
  [24] = {.index = 37, .length = 1},
  [25] = {.index = 38, .length = 2},
  [26] = {.index = 40, .length = 3},
  [27] = {.index = 43, .length = 3},
  [28] = {.index = 46, .length = 1},
  [29] = {.index = 47, .length = 1},
  [30] = {.index = 48, .length = 1},
  [31] = {.index = 49, .length = 1},
  [32] = {.index = 50, .length = 4},
  [33] = {.index = 54, .length = 1},
  [34] = {.index = 55, .length = 3},
  [35] = {.index = 58, .length = 2},
  [36] = {.index = 60, .length = 2},
  [37] = {.index = 62, .length = 2},
  [38] = {.index = 64, .length = 2},
  [39] = {.index = 66, .length = 1},
  [40] = {.index = 67, .length = 1},
  [41] = {.index = 68, .length = 2},
  [42] = {.index = 70, .length = 2},
  [43] = {.index = 72, .length = 4},
  [44] = {.index = 76, .length = 1},
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
    {field_ext_type, 0},
    {field_scale, 2},
  [34] =
    {field_database, 1},
    {field_procedure, 5},
    {field_schema, 3},
  [37] =
    {field_linkedServer, 4},
  [38] =
    {field_schema, 0},
    {field_table, 2},
  [40] =
    {field_procedure, 5},
    {field_schema, 3},
    {field_server, 0},
  [43] =
    {field_database, 2},
    {field_procedure, 5},
    {field_server, 0},
  [46] =
    {field_linkedServer, 5},
  [47] =
    {field_input, 4},
  [48] =
    {field_func_name, 2},
  [49] =
    {field_offset, 3},
  [50] =
    {field_database, 2},
    {field_procedure, 6},
    {field_schema, 4},
    {field_server, 0},
  [54] =
    {field_order_by, 0},
  [55] =
    {field_database, 0},
    {field_schema, 2},
    {field_table, 4},
  [58] =
    {field_default, 5},
    {field_offset, 3},
  [60] =
    {field_ascending, 1},
    {field_order_by, 0},
  [62] =
    {field_descending, 1},
    {field_order_by, 0},
  [64] =
    {field_database, 0},
    {field_func_name, 4},
  [66] =
    {field_linkedServer, 8},
  [67] =
    {field_collation_name, 1},
  [68] =
    {field_ascending, 2},
    {field_order_by, 0},
  [70] =
    {field_descending, 2},
    {field_order_by, 0},
  [72] =
    {field_database, 2},
    {field_schema, 4},
    {field_server, 0},
    {field_table, 6},
  [76] =
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
  [11] = 9,
  [12] = 7,
  [13] = 13,
  [14] = 13,
  [15] = 13,
  [16] = 16,
  [17] = 16,
  [18] = 16,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 21,
  [23] = 23,
  [24] = 24,
  [25] = 24,
  [26] = 26,
  [27] = 24,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 23,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 23,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 28,
  [41] = 37,
  [42] = 35,
  [43] = 29,
  [44] = 29,
  [45] = 35,
  [46] = 39,
  [47] = 33,
  [48] = 48,
  [49] = 49,
  [50] = 33,
  [51] = 48,
  [52] = 37,
  [53] = 39,
  [54] = 54,
  [55] = 48,
  [56] = 30,
  [57] = 28,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 67,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 77,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 76,
  [84] = 84,
  [85] = 76,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 71,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 71,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 76,
  [111] = 101,
  [112] = 90,
  [113] = 113,
  [114] = 103,
  [115] = 98,
  [116] = 116,
  [117] = 93,
  [118] = 118,
  [119] = 67,
  [120] = 96,
  [121] = 71,
  [122] = 116,
  [123] = 105,
  [124] = 89,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 97,
  [132] = 107,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 100,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 109,
  [149] = 144,
  [150] = 150,
  [151] = 151,
  [152] = 92,
  [153] = 84,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 144,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 88,
  [169] = 169,
  [170] = 108,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 95,
  [176] = 94,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 71,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 67,
  [186] = 186,
  [187] = 187,
  [188] = 182,
  [189] = 184,
  [190] = 190,
  [191] = 191,
  [192] = 178,
  [193] = 118,
  [194] = 113,
  [195] = 195,
  [196] = 196,
  [197] = 76,
  [198] = 183,
  [199] = 171,
  [200] = 126,
  [201] = 163,
  [202] = 202,
  [203] = 203,
  [204] = 165,
  [205] = 205,
  [206] = 141,
  [207] = 207,
  [208] = 208,
  [209] = 130,
  [210] = 151,
  [211] = 158,
  [212] = 159,
  [213] = 67,
  [214] = 156,
  [215] = 161,
  [216] = 164,
  [217] = 127,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 142,
  [224] = 128,
  [225] = 225,
  [226] = 226,
  [227] = 71,
  [228] = 228,
  [229] = 76,
  [230] = 230,
  [231] = 140,
  [232] = 155,
  [233] = 145,
  [234] = 169,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 94,
  [239] = 239,
  [240] = 179,
  [241] = 166,
  [242] = 147,
  [243] = 143,
  [244] = 146,
  [245] = 125,
  [246] = 95,
  [247] = 150,
  [248] = 248,
  [249] = 157,
  [250] = 154,
  [251] = 167,
  [252] = 139,
  [253] = 129,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 134,
  [260] = 260,
  [261] = 261,
  [262] = 138,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 118,
  [267] = 267,
  [268] = 268,
  [269] = 113,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 129,
  [283] = 130,
  [284] = 167,
  [285] = 285,
  [286] = 286,
  [287] = 142,
  [288] = 171,
  [289] = 141,
  [290] = 155,
  [291] = 138,
  [292] = 285,
  [293] = 293,
  [294] = 151,
  [295] = 158,
  [296] = 139,
  [297] = 159,
  [298] = 156,
  [299] = 161,
  [300] = 157,
  [301] = 127,
  [302] = 125,
  [303] = 140,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 165,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 145,
  [313] = 146,
  [314] = 150,
  [315] = 315,
  [316] = 154,
  [317] = 71,
  [318] = 164,
  [319] = 319,
  [320] = 320,
  [321] = 143,
  [322] = 322,
  [323] = 147,
  [324] = 126,
  [325] = 285,
  [326] = 163,
  [327] = 327,
  [328] = 166,
  [329] = 169,
  [330] = 330,
  [331] = 331,
  [332] = 172,
  [333] = 76,
  [334] = 334,
  [335] = 335,
  [336] = 128,
  [337] = 337,
  [338] = 134,
  [339] = 339,
  [340] = 190,
  [341] = 195,
  [342] = 342,
  [343] = 183,
  [344] = 344,
  [345] = 182,
  [346] = 180,
  [347] = 347,
  [348] = 178,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 184,
  [355] = 355,
  [356] = 248,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 220,
  [361] = 361,
  [362] = 221,
  [363] = 363,
  [364] = 222,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 225,
  [373] = 226,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 374,
  [378] = 368,
  [379] = 370,
  [380] = 366,
  [381] = 381,
  [382] = 359,
  [383] = 383,
  [384] = 370,
  [385] = 357,
  [386] = 381,
  [387] = 371,
  [388] = 359,
  [389] = 260,
  [390] = 368,
  [391] = 391,
  [392] = 375,
  [393] = 257,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 395,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 400,
  [403] = 395,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 401,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 409,
  [413] = 413,
  [414] = 414,
  [415] = 394,
  [416] = 416,
  [417] = 414,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 423,
  [425] = 425,
  [426] = 408,
  [427] = 410,
  [428] = 422,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 400,
  [433] = 433,
  [434] = 433,
  [435] = 275,
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
  [448] = 437,
  [449] = 436,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 271,
  [456] = 437,
  [457] = 457,
  [458] = 458,
  [459] = 441,
  [460] = 441,
  [461] = 461,
  [462] = 179,
  [463] = 463,
  [464] = 433,
  [465] = 465,
  [466] = 466,
  [467] = 436,
  [468] = 367,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 472,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 471,
  [479] = 365,
  [480] = 361,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 472,
  [487] = 471,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 344,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 495,
  [497] = 497,
  [498] = 497,
  [499] = 499,
  [500] = 499,
  [501] = 494,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 494,
  [507] = 505,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 505,
  [513] = 502,
  [514] = 508,
  [515] = 508,
  [516] = 497,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 502,
  [522] = 350,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 492,
  [530] = 530,
  [531] = 528,
  [532] = 532,
  [533] = 533,
  [534] = 528,
  [535] = 535,
  [536] = 490,
  [537] = 490,
  [538] = 532,
  [539] = 499,
  [540] = 540,
  [541] = 532,
  [542] = 542,
  [543] = 492,
  [544] = 495,
  [545] = 540,
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
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 546,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 576,
  [580] = 562,
  [581] = 578,
  [582] = 554,
  [583] = 553,
  [584] = 550,
  [585] = 577,
  [586] = 586,
  [587] = 548,
  [588] = 588,
  [589] = 589,
  [590] = 590,
  [591] = 591,
  [592] = 592,
  [593] = 593,
  [594] = 594,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 572,
  [601] = 574,
  [602] = 546,
  [603] = 577,
  [604] = 578,
  [605] = 576,
  [606] = 562,
  [607] = 554,
  [608] = 553,
  [609] = 609,
  [610] = 610,
  [611] = 548,
  [612] = 588,
  [613] = 589,
  [614] = 614,
  [615] = 591,
  [616] = 592,
  [617] = 593,
  [618] = 594,
  [619] = 595,
  [620] = 620,
  [621] = 596,
  [622] = 588,
  [623] = 623,
  [624] = 624,
  [625] = 574,
  [626] = 626,
  [627] = 627,
  [628] = 547,
  [629] = 624,
  [630] = 599,
  [631] = 590,
  [632] = 573,
  [633] = 633,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 572,
  [638] = 638,
  [639] = 639,
  [640] = 640,
  [641] = 610,
  [642] = 589,
  [643] = 623,
  [644] = 644,
  [645] = 645,
  [646] = 646,
  [647] = 647,
  [648] = 547,
  [649] = 624,
  [650] = 599,
  [651] = 590,
  [652] = 573,
  [653] = 653,
  [654] = 654,
  [655] = 570,
  [656] = 623,
  [657] = 657,
  [658] = 591,
  [659] = 659,
  [660] = 660,
  [661] = 610,
  [662] = 662,
  [663] = 663,
  [664] = 664,
  [665] = 665,
  [666] = 659,
  [667] = 667,
  [668] = 665,
  [669] = 664,
  [670] = 620,
  [671] = 614,
  [672] = 663,
  [673] = 569,
  [674] = 560,
  [675] = 639,
  [676] = 627,
  [677] = 677,
  [678] = 662,
  [679] = 663,
  [680] = 664,
  [681] = 665,
  [682] = 659,
  [683] = 592,
  [684] = 684,
  [685] = 685,
  [686] = 620,
  [687] = 614,
  [688] = 569,
  [689] = 560,
  [690] = 639,
  [691] = 627,
  [692] = 692,
  [693] = 693,
  [694] = 684,
  [695] = 660,
  [696] = 696,
  [697] = 593,
  [698] = 698,
  [699] = 662,
  [700] = 677,
  [701] = 693,
  [702] = 684,
  [703] = 660,
  [704] = 704,
  [705] = 594,
  [706] = 706,
  [707] = 693,
  [708] = 677,
  [709] = 706,
  [710] = 640,
  [711] = 571,
  [712] = 567,
  [713] = 595,
  [714] = 706,
  [715] = 640,
  [716] = 571,
  [717] = 567,
  [718] = 718,
  [719] = 696,
  [720] = 551,
  [721] = 696,
  [722] = 551,
  [723] = 596,
  [724] = 566,
  [725] = 609,
  [726] = 609,
  [727] = 568,
  [728] = 728,
  [729] = 698,
  [730] = 698,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(385);
      ADVANCE_MAP(
        '$', 543,
        '%', 11,
        '&', 12,
        '\'', 6,
        '(', 386,
        ')', 388,
        '*', 442,
        '+', 547,
        ',', 387,
        '-', 545,
        '.', 394,
        '/', 16,
        '0', 406,
        ':', 10,
        ';', 392,
        '=', 395,
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
        'E', 550,
        'e', 550,
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
        'O', 285,
        'o', 285,
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
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(407);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '$', 543,
        '\'', 7,
        ')', 388,
        '*', 441,
        '.', 394,
        '0', 406,
        '=', 413,
        '@', 368,
        'N', 552,
        '[', 367,
        'n', 754,
        'A', 773,
        'a', 773,
        'B', 651,
        'b', 651,
        'C', 649,
        'c', 649,
        'D', 607,
        'd', 607,
        'F', 652,
        'f', 652,
        'G', 702,
        'g', 702,
        'H', 656,
        'h', 656,
        'L', 562,
        'l', 562,
        'M', 563,
        'm', 563,
        'P', 616,
        'p', 616,
        'R', 566,
        'r', 566,
        'S', 738,
        's', 738,
        'V', 567,
        'v', 567,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (lookahead == '#' ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '$', 543,
        '\'', 7,
        '*', 441,
        '.', 394,
        '0', 406,
        '@', 368,
        'N', 552,
        '[', 367,
        'n', 754,
        'A', 673,
        'a', 673,
        'B', 651,
        'b', 651,
        'C', 649,
        'c', 649,
        'D', 606,
        'd', 606,
        'F', 652,
        'f', 652,
        'G', 702,
        'g', 702,
        'H', 656,
        'h', 656,
        'L', 562,
        'l', 562,
        'M', 563,
        'm', 563,
        'P', 616,
        'p', 616,
        'R', 566,
        'r', 566,
        'S', 738,
        's', 738,
        'V', 567,
        'v', 567,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (lookahead == '#' ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '$', 266,
        '.', 393,
        '[', 367,
        'G', 630,
        'g', 630,
        'I', 731,
        'i', 731,
        'T', 707,
        't', 707,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\'', 6,
        '-', 405,
        '@', 368,
        'N', 551,
        '[', 367,
        'n', 762,
        'D', 611,
        'd', 611,
        'G', 702,
        'g', 702,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
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
      if (lookahead == '\'') ADVANCE(404);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(427);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '\'', 7,
        '(', 386,
        '.', 393,
        '@', 368,
        'N', 553,
        '[', 367,
        'G', 702,
        'g', 702,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(393);
      if (lookahead == '[') ADVANCE(367);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(702);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(443);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(437);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(438);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(435);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(433);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(434);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(436);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(439);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(440);
      END_STATE();
    case 19:
      if (lookahead == 'D') ADVANCE(21);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(332);
      END_STATE();
    case 20:
      if (lookahead == 'O') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(296);
      END_STATE();
    case 21:
      if (lookahead == 'O') ADVANCE(787);
      END_STATE();
    case 22:
      if (lookahead == ']') ADVANCE(786);
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
      if (lookahead == '_') ADVANCE(288);
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
          lookahead == 'f') ADVANCE(311);
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
          lookahead == 'a') ADVANCE(333);
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
          lookahead == 'a') ADVANCE(290);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(291);
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
          lookahead == 'c') ADVANCE(531);
      END_STATE();
    case 59:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(411);
      END_STATE();
    case 60:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(475);
      END_STATE();
    case 61:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(530);
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
          lookahead == 'c') ADVANCE(316);
      END_STATE();
    case 67:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 68:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(321);
      END_STATE();
    case 69:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(322);
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
          lookahead == 'd') ADVANCE(533);
      END_STATE();
    case 76:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(486);
      END_STATE();
    case 77:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(534);
      END_STATE();
    case 78:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(419);
      END_STATE();
    case 79:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(444);
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
          lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(326);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(527);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(297);
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
          lookahead == 'e') ADVANCE(418);
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
          lookahead == 'e') ADVANCE(518);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(459);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(541);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(481);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(529);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 106:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 107:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(448);
      END_STATE();
    case 108:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(309);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(390);
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
          lookahead == 'e') ADVANCE(306);
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
          lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(289);
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
          lookahead == 'e') ADVANCE(305);
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
          lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 140:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(452);
      END_STATE();
    case 141:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(33);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(302);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(58);
      END_STATE();
    case 142:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(177);
      END_STATE();
    case 143:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(498);
      END_STATE();
    case 144:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(484);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(328);
      END_STATE();
    case 145:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(159);
      END_STATE();
    case 146:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(457);
      END_STATE();
    case 147:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(496);
      END_STATE();
    case 148:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(535);
      END_STATE();
    case 149:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(536);
      END_STATE();
    case 150:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(492);
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
          lookahead == 'k') ADVANCE(520);
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
          lookahead == 'h') ADVANCE(414);
      END_STATE();
    case 158:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(366);
      END_STATE();
    case 159:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(313);
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
          lookahead == 'i') ADVANCE(286);
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
          lookahead == 'i') ADVANCE(327);
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
          lookahead == 'i') ADVANCE(330);
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
          lookahead == 'i') ADVANCE(329);
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
          lookahead == 'i') ADVANCE(299);
      END_STATE();
    case 180:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(261);
      END_STATE();
    case 181:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(304);
      END_STATE();
    case 182:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(339);
      END_STATE();
    case 183:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(522);
      END_STATE();
    case 184:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(479);
      END_STATE();
    case 185:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(298);
      END_STATE();
    case 186:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(300);
      END_STATE();
    case 187:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(514);
      END_STATE();
    case 188:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(402);
      END_STATE();
    case 189:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(454);
      END_STATE();
    case 190:
      ADVANCE_MAP(
        'L', 187,
        'l', 187,
        'N', 75,
        'n', 75,
        'S', 421,
        's', 421,
        'T', 425,
        't', 425,
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
          lookahead == 'l') ADVANCE(294);
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
          lookahead == 'l') ADVANCE(315);
      END_STATE();
    case 202:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(318);
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
          lookahead == 't') ADVANCE(293);
      END_STATE();
    case 209:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(504);
      END_STATE();
    case 210:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(429);
      END_STATE();
    case 211:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(468);
      END_STATE();
    case 212:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(465);
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
          lookahead == 'n') ADVANCE(502);
      END_STATE();
    case 218:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 219:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(423);
      END_STATE();
    case 220:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(471);
      END_STATE();
    case 221:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(532);
      END_STATE();
    case 222:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(526);
      END_STATE();
    case 223:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(460);
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
          lookahead == 'n') ADVANCE(343);
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
          lookahead == 'n') ADVANCE(312);
      END_STATE();
    case 236:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(317);
      END_STATE();
    case 237:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(320);
      END_STATE();
    case 238:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 239:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(331);
      END_STATE();
    case 240:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(324);
      END_STATE();
    case 241:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(325);
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
          lookahead == 'n') ADVANCE(335);
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
          lookahead == 'o') ADVANCE(296);
      END_STATE();
    case 250:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(390);
      END_STATE();
    case 251:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(342);
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
          lookahead == 'o') ADVANCE(346);
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
          lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 261:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 262:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 263:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 264:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 265:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(472);
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
          lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 271:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(510);
      END_STATE();
    case 272:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(469);
      END_STATE();
    case 273:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(424);
      END_STATE();
    case 274:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(365);
      END_STATE();
    case 275:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(528);
      END_STATE();
    case 276:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(524);
      END_STATE();
    case 277:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(450);
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
          lookahead == 'r') ADVANCE(340);
      END_STATE();
    case 283:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 284:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 285:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(85);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(310);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(122);
      END_STATE();
    case 286:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(308);
      END_STATE();
    case 287:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 288:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 289:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 290:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 291:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(336);
      END_STATE();
    case 292:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(540);
      END_STATE();
    case 293:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(417);
      END_STATE();
    case 294:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(482);
      END_STATE();
    case 295:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(58);
      END_STATE();
    case 296:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(332);
      END_STATE();
    case 297:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(338);
      END_STATE();
    case 298:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(344);
      END_STATE();
    case 299:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(60);
      END_STATE();
    case 300:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(345);
      END_STATE();
    case 301:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(61);
      END_STATE();
    case 302:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(112);
      END_STATE();
    case 303:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(99);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(173);
      END_STATE();
    case 304:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(323);
      END_STATE();
    case 305:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(337);
      END_STATE();
    case 306:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(70);
      END_STATE();
    case 307:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(74);
      END_STATE();
    case 308:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(341);
      END_STATE();
    case 309:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(38);
      END_STATE();
    case 310:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(397);
      END_STATE();
    case 311:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(463);
      END_STATE();
    case 312:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(494);
      END_STATE();
    case 313:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(461);
      END_STATE();
    case 314:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(396);
      END_STATE();
    case 315:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(416);
      END_STATE();
    case 316:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(431);
      END_STATE();
    case 317:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(537);
      END_STATE();
    case 318:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(400);
      END_STATE();
    case 319:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(456);
      END_STATE();
    case 320:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(28);
      END_STATE();
    case 321:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(483);
      END_STATE();
    case 322:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(516);
      END_STATE();
    case 323:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(477);
      END_STATE();
    case 324:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(446);
      END_STATE();
    case 325:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(473);
      END_STATE();
    case 326:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(362);
      END_STATE();
    case 327:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(157);
      END_STATE();
    case 328:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(24);
      END_STATE();
    case 329:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(160);
      END_STATE();
    case 330:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(167);
      END_STATE();
    case 331:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(253);
      END_STATE();
    case 332:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(287);
      END_STATE();
    case 333:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(102);
      END_STATE();
    case 334:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 335:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(125);
      END_STATE();
    case 336:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(173);
      END_STATE();
    case 337:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(258);
      END_STATE();
    case 338:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(170);
      END_STATE();
    case 339:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(180);
      END_STATE();
    case 340:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(182);
      END_STATE();
    case 341:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(29);
      END_STATE();
    case 342:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(265);
      END_STATE();
    case 343:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(213);
      END_STATE();
    case 344:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 345:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(212);
      END_STATE();
    case 346:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(246);
      END_STATE();
    case 347:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(314);
      END_STATE();
    case 348:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(280);
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
          lookahead == 'v') ADVANCE(506);
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
          lookahead == 'w') ADVANCE(539);
      END_STATE();
    case 360:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(538);
      END_STATE();
    case 361:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(292);
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
          lookahead == 'x') ADVANCE(500);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 369:
      if (eof) ADVANCE(385);
      ADVANCE_MAP(
        '%', 11,
        '&', 12,
        '\'', 7,
        '(', 386,
        ')', 388,
        '*', 13,
        '+', 14,
        ',', 387,
        '-', 15,
        '.', 394,
        '/', 16,
        ';', 392,
        '=', 395,
        'N', 553,
        '[', 367,
        '^', 17,
        '|', 18,
        'A', 724,
        'a', 724,
        'E', 782,
        'e', 782,
        'F', 715,
        'f', 715,
        'G', 702,
        'g', 702,
        'S', 603,
        's', 603,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(369);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 370:
      if (eof) ADVANCE(385);
      ADVANCE_MAP(
        '\'', 6,
        '(', 386,
        ')', 388,
        '+', 428,
        ',', 387,
        '-', 405,
        '.', 393,
        ';', 392,
        '=', 413,
        '@', 368,
        'N', 551,
        '[', 367,
        'n', 762,
        'D', 611,
        'd', 611,
        'E', 782,
        'e', 782,
        'G', 702,
        'g', 702,
        'S', 603,
        's', 603,
        'W', 659,
        'w', 659,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(370);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 371:
      if (eof) ADVANCE(385);
      ADVANCE_MAP(
        '\'', 6,
        '(', 386,
        ')', 388,
        ',', 387,
        '-', 405,
        '.', 393,
        ';', 392,
        '@', 368,
        'N', 551,
        '[', 367,
        'n', 762,
        'D', 611,
        'd', 611,
        'E', 782,
        'e', 782,
        'G', 702,
        'g', 702,
        'S', 603,
        's', 603,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(371);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 372:
      if (eof) ADVANCE(385);
      ADVANCE_MAP(
        '\'', 7,
        '(', 386,
        ',', 387,
        '.', 393,
        ':', 10,
        ';', 392,
        '=', 413,
        'N', 553,
        '[', 367,
        'A', 724,
        'a', 724,
        'E', 782,
        'e', 782,
        'F', 715,
        'f', 715,
        'G', 702,
        'g', 702,
        'S', 603,
        's', 603,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(372);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 373:
      if (eof) ADVANCE(385);
      ADVANCE_MAP(
        '\'', 7,
        ')', 388,
        ',', 387,
        '.', 393,
        ';', 392,
        'N', 553,
        '[', 367,
        'A', 724,
        'a', 724,
        'E', 782,
        'e', 782,
        'F', 715,
        'f', 715,
        'G', 702,
        'g', 702,
        'O', 776,
        'o', 776,
        'S', 603,
        's', 603,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(373);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 374:
      if (eof) ADVANCE(385);
      ADVANCE_MAP(
        '\'', 7,
        ')', 388,
        ',', 387,
        '.', 393,
        ';', 392,
        'N', 553,
        '[', 367,
        'A', 724,
        'a', 724,
        'E', 549,
        'e', 549,
        'F', 715,
        'f', 715,
        'G', 702,
        'g', 702,
        'S', 603,
        's', 603,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(374);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 375:
      if (eof) ADVANCE(385);
      ADVANCE_MAP(
        '(', 386,
        ')', 388,
        '+', 546,
        ',', 387,
        '-', 544,
        '.', 394,
        ';', 392,
        '=', 395,
        'A', 301,
        'a', 301,
        'C', 263,
        'c', 263,
        'D', 117,
        'd', 117,
        'E', 550,
        'e', 550,
        'G', 250,
        'g', 250,
        'N', 353,
        'n', 353,
        'O', 285,
        'o', 285,
        'P', 52,
        'p', 52,
        'R', 45,
        'r', 45,
        'S', 124,
        's', 124,
        'W', 176,
        'w', 176,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(375);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      END_STATE();
    case 376:
      if (eof) ADVANCE(385);
      ADVANCE_MAP(
        '(', 386,
        '+', 546,
        ',', 387,
        '-', 544,
        '.', 393,
        ';', 392,
        '=', 395,
        '[', 367,
        'E', 782,
        'e', 782,
        'G', 702,
        'g', 702,
        'S', 603,
        's', 603,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(376);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 377:
      if (eof) ADVANCE(385);
      ADVANCE_MAP(
        '(', 386,
        ',', 387,
        '.', 393,
        ';', 392,
        '[', 367,
        'E', 782,
        'e', 782,
        'F', 715,
        'f', 715,
        'G', 702,
        'g', 702,
        'S', 603,
        's', 603,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(377);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 378:
      if (eof) ADVANCE(385);
      ADVANCE_MAP(
        ',', 387,
        '.', 393,
        ';', 392,
        '=', 395,
        '[', 367,
        'E', 782,
        'e', 782,
        'G', 702,
        'g', 702,
        'O', 770,
        'o', 770,
        'S', 603,
        's', 603,
        'W', 659,
        'w', 659,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(378);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 379:
      if (eof) ADVANCE(385);
      ADVANCE_MAP(
        ',', 387,
        '.', 393,
        ';', 392,
        '[', 367,
        'E', 782,
        'e', 782,
        'F', 715,
        'f', 715,
        'G', 702,
        'g', 702,
        'O', 776,
        'o', 776,
        'S', 603,
        's', 603,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(379);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 380:
      if (eof) ADVANCE(385);
      ADVANCE_MAP(
        ',', 387,
        '.', 393,
        ';', 392,
        '[', 367,
        'E', 782,
        'e', 782,
        'G', 702,
        'g', 702,
        'S', 603,
        's', 603,
        'W', 659,
        'w', 659,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(380);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 381:
      if (eof) ADVANCE(385);
      ADVANCE_MAP(
        ',', 387,
        '.', 393,
        ';', 392,
        '[', 367,
        'E', 549,
        'e', 549,
        'F', 715,
        'f', 715,
        'G', 702,
        'g', 702,
        'S', 603,
        's', 603,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(381);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 382:
      if (eof) ADVANCE(385);
      ADVANCE_MAP(
        '.', 393,
        ';', 392,
        '[', 367,
        'A', 723,
        'a', 723,
        'E', 782,
        'e', 782,
        'G', 702,
        'g', 702,
        'S', 603,
        's', 603,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(382);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 383:
      if (eof) ADVANCE(385);
      ADVANCE_MAP(
        '.', 393,
        ';', 392,
        '[', 367,
        'A', 751,
        'a', 751,
        'E', 782,
        'e', 782,
        'G', 702,
        'g', 702,
        'S', 603,
        's', 603,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(383);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 384:
      if (eof) ADVANCE(385);
      ADVANCE_MAP(
        'B', 89,
        'b', 89,
        'C', 348,
        'c', 348,
        'G', 250,
        'g', 250,
        'R', 257,
        'r', 257,
        'U', 227,
        'u', 227,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(384);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(408);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_pstmt_vardecl_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_go_statement_token1);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_go_statement_token1);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_func_proc_name_server_database_schema_token1);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_func_proc_name_server_database_schema_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(548);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_OUTPUT);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_OUTPUT);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(347);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_OUTPUT);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(771);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_OUTPUT);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_default);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_default);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_null_);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_null_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '\'') ADVANCE(6);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_constant_token3);
      if (lookahead == '.') ADVANCE(548);
      if (lookahead == 'x') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_constant_token3);
      if (lookahead == '.') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_constant_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_execute);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_execute);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(753);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_execute);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(334);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_execute);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_execute_body_token1);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_WITH);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_WITH);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_RESULT_SETS_token1);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_RESULT_SETS_token2);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_NONE);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_UNDEFINED);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_RECOMPILE);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_AS_token1);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_AS_token1);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_LOGIN);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_USER);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_AT_KEYWORD);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_AT_KEYWORD);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_string_lit);
      if (lookahead == '\'') ADVANCE(7);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_PLUS);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_query_specification_token1);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_query_specification_token1);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_select);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_select);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_asterisk);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_asterisk);
      if (lookahead == '=') ADVANCE(435);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_hierachyid_);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_hierachyid_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_get_descendant_);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_get_descendant_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_get_reparented_value_);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_get_reparented_value_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_getancestor_);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_getancestor_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_is_descendant_of_);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_is_descendant_of_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_getlevel_);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_getlevel_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_getroot_);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_tostring_);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_tostring_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_parse_);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_dollar_partition_);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_right_);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_right_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_left_);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_left_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_binary_checksum_);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_binary_checksum_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_checksum_);
      if (lookahead == '_') ADVANCE(568);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_checksum_);
      if (lookahead == '_') ADVANCE(39);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_over__token1);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_over__token1);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_within_group__token1);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_within_group__token2);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_percentile_cont_);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_percentile_cont_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_percentile_disc_);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_percentile_disc_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_cume_dist_);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_cume_dist_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_percent_rank_);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_percent_rank_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_ignore_nulls__token1);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_ignore_nulls__token2);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_respect_nulls__token1);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_lag_);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_lag_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_lead_);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_lead_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_first_value_);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_first_value_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_last_value_);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_last_value_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_checksum_agg_);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_checksum_agg_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_count_);
      if (lookahead == '_') ADVANCE(55);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_count_);
      if (lookahead == '_') ADVANCE(580);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_count_big_);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_count_big_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_avg_);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_avg_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_max_);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_max_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_min_);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_min_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_sum_);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_sum_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_stdev_);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(508);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_stdev_);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(509);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_stdevp_);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_stdevp_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_var_);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(512);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_var_);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(513);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_varp_);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_varp_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_all_);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_all_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_distinct_);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_distinct_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_ntile_);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_ntile_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_rank_);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_rank_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_dense_rank_);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_dense_rank_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_row_number_);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_row_number_);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_partition_by_clause_token1);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_partition_by_clause_token2);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_collation__token1);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_asc_);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_desc_);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_window_frame_extent_token1);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_window_frame_extent_token2);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_window_frame_following_token1);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_window_frame_following_token2);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_window_frame_preceding_token1);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_window_frame_preceding_token2);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_window_frame_preceding_token3);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_window_frame_preceding_token3);
      if (lookahead == '_') ADVANCE(230);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(540);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_row_or_range_clause_token1);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_row_or_range_clause_token2);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_binary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(542);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(434);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(433);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_real__token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(548);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_real__token2);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(604);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_real__token2);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(111);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(671);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(660);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(671);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(584);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(775);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(687);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(588);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(717);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(720);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(676);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '_') ADVANCE(778);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(640);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(565);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(781);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(685);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(764);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(595);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(739);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(686);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(641);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(780);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(709);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(645);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(672);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(710);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(688);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(689);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_id__token1);
      ADVANCE_MAP(
        'A', 700,
        'a', 700,
        'D', 635,
        'd', 635,
        'L', 621,
        'l', 621,
        'R', 612,
        'r', 612,
      );
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(719);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(718);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(677);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(678);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(695);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(696);
      if (lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(653);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(625);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(410);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(476);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(706);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(655);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(737);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(665);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(647);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(650);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(746);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(631);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(632);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(628);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(666);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(634);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(487);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(445);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(661);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(615);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(626);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(578);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(579);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(779);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(670);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(582);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(412);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(637);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(727);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(637);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(519);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(491);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(489);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(638);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(708);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(449);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(585);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(774);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(716);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(556);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(586);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(722);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(559);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(777);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(602);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(554);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(669);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(711);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(734);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(712);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(691);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(697);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(747);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(391);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(693);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(730);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(593);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(701);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(735);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(453);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(564);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(728);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(564);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(499);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(485);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(752);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(648);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(497);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(493);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(458);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(643);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(415);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(784);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(741);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(618);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(765);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(684);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(633);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(698);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(714);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(642);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(596);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(725);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(619);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(699);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(692);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(755);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(675);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(726);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(521);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(523);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(480);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(732);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(733);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(403);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(515);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(455);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(614);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(667);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(768);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(668);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(639);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(742);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(608);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(623);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(769);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(772);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(505);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(467);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(466);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(430);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(581);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(617);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(503);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(662);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(763);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(663);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(664);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(740);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(600);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(644);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(743);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(745);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(757);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(748);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(759);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(570);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(589);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(591);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(601);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(391);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(636);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(682);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(713);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(694);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(729);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(574);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(511);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(783);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(525);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(470);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(451);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(736);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(704);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(590);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(571);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(587);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(629);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(572);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(658);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(575);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(422);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(426);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(422);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(583);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(744);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(760);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(620);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(758);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(756);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(599);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(766);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(767);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(592);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(594);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(761);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(432);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(598);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(679);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(464);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(495);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(462);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(401);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(560);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(478);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(474);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(517);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(573);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(447);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(398);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(399);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(426);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(555);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(605);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(660);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(671);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(646);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(705);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(703);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(721);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(622);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(657);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(561);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(671);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(683);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(674);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(690);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(680);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(681);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(609);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(610);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(749);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(750);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(613);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(639);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(507);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(569);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(627);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(624);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(576);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(577);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(557);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(501);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(604);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(558);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(654);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_id__token1);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_id__token2);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 376},
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
  [59] = {.lex_state = 376},
  [60] = {.lex_state = 376},
  [61] = {.lex_state = 376},
  [62] = {.lex_state = 376},
  [63] = {.lex_state = 370},
  [64] = {.lex_state = 370},
  [65] = {.lex_state = 369},
  [66] = {.lex_state = 371},
  [67] = {.lex_state = 369},
  [68] = {.lex_state = 370},
  [69] = {.lex_state = 369},
  [70] = {.lex_state = 376},
  [71] = {.lex_state = 370},
  [72] = {.lex_state = 376},
  [73] = {.lex_state = 370},
  [74] = {.lex_state = 370},
  [75] = {.lex_state = 370},
  [76] = {.lex_state = 371},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 370},
  [80] = {.lex_state = 369},
  [81] = {.lex_state = 369},
  [82] = {.lex_state = 376},
  [83] = {.lex_state = 375},
  [84] = {.lex_state = 370},
  [85] = {.lex_state = 370},
  [86] = {.lex_state = 372},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 370},
  [89] = {.lex_state = 370},
  [90] = {.lex_state = 370},
  [91] = {.lex_state = 375},
  [92] = {.lex_state = 370},
  [93] = {.lex_state = 370},
  [94] = {.lex_state = 373},
  [95] = {.lex_state = 373},
  [96] = {.lex_state = 370},
  [97] = {.lex_state = 370},
  [98] = {.lex_state = 370},
  [99] = {.lex_state = 371},
  [100] = {.lex_state = 370},
  [101] = {.lex_state = 370},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 370},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 370},
  [106] = {.lex_state = 372},
  [107] = {.lex_state = 370},
  [108] = {.lex_state = 370},
  [109] = {.lex_state = 370},
  [110] = {.lex_state = 372},
  [111] = {.lex_state = 371},
  [112] = {.lex_state = 371},
  [113] = {.lex_state = 374},
  [114] = {.lex_state = 371},
  [115] = {.lex_state = 371},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 371},
  [118] = {.lex_state = 374},
  [119] = {.lex_state = 375},
  [120] = {.lex_state = 371},
  [121] = {.lex_state = 371},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 371},
  [124] = {.lex_state = 371},
  [125] = {.lex_state = 369},
  [126] = {.lex_state = 369},
  [127] = {.lex_state = 369},
  [128] = {.lex_state = 369},
  [129] = {.lex_state = 369},
  [130] = {.lex_state = 369},
  [131] = {.lex_state = 371},
  [132] = {.lex_state = 371},
  [133] = {.lex_state = 8},
  [134] = {.lex_state = 369},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 371},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 369},
  [139] = {.lex_state = 369},
  [140] = {.lex_state = 369},
  [141] = {.lex_state = 369},
  [142] = {.lex_state = 369},
  [143] = {.lex_state = 369},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 369},
  [146] = {.lex_state = 369},
  [147] = {.lex_state = 369},
  [148] = {.lex_state = 371},
  [149] = {.lex_state = 3},
  [150] = {.lex_state = 369},
  [151] = {.lex_state = 369},
  [152] = {.lex_state = 371},
  [153] = {.lex_state = 371},
  [154] = {.lex_state = 369},
  [155] = {.lex_state = 369},
  [156] = {.lex_state = 369},
  [157] = {.lex_state = 369},
  [158] = {.lex_state = 369},
  [159] = {.lex_state = 369},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 369},
  [162] = {.lex_state = 372},
  [163] = {.lex_state = 369},
  [164] = {.lex_state = 369},
  [165] = {.lex_state = 369},
  [166] = {.lex_state = 369},
  [167] = {.lex_state = 369},
  [168] = {.lex_state = 371},
  [169] = {.lex_state = 369},
  [170] = {.lex_state = 371},
  [171] = {.lex_state = 369},
  [172] = {.lex_state = 378},
  [173] = {.lex_state = 369},
  [174] = {.lex_state = 369},
  [175] = {.lex_state = 379},
  [176] = {.lex_state = 379},
  [177] = {.lex_state = 377},
  [178] = {.lex_state = 380},
  [179] = {.lex_state = 377},
  [180] = {.lex_state = 378},
  [181] = {.lex_state = 377},
  [182] = {.lex_state = 380},
  [183] = {.lex_state = 380},
  [184] = {.lex_state = 380},
  [185] = {.lex_state = 378},
  [186] = {.lex_state = 382},
  [187] = {.lex_state = 382},
  [188] = {.lex_state = 380},
  [189] = {.lex_state = 380},
  [190] = {.lex_state = 380},
  [191] = {.lex_state = 377},
  [192] = {.lex_state = 380},
  [193] = {.lex_state = 381},
  [194] = {.lex_state = 381},
  [195] = {.lex_state = 380},
  [196] = {.lex_state = 377},
  [197] = {.lex_state = 377},
  [198] = {.lex_state = 380},
  [199] = {.lex_state = 377},
  [200] = {.lex_state = 377},
  [201] = {.lex_state = 377},
  [202] = {.lex_state = 377},
  [203] = {.lex_state = 377},
  [204] = {.lex_state = 377},
  [205] = {.lex_state = 376},
  [206] = {.lex_state = 377},
  [207] = {.lex_state = 377},
  [208] = {.lex_state = 377},
  [209] = {.lex_state = 377},
  [210] = {.lex_state = 377},
  [211] = {.lex_state = 377},
  [212] = {.lex_state = 377},
  [213] = {.lex_state = 377},
  [214] = {.lex_state = 377},
  [215] = {.lex_state = 377},
  [216] = {.lex_state = 377},
  [217] = {.lex_state = 377},
  [218] = {.lex_state = 376},
  [219] = {.lex_state = 376},
  [220] = {.lex_state = 380},
  [221] = {.lex_state = 380},
  [222] = {.lex_state = 380},
  [223] = {.lex_state = 377},
  [224] = {.lex_state = 377},
  [225] = {.lex_state = 380},
  [226] = {.lex_state = 380},
  [227] = {.lex_state = 380},
  [228] = {.lex_state = 377},
  [229] = {.lex_state = 380},
  [230] = {.lex_state = 376},
  [231] = {.lex_state = 377},
  [232] = {.lex_state = 377},
  [233] = {.lex_state = 377},
  [234] = {.lex_state = 377},
  [235] = {.lex_state = 376},
  [236] = {.lex_state = 377},
  [237] = {.lex_state = 376},
  [238] = {.lex_state = 375},
  [239] = {.lex_state = 377},
  [240] = {.lex_state = 375},
  [241] = {.lex_state = 377},
  [242] = {.lex_state = 377},
  [243] = {.lex_state = 377},
  [244] = {.lex_state = 377},
  [245] = {.lex_state = 377},
  [246] = {.lex_state = 375},
  [247] = {.lex_state = 377},
  [248] = {.lex_state = 380},
  [249] = {.lex_state = 377},
  [250] = {.lex_state = 377},
  [251] = {.lex_state = 377},
  [252] = {.lex_state = 377},
  [253] = {.lex_state = 377},
  [254] = {.lex_state = 376},
  [255] = {.lex_state = 376},
  [256] = {.lex_state = 376},
  [257] = {.lex_state = 380},
  [258] = {.lex_state = 377},
  [259] = {.lex_state = 377},
  [260] = {.lex_state = 380},
  [261] = {.lex_state = 377},
  [262] = {.lex_state = 377},
  [263] = {.lex_state = 377},
  [264] = {.lex_state = 380},
  [265] = {.lex_state = 380},
  [266] = {.lex_state = 375},
  [267] = {.lex_state = 383},
  [268] = {.lex_state = 376},
  [269] = {.lex_state = 375},
  [270] = {.lex_state = 377},
  [271] = {.lex_state = 376},
  [272] = {.lex_state = 376},
  [273] = {.lex_state = 376},
  [274] = {.lex_state = 376},
  [275] = {.lex_state = 376},
  [276] = {.lex_state = 376},
  [277] = {.lex_state = 376},
  [278] = {.lex_state = 9},
  [279] = {.lex_state = 376},
  [280] = {.lex_state = 383},
  [281] = {.lex_state = 376},
  [282] = {.lex_state = 375},
  [283] = {.lex_state = 375},
  [284] = {.lex_state = 375},
  [285] = {.lex_state = 375},
  [286] = {.lex_state = 376},
  [287] = {.lex_state = 375},
  [288] = {.lex_state = 375},
  [289] = {.lex_state = 375},
  [290] = {.lex_state = 375},
  [291] = {.lex_state = 375},
  [292] = {.lex_state = 375},
  [293] = {.lex_state = 376},
  [294] = {.lex_state = 375},
  [295] = {.lex_state = 375},
  [296] = {.lex_state = 375},
  [297] = {.lex_state = 375},
  [298] = {.lex_state = 375},
  [299] = {.lex_state = 375},
  [300] = {.lex_state = 375},
  [301] = {.lex_state = 375},
  [302] = {.lex_state = 375},
  [303] = {.lex_state = 375},
  [304] = {.lex_state = 376},
  [305] = {.lex_state = 376},
  [306] = {.lex_state = 376},
  [307] = {.lex_state = 375},
  [308] = {.lex_state = 376},
  [309] = {.lex_state = 376},
  [310] = {.lex_state = 376},
  [311] = {.lex_state = 376},
  [312] = {.lex_state = 375},
  [313] = {.lex_state = 375},
  [314] = {.lex_state = 375},
  [315] = {.lex_state = 375},
  [316] = {.lex_state = 375},
  [317] = {.lex_state = 376},
  [318] = {.lex_state = 375},
  [319] = {.lex_state = 376},
  [320] = {.lex_state = 376},
  [321] = {.lex_state = 375},
  [322] = {.lex_state = 376},
  [323] = {.lex_state = 375},
  [324] = {.lex_state = 375},
  [325] = {.lex_state = 375},
  [326] = {.lex_state = 375},
  [327] = {.lex_state = 376},
  [328] = {.lex_state = 375},
  [329] = {.lex_state = 375},
  [330] = {.lex_state = 376},
  [331] = {.lex_state = 376},
  [332] = {.lex_state = 375},
  [333] = {.lex_state = 376},
  [334] = {.lex_state = 376},
  [335] = {.lex_state = 376},
  [336] = {.lex_state = 375},
  [337] = {.lex_state = 376},
  [338] = {.lex_state = 375},
  [339] = {.lex_state = 376},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 376},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 376},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 376},
  [350] = {.lex_state = 376},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 376},
  [353] = {.lex_state = 8},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 375},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 9},
  [358] = {.lex_state = 9},
  [359] = {.lex_state = 375},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 375},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 384},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 375},
  [366] = {.lex_state = 9},
  [367] = {.lex_state = 375},
  [368] = {.lex_state = 375},
  [369] = {.lex_state = 384},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 9},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 9},
  [375] = {.lex_state = 9},
  [376] = {.lex_state = 9},
  [377] = {.lex_state = 9},
  [378] = {.lex_state = 375},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 9},
  [381] = {.lex_state = 9},
  [382] = {.lex_state = 375},
  [383] = {.lex_state = 384},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 9},
  [386] = {.lex_state = 9},
  [387] = {.lex_state = 9},
  [388] = {.lex_state = 375},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 375},
  [391] = {.lex_state = 375},
  [392] = {.lex_state = 9},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 9},
  [395] = {.lex_state = 9},
  [396] = {.lex_state = 9},
  [397] = {.lex_state = 9},
  [398] = {.lex_state = 9},
  [399] = {.lex_state = 9},
  [400] = {.lex_state = 9},
  [401] = {.lex_state = 9},
  [402] = {.lex_state = 9},
  [403] = {.lex_state = 9},
  [404] = {.lex_state = 375},
  [405] = {.lex_state = 9},
  [406] = {.lex_state = 375},
  [407] = {.lex_state = 9},
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
  [420] = {.lex_state = 375},
  [421] = {.lex_state = 9},
  [422] = {.lex_state = 9},
  [423] = {.lex_state = 9},
  [424] = {.lex_state = 9},
  [425] = {.lex_state = 9},
  [426] = {.lex_state = 9},
  [427] = {.lex_state = 9},
  [428] = {.lex_state = 9},
  [429] = {.lex_state = 375},
  [430] = {.lex_state = 9},
  [431] = {.lex_state = 9},
  [432] = {.lex_state = 9},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 375},
  [437] = {.lex_state = 375},
  [438] = {.lex_state = 375},
  [439] = {.lex_state = 375},
  [440] = {.lex_state = 375},
  [441] = {.lex_state = 369},
  [442] = {.lex_state = 1},
  [443] = {.lex_state = 375},
  [444] = {.lex_state = 375},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 375},
  [447] = {.lex_state = 1},
  [448] = {.lex_state = 375},
  [449] = {.lex_state = 375},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 1},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 384},
  [456] = {.lex_state = 375},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 369},
  [460] = {.lex_state = 369},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 1},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 375},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 376},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 376},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 376},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 375},
  [496] = {.lex_state = 375},
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
  [518] = {.lex_state = 376},
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
  [544] = {.lex_state = 375},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 376},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 376},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 376},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 376},
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
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 375},
  [598] = {.lex_state = 375},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 376},
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
  [625] = {.lex_state = 376},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 1},
  [636] = {.lex_state = 376},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 384},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 376},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 1},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 1},
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
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 376},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_pstmt_vardecl_token1] = ACTIONS(1),
    [aux_sym_go_statement_token1] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_func_proc_name_server_database_schema_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_OUTPUT] = ACTIONS(1),
    [sym_default] = ACTIONS(1),
    [sym_null_] = ACTIONS(1),
    [aux_sym_constant_token1] = ACTIONS(1),
    [aux_sym_constant_token2] = ACTIONS(1),
    [aux_sym_constant_token3] = ACTIONS(1),
    [sym_execute] = ACTIONS(1),
    [aux_sym_execute_body_token1] = ACTIONS(1),
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
    [sym_tsql_file] = STATE(728),
    [sym_batch] = STATE(59),
    [sym_prepared_stmt_vardecls] = STATE(61),
    [sym_go_statement] = STATE(268),
    [sym_execute_body_batch] = STATE(104),
    [sym_func_proc_name_server_database_schema] = STATE(66),
    [sym_func_proc_name_database_schema] = STATE(152),
    [sym_func_proc_name_schema] = STATE(123),
    [sym_sql_clauses] = STATE(72),
    [sym_another_statement] = STATE(339),
    [sym_execute_statement] = STATE(337),
    [sym_dml_clause] = STATE(339),
    [sym_select_statement_standalone] = STATE(293),
    [sym_select_statement] = STATE(305),
    [sym_query_expression] = STATE(308),
    [sym_query_specification] = STATE(334),
    [sym_id_] = STATE(114),
    [sym_keyword] = STATE(76),
    [aux_sym_tsql_file_repeat1] = STATE(59),
    [aux_sym_batch_repeat1] = STATE(72),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [aux_sym_go_statement_token1] = ACTIONS(7),
    [aux_sym_func_proc_name_server_database_schema_token1] = ACTIONS(9),
    [sym_execute] = ACTIONS(11),
    [sym_select] = ACTIONS(13),
    [aux_sym_id__token1] = ACTIONS(15),
    [aux_sym_id__token2] = ACTIONS(17),
  },
  [2] = {
    [sym_func_proc_name_database_schema] = STATE(704),
    [sym_func_proc_name_schema] = STATE(123),
    [sym_LOCAL_ID_] = STATE(65),
    [sym_select_list] = STATE(270),
    [sym_select_list_elem] = STATE(177),
    [sym_udt_elem] = STATE(208),
    [sym_expression_elem] = STATE(208),
    [sym_column_alias] = STATE(657),
    [sym_full_column_name] = STATE(165),
    [sym_expression] = STATE(81),
    [sym_function_call] = STATE(165),
    [sym_hierarchyid_static_method] = STATE(163),
    [sym_partition_function] = STATE(163),
    [sym_scalar_function_name] = STATE(656),
    [sym_analytic_windowed_function] = STATE(163),
    [sym_aggregate_windowed_function] = STATE(163),
    [sym_ranking_windowed_function] = STATE(163),
    [sym_primitive_expression] = STATE(165),
    [sym_primitive_constant] = STATE(130),
    [sym_money_] = STATE(171),
    [sym_real_] = STATE(171),
    [sym_float_] = STATE(171),
    [sym_decimal_] = STATE(171),
    [sym_id_] = STATE(86),
    [sym_keyword] = STATE(110),
    [aux_sym_pstmt_vardecl_token1] = ACTIONS(19),
    [aux_sym_go_statement_token1] = ACTIONS(21),
    [aux_sym_func_proc_name_server_database_schema_token1] = ACTIONS(23),
    [sym_default] = ACTIONS(25),
    [sym_null_] = ACTIONS(25),
    [aux_sym_constant_token3] = ACTIONS(27),
    [sym_string_lit] = ACTIONS(29),
    [sym_asterisk] = ACTIONS(31),
    [sym_hierachyid_] = ACTIONS(33),
    [sym_dollar_partition_] = ACTIONS(35),
    [sym_right_] = ACTIONS(37),
    [sym_left_] = ACTIONS(37),
    [sym_binary_checksum_] = ACTIONS(39),
    [sym_checksum_] = ACTIONS(39),
    [sym_percentile_cont_] = ACTIONS(41),
    [sym_percentile_disc_] = ACTIONS(41),
    [sym_cume_dist_] = ACTIONS(43),
    [sym_percent_rank_] = ACTIONS(43),
    [sym_lag_] = ACTIONS(45),
    [sym_lead_] = ACTIONS(45),
    [sym_first_value_] = ACTIONS(47),
    [sym_last_value_] = ACTIONS(47),
    [sym_checksum_agg_] = ACTIONS(49),
    [sym_count_] = ACTIONS(51),
    [sym_count_big_] = ACTIONS(51),
    [sym_avg_] = ACTIONS(53),
    [sym_max_] = ACTIONS(53),
    [sym_min_] = ACTIONS(53),
    [sym_sum_] = ACTIONS(53),
    [sym_stdev_] = ACTIONS(53),
    [sym_stdevp_] = ACTIONS(53),
    [sym_var_] = ACTIONS(53),
    [sym_varp_] = ACTIONS(53),
    [sym_ntile_] = ACTIONS(55),
    [sym_rank_] = ACTIONS(57),
    [sym_dense_rank_] = ACTIONS(57),
    [sym_row_number_] = ACTIONS(57),
    [sym_binary] = ACTIONS(59),
    [anon_sym_DOLLAR] = ACTIONS(61),
    [aux_sym_real__token1] = ACTIONS(63),
    [aux_sym_id__token1] = ACTIONS(65),
    [aux_sym_id__token2] = ACTIONS(67),
  },
  [3] = {
    [sym_func_proc_name_database_schema] = STATE(704),
    [sym_func_proc_name_schema] = STATE(123),
    [sym_LOCAL_ID_] = STATE(65),
    [sym_select_list_elem] = STATE(239),
    [sym_udt_elem] = STATE(208),
    [sym_expression_elem] = STATE(208),
    [sym_column_alias] = STATE(657),
    [sym_full_column_name] = STATE(165),
    [sym_expression] = STATE(81),
    [sym_function_call] = STATE(165),
    [sym_hierarchyid_static_method] = STATE(163),
    [sym_partition_function] = STATE(163),
    [sym_scalar_function_name] = STATE(656),
    [sym_analytic_windowed_function] = STATE(163),
    [sym_aggregate_windowed_function] = STATE(163),
    [sym_ranking_windowed_function] = STATE(163),
    [sym_primitive_expression] = STATE(165),
    [sym_primitive_constant] = STATE(130),
    [sym_money_] = STATE(171),
    [sym_real_] = STATE(171),
    [sym_float_] = STATE(171),
    [sym_decimal_] = STATE(171),
    [sym_id_] = STATE(86),
    [sym_keyword] = STATE(110),
    [aux_sym_pstmt_vardecl_token1] = ACTIONS(19),
    [aux_sym_go_statement_token1] = ACTIONS(21),
    [aux_sym_func_proc_name_server_database_schema_token1] = ACTIONS(23),
    [sym_default] = ACTIONS(25),
    [sym_null_] = ACTIONS(25),
    [aux_sym_constant_token3] = ACTIONS(27),
    [sym_string_lit] = ACTIONS(29),
    [sym_asterisk] = ACTIONS(31),
    [sym_hierachyid_] = ACTIONS(33),
    [sym_dollar_partition_] = ACTIONS(35),
    [sym_right_] = ACTIONS(37),
    [sym_left_] = ACTIONS(37),
    [sym_binary_checksum_] = ACTIONS(39),
    [sym_checksum_] = ACTIONS(39),
    [sym_percentile_cont_] = ACTIONS(41),
    [sym_percentile_disc_] = ACTIONS(41),
    [sym_cume_dist_] = ACTIONS(43),
    [sym_percent_rank_] = ACTIONS(43),
    [sym_lag_] = ACTIONS(45),
    [sym_lead_] = ACTIONS(45),
    [sym_first_value_] = ACTIONS(47),
    [sym_last_value_] = ACTIONS(47),
    [sym_checksum_agg_] = ACTIONS(49),
    [sym_count_] = ACTIONS(51),
    [sym_count_big_] = ACTIONS(51),
    [sym_avg_] = ACTIONS(53),
    [sym_max_] = ACTIONS(53),
    [sym_min_] = ACTIONS(53),
    [sym_sum_] = ACTIONS(53),
    [sym_stdev_] = ACTIONS(53),
    [sym_stdevp_] = ACTIONS(53),
    [sym_var_] = ACTIONS(53),
    [sym_varp_] = ACTIONS(53),
    [sym_ntile_] = ACTIONS(55),
    [sym_rank_] = ACTIONS(57),
    [sym_dense_rank_] = ACTIONS(57),
    [sym_row_number_] = ACTIONS(57),
    [sym_binary] = ACTIONS(59),
    [anon_sym_DOLLAR] = ACTIONS(61),
    [aux_sym_real__token1] = ACTIONS(63),
    [aux_sym_id__token1] = ACTIONS(65),
    [aux_sym_id__token2] = ACTIONS(67),
  },
  [4] = {
    [sym_func_proc_name_database_schema] = STATE(704),
    [sym_func_proc_name_schema] = STATE(123),
    [sym_LOCAL_ID_] = STATE(130),
    [sym_full_column_name] = STATE(165),
    [sym_expression] = STATE(586),
    [sym_function_call] = STATE(165),
    [sym_hierarchyid_static_method] = STATE(163),
    [sym_partition_function] = STATE(163),
    [sym_scalar_function_name] = STATE(656),
    [sym_analytic_windowed_function] = STATE(163),
    [sym_aggregate_windowed_function] = STATE(163),
    [sym_all_distinct_expression] = STATE(578),
    [sym_ranking_windowed_function] = STATE(163),
    [sym_primitive_expression] = STATE(165),
    [sym_primitive_constant] = STATE(130),
    [sym_money_] = STATE(171),
    [sym_real_] = STATE(171),
    [sym_float_] = STATE(171),
    [sym_decimal_] = STATE(171),
    [sym_id_] = STATE(462),
    [sym_keyword] = STATE(76),
    [aux_sym_pstmt_vardecl_token1] = ACTIONS(69),
    [aux_sym_go_statement_token1] = ACTIONS(71),
    [aux_sym_func_proc_name_server_database_schema_token1] = ACTIONS(23),
    [sym_default] = ACTIONS(25),
    [sym_null_] = ACTIONS(25),
    [aux_sym_constant_token3] = ACTIONS(27),
    [sym_string_lit] = ACTIONS(59),
    [sym_asterisk] = ACTIONS(73),
    [sym_hierachyid_] = ACTIONS(33),
    [sym_dollar_partition_] = ACTIONS(35),
    [sym_right_] = ACTIONS(37),
    [sym_left_] = ACTIONS(37),
    [sym_binary_checksum_] = ACTIONS(39),
    [sym_checksum_] = ACTIONS(39),
    [sym_percentile_cont_] = ACTIONS(41),
    [sym_percentile_disc_] = ACTIONS(41),
    [sym_cume_dist_] = ACTIONS(43),
    [sym_percent_rank_] = ACTIONS(43),
    [sym_lag_] = ACTIONS(45),
    [sym_lead_] = ACTIONS(45),
    [sym_first_value_] = ACTIONS(47),
    [sym_last_value_] = ACTIONS(47),
    [sym_checksum_agg_] = ACTIONS(49),
    [sym_count_] = ACTIONS(51),
    [sym_count_big_] = ACTIONS(51),
    [sym_avg_] = ACTIONS(53),
    [sym_max_] = ACTIONS(53),
    [sym_min_] = ACTIONS(53),
    [sym_sum_] = ACTIONS(53),
    [sym_stdev_] = ACTIONS(53),
    [sym_stdevp_] = ACTIONS(53),
    [sym_var_] = ACTIONS(53),
    [sym_varp_] = ACTIONS(53),
    [sym_all_] = ACTIONS(75),
    [sym_distinct_] = ACTIONS(75),
    [sym_ntile_] = ACTIONS(55),
    [sym_rank_] = ACTIONS(57),
    [sym_dense_rank_] = ACTIONS(57),
    [sym_row_number_] = ACTIONS(57),
    [sym_binary] = ACTIONS(59),
    [anon_sym_DOLLAR] = ACTIONS(61),
    [aux_sym_real__token1] = ACTIONS(63),
    [aux_sym_id__token1] = ACTIONS(15),
    [aux_sym_id__token2] = ACTIONS(17),
  },
  [5] = {
    [sym_func_proc_name_database_schema] = STATE(704),
    [sym_func_proc_name_schema] = STATE(123),
    [sym_LOCAL_ID_] = STATE(130),
    [sym_full_column_name] = STATE(165),
    [sym_expression] = STATE(586),
    [sym_function_call] = STATE(165),
    [sym_hierarchyid_static_method] = STATE(163),
    [sym_partition_function] = STATE(163),
    [sym_scalar_function_name] = STATE(656),
    [sym_analytic_windowed_function] = STATE(163),
    [sym_aggregate_windowed_function] = STATE(163),
    [sym_all_distinct_expression] = STATE(581),
    [sym_ranking_windowed_function] = STATE(163),
    [sym_primitive_expression] = STATE(165),
    [sym_primitive_constant] = STATE(130),
    [sym_money_] = STATE(171),
    [sym_real_] = STATE(171),
    [sym_float_] = STATE(171),
    [sym_decimal_] = STATE(171),
    [sym_id_] = STATE(462),
    [sym_keyword] = STATE(76),
    [aux_sym_pstmt_vardecl_token1] = ACTIONS(69),
    [aux_sym_go_statement_token1] = ACTIONS(71),
    [aux_sym_func_proc_name_server_database_schema_token1] = ACTIONS(23),
    [sym_default] = ACTIONS(25),
    [sym_null_] = ACTIONS(25),
    [aux_sym_constant_token3] = ACTIONS(27),
    [sym_string_lit] = ACTIONS(59),
    [sym_asterisk] = ACTIONS(77),
    [sym_hierachyid_] = ACTIONS(33),
    [sym_dollar_partition_] = ACTIONS(35),
    [sym_right_] = ACTIONS(37),
    [sym_left_] = ACTIONS(37),
    [sym_binary_checksum_] = ACTIONS(39),
    [sym_checksum_] = ACTIONS(39),
    [sym_percentile_cont_] = ACTIONS(41),
    [sym_percentile_disc_] = ACTIONS(41),
    [sym_cume_dist_] = ACTIONS(43),
    [sym_percent_rank_] = ACTIONS(43),
    [sym_lag_] = ACTIONS(45),
    [sym_lead_] = ACTIONS(45),
    [sym_first_value_] = ACTIONS(47),
    [sym_last_value_] = ACTIONS(47),
    [sym_checksum_agg_] = ACTIONS(49),
    [sym_count_] = ACTIONS(51),
    [sym_count_big_] = ACTIONS(51),
    [sym_avg_] = ACTIONS(53),
    [sym_max_] = ACTIONS(53),
    [sym_min_] = ACTIONS(53),
    [sym_sum_] = ACTIONS(53),
    [sym_stdev_] = ACTIONS(53),
    [sym_stdevp_] = ACTIONS(53),
    [sym_var_] = ACTIONS(53),
    [sym_varp_] = ACTIONS(53),
    [sym_all_] = ACTIONS(75),
    [sym_distinct_] = ACTIONS(75),
    [sym_ntile_] = ACTIONS(55),
    [sym_rank_] = ACTIONS(57),
    [sym_dense_rank_] = ACTIONS(57),
    [sym_row_number_] = ACTIONS(57),
    [sym_binary] = ACTIONS(59),
    [anon_sym_DOLLAR] = ACTIONS(61),
    [aux_sym_real__token1] = ACTIONS(63),
    [aux_sym_id__token1] = ACTIONS(15),
    [aux_sym_id__token2] = ACTIONS(17),
  },
  [6] = {
    [sym_func_proc_name_database_schema] = STATE(704),
    [sym_func_proc_name_schema] = STATE(123),
    [sym_LOCAL_ID_] = STATE(130),
    [sym_full_column_name] = STATE(165),
    [sym_expression] = STATE(586),
    [sym_function_call] = STATE(165),
    [sym_hierarchyid_static_method] = STATE(163),
    [sym_partition_function] = STATE(163),
    [sym_scalar_function_name] = STATE(656),
    [sym_analytic_windowed_function] = STATE(163),
    [sym_aggregate_windowed_function] = STATE(163),
    [sym_all_distinct_expression] = STATE(604),
    [sym_ranking_windowed_function] = STATE(163),
    [sym_primitive_expression] = STATE(165),
    [sym_primitive_constant] = STATE(130),
    [sym_money_] = STATE(171),
    [sym_real_] = STATE(171),
    [sym_float_] = STATE(171),
    [sym_decimal_] = STATE(171),
    [sym_id_] = STATE(462),
    [sym_keyword] = STATE(76),
    [aux_sym_pstmt_vardecl_token1] = ACTIONS(69),
    [aux_sym_go_statement_token1] = ACTIONS(71),
    [aux_sym_func_proc_name_server_database_schema_token1] = ACTIONS(23),
    [sym_default] = ACTIONS(25),
    [sym_null_] = ACTIONS(25),
    [aux_sym_constant_token3] = ACTIONS(27),
    [sym_string_lit] = ACTIONS(59),
    [sym_asterisk] = ACTIONS(79),
    [sym_hierachyid_] = ACTIONS(33),
    [sym_dollar_partition_] = ACTIONS(35),
    [sym_right_] = ACTIONS(37),
    [sym_left_] = ACTIONS(37),
    [sym_binary_checksum_] = ACTIONS(39),
    [sym_checksum_] = ACTIONS(39),
    [sym_percentile_cont_] = ACTIONS(41),
    [sym_percentile_disc_] = ACTIONS(41),
    [sym_cume_dist_] = ACTIONS(43),
    [sym_percent_rank_] = ACTIONS(43),
    [sym_lag_] = ACTIONS(45),
    [sym_lead_] = ACTIONS(45),
    [sym_first_value_] = ACTIONS(47),
    [sym_last_value_] = ACTIONS(47),
    [sym_checksum_agg_] = ACTIONS(49),
    [sym_count_] = ACTIONS(51),
    [sym_count_big_] = ACTIONS(51),
    [sym_avg_] = ACTIONS(53),
    [sym_max_] = ACTIONS(53),
    [sym_min_] = ACTIONS(53),
    [sym_sum_] = ACTIONS(53),
    [sym_stdev_] = ACTIONS(53),
    [sym_stdevp_] = ACTIONS(53),
    [sym_var_] = ACTIONS(53),
    [sym_varp_] = ACTIONS(53),
    [sym_all_] = ACTIONS(75),
    [sym_distinct_] = ACTIONS(75),
    [sym_ntile_] = ACTIONS(55),
    [sym_rank_] = ACTIONS(57),
    [sym_dense_rank_] = ACTIONS(57),
    [sym_row_number_] = ACTIONS(57),
    [sym_binary] = ACTIONS(59),
    [anon_sym_DOLLAR] = ACTIONS(61),
    [aux_sym_real__token1] = ACTIONS(63),
    [aux_sym_id__token1] = ACTIONS(15),
    [aux_sym_id__token2] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 35,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(576), 1,
      sym_all_distinct_expression,
    STATE(586), 1,
      sym_expression,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(75), 2,
      sym_all_,
      sym_distinct_,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [135] = 35,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(586), 1,
      sym_expression,
    STATE(605), 1,
      sym_all_distinct_expression,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(75), 2,
      sym_all_,
      sym_distinct_,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [270] = 35,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(586), 1,
      sym_expression,
    STATE(603), 1,
      sym_all_distinct_expression,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(75), 2,
      sym_all_,
      sym_distinct_,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [405] = 35,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(585), 1,
      sym_all_distinct_expression,
    STATE(586), 1,
      sym_expression,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(75), 2,
      sym_all_,
      sym_distinct_,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [540] = 35,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(577), 1,
      sym_all_distinct_expression,
    STATE(586), 1,
      sym_expression,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(75), 2,
      sym_all_,
      sym_distinct_,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [675] = 35,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(579), 1,
      sym_all_distinct_expression,
    STATE(586), 1,
      sym_expression,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(75), 2,
      sym_all_,
      sym_distinct_,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [810] = 35,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    ACTIONS(81), 1,
      sym_asterisk,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(479), 1,
      sym_expression,
    STATE(546), 1,
      sym_expression_list_,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [944] = 35,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    ACTIONS(83), 1,
      sym_asterisk,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(479), 1,
      sym_expression,
    STATE(602), 1,
      sym_expression_list_,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1078] = 35,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    ACTIONS(85), 1,
      sym_asterisk,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(479), 1,
      sym_expression,
    STATE(575), 1,
      sym_expression_list_,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1212] = 35,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(479), 1,
      sym_expression,
    STATE(546), 1,
      sym_expression_list_,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1346] = 35,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(479), 1,
      sym_expression,
    STATE(575), 1,
      sym_expression_list_,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1480] = 35,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(479), 1,
      sym_expression,
    STATE(602), 1,
      sym_expression_list_,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1614] = 34,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(93), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(95), 1,
      aux_sym_go_statement_token1,
    ACTIONS(99), 1,
      aux_sym_constant_token3,
    ACTIONS(103), 1,
      sym_hierachyid_,
    ACTIONS(105), 1,
      sym_dollar_partition_,
    ACTIONS(117), 1,
      sym_checksum_agg_,
    ACTIONS(123), 1,
      sym_ntile_,
    ACTIONS(127), 1,
      anon_sym_DOLLAR,
    ACTIONS(129), 1,
      aux_sym_real__token1,
    ACTIONS(131), 1,
      aux_sym_id__token1,
    ACTIONS(133), 1,
      aux_sym_id__token2,
    STATE(83), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(240), 1,
      sym_id_,
    STATE(315), 1,
      sym_expression,
    STATE(446), 1,
      sym_order_by_expression,
    STATE(643), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(97), 2,
      sym_default,
      sym_null_,
    ACTIONS(101), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(107), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(109), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(111), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(113), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(115), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(119), 2,
      sym_count_,
      sym_count_big_,
    STATE(283), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(125), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(307), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(288), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(326), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(121), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1745] = 34,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(93), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(95), 1,
      aux_sym_go_statement_token1,
    ACTIONS(99), 1,
      aux_sym_constant_token3,
    ACTIONS(103), 1,
      sym_hierachyid_,
    ACTIONS(105), 1,
      sym_dollar_partition_,
    ACTIONS(117), 1,
      sym_checksum_agg_,
    ACTIONS(123), 1,
      sym_ntile_,
    ACTIONS(127), 1,
      anon_sym_DOLLAR,
    ACTIONS(129), 1,
      aux_sym_real__token1,
    ACTIONS(131), 1,
      aux_sym_id__token1,
    ACTIONS(133), 1,
      aux_sym_id__token2,
    STATE(83), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(240), 1,
      sym_id_,
    STATE(315), 1,
      sym_expression,
    STATE(406), 1,
      sym_order_by_expression,
    STATE(643), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(97), 2,
      sym_default,
      sym_null_,
    ACTIONS(101), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(107), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(109), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(111), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(113), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(115), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(119), 2,
      sym_count_,
      sym_count_big_,
    STATE(283), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(125), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(307), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(288), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(326), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(121), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [1876] = 34,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(93), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(95), 1,
      aux_sym_go_statement_token1,
    ACTIONS(99), 1,
      aux_sym_constant_token3,
    ACTIONS(103), 1,
      sym_hierachyid_,
    ACTIONS(105), 1,
      sym_dollar_partition_,
    ACTIONS(117), 1,
      sym_checksum_agg_,
    ACTIONS(123), 1,
      sym_ntile_,
    ACTIONS(127), 1,
      anon_sym_DOLLAR,
    ACTIONS(129), 1,
      aux_sym_real__token1,
    ACTIONS(131), 1,
      aux_sym_id__token1,
    ACTIONS(133), 1,
      aux_sym_id__token2,
    STATE(83), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(240), 1,
      sym_id_,
    STATE(365), 1,
      sym_expression,
    STATE(438), 1,
      sym_expression_list_,
    STATE(643), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(97), 2,
      sym_default,
      sym_null_,
    ACTIONS(101), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(107), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(109), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(111), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(113), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(115), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(119), 2,
      sym_count_,
      sym_count_big_,
    STATE(283), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(125), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(307), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(288), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(326), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(121), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2007] = 34,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(438), 1,
      sym_expression_list_,
    STATE(462), 1,
      sym_id_,
    STATE(479), 1,
      sym_expression,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2138] = 33,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(622), 1,
      sym_expression,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2266] = 33,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(607), 1,
      sym_expression,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2394] = 33,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(554), 1,
      sym_expression,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2522] = 33,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(557), 1,
      sym_expression,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2650] = 33,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(582), 1,
      sym_expression,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2778] = 33,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(583), 1,
      sym_expression,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [2906] = 33,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    STATE(726), 1,
      sym_expression,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [3034] = 33,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(420), 1,
      sym_expression,
    STATE(462), 1,
      sym_id_,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [3162] = 33,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(527), 1,
      sym_expression,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [3290] = 33,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(612), 1,
      sym_expression,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [3418] = 33,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(573), 1,
      sym_expression,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [3546] = 33,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(135), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(137), 1,
      aux_sym_go_statement_token1,
    ACTIONS(141), 1,
      aux_sym_constant_token3,
    ACTIONS(145), 1,
      sym_hierachyid_,
    ACTIONS(147), 1,
      sym_dollar_partition_,
    ACTIONS(159), 1,
      sym_checksum_agg_,
    ACTIONS(165), 1,
      sym_ntile_,
    ACTIONS(169), 1,
      anon_sym_DOLLAR,
    ACTIONS(171), 1,
      aux_sym_real__token1,
    ACTIONS(173), 1,
      aux_sym_id__token1,
    ACTIONS(175), 1,
      aux_sym_id__token2,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(179), 1,
      sym_id_,
    STATE(197), 1,
      sym_keyword,
    STATE(207), 1,
      sym_expression,
    STATE(623), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(139), 2,
      sym_default,
      sym_null_,
    ACTIONS(143), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(149), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(151), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(153), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(155), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(157), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(161), 2,
      sym_count_,
      sym_count_big_,
    STATE(209), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(167), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(204), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(199), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(201), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(163), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [3674] = 33,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(639), 1,
      sym_expression,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [3802] = 33,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(588), 1,
      sym_expression,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [3930] = 33,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(595), 1,
      sym_expression,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [4058] = 33,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(685), 1,
      sym_expression,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [4186] = 33,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    STATE(705), 1,
      sym_expression,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [4314] = 33,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(553), 1,
      sym_expression,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [4442] = 33,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    STATE(713), 1,
      sym_expression,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [4570] = 33,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(690), 1,
      sym_expression,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [4698] = 33,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    STATE(725), 1,
      sym_expression,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [4826] = 33,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(609), 1,
      sym_expression,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [4954] = 33,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(675), 1,
      sym_expression,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [5082] = 33,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(594), 1,
      sym_expression,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [5210] = 33,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(652), 1,
      sym_expression,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [5338] = 33,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(651), 1,
      sym_expression,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [5466] = 33,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(542), 1,
      sym_expression,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [5594] = 33,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(632), 1,
      sym_expression,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [5722] = 33,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(631), 1,
      sym_expression,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [5850] = 33,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(619), 1,
      sym_expression,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [5978] = 33,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(618), 1,
      sym_expression,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [6106] = 33,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(135), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(137), 1,
      aux_sym_go_statement_token1,
    ACTIONS(141), 1,
      aux_sym_constant_token3,
    ACTIONS(145), 1,
      sym_hierachyid_,
    ACTIONS(147), 1,
      sym_dollar_partition_,
    ACTIONS(159), 1,
      sym_checksum_agg_,
    ACTIONS(165), 1,
      sym_ntile_,
    ACTIONS(169), 1,
      anon_sym_DOLLAR,
    ACTIONS(171), 1,
      aux_sym_real__token1,
    ACTIONS(173), 1,
      aux_sym_id__token1,
    ACTIONS(175), 1,
      aux_sym_id__token2,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(179), 1,
      sym_id_,
    STATE(197), 1,
      sym_keyword,
    STATE(202), 1,
      sym_expression,
    STATE(623), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(139), 2,
      sym_default,
      sym_null_,
    ACTIONS(143), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(149), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(151), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(153), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(155), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(157), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(161), 2,
      sym_count_,
      sym_count_big_,
    STATE(209), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(167), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(204), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(199), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(201), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(163), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [6234] = 33,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(590), 1,
      sym_expression,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [6362] = 33,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(93), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(95), 1,
      aux_sym_go_statement_token1,
    ACTIONS(99), 1,
      aux_sym_constant_token3,
    ACTIONS(103), 1,
      sym_hierachyid_,
    ACTIONS(105), 1,
      sym_dollar_partition_,
    ACTIONS(117), 1,
      sym_checksum_agg_,
    ACTIONS(123), 1,
      sym_ntile_,
    ACTIONS(127), 1,
      anon_sym_DOLLAR,
    ACTIONS(129), 1,
      aux_sym_real__token1,
    ACTIONS(131), 1,
      aux_sym_id__token1,
    ACTIONS(133), 1,
      aux_sym_id__token2,
    STATE(83), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(240), 1,
      sym_id_,
    STATE(420), 1,
      sym_expression,
    STATE(643), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(97), 2,
      sym_default,
      sym_null_,
    ACTIONS(101), 2,
      sym_string_lit,
      sym_binary,
    ACTIONS(107), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(109), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(111), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(113), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(115), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(119), 2,
      sym_count_,
      sym_count_big_,
    STATE(283), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(125), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(307), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(288), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(326), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(121), 8,
      sym_avg_,
      sym_max_,
      sym_min_,
      sym_sum_,
      sym_stdev_,
      sym_stdevp_,
      sym_var_,
      sym_varp_,
  [6490] = 33,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(23), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(27), 1,
      aux_sym_constant_token3,
    ACTIONS(33), 1,
      sym_hierachyid_,
    ACTIONS(35), 1,
      sym_dollar_partition_,
    ACTIONS(49), 1,
      sym_checksum_agg_,
    ACTIONS(55), 1,
      sym_ntile_,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(462), 1,
      sym_id_,
    STATE(608), 1,
      sym_expression,
    STATE(656), 1,
      sym_scalar_function_name,
    STATE(704), 1,
      sym_func_proc_name_database_schema,
    ACTIONS(25), 2,
      sym_default,
      sym_null_,
    ACTIONS(37), 2,
      sym_right_,
      sym_left_,
    ACTIONS(39), 2,
      sym_binary_checksum_,
      sym_checksum_,
    ACTIONS(41), 2,
      sym_percentile_cont_,
      sym_percentile_disc_,
    ACTIONS(43), 2,
      sym_cume_dist_,
      sym_percent_rank_,
    ACTIONS(45), 2,
      sym_lag_,
      sym_lead_,
    ACTIONS(47), 2,
      sym_first_value_,
      sym_last_value_,
    ACTIONS(51), 2,
      sym_count_,
      sym_count_big_,
    ACTIONS(59), 2,
      sym_string_lit,
      sym_binary,
    STATE(130), 2,
      sym_LOCAL_ID_,
      sym_primitive_constant,
    ACTIONS(57), 3,
      sym_rank_,
      sym_dense_rank_,
      sym_row_number_,
    STATE(165), 3,
      sym_full_column_name,
      sym_function_call,
      sym_primitive_expression,
    STATE(171), 4,
      sym_money_,
      sym_real_,
      sym_float_,
      sym_decimal_,
    STATE(163), 5,
      sym_hierarchyid_static_method,
      sym_partition_function,
      sym_analytic_windowed_function,
      sym_aggregate_windowed_function,
      sym_ranking_windowed_function,
    ACTIONS(53), 8,
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
      aux_sym_pstmt_vardecl_token1,
      sym_string_lit,
      sym_dollar_partition_,
      sym_binary,
      aux_sym_id__token2,
    ACTIONS(179), 36,
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
    ACTIONS(7), 1,
      aux_sym_go_statement_token1,
    ACTIONS(9), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(11), 1,
      sym_execute,
    ACTIONS(13), 1,
      sym_select,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      sym_func_proc_name_server_database_schema,
    STATE(76), 1,
      sym_keyword,
    STATE(114), 1,
      sym_id_,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(137), 1,
      sym_execute_body_batch,
    STATE(152), 1,
      sym_func_proc_name_database_schema,
    STATE(268), 1,
      sym_go_statement,
    STATE(293), 1,
      sym_select_statement_standalone,
    STATE(305), 1,
      sym_select_statement,
    STATE(308), 1,
      sym_query_expression,
    STATE(334), 1,
      sym_query_specification,
    STATE(337), 1,
      sym_execute_statement,
    STATE(62), 2,
      sym_batch,
      aux_sym_tsql_file_repeat1,
    STATE(72), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(339), 2,
      sym_another_statement,
      sym_dml_clause,
  [6734] = 22,
    ACTIONS(7), 1,
      aux_sym_go_statement_token1,
    ACTIONS(9), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(11), 1,
      sym_execute,
    ACTIONS(13), 1,
      sym_select,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      sym_func_proc_name_server_database_schema,
    STATE(76), 1,
      sym_keyword,
    STATE(114), 1,
      sym_id_,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(137), 1,
      sym_execute_body_batch,
    STATE(152), 1,
      sym_func_proc_name_database_schema,
    STATE(268), 1,
      sym_go_statement,
    STATE(293), 1,
      sym_select_statement_standalone,
    STATE(305), 1,
      sym_select_statement,
    STATE(308), 1,
      sym_query_expression,
    STATE(334), 1,
      sym_query_specification,
    STATE(337), 1,
      sym_execute_statement,
    STATE(62), 2,
      sym_batch,
      aux_sym_tsql_file_repeat1,
    STATE(72), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(339), 2,
      sym_another_statement,
      sym_dml_clause,
  [6804] = 22,
    ACTIONS(7), 1,
      aux_sym_go_statement_token1,
    ACTIONS(9), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(11), 1,
      sym_execute,
    ACTIONS(13), 1,
      sym_select,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      sym_func_proc_name_server_database_schema,
    STATE(76), 1,
      sym_keyword,
    STATE(87), 1,
      sym_execute_body_batch,
    STATE(114), 1,
      sym_id_,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(152), 1,
      sym_func_proc_name_database_schema,
    STATE(268), 1,
      sym_go_statement,
    STATE(293), 1,
      sym_select_statement_standalone,
    STATE(305), 1,
      sym_select_statement,
    STATE(308), 1,
      sym_query_expression,
    STATE(334), 1,
      sym_query_specification,
    STATE(337), 1,
      sym_execute_statement,
    STATE(60), 2,
      sym_batch,
      aux_sym_tsql_file_repeat1,
    STATE(72), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(339), 2,
      sym_another_statement,
      sym_dml_clause,
  [6874] = 22,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    ACTIONS(187), 1,
      aux_sym_go_statement_token1,
    ACTIONS(190), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(193), 1,
      sym_execute,
    ACTIONS(196), 1,
      sym_select,
    ACTIONS(199), 1,
      aux_sym_id__token1,
    ACTIONS(202), 1,
      aux_sym_id__token2,
    STATE(66), 1,
      sym_func_proc_name_server_database_schema,
    STATE(76), 1,
      sym_keyword,
    STATE(114), 1,
      sym_id_,
    STATE(123), 1,
      sym_func_proc_name_schema,
    STATE(137), 1,
      sym_execute_body_batch,
    STATE(152), 1,
      sym_func_proc_name_database_schema,
    STATE(268), 1,
      sym_go_statement,
    STATE(293), 1,
      sym_select_statement_standalone,
    STATE(305), 1,
      sym_select_statement,
    STATE(308), 1,
      sym_query_expression,
    STATE(334), 1,
      sym_query_specification,
    STATE(337), 1,
      sym_execute_statement,
    STATE(62), 2,
      sym_batch,
      aux_sym_tsql_file_repeat1,
    STATE(72), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(339), 2,
      sym_another_statement,
      sym_dml_clause,
  [6944] = 14,
    ACTIONS(207), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(215), 1,
      aux_sym_constant_token2,
    ACTIONS(217), 1,
      sym_WITH,
    STATE(180), 1,
      sym_LOCAL_ID_,
    STATE(182), 1,
      sym_execute_statement_arg_unnamed,
    STATE(183), 1,
      sym_execute_statement_arg_named,
    STATE(222), 1,
      sym_execute_parameter,
    STATE(229), 1,
      sym_keyword,
    STATE(265), 1,
      sym_execute_statement_arg,
    ACTIONS(211), 2,
      sym_default,
      sym_null_,
    ACTIONS(213), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(220), 2,
      sym_constant,
      sym_id_,
    ACTIONS(205), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(209), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [6996] = 14,
    ACTIONS(207), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(215), 1,
      aux_sym_constant_token2,
    ACTIONS(223), 1,
      sym_WITH,
    STATE(180), 1,
      sym_LOCAL_ID_,
    STATE(182), 1,
      sym_execute_statement_arg_unnamed,
    STATE(183), 1,
      sym_execute_statement_arg_named,
    STATE(222), 1,
      sym_execute_parameter,
    STATE(229), 1,
      sym_keyword,
    STATE(264), 1,
      sym_execute_statement_arg,
    ACTIONS(211), 2,
      sym_default,
      sym_null_,
    ACTIONS(213), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(220), 2,
      sym_constant,
      sym_id_,
    ACTIONS(219), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(221), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [7048] = 5,
    ACTIONS(229), 1,
      anon_sym_EQ,
    STATE(34), 1,
      sym_assignment_operator,
    ACTIONS(225), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
    ACTIONS(227), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(231), 8,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [7081] = 16,
    ACTIONS(131), 1,
      aux_sym_id__token1,
    ACTIONS(133), 1,
      aux_sym_id__token2,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
    ACTIONS(235), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(239), 1,
      anon_sym_SEMI,
    ACTIONS(245), 1,
      aux_sym_constant_token2,
    STATE(83), 1,
      sym_keyword,
    STATE(342), 1,
      sym_execute_statement_arg,
    STATE(343), 1,
      sym_execute_statement_arg_named,
    STATE(345), 1,
      sym_execute_statement_arg_unnamed,
    STATE(346), 1,
      sym_LOCAL_ID_,
    STATE(364), 1,
      sym_execute_parameter,
    ACTIONS(241), 2,
      sym_default,
      sym_null_,
    ACTIONS(243), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(360), 2,
      sym_constant,
      sym_id_,
    ACTIONS(237), 3,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [7135] = 2,
    ACTIONS(249), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(247), 15,
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
  [7161] = 2,
    ACTIONS(249), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(247), 12,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_execute_body_token1,
      sym_PLUS,
      aux_sym_id__token2,
  [7185] = 10,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      aux_sym_AS_token1,
    ACTIONS(259), 1,
      sym_string_lit,
    STATE(80), 1,
      sym_udt_method_arguments,
    STATE(197), 1,
      sym_keyword,
    STATE(236), 1,
      sym_as_column_alias,
    STATE(258), 1,
      sym_id_,
    STATE(263), 1,
      sym_column_alias,
    ACTIONS(251), 5,
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
  [7224] = 13,
    ACTIONS(263), 1,
      aux_sym_go_statement_token1,
    ACTIONS(266), 1,
      sym_execute,
    ACTIONS(269), 1,
      sym_select,
    ACTIONS(272), 1,
      aux_sym_id__token1,
    STATE(293), 1,
      sym_select_statement_standalone,
    STATE(305), 1,
      sym_select_statement,
    STATE(308), 1,
      sym_query_expression,
    STATE(334), 1,
      sym_query_specification,
    STATE(337), 1,
      sym_execute_statement,
    STATE(82), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(274), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    STATE(339), 2,
      sym_another_statement,
      sym_dml_clause,
    ACTIONS(261), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [7269] = 2,
    ACTIONS(276), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(274), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [7292] = 13,
    ACTIONS(280), 1,
      aux_sym_go_statement_token1,
    ACTIONS(283), 1,
      sym_execute,
    ACTIONS(286), 1,
      sym_select,
    ACTIONS(289), 1,
      aux_sym_id__token1,
    STATE(293), 1,
      sym_select_statement_standalone,
    STATE(305), 1,
      sym_select_statement,
    STATE(308), 1,
      sym_query_expression,
    STATE(334), 1,
      sym_query_specification,
    STATE(337), 1,
      sym_execute_statement,
    STATE(82), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(272), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    STATE(339), 2,
      sym_another_statement,
      sym_dml_clause,
    ACTIONS(278), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [7337] = 3,
    ACTIONS(295), 1,
      sym_PLUS,
    ACTIONS(293), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(291), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [7362] = 3,
    ACTIONS(301), 1,
      sym_PLUS,
    ACTIONS(299), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(297), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [7387] = 2,
    ACTIONS(305), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(303), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [7409] = 2,
    ACTIONS(309), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(307), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [7431] = 14,
    ACTIONS(95), 1,
      aux_sym_go_statement_token1,
    ACTIONS(131), 1,
      aux_sym_id__token1,
    ACTIONS(133), 1,
      aux_sym_id__token2,
    ACTIONS(235), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(245), 1,
      aux_sym_constant_token2,
    STATE(83), 1,
      sym_keyword,
    STATE(343), 1,
      sym_execute_statement_arg_named,
    STATE(345), 1,
      sym_execute_statement_arg_unnamed,
    STATE(346), 1,
      sym_LOCAL_ID_,
    STATE(364), 1,
      sym_execute_parameter,
    STATE(393), 1,
      sym_execute_statement_arg,
    ACTIONS(241), 2,
      sym_default,
      sym_null_,
    ACTIONS(243), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(360), 2,
      sym_constant,
      sym_id_,
  [7477] = 14,
    ACTIONS(207), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(215), 1,
      aux_sym_constant_token2,
    ACTIONS(311), 1,
      aux_sym_go_statement_token1,
    ACTIONS(313), 1,
      aux_sym_id__token1,
    ACTIONS(315), 1,
      aux_sym_id__token2,
    STATE(180), 1,
      sym_LOCAL_ID_,
    STATE(188), 1,
      sym_execute_statement_arg_unnamed,
    STATE(198), 1,
      sym_execute_statement_arg_named,
    STATE(222), 1,
      sym_execute_parameter,
    STATE(229), 1,
      sym_keyword,
    STATE(257), 1,
      sym_execute_statement_arg,
    ACTIONS(211), 2,
      sym_default,
      sym_null_,
    ACTIONS(213), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(220), 2,
      sym_constant,
      sym_id_,
  [7523] = 4,
    ACTIONS(295), 1,
      sym_PLUS,
    ACTIONS(317), 1,
      aux_sym_execute_body_token1,
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
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [7549] = 8,
    ACTIONS(257), 1,
      aux_sym_AS_token1,
    ACTIONS(259), 1,
      sym_string_lit,
    STATE(197), 1,
      sym_keyword,
    STATE(228), 1,
      sym_as_column_alias,
    STATE(258), 1,
      sym_id_,
    STATE(263), 1,
      sym_column_alias,
    ACTIONS(319), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(321), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [7582] = 11,
    ACTIONS(137), 1,
      aux_sym_go_statement_token1,
    ACTIONS(173), 1,
      aux_sym_id__token1,
    ACTIONS(175), 1,
      aux_sym_id__token2,
    ACTIONS(257), 1,
      aux_sym_AS_token1,
    ACTIONS(259), 1,
      sym_string_lit,
    STATE(197), 1,
      sym_keyword,
    STATE(258), 1,
      sym_id_,
    STATE(261), 1,
      sym_as_column_alias,
    STATE(263), 1,
      sym_column_alias,
    ACTIONS(325), 3,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
    ACTIONS(323), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
  [7621] = 11,
    ACTIONS(331), 1,
      sym_execute,
    ACTIONS(334), 1,
      sym_select,
    STATE(293), 1,
      sym_select_statement_standalone,
    STATE(305), 1,
      sym_select_statement,
    STATE(308), 1,
      sym_query_expression,
    STATE(334), 1,
      sym_query_specification,
    STATE(337), 1,
      sym_execute_statement,
    ACTIONS(329), 2,
      aux_sym_go_statement_token1,
      aux_sym_id__token1,
    STATE(82), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(339), 2,
      sym_another_statement,
      sym_dml_clause,
    ACTIONS(327), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [7660] = 1,
    ACTIONS(307), 15,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_execute,
      sym_select,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [7678] = 2,
    ACTIONS(339), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(337), 8,
      ts_builtin_sym_end,
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [7698] = 2,
    ACTIONS(309), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(307), 8,
      ts_builtin_sym_end,
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [7718] = 6,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    ACTIONS(347), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(349), 1,
      aux_sym_execute_body_token1,
    ACTIONS(351), 1,
      anon_sym_COLON_COLON,
    ACTIONS(341), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_string_lit,
      aux_sym_id__token2,
    ACTIONS(345), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [7746] = 13,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    ACTIONS(353), 1,
      aux_sym_go_statement_token1,
    ACTIONS(355), 1,
      sym_execute,
    ACTIONS(357), 1,
      sym_select,
    STATE(273), 1,
      sym_go_statement,
    STATE(293), 1,
      sym_select_statement_standalone,
    STATE(305), 1,
      sym_select_statement,
    STATE(308), 1,
      sym_query_expression,
    STATE(334), 1,
      sym_query_specification,
    STATE(337), 1,
      sym_execute_statement,
    STATE(457), 1,
      aux_sym_tsql_file_repeat2,
    STATE(70), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(339), 2,
      sym_another_statement,
      sym_dml_clause,
  [7788] = 2,
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
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [7808] = 2,
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
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [7828] = 3,
    ACTIONS(371), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(367), 7,
      ts_builtin_sym_end,
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
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
  [7850] = 1,
    ACTIONS(274), 15,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_execute,
      sym_select,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [7868] = 2,
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
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [7888] = 3,
    ACTIONS(381), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(377), 7,
      ts_builtin_sym_end,
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
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
  [7910] = 4,
    ACTIONS(387), 1,
      aux_sym_over__token1,
    STATE(159), 1,
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
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
  [7934] = 4,
    ACTIONS(387), 1,
      aux_sym_over__token1,
    STATE(158), 1,
      sym_over_clause,
    ACTIONS(391), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(389), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
  [7958] = 3,
    ACTIONS(397), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(393), 7,
      ts_builtin_sym_end,
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
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
  [7980] = 2,
    ACTIONS(401), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(399), 8,
      ts_builtin_sym_end,
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8000] = 3,
    ACTIONS(407), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(403), 7,
      ts_builtin_sym_end,
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(405), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [8022] = 6,
    ACTIONS(413), 1,
      aux_sym_constant_token3,
    STATE(350), 1,
      sym_integer,
    ACTIONS(276), 2,
      sym_default,
      sym_null_,
    ACTIONS(409), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(274), 4,
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(411), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [8050] = 2,
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
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8070] = 3,
    ACTIONS(423), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(419), 7,
      ts_builtin_sym_end,
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
    ACTIONS(421), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [8092] = 14,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    ACTIONS(427), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(429), 1,
      sym_string_lit,
    ACTIONS(431), 1,
      aux_sym_id__token1,
    ACTIONS(433), 1,
      aux_sym_id__token2,
    STATE(79), 1,
      sym_LOCAL_ID_,
    STATE(85), 1,
      sym_keyword,
    STATE(92), 1,
      sym_func_proc_name_database_schema,
    STATE(103), 1,
      sym_id_,
    STATE(105), 1,
      sym_func_proc_name_schema,
    STATE(310), 1,
      sym_execute_body,
    STATE(63), 2,
      sym_func_proc_name_server_database_schema,
      sym_execute_var_string,
  [8136] = 3,
    ACTIONS(437), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(343), 7,
      ts_builtin_sym_end,
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
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
  [8158] = 13,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(353), 1,
      aux_sym_go_statement_token1,
    ACTIONS(355), 1,
      sym_execute,
    ACTIONS(357), 1,
      sym_select,
    STATE(273), 1,
      sym_go_statement,
    STATE(293), 1,
      sym_select_statement_standalone,
    STATE(305), 1,
      sym_select_statement,
    STATE(308), 1,
      sym_query_expression,
    STATE(334), 1,
      sym_query_specification,
    STATE(337), 1,
      sym_execute_statement,
    STATE(452), 1,
      aux_sym_tsql_file_repeat2,
    STATE(70), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(339), 2,
      sym_another_statement,
      sym_dml_clause,
  [8200] = 2,
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
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8220] = 2,
    ACTIONS(276), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(274), 9,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_body_token1,
      sym_string_lit,
      anon_sym_COLON_COLON,
      aux_sym_id__token2,
  [8240] = 2,
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
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8260] = 2,
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
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8280] = 2,
    ACTIONS(453), 7,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(451), 8,
      ts_builtin_sym_end,
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8300] = 2,
    ACTIONS(309), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(307), 9,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_execute_body_token1,
      sym_string_lit,
      anon_sym_COLON_COLON,
      aux_sym_id__token2,
  [8320] = 3,
    ACTIONS(455), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(421), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(419), 7,
      ts_builtin_sym_end,
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8341] = 3,
    ACTIONS(457), 1,
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
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8362] = 3,
    ACTIONS(463), 1,
      aux_sym_real__token2,
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
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
  [8383] = 3,
    ACTIONS(465), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(435), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(343), 7,
      ts_builtin_sym_end,
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8404] = 3,
    ACTIONS(467), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(405), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(403), 7,
      ts_builtin_sym_end,
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8425] = 11,
    ACTIONS(215), 1,
      aux_sym_constant_token2,
    ACTIONS(311), 1,
      aux_sym_go_statement_token1,
    ACTIONS(313), 1,
      aux_sym_id__token1,
    ACTIONS(315), 1,
      aux_sym_id__token2,
    ACTIONS(469), 1,
      aux_sym_pstmt_vardecl_token1,
    STATE(180), 1,
      sym_LOCAL_ID_,
    STATE(229), 1,
      sym_keyword,
    STATE(248), 1,
      sym_execute_parameter,
    ACTIONS(211), 2,
      sym_default,
      sym_null_,
    ACTIONS(213), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(220), 2,
      sym_constant,
      sym_id_,
  [8462] = 3,
    ACTIONS(471), 1,
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
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8483] = 3,
    ACTIONS(463), 1,
      aux_sym_real__token2,
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
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
  [8504] = 1,
    ACTIONS(247), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      sym_OUTPUT,
      sym_execute,
      sym_select,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [8521] = 3,
    ACTIONS(477), 1,
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
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8542] = 2,
    ACTIONS(276), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(274), 8,
      ts_builtin_sym_end,
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8561] = 11,
    ACTIONS(93), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(95), 1,
      aux_sym_go_statement_token1,
    ACTIONS(131), 1,
      aux_sym_id__token1,
    ACTIONS(133), 1,
      aux_sym_id__token2,
    ACTIONS(245), 1,
      aux_sym_constant_token2,
    STATE(83), 1,
      sym_keyword,
    STATE(346), 1,
      sym_LOCAL_ID_,
    STATE(356), 1,
      sym_execute_parameter,
    ACTIONS(241), 2,
      sym_default,
      sym_null_,
    ACTIONS(243), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
    STATE(360), 2,
      sym_constant,
      sym_id_,
  [8598] = 2,
    ACTIONS(441), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(439), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8617] = 2,
    ACTIONS(365), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(363), 7,
      ts_builtin_sym_end,
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8635] = 2,
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
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
  [8653] = 2,
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
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
  [8671] = 2,
    ACTIONS(489), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(487), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
  [8689] = 2,
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
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
  [8707] = 2,
    ACTIONS(497), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(495), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
  [8725] = 2,
    ACTIONS(227), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(225), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
  [8743] = 2,
    ACTIONS(401), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(399), 7,
      ts_builtin_sym_end,
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8761] = 2,
    ACTIONS(445), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(443), 7,
      ts_builtin_sym_end,
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8779] = 12,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    ACTIONS(427), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(429), 1,
      sym_string_lit,
    ACTIONS(431), 1,
      aux_sym_id__token1,
    ACTIONS(433), 1,
      aux_sym_id__token2,
    STATE(73), 1,
      sym_LOCAL_ID_,
    STATE(85), 1,
      sym_keyword,
    STATE(92), 1,
      sym_func_proc_name_database_schema,
    STATE(103), 1,
      sym_id_,
    STATE(105), 1,
      sym_func_proc_name_schema,
    STATE(64), 2,
      sym_func_proc_name_server_database_schema,
      sym_execute_var_string,
  [8817] = 2,
    ACTIONS(501), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(499), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
  [8835] = 10,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    ACTIONS(503), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(511), 1,
      sym_dollar_partition_,
    STATE(76), 1,
      sym_keyword,
    STATE(481), 1,
      sym_id_,
    ACTIONS(505), 2,
      sym_get_descendant_,
      sym_get_reparented_value_,
    ACTIONS(507), 2,
      sym_getancestor_,
      sym_is_descendant_of_,
    ACTIONS(509), 2,
      sym_getlevel_,
      sym_tostring_,
  [8869] = 2,
    ACTIONS(417), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(415), 7,
      ts_builtin_sym_end,
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [8887] = 11,
    ACTIONS(353), 1,
      aux_sym_go_statement_token1,
    ACTIONS(355), 1,
      sym_execute,
    ACTIONS(357), 1,
      sym_select,
    STATE(281), 1,
      sym_go_statement,
    STATE(293), 1,
      sym_select_statement_standalone,
    STATE(305), 1,
      sym_select_statement,
    STATE(308), 1,
      sym_query_expression,
    STATE(334), 1,
      sym_query_specification,
    STATE(337), 1,
      sym_execute_statement,
    STATE(70), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(339), 2,
      sym_another_statement,
      sym_dml_clause,
  [8923] = 2,
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
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
  [8941] = 2,
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
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
  [8959] = 2,
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
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
  [8977] = 2,
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
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
  [8995] = 2,
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
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
  [9013] = 2,
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
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
  [9031] = 10,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    ACTIONS(503), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(543), 1,
      sym_dollar_partition_,
    STATE(76), 1,
      sym_keyword,
    STATE(530), 1,
      sym_id_,
    ACTIONS(537), 2,
      sym_get_descendant_,
      sym_get_reparented_value_,
    ACTIONS(539), 2,
      sym_getancestor_,
      sym_is_descendant_of_,
    ACTIONS(541), 2,
      sym_getlevel_,
      sym_tostring_,
  [9065] = 2,
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
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
  [9083] = 2,
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
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
  [9101] = 2,
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
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
  [9119] = 2,
    ACTIONS(453), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(451), 7,
      ts_builtin_sym_end,
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [9137] = 10,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    ACTIONS(503), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(511), 1,
      sym_dollar_partition_,
    STATE(76), 1,
      sym_keyword,
    STATE(530), 1,
      sym_id_,
    ACTIONS(505), 2,
      sym_get_descendant_,
      sym_get_reparented_value_,
    ACTIONS(507), 2,
      sym_getancestor_,
      sym_is_descendant_of_,
    ACTIONS(509), 2,
      sym_getlevel_,
      sym_tostring_,
  [9171] = 2,
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
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
  [9189] = 2,
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
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
  [9207] = 2,
    ACTIONS(375), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(373), 7,
      ts_builtin_sym_end,
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [9225] = 2,
    ACTIONS(339), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(337), 7,
      ts_builtin_sym_end,
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [9243] = 2,
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
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
  [9261] = 2,
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
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
  [9279] = 2,
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
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
  [9297] = 2,
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
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
  [9315] = 2,
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
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
  [9333] = 2,
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
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
  [9351] = 10,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    ACTIONS(503), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(595), 1,
      sym_dollar_partition_,
    STATE(76), 1,
      sym_keyword,
    STATE(530), 1,
      sym_id_,
    ACTIONS(589), 2,
      sym_get_descendant_,
      sym_get_reparented_value_,
    ACTIONS(591), 2,
      sym_getancestor_,
      sym_is_descendant_of_,
    ACTIONS(593), 2,
      sym_getlevel_,
      sym_tostring_,
  [9385] = 2,
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
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
  [9403] = 3,
    ACTIONS(349), 1,
      aux_sym_execute_body_token1,
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
  [9423] = 2,
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
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
  [9441] = 2,
    ACTIONS(611), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(609), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
  [9459] = 2,
    ACTIONS(615), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(613), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
  [9477] = 2,
    ACTIONS(619), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(617), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
  [9495] = 2,
    ACTIONS(623), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(621), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
  [9513] = 2,
    ACTIONS(361), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(359), 7,
      ts_builtin_sym_end,
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [9531] = 2,
    ACTIONS(627), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(625), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
  [9549] = 2,
    ACTIONS(449), 6,
      aux_sym_go_statement_token1,
      sym_default,
      sym_null_,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(447), 7,
      ts_builtin_sym_end,
      aux_sym_pstmt_vardecl_token1,
      anon_sym_SEMI,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      aux_sym_id__token2,
  [9567] = 2,
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
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
  [9585] = 3,
    ACTIONS(629), 1,
      anon_sym_EQ,
    ACTIONS(247), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(249), 6,
      aux_sym_go_statement_token1,
      sym_OUTPUT,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [9604] = 2,
    ACTIONS(631), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
    ACTIONS(633), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [9621] = 2,
    ACTIONS(635), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      sym_string_lit,
      aux_sym_id__token2,
    ACTIONS(637), 6,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_AS_token1,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [9638] = 4,
    ACTIONS(639), 1,
      aux_sym_over__token1,
    STATE(211), 1,
      sym_over_clause,
    ACTIONS(389), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(391), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [9659] = 4,
    ACTIONS(639), 1,
      aux_sym_over__token1,
    STATE(212), 1,
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
  [9680] = 4,
    ACTIONS(643), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(641), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(645), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [9700] = 4,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(647), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(651), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [9720] = 4,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    ACTIONS(653), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(341), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_id__token2,
    ACTIONS(345), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [9740] = 3,
    ACTIONS(659), 1,
      sym_OUTPUT,
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
  [9758] = 2,
    ACTIONS(276), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(274), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [9774] = 4,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(661), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(663), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [9794] = 4,
    ACTIONS(665), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(661), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(663), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [9814] = 4,
    ACTIONS(665), 1,
      anon_sym_COMMA,
    STATE(195), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(647), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(651), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [9834] = 2,
    ACTIONS(247), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(249), 6,
      aux_sym_go_statement_token1,
      sym_OUTPUT,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [9850] = 5,
    ACTIONS(671), 1,
      aux_sym_AS_token1,
    ACTIONS(673), 1,
      sym_AT_KEYWORD,
    STATE(533), 1,
      sym_AS,
    ACTIONS(667), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(669), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9872] = 5,
    ACTIONS(671), 1,
      aux_sym_AS_token1,
    ACTIONS(679), 1,
      sym_AT_KEYWORD,
    STATE(524), 1,
      sym_AS,
    ACTIONS(675), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(677), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [9894] = 3,
    STATE(192), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(661), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(663), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [9912] = 3,
    STATE(195), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(647), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(651), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [9930] = 4,
    ACTIONS(683), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(681), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(686), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [9950] = 4,
    ACTIONS(690), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(688), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(693), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [9970] = 3,
    STATE(190), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(647), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(651), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [9988] = 3,
    ACTIONS(695), 1,
      aux_sym_real__token2,
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
  [10006] = 3,
    ACTIONS(695), 1,
      aux_sym_real__token2,
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
  [10024] = 4,
    ACTIONS(699), 1,
      anon_sym_COMMA,
    STATE(195), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(697), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(702), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [10044] = 4,
    ACTIONS(643), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(704), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(706), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10064] = 2,
    ACTIONS(309), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(307), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [10080] = 3,
    STATE(189), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(661), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(663), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [10098] = 2,
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
  [10113] = 2,
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
  [10128] = 2,
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
  [10143] = 2,
    ACTIONS(708), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(710), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10158] = 2,
    ACTIONS(712), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(714), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10173] = 2,
    ACTIONS(613), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(615), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10188] = 4,
    ACTIONS(718), 1,
      anon_sym_COMMA,
    STATE(256), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(716), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(720), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [10207] = 2,
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
  [10222] = 2,
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
  [10237] = 2,
    ACTIONS(726), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(728), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10252] = 2,
    ACTIONS(225), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(227), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10267] = 2,
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
  [10282] = 2,
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
  [10297] = 2,
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
  [10312] = 2,
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
  [10327] = 2,
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
  [10342] = 2,
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
  [10357] = 2,
    ACTIONS(609), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(611), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10372] = 2,
    ACTIONS(487), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(489), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10387] = 4,
    ACTIONS(718), 1,
      anon_sym_COMMA,
    STATE(205), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(730), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(732), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [10406] = 4,
    ACTIONS(718), 1,
      anon_sym_COMMA,
    STATE(256), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(730), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(732), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [10425] = 2,
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
  [10440] = 2,
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
  [10455] = 2,
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
  [10470] = 2,
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
  [10485] = 2,
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
  [10500] = 2,
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
  [10515] = 2,
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
  [10530] = 2,
    ACTIONS(274), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(276), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [10545] = 2,
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
  [10560] = 2,
    ACTIONS(307), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(309), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [10575] = 4,
    ACTIONS(718), 1,
      anon_sym_COMMA,
    STATE(235), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(675), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(677), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [10594] = 2,
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
  [10609] = 2,
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
  [10624] = 2,
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
  [10639] = 2,
    ACTIONS(625), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(627), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10654] = 4,
    ACTIONS(718), 1,
      anon_sym_COMMA,
    STATE(256), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(667), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(669), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [10673] = 2,
    ACTIONS(319), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(321), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10688] = 4,
    ACTIONS(718), 1,
      anon_sym_COMMA,
    STATE(255), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(667), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(669), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [10707] = 3,
    ACTIONS(754), 1,
      aux_sym_over__token1,
    STATE(297), 1,
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
  [10724] = 2,
    ACTIONS(688), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(693), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10739] = 3,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    ACTIONS(756), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(341), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10756] = 2,
    ACTIONS(617), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(619), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10771] = 2,
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
  [10786] = 2,
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
  [10801] = 2,
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
  [10816] = 2,
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
  [10831] = 3,
    ACTIONS(754), 1,
      aux_sym_over__token1,
    STATE(295), 1,
      sym_over_clause,
    ACTIONS(389), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [10848] = 2,
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
  [10863] = 2,
    ACTIONS(758), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(760), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [10878] = 2,
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
  [10893] = 2,
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
  [10908] = 2,
    ACTIONS(621), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(623), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10923] = 2,
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
  [10938] = 2,
    ACTIONS(495), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(497), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [10953] = 4,
    ACTIONS(718), 1,
      anon_sym_COMMA,
    STATE(219), 1,
      aux_sym_execute_body_repeat1,
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
  [10972] = 4,
    ACTIONS(718), 1,
      anon_sym_COMMA,
    STATE(256), 1,
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
  [10991] = 4,
    ACTIONS(772), 1,
      anon_sym_COMMA,
    STATE(256), 1,
      aux_sym_execute_body_repeat1,
    ACTIONS(770), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(775), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11010] = 2,
    ACTIONS(681), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(686), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [11025] = 2,
    ACTIONS(349), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(777), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [11040] = 2,
    ACTIONS(499), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(501), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [11055] = 2,
    ACTIONS(697), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(702), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_WITH,
      sym_select,
      aux_sym_id__token1,
  [11070] = 2,
    ACTIONS(779), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(781), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [11085] = 2,
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
  [11100] = 2,
    ACTIONS(783), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(785), 5,
      aux_sym_go_statement_token1,
      sym_execute,
      aux_sym_query_specification_token1,
      sym_select,
      aux_sym_id__token1,
  [11115] = 3,
    ACTIONS(791), 1,
      sym_WITH,
    ACTIONS(787), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(789), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11131] = 3,
    ACTIONS(797), 1,
      sym_WITH,
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
  [11147] = 2,
    ACTIONS(799), 1,
      aux_sym_real__token2,
    ACTIONS(473), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11161] = 3,
    ACTIONS(805), 1,
      sym_AT_KEYWORD,
    ACTIONS(801), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(803), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11177] = 3,
    STATE(272), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(278), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(289), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11193] = 2,
    ACTIONS(799), 1,
      aux_sym_real__token2,
    ACTIONS(459), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11207] = 3,
    ACTIONS(811), 1,
      aux_sym_query_specification_token1,
    ACTIONS(807), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(809), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11223] = 4,
    ACTIONS(413), 1,
      aux_sym_constant_token3,
    STATE(350), 1,
      sym_integer,
    ACTIONS(409), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(411), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11241] = 4,
    ACTIONS(263), 1,
      aux_sym_go_statement_token1,
    STATE(275), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(261), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(272), 3,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11259] = 5,
    ACTIONS(813), 1,
      ts_builtin_sym_end,
    ACTIONS(816), 1,
      aux_sym_go_statement_token1,
    ACTIONS(261), 2,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    STATE(274), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(272), 3,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11279] = 4,
    ACTIONS(822), 1,
      aux_sym_go_statement_token1,
    STATE(275), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(820), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(825), 3,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11297] = 4,
    ACTIONS(829), 1,
      aux_sym_go_statement_token1,
    STATE(275), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(827), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(832), 3,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11315] = 2,
    ACTIONS(836), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(834), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [11329] = 2,
    ACTIONS(840), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
    ACTIONS(838), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
  [11343] = 9,
    ACTIONS(842), 1,
      aux_sym_go_statement_token1,
    ACTIONS(844), 1,
      aux_sym_id__token1,
    ACTIONS(846), 1,
      aux_sym_id__token2,
    STATE(319), 1,
      sym_table_sources,
    STATE(320), 1,
      sym_table_source,
    STATE(327), 1,
      sym_table_source_item,
    STATE(330), 1,
      sym_id_,
    STATE(331), 1,
      sym_full_table_name,
    STATE(333), 1,
      sym_keyword,
  [11371] = 2,
    ACTIONS(775), 4,
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
  [11385] = 3,
    ACTIONS(852), 1,
      sym_AT_KEYWORD,
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
  [11401] = 4,
    ACTIONS(263), 1,
      aux_sym_go_statement_token1,
    STATE(274), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
    ACTIONS(261), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(272), 3,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11419] = 1,
    ACTIONS(495), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11430] = 1,
    ACTIONS(225), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11441] = 1,
    ACTIONS(621), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11452] = 7,
    ACTIONS(854), 1,
      anon_sym_RPAREN,
    ACTIONS(856), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(858), 1,
      aux_sym_order_by_clause_token1,
    STATE(390), 1,
      sym_partition_by_clause,
    STATE(449), 1,
      sym_order_by_clause,
    STATE(587), 1,
      sym_row_or_range_clause,
    ACTIONS(860), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11475] = 2,
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
  [11488] = 1,
    ACTIONS(529), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11499] = 1,
    ACTIONS(601), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11510] = 1,
    ACTIONS(525), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11521] = 1,
    ACTIONS(569), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11532] = 1,
    ACTIONS(513), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11543] = 7,
    ACTIONS(856), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(858), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(866), 1,
      anon_sym_RPAREN,
    STATE(368), 1,
      sym_partition_by_clause,
    STATE(467), 1,
      sym_order_by_clause,
    STATE(548), 1,
      sym_row_or_range_clause,
    ACTIONS(860), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11566] = 2,
    ACTIONS(868), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(870), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11579] = 1,
    ACTIONS(561), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11590] = 1,
    ACTIONS(581), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11601] = 1,
    ACTIONS(517), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11612] = 1,
    ACTIONS(585), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11623] = 1,
    ACTIONS(573), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11634] = 1,
    ACTIONS(597), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11645] = 1,
    ACTIONS(577), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11656] = 1,
    ACTIONS(487), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11667] = 1,
    ACTIONS(479), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11678] = 1,
    ACTIONS(521), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11689] = 2,
    ACTIONS(872), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(874), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11702] = 2,
    ACTIONS(876), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(878), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11715] = 3,
    ACTIONS(884), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(880), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_id__token2,
    ACTIONS(882), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11730] = 1,
    ACTIONS(613), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11741] = 2,
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
  [11754] = 2,
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
  [11767] = 2,
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
  [11780] = 3,
    ACTIONS(902), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(898), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_id__token2,
    ACTIONS(900), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11795] = 1,
    ACTIONS(545), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11806] = 1,
    ACTIONS(549), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11817] = 1,
    ACTIONS(557), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11828] = 5,
    ACTIONS(906), 1,
      aux_sym_collation__token1,
    ACTIONS(908), 1,
      sym_asc_,
    ACTIONS(910), 1,
      sym_desc_,
    STATE(355), 1,
      sym_collation_,
    ACTIONS(904), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11847] = 1,
    ACTIONS(565), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11858] = 2,
    ACTIONS(274), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(276), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11871] = 1,
    ACTIONS(609), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11882] = 2,
    ACTIONS(912), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(914), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11895] = 2,
    ACTIONS(916), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(918), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11908] = 1,
    ACTIONS(533), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11919] = 2,
    ACTIONS(920), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(922), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [11932] = 1,
    ACTIONS(553), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11943] = 1,
    ACTIONS(483), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11954] = 7,
    ACTIONS(856), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(858), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(924), 1,
      anon_sym_RPAREN,
    STATE(378), 1,
      sym_partition_by_clause,
    STATE(436), 1,
      sym_order_by_clause,
    STATE(611), 1,
      sym_row_or_range_clause,
    ACTIONS(860), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11977] = 1,
    ACTIONS(605), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [11988] = 2,
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
  [12001] = 1,
    ACTIONS(617), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12012] = 1,
    ACTIONS(625), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12023] = 3,
    ACTIONS(934), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(930), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_id__token2,
    ACTIONS(932), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [12038] = 2,
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
  [12051] = 2,
    ACTIONS(940), 1,
      anon_sym_EQ,
    ACTIONS(247), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      sym_OUTPUT,
      sym_execute,
      sym_select,
  [12064] = 2,
    ACTIONS(307), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(309), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [12077] = 2,
    ACTIONS(942), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(944), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [12090] = 2,
    ACTIONS(946), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(948), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [12103] = 1,
    ACTIONS(491), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12114] = 2,
    ACTIONS(950), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(952), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [12127] = 1,
    ACTIONS(499), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_collation__token1,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12138] = 3,
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
  [12153] = 3,
    ACTIONS(960), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(681), 5,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12167] = 3,
    ACTIONS(963), 1,
      anon_sym_COMMA,
    STATE(341), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(697), 5,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12181] = 4,
    ACTIONS(968), 1,
      anon_sym_COMMA,
    ACTIONS(970), 1,
      anon_sym_SEMI,
    STATE(351), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(966), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [12197] = 2,
    STATE(354), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(661), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12209] = 2,
    ACTIONS(972), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(974), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [12221] = 2,
    STATE(348), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(661), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12233] = 2,
    ACTIONS(976), 1,
      sym_OUTPUT,
    ACTIONS(655), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12245] = 2,
    ACTIONS(978), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(980), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [12257] = 2,
    STATE(340), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(647), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12269] = 2,
    ACTIONS(982), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(984), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [12281] = 2,
    ACTIONS(986), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(988), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [12293] = 4,
    ACTIONS(968), 1,
      anon_sym_COMMA,
    ACTIONS(992), 1,
      anon_sym_SEMI,
    STATE(340), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(990), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [12309] = 2,
    ACTIONS(994), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_server_database_schema_token1,
      aux_sym_id__token2,
    ACTIONS(996), 4,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
      aux_sym_id__token1,
  [12321] = 7,
    ACTIONS(137), 1,
      aux_sym_go_statement_token1,
    ACTIONS(173), 1,
      aux_sym_id__token1,
    ACTIONS(175), 1,
      aux_sym_id__token2,
    ACTIONS(259), 1,
      sym_string_lit,
    STATE(197), 1,
      sym_keyword,
    STATE(203), 1,
      sym_column_alias,
    STATE(258), 1,
      sym_id_,
  [12343] = 2,
    STATE(341), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(647), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12355] = 3,
    ACTIONS(1000), 1,
      sym_asc_,
    ACTIONS(1002), 1,
      sym_desc_,
    ACTIONS(998), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12368] = 1,
    ACTIONS(758), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12377] = 6,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1004), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(727), 1,
      sym_id_,
  [12396] = 6,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1006), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(645), 1,
      sym_id_,
  [12415] = 4,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(1008), 1,
      aux_sym_constant_token3,
    ACTIONS(1010), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(128), 2,
      sym_real_,
      sym_float_,
  [12430] = 1,
    ACTIONS(655), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12439] = 3,
    ACTIONS(1012), 1,
      anon_sym_COMMA,
    STATE(361), 1,
      aux_sym_expression_list__repeat1,
    ACTIONS(1015), 4,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12452] = 1,
    ACTIONS(734), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12461] = 4,
    ACTIONS(1019), 1,
      aux_sym_window_frame_preceding_token2,
    STATE(692), 1,
      sym_window_frame_bound,
    ACTIONS(1017), 2,
      aux_sym_constant_token3,
      aux_sym_window_frame_following_token1,
    STATE(489), 2,
      sym_window_frame_following,
      sym_window_frame_preceding,
  [12476] = 1,
    ACTIONS(738), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12485] = 3,
    ACTIONS(1021), 1,
      anon_sym_COMMA,
    STATE(367), 1,
      aux_sym_expression_list__repeat1,
    ACTIONS(1023), 4,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12498] = 6,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(1025), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1027), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(120), 1,
      sym_id_,
  [12517] = 3,
    ACTIONS(1021), 1,
      anon_sym_COMMA,
    STATE(361), 1,
      aux_sym_expression_list__repeat1,
    ACTIONS(1029), 4,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12530] = 5,
    ACTIONS(858), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(1031), 1,
      anon_sym_RPAREN,
    STATE(456), 1,
      sym_order_by_clause,
    STATE(658), 1,
      sym_row_or_range_clause,
    ACTIONS(860), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12547] = 5,
    ACTIONS(1019), 1,
      aux_sym_window_frame_preceding_token2,
    ACTIONS(1035), 1,
      aux_sym_window_frame_extent_token1,
    STATE(647), 1,
      sym_window_frame_extent,
    STATE(654), 1,
      sym_window_frame_preceding,
    ACTIONS(1033), 2,
      aux_sym_constant_token3,
      aux_sym_window_frame_following_token1,
  [12564] = 5,
    ACTIONS(1037), 1,
      aux_sym_over__token1,
    ACTIONS(1039), 1,
      aux_sym_ignore_nulls__token1,
    ACTIONS(1041), 1,
      aux_sym_respect_nulls__token1,
    STATE(166), 1,
      sym_over_clause,
    STATE(528), 2,
      sym_ignore_nulls_,
      sym_respect_nulls_,
  [12581] = 6,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    ACTIONS(431), 1,
      aux_sym_id__token1,
    ACTIONS(433), 1,
      aux_sym_id__token2,
    ACTIONS(1043), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(85), 1,
      sym_keyword,
    STATE(101), 1,
      sym_id_,
  [12600] = 1,
    ACTIONS(742), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12609] = 1,
    ACTIONS(746), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12618] = 6,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(1025), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1045), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(115), 1,
      sym_id_,
  [12637] = 6,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(1025), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1047), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(117), 1,
      sym_id_,
  [12656] = 6,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(509), 1,
      sym_data_type,
    STATE(653), 1,
      sym_id_,
  [12675] = 6,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    ACTIONS(431), 1,
      aux_sym_id__token1,
    ACTIONS(433), 1,
      aux_sym_id__token2,
    ACTIONS(1049), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(85), 1,
      sym_keyword,
    STATE(98), 1,
      sym_id_,
  [12694] = 5,
    ACTIONS(858), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(1051), 1,
      anon_sym_RPAREN,
    STATE(437), 1,
      sym_order_by_clause,
    STATE(615), 1,
      sym_row_or_range_clause,
    ACTIONS(860), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12711] = 5,
    ACTIONS(754), 1,
      aux_sym_over__token1,
    ACTIONS(1039), 1,
      aux_sym_ignore_nulls__token1,
    ACTIONS(1041), 1,
      aux_sym_respect_nulls__token1,
    STATE(328), 1,
      sym_over_clause,
    STATE(534), 2,
      sym_ignore_nulls_,
      sym_respect_nulls_,
  [12728] = 6,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    ACTIONS(431), 1,
      aux_sym_id__token1,
    ACTIONS(433), 1,
      aux_sym_id__token2,
    ACTIONS(1053), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(85), 1,
      sym_keyword,
    STATE(96), 1,
      sym_id_,
  [12747] = 6,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    ACTIONS(431), 1,
      aux_sym_id__token1,
    ACTIONS(433), 1,
      aux_sym_id__token2,
    ACTIONS(1055), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(85), 1,
      sym_keyword,
    STATE(90), 1,
      sym_id_,
  [12766] = 4,
    ACTIONS(129), 1,
      aux_sym_real__token1,
    ACTIONS(1057), 1,
      aux_sym_constant_token3,
    ACTIONS(1059), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(336), 2,
      sym_real_,
      sym_float_,
  [12781] = 4,
    ACTIONS(1019), 1,
      aux_sym_window_frame_preceding_token2,
    STATE(718), 1,
      sym_window_frame_bound,
    ACTIONS(1017), 2,
      aux_sym_constant_token3,
      aux_sym_window_frame_following_token1,
    STATE(489), 2,
      sym_window_frame_following,
      sym_window_frame_preceding,
  [12796] = 5,
    ACTIONS(1039), 1,
      aux_sym_ignore_nulls__token1,
    ACTIONS(1041), 1,
      aux_sym_respect_nulls__token1,
    ACTIONS(1061), 1,
      aux_sym_over__token1,
    STATE(241), 1,
      sym_over_clause,
    STATE(531), 2,
      sym_ignore_nulls_,
      sym_respect_nulls_,
  [12813] = 6,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1063), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(568), 1,
      sym_id_,
  [12832] = 6,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(1025), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1065), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(112), 1,
      sym_id_,
  [12851] = 6,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(1025), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1067), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(111), 1,
      sym_id_,
  [12870] = 4,
    ACTIONS(171), 1,
      aux_sym_real__token1,
    ACTIONS(1069), 1,
      aux_sym_constant_token3,
    ACTIONS(1071), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(224), 2,
      sym_real_,
      sym_float_,
  [12885] = 1,
    ACTIONS(697), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12894] = 5,
    ACTIONS(858), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(1073), 1,
      anon_sym_RPAREN,
    STATE(448), 1,
      sym_order_by_clause,
    STATE(591), 1,
      sym_row_or_range_clause,
    ACTIONS(860), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12911] = 1,
    ACTIONS(1075), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_asc_,
      sym_desc_,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [12920] = 6,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    ACTIONS(431), 1,
      aux_sym_id__token1,
    ACTIONS(433), 1,
      aux_sym_id__token2,
    ACTIONS(1077), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(85), 1,
      sym_keyword,
    STATE(93), 1,
      sym_id_,
  [12939] = 1,
    ACTIONS(681), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      sym_execute,
      sym_select,
  [12948] = 5,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    ACTIONS(431), 1,
      aux_sym_id__token1,
    ACTIONS(433), 1,
      aux_sym_id__token2,
    STATE(85), 1,
      sym_keyword,
    STATE(109), 1,
      sym_id_,
  [12964] = 5,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(614), 1,
      sym_id_,
  [12980] = 5,
    ACTIONS(842), 1,
      aux_sym_go_statement_token1,
    ACTIONS(844), 1,
      aux_sym_id__token1,
    ACTIONS(846), 1,
      aux_sym_id__token2,
    STATE(304), 1,
      sym_id_,
    STATE(333), 1,
      sym_keyword,
  [12996] = 5,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(634), 1,
      sym_id_,
  [13012] = 5,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(687), 1,
      sym_id_,
  [13028] = 5,
    ACTIONS(842), 1,
      aux_sym_go_statement_token1,
    ACTIONS(844), 1,
      aux_sym_id__token1,
    ACTIONS(846), 1,
      aux_sym_id__token2,
    STATE(309), 1,
      sym_id_,
    STATE(333), 1,
      sym_keyword,
  [13044] = 5,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(627), 1,
      sym_id_,
  [13060] = 5,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    ACTIONS(431), 1,
      aux_sym_id__token1,
    ACTIONS(433), 1,
      aux_sym_id__token2,
    STATE(85), 1,
      sym_keyword,
    STATE(107), 1,
      sym_id_,
  [13076] = 5,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(676), 1,
      sym_id_,
  [13092] = 5,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(671), 1,
      sym_id_,
  [13108] = 3,
    ACTIONS(1079), 1,
      anon_sym_COMMA,
    STATE(404), 1,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(1082), 3,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [13120] = 5,
    ACTIONS(842), 1,
      aux_sym_go_statement_token1,
    ACTIONS(844), 1,
      aux_sym_id__token1,
    ACTIONS(846), 1,
      aux_sym_id__token2,
    STATE(311), 1,
      sym_id_,
    STATE(333), 1,
      sym_keyword,
  [13136] = 3,
    ACTIONS(1084), 1,
      anon_sym_COMMA,
    STATE(429), 1,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(1086), 3,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [13148] = 5,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(1025), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(132), 1,
      sym_id_,
  [13164] = 5,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    ACTIONS(431), 1,
      aux_sym_id__token1,
    ACTIONS(433), 1,
      aux_sym_id__token2,
    STATE(85), 1,
      sym_keyword,
    STATE(100), 1,
      sym_id_,
  [13180] = 5,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    ACTIONS(431), 1,
      aux_sym_id__token1,
    ACTIONS(433), 1,
      aux_sym_id__token2,
    STATE(84), 1,
      sym_id_,
    STATE(85), 1,
      sym_keyword,
  [13196] = 5,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(1025), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(124), 1,
      sym_id_,
  [13212] = 5,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(626), 1,
      sym_id_,
  [13228] = 5,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(1025), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(153), 1,
      sym_id_,
  [13244] = 5,
    ACTIONS(842), 1,
      aux_sym_go_statement_token1,
    ACTIONS(844), 1,
      aux_sym_id__token1,
    ACTIONS(846), 1,
      aux_sym_id__token2,
    STATE(286), 1,
      sym_id_,
    STATE(333), 1,
      sym_keyword,
  [13260] = 5,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(1025), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(131), 1,
      sym_id_,
  [13276] = 5,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(1025), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(148), 1,
      sym_id_,
  [13292] = 5,
    ACTIONS(842), 1,
      aux_sym_go_statement_token1,
    ACTIONS(844), 1,
      aux_sym_id__token1,
    ACTIONS(846), 1,
      aux_sym_id__token2,
    STATE(333), 1,
      sym_keyword,
    STATE(335), 1,
      sym_id_,
  [13308] = 5,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    ACTIONS(431), 1,
      aux_sym_id__token1,
    ACTIONS(433), 1,
      aux_sym_id__token2,
    STATE(85), 1,
      sym_keyword,
    STATE(97), 1,
      sym_id_,
  [13324] = 5,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(556), 1,
      sym_id_,
  [13340] = 5,
    ACTIONS(21), 1,
      aux_sym_go_statement_token1,
    ACTIONS(65), 1,
      aux_sym_id__token1,
    ACTIONS(67), 1,
      aux_sym_id__token2,
    STATE(69), 1,
      sym_id_,
    STATE(110), 1,
      sym_keyword,
  [13356] = 1,
    ACTIONS(1015), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [13364] = 5,
    ACTIONS(95), 1,
      aux_sym_go_statement_token1,
    ACTIONS(131), 1,
      aux_sym_id__token1,
    ACTIONS(133), 1,
      aux_sym_id__token2,
    STATE(83), 1,
      sym_keyword,
    STATE(391), 1,
      sym_id_,
  [13380] = 5,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(1025), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(168), 1,
      sym_id_,
  [13396] = 5,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(1025), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(170), 1,
      sym_id_,
  [13412] = 5,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    ACTIONS(431), 1,
      aux_sym_id__token1,
    ACTIONS(433), 1,
      aux_sym_id__token2,
    STATE(85), 1,
      sym_keyword,
    STATE(108), 1,
      sym_id_,
  [13428] = 5,
    ACTIONS(842), 1,
      aux_sym_go_statement_token1,
    ACTIONS(844), 1,
      aux_sym_id__token1,
    ACTIONS(846), 1,
      aux_sym_id__token2,
    STATE(306), 1,
      sym_id_,
    STATE(333), 1,
      sym_keyword,
  [13444] = 5,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(1025), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(136), 1,
      sym_id_,
  [13460] = 5,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    ACTIONS(431), 1,
      aux_sym_id__token1,
    ACTIONS(433), 1,
      aux_sym_id__token2,
    STATE(85), 1,
      sym_keyword,
    STATE(89), 1,
      sym_id_,
  [13476] = 5,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    ACTIONS(431), 1,
      aux_sym_id__token1,
    ACTIONS(433), 1,
      aux_sym_id__token2,
    STATE(85), 1,
      sym_keyword,
    STATE(88), 1,
      sym_id_,
  [13492] = 3,
    ACTIONS(1084), 1,
      anon_sym_COMMA,
    STATE(404), 1,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(1088), 3,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [13504] = 5,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(563), 1,
      sym_id_,
  [13520] = 5,
    ACTIONS(842), 1,
      aux_sym_go_statement_token1,
    ACTIONS(844), 1,
      aux_sym_id__token1,
    ACTIONS(846), 1,
      aux_sym_id__token2,
    STATE(322), 1,
      sym_id_,
    STATE(333), 1,
      sym_keyword,
  [13536] = 5,
    ACTIONS(15), 1,
      aux_sym_id__token1,
    ACTIONS(17), 1,
      aux_sym_id__token2,
    ACTIONS(71), 1,
      aux_sym_go_statement_token1,
    STATE(76), 1,
      sym_keyword,
    STATE(691), 1,
      sym_id_,
  [13552] = 4,
    ACTIONS(856), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(858), 1,
      aux_sym_order_by_clause_token1,
    STATE(514), 1,
      sym_partition_by_clause,
    STATE(589), 1,
      sym_order_by_clause,
  [13565] = 4,
    ACTIONS(856), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(858), 1,
      aux_sym_order_by_clause_token1,
    STATE(508), 1,
      sym_partition_by_clause,
    STATE(613), 1,
      sym_order_by_clause,
  [13578] = 3,
    ACTIONS(827), 1,
      ts_builtin_sym_end,
    ACTIONS(1090), 1,
      aux_sym_go_statement_token1,
    STATE(435), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
  [13589] = 3,
    ACTIONS(1051), 1,
      anon_sym_RPAREN,
    STATE(615), 1,
      sym_row_or_range_clause,
    ACTIONS(860), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [13600] = 3,
    ACTIONS(1093), 1,
      anon_sym_RPAREN,
    STATE(617), 1,
      sym_row_or_range_clause,
    ACTIONS(860), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [13611] = 1,
    ACTIONS(1095), 4,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [13618] = 1,
    ACTIONS(1097), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [13625] = 1,
    ACTIONS(1099), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [13632] = 3,
    ACTIONS(171), 1,
      aux_sym_real__token1,
    ACTIONS(1069), 1,
      aux_sym_constant_token3,
    STATE(242), 2,
      sym_real_,
      sym_float_,
  [13643] = 4,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(429), 1,
      sym_string_lit,
    STATE(73), 1,
      sym_LOCAL_ID_,
    STATE(475), 1,
      sym_execute_var_string,
  [13656] = 1,
    ACTIONS(1101), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [13663] = 1,
    ACTIONS(1103), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [13670] = 4,
    ACTIONS(1105), 1,
      aux_sym_RESULT_SETS_token1,
    ACTIONS(1107), 1,
      sym_RECOMPILE,
    STATE(237), 1,
      sym_execute_option,
    STATE(520), 1,
      sym_RESULT_SETS,
  [13683] = 1,
    ACTIONS(1082), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [13690] = 4,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(429), 1,
      sym_string_lit,
    STATE(73), 1,
      sym_LOCAL_ID_,
    STATE(526), 1,
      sym_execute_var_string,
  [13703] = 3,
    ACTIONS(1109), 1,
      anon_sym_RPAREN,
    STATE(593), 1,
      sym_row_or_range_clause,
    ACTIONS(860), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [13714] = 3,
    ACTIONS(1073), 1,
      anon_sym_RPAREN,
    STATE(591), 1,
      sym_row_or_range_clause,
    ACTIONS(860), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [13725] = 4,
    ACTIONS(1105), 1,
      aux_sym_RESULT_SETS_token1,
    ACTIONS(1107), 1,
      sym_RECOMPILE,
    STATE(279), 1,
      sym_execute_option,
    STATE(520), 1,
      sym_RESULT_SETS,
  [13738] = 4,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(429), 1,
      sym_string_lit,
    STATE(73), 1,
      sym_LOCAL_ID_,
    STATE(469), 1,
      sym_execute_var_string,
  [13751] = 3,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    ACTIONS(1111), 1,
      aux_sym_go_statement_token1,
    STATE(435), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
  [13762] = 4,
    ACTIONS(1105), 1,
      aux_sym_RESULT_SETS_token1,
    ACTIONS(1107), 1,
      sym_RECOMPILE,
    STATE(218), 1,
      sym_execute_option,
    STATE(520), 1,
      sym_RESULT_SETS,
  [13775] = 1,
    ACTIONS(990), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [13782] = 3,
    ACTIONS(1113), 1,
      aux_sym_constant_token3,
    STATE(522), 1,
      sym_integer,
    ACTIONS(409), 2,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
  [13793] = 3,
    ACTIONS(1115), 1,
      anon_sym_RPAREN,
    STATE(697), 1,
      sym_row_or_range_clause,
    ACTIONS(860), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [13804] = 3,
    ACTIONS(1111), 1,
      aux_sym_go_statement_token1,
    ACTIONS(1117), 1,
      ts_builtin_sym_end,
    STATE(435), 2,
      sym_go_statement,
      aux_sym_tsql_file_repeat2,
  [13815] = 1,
    ACTIONS(966), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [13822] = 3,
    ACTIONS(63), 1,
      aux_sym_real__token1,
    ACTIONS(1008), 1,
      aux_sym_constant_token3,
    STATE(147), 2,
      sym_real_,
      sym_float_,
  [13833] = 3,
    ACTIONS(129), 1,
      aux_sym_real__token1,
    ACTIONS(1057), 1,
      aux_sym_constant_token3,
    STATE(323), 2,
      sym_real_,
      sym_float_,
  [13844] = 4,
    ACTIONS(1105), 1,
      aux_sym_RESULT_SETS_token1,
    ACTIONS(1107), 1,
      sym_RECOMPILE,
    STATE(254), 1,
      sym_execute_option,
    STATE(520), 1,
      sym_RESULT_SETS,
  [13857] = 3,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    ACTIONS(1119), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    ACTIONS(341), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13868] = 1,
    ACTIONS(1121), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      sym_execute,
      sym_select,
  [13875] = 4,
    ACTIONS(856), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(858), 1,
      aux_sym_order_by_clause_token1,
    STATE(515), 1,
      sym_partition_by_clause,
    STATE(642), 1,
      sym_order_by_clause,
  [13888] = 4,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    ACTIONS(429), 1,
      sym_string_lit,
    STATE(73), 1,
      sym_LOCAL_ID_,
    STATE(75), 1,
      sym_execute_var_string,
  [13901] = 4,
    ACTIONS(1105), 1,
      aux_sym_RESULT_SETS_token1,
    ACTIONS(1107), 1,
      sym_RECOMPILE,
    STATE(230), 1,
      sym_execute_option,
    STATE(520), 1,
      sym_RESULT_SETS,
  [13914] = 3,
    ACTIONS(1031), 1,
      anon_sym_RPAREN,
    STATE(658), 1,
      sym_row_or_range_clause,
    ACTIONS(860), 2,
      aux_sym_row_or_range_clause_token1,
      aux_sym_row_or_range_clause_token2,
  [13925] = 3,
    ACTIONS(1029), 1,
      anon_sym_RPAREN,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    STATE(480), 1,
      aux_sym_expression_list__repeat1,
  [13935] = 3,
    ACTIONS(1125), 1,
      anon_sym_COMMA,
    ACTIONS(1127), 1,
      anon_sym_RPAREN,
    STATE(484), 1,
      aux_sym_execute_body_repeat2,
  [13945] = 3,
    ACTIONS(1129), 1,
      anon_sym_COMMA,
    ACTIONS(1132), 1,
      anon_sym_RPAREN,
    STATE(470), 1,
      aux_sym_execute_body_repeat2,
  [13955] = 2,
    ACTIONS(1134), 1,
      aux_sym_constant_token3,
    ACTIONS(1136), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [13963] = 3,
    ACTIONS(1138), 1,
      anon_sym_RPAREN,
    ACTIONS(1140), 1,
      aux_sym_partition_by_clause_token1,
    STATE(621), 1,
      sym_partition_by_clause,
  [13973] = 3,
    ACTIONS(1140), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(1142), 1,
      anon_sym_RPAREN,
    STATE(723), 1,
      sym_partition_by_clause,
  [13983] = 3,
    ACTIONS(1144), 1,
      anon_sym_COMMA,
    ACTIONS(1146), 1,
      anon_sym_RPAREN,
    STATE(483), 1,
      aux_sym_prepared_stmt_vardecls_repeat1,
  [13993] = 3,
    ACTIONS(1125), 1,
      anon_sym_COMMA,
    ACTIONS(1148), 1,
      anon_sym_RPAREN,
    STATE(488), 1,
      aux_sym_execute_body_repeat2,
  [14003] = 1,
    ACTIONS(1150), 3,
      aux_sym_over__token1,
      aux_sym_ignore_nulls__token1,
      aux_sym_respect_nulls__token1,
  [14009] = 1,
    ACTIONS(1152), 3,
      aux_sym_over__token1,
      aux_sym_ignore_nulls__token1,
      aux_sym_respect_nulls__token1,
  [14015] = 2,
    ACTIONS(1154), 1,
      aux_sym_constant_token3,
    ACTIONS(1156), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [14023] = 3,
    ACTIONS(1023), 1,
      anon_sym_RPAREN,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    STATE(468), 1,
      aux_sym_expression_list__repeat1,
  [14033] = 3,
    ACTIONS(1015), 1,
      anon_sym_RPAREN,
    ACTIONS(1158), 1,
      anon_sym_COMMA,
    STATE(480), 1,
      aux_sym_expression_list__repeat1,
  [14043] = 3,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(1161), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
    STATE(80), 1,
      sym_udt_method_arguments,
  [14053] = 1,
    ACTIONS(1163), 3,
      aux_sym_over__token1,
      aux_sym_ignore_nulls__token1,
      aux_sym_respect_nulls__token1,
  [14059] = 3,
    ACTIONS(1165), 1,
      anon_sym_COMMA,
    ACTIONS(1168), 1,
      anon_sym_RPAREN,
    STATE(483), 1,
      aux_sym_prepared_stmt_vardecls_repeat1,
  [14069] = 3,
    ACTIONS(1125), 1,
      anon_sym_COMMA,
    ACTIONS(1170), 1,
      anon_sym_RPAREN,
    STATE(470), 1,
      aux_sym_execute_body_repeat2,
  [14079] = 3,
    ACTIONS(1144), 1,
      anon_sym_COMMA,
    ACTIONS(1172), 1,
      anon_sym_RPAREN,
    STATE(474), 1,
      aux_sym_prepared_stmt_vardecls_repeat1,
  [14089] = 3,
    ACTIONS(1140), 1,
      aux_sym_partition_by_clause_token1,
    ACTIONS(1174), 1,
      anon_sym_RPAREN,
    STATE(596), 1,
      sym_partition_by_clause,
  [14099] = 2,
    ACTIONS(1176), 1,
      aux_sym_constant_token3,
    ACTIONS(1178), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [14107] = 3,
    ACTIONS(1125), 1,
      anon_sym_COMMA,
    ACTIONS(1180), 1,
      anon_sym_RPAREN,
    STATE(470), 1,
      aux_sym_execute_body_repeat2,
  [14117] = 1,
    ACTIONS(1182), 2,
      anon_sym_RPAREN,
      aux_sym_window_frame_extent_token2,
  [14122] = 2,
    ACTIONS(1061), 1,
      aux_sym_over__token1,
    STATE(210), 1,
      sym_over_clause,
  [14129] = 1,
    ACTIONS(972), 2,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
  [14134] = 2,
    ACTIONS(1037), 1,
      aux_sym_over__token1,
    STATE(156), 1,
      sym_over_clause,
  [14141] = 1,
    ACTIONS(1184), 2,
      anon_sym_RPAREN,
      aux_sym_window_frame_extent_token2,
  [14146] = 2,
    ACTIONS(1186), 1,
      aux_sym_over__token1,
    STATE(610), 1,
      sym_over_,
  [14153] = 2,
    ACTIONS(1188), 1,
      aux_sym_within_group__token1,
    STATE(722), 1,
      sym_within_group_,
  [14160] = 2,
    ACTIONS(1188), 1,
      aux_sym_within_group__token1,
    STATE(720), 1,
      sym_within_group_,
  [14167] = 2,
    ACTIONS(858), 1,
      aux_sym_order_by_clause_token1,
    STATE(708), 1,
      sym_order_by_clause,
  [14174] = 2,
    ACTIONS(858), 1,
      aux_sym_order_by_clause_token1,
    STATE(700), 1,
      sym_order_by_clause,
  [14181] = 2,
    ACTIONS(1186), 1,
      aux_sym_over__token1,
    STATE(689), 1,
      sym_over_,
  [14188] = 2,
    ACTIONS(1186), 1,
      aux_sym_over__token1,
    STATE(674), 1,
      sym_over_,
  [14195] = 2,
    ACTIONS(1186), 1,
      aux_sym_over__token1,
    STATE(661), 1,
      sym_over_,
  [14202] = 2,
    ACTIONS(1190), 1,
      anon_sym_LPAREN,
    STATE(370), 1,
      sym_lag_lead_args,
  [14209] = 2,
    ACTIONS(1192), 1,
      aux_sym_window_frame_following_token2,
    ACTIONS(1194), 1,
      aux_sym_window_frame_preceding_token1,
  [14216] = 1,
    ACTIONS(1196), 2,
      anon_sym_RPAREN,
      aux_sym_window_frame_extent_token2,
  [14221] = 2,
    ACTIONS(1198), 1,
      sym_getroot_,
    ACTIONS(1200), 1,
      sym_parse_,
  [14228] = 2,
    ACTIONS(1186), 1,
      aux_sym_over__token1,
    STATE(641), 1,
      sym_over_,
  [14235] = 2,
    ACTIONS(1202), 1,
      sym_getroot_,
    ACTIONS(1204), 1,
      sym_parse_,
  [14242] = 2,
    ACTIONS(858), 1,
      aux_sym_order_by_clause_token1,
    STATE(616), 1,
      sym_order_by_clause,
  [14249] = 1,
    ACTIONS(1206), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14254] = 2,
    ACTIONS(1208), 1,
      aux_sym_pstmt_vardecl_token1,
    STATE(519), 1,
      sym_pstmt_vardecl,
  [14261] = 2,
    ACTIONS(69), 1,
      aux_sym_pstmt_vardecl_token1,
    STATE(74), 1,
      sym_LOCAL_ID_,
  [14268] = 2,
    ACTIONS(1210), 1,
      sym_getroot_,
    ACTIONS(1212), 1,
      sym_parse_,
  [14275] = 2,
    ACTIONS(1190), 1,
      anon_sym_LPAREN,
    STATE(379), 1,
      sym_lag_lead_args,
  [14282] = 2,
    ACTIONS(858), 1,
      aux_sym_order_by_clause_token1,
    STATE(592), 1,
      sym_order_by_clause,
  [14289] = 2,
    ACTIONS(858), 1,
      aux_sym_order_by_clause_token1,
    STATE(683), 1,
      sym_order_by_clause,
  [14296] = 2,
    ACTIONS(858), 1,
      aux_sym_order_by_clause_token1,
    STATE(677), 1,
      sym_order_by_clause,
  [14303] = 2,
    ACTIONS(1208), 1,
      aux_sym_pstmt_vardecl_token1,
    STATE(485), 1,
      sym_pstmt_vardecl,
  [14310] = 2,
    ACTIONS(1214), 1,
      aux_sym_constant_token3,
    STATE(564), 1,
      sym_decimal_,
  [14317] = 1,
    ACTIONS(1168), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14322] = 1,
    ACTIONS(1216), 2,
      sym_NONE,
      sym_UNDEFINED,
  [14327] = 2,
    ACTIONS(1190), 1,
      anon_sym_LPAREN,
    STATE(384), 1,
      sym_lag_lead_args,
  [14334] = 1,
    ACTIONS(986), 2,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
  [14339] = 1,
    ACTIONS(1218), 2,
      sym_NONE,
      sym_UNDEFINED,
  [14344] = 1,
    ACTIONS(1220), 2,
      sym_LOGIN,
      sym_USER,
  [14349] = 1,
    ACTIONS(1222), 2,
      sym_LOGIN,
      sym_USER,
  [14354] = 1,
    ACTIONS(1132), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14359] = 2,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    ACTIONS(1226), 1,
      anon_sym_RPAREN,
  [14366] = 2,
    ACTIONS(1037), 1,
      aux_sym_over__token1,
    STATE(146), 1,
      sym_over_clause,
  [14373] = 2,
    ACTIONS(754), 1,
      aux_sym_over__token1,
    STATE(298), 1,
      sym_over_clause,
  [14380] = 2,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(1161), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [14387] = 2,
    ACTIONS(1061), 1,
      aux_sym_over__token1,
    STATE(244), 1,
      sym_over_clause,
  [14394] = 2,
    ACTIONS(754), 1,
      aux_sym_over__token1,
    STATE(303), 1,
      sym_over_clause,
  [14401] = 1,
    ACTIONS(1228), 2,
      sym_LOGIN,
      sym_USER,
  [14406] = 2,
    ACTIONS(754), 1,
      aux_sym_over__token1,
    STATE(313), 1,
      sym_over_clause,
  [14413] = 1,
    ACTIONS(1230), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14418] = 2,
    ACTIONS(754), 1,
      aux_sym_over__token1,
    STATE(294), 1,
      sym_over_clause,
  [14425] = 2,
    ACTIONS(1037), 1,
      aux_sym_over__token1,
    STATE(151), 1,
      sym_over_clause,
  [14432] = 2,
    ACTIONS(1061), 1,
      aux_sym_over__token1,
    STATE(231), 1,
      sym_over_clause,
  [14439] = 2,
    ACTIONS(1186), 1,
      aux_sym_over__token1,
    STATE(560), 1,
      sym_over_,
  [14446] = 2,
    ACTIONS(1232), 1,
      aux_sym_pstmt_vardecl_token1,
    STATE(389), 1,
      sym_execute_statement_arg_named,
  [14453] = 2,
    ACTIONS(1037), 1,
      aux_sym_over__token1,
    STATE(140), 1,
      sym_over_clause,
  [14460] = 2,
    ACTIONS(1234), 1,
      anon_sym_COMMA,
    ACTIONS(1236), 1,
      anon_sym_RPAREN,
  [14467] = 2,
    ACTIONS(1061), 1,
      aux_sym_over__token1,
    STATE(214), 1,
      sym_over_clause,
  [14474] = 2,
    ACTIONS(1188), 1,
      aux_sym_within_group__token1,
    STATE(551), 1,
      sym_within_group_,
  [14481] = 2,
    ACTIONS(1238), 1,
      aux_sym_pstmt_vardecl_token1,
    STATE(260), 1,
      sym_execute_statement_arg_named,
  [14488] = 1,
    ACTIONS(1240), 1,
      anon_sym_RPAREN,
  [14492] = 1,
    ACTIONS(1242), 1,
      anon_sym_RPAREN,
  [14496] = 1,
    ACTIONS(1031), 1,
      anon_sym_RPAREN,
  [14500] = 1,
    ACTIONS(1244), 1,
      aux_sym_partition_by_clause_token2,
  [14504] = 1,
    ACTIONS(1246), 1,
      aux_sym_partition_by_clause_token2,
  [14508] = 1,
    ACTIONS(1248), 1,
      anon_sym_LPAREN,
  [14512] = 1,
    ACTIONS(1250), 1,
      aux_sym_within_group__token2,
  [14516] = 1,
    ACTIONS(1252), 1,
      anon_sym_RPAREN,
  [14520] = 1,
    ACTIONS(1254), 1,
      anon_sym_RPAREN,
  [14524] = 1,
    ACTIONS(1256), 1,
      anon_sym_EQ,
  [14528] = 1,
    ACTIONS(403), 1,
      anon_sym_LPAREN,
  [14532] = 1,
    ACTIONS(1258), 1,
      anon_sym_RPAREN,
  [14536] = 1,
    ACTIONS(1260), 1,
      aux_sym_over__token1,
  [14540] = 1,
    ACTIONS(1262), 1,
      aux_sym_over__token1,
  [14544] = 1,
    ACTIONS(1264), 1,
      anon_sym_LPAREN,
  [14548] = 1,
    ACTIONS(1266), 1,
      anon_sym_LPAREN,
  [14552] = 1,
    ACTIONS(1268), 1,
      anon_sym_RPAREN,
  [14556] = 1,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
  [14560] = 1,
    ACTIONS(1270), 1,
      anon_sym_RPAREN,
  [14564] = 1,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
  [14568] = 1,
    ACTIONS(940), 1,
      anon_sym_EQ,
  [14572] = 1,
    ACTIONS(1272), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [14576] = 1,
    ACTIONS(1274), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [14580] = 1,
    ACTIONS(1276), 1,
      anon_sym_LPAREN,
  [14584] = 1,
    ACTIONS(1278), 1,
      aux_sym_constant_token3,
  [14588] = 1,
    ACTIONS(1280), 1,
      anon_sym_LPAREN,
  [14592] = 1,
    ACTIONS(1282), 1,
      aux_sym_real__token2,
  [14596] = 1,
    ACTIONS(1284), 1,
      anon_sym_RPAREN,
  [14600] = 1,
    ACTIONS(1286), 1,
      aux_sym_constant_token3,
  [14604] = 1,
    ACTIONS(1288), 1,
      anon_sym_RPAREN,
  [14608] = 1,
    ACTIONS(1290), 1,
      anon_sym_RPAREN,
  [14612] = 1,
    ACTIONS(1292), 1,
      anon_sym_RPAREN,
  [14616] = 1,
    ACTIONS(1294), 1,
      anon_sym_RPAREN,
  [14620] = 1,
    ACTIONS(1296), 1,
      anon_sym_RPAREN,
  [14624] = 1,
    ACTIONS(1298), 1,
      anon_sym_RPAREN,
  [14628] = 1,
    ACTIONS(1300), 1,
      anon_sym_RPAREN,
  [14632] = 1,
    ACTIONS(1302), 1,
      anon_sym_RPAREN,
  [14636] = 1,
    ACTIONS(1304), 1,
      anon_sym_RPAREN,
  [14640] = 1,
    ACTIONS(1306), 1,
      aux_sym_partition_by_clause_token2,
  [14644] = 1,
    ACTIONS(1308), 1,
      anon_sym_RPAREN,
  [14648] = 1,
    ACTIONS(1310), 1,
      anon_sym_RPAREN,
  [14652] = 1,
    ACTIONS(1073), 1,
      anon_sym_RPAREN,
  [14656] = 1,
    ACTIONS(1312), 1,
      anon_sym_RPAREN,
  [14660] = 1,
    ACTIONS(1314), 1,
      anon_sym_RPAREN,
  [14664] = 1,
    ACTIONS(1316), 1,
      anon_sym_RPAREN,
  [14668] = 1,
    ACTIONS(1109), 1,
      anon_sym_RPAREN,
  [14672] = 1,
    ACTIONS(1318), 1,
      anon_sym_RPAREN,
  [14676] = 1,
    ACTIONS(1320), 1,
      anon_sym_RPAREN,
  [14680] = 1,
    ACTIONS(1322), 1,
      anon_sym_RPAREN,
  [14684] = 1,
    ACTIONS(1324), 1,
      anon_sym_RPAREN,
  [14688] = 1,
    ACTIONS(1326), 1,
      anon_sym_RPAREN,
  [14692] = 1,
    ACTIONS(1328), 1,
      aux_sym_ignore_nulls__token2,
  [14696] = 1,
    ACTIONS(1330), 1,
      aux_sym_ignore_nulls__token2,
  [14700] = 1,
    ACTIONS(1332), 1,
      anon_sym_LPAREN,
  [14704] = 1,
    ACTIONS(799), 1,
      aux_sym_real__token2,
  [14708] = 1,
    ACTIONS(1334), 1,
      aux_sym_constant_token3,
  [14712] = 1,
    ACTIONS(1336), 1,
      anon_sym_RPAREN,
  [14716] = 1,
    ACTIONS(1338), 1,
      anon_sym_RPAREN,
  [14720] = 1,
    ACTIONS(1340), 1,
      anon_sym_RPAREN,
  [14724] = 1,
    ACTIONS(1342), 1,
      anon_sym_RPAREN,
  [14728] = 1,
    ACTIONS(1344), 1,
      anon_sym_RPAREN,
  [14732] = 1,
    ACTIONS(1346), 1,
      anon_sym_RPAREN,
  [14736] = 1,
    ACTIONS(1348), 1,
      anon_sym_RPAREN,
  [14740] = 1,
    ACTIONS(1350), 1,
      anon_sym_RPAREN,
  [14744] = 1,
    ACTIONS(1352), 1,
      anon_sym_LPAREN,
  [14748] = 1,
    ACTIONS(1051), 1,
      anon_sym_RPAREN,
  [14752] = 1,
    ACTIONS(1354), 1,
      anon_sym_RPAREN,
  [14756] = 1,
    ACTIONS(1356), 1,
      anon_sym_RPAREN,
  [14760] = 1,
    ACTIONS(1358), 1,
      anon_sym_LPAREN,
  [14764] = 1,
    ACTIONS(1093), 1,
      anon_sym_RPAREN,
  [14768] = 1,
    ACTIONS(1360), 1,
      anon_sym_RPAREN,
  [14772] = 1,
    ACTIONS(1362), 1,
      anon_sym_RPAREN,
  [14776] = 1,
    ACTIONS(1364), 1,
      anon_sym_RPAREN,
  [14780] = 1,
    ACTIONS(1366), 1,
      anon_sym_RPAREN,
  [14784] = 1,
    ACTIONS(1368), 1,
      anon_sym_LPAREN,
  [14788] = 1,
    ACTIONS(1370), 1,
      anon_sym_RPAREN,
  [14792] = 1,
    ACTIONS(1372), 1,
      anon_sym_RPAREN,
  [14796] = 1,
    ACTIONS(1374), 1,
      anon_sym_LPAREN,
  [14800] = 1,
    ACTIONS(1376), 1,
      anon_sym_LPAREN,
  [14804] = 1,
    ACTIONS(1378), 1,
      aux_sym_constant_token3,
  [14808] = 1,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
  [14812] = 1,
    ACTIONS(1380), 1,
      anon_sym_LPAREN,
  [14816] = 1,
    ACTIONS(1382), 1,
      anon_sym_RPAREN,
  [14820] = 1,
    ACTIONS(1384), 1,
      anon_sym_LPAREN,
  [14824] = 1,
    ACTIONS(1386), 1,
      anon_sym_LPAREN,
  [14828] = 1,
    ACTIONS(1388), 1,
      anon_sym_RPAREN,
  [14832] = 1,
    ACTIONS(1390), 1,
      anon_sym_RPAREN,
  [14836] = 1,
    ACTIONS(1392), 1,
      aux_sym_RESULT_SETS_token2,
  [14840] = 1,
    ACTIONS(419), 1,
      anon_sym_LPAREN,
  [14844] = 1,
    ACTIONS(1394), 1,
      sym_string_lit,
  [14848] = 1,
    ACTIONS(1396), 1,
      anon_sym_EQ,
  [14852] = 1,
    ACTIONS(1398), 1,
      aux_sym_real__token2,
  [14856] = 1,
    ACTIONS(1400), 1,
      anon_sym_LPAREN,
  [14860] = 1,
    ACTIONS(1402), 1,
      anon_sym_COMMA,
  [14864] = 1,
    ACTIONS(1404), 1,
      anon_sym_RPAREN,
  [14868] = 1,
    ACTIONS(1406), 1,
      anon_sym_LPAREN,
  [14872] = 1,
    ACTIONS(1408), 1,
      anon_sym_RPAREN,
  [14876] = 1,
    ACTIONS(1410), 1,
      anon_sym_LPAREN,
  [14880] = 1,
    ACTIONS(1194), 1,
      aux_sym_window_frame_preceding_token1,
  [14884] = 1,
    ACTIONS(1412), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [14888] = 1,
    ACTIONS(1194), 1,
      aux_sym_window_frame_preceding_token3,
  [14892] = 1,
    ACTIONS(1414), 1,
      anon_sym_RPAREN,
  [14896] = 1,
    ACTIONS(1416), 1,
      anon_sym_RPAREN,
  [14900] = 1,
    ACTIONS(1418), 1,
      anon_sym_LPAREN,
  [14904] = 1,
    ACTIONS(1420), 1,
      anon_sym_LPAREN,
  [14908] = 1,
    ACTIONS(1422), 1,
      anon_sym_RPAREN,
  [14912] = 1,
    ACTIONS(1424), 1,
      anon_sym_RPAREN,
  [14916] = 1,
    ACTIONS(1426), 1,
      anon_sym_LPAREN,
  [14920] = 1,
    ACTIONS(1428), 1,
      anon_sym_RPAREN,
  [14924] = 1,
    ACTIONS(1430), 1,
      aux_sym_constant_token3,
  [14928] = 1,
    ACTIONS(1432), 1,
      anon_sym_LPAREN,
  [14932] = 1,
    ACTIONS(1434), 1,
      aux_sym_execute_body_token1,
  [14936] = 1,
    ACTIONS(1115), 1,
      anon_sym_RPAREN,
  [14940] = 1,
    ACTIONS(1436), 1,
      anon_sym_LPAREN,
  [14944] = 1,
    ACTIONS(1438), 1,
      anon_sym_LPAREN,
  [14948] = 1,
    ACTIONS(1440), 1,
      anon_sym_LPAREN,
  [14952] = 1,
    ACTIONS(1442), 1,
      anon_sym_LPAREN,
  [14956] = 1,
    ACTIONS(1444), 1,
      anon_sym_LPAREN,
  [14960] = 1,
    ACTIONS(1446), 1,
      anon_sym_LPAREN,
  [14964] = 1,
    ACTIONS(1448), 1,
      anon_sym_LPAREN,
  [14968] = 1,
    ACTIONS(1450), 1,
      anon_sym_LPAREN,
  [14972] = 1,
    ACTIONS(1452), 1,
      sym_string_lit,
  [14976] = 1,
    ACTIONS(1454), 1,
      anon_sym_LPAREN,
  [14980] = 1,
    ACTIONS(1456), 1,
      anon_sym_LPAREN,
  [14984] = 1,
    ACTIONS(1458), 1,
      anon_sym_LPAREN,
  [14988] = 1,
    ACTIONS(1460), 1,
      anon_sym_LPAREN,
  [14992] = 1,
    ACTIONS(1462), 1,
      anon_sym_LPAREN,
  [14996] = 1,
    ACTIONS(1464), 1,
      anon_sym_LPAREN,
  [15000] = 1,
    ACTIONS(1466), 1,
      anon_sym_LPAREN,
  [15004] = 1,
    ACTIONS(1468), 1,
      anon_sym_COMMA,
  [15008] = 1,
    ACTIONS(1470), 1,
      anon_sym_LPAREN,
  [15012] = 1,
    ACTIONS(1472), 1,
      anon_sym_RPAREN,
  [15016] = 1,
    ACTIONS(1474), 1,
      anon_sym_LPAREN,
  [15020] = 1,
    ACTIONS(1476), 1,
      anon_sym_LPAREN,
  [15024] = 1,
    ACTIONS(1478), 1,
      anon_sym_LPAREN,
  [15028] = 1,
    ACTIONS(1480), 1,
      anon_sym_LPAREN,
  [15032] = 1,
    ACTIONS(1482), 1,
      anon_sym_LPAREN,
  [15036] = 1,
    ACTIONS(1484), 1,
      anon_sym_RPAREN,
  [15040] = 1,
    ACTIONS(1486), 1,
      anon_sym_LPAREN,
  [15044] = 1,
    ACTIONS(1488), 1,
      anon_sym_RPAREN,
  [15048] = 1,
    ACTIONS(1490), 1,
      anon_sym_LPAREN,
  [15052] = 1,
    ACTIONS(1492), 1,
      anon_sym_LPAREN,
  [15056] = 1,
    ACTIONS(1494), 1,
      anon_sym_LPAREN,
  [15060] = 1,
    ACTIONS(1496), 1,
      anon_sym_LPAREN,
  [15064] = 1,
    ACTIONS(1498), 1,
      anon_sym_COMMA,
  [15068] = 1,
    ACTIONS(1500), 1,
      anon_sym_LPAREN,
  [15072] = 1,
    ACTIONS(1502), 1,
      aux_sym_window_frame_extent_token2,
  [15076] = 1,
    ACTIONS(1504), 1,
      anon_sym_COLON_COLON,
  [15080] = 1,
    ACTIONS(1506), 1,
      anon_sym_LPAREN,
  [15084] = 1,
    ACTIONS(1508), 1,
      anon_sym_LPAREN,
  [15088] = 1,
    ACTIONS(1510), 1,
      anon_sym_LPAREN,
  [15092] = 1,
    ACTIONS(1512), 1,
      anon_sym_RPAREN,
  [15096] = 1,
    ACTIONS(1514), 1,
      anon_sym_LPAREN,
  [15100] = 1,
    ACTIONS(1516), 1,
      anon_sym_LPAREN,
  [15104] = 1,
    ACTIONS(1518), 1,
      anon_sym_RPAREN,
  [15108] = 1,
    ACTIONS(1520), 1,
      anon_sym_COLON_COLON,
  [15112] = 1,
    ACTIONS(1522), 1,
      anon_sym_LPAREN,
  [15116] = 1,
    ACTIONS(1524), 1,
      anon_sym_LPAREN,
  [15120] = 1,
    ACTIONS(1526), 1,
      anon_sym_LPAREN,
  [15124] = 1,
    ACTIONS(1528), 1,
      anon_sym_RPAREN,
  [15128] = 1,
    ACTIONS(1530), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [15132] = 1,
    ACTIONS(1532), 1,
      anon_sym_COLON_COLON,
  [15136] = 1,
    ACTIONS(1534), 1,
      anon_sym_RPAREN,
  [15140] = 1,
    ACTIONS(1536), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [15144] = 1,
    ACTIONS(1538), 1,
      anon_sym_RPAREN,
  [15148] = 1,
    ACTIONS(1540), 1,
      anon_sym_LPAREN,
  [15152] = 1,
    ACTIONS(1542), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [15156] = 1,
    ACTIONS(1544), 1,
      anon_sym_RPAREN,
  [15160] = 1,
    ACTIONS(1546), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [15164] = 1,
    ACTIONS(1548), 1,
      anon_sym_RPAREN,
  [15168] = 1,
    ACTIONS(1550), 1,
      anon_sym_LPAREN,
  [15172] = 1,
    ACTIONS(1552), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [15176] = 1,
    ACTIONS(1554), 1,
      anon_sym_RPAREN,
  [15180] = 1,
    ACTIONS(1556), 1,
      anon_sym_LPAREN,
  [15184] = 1,
    ACTIONS(1558), 1,
      anon_sym_LPAREN,
  [15188] = 1,
    ACTIONS(1560), 1,
      anon_sym_LPAREN,
  [15192] = 1,
    ACTIONS(1562), 1,
      anon_sym_LPAREN,
  [15196] = 1,
    ACTIONS(1564), 1,
      anon_sym_RPAREN,
  [15200] = 1,
    ACTIONS(629), 1,
      anon_sym_EQ,
  [15204] = 1,
    ACTIONS(1566), 1,
      anon_sym_RPAREN,
  [15208] = 1,
    ACTIONS(1568), 1,
      anon_sym_RPAREN,
  [15212] = 1,
    ACTIONS(1570), 1,
      aux_sym_func_proc_name_server_database_schema_token1,
  [15216] = 1,
    ACTIONS(1572), 1,
      ts_builtin_sym_end,
  [15220] = 1,
    ACTIONS(1574), 1,
      anon_sym_LPAREN,
  [15224] = 1,
    ACTIONS(1576), 1,
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
  [SMALL_STATE(62)] = 6874,
  [SMALL_STATE(63)] = 6944,
  [SMALL_STATE(64)] = 6996,
  [SMALL_STATE(65)] = 7048,
  [SMALL_STATE(66)] = 7081,
  [SMALL_STATE(67)] = 7135,
  [SMALL_STATE(68)] = 7161,
  [SMALL_STATE(69)] = 7185,
  [SMALL_STATE(70)] = 7224,
  [SMALL_STATE(71)] = 7269,
  [SMALL_STATE(72)] = 7292,
  [SMALL_STATE(73)] = 7337,
  [SMALL_STATE(74)] = 7362,
  [SMALL_STATE(75)] = 7387,
  [SMALL_STATE(76)] = 7409,
  [SMALL_STATE(77)] = 7431,
  [SMALL_STATE(78)] = 7477,
  [SMALL_STATE(79)] = 7523,
  [SMALL_STATE(80)] = 7549,
  [SMALL_STATE(81)] = 7582,
  [SMALL_STATE(82)] = 7621,
  [SMALL_STATE(83)] = 7660,
  [SMALL_STATE(84)] = 7678,
  [SMALL_STATE(85)] = 7698,
  [SMALL_STATE(86)] = 7718,
  [SMALL_STATE(87)] = 7746,
  [SMALL_STATE(88)] = 7788,
  [SMALL_STATE(89)] = 7808,
  [SMALL_STATE(90)] = 7828,
  [SMALL_STATE(91)] = 7850,
  [SMALL_STATE(92)] = 7868,
  [SMALL_STATE(93)] = 7888,
  [SMALL_STATE(94)] = 7910,
  [SMALL_STATE(95)] = 7934,
  [SMALL_STATE(96)] = 7958,
  [SMALL_STATE(97)] = 7980,
  [SMALL_STATE(98)] = 8000,
  [SMALL_STATE(99)] = 8022,
  [SMALL_STATE(100)] = 8050,
  [SMALL_STATE(101)] = 8070,
  [SMALL_STATE(102)] = 8092,
  [SMALL_STATE(103)] = 8136,
  [SMALL_STATE(104)] = 8158,
  [SMALL_STATE(105)] = 8200,
  [SMALL_STATE(106)] = 8220,
  [SMALL_STATE(107)] = 8240,
  [SMALL_STATE(108)] = 8260,
  [SMALL_STATE(109)] = 8280,
  [SMALL_STATE(110)] = 8300,
  [SMALL_STATE(111)] = 8320,
  [SMALL_STATE(112)] = 8341,
  [SMALL_STATE(113)] = 8362,
  [SMALL_STATE(114)] = 8383,
  [SMALL_STATE(115)] = 8404,
  [SMALL_STATE(116)] = 8425,
  [SMALL_STATE(117)] = 8462,
  [SMALL_STATE(118)] = 8483,
  [SMALL_STATE(119)] = 8504,
  [SMALL_STATE(120)] = 8521,
  [SMALL_STATE(121)] = 8542,
  [SMALL_STATE(122)] = 8561,
  [SMALL_STATE(123)] = 8598,
  [SMALL_STATE(124)] = 8617,
  [SMALL_STATE(125)] = 8635,
  [SMALL_STATE(126)] = 8653,
  [SMALL_STATE(127)] = 8671,
  [SMALL_STATE(128)] = 8689,
  [SMALL_STATE(129)] = 8707,
  [SMALL_STATE(130)] = 8725,
  [SMALL_STATE(131)] = 8743,
  [SMALL_STATE(132)] = 8761,
  [SMALL_STATE(133)] = 8779,
  [SMALL_STATE(134)] = 8817,
  [SMALL_STATE(135)] = 8835,
  [SMALL_STATE(136)] = 8869,
  [SMALL_STATE(137)] = 8887,
  [SMALL_STATE(138)] = 8923,
  [SMALL_STATE(139)] = 8941,
  [SMALL_STATE(140)] = 8959,
  [SMALL_STATE(141)] = 8977,
  [SMALL_STATE(142)] = 8995,
  [SMALL_STATE(143)] = 9013,
  [SMALL_STATE(144)] = 9031,
  [SMALL_STATE(145)] = 9065,
  [SMALL_STATE(146)] = 9083,
  [SMALL_STATE(147)] = 9101,
  [SMALL_STATE(148)] = 9119,
  [SMALL_STATE(149)] = 9137,
  [SMALL_STATE(150)] = 9171,
  [SMALL_STATE(151)] = 9189,
  [SMALL_STATE(152)] = 9207,
  [SMALL_STATE(153)] = 9225,
  [SMALL_STATE(154)] = 9243,
  [SMALL_STATE(155)] = 9261,
  [SMALL_STATE(156)] = 9279,
  [SMALL_STATE(157)] = 9297,
  [SMALL_STATE(158)] = 9315,
  [SMALL_STATE(159)] = 9333,
  [SMALL_STATE(160)] = 9351,
  [SMALL_STATE(161)] = 9385,
  [SMALL_STATE(162)] = 9403,
  [SMALL_STATE(163)] = 9423,
  [SMALL_STATE(164)] = 9441,
  [SMALL_STATE(165)] = 9459,
  [SMALL_STATE(166)] = 9477,
  [SMALL_STATE(167)] = 9495,
  [SMALL_STATE(168)] = 9513,
  [SMALL_STATE(169)] = 9531,
  [SMALL_STATE(170)] = 9549,
  [SMALL_STATE(171)] = 9567,
  [SMALL_STATE(172)] = 9585,
  [SMALL_STATE(173)] = 9604,
  [SMALL_STATE(174)] = 9621,
  [SMALL_STATE(175)] = 9638,
  [SMALL_STATE(176)] = 9659,
  [SMALL_STATE(177)] = 9680,
  [SMALL_STATE(178)] = 9700,
  [SMALL_STATE(179)] = 9720,
  [SMALL_STATE(180)] = 9740,
  [SMALL_STATE(181)] = 9758,
  [SMALL_STATE(182)] = 9774,
  [SMALL_STATE(183)] = 9794,
  [SMALL_STATE(184)] = 9814,
  [SMALL_STATE(185)] = 9834,
  [SMALL_STATE(186)] = 9850,
  [SMALL_STATE(187)] = 9872,
  [SMALL_STATE(188)] = 9894,
  [SMALL_STATE(189)] = 9912,
  [SMALL_STATE(190)] = 9930,
  [SMALL_STATE(191)] = 9950,
  [SMALL_STATE(192)] = 9970,
  [SMALL_STATE(193)] = 9988,
  [SMALL_STATE(194)] = 10006,
  [SMALL_STATE(195)] = 10024,
  [SMALL_STATE(196)] = 10044,
  [SMALL_STATE(197)] = 10064,
  [SMALL_STATE(198)] = 10080,
  [SMALL_STATE(199)] = 10098,
  [SMALL_STATE(200)] = 10113,
  [SMALL_STATE(201)] = 10128,
  [SMALL_STATE(202)] = 10143,
  [SMALL_STATE(203)] = 10158,
  [SMALL_STATE(204)] = 10173,
  [SMALL_STATE(205)] = 10188,
  [SMALL_STATE(206)] = 10207,
  [SMALL_STATE(207)] = 10222,
  [SMALL_STATE(208)] = 10237,
  [SMALL_STATE(209)] = 10252,
  [SMALL_STATE(210)] = 10267,
  [SMALL_STATE(211)] = 10282,
  [SMALL_STATE(212)] = 10297,
  [SMALL_STATE(213)] = 10312,
  [SMALL_STATE(214)] = 10327,
  [SMALL_STATE(215)] = 10342,
  [SMALL_STATE(216)] = 10357,
  [SMALL_STATE(217)] = 10372,
  [SMALL_STATE(218)] = 10387,
  [SMALL_STATE(219)] = 10406,
  [SMALL_STATE(220)] = 10425,
  [SMALL_STATE(221)] = 10440,
  [SMALL_STATE(222)] = 10455,
  [SMALL_STATE(223)] = 10470,
  [SMALL_STATE(224)] = 10485,
  [SMALL_STATE(225)] = 10500,
  [SMALL_STATE(226)] = 10515,
  [SMALL_STATE(227)] = 10530,
  [SMALL_STATE(228)] = 10545,
  [SMALL_STATE(229)] = 10560,
  [SMALL_STATE(230)] = 10575,
  [SMALL_STATE(231)] = 10594,
  [SMALL_STATE(232)] = 10609,
  [SMALL_STATE(233)] = 10624,
  [SMALL_STATE(234)] = 10639,
  [SMALL_STATE(235)] = 10654,
  [SMALL_STATE(236)] = 10673,
  [SMALL_STATE(237)] = 10688,
  [SMALL_STATE(238)] = 10707,
  [SMALL_STATE(239)] = 10724,
  [SMALL_STATE(240)] = 10739,
  [SMALL_STATE(241)] = 10756,
  [SMALL_STATE(242)] = 10771,
  [SMALL_STATE(243)] = 10786,
  [SMALL_STATE(244)] = 10801,
  [SMALL_STATE(245)] = 10816,
  [SMALL_STATE(246)] = 10831,
  [SMALL_STATE(247)] = 10848,
  [SMALL_STATE(248)] = 10863,
  [SMALL_STATE(249)] = 10878,
  [SMALL_STATE(250)] = 10893,
  [SMALL_STATE(251)] = 10908,
  [SMALL_STATE(252)] = 10923,
  [SMALL_STATE(253)] = 10938,
  [SMALL_STATE(254)] = 10953,
  [SMALL_STATE(255)] = 10972,
  [SMALL_STATE(256)] = 10991,
  [SMALL_STATE(257)] = 11010,
  [SMALL_STATE(258)] = 11025,
  [SMALL_STATE(259)] = 11040,
  [SMALL_STATE(260)] = 11055,
  [SMALL_STATE(261)] = 11070,
  [SMALL_STATE(262)] = 11085,
  [SMALL_STATE(263)] = 11100,
  [SMALL_STATE(264)] = 11115,
  [SMALL_STATE(265)] = 11131,
  [SMALL_STATE(266)] = 11147,
  [SMALL_STATE(267)] = 11161,
  [SMALL_STATE(268)] = 11177,
  [SMALL_STATE(269)] = 11193,
  [SMALL_STATE(270)] = 11207,
  [SMALL_STATE(271)] = 11223,
  [SMALL_STATE(272)] = 11241,
  [SMALL_STATE(273)] = 11259,
  [SMALL_STATE(274)] = 11279,
  [SMALL_STATE(275)] = 11297,
  [SMALL_STATE(276)] = 11315,
  [SMALL_STATE(277)] = 11329,
  [SMALL_STATE(278)] = 11343,
  [SMALL_STATE(279)] = 11371,
  [SMALL_STATE(280)] = 11385,
  [SMALL_STATE(281)] = 11401,
  [SMALL_STATE(282)] = 11419,
  [SMALL_STATE(283)] = 11430,
  [SMALL_STATE(284)] = 11441,
  [SMALL_STATE(285)] = 11452,
  [SMALL_STATE(286)] = 11475,
  [SMALL_STATE(287)] = 11488,
  [SMALL_STATE(288)] = 11499,
  [SMALL_STATE(289)] = 11510,
  [SMALL_STATE(290)] = 11521,
  [SMALL_STATE(291)] = 11532,
  [SMALL_STATE(292)] = 11543,
  [SMALL_STATE(293)] = 11566,
  [SMALL_STATE(294)] = 11579,
  [SMALL_STATE(295)] = 11590,
  [SMALL_STATE(296)] = 11601,
  [SMALL_STATE(297)] = 11612,
  [SMALL_STATE(298)] = 11623,
  [SMALL_STATE(299)] = 11634,
  [SMALL_STATE(300)] = 11645,
  [SMALL_STATE(301)] = 11656,
  [SMALL_STATE(302)] = 11667,
  [SMALL_STATE(303)] = 11678,
  [SMALL_STATE(304)] = 11689,
  [SMALL_STATE(305)] = 11702,
  [SMALL_STATE(306)] = 11715,
  [SMALL_STATE(307)] = 11730,
  [SMALL_STATE(308)] = 11741,
  [SMALL_STATE(309)] = 11754,
  [SMALL_STATE(310)] = 11767,
  [SMALL_STATE(311)] = 11780,
  [SMALL_STATE(312)] = 11795,
  [SMALL_STATE(313)] = 11806,
  [SMALL_STATE(314)] = 11817,
  [SMALL_STATE(315)] = 11828,
  [SMALL_STATE(316)] = 11847,
  [SMALL_STATE(317)] = 11858,
  [SMALL_STATE(318)] = 11871,
  [SMALL_STATE(319)] = 11882,
  [SMALL_STATE(320)] = 11895,
  [SMALL_STATE(321)] = 11908,
  [SMALL_STATE(322)] = 11919,
  [SMALL_STATE(323)] = 11932,
  [SMALL_STATE(324)] = 11943,
  [SMALL_STATE(325)] = 11954,
  [SMALL_STATE(326)] = 11977,
  [SMALL_STATE(327)] = 11988,
  [SMALL_STATE(328)] = 12001,
  [SMALL_STATE(329)] = 12012,
  [SMALL_STATE(330)] = 12023,
  [SMALL_STATE(331)] = 12038,
  [SMALL_STATE(332)] = 12051,
  [SMALL_STATE(333)] = 12064,
  [SMALL_STATE(334)] = 12077,
  [SMALL_STATE(335)] = 12090,
  [SMALL_STATE(336)] = 12103,
  [SMALL_STATE(337)] = 12114,
  [SMALL_STATE(338)] = 12127,
  [SMALL_STATE(339)] = 12138,
  [SMALL_STATE(340)] = 12153,
  [SMALL_STATE(341)] = 12167,
  [SMALL_STATE(342)] = 12181,
  [SMALL_STATE(343)] = 12197,
  [SMALL_STATE(344)] = 12209,
  [SMALL_STATE(345)] = 12221,
  [SMALL_STATE(346)] = 12233,
  [SMALL_STATE(347)] = 12245,
  [SMALL_STATE(348)] = 12257,
  [SMALL_STATE(349)] = 12269,
  [SMALL_STATE(350)] = 12281,
  [SMALL_STATE(351)] = 12293,
  [SMALL_STATE(352)] = 12309,
  [SMALL_STATE(353)] = 12321,
  [SMALL_STATE(354)] = 12343,
  [SMALL_STATE(355)] = 12355,
  [SMALL_STATE(356)] = 12368,
  [SMALL_STATE(357)] = 12377,
  [SMALL_STATE(358)] = 12396,
  [SMALL_STATE(359)] = 12415,
  [SMALL_STATE(360)] = 12430,
  [SMALL_STATE(361)] = 12439,
  [SMALL_STATE(362)] = 12452,
  [SMALL_STATE(363)] = 12461,
  [SMALL_STATE(364)] = 12476,
  [SMALL_STATE(365)] = 12485,
  [SMALL_STATE(366)] = 12498,
  [SMALL_STATE(367)] = 12517,
  [SMALL_STATE(368)] = 12530,
  [SMALL_STATE(369)] = 12547,
  [SMALL_STATE(370)] = 12564,
  [SMALL_STATE(371)] = 12581,
  [SMALL_STATE(372)] = 12600,
  [SMALL_STATE(373)] = 12609,
  [SMALL_STATE(374)] = 12618,
  [SMALL_STATE(375)] = 12637,
  [SMALL_STATE(376)] = 12656,
  [SMALL_STATE(377)] = 12675,
  [SMALL_STATE(378)] = 12694,
  [SMALL_STATE(379)] = 12711,
  [SMALL_STATE(380)] = 12728,
  [SMALL_STATE(381)] = 12747,
  [SMALL_STATE(382)] = 12766,
  [SMALL_STATE(383)] = 12781,
  [SMALL_STATE(384)] = 12796,
  [SMALL_STATE(385)] = 12813,
  [SMALL_STATE(386)] = 12832,
  [SMALL_STATE(387)] = 12851,
  [SMALL_STATE(388)] = 12870,
  [SMALL_STATE(389)] = 12885,
  [SMALL_STATE(390)] = 12894,
  [SMALL_STATE(391)] = 12911,
  [SMALL_STATE(392)] = 12920,
  [SMALL_STATE(393)] = 12939,
  [SMALL_STATE(394)] = 12948,
  [SMALL_STATE(395)] = 12964,
  [SMALL_STATE(396)] = 12980,
  [SMALL_STATE(397)] = 12996,
  [SMALL_STATE(398)] = 13012,
  [SMALL_STATE(399)] = 13028,
  [SMALL_STATE(400)] = 13044,
  [SMALL_STATE(401)] = 13060,
  [SMALL_STATE(402)] = 13076,
  [SMALL_STATE(403)] = 13092,
  [SMALL_STATE(404)] = 13108,
  [SMALL_STATE(405)] = 13120,
  [SMALL_STATE(406)] = 13136,
  [SMALL_STATE(407)] = 13148,
  [SMALL_STATE(408)] = 13164,
  [SMALL_STATE(409)] = 13180,
  [SMALL_STATE(410)] = 13196,
  [SMALL_STATE(411)] = 13212,
  [SMALL_STATE(412)] = 13228,
  [SMALL_STATE(413)] = 13244,
  [SMALL_STATE(414)] = 13260,
  [SMALL_STATE(415)] = 13276,
  [SMALL_STATE(416)] = 13292,
  [SMALL_STATE(417)] = 13308,
  [SMALL_STATE(418)] = 13324,
  [SMALL_STATE(419)] = 13340,
  [SMALL_STATE(420)] = 13356,
  [SMALL_STATE(421)] = 13364,
  [SMALL_STATE(422)] = 13380,
  [SMALL_STATE(423)] = 13396,
  [SMALL_STATE(424)] = 13412,
  [SMALL_STATE(425)] = 13428,
  [SMALL_STATE(426)] = 13444,
  [SMALL_STATE(427)] = 13460,
  [SMALL_STATE(428)] = 13476,
  [SMALL_STATE(429)] = 13492,
  [SMALL_STATE(430)] = 13504,
  [SMALL_STATE(431)] = 13520,
  [SMALL_STATE(432)] = 13536,
  [SMALL_STATE(433)] = 13552,
  [SMALL_STATE(434)] = 13565,
  [SMALL_STATE(435)] = 13578,
  [SMALL_STATE(436)] = 13589,
  [SMALL_STATE(437)] = 13600,
  [SMALL_STATE(438)] = 13611,
  [SMALL_STATE(439)] = 13618,
  [SMALL_STATE(440)] = 13625,
  [SMALL_STATE(441)] = 13632,
  [SMALL_STATE(442)] = 13643,
  [SMALL_STATE(443)] = 13656,
  [SMALL_STATE(444)] = 13663,
  [SMALL_STATE(445)] = 13670,
  [SMALL_STATE(446)] = 13683,
  [SMALL_STATE(447)] = 13690,
  [SMALL_STATE(448)] = 13703,
  [SMALL_STATE(449)] = 13714,
  [SMALL_STATE(450)] = 13725,
  [SMALL_STATE(451)] = 13738,
  [SMALL_STATE(452)] = 13751,
  [SMALL_STATE(453)] = 13762,
  [SMALL_STATE(454)] = 13775,
  [SMALL_STATE(455)] = 13782,
  [SMALL_STATE(456)] = 13793,
  [SMALL_STATE(457)] = 13804,
  [SMALL_STATE(458)] = 13815,
  [SMALL_STATE(459)] = 13822,
  [SMALL_STATE(460)] = 13833,
  [SMALL_STATE(461)] = 13844,
  [SMALL_STATE(462)] = 13857,
  [SMALL_STATE(463)] = 13868,
  [SMALL_STATE(464)] = 13875,
  [SMALL_STATE(465)] = 13888,
  [SMALL_STATE(466)] = 13901,
  [SMALL_STATE(467)] = 13914,
  [SMALL_STATE(468)] = 13925,
  [SMALL_STATE(469)] = 13935,
  [SMALL_STATE(470)] = 13945,
  [SMALL_STATE(471)] = 13955,
  [SMALL_STATE(472)] = 13963,
  [SMALL_STATE(473)] = 13973,
  [SMALL_STATE(474)] = 13983,
  [SMALL_STATE(475)] = 13993,
  [SMALL_STATE(476)] = 14003,
  [SMALL_STATE(477)] = 14009,
  [SMALL_STATE(478)] = 14015,
  [SMALL_STATE(479)] = 14023,
  [SMALL_STATE(480)] = 14033,
  [SMALL_STATE(481)] = 14043,
  [SMALL_STATE(482)] = 14053,
  [SMALL_STATE(483)] = 14059,
  [SMALL_STATE(484)] = 14069,
  [SMALL_STATE(485)] = 14079,
  [SMALL_STATE(486)] = 14089,
  [SMALL_STATE(487)] = 14099,
  [SMALL_STATE(488)] = 14107,
  [SMALL_STATE(489)] = 14117,
  [SMALL_STATE(490)] = 14122,
  [SMALL_STATE(491)] = 14129,
  [SMALL_STATE(492)] = 14134,
  [SMALL_STATE(493)] = 14141,
  [SMALL_STATE(494)] = 14146,
  [SMALL_STATE(495)] = 14153,
  [SMALL_STATE(496)] = 14160,
  [SMALL_STATE(497)] = 14167,
  [SMALL_STATE(498)] = 14174,
  [SMALL_STATE(499)] = 14181,
  [SMALL_STATE(500)] = 14188,
  [SMALL_STATE(501)] = 14195,
  [SMALL_STATE(502)] = 14202,
  [SMALL_STATE(503)] = 14209,
  [SMALL_STATE(504)] = 14216,
  [SMALL_STATE(505)] = 14221,
  [SMALL_STATE(506)] = 14228,
  [SMALL_STATE(507)] = 14235,
  [SMALL_STATE(508)] = 14242,
  [SMALL_STATE(509)] = 14249,
  [SMALL_STATE(510)] = 14254,
  [SMALL_STATE(511)] = 14261,
  [SMALL_STATE(512)] = 14268,
  [SMALL_STATE(513)] = 14275,
  [SMALL_STATE(514)] = 14282,
  [SMALL_STATE(515)] = 14289,
  [SMALL_STATE(516)] = 14296,
  [SMALL_STATE(517)] = 14303,
  [SMALL_STATE(518)] = 14310,
  [SMALL_STATE(519)] = 14317,
  [SMALL_STATE(520)] = 14322,
  [SMALL_STATE(521)] = 14327,
  [SMALL_STATE(522)] = 14334,
  [SMALL_STATE(523)] = 14339,
  [SMALL_STATE(524)] = 14344,
  [SMALL_STATE(525)] = 14349,
  [SMALL_STATE(526)] = 14354,
  [SMALL_STATE(527)] = 14359,
  [SMALL_STATE(528)] = 14366,
  [SMALL_STATE(529)] = 14373,
  [SMALL_STATE(530)] = 14380,
  [SMALL_STATE(531)] = 14387,
  [SMALL_STATE(532)] = 14394,
  [SMALL_STATE(533)] = 14401,
  [SMALL_STATE(534)] = 14406,
  [SMALL_STATE(535)] = 14413,
  [SMALL_STATE(536)] = 14418,
  [SMALL_STATE(537)] = 14425,
  [SMALL_STATE(538)] = 14432,
  [SMALL_STATE(539)] = 14439,
  [SMALL_STATE(540)] = 14446,
  [SMALL_STATE(541)] = 14453,
  [SMALL_STATE(542)] = 14460,
  [SMALL_STATE(543)] = 14467,
  [SMALL_STATE(544)] = 14474,
  [SMALL_STATE(545)] = 14481,
  [SMALL_STATE(546)] = 14488,
  [SMALL_STATE(547)] = 14492,
  [SMALL_STATE(548)] = 14496,
  [SMALL_STATE(549)] = 14500,
  [SMALL_STATE(550)] = 14504,
  [SMALL_STATE(551)] = 14508,
  [SMALL_STATE(552)] = 14512,
  [SMALL_STATE(553)] = 14516,
  [SMALL_STATE(554)] = 14520,
  [SMALL_STATE(555)] = 14524,
  [SMALL_STATE(556)] = 14528,
  [SMALL_STATE(557)] = 14532,
  [SMALL_STATE(558)] = 14536,
  [SMALL_STATE(559)] = 14540,
  [SMALL_STATE(560)] = 14544,
  [SMALL_STATE(561)] = 14548,
  [SMALL_STATE(562)] = 14552,
  [SMALL_STATE(563)] = 14556,
  [SMALL_STATE(564)] = 14560,
  [SMALL_STATE(565)] = 14564,
  [SMALL_STATE(566)] = 14568,
  [SMALL_STATE(567)] = 14572,
  [SMALL_STATE(568)] = 14576,
  [SMALL_STATE(569)] = 14580,
  [SMALL_STATE(570)] = 14584,
  [SMALL_STATE(571)] = 14588,
  [SMALL_STATE(572)] = 14592,
  [SMALL_STATE(573)] = 14596,
  [SMALL_STATE(574)] = 14600,
  [SMALL_STATE(575)] = 14604,
  [SMALL_STATE(576)] = 14608,
  [SMALL_STATE(577)] = 14612,
  [SMALL_STATE(578)] = 14616,
  [SMALL_STATE(579)] = 14620,
  [SMALL_STATE(580)] = 14624,
  [SMALL_STATE(581)] = 14628,
  [SMALL_STATE(582)] = 14632,
  [SMALL_STATE(583)] = 14636,
  [SMALL_STATE(584)] = 14640,
  [SMALL_STATE(585)] = 14644,
  [SMALL_STATE(586)] = 14648,
  [SMALL_STATE(587)] = 14652,
  [SMALL_STATE(588)] = 14656,
  [SMALL_STATE(589)] = 14660,
  [SMALL_STATE(590)] = 14664,
  [SMALL_STATE(591)] = 14668,
  [SMALL_STATE(592)] = 14672,
  [SMALL_STATE(593)] = 14676,
  [SMALL_STATE(594)] = 14680,
  [SMALL_STATE(595)] = 14684,
  [SMALL_STATE(596)] = 14688,
  [SMALL_STATE(597)] = 14692,
  [SMALL_STATE(598)] = 14696,
  [SMALL_STATE(599)] = 14700,
  [SMALL_STATE(600)] = 14704,
  [SMALL_STATE(601)] = 14708,
  [SMALL_STATE(602)] = 14712,
  [SMALL_STATE(603)] = 14716,
  [SMALL_STATE(604)] = 14720,
  [SMALL_STATE(605)] = 14724,
  [SMALL_STATE(606)] = 14728,
  [SMALL_STATE(607)] = 14732,
  [SMALL_STATE(608)] = 14736,
  [SMALL_STATE(609)] = 14740,
  [SMALL_STATE(610)] = 14744,
  [SMALL_STATE(611)] = 14748,
  [SMALL_STATE(612)] = 14752,
  [SMALL_STATE(613)] = 14756,
  [SMALL_STATE(614)] = 14760,
  [SMALL_STATE(615)] = 14764,
  [SMALL_STATE(616)] = 14768,
  [SMALL_STATE(617)] = 14772,
  [SMALL_STATE(618)] = 14776,
  [SMALL_STATE(619)] = 14780,
  [SMALL_STATE(620)] = 14784,
  [SMALL_STATE(621)] = 14788,
  [SMALL_STATE(622)] = 14792,
  [SMALL_STATE(623)] = 14796,
  [SMALL_STATE(624)] = 14800,
  [SMALL_STATE(625)] = 14804,
  [SMALL_STATE(626)] = 14808,
  [SMALL_STATE(627)] = 14812,
  [SMALL_STATE(628)] = 14816,
  [SMALL_STATE(629)] = 14820,
  [SMALL_STATE(630)] = 14824,
  [SMALL_STATE(631)] = 14828,
  [SMALL_STATE(632)] = 14832,
  [SMALL_STATE(633)] = 14836,
  [SMALL_STATE(634)] = 14840,
  [SMALL_STATE(635)] = 14844,
  [SMALL_STATE(636)] = 14848,
  [SMALL_STATE(637)] = 14852,
  [SMALL_STATE(638)] = 14856,
  [SMALL_STATE(639)] = 14860,
  [SMALL_STATE(640)] = 14864,
  [SMALL_STATE(641)] = 14868,
  [SMALL_STATE(642)] = 14872,
  [SMALL_STATE(643)] = 14876,
  [SMALL_STATE(644)] = 14880,
  [SMALL_STATE(645)] = 14884,
  [SMALL_STATE(646)] = 14888,
  [SMALL_STATE(647)] = 14892,
  [SMALL_STATE(648)] = 14896,
  [SMALL_STATE(649)] = 14900,
  [SMALL_STATE(650)] = 14904,
  [SMALL_STATE(651)] = 14908,
  [SMALL_STATE(652)] = 14912,
  [SMALL_STATE(653)] = 14916,
  [SMALL_STATE(654)] = 14920,
  [SMALL_STATE(655)] = 14924,
  [SMALL_STATE(656)] = 14928,
  [SMALL_STATE(657)] = 14932,
  [SMALL_STATE(658)] = 14936,
  [SMALL_STATE(659)] = 14940,
  [SMALL_STATE(660)] = 14944,
  [SMALL_STATE(661)] = 14948,
  [SMALL_STATE(662)] = 14952,
  [SMALL_STATE(663)] = 14956,
  [SMALL_STATE(664)] = 14960,
  [SMALL_STATE(665)] = 14964,
  [SMALL_STATE(666)] = 14968,
  [SMALL_STATE(667)] = 14972,
  [SMALL_STATE(668)] = 14976,
  [SMALL_STATE(669)] = 14980,
  [SMALL_STATE(670)] = 14984,
  [SMALL_STATE(671)] = 14988,
  [SMALL_STATE(672)] = 14992,
  [SMALL_STATE(673)] = 14996,
  [SMALL_STATE(674)] = 15000,
  [SMALL_STATE(675)] = 15004,
  [SMALL_STATE(676)] = 15008,
  [SMALL_STATE(677)] = 15012,
  [SMALL_STATE(678)] = 15016,
  [SMALL_STATE(679)] = 15020,
  [SMALL_STATE(680)] = 15024,
  [SMALL_STATE(681)] = 15028,
  [SMALL_STATE(682)] = 15032,
  [SMALL_STATE(683)] = 15036,
  [SMALL_STATE(684)] = 15040,
  [SMALL_STATE(685)] = 15044,
  [SMALL_STATE(686)] = 15048,
  [SMALL_STATE(687)] = 15052,
  [SMALL_STATE(688)] = 15056,
  [SMALL_STATE(689)] = 15060,
  [SMALL_STATE(690)] = 15064,
  [SMALL_STATE(691)] = 15068,
  [SMALL_STATE(692)] = 15072,
  [SMALL_STATE(693)] = 15076,
  [SMALL_STATE(694)] = 15080,
  [SMALL_STATE(695)] = 15084,
  [SMALL_STATE(696)] = 15088,
  [SMALL_STATE(697)] = 15092,
  [SMALL_STATE(698)] = 15096,
  [SMALL_STATE(699)] = 15100,
  [SMALL_STATE(700)] = 15104,
  [SMALL_STATE(701)] = 15108,
  [SMALL_STATE(702)] = 15112,
  [SMALL_STATE(703)] = 15116,
  [SMALL_STATE(704)] = 15120,
  [SMALL_STATE(705)] = 15124,
  [SMALL_STATE(706)] = 15128,
  [SMALL_STATE(707)] = 15132,
  [SMALL_STATE(708)] = 15136,
  [SMALL_STATE(709)] = 15140,
  [SMALL_STATE(710)] = 15144,
  [SMALL_STATE(711)] = 15148,
  [SMALL_STATE(712)] = 15152,
  [SMALL_STATE(713)] = 15156,
  [SMALL_STATE(714)] = 15160,
  [SMALL_STATE(715)] = 15164,
  [SMALL_STATE(716)] = 15168,
  [SMALL_STATE(717)] = 15172,
  [SMALL_STATE(718)] = 15176,
  [SMALL_STATE(719)] = 15180,
  [SMALL_STATE(720)] = 15184,
  [SMALL_STATE(721)] = 15188,
  [SMALL_STATE(722)] = 15192,
  [SMALL_STATE(723)] = 15196,
  [SMALL_STATE(724)] = 15200,
  [SMALL_STATE(725)] = 15204,
  [SMALL_STATE(726)] = 15208,
  [SMALL_STATE(727)] = 15212,
  [SMALL_STATE(728)] = 15216,
  [SMALL_STATE(729)] = 15220,
  [SMALL_STATE(730)] = 15224,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsql_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(707),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(704),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(699),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(698),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(696),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(684),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(672),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(669),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(668),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(660),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(659),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(701),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(678),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(730),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(721),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(513),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(702),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(679),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(680),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(681),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(703),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(682),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(693),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(662),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(729),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(719),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(694),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(663),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(664),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(665),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(695),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(666),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_operator, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_operator, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsql_file, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsql_file, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(357),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 3, 0, 10),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 3, 0, 10),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_expression, 1, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_expression, 1, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body_batch, 1, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body_batch, 1, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_LOCAL_ID_, 1, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_LOCAL_ID_, 1, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udt_elem, 3, 0, 13),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_udt_elem, 3, 0, 13),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_batch, 2, 0, 0),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 2, 0, 0), SHIFT(271),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 2, 0, 0), SHIFT(102),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 2, 0, 0), SHIFT(2),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_batch, 2, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_batch, 1, 0, 0),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 1, 0, 0), SHIFT(271),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 1, 0, 0), SHIFT(102),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 1, 0, 0), SHIFT(2),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_batch, 1, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_var_string, 1, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_var_string, 1, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_var_string, 3, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_var_string, 3, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_var_string, 5, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_var_string, 5, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_, 1, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_, 1, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udt_elem, 4, 0, 13),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_udt_elem, 4, 0, 13),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_elem, 1, 0, 3),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_elem, 1, 0, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_batch_repeat1, 2, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_batch_repeat1, 2, 0, 0),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_batch_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_batch_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 26),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 26),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_column_name, 1, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_schema, 1, 0, 1),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_column_name, 1, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_alias, 1, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 16),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 16),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 4, 0, 8),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 4, 0, 8),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_schema, 3, 0, 7),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_schema, 3, 0, 7),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 1, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 1, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 3, 0, 5),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_database_schema, 3, 0, 5),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 18),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 18),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(599),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 19),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 19),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 4, 0, 9),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_database_schema, 4, 0, 9),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 23),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 23),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 4, 0, 15),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_database_schema, 4, 0, 15),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_go_statement, 1, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_go_statement, 1, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 27),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 6, 0, 27),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 5, 0, 21),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_database_schema, 5, 0, 21),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_schema, 1, 0, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 1, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_database_schema, 1, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 7, 0, 32),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 7, 0, 32),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 17),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 17),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 20),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proc_name_server_database_schema, 5, 0, 20),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_, 1, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_, 1, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_, 1, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_, 1, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 12, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 12, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hierarchyid_static_method, 6, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hierarchyid_static_method, 6, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hierarchyid_static_method, 5, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hierarchyid_static_method, 5, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_money_, 2, 0, 6),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_money_, 2, 0, 6),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 8, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 8, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_over_clause, 6, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_over_clause, 6, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(571),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(569),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(624),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hierarchyid_static_method, 8, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hierarchyid_static_method, 8, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_function, 8, 0, 38),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partition_function, 8, 0, 38),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranking_windowed_function, 4, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ranking_windowed_function, 4, 0, 0),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hierarchyid_static_method, 6, 0, 29),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hierarchyid_static_method, 6, 0, 29),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_function, 6, 0, 30),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partition_function, 6, 0, 30),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 0),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 0),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(711),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(673),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(629),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 0),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_windowed_function, 4, 0, 0),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 4, 0, 0),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 4, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_money_, 3, 0, 6),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_money_, 3, 0, 6),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 0),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 0),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranking_windowed_function, 5, 0, 0),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ranking_windowed_function, 5, 0, 0),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real_, 4, 0, 0),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real_, 4, 0, 0),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_over_clause, 5, 0, 0),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_over_clause, 5, 0, 0),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 5, 0, 0),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 5, 0, 0),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 11, 0, 0),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 11, 0, 0),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_windowed_function, 5, 0, 19),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_windowed_function, 5, 0, 19),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_windowed_function, 5, 0, 18),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_windowed_function, 5, 0, 18),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(716),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(688),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(649),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_over_clause, 3, 0, 0),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_over_clause, 3, 0, 0),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_constant, 1, 0, 0),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_constant, 1, 0, 0),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, 0, 0),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, 0, 0),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 7, 0, 0),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 7, 0, 0),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analytic_windowed_function, 3, 0, 0),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_analytic_windowed_function, 3, 0, 0),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_over_clause, 4, 0, 0),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_over_clause, 4, 0, 0),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real_, 3, 0, 0),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real_, 3, 0, 0),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udt_method_arguments, 3, 0, 0),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_udt_method_arguments, 3, 0, 0),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udt_method_arguments, 4, 0, 0),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_udt_method_arguments, 4, 0, 0),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(630),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list, 1, 0, 0),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_list, 1, 0, 0),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_statement_arg, 2, 0, 0),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_statement_arg, 2, 0, 0),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_parameter, 1, 0, 0),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_parameter, 1, 0, 0),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_statement_arg, 1, 0, 0),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_statement_arg, 1, 0, 0),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 4, 0, 0),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 4, 0, 0),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 3, 0, 0),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 3, 0, 0),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_body_batch_repeat1, 2, 0, 0),
  [683] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_body_batch_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_execute_body_batch_repeat1, 2, 0, 0),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_list_repeat1, 2, 0, 0),
  [690] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_list_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_select_list_repeat1, 2, 0, 0),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_statement_arg_repeat1, 2, 0, 0),
  [699] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_statement_arg_repeat1, 2, 0, 0), SHIFT_REPEAT(545),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_execute_statement_arg_repeat1, 2, 0, 0),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list, 2, 0, 0),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_list, 2, 0, 0),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_elem, 3, 0, 12),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_elem, 3, 0, 12),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_column_alias, 2, 0, 0),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as_column_alias, 2, 0, 0),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 7, 0, 10),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 7, 0, 10),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list_elem, 3, 0, 0),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_list_elem, 3, 0, 0),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list_elem, 1, 0, 0),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_list_elem, 1, 0, 0),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 6, 0, 10),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 6, 0, 10),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1, 0, 0),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1, 0, 0),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_statement_arg_unnamed, 1, 0, 4),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_statement_arg_unnamed, 1, 0, 4),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2, 0, 0),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 2, 0, 0),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_parameter, 2, 0, 0),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_parameter, 2, 0, 0),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udt_elem, 5, 0, 13),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_udt_elem, 5, 0, 13),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_statement_arg_named, 3, 0, 14),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_statement_arg_named, 3, 0, 14),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 5, 0, 10),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 5, 0, 10),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 5, 0, 0),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 5, 0, 0),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_body_repeat1, 2, 0, 0),
  [772] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_body_repeat1, 2, 0, 0), SHIFT_REPEAT(450),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_execute_body_repeat1, 2, 0, 0),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_alias, 1, 0, 0),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_elem, 2, 0, 3),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_elem, 2, 0, 3),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_column_alias, 1, 0, 0),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as_column_alias, 1, 0, 0),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 4, 0, 10),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 4, 0, 10),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 2, 0, 0),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 2, 0, 0),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 7, 0, 0),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 7, 0, 0),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_specification, 2, 0, 0),
  [809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_specification, 2, 0, 0),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [813] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat2, 1, 0, 0), REDUCE(sym_batch, 2, 0, 0),
  [816] = {.entry = {.count = 3, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat2, 1, 0, 0), REDUCE(sym_batch, 2, 0, 0), SHIFT(271),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_batch, 3, 0, 0),
  [822] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_batch, 3, 0, 0), SHIFT(271),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_batch, 3, 0, 0),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat2, 2, 0, 0),
  [829] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat2, 2, 0, 0), SHIFT_REPEAT(271),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat2, 2, 0, 0),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_option, 1, 0, 0),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_option, 1, 0, 0),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_option, 2, 0, 0),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_option, 2, 0, 0),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 8, 0, 0),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 8, 0, 0),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 5, 0, 24),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 5, 0, 24),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_clause, 1, 0, 0),
  [870] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dml_clause, 1, 0, 0),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_table_name, 7, 0, 43),
  [874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_table_name, 7, 0, 43),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement_standalone, 1, 0, 0),
  [878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement_standalone, 1, 0, 0),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_table_name, 5, 0, 34),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_table_name, 5, 0, 34),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1, 0, 0),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 1, 0, 0),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 10, 0, 44),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 10, 0, 44),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_statement, 2, 0, 0),
  [896] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_statement, 2, 0, 0),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_table_name, 3, 0, 25),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_table_name, 3, 0, 25),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 1, 0, 33),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_specification, 4, 0, 0),
  [914] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_specification, 4, 0, 0),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_sources, 1, 0, 0),
  [918] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_sources, 1, 0, 0),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 6, 0, 28),
  [922] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 6, 0, 28),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_source, 1, 0, 0),
  [928] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_source, 1, 0, 0),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_table_name, 1, 0, 11),
  [932] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_table_name, 1, 0, 11),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_source_item, 1, 0, 0),
  [938] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_source_item, 1, 0, 0),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_expression, 1, 0, 0),
  [944] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_expression, 1, 0, 0),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body, 9, 0, 39),
  [948] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_body, 9, 0, 39),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_another_statement, 1, 0, 0),
  [952] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_another_statement, 1, 0, 0),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_clauses, 1, 0, 0),
  [956] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_clauses, 1, 0, 0),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [960] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_body_batch_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [963] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_statement_arg_repeat1, 2, 0, 0), SHIFT_REPEAT(540),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body_batch, 2, 0, 0),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [974] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1, 0, 0),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_clauses, 2, 0, 0),
  [980] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_clauses, 2, 0, 0),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prepared_stmt_vardecls, 3, 0, 0),
  [984] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prepared_stmt_vardecls, 3, 0, 0),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_go_statement, 2, 0, 2),
  [988] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_go_statement, 2, 0, 2),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body_batch, 3, 0, 0),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prepared_stmt_vardecls, 4, 0, 0),
  [996] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prepared_stmt_vardecls, 4, 0, 0),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 2, 0, 33),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(637),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1012] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list__repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list__repeat1, 2, 0, 0),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list_, 1, 0, 0),
  [1025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list_, 2, 0, 0),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(600),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1069] = {.entry = {.count = 1, .reusable = false}}, SHIFT(572),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collation_, 2, 0, 40),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1079] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_order_by_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_order_by_clause_repeat1, 2, 0, 0),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 3, 0, 0),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 4, 0, 0),
  [1090] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat2, 2, 0, 0), SHIFT_REPEAT(455),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_by_clause, 3, 0, 0),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 2, 0, 37),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 2, 0, 36),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 3, 0, 41),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_expression, 3, 0, 42),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsql_file, 3, 0, 0),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body_batch, 4, 0, 0),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_body_repeat2, 2, 0, 0), SHIFT_REPEAT(447),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_body_repeat2, 2, 0, 0),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lag_lead_args, 5, 0, 31),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lag_lead_args, 3, 0, 0),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list__repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lag_lead_args, 7, 0, 35),
  [1165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prepared_stmt_vardecls_repeat1, 2, 0, 0), SHIFT_REPEAT(510),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prepared_stmt_vardecls_repeat1, 2, 0, 0),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_frame_bound, 1, 0, 0),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_frame_following, 2, 0, 0),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_frame_preceding, 2, 0, 0),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pstmt_vardecl, 2, 0, 0),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_RESULT_SETS, 2, 0, 0),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AS, 1, 0, 0),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 4, 0, 22),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_all_distinct_expression, 2, 0, 0),
  [1260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_respect_nulls_, 2, 0, 0),
  [1262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ignore_nulls_, 2, 0, 0),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_over_, 1, 0, 0),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_all_distinct_expression, 1, 0, 0),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_within_group_, 2, 0, 0),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row_or_range_clause, 2, 0, 0),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_frame_extent, 1, 0, 0),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_function_name, 1, 0, 0),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_frame_extent, 4, 0, 0),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1572] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
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
