#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 30
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_POUND_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_LBRACE = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  sym_string = 6,
  anon_sym_COLON = 7,
  anon_sym_COLON_COLON = 8,
  sym__keyword_chars = 9,
  sym_number_long = 10,
  sym_number_double = 11,
  sym_true = 12,
  sym_false = 13,
  sym_nil = 14,
  sym_comment = 15,
  sym_program = 16,
  sym__expression = 17,
  sym_set = 18,
  sym_hash_map = 19,
  sym_hash_map_kv_pair = 20,
  sym_hash_map_key = 21,
  sym_hash_map_value = 22,
  sym_vector = 23,
  sym_keyword = 24,
  sym_unqualified_keyword = 25,
  sym_qualified_keyword = 26,
  sym_number = 27,
  aux_sym_program_repeat1 = 28,
  aux_sym_hash_map_repeat1 = 29,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_POUND_LBRACE] = "#{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE] = "{",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_string] = "string",
  [anon_sym_COLON] = ":",
  [anon_sym_COLON_COLON] = "::",
  [sym__keyword_chars] = "_keyword_chars",
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
  [sym_keyword] = "keyword",
  [sym_unqualified_keyword] = "unqualified_keyword",
  [sym_qualified_keyword] = "qualified_keyword",
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym__keyword_chars] = {
    .visible = false,
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
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_unqualified_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_keyword] = {
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
      if (lookahead == ':')
        ADVANCE(15);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == '[')
        ADVANCE(18);
      if (lookahead == ']')
        ADVANCE(19);
      if (lookahead == 'f')
        ADVANCE(20);
      if (lookahead == 'n')
        ADVANCE(25);
      if (lookahead == 't')
        ADVANCE(28);
      if (lookahead == '{')
        ADVANCE(32);
      if (lookahead == '}')
        ADVANCE(33);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(36);
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
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 20:
      if (lookahead == 'a')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'l')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 's')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'e')
        ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 25:
      if (lookahead == 'i')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'l')
        ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 28:
      if (lookahead == 'r')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'u')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'e')
        ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_number_long);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_number_long);
      if (lookahead == '.')
        ADVANCE(37);
      if (lookahead == '_')
        ADVANCE(38);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(10);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(36);
      END_STATE();
    case 37:
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
    case 38:
      if (lookahead == '_')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == '.')
        ADVANCE(37);
      if (lookahead == '_')
        ADVANCE(38);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(10);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ',')
        SKIP(40);
      if (lookahead == '.')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(15);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == '[')
        ADVANCE(18);
      if (lookahead == 'f')
        ADVANCE(20);
      if (lookahead == 'n')
        ADVANCE(25);
      if (lookahead == 't')
        ADVANCE(28);
      if (lookahead == '{')
        ADVANCE(32);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(40);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(36);
      END_STATE();
    case 41:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ',')
        SKIP(41);
      if (lookahead == '.')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(15);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == '[')
        ADVANCE(18);
      if (lookahead == 'f')
        ADVANCE(20);
      if (lookahead == 'n')
        ADVANCE(25);
      if (lookahead == 't')
        ADVANCE(28);
      if (lookahead == '{')
        ADVANCE(32);
      if (lookahead == '}')
        ADVANCE(33);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(41);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ',')
        SKIP(42);
      if (lookahead == '.')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(15);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == '[')
        ADVANCE(18);
      if (lookahead == ']')
        ADVANCE(19);
      if (lookahead == 'f')
        ADVANCE(20);
      if (lookahead == 'n')
        ADVANCE(25);
      if (lookahead == 't')
        ADVANCE(28);
      if (lookahead == '{')
        ADVANCE(32);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(42);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(36);
      END_STATE();
    case 43:
      if (lookahead == ',')
        SKIP(43);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(43);
      if (lookahead == '!' ||
          ('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__keyword_chars);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        SKIP(45);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(45);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 40},
  [2] = {.lex_state = 41},
  [3] = {.lex_state = 41},
  [4] = {.lex_state = 42},
  [5] = {.lex_state = 43},
  [6] = {.lex_state = 43},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 45},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 40},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 41},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 41},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 42},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 40},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 41},
  [24] = {.lex_state = 41},
  [25] = {.lex_state = 41},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 41},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 42},
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
    [anon_sym_COLON] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [sym_number_long] = ACTIONS(1),
    [sym_number_double] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(8),
    [sym__expression] = STATE(10),
    [sym_set] = STATE(10),
    [sym_hash_map] = STATE(10),
    [sym_vector] = STATE(10),
    [sym_keyword] = STATE(10),
    [sym_unqualified_keyword] = STATE(9),
    [sym_qualified_keyword] = STATE(9),
    [sym_number] = STATE(10),
    [aux_sym_program_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUND_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_string] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [sym_number_long] = ACTIONS(19),
    [sym_number_double] = ACTIONS(19),
    [sym_true] = ACTIONS(13),
    [sym_false] = ACTIONS(13),
    [sym_nil] = ACTIONS(13),
    [sym_comment] = ACTIONS(21),
  },
  [2] = {
    [sym__expression] = STATE(12),
    [sym_set] = STATE(12),
    [sym_hash_map] = STATE(12),
    [sym_vector] = STATE(12),
    [sym_keyword] = STATE(12),
    [sym_unqualified_keyword] = STATE(9),
    [sym_qualified_keyword] = STATE(9),
    [sym_number] = STATE(12),
    [aux_sym_program_repeat1] = STATE(12),
    [anon_sym_POUND_LBRACE] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_string] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [sym_number_long] = ACTIONS(19),
    [sym_number_double] = ACTIONS(19),
    [sym_true] = ACTIONS(25),
    [sym_false] = ACTIONS(25),
    [sym_nil] = ACTIONS(25),
    [sym_comment] = ACTIONS(21),
  },
  [3] = {
    [sym__expression] = STATE(14),
    [sym_set] = STATE(14),
    [sym_hash_map] = STATE(14),
    [sym_hash_map_kv_pair] = STATE(16),
    [sym_hash_map_key] = STATE(15),
    [sym_vector] = STATE(14),
    [sym_keyword] = STATE(14),
    [sym_unqualified_keyword] = STATE(9),
    [sym_qualified_keyword] = STATE(9),
    [sym_number] = STATE(14),
    [aux_sym_hash_map_repeat1] = STATE(16),
    [anon_sym_POUND_LBRACE] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_string] = ACTIONS(29),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [sym_number_long] = ACTIONS(19),
    [sym_number_double] = ACTIONS(19),
    [sym_true] = ACTIONS(29),
    [sym_false] = ACTIONS(29),
    [sym_nil] = ACTIONS(29),
    [sym_comment] = ACTIONS(21),
  },
  [4] = {
    [sym__expression] = STATE(18),
    [sym_set] = STATE(18),
    [sym_hash_map] = STATE(18),
    [sym_vector] = STATE(18),
    [sym_keyword] = STATE(18),
    [sym_unqualified_keyword] = STATE(9),
    [sym_qualified_keyword] = STATE(9),
    [sym_number] = STATE(18),
    [aux_sym_program_repeat1] = STATE(18),
    [anon_sym_POUND_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(31),
    [sym_string] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [sym_number_long] = ACTIONS(19),
    [sym_number_double] = ACTIONS(19),
    [sym_true] = ACTIONS(33),
    [sym_false] = ACTIONS(33),
    [sym_nil] = ACTIONS(33),
    [sym_comment] = ACTIONS(21),
  },
  [5] = {
    [sym__keyword_chars] = ACTIONS(35),
    [sym_comment] = ACTIONS(21),
  },
  [6] = {
    [sym__keyword_chars] = ACTIONS(37),
    [sym_comment] = ACTIONS(21),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_RBRACK] = ACTIONS(39),
    [sym_string] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_COLON_COLON] = ACTIONS(39),
    [sym_number_long] = ACTIONS(39),
    [sym_number_double] = ACTIONS(39),
    [sym_true] = ACTIONS(39),
    [sym_false] = ACTIONS(39),
    [sym_nil] = ACTIONS(39),
    [sym_comment] = ACTIONS(21),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_comment] = ACTIONS(21),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_RBRACK] = ACTIONS(45),
    [sym_string] = ACTIONS(45),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(45),
    [sym_number_long] = ACTIONS(45),
    [sym_number_double] = ACTIONS(45),
    [sym_true] = ACTIONS(45),
    [sym_false] = ACTIONS(45),
    [sym_nil] = ACTIONS(45),
    [sym_comment] = ACTIONS(21),
  },
  [10] = {
    [sym__expression] = STATE(21),
    [sym_set] = STATE(21),
    [sym_hash_map] = STATE(21),
    [sym_vector] = STATE(21),
    [sym_keyword] = STATE(21),
    [sym_unqualified_keyword] = STATE(9),
    [sym_qualified_keyword] = STATE(9),
    [sym_number] = STATE(21),
    [aux_sym_program_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_POUND_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_string] = ACTIONS(51),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [sym_number_long] = ACTIONS(19),
    [sym_number_double] = ACTIONS(19),
    [sym_true] = ACTIONS(51),
    [sym_false] = ACTIONS(51),
    [sym_nil] = ACTIONS(51),
    [sym_comment] = ACTIONS(21),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_POUND_LBRACE] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_RBRACK] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(55),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym_number_long] = ACTIONS(53),
    [sym_number_double] = ACTIONS(53),
    [sym_true] = ACTIONS(53),
    [sym_false] = ACTIONS(53),
    [sym_nil] = ACTIONS(53),
    [sym_comment] = ACTIONS(21),
  },
  [12] = {
    [sym__expression] = STATE(23),
    [sym_set] = STATE(23),
    [sym_hash_map] = STATE(23),
    [sym_vector] = STATE(23),
    [sym_keyword] = STATE(23),
    [sym_unqualified_keyword] = STATE(9),
    [sym_qualified_keyword] = STATE(9),
    [sym_number] = STATE(23),
    [aux_sym_program_repeat1] = STATE(23),
    [anon_sym_POUND_LBRACE] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_string] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [sym_number_long] = ACTIONS(19),
    [sym_number_double] = ACTIONS(19),
    [sym_true] = ACTIONS(59),
    [sym_false] = ACTIONS(59),
    [sym_nil] = ACTIONS(59),
    [sym_comment] = ACTIONS(21),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_POUND_LBRACE] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_RBRACK] = ACTIONS(61),
    [sym_string] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym_number_long] = ACTIONS(61),
    [sym_number_double] = ACTIONS(61),
    [sym_true] = ACTIONS(61),
    [sym_false] = ACTIONS(61),
    [sym_nil] = ACTIONS(61),
    [sym_comment] = ACTIONS(21),
  },
  [14] = {
    [anon_sym_POUND_LBRACE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(65),
    [sym_string] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym_number_long] = ACTIONS(65),
    [sym_number_double] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_false] = ACTIONS(65),
    [sym_nil] = ACTIONS(65),
    [sym_comment] = ACTIONS(21),
  },
  [15] = {
    [sym__expression] = STATE(24),
    [sym_set] = STATE(24),
    [sym_hash_map] = STATE(24),
    [sym_hash_map_value] = STATE(25),
    [sym_vector] = STATE(24),
    [sym_keyword] = STATE(24),
    [sym_unqualified_keyword] = STATE(9),
    [sym_qualified_keyword] = STATE(9),
    [sym_number] = STATE(24),
    [anon_sym_POUND_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_string] = ACTIONS(69),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [sym_number_long] = ACTIONS(19),
    [sym_number_double] = ACTIONS(19),
    [sym_true] = ACTIONS(69),
    [sym_false] = ACTIONS(69),
    [sym_nil] = ACTIONS(69),
    [sym_comment] = ACTIONS(21),
  },
  [16] = {
    [sym__expression] = STATE(14),
    [sym_set] = STATE(14),
    [sym_hash_map] = STATE(14),
    [sym_hash_map_kv_pair] = STATE(27),
    [sym_hash_map_key] = STATE(15),
    [sym_vector] = STATE(14),
    [sym_keyword] = STATE(14),
    [sym_unqualified_keyword] = STATE(9),
    [sym_qualified_keyword] = STATE(9),
    [sym_number] = STATE(14),
    [aux_sym_hash_map_repeat1] = STATE(27),
    [anon_sym_POUND_LBRACE] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_string] = ACTIONS(29),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [sym_number_long] = ACTIONS(19),
    [sym_number_double] = ACTIONS(19),
    [sym_true] = ACTIONS(29),
    [sym_false] = ACTIONS(29),
    [sym_nil] = ACTIONS(29),
    [sym_comment] = ACTIONS(21),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_POUND_LBRACE] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_RBRACK] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(73),
    [sym_number_long] = ACTIONS(73),
    [sym_number_double] = ACTIONS(73),
    [sym_true] = ACTIONS(73),
    [sym_false] = ACTIONS(73),
    [sym_nil] = ACTIONS(73),
    [sym_comment] = ACTIONS(21),
  },
  [18] = {
    [sym__expression] = STATE(29),
    [sym_set] = STATE(29),
    [sym_hash_map] = STATE(29),
    [sym_vector] = STATE(29),
    [sym_keyword] = STATE(29),
    [sym_unqualified_keyword] = STATE(9),
    [sym_qualified_keyword] = STATE(9),
    [sym_number] = STATE(29),
    [aux_sym_program_repeat1] = STATE(29),
    [anon_sym_POUND_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(77),
    [sym_string] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [sym_number_long] = ACTIONS(19),
    [sym_number_double] = ACTIONS(19),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_nil] = ACTIONS(79),
    [sym_comment] = ACTIONS(21),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_POUND_LBRACE] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(81),
    [sym_string] = ACTIONS(81),
    [anon_sym_COLON] = ACTIONS(83),
    [anon_sym_COLON_COLON] = ACTIONS(81),
    [sym_number_long] = ACTIONS(81),
    [sym_number_double] = ACTIONS(81),
    [sym_true] = ACTIONS(81),
    [sym_false] = ACTIONS(81),
    [sym_nil] = ACTIONS(81),
    [sym_comment] = ACTIONS(21),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_POUND_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(85),
    [sym_string] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(87),
    [anon_sym_COLON_COLON] = ACTIONS(85),
    [sym_number_long] = ACTIONS(85),
    [sym_number_double] = ACTIONS(85),
    [sym_true] = ACTIONS(85),
    [sym_false] = ACTIONS(85),
    [sym_nil] = ACTIONS(85),
    [sym_comment] = ACTIONS(21),
  },
  [21] = {
    [sym__expression] = STATE(21),
    [sym_set] = STATE(21),
    [sym_hash_map] = STATE(21),
    [sym_vector] = STATE(21),
    [sym_keyword] = STATE(21),
    [sym_unqualified_keyword] = STATE(9),
    [sym_qualified_keyword] = STATE(9),
    [sym_number] = STATE(21),
    [aux_sym_program_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_POUND_LBRACE] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(94),
    [anon_sym_LBRACK] = ACTIONS(97),
    [sym_string] = ACTIONS(100),
    [anon_sym_COLON] = ACTIONS(103),
    [anon_sym_COLON_COLON] = ACTIONS(106),
    [sym_number_long] = ACTIONS(109),
    [sym_number_double] = ACTIONS(109),
    [sym_true] = ACTIONS(100),
    [sym_false] = ACTIONS(100),
    [sym_nil] = ACTIONS(100),
    [sym_comment] = ACTIONS(21),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(112),
    [anon_sym_POUND_LBRACE] = ACTIONS(112),
    [anon_sym_RBRACE] = ACTIONS(112),
    [anon_sym_LBRACE] = ACTIONS(112),
    [anon_sym_LBRACK] = ACTIONS(112),
    [anon_sym_RBRACK] = ACTIONS(112),
    [sym_string] = ACTIONS(112),
    [anon_sym_COLON] = ACTIONS(114),
    [anon_sym_COLON_COLON] = ACTIONS(112),
    [sym_number_long] = ACTIONS(112),
    [sym_number_double] = ACTIONS(112),
    [sym_true] = ACTIONS(112),
    [sym_false] = ACTIONS(112),
    [sym_nil] = ACTIONS(112),
    [sym_comment] = ACTIONS(21),
  },
  [23] = {
    [sym__expression] = STATE(23),
    [sym_set] = STATE(23),
    [sym_hash_map] = STATE(23),
    [sym_vector] = STATE(23),
    [sym_keyword] = STATE(23),
    [sym_unqualified_keyword] = STATE(9),
    [sym_qualified_keyword] = STATE(9),
    [sym_number] = STATE(23),
    [aux_sym_program_repeat1] = STATE(23),
    [anon_sym_POUND_LBRACE] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(94),
    [anon_sym_LBRACK] = ACTIONS(97),
    [sym_string] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(103),
    [anon_sym_COLON_COLON] = ACTIONS(106),
    [sym_number_long] = ACTIONS(109),
    [sym_number_double] = ACTIONS(109),
    [sym_true] = ACTIONS(116),
    [sym_false] = ACTIONS(116),
    [sym_nil] = ACTIONS(116),
    [sym_comment] = ACTIONS(21),
  },
  [24] = {
    [anon_sym_POUND_LBRACE] = ACTIONS(119),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(119),
    [sym_string] = ACTIONS(119),
    [anon_sym_COLON] = ACTIONS(121),
    [anon_sym_COLON_COLON] = ACTIONS(119),
    [sym_number_long] = ACTIONS(119),
    [sym_number_double] = ACTIONS(119),
    [sym_true] = ACTIONS(119),
    [sym_false] = ACTIONS(119),
    [sym_nil] = ACTIONS(119),
    [sym_comment] = ACTIONS(21),
  },
  [25] = {
    [anon_sym_POUND_LBRACE] = ACTIONS(123),
    [anon_sym_RBRACE] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(123),
    [sym_string] = ACTIONS(123),
    [anon_sym_COLON] = ACTIONS(125),
    [anon_sym_COLON_COLON] = ACTIONS(123),
    [sym_number_long] = ACTIONS(123),
    [sym_number_double] = ACTIONS(123),
    [sym_true] = ACTIONS(123),
    [sym_false] = ACTIONS(123),
    [sym_nil] = ACTIONS(123),
    [sym_comment] = ACTIONS(21),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [anon_sym_POUND_LBRACE] = ACTIONS(127),
    [anon_sym_RBRACE] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(127),
    [anon_sym_RBRACK] = ACTIONS(127),
    [sym_string] = ACTIONS(127),
    [anon_sym_COLON] = ACTIONS(129),
    [anon_sym_COLON_COLON] = ACTIONS(127),
    [sym_number_long] = ACTIONS(127),
    [sym_number_double] = ACTIONS(127),
    [sym_true] = ACTIONS(127),
    [sym_false] = ACTIONS(127),
    [sym_nil] = ACTIONS(127),
    [sym_comment] = ACTIONS(21),
  },
  [27] = {
    [sym__expression] = STATE(14),
    [sym_set] = STATE(14),
    [sym_hash_map] = STATE(14),
    [sym_hash_map_kv_pair] = STATE(27),
    [sym_hash_map_key] = STATE(15),
    [sym_vector] = STATE(14),
    [sym_keyword] = STATE(14),
    [sym_unqualified_keyword] = STATE(9),
    [sym_qualified_keyword] = STATE(9),
    [sym_number] = STATE(14),
    [aux_sym_hash_map_repeat1] = STATE(27),
    [anon_sym_POUND_LBRACE] = ACTIONS(131),
    [anon_sym_RBRACE] = ACTIONS(134),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_LBRACK] = ACTIONS(139),
    [sym_string] = ACTIONS(142),
    [anon_sym_COLON] = ACTIONS(145),
    [anon_sym_COLON_COLON] = ACTIONS(148),
    [sym_number_long] = ACTIONS(151),
    [sym_number_double] = ACTIONS(151),
    [sym_true] = ACTIONS(142),
    [sym_false] = ACTIONS(142),
    [sym_nil] = ACTIONS(142),
    [sym_comment] = ACTIONS(21),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(154),
    [anon_sym_POUND_LBRACE] = ACTIONS(154),
    [anon_sym_RBRACE] = ACTIONS(154),
    [anon_sym_LBRACE] = ACTIONS(154),
    [anon_sym_LBRACK] = ACTIONS(154),
    [anon_sym_RBRACK] = ACTIONS(154),
    [sym_string] = ACTIONS(154),
    [anon_sym_COLON] = ACTIONS(156),
    [anon_sym_COLON_COLON] = ACTIONS(154),
    [sym_number_long] = ACTIONS(154),
    [sym_number_double] = ACTIONS(154),
    [sym_true] = ACTIONS(154),
    [sym_false] = ACTIONS(154),
    [sym_nil] = ACTIONS(154),
    [sym_comment] = ACTIONS(21),
  },
  [29] = {
    [sym__expression] = STATE(29),
    [sym_set] = STATE(29),
    [sym_hash_map] = STATE(29),
    [sym_vector] = STATE(29),
    [sym_keyword] = STATE(29),
    [sym_unqualified_keyword] = STATE(9),
    [sym_qualified_keyword] = STATE(9),
    [sym_number] = STATE(29),
    [aux_sym_program_repeat1] = STATE(29),
    [anon_sym_POUND_LBRACE] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(94),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_RBRACK] = ACTIONS(89),
    [sym_string] = ACTIONS(158),
    [anon_sym_COLON] = ACTIONS(103),
    [anon_sym_COLON_COLON] = ACTIONS(106),
    [sym_number_long] = ACTIONS(109),
    [sym_number_double] = ACTIONS(109),
    [sym_true] = ACTIONS(158),
    [sym_false] = ACTIONS(158),
    [sym_nil] = ACTIONS(158),
    [sym_comment] = ACTIONS(21),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(3),
  [11] = {.count = 1, .reusable = true}, SHIFT(4),
  [13] = {.count = 1, .reusable = true}, SHIFT(10),
  [15] = {.count = 1, .reusable = false}, SHIFT(5),
  [17] = {.count = 1, .reusable = true}, SHIFT(6),
  [19] = {.count = 1, .reusable = true}, SHIFT(7),
  [21] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [23] = {.count = 1, .reusable = true}, SHIFT(11),
  [25] = {.count = 1, .reusable = true}, SHIFT(12),
  [27] = {.count = 1, .reusable = true}, SHIFT(13),
  [29] = {.count = 1, .reusable = true}, SHIFT(14),
  [31] = {.count = 1, .reusable = true}, SHIFT(17),
  [33] = {.count = 1, .reusable = true}, SHIFT(18),
  [35] = {.count = 1, .reusable = true}, SHIFT(19),
  [37] = {.count = 1, .reusable = true}, SHIFT(20),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_number, 1),
  [41] = {.count = 1, .reusable = false}, REDUCE(sym_number, 1),
  [43] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_keyword, 1),
  [47] = {.count = 1, .reusable = false}, REDUCE(sym_keyword, 1),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [51] = {.count = 1, .reusable = true}, SHIFT(21),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_set, 2),
  [55] = {.count = 1, .reusable = false}, REDUCE(sym_set, 2),
  [57] = {.count = 1, .reusable = true}, SHIFT(22),
  [59] = {.count = 1, .reusable = true}, SHIFT(23),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map, 2),
  [63] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map, 2),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map_key, 1),
  [67] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map_key, 1),
  [69] = {.count = 1, .reusable = true}, SHIFT(24),
  [71] = {.count = 1, .reusable = true}, SHIFT(26),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_vector, 2),
  [75] = {.count = 1, .reusable = false}, REDUCE(sym_vector, 2),
  [77] = {.count = 1, .reusable = true}, SHIFT(28),
  [79] = {.count = 1, .reusable = true}, SHIFT(29),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_unqualified_keyword, 2),
  [83] = {.count = 1, .reusable = false}, REDUCE(sym_unqualified_keyword, 2),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_keyword, 2),
  [87] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_keyword, 2),
  [89] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [91] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [94] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [97] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [100] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(21),
  [103] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [106] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [109] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [112] = {.count = 1, .reusable = true}, REDUCE(sym_set, 3),
  [114] = {.count = 1, .reusable = false}, REDUCE(sym_set, 3),
  [116] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map_value, 1),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map_value, 1),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map_kv_pair, 2),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map_kv_pair, 2),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map, 3),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map, 3),
  [131] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(2),
  [134] = {.count = 1, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2),
  [136] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(3),
  [139] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(4),
  [142] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(14),
  [145] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(5),
  [148] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(6),
  [151] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(7),
  [154] = {.count = 1, .reusable = true}, REDUCE(sym_vector, 3),
  [156] = {.count = 1, .reusable = false}, REDUCE(sym_vector, 3),
  [158] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(29),
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
