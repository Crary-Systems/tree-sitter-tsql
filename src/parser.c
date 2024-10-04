#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 75
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 9

enum ts_symbol_identifiers {
  aux_sym_go_statement_token1 = 1,
  anon_sym_COMMA = 2,
  anon_sym_SEMI = 3,
  aux_sym_func_proc_name_database_schema_token1 = 4,
  aux_sym_execute_statement_arg_named_token1 = 5,
  anon_sym_EQ = 6,
  aux_sym_constant_token1 = 7,
  aux_sym_query_specification_token1 = 8,
  aux_sym_query_specification_token2 = 9,
  aux_sym_select_list_elem_token1 = 10,
  aux_sym_select_list_elem_token2 = 11,
  sym_integer = 12,
  anon_sym_TODO = 13,
  sym_tsql_file = 14,
  sym_batch = 15,
  sym_go_statement = 16,
  sym_execute_body_batch = 17,
  sym_func_proc_name_server_database_schema = 18,
  sym_func_proc_name_database_schema = 19,
  sym_func_proc_name_schema = 20,
  sym_execute_statement_arg = 21,
  sym_execute_statement_arg_named = 22,
  sym_execute_parameter = 23,
  sym_constant = 24,
  sym_sql_clauses = 25,
  sym_dml_clause = 26,
  sym_select_statement_standalone = 27,
  sym_select_statement = 28,
  sym_query_expression = 29,
  sym_query_specification = 30,
  sym_select_list = 31,
  sym_select_list_elem = 32,
  sym_table_sources = 33,
  sym_table_source = 34,
  sym_table_source_item = 35,
  sym_full_table_name = 36,
  sym_id_ = 37,
  sym_keyword = 38,
  aux_sym_tsql_file_repeat1 = 39,
  aux_sym_batch_repeat1 = 40,
  aux_sym_batch_repeat2 = 41,
  aux_sym_execute_body_batch_repeat1 = 42,
  aux_sym_execute_statement_arg_repeat1 = 43,
  aux_sym_select_list_repeat1 = 44,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_go_statement_token1] = "go_statement_token1",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [aux_sym_func_proc_name_database_schema_token1] = "func_proc_name_database_schema_token1",
  [aux_sym_execute_statement_arg_named_token1] = "execute_statement_arg_named_token1",
  [anon_sym_EQ] = "=",
  [aux_sym_constant_token1] = "constant_token1",
  [aux_sym_query_specification_token1] = "query_specification_token1",
  [aux_sym_query_specification_token2] = "query_specification_token2",
  [aux_sym_select_list_elem_token1] = "select_list_elem_token1",
  [aux_sym_select_list_elem_token2] = "select_list_elem_token2",
  [sym_integer] = "integer",
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
  [sym_execute_parameter] = "execute_parameter",
  [sym_constant] = "constant",
  [sym_sql_clauses] = "sql_clauses",
  [sym_dml_clause] = "dml_clause",
  [sym_select_statement_standalone] = "select_statement_standalone",
  [sym_select_statement] = "select_statement",
  [sym_query_expression] = "query_expression",
  [sym_query_specification] = "query_specification",
  [sym_select_list] = "select_list",
  [sym_select_list_elem] = "select_list_elem",
  [sym_table_sources] = "table_sources",
  [sym_table_source] = "table_source",
  [sym_table_source_item] = "table_source_item",
  [sym_full_table_name] = "full_table_name",
  [sym_id_] = "id_",
  [sym_keyword] = "keyword",
  [aux_sym_tsql_file_repeat1] = "tsql_file_repeat1",
  [aux_sym_batch_repeat1] = "batch_repeat1",
  [aux_sym_batch_repeat2] = "batch_repeat2",
  [aux_sym_execute_body_batch_repeat1] = "execute_body_batch_repeat1",
  [aux_sym_execute_statement_arg_repeat1] = "execute_statement_arg_repeat1",
  [aux_sym_select_list_repeat1] = "select_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_go_statement_token1] = aux_sym_go_statement_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_func_proc_name_database_schema_token1] = aux_sym_func_proc_name_database_schema_token1,
  [aux_sym_execute_statement_arg_named_token1] = aux_sym_execute_statement_arg_named_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_constant_token1] = aux_sym_constant_token1,
  [aux_sym_query_specification_token1] = aux_sym_query_specification_token1,
  [aux_sym_query_specification_token2] = aux_sym_query_specification_token2,
  [aux_sym_select_list_elem_token1] = aux_sym_select_list_elem_token1,
  [aux_sym_select_list_elem_token2] = aux_sym_select_list_elem_token2,
  [sym_integer] = sym_integer,
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
  [sym_execute_parameter] = sym_execute_parameter,
  [sym_constant] = sym_constant,
  [sym_sql_clauses] = sym_sql_clauses,
  [sym_dml_clause] = sym_dml_clause,
  [sym_select_statement_standalone] = sym_select_statement_standalone,
  [sym_select_statement] = sym_select_statement,
  [sym_query_expression] = sym_query_expression,
  [sym_query_specification] = sym_query_specification,
  [sym_select_list] = sym_select_list,
  [sym_select_list_elem] = sym_select_list_elem,
  [sym_table_sources] = sym_table_sources,
  [sym_table_source] = sym_table_source,
  [sym_table_source_item] = sym_table_source_item,
  [sym_full_table_name] = sym_full_table_name,
  [sym_id_] = sym_id_,
  [sym_keyword] = sym_keyword,
  [aux_sym_tsql_file_repeat1] = aux_sym_tsql_file_repeat1,
  [aux_sym_batch_repeat1] = aux_sym_batch_repeat1,
  [aux_sym_batch_repeat2] = aux_sym_batch_repeat2,
  [aux_sym_execute_body_batch_repeat1] = aux_sym_execute_body_batch_repeat1,
  [aux_sym_execute_statement_arg_repeat1] = aux_sym_execute_statement_arg_repeat1,
  [aux_sym_select_list_repeat1] = aux_sym_select_list_repeat1,
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
  [aux_sym_func_proc_name_database_schema_token1] = {
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
  [aux_sym_constant_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_query_specification_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_query_specification_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_select_list_elem_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_select_list_elem_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
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
  [sym_execute_parameter] = {
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
  [sym_id_] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_tsql_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_batch_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_batch_repeat2] = {
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
  [aux_sym_select_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_count = 1,
  field_database = 2,
  field_name = 3,
  field_procedure = 4,
  field_schema = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_count] = "count",
  [field_database] = "database",
  [field_name] = "name",
  [field_procedure] = "procedure",
  [field_schema] = "schema",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_procedure, 0},
  [1] =
    {field_count, 1},
  [2] =
    {field_procedure, 2},
  [3] =
    {field_procedure, 2},
    {field_schema, 0},
  [5] =
    {field_procedure, 3},
    {field_schema, 1},
  [7] =
    {field_name, 0},
    {field_value, 2},
  [9] =
    {field_database, 0},
    {field_procedure, 3},
  [11] =
    {field_database, 0},
    {field_procedure, 4},
    {field_schema, 2},
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
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 33,
  [40] = 40,
  [41] = 41,
  [42] = 32,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
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
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      ADVANCE_MAP(
        '\'', 3,
        ',', 20,
        '.', 22,
        ';', 21,
        '=', 24,
        '@', 14,
        'N', 29,
        'T', 31,
        '[', 13,
        'F', 40,
        'f', 40,
        'G', 38,
        'g', 38,
        'S', 34,
        's', 34,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 1:
      if (lookahead == '\'') ADVANCE(3);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\'', 3,
        ',', 20,
        '.', 22,
        ';', 21,
        '@', 14,
        'N', 1,
        'G', 11,
        'g', 11,
        'S', 8,
        's', 8,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 5:
      if (lookahead == '[') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 6:
      if (lookahead == ']') ADVANCE(43);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 14:
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 15:
      if (eof) ADVANCE(17);
      ADVANCE_MAP(
        ',', 20,
        '.', 22,
        ';', 21,
        '[', 13,
        'F', 40,
        'f', 40,
        'G', 38,
        'g', 38,
        'S', 34,
        's', 34,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      ADVANCE_MAP(
        '.', 22,
        ';', 21,
        '@', 14,
        '[', 13,
        'G', 38,
        'g', 38,
        'S', 34,
        's', 34,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_go_statement_token1);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_go_statement_token1);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_func_proc_name_database_schema_token1);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_execute_statement_arg_named_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '\'') ADVANCE(3);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_query_specification_token1);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_query_specification_token1);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_query_specification_token2);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_select_list_elem_token1);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_select_list_elem_token1);
      if (lookahead == 'D') ADVANCE(32);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_select_list_elem_token1);
      if (lookahead == 'O') ADVANCE(30);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_select_list_elem_token1);
      if (lookahead == 'O') ADVANCE(45);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_select_list_elem_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(41);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_select_list_elem_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_select_list_elem_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_select_list_elem_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(35);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_select_list_elem_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(28);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_select_list_elem_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(19);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_select_list_elem_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(37);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_select_list_elem_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(39);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_select_list_elem_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(27);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_select_list_elem_token1);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_select_list_elem_token2);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_TODO);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 16},
  [3] = {.lex_state = 16},
  [4] = {.lex_state = 16},
  [5] = {.lex_state = 16},
  [6] = {.lex_state = 16},
  [7] = {.lex_state = 15},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 16},
  [15] = {.lex_state = 16},
  [16] = {.lex_state = 16},
  [17] = {.lex_state = 16},
  [18] = {.lex_state = 16},
  [19] = {.lex_state = 15},
  [20] = {.lex_state = 16},
  [21] = {.lex_state = 16},
  [22] = {.lex_state = 16},
  [23] = {.lex_state = 16},
  [24] = {.lex_state = 16},
  [25] = {.lex_state = 16},
  [26] = {.lex_state = 16},
  [27] = {.lex_state = 16},
  [28] = {.lex_state = 16},
  [29] = {.lex_state = 16},
  [30] = {.lex_state = 16},
  [31] = {.lex_state = 16},
  [32] = {.lex_state = 16},
  [33] = {.lex_state = 16},
  [34] = {.lex_state = 16},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 16},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_go_statement_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_func_proc_name_database_schema_token1] = ACTIONS(1),
    [aux_sym_execute_statement_arg_named_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_constant_token1] = ACTIONS(1),
    [aux_sym_query_specification_token1] = ACTIONS(1),
    [aux_sym_query_specification_token2] = ACTIONS(1),
    [aux_sym_select_list_elem_token1] = ACTIONS(1),
    [aux_sym_select_list_elem_token2] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_TODO] = ACTIONS(1),
  },
  [1] = {
    [sym_tsql_file] = STATE(74),
    [sym_batch] = STATE(2),
    [sym_go_statement] = STATE(18),
    [sym_execute_body_batch] = STATE(9),
    [sym_func_proc_name_server_database_schema] = STATE(36),
    [sym_func_proc_name_database_schema] = STATE(59),
    [sym_func_proc_name_schema] = STATE(58),
    [sym_sql_clauses] = STATE(5),
    [sym_dml_clause] = STATE(28),
    [sym_select_statement_standalone] = STATE(22),
    [sym_select_statement] = STATE(31),
    [sym_query_expression] = STATE(30),
    [sym_query_specification] = STATE(29),
    [sym_id_] = STATE(46),
    [sym_keyword] = STATE(42),
    [aux_sym_tsql_file_repeat1] = STATE(2),
    [aux_sym_batch_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_go_statement_token1] = ACTIONS(5),
    [aux_sym_func_proc_name_database_schema_token1] = ACTIONS(7),
    [aux_sym_query_specification_token1] = ACTIONS(9),
    [aux_sym_select_list_elem_token1] = ACTIONS(11),
    [aux_sym_select_list_elem_token2] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(5), 1,
      aux_sym_go_statement_token1,
    ACTIONS(7), 1,
      aux_sym_func_proc_name_database_schema_token1,
    ACTIONS(9), 1,
      aux_sym_query_specification_token1,
    ACTIONS(11), 1,
      aux_sym_select_list_elem_token1,
    ACTIONS(13), 1,
      aux_sym_select_list_elem_token2,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym_execute_body_batch,
    STATE(18), 1,
      sym_go_statement,
    STATE(22), 1,
      sym_select_statement_standalone,
    STATE(28), 1,
      sym_dml_clause,
    STATE(29), 1,
      sym_query_specification,
    STATE(30), 1,
      sym_query_expression,
    STATE(31), 1,
      sym_select_statement,
    STATE(36), 1,
      sym_func_proc_name_server_database_schema,
    STATE(42), 1,
      sym_keyword,
    STATE(46), 1,
      sym_id_,
    STATE(58), 1,
      sym_func_proc_name_schema,
    STATE(59), 1,
      sym_func_proc_name_database_schema,
    STATE(3), 2,
      sym_batch,
      aux_sym_tsql_file_repeat1,
    STATE(5), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
  [63] = 20,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      aux_sym_go_statement_token1,
    ACTIONS(22), 1,
      aux_sym_func_proc_name_database_schema_token1,
    ACTIONS(25), 1,
      aux_sym_query_specification_token1,
    ACTIONS(28), 1,
      aux_sym_select_list_elem_token1,
    ACTIONS(31), 1,
      aux_sym_select_list_elem_token2,
    STATE(9), 1,
      sym_execute_body_batch,
    STATE(18), 1,
      sym_go_statement,
    STATE(22), 1,
      sym_select_statement_standalone,
    STATE(28), 1,
      sym_dml_clause,
    STATE(29), 1,
      sym_query_specification,
    STATE(30), 1,
      sym_query_expression,
    STATE(31), 1,
      sym_select_statement,
    STATE(36), 1,
      sym_func_proc_name_server_database_schema,
    STATE(42), 1,
      sym_keyword,
    STATE(46), 1,
      sym_id_,
    STATE(58), 1,
      sym_func_proc_name_schema,
    STATE(59), 1,
      sym_func_proc_name_database_schema,
    STATE(3), 2,
      sym_batch,
      aux_sym_tsql_file_repeat1,
    STATE(5), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
  [126] = 9,
    STATE(22), 1,
      sym_select_statement_standalone,
    STATE(28), 1,
      sym_dml_clause,
    STATE(29), 1,
      sym_query_specification,
    STATE(30), 1,
      sym_query_expression,
    STATE(31), 1,
      sym_select_statement,
    STATE(6), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(15), 2,
      sym_go_statement,
      aux_sym_batch_repeat2,
    ACTIONS(34), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_database_schema_token1,
      aux_sym_select_list_elem_token2,
    ACTIONS(36), 3,
      aux_sym_go_statement_token1,
      aux_sym_query_specification_token1,
      aux_sym_select_list_elem_token1,
  [160] = 9,
    STATE(22), 1,
      sym_select_statement_standalone,
    STATE(28), 1,
      sym_dml_clause,
    STATE(29), 1,
      sym_query_specification,
    STATE(30), 1,
      sym_query_expression,
    STATE(31), 1,
      sym_select_statement,
    STATE(6), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(17), 2,
      sym_go_statement,
      aux_sym_batch_repeat2,
    ACTIONS(38), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_database_schema_token1,
      aux_sym_select_list_elem_token2,
    ACTIONS(40), 3,
      aux_sym_go_statement_token1,
      aux_sym_query_specification_token1,
      aux_sym_select_list_elem_token1,
  [194] = 9,
    ACTIONS(46), 1,
      aux_sym_query_specification_token1,
    STATE(22), 1,
      sym_select_statement_standalone,
    STATE(28), 1,
      sym_dml_clause,
    STATE(29), 1,
      sym_query_specification,
    STATE(30), 1,
      sym_query_expression,
    STATE(31), 1,
      sym_select_statement,
    ACTIONS(44), 2,
      aux_sym_go_statement_token1,
      aux_sym_select_list_elem_token1,
    STATE(6), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    ACTIONS(42), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_database_schema_token1,
      aux_sym_select_list_elem_token2,
  [226] = 4,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    STATE(7), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(49), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_database_schema_token1,
      aux_sym_select_list_elem_token2,
    ACTIONS(51), 4,
      aux_sym_go_statement_token1,
      aux_sym_query_specification_token1,
      aux_sym_query_specification_token2,
      aux_sym_select_list_elem_token1,
  [245] = 4,
    ACTIONS(60), 1,
      anon_sym_COMMA,
    STATE(10), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(56), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_database_schema_token1,
      aux_sym_select_list_elem_token2,
    ACTIONS(58), 4,
      aux_sym_go_statement_token1,
      aux_sym_query_specification_token1,
      aux_sym_query_specification_token2,
      aux_sym_select_list_elem_token1,
  [264] = 9,
    ACTIONS(62), 1,
      aux_sym_go_statement_token1,
    ACTIONS(64), 1,
      aux_sym_query_specification_token1,
    STATE(16), 1,
      sym_go_statement,
    STATE(22), 1,
      sym_select_statement_standalone,
    STATE(28), 1,
      sym_dml_clause,
    STATE(29), 1,
      sym_query_specification,
    STATE(30), 1,
      sym_query_expression,
    STATE(31), 1,
      sym_select_statement,
    STATE(4), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
  [293] = 4,
    ACTIONS(60), 1,
      anon_sym_COMMA,
    STATE(7), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(66), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_database_schema_token1,
      aux_sym_select_list_elem_token2,
    ACTIONS(68), 4,
      aux_sym_go_statement_token1,
      aux_sym_query_specification_token1,
      aux_sym_query_specification_token2,
      aux_sym_select_list_elem_token1,
  [312] = 2,
    ACTIONS(72), 4,
      aux_sym_go_statement_token1,
      aux_sym_query_specification_token1,
      aux_sym_query_specification_token2,
      aux_sym_select_list_elem_token1,
    ACTIONS(70), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_database_schema_token1,
      aux_sym_select_list_elem_token2,
  [326] = 9,
    ACTIONS(74), 1,
      aux_sym_go_statement_token1,
    ACTIONS(76), 1,
      aux_sym_select_list_elem_token1,
    ACTIONS(78), 1,
      aux_sym_select_list_elem_token2,
    STATE(21), 1,
      sym_table_source,
    STATE(23), 1,
      sym_full_table_name,
    STATE(24), 1,
      sym_id_,
    STATE(25), 1,
      sym_table_sources,
    STATE(26), 1,
      sym_table_source_item,
    STATE(32), 1,
      sym_keyword,
  [354] = 2,
    ACTIONS(51), 4,
      aux_sym_go_statement_token1,
      aux_sym_query_specification_token1,
      aux_sym_query_specification_token2,
      aux_sym_select_list_elem_token1,
    ACTIONS(49), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_func_proc_name_database_schema_token1,
      aux_sym_select_list_elem_token2,
  [368] = 4,
    ACTIONS(86), 1,
      sym_integer,
    ACTIONS(84), 2,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
    ACTIONS(80), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_database_schema_token1,
      aux_sym_select_list_elem_token2,
    ACTIONS(82), 3,
      aux_sym_go_statement_token1,
      aux_sym_query_specification_token1,
      aux_sym_select_list_elem_token1,
  [386] = 3,
    STATE(20), 2,
      sym_go_statement,
      aux_sym_batch_repeat2,
    ACTIONS(88), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_database_schema_token1,
      aux_sym_select_list_elem_token2,
    ACTIONS(90), 3,
      aux_sym_go_statement_token1,
      aux_sym_query_specification_token1,
      aux_sym_select_list_elem_token1,
  [401] = 3,
    STATE(15), 2,
      sym_go_statement,
      aux_sym_batch_repeat2,
    ACTIONS(34), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_database_schema_token1,
      aux_sym_select_list_elem_token2,
    ACTIONS(36), 3,
      aux_sym_go_statement_token1,
      aux_sym_query_specification_token1,
      aux_sym_select_list_elem_token1,
  [416] = 3,
    STATE(20), 2,
      sym_go_statement,
      aux_sym_batch_repeat2,
    ACTIONS(34), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_database_schema_token1,
      aux_sym_select_list_elem_token2,
    ACTIONS(36), 3,
      aux_sym_go_statement_token1,
      aux_sym_query_specification_token1,
      aux_sym_select_list_elem_token1,
  [431] = 3,
    STATE(17), 2,
      sym_go_statement,
      aux_sym_batch_repeat2,
    ACTIONS(38), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_database_schema_token1,
      aux_sym_select_list_elem_token2,
    ACTIONS(40), 3,
      aux_sym_go_statement_token1,
      aux_sym_query_specification_token1,
      aux_sym_select_list_elem_token1,
  [446] = 3,
    ACTIONS(96), 1,
      aux_sym_query_specification_token2,
    ACTIONS(94), 3,
      aux_sym_go_statement_token1,
      aux_sym_query_specification_token1,
      aux_sym_select_list_elem_token1,
    ACTIONS(92), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_database_schema_token1,
      aux_sym_select_list_elem_token2,
  [461] = 4,
    ACTIONS(100), 1,
      aux_sym_go_statement_token1,
    ACTIONS(103), 2,
      aux_sym_query_specification_token1,
      aux_sym_select_list_elem_token1,
    STATE(20), 2,
      sym_go_statement,
      aux_sym_batch_repeat2,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_database_schema_token1,
      aux_sym_select_list_elem_token2,
  [478] = 2,
    ACTIONS(107), 3,
      aux_sym_go_statement_token1,
      aux_sym_query_specification_token1,
      aux_sym_select_list_elem_token1,
    ACTIONS(105), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_database_schema_token1,
      aux_sym_select_list_elem_token2,
  [490] = 2,
    ACTIONS(111), 3,
      aux_sym_go_statement_token1,
      aux_sym_query_specification_token1,
      aux_sym_select_list_elem_token1,
    ACTIONS(109), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_database_schema_token1,
      aux_sym_select_list_elem_token2,
  [502] = 2,
    ACTIONS(115), 3,
      aux_sym_go_statement_token1,
      aux_sym_query_specification_token1,
      aux_sym_select_list_elem_token1,
    ACTIONS(113), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_database_schema_token1,
      aux_sym_select_list_elem_token2,
  [514] = 2,
    ACTIONS(119), 3,
      aux_sym_go_statement_token1,
      aux_sym_query_specification_token1,
      aux_sym_select_list_elem_token1,
    ACTIONS(117), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_database_schema_token1,
      aux_sym_select_list_elem_token2,
  [526] = 2,
    ACTIONS(123), 3,
      aux_sym_go_statement_token1,
      aux_sym_query_specification_token1,
      aux_sym_select_list_elem_token1,
    ACTIONS(121), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_database_schema_token1,
      aux_sym_select_list_elem_token2,
  [538] = 2,
    ACTIONS(127), 3,
      aux_sym_go_statement_token1,
      aux_sym_query_specification_token1,
      aux_sym_select_list_elem_token1,
    ACTIONS(125), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_database_schema_token1,
      aux_sym_select_list_elem_token2,
  [550] = 3,
    ACTIONS(86), 1,
      sym_integer,
    ACTIONS(80), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_database_schema_token1,
      aux_sym_select_list_elem_token2,
    ACTIONS(82), 3,
      aux_sym_go_statement_token1,
      aux_sym_query_specification_token1,
      aux_sym_select_list_elem_token1,
  [564] = 3,
    ACTIONS(133), 1,
      anon_sym_SEMI,
    ACTIONS(129), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_database_schema_token1,
      aux_sym_select_list_elem_token2,
    ACTIONS(131), 3,
      aux_sym_go_statement_token1,
      aux_sym_query_specification_token1,
      aux_sym_select_list_elem_token1,
  [578] = 2,
    ACTIONS(137), 3,
      aux_sym_go_statement_token1,
      aux_sym_query_specification_token1,
      aux_sym_select_list_elem_token1,
    ACTIONS(135), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_database_schema_token1,
      aux_sym_select_list_elem_token2,
  [590] = 2,
    ACTIONS(141), 3,
      aux_sym_go_statement_token1,
      aux_sym_query_specification_token1,
      aux_sym_select_list_elem_token1,
    ACTIONS(139), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_database_schema_token1,
      aux_sym_select_list_elem_token2,
  [602] = 2,
    ACTIONS(145), 3,
      aux_sym_go_statement_token1,
      aux_sym_query_specification_token1,
      aux_sym_select_list_elem_token1,
    ACTIONS(143), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_database_schema_token1,
      aux_sym_select_list_elem_token2,
  [614] = 2,
    ACTIONS(149), 3,
      aux_sym_go_statement_token1,
      aux_sym_query_specification_token1,
      aux_sym_select_list_elem_token1,
    ACTIONS(147), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_database_schema_token1,
      aux_sym_select_list_elem_token2,
  [626] = 2,
    ACTIONS(151), 3,
      aux_sym_go_statement_token1,
      aux_sym_query_specification_token1,
      aux_sym_select_list_elem_token1,
    ACTIONS(84), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_func_proc_name_database_schema_token1,
      aux_sym_select_list_elem_token2,
  [638] = 2,
    ACTIONS(153), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_database_schema_token1,
      aux_sym_select_list_elem_token2,
    ACTIONS(155), 3,
      aux_sym_go_statement_token1,
      aux_sym_query_specification_token1,
      aux_sym_select_list_elem_token1,
  [649] = 6,
    ACTIONS(11), 1,
      aux_sym_select_list_elem_token1,
    ACTIONS(13), 1,
      aux_sym_select_list_elem_token2,
    ACTIONS(157), 1,
      aux_sym_go_statement_token1,
    ACTIONS(159), 1,
      aux_sym_func_proc_name_database_schema_token1,
    STATE(42), 1,
      sym_keyword,
    STATE(73), 1,
      sym_id_,
  [668] = 5,
    ACTIONS(163), 1,
      anon_sym_SEMI,
    ACTIONS(165), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(47), 1,
      sym_execute_statement_arg_named,
    STATE(50), 1,
      sym_execute_statement_arg,
    ACTIONS(161), 2,
      aux_sym_go_statement_token1,
      aux_sym_query_specification_token1,
  [685] = 2,
    ACTIONS(167), 3,
      ts_builtin_sym_end,
      aux_sym_func_proc_name_database_schema_token1,
      aux_sym_select_list_elem_token2,
    ACTIONS(169), 3,
      aux_sym_go_statement_token1,
      aux_sym_query_specification_token1,
      aux_sym_select_list_elem_token1,
  [696] = 6,
    ACTIONS(11), 1,
      aux_sym_select_list_elem_token1,
    ACTIONS(13), 1,
      aux_sym_select_list_elem_token2,
    ACTIONS(157), 1,
      aux_sym_go_statement_token1,
    ACTIONS(171), 1,
      aux_sym_func_proc_name_database_schema_token1,
    STATE(40), 1,
      sym_id_,
    STATE(42), 1,
      sym_keyword,
  [715] = 1,
    ACTIONS(84), 5,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      aux_sym_func_proc_name_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_query_specification_token1,
  [723] = 2,
    ACTIONS(175), 1,
      aux_sym_func_proc_name_database_schema_token1,
    ACTIONS(173), 4,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_query_specification_token1,
  [733] = 5,
    ACTIONS(11), 1,
      aux_sym_select_list_elem_token1,
    ACTIONS(13), 1,
      aux_sym_select_list_elem_token2,
    ACTIONS(157), 1,
      aux_sym_go_statement_token1,
    STATE(42), 1,
      sym_keyword,
    STATE(56), 1,
      sym_id_,
  [749] = 1,
    ACTIONS(147), 5,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      aux_sym_func_proc_name_database_schema_token1,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_query_specification_token1,
  [757] = 5,
    ACTIONS(11), 1,
      aux_sym_select_list_elem_token1,
    ACTIONS(13), 1,
      aux_sym_select_list_elem_token2,
    ACTIONS(157), 1,
      aux_sym_go_statement_token1,
    STATE(42), 1,
      sym_keyword,
    STATE(60), 1,
      sym_id_,
  [773] = 3,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(177), 3,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      aux_sym_query_specification_token1,
  [785] = 5,
    ACTIONS(11), 1,
      aux_sym_select_list_elem_token1,
    ACTIONS(13), 1,
      aux_sym_select_list_elem_token2,
    ACTIONS(157), 1,
      aux_sym_go_statement_token1,
    STATE(42), 1,
      sym_keyword,
    STATE(57), 1,
      sym_id_,
  [801] = 2,
    ACTIONS(184), 1,
      aux_sym_func_proc_name_database_schema_token1,
    ACTIONS(182), 4,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_query_specification_token1,
  [811] = 2,
    STATE(51), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(186), 4,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_query_specification_token1,
  [821] = 3,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(188), 3,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      aux_sym_query_specification_token1,
  [833] = 4,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_SEMI,
    STATE(48), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(193), 2,
      aux_sym_go_statement_token1,
      aux_sym_query_specification_token1,
  [847] = 4,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      anon_sym_SEMI,
    STATE(49), 1,
      aux_sym_execute_body_batch_repeat1,
    ACTIONS(199), 2,
      aux_sym_go_statement_token1,
      aux_sym_query_specification_token1,
  [861] = 2,
    STATE(44), 1,
      aux_sym_execute_statement_arg_repeat1,
    ACTIONS(203), 4,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_query_specification_token1,
  [871] = 5,
    ACTIONS(11), 1,
      aux_sym_select_list_elem_token1,
    ACTIONS(13), 1,
      aux_sym_select_list_elem_token2,
    ACTIONS(157), 1,
      aux_sym_go_statement_token1,
    STATE(42), 1,
      sym_keyword,
    STATE(61), 1,
      sym_id_,
  [887] = 1,
    ACTIONS(205), 4,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_query_specification_token1,
  [894] = 1,
    ACTIONS(188), 4,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_query_specification_token1,
  [901] = 3,
    STATE(8), 1,
      sym_select_list_elem,
    STATE(19), 1,
      sym_select_list,
    ACTIONS(207), 2,
      aux_sym_select_list_elem_token1,
      aux_sym_select_list_elem_token2,
  [912] = 1,
    ACTIONS(209), 4,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_query_specification_token1,
  [919] = 1,
    ACTIONS(211), 4,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_query_specification_token1,
  [926] = 1,
    ACTIONS(213), 4,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_query_specification_token1,
  [933] = 1,
    ACTIONS(215), 4,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_query_specification_token1,
  [940] = 1,
    ACTIONS(217), 4,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_query_specification_token1,
  [947] = 1,
    ACTIONS(219), 4,
      aux_sym_go_statement_token1,
      anon_sym_SEMI,
      aux_sym_execute_statement_arg_named_token1,
      aux_sym_query_specification_token1,
  [954] = 1,
    ACTIONS(221), 4,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_query_specification_token1,
  [961] = 1,
    ACTIONS(223), 4,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_query_specification_token1,
  [968] = 1,
    ACTIONS(177), 4,
      aux_sym_go_statement_token1,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_query_specification_token1,
  [975] = 3,
    ACTIONS(225), 1,
      aux_sym_constant_token1,
    STATE(53), 1,
      sym_constant,
    STATE(63), 1,
      sym_execute_parameter,
  [985] = 3,
    ACTIONS(165), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(47), 1,
      sym_execute_statement_arg_named,
    STATE(54), 1,
      sym_execute_statement_arg,
  [995] = 2,
    STATE(13), 1,
      sym_select_list_elem,
    ACTIONS(207), 2,
      aux_sym_select_list_elem_token1,
      aux_sym_select_list_elem_token2,
  [1003] = 1,
    ACTIONS(227), 2,
      aux_sym_go_statement_token1,
      aux_sym_query_specification_token1,
  [1008] = 2,
    ACTIONS(165), 1,
      aux_sym_execute_statement_arg_named_token1,
    STATE(64), 1,
      sym_execute_statement_arg_named,
  [1015] = 1,
    ACTIONS(193), 2,
      aux_sym_go_statement_token1,
      aux_sym_query_specification_token1,
  [1020] = 1,
    ACTIONS(199), 2,
      aux_sym_go_statement_token1,
      aux_sym_query_specification_token1,
  [1025] = 1,
    ACTIONS(229), 1,
      anon_sym_EQ,
  [1029] = 1,
    ACTIONS(231), 1,
      aux_sym_func_proc_name_database_schema_token1,
  [1033] = 1,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 63,
  [SMALL_STATE(4)] = 126,
  [SMALL_STATE(5)] = 160,
  [SMALL_STATE(6)] = 194,
  [SMALL_STATE(7)] = 226,
  [SMALL_STATE(8)] = 245,
  [SMALL_STATE(9)] = 264,
  [SMALL_STATE(10)] = 293,
  [SMALL_STATE(11)] = 312,
  [SMALL_STATE(12)] = 326,
  [SMALL_STATE(13)] = 354,
  [SMALL_STATE(14)] = 368,
  [SMALL_STATE(15)] = 386,
  [SMALL_STATE(16)] = 401,
  [SMALL_STATE(17)] = 416,
  [SMALL_STATE(18)] = 431,
  [SMALL_STATE(19)] = 446,
  [SMALL_STATE(20)] = 461,
  [SMALL_STATE(21)] = 478,
  [SMALL_STATE(22)] = 490,
  [SMALL_STATE(23)] = 502,
  [SMALL_STATE(24)] = 514,
  [SMALL_STATE(25)] = 526,
  [SMALL_STATE(26)] = 538,
  [SMALL_STATE(27)] = 550,
  [SMALL_STATE(28)] = 564,
  [SMALL_STATE(29)] = 578,
  [SMALL_STATE(30)] = 590,
  [SMALL_STATE(31)] = 602,
  [SMALL_STATE(32)] = 614,
  [SMALL_STATE(33)] = 626,
  [SMALL_STATE(34)] = 638,
  [SMALL_STATE(35)] = 649,
  [SMALL_STATE(36)] = 668,
  [SMALL_STATE(37)] = 685,
  [SMALL_STATE(38)] = 696,
  [SMALL_STATE(39)] = 715,
  [SMALL_STATE(40)] = 723,
  [SMALL_STATE(41)] = 733,
  [SMALL_STATE(42)] = 749,
  [SMALL_STATE(43)] = 757,
  [SMALL_STATE(44)] = 773,
  [SMALL_STATE(45)] = 785,
  [SMALL_STATE(46)] = 801,
  [SMALL_STATE(47)] = 811,
  [SMALL_STATE(48)] = 821,
  [SMALL_STATE(49)] = 833,
  [SMALL_STATE(50)] = 847,
  [SMALL_STATE(51)] = 861,
  [SMALL_STATE(52)] = 871,
  [SMALL_STATE(53)] = 887,
  [SMALL_STATE(54)] = 894,
  [SMALL_STATE(55)] = 901,
  [SMALL_STATE(56)] = 912,
  [SMALL_STATE(57)] = 919,
  [SMALL_STATE(58)] = 926,
  [SMALL_STATE(59)] = 933,
  [SMALL_STATE(60)] = 940,
  [SMALL_STATE(61)] = 947,
  [SMALL_STATE(62)] = 954,
  [SMALL_STATE(63)] = 961,
  [SMALL_STATE(64)] = 968,
  [SMALL_STATE(65)] = 975,
  [SMALL_STATE(66)] = 985,
  [SMALL_STATE(67)] = 995,
  [SMALL_STATE(68)] = 1003,
  [SMALL_STATE(69)] = 1008,
  [SMALL_STATE(70)] = 1015,
  [SMALL_STATE(71)] = 1020,
  [SMALL_STATE(72)] = 1025,
  [SMALL_STATE(73)] = 1029,
  [SMALL_STATE(74)] = 1033,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsql_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsql_file, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_batch, 2, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_batch, 2, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_batch, 1, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_batch, 1, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_batch_repeat1, 2, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_batch_repeat1, 2, 0, 0),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_batch_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_list_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_select_list_repeat1, 2, 0, 0),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_list_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_list, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_list, 2, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list_elem, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_list_elem, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_go_statement, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_go_statement, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_batch, 3, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_batch, 3, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_specification, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_specification, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_batch_repeat2, 2, 0, 0),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_batch_repeat2, 2, 0, 0), SHIFT_REPEAT(27),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_batch_repeat2, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_sources, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_sources, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_clause, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dml_clause, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_source_item, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_source_item, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_table_name, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_table_name, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_specification, 4, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_specification, 4, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_source, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_source, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_clauses, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_clauses, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_expression, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_expression, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 1, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement_standalone, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement_standalone, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_, 1, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_clauses, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_clauses, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body_batch, 1, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_go_statement, 2, 0, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_go_statement, 2, 0, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_schema, 3, 0, 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_statement_arg_repeat1, 2, 0, 0),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_statement_arg_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_schema, 1, 0, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_statement_arg, 1, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_body_batch_repeat1, 2, 0, 0),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_body_batch_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body_batch, 3, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body_batch, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_statement_arg, 2, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_parameter, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 4, 0, 5),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 3, 0, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_server_database_schema, 1, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 5, 0, 8),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proc_name_database_schema, 4, 0, 7),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_statement_arg_named, 3, 0, 6),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body_batch, 4, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [233] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
