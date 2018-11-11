#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 92
#define SYMBOL_COUNT 77
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
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
  anon_sym_DQUOTE = 20,
  anon_sym_BSLASH_DQUOTE = 21,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH = 22,
  anon_sym_POUND_DQUOTE = 23,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH = 24,
  anon_sym_SQUOTE = 25,
  anon_sym_LPARENquote = 26,
  anon_sym_RPAREN = 27,
  anon_sym_COLON = 28,
  anon_sym_COLON_COLON = 29,
  sym__keyword_chars = 30,
  anon_sym_LPAREN = 31,
  anon_sym_LBRACK = 32,
  anon_sym_RBRACK = 33,
  anon_sym_LBRACE = 34,
  anon_sym_RBRACE = 35,
  anon_sym_POUND_COLON_COLON_LBRACE = 36,
  anon_sym_POUND = 37,
  sym__symbol_chars = 38,
  anon_sym_POUND_LBRACE = 39,
  anon_sym_SEMI = 40,
  aux_sym_SLASH_DOT_STAR_SLASH = 41,
  anon_sym_POUND_BANG = 42,
  anon_sym_POUND_ = 43,
  anon_sym_LPARENcomment = 44,
  sym_program = 45,
  sym__anything = 46,
  sym_boolean = 47,
  sym_number = 48,
  sym_character = 49,
  sym__special_char = 50,
  sym__unicode_char = 51,
  sym__octal_char = 52,
  sym__octal_num = 53,
  sym_string = 54,
  sym_regex = 55,
  sym_quote = 56,
  sym_keyword = 57,
  sym_unqualified_keyword = 58,
  sym_qualified_keyword = 59,
  sym_list = 60,
  sym_vector = 61,
  sym_hash_map = 62,
  sym_namespace_map = 63,
  sym_hash_map_kv_pair = 64,
  sym_hash_map_key = 65,
  sym_hash_map_value = 66,
  sym_set = 67,
  sym_comment = 68,
  sym_semicolon = 69,
  sym_shebang_line = 70,
  sym_ignore_form = 71,
  sym_comment_macro = 72,
  aux_sym_program_repeat1 = 73,
  aux_sym_string_repeat1 = 74,
  aux_sym_regex_repeat1 = 75,
  aux_sym_hash_map_repeat1 = 76,
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
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BSLASH_DQUOTE] = "\\\"",
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = "/[^\"]/",
  [anon_sym_POUND_DQUOTE] = "#\"",
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = "/[^\"\\n\\r]/",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_LPARENquote] = "(quote",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_COLON_COLON] = "::",
  [sym__keyword_chars] = "_keyword_chars",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_POUND_COLON_COLON_LBRACE] = "#::{",
  [anon_sym_POUND] = "#",
  [sym__symbol_chars] = "_symbol_chars",
  [anon_sym_POUND_LBRACE] = "#{",
  [anon_sym_SEMI] = ";",
  [aux_sym_SLASH_DOT_STAR_SLASH] = "/.*/",
  [anon_sym_POUND_BANG] = "#!",
  [anon_sym_POUND_] = "#_",
  [anon_sym_LPARENcomment] = "(comment",
  [sym_program] = "program",
  [sym__anything] = "_anything",
  [sym_boolean] = "boolean",
  [sym_number] = "number",
  [sym_character] = "character",
  [sym__special_char] = "_special_char",
  [sym__unicode_char] = "_unicode_char",
  [sym__octal_char] = "_octal_char",
  [sym__octal_num] = "_octal_num",
  [sym_string] = "string",
  [sym_regex] = "regex",
  [sym_quote] = "quote",
  [sym_keyword] = "keyword",
  [sym_unqualified_keyword] = "unqualified_keyword",
  [sym_qualified_keyword] = "qualified_keyword",
  [sym_list] = "list",
  [sym_vector] = "vector",
  [sym_hash_map] = "hash_map",
  [sym_namespace_map] = "namespace_map",
  [sym_hash_map_kv_pair] = "hash_map_kv_pair",
  [sym_hash_map_key] = "hash_map_key",
  [sym_hash_map_value] = "hash_map_value",
  [sym_set] = "set",
  [sym_comment] = "comment",
  [sym_semicolon] = "semicolon",
  [sym_shebang_line] = "shebang_line",
  [sym_ignore_form] = "ignore_form",
  [sym_comment_macro] = "comment_macro",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPARENquote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [anon_sym_LPAREN] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_COLON_COLON_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym__symbol_chars] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND_LBRACE] = {
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
  [anon_sym_POUND_BANG] = {
    .visible = true,
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
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__anything] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
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
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym_quote] = {
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
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_vector] = {
    .visible = true,
    .named = true,
  },
  [sym_hash_map] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_map] = {
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
  [sym_set] = {
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
  [sym_shebang_line] = {
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
  [aux_sym_string_repeat1] = {
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
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ')')
        ADVANCE(25);
      if (lookahead == ',')
        SKIP(0);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == ':')
        ADVANCE(34);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '[')
        ADVANCE(37);
      if (lookahead == '\\')
        ADVANCE(38);
      if (lookahead == ']')
        ADVANCE(39);
      if (lookahead == 'f')
        ADVANCE(40);
      if (lookahead == 'n')
        ADVANCE(48);
      if (lookahead == 'o')
        ADVANCE(57);
      if (lookahead == 'r')
        ADVANCE(58);
      if (lookahead == 's')
        ADVANCE(64);
      if (lookahead == 't')
        ADVANCE(69);
      if (lookahead == 'u')
        ADVANCE(75);
      if (lookahead == '{')
        ADVANCE(76);
      if (lookahead == '}')
        ADVANCE(77);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(78);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e'))
        ADVANCE(84);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!')
        ADVANCE(4);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == '_')
        ADVANCE(9);
      if (lookahead == '{')
        ADVANCE(10);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_POUND_DQUOTE);
      END_STATE();
    case 6:
      if (lookahead == ':')
        ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '{')
        ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_POUND_COLON_COLON_LBRACE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_POUND_);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == 'c')
        ADVANCE(13);
      if (lookahead == 'q')
        ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'o')
        ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'm')
        ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'm')
        ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'e')
        ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'n')
        ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 't')
        ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LPARENcomment);
      END_STATE();
    case 20:
      if (lookahead == 'u')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'o')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 't')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'e')
        ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LPARENquote);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_number_double);
      if (lookahead == '_')
        ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(29);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '_')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == '+')
        ADVANCE(30);
      if (lookahead == '-')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(31);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_number_double);
      if (lookahead == '_')
        ADVANCE(32);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '_')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(31);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_number_double);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__hex_char);
      if (lookahead == 'o')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'r')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'm')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'f')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'e')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'e')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'd')
        ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_formfeed);
      END_STATE();
    case 48:
      if (lookahead == 'e')
        ADVANCE(49);
      if (lookahead == 'i')
        ADVANCE(55);
      END_STATE();
    case 49:
      if (lookahead == 'w')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'l')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'i')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'n')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'e')
        ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_newline);
      END_STATE();
    case 55:
      if (lookahead == 'l')
        ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 58:
      if (lookahead == 'e')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 't')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'u')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'r')
        ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'n')
        ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 64:
      if (lookahead == 'p')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 'a')
        ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'c')
        ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 'e')
        ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_space);
      END_STATE();
    case 69:
      if (lookahead == 'a')
        ADVANCE(70);
      if (lookahead == 'r')
        ADVANCE(72);
      END_STATE();
    case 70:
      if (lookahead == 'b')
        ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_tab);
      END_STATE();
    case 72:
      if (lookahead == 'u')
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 'e')
        ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_number_long);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_number_long);
      if (lookahead == '.')
        ADVANCE(81);
      if (lookahead == '_')
        ADVANCE(82);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(29);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_number_double);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(29);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      END_STATE();
    case 82:
      if (lookahead == '_')
        ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == '.')
        ADVANCE(81);
      if (lookahead == '_')
        ADVANCE(82);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(29);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__hex_char);
      END_STATE();
    case 85:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ',')
        SKIP(85);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == ':')
        ADVANCE(34);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '[')
        ADVANCE(37);
      if (lookahead == '\\')
        ADVANCE(38);
      if (lookahead == 'f')
        ADVANCE(86);
      if (lookahead == 'n')
        ADVANCE(91);
      if (lookahead == 't')
        ADVANCE(92);
      if (lookahead == '{')
        ADVANCE(76);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(85);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(80);
      END_STATE();
    case 86:
      if (lookahead == 'a')
        ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == 'l')
        ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == 's')
        ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == 'e')
        ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 91:
      if (lookahead == 'i')
        ADVANCE(55);
      END_STATE();
    case 92:
      if (lookahead == 'r')
        ADVANCE(72);
      END_STATE();
    case 93:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ')')
        ADVANCE(25);
      if (lookahead == ',')
        SKIP(93);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == ':')
        ADVANCE(34);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '[')
        ADVANCE(37);
      if (lookahead == '\\')
        ADVANCE(38);
      if (lookahead == ']')
        ADVANCE(39);
      if (lookahead == 'f')
        ADVANCE(86);
      if (lookahead == 'n')
        ADVANCE(91);
      if (lookahead == 't')
        ADVANCE(92);
      if (lookahead == '{')
        ADVANCE(76);
      if (lookahead == '}')
        ADVANCE(77);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(93);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(80);
      END_STATE();
    case 94:
      if (lookahead == '\n')
        SKIP(94);
      if (lookahead == ',')
        ADVANCE(95);
      if (lookahead == 'b')
        ADVANCE(96);
      if (lookahead == 'f')
        ADVANCE(105);
      if (lookahead == 'n')
        ADVANCE(106);
      if (lookahead == 'o')
        ADVANCE(57);
      if (lookahead == 'r')
        ADVANCE(107);
      if (lookahead == 's')
        ADVANCE(108);
      if (lookahead == 't')
        ADVANCE(109);
      if (lookahead == 'u')
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__normal_char);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'a')
        ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 'c')
        ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == 'k')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 's')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'p')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 'a')
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 'c')
        ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'e')
        ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_backspace);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'o')
        ADVANCE(41);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'e')
        ADVANCE(49);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'e')
        ADVANCE(59);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'p')
        ADVANCE(65);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'a')
        ADVANCE(70);
      END_STATE();
    case 110:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(111);
      if (lookahead == '\\')
        ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(111);
      if (lookahead != 0)
        ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 114:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(115);
      if (lookahead == '\\')
        ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(115);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(114);
      if (lookahead != 0)
        ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(113);
      END_STATE();
    case 117:
      if (lookahead == ',')
        SKIP(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(117);
      if (lookahead == '!' ||
          ('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__keyword_chars);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 119:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ')')
        ADVANCE(25);
      if (lookahead == ',')
        SKIP(119);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == ':')
        ADVANCE(34);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '[')
        ADVANCE(37);
      if (lookahead == '\\')
        ADVANCE(38);
      if (lookahead == 'f')
        ADVANCE(86);
      if (lookahead == 'n')
        ADVANCE(91);
      if (lookahead == 't')
        ADVANCE(92);
      if (lookahead == '{')
        ADVANCE(76);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(119);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(80);
      END_STATE();
    case 120:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ',')
        SKIP(120);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == ':')
        ADVANCE(34);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '[')
        ADVANCE(37);
      if (lookahead == '\\')
        ADVANCE(38);
      if (lookahead == ']')
        ADVANCE(39);
      if (lookahead == 'f')
        ADVANCE(86);
      if (lookahead == 'n')
        ADVANCE(91);
      if (lookahead == 't')
        ADVANCE(92);
      if (lookahead == '{')
        ADVANCE(76);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(120);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(80);
      END_STATE();
    case 121:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ',')
        SKIP(121);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == ':')
        ADVANCE(34);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '[')
        ADVANCE(37);
      if (lookahead == '\\')
        ADVANCE(38);
      if (lookahead == 'f')
        ADVANCE(86);
      if (lookahead == 'n')
        ADVANCE(91);
      if (lookahead == 't')
        ADVANCE(92);
      if (lookahead == '{')
        ADVANCE(76);
      if (lookahead == '}')
        ADVANCE(77);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(121);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(80);
      END_STATE();
    case 122:
      if (lookahead == ',')
        SKIP(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(122);
      if (lookahead == '!' ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == '\n')
        SKIP(124);
      if (lookahead == ',')
        ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(125);
      if (lookahead != 0)
        ADVANCE(126);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == ',')
        ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(126);
      END_STATE();
    case 127:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        SKIP(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(127);
      END_STATE();
    case 128:
      if (lookahead == ',')
        SKIP(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(84);
      END_STATE();
    case 129:
      if (lookahead == ',')
        SKIP(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(129);
      if (('0' <= lookahead && lookahead <= '3'))
        ADVANCE(130);
      if (('4' <= lookahead && lookahead <= '7'))
        ADVANCE(133);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 85},
  [2] = {.lex_state = 93},
  [3] = {.lex_state = 93},
  [4] = {.lex_state = 94},
  [5] = {.lex_state = 110},
  [6] = {.lex_state = 114},
  [7] = {.lex_state = 85},
  [8] = {.lex_state = 85},
  [9] = {.lex_state = 117},
  [10] = {.lex_state = 117},
  [11] = {.lex_state = 119},
  [12] = {.lex_state = 120},
  [13] = {.lex_state = 121},
  [14] = {.lex_state = 121},
  [15] = {.lex_state = 122},
  [16] = {.lex_state = 121},
  [17] = {.lex_state = 124},
  [18] = {.lex_state = 124},
  [19] = {.lex_state = 85},
  [20] = {.lex_state = 119},
  [21] = {.lex_state = 127},
  [22] = {.lex_state = 93},
  [23] = {.lex_state = 93},
  [24] = {.lex_state = 93},
  [25] = {.lex_state = 85},
  [26] = {.lex_state = 93},
  [27] = {.lex_state = 128},
  [28] = {.lex_state = 129},
  [29] = {.lex_state = 93},
  [30] = {.lex_state = 110},
  [31] = {.lex_state = 93},
  [32] = {.lex_state = 114},
  [33] = {.lex_state = 93},
  [34] = {.lex_state = 85},
  [35] = {.lex_state = 85},
  [36] = {.lex_state = 119},
  [37] = {.lex_state = 93},
  [38] = {.lex_state = 93},
  [39] = {.lex_state = 85},
  [40] = {.lex_state = 93},
  [41] = {.lex_state = 85},
  [42] = {.lex_state = 119},
  [43] = {.lex_state = 85},
  [44] = {.lex_state = 93},
  [45] = {.lex_state = 85},
  [46] = {.lex_state = 120},
  [47] = {.lex_state = 85},
  [48] = {.lex_state = 93},
  [49] = {.lex_state = 85},
  [50] = {.lex_state = 85},
  [51] = {.lex_state = 85},
  [52] = {.lex_state = 121},
  [53] = {.lex_state = 93},
  [54] = {.lex_state = 121},
  [55] = {.lex_state = 85},
  [56] = {.lex_state = 85},
  [57] = {.lex_state = 93},
  [58] = {.lex_state = 85},
  [59] = {.lex_state = 121},
  [60] = {.lex_state = 93},
  [61] = {.lex_state = 93},
  [62] = {.lex_state = 93},
  [63] = {.lex_state = 93},
  [64] = {.lex_state = 119},
  [65] = {.lex_state = 85},
  [66] = {.lex_state = 128},
  [67] = {.lex_state = 93},
  [68] = {.lex_state = 93},
  [69] = {.lex_state = 110},
  [70] = {.lex_state = 93},
  [71] = {.lex_state = 114},
  [72] = {.lex_state = 93},
  [73] = {.lex_state = 93},
  [74] = {.lex_state = 119},
  [75] = {.lex_state = 93},
  [76] = {.lex_state = 120},
  [77] = {.lex_state = 121},
  [78] = {.lex_state = 121},
  [79] = {.lex_state = 93},
  [80] = {.lex_state = 121},
  [81] = {.lex_state = 93},
  [82] = {.lex_state = 121},
  [83] = {.lex_state = 93},
  [84] = {.lex_state = 121},
  [85] = {.lex_state = 93},
  [86] = {.lex_state = 128},
  [87] = {.lex_state = 93},
  [88] = {.lex_state = 121},
  [89] = {.lex_state = 128},
  [90] = {.lex_state = 93},
  [91] = {.lex_state = 93},
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
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_LPARENquote] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_POUND_LBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_POUND_BANG] = ACTIONS(1),
    [anon_sym_POUND_] = ACTIONS(1),
    [anon_sym_LPARENcomment] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(21),
    [sym__anything] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_number] = STATE(25),
    [sym_character] = STATE(25),
    [sym_string] = STATE(25),
    [sym_regex] = STATE(25),
    [sym_quote] = STATE(25),
    [sym_keyword] = STATE(25),
    [sym_unqualified_keyword] = STATE(22),
    [sym_qualified_keyword] = STATE(22),
    [sym_list] = STATE(25),
    [sym_vector] = STATE(25),
    [sym_hash_map] = STATE(25),
    [sym_namespace_map] = STATE(23),
    [sym_set] = STATE(25),
    [sym_comment] = STATE(25),
    [sym_semicolon] = STATE(24),
    [sym_shebang_line] = STATE(24),
    [sym_ignore_form] = STATE(24),
    [sym_comment_macro] = STATE(24),
    [aux_sym_program_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_nil] = ACTIONS(7),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_POUND_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_POUND_BANG] = ACTIONS(41),
    [anon_sym_POUND_] = ACTIONS(43),
    [anon_sym_LPARENcomment] = ACTIONS(45),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_nil] = ACTIONS(47),
    [sym_true] = ACTIONS(47),
    [sym_false] = ACTIONS(47),
    [sym_number_long] = ACTIONS(47),
    [sym_number_double] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_POUND_DQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_LPARENquote] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_COLON_COLON] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(47),
    [anon_sym_POUND] = ACTIONS(49),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(47),
    [anon_sym_POUND_] = ACTIONS(47),
    [anon_sym_LPARENcomment] = ACTIONS(47),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_nil] = ACTIONS(51),
    [sym_true] = ACTIONS(51),
    [sym_false] = ACTIONS(51),
    [sym_number_long] = ACTIONS(51),
    [sym_number_double] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_POUND_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [anon_sym_LPARENquote] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(51),
    [anon_sym_COLON] = ACTIONS(53),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_RBRACK] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(51),
    [anon_sym_POUND] = ACTIONS(53),
    [anon_sym_POUND_LBRACE] = ACTIONS(51),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(51),
    [anon_sym_LPARENcomment] = ACTIONS(51),
  },
  [4] = {
    [sym__special_char] = STATE(26),
    [sym__unicode_char] = STATE(26),
    [sym__octal_char] = STATE(26),
    [sym__normal_char] = ACTIONS(55),
    [anon_sym_newline] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(55),
    [anon_sym_tab] = ACTIONS(55),
    [anon_sym_formfeed] = ACTIONS(55),
    [anon_sym_backspace] = ACTIONS(55),
    [anon_sym_return] = ACTIONS(55),
    [anon_sym_u] = ACTIONS(57),
    [anon_sym_o] = ACTIONS(59),
  },
  [5] = {
    [aux_sym_string_repeat1] = STATE(30),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(63),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(63),
  },
  [6] = {
    [aux_sym_regex_repeat1] = STATE(32),
    [anon_sym_DQUOTE] = ACTIONS(65),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(67),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(67),
  },
  [7] = {
    [sym__anything] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_number] = STATE(33),
    [sym_character] = STATE(33),
    [sym_string] = STATE(33),
    [sym_regex] = STATE(33),
    [sym_quote] = STATE(33),
    [sym_keyword] = STATE(33),
    [sym_unqualified_keyword] = STATE(22),
    [sym_qualified_keyword] = STATE(22),
    [sym_list] = STATE(33),
    [sym_vector] = STATE(33),
    [sym_hash_map] = STATE(33),
    [sym_namespace_map] = STATE(23),
    [sym_set] = STATE(33),
    [sym_comment] = STATE(33),
    [sym_semicolon] = STATE(24),
    [sym_shebang_line] = STATE(24),
    [sym_ignore_form] = STATE(24),
    [sym_comment_macro] = STATE(24),
    [sym_nil] = ACTIONS(69),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_POUND_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_POUND_BANG] = ACTIONS(41),
    [anon_sym_POUND_] = ACTIONS(43),
    [anon_sym_LPARENcomment] = ACTIONS(45),
  },
  [8] = {
    [sym__anything] = STATE(36),
    [sym_boolean] = STATE(36),
    [sym_number] = STATE(36),
    [sym_character] = STATE(36),
    [sym_string] = STATE(36),
    [sym_regex] = STATE(36),
    [sym_quote] = STATE(36),
    [sym_keyword] = STATE(36),
    [sym_unqualified_keyword] = STATE(22),
    [sym_qualified_keyword] = STATE(22),
    [sym_list] = STATE(36),
    [sym_vector] = STATE(36),
    [sym_hash_map] = STATE(36),
    [sym_namespace_map] = STATE(23),
    [sym_set] = STATE(36),
    [sym_comment] = STATE(36),
    [sym_semicolon] = STATE(24),
    [sym_shebang_line] = STATE(24),
    [sym_ignore_form] = STATE(24),
    [sym_comment_macro] = STATE(24),
    [sym_nil] = ACTIONS(71),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(73),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_POUND_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_POUND_BANG] = ACTIONS(41),
    [anon_sym_POUND_] = ACTIONS(75),
    [anon_sym_LPARENcomment] = ACTIONS(45),
  },
  [9] = {
    [sym__keyword_chars] = ACTIONS(77),
  },
  [10] = {
    [sym__keyword_chars] = ACTIONS(79),
  },
  [11] = {
    [sym__anything] = STATE(42),
    [sym_boolean] = STATE(42),
    [sym_number] = STATE(42),
    [sym_character] = STATE(42),
    [sym_string] = STATE(42),
    [sym_regex] = STATE(42),
    [sym_quote] = STATE(42),
    [sym_keyword] = STATE(42),
    [sym_unqualified_keyword] = STATE(22),
    [sym_qualified_keyword] = STATE(22),
    [sym_list] = STATE(42),
    [sym_vector] = STATE(42),
    [sym_hash_map] = STATE(42),
    [sym_namespace_map] = STATE(23),
    [sym_set] = STATE(42),
    [sym_comment] = STATE(42),
    [sym_semicolon] = STATE(24),
    [sym_shebang_line] = STATE(24),
    [sym_ignore_form] = STATE(24),
    [sym_comment_macro] = STATE(24),
    [aux_sym_program_repeat1] = STATE(42),
    [sym_nil] = ACTIONS(81),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_POUND_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_POUND_BANG] = ACTIONS(41),
    [anon_sym_POUND_] = ACTIONS(87),
    [anon_sym_LPARENcomment] = ACTIONS(45),
  },
  [12] = {
    [sym__anything] = STATE(46),
    [sym_boolean] = STATE(46),
    [sym_number] = STATE(46),
    [sym_character] = STATE(46),
    [sym_string] = STATE(46),
    [sym_regex] = STATE(46),
    [sym_quote] = STATE(46),
    [sym_keyword] = STATE(46),
    [sym_unqualified_keyword] = STATE(22),
    [sym_qualified_keyword] = STATE(22),
    [sym_list] = STATE(46),
    [sym_vector] = STATE(46),
    [sym_hash_map] = STATE(46),
    [sym_namespace_map] = STATE(23),
    [sym_set] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_semicolon] = STATE(24),
    [sym_shebang_line] = STATE(24),
    [sym_ignore_form] = STATE(24),
    [sym_comment_macro] = STATE(24),
    [aux_sym_program_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(89),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_POUND_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_POUND_BANG] = ACTIONS(41),
    [anon_sym_POUND_] = ACTIONS(95),
    [anon_sym_LPARENcomment] = ACTIONS(45),
  },
  [13] = {
    [sym__anything] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_number] = STATE(50),
    [sym_character] = STATE(50),
    [sym_string] = STATE(50),
    [sym_regex] = STATE(50),
    [sym_quote] = STATE(50),
    [sym_keyword] = STATE(50),
    [sym_unqualified_keyword] = STATE(22),
    [sym_qualified_keyword] = STATE(22),
    [sym_list] = STATE(50),
    [sym_vector] = STATE(50),
    [sym_hash_map] = STATE(50),
    [sym_namespace_map] = STATE(23),
    [sym_hash_map_kv_pair] = STATE(52),
    [sym_hash_map_key] = STATE(51),
    [sym_set] = STATE(50),
    [sym_comment] = STATE(50),
    [sym_semicolon] = STATE(24),
    [sym_shebang_line] = STATE(24),
    [sym_ignore_form] = STATE(24),
    [sym_comment_macro] = STATE(24),
    [aux_sym_hash_map_repeat1] = STATE(52),
    [sym_nil] = ACTIONS(97),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(101),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_POUND_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_POUND_BANG] = ACTIONS(41),
    [anon_sym_POUND_] = ACTIONS(103),
    [anon_sym_LPARENcomment] = ACTIONS(45),
  },
  [14] = {
    [sym__anything] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_number] = STATE(50),
    [sym_character] = STATE(50),
    [sym_string] = STATE(50),
    [sym_regex] = STATE(50),
    [sym_quote] = STATE(50),
    [sym_keyword] = STATE(50),
    [sym_unqualified_keyword] = STATE(22),
    [sym_qualified_keyword] = STATE(22),
    [sym_list] = STATE(50),
    [sym_vector] = STATE(50),
    [sym_hash_map] = STATE(50),
    [sym_namespace_map] = STATE(23),
    [sym_hash_map_kv_pair] = STATE(54),
    [sym_hash_map_key] = STATE(51),
    [sym_set] = STATE(50),
    [sym_comment] = STATE(50),
    [sym_semicolon] = STATE(24),
    [sym_shebang_line] = STATE(24),
    [sym_ignore_form] = STATE(24),
    [sym_comment_macro] = STATE(24),
    [aux_sym_hash_map_repeat1] = STATE(54),
    [sym_nil] = ACTIONS(97),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_POUND_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_POUND_BANG] = ACTIONS(41),
    [anon_sym_POUND_] = ACTIONS(103),
    [anon_sym_LPARENcomment] = ACTIONS(45),
  },
  [15] = {
    [sym__symbol_chars] = ACTIONS(107),
  },
  [16] = {
    [sym__anything] = STATE(59),
    [sym_boolean] = STATE(59),
    [sym_number] = STATE(59),
    [sym_character] = STATE(59),
    [sym_string] = STATE(59),
    [sym_regex] = STATE(59),
    [sym_quote] = STATE(59),
    [sym_keyword] = STATE(59),
    [sym_unqualified_keyword] = STATE(22),
    [sym_qualified_keyword] = STATE(22),
    [sym_list] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_hash_map] = STATE(59),
    [sym_namespace_map] = STATE(23),
    [sym_set] = STATE(59),
    [sym_comment] = STATE(59),
    [sym_semicolon] = STATE(24),
    [sym_shebang_line] = STATE(24),
    [sym_ignore_form] = STATE(24),
    [sym_comment_macro] = STATE(24),
    [aux_sym_program_repeat1] = STATE(59),
    [sym_nil] = ACTIONS(109),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(111),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(113),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_POUND_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_POUND_BANG] = ACTIONS(41),
    [anon_sym_POUND_] = ACTIONS(115),
    [anon_sym_LPARENcomment] = ACTIONS(45),
  },
  [17] = {
    [aux_sym_SLASH_DOT_STAR_SLASH] = ACTIONS(117),
  },
  [18] = {
    [aux_sym_SLASH_DOT_STAR_SLASH] = ACTIONS(119),
  },
  [19] = {
    [sym__anything] = STATE(62),
    [sym_boolean] = STATE(62),
    [sym_number] = STATE(62),
    [sym_character] = STATE(62),
    [sym_string] = STATE(62),
    [sym_regex] = STATE(62),
    [sym_quote] = STATE(62),
    [sym_keyword] = STATE(62),
    [sym_unqualified_keyword] = STATE(22),
    [sym_qualified_keyword] = STATE(22),
    [sym_list] = STATE(62),
    [sym_vector] = STATE(62),
    [sym_hash_map] = STATE(62),
    [sym_namespace_map] = STATE(23),
    [sym_set] = STATE(62),
    [sym_comment] = STATE(62),
    [sym_semicolon] = STATE(24),
    [sym_shebang_line] = STATE(24),
    [sym_ignore_form] = STATE(24),
    [sym_comment_macro] = STATE(24),
    [sym_nil] = ACTIONS(121),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_POUND_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_POUND_BANG] = ACTIONS(41),
    [anon_sym_POUND_] = ACTIONS(43),
    [anon_sym_LPARENcomment] = ACTIONS(45),
  },
  [20] = {
    [sym__anything] = STATE(64),
    [sym_boolean] = STATE(64),
    [sym_number] = STATE(64),
    [sym_character] = STATE(64),
    [sym_string] = STATE(64),
    [sym_regex] = STATE(64),
    [sym_quote] = STATE(64),
    [sym_keyword] = STATE(64),
    [sym_unqualified_keyword] = STATE(22),
    [sym_qualified_keyword] = STATE(22),
    [sym_list] = STATE(64),
    [sym_vector] = STATE(64),
    [sym_hash_map] = STATE(64),
    [sym_namespace_map] = STATE(23),
    [sym_set] = STATE(64),
    [sym_comment] = STATE(64),
    [sym_semicolon] = STATE(24),
    [sym_shebang_line] = STATE(24),
    [sym_ignore_form] = STATE(24),
    [sym_comment_macro] = STATE(24),
    [aux_sym_program_repeat1] = STATE(64),
    [sym_nil] = ACTIONS(123),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(125),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_POUND_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_POUND_BANG] = ACTIONS(41),
    [anon_sym_POUND_] = ACTIONS(87),
    [anon_sym_LPARENcomment] = ACTIONS(45),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(127),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [sym_nil] = ACTIONS(129),
    [sym_true] = ACTIONS(129),
    [sym_false] = ACTIONS(129),
    [sym_number_long] = ACTIONS(129),
    [sym_number_double] = ACTIONS(129),
    [anon_sym_BSLASH] = ACTIONS(129),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [anon_sym_POUND_DQUOTE] = ACTIONS(129),
    [anon_sym_SQUOTE] = ACTIONS(129),
    [anon_sym_LPARENquote] = ACTIONS(129),
    [anon_sym_RPAREN] = ACTIONS(129),
    [anon_sym_COLON] = ACTIONS(131),
    [anon_sym_COLON_COLON] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(129),
    [anon_sym_RBRACK] = ACTIONS(129),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_RBRACE] = ACTIONS(129),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(131),
    [anon_sym_POUND_LBRACE] = ACTIONS(129),
    [anon_sym_SEMI] = ACTIONS(129),
    [anon_sym_POUND_BANG] = ACTIONS(129),
    [anon_sym_POUND_] = ACTIONS(129),
    [anon_sym_LPARENcomment] = ACTIONS(129),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [sym_nil] = ACTIONS(133),
    [sym_true] = ACTIONS(133),
    [sym_false] = ACTIONS(133),
    [sym_number_long] = ACTIONS(133),
    [sym_number_double] = ACTIONS(133),
    [anon_sym_BSLASH] = ACTIONS(133),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [anon_sym_POUND_DQUOTE] = ACTIONS(133),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [anon_sym_LPARENquote] = ACTIONS(133),
    [anon_sym_RPAREN] = ACTIONS(133),
    [anon_sym_COLON] = ACTIONS(135),
    [anon_sym_COLON_COLON] = ACTIONS(133),
    [anon_sym_LPAREN] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(133),
    [anon_sym_LBRACE] = ACTIONS(133),
    [anon_sym_RBRACE] = ACTIONS(133),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(133),
    [anon_sym_POUND] = ACTIONS(135),
    [anon_sym_POUND_LBRACE] = ACTIONS(133),
    [anon_sym_SEMI] = ACTIONS(133),
    [anon_sym_POUND_BANG] = ACTIONS(133),
    [anon_sym_POUND_] = ACTIONS(133),
    [anon_sym_LPARENcomment] = ACTIONS(133),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [sym_nil] = ACTIONS(137),
    [sym_true] = ACTIONS(137),
    [sym_false] = ACTIONS(137),
    [sym_number_long] = ACTIONS(137),
    [sym_number_double] = ACTIONS(137),
    [anon_sym_BSLASH] = ACTIONS(137),
    [anon_sym_DQUOTE] = ACTIONS(137),
    [anon_sym_POUND_DQUOTE] = ACTIONS(137),
    [anon_sym_SQUOTE] = ACTIONS(137),
    [anon_sym_LPARENquote] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(137),
    [anon_sym_COLON] = ACTIONS(139),
    [anon_sym_COLON_COLON] = ACTIONS(137),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(137),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(137),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LBRACE] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(137),
    [anon_sym_POUND_BANG] = ACTIONS(137),
    [anon_sym_POUND_] = ACTIONS(137),
    [anon_sym_LPARENcomment] = ACTIONS(137),
  },
  [25] = {
    [sym__anything] = STATE(65),
    [sym_boolean] = STATE(65),
    [sym_number] = STATE(65),
    [sym_character] = STATE(65),
    [sym_string] = STATE(65),
    [sym_regex] = STATE(65),
    [sym_quote] = STATE(65),
    [sym_keyword] = STATE(65),
    [sym_unqualified_keyword] = STATE(22),
    [sym_qualified_keyword] = STATE(22),
    [sym_list] = STATE(65),
    [sym_vector] = STATE(65),
    [sym_hash_map] = STATE(65),
    [sym_namespace_map] = STATE(23),
    [sym_set] = STATE(65),
    [sym_comment] = STATE(65),
    [sym_semicolon] = STATE(24),
    [sym_shebang_line] = STATE(24),
    [sym_ignore_form] = STATE(24),
    [sym_comment_macro] = STATE(24),
    [aux_sym_program_repeat1] = STATE(65),
    [ts_builtin_sym_end] = ACTIONS(141),
    [sym_nil] = ACTIONS(143),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_POUND_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_POUND_BANG] = ACTIONS(41),
    [anon_sym_POUND_] = ACTIONS(43),
    [anon_sym_LPARENcomment] = ACTIONS(45),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [sym_nil] = ACTIONS(145),
    [sym_true] = ACTIONS(145),
    [sym_false] = ACTIONS(145),
    [sym_number_long] = ACTIONS(145),
    [sym_number_double] = ACTIONS(145),
    [anon_sym_BSLASH] = ACTIONS(145),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [anon_sym_POUND_DQUOTE] = ACTIONS(145),
    [anon_sym_SQUOTE] = ACTIONS(145),
    [anon_sym_LPARENquote] = ACTIONS(145),
    [anon_sym_RPAREN] = ACTIONS(145),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_COLON_COLON] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(145),
    [anon_sym_RBRACK] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_RBRACE] = ACTIONS(145),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(145),
    [anon_sym_POUND] = ACTIONS(147),
    [anon_sym_POUND_LBRACE] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(145),
    [anon_sym_POUND_BANG] = ACTIONS(145),
    [anon_sym_POUND_] = ACTIONS(145),
    [anon_sym_LPARENcomment] = ACTIONS(145),
  },
  [27] = {
    [sym__hex_char] = ACTIONS(149),
  },
  [28] = {
    [sym__octal_num] = STATE(67),
    [aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(151),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(153),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(153),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [sym_nil] = ACTIONS(155),
    [sym_true] = ACTIONS(155),
    [sym_false] = ACTIONS(155),
    [sym_number_long] = ACTIONS(155),
    [sym_number_double] = ACTIONS(155),
    [anon_sym_BSLASH] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(155),
    [anon_sym_POUND_DQUOTE] = ACTIONS(155),
    [anon_sym_SQUOTE] = ACTIONS(155),
    [anon_sym_LPARENquote] = ACTIONS(155),
    [anon_sym_RPAREN] = ACTIONS(155),
    [anon_sym_COLON] = ACTIONS(157),
    [anon_sym_COLON_COLON] = ACTIONS(155),
    [anon_sym_LPAREN] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_RBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_RBRACE] = ACTIONS(155),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(155),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LBRACE] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(155),
    [anon_sym_POUND_BANG] = ACTIONS(155),
    [anon_sym_POUND_] = ACTIONS(155),
    [anon_sym_LPARENcomment] = ACTIONS(155),
  },
  [30] = {
    [aux_sym_string_repeat1] = STATE(69),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(161),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(161),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [sym_nil] = ACTIONS(163),
    [sym_true] = ACTIONS(163),
    [sym_false] = ACTIONS(163),
    [sym_number_long] = ACTIONS(163),
    [sym_number_double] = ACTIONS(163),
    [anon_sym_BSLASH] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [anon_sym_POUND_DQUOTE] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(163),
    [anon_sym_LPARENquote] = ACTIONS(163),
    [anon_sym_RPAREN] = ACTIONS(163),
    [anon_sym_COLON] = ACTIONS(165),
    [anon_sym_COLON_COLON] = ACTIONS(163),
    [anon_sym_LPAREN] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_RBRACK] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_RBRACE] = ACTIONS(163),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(163),
    [anon_sym_POUND] = ACTIONS(165),
    [anon_sym_POUND_LBRACE] = ACTIONS(163),
    [anon_sym_SEMI] = ACTIONS(163),
    [anon_sym_POUND_BANG] = ACTIONS(163),
    [anon_sym_POUND_] = ACTIONS(163),
    [anon_sym_LPARENcomment] = ACTIONS(163),
  },
  [32] = {
    [aux_sym_regex_repeat1] = STATE(71),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(169),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(169),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [sym_nil] = ACTIONS(171),
    [sym_true] = ACTIONS(171),
    [sym_false] = ACTIONS(171),
    [sym_number_long] = ACTIONS(171),
    [sym_number_double] = ACTIONS(171),
    [anon_sym_BSLASH] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [anon_sym_POUND_DQUOTE] = ACTIONS(171),
    [anon_sym_SQUOTE] = ACTIONS(171),
    [anon_sym_LPARENquote] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(171),
    [anon_sym_COLON] = ACTIONS(173),
    [anon_sym_COLON_COLON] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_RBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(171),
    [anon_sym_RBRACE] = ACTIONS(171),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(171),
    [anon_sym_POUND] = ACTIONS(173),
    [anon_sym_POUND_LBRACE] = ACTIONS(171),
    [anon_sym_SEMI] = ACTIONS(171),
    [anon_sym_POUND_BANG] = ACTIONS(171),
    [anon_sym_POUND_] = ACTIONS(171),
    [anon_sym_LPARENcomment] = ACTIONS(171),
  },
  [34] = {
    [sym__anything] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_number] = STATE(33),
    [sym_character] = STATE(33),
    [sym_string] = STATE(33),
    [sym_regex] = STATE(33),
    [sym_quote] = STATE(33),
    [sym_keyword] = STATE(33),
    [sym_unqualified_keyword] = STATE(22),
    [sym_qualified_keyword] = STATE(22),
    [sym_list] = STATE(33),
    [sym_vector] = STATE(33),
    [sym_hash_map] = STATE(33),
    [sym_namespace_map] = STATE(23),
    [sym_set] = STATE(33),
    [sym_comment] = STATE(33),
    [sym_semicolon] = STATE(24),
    [sym_shebang_line] = STATE(24),
    [sym_ignore_form] = STATE(24),
    [sym_comment_macro] = STATE(24),
    [sym_nil] = ACTIONS(69),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(73),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_POUND_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_POUND_BANG] = ACTIONS(41),
    [anon_sym_POUND_] = ACTIONS(75),
    [anon_sym_LPARENcomment] = ACTIONS(45),
  },
  [35] = {
    [sym__anything] = STATE(62),
    [sym_boolean] = STATE(62),
    [sym_number] = STATE(62),
    [sym_character] = STATE(62),
    [sym_string] = STATE(62),
    [sym_regex] = STATE(62),
    [sym_quote] = STATE(62),
    [sym_keyword] = STATE(62),
    [sym_unqualified_keyword] = STATE(22),
    [sym_qualified_keyword] = STATE(22),
    [sym_list] = STATE(62),
    [sym_vector] = STATE(62),
    [sym_hash_map] = STATE(62),
    [sym_namespace_map] = STATE(23),
    [sym_set] = STATE(62),
    [sym_comment] = STATE(62),
    [sym_semicolon] = STATE(24),
    [sym_shebang_line] = STATE(24),
    [sym_ignore_form] = STATE(24),
    [sym_comment_macro] = STATE(24),
    [sym_nil] = ACTIONS(121),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(73),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_POUND_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_POUND_BANG] = ACTIONS(41),
    [anon_sym_POUND_] = ACTIONS(75),
    [anon_sym_LPARENcomment] = ACTIONS(45),
  },
  [36] = {
    [anon_sym_RPAREN] = ACTIONS(175),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [sym_nil] = ACTIONS(177),
    [sym_true] = ACTIONS(177),
    [sym_false] = ACTIONS(177),
    [sym_number_long] = ACTIONS(177),
    [sym_number_double] = ACTIONS(177),
    [anon_sym_BSLASH] = ACTIONS(177),
    [anon_sym_DQUOTE] = ACTIONS(177),
    [anon_sym_POUND_DQUOTE] = ACTIONS(177),
    [anon_sym_SQUOTE] = ACTIONS(177),
    [anon_sym_LPARENquote] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_COLON_COLON] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_RBRACK] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(177),
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(177),
    [anon_sym_POUND] = ACTIONS(179),
    [anon_sym_POUND_LBRACE] = ACTIONS(177),
    [anon_sym_SEMI] = ACTIONS(177),
    [anon_sym_POUND_BANG] = ACTIONS(177),
    [anon_sym_POUND_] = ACTIONS(177),
    [anon_sym_LPARENcomment] = ACTIONS(177),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [sym_nil] = ACTIONS(181),
    [sym_true] = ACTIONS(181),
    [sym_false] = ACTIONS(181),
    [sym_number_long] = ACTIONS(181),
    [sym_number_double] = ACTIONS(181),
    [anon_sym_BSLASH] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [anon_sym_POUND_DQUOTE] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(181),
    [anon_sym_LPARENquote] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(181),
    [anon_sym_COLON] = ACTIONS(183),
    [anon_sym_COLON_COLON] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(181),
    [anon_sym_RBRACK] = ACTIONS(181),
    [anon_sym_LBRACE] = ACTIONS(181),
    [anon_sym_RBRACE] = ACTIONS(181),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(183),
    [anon_sym_POUND_LBRACE] = ACTIONS(181),
    [anon_sym_SEMI] = ACTIONS(181),
    [anon_sym_POUND_BANG] = ACTIONS(181),
    [anon_sym_POUND_] = ACTIONS(181),
    [anon_sym_LPARENcomment] = ACTIONS(181),
  },
  [39] = {
    [sym__anything] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_number] = STATE(33),
    [sym_character] = STATE(33),
    [sym_string] = STATE(33),
    [sym_regex] = STATE(33),
    [sym_quote] = STATE(33),
    [sym_keyword] = STATE(33),
    [sym_unqualified_keyword] = STATE(22),
    [sym_qualified_keyword] = STATE(22),
    [sym_list] = STATE(33),
    [sym_vector] = STATE(33),
    [sym_hash_map] = STATE(33),
    [sym_namespace_map] = STATE(23),
    [sym_set] = STATE(33),
    [sym_comment] = STATE(33),
    [sym_semicolon] = STATE(24),
    [sym_shebang_line] = STATE(24),
    [sym_ignore_form] = STATE(24),
    [sym_comment_macro] = STATE(24),
    [sym_nil] = ACTIONS(69),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_POUND_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_POUND_BANG] = ACTIONS(41),
    [anon_sym_POUND_] = ACTIONS(87),
    [anon_sym_LPARENcomment] = ACTIONS(45),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(185),
    [sym_nil] = ACTIONS(185),
    [sym_true] = ACTIONS(185),
    [sym_false] = ACTIONS(185),
    [sym_number_long] = ACTIONS(185),
    [sym_number_double] = ACTIONS(185),
    [anon_sym_BSLASH] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(185),
    [anon_sym_POUND_DQUOTE] = ACTIONS(185),
    [anon_sym_SQUOTE] = ACTIONS(185),
    [anon_sym_LPARENquote] = ACTIONS(185),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_COLON] = ACTIONS(187),
    [anon_sym_COLON_COLON] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_RBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_RBRACE] = ACTIONS(185),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(185),
    [anon_sym_POUND] = ACTIONS(187),
    [anon_sym_POUND_LBRACE] = ACTIONS(185),
    [anon_sym_SEMI] = ACTIONS(185),
    [anon_sym_POUND_BANG] = ACTIONS(185),
    [anon_sym_POUND_] = ACTIONS(185),
    [anon_sym_LPARENcomment] = ACTIONS(185),
  },
  [41] = {
    [sym__anything] = STATE(62),
    [sym_boolean] = STATE(62),
    [sym_number] = STATE(62),
    [sym_character] = STATE(62),
    [sym_string] = STATE(62),
    [sym_regex] = STATE(62),
    [sym_quote] = STATE(62),
    [sym_keyword] = STATE(62),
    [sym_unqualified_keyword] = STATE(22),
    [sym_qualified_keyword] = STATE(22),
    [sym_list] = STATE(62),
    [sym_vector] = STATE(62),
    [sym_hash_map] = STATE(62),
    [sym_namespace_map] = STATE(23),
    [sym_set] = STATE(62),
    [sym_comment] = STATE(62),
    [sym_semicolon] = STATE(24),
    [sym_shebang_line] = STATE(24),
    [sym_ignore_form] = STATE(24),
    [sym_comment_macro] = STATE(24),
    [sym_nil] = ACTIONS(121),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_POUND_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_POUND_BANG] = ACTIONS(41),
    [anon_sym_POUND_] = ACTIONS(87),
    [anon_sym_LPARENcomment] = ACTIONS(45),
  },
  [42] = {
    [sym__anything] = STATE(74),
    [sym_boolean] = STATE(74),
    [sym_number] = STATE(74),
    [sym_character] = STATE(74),
    [sym_string] = STATE(74),
    [sym_regex] = STATE(74),
    [sym_quote] = STATE(74),
    [sym_keyword] = STATE(74),
    [sym_unqualified_keyword] = STATE(22),
    [sym_qualified_keyword] = STATE(22),
    [sym_list] = STATE(74),
    [sym_vector] = STATE(74),
    [sym_hash_map] = STATE(74),
    [sym_namespace_map] = STATE(23),
    [sym_set] = STATE(74),
    [sym_comment] = STATE(74),
    [sym_semicolon] = STATE(24),
    [sym_shebang_line] = STATE(24),
    [sym_ignore_form] = STATE(24),
    [sym_comment_macro] = STATE(24),
    [aux_sym_program_repeat1] = STATE(74),
    [sym_nil] = ACTIONS(189),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(191),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_POUND_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_POUND_BANG] = ACTIONS(41),
    [anon_sym_POUND_] = ACTIONS(87),
    [anon_sym_LPARENcomment] = ACTIONS(45),
  },
  [43] = {
    [sym__anything] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_number] = STATE(33),
    [sym_character] = STATE(33),
    [sym_string] = STATE(33),
    [sym_regex] = STATE(33),
    [sym_quote] = STATE(33),
    [sym_keyword] = STATE(33),
    [sym_unqualified_keyword] = STATE(22),
    [sym_qualified_keyword] = STATE(22),
    [sym_list] = STATE(33),
    [sym_vector] = STATE(33),
    [sym_hash_map] = STATE(33),
    [sym_namespace_map] = STATE(23),
    [sym_set] = STATE(33),
    [sym_comment] = STATE(33),
    [sym_semicolon] = STATE(24),
    [sym_shebang_line] = STATE(24),
    [sym_ignore_form] = STATE(24),
    [sym_comment_macro] = STATE(24),
    [sym_nil] = ACTIONS(69),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_POUND_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_POUND_BANG] = ACTIONS(41),
    [anon_sym_POUND_] = ACTIONS(95),
    [anon_sym_LPARENcomment] = ACTIONS(45),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [sym_nil] = ACTIONS(193),
    [sym_true] = ACTIONS(193),
    [sym_false] = ACTIONS(193),
    [sym_number_long] = ACTIONS(193),
    [sym_number_double] = ACTIONS(193),
    [anon_sym_BSLASH] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(193),
    [anon_sym_POUND_DQUOTE] = ACTIONS(193),
    [anon_sym_SQUOTE] = ACTIONS(193),
    [anon_sym_LPARENquote] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(193),
    [anon_sym_COLON] = ACTIONS(195),
    [anon_sym_COLON_COLON] = ACTIONS(193),
    [anon_sym_LPAREN] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(193),
    [anon_sym_RBRACK] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(193),
    [anon_sym_RBRACE] = ACTIONS(193),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(193),
    [anon_sym_POUND] = ACTIONS(195),
    [anon_sym_POUND_LBRACE] = ACTIONS(193),
    [anon_sym_SEMI] = ACTIONS(193),
    [anon_sym_POUND_BANG] = ACTIONS(193),
    [anon_sym_POUND_] = ACTIONS(193),
    [anon_sym_LPARENcomment] = ACTIONS(193),
  },
  [45] = {
    [sym__anything] = STATE(62),
    [sym_boolean] = STATE(62),
    [sym_number] = STATE(62),
    [sym_character] = STATE(62),
    [sym_string] = STATE(62),
    [sym_regex] = STATE(62),
    [sym_quote] = STATE(62),
    [sym_keyword] = STATE(62),
    [sym_unqualified_keyword] = STATE(22),
    [sym_qualified_keyword] = STATE(22),
    [sym_list] = STATE(62),
    [sym_vector] = STATE(62),
    [sym_hash_map] = STATE(62),
    [sym_namespace_map] = STATE(23),
    [sym_set] = STATE(62),
    [sym_comment] = STATE(62),
    [sym_semicolon] = STATE(24),
    [sym_shebang_line] = STATE(24),
    [sym_ignore_form] = STATE(24),
    [sym_comment_macro] = STATE(24),
    [sym_nil] = ACTIONS(121),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_POUND_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_POUND_BANG] = ACTIONS(41),
    [anon_sym_POUND_] = ACTIONS(95),
    [anon_sym_LPARENcomment] = ACTIONS(45),
  },
  [46] = {
    [sym__anything] = STATE(76),
    [sym_boolean] = STATE(76),
    [sym_number] = STATE(76),
    [sym_character] = STATE(76),
    [sym_string] = STATE(76),
    [sym_regex] = STATE(76),
    [sym_quote] = STATE(76),
    [sym_keyword] = STATE(76),
    [sym_unqualified_keyword] = STATE(22),
    [sym_qualified_keyword] = STATE(22),
    [sym_list] = STATE(76),
    [sym_vector] = STATE(76),
    [sym_hash_map] = STATE(76),
    [sym_namespace_map] = STATE(23),
    [sym_set] = STATE(76),
    [sym_comment] = STATE(76),
    [sym_semicolon] = STATE(24),
    [sym_shebang_line] = STATE(24),
    [sym_ignore_form] = STATE(24),
    [sym_comment_macro] = STATE(24),
    [aux_sym_program_repeat1] = STATE(76),
    [sym_nil] = ACTIONS(197),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(199),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_POUND_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_POUND_BANG] = ACTIONS(41),
    [anon_sym_POUND_] = ACTIONS(95),
    [anon_sym_LPARENcomment] = ACTIONS(45),
  },
  [47] = {
    [sym__anything] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_number] = STATE(33),
    [sym_character] = STATE(33),
    [sym_string] = STATE(33),
    [sym_regex] = STATE(33),
    [sym_quote] = STATE(33),
    [sym_keyword] = STATE(33),
    [sym_unqualified_keyword] = STATE(22),
    [sym_qualified_keyword] = STATE(22),
    [sym_list] = STATE(33),
    [sym_vector] = STATE(33),
    [sym_hash_map] = STATE(33),
    [sym_namespace_map] = STATE(23),
    [sym_set] = STATE(33),
    [sym_comment] = STATE(33),
    [sym_semicolon] = STATE(24),
    [sym_shebang_line] = STATE(24),
    [sym_ignore_form] = STATE(24),
    [sym_comment_macro] = STATE(24),
    [sym_nil] = ACTIONS(69),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_POUND_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_POUND_BANG] = ACTIONS(41),
    [anon_sym_POUND_] = ACTIONS(103),
    [anon_sym_LPARENcomment] = ACTIONS(45),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [sym_nil] = ACTIONS(201),
    [sym_true] = ACTIONS(201),
    [sym_false] = ACTIONS(201),
    [sym_number_long] = ACTIONS(201),
    [sym_number_double] = ACTIONS(201),
    [anon_sym_BSLASH] = ACTIONS(201),
    [anon_sym_DQUOTE] = ACTIONS(201),
    [anon_sym_POUND_DQUOTE] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(201),
    [anon_sym_LPARENquote] = ACTIONS(201),
    [anon_sym_RPAREN] = ACTIONS(201),
    [anon_sym_COLON] = ACTIONS(203),
    [anon_sym_COLON_COLON] = ACTIONS(201),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(201),
    [anon_sym_RBRACK] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(201),
    [anon_sym_RBRACE] = ACTIONS(201),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(201),
    [anon_sym_POUND] = ACTIONS(203),
    [anon_sym_POUND_LBRACE] = ACTIONS(201),
    [anon_sym_SEMI] = ACTIONS(201),
    [anon_sym_POUND_BANG] = ACTIONS(201),
    [anon_sym_POUND_] = ACTIONS(201),
    [anon_sym_LPARENcomment] = ACTIONS(201),
  },
  [49] = {
    [sym__anything] = STATE(62),
    [sym_boolean] = STATE(62),
    [sym_number] = STATE(62),
    [sym_character] = STATE(62),
    [sym_string] = STATE(62),
    [sym_regex] = STATE(62),
    [sym_quote] = STATE(62),
    [sym_keyword] = STATE(62),
    [sym_unqualified_keyword] = STATE(22),
    [sym_qualified_keyword] = STATE(22),
    [sym_list] = STATE(62),
    [sym_vector] = STATE(62),
    [sym_hash_map] = STATE(62),
    [sym_namespace_map] = STATE(23),
    [sym_set] = STATE(62),
    [sym_comment] = STATE(62),
    [sym_semicolon] = STATE(24),
    [sym_shebang_line] = STATE(24),
    [sym_ignore_form] = STATE(24),
    [sym_comment_macro] = STATE(24),
    [sym_nil] = ACTIONS(121),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_POUND_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_POUND_BANG] = ACTIONS(41),
    [anon_sym_POUND_] = ACTIONS(103),
    [anon_sym_LPARENcomment] = ACTIONS(45),
  },
  [50] = {
    [sym_nil] = ACTIONS(205),
    [sym_true] = ACTIONS(205),
    [sym_false] = ACTIONS(205),
    [sym_number_long] = ACTIONS(205),
    [sym_number_double] = ACTIONS(205),
    [anon_sym_BSLASH] = ACTIONS(205),
    [anon_sym_DQUOTE] = ACTIONS(205),
    [anon_sym_POUND_DQUOTE] = ACTIONS(205),
    [anon_sym_SQUOTE] = ACTIONS(205),
    [anon_sym_LPARENquote] = ACTIONS(205),
    [anon_sym_COLON] = ACTIONS(207),
    [anon_sym_COLON_COLON] = ACTIONS(205),
    [anon_sym_LPAREN] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(205),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(205),
    [anon_sym_POUND] = ACTIONS(207),
    [anon_sym_POUND_LBRACE] = ACTIONS(205),
    [anon_sym_SEMI] = ACTIONS(205),
    [anon_sym_POUND_BANG] = ACTIONS(205),
    [anon_sym_POUND_] = ACTIONS(205),
    [anon_sym_LPARENcomment] = ACTIONS(205),
  },
  [51] = {
    [sym__anything] = STATE(77),
    [sym_boolean] = STATE(77),
    [sym_number] = STATE(77),
    [sym_character] = STATE(77),
    [sym_string] = STATE(77),
    [sym_regex] = STATE(77),
    [sym_quote] = STATE(77),
    [sym_keyword] = STATE(77),
    [sym_unqualified_keyword] = STATE(22),
    [sym_qualified_keyword] = STATE(22),
    [sym_list] = STATE(77),
    [sym_vector] = STATE(77),
    [sym_hash_map] = STATE(77),
    [sym_namespace_map] = STATE(23),
    [sym_hash_map_value] = STATE(78),
    [sym_set] = STATE(77),
    [sym_comment] = STATE(77),
    [sym_semicolon] = STATE(24),
    [sym_shebang_line] = STATE(24),
    [sym_ignore_form] = STATE(24),
    [sym_comment_macro] = STATE(24),
    [sym_nil] = ACTIONS(209),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(111),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_POUND_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_POUND_BANG] = ACTIONS(41),
    [anon_sym_POUND_] = ACTIONS(115),
    [anon_sym_LPARENcomment] = ACTIONS(45),
  },
  [52] = {
    [sym__anything] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_number] = STATE(50),
    [sym_character] = STATE(50),
    [sym_string] = STATE(50),
    [sym_regex] = STATE(50),
    [sym_quote] = STATE(50),
    [sym_keyword] = STATE(50),
    [sym_unqualified_keyword] = STATE(22),
    [sym_qualified_keyword] = STATE(22),
    [sym_list] = STATE(50),
    [sym_vector] = STATE(50),
    [sym_hash_map] = STATE(50),
    [sym_namespace_map] = STATE(23),
    [sym_hash_map_kv_pair] = STATE(80),
    [sym_hash_map_key] = STATE(51),
    [sym_set] = STATE(50),
    [sym_comment] = STATE(50),
    [sym_semicolon] = STATE(24),
    [sym_shebang_line] = STATE(24),
    [sym_ignore_form] = STATE(24),
    [sym_comment_macro] = STATE(24),
    [aux_sym_hash_map_repeat1] = STATE(80),
    [sym_nil] = ACTIONS(97),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(211),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_POUND_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_POUND_BANG] = ACTIONS(41),
    [anon_sym_POUND_] = ACTIONS(103),
    [anon_sym_LPARENcomment] = ACTIONS(45),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [sym_nil] = ACTIONS(213),
    [sym_true] = ACTIONS(213),
    [sym_false] = ACTIONS(213),
    [sym_number_long] = ACTIONS(213),
    [sym_number_double] = ACTIONS(213),
    [anon_sym_BSLASH] = ACTIONS(213),
    [anon_sym_DQUOTE] = ACTIONS(213),
    [anon_sym_POUND_DQUOTE] = ACTIONS(213),
    [anon_sym_SQUOTE] = ACTIONS(213),
    [anon_sym_LPARENquote] = ACTIONS(213),
    [anon_sym_RPAREN] = ACTIONS(213),
    [anon_sym_COLON] = ACTIONS(215),
    [anon_sym_COLON_COLON] = ACTIONS(213),
    [anon_sym_LPAREN] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(213),
    [anon_sym_RBRACK] = ACTIONS(213),
    [anon_sym_LBRACE] = ACTIONS(213),
    [anon_sym_RBRACE] = ACTIONS(213),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(213),
    [anon_sym_POUND] = ACTIONS(215),
    [anon_sym_POUND_LBRACE] = ACTIONS(213),
    [anon_sym_SEMI] = ACTIONS(213),
    [anon_sym_POUND_BANG] = ACTIONS(213),
    [anon_sym_POUND_] = ACTIONS(213),
    [anon_sym_LPARENcomment] = ACTIONS(213),
  },
  [54] = {
    [sym__anything] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_number] = STATE(50),
    [sym_character] = STATE(50),
    [sym_string] = STATE(50),
    [sym_regex] = STATE(50),
    [sym_quote] = STATE(50),
    [sym_keyword] = STATE(50),
    [sym_unqualified_keyword] = STATE(22),
    [sym_qualified_keyword] = STATE(22),
    [sym_list] = STATE(50),
    [sym_vector] = STATE(50),
    [sym_hash_map] = STATE(50),
    [sym_namespace_map] = STATE(23),
    [sym_hash_map_kv_pair] = STATE(80),
    [sym_hash_map_key] = STATE(51),
    [sym_set] = STATE(50),
    [sym_comment] = STATE(50),
    [sym_semicolon] = STATE(24),
    [sym_shebang_line] = STATE(24),
    [sym_ignore_form] = STATE(24),
    [sym_comment_macro] = STATE(24),
    [aux_sym_hash_map_repeat1] = STATE(80),
    [sym_nil] = ACTIONS(97),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(217),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_POUND_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_POUND_BANG] = ACTIONS(41),
    [anon_sym_POUND_] = ACTIONS(103),
    [anon_sym_LPARENcomment] = ACTIONS(45),
  },
  [55] = {
    [anon_sym_LBRACE] = ACTIONS(219),
  },
  [56] = {
    [sym__anything] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_number] = STATE(33),
    [sym_character] = STATE(33),
    [sym_string] = STATE(33),
    [sym_regex] = STATE(33),
    [sym_quote] = STATE(33),
    [sym_keyword] = STATE(33),
    [sym_unqualified_keyword] = STATE(22),
    [sym_qualified_keyword] = STATE(22),
    [sym_list] = STATE(33),
    [sym_vector] = STATE(33),
    [sym_hash_map] = STATE(33),
    [sym_namespace_map] = STATE(23),
    [sym_set] = STATE(33),
    [sym_comment] = STATE(33),
    [sym_semicolon] = STATE(24),
    [sym_shebang_line] = STATE(24),
    [sym_ignore_form] = STATE(24),
    [sym_comment_macro] = STATE(24),
    [sym_nil] = ACTIONS(69),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(111),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_POUND_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_POUND_BANG] = ACTIONS(41),
    [anon_sym_POUND_] = ACTIONS(115),
    [anon_sym_LPARENcomment] = ACTIONS(45),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(221),
    [sym_nil] = ACTIONS(221),
    [sym_true] = ACTIONS(221),
    [sym_false] = ACTIONS(221),
    [sym_number_long] = ACTIONS(221),
    [sym_number_double] = ACTIONS(221),
    [anon_sym_BSLASH] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(221),
    [anon_sym_POUND_DQUOTE] = ACTIONS(221),
    [anon_sym_SQUOTE] = ACTIONS(221),
    [anon_sym_LPARENquote] = ACTIONS(221),
    [anon_sym_RPAREN] = ACTIONS(221),
    [anon_sym_COLON] = ACTIONS(223),
    [anon_sym_COLON_COLON] = ACTIONS(221),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_RBRACK] = ACTIONS(221),
    [anon_sym_LBRACE] = ACTIONS(221),
    [anon_sym_RBRACE] = ACTIONS(221),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(221),
    [anon_sym_POUND] = ACTIONS(223),
    [anon_sym_POUND_LBRACE] = ACTIONS(221),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_POUND_BANG] = ACTIONS(221),
    [anon_sym_POUND_] = ACTIONS(221),
    [anon_sym_LPARENcomment] = ACTIONS(221),
  },
  [58] = {
    [sym__anything] = STATE(62),
    [sym_boolean] = STATE(62),
    [sym_number] = STATE(62),
    [sym_character] = STATE(62),
    [sym_string] = STATE(62),
    [sym_regex] = STATE(62),
    [sym_quote] = STATE(62),
    [sym_keyword] = STATE(62),
    [sym_unqualified_keyword] = STATE(22),
    [sym_qualified_keyword] = STATE(22),
    [sym_list] = STATE(62),
    [sym_vector] = STATE(62),
    [sym_hash_map] = STATE(62),
    [sym_namespace_map] = STATE(23),
    [sym_set] = STATE(62),
    [sym_comment] = STATE(62),
    [sym_semicolon] = STATE(24),
    [sym_shebang_line] = STATE(24),
    [sym_ignore_form] = STATE(24),
    [sym_comment_macro] = STATE(24),
    [sym_nil] = ACTIONS(121),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(111),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_POUND_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_POUND_BANG] = ACTIONS(41),
    [anon_sym_POUND_] = ACTIONS(115),
    [anon_sym_LPARENcomment] = ACTIONS(45),
  },
  [59] = {
    [sym__anything] = STATE(84),
    [sym_boolean] = STATE(84),
    [sym_number] = STATE(84),
    [sym_character] = STATE(84),
    [sym_string] = STATE(84),
    [sym_regex] = STATE(84),
    [sym_quote] = STATE(84),
    [sym_keyword] = STATE(84),
    [sym_unqualified_keyword] = STATE(22),
    [sym_qualified_keyword] = STATE(22),
    [sym_list] = STATE(84),
    [sym_vector] = STATE(84),
    [sym_hash_map] = STATE(84),
    [sym_namespace_map] = STATE(23),
    [sym_set] = STATE(84),
    [sym_comment] = STATE(84),
    [sym_semicolon] = STATE(24),
    [sym_shebang_line] = STATE(24),
    [sym_ignore_form] = STATE(24),
    [sym_comment_macro] = STATE(24),
    [aux_sym_program_repeat1] = STATE(84),
    [sym_nil] = ACTIONS(225),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(111),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(227),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_POUND_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_POUND_BANG] = ACTIONS(41),
    [anon_sym_POUND_] = ACTIONS(115),
    [anon_sym_LPARENcomment] = ACTIONS(45),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(229),
    [sym_nil] = ACTIONS(229),
    [sym_true] = ACTIONS(229),
    [sym_false] = ACTIONS(229),
    [sym_number_long] = ACTIONS(229),
    [sym_number_double] = ACTIONS(229),
    [anon_sym_BSLASH] = ACTIONS(229),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE] = ACTIONS(229),
    [anon_sym_LPARENquote] = ACTIONS(229),
    [anon_sym_RPAREN] = ACTIONS(229),
    [anon_sym_COLON] = ACTIONS(231),
    [anon_sym_COLON_COLON] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_RBRACK] = ACTIONS(229),
    [anon_sym_LBRACE] = ACTIONS(229),
    [anon_sym_RBRACE] = ACTIONS(229),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(229),
    [anon_sym_POUND] = ACTIONS(231),
    [anon_sym_POUND_LBRACE] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(229),
    [anon_sym_POUND_BANG] = ACTIONS(229),
    [anon_sym_POUND_] = ACTIONS(229),
    [anon_sym_LPARENcomment] = ACTIONS(229),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(233),
    [sym_nil] = ACTIONS(233),
    [sym_true] = ACTIONS(233),
    [sym_false] = ACTIONS(233),
    [sym_number_long] = ACTIONS(233),
    [sym_number_double] = ACTIONS(233),
    [anon_sym_BSLASH] = ACTIONS(233),
    [anon_sym_DQUOTE] = ACTIONS(233),
    [anon_sym_POUND_DQUOTE] = ACTIONS(233),
    [anon_sym_SQUOTE] = ACTIONS(233),
    [anon_sym_LPARENquote] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_COLON] = ACTIONS(235),
    [anon_sym_COLON_COLON] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(233),
    [anon_sym_RBRACK] = ACTIONS(233),
    [anon_sym_LBRACE] = ACTIONS(233),
    [anon_sym_RBRACE] = ACTIONS(233),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(233),
    [anon_sym_POUND] = ACTIONS(235),
    [anon_sym_POUND_LBRACE] = ACTIONS(233),
    [anon_sym_SEMI] = ACTIONS(233),
    [anon_sym_POUND_BANG] = ACTIONS(233),
    [anon_sym_POUND_] = ACTIONS(233),
    [anon_sym_LPARENcomment] = ACTIONS(233),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [sym_nil] = ACTIONS(237),
    [sym_true] = ACTIONS(237),
    [sym_false] = ACTIONS(237),
    [sym_number_long] = ACTIONS(237),
    [sym_number_double] = ACTIONS(237),
    [anon_sym_BSLASH] = ACTIONS(237),
    [anon_sym_DQUOTE] = ACTIONS(237),
    [anon_sym_POUND_DQUOTE] = ACTIONS(237),
    [anon_sym_SQUOTE] = ACTIONS(237),
    [anon_sym_LPARENquote] = ACTIONS(237),
    [anon_sym_RPAREN] = ACTIONS(237),
    [anon_sym_COLON] = ACTIONS(239),
    [anon_sym_COLON_COLON] = ACTIONS(237),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(237),
    [anon_sym_RBRACK] = ACTIONS(237),
    [anon_sym_LBRACE] = ACTIONS(237),
    [anon_sym_RBRACE] = ACTIONS(237),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(237),
    [anon_sym_POUND] = ACTIONS(239),
    [anon_sym_POUND_LBRACE] = ACTIONS(237),
    [anon_sym_SEMI] = ACTIONS(237),
    [anon_sym_POUND_BANG] = ACTIONS(237),
    [anon_sym_POUND_] = ACTIONS(237),
    [anon_sym_LPARENcomment] = ACTIONS(237),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(241),
    [sym_nil] = ACTIONS(241),
    [sym_true] = ACTIONS(241),
    [sym_false] = ACTIONS(241),
    [sym_number_long] = ACTIONS(241),
    [sym_number_double] = ACTIONS(241),
    [anon_sym_BSLASH] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [anon_sym_POUND_DQUOTE] = ACTIONS(241),
    [anon_sym_SQUOTE] = ACTIONS(241),
    [anon_sym_LPARENquote] = ACTIONS(241),
    [anon_sym_RPAREN] = ACTIONS(241),
    [anon_sym_COLON] = ACTIONS(243),
    [anon_sym_COLON_COLON] = ACTIONS(241),
    [anon_sym_LPAREN] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(241),
    [anon_sym_RBRACK] = ACTIONS(241),
    [anon_sym_LBRACE] = ACTIONS(241),
    [anon_sym_RBRACE] = ACTIONS(241),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(241),
    [anon_sym_POUND] = ACTIONS(243),
    [anon_sym_POUND_LBRACE] = ACTIONS(241),
    [anon_sym_SEMI] = ACTIONS(241),
    [anon_sym_POUND_BANG] = ACTIONS(241),
    [anon_sym_POUND_] = ACTIONS(241),
    [anon_sym_LPARENcomment] = ACTIONS(241),
  },
  [64] = {
    [sym__anything] = STATE(74),
    [sym_boolean] = STATE(74),
    [sym_number] = STATE(74),
    [sym_character] = STATE(74),
    [sym_string] = STATE(74),
    [sym_regex] = STATE(74),
    [sym_quote] = STATE(74),
    [sym_keyword] = STATE(74),
    [sym_unqualified_keyword] = STATE(22),
    [sym_qualified_keyword] = STATE(22),
    [sym_list] = STATE(74),
    [sym_vector] = STATE(74),
    [sym_hash_map] = STATE(74),
    [sym_namespace_map] = STATE(23),
    [sym_set] = STATE(74),
    [sym_comment] = STATE(74),
    [sym_semicolon] = STATE(24),
    [sym_shebang_line] = STATE(24),
    [sym_ignore_form] = STATE(24),
    [sym_comment_macro] = STATE(24),
    [aux_sym_program_repeat1] = STATE(74),
    [sym_nil] = ACTIONS(189),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_POUND_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_POUND_BANG] = ACTIONS(41),
    [anon_sym_POUND_] = ACTIONS(87),
    [anon_sym_LPARENcomment] = ACTIONS(45),
  },
  [65] = {
    [sym__anything] = STATE(65),
    [sym_boolean] = STATE(65),
    [sym_number] = STATE(65),
    [sym_character] = STATE(65),
    [sym_string] = STATE(65),
    [sym_regex] = STATE(65),
    [sym_quote] = STATE(65),
    [sym_keyword] = STATE(65),
    [sym_unqualified_keyword] = STATE(22),
    [sym_qualified_keyword] = STATE(22),
    [sym_list] = STATE(65),
    [sym_vector] = STATE(65),
    [sym_hash_map] = STATE(65),
    [sym_namespace_map] = STATE(23),
    [sym_set] = STATE(65),
    [sym_comment] = STATE(65),
    [sym_semicolon] = STATE(24),
    [sym_shebang_line] = STATE(24),
    [sym_ignore_form] = STATE(24),
    [sym_comment_macro] = STATE(24),
    [aux_sym_program_repeat1] = STATE(65),
    [ts_builtin_sym_end] = ACTIONS(247),
    [sym_nil] = ACTIONS(249),
    [sym_true] = ACTIONS(252),
    [sym_false] = ACTIONS(252),
    [sym_number_long] = ACTIONS(255),
    [sym_number_double] = ACTIONS(255),
    [anon_sym_BSLASH] = ACTIONS(258),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [anon_sym_POUND_DQUOTE] = ACTIONS(264),
    [anon_sym_SQUOTE] = ACTIONS(267),
    [anon_sym_LPARENquote] = ACTIONS(270),
    [anon_sym_COLON] = ACTIONS(273),
    [anon_sym_COLON_COLON] = ACTIONS(276),
    [anon_sym_LPAREN] = ACTIONS(279),
    [anon_sym_LBRACK] = ACTIONS(282),
    [anon_sym_LBRACE] = ACTIONS(285),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(288),
    [anon_sym_POUND] = ACTIONS(291),
    [anon_sym_POUND_LBRACE] = ACTIONS(294),
    [anon_sym_SEMI] = ACTIONS(297),
    [anon_sym_POUND_BANG] = ACTIONS(300),
    [anon_sym_POUND_] = ACTIONS(303),
    [anon_sym_LPARENcomment] = ACTIONS(306),
  },
  [66] = {
    [sym__hex_char] = ACTIONS(309),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(311),
    [sym_nil] = ACTIONS(311),
    [sym_true] = ACTIONS(311),
    [sym_false] = ACTIONS(311),
    [sym_number_long] = ACTIONS(311),
    [sym_number_double] = ACTIONS(311),
    [anon_sym_BSLASH] = ACTIONS(311),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [anon_sym_POUND_DQUOTE] = ACTIONS(311),
    [anon_sym_SQUOTE] = ACTIONS(311),
    [anon_sym_LPARENquote] = ACTIONS(311),
    [anon_sym_RPAREN] = ACTIONS(311),
    [anon_sym_COLON] = ACTIONS(313),
    [anon_sym_COLON_COLON] = ACTIONS(311),
    [anon_sym_LPAREN] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(311),
    [anon_sym_RBRACK] = ACTIONS(311),
    [anon_sym_LBRACE] = ACTIONS(311),
    [anon_sym_RBRACE] = ACTIONS(311),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(311),
    [anon_sym_POUND] = ACTIONS(313),
    [anon_sym_POUND_LBRACE] = ACTIONS(311),
    [anon_sym_SEMI] = ACTIONS(311),
    [anon_sym_POUND_BANG] = ACTIONS(311),
    [anon_sym_POUND_] = ACTIONS(311),
    [anon_sym_LPARENcomment] = ACTIONS(311),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(315),
    [sym_nil] = ACTIONS(315),
    [sym_true] = ACTIONS(315),
    [sym_false] = ACTIONS(315),
    [sym_number_long] = ACTIONS(315),
    [sym_number_double] = ACTIONS(315),
    [anon_sym_BSLASH] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(315),
    [anon_sym_POUND_DQUOTE] = ACTIONS(315),
    [anon_sym_SQUOTE] = ACTIONS(315),
    [anon_sym_LPARENquote] = ACTIONS(315),
    [anon_sym_RPAREN] = ACTIONS(315),
    [anon_sym_COLON] = ACTIONS(317),
    [anon_sym_COLON_COLON] = ACTIONS(315),
    [anon_sym_LPAREN] = ACTIONS(317),
    [anon_sym_LBRACK] = ACTIONS(315),
    [anon_sym_RBRACK] = ACTIONS(315),
    [anon_sym_LBRACE] = ACTIONS(315),
    [anon_sym_RBRACE] = ACTIONS(315),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(315),
    [anon_sym_POUND] = ACTIONS(317),
    [anon_sym_POUND_LBRACE] = ACTIONS(315),
    [anon_sym_SEMI] = ACTIONS(315),
    [anon_sym_POUND_BANG] = ACTIONS(315),
    [anon_sym_POUND_] = ACTIONS(315),
    [anon_sym_LPARENcomment] = ACTIONS(315),
  },
  [69] = {
    [aux_sym_string_repeat1] = STATE(69),
    [anon_sym_DQUOTE] = ACTIONS(319),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(321),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(321),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(324),
    [sym_nil] = ACTIONS(324),
    [sym_true] = ACTIONS(324),
    [sym_false] = ACTIONS(324),
    [sym_number_long] = ACTIONS(324),
    [sym_number_double] = ACTIONS(324),
    [anon_sym_BSLASH] = ACTIONS(324),
    [anon_sym_DQUOTE] = ACTIONS(324),
    [anon_sym_POUND_DQUOTE] = ACTIONS(324),
    [anon_sym_SQUOTE] = ACTIONS(324),
    [anon_sym_LPARENquote] = ACTIONS(324),
    [anon_sym_RPAREN] = ACTIONS(324),
    [anon_sym_COLON] = ACTIONS(326),
    [anon_sym_COLON_COLON] = ACTIONS(324),
    [anon_sym_LPAREN] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(324),
    [anon_sym_RBRACK] = ACTIONS(324),
    [anon_sym_LBRACE] = ACTIONS(324),
    [anon_sym_RBRACE] = ACTIONS(324),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(324),
    [anon_sym_POUND] = ACTIONS(326),
    [anon_sym_POUND_LBRACE] = ACTIONS(324),
    [anon_sym_SEMI] = ACTIONS(324),
    [anon_sym_POUND_BANG] = ACTIONS(324),
    [anon_sym_POUND_] = ACTIONS(324),
    [anon_sym_LPARENcomment] = ACTIONS(324),
  },
  [71] = {
    [aux_sym_regex_repeat1] = STATE(71),
    [anon_sym_DQUOTE] = ACTIONS(328),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(330),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(330),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(333),
    [sym_nil] = ACTIONS(333),
    [sym_true] = ACTIONS(333),
    [sym_false] = ACTIONS(333),
    [sym_number_long] = ACTIONS(333),
    [sym_number_double] = ACTIONS(333),
    [anon_sym_BSLASH] = ACTIONS(333),
    [anon_sym_DQUOTE] = ACTIONS(333),
    [anon_sym_POUND_DQUOTE] = ACTIONS(333),
    [anon_sym_SQUOTE] = ACTIONS(333),
    [anon_sym_LPARENquote] = ACTIONS(333),
    [anon_sym_RPAREN] = ACTIONS(333),
    [anon_sym_COLON] = ACTIONS(335),
    [anon_sym_COLON_COLON] = ACTIONS(333),
    [anon_sym_LPAREN] = ACTIONS(335),
    [anon_sym_LBRACK] = ACTIONS(333),
    [anon_sym_RBRACK] = ACTIONS(333),
    [anon_sym_LBRACE] = ACTIONS(333),
    [anon_sym_RBRACE] = ACTIONS(333),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(333),
    [anon_sym_POUND] = ACTIONS(335),
    [anon_sym_POUND_LBRACE] = ACTIONS(333),
    [anon_sym_SEMI] = ACTIONS(333),
    [anon_sym_POUND_BANG] = ACTIONS(333),
    [anon_sym_POUND_] = ACTIONS(333),
    [anon_sym_LPARENcomment] = ACTIONS(333),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(337),
    [sym_nil] = ACTIONS(337),
    [sym_true] = ACTIONS(337),
    [sym_false] = ACTIONS(337),
    [sym_number_long] = ACTIONS(337),
    [sym_number_double] = ACTIONS(337),
    [anon_sym_BSLASH] = ACTIONS(337),
    [anon_sym_DQUOTE] = ACTIONS(337),
    [anon_sym_POUND_DQUOTE] = ACTIONS(337),
    [anon_sym_SQUOTE] = ACTIONS(337),
    [anon_sym_LPARENquote] = ACTIONS(337),
    [anon_sym_RPAREN] = ACTIONS(337),
    [anon_sym_COLON] = ACTIONS(339),
    [anon_sym_COLON_COLON] = ACTIONS(337),
    [anon_sym_LPAREN] = ACTIONS(339),
    [anon_sym_LBRACK] = ACTIONS(337),
    [anon_sym_RBRACK] = ACTIONS(337),
    [anon_sym_LBRACE] = ACTIONS(337),
    [anon_sym_RBRACE] = ACTIONS(337),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(337),
    [anon_sym_POUND] = ACTIONS(339),
    [anon_sym_POUND_LBRACE] = ACTIONS(337),
    [anon_sym_SEMI] = ACTIONS(337),
    [anon_sym_POUND_BANG] = ACTIONS(337),
    [anon_sym_POUND_] = ACTIONS(337),
    [anon_sym_LPARENcomment] = ACTIONS(337),
  },
  [74] = {
    [sym__anything] = STATE(74),
    [sym_boolean] = STATE(74),
    [sym_number] = STATE(74),
    [sym_character] = STATE(74),
    [sym_string] = STATE(74),
    [sym_regex] = STATE(74),
    [sym_quote] = STATE(74),
    [sym_keyword] = STATE(74),
    [sym_unqualified_keyword] = STATE(22),
    [sym_qualified_keyword] = STATE(22),
    [sym_list] = STATE(74),
    [sym_vector] = STATE(74),
    [sym_hash_map] = STATE(74),
    [sym_namespace_map] = STATE(23),
    [sym_set] = STATE(74),
    [sym_comment] = STATE(74),
    [sym_semicolon] = STATE(24),
    [sym_shebang_line] = STATE(24),
    [sym_ignore_form] = STATE(24),
    [sym_comment_macro] = STATE(24),
    [aux_sym_program_repeat1] = STATE(74),
    [sym_nil] = ACTIONS(341),
    [sym_true] = ACTIONS(252),
    [sym_false] = ACTIONS(252),
    [sym_number_long] = ACTIONS(255),
    [sym_number_double] = ACTIONS(255),
    [anon_sym_BSLASH] = ACTIONS(258),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [anon_sym_POUND_DQUOTE] = ACTIONS(264),
    [anon_sym_SQUOTE] = ACTIONS(344),
    [anon_sym_LPARENquote] = ACTIONS(270),
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_COLON] = ACTIONS(273),
    [anon_sym_COLON_COLON] = ACTIONS(276),
    [anon_sym_LPAREN] = ACTIONS(279),
    [anon_sym_LBRACK] = ACTIONS(282),
    [anon_sym_LBRACE] = ACTIONS(285),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(288),
    [anon_sym_POUND] = ACTIONS(291),
    [anon_sym_POUND_LBRACE] = ACTIONS(294),
    [anon_sym_SEMI] = ACTIONS(297),
    [anon_sym_POUND_BANG] = ACTIONS(300),
    [anon_sym_POUND_] = ACTIONS(347),
    [anon_sym_LPARENcomment] = ACTIONS(306),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(350),
    [sym_nil] = ACTIONS(350),
    [sym_true] = ACTIONS(350),
    [sym_false] = ACTIONS(350),
    [sym_number_long] = ACTIONS(350),
    [sym_number_double] = ACTIONS(350),
    [anon_sym_BSLASH] = ACTIONS(350),
    [anon_sym_DQUOTE] = ACTIONS(350),
    [anon_sym_POUND_DQUOTE] = ACTIONS(350),
    [anon_sym_SQUOTE] = ACTIONS(350),
    [anon_sym_LPARENquote] = ACTIONS(350),
    [anon_sym_RPAREN] = ACTIONS(350),
    [anon_sym_COLON] = ACTIONS(352),
    [anon_sym_COLON_COLON] = ACTIONS(350),
    [anon_sym_LPAREN] = ACTIONS(352),
    [anon_sym_LBRACK] = ACTIONS(350),
    [anon_sym_RBRACK] = ACTIONS(350),
    [anon_sym_LBRACE] = ACTIONS(350),
    [anon_sym_RBRACE] = ACTIONS(350),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(350),
    [anon_sym_POUND] = ACTIONS(352),
    [anon_sym_POUND_LBRACE] = ACTIONS(350),
    [anon_sym_SEMI] = ACTIONS(350),
    [anon_sym_POUND_BANG] = ACTIONS(350),
    [anon_sym_POUND_] = ACTIONS(350),
    [anon_sym_LPARENcomment] = ACTIONS(350),
  },
  [76] = {
    [sym__anything] = STATE(76),
    [sym_boolean] = STATE(76),
    [sym_number] = STATE(76),
    [sym_character] = STATE(76),
    [sym_string] = STATE(76),
    [sym_regex] = STATE(76),
    [sym_quote] = STATE(76),
    [sym_keyword] = STATE(76),
    [sym_unqualified_keyword] = STATE(22),
    [sym_qualified_keyword] = STATE(22),
    [sym_list] = STATE(76),
    [sym_vector] = STATE(76),
    [sym_hash_map] = STATE(76),
    [sym_namespace_map] = STATE(23),
    [sym_set] = STATE(76),
    [sym_comment] = STATE(76),
    [sym_semicolon] = STATE(24),
    [sym_shebang_line] = STATE(24),
    [sym_ignore_form] = STATE(24),
    [sym_comment_macro] = STATE(24),
    [aux_sym_program_repeat1] = STATE(76),
    [sym_nil] = ACTIONS(354),
    [sym_true] = ACTIONS(252),
    [sym_false] = ACTIONS(252),
    [sym_number_long] = ACTIONS(255),
    [sym_number_double] = ACTIONS(255),
    [anon_sym_BSLASH] = ACTIONS(258),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [anon_sym_POUND_DQUOTE] = ACTIONS(264),
    [anon_sym_SQUOTE] = ACTIONS(357),
    [anon_sym_LPARENquote] = ACTIONS(270),
    [anon_sym_COLON] = ACTIONS(273),
    [anon_sym_COLON_COLON] = ACTIONS(276),
    [anon_sym_LPAREN] = ACTIONS(279),
    [anon_sym_LBRACK] = ACTIONS(282),
    [anon_sym_RBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(285),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(288),
    [anon_sym_POUND] = ACTIONS(291),
    [anon_sym_POUND_LBRACE] = ACTIONS(294),
    [anon_sym_SEMI] = ACTIONS(297),
    [anon_sym_POUND_BANG] = ACTIONS(300),
    [anon_sym_POUND_] = ACTIONS(360),
    [anon_sym_LPARENcomment] = ACTIONS(306),
  },
  [77] = {
    [sym_nil] = ACTIONS(363),
    [sym_true] = ACTIONS(363),
    [sym_false] = ACTIONS(363),
    [sym_number_long] = ACTIONS(363),
    [sym_number_double] = ACTIONS(363),
    [anon_sym_BSLASH] = ACTIONS(363),
    [anon_sym_DQUOTE] = ACTIONS(363),
    [anon_sym_POUND_DQUOTE] = ACTIONS(363),
    [anon_sym_SQUOTE] = ACTIONS(363),
    [anon_sym_LPARENquote] = ACTIONS(363),
    [anon_sym_COLON] = ACTIONS(365),
    [anon_sym_COLON_COLON] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(363),
    [anon_sym_LBRACE] = ACTIONS(363),
    [anon_sym_RBRACE] = ACTIONS(363),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(363),
    [anon_sym_POUND] = ACTIONS(365),
    [anon_sym_POUND_LBRACE] = ACTIONS(363),
    [anon_sym_SEMI] = ACTIONS(363),
    [anon_sym_POUND_BANG] = ACTIONS(363),
    [anon_sym_POUND_] = ACTIONS(363),
    [anon_sym_LPARENcomment] = ACTIONS(363),
  },
  [78] = {
    [sym_nil] = ACTIONS(367),
    [sym_true] = ACTIONS(367),
    [sym_false] = ACTIONS(367),
    [sym_number_long] = ACTIONS(367),
    [sym_number_double] = ACTIONS(367),
    [anon_sym_BSLASH] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(367),
    [anon_sym_POUND_DQUOTE] = ACTIONS(367),
    [anon_sym_SQUOTE] = ACTIONS(367),
    [anon_sym_LPARENquote] = ACTIONS(367),
    [anon_sym_COLON] = ACTIONS(369),
    [anon_sym_COLON_COLON] = ACTIONS(367),
    [anon_sym_LPAREN] = ACTIONS(369),
    [anon_sym_LBRACK] = ACTIONS(367),
    [anon_sym_LBRACE] = ACTIONS(367),
    [anon_sym_RBRACE] = ACTIONS(367),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(367),
    [anon_sym_POUND] = ACTIONS(369),
    [anon_sym_POUND_LBRACE] = ACTIONS(367),
    [anon_sym_SEMI] = ACTIONS(367),
    [anon_sym_POUND_BANG] = ACTIONS(367),
    [anon_sym_POUND_] = ACTIONS(367),
    [anon_sym_LPARENcomment] = ACTIONS(367),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(371),
    [sym_nil] = ACTIONS(371),
    [sym_true] = ACTIONS(371),
    [sym_false] = ACTIONS(371),
    [sym_number_long] = ACTIONS(371),
    [sym_number_double] = ACTIONS(371),
    [anon_sym_BSLASH] = ACTIONS(371),
    [anon_sym_DQUOTE] = ACTIONS(371),
    [anon_sym_POUND_DQUOTE] = ACTIONS(371),
    [anon_sym_SQUOTE] = ACTIONS(371),
    [anon_sym_LPARENquote] = ACTIONS(371),
    [anon_sym_RPAREN] = ACTIONS(371),
    [anon_sym_COLON] = ACTIONS(373),
    [anon_sym_COLON_COLON] = ACTIONS(371),
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(371),
    [anon_sym_RBRACK] = ACTIONS(371),
    [anon_sym_LBRACE] = ACTIONS(371),
    [anon_sym_RBRACE] = ACTIONS(371),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(371),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LBRACE] = ACTIONS(371),
    [anon_sym_SEMI] = ACTIONS(371),
    [anon_sym_POUND_BANG] = ACTIONS(371),
    [anon_sym_POUND_] = ACTIONS(371),
    [anon_sym_LPARENcomment] = ACTIONS(371),
  },
  [80] = {
    [sym__anything] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_number] = STATE(50),
    [sym_character] = STATE(50),
    [sym_string] = STATE(50),
    [sym_regex] = STATE(50),
    [sym_quote] = STATE(50),
    [sym_keyword] = STATE(50),
    [sym_unqualified_keyword] = STATE(22),
    [sym_qualified_keyword] = STATE(22),
    [sym_list] = STATE(50),
    [sym_vector] = STATE(50),
    [sym_hash_map] = STATE(50),
    [sym_namespace_map] = STATE(23),
    [sym_hash_map_kv_pair] = STATE(80),
    [sym_hash_map_key] = STATE(51),
    [sym_set] = STATE(50),
    [sym_comment] = STATE(50),
    [sym_semicolon] = STATE(24),
    [sym_shebang_line] = STATE(24),
    [sym_ignore_form] = STATE(24),
    [sym_comment_macro] = STATE(24),
    [aux_sym_hash_map_repeat1] = STATE(80),
    [sym_nil] = ACTIONS(375),
    [sym_true] = ACTIONS(378),
    [sym_false] = ACTIONS(378),
    [sym_number_long] = ACTIONS(381),
    [sym_number_double] = ACTIONS(381),
    [anon_sym_BSLASH] = ACTIONS(384),
    [anon_sym_DQUOTE] = ACTIONS(387),
    [anon_sym_POUND_DQUOTE] = ACTIONS(390),
    [anon_sym_SQUOTE] = ACTIONS(393),
    [anon_sym_LPARENquote] = ACTIONS(396),
    [anon_sym_COLON] = ACTIONS(399),
    [anon_sym_COLON_COLON] = ACTIONS(402),
    [anon_sym_LPAREN] = ACTIONS(405),
    [anon_sym_LBRACK] = ACTIONS(408),
    [anon_sym_LBRACE] = ACTIONS(411),
    [anon_sym_RBRACE] = ACTIONS(414),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(416),
    [anon_sym_POUND] = ACTIONS(419),
    [anon_sym_POUND_LBRACE] = ACTIONS(422),
    [anon_sym_SEMI] = ACTIONS(425),
    [anon_sym_POUND_BANG] = ACTIONS(428),
    [anon_sym_POUND_] = ACTIONS(431),
    [anon_sym_LPARENcomment] = ACTIONS(434),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(437),
    [sym_nil] = ACTIONS(437),
    [sym_true] = ACTIONS(437),
    [sym_false] = ACTIONS(437),
    [sym_number_long] = ACTIONS(437),
    [sym_number_double] = ACTIONS(437),
    [anon_sym_BSLASH] = ACTIONS(437),
    [anon_sym_DQUOTE] = ACTIONS(437),
    [anon_sym_POUND_DQUOTE] = ACTIONS(437),
    [anon_sym_SQUOTE] = ACTIONS(437),
    [anon_sym_LPARENquote] = ACTIONS(437),
    [anon_sym_RPAREN] = ACTIONS(437),
    [anon_sym_COLON] = ACTIONS(439),
    [anon_sym_COLON_COLON] = ACTIONS(437),
    [anon_sym_LPAREN] = ACTIONS(439),
    [anon_sym_LBRACK] = ACTIONS(437),
    [anon_sym_RBRACK] = ACTIONS(437),
    [anon_sym_LBRACE] = ACTIONS(437),
    [anon_sym_RBRACE] = ACTIONS(437),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(437),
    [anon_sym_POUND] = ACTIONS(439),
    [anon_sym_POUND_LBRACE] = ACTIONS(437),
    [anon_sym_SEMI] = ACTIONS(437),
    [anon_sym_POUND_BANG] = ACTIONS(437),
    [anon_sym_POUND_] = ACTIONS(437),
    [anon_sym_LPARENcomment] = ACTIONS(437),
  },
  [82] = {
    [sym__anything] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_number] = STATE(50),
    [sym_character] = STATE(50),
    [sym_string] = STATE(50),
    [sym_regex] = STATE(50),
    [sym_quote] = STATE(50),
    [sym_keyword] = STATE(50),
    [sym_unqualified_keyword] = STATE(22),
    [sym_qualified_keyword] = STATE(22),
    [sym_list] = STATE(50),
    [sym_vector] = STATE(50),
    [sym_hash_map] = STATE(50),
    [sym_namespace_map] = STATE(23),
    [sym_hash_map_kv_pair] = STATE(88),
    [sym_hash_map_key] = STATE(51),
    [sym_set] = STATE(50),
    [sym_comment] = STATE(50),
    [sym_semicolon] = STATE(24),
    [sym_shebang_line] = STATE(24),
    [sym_ignore_form] = STATE(24),
    [sym_comment_macro] = STATE(24),
    [aux_sym_hash_map_repeat1] = STATE(88),
    [sym_nil] = ACTIONS(97),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(441),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_POUND_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_POUND_BANG] = ACTIONS(41),
    [anon_sym_POUND_] = ACTIONS(103),
    [anon_sym_LPARENcomment] = ACTIONS(45),
  },
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(443),
    [sym_nil] = ACTIONS(443),
    [sym_true] = ACTIONS(443),
    [sym_false] = ACTIONS(443),
    [sym_number_long] = ACTIONS(443),
    [sym_number_double] = ACTIONS(443),
    [anon_sym_BSLASH] = ACTIONS(443),
    [anon_sym_DQUOTE] = ACTIONS(443),
    [anon_sym_POUND_DQUOTE] = ACTIONS(443),
    [anon_sym_SQUOTE] = ACTIONS(443),
    [anon_sym_LPARENquote] = ACTIONS(443),
    [anon_sym_RPAREN] = ACTIONS(443),
    [anon_sym_COLON] = ACTIONS(445),
    [anon_sym_COLON_COLON] = ACTIONS(443),
    [anon_sym_LPAREN] = ACTIONS(445),
    [anon_sym_LBRACK] = ACTIONS(443),
    [anon_sym_RBRACK] = ACTIONS(443),
    [anon_sym_LBRACE] = ACTIONS(443),
    [anon_sym_RBRACE] = ACTIONS(443),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(443),
    [anon_sym_POUND] = ACTIONS(445),
    [anon_sym_POUND_LBRACE] = ACTIONS(443),
    [anon_sym_SEMI] = ACTIONS(443),
    [anon_sym_POUND_BANG] = ACTIONS(443),
    [anon_sym_POUND_] = ACTIONS(443),
    [anon_sym_LPARENcomment] = ACTIONS(443),
  },
  [84] = {
    [sym__anything] = STATE(84),
    [sym_boolean] = STATE(84),
    [sym_number] = STATE(84),
    [sym_character] = STATE(84),
    [sym_string] = STATE(84),
    [sym_regex] = STATE(84),
    [sym_quote] = STATE(84),
    [sym_keyword] = STATE(84),
    [sym_unqualified_keyword] = STATE(22),
    [sym_qualified_keyword] = STATE(22),
    [sym_list] = STATE(84),
    [sym_vector] = STATE(84),
    [sym_hash_map] = STATE(84),
    [sym_namespace_map] = STATE(23),
    [sym_set] = STATE(84),
    [sym_comment] = STATE(84),
    [sym_semicolon] = STATE(24),
    [sym_shebang_line] = STATE(24),
    [sym_ignore_form] = STATE(24),
    [sym_comment_macro] = STATE(24),
    [aux_sym_program_repeat1] = STATE(84),
    [sym_nil] = ACTIONS(447),
    [sym_true] = ACTIONS(252),
    [sym_false] = ACTIONS(252),
    [sym_number_long] = ACTIONS(255),
    [sym_number_double] = ACTIONS(255),
    [anon_sym_BSLASH] = ACTIONS(258),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [anon_sym_POUND_DQUOTE] = ACTIONS(264),
    [anon_sym_SQUOTE] = ACTIONS(450),
    [anon_sym_LPARENquote] = ACTIONS(270),
    [anon_sym_COLON] = ACTIONS(273),
    [anon_sym_COLON_COLON] = ACTIONS(276),
    [anon_sym_LPAREN] = ACTIONS(279),
    [anon_sym_LBRACK] = ACTIONS(282),
    [anon_sym_LBRACE] = ACTIONS(285),
    [anon_sym_RBRACE] = ACTIONS(247),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(288),
    [anon_sym_POUND] = ACTIONS(291),
    [anon_sym_POUND_LBRACE] = ACTIONS(294),
    [anon_sym_SEMI] = ACTIONS(297),
    [anon_sym_POUND_BANG] = ACTIONS(300),
    [anon_sym_POUND_] = ACTIONS(453),
    [anon_sym_LPARENcomment] = ACTIONS(306),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(456),
    [sym_nil] = ACTIONS(456),
    [sym_true] = ACTIONS(456),
    [sym_false] = ACTIONS(456),
    [sym_number_long] = ACTIONS(456),
    [sym_number_double] = ACTIONS(456),
    [anon_sym_BSLASH] = ACTIONS(456),
    [anon_sym_DQUOTE] = ACTIONS(456),
    [anon_sym_POUND_DQUOTE] = ACTIONS(456),
    [anon_sym_SQUOTE] = ACTIONS(456),
    [anon_sym_LPARENquote] = ACTIONS(456),
    [anon_sym_RPAREN] = ACTIONS(456),
    [anon_sym_COLON] = ACTIONS(458),
    [anon_sym_COLON_COLON] = ACTIONS(456),
    [anon_sym_LPAREN] = ACTIONS(458),
    [anon_sym_LBRACK] = ACTIONS(456),
    [anon_sym_RBRACK] = ACTIONS(456),
    [anon_sym_LBRACE] = ACTIONS(456),
    [anon_sym_RBRACE] = ACTIONS(456),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(456),
    [anon_sym_POUND] = ACTIONS(458),
    [anon_sym_POUND_LBRACE] = ACTIONS(456),
    [anon_sym_SEMI] = ACTIONS(456),
    [anon_sym_POUND_BANG] = ACTIONS(456),
    [anon_sym_POUND_] = ACTIONS(456),
    [anon_sym_LPARENcomment] = ACTIONS(456),
  },
  [86] = {
    [sym__hex_char] = ACTIONS(460),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(462),
    [sym_nil] = ACTIONS(462),
    [sym_true] = ACTIONS(462),
    [sym_false] = ACTIONS(462),
    [sym_number_long] = ACTIONS(462),
    [sym_number_double] = ACTIONS(462),
    [anon_sym_BSLASH] = ACTIONS(462),
    [anon_sym_DQUOTE] = ACTIONS(462),
    [anon_sym_POUND_DQUOTE] = ACTIONS(462),
    [anon_sym_SQUOTE] = ACTIONS(462),
    [anon_sym_LPARENquote] = ACTIONS(462),
    [anon_sym_RPAREN] = ACTIONS(462),
    [anon_sym_COLON] = ACTIONS(464),
    [anon_sym_COLON_COLON] = ACTIONS(462),
    [anon_sym_LPAREN] = ACTIONS(464),
    [anon_sym_LBRACK] = ACTIONS(462),
    [anon_sym_RBRACK] = ACTIONS(462),
    [anon_sym_LBRACE] = ACTIONS(462),
    [anon_sym_RBRACE] = ACTIONS(462),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(462),
    [anon_sym_POUND] = ACTIONS(464),
    [anon_sym_POUND_LBRACE] = ACTIONS(462),
    [anon_sym_SEMI] = ACTIONS(462),
    [anon_sym_POUND_BANG] = ACTIONS(462),
    [anon_sym_POUND_] = ACTIONS(462),
    [anon_sym_LPARENcomment] = ACTIONS(462),
  },
  [88] = {
    [sym__anything] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_number] = STATE(50),
    [sym_character] = STATE(50),
    [sym_string] = STATE(50),
    [sym_regex] = STATE(50),
    [sym_quote] = STATE(50),
    [sym_keyword] = STATE(50),
    [sym_unqualified_keyword] = STATE(22),
    [sym_qualified_keyword] = STATE(22),
    [sym_list] = STATE(50),
    [sym_vector] = STATE(50),
    [sym_hash_map] = STATE(50),
    [sym_namespace_map] = STATE(23),
    [sym_hash_map_kv_pair] = STATE(80),
    [sym_hash_map_key] = STATE(51),
    [sym_set] = STATE(50),
    [sym_comment] = STATE(50),
    [sym_semicolon] = STATE(24),
    [sym_shebang_line] = STATE(24),
    [sym_ignore_form] = STATE(24),
    [sym_comment_macro] = STATE(24),
    [aux_sym_hash_map_repeat1] = STATE(80),
    [sym_nil] = ACTIONS(97),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(466),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_POUND_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_POUND_BANG] = ACTIONS(41),
    [anon_sym_POUND_] = ACTIONS(103),
    [anon_sym_LPARENcomment] = ACTIONS(45),
  },
  [89] = {
    [sym__hex_char] = ACTIONS(468),
  },
  [90] = {
    [ts_builtin_sym_end] = ACTIONS(470),
    [sym_nil] = ACTIONS(470),
    [sym_true] = ACTIONS(470),
    [sym_false] = ACTIONS(470),
    [sym_number_long] = ACTIONS(470),
    [sym_number_double] = ACTIONS(470),
    [anon_sym_BSLASH] = ACTIONS(470),
    [anon_sym_DQUOTE] = ACTIONS(470),
    [anon_sym_POUND_DQUOTE] = ACTIONS(470),
    [anon_sym_SQUOTE] = ACTIONS(470),
    [anon_sym_LPARENquote] = ACTIONS(470),
    [anon_sym_RPAREN] = ACTIONS(470),
    [anon_sym_COLON] = ACTIONS(472),
    [anon_sym_COLON_COLON] = ACTIONS(470),
    [anon_sym_LPAREN] = ACTIONS(472),
    [anon_sym_LBRACK] = ACTIONS(470),
    [anon_sym_RBRACK] = ACTIONS(470),
    [anon_sym_LBRACE] = ACTIONS(470),
    [anon_sym_RBRACE] = ACTIONS(470),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(470),
    [anon_sym_POUND] = ACTIONS(472),
    [anon_sym_POUND_LBRACE] = ACTIONS(470),
    [anon_sym_SEMI] = ACTIONS(470),
    [anon_sym_POUND_BANG] = ACTIONS(470),
    [anon_sym_POUND_] = ACTIONS(470),
    [anon_sym_LPARENcomment] = ACTIONS(470),
  },
  [91] = {
    [ts_builtin_sym_end] = ACTIONS(474),
    [sym_nil] = ACTIONS(474),
    [sym_true] = ACTIONS(474),
    [sym_false] = ACTIONS(474),
    [sym_number_long] = ACTIONS(474),
    [sym_number_double] = ACTIONS(474),
    [anon_sym_BSLASH] = ACTIONS(474),
    [anon_sym_DQUOTE] = ACTIONS(474),
    [anon_sym_POUND_DQUOTE] = ACTIONS(474),
    [anon_sym_SQUOTE] = ACTIONS(474),
    [anon_sym_LPARENquote] = ACTIONS(474),
    [anon_sym_RPAREN] = ACTIONS(474),
    [anon_sym_COLON] = ACTIONS(476),
    [anon_sym_COLON_COLON] = ACTIONS(474),
    [anon_sym_LPAREN] = ACTIONS(476),
    [anon_sym_LBRACK] = ACTIONS(474),
    [anon_sym_RBRACK] = ACTIONS(474),
    [anon_sym_LBRACE] = ACTIONS(474),
    [anon_sym_RBRACE] = ACTIONS(474),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(474),
    [anon_sym_POUND] = ACTIONS(476),
    [anon_sym_POUND_LBRACE] = ACTIONS(474),
    [anon_sym_SEMI] = ACTIONS(474),
    [anon_sym_POUND_BANG] = ACTIONS(474),
    [anon_sym_POUND_] = ACTIONS(474),
    [anon_sym_LPARENcomment] = ACTIONS(474),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(25),
  [9] = {.count = 1, .reusable = true}, SHIFT(2),
  [11] = {.count = 1, .reusable = true}, SHIFT(3),
  [13] = {.count = 1, .reusable = true}, SHIFT(4),
  [15] = {.count = 1, .reusable = true}, SHIFT(5),
  [17] = {.count = 1, .reusable = true}, SHIFT(6),
  [19] = {.count = 1, .reusable = true}, SHIFT(7),
  [21] = {.count = 1, .reusable = true}, SHIFT(8),
  [23] = {.count = 1, .reusable = false}, SHIFT(9),
  [25] = {.count = 1, .reusable = true}, SHIFT(10),
  [27] = {.count = 1, .reusable = false}, SHIFT(11),
  [29] = {.count = 1, .reusable = true}, SHIFT(12),
  [31] = {.count = 1, .reusable = true}, SHIFT(13),
  [33] = {.count = 1, .reusable = true}, SHIFT(14),
  [35] = {.count = 1, .reusable = false}, SHIFT(15),
  [37] = {.count = 1, .reusable = true}, SHIFT(16),
  [39] = {.count = 1, .reusable = true}, SHIFT(17),
  [41] = {.count = 1, .reusable = true}, SHIFT(18),
  [43] = {.count = 1, .reusable = true}, SHIFT(19),
  [45] = {.count = 1, .reusable = true}, SHIFT(20),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [49] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 1),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_number, 1),
  [53] = {.count = 1, .reusable = false}, REDUCE(sym_number, 1),
  [55] = {.count = 1, .reusable = false}, SHIFT(26),
  [57] = {.count = 1, .reusable = false}, SHIFT(27),
  [59] = {.count = 1, .reusable = false}, SHIFT(28),
  [61] = {.count = 1, .reusable = false}, SHIFT(29),
  [63] = {.count = 1, .reusable = false}, SHIFT(30),
  [65] = {.count = 1, .reusable = false}, SHIFT(31),
  [67] = {.count = 1, .reusable = false}, SHIFT(32),
  [69] = {.count = 1, .reusable = true}, SHIFT(33),
  [71] = {.count = 1, .reusable = true}, SHIFT(36),
  [73] = {.count = 1, .reusable = true}, SHIFT(34),
  [75] = {.count = 1, .reusable = true}, SHIFT(35),
  [77] = {.count = 1, .reusable = true}, SHIFT(37),
  [79] = {.count = 1, .reusable = true}, SHIFT(38),
  [81] = {.count = 1, .reusable = true}, SHIFT(42),
  [83] = {.count = 1, .reusable = true}, SHIFT(39),
  [85] = {.count = 1, .reusable = true}, SHIFT(40),
  [87] = {.count = 1, .reusable = true}, SHIFT(41),
  [89] = {.count = 1, .reusable = true}, SHIFT(46),
  [91] = {.count = 1, .reusable = true}, SHIFT(43),
  [93] = {.count = 1, .reusable = true}, SHIFT(44),
  [95] = {.count = 1, .reusable = true}, SHIFT(45),
  [97] = {.count = 1, .reusable = true}, SHIFT(50),
  [99] = {.count = 1, .reusable = true}, SHIFT(47),
  [101] = {.count = 1, .reusable = true}, SHIFT(48),
  [103] = {.count = 1, .reusable = true}, SHIFT(49),
  [105] = {.count = 1, .reusable = true}, SHIFT(53),
  [107] = {.count = 1, .reusable = true}, SHIFT(55),
  [109] = {.count = 1, .reusable = true}, SHIFT(59),
  [111] = {.count = 1, .reusable = true}, SHIFT(56),
  [113] = {.count = 1, .reusable = true}, SHIFT(57),
  [115] = {.count = 1, .reusable = true}, SHIFT(58),
  [117] = {.count = 1, .reusable = false}, SHIFT(60),
  [119] = {.count = 1, .reusable = false}, SHIFT(61),
  [121] = {.count = 1, .reusable = true}, SHIFT(62),
  [123] = {.count = 1, .reusable = true}, SHIFT(64),
  [125] = {.count = 1, .reusable = true}, SHIFT(63),
  [127] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_keyword, 1),
  [131] = {.count = 1, .reusable = false}, REDUCE(sym_keyword, 1),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map, 1),
  [135] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map, 1),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 1),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [143] = {.count = 1, .reusable = true}, SHIFT(65),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_character, 2),
  [147] = {.count = 1, .reusable = false}, REDUCE(sym_character, 2),
  [149] = {.count = 1, .reusable = true}, SHIFT(66),
  [151] = {.count = 1, .reusable = true}, SHIFT(67),
  [153] = {.count = 1, .reusable = false}, SHIFT(67),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [157] = {.count = 1, .reusable = false}, REDUCE(sym_string, 2),
  [159] = {.count = 1, .reusable = false}, SHIFT(68),
  [161] = {.count = 1, .reusable = false}, SHIFT(69),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_regex, 2),
  [165] = {.count = 1, .reusable = false}, REDUCE(sym_regex, 2),
  [167] = {.count = 1, .reusable = false}, SHIFT(70),
  [169] = {.count = 1, .reusable = false}, SHIFT(71),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_quote, 2),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym_quote, 2),
  [175] = {.count = 1, .reusable = true}, SHIFT(72),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_unqualified_keyword, 2),
  [179] = {.count = 1, .reusable = false}, REDUCE(sym_unqualified_keyword, 2),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_keyword, 2),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_keyword, 2),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_list, 2),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym_list, 2),
  [189] = {.count = 1, .reusable = true}, SHIFT(74),
  [191] = {.count = 1, .reusable = true}, SHIFT(73),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_vector, 2),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym_vector, 2),
  [197] = {.count = 1, .reusable = true}, SHIFT(76),
  [199] = {.count = 1, .reusable = true}, SHIFT(75),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map, 2),
  [203] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map, 2),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map_key, 1),
  [207] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map_key, 1),
  [209] = {.count = 1, .reusable = true}, SHIFT(77),
  [211] = {.count = 1, .reusable = true}, SHIFT(79),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 2),
  [215] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 2),
  [217] = {.count = 1, .reusable = true}, SHIFT(81),
  [219] = {.count = 1, .reusable = true}, SHIFT(82),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_set, 2),
  [223] = {.count = 1, .reusable = false}, REDUCE(sym_set, 2),
  [225] = {.count = 1, .reusable = true}, SHIFT(84),
  [227] = {.count = 1, .reusable = true}, SHIFT(83),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_semicolon, 2),
  [231] = {.count = 1, .reusable = false}, REDUCE(sym_semicolon, 2),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_shebang_line, 2),
  [235] = {.count = 1, .reusable = false}, REDUCE(sym_shebang_line, 2),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_ignore_form, 2),
  [239] = {.count = 1, .reusable = false}, REDUCE(sym_ignore_form, 2),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_comment_macro, 2),
  [243] = {.count = 1, .reusable = false}, REDUCE(sym_comment_macro, 2),
  [245] = {.count = 1, .reusable = true}, SHIFT(85),
  [247] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [249] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(65),
  [252] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [255] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [258] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [261] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [264] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [267] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [270] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [273] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [276] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [279] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [282] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [285] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [288] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [291] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [294] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(16),
  [297] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [300] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [303] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(19),
  [306] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(20),
  [309] = {.count = 1, .reusable = true}, SHIFT(86),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym__octal_char, 2),
  [313] = {.count = 1, .reusable = false}, REDUCE(sym__octal_char, 2),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [317] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [319] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2),
  [321] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(69),
  [324] = {.count = 1, .reusable = true}, REDUCE(sym_regex, 3),
  [326] = {.count = 1, .reusable = false}, REDUCE(sym_regex, 3),
  [328] = {.count = 1, .reusable = false}, REDUCE(aux_sym_regex_repeat1, 2),
  [330] = {.count = 2, .reusable = false}, REDUCE(aux_sym_regex_repeat1, 2), SHIFT_REPEAT(71),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym_quote, 3),
  [335] = {.count = 1, .reusable = false}, REDUCE(sym_quote, 3),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym_list, 3),
  [339] = {.count = 1, .reusable = false}, REDUCE(sym_list, 3),
  [341] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(74),
  [344] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(39),
  [347] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(41),
  [350] = {.count = 1, .reusable = true}, REDUCE(sym_vector, 3),
  [352] = {.count = 1, .reusable = false}, REDUCE(sym_vector, 3),
  [354] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(76),
  [357] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(43),
  [360] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(45),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map_value, 1),
  [365] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map_value, 1),
  [367] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map_kv_pair, 2),
  [369] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map_kv_pair, 2),
  [371] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map, 3),
  [373] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map, 3),
  [375] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(50),
  [378] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(2),
  [381] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(3),
  [384] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(4),
  [387] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(5),
  [390] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(6),
  [393] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(47),
  [396] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(8),
  [399] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(9),
  [402] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(10),
  [405] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(11),
  [408] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(12),
  [411] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(13),
  [414] = {.count = 1, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2),
  [416] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(14),
  [419] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(15),
  [422] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(16),
  [425] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(17),
  [428] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(18),
  [431] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(49),
  [434] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(20),
  [437] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 3),
  [439] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 3),
  [441] = {.count = 1, .reusable = true}, SHIFT(87),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym_set, 3),
  [445] = {.count = 1, .reusable = false}, REDUCE(sym_set, 3),
  [447] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(84),
  [450] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(56),
  [453] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(58),
  [456] = {.count = 1, .reusable = true}, REDUCE(sym_comment_macro, 3),
  [458] = {.count = 1, .reusable = false}, REDUCE(sym_comment_macro, 3),
  [460] = {.count = 1, .reusable = true}, SHIFT(89),
  [462] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 4),
  [464] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 4),
  [466] = {.count = 1, .reusable = true}, SHIFT(90),
  [468] = {.count = 1, .reusable = true}, SHIFT(91),
  [470] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 5),
  [472] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 5),
  [474] = {.count = 1, .reusable = true}, REDUCE(sym__unicode_char, 5),
  [476] = {.count = 1, .reusable = false}, REDUCE(sym__unicode_char, 5),
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
