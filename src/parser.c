#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 25
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_POUND_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_LBRACE = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  sym_string = 6,
  sym_number_long = 7,
  sym_number_double = 8,
  sym_true = 9,
  sym_false = 10,
  sym_nil = 11,
  sym_comment = 12,
  sym_program = 13,
  sym__expression = 14,
  sym_set = 15,
  sym_hash_map = 16,
  sym_hash_map_kv_pair = 17,
  sym_hash_map_key = 18,
  sym_hash_map_value = 19,
  sym_vector = 20,
  sym_number = 21,
  aux_sym_program_repeat1 = 22,
  aux_sym_hash_map_repeat1 = 23,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_POUND_LBRACE] = "#{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE] = "{",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_string] = "string",
  [sym_number_long] = "number_long",
  [sym_number_double] = "number_double",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_nil] = "nil",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym__expression] = "_expression",
  [sym_set] = "set",
  [sym_hash_map] = "hash_map",
  [sym_hash_map_kv_pair] = "hash_map_kv_pair",
  [sym_hash_map_key] = "hash_map_key",
  [sym_hash_map_value] = "hash_map_value",
  [sym_vector] = "vector",
  [sym_number] = "number",
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
  [sym_number_long] = {
    .visible = true,
    .named = true,
  },
  [sym_number_double] = {
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
  [sym_hash_map_kv_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_hash_map_key] = {
    .visible = true,
    .named = true,
  },
  [sym_hash_map_value] = {
    .visible = true,
    .named = true,
  },
  [sym_vector] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
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
        SKIP(0);
      if (lookahead == '.')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '[')
        ADVANCE(16);
      if (lookahead == ']')
        ADVANCE(17);
      if (lookahead == 'f')
        ADVANCE(18);
      if (lookahead == 'n')
        ADVANCE(23);
      if (lookahead == 't')
        ADVANCE(26);
      if (lookahead == '{')
        ADVANCE(30);
      if (lookahead == '}')
        ADVANCE(31);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(34);
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
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_number_double);
      if (lookahead == '_')
        ADVANCE(9);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(10);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '_')
        ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_number_double);
      if (lookahead == '_')
        ADVANCE(13);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '_')
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_number_double);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 18:
      if (lookahead == 'a')
        ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'l')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 's')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'e')
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 23:
      if (lookahead == 'i')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'l')
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 26:
      if (lookahead == 'r')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'u')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'e')
        ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_number_long);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_number_long);
      if (lookahead == '.')
        ADVANCE(35);
      if (lookahead == '_')
        ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(10);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_number_double);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(10);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(8);
      END_STATE();
    case 36:
      if (lookahead == '_')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == '.')
        ADVANCE(35);
      if (lookahead == '_')
        ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(10);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ',')
        SKIP(38);
      if (lookahead == '.')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '[')
        ADVANCE(16);
      if (lookahead == 'f')
        ADVANCE(18);
      if (lookahead == 'n')
        ADVANCE(23);
      if (lookahead == 't')
        ADVANCE(26);
      if (lookahead == '{')
        ADVANCE(30);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(38);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(34);
      END_STATE();
    case 39:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ',')
        SKIP(39);
      if (lookahead == '.')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '[')
        ADVANCE(16);
      if (lookahead == 'f')
        ADVANCE(18);
      if (lookahead == 'n')
        ADVANCE(23);
      if (lookahead == 't')
        ADVANCE(26);
      if (lookahead == '{')
        ADVANCE(30);
      if (lookahead == '}')
        ADVANCE(31);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(39);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(34);
      END_STATE();
    case 40:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ',')
        SKIP(40);
      if (lookahead == '.')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '[')
        ADVANCE(16);
      if (lookahead == ']')
        ADVANCE(17);
      if (lookahead == 'f')
        ADVANCE(18);
      if (lookahead == 'n')
        ADVANCE(23);
      if (lookahead == 't')
        ADVANCE(26);
      if (lookahead == '{')
        ADVANCE(30);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(40);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(34);
      END_STATE();
    case 41:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        SKIP(41);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(41);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 38},
  [2] = {.lex_state = 39},
  [3] = {.lex_state = 39},
  [4] = {.lex_state = 40},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 41},
  [7] = {.lex_state = 38},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 39},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 39},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 40},
  [16] = {.lex_state = 38},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 39},
  [19] = {.lex_state = 39},
  [20] = {.lex_state = 39},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 39},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 40},
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
    [sym_number_long] = ACTIONS(1),
    [sym_number_double] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(6),
    [sym__expression] = STATE(7),
    [sym_set] = STATE(7),
    [sym_hash_map] = STATE(7),
    [sym_vector] = STATE(7),
    [sym_number] = STATE(7),
    [aux_sym_program_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_string] = ACTIONS(11),
    [sym_number_long] = ACTIONS(13),
    [sym_number_double] = ACTIONS(13),
    [sym_true] = ACTIONS(11),
    [sym_false] = ACTIONS(11),
    [sym_nil] = ACTIONS(11),
    [sym_comment] = ACTIONS(15),
  },
  [2] = {
    [sym__expression] = STATE(9),
    [sym_set] = STATE(9),
    [sym_hash_map] = STATE(9),
    [sym_vector] = STATE(9),
    [sym_number] = STATE(9),
    [aux_sym_program_repeat1] = STATE(9),
    [anon_sym_POUND_LBRACE] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_string] = ACTIONS(19),
    [sym_number_long] = ACTIONS(13),
    [sym_number_double] = ACTIONS(13),
    [sym_true] = ACTIONS(19),
    [sym_false] = ACTIONS(19),
    [sym_nil] = ACTIONS(19),
    [sym_comment] = ACTIONS(15),
  },
  [3] = {
    [sym__expression] = STATE(11),
    [sym_set] = STATE(11),
    [sym_hash_map] = STATE(11),
    [sym_hash_map_kv_pair] = STATE(13),
    [sym_hash_map_key] = STATE(12),
    [sym_vector] = STATE(11),
    [sym_number] = STATE(11),
    [aux_sym_hash_map_repeat1] = STATE(13),
    [anon_sym_POUND_LBRACE] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_string] = ACTIONS(23),
    [sym_number_long] = ACTIONS(13),
    [sym_number_double] = ACTIONS(13),
    [sym_true] = ACTIONS(23),
    [sym_false] = ACTIONS(23),
    [sym_nil] = ACTIONS(23),
    [sym_comment] = ACTIONS(15),
  },
  [4] = {
    [sym__expression] = STATE(15),
    [sym_set] = STATE(15),
    [sym_hash_map] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_number] = STATE(15),
    [aux_sym_program_repeat1] = STATE(15),
    [anon_sym_POUND_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(25),
    [sym_string] = ACTIONS(27),
    [sym_number_long] = ACTIONS(13),
    [sym_number_double] = ACTIONS(13),
    [sym_true] = ACTIONS(27),
    [sym_false] = ACTIONS(27),
    [sym_nil] = ACTIONS(27),
    [sym_comment] = ACTIONS(15),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_POUND_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [sym_number_long] = ACTIONS(29),
    [sym_number_double] = ACTIONS(29),
    [sym_true] = ACTIONS(29),
    [sym_false] = ACTIONS(29),
    [sym_nil] = ACTIONS(29),
    [sym_comment] = ACTIONS(15),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_comment] = ACTIONS(15),
  },
  [7] = {
    [sym__expression] = STATE(16),
    [sym_set] = STATE(16),
    [sym_hash_map] = STATE(16),
    [sym_vector] = STATE(16),
    [sym_number] = STATE(16),
    [aux_sym_program_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_POUND_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_string] = ACTIONS(35),
    [sym_number_long] = ACTIONS(13),
    [sym_number_double] = ACTIONS(13),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_comment] = ACTIONS(15),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_POUND_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_string] = ACTIONS(37),
    [sym_number_long] = ACTIONS(37),
    [sym_number_double] = ACTIONS(37),
    [sym_true] = ACTIONS(37),
    [sym_false] = ACTIONS(37),
    [sym_nil] = ACTIONS(37),
    [sym_comment] = ACTIONS(15),
  },
  [9] = {
    [sym__expression] = STATE(18),
    [sym_set] = STATE(18),
    [sym_hash_map] = STATE(18),
    [sym_vector] = STATE(18),
    [sym_number] = STATE(18),
    [aux_sym_program_repeat1] = STATE(18),
    [anon_sym_POUND_LBRACE] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_string] = ACTIONS(41),
    [sym_number_long] = ACTIONS(13),
    [sym_number_double] = ACTIONS(13),
    [sym_true] = ACTIONS(41),
    [sym_false] = ACTIONS(41),
    [sym_nil] = ACTIONS(41),
    [sym_comment] = ACTIONS(15),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [sym_number_long] = ACTIONS(43),
    [sym_number_double] = ACTIONS(43),
    [sym_true] = ACTIONS(43),
    [sym_false] = ACTIONS(43),
    [sym_nil] = ACTIONS(43),
    [sym_comment] = ACTIONS(15),
  },
  [11] = {
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(45),
    [sym_string] = ACTIONS(45),
    [sym_number_long] = ACTIONS(45),
    [sym_number_double] = ACTIONS(45),
    [sym_true] = ACTIONS(45),
    [sym_false] = ACTIONS(45),
    [sym_nil] = ACTIONS(45),
    [sym_comment] = ACTIONS(15),
  },
  [12] = {
    [sym__expression] = STATE(19),
    [sym_set] = STATE(19),
    [sym_hash_map] = STATE(19),
    [sym_hash_map_value] = STATE(20),
    [sym_vector] = STATE(19),
    [sym_number] = STATE(19),
    [anon_sym_POUND_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_string] = ACTIONS(47),
    [sym_number_long] = ACTIONS(13),
    [sym_number_double] = ACTIONS(13),
    [sym_true] = ACTIONS(47),
    [sym_false] = ACTIONS(47),
    [sym_nil] = ACTIONS(47),
    [sym_comment] = ACTIONS(15),
  },
  [13] = {
    [sym__expression] = STATE(11),
    [sym_set] = STATE(11),
    [sym_hash_map] = STATE(11),
    [sym_hash_map_kv_pair] = STATE(22),
    [sym_hash_map_key] = STATE(12),
    [sym_vector] = STATE(11),
    [sym_number] = STATE(11),
    [aux_sym_hash_map_repeat1] = STATE(22),
    [anon_sym_POUND_LBRACE] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_string] = ACTIONS(23),
    [sym_number_long] = ACTIONS(13),
    [sym_number_double] = ACTIONS(13),
    [sym_true] = ACTIONS(23),
    [sym_false] = ACTIONS(23),
    [sym_nil] = ACTIONS(23),
    [sym_comment] = ACTIONS(15),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_POUND_LBRACE] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_RBRACK] = ACTIONS(51),
    [sym_string] = ACTIONS(51),
    [sym_number_long] = ACTIONS(51),
    [sym_number_double] = ACTIONS(51),
    [sym_true] = ACTIONS(51),
    [sym_false] = ACTIONS(51),
    [sym_nil] = ACTIONS(51),
    [sym_comment] = ACTIONS(15),
  },
  [15] = {
    [sym__expression] = STATE(24),
    [sym_set] = STATE(24),
    [sym_hash_map] = STATE(24),
    [sym_vector] = STATE(24),
    [sym_number] = STATE(24),
    [aux_sym_program_repeat1] = STATE(24),
    [anon_sym_POUND_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(53),
    [sym_string] = ACTIONS(55),
    [sym_number_long] = ACTIONS(13),
    [sym_number_double] = ACTIONS(13),
    [sym_true] = ACTIONS(55),
    [sym_false] = ACTIONS(55),
    [sym_nil] = ACTIONS(55),
    [sym_comment] = ACTIONS(15),
  },
  [16] = {
    [sym__expression] = STATE(16),
    [sym_set] = STATE(16),
    [sym_hash_map] = STATE(16),
    [sym_vector] = STATE(16),
    [sym_number] = STATE(16),
    [aux_sym_program_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_POUND_LBRACE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(62),
    [anon_sym_LBRACK] = ACTIONS(65),
    [sym_string] = ACTIONS(68),
    [sym_number_long] = ACTIONS(71),
    [sym_number_double] = ACTIONS(71),
    [sym_true] = ACTIONS(68),
    [sym_false] = ACTIONS(68),
    [sym_nil] = ACTIONS(68),
    [sym_comment] = ACTIONS(15),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [anon_sym_POUND_LBRACE] = ACTIONS(74),
    [anon_sym_RBRACE] = ACTIONS(74),
    [anon_sym_LBRACE] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(74),
    [anon_sym_RBRACK] = ACTIONS(74),
    [sym_string] = ACTIONS(74),
    [sym_number_long] = ACTIONS(74),
    [sym_number_double] = ACTIONS(74),
    [sym_true] = ACTIONS(74),
    [sym_false] = ACTIONS(74),
    [sym_nil] = ACTIONS(74),
    [sym_comment] = ACTIONS(15),
  },
  [18] = {
    [sym__expression] = STATE(18),
    [sym_set] = STATE(18),
    [sym_hash_map] = STATE(18),
    [sym_vector] = STATE(18),
    [sym_number] = STATE(18),
    [aux_sym_program_repeat1] = STATE(18),
    [anon_sym_POUND_LBRACE] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(62),
    [anon_sym_LBRACK] = ACTIONS(65),
    [sym_string] = ACTIONS(76),
    [sym_number_long] = ACTIONS(71),
    [sym_number_double] = ACTIONS(71),
    [sym_true] = ACTIONS(76),
    [sym_false] = ACTIONS(76),
    [sym_nil] = ACTIONS(76),
    [sym_comment] = ACTIONS(15),
  },
  [19] = {
    [anon_sym_POUND_LBRACE] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(79),
    [sym_string] = ACTIONS(79),
    [sym_number_long] = ACTIONS(79),
    [sym_number_double] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_nil] = ACTIONS(79),
    [sym_comment] = ACTIONS(15),
  },
  [20] = {
    [anon_sym_POUND_LBRACE] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_string] = ACTIONS(81),
    [sym_number_long] = ACTIONS(81),
    [sym_number_double] = ACTIONS(81),
    [sym_true] = ACTIONS(81),
    [sym_false] = ACTIONS(81),
    [sym_nil] = ACTIONS(81),
    [sym_comment] = ACTIONS(15),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_POUND_LBRACE] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_RBRACK] = ACTIONS(83),
    [sym_string] = ACTIONS(83),
    [sym_number_long] = ACTIONS(83),
    [sym_number_double] = ACTIONS(83),
    [sym_true] = ACTIONS(83),
    [sym_false] = ACTIONS(83),
    [sym_nil] = ACTIONS(83),
    [sym_comment] = ACTIONS(15),
  },
  [22] = {
    [sym__expression] = STATE(11),
    [sym_set] = STATE(11),
    [sym_hash_map] = STATE(11),
    [sym_hash_map_kv_pair] = STATE(22),
    [sym_hash_map_key] = STATE(12),
    [sym_vector] = STATE(11),
    [sym_number] = STATE(11),
    [aux_sym_hash_map_repeat1] = STATE(22),
    [anon_sym_POUND_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(88),
    [anon_sym_LBRACE] = ACTIONS(90),
    [anon_sym_LBRACK] = ACTIONS(93),
    [sym_string] = ACTIONS(96),
    [sym_number_long] = ACTIONS(99),
    [sym_number_double] = ACTIONS(99),
    [sym_true] = ACTIONS(96),
    [sym_false] = ACTIONS(96),
    [sym_nil] = ACTIONS(96),
    [sym_comment] = ACTIONS(15),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(102),
    [anon_sym_POUND_LBRACE] = ACTIONS(102),
    [anon_sym_RBRACE] = ACTIONS(102),
    [anon_sym_LBRACE] = ACTIONS(102),
    [anon_sym_LBRACK] = ACTIONS(102),
    [anon_sym_RBRACK] = ACTIONS(102),
    [sym_string] = ACTIONS(102),
    [sym_number_long] = ACTIONS(102),
    [sym_number_double] = ACTIONS(102),
    [sym_true] = ACTIONS(102),
    [sym_false] = ACTIONS(102),
    [sym_nil] = ACTIONS(102),
    [sym_comment] = ACTIONS(15),
  },
  [24] = {
    [sym__expression] = STATE(24),
    [sym_set] = STATE(24),
    [sym_hash_map] = STATE(24),
    [sym_vector] = STATE(24),
    [sym_number] = STATE(24),
    [aux_sym_program_repeat1] = STATE(24),
    [anon_sym_POUND_LBRACE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(62),
    [anon_sym_LBRACK] = ACTIONS(65),
    [anon_sym_RBRACK] = ACTIONS(57),
    [sym_string] = ACTIONS(104),
    [sym_number_long] = ACTIONS(71),
    [sym_number_double] = ACTIONS(71),
    [sym_true] = ACTIONS(104),
    [sym_false] = ACTIONS(104),
    [sym_nil] = ACTIONS(104),
    [sym_comment] = ACTIONS(15),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = true}, SHIFT(7),
  [13] = {.count = 1, .reusable = true}, SHIFT(5),
  [15] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [17] = {.count = 1, .reusable = true}, SHIFT(8),
  [19] = {.count = 1, .reusable = true}, SHIFT(9),
  [21] = {.count = 1, .reusable = true}, SHIFT(10),
  [23] = {.count = 1, .reusable = true}, SHIFT(11),
  [25] = {.count = 1, .reusable = true}, SHIFT(14),
  [27] = {.count = 1, .reusable = true}, SHIFT(15),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_number, 1),
  [31] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [35] = {.count = 1, .reusable = true}, SHIFT(16),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_set, 2),
  [39] = {.count = 1, .reusable = true}, SHIFT(17),
  [41] = {.count = 1, .reusable = true}, SHIFT(18),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map, 2),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map_key, 1),
  [47] = {.count = 1, .reusable = true}, SHIFT(19),
  [49] = {.count = 1, .reusable = true}, SHIFT(21),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_vector, 2),
  [53] = {.count = 1, .reusable = true}, SHIFT(23),
  [55] = {.count = 1, .reusable = true}, SHIFT(24),
  [57] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [59] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [62] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [65] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [68] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(16),
  [71] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [74] = {.count = 1, .reusable = true}, REDUCE(sym_set, 3),
  [76] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map_value, 1),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map_kv_pair, 2),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map, 3),
  [85] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(2),
  [88] = {.count = 1, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2),
  [90] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(3),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(4),
  [96] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(11),
  [99] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(5),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym_vector, 3),
  [104] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(24),
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
