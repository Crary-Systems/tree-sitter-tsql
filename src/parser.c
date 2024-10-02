#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 26
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_SEMI = 1,
  aux_sym_query_specification_token1 = 2,
  anon_sym_FROM = 3,
  anon_sym_COMMA = 4,
  aux_sym_select_list_elem_token1 = 5,
  aux_sym_select_list_elem_token2 = 6,
  sym_program = 7,
  sym_sql_clauses = 8,
  sym_dml_clause = 9,
  sym_select_statement_standalone = 10,
  sym_select_statement = 11,
  sym_query_expression = 12,
  sym_query_specification = 13,
  sym_select_list = 14,
  sym_select_list_elem = 15,
  sym_table_sources = 16,
  sym_table_source = 17,
  sym_table_source_item = 18,
  sym_full_table_name = 19,
  sym_id_ = 20,
  aux_sym_select_list_repeat1 = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym_query_specification_token1] = "query_specification_token1",
  [anon_sym_FROM] = "FROM",
  [anon_sym_COMMA] = ",",
  [aux_sym_select_list_elem_token1] = "select_list_elem_token1",
  [aux_sym_select_list_elem_token2] = "select_list_elem_token2",
  [sym_program] = "program",
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
  [aux_sym_select_list_repeat1] = "select_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_query_specification_token1] = aux_sym_query_specification_token1,
  [anon_sym_FROM] = anon_sym_FROM,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_select_list_elem_token1] = aux_sym_select_list_elem_token1,
  [aux_sym_select_list_elem_token2] = aux_sym_select_list_elem_token2,
  [sym_program] = sym_program,
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
  [aux_sym_select_list_repeat1] = aux_sym_select_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_query_specification_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_FROM] = {
    .visible = true,
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
  [sym_program] = {
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
  [aux_sym_select_list_repeat1] = {
    .visible = false,
    .named = false,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == 'F') ADVANCE(3);
      if (lookahead == '[') ADVANCE(11);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'M') ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == 'O') ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == 'R') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '[') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == ']') ADVANCE(18);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(10);
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
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_query_specification_token1);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_select_list_elem_token1);
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_select_list_elem_token2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_query_specification_token1] = ACTIONS(1),
    [anon_sym_FROM] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_select_list_elem_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(24),
    [sym_sql_clauses] = STATE(25),
    [sym_dml_clause] = STATE(22),
    [sym_select_statement_standalone] = STATE(11),
    [sym_select_statement] = STATE(15),
    [sym_query_expression] = STATE(14),
    [sym_query_specification] = STATE(12),
    [aux_sym_query_specification_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    STATE(17), 1,
      sym_table_sources,
    STATE(18), 1,
      sym_table_source,
    STATE(19), 1,
      sym_table_source_item,
    STATE(20), 1,
      sym_full_table_name,
    STATE(21), 1,
      sym_id_,
    ACTIONS(5), 2,
      aux_sym_select_list_elem_token1,
      aux_sym_select_list_elem_token2,
  [20] = 3,
    ACTIONS(9), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(7), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_FROM,
  [32] = 3,
    ACTIONS(14), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(12), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_FROM,
  [44] = 3,
    ACTIONS(14), 1,
      anon_sym_COMMA,
    STATE(4), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(16), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_FROM,
  [56] = 3,
    STATE(5), 1,
      sym_select_list_elem,
    STATE(9), 1,
      sym_select_list,
    ACTIONS(18), 2,
      aux_sym_select_list_elem_token1,
      aux_sym_select_list_elem_token2,
  [67] = 1,
    ACTIONS(7), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_FROM,
      anon_sym_COMMA,
  [74] = 1,
    ACTIONS(20), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_FROM,
      anon_sym_COMMA,
  [81] = 2,
    ACTIONS(24), 1,
      anon_sym_FROM,
    ACTIONS(22), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [89] = 2,
    STATE(7), 1,
      sym_select_list_elem,
    ACTIONS(18), 2,
      aux_sym_select_list_elem_token1,
      aux_sym_select_list_elem_token2,
  [97] = 1,
    ACTIONS(26), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [102] = 1,
    ACTIONS(28), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [107] = 1,
    ACTIONS(30), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [112] = 2,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 1,
      anon_sym_SEMI,
  [119] = 1,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [124] = 1,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [129] = 1,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [134] = 1,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [139] = 1,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [144] = 1,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [149] = 1,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [154] = 2,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      anon_sym_SEMI,
  [161] = 1,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
  [165] = 1,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
  [169] = 1,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 32,
  [SMALL_STATE(5)] = 44,
  [SMALL_STATE(6)] = 56,
  [SMALL_STATE(7)] = 67,
  [SMALL_STATE(8)] = 74,
  [SMALL_STATE(9)] = 81,
  [SMALL_STATE(10)] = 89,
  [SMALL_STATE(11)] = 97,
  [SMALL_STATE(12)] = 102,
  [SMALL_STATE(13)] = 107,
  [SMALL_STATE(14)] = 112,
  [SMALL_STATE(15)] = 119,
  [SMALL_STATE(16)] = 124,
  [SMALL_STATE(17)] = 129,
  [SMALL_STATE(18)] = 134,
  [SMALL_STATE(19)] = 139,
  [SMALL_STATE(20)] = 144,
  [SMALL_STATE(21)] = 149,
  [SMALL_STATE(22)] = 154,
  [SMALL_STATE(23)] = 161,
  [SMALL_STATE(24)] = 165,
  [SMALL_STATE(25)] = 169,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_list_repeat1, 2, 0, 0),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_list_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [12] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list, 2, 0, 0),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list, 1, 0, 0),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list_elem, 1, 0, 0),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_specification, 2, 0, 0),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_clause, 1, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_expression, 1, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1, 0, 0),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_select_statement, 1, 0, 0), SHIFT(13),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement_standalone, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_specification, 4, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_sources, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_source, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_source_item, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_table_name, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_clauses, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_clauses, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
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
