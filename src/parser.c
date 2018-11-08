#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 22
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_POUND_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_LBRACE = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  sym_string = 6,
  sym_true = 7,
  sym_false = 8,
  sym_nil = 9,
  sym_comment = 10,
  sym_program = 11,
  sym__expression = 12,
  sym_set = 13,
  sym_hash_map = 14,
  sym__hash_map_kv = 15,
  sym_vector = 16,
  aux_sym_program_repeat1 = 17,
  aux_sym_hash_map_repeat1 = 18,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_POUND_LBRACE] = "#{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE] = "{",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_string] = "string",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_nil] = "nil",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym__expression] = "_expression",
  [sym_set] = "set",
  [sym_hash_map] = "hash_map",
  [sym__hash_map_kv] = "_hash_map_kv",
  [sym_vector] = "vector",
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
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
  [sym_vector] = {
    .visible = true,
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
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ',')
        SKIP(7);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '[')
        ADVANCE(9);
      if (lookahead == ']')
        ADVANCE(10);
      if (lookahead == 'f')
        ADVANCE(11);
      if (lookahead == 'n')
        ADVANCE(16);
      if (lookahead == 't')
        ADVANCE(19);
      if (lookahead == '{')
        ADVANCE(23);
      if (lookahead == '}')
        ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(25);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '\\')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 4:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead != 0)
        ADVANCE(2);
      END_STATE();
    case 5:
      if (lookahead == '{')
        ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 7:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ',')
        SKIP(7);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '[')
        ADVANCE(9);
      if (lookahead == ']')
        ADVANCE(10);
      if (lookahead == 'f')
        ADVANCE(11);
      if (lookahead == 'n')
        ADVANCE(16);
      if (lookahead == 't')
        ADVANCE(19);
      if (lookahead == '{')
        ADVANCE(23);
      if (lookahead == '}')
        ADVANCE(24);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 11:
      if (lookahead == 'a')
        ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'l')
        ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 's')
        ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'e')
        ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 16:
      if (lookahead == 'i')
        ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'l')
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 19:
      if (lookahead == 'r')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'u')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'e')
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 25:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '[')
        ADVANCE(9);
      if (lookahead == ']')
        ADVANCE(10);
      if (lookahead == 'f')
        ADVANCE(11);
      if (lookahead == 'n')
        ADVANCE(16);
      if (lookahead == 't')
        ADVANCE(19);
      if (lookahead == '{')
        ADVANCE(23);
      if (lookahead == '}')
        ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(25);
      END_STATE();
    case 26:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ',')
        SKIP(27);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '[')
        ADVANCE(9);
      if (lookahead == 'f')
        ADVANCE(11);
      if (lookahead == 'n')
        ADVANCE(16);
      if (lookahead == 't')
        ADVANCE(19);
      if (lookahead == '{')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(28);
      END_STATE();
    case 27:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ',')
        SKIP(27);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '[')
        ADVANCE(9);
      if (lookahead == 'f')
        ADVANCE(11);
      if (lookahead == 'n')
        ADVANCE(16);
      if (lookahead == 't')
        ADVANCE(19);
      if (lookahead == '{')
        ADVANCE(23);
      END_STATE();
    case 28:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '[')
        ADVANCE(9);
      if (lookahead == 'f')
        ADVANCE(11);
      if (lookahead == 'n')
        ADVANCE(16);
      if (lookahead == 't')
        ADVANCE(19);
      if (lookahead == '{')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(28);
      END_STATE();
    case 29:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ',')
        SKIP(30);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '[')
        ADVANCE(9);
      if (lookahead == 'f')
        ADVANCE(11);
      if (lookahead == 'n')
        ADVANCE(16);
      if (lookahead == 't')
        ADVANCE(19);
      if (lookahead == '{')
        ADVANCE(23);
      if (lookahead == '}')
        ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(31);
      END_STATE();
    case 30:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ',')
        SKIP(30);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '[')
        ADVANCE(9);
      if (lookahead == 'f')
        ADVANCE(11);
      if (lookahead == 'n')
        ADVANCE(16);
      if (lookahead == 't')
        ADVANCE(19);
      if (lookahead == '{')
        ADVANCE(23);
      if (lookahead == '}')
        ADVANCE(24);
      END_STATE();
    case 31:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '[')
        ADVANCE(9);
      if (lookahead == 'f')
        ADVANCE(11);
      if (lookahead == 'n')
        ADVANCE(16);
      if (lookahead == 't')
        ADVANCE(19);
      if (lookahead == '{')
        ADVANCE(23);
      if (lookahead == '}')
        ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(31);
      END_STATE();
    case 32:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ',')
        SKIP(33);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '[')
        ADVANCE(9);
      if (lookahead == ']')
        ADVANCE(10);
      if (lookahead == 'f')
        ADVANCE(11);
      if (lookahead == 'n')
        ADVANCE(16);
      if (lookahead == 't')
        ADVANCE(19);
      if (lookahead == '{')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(34);
      END_STATE();
    case 33:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ',')
        SKIP(33);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '[')
        ADVANCE(9);
      if (lookahead == ']')
        ADVANCE(10);
      if (lookahead == 'f')
        ADVANCE(11);
      if (lookahead == 'n')
        ADVANCE(16);
      if (lookahead == 't')
        ADVANCE(19);
      if (lookahead == '{')
        ADVANCE(23);
      END_STATE();
    case 34:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '[')
        ADVANCE(9);
      if (lookahead == ']')
        ADVANCE(10);
      if (lookahead == 'f')
        ADVANCE(11);
      if (lookahead == 'n')
        ADVANCE(16);
      if (lookahead == 't')
        ADVANCE(19);
      if (lookahead == '{')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(34);
      END_STATE();
    case 35:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        SKIP(36);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(37);
      END_STATE();
    case 36:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        SKIP(36);
      if (lookahead == ';')
        ADVANCE(8);
      END_STATE();
    case 37:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(37);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 26},
  [2] = {.lex_state = 29},
  [3] = {.lex_state = 29},
  [4] = {.lex_state = 32},
  [5] = {.lex_state = 35},
  [6] = {.lex_state = 26},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 29},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 29},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 32},
  [14] = {.lex_state = 26},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 29},
  [17] = {.lex_state = 29},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 29},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 32},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(5),
    [sym__expression] = STATE(6),
    [sym_set] = STATE(6),
    [sym_hash_map] = STATE(6),
    [sym_vector] = STATE(6),
    [aux_sym_program_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_string] = ACTIONS(11),
    [sym_true] = ACTIONS(11),
    [sym_false] = ACTIONS(11),
    [sym_nil] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [2] = {
    [sym__expression] = STATE(8),
    [sym_set] = STATE(8),
    [sym_hash_map] = STATE(8),
    [sym_vector] = STATE(8),
    [aux_sym_program_repeat1] = STATE(8),
    [anon_sym_POUND_LBRACE] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_string] = ACTIONS(17),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(17),
    [sym_comment] = ACTIONS(13),
  },
  [3] = {
    [sym__expression] = STATE(10),
    [sym_set] = STATE(10),
    [sym_hash_map] = STATE(10),
    [sym__hash_map_kv] = STATE(11),
    [sym_vector] = STATE(10),
    [aux_sym_hash_map_repeat1] = STATE(11),
    [anon_sym_POUND_LBRACE] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_string] = ACTIONS(21),
    [sym_true] = ACTIONS(21),
    [sym_false] = ACTIONS(21),
    [sym_nil] = ACTIONS(21),
    [sym_comment] = ACTIONS(13),
  },
  [4] = {
    [sym__expression] = STATE(13),
    [sym_set] = STATE(13),
    [sym_hash_map] = STATE(13),
    [sym_vector] = STATE(13),
    [aux_sym_program_repeat1] = STATE(13),
    [anon_sym_POUND_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(23),
    [sym_string] = ACTIONS(25),
    [sym_true] = ACTIONS(25),
    [sym_false] = ACTIONS(25),
    [sym_nil] = ACTIONS(25),
    [sym_comment] = ACTIONS(13),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_comment] = ACTIONS(13),
  },
  [6] = {
    [sym__expression] = STATE(14),
    [sym_set] = STATE(14),
    [sym_hash_map] = STATE(14),
    [sym_vector] = STATE(14),
    [aux_sym_program_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_POUND_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_string] = ACTIONS(31),
    [sym_true] = ACTIONS(31),
    [sym_false] = ACTIONS(31),
    [sym_nil] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_RBRACK] = ACTIONS(33),
    [sym_string] = ACTIONS(33),
    [sym_true] = ACTIONS(33),
    [sym_false] = ACTIONS(33),
    [sym_nil] = ACTIONS(33),
    [sym_comment] = ACTIONS(13),
  },
  [8] = {
    [sym__expression] = STATE(16),
    [sym_set] = STATE(16),
    [sym_hash_map] = STATE(16),
    [sym_vector] = STATE(16),
    [aux_sym_program_repeat1] = STATE(16),
    [anon_sym_POUND_LBRACE] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_string] = ACTIONS(37),
    [sym_true] = ACTIONS(37),
    [sym_false] = ACTIONS(37),
    [sym_nil] = ACTIONS(37),
    [sym_comment] = ACTIONS(13),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_RBRACK] = ACTIONS(39),
    [sym_string] = ACTIONS(39),
    [sym_true] = ACTIONS(39),
    [sym_false] = ACTIONS(39),
    [sym_nil] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
  },
  [10] = {
    [sym__expression] = STATE(17),
    [sym_set] = STATE(17),
    [sym_hash_map] = STATE(17),
    [sym_vector] = STATE(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_string] = ACTIONS(41),
    [sym_true] = ACTIONS(41),
    [sym_false] = ACTIONS(41),
    [sym_nil] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
  },
  [11] = {
    [sym__expression] = STATE(10),
    [sym_set] = STATE(10),
    [sym_hash_map] = STATE(10),
    [sym__hash_map_kv] = STATE(19),
    [sym_vector] = STATE(10),
    [aux_sym_hash_map_repeat1] = STATE(19),
    [anon_sym_POUND_LBRACE] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_string] = ACTIONS(21),
    [sym_true] = ACTIONS(21),
    [sym_false] = ACTIONS(21),
    [sym_nil] = ACTIONS(21),
    [sym_comment] = ACTIONS(13),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_RBRACK] = ACTIONS(45),
    [sym_string] = ACTIONS(45),
    [sym_true] = ACTIONS(45),
    [sym_false] = ACTIONS(45),
    [sym_nil] = ACTIONS(45),
    [sym_comment] = ACTIONS(13),
  },
  [13] = {
    [sym__expression] = STATE(21),
    [sym_set] = STATE(21),
    [sym_hash_map] = STATE(21),
    [sym_vector] = STATE(21),
    [aux_sym_program_repeat1] = STATE(21),
    [anon_sym_POUND_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(47),
    [sym_string] = ACTIONS(49),
    [sym_true] = ACTIONS(49),
    [sym_false] = ACTIONS(49),
    [sym_nil] = ACTIONS(49),
    [sym_comment] = ACTIONS(13),
  },
  [14] = {
    [sym__expression] = STATE(14),
    [sym_set] = STATE(14),
    [sym_hash_map] = STATE(14),
    [sym_vector] = STATE(14),
    [aux_sym_program_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_POUND_LBRACE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(56),
    [anon_sym_LBRACK] = ACTIONS(59),
    [sym_string] = ACTIONS(62),
    [sym_true] = ACTIONS(62),
    [sym_false] = ACTIONS(62),
    [sym_nil] = ACTIONS(62),
    [sym_comment] = ACTIONS(13),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_POUND_LBRACE] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(65),
    [anon_sym_RBRACK] = ACTIONS(65),
    [sym_string] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_false] = ACTIONS(65),
    [sym_nil] = ACTIONS(65),
    [sym_comment] = ACTIONS(13),
  },
  [16] = {
    [sym__expression] = STATE(16),
    [sym_set] = STATE(16),
    [sym_hash_map] = STATE(16),
    [sym_vector] = STATE(16),
    [aux_sym_program_repeat1] = STATE(16),
    [anon_sym_POUND_LBRACE] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(56),
    [anon_sym_LBRACK] = ACTIONS(59),
    [sym_string] = ACTIONS(67),
    [sym_true] = ACTIONS(67),
    [sym_false] = ACTIONS(67),
    [sym_nil] = ACTIONS(67),
    [sym_comment] = ACTIONS(13),
  },
  [17] = {
    [anon_sym_POUND_LBRACE] = ACTIONS(70),
    [anon_sym_RBRACE] = ACTIONS(70),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(70),
    [sym_string] = ACTIONS(70),
    [sym_true] = ACTIONS(70),
    [sym_false] = ACTIONS(70),
    [sym_nil] = ACTIONS(70),
    [sym_comment] = ACTIONS(13),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(72),
    [anon_sym_POUND_LBRACE] = ACTIONS(72),
    [anon_sym_RBRACE] = ACTIONS(72),
    [anon_sym_LBRACE] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(72),
    [anon_sym_RBRACK] = ACTIONS(72),
    [sym_string] = ACTIONS(72),
    [sym_true] = ACTIONS(72),
    [sym_false] = ACTIONS(72),
    [sym_nil] = ACTIONS(72),
    [sym_comment] = ACTIONS(13),
  },
  [19] = {
    [sym__expression] = STATE(10),
    [sym_set] = STATE(10),
    [sym_hash_map] = STATE(10),
    [sym__hash_map_kv] = STATE(19),
    [sym_vector] = STATE(10),
    [aux_sym_hash_map_repeat1] = STATE(19),
    [anon_sym_POUND_LBRACE] = ACTIONS(74),
    [anon_sym_RBRACE] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(82),
    [sym_string] = ACTIONS(85),
    [sym_true] = ACTIONS(85),
    [sym_false] = ACTIONS(85),
    [sym_nil] = ACTIONS(85),
    [sym_comment] = ACTIONS(13),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(88),
    [anon_sym_POUND_LBRACE] = ACTIONS(88),
    [anon_sym_RBRACE] = ACTIONS(88),
    [anon_sym_LBRACE] = ACTIONS(88),
    [anon_sym_LBRACK] = ACTIONS(88),
    [anon_sym_RBRACK] = ACTIONS(88),
    [sym_string] = ACTIONS(88),
    [sym_true] = ACTIONS(88),
    [sym_false] = ACTIONS(88),
    [sym_nil] = ACTIONS(88),
    [sym_comment] = ACTIONS(13),
  },
  [21] = {
    [sym__expression] = STATE(21),
    [sym_set] = STATE(21),
    [sym_hash_map] = STATE(21),
    [sym_vector] = STATE(21),
    [aux_sym_program_repeat1] = STATE(21),
    [anon_sym_POUND_LBRACE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(56),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_RBRACK] = ACTIONS(51),
    [sym_string] = ACTIONS(90),
    [sym_true] = ACTIONS(90),
    [sym_false] = ACTIONS(90),
    [sym_nil] = ACTIONS(90),
    [sym_comment] = ACTIONS(13),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = true}, SHIFT(6),
  [13] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [15] = {.count = 1, .reusable = true}, SHIFT(7),
  [17] = {.count = 1, .reusable = true}, SHIFT(8),
  [19] = {.count = 1, .reusable = true}, SHIFT(9),
  [21] = {.count = 1, .reusable = true}, SHIFT(10),
  [23] = {.count = 1, .reusable = true}, SHIFT(12),
  [25] = {.count = 1, .reusable = true}, SHIFT(13),
  [27] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [31] = {.count = 1, .reusable = true}, SHIFT(14),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_set, 2),
  [35] = {.count = 1, .reusable = true}, SHIFT(15),
  [37] = {.count = 1, .reusable = true}, SHIFT(16),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map, 2),
  [41] = {.count = 1, .reusable = true}, SHIFT(17),
  [43] = {.count = 1, .reusable = true}, SHIFT(18),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_vector, 2),
  [47] = {.count = 1, .reusable = true}, SHIFT(20),
  [49] = {.count = 1, .reusable = true}, SHIFT(21),
  [51] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [53] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [56] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [59] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [62] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_set, 3),
  [67] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(16),
  [70] = {.count = 1, .reusable = true}, REDUCE(sym__hash_map_kv, 2),
  [72] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map, 3),
  [74] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(2),
  [77] = {.count = 1, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2),
  [79] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(3),
  [82] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(4),
  [85] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(10),
  [88] = {.count = 1, .reusable = true}, REDUCE(sym_vector, 3),
  [90] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(21),
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
