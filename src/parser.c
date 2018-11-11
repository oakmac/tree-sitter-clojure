#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 52
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
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
  anon_sym_SEMI = 33,
  aux_sym_SLASH_DOT_STAR_SLASH = 34,
  anon_sym_POUND_ = 35,
  sym_program = 36,
  sym__anything = 37,
  sym_number = 38,
  sym_character = 39,
  sym__special_char = 40,
  sym__unicode_char = 41,
  sym__octal_char = 42,
  sym__octal_num = 43,
  sym_regex = 44,
  sym_keyword = 45,
  sym_unqualified_keyword = 46,
  sym_qualified_keyword = 47,
  sym_set = 48,
  sym_hash_map = 49,
  sym_hash_map_kv_pair = 50,
  sym_hash_map_key = 51,
  sym_hash_map_value = 52,
  sym_vector = 53,
  sym_comment = 54,
  sym_semicolon = 55,
  sym_ignore_form = 56,
  aux_sym_program_repeat1 = 57,
  aux_sym_regex_repeat1 = 58,
  aux_sym_hash_map_repeat1 = 59,
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
  [anon_sym_SEMI] = ";",
  [aux_sym_SLASH_DOT_STAR_SLASH] = "/.*/",
  [anon_sym_POUND_] = "#_",
  [sym_program] = "program",
  [sym__anything] = "_anything",
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
  [sym_comment] = "comment",
  [sym_semicolon] = "semicolon",
  [sym_ignore_form] = "ignore_form",
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_DOT_STAR_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__anything] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_semicolon] = {
    .visible = true,
    .named = true,
  },
  [sym_ignore_form] = {
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
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 3:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '_')
        ADVANCE(5);
      if (lookahead == '{')
        ADVANCE(6);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_POUND_DQUOTE);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_POUND_);
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
      ACCEPT_TOKEN(anon_sym_SEMI);
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
        ADVANCE(67);
      if (lookahead == '#')
        ADVANCE(3);
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
        ADVANCE(70);
      if (lookahead == 'n')
        ADVANCE(75);
      if (lookahead == 't')
        ADVANCE(76);
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
      if (lookahead == '\"')
        ADVANCE(68);
      if (lookahead == '\\')
        ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 69:
      if (lookahead == '\n')
        ADVANCE(67);
      if (lookahead != 0)
        ADVANCE(67);
      END_STATE();
    case 70:
      if (lookahead == 'a')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 'l')
        ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 's')
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 'e')
        ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 75:
      if (lookahead == 'i')
        ADVANCE(36);
      END_STATE();
    case 76:
      if (lookahead == 'r')
        ADVANCE(53);
      END_STATE();
    case 77:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(67);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        SKIP(77);
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
        ADVANCE(70);
      if (lookahead == 'n')
        ADVANCE(75);
      if (lookahead == 't')
        ADVANCE(76);
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
        SKIP(77);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(61);
      END_STATE();
    case 78:
      if (lookahead == '\n')
        SKIP(78);
      if (lookahead == ',')
        ADVANCE(79);
      if (lookahead == 'b')
        ADVANCE(80);
      if (lookahead == 'f')
        ADVANCE(89);
      if (lookahead == 'n')
        ADVANCE(90);
      if (lookahead == 'o')
        ADVANCE(38);
      if (lookahead == 'r')
        ADVANCE(91);
      if (lookahead == 's')
        ADVANCE(92);
      if (lookahead == 't')
        ADVANCE(93);
      if (lookahead == 'u')
        ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(79);
      if (lookahead != 0)
        ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__normal_char);
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
        ADVANCE(22);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'e')
        ADVANCE(30);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'e')
        ADVANCE(40);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'p')
        ADVANCE(46);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'a')
        ADVANCE(51);
      END_STATE();
    case 94:
      if (lookahead == '\n')
        SKIP(94);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(95);
      if (lookahead == '\\')
        ADVANCE(96);
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
      if (lookahead == '\n')
        ADVANCE(97);
      if (lookahead != 0)
        ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH);
      END_STATE();
    case 98:
      if (lookahead == ',')
        SKIP(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(98);
      if (lookahead == '!' ||
          ('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__keyword_chars);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(99);
      END_STATE();
    case 100:
      if (lookahead == '\"')
        ADVANCE(67);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        SKIP(100);
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
        ADVANCE(70);
      if (lookahead == 'n')
        ADVANCE(75);
      if (lookahead == 't')
        ADVANCE(76);
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
        SKIP(100);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(61);
      END_STATE();
    case 101:
      if (lookahead == '\"')
        ADVANCE(67);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        SKIP(101);
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
        ADVANCE(70);
      if (lookahead == 'n')
        ADVANCE(75);
      if (lookahead == 't')
        ADVANCE(76);
      if (lookahead == '{')
        ADVANCE(57);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(101);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(61);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == '\n')
        SKIP(102);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(103);
      if (lookahead != 0)
        ADVANCE(104);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(104);
      END_STATE();
    case 105:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        SKIP(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(105);
      END_STATE();
    case 106:
      if (lookahead == ',')
        SKIP(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(65);
      END_STATE();
    case 107:
      if (lookahead == ',')
        SKIP(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(107);
      if (('0' <= lookahead && lookahead <= '3'))
        ADVANCE(108);
      if (('4' <= lookahead && lookahead <= '7'))
        ADVANCE(111);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 66},
  [2] = {.lex_state = 77},
  [3] = {.lex_state = 78},
  [4] = {.lex_state = 94},
  [5] = {.lex_state = 98},
  [6] = {.lex_state = 98},
  [7] = {.lex_state = 100},
  [8] = {.lex_state = 100},
  [9] = {.lex_state = 101},
  [10] = {.lex_state = 102},
  [11] = {.lex_state = 66},
  [12] = {.lex_state = 105},
  [13] = {.lex_state = 77},
  [14] = {.lex_state = 77},
  [15] = {.lex_state = 66},
  [16] = {.lex_state = 77},
  [17] = {.lex_state = 106},
  [18] = {.lex_state = 107},
  [19] = {.lex_state = 77},
  [20] = {.lex_state = 94},
  [21] = {.lex_state = 77},
  [22] = {.lex_state = 77},
  [23] = {.lex_state = 77},
  [24] = {.lex_state = 66},
  [25] = {.lex_state = 100},
  [26] = {.lex_state = 77},
  [27] = {.lex_state = 66},
  [28] = {.lex_state = 66},
  [29] = {.lex_state = 66},
  [30] = {.lex_state = 100},
  [31] = {.lex_state = 77},
  [32] = {.lex_state = 66},
  [33] = {.lex_state = 101},
  [34] = {.lex_state = 77},
  [35] = {.lex_state = 77},
  [36] = {.lex_state = 66},
  [37] = {.lex_state = 106},
  [38] = {.lex_state = 77},
  [39] = {.lex_state = 77},
  [40] = {.lex_state = 94},
  [41] = {.lex_state = 77},
  [42] = {.lex_state = 100},
  [43] = {.lex_state = 100},
  [44] = {.lex_state = 100},
  [45] = {.lex_state = 77},
  [46] = {.lex_state = 100},
  [47] = {.lex_state = 77},
  [48] = {.lex_state = 101},
  [49] = {.lex_state = 106},
  [50] = {.lex_state = 106},
  [51] = {.lex_state = 77},
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
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_POUND_] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(12),
    [sym__anything] = STATE(15),
    [sym_number] = STATE(15),
    [sym_character] = STATE(15),
    [sym_regex] = STATE(15),
    [sym_keyword] = STATE(15),
    [sym_unqualified_keyword] = STATE(13),
    [sym_qualified_keyword] = STATE(13),
    [sym_set] = STATE(15),
    [sym_hash_map] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_comment] = STATE(15),
    [sym_semicolon] = STATE(14),
    [sym_ignore_form] = STATE(14),
    [aux_sym_program_repeat1] = STATE(15),
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
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(27),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym_nil] = ACTIONS(29),
    [sym_true] = ACTIONS(29),
    [sym_false] = ACTIONS(29),
    [sym_number_long] = ACTIONS(29),
    [sym_number_double] = ACTIONS(29),
    [anon_sym_BSLASH] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [anon_sym_POUND_DQUOTE] = ACTIONS(29),
    [anon_sym_COLON] = ACTIONS(31),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_POUND_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(29),
    [anon_sym_POUND_] = ACTIONS(29),
  },
  [3] = {
    [sym__special_char] = STATE(16),
    [sym__unicode_char] = STATE(16),
    [sym__octal_char] = STATE(16),
    [sym__normal_char] = ACTIONS(33),
    [anon_sym_newline] = ACTIONS(33),
    [anon_sym_space] = ACTIONS(33),
    [anon_sym_tab] = ACTIONS(33),
    [anon_sym_formfeed] = ACTIONS(33),
    [anon_sym_backspace] = ACTIONS(33),
    [anon_sym_return] = ACTIONS(33),
    [anon_sym_u] = ACTIONS(35),
    [anon_sym_o] = ACTIONS(37),
  },
  [4] = {
    [aux_sym_regex_repeat1] = STATE(20),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
  },
  [5] = {
    [sym__keyword_chars] = ACTIONS(45),
  },
  [6] = {
    [sym__keyword_chars] = ACTIONS(47),
  },
  [7] = {
    [sym__anything] = STATE(25),
    [sym_number] = STATE(25),
    [sym_character] = STATE(25),
    [sym_regex] = STATE(25),
    [sym_keyword] = STATE(25),
    [sym_unqualified_keyword] = STATE(13),
    [sym_qualified_keyword] = STATE(13),
    [sym_set] = STATE(25),
    [sym_hash_map] = STATE(25),
    [sym_vector] = STATE(25),
    [sym_comment] = STATE(25),
    [sym_semicolon] = STATE(14),
    [sym_ignore_form] = STATE(14),
    [aux_sym_program_repeat1] = STATE(25),
    [sym_nil] = ACTIONS(49),
    [sym_true] = ACTIONS(49),
    [sym_false] = ACTIONS(49),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(49),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(53),
  },
  [8] = {
    [sym__anything] = STATE(28),
    [sym_number] = STATE(28),
    [sym_character] = STATE(28),
    [sym_regex] = STATE(28),
    [sym_keyword] = STATE(28),
    [sym_unqualified_keyword] = STATE(13),
    [sym_qualified_keyword] = STATE(13),
    [sym_set] = STATE(28),
    [sym_hash_map] = STATE(28),
    [sym_hash_map_kv_pair] = STATE(30),
    [sym_hash_map_key] = STATE(29),
    [sym_vector] = STATE(28),
    [sym_comment] = STATE(28),
    [sym_semicolon] = STATE(14),
    [sym_ignore_form] = STATE(14),
    [aux_sym_hash_map_repeat1] = STATE(30),
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
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(59),
  },
  [9] = {
    [sym__anything] = STATE(33),
    [sym_number] = STATE(33),
    [sym_character] = STATE(33),
    [sym_regex] = STATE(33),
    [sym_keyword] = STATE(33),
    [sym_unqualified_keyword] = STATE(13),
    [sym_qualified_keyword] = STATE(13),
    [sym_set] = STATE(33),
    [sym_hash_map] = STATE(33),
    [sym_vector] = STATE(33),
    [sym_comment] = STATE(33),
    [sym_semicolon] = STATE(14),
    [sym_ignore_form] = STATE(14),
    [aux_sym_program_repeat1] = STATE(33),
    [sym_nil] = ACTIONS(61),
    [sym_true] = ACTIONS(61),
    [sym_false] = ACTIONS(61),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(61),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(65),
  },
  [10] = {
    [aux_sym_SLASH_DOT_STAR_SLASH] = ACTIONS(67),
  },
  [11] = {
    [sym__anything] = STATE(35),
    [sym_number] = STATE(35),
    [sym_character] = STATE(35),
    [sym_regex] = STATE(35),
    [sym_keyword] = STATE(35),
    [sym_unqualified_keyword] = STATE(13),
    [sym_qualified_keyword] = STATE(13),
    [sym_set] = STATE(35),
    [sym_hash_map] = STATE(35),
    [sym_vector] = STATE(35),
    [sym_comment] = STATE(35),
    [sym_semicolon] = STATE(14),
    [sym_ignore_form] = STATE(14),
    [sym_nil] = ACTIONS(69),
    [sym_true] = ACTIONS(69),
    [sym_false] = ACTIONS(69),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(69),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(27),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(71),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [sym_nil] = ACTIONS(73),
    [sym_true] = ACTIONS(73),
    [sym_false] = ACTIONS(73),
    [sym_number_long] = ACTIONS(73),
    [sym_number_double] = ACTIONS(73),
    [anon_sym_BSLASH] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(73),
    [anon_sym_POUND_LBRACE] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_RBRACK] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(73),
    [anon_sym_POUND_] = ACTIONS(73),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym_nil] = ACTIONS(77),
    [sym_true] = ACTIONS(77),
    [sym_false] = ACTIONS(77),
    [sym_number_long] = ACTIONS(77),
    [sym_number_double] = ACTIONS(77),
    [anon_sym_BSLASH] = ACTIONS(77),
    [sym_string] = ACTIONS(77),
    [anon_sym_POUND_DQUOTE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [anon_sym_COLON_COLON] = ACTIONS(77),
    [anon_sym_POUND_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(77),
    [anon_sym_POUND_] = ACTIONS(77),
  },
  [15] = {
    [sym__anything] = STATE(36),
    [sym_number] = STATE(36),
    [sym_character] = STATE(36),
    [sym_regex] = STATE(36),
    [sym_keyword] = STATE(36),
    [sym_unqualified_keyword] = STATE(13),
    [sym_qualified_keyword] = STATE(13),
    [sym_set] = STATE(36),
    [sym_hash_map] = STATE(36),
    [sym_vector] = STATE(36),
    [sym_comment] = STATE(36),
    [sym_semicolon] = STATE(14),
    [sym_ignore_form] = STATE(14),
    [aux_sym_program_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(81),
    [sym_nil] = ACTIONS(83),
    [sym_true] = ACTIONS(83),
    [sym_false] = ACTIONS(83),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(83),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(27),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [sym_nil] = ACTIONS(85),
    [sym_true] = ACTIONS(85),
    [sym_false] = ACTIONS(85),
    [sym_number_long] = ACTIONS(85),
    [sym_number_double] = ACTIONS(85),
    [anon_sym_BSLASH] = ACTIONS(85),
    [sym_string] = ACTIONS(85),
    [anon_sym_POUND_DQUOTE] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(87),
    [anon_sym_COLON_COLON] = ACTIONS(85),
    [anon_sym_POUND_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(85),
    [anon_sym_SEMI] = ACTIONS(85),
    [anon_sym_POUND_] = ACTIONS(85),
  },
  [17] = {
    [sym__hex_char] = ACTIONS(89),
  },
  [18] = {
    [sym__octal_num] = STATE(38),
    [aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(91),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(93),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(93),
  },
  [19] = {
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
    [anon_sym_SEMI] = ACTIONS(95),
    [anon_sym_POUND_] = ACTIONS(95),
  },
  [20] = {
    [aux_sym_regex_repeat1] = STATE(40),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(103),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [sym_nil] = ACTIONS(105),
    [sym_true] = ACTIONS(105),
    [sym_false] = ACTIONS(105),
    [sym_number_long] = ACTIONS(105),
    [sym_number_double] = ACTIONS(105),
    [anon_sym_BSLASH] = ACTIONS(105),
    [sym_string] = ACTIONS(105),
    [anon_sym_POUND_DQUOTE] = ACTIONS(105),
    [anon_sym_COLON] = ACTIONS(107),
    [anon_sym_COLON_COLON] = ACTIONS(105),
    [anon_sym_POUND_LBRACE] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(105),
    [anon_sym_RBRACK] = ACTIONS(105),
    [anon_sym_SEMI] = ACTIONS(105),
    [anon_sym_POUND_] = ACTIONS(105),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(109),
    [sym_nil] = ACTIONS(109),
    [sym_true] = ACTIONS(109),
    [sym_false] = ACTIONS(109),
    [sym_number_long] = ACTIONS(109),
    [sym_number_double] = ACTIONS(109),
    [anon_sym_BSLASH] = ACTIONS(109),
    [sym_string] = ACTIONS(109),
    [anon_sym_POUND_DQUOTE] = ACTIONS(109),
    [anon_sym_COLON] = ACTIONS(111),
    [anon_sym_COLON_COLON] = ACTIONS(109),
    [anon_sym_POUND_LBRACE] = ACTIONS(109),
    [anon_sym_RBRACE] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_RBRACK] = ACTIONS(109),
    [anon_sym_SEMI] = ACTIONS(109),
    [anon_sym_POUND_] = ACTIONS(109),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(113),
    [sym_nil] = ACTIONS(113),
    [sym_true] = ACTIONS(113),
    [sym_false] = ACTIONS(113),
    [sym_number_long] = ACTIONS(113),
    [sym_number_double] = ACTIONS(113),
    [anon_sym_BSLASH] = ACTIONS(113),
    [sym_string] = ACTIONS(113),
    [anon_sym_POUND_DQUOTE] = ACTIONS(113),
    [anon_sym_COLON] = ACTIONS(115),
    [anon_sym_COLON_COLON] = ACTIONS(113),
    [anon_sym_POUND_LBRACE] = ACTIONS(113),
    [anon_sym_RBRACE] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_RBRACK] = ACTIONS(113),
    [anon_sym_SEMI] = ACTIONS(113),
    [anon_sym_POUND_] = ACTIONS(113),
  },
  [24] = {
    [sym__anything] = STATE(35),
    [sym_number] = STATE(35),
    [sym_character] = STATE(35),
    [sym_regex] = STATE(35),
    [sym_keyword] = STATE(35),
    [sym_unqualified_keyword] = STATE(13),
    [sym_qualified_keyword] = STATE(13),
    [sym_set] = STATE(35),
    [sym_hash_map] = STATE(35),
    [sym_vector] = STATE(35),
    [sym_comment] = STATE(35),
    [sym_semicolon] = STATE(14),
    [sym_ignore_form] = STATE(14),
    [sym_nil] = ACTIONS(69),
    [sym_true] = ACTIONS(69),
    [sym_false] = ACTIONS(69),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(69),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(53),
  },
  [25] = {
    [sym__anything] = STATE(42),
    [sym_number] = STATE(42),
    [sym_character] = STATE(42),
    [sym_regex] = STATE(42),
    [sym_keyword] = STATE(42),
    [sym_unqualified_keyword] = STATE(13),
    [sym_qualified_keyword] = STATE(13),
    [sym_set] = STATE(42),
    [sym_hash_map] = STATE(42),
    [sym_vector] = STATE(42),
    [sym_comment] = STATE(42),
    [sym_semicolon] = STATE(14),
    [sym_ignore_form] = STATE(14),
    [aux_sym_program_repeat1] = STATE(42),
    [sym_nil] = ACTIONS(117),
    [sym_true] = ACTIONS(117),
    [sym_false] = ACTIONS(117),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(117),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(53),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [sym_nil] = ACTIONS(121),
    [sym_true] = ACTIONS(121),
    [sym_false] = ACTIONS(121),
    [sym_number_long] = ACTIONS(121),
    [sym_number_double] = ACTIONS(121),
    [anon_sym_BSLASH] = ACTIONS(121),
    [sym_string] = ACTIONS(121),
    [anon_sym_POUND_DQUOTE] = ACTIONS(121),
    [anon_sym_COLON] = ACTIONS(123),
    [anon_sym_COLON_COLON] = ACTIONS(121),
    [anon_sym_POUND_LBRACE] = ACTIONS(121),
    [anon_sym_RBRACE] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_RBRACK] = ACTIONS(121),
    [anon_sym_SEMI] = ACTIONS(121),
    [anon_sym_POUND_] = ACTIONS(121),
  },
  [27] = {
    [sym__anything] = STATE(35),
    [sym_number] = STATE(35),
    [sym_character] = STATE(35),
    [sym_regex] = STATE(35),
    [sym_keyword] = STATE(35),
    [sym_unqualified_keyword] = STATE(13),
    [sym_qualified_keyword] = STATE(13),
    [sym_set] = STATE(35),
    [sym_hash_map] = STATE(35),
    [sym_vector] = STATE(35),
    [sym_comment] = STATE(35),
    [sym_semicolon] = STATE(14),
    [sym_ignore_form] = STATE(14),
    [sym_nil] = ACTIONS(69),
    [sym_true] = ACTIONS(69),
    [sym_false] = ACTIONS(69),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(69),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(59),
  },
  [28] = {
    [sym_nil] = ACTIONS(125),
    [sym_true] = ACTIONS(125),
    [sym_false] = ACTIONS(125),
    [sym_number_long] = ACTIONS(125),
    [sym_number_double] = ACTIONS(125),
    [anon_sym_BSLASH] = ACTIONS(125),
    [sym_string] = ACTIONS(125),
    [anon_sym_POUND_DQUOTE] = ACTIONS(125),
    [anon_sym_COLON] = ACTIONS(127),
    [anon_sym_COLON_COLON] = ACTIONS(125),
    [anon_sym_POUND_LBRACE] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_SEMI] = ACTIONS(125),
    [anon_sym_POUND_] = ACTIONS(125),
  },
  [29] = {
    [sym__anything] = STATE(43),
    [sym_number] = STATE(43),
    [sym_character] = STATE(43),
    [sym_regex] = STATE(43),
    [sym_keyword] = STATE(43),
    [sym_unqualified_keyword] = STATE(13),
    [sym_qualified_keyword] = STATE(13),
    [sym_set] = STATE(43),
    [sym_hash_map] = STATE(43),
    [sym_hash_map_value] = STATE(44),
    [sym_vector] = STATE(43),
    [sym_comment] = STATE(43),
    [sym_semicolon] = STATE(14),
    [sym_ignore_form] = STATE(14),
    [sym_nil] = ACTIONS(129),
    [sym_true] = ACTIONS(129),
    [sym_false] = ACTIONS(129),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(129),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(53),
  },
  [30] = {
    [sym__anything] = STATE(28),
    [sym_number] = STATE(28),
    [sym_character] = STATE(28),
    [sym_regex] = STATE(28),
    [sym_keyword] = STATE(28),
    [sym_unqualified_keyword] = STATE(13),
    [sym_qualified_keyword] = STATE(13),
    [sym_set] = STATE(28),
    [sym_hash_map] = STATE(28),
    [sym_hash_map_kv_pair] = STATE(46),
    [sym_hash_map_key] = STATE(29),
    [sym_vector] = STATE(28),
    [sym_comment] = STATE(28),
    [sym_semicolon] = STATE(14),
    [sym_ignore_form] = STATE(14),
    [aux_sym_hash_map_repeat1] = STATE(46),
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
    [anon_sym_RBRACE] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(59),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [sym_nil] = ACTIONS(133),
    [sym_true] = ACTIONS(133),
    [sym_false] = ACTIONS(133),
    [sym_number_long] = ACTIONS(133),
    [sym_number_double] = ACTIONS(133),
    [anon_sym_BSLASH] = ACTIONS(133),
    [sym_string] = ACTIONS(133),
    [anon_sym_POUND_DQUOTE] = ACTIONS(133),
    [anon_sym_COLON] = ACTIONS(135),
    [anon_sym_COLON_COLON] = ACTIONS(133),
    [anon_sym_POUND_LBRACE] = ACTIONS(133),
    [anon_sym_RBRACE] = ACTIONS(133),
    [anon_sym_LBRACE] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(133),
    [anon_sym_SEMI] = ACTIONS(133),
    [anon_sym_POUND_] = ACTIONS(133),
  },
  [32] = {
    [sym__anything] = STATE(35),
    [sym_number] = STATE(35),
    [sym_character] = STATE(35),
    [sym_regex] = STATE(35),
    [sym_keyword] = STATE(35),
    [sym_unqualified_keyword] = STATE(13),
    [sym_qualified_keyword] = STATE(13),
    [sym_set] = STATE(35),
    [sym_hash_map] = STATE(35),
    [sym_vector] = STATE(35),
    [sym_comment] = STATE(35),
    [sym_semicolon] = STATE(14),
    [sym_ignore_form] = STATE(14),
    [sym_nil] = ACTIONS(69),
    [sym_true] = ACTIONS(69),
    [sym_false] = ACTIONS(69),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(69),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(65),
  },
  [33] = {
    [sym__anything] = STATE(48),
    [sym_number] = STATE(48),
    [sym_character] = STATE(48),
    [sym_regex] = STATE(48),
    [sym_keyword] = STATE(48),
    [sym_unqualified_keyword] = STATE(13),
    [sym_qualified_keyword] = STATE(13),
    [sym_set] = STATE(48),
    [sym_hash_map] = STATE(48),
    [sym_vector] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_semicolon] = STATE(14),
    [sym_ignore_form] = STATE(14),
    [aux_sym_program_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(137),
    [sym_true] = ACTIONS(137),
    [sym_false] = ACTIONS(137),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(137),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(139),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(65),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(141),
    [sym_nil] = ACTIONS(141),
    [sym_true] = ACTIONS(141),
    [sym_false] = ACTIONS(141),
    [sym_number_long] = ACTIONS(141),
    [sym_number_double] = ACTIONS(141),
    [anon_sym_BSLASH] = ACTIONS(141),
    [sym_string] = ACTIONS(141),
    [anon_sym_POUND_DQUOTE] = ACTIONS(141),
    [anon_sym_COLON] = ACTIONS(143),
    [anon_sym_COLON_COLON] = ACTIONS(141),
    [anon_sym_POUND_LBRACE] = ACTIONS(141),
    [anon_sym_RBRACE] = ACTIONS(141),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(141),
    [anon_sym_SEMI] = ACTIONS(141),
    [anon_sym_POUND_] = ACTIONS(141),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [sym_nil] = ACTIONS(145),
    [sym_true] = ACTIONS(145),
    [sym_false] = ACTIONS(145),
    [sym_number_long] = ACTIONS(145),
    [sym_number_double] = ACTIONS(145),
    [anon_sym_BSLASH] = ACTIONS(145),
    [sym_string] = ACTIONS(145),
    [anon_sym_POUND_DQUOTE] = ACTIONS(145),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_COLON_COLON] = ACTIONS(145),
    [anon_sym_POUND_LBRACE] = ACTIONS(145),
    [anon_sym_RBRACE] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(145),
    [anon_sym_RBRACK] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(145),
    [anon_sym_POUND_] = ACTIONS(145),
  },
  [36] = {
    [sym__anything] = STATE(36),
    [sym_number] = STATE(36),
    [sym_character] = STATE(36),
    [sym_regex] = STATE(36),
    [sym_keyword] = STATE(36),
    [sym_unqualified_keyword] = STATE(13),
    [sym_qualified_keyword] = STATE(13),
    [sym_set] = STATE(36),
    [sym_hash_map] = STATE(36),
    [sym_vector] = STATE(36),
    [sym_comment] = STATE(36),
    [sym_semicolon] = STATE(14),
    [sym_ignore_form] = STATE(14),
    [aux_sym_program_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(149),
    [sym_nil] = ACTIONS(151),
    [sym_true] = ACTIONS(151),
    [sym_false] = ACTIONS(151),
    [sym_number_long] = ACTIONS(154),
    [sym_number_double] = ACTIONS(154),
    [anon_sym_BSLASH] = ACTIONS(157),
    [sym_string] = ACTIONS(151),
    [anon_sym_POUND_DQUOTE] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(163),
    [anon_sym_COLON_COLON] = ACTIONS(166),
    [anon_sym_POUND_LBRACE] = ACTIONS(169),
    [anon_sym_LBRACE] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(175),
    [anon_sym_SEMI] = ACTIONS(178),
    [anon_sym_POUND_] = ACTIONS(181),
  },
  [37] = {
    [sym__hex_char] = ACTIONS(184),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(186),
    [sym_nil] = ACTIONS(186),
    [sym_true] = ACTIONS(186),
    [sym_false] = ACTIONS(186),
    [sym_number_long] = ACTIONS(186),
    [sym_number_double] = ACTIONS(186),
    [anon_sym_BSLASH] = ACTIONS(186),
    [sym_string] = ACTIONS(186),
    [anon_sym_POUND_DQUOTE] = ACTIONS(186),
    [anon_sym_COLON] = ACTIONS(188),
    [anon_sym_COLON_COLON] = ACTIONS(186),
    [anon_sym_POUND_LBRACE] = ACTIONS(186),
    [anon_sym_RBRACE] = ACTIONS(186),
    [anon_sym_LBRACE] = ACTIONS(186),
    [anon_sym_LBRACK] = ACTIONS(186),
    [anon_sym_RBRACK] = ACTIONS(186),
    [anon_sym_SEMI] = ACTIONS(186),
    [anon_sym_POUND_] = ACTIONS(186),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(190),
    [sym_nil] = ACTIONS(190),
    [sym_true] = ACTIONS(190),
    [sym_false] = ACTIONS(190),
    [sym_number_long] = ACTIONS(190),
    [sym_number_double] = ACTIONS(190),
    [anon_sym_BSLASH] = ACTIONS(190),
    [sym_string] = ACTIONS(190),
    [anon_sym_POUND_DQUOTE] = ACTIONS(190),
    [anon_sym_COLON] = ACTIONS(192),
    [anon_sym_COLON_COLON] = ACTIONS(190),
    [anon_sym_POUND_LBRACE] = ACTIONS(190),
    [anon_sym_RBRACE] = ACTIONS(190),
    [anon_sym_LBRACE] = ACTIONS(190),
    [anon_sym_LBRACK] = ACTIONS(190),
    [anon_sym_RBRACK] = ACTIONS(190),
    [anon_sym_SEMI] = ACTIONS(190),
    [anon_sym_POUND_] = ACTIONS(190),
  },
  [40] = {
    [aux_sym_regex_repeat1] = STATE(40),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(194),
    [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = ACTIONS(197),
    [anon_sym_DQUOTE] = ACTIONS(200),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(202),
    [sym_nil] = ACTIONS(202),
    [sym_true] = ACTIONS(202),
    [sym_false] = ACTIONS(202),
    [sym_number_long] = ACTIONS(202),
    [sym_number_double] = ACTIONS(202),
    [anon_sym_BSLASH] = ACTIONS(202),
    [sym_string] = ACTIONS(202),
    [anon_sym_POUND_DQUOTE] = ACTIONS(202),
    [anon_sym_COLON] = ACTIONS(204),
    [anon_sym_COLON_COLON] = ACTIONS(202),
    [anon_sym_POUND_LBRACE] = ACTIONS(202),
    [anon_sym_RBRACE] = ACTIONS(202),
    [anon_sym_LBRACE] = ACTIONS(202),
    [anon_sym_LBRACK] = ACTIONS(202),
    [anon_sym_RBRACK] = ACTIONS(202),
    [anon_sym_SEMI] = ACTIONS(202),
    [anon_sym_POUND_] = ACTIONS(202),
  },
  [42] = {
    [sym__anything] = STATE(42),
    [sym_number] = STATE(42),
    [sym_character] = STATE(42),
    [sym_regex] = STATE(42),
    [sym_keyword] = STATE(42),
    [sym_unqualified_keyword] = STATE(13),
    [sym_qualified_keyword] = STATE(13),
    [sym_set] = STATE(42),
    [sym_hash_map] = STATE(42),
    [sym_vector] = STATE(42),
    [sym_comment] = STATE(42),
    [sym_semicolon] = STATE(14),
    [sym_ignore_form] = STATE(14),
    [aux_sym_program_repeat1] = STATE(42),
    [sym_nil] = ACTIONS(206),
    [sym_true] = ACTIONS(206),
    [sym_false] = ACTIONS(206),
    [sym_number_long] = ACTIONS(154),
    [sym_number_double] = ACTIONS(154),
    [anon_sym_BSLASH] = ACTIONS(157),
    [sym_string] = ACTIONS(206),
    [anon_sym_POUND_DQUOTE] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(163),
    [anon_sym_COLON_COLON] = ACTIONS(166),
    [anon_sym_POUND_LBRACE] = ACTIONS(169),
    [anon_sym_RBRACE] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(175),
    [anon_sym_SEMI] = ACTIONS(178),
    [anon_sym_POUND_] = ACTIONS(209),
  },
  [43] = {
    [sym_nil] = ACTIONS(212),
    [sym_true] = ACTIONS(212),
    [sym_false] = ACTIONS(212),
    [sym_number_long] = ACTIONS(212),
    [sym_number_double] = ACTIONS(212),
    [anon_sym_BSLASH] = ACTIONS(212),
    [sym_string] = ACTIONS(212),
    [anon_sym_POUND_DQUOTE] = ACTIONS(212),
    [anon_sym_COLON] = ACTIONS(214),
    [anon_sym_COLON_COLON] = ACTIONS(212),
    [anon_sym_POUND_LBRACE] = ACTIONS(212),
    [anon_sym_RBRACE] = ACTIONS(212),
    [anon_sym_LBRACE] = ACTIONS(212),
    [anon_sym_LBRACK] = ACTIONS(212),
    [anon_sym_SEMI] = ACTIONS(212),
    [anon_sym_POUND_] = ACTIONS(212),
  },
  [44] = {
    [sym_nil] = ACTIONS(216),
    [sym_true] = ACTIONS(216),
    [sym_false] = ACTIONS(216),
    [sym_number_long] = ACTIONS(216),
    [sym_number_double] = ACTIONS(216),
    [anon_sym_BSLASH] = ACTIONS(216),
    [sym_string] = ACTIONS(216),
    [anon_sym_POUND_DQUOTE] = ACTIONS(216),
    [anon_sym_COLON] = ACTIONS(218),
    [anon_sym_COLON_COLON] = ACTIONS(216),
    [anon_sym_POUND_LBRACE] = ACTIONS(216),
    [anon_sym_RBRACE] = ACTIONS(216),
    [anon_sym_LBRACE] = ACTIONS(216),
    [anon_sym_LBRACK] = ACTIONS(216),
    [anon_sym_SEMI] = ACTIONS(216),
    [anon_sym_POUND_] = ACTIONS(216),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(220),
    [sym_nil] = ACTIONS(220),
    [sym_true] = ACTIONS(220),
    [sym_false] = ACTIONS(220),
    [sym_number_long] = ACTIONS(220),
    [sym_number_double] = ACTIONS(220),
    [anon_sym_BSLASH] = ACTIONS(220),
    [sym_string] = ACTIONS(220),
    [anon_sym_POUND_DQUOTE] = ACTIONS(220),
    [anon_sym_COLON] = ACTIONS(222),
    [anon_sym_COLON_COLON] = ACTIONS(220),
    [anon_sym_POUND_LBRACE] = ACTIONS(220),
    [anon_sym_RBRACE] = ACTIONS(220),
    [anon_sym_LBRACE] = ACTIONS(220),
    [anon_sym_LBRACK] = ACTIONS(220),
    [anon_sym_RBRACK] = ACTIONS(220),
    [anon_sym_SEMI] = ACTIONS(220),
    [anon_sym_POUND_] = ACTIONS(220),
  },
  [46] = {
    [sym__anything] = STATE(28),
    [sym_number] = STATE(28),
    [sym_character] = STATE(28),
    [sym_regex] = STATE(28),
    [sym_keyword] = STATE(28),
    [sym_unqualified_keyword] = STATE(13),
    [sym_qualified_keyword] = STATE(13),
    [sym_set] = STATE(28),
    [sym_hash_map] = STATE(28),
    [sym_hash_map_kv_pair] = STATE(46),
    [sym_hash_map_key] = STATE(29),
    [sym_vector] = STATE(28),
    [sym_comment] = STATE(28),
    [sym_semicolon] = STATE(14),
    [sym_ignore_form] = STATE(14),
    [aux_sym_hash_map_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(224),
    [sym_true] = ACTIONS(224),
    [sym_false] = ACTIONS(224),
    [sym_number_long] = ACTIONS(227),
    [sym_number_double] = ACTIONS(227),
    [anon_sym_BSLASH] = ACTIONS(230),
    [sym_string] = ACTIONS(224),
    [anon_sym_POUND_DQUOTE] = ACTIONS(233),
    [anon_sym_COLON] = ACTIONS(236),
    [anon_sym_COLON_COLON] = ACTIONS(239),
    [anon_sym_POUND_LBRACE] = ACTIONS(242),
    [anon_sym_RBRACE] = ACTIONS(245),
    [anon_sym_LBRACE] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(250),
    [anon_sym_SEMI] = ACTIONS(253),
    [anon_sym_POUND_] = ACTIONS(256),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(259),
    [sym_nil] = ACTIONS(259),
    [sym_true] = ACTIONS(259),
    [sym_false] = ACTIONS(259),
    [sym_number_long] = ACTIONS(259),
    [sym_number_double] = ACTIONS(259),
    [anon_sym_BSLASH] = ACTIONS(259),
    [sym_string] = ACTIONS(259),
    [anon_sym_POUND_DQUOTE] = ACTIONS(259),
    [anon_sym_COLON] = ACTIONS(261),
    [anon_sym_COLON_COLON] = ACTIONS(259),
    [anon_sym_POUND_LBRACE] = ACTIONS(259),
    [anon_sym_RBRACE] = ACTIONS(259),
    [anon_sym_LBRACE] = ACTIONS(259),
    [anon_sym_LBRACK] = ACTIONS(259),
    [anon_sym_RBRACK] = ACTIONS(259),
    [anon_sym_SEMI] = ACTIONS(259),
    [anon_sym_POUND_] = ACTIONS(259),
  },
  [48] = {
    [sym__anything] = STATE(48),
    [sym_number] = STATE(48),
    [sym_character] = STATE(48),
    [sym_regex] = STATE(48),
    [sym_keyword] = STATE(48),
    [sym_unqualified_keyword] = STATE(13),
    [sym_qualified_keyword] = STATE(13),
    [sym_set] = STATE(48),
    [sym_hash_map] = STATE(48),
    [sym_vector] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_semicolon] = STATE(14),
    [sym_ignore_form] = STATE(14),
    [aux_sym_program_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(263),
    [sym_true] = ACTIONS(263),
    [sym_false] = ACTIONS(263),
    [sym_number_long] = ACTIONS(154),
    [sym_number_double] = ACTIONS(154),
    [anon_sym_BSLASH] = ACTIONS(157),
    [sym_string] = ACTIONS(263),
    [anon_sym_POUND_DQUOTE] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(163),
    [anon_sym_COLON_COLON] = ACTIONS(166),
    [anon_sym_POUND_LBRACE] = ACTIONS(169),
    [anon_sym_LBRACE] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(175),
    [anon_sym_RBRACK] = ACTIONS(149),
    [anon_sym_SEMI] = ACTIONS(178),
    [anon_sym_POUND_] = ACTIONS(266),
  },
  [49] = {
    [sym__hex_char] = ACTIONS(269),
  },
  [50] = {
    [sym__hex_char] = ACTIONS(271),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(273),
    [sym_nil] = ACTIONS(273),
    [sym_true] = ACTIONS(273),
    [sym_false] = ACTIONS(273),
    [sym_number_long] = ACTIONS(273),
    [sym_number_double] = ACTIONS(273),
    [anon_sym_BSLASH] = ACTIONS(273),
    [sym_string] = ACTIONS(273),
    [anon_sym_POUND_DQUOTE] = ACTIONS(273),
    [anon_sym_COLON] = ACTIONS(275),
    [anon_sym_COLON_COLON] = ACTIONS(273),
    [anon_sym_POUND_LBRACE] = ACTIONS(273),
    [anon_sym_RBRACE] = ACTIONS(273),
    [anon_sym_LBRACE] = ACTIONS(273),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_RBRACK] = ACTIONS(273),
    [anon_sym_SEMI] = ACTIONS(273),
    [anon_sym_POUND_] = ACTIONS(273),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(15),
  [9] = {.count = 1, .reusable = true}, SHIFT(2),
  [11] = {.count = 1, .reusable = true}, SHIFT(3),
  [13] = {.count = 1, .reusable = true}, SHIFT(4),
  [15] = {.count = 1, .reusable = false}, SHIFT(5),
  [17] = {.count = 1, .reusable = true}, SHIFT(6),
  [19] = {.count = 1, .reusable = true}, SHIFT(7),
  [21] = {.count = 1, .reusable = true}, SHIFT(8),
  [23] = {.count = 1, .reusable = true}, SHIFT(9),
  [25] = {.count = 1, .reusable = true}, SHIFT(10),
  [27] = {.count = 1, .reusable = true}, SHIFT(11),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_number, 1),
  [31] = {.count = 1, .reusable = false}, REDUCE(sym_number, 1),
  [33] = {.count = 1, .reusable = false}, SHIFT(16),
  [35] = {.count = 1, .reusable = false}, SHIFT(17),
  [37] = {.count = 1, .reusable = false}, SHIFT(18),
  [39] = {.count = 1, .reusable = true}, SHIFT(20),
  [41] = {.count = 1, .reusable = false}, SHIFT(20),
  [43] = {.count = 1, .reusable = false}, SHIFT(19),
  [45] = {.count = 1, .reusable = true}, SHIFT(21),
  [47] = {.count = 1, .reusable = true}, SHIFT(22),
  [49] = {.count = 1, .reusable = true}, SHIFT(25),
  [51] = {.count = 1, .reusable = true}, SHIFT(23),
  [53] = {.count = 1, .reusable = true}, SHIFT(24),
  [55] = {.count = 1, .reusable = true}, SHIFT(28),
  [57] = {.count = 1, .reusable = true}, SHIFT(26),
  [59] = {.count = 1, .reusable = true}, SHIFT(27),
  [61] = {.count = 1, .reusable = true}, SHIFT(33),
  [63] = {.count = 1, .reusable = true}, SHIFT(31),
  [65] = {.count = 1, .reusable = true}, SHIFT(32),
  [67] = {.count = 1, .reusable = false}, SHIFT(34),
  [69] = {.count = 1, .reusable = true}, SHIFT(35),
  [71] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_keyword, 1),
  [75] = {.count = 1, .reusable = false}, REDUCE(sym_keyword, 1),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 1),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [83] = {.count = 1, .reusable = true}, SHIFT(36),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_character, 2),
  [87] = {.count = 1, .reusable = false}, REDUCE(sym_character, 2),
  [89] = {.count = 1, .reusable = true}, SHIFT(37),
  [91] = {.count = 1, .reusable = true}, SHIFT(38),
  [93] = {.count = 1, .reusable = false}, SHIFT(38),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_regex, 2),
  [97] = {.count = 1, .reusable = false}, REDUCE(sym_regex, 2),
  [99] = {.count = 1, .reusable = true}, SHIFT(40),
  [101] = {.count = 1, .reusable = false}, SHIFT(40),
  [103] = {.count = 1, .reusable = false}, SHIFT(39),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_unqualified_keyword, 2),
  [107] = {.count = 1, .reusable = false}, REDUCE(sym_unqualified_keyword, 2),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_keyword, 2),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_keyword, 2),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_set, 2),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_set, 2),
  [117] = {.count = 1, .reusable = true}, SHIFT(42),
  [119] = {.count = 1, .reusable = true}, SHIFT(41),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map, 2),
  [123] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map, 2),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map_key, 1),
  [127] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map_key, 1),
  [129] = {.count = 1, .reusable = true}, SHIFT(43),
  [131] = {.count = 1, .reusable = true}, SHIFT(45),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_vector, 2),
  [135] = {.count = 1, .reusable = false}, REDUCE(sym_vector, 2),
  [137] = {.count = 1, .reusable = true}, SHIFT(48),
  [139] = {.count = 1, .reusable = true}, SHIFT(47),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_semicolon, 2),
  [143] = {.count = 1, .reusable = false}, REDUCE(sym_semicolon, 2),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_ignore_form, 2),
  [147] = {.count = 1, .reusable = false}, REDUCE(sym_ignore_form, 2),
  [149] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [151] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(36),
  [154] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [157] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [160] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [163] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [166] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [169] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [172] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [175] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [178] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [181] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [184] = {.count = 1, .reusable = true}, SHIFT(49),
  [186] = {.count = 1, .reusable = true}, REDUCE(sym__octal_char, 2),
  [188] = {.count = 1, .reusable = false}, REDUCE(sym__octal_char, 2),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_regex, 3),
  [192] = {.count = 1, .reusable = false}, REDUCE(sym_regex, 3),
  [194] = {.count = 2, .reusable = true}, REDUCE(aux_sym_regex_repeat1, 2), SHIFT_REPEAT(40),
  [197] = {.count = 2, .reusable = false}, REDUCE(aux_sym_regex_repeat1, 2), SHIFT_REPEAT(40),
  [200] = {.count = 1, .reusable = false}, REDUCE(aux_sym_regex_repeat1, 2),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym_set, 3),
  [204] = {.count = 1, .reusable = false}, REDUCE(sym_set, 3),
  [206] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(42),
  [209] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(24),
  [212] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map_value, 1),
  [214] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map_value, 1),
  [216] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map_kv_pair, 2),
  [218] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map_kv_pair, 2),
  [220] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map, 3),
  [222] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map, 3),
  [224] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(28),
  [227] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(2),
  [230] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(3),
  [233] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(4),
  [236] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(5),
  [239] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(6),
  [242] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(7),
  [245] = {.count = 1, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2),
  [247] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(8),
  [250] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(9),
  [253] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(10),
  [256] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(27),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym_vector, 3),
  [261] = {.count = 1, .reusable = false}, REDUCE(sym_vector, 3),
  [263] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(48),
  [266] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(32),
  [269] = {.count = 1, .reusable = true}, SHIFT(50),
  [271] = {.count = 1, .reusable = true}, SHIFT(51),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym__unicode_char, 5),
  [275] = {.count = 1, .reusable = false}, REDUCE(sym__unicode_char, 5),
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
