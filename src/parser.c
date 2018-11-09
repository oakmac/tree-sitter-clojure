#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 44
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
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
  anon_sym_POUND_DQUOTE = 21,
  aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH = 22,
  aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH = 23,
  anon_sym_DQUOTE = 24,
  anon_sym_COLON = 25,
  anon_sym_COLON_COLON = 26,
  sym__keyword_chars = 27,
  anon_sym_POUND_LBRACE = 28,
  anon_sym_RBRACE = 29,
  anon_sym_LBRACE = 30,
  anon_sym_LBRACK = 31,
  anon_sym_RBRACK = 32,
  sym_comment = 33,
  sym_program = 34,
  sym__expression = 35,
  sym_number = 36,
  sym_character = 37,
  sym__special_char = 38,
  sym__unicode_char = 39,
  sym__octal_char = 40,
  sym__octal_num = 41,
  sym_regex = 42,
  sym_keyword = 43,
  sym_unqualified_keyword = 44,
  sym_qualified_keyword = 45,
  sym_set = 46,
  sym_hash_map = 47,
  sym_hash_map_kv_pair = 48,
  sym_hash_map_key = 49,
  sym_hash_map_value = 50,
  sym_vector = 51,
  aux_sym_program_repeat1 = 52,
  aux_sym_regex_repeat1 = 53,
  aux_sym_hash_map_repeat1 = 54,
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
  [anon_sym_POUND_DQUOTE] = "#\"",
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = "/[^\\\\\"\\n]/",
  [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = "/\\\\(.|\\n)/",
  [anon_sym_DQUOTE] = "\"",
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
  [sym_regex] = "regex",
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
  [aux_sym_regex_repeat1] = "regex_repeat1",
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
  [anon_sym_POUND_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
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
  [sym_regex] = {
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
  [aux_sym_regex_repeat1] = {
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
        ADVANCE(3);
      if (lookahead == ',')
        SKIP(0);
      if (lookahead == '.')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == ';')
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(17);
      if (lookahead == '\\')
        ADVANCE(18);
      if (lookahead == ']')
        ADVANCE(19);
      if (lookahead == 'f')
        ADVANCE(20);
      if (lookahead == 'n')
        ADVANCE(28);
      if (lookahead == 'o')
        ADVANCE(37);
      if (lookahead == 'r')
        ADVANCE(38);
      if (lookahead == 's')
        ADVANCE(44);
      if (lookahead == 't')
        ADVANCE(49);
      if (lookahead == 'u')
        ADVANCE(55);
      if (lookahead == '{')
        ADVANCE(56);
      if (lookahead == '}')
        ADVANCE(57);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(58);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e'))
        ADVANCE(64);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 3:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '{')
        ADVANCE(5);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_POUND_DQUOTE);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_number_double);
      if (lookahead == '_')
        ADVANCE(8);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(9);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '_')
        ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_number_double);
      if (lookahead == '_')
        ADVANCE(12);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '_')
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_number_double);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__hex_char);
      if (lookahead == 'o')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'r')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'm')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'f')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'e')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'e')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'd')
        ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_formfeed);
      END_STATE();
    case 28:
      if (lookahead == 'e')
        ADVANCE(29);
      if (lookahead == 'i')
        ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == 'w')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'l')
        ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'i')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'n')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'e')
        ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_newline);
      END_STATE();
    case 35:
      if (lookahead == 'l')
        ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 38:
      if (lookahead == 'e')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 't')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'u')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'r')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'n')
        ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 44:
      if (lookahead == 'p')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'a')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'c')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'e')
        ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_space);
      END_STATE();
    case 49:
      if (lookahead == 'a')
        ADVANCE(50);
      if (lookahead == 'r')
        ADVANCE(52);
      END_STATE();
    case 50:
      if (lookahead == 'b')
        ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_tab);
      END_STATE();
    case 52:
      if (lookahead == 'u')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'e')
        ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_number_long);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_number_long);
      if (lookahead == '.')
        ADVANCE(61);
      if (lookahead == '_')
        ADVANCE(62);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(9);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_number_double);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(9);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 62:
      if (lookahead == '_')
        ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == '.')
        ADVANCE(61);
      if (lookahead == '_')
        ADVANCE(62);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(9);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__hex_char);
      END_STATE();
    case 65:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(66);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        SKIP(65);
      if (lookahead == '.')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == ';')
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(17);
      if (lookahead == '\\')
        ADVANCE(18);
      if (lookahead == 'f')
        ADVANCE(69);
      if (lookahead == 'n')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == '{')
        ADVANCE(56);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(65);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(60);
      END_STATE();
    case 66:
      if (lookahead == '\"')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 68:
      if (lookahead == '\n')
        ADVANCE(66);
      if (lookahead != 0)
        ADVANCE(66);
      END_STATE();
    case 69:
      if (lookahead == 'a')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'l')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 's')
        ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 'e')
        ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 74:
      if (lookahead == 'i')
        ADVANCE(35);
      END_STATE();
    case 75:
      if (lookahead == 'r')
        ADVANCE(52);
      END_STATE();
    case 76:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(66);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        SKIP(76);
      if (lookahead == '.')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == ';')
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(17);
      if (lookahead == '\\')
        ADVANCE(18);
      if (lookahead == ']')
        ADVANCE(19);
      if (lookahead == 'f')
        ADVANCE(69);
      if (lookahead == 'n')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == '{')
        ADVANCE(56);
      if (lookahead == '}')
        ADVANCE(57);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(76);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(60);
      END_STATE();
    case 77:
      if (lookahead == '\n')
        SKIP(77);
      if (lookahead == ',')
        ADVANCE(78);
      if (lookahead == ';')
        ADVANCE(79);
      if (lookahead == 'b')
        ADVANCE(80);
      if (lookahead == 'f')
        ADVANCE(89);
      if (lookahead == 'n')
        ADVANCE(90);
      if (lookahead == 'o')
        ADVANCE(37);
      if (lookahead == 'r')
        ADVANCE(91);
      if (lookahead == 's')
        ADVANCE(92);
      if (lookahead == 't')
        ADVANCE(93);
      if (lookahead == 'u')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(78);
      if (lookahead != 0)
        ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__normal_char);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(16);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'a')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 'c')
        ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 'k')
        ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == 's')
        ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == 'p')
        ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 'a')
        ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == 'c')
        ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == 'e')
        ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_backspace);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'o')
        ADVANCE(21);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'e')
        ADVANCE(29);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'e')
        ADVANCE(39);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'p')
        ADVANCE(45);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'a')
        ADVANCE(50);
      END_STATE();
    case 94:
      if (lookahead == '\n')
        SKIP(94);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(95);
      if (lookahead == ';')
        ADVANCE(96);
      if (lookahead == '\\')
        ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(16);
      END_STATE();
    case 97:
      if (lookahead == '\n')
        ADVANCE(98);
      if (lookahead != 0)
        ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH);
      END_STATE();
    case 99:
      if (lookahead == ',')
        SKIP(99);
      if (lookahead == ';')
        ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(99);
      if (lookahead == '!' ||
          ('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__keyword_chars);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(100);
      END_STATE();
    case 101:
      if (lookahead == '\"')
        ADVANCE(66);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        SKIP(101);
      if (lookahead == '.')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == ';')
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(17);
      if (lookahead == '\\')
        ADVANCE(18);
      if (lookahead == 'f')
        ADVANCE(69);
      if (lookahead == 'n')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == '{')
        ADVANCE(56);
      if (lookahead == '}')
        ADVANCE(57);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(101);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(60);
      END_STATE();
    case 102:
      if (lookahead == '\"')
        ADVANCE(66);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        SKIP(102);
      if (lookahead == '.')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == ';')
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(17);
      if (lookahead == '\\')
        ADVANCE(18);
      if (lookahead == ']')
        ADVANCE(19);
      if (lookahead == 'f')
        ADVANCE(69);
      if (lookahead == 'n')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == '{')
        ADVANCE(56);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(102);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(60);
      END_STATE();
    case 103:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        SKIP(103);
      if (lookahead == ';')
        ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(103);
      END_STATE();
    case 104:
      if (lookahead == ',')
        SKIP(104);
      if (lookahead == ';')
        ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(64);
      END_STATE();
    case 105:
      if (lookahead == ',')
        SKIP(105);
      if (lookahead == ';')
        ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(105);
      if (('0' <= lookahead && lookahead <= '3'))
        ADVANCE(106);
      if (('4' <= lookahead && lookahead <= '7'))
        ADVANCE(109);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 65},
  [2] = {.lex_state = 76},
  [3] = {.lex_state = 77},
  [4] = {.lex_state = 94},
  [5] = {.lex_state = 99},
  [6] = {.lex_state = 99},
  [7] = {.lex_state = 101},
  [8] = {.lex_state = 101},
  [9] = {.lex_state = 102},
  [10] = {.lex_state = 103},
  [11] = {.lex_state = 76},
  [12] = {.lex_state = 65},
  [13] = {.lex_state = 76},
  [14] = {.lex_state = 104},
  [15] = {.lex_state = 105},
  [16] = {.lex_state = 76},
  [17] = {.lex_state = 94},
  [18] = {.lex_state = 76},
  [19] = {.lex_state = 76},
  [20] = {.lex_state = 76},
  [21] = {.lex_state = 101},
  [22] = {.lex_state = 76},
  [23] = {.lex_state = 65},
  [24] = {.lex_state = 65},
  [25] = {.lex_state = 101},
  [26] = {.lex_state = 76},
  [27] = {.lex_state = 102},
  [28] = {.lex_state = 65},
  [29] = {.lex_state = 104},
  [30] = {.lex_state = 76},
  [31] = {.lex_state = 76},
  [32] = {.lex_state = 94},
  [33] = {.lex_state = 76},
  [34] = {.lex_state = 101},
  [35] = {.lex_state = 101},
  [36] = {.lex_state = 101},
  [37] = {.lex_state = 76},
  [38] = {.lex_state = 101},
  [39] = {.lex_state = 76},
  [40] = {.lex_state = 102},
  [41] = {.lex_state = 104},
  [42] = {.lex_state = 104},
  [43] = {.lex_state = 76},
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
    [anon_sym_POUND_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
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
    [sym_program] = STATE(10),
    [sym__expression] = STATE(12),
    [sym_number] = STATE(12),
    [sym_character] = STATE(12),
    [sym_regex] = STATE(12),
    [sym_keyword] = STATE(12),
    [sym_unqualified_keyword] = STATE(11),
    [sym_qualified_keyword] = STATE(11),
    [sym_set] = STATE(12),
    [sym_hash_map] = STATE(12),
    [sym_vector] = STATE(12),
    [aux_sym_program_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_nil] = ACTIONS(7),
    [sym_true] = ACTIONS(7),
    [sym_false] = ACTIONS(7),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(7),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym_comment] = ACTIONS(25),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_nil] = ACTIONS(27),
    [sym_true] = ACTIONS(27),
    [sym_false] = ACTIONS(27),
    [sym_number_long] = ACTIONS(27),
    [sym_number_double] = ACTIONS(27),
    [anon_sym_BSLASH] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [anon_sym_POUND_DQUOTE] = ACTIONS(27),
    [anon_sym_COLON] = ACTIONS(29),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(25),
  },
  [3] = {
    [sym__special_char] = STATE(13),
    [sym__unicode_char] = STATE(13),
    [sym__octal_char] = STATE(13),
    [sym__normal_char] = ACTIONS(31),
    [anon_sym_newline] = ACTIONS(31),
    [anon_sym_space] = ACTIONS(31),
    [anon_sym_tab] = ACTIONS(31),
    [anon_sym_formfeed] = ACTIONS(31),
    [anon_sym_backspace] = ACTIONS(31),
    [anon_sym_return] = ACTIONS(31),
    [anon_sym_u] = ACTIONS(33),
    [anon_sym_o] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
  },
  [4] = {
    [aux_sym_regex_repeat1] = STATE(17),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_comment] = ACTIONS(37),
  },
  [5] = {
    [sym__keyword_chars] = ACTIONS(43),
    [sym_comment] = ACTIONS(25),
  },
  [6] = {
    [sym__keyword_chars] = ACTIONS(45),
    [sym_comment] = ACTIONS(25),
  },
  [7] = {
    [sym__expression] = STATE(21),
    [sym_number] = STATE(21),
    [sym_character] = STATE(21),
    [sym_regex] = STATE(21),
    [sym_keyword] = STATE(21),
    [sym_unqualified_keyword] = STATE(11),
    [sym_qualified_keyword] = STATE(11),
    [sym_set] = STATE(21),
    [sym_hash_map] = STATE(21),
    [sym_vector] = STATE(21),
    [aux_sym_program_repeat1] = STATE(21),
    [sym_nil] = ACTIONS(47),
    [sym_true] = ACTIONS(47),
    [sym_false] = ACTIONS(47),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(47),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym_comment] = ACTIONS(25),
  },
  [8] = {
    [sym__expression] = STATE(23),
    [sym_number] = STATE(23),
    [sym_character] = STATE(23),
    [sym_regex] = STATE(23),
    [sym_keyword] = STATE(23),
    [sym_unqualified_keyword] = STATE(11),
    [sym_qualified_keyword] = STATE(11),
    [sym_set] = STATE(23),
    [sym_hash_map] = STATE(23),
    [sym_hash_map_kv_pair] = STATE(25),
    [sym_hash_map_key] = STATE(24),
    [sym_vector] = STATE(23),
    [aux_sym_hash_map_repeat1] = STATE(25),
    [sym_nil] = ACTIONS(51),
    [sym_true] = ACTIONS(51),
    [sym_false] = ACTIONS(51),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(51),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym_comment] = ACTIONS(25),
  },
  [9] = {
    [sym__expression] = STATE(27),
    [sym_number] = STATE(27),
    [sym_character] = STATE(27),
    [sym_regex] = STATE(27),
    [sym_keyword] = STATE(27),
    [sym_unqualified_keyword] = STATE(11),
    [sym_qualified_keyword] = STATE(11),
    [sym_set] = STATE(27),
    [sym_hash_map] = STATE(27),
    [sym_vector] = STATE(27),
    [aux_sym_program_repeat1] = STATE(27),
    [sym_nil] = ACTIONS(55),
    [sym_true] = ACTIONS(55),
    [sym_false] = ACTIONS(55),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(57),
    [sym_comment] = ACTIONS(25),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_comment] = ACTIONS(25),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [sym_nil] = ACTIONS(61),
    [sym_true] = ACTIONS(61),
    [sym_false] = ACTIONS(61),
    [sym_number_long] = ACTIONS(61),
    [sym_number_double] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(61),
    [sym_string] = ACTIONS(61),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [anon_sym_POUND_LBRACE] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_RBRACK] = ACTIONS(61),
    [sym_comment] = ACTIONS(25),
  },
  [12] = {
    [sym__expression] = STATE(28),
    [sym_number] = STATE(28),
    [sym_character] = STATE(28),
    [sym_regex] = STATE(28),
    [sym_keyword] = STATE(28),
    [sym_unqualified_keyword] = STATE(11),
    [sym_qualified_keyword] = STATE(11),
    [sym_set] = STATE(28),
    [sym_hash_map] = STATE(28),
    [sym_vector] = STATE(28),
    [aux_sym_program_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(65),
    [sym_nil] = ACTIONS(67),
    [sym_true] = ACTIONS(67),
    [sym_false] = ACTIONS(67),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(67),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym_comment] = ACTIONS(25),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [sym_nil] = ACTIONS(69),
    [sym_true] = ACTIONS(69),
    [sym_false] = ACTIONS(69),
    [sym_number_long] = ACTIONS(69),
    [sym_number_double] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(69),
    [sym_string] = ACTIONS(69),
    [anon_sym_POUND_DQUOTE] = ACTIONS(69),
    [anon_sym_COLON] = ACTIONS(71),
    [anon_sym_COLON_COLON] = ACTIONS(69),
    [anon_sym_POUND_LBRACE] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(69),
    [sym_comment] = ACTIONS(25),
  },
  [14] = {
    [sym__hex_char] = ACTIONS(73),
    [sym_comment] = ACTIONS(25),
  },
  [15] = {
    [sym__octal_num] = STATE(30),
    [aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(75),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(77),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(77),
    [sym_comment] = ACTIONS(25),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_number_long] = ACTIONS(79),
    [sym_number_double] = ACTIONS(79),
    [anon_sym_BSLASH] = ACTIONS(79),
    [sym_string] = ACTIONS(79),
    [anon_sym_POUND_DQUOTE] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(81),
    [anon_sym_COLON_COLON] = ACTIONS(79),
    [anon_sym_POUND_LBRACE] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_RBRACK] = ACTIONS(79),
    [sym_comment] = ACTIONS(25),
  },
  [17] = {
    [aux_sym_regex_repeat1] = STATE(32),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_comment] = ACTIONS(37),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym_nil] = ACTIONS(87),
    [sym_true] = ACTIONS(87),
    [sym_false] = ACTIONS(87),
    [sym_number_long] = ACTIONS(87),
    [sym_number_double] = ACTIONS(87),
    [anon_sym_BSLASH] = ACTIONS(87),
    [sym_string] = ACTIONS(87),
    [anon_sym_POUND_DQUOTE] = ACTIONS(87),
    [anon_sym_COLON] = ACTIONS(89),
    [anon_sym_COLON_COLON] = ACTIONS(87),
    [anon_sym_POUND_LBRACE] = ACTIONS(87),
    [anon_sym_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(87),
    [sym_comment] = ACTIONS(25),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [sym_nil] = ACTIONS(91),
    [sym_true] = ACTIONS(91),
    [sym_false] = ACTIONS(91),
    [sym_number_long] = ACTIONS(91),
    [sym_number_double] = ACTIONS(91),
    [anon_sym_BSLASH] = ACTIONS(91),
    [sym_string] = ACTIONS(91),
    [anon_sym_POUND_DQUOTE] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_COLON_COLON] = ACTIONS(91),
    [anon_sym_POUND_LBRACE] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_RBRACK] = ACTIONS(91),
    [sym_comment] = ACTIONS(25),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [sym_nil] = ACTIONS(95),
    [sym_true] = ACTIONS(95),
    [sym_false] = ACTIONS(95),
    [sym_number_long] = ACTIONS(95),
    [sym_number_double] = ACTIONS(95),
    [anon_sym_BSLASH] = ACTIONS(95),
    [sym_string] = ACTIONS(95),
    [anon_sym_POUND_DQUOTE] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(97),
    [anon_sym_COLON_COLON] = ACTIONS(95),
    [anon_sym_POUND_LBRACE] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_RBRACK] = ACTIONS(95),
    [sym_comment] = ACTIONS(25),
  },
  [21] = {
    [sym__expression] = STATE(34),
    [sym_number] = STATE(34),
    [sym_character] = STATE(34),
    [sym_regex] = STATE(34),
    [sym_keyword] = STATE(34),
    [sym_unqualified_keyword] = STATE(11),
    [sym_qualified_keyword] = STATE(11),
    [sym_set] = STATE(34),
    [sym_hash_map] = STATE(34),
    [sym_vector] = STATE(34),
    [aux_sym_program_repeat1] = STATE(34),
    [sym_nil] = ACTIONS(99),
    [sym_true] = ACTIONS(99),
    [sym_false] = ACTIONS(99),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(99),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym_comment] = ACTIONS(25),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [sym_nil] = ACTIONS(103),
    [sym_true] = ACTIONS(103),
    [sym_false] = ACTIONS(103),
    [sym_number_long] = ACTIONS(103),
    [sym_number_double] = ACTIONS(103),
    [anon_sym_BSLASH] = ACTIONS(103),
    [sym_string] = ACTIONS(103),
    [anon_sym_POUND_DQUOTE] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(105),
    [anon_sym_COLON_COLON] = ACTIONS(103),
    [anon_sym_POUND_LBRACE] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_RBRACK] = ACTIONS(103),
    [sym_comment] = ACTIONS(25),
  },
  [23] = {
    [sym_nil] = ACTIONS(107),
    [sym_true] = ACTIONS(107),
    [sym_false] = ACTIONS(107),
    [sym_number_long] = ACTIONS(107),
    [sym_number_double] = ACTIONS(107),
    [anon_sym_BSLASH] = ACTIONS(107),
    [sym_string] = ACTIONS(107),
    [anon_sym_POUND_DQUOTE] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_COLON_COLON] = ACTIONS(107),
    [anon_sym_POUND_LBRACE] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(107),
    [sym_comment] = ACTIONS(25),
  },
  [24] = {
    [sym__expression] = STATE(35),
    [sym_number] = STATE(35),
    [sym_character] = STATE(35),
    [sym_regex] = STATE(35),
    [sym_keyword] = STATE(35),
    [sym_unqualified_keyword] = STATE(11),
    [sym_qualified_keyword] = STATE(11),
    [sym_set] = STATE(35),
    [sym_hash_map] = STATE(35),
    [sym_hash_map_value] = STATE(36),
    [sym_vector] = STATE(35),
    [sym_nil] = ACTIONS(111),
    [sym_true] = ACTIONS(111),
    [sym_false] = ACTIONS(111),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(111),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym_comment] = ACTIONS(25),
  },
  [25] = {
    [sym__expression] = STATE(23),
    [sym_number] = STATE(23),
    [sym_character] = STATE(23),
    [sym_regex] = STATE(23),
    [sym_keyword] = STATE(23),
    [sym_unqualified_keyword] = STATE(11),
    [sym_qualified_keyword] = STATE(11),
    [sym_set] = STATE(23),
    [sym_hash_map] = STATE(23),
    [sym_hash_map_kv_pair] = STATE(38),
    [sym_hash_map_key] = STATE(24),
    [sym_vector] = STATE(23),
    [aux_sym_hash_map_repeat1] = STATE(38),
    [sym_nil] = ACTIONS(51),
    [sym_true] = ACTIONS(51),
    [sym_false] = ACTIONS(51),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(51),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym_comment] = ACTIONS(25),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [sym_nil] = ACTIONS(115),
    [sym_true] = ACTIONS(115),
    [sym_false] = ACTIONS(115),
    [sym_number_long] = ACTIONS(115),
    [sym_number_double] = ACTIONS(115),
    [anon_sym_BSLASH] = ACTIONS(115),
    [sym_string] = ACTIONS(115),
    [anon_sym_POUND_DQUOTE] = ACTIONS(115),
    [anon_sym_COLON] = ACTIONS(117),
    [anon_sym_COLON_COLON] = ACTIONS(115),
    [anon_sym_POUND_LBRACE] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(115),
    [sym_comment] = ACTIONS(25),
  },
  [27] = {
    [sym__expression] = STATE(40),
    [sym_number] = STATE(40),
    [sym_character] = STATE(40),
    [sym_regex] = STATE(40),
    [sym_keyword] = STATE(40),
    [sym_unqualified_keyword] = STATE(11),
    [sym_qualified_keyword] = STATE(11),
    [sym_set] = STATE(40),
    [sym_hash_map] = STATE(40),
    [sym_vector] = STATE(40),
    [aux_sym_program_repeat1] = STATE(40),
    [sym_nil] = ACTIONS(119),
    [sym_true] = ACTIONS(119),
    [sym_false] = ACTIONS(119),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(119),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(121),
    [sym_comment] = ACTIONS(25),
  },
  [28] = {
    [sym__expression] = STATE(28),
    [sym_number] = STATE(28),
    [sym_character] = STATE(28),
    [sym_regex] = STATE(28),
    [sym_keyword] = STATE(28),
    [sym_unqualified_keyword] = STATE(11),
    [sym_qualified_keyword] = STATE(11),
    [sym_set] = STATE(28),
    [sym_hash_map] = STATE(28),
    [sym_vector] = STATE(28),
    [aux_sym_program_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(123),
    [sym_nil] = ACTIONS(125),
    [sym_true] = ACTIONS(125),
    [sym_false] = ACTIONS(125),
    [sym_number_long] = ACTIONS(128),
    [sym_number_double] = ACTIONS(128),
    [anon_sym_BSLASH] = ACTIONS(131),
    [sym_string] = ACTIONS(125),
    [anon_sym_POUND_DQUOTE] = ACTIONS(134),
    [anon_sym_COLON] = ACTIONS(137),
    [anon_sym_COLON_COLON] = ACTIONS(140),
    [anon_sym_POUND_LBRACE] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(146),
    [anon_sym_LBRACK] = ACTIONS(149),
    [sym_comment] = ACTIONS(25),
  },
  [29] = {
    [sym__hex_char] = ACTIONS(152),
    [sym_comment] = ACTIONS(25),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(154),
    [sym_nil] = ACTIONS(154),
    [sym_true] = ACTIONS(154),
    [sym_false] = ACTIONS(154),
    [sym_number_long] = ACTIONS(154),
    [sym_number_double] = ACTIONS(154),
    [anon_sym_BSLASH] = ACTIONS(154),
    [sym_string] = ACTIONS(154),
    [anon_sym_POUND_DQUOTE] = ACTIONS(154),
    [anon_sym_COLON] = ACTIONS(156),
    [anon_sym_COLON_COLON] = ACTIONS(154),
    [anon_sym_POUND_LBRACE] = ACTIONS(154),
    [anon_sym_RBRACE] = ACTIONS(154),
    [anon_sym_LBRACE] = ACTIONS(154),
    [anon_sym_LBRACK] = ACTIONS(154),
    [anon_sym_RBRACK] = ACTIONS(154),
    [sym_comment] = ACTIONS(25),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(158),
    [sym_nil] = ACTIONS(158),
    [sym_true] = ACTIONS(158),
    [sym_false] = ACTIONS(158),
    [sym_number_long] = ACTIONS(158),
    [sym_number_double] = ACTIONS(158),
    [anon_sym_BSLASH] = ACTIONS(158),
    [sym_string] = ACTIONS(158),
    [anon_sym_POUND_DQUOTE] = ACTIONS(158),
    [anon_sym_COLON] = ACTIONS(160),
    [anon_sym_COLON_COLON] = ACTIONS(158),
    [anon_sym_POUND_LBRACE] = ACTIONS(158),
    [anon_sym_RBRACE] = ACTIONS(158),
    [anon_sym_LBRACE] = ACTIONS(158),
    [anon_sym_LBRACK] = ACTIONS(158),
    [anon_sym_RBRACK] = ACTIONS(158),
    [sym_comment] = ACTIONS(25),
  },
  [32] = {
    [aux_sym_regex_repeat1] = STATE(32),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [sym_comment] = ACTIONS(37),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [sym_nil] = ACTIONS(167),
    [sym_true] = ACTIONS(167),
    [sym_false] = ACTIONS(167),
    [sym_number_long] = ACTIONS(167),
    [sym_number_double] = ACTIONS(167),
    [anon_sym_BSLASH] = ACTIONS(167),
    [sym_string] = ACTIONS(167),
    [anon_sym_POUND_DQUOTE] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(169),
    [anon_sym_COLON_COLON] = ACTIONS(167),
    [anon_sym_POUND_LBRACE] = ACTIONS(167),
    [anon_sym_RBRACE] = ACTIONS(167),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(167),
    [anon_sym_RBRACK] = ACTIONS(167),
    [sym_comment] = ACTIONS(25),
  },
  [34] = {
    [sym__expression] = STATE(34),
    [sym_number] = STATE(34),
    [sym_character] = STATE(34),
    [sym_regex] = STATE(34),
    [sym_keyword] = STATE(34),
    [sym_unqualified_keyword] = STATE(11),
    [sym_qualified_keyword] = STATE(11),
    [sym_set] = STATE(34),
    [sym_hash_map] = STATE(34),
    [sym_vector] = STATE(34),
    [aux_sym_program_repeat1] = STATE(34),
    [sym_nil] = ACTIONS(171),
    [sym_true] = ACTIONS(171),
    [sym_false] = ACTIONS(171),
    [sym_number_long] = ACTIONS(128),
    [sym_number_double] = ACTIONS(128),
    [anon_sym_BSLASH] = ACTIONS(131),
    [sym_string] = ACTIONS(171),
    [anon_sym_POUND_DQUOTE] = ACTIONS(134),
    [anon_sym_COLON] = ACTIONS(137),
    [anon_sym_COLON_COLON] = ACTIONS(140),
    [anon_sym_POUND_LBRACE] = ACTIONS(143),
    [anon_sym_RBRACE] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(146),
    [anon_sym_LBRACK] = ACTIONS(149),
    [sym_comment] = ACTIONS(25),
  },
  [35] = {
    [sym_nil] = ACTIONS(174),
    [sym_true] = ACTIONS(174),
    [sym_false] = ACTIONS(174),
    [sym_number_long] = ACTIONS(174),
    [sym_number_double] = ACTIONS(174),
    [anon_sym_BSLASH] = ACTIONS(174),
    [sym_string] = ACTIONS(174),
    [anon_sym_POUND_DQUOTE] = ACTIONS(174),
    [anon_sym_COLON] = ACTIONS(176),
    [anon_sym_COLON_COLON] = ACTIONS(174),
    [anon_sym_POUND_LBRACE] = ACTIONS(174),
    [anon_sym_RBRACE] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(174),
    [sym_comment] = ACTIONS(25),
  },
  [36] = {
    [sym_nil] = ACTIONS(178),
    [sym_true] = ACTIONS(178),
    [sym_false] = ACTIONS(178),
    [sym_number_long] = ACTIONS(178),
    [sym_number_double] = ACTIONS(178),
    [anon_sym_BSLASH] = ACTIONS(178),
    [sym_string] = ACTIONS(178),
    [anon_sym_POUND_DQUOTE] = ACTIONS(178),
    [anon_sym_COLON] = ACTIONS(180),
    [anon_sym_COLON_COLON] = ACTIONS(178),
    [anon_sym_POUND_LBRACE] = ACTIONS(178),
    [anon_sym_RBRACE] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_LBRACK] = ACTIONS(178),
    [sym_comment] = ACTIONS(25),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(182),
    [sym_nil] = ACTIONS(182),
    [sym_true] = ACTIONS(182),
    [sym_false] = ACTIONS(182),
    [sym_number_long] = ACTIONS(182),
    [sym_number_double] = ACTIONS(182),
    [anon_sym_BSLASH] = ACTIONS(182),
    [sym_string] = ACTIONS(182),
    [anon_sym_POUND_DQUOTE] = ACTIONS(182),
    [anon_sym_COLON] = ACTIONS(184),
    [anon_sym_COLON_COLON] = ACTIONS(182),
    [anon_sym_POUND_LBRACE] = ACTIONS(182),
    [anon_sym_RBRACE] = ACTIONS(182),
    [anon_sym_LBRACE] = ACTIONS(182),
    [anon_sym_LBRACK] = ACTIONS(182),
    [anon_sym_RBRACK] = ACTIONS(182),
    [sym_comment] = ACTIONS(25),
  },
  [38] = {
    [sym__expression] = STATE(23),
    [sym_number] = STATE(23),
    [sym_character] = STATE(23),
    [sym_regex] = STATE(23),
    [sym_keyword] = STATE(23),
    [sym_unqualified_keyword] = STATE(11),
    [sym_qualified_keyword] = STATE(11),
    [sym_set] = STATE(23),
    [sym_hash_map] = STATE(23),
    [sym_hash_map_kv_pair] = STATE(38),
    [sym_hash_map_key] = STATE(24),
    [sym_vector] = STATE(23),
    [aux_sym_hash_map_repeat1] = STATE(38),
    [sym_nil] = ACTIONS(186),
    [sym_true] = ACTIONS(186),
    [sym_false] = ACTIONS(186),
    [sym_number_long] = ACTIONS(189),
    [sym_number_double] = ACTIONS(189),
    [anon_sym_BSLASH] = ACTIONS(192),
    [sym_string] = ACTIONS(186),
    [anon_sym_POUND_DQUOTE] = ACTIONS(195),
    [anon_sym_COLON] = ACTIONS(198),
    [anon_sym_COLON_COLON] = ACTIONS(201),
    [anon_sym_POUND_LBRACE] = ACTIONS(204),
    [anon_sym_RBRACE] = ACTIONS(207),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(212),
    [sym_comment] = ACTIONS(25),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(215),
    [sym_nil] = ACTIONS(215),
    [sym_true] = ACTIONS(215),
    [sym_false] = ACTIONS(215),
    [sym_number_long] = ACTIONS(215),
    [sym_number_double] = ACTIONS(215),
    [anon_sym_BSLASH] = ACTIONS(215),
    [sym_string] = ACTIONS(215),
    [anon_sym_POUND_DQUOTE] = ACTIONS(215),
    [anon_sym_COLON] = ACTIONS(217),
    [anon_sym_COLON_COLON] = ACTIONS(215),
    [anon_sym_POUND_LBRACE] = ACTIONS(215),
    [anon_sym_RBRACE] = ACTIONS(215),
    [anon_sym_LBRACE] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(215),
    [anon_sym_RBRACK] = ACTIONS(215),
    [sym_comment] = ACTIONS(25),
  },
  [40] = {
    [sym__expression] = STATE(40),
    [sym_number] = STATE(40),
    [sym_character] = STATE(40),
    [sym_regex] = STATE(40),
    [sym_keyword] = STATE(40),
    [sym_unqualified_keyword] = STATE(11),
    [sym_qualified_keyword] = STATE(11),
    [sym_set] = STATE(40),
    [sym_hash_map] = STATE(40),
    [sym_vector] = STATE(40),
    [aux_sym_program_repeat1] = STATE(40),
    [sym_nil] = ACTIONS(219),
    [sym_true] = ACTIONS(219),
    [sym_false] = ACTIONS(219),
    [sym_number_long] = ACTIONS(128),
    [sym_number_double] = ACTIONS(128),
    [anon_sym_BSLASH] = ACTIONS(131),
    [sym_string] = ACTIONS(219),
    [anon_sym_POUND_DQUOTE] = ACTIONS(134),
    [anon_sym_COLON] = ACTIONS(137),
    [anon_sym_COLON_COLON] = ACTIONS(140),
    [anon_sym_POUND_LBRACE] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(146),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_RBRACK] = ACTIONS(123),
    [sym_comment] = ACTIONS(25),
  },
  [41] = {
    [sym__hex_char] = ACTIONS(222),
    [sym_comment] = ACTIONS(25),
  },
  [42] = {
    [sym__hex_char] = ACTIONS(224),
    [sym_comment] = ACTIONS(25),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(226),
    [sym_nil] = ACTIONS(226),
    [sym_true] = ACTIONS(226),
    [sym_false] = ACTIONS(226),
    [sym_number_long] = ACTIONS(226),
    [sym_number_double] = ACTIONS(226),
    [anon_sym_BSLASH] = ACTIONS(226),
    [sym_string] = ACTIONS(226),
    [anon_sym_POUND_DQUOTE] = ACTIONS(226),
    [anon_sym_COLON] = ACTIONS(228),
    [anon_sym_COLON_COLON] = ACTIONS(226),
    [anon_sym_POUND_LBRACE] = ACTIONS(226),
    [anon_sym_RBRACE] = ACTIONS(226),
    [anon_sym_LBRACE] = ACTIONS(226),
    [anon_sym_LBRACK] = ACTIONS(226),
    [anon_sym_RBRACK] = ACTIONS(226),
    [sym_comment] = ACTIONS(25),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(12),
  [9] = {.count = 1, .reusable = true}, SHIFT(2),
  [11] = {.count = 1, .reusable = true}, SHIFT(3),
  [13] = {.count = 1, .reusable = true}, SHIFT(4),
  [15] = {.count = 1, .reusable = false}, SHIFT(5),
  [17] = {.count = 1, .reusable = true}, SHIFT(6),
  [19] = {.count = 1, .reusable = true}, SHIFT(7),
  [21] = {.count = 1, .reusable = true}, SHIFT(8),
  [23] = {.count = 1, .reusable = true}, SHIFT(9),
  [25] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_number, 1),
  [29] = {.count = 1, .reusable = false}, REDUCE(sym_number, 1),
  [31] = {.count = 1, .reusable = false}, SHIFT(13),
  [33] = {.count = 1, .reusable = false}, SHIFT(14),
  [35] = {.count = 1, .reusable = false}, SHIFT(15),
  [37] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [39] = {.count = 1, .reusable = false}, SHIFT(17),
  [41] = {.count = 1, .reusable = false}, SHIFT(16),
  [43] = {.count = 1, .reusable = true}, SHIFT(18),
  [45] = {.count = 1, .reusable = true}, SHIFT(19),
  [47] = {.count = 1, .reusable = true}, SHIFT(21),
  [49] = {.count = 1, .reusable = true}, SHIFT(20),
  [51] = {.count = 1, .reusable = true}, SHIFT(23),
  [53] = {.count = 1, .reusable = true}, SHIFT(22),
  [55] = {.count = 1, .reusable = true}, SHIFT(27),
  [57] = {.count = 1, .reusable = true}, SHIFT(26),
  [59] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_keyword, 1),
  [63] = {.count = 1, .reusable = false}, REDUCE(sym_keyword, 1),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [67] = {.count = 1, .reusable = true}, SHIFT(28),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_character, 2),
  [71] = {.count = 1, .reusable = false}, REDUCE(sym_character, 2),
  [73] = {.count = 1, .reusable = true}, SHIFT(29),
  [75] = {.count = 1, .reusable = true}, SHIFT(30),
  [77] = {.count = 1, .reusable = false}, SHIFT(30),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_regex, 2),
  [81] = {.count = 1, .reusable = false}, REDUCE(sym_regex, 2),
  [83] = {.count = 1, .reusable = false}, SHIFT(32),
  [85] = {.count = 1, .reusable = false}, SHIFT(31),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_unqualified_keyword, 2),
  [89] = {.count = 1, .reusable = false}, REDUCE(sym_unqualified_keyword, 2),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_keyword, 2),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_keyword, 2),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_set, 2),
  [97] = {.count = 1, .reusable = false}, REDUCE(sym_set, 2),
  [99] = {.count = 1, .reusable = true}, SHIFT(34),
  [101] = {.count = 1, .reusable = true}, SHIFT(33),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map, 2),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map, 2),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map_key, 1),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map_key, 1),
  [111] = {.count = 1, .reusable = true}, SHIFT(35),
  [113] = {.count = 1, .reusable = true}, SHIFT(37),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_vector, 2),
  [117] = {.count = 1, .reusable = false}, REDUCE(sym_vector, 2),
  [119] = {.count = 1, .reusable = true}, SHIFT(40),
  [121] = {.count = 1, .reusable = true}, SHIFT(39),
  [123] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [125] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(28),
  [128] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [131] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [134] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [137] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [140] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [143] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [146] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [149] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [152] = {.count = 1, .reusable = true}, SHIFT(41),
  [154] = {.count = 1, .reusable = true}, REDUCE(sym__octal_char, 2),
  [156] = {.count = 1, .reusable = false}, REDUCE(sym__octal_char, 2),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym_regex, 3),
  [160] = {.count = 1, .reusable = false}, REDUCE(sym_regex, 3),
  [162] = {.count = 2, .reusable = false}, REDUCE(aux_sym_regex_repeat1, 2), SHIFT_REPEAT(32),
  [165] = {.count = 1, .reusable = false}, REDUCE(aux_sym_regex_repeat1, 2),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_set, 3),
  [169] = {.count = 1, .reusable = false}, REDUCE(sym_set, 3),
  [171] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(34),
  [174] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map_value, 1),
  [176] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map_value, 1),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map_kv_pair, 2),
  [180] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map_kv_pair, 2),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map, 3),
  [184] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map, 3),
  [186] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(23),
  [189] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(2),
  [192] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(3),
  [195] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(4),
  [198] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(5),
  [201] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(6),
  [204] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(7),
  [207] = {.count = 1, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2),
  [209] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(8),
  [212] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(9),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_vector, 3),
  [217] = {.count = 1, .reusable = false}, REDUCE(sym_vector, 3),
  [219] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(40),
  [222] = {.count = 1, .reusable = true}, SHIFT(42),
  [224] = {.count = 1, .reusable = true}, SHIFT(43),
  [226] = {.count = 1, .reusable = true}, REDUCE(sym__unicode_char, 5),
  [228] = {.count = 1, .reusable = false}, REDUCE(sym__unicode_char, 5),
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
