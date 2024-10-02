#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  aux_sym_go_statement_token1 = 1,
  anon_sym_TODO = 2,
  anon_sym_SEMI = 3,
  aux_sym_query_specification_token1 = 4,
  aux_sym_query_specification_token2 = 5,
  anon_sym_COMMA = 6,
  aux_sym_select_list_elem_token1 = 7,
  aux_sym_select_list_elem_token2 = 8,
  sym_integer = 9,
  sym_tsql_file = 10,
  sym_batch = 11,
  sym_go_statement = 12,
  sym_execute_body_batch = 13,
  sym_sql_clauses = 14,
  sym_dml_clause = 15,
  sym_select_statement_standalone = 16,
  sym_select_statement = 17,
  sym_query_expression = 18,
  sym_query_specification = 19,
  sym_select_list = 20,
  sym_select_list_elem = 21,
  sym_table_sources = 22,
  sym_table_source = 23,
  sym_table_source_item = 24,
  sym_full_table_name = 25,
  sym_id_ = 26,
  aux_sym_tsql_file_repeat1 = 27,
  aux_sym_batch_repeat1 = 28,
  aux_sym_batch_repeat2 = 29,
  aux_sym_select_list_repeat1 = 30,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_go_statement_token1] = "go_statement_token1",
  [anon_sym_TODO] = "TODO",
  [anon_sym_SEMI] = ";",
  [aux_sym_query_specification_token1] = "query_specification_token1",
  [aux_sym_query_specification_token2] = "query_specification_token2",
  [anon_sym_COMMA] = ",",
  [aux_sym_select_list_elem_token1] = "select_list_elem_token1",
  [aux_sym_select_list_elem_token2] = "select_list_elem_token2",
  [sym_integer] = "integer",
  [sym_tsql_file] = "tsql_file",
  [sym_batch] = "batch",
  [sym_go_statement] = "go_statement",
  [sym_execute_body_batch] = "execute_body_batch",
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
  [aux_sym_tsql_file_repeat1] = "tsql_file_repeat1",
  [aux_sym_batch_repeat1] = "batch_repeat1",
  [aux_sym_batch_repeat2] = "batch_repeat2",
  [aux_sym_select_list_repeat1] = "select_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_go_statement_token1] = aux_sym_go_statement_token1,
  [anon_sym_TODO] = anon_sym_TODO,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_query_specification_token1] = aux_sym_query_specification_token1,
  [aux_sym_query_specification_token2] = aux_sym_query_specification_token2,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_select_list_elem_token1] = aux_sym_select_list_elem_token1,
  [aux_sym_select_list_elem_token2] = aux_sym_select_list_elem_token2,
  [sym_integer] = sym_integer,
  [sym_tsql_file] = sym_tsql_file,
  [sym_batch] = sym_batch,
  [sym_go_statement] = sym_go_statement,
  [sym_execute_body_batch] = sym_execute_body_batch,
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
  [aux_sym_tsql_file_repeat1] = aux_sym_tsql_file_repeat1,
  [aux_sym_batch_repeat1] = aux_sym_batch_repeat1,
  [aux_sym_batch_repeat2] = aux_sym_batch_repeat2,
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
  [anon_sym_TODO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
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
  [anon_sym_COMMA] = {
    .visible = true,
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
  [aux_sym_select_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_count = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_count] = "count",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_count, 1},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      ADVANCE_MAP(
        ',', 22,
        ';', 19,
        'T', 2,
        '[', 15,
        'F', 13,
        'f', 13,
        'G', 11,
        'g', 11,
        'S', 7,
        's', 7,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 1:
      if (lookahead == 'D') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == 'O') ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == 'O') ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead == '[') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == ']') ADVANCE(24);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_go_statement_token1);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_query_specification_token1);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_query_specification_token2);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_select_list_elem_token1);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_select_list_elem_token2);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_go_statement_token1] = ACTIONS(1),
    [anon_sym_TODO] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_query_specification_token1] = ACTIONS(1),
    [aux_sym_query_specification_token2] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_select_list_elem_token2] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
  },
  [1] = {
    [sym_tsql_file] = STATE(37),
    [sym_batch] = STATE(3),
    [sym_go_statement] = STATE(15),
    [sym_execute_body_batch] = STATE(7),
    [sym_sql_clauses] = STATE(4),
    [sym_dml_clause] = STATE(22),
    [sym_select_statement_standalone] = STATE(31),
    [sym_select_statement] = STATE(30),
    [sym_query_expression] = STATE(24),
    [sym_query_specification] = STATE(23),
    [aux_sym_tsql_file_repeat1] = STATE(3),
    [aux_sym_batch_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_go_statement_token1] = ACTIONS(5),
    [anon_sym_TODO] = ACTIONS(7),
    [aux_sym_query_specification_token1] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      aux_sym_go_statement_token1,
    ACTIONS(16), 1,
      anon_sym_TODO,
    ACTIONS(19), 1,
      aux_sym_query_specification_token1,
    STATE(7), 1,
      sym_execute_body_batch,
    STATE(15), 1,
      sym_go_statement,
    STATE(22), 1,
      sym_dml_clause,
    STATE(23), 1,
      sym_query_specification,
    STATE(24), 1,
      sym_query_expression,
    STATE(30), 1,
      sym_select_statement,
    STATE(31), 1,
      sym_select_statement_standalone,
    STATE(2), 2,
      sym_batch,
      aux_sym_tsql_file_repeat1,
    STATE(4), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
  [42] = 13,
    ACTIONS(5), 1,
      aux_sym_go_statement_token1,
    ACTIONS(7), 1,
      anon_sym_TODO,
    ACTIONS(9), 1,
      aux_sym_query_specification_token1,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_execute_body_batch,
    STATE(15), 1,
      sym_go_statement,
    STATE(22), 1,
      sym_dml_clause,
    STATE(23), 1,
      sym_query_specification,
    STATE(24), 1,
      sym_query_expression,
    STATE(30), 1,
      sym_select_statement,
    STATE(31), 1,
      sym_select_statement_standalone,
    STATE(2), 2,
      sym_batch,
      aux_sym_tsql_file_repeat1,
    STATE(4), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
  [84] = 8,
    STATE(22), 1,
      sym_dml_clause,
    STATE(23), 1,
      sym_query_specification,
    STATE(24), 1,
      sym_query_expression,
    STATE(30), 1,
      sym_select_statement,
    STATE(31), 1,
      sym_select_statement_standalone,
    STATE(6), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(19), 2,
      sym_go_statement,
      aux_sym_batch_repeat2,
    ACTIONS(24), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_TODO,
      aux_sym_query_specification_token1,
  [114] = 8,
    STATE(22), 1,
      sym_dml_clause,
    STATE(23), 1,
      sym_query_specification,
    STATE(24), 1,
      sym_query_expression,
    STATE(30), 1,
      sym_select_statement,
    STATE(31), 1,
      sym_select_statement_standalone,
    STATE(6), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    STATE(16), 2,
      sym_go_statement,
      aux_sym_batch_repeat2,
    ACTIONS(26), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_TODO,
      aux_sym_query_specification_token1,
  [144] = 8,
    ACTIONS(30), 1,
      aux_sym_query_specification_token1,
    STATE(22), 1,
      sym_dml_clause,
    STATE(23), 1,
      sym_query_specification,
    STATE(24), 1,
      sym_query_expression,
    STATE(30), 1,
      sym_select_statement,
    STATE(31), 1,
      sym_select_statement_standalone,
    STATE(6), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
    ACTIONS(28), 3,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_TODO,
  [172] = 9,
    ACTIONS(5), 1,
      aux_sym_go_statement_token1,
    ACTIONS(9), 1,
      aux_sym_query_specification_token1,
    STATE(14), 1,
      sym_go_statement,
    STATE(22), 1,
      sym_dml_clause,
    STATE(23), 1,
      sym_query_specification,
    STATE(24), 1,
      sym_query_expression,
    STATE(30), 1,
      sym_select_statement,
    STATE(31), 1,
      sym_select_statement_standalone,
    STATE(5), 2,
      sym_sql_clauses,
      aux_sym_batch_repeat1,
  [201] = 3,
    ACTIONS(35), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(33), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_TODO,
      anon_sym_SEMI,
      aux_sym_query_specification_token1,
      aux_sym_query_specification_token2,
  [216] = 3,
    ACTIONS(39), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(37), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_TODO,
      anon_sym_SEMI,
      aux_sym_query_specification_token1,
      aux_sym_query_specification_token2,
  [231] = 3,
    ACTIONS(35), 1,
      anon_sym_COMMA,
    STATE(8), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(42), 6,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_TODO,
      anon_sym_SEMI,
      aux_sym_query_specification_token1,
      aux_sym_query_specification_token2,
  [246] = 1,
    ACTIONS(37), 7,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_TODO,
      anon_sym_SEMI,
      aux_sym_query_specification_token1,
      aux_sym_query_specification_token2,
      anon_sym_COMMA,
  [256] = 6,
    STATE(25), 1,
      sym_table_sources,
    STATE(26), 1,
      sym_table_source,
    STATE(27), 1,
      sym_table_source_item,
    STATE(28), 1,
      sym_full_table_name,
    STATE(29), 1,
      sym_id_,
    ACTIONS(44), 2,
      aux_sym_select_list_elem_token1,
      aux_sym_select_list_elem_token2,
  [276] = 1,
    ACTIONS(46), 7,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_TODO,
      anon_sym_SEMI,
      aux_sym_query_specification_token1,
      aux_sym_query_specification_token2,
      anon_sym_COMMA,
  [286] = 2,
    STATE(16), 2,
      sym_go_statement,
      aux_sym_batch_repeat2,
    ACTIONS(26), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_TODO,
      aux_sym_query_specification_token1,
  [297] = 2,
    STATE(19), 2,
      sym_go_statement,
      aux_sym_batch_repeat2,
    ACTIONS(24), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_TODO,
      aux_sym_query_specification_token1,
  [308] = 2,
    STATE(17), 2,
      sym_go_statement,
      aux_sym_batch_repeat2,
    ACTIONS(48), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_TODO,
      aux_sym_query_specification_token1,
  [319] = 3,
    ACTIONS(52), 1,
      aux_sym_go_statement_token1,
    STATE(17), 2,
      sym_go_statement,
      aux_sym_batch_repeat2,
    ACTIONS(50), 3,
      ts_builtin_sym_end,
      anon_sym_TODO,
      aux_sym_query_specification_token1,
  [332] = 2,
    ACTIONS(57), 1,
      aux_sym_query_specification_token2,
    ACTIONS(55), 5,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_TODO,
      anon_sym_SEMI,
      aux_sym_query_specification_token1,
  [343] = 2,
    STATE(17), 2,
      sym_go_statement,
      aux_sym_batch_repeat2,
    ACTIONS(26), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_TODO,
      aux_sym_query_specification_token1,
  [354] = 1,
    ACTIONS(59), 5,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_TODO,
      anon_sym_SEMI,
      aux_sym_query_specification_token1,
  [362] = 2,
    ACTIONS(63), 1,
      sym_integer,
    ACTIONS(61), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_TODO,
      aux_sym_query_specification_token1,
  [372] = 2,
    ACTIONS(67), 1,
      anon_sym_SEMI,
    ACTIONS(65), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_TODO,
      aux_sym_query_specification_token1,
  [382] = 1,
    ACTIONS(69), 5,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_TODO,
      anon_sym_SEMI,
      aux_sym_query_specification_token1,
  [390] = 1,
    ACTIONS(71), 5,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_TODO,
      anon_sym_SEMI,
      aux_sym_query_specification_token1,
  [398] = 1,
    ACTIONS(73), 5,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_TODO,
      anon_sym_SEMI,
      aux_sym_query_specification_token1,
  [406] = 1,
    ACTIONS(75), 5,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_TODO,
      anon_sym_SEMI,
      aux_sym_query_specification_token1,
  [414] = 1,
    ACTIONS(77), 5,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_TODO,
      anon_sym_SEMI,
      aux_sym_query_specification_token1,
  [422] = 1,
    ACTIONS(79), 5,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_TODO,
      anon_sym_SEMI,
      aux_sym_query_specification_token1,
  [430] = 1,
    ACTIONS(81), 5,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_TODO,
      anon_sym_SEMI,
      aux_sym_query_specification_token1,
  [438] = 1,
    ACTIONS(83), 5,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_TODO,
      anon_sym_SEMI,
      aux_sym_query_specification_token1,
  [446] = 1,
    ACTIONS(85), 5,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_TODO,
      anon_sym_SEMI,
      aux_sym_query_specification_token1,
  [454] = 1,
    ACTIONS(87), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_TODO,
      aux_sym_query_specification_token1,
  [461] = 3,
    STATE(10), 1,
      sym_select_list_elem,
    STATE(18), 1,
      sym_select_list,
    ACTIONS(89), 2,
      aux_sym_select_list_elem_token1,
      aux_sym_select_list_elem_token2,
  [472] = 1,
    ACTIONS(91), 4,
      ts_builtin_sym_end,
      aux_sym_go_statement_token1,
      anon_sym_TODO,
      aux_sym_query_specification_token1,
  [479] = 2,
    STATE(11), 1,
      sym_select_list_elem,
    ACTIONS(89), 2,
      aux_sym_select_list_elem_token1,
      aux_sym_select_list_elem_token2,
  [487] = 1,
    ACTIONS(93), 2,
      aux_sym_go_statement_token1,
      aux_sym_query_specification_token1,
  [492] = 1,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 114,
  [SMALL_STATE(6)] = 144,
  [SMALL_STATE(7)] = 172,
  [SMALL_STATE(8)] = 201,
  [SMALL_STATE(9)] = 216,
  [SMALL_STATE(10)] = 231,
  [SMALL_STATE(11)] = 246,
  [SMALL_STATE(12)] = 256,
  [SMALL_STATE(13)] = 276,
  [SMALL_STATE(14)] = 286,
  [SMALL_STATE(15)] = 297,
  [SMALL_STATE(16)] = 308,
  [SMALL_STATE(17)] = 319,
  [SMALL_STATE(18)] = 332,
  [SMALL_STATE(19)] = 343,
  [SMALL_STATE(20)] = 354,
  [SMALL_STATE(21)] = 362,
  [SMALL_STATE(22)] = 372,
  [SMALL_STATE(23)] = 382,
  [SMALL_STATE(24)] = 390,
  [SMALL_STATE(25)] = 398,
  [SMALL_STATE(26)] = 406,
  [SMALL_STATE(27)] = 414,
  [SMALL_STATE(28)] = 422,
  [SMALL_STATE(29)] = 430,
  [SMALL_STATE(30)] = 438,
  [SMALL_STATE(31)] = 446,
  [SMALL_STATE(32)] = 454,
  [SMALL_STATE(33)] = 461,
  [SMALL_STATE(34)] = 472,
  [SMALL_STATE(35)] = 479,
  [SMALL_STATE(36)] = 487,
  [SMALL_STATE(37)] = 492,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsql_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tsql_file_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tsql_file, 1, 0, 0),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_batch, 1, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_batch, 2, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_batch_repeat1, 2, 0, 0),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_batch_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list, 2, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_list_repeat1, 2, 0, 0),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_list_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list_elem, 1, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_batch, 3, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_batch_repeat2, 2, 0, 0),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_batch_repeat2, 2, 0, 0), SHIFT_REPEAT(21),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_specification, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_go_statement, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_clauses, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_expression, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_specification, 4, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_sources, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_source, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_source_item, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_table_name, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement_standalone, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_clause, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_clauses, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_go_statement, 2, 0, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_body_batch, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
