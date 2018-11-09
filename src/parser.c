#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 39
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_nil = 1,
  sym_true = 2,
  sym_false = 3,
  sym_number_long = 4,
  sym_number_double = 5,
  anon_sym_BSLASH = 6,
  sym__normal_char = 7,
  anon_sym_newline = 8,
  anon_sym_space = 9,
  anon_sym_tab = 10,
  anon_sym_formfeed = 11,
  anon_sym_backspace = 12,
  anon_sym_return = 13,
  anon_sym_u = 14,
  sym__hex_char = 15,
  anon_sym_o = 16,
  aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH = 17,
  aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH = 18,
  aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH = 19,
  sym_string = 20,
  anon_sym_COLON = 21,
  anon_sym_COLON_COLON = 22,
  sym__keyword_chars = 23,
  anon_sym_POUND_LBRACE = 24,
  anon_sym_RBRACE = 25,
  anon_sym_LBRACE = 26,
  anon_sym_LBRACK = 27,
  anon_sym_RBRACK = 28,
  sym_comment = 29,
  sym_program = 30,
  sym__expression = 31,
  sym_number = 32,
  sym_character = 33,
  sym__special_char = 34,
  sym__unicode_char = 35,
  sym__octal_char = 36,
  sym__octal_num = 37,
  sym_keyword = 38,
  sym_unqualified_keyword = 39,
  sym_qualified_keyword = 40,
  sym_set = 41,
  sym_hash_map = 42,
  sym_hash_map_kv_pair = 43,
  sym_hash_map_key = 44,
  sym_hash_map_value = 45,
  sym_vector = 46,
  aux_sym_program_repeat1 = 47,
  aux_sym_hash_map_repeat1 = 48,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_nil] = "nil",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_number_long] = "number_long",
  [sym_number_double] = "number_double",
  [anon_sym_BSLASH] = "\\",
  [sym__normal_char] = "_normal_char",
  [anon_sym_newline] = "newline",
  [anon_sym_space] = "space",
  [anon_sym_tab] = "tab",
  [anon_sym_formfeed] = "formfeed",
  [anon_sym_backspace] = "backspace",
  [anon_sym_return] = "return",
  [anon_sym_u] = "u",
  [sym__hex_char] = "_hex_char",
  [anon_sym_o] = "o",
  [aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = "/[0-3][0-7][0-7]/",
  [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = "/[0-7][0-7]/",
  [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = "/[0-7]/",
  [sym_string] = "string",
  [anon_sym_COLON] = ":",
  [anon_sym_COLON_COLON] = "::",
  [sym__keyword_chars] = "_keyword_chars",
  [anon_sym_POUND_LBRACE] = "#{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE] = "{",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym__expression] = "_expression",
  [sym_number] = "number",
  [sym_character] = "character",
  [sym__special_char] = "_special_char",
  [sym__unicode_char] = "_unicode_char",
  [sym__octal_char] = "_octal_char",
  [sym__octal_num] = "_octal_num",
  [sym_keyword] = "keyword",
  [sym_unqualified_keyword] = "unqualified_keyword",
  [sym_qualified_keyword] = "qualified_keyword",
  [sym_set] = "set",
  [sym_hash_map] = "hash_map",
  [sym_hash_map_kv_pair] = "hash_map_kv_pair",
  [sym_hash_map_key] = "hash_map_key",
  [sym_hash_map_value] = "hash_map_value",
  [sym_vector] = "vector",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_hash_map_repeat1] = "hash_map_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_nil] = {
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
  [sym_number_long] = {
    .visible = true,
    .named = true,
  },
  [sym_number_double] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [sym__normal_char] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_newline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_space] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tab] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_formfeed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_backspace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u] = {
    .visible = true,
    .named = false,
  },
  [sym__hex_char] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_o] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = {
    .visible = false,
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
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [sym__special_char] = {
    .visible = false,
    .named = true,
  },
  [sym__unicode_char] = {
    .visible = false,
    .named = true,
  },
  [sym__octal_char] = {
    .visible = false,
    .named = true,
  },
  [sym__octal_num] = {
    .visible = false,
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
      if (lookahead == '\\')
        ADVANCE(19);
      if (lookahead == ']')
        ADVANCE(20);
      if (lookahead == 'f')
        ADVANCE(21);
      if (lookahead == 'n')
        ADVANCE(29);
      if (lookahead == 'o')
        ADVANCE(38);
      if (lookahead == 'r')
        ADVANCE(39);
      if (lookahead == 's')
        ADVANCE(45);
      if (lookahead == 't')
        ADVANCE(50);
      if (lookahead == 'u')
        ADVANCE(56);
      if (lookahead == '{')
        ADVANCE(57);
      if (lookahead == '}')
        ADVANCE(58);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(59);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e'))
        ADVANCE(65);
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
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__hex_char);
      if (lookahead == 'o')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'r')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'm')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'f')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'e')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'e')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'd')
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_formfeed);
      END_STATE();
    case 29:
      if (lookahead == 'e')
        ADVANCE(30);
      if (lookahead == 'i')
        ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == 'w')
        ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'l')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'i')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'n')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'e')
        ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_newline);
      END_STATE();
    case 36:
      if (lookahead == 'l')
        ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 39:
      if (lookahead == 'e')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 't')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'u')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'r')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'n')
        ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 45:
      if (lookahead == 'p')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'a')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'c')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'e')
        ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_space);
      END_STATE();
    case 50:
      if (lookahead == 'a')
        ADVANCE(51);
      if (lookahead == 'r')
        ADVANCE(53);
      END_STATE();
    case 51:
      if (lookahead == 'b')
        ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_tab);
      END_STATE();
    case 53:
      if (lookahead == 'u')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'e')
        ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_number_long);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_number_long);
      if (lookahead == '.')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(10);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(61);
      END_STATE();
    case 62:
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
    case 63:
      if (lookahead == '_')
        ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == '.')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(10);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__hex_char);
      END_STATE();
    case 66:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ',')
        SKIP(66);
      if (lookahead == '.')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(15);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == '[')
        ADVANCE(18);
      if (lookahead == '\\')
        ADVANCE(19);
      if (lookahead == 'f')
        ADVANCE(67);
      if (lookahead == 'n')
        ADVANCE(72);
      if (lookahead == 't')
        ADVANCE(73);
      if (lookahead == '{')
        ADVANCE(57);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(66);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(61);
      END_STATE();
    case 67:
      if (lookahead == 'a')
        ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == 'l')
        ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 's')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'e')
        ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 72:
      if (lookahead == 'i')
        ADVANCE(36);
      END_STATE();
    case 73:
      if (lookahead == 'r')
        ADVANCE(53);
      END_STATE();
    case 74:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ',')
        SKIP(74);
      if (lookahead == '.')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(15);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == '[')
        ADVANCE(18);
      if (lookahead == '\\')
        ADVANCE(19);
      if (lookahead == ']')
        ADVANCE(20);
      if (lookahead == 'f')
        ADVANCE(67);
      if (lookahead == 'n')
        ADVANCE(72);
      if (lookahead == 't')
        ADVANCE(73);
      if (lookahead == '{')
        ADVANCE(57);
      if (lookahead == '}')
        ADVANCE(58);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(74);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(61);
      END_STATE();
    case 75:
      if (lookahead == '\n')
        SKIP(75);
      if (lookahead == ',')
        ADVANCE(76);
      if (lookahead == ';')
        ADVANCE(77);
      if (lookahead == 'b')
        ADVANCE(78);
      if (lookahead == 'f')
        ADVANCE(87);
      if (lookahead == 'n')
        ADVANCE(88);
      if (lookahead == 'o')
        ADVANCE(38);
      if (lookahead == 'r')
        ADVANCE(89);
      if (lookahead == 's')
        ADVANCE(90);
      if (lookahead == 't')
        ADVANCE(91);
      if (lookahead == 'u')
        ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(76);
      if (lookahead != 0)
        ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__normal_char);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(17);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'a')
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 'c')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == 'k')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 's')
        ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 'p')
        ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == 'a')
        ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == 'c')
        ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 'e')
        ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_backspace);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'o')
        ADVANCE(22);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'e')
        ADVANCE(30);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'e')
        ADVANCE(40);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'p')
        ADVANCE(46);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'a')
        ADVANCE(51);
      END_STATE();
    case 92:
      if (lookahead == ',')
        SKIP(92);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(92);
      if (lookahead == '!' ||
          ('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__keyword_chars);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(93);
      END_STATE();
    case 94:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ',')
        SKIP(94);
      if (lookahead == '.')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(15);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == '[')
        ADVANCE(18);
      if (lookahead == '\\')
        ADVANCE(19);
      if (lookahead == 'f')
        ADVANCE(67);
      if (lookahead == 'n')
        ADVANCE(72);
      if (lookahead == 't')
        ADVANCE(73);
      if (lookahead == '{')
        ADVANCE(57);
      if (lookahead == '}')
        ADVANCE(58);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(94);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(61);
      END_STATE();
    case 95:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ',')
        SKIP(95);
      if (lookahead == '.')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(15);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == '[')
        ADVANCE(18);
      if (lookahead == '\\')
        ADVANCE(19);
      if (lookahead == ']')
        ADVANCE(20);
      if (lookahead == 'f')
        ADVANCE(67);
      if (lookahead == 'n')
        ADVANCE(72);
      if (lookahead == 't')
        ADVANCE(73);
      if (lookahead == '{')
        ADVANCE(57);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(95);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(61);
      END_STATE();
    case 96:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        SKIP(96);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(96);
      END_STATE();
    case 97:
      if (lookahead == ',')
        SKIP(97);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(65);
      END_STATE();
    case 98:
      if (lookahead == ',')
        SKIP(98);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(98);
      if (('0' <= lookahead && lookahead <= '3'))
        ADVANCE(99);
      if (('4' <= lookahead && lookahead <= '7'))
        ADVANCE(102);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 66},
  [2] = {.lex_state = 74},
  [3] = {.lex_state = 75},
  [4] = {.lex_state = 92},
  [5] = {.lex_state = 92},
  [6] = {.lex_state = 94},
  [7] = {.lex_state = 94},
  [8] = {.lex_state = 95},
  [9] = {.lex_state = 96},
  [10] = {.lex_state = 74},
  [11] = {.lex_state = 66},
  [12] = {.lex_state = 74},
  [13] = {.lex_state = 97},
  [14] = {.lex_state = 98},
  [15] = {.lex_state = 74},
  [16] = {.lex_state = 74},
  [17] = {.lex_state = 74},
  [18] = {.lex_state = 94},
  [19] = {.lex_state = 74},
  [20] = {.lex_state = 66},
  [21] = {.lex_state = 66},
  [22] = {.lex_state = 94},
  [23] = {.lex_state = 74},
  [24] = {.lex_state = 95},
  [25] = {.lex_state = 66},
  [26] = {.lex_state = 97},
  [27] = {.lex_state = 74},
  [28] = {.lex_state = 74},
  [29] = {.lex_state = 94},
  [30] = {.lex_state = 94},
  [31] = {.lex_state = 94},
  [32] = {.lex_state = 74},
  [33] = {.lex_state = 94},
  [34] = {.lex_state = 74},
  [35] = {.lex_state = 95},
  [36] = {.lex_state = 97},
  [37] = {.lex_state = 97},
  [38] = {.lex_state = 74},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_number_long] = ACTIONS(1),
    [sym_number_double] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_newline] = ACTIONS(1),
    [anon_sym_space] = ACTIONS(1),
    [anon_sym_tab] = ACTIONS(1),
    [anon_sym_formfeed] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_u] = ACTIONS(1),
    [sym__hex_char] = ACTIONS(3),
    [anon_sym_o] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(3),
    [sym_string] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_POUND_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(9),
    [sym__expression] = STATE(11),
    [sym_number] = STATE(11),
    [sym_character] = STATE(11),
    [sym_keyword] = STATE(11),
    [sym_unqualified_keyword] = STATE(10),
    [sym_qualified_keyword] = STATE(10),
    [sym_set] = STATE(11),
    [sym_hash_map] = STATE(11),
    [sym_vector] = STATE(11),
    [aux_sym_program_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_nil] = ACTIONS(7),
    [sym_true] = ACTIONS(7),
    [sym_false] = ACTIONS(7),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [anon_sym_POUND_LBRACE] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_nil] = ACTIONS(25),
    [sym_true] = ACTIONS(25),
    [sym_false] = ACTIONS(25),
    [sym_number_long] = ACTIONS(25),
    [sym_number_double] = ACTIONS(25),
    [anon_sym_BSLASH] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_POUND_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(25),
    [sym_comment] = ACTIONS(23),
  },
  [3] = {
    [sym__special_char] = STATE(12),
    [sym__unicode_char] = STATE(12),
    [sym__octal_char] = STATE(12),
    [sym__normal_char] = ACTIONS(29),
    [anon_sym_newline] = ACTIONS(29),
    [anon_sym_space] = ACTIONS(29),
    [anon_sym_tab] = ACTIONS(29),
    [anon_sym_formfeed] = ACTIONS(29),
    [anon_sym_backspace] = ACTIONS(29),
    [anon_sym_return] = ACTIONS(29),
    [anon_sym_u] = ACTIONS(31),
    [anon_sym_o] = ACTIONS(33),
    [sym_comment] = ACTIONS(35),
  },
  [4] = {
    [sym__keyword_chars] = ACTIONS(37),
    [sym_comment] = ACTIONS(23),
  },
  [5] = {
    [sym__keyword_chars] = ACTIONS(39),
    [sym_comment] = ACTIONS(23),
  },
  [6] = {
    [sym__expression] = STATE(18),
    [sym_number] = STATE(18),
    [sym_character] = STATE(18),
    [sym_keyword] = STATE(18),
    [sym_unqualified_keyword] = STATE(10),
    [sym_qualified_keyword] = STATE(10),
    [sym_set] = STATE(18),
    [sym_hash_map] = STATE(18),
    [sym_vector] = STATE(18),
    [aux_sym_program_repeat1] = STATE(18),
    [sym_nil] = ACTIONS(41),
    [sym_true] = ACTIONS(41),
    [sym_false] = ACTIONS(41),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(41),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [anon_sym_POUND_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
  },
  [7] = {
    [sym__expression] = STATE(20),
    [sym_number] = STATE(20),
    [sym_character] = STATE(20),
    [sym_keyword] = STATE(20),
    [sym_unqualified_keyword] = STATE(10),
    [sym_qualified_keyword] = STATE(10),
    [sym_set] = STATE(20),
    [sym_hash_map] = STATE(20),
    [sym_hash_map_kv_pair] = STATE(22),
    [sym_hash_map_key] = STATE(21),
    [sym_vector] = STATE(20),
    [aux_sym_hash_map_repeat1] = STATE(22),
    [sym_nil] = ACTIONS(45),
    [sym_true] = ACTIONS(45),
    [sym_false] = ACTIONS(45),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(45),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [anon_sym_POUND_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
  },
  [8] = {
    [sym__expression] = STATE(24),
    [sym_number] = STATE(24),
    [sym_character] = STATE(24),
    [sym_keyword] = STATE(24),
    [sym_unqualified_keyword] = STATE(10),
    [sym_qualified_keyword] = STATE(10),
    [sym_set] = STATE(24),
    [sym_hash_map] = STATE(24),
    [sym_vector] = STATE(24),
    [aux_sym_program_repeat1] = STATE(24),
    [sym_nil] = ACTIONS(49),
    [sym_true] = ACTIONS(49),
    [sym_false] = ACTIONS(49),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [anon_sym_POUND_LBRACE] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(51),
    [sym_comment] = ACTIONS(23),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym_comment] = ACTIONS(23),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_nil] = ACTIONS(55),
    [sym_true] = ACTIONS(55),
    [sym_false] = ACTIONS(55),
    [sym_number_long] = ACTIONS(55),
    [sym_number_double] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(55),
    [sym_string] = ACTIONS(55),
    [anon_sym_COLON] = ACTIONS(57),
    [anon_sym_COLON_COLON] = ACTIONS(55),
    [anon_sym_POUND_LBRACE] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_RBRACK] = ACTIONS(55),
    [sym_comment] = ACTIONS(23),
  },
  [11] = {
    [sym__expression] = STATE(25),
    [sym_number] = STATE(25),
    [sym_character] = STATE(25),
    [sym_keyword] = STATE(25),
    [sym_unqualified_keyword] = STATE(10),
    [sym_qualified_keyword] = STATE(10),
    [sym_set] = STATE(25),
    [sym_hash_map] = STATE(25),
    [sym_vector] = STATE(25),
    [aux_sym_program_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_nil] = ACTIONS(61),
    [sym_true] = ACTIONS(61),
    [sym_false] = ACTIONS(61),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [anon_sym_POUND_LBRACE] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(63),
    [sym_nil] = ACTIONS(63),
    [sym_true] = ACTIONS(63),
    [sym_false] = ACTIONS(63),
    [sym_number_long] = ACTIONS(63),
    [sym_number_double] = ACTIONS(63),
    [anon_sym_BSLASH] = ACTIONS(63),
    [sym_string] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [anon_sym_POUND_LBRACE] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(63),
    [anon_sym_RBRACK] = ACTIONS(63),
    [sym_comment] = ACTIONS(23),
  },
  [13] = {
    [sym__hex_char] = ACTIONS(67),
    [sym_comment] = ACTIONS(23),
  },
  [14] = {
    [sym__octal_num] = STATE(27),
    [aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(71),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(71),
    [sym_comment] = ACTIONS(23),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [sym_nil] = ACTIONS(73),
    [sym_true] = ACTIONS(73),
    [sym_false] = ACTIONS(73),
    [sym_number_long] = ACTIONS(73),
    [sym_number_double] = ACTIONS(73),
    [anon_sym_BSLASH] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(73),
    [anon_sym_POUND_LBRACE] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_RBRACK] = ACTIONS(73),
    [sym_comment] = ACTIONS(23),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym_nil] = ACTIONS(77),
    [sym_true] = ACTIONS(77),
    [sym_false] = ACTIONS(77),
    [sym_number_long] = ACTIONS(77),
    [sym_number_double] = ACTIONS(77),
    [anon_sym_BSLASH] = ACTIONS(77),
    [sym_string] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [anon_sym_COLON_COLON] = ACTIONS(77),
    [anon_sym_POUND_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(77),
    [sym_comment] = ACTIONS(23),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [sym_nil] = ACTIONS(81),
    [sym_true] = ACTIONS(81),
    [sym_false] = ACTIONS(81),
    [sym_number_long] = ACTIONS(81),
    [sym_number_double] = ACTIONS(81),
    [anon_sym_BSLASH] = ACTIONS(81),
    [sym_string] = ACTIONS(81),
    [anon_sym_COLON] = ACTIONS(83),
    [anon_sym_COLON_COLON] = ACTIONS(81),
    [anon_sym_POUND_LBRACE] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(81),
    [sym_comment] = ACTIONS(23),
  },
  [18] = {
    [sym__expression] = STATE(29),
    [sym_number] = STATE(29),
    [sym_character] = STATE(29),
    [sym_keyword] = STATE(29),
    [sym_unqualified_keyword] = STATE(10),
    [sym_qualified_keyword] = STATE(10),
    [sym_set] = STATE(29),
    [sym_hash_map] = STATE(29),
    [sym_vector] = STATE(29),
    [aux_sym_program_repeat1] = STATE(29),
    [sym_nil] = ACTIONS(85),
    [sym_true] = ACTIONS(85),
    [sym_false] = ACTIONS(85),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [anon_sym_POUND_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [sym_nil] = ACTIONS(89),
    [sym_true] = ACTIONS(89),
    [sym_false] = ACTIONS(89),
    [sym_number_long] = ACTIONS(89),
    [sym_number_double] = ACTIONS(89),
    [anon_sym_BSLASH] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
    [anon_sym_COLON] = ACTIONS(91),
    [anon_sym_COLON_COLON] = ACTIONS(89),
    [anon_sym_POUND_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(89),
    [sym_comment] = ACTIONS(23),
  },
  [20] = {
    [sym_nil] = ACTIONS(93),
    [sym_true] = ACTIONS(93),
    [sym_false] = ACTIONS(93),
    [sym_number_long] = ACTIONS(93),
    [sym_number_double] = ACTIONS(93),
    [anon_sym_BSLASH] = ACTIONS(93),
    [sym_string] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(93),
    [anon_sym_POUND_LBRACE] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(93),
    [sym_comment] = ACTIONS(23),
  },
  [21] = {
    [sym__expression] = STATE(30),
    [sym_number] = STATE(30),
    [sym_character] = STATE(30),
    [sym_keyword] = STATE(30),
    [sym_unqualified_keyword] = STATE(10),
    [sym_qualified_keyword] = STATE(10),
    [sym_set] = STATE(30),
    [sym_hash_map] = STATE(30),
    [sym_hash_map_value] = STATE(31),
    [sym_vector] = STATE(30),
    [sym_nil] = ACTIONS(97),
    [sym_true] = ACTIONS(97),
    [sym_false] = ACTIONS(97),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [anon_sym_POUND_LBRACE] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
  },
  [22] = {
    [sym__expression] = STATE(20),
    [sym_number] = STATE(20),
    [sym_character] = STATE(20),
    [sym_keyword] = STATE(20),
    [sym_unqualified_keyword] = STATE(10),
    [sym_qualified_keyword] = STATE(10),
    [sym_set] = STATE(20),
    [sym_hash_map] = STATE(20),
    [sym_hash_map_kv_pair] = STATE(33),
    [sym_hash_map_key] = STATE(21),
    [sym_vector] = STATE(20),
    [aux_sym_hash_map_repeat1] = STATE(33),
    [sym_nil] = ACTIONS(45),
    [sym_true] = ACTIONS(45),
    [sym_false] = ACTIONS(45),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(45),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [anon_sym_POUND_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [sym_nil] = ACTIONS(101),
    [sym_true] = ACTIONS(101),
    [sym_false] = ACTIONS(101),
    [sym_number_long] = ACTIONS(101),
    [sym_number_double] = ACTIONS(101),
    [anon_sym_BSLASH] = ACTIONS(101),
    [sym_string] = ACTIONS(101),
    [anon_sym_COLON] = ACTIONS(103),
    [anon_sym_COLON_COLON] = ACTIONS(101),
    [anon_sym_POUND_LBRACE] = ACTIONS(101),
    [anon_sym_RBRACE] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_RBRACK] = ACTIONS(101),
    [sym_comment] = ACTIONS(23),
  },
  [24] = {
    [sym__expression] = STATE(35),
    [sym_number] = STATE(35),
    [sym_character] = STATE(35),
    [sym_keyword] = STATE(35),
    [sym_unqualified_keyword] = STATE(10),
    [sym_qualified_keyword] = STATE(10),
    [sym_set] = STATE(35),
    [sym_hash_map] = STATE(35),
    [sym_vector] = STATE(35),
    [aux_sym_program_repeat1] = STATE(35),
    [sym_nil] = ACTIONS(105),
    [sym_true] = ACTIONS(105),
    [sym_false] = ACTIONS(105),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(105),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [anon_sym_POUND_LBRACE] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(107),
    [sym_comment] = ACTIONS(23),
  },
  [25] = {
    [sym__expression] = STATE(25),
    [sym_number] = STATE(25),
    [sym_character] = STATE(25),
    [sym_keyword] = STATE(25),
    [sym_unqualified_keyword] = STATE(10),
    [sym_qualified_keyword] = STATE(10),
    [sym_set] = STATE(25),
    [sym_hash_map] = STATE(25),
    [sym_vector] = STATE(25),
    [aux_sym_program_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(109),
    [sym_nil] = ACTIONS(111),
    [sym_true] = ACTIONS(111),
    [sym_false] = ACTIONS(111),
    [sym_number_long] = ACTIONS(114),
    [sym_number_double] = ACTIONS(114),
    [anon_sym_BSLASH] = ACTIONS(117),
    [sym_string] = ACTIONS(111),
    [anon_sym_COLON] = ACTIONS(120),
    [anon_sym_COLON_COLON] = ACTIONS(123),
    [anon_sym_POUND_LBRACE] = ACTIONS(126),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(132),
    [sym_comment] = ACTIONS(23),
  },
  [26] = {
    [sym__hex_char] = ACTIONS(135),
    [sym_comment] = ACTIONS(23),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [sym_nil] = ACTIONS(137),
    [sym_true] = ACTIONS(137),
    [sym_false] = ACTIONS(137),
    [sym_number_long] = ACTIONS(137),
    [sym_number_double] = ACTIONS(137),
    [anon_sym_BSLASH] = ACTIONS(137),
    [sym_string] = ACTIONS(137),
    [anon_sym_COLON] = ACTIONS(139),
    [anon_sym_COLON_COLON] = ACTIONS(137),
    [anon_sym_POUND_LBRACE] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(137),
    [sym_comment] = ACTIONS(23),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(141),
    [sym_nil] = ACTIONS(141),
    [sym_true] = ACTIONS(141),
    [sym_false] = ACTIONS(141),
    [sym_number_long] = ACTIONS(141),
    [sym_number_double] = ACTIONS(141),
    [anon_sym_BSLASH] = ACTIONS(141),
    [sym_string] = ACTIONS(141),
    [anon_sym_COLON] = ACTIONS(143),
    [anon_sym_COLON_COLON] = ACTIONS(141),
    [anon_sym_POUND_LBRACE] = ACTIONS(141),
    [anon_sym_RBRACE] = ACTIONS(141),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(141),
    [sym_comment] = ACTIONS(23),
  },
  [29] = {
    [sym__expression] = STATE(29),
    [sym_number] = STATE(29),
    [sym_character] = STATE(29),
    [sym_keyword] = STATE(29),
    [sym_unqualified_keyword] = STATE(10),
    [sym_qualified_keyword] = STATE(10),
    [sym_set] = STATE(29),
    [sym_hash_map] = STATE(29),
    [sym_vector] = STATE(29),
    [aux_sym_program_repeat1] = STATE(29),
    [sym_nil] = ACTIONS(145),
    [sym_true] = ACTIONS(145),
    [sym_false] = ACTIONS(145),
    [sym_number_long] = ACTIONS(114),
    [sym_number_double] = ACTIONS(114),
    [anon_sym_BSLASH] = ACTIONS(117),
    [sym_string] = ACTIONS(145),
    [anon_sym_COLON] = ACTIONS(120),
    [anon_sym_COLON_COLON] = ACTIONS(123),
    [anon_sym_POUND_LBRACE] = ACTIONS(126),
    [anon_sym_RBRACE] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(132),
    [sym_comment] = ACTIONS(23),
  },
  [30] = {
    [sym_nil] = ACTIONS(148),
    [sym_true] = ACTIONS(148),
    [sym_false] = ACTIONS(148),
    [sym_number_long] = ACTIONS(148),
    [sym_number_double] = ACTIONS(148),
    [anon_sym_BSLASH] = ACTIONS(148),
    [sym_string] = ACTIONS(148),
    [anon_sym_COLON] = ACTIONS(150),
    [anon_sym_COLON_COLON] = ACTIONS(148),
    [anon_sym_POUND_LBRACE] = ACTIONS(148),
    [anon_sym_RBRACE] = ACTIONS(148),
    [anon_sym_LBRACE] = ACTIONS(148),
    [anon_sym_LBRACK] = ACTIONS(148),
    [sym_comment] = ACTIONS(23),
  },
  [31] = {
    [sym_nil] = ACTIONS(152),
    [sym_true] = ACTIONS(152),
    [sym_false] = ACTIONS(152),
    [sym_number_long] = ACTIONS(152),
    [sym_number_double] = ACTIONS(152),
    [anon_sym_BSLASH] = ACTIONS(152),
    [sym_string] = ACTIONS(152),
    [anon_sym_COLON] = ACTIONS(154),
    [anon_sym_COLON_COLON] = ACTIONS(152),
    [anon_sym_POUND_LBRACE] = ACTIONS(152),
    [anon_sym_RBRACE] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_LBRACK] = ACTIONS(152),
    [sym_comment] = ACTIONS(23),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(156),
    [sym_nil] = ACTIONS(156),
    [sym_true] = ACTIONS(156),
    [sym_false] = ACTIONS(156),
    [sym_number_long] = ACTIONS(156),
    [sym_number_double] = ACTIONS(156),
    [anon_sym_BSLASH] = ACTIONS(156),
    [sym_string] = ACTIONS(156),
    [anon_sym_COLON] = ACTIONS(158),
    [anon_sym_COLON_COLON] = ACTIONS(156),
    [anon_sym_POUND_LBRACE] = ACTIONS(156),
    [anon_sym_RBRACE] = ACTIONS(156),
    [anon_sym_LBRACE] = ACTIONS(156),
    [anon_sym_LBRACK] = ACTIONS(156),
    [anon_sym_RBRACK] = ACTIONS(156),
    [sym_comment] = ACTIONS(23),
  },
  [33] = {
    [sym__expression] = STATE(20),
    [sym_number] = STATE(20),
    [sym_character] = STATE(20),
    [sym_keyword] = STATE(20),
    [sym_unqualified_keyword] = STATE(10),
    [sym_qualified_keyword] = STATE(10),
    [sym_set] = STATE(20),
    [sym_hash_map] = STATE(20),
    [sym_hash_map_kv_pair] = STATE(33),
    [sym_hash_map_key] = STATE(21),
    [sym_vector] = STATE(20),
    [aux_sym_hash_map_repeat1] = STATE(33),
    [sym_nil] = ACTIONS(160),
    [sym_true] = ACTIONS(160),
    [sym_false] = ACTIONS(160),
    [sym_number_long] = ACTIONS(163),
    [sym_number_double] = ACTIONS(163),
    [anon_sym_BSLASH] = ACTIONS(166),
    [sym_string] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(169),
    [anon_sym_COLON_COLON] = ACTIONS(172),
    [anon_sym_POUND_LBRACE] = ACTIONS(175),
    [anon_sym_RBRACE] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_LBRACK] = ACTIONS(183),
    [sym_comment] = ACTIONS(23),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(186),
    [sym_nil] = ACTIONS(186),
    [sym_true] = ACTIONS(186),
    [sym_false] = ACTIONS(186),
    [sym_number_long] = ACTIONS(186),
    [sym_number_double] = ACTIONS(186),
    [anon_sym_BSLASH] = ACTIONS(186),
    [sym_string] = ACTIONS(186),
    [anon_sym_COLON] = ACTIONS(188),
    [anon_sym_COLON_COLON] = ACTIONS(186),
    [anon_sym_POUND_LBRACE] = ACTIONS(186),
    [anon_sym_RBRACE] = ACTIONS(186),
    [anon_sym_LBRACE] = ACTIONS(186),
    [anon_sym_LBRACK] = ACTIONS(186),
    [anon_sym_RBRACK] = ACTIONS(186),
    [sym_comment] = ACTIONS(23),
  },
  [35] = {
    [sym__expression] = STATE(35),
    [sym_number] = STATE(35),
    [sym_character] = STATE(35),
    [sym_keyword] = STATE(35),
    [sym_unqualified_keyword] = STATE(10),
    [sym_qualified_keyword] = STATE(10),
    [sym_set] = STATE(35),
    [sym_hash_map] = STATE(35),
    [sym_vector] = STATE(35),
    [aux_sym_program_repeat1] = STATE(35),
    [sym_nil] = ACTIONS(190),
    [sym_true] = ACTIONS(190),
    [sym_false] = ACTIONS(190),
    [sym_number_long] = ACTIONS(114),
    [sym_number_double] = ACTIONS(114),
    [anon_sym_BSLASH] = ACTIONS(117),
    [sym_string] = ACTIONS(190),
    [anon_sym_COLON] = ACTIONS(120),
    [anon_sym_COLON_COLON] = ACTIONS(123),
    [anon_sym_POUND_LBRACE] = ACTIONS(126),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(132),
    [anon_sym_RBRACK] = ACTIONS(109),
    [sym_comment] = ACTIONS(23),
  },
  [36] = {
    [sym__hex_char] = ACTIONS(193),
    [sym_comment] = ACTIONS(23),
  },
  [37] = {
    [sym__hex_char] = ACTIONS(195),
    [sym_comment] = ACTIONS(23),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [sym_nil] = ACTIONS(197),
    [sym_true] = ACTIONS(197),
    [sym_false] = ACTIONS(197),
    [sym_number_long] = ACTIONS(197),
    [sym_number_double] = ACTIONS(197),
    [anon_sym_BSLASH] = ACTIONS(197),
    [sym_string] = ACTIONS(197),
    [anon_sym_COLON] = ACTIONS(199),
    [anon_sym_COLON_COLON] = ACTIONS(197),
    [anon_sym_POUND_LBRACE] = ACTIONS(197),
    [anon_sym_RBRACE] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(197),
    [anon_sym_RBRACK] = ACTIONS(197),
    [sym_comment] = ACTIONS(23),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(11),
  [9] = {.count = 1, .reusable = true}, SHIFT(2),
  [11] = {.count = 1, .reusable = true}, SHIFT(3),
  [13] = {.count = 1, .reusable = false}, SHIFT(4),
  [15] = {.count = 1, .reusable = true}, SHIFT(5),
  [17] = {.count = 1, .reusable = true}, SHIFT(6),
  [19] = {.count = 1, .reusable = true}, SHIFT(7),
  [21] = {.count = 1, .reusable = true}, SHIFT(8),
  [23] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_number, 1),
  [27] = {.count = 1, .reusable = false}, REDUCE(sym_number, 1),
  [29] = {.count = 1, .reusable = false}, SHIFT(12),
  [31] = {.count = 1, .reusable = false}, SHIFT(13),
  [33] = {.count = 1, .reusable = false}, SHIFT(14),
  [35] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [37] = {.count = 1, .reusable = true}, SHIFT(15),
  [39] = {.count = 1, .reusable = true}, SHIFT(16),
  [41] = {.count = 1, .reusable = true}, SHIFT(18),
  [43] = {.count = 1, .reusable = true}, SHIFT(17),
  [45] = {.count = 1, .reusable = true}, SHIFT(20),
  [47] = {.count = 1, .reusable = true}, SHIFT(19),
  [49] = {.count = 1, .reusable = true}, SHIFT(24),
  [51] = {.count = 1, .reusable = true}, SHIFT(23),
  [53] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_keyword, 1),
  [57] = {.count = 1, .reusable = false}, REDUCE(sym_keyword, 1),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [61] = {.count = 1, .reusable = true}, SHIFT(25),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_character, 2),
  [65] = {.count = 1, .reusable = false}, REDUCE(sym_character, 2),
  [67] = {.count = 1, .reusable = true}, SHIFT(26),
  [69] = {.count = 1, .reusable = true}, SHIFT(27),
  [71] = {.count = 1, .reusable = false}, SHIFT(27),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_unqualified_keyword, 2),
  [75] = {.count = 1, .reusable = false}, REDUCE(sym_unqualified_keyword, 2),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_keyword, 2),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_keyword, 2),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_set, 2),
  [83] = {.count = 1, .reusable = false}, REDUCE(sym_set, 2),
  [85] = {.count = 1, .reusable = true}, SHIFT(29),
  [87] = {.count = 1, .reusable = true}, SHIFT(28),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map, 2),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map, 2),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map_key, 1),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map_key, 1),
  [97] = {.count = 1, .reusable = true}, SHIFT(30),
  [99] = {.count = 1, .reusable = true}, SHIFT(32),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_vector, 2),
  [103] = {.count = 1, .reusable = false}, REDUCE(sym_vector, 2),
  [105] = {.count = 1, .reusable = true}, SHIFT(35),
  [107] = {.count = 1, .reusable = true}, SHIFT(34),
  [109] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [111] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(25),
  [114] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [117] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [120] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [123] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [126] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [129] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [132] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [135] = {.count = 1, .reusable = true}, SHIFT(36),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym__octal_char, 2),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym__octal_char, 2),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_set, 3),
  [143] = {.count = 1, .reusable = false}, REDUCE(sym_set, 3),
  [145] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(29),
  [148] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map_value, 1),
  [150] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map_value, 1),
  [152] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map_kv_pair, 2),
  [154] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map_kv_pair, 2),
  [156] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map, 3),
  [158] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map, 3),
  [160] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(20),
  [163] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(2),
  [166] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(3),
  [169] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(4),
  [172] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(5),
  [175] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(6),
  [178] = {.count = 1, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2),
  [180] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(7),
  [183] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(8),
  [186] = {.count = 1, .reusable = true}, REDUCE(sym_vector, 3),
  [188] = {.count = 1, .reusable = false}, REDUCE(sym_vector, 3),
  [190] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(35),
  [193] = {.count = 1, .reusable = true}, SHIFT(37),
  [195] = {.count = 1, .reusable = true}, SHIFT(38),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym__unicode_char, 5),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym__unicode_char, 5),
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
