#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 17
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_POUND_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_LBRACE = 3,
  sym_true = 4,
  sym_false = 5,
  sym_nil = 6,
  sym_comment = 7,
  sym_program = 8,
  sym__expression = 9,
  sym_set = 10,
  sym_hash_map = 11,
  sym__hash_map_kv = 12,
  aux_sym_program_repeat1 = 13,
  aux_sym_hash_map_repeat1 = 14,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_POUND_LBRACE] = "#{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE] = "{",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_nil] = "nil",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym__expression] = "_expression",
  [sym_set] = "set",
  [sym_hash_map] = "hash_map",
  [sym__hash_map_kv] = "_hash_map_kv",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_hash_map_repeat1] = "hash_map_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_nil] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_set] = {
    .visible = true,
    .named = true,
  },
  [sym_hash_map] = {
    .visible = true,
    .named = true,
  },
  [sym__hash_map_kv] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hash_map_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ',')
        SKIP(4);
      if (lookahead == ';')
        ADVANCE(5);
      if (lookahead == 'f')
        ADVANCE(6);
      if (lookahead == 'n')
        ADVANCE(11);
      if (lookahead == 't')
        ADVANCE(14);
      if (lookahead == '{')
        ADVANCE(18);
      if (lookahead == '}')
        ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(20);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '{')
        ADVANCE(3);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 4:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ',')
        SKIP(4);
      if (lookahead == ';')
        ADVANCE(5);
      if (lookahead == 'f')
        ADVANCE(6);
      if (lookahead == 'n')
        ADVANCE(11);
      if (lookahead == 't')
        ADVANCE(14);
      if (lookahead == '{')
        ADVANCE(18);
      if (lookahead == '}')
        ADVANCE(19);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == 'a')
        ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'l')
        ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 's')
        ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'e')
        ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 11:
      if (lookahead == 'i')
        ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'l')
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 14:
      if (lookahead == 'r')
        ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'u')
        ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'e')
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 20:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(5);
      if (lookahead == 'f')
        ADVANCE(6);
      if (lookahead == 'n')
        ADVANCE(11);
      if (lookahead == 't')
        ADVANCE(14);
      if (lookahead == '{')
        ADVANCE(18);
      if (lookahead == '}')
        ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(20);
      END_STATE();
    case 21:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ',')
        SKIP(22);
      if (lookahead == ';')
        ADVANCE(5);
      if (lookahead == 'f')
        ADVANCE(6);
      if (lookahead == 'n')
        ADVANCE(11);
      if (lookahead == 't')
        ADVANCE(14);
      if (lookahead == '{')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(23);
      END_STATE();
    case 22:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ',')
        SKIP(22);
      if (lookahead == ';')
        ADVANCE(5);
      if (lookahead == 'f')
        ADVANCE(6);
      if (lookahead == 'n')
        ADVANCE(11);
      if (lookahead == 't')
        ADVANCE(14);
      if (lookahead == '{')
        ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(5);
      if (lookahead == 'f')
        ADVANCE(6);
      if (lookahead == 'n')
        ADVANCE(11);
      if (lookahead == 't')
        ADVANCE(14);
      if (lookahead == '{')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(23);
      END_STATE();
    case 24:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        SKIP(25);
      if (lookahead == ';')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(26);
      END_STATE();
    case 25:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        SKIP(25);
      if (lookahead == ';')
        ADVANCE(5);
      END_STATE();
    case 26:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ';')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(26);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 21},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 24},
  [5] = {.lex_state = 21},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 21},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(4),
    [sym__expression] = STATE(5),
    [sym_set] = STATE(5),
    [sym_hash_map] = STATE(5),
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_nil] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [2] = {
    [sym__expression] = STATE(7),
    [sym_set] = STATE(7),
    [sym_hash_map] = STATE(7),
    [aux_sym_program_repeat1] = STATE(7),
    [anon_sym_POUND_LBRACE] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(7),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_nil] = ACTIONS(15),
    [sym_comment] = ACTIONS(11),
  },
  [3] = {
    [sym__expression] = STATE(9),
    [sym_set] = STATE(9),
    [sym_hash_map] = STATE(9),
    [sym__hash_map_kv] = STATE(10),
    [aux_sym_hash_map_repeat1] = STATE(10),
    [anon_sym_POUND_LBRACE] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(7),
    [sym_true] = ACTIONS(19),
    [sym_false] = ACTIONS(19),
    [sym_nil] = ACTIONS(19),
    [sym_comment] = ACTIONS(11),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_comment] = ACTIONS(11),
  },
  [5] = {
    [sym__expression] = STATE(11),
    [sym_set] = STATE(11),
    [sym_hash_map] = STATE(11),
    [aux_sym_program_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_POUND_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [sym_true] = ACTIONS(25),
    [sym_false] = ACTIONS(25),
    [sym_nil] = ACTIONS(25),
    [sym_comment] = ACTIONS(11),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_true] = ACTIONS(27),
    [sym_false] = ACTIONS(27),
    [sym_nil] = ACTIONS(27),
    [sym_comment] = ACTIONS(11),
  },
  [7] = {
    [sym__expression] = STATE(13),
    [sym_set] = STATE(13),
    [sym_hash_map] = STATE(13),
    [aux_sym_program_repeat1] = STATE(13),
    [anon_sym_POUND_LBRACE] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(7),
    [sym_true] = ACTIONS(31),
    [sym_false] = ACTIONS(31),
    [sym_nil] = ACTIONS(31),
    [sym_comment] = ACTIONS(11),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_true] = ACTIONS(33),
    [sym_false] = ACTIONS(33),
    [sym_nil] = ACTIONS(33),
    [sym_comment] = ACTIONS(11),
  },
  [9] = {
    [sym__expression] = STATE(14),
    [sym_set] = STATE(14),
    [sym_hash_map] = STATE(14),
    [anon_sym_POUND_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_comment] = ACTIONS(11),
  },
  [10] = {
    [sym__expression] = STATE(9),
    [sym_set] = STATE(9),
    [sym_hash_map] = STATE(9),
    [sym__hash_map_kv] = STATE(16),
    [aux_sym_hash_map_repeat1] = STATE(16),
    [anon_sym_POUND_LBRACE] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(7),
    [sym_true] = ACTIONS(19),
    [sym_false] = ACTIONS(19),
    [sym_nil] = ACTIONS(19),
    [sym_comment] = ACTIONS(11),
  },
  [11] = {
    [sym__expression] = STATE(11),
    [sym_set] = STATE(11),
    [sym_hash_map] = STATE(11),
    [aux_sym_program_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(44),
    [sym_true] = ACTIONS(47),
    [sym_false] = ACTIONS(47),
    [sym_nil] = ACTIONS(47),
    [sym_comment] = ACTIONS(11),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(50),
    [anon_sym_POUND_LBRACE] = ACTIONS(50),
    [anon_sym_RBRACE] = ACTIONS(50),
    [anon_sym_LBRACE] = ACTIONS(50),
    [sym_true] = ACTIONS(50),
    [sym_false] = ACTIONS(50),
    [sym_nil] = ACTIONS(50),
    [sym_comment] = ACTIONS(11),
  },
  [13] = {
    [sym__expression] = STATE(13),
    [sym_set] = STATE(13),
    [sym_hash_map] = STATE(13),
    [aux_sym_program_repeat1] = STATE(13),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(44),
    [sym_true] = ACTIONS(52),
    [sym_false] = ACTIONS(52),
    [sym_nil] = ACTIONS(52),
    [sym_comment] = ACTIONS(11),
  },
  [14] = {
    [anon_sym_POUND_LBRACE] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_true] = ACTIONS(55),
    [sym_false] = ACTIONS(55),
    [sym_nil] = ACTIONS(55),
    [sym_comment] = ACTIONS(11),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_POUND_LBRACE] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(57),
    [sym_true] = ACTIONS(57),
    [sym_false] = ACTIONS(57),
    [sym_nil] = ACTIONS(57),
    [sym_comment] = ACTIONS(11),
  },
  [16] = {
    [sym__expression] = STATE(9),
    [sym_set] = STATE(9),
    [sym_hash_map] = STATE(9),
    [sym__hash_map_kv] = STATE(16),
    [aux_sym_hash_map_repeat1] = STATE(16),
    [anon_sym_POUND_LBRACE] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(62),
    [anon_sym_LBRACE] = ACTIONS(64),
    [sym_true] = ACTIONS(67),
    [sym_false] = ACTIONS(67),
    [sym_nil] = ACTIONS(67),
    [sym_comment] = ACTIONS(11),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(5),
  [11] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [13] = {.count = 1, .reusable = true}, SHIFT(6),
  [15] = {.count = 1, .reusable = true}, SHIFT(7),
  [17] = {.count = 1, .reusable = true}, SHIFT(8),
  [19] = {.count = 1, .reusable = true}, SHIFT(9),
  [21] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [25] = {.count = 1, .reusable = true}, SHIFT(11),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_set, 2),
  [29] = {.count = 1, .reusable = true}, SHIFT(12),
  [31] = {.count = 1, .reusable = true}, SHIFT(13),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map, 2),
  [35] = {.count = 1, .reusable = true}, SHIFT(14),
  [37] = {.count = 1, .reusable = true}, SHIFT(15),
  [39] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [41] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [44] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [47] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [50] = {.count = 1, .reusable = true}, REDUCE(sym_set, 3),
  [52] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym__hash_map_kv, 2),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map, 3),
  [59] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(2),
  [62] = {.count = 1, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2),
  [64] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(3),
  [67] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(9),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_clojure() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
