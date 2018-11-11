#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 58
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
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
  anon_sym_LPARENcomment = 36,
  anon_sym_RPAREN = 37,
  sym_program = 38,
  sym__anything = 39,
  sym_number = 40,
  sym_character = 41,
  sym__special_char = 42,
  sym__unicode_char = 43,
  sym__octal_char = 44,
  sym__octal_num = 45,
  sym_regex = 46,
  sym_keyword = 47,
  sym_unqualified_keyword = 48,
  sym_qualified_keyword = 49,
  sym_set = 50,
  sym_hash_map = 51,
  sym_hash_map_kv_pair = 52,
  sym_hash_map_key = 53,
  sym_hash_map_value = 54,
  sym_vector = 55,
  sym_comment = 56,
  sym_semicolon = 57,
  sym_ignore_form = 58,
  sym_comment_macro = 59,
  aux_sym_program_repeat1 = 60,
  aux_sym_regex_repeat1 = 61,
  aux_sym_hash_map_repeat1 = 62,
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
  [anon_sym_LPARENcomment] = "(comment",
  [anon_sym_RPAREN] = ")",
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
  [sym_comment_macro] = "comment_macro",
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
  [anon_sym_LPARENcomment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [sym_comment_macro] = {
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
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(15);
      if (lookahead == ',')
        SKIP(0);
      if (lookahead == '.')
        ADVANCE(16);
      if (lookahead == ':')
        ADVANCE(24);
      if (lookahead == ';')
        ADVANCE(26);
      if (lookahead == '[')
        ADVANCE(27);
      if (lookahead == '\\')
        ADVANCE(28);
      if (lookahead == ']')
        ADVANCE(29);
      if (lookahead == 'f')
        ADVANCE(30);
      if (lookahead == 'n')
        ADVANCE(38);
      if (lookahead == 'o')
        ADVANCE(47);
      if (lookahead == 'r')
        ADVANCE(48);
      if (lookahead == 's')
        ADVANCE(54);
      if (lookahead == 't')
        ADVANCE(59);
      if (lookahead == 'u')
        ADVANCE(65);
      if (lookahead == '{')
        ADVANCE(66);
      if (lookahead == '}')
        ADVANCE(67);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(68);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e'))
        ADVANCE(74);
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
      if (lookahead == 'c')
        ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'o')
        ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'm')
        ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'm')
        ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'e')
        ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'n')
        ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 't')
        ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LPARENcomment);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_number_double);
      if (lookahead == '_')
        ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(19);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '_')
        ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '+')
        ADVANCE(20);
      if (lookahead == '-')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(21);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_number_double);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '_')
        ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(21);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_number_double);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__hex_char);
      if (lookahead == 'o')
        ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'r')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'm')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'f')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'e')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'e')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'd')
        ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_formfeed);
      END_STATE();
    case 38:
      if (lookahead == 'e')
        ADVANCE(39);
      if (lookahead == 'i')
        ADVANCE(45);
      END_STATE();
    case 39:
      if (lookahead == 'w')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'l')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'i')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'n')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'e')
        ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_newline);
      END_STATE();
    case 45:
      if (lookahead == 'l')
        ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 48:
      if (lookahead == 'e')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 't')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'u')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'r')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'n')
        ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 54:
      if (lookahead == 'p')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'a')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'c')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'e')
        ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_space);
      END_STATE();
    case 59:
      if (lookahead == 'a')
        ADVANCE(60);
      if (lookahead == 'r')
        ADVANCE(62);
      END_STATE();
    case 60:
      if (lookahead == 'b')
        ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_tab);
      END_STATE();
    case 62:
      if (lookahead == 'u')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'e')
        ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_number_long);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_number_long);
      if (lookahead == '.')
        ADVANCE(71);
      if (lookahead == '_')
        ADVANCE(72);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(19);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_number_double);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(19);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(17);
      END_STATE();
    case 72:
      if (lookahead == '_')
        ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == '.')
        ADVANCE(71);
      if (lookahead == '_')
        ADVANCE(72);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(19);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__hex_char);
      END_STATE();
    case 75:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(76);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ',')
        SKIP(75);
      if (lookahead == '.')
        ADVANCE(16);
      if (lookahead == ':')
        ADVANCE(24);
      if (lookahead == ';')
        ADVANCE(26);
      if (lookahead == '[')
        ADVANCE(27);
      if (lookahead == '\\')
        ADVANCE(28);
      if (lookahead == 'f')
        ADVANCE(79);
      if (lookahead == 'n')
        ADVANCE(84);
      if (lookahead == 't')
        ADVANCE(85);
      if (lookahead == '{')
        ADVANCE(66);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(75);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(70);
      END_STATE();
    case 76:
      if (lookahead == '\"')
        ADVANCE(77);
      if (lookahead == '\\')
        ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 78:
      if (lookahead == '\n')
        ADVANCE(76);
      if (lookahead != 0)
        ADVANCE(76);
      END_STATE();
    case 79:
      if (lookahead == 'a')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == 'l')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 's')
        ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 'e')
        ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 84:
      if (lookahead == 'i')
        ADVANCE(45);
      END_STATE();
    case 85:
      if (lookahead == 'r')
        ADVANCE(62);
      END_STATE();
    case 86:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(76);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(15);
      if (lookahead == ',')
        SKIP(86);
      if (lookahead == '.')
        ADVANCE(16);
      if (lookahead == ':')
        ADVANCE(24);
      if (lookahead == ';')
        ADVANCE(26);
      if (lookahead == '[')
        ADVANCE(27);
      if (lookahead == '\\')
        ADVANCE(28);
      if (lookahead == ']')
        ADVANCE(29);
      if (lookahead == 'f')
        ADVANCE(79);
      if (lookahead == 'n')
        ADVANCE(84);
      if (lookahead == 't')
        ADVANCE(85);
      if (lookahead == '{')
        ADVANCE(66);
      if (lookahead == '}')
        ADVANCE(67);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(86);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(70);
      END_STATE();
    case 87:
      if (lookahead == '\n')
        SKIP(87);
      if (lookahead == ',')
        ADVANCE(88);
      if (lookahead == 'b')
        ADVANCE(89);
      if (lookahead == 'f')
        ADVANCE(98);
      if (lookahead == 'n')
        ADVANCE(99);
      if (lookahead == 'o')
        ADVANCE(47);
      if (lookahead == 'r')
        ADVANCE(100);
      if (lookahead == 's')
        ADVANCE(101);
      if (lookahead == 't')
        ADVANCE(102);
      if (lookahead == 'u')
        ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__normal_char);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'a')
        ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 'c')
        ADVANCE(91);
      END_STATE();
    case 91:
      if (lookahead == 'k')
        ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == 's')
        ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'p')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'a')
        ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == 'c')
        ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 'e')
        ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_backspace);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'o')
        ADVANCE(31);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'e')
        ADVANCE(39);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'e')
        ADVANCE(49);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'p')
        ADVANCE(55);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'a')
        ADVANCE(60);
      END_STATE();
    case 103:
      if (lookahead == '\n')
        SKIP(103);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(104);
      if (lookahead == '\\')
        ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(104);
      if (lookahead != 0)
        ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 105:
      if (lookahead == '\n')
        ADVANCE(106);
      if (lookahead != 0)
        ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH);
      END_STATE();
    case 107:
      if (lookahead == ',')
        SKIP(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(107);
      if (lookahead == '!' ||
          ('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__keyword_chars);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 109:
      if (lookahead == '\"')
        ADVANCE(76);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ',')
        SKIP(109);
      if (lookahead == '.')
        ADVANCE(16);
      if (lookahead == ':')
        ADVANCE(24);
      if (lookahead == ';')
        ADVANCE(26);
      if (lookahead == '[')
        ADVANCE(27);
      if (lookahead == '\\')
        ADVANCE(28);
      if (lookahead == 'f')
        ADVANCE(79);
      if (lookahead == 'n')
        ADVANCE(84);
      if (lookahead == 't')
        ADVANCE(85);
      if (lookahead == '{')
        ADVANCE(66);
      if (lookahead == '}')
        ADVANCE(67);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(109);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(70);
      END_STATE();
    case 110:
      if (lookahead == '\"')
        ADVANCE(76);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ',')
        SKIP(110);
      if (lookahead == '.')
        ADVANCE(16);
      if (lookahead == ':')
        ADVANCE(24);
      if (lookahead == ';')
        ADVANCE(26);
      if (lookahead == '[')
        ADVANCE(27);
      if (lookahead == '\\')
        ADVANCE(28);
      if (lookahead == ']')
        ADVANCE(29);
      if (lookahead == 'f')
        ADVANCE(79);
      if (lookahead == 'n')
        ADVANCE(84);
      if (lookahead == 't')
        ADVANCE(85);
      if (lookahead == '{')
        ADVANCE(66);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(110);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(70);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == '\n')
        SKIP(111);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(112);
      if (lookahead != 0)
        ADVANCE(113);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(113);
      END_STATE();
    case 114:
      if (lookahead == '\"')
        ADVANCE(76);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(15);
      if (lookahead == ',')
        SKIP(114);
      if (lookahead == '.')
        ADVANCE(16);
      if (lookahead == ':')
        ADVANCE(24);
      if (lookahead == ';')
        ADVANCE(26);
      if (lookahead == '[')
        ADVANCE(27);
      if (lookahead == '\\')
        ADVANCE(28);
      if (lookahead == 'f')
        ADVANCE(79);
      if (lookahead == 'n')
        ADVANCE(84);
      if (lookahead == 't')
        ADVANCE(85);
      if (lookahead == '{')
        ADVANCE(66);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(114);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(70);
      END_STATE();
    case 115:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        SKIP(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(115);
      END_STATE();
    case 116:
      if (lookahead == ',')
        SKIP(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(74);
      END_STATE();
    case 117:
      if (lookahead == ',')
        SKIP(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(117);
      if (('0' <= lookahead && lookahead <= '3'))
        ADVANCE(118);
      if (('4' <= lookahead && lookahead <= '7'))
        ADVANCE(121);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 75},
  [2] = {.lex_state = 86},
  [3] = {.lex_state = 87},
  [4] = {.lex_state = 103},
  [5] = {.lex_state = 107},
  [6] = {.lex_state = 107},
  [7] = {.lex_state = 109},
  [8] = {.lex_state = 109},
  [9] = {.lex_state = 110},
  [10] = {.lex_state = 111},
  [11] = {.lex_state = 75},
  [12] = {.lex_state = 114},
  [13] = {.lex_state = 115},
  [14] = {.lex_state = 86},
  [15] = {.lex_state = 86},
  [16] = {.lex_state = 75},
  [17] = {.lex_state = 86},
  [18] = {.lex_state = 116},
  [19] = {.lex_state = 117},
  [20] = {.lex_state = 86},
  [21] = {.lex_state = 103},
  [22] = {.lex_state = 86},
  [23] = {.lex_state = 86},
  [24] = {.lex_state = 86},
  [25] = {.lex_state = 75},
  [26] = {.lex_state = 109},
  [27] = {.lex_state = 86},
  [28] = {.lex_state = 75},
  [29] = {.lex_state = 75},
  [30] = {.lex_state = 75},
  [31] = {.lex_state = 109},
  [32] = {.lex_state = 86},
  [33] = {.lex_state = 75},
  [34] = {.lex_state = 110},
  [35] = {.lex_state = 86},
  [36] = {.lex_state = 86},
  [37] = {.lex_state = 75},
  [38] = {.lex_state = 86},
  [39] = {.lex_state = 114},
  [40] = {.lex_state = 75},
  [41] = {.lex_state = 116},
  [42] = {.lex_state = 86},
  [43] = {.lex_state = 86},
  [44] = {.lex_state = 103},
  [45] = {.lex_state = 86},
  [46] = {.lex_state = 109},
  [47] = {.lex_state = 109},
  [48] = {.lex_state = 109},
  [49] = {.lex_state = 86},
  [50] = {.lex_state = 109},
  [51] = {.lex_state = 86},
  [52] = {.lex_state = 110},
  [53] = {.lex_state = 86},
  [54] = {.lex_state = 114},
  [55] = {.lex_state = 116},
  [56] = {.lex_state = 116},
  [57] = {.lex_state = 86},
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
    [anon_sym_LPARENcomment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(13),
    [sym__anything] = STATE(16),
    [sym_number] = STATE(16),
    [sym_character] = STATE(16),
    [sym_regex] = STATE(16),
    [sym_keyword] = STATE(16),
    [sym_unqualified_keyword] = STATE(14),
    [sym_qualified_keyword] = STATE(14),
    [sym_set] = STATE(16),
    [sym_hash_map] = STATE(16),
    [sym_vector] = STATE(16),
    [sym_comment] = STATE(16),
    [sym_semicolon] = STATE(15),
    [sym_ignore_form] = STATE(15),
    [sym_comment_macro] = STATE(15),
    [aux_sym_program_repeat1] = STATE(16),
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
    [anon_sym_LPARENcomment] = ACTIONS(29),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_nil] = ACTIONS(31),
    [sym_true] = ACTIONS(31),
    [sym_false] = ACTIONS(31),
    [sym_number_long] = ACTIONS(31),
    [sym_number_double] = ACTIONS(31),
    [anon_sym_BSLASH] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [anon_sym_POUND_DQUOTE] = ACTIONS(31),
    [anon_sym_COLON] = ACTIONS(33),
    [anon_sym_COLON_COLON] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_POUND_] = ACTIONS(31),
    [anon_sym_LPARENcomment] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(31),
  },
  [3] = {
    [sym__special_char] = STATE(17),
    [sym__unicode_char] = STATE(17),
    [sym__octal_char] = STATE(17),
    [sym__normal_char] = ACTIONS(35),
    [anon_sym_newline] = ACTIONS(35),
    [anon_sym_space] = ACTIONS(35),
    [anon_sym_tab] = ACTIONS(35),
    [anon_sym_formfeed] = ACTIONS(35),
    [anon_sym_backspace] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(35),
    [anon_sym_u] = ACTIONS(37),
    [anon_sym_o] = ACTIONS(39),
  },
  [4] = {
    [aux_sym_regex_repeat1] = STATE(21),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
  },
  [5] = {
    [sym__keyword_chars] = ACTIONS(47),
  },
  [6] = {
    [sym__keyword_chars] = ACTIONS(49),
  },
  [7] = {
    [sym__anything] = STATE(26),
    [sym_number] = STATE(26),
    [sym_character] = STATE(26),
    [sym_regex] = STATE(26),
    [sym_keyword] = STATE(26),
    [sym_unqualified_keyword] = STATE(14),
    [sym_qualified_keyword] = STATE(14),
    [sym_set] = STATE(26),
    [sym_hash_map] = STATE(26),
    [sym_vector] = STATE(26),
    [sym_comment] = STATE(26),
    [sym_semicolon] = STATE(15),
    [sym_ignore_form] = STATE(15),
    [sym_comment_macro] = STATE(15),
    [aux_sym_program_repeat1] = STATE(26),
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
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(55),
    [anon_sym_LPARENcomment] = ACTIONS(29),
  },
  [8] = {
    [sym__anything] = STATE(29),
    [sym_number] = STATE(29),
    [sym_character] = STATE(29),
    [sym_regex] = STATE(29),
    [sym_keyword] = STATE(29),
    [sym_unqualified_keyword] = STATE(14),
    [sym_qualified_keyword] = STATE(14),
    [sym_set] = STATE(29),
    [sym_hash_map] = STATE(29),
    [sym_hash_map_kv_pair] = STATE(31),
    [sym_hash_map_key] = STATE(30),
    [sym_vector] = STATE(29),
    [sym_comment] = STATE(29),
    [sym_semicolon] = STATE(15),
    [sym_ignore_form] = STATE(15),
    [sym_comment_macro] = STATE(15),
    [aux_sym_hash_map_repeat1] = STATE(31),
    [sym_nil] = ACTIONS(57),
    [sym_true] = ACTIONS(57),
    [sym_false] = ACTIONS(57),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(61),
    [anon_sym_LPARENcomment] = ACTIONS(29),
  },
  [9] = {
    [sym__anything] = STATE(34),
    [sym_number] = STATE(34),
    [sym_character] = STATE(34),
    [sym_regex] = STATE(34),
    [sym_keyword] = STATE(34),
    [sym_unqualified_keyword] = STATE(14),
    [sym_qualified_keyword] = STATE(14),
    [sym_set] = STATE(34),
    [sym_hash_map] = STATE(34),
    [sym_vector] = STATE(34),
    [sym_comment] = STATE(34),
    [sym_semicolon] = STATE(15),
    [sym_ignore_form] = STATE(15),
    [sym_comment_macro] = STATE(15),
    [aux_sym_program_repeat1] = STATE(34),
    [sym_nil] = ACTIONS(63),
    [sym_true] = ACTIONS(63),
    [sym_false] = ACTIONS(63),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(67),
    [anon_sym_LPARENcomment] = ACTIONS(29),
  },
  [10] = {
    [aux_sym_SLASH_DOT_STAR_SLASH] = ACTIONS(69),
  },
  [11] = {
    [sym__anything] = STATE(36),
    [sym_number] = STATE(36),
    [sym_character] = STATE(36),
    [sym_regex] = STATE(36),
    [sym_keyword] = STATE(36),
    [sym_unqualified_keyword] = STATE(14),
    [sym_qualified_keyword] = STATE(14),
    [sym_set] = STATE(36),
    [sym_hash_map] = STATE(36),
    [sym_vector] = STATE(36),
    [sym_comment] = STATE(36),
    [sym_semicolon] = STATE(15),
    [sym_ignore_form] = STATE(15),
    [sym_comment_macro] = STATE(15),
    [sym_nil] = ACTIONS(71),
    [sym_true] = ACTIONS(71),
    [sym_false] = ACTIONS(71),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(27),
    [anon_sym_LPARENcomment] = ACTIONS(29),
  },
  [12] = {
    [sym__anything] = STATE(39),
    [sym_number] = STATE(39),
    [sym_character] = STATE(39),
    [sym_regex] = STATE(39),
    [sym_keyword] = STATE(39),
    [sym_unqualified_keyword] = STATE(14),
    [sym_qualified_keyword] = STATE(14),
    [sym_set] = STATE(39),
    [sym_hash_map] = STATE(39),
    [sym_vector] = STATE(39),
    [sym_comment] = STATE(39),
    [sym_semicolon] = STATE(15),
    [sym_ignore_form] = STATE(15),
    [sym_comment_macro] = STATE(15),
    [aux_sym_program_repeat1] = STATE(39),
    [sym_nil] = ACTIONS(73),
    [sym_true] = ACTIONS(73),
    [sym_false] = ACTIONS(73),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(75),
    [anon_sym_LPARENcomment] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(77),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(79),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [sym_nil] = ACTIONS(81),
    [sym_true] = ACTIONS(81),
    [sym_false] = ACTIONS(81),
    [sym_number_long] = ACTIONS(81),
    [sym_number_double] = ACTIONS(81),
    [anon_sym_BSLASH] = ACTIONS(81),
    [sym_string] = ACTIONS(81),
    [anon_sym_POUND_DQUOTE] = ACTIONS(81),
    [anon_sym_COLON] = ACTIONS(83),
    [anon_sym_COLON_COLON] = ACTIONS(81),
    [anon_sym_POUND_LBRACE] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(81),
    [anon_sym_SEMI] = ACTIONS(81),
    [anon_sym_POUND_] = ACTIONS(81),
    [anon_sym_LPARENcomment] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(81),
  },
  [15] = {
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
    [anon_sym_LPARENcomment] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(85),
  },
  [16] = {
    [sym__anything] = STATE(40),
    [sym_number] = STATE(40),
    [sym_character] = STATE(40),
    [sym_regex] = STATE(40),
    [sym_keyword] = STATE(40),
    [sym_unqualified_keyword] = STATE(14),
    [sym_qualified_keyword] = STATE(14),
    [sym_set] = STATE(40),
    [sym_hash_map] = STATE(40),
    [sym_vector] = STATE(40),
    [sym_comment] = STATE(40),
    [sym_semicolon] = STATE(15),
    [sym_ignore_form] = STATE(15),
    [sym_comment_macro] = STATE(15),
    [aux_sym_program_repeat1] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(89),
    [sym_nil] = ACTIONS(91),
    [sym_true] = ACTIONS(91),
    [sym_false] = ACTIONS(91),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(91),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(27),
    [anon_sym_LPARENcomment] = ACTIONS(29),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [sym_nil] = ACTIONS(93),
    [sym_true] = ACTIONS(93),
    [sym_false] = ACTIONS(93),
    [sym_number_long] = ACTIONS(93),
    [sym_number_double] = ACTIONS(93),
    [anon_sym_BSLASH] = ACTIONS(93),
    [sym_string] = ACTIONS(93),
    [anon_sym_POUND_DQUOTE] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(93),
    [anon_sym_POUND_LBRACE] = ACTIONS(93),
    [anon_sym_RBRACE] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(93),
    [anon_sym_SEMI] = ACTIONS(93),
    [anon_sym_POUND_] = ACTIONS(93),
    [anon_sym_LPARENcomment] = ACTIONS(93),
    [anon_sym_RPAREN] = ACTIONS(93),
  },
  [18] = {
    [sym__hex_char] = ACTIONS(97),
  },
  [19] = {
    [sym__octal_num] = STATE(42),
    [aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(101),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(101),
  },
  [20] = {
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
    [anon_sym_SEMI] = ACTIONS(103),
    [anon_sym_POUND_] = ACTIONS(103),
    [anon_sym_LPARENcomment] = ACTIONS(103),
    [anon_sym_RPAREN] = ACTIONS(103),
  },
  [21] = {
    [aux_sym_regex_repeat1] = STATE(44),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(111),
  },
  [22] = {
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
    [anon_sym_LPARENcomment] = ACTIONS(113),
    [anon_sym_RPAREN] = ACTIONS(113),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [sym_nil] = ACTIONS(117),
    [sym_true] = ACTIONS(117),
    [sym_false] = ACTIONS(117),
    [sym_number_long] = ACTIONS(117),
    [sym_number_double] = ACTIONS(117),
    [anon_sym_BSLASH] = ACTIONS(117),
    [sym_string] = ACTIONS(117),
    [anon_sym_POUND_DQUOTE] = ACTIONS(117),
    [anon_sym_COLON] = ACTIONS(119),
    [anon_sym_COLON_COLON] = ACTIONS(117),
    [anon_sym_POUND_LBRACE] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_RBRACK] = ACTIONS(117),
    [anon_sym_SEMI] = ACTIONS(117),
    [anon_sym_POUND_] = ACTIONS(117),
    [anon_sym_LPARENcomment] = ACTIONS(117),
    [anon_sym_RPAREN] = ACTIONS(117),
  },
  [24] = {
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
    [anon_sym_LPARENcomment] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(121),
  },
  [25] = {
    [sym__anything] = STATE(36),
    [sym_number] = STATE(36),
    [sym_character] = STATE(36),
    [sym_regex] = STATE(36),
    [sym_keyword] = STATE(36),
    [sym_unqualified_keyword] = STATE(14),
    [sym_qualified_keyword] = STATE(14),
    [sym_set] = STATE(36),
    [sym_hash_map] = STATE(36),
    [sym_vector] = STATE(36),
    [sym_comment] = STATE(36),
    [sym_semicolon] = STATE(15),
    [sym_ignore_form] = STATE(15),
    [sym_comment_macro] = STATE(15),
    [sym_nil] = ACTIONS(71),
    [sym_true] = ACTIONS(71),
    [sym_false] = ACTIONS(71),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(55),
    [anon_sym_LPARENcomment] = ACTIONS(29),
  },
  [26] = {
    [sym__anything] = STATE(46),
    [sym_number] = STATE(46),
    [sym_character] = STATE(46),
    [sym_regex] = STATE(46),
    [sym_keyword] = STATE(46),
    [sym_unqualified_keyword] = STATE(14),
    [sym_qualified_keyword] = STATE(14),
    [sym_set] = STATE(46),
    [sym_hash_map] = STATE(46),
    [sym_vector] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_semicolon] = STATE(15),
    [sym_ignore_form] = STATE(15),
    [sym_comment_macro] = STATE(15),
    [aux_sym_program_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(125),
    [sym_true] = ACTIONS(125),
    [sym_false] = ACTIONS(125),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(125),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(55),
    [anon_sym_LPARENcomment] = ACTIONS(29),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [sym_nil] = ACTIONS(129),
    [sym_true] = ACTIONS(129),
    [sym_false] = ACTIONS(129),
    [sym_number_long] = ACTIONS(129),
    [sym_number_double] = ACTIONS(129),
    [anon_sym_BSLASH] = ACTIONS(129),
    [sym_string] = ACTIONS(129),
    [anon_sym_POUND_DQUOTE] = ACTIONS(129),
    [anon_sym_COLON] = ACTIONS(131),
    [anon_sym_COLON_COLON] = ACTIONS(129),
    [anon_sym_POUND_LBRACE] = ACTIONS(129),
    [anon_sym_RBRACE] = ACTIONS(129),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(129),
    [anon_sym_RBRACK] = ACTIONS(129),
    [anon_sym_SEMI] = ACTIONS(129),
    [anon_sym_POUND_] = ACTIONS(129),
    [anon_sym_LPARENcomment] = ACTIONS(129),
    [anon_sym_RPAREN] = ACTIONS(129),
  },
  [28] = {
    [sym__anything] = STATE(36),
    [sym_number] = STATE(36),
    [sym_character] = STATE(36),
    [sym_regex] = STATE(36),
    [sym_keyword] = STATE(36),
    [sym_unqualified_keyword] = STATE(14),
    [sym_qualified_keyword] = STATE(14),
    [sym_set] = STATE(36),
    [sym_hash_map] = STATE(36),
    [sym_vector] = STATE(36),
    [sym_comment] = STATE(36),
    [sym_semicolon] = STATE(15),
    [sym_ignore_form] = STATE(15),
    [sym_comment_macro] = STATE(15),
    [sym_nil] = ACTIONS(71),
    [sym_true] = ACTIONS(71),
    [sym_false] = ACTIONS(71),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(61),
    [anon_sym_LPARENcomment] = ACTIONS(29),
  },
  [29] = {
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
    [anon_sym_LBRACE] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_SEMI] = ACTIONS(133),
    [anon_sym_POUND_] = ACTIONS(133),
    [anon_sym_LPARENcomment] = ACTIONS(133),
  },
  [30] = {
    [sym__anything] = STATE(47),
    [sym_number] = STATE(47),
    [sym_character] = STATE(47),
    [sym_regex] = STATE(47),
    [sym_keyword] = STATE(47),
    [sym_unqualified_keyword] = STATE(14),
    [sym_qualified_keyword] = STATE(14),
    [sym_set] = STATE(47),
    [sym_hash_map] = STATE(47),
    [sym_hash_map_value] = STATE(48),
    [sym_vector] = STATE(47),
    [sym_comment] = STATE(47),
    [sym_semicolon] = STATE(15),
    [sym_ignore_form] = STATE(15),
    [sym_comment_macro] = STATE(15),
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
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(55),
    [anon_sym_LPARENcomment] = ACTIONS(29),
  },
  [31] = {
    [sym__anything] = STATE(29),
    [sym_number] = STATE(29),
    [sym_character] = STATE(29),
    [sym_regex] = STATE(29),
    [sym_keyword] = STATE(29),
    [sym_unqualified_keyword] = STATE(14),
    [sym_qualified_keyword] = STATE(14),
    [sym_set] = STATE(29),
    [sym_hash_map] = STATE(29),
    [sym_hash_map_kv_pair] = STATE(50),
    [sym_hash_map_key] = STATE(30),
    [sym_vector] = STATE(29),
    [sym_comment] = STATE(29),
    [sym_semicolon] = STATE(15),
    [sym_ignore_form] = STATE(15),
    [sym_comment_macro] = STATE(15),
    [aux_sym_hash_map_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(57),
    [sym_true] = ACTIONS(57),
    [sym_false] = ACTIONS(57),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(61),
    [anon_sym_LPARENcomment] = ACTIONS(29),
  },
  [32] = {
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
    [anon_sym_LPARENcomment] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(141),
  },
  [33] = {
    [sym__anything] = STATE(36),
    [sym_number] = STATE(36),
    [sym_character] = STATE(36),
    [sym_regex] = STATE(36),
    [sym_keyword] = STATE(36),
    [sym_unqualified_keyword] = STATE(14),
    [sym_qualified_keyword] = STATE(14),
    [sym_set] = STATE(36),
    [sym_hash_map] = STATE(36),
    [sym_vector] = STATE(36),
    [sym_comment] = STATE(36),
    [sym_semicolon] = STATE(15),
    [sym_ignore_form] = STATE(15),
    [sym_comment_macro] = STATE(15),
    [sym_nil] = ACTIONS(71),
    [sym_true] = ACTIONS(71),
    [sym_false] = ACTIONS(71),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(67),
    [anon_sym_LPARENcomment] = ACTIONS(29),
  },
  [34] = {
    [sym__anything] = STATE(52),
    [sym_number] = STATE(52),
    [sym_character] = STATE(52),
    [sym_regex] = STATE(52),
    [sym_keyword] = STATE(52),
    [sym_unqualified_keyword] = STATE(14),
    [sym_qualified_keyword] = STATE(14),
    [sym_set] = STATE(52),
    [sym_hash_map] = STATE(52),
    [sym_vector] = STATE(52),
    [sym_comment] = STATE(52),
    [sym_semicolon] = STATE(15),
    [sym_ignore_form] = STATE(15),
    [sym_comment_macro] = STATE(15),
    [aux_sym_program_repeat1] = STATE(52),
    [sym_nil] = ACTIONS(145),
    [sym_true] = ACTIONS(145),
    [sym_false] = ACTIONS(145),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(145),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(67),
    [anon_sym_LPARENcomment] = ACTIONS(29),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [sym_nil] = ACTIONS(149),
    [sym_true] = ACTIONS(149),
    [sym_false] = ACTIONS(149),
    [sym_number_long] = ACTIONS(149),
    [sym_number_double] = ACTIONS(149),
    [anon_sym_BSLASH] = ACTIONS(149),
    [sym_string] = ACTIONS(149),
    [anon_sym_POUND_DQUOTE] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_COLON_COLON] = ACTIONS(149),
    [anon_sym_POUND_LBRACE] = ACTIONS(149),
    [anon_sym_RBRACE] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_RBRACK] = ACTIONS(149),
    [anon_sym_SEMI] = ACTIONS(149),
    [anon_sym_POUND_] = ACTIONS(149),
    [anon_sym_LPARENcomment] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(149),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(153),
    [sym_nil] = ACTIONS(153),
    [sym_true] = ACTIONS(153),
    [sym_false] = ACTIONS(153),
    [sym_number_long] = ACTIONS(153),
    [sym_number_double] = ACTIONS(153),
    [anon_sym_BSLASH] = ACTIONS(153),
    [sym_string] = ACTIONS(153),
    [anon_sym_POUND_DQUOTE] = ACTIONS(153),
    [anon_sym_COLON] = ACTIONS(155),
    [anon_sym_COLON_COLON] = ACTIONS(153),
    [anon_sym_POUND_LBRACE] = ACTIONS(153),
    [anon_sym_RBRACE] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(153),
    [anon_sym_SEMI] = ACTIONS(153),
    [anon_sym_POUND_] = ACTIONS(153),
    [anon_sym_LPARENcomment] = ACTIONS(153),
    [anon_sym_RPAREN] = ACTIONS(153),
  },
  [37] = {
    [sym__anything] = STATE(36),
    [sym_number] = STATE(36),
    [sym_character] = STATE(36),
    [sym_regex] = STATE(36),
    [sym_keyword] = STATE(36),
    [sym_unqualified_keyword] = STATE(14),
    [sym_qualified_keyword] = STATE(14),
    [sym_set] = STATE(36),
    [sym_hash_map] = STATE(36),
    [sym_vector] = STATE(36),
    [sym_comment] = STATE(36),
    [sym_semicolon] = STATE(15),
    [sym_ignore_form] = STATE(15),
    [sym_comment_macro] = STATE(15),
    [sym_nil] = ACTIONS(71),
    [sym_true] = ACTIONS(71),
    [sym_false] = ACTIONS(71),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(75),
    [anon_sym_LPARENcomment] = ACTIONS(29),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(157),
    [sym_nil] = ACTIONS(157),
    [sym_true] = ACTIONS(157),
    [sym_false] = ACTIONS(157),
    [sym_number_long] = ACTIONS(157),
    [sym_number_double] = ACTIONS(157),
    [anon_sym_BSLASH] = ACTIONS(157),
    [sym_string] = ACTIONS(157),
    [anon_sym_POUND_DQUOTE] = ACTIONS(157),
    [anon_sym_COLON] = ACTIONS(159),
    [anon_sym_COLON_COLON] = ACTIONS(157),
    [anon_sym_POUND_LBRACE] = ACTIONS(157),
    [anon_sym_RBRACE] = ACTIONS(157),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(157),
    [anon_sym_SEMI] = ACTIONS(157),
    [anon_sym_POUND_] = ACTIONS(157),
    [anon_sym_LPARENcomment] = ACTIONS(157),
    [anon_sym_RPAREN] = ACTIONS(157),
  },
  [39] = {
    [sym__anything] = STATE(54),
    [sym_number] = STATE(54),
    [sym_character] = STATE(54),
    [sym_regex] = STATE(54),
    [sym_keyword] = STATE(54),
    [sym_unqualified_keyword] = STATE(14),
    [sym_qualified_keyword] = STATE(14),
    [sym_set] = STATE(54),
    [sym_hash_map] = STATE(54),
    [sym_vector] = STATE(54),
    [sym_comment] = STATE(54),
    [sym_semicolon] = STATE(15),
    [sym_ignore_form] = STATE(15),
    [sym_comment_macro] = STATE(15),
    [aux_sym_program_repeat1] = STATE(54),
    [sym_nil] = ACTIONS(161),
    [sym_true] = ACTIONS(161),
    [sym_false] = ACTIONS(161),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(161),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(75),
    [anon_sym_LPARENcomment] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(163),
  },
  [40] = {
    [sym__anything] = STATE(40),
    [sym_number] = STATE(40),
    [sym_character] = STATE(40),
    [sym_regex] = STATE(40),
    [sym_keyword] = STATE(40),
    [sym_unqualified_keyword] = STATE(14),
    [sym_qualified_keyword] = STATE(14),
    [sym_set] = STATE(40),
    [sym_hash_map] = STATE(40),
    [sym_vector] = STATE(40),
    [sym_comment] = STATE(40),
    [sym_semicolon] = STATE(15),
    [sym_ignore_form] = STATE(15),
    [sym_comment_macro] = STATE(15),
    [aux_sym_program_repeat1] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym_nil] = ACTIONS(167),
    [sym_true] = ACTIONS(167),
    [sym_false] = ACTIONS(167),
    [sym_number_long] = ACTIONS(170),
    [sym_number_double] = ACTIONS(170),
    [anon_sym_BSLASH] = ACTIONS(173),
    [sym_string] = ACTIONS(167),
    [anon_sym_POUND_DQUOTE] = ACTIONS(176),
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_COLON_COLON] = ACTIONS(182),
    [anon_sym_POUND_LBRACE] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(188),
    [anon_sym_LBRACK] = ACTIONS(191),
    [anon_sym_SEMI] = ACTIONS(194),
    [anon_sym_POUND_] = ACTIONS(197),
    [anon_sym_LPARENcomment] = ACTIONS(200),
  },
  [41] = {
    [sym__hex_char] = ACTIONS(203),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [sym_nil] = ACTIONS(205),
    [sym_true] = ACTIONS(205),
    [sym_false] = ACTIONS(205),
    [sym_number_long] = ACTIONS(205),
    [sym_number_double] = ACTIONS(205),
    [anon_sym_BSLASH] = ACTIONS(205),
    [sym_string] = ACTIONS(205),
    [anon_sym_POUND_DQUOTE] = ACTIONS(205),
    [anon_sym_COLON] = ACTIONS(207),
    [anon_sym_COLON_COLON] = ACTIONS(205),
    [anon_sym_POUND_LBRACE] = ACTIONS(205),
    [anon_sym_RBRACE] = ACTIONS(205),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(205),
    [anon_sym_RBRACK] = ACTIONS(205),
    [anon_sym_SEMI] = ACTIONS(205),
    [anon_sym_POUND_] = ACTIONS(205),
    [anon_sym_LPARENcomment] = ACTIONS(205),
    [anon_sym_RPAREN] = ACTIONS(205),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [sym_nil] = ACTIONS(209),
    [sym_true] = ACTIONS(209),
    [sym_false] = ACTIONS(209),
    [sym_number_long] = ACTIONS(209),
    [sym_number_double] = ACTIONS(209),
    [anon_sym_BSLASH] = ACTIONS(209),
    [sym_string] = ACTIONS(209),
    [anon_sym_POUND_DQUOTE] = ACTIONS(209),
    [anon_sym_COLON] = ACTIONS(211),
    [anon_sym_COLON_COLON] = ACTIONS(209),
    [anon_sym_POUND_LBRACE] = ACTIONS(209),
    [anon_sym_RBRACE] = ACTIONS(209),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(209),
    [anon_sym_RBRACK] = ACTIONS(209),
    [anon_sym_SEMI] = ACTIONS(209),
    [anon_sym_POUND_] = ACTIONS(209),
    [anon_sym_LPARENcomment] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(209),
  },
  [44] = {
    [aux_sym_regex_repeat1] = STATE(44),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(213),
    [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = ACTIONS(216),
    [anon_sym_DQUOTE] = ACTIONS(219),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(221),
    [sym_nil] = ACTIONS(221),
    [sym_true] = ACTIONS(221),
    [sym_false] = ACTIONS(221),
    [sym_number_long] = ACTIONS(221),
    [sym_number_double] = ACTIONS(221),
    [anon_sym_BSLASH] = ACTIONS(221),
    [sym_string] = ACTIONS(221),
    [anon_sym_POUND_DQUOTE] = ACTIONS(221),
    [anon_sym_COLON] = ACTIONS(223),
    [anon_sym_COLON_COLON] = ACTIONS(221),
    [anon_sym_POUND_LBRACE] = ACTIONS(221),
    [anon_sym_RBRACE] = ACTIONS(221),
    [anon_sym_LBRACE] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_RBRACK] = ACTIONS(221),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_POUND_] = ACTIONS(221),
    [anon_sym_LPARENcomment] = ACTIONS(221),
    [anon_sym_RPAREN] = ACTIONS(221),
  },
  [46] = {
    [sym__anything] = STATE(46),
    [sym_number] = STATE(46),
    [sym_character] = STATE(46),
    [sym_regex] = STATE(46),
    [sym_keyword] = STATE(46),
    [sym_unqualified_keyword] = STATE(14),
    [sym_qualified_keyword] = STATE(14),
    [sym_set] = STATE(46),
    [sym_hash_map] = STATE(46),
    [sym_vector] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_semicolon] = STATE(15),
    [sym_ignore_form] = STATE(15),
    [sym_comment_macro] = STATE(15),
    [aux_sym_program_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(225),
    [sym_true] = ACTIONS(225),
    [sym_false] = ACTIONS(225),
    [sym_number_long] = ACTIONS(170),
    [sym_number_double] = ACTIONS(170),
    [anon_sym_BSLASH] = ACTIONS(173),
    [sym_string] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(176),
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_COLON_COLON] = ACTIONS(182),
    [anon_sym_POUND_LBRACE] = ACTIONS(185),
    [anon_sym_RBRACE] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(188),
    [anon_sym_LBRACK] = ACTIONS(191),
    [anon_sym_SEMI] = ACTIONS(194),
    [anon_sym_POUND_] = ACTIONS(228),
    [anon_sym_LPARENcomment] = ACTIONS(200),
  },
  [47] = {
    [sym_nil] = ACTIONS(231),
    [sym_true] = ACTIONS(231),
    [sym_false] = ACTIONS(231),
    [sym_number_long] = ACTIONS(231),
    [sym_number_double] = ACTIONS(231),
    [anon_sym_BSLASH] = ACTIONS(231),
    [sym_string] = ACTIONS(231),
    [anon_sym_POUND_DQUOTE] = ACTIONS(231),
    [anon_sym_COLON] = ACTIONS(233),
    [anon_sym_COLON_COLON] = ACTIONS(231),
    [anon_sym_POUND_LBRACE] = ACTIONS(231),
    [anon_sym_RBRACE] = ACTIONS(231),
    [anon_sym_LBRACE] = ACTIONS(231),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_SEMI] = ACTIONS(231),
    [anon_sym_POUND_] = ACTIONS(231),
    [anon_sym_LPARENcomment] = ACTIONS(231),
  },
  [48] = {
    [sym_nil] = ACTIONS(235),
    [sym_true] = ACTIONS(235),
    [sym_false] = ACTIONS(235),
    [sym_number_long] = ACTIONS(235),
    [sym_number_double] = ACTIONS(235),
    [anon_sym_BSLASH] = ACTIONS(235),
    [sym_string] = ACTIONS(235),
    [anon_sym_POUND_DQUOTE] = ACTIONS(235),
    [anon_sym_COLON] = ACTIONS(237),
    [anon_sym_COLON_COLON] = ACTIONS(235),
    [anon_sym_POUND_LBRACE] = ACTIONS(235),
    [anon_sym_RBRACE] = ACTIONS(235),
    [anon_sym_LBRACE] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(235),
    [anon_sym_SEMI] = ACTIONS(235),
    [anon_sym_POUND_] = ACTIONS(235),
    [anon_sym_LPARENcomment] = ACTIONS(235),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(239),
    [sym_nil] = ACTIONS(239),
    [sym_true] = ACTIONS(239),
    [sym_false] = ACTIONS(239),
    [sym_number_long] = ACTIONS(239),
    [sym_number_double] = ACTIONS(239),
    [anon_sym_BSLASH] = ACTIONS(239),
    [sym_string] = ACTIONS(239),
    [anon_sym_POUND_DQUOTE] = ACTIONS(239),
    [anon_sym_COLON] = ACTIONS(241),
    [anon_sym_COLON_COLON] = ACTIONS(239),
    [anon_sym_POUND_LBRACE] = ACTIONS(239),
    [anon_sym_RBRACE] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(239),
    [anon_sym_RBRACK] = ACTIONS(239),
    [anon_sym_SEMI] = ACTIONS(239),
    [anon_sym_POUND_] = ACTIONS(239),
    [anon_sym_LPARENcomment] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(239),
  },
  [50] = {
    [sym__anything] = STATE(29),
    [sym_number] = STATE(29),
    [sym_character] = STATE(29),
    [sym_regex] = STATE(29),
    [sym_keyword] = STATE(29),
    [sym_unqualified_keyword] = STATE(14),
    [sym_qualified_keyword] = STATE(14),
    [sym_set] = STATE(29),
    [sym_hash_map] = STATE(29),
    [sym_hash_map_kv_pair] = STATE(50),
    [sym_hash_map_key] = STATE(30),
    [sym_vector] = STATE(29),
    [sym_comment] = STATE(29),
    [sym_semicolon] = STATE(15),
    [sym_ignore_form] = STATE(15),
    [sym_comment_macro] = STATE(15),
    [aux_sym_hash_map_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(243),
    [sym_true] = ACTIONS(243),
    [sym_false] = ACTIONS(243),
    [sym_number_long] = ACTIONS(246),
    [sym_number_double] = ACTIONS(246),
    [anon_sym_BSLASH] = ACTIONS(249),
    [sym_string] = ACTIONS(243),
    [anon_sym_POUND_DQUOTE] = ACTIONS(252),
    [anon_sym_COLON] = ACTIONS(255),
    [anon_sym_COLON_COLON] = ACTIONS(258),
    [anon_sym_POUND_LBRACE] = ACTIONS(261),
    [anon_sym_RBRACE] = ACTIONS(264),
    [anon_sym_LBRACE] = ACTIONS(266),
    [anon_sym_LBRACK] = ACTIONS(269),
    [anon_sym_SEMI] = ACTIONS(272),
    [anon_sym_POUND_] = ACTIONS(275),
    [anon_sym_LPARENcomment] = ACTIONS(278),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(281),
    [sym_nil] = ACTIONS(281),
    [sym_true] = ACTIONS(281),
    [sym_false] = ACTIONS(281),
    [sym_number_long] = ACTIONS(281),
    [sym_number_double] = ACTIONS(281),
    [anon_sym_BSLASH] = ACTIONS(281),
    [sym_string] = ACTIONS(281),
    [anon_sym_POUND_DQUOTE] = ACTIONS(281),
    [anon_sym_COLON] = ACTIONS(283),
    [anon_sym_COLON_COLON] = ACTIONS(281),
    [anon_sym_POUND_LBRACE] = ACTIONS(281),
    [anon_sym_RBRACE] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(281),
    [anon_sym_LBRACK] = ACTIONS(281),
    [anon_sym_RBRACK] = ACTIONS(281),
    [anon_sym_SEMI] = ACTIONS(281),
    [anon_sym_POUND_] = ACTIONS(281),
    [anon_sym_LPARENcomment] = ACTIONS(281),
    [anon_sym_RPAREN] = ACTIONS(281),
  },
  [52] = {
    [sym__anything] = STATE(52),
    [sym_number] = STATE(52),
    [sym_character] = STATE(52),
    [sym_regex] = STATE(52),
    [sym_keyword] = STATE(52),
    [sym_unqualified_keyword] = STATE(14),
    [sym_qualified_keyword] = STATE(14),
    [sym_set] = STATE(52),
    [sym_hash_map] = STATE(52),
    [sym_vector] = STATE(52),
    [sym_comment] = STATE(52),
    [sym_semicolon] = STATE(15),
    [sym_ignore_form] = STATE(15),
    [sym_comment_macro] = STATE(15),
    [aux_sym_program_repeat1] = STATE(52),
    [sym_nil] = ACTIONS(285),
    [sym_true] = ACTIONS(285),
    [sym_false] = ACTIONS(285),
    [sym_number_long] = ACTIONS(170),
    [sym_number_double] = ACTIONS(170),
    [anon_sym_BSLASH] = ACTIONS(173),
    [sym_string] = ACTIONS(285),
    [anon_sym_POUND_DQUOTE] = ACTIONS(176),
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_COLON_COLON] = ACTIONS(182),
    [anon_sym_POUND_LBRACE] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(188),
    [anon_sym_LBRACK] = ACTIONS(191),
    [anon_sym_RBRACK] = ACTIONS(165),
    [anon_sym_SEMI] = ACTIONS(194),
    [anon_sym_POUND_] = ACTIONS(288),
    [anon_sym_LPARENcomment] = ACTIONS(200),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(291),
    [sym_nil] = ACTIONS(291),
    [sym_true] = ACTIONS(291),
    [sym_false] = ACTIONS(291),
    [sym_number_long] = ACTIONS(291),
    [sym_number_double] = ACTIONS(291),
    [anon_sym_BSLASH] = ACTIONS(291),
    [sym_string] = ACTIONS(291),
    [anon_sym_POUND_DQUOTE] = ACTIONS(291),
    [anon_sym_COLON] = ACTIONS(293),
    [anon_sym_COLON_COLON] = ACTIONS(291),
    [anon_sym_POUND_LBRACE] = ACTIONS(291),
    [anon_sym_RBRACE] = ACTIONS(291),
    [anon_sym_LBRACE] = ACTIONS(291),
    [anon_sym_LBRACK] = ACTIONS(291),
    [anon_sym_RBRACK] = ACTIONS(291),
    [anon_sym_SEMI] = ACTIONS(291),
    [anon_sym_POUND_] = ACTIONS(291),
    [anon_sym_LPARENcomment] = ACTIONS(291),
    [anon_sym_RPAREN] = ACTIONS(291),
  },
  [54] = {
    [sym__anything] = STATE(54),
    [sym_number] = STATE(54),
    [sym_character] = STATE(54),
    [sym_regex] = STATE(54),
    [sym_keyword] = STATE(54),
    [sym_unqualified_keyword] = STATE(14),
    [sym_qualified_keyword] = STATE(14),
    [sym_set] = STATE(54),
    [sym_hash_map] = STATE(54),
    [sym_vector] = STATE(54),
    [sym_comment] = STATE(54),
    [sym_semicolon] = STATE(15),
    [sym_ignore_form] = STATE(15),
    [sym_comment_macro] = STATE(15),
    [aux_sym_program_repeat1] = STATE(54),
    [sym_nil] = ACTIONS(295),
    [sym_true] = ACTIONS(295),
    [sym_false] = ACTIONS(295),
    [sym_number_long] = ACTIONS(170),
    [sym_number_double] = ACTIONS(170),
    [anon_sym_BSLASH] = ACTIONS(173),
    [sym_string] = ACTIONS(295),
    [anon_sym_POUND_DQUOTE] = ACTIONS(176),
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_COLON_COLON] = ACTIONS(182),
    [anon_sym_POUND_LBRACE] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(188),
    [anon_sym_LBRACK] = ACTIONS(191),
    [anon_sym_SEMI] = ACTIONS(194),
    [anon_sym_POUND_] = ACTIONS(298),
    [anon_sym_LPARENcomment] = ACTIONS(200),
    [anon_sym_RPAREN] = ACTIONS(165),
  },
  [55] = {
    [sym__hex_char] = ACTIONS(301),
  },
  [56] = {
    [sym__hex_char] = ACTIONS(303),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(305),
    [sym_nil] = ACTIONS(305),
    [sym_true] = ACTIONS(305),
    [sym_false] = ACTIONS(305),
    [sym_number_long] = ACTIONS(305),
    [sym_number_double] = ACTIONS(305),
    [anon_sym_BSLASH] = ACTIONS(305),
    [sym_string] = ACTIONS(305),
    [anon_sym_POUND_DQUOTE] = ACTIONS(305),
    [anon_sym_COLON] = ACTIONS(307),
    [anon_sym_COLON_COLON] = ACTIONS(305),
    [anon_sym_POUND_LBRACE] = ACTIONS(305),
    [anon_sym_RBRACE] = ACTIONS(305),
    [anon_sym_LBRACE] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(305),
    [anon_sym_RBRACK] = ACTIONS(305),
    [anon_sym_SEMI] = ACTIONS(305),
    [anon_sym_POUND_] = ACTIONS(305),
    [anon_sym_LPARENcomment] = ACTIONS(305),
    [anon_sym_RPAREN] = ACTIONS(305),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(16),
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
  [29] = {.count = 1, .reusable = true}, SHIFT(12),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_number, 1),
  [33] = {.count = 1, .reusable = false}, REDUCE(sym_number, 1),
  [35] = {.count = 1, .reusable = false}, SHIFT(17),
  [37] = {.count = 1, .reusable = false}, SHIFT(18),
  [39] = {.count = 1, .reusable = false}, SHIFT(19),
  [41] = {.count = 1, .reusable = true}, SHIFT(21),
  [43] = {.count = 1, .reusable = false}, SHIFT(21),
  [45] = {.count = 1, .reusable = false}, SHIFT(20),
  [47] = {.count = 1, .reusable = true}, SHIFT(22),
  [49] = {.count = 1, .reusable = true}, SHIFT(23),
  [51] = {.count = 1, .reusable = true}, SHIFT(26),
  [53] = {.count = 1, .reusable = true}, SHIFT(24),
  [55] = {.count = 1, .reusable = true}, SHIFT(25),
  [57] = {.count = 1, .reusable = true}, SHIFT(29),
  [59] = {.count = 1, .reusable = true}, SHIFT(27),
  [61] = {.count = 1, .reusable = true}, SHIFT(28),
  [63] = {.count = 1, .reusable = true}, SHIFT(34),
  [65] = {.count = 1, .reusable = true}, SHIFT(32),
  [67] = {.count = 1, .reusable = true}, SHIFT(33),
  [69] = {.count = 1, .reusable = false}, SHIFT(35),
  [71] = {.count = 1, .reusable = true}, SHIFT(36),
  [73] = {.count = 1, .reusable = true}, SHIFT(39),
  [75] = {.count = 1, .reusable = true}, SHIFT(37),
  [77] = {.count = 1, .reusable = true}, SHIFT(38),
  [79] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_keyword, 1),
  [83] = {.count = 1, .reusable = false}, REDUCE(sym_keyword, 1),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [87] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 1),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [91] = {.count = 1, .reusable = true}, SHIFT(40),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_character, 2),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym_character, 2),
  [97] = {.count = 1, .reusable = true}, SHIFT(41),
  [99] = {.count = 1, .reusable = true}, SHIFT(42),
  [101] = {.count = 1, .reusable = false}, SHIFT(42),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_regex, 2),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym_regex, 2),
  [107] = {.count = 1, .reusable = true}, SHIFT(44),
  [109] = {.count = 1, .reusable = false}, SHIFT(44),
  [111] = {.count = 1, .reusable = false}, SHIFT(43),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_unqualified_keyword, 2),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_unqualified_keyword, 2),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_keyword, 2),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_keyword, 2),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_set, 2),
  [123] = {.count = 1, .reusable = false}, REDUCE(sym_set, 2),
  [125] = {.count = 1, .reusable = true}, SHIFT(46),
  [127] = {.count = 1, .reusable = true}, SHIFT(45),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map, 2),
  [131] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map, 2),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map_key, 1),
  [135] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map_key, 1),
  [137] = {.count = 1, .reusable = true}, SHIFT(47),
  [139] = {.count = 1, .reusable = true}, SHIFT(49),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_vector, 2),
  [143] = {.count = 1, .reusable = false}, REDUCE(sym_vector, 2),
  [145] = {.count = 1, .reusable = true}, SHIFT(52),
  [147] = {.count = 1, .reusable = true}, SHIFT(51),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_semicolon, 2),
  [151] = {.count = 1, .reusable = false}, REDUCE(sym_semicolon, 2),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_ignore_form, 2),
  [155] = {.count = 1, .reusable = false}, REDUCE(sym_ignore_form, 2),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_comment_macro, 2),
  [159] = {.count = 1, .reusable = false}, REDUCE(sym_comment_macro, 2),
  [161] = {.count = 1, .reusable = true}, SHIFT(54),
  [163] = {.count = 1, .reusable = true}, SHIFT(53),
  [165] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [167] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(40),
  [170] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [173] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [176] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [179] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [182] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [185] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [188] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [191] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [194] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [197] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [200] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [203] = {.count = 1, .reusable = true}, SHIFT(55),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym__octal_char, 2),
  [207] = {.count = 1, .reusable = false}, REDUCE(sym__octal_char, 2),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_regex, 3),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym_regex, 3),
  [213] = {.count = 2, .reusable = true}, REDUCE(aux_sym_regex_repeat1, 2), SHIFT_REPEAT(44),
  [216] = {.count = 2, .reusable = false}, REDUCE(aux_sym_regex_repeat1, 2), SHIFT_REPEAT(44),
  [219] = {.count = 1, .reusable = false}, REDUCE(aux_sym_regex_repeat1, 2),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_set, 3),
  [223] = {.count = 1, .reusable = false}, REDUCE(sym_set, 3),
  [225] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(46),
  [228] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(25),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map_value, 1),
  [233] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map_value, 1),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map_kv_pair, 2),
  [237] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map_kv_pair, 2),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map, 3),
  [241] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map, 3),
  [243] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(29),
  [246] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(2),
  [249] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(3),
  [252] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(4),
  [255] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(5),
  [258] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(6),
  [261] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(7),
  [264] = {.count = 1, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2),
  [266] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(8),
  [269] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(9),
  [272] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(10),
  [275] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(28),
  [278] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(12),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_vector, 3),
  [283] = {.count = 1, .reusable = false}, REDUCE(sym_vector, 3),
  [285] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(52),
  [288] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(33),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_comment_macro, 3),
  [293] = {.count = 1, .reusable = false}, REDUCE(sym_comment_macro, 3),
  [295] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(54),
  [298] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(37),
  [301] = {.count = 1, .reusable = true}, SHIFT(56),
  [303] = {.count = 1, .reusable = true}, SHIFT(57),
  [305] = {.count = 1, .reusable = true}, REDUCE(sym__unicode_char, 5),
  [307] = {.count = 1, .reusable = false}, REDUCE(sym__unicode_char, 5),
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
