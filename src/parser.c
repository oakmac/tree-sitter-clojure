#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 98
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
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
  anon_sym_SLASH = 30,
  sym__keyword_chars = 31,
  sym__symbol_chars = 32,
  anon_sym_LPAREN = 33,
  anon_sym_LBRACK = 34,
  anon_sym_RBRACK = 35,
  anon_sym_LBRACE = 36,
  anon_sym_RBRACE = 37,
  anon_sym_POUND_COLON_COLON_LBRACE = 38,
  anon_sym_POUND = 39,
  anon_sym_POUND_LBRACE = 40,
  anon_sym_SEMI = 41,
  aux_sym_SLASH_DOT_STAR_SLASH = 42,
  anon_sym_POUND_BANG = 43,
  anon_sym_POUND_ = 44,
  anon_sym_LPARENcomment = 45,
  sym_program = 46,
  sym__anything = 47,
  sym_boolean = 48,
  sym_number = 49,
  sym_character = 50,
  sym__special_char = 51,
  sym__unicode_char = 52,
  sym__octal_char = 53,
  sym__octal_num = 54,
  sym_string = 55,
  sym_regex = 56,
  sym_quote = 57,
  sym_keyword = 58,
  sym__unqualified_keyword = 59,
  sym_qualified_keyword = 60,
  sym_symbol = 61,
  sym_qualified_symbol = 62,
  sym_list = 63,
  sym_vector = 64,
  sym_hash_map = 65,
  sym_namespace_map = 66,
  sym_hash_map_kv_pair = 67,
  sym_hash_map_key = 68,
  sym_hash_map_value = 69,
  sym_set = 70,
  sym_comment = 71,
  sym_semicolon = 72,
  sym_shebang_line = 73,
  sym_ignore_form = 74,
  sym_comment_macro = 75,
  aux_sym_program_repeat1 = 76,
  aux_sym_string_repeat1 = 77,
  aux_sym_regex_repeat1 = 78,
  aux_sym_hash_map_repeat1 = 79,
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
  [anon_sym_SLASH] = "/",
  [sym__keyword_chars] = "_keyword_chars",
  [sym__symbol_chars] = "_symbol_chars",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_POUND_COLON_COLON_LBRACE] = "#::{",
  [anon_sym_POUND] = "#",
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
  [sym__unqualified_keyword] = "_unqualified_keyword",
  [sym_qualified_keyword] = "qualified_keyword",
  [sym_symbol] = "symbol",
  [sym_qualified_symbol] = "qualified_symbol",
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
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym__keyword_chars] = {
    .visible = false,
    .named = true,
  },
  [sym__symbol_chars] = {
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
  [sym__unqualified_keyword] = {
    .visible = false,
    .named = true,
  },
  [sym_qualified_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_symbol] = {
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
      if (lookahead == '/')
        ADVANCE(34);
      if (lookahead == ':')
        ADVANCE(35);
      if (lookahead == ';')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(38);
      if (lookahead == '\\')
        ADVANCE(39);
      if (lookahead == ']')
        ADVANCE(40);
      if (lookahead == 'n')
        ADVANCE(41);
      if (lookahead == 'o')
        ADVANCE(50);
      if (lookahead == 'r')
        ADVANCE(51);
      if (lookahead == 's')
        ADVANCE(57);
      if (lookahead == 't')
        ADVANCE(62);
      if (lookahead == 'u')
        ADVANCE(68);
      if (lookahead == '{')
        ADVANCE(69);
      if (lookahead == '}')
        ADVANCE(70);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(71);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(77);
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
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 41:
      if (lookahead == 'e')
        ADVANCE(42);
      if (lookahead == 'i')
        ADVANCE(48);
      END_STATE();
    case 42:
      if (lookahead == 'w')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'l')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'i')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'n')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'e')
        ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_newline);
      END_STATE();
    case 48:
      if (lookahead == 'l')
        ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 51:
      if (lookahead == 'e')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 't')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'u')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'r')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'n')
        ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 57:
      if (lookahead == 'p')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'a')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'c')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'e')
        ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_space);
      END_STATE();
    case 62:
      if (lookahead == 'a')
        ADVANCE(63);
      if (lookahead == 'r')
        ADVANCE(65);
      END_STATE();
    case 63:
      if (lookahead == 'b')
        ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_tab);
      END_STATE();
    case 65:
      if (lookahead == 'u')
        ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'e')
        ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_number_long);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_number_long);
      if (lookahead == '.')
        ADVANCE(74);
      if (lookahead == '_')
        ADVANCE(75);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(29);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(73);
      END_STATE();
    case 74:
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
    case 75:
      if (lookahead == '_')
        ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == '.')
        ADVANCE(74);
      if (lookahead == '_')
        ADVANCE(75);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(29);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__hex_char);
      END_STATE();
    case 78:
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
        SKIP(78);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == ':')
        ADVANCE(35);
      if (lookahead == ';')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(38);
      if (lookahead == '\\')
        ADVANCE(39);
      if (lookahead == 'f')
        ADVANCE(79);
      if (lookahead == 'n')
        ADVANCE(85);
      if (lookahead == 't')
        ADVANCE(88);
      if (lookahead == '{')
        ADVANCE(69);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(78);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(73);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(84);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'a')
        ADVANCE(80);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(84);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'l')
        ADVANCE(81);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(84);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 's')
        ADVANCE(82);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(84);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'e')
        ADVANCE(83);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(84);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'i')
        ADVANCE(86);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(84);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'l')
        ADVANCE(87);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(84);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_nil);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(84);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'r')
        ADVANCE(89);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(84);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'u')
        ADVANCE(90);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(84);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'e')
        ADVANCE(91);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(84);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(84);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(93);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(84);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_number_long);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(93);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(84);
      END_STATE();
    case 94:
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
        SKIP(94);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == ':')
        ADVANCE(35);
      if (lookahead == ';')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(38);
      if (lookahead == '\\')
        ADVANCE(39);
      if (lookahead == ']')
        ADVANCE(40);
      if (lookahead == 'f')
        ADVANCE(79);
      if (lookahead == 'n')
        ADVANCE(85);
      if (lookahead == 't')
        ADVANCE(88);
      if (lookahead == '{')
        ADVANCE(69);
      if (lookahead == '}')
        ADVANCE(70);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(94);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(73);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(84);
      END_STATE();
    case 95:
      if (lookahead == '\n')
        SKIP(95);
      if (lookahead == ',')
        ADVANCE(96);
      if (lookahead == 'b')
        ADVANCE(97);
      if (lookahead == 'f')
        ADVANCE(106);
      if (lookahead == 'n')
        ADVANCE(114);
      if (lookahead == 'o')
        ADVANCE(50);
      if (lookahead == 'r')
        ADVANCE(115);
      if (lookahead == 's')
        ADVANCE(116);
      if (lookahead == 't')
        ADVANCE(117);
      if (lookahead == 'u')
        ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__normal_char);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'a')
        ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == 'c')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'k')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 's')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 'p')
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 'a')
        ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'c')
        ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == 'e')
        ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_backspace);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'o')
        ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == 'r')
        ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == 'm')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == 'f')
        ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == 'e')
        ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == 'e')
        ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == 'd')
        ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_formfeed);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'e')
        ADVANCE(42);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'e')
        ADVANCE(52);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'p')
        ADVANCE(58);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'a')
        ADVANCE(63);
      END_STATE();
    case 118:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(119);
      if (lookahead == '\\')
        ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(119);
      if (lookahead != 0)
        ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 122:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(123);
      if (lookahead == '\\')
        ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(123);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(122);
      if (lookahead != 0)
        ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(121);
      END_STATE();
    case 125:
      if (lookahead == ',')
        SKIP(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(125);
      if (lookahead == '!' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__keyword_chars);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(126);
      END_STATE();
    case 127:
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
        SKIP(127);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == '/')
        ADVANCE(34);
      if (lookahead == ':')
        ADVANCE(35);
      if (lookahead == ';')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(38);
      if (lookahead == '\\')
        ADVANCE(39);
      if (lookahead == ']')
        ADVANCE(40);
      if (lookahead == 'f')
        ADVANCE(79);
      if (lookahead == 'n')
        ADVANCE(85);
      if (lookahead == 't')
        ADVANCE(88);
      if (lookahead == '{')
        ADVANCE(69);
      if (lookahead == '}')
        ADVANCE(70);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(127);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(73);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(84);
      END_STATE();
    case 128:
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
        SKIP(128);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == ':')
        ADVANCE(35);
      if (lookahead == ';')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(38);
      if (lookahead == '\\')
        ADVANCE(39);
      if (lookahead == 'f')
        ADVANCE(79);
      if (lookahead == 'n')
        ADVANCE(85);
      if (lookahead == 't')
        ADVANCE(88);
      if (lookahead == '{')
        ADVANCE(69);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(128);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(73);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(84);
      END_STATE();
    case 129:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ',')
        SKIP(129);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == ':')
        ADVANCE(35);
      if (lookahead == ';')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(38);
      if (lookahead == '\\')
        ADVANCE(39);
      if (lookahead == ']')
        ADVANCE(40);
      if (lookahead == 'f')
        ADVANCE(79);
      if (lookahead == 'n')
        ADVANCE(85);
      if (lookahead == 't')
        ADVANCE(88);
      if (lookahead == '{')
        ADVANCE(69);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(129);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(73);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(84);
      END_STATE();
    case 130:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ',')
        SKIP(130);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == ':')
        ADVANCE(35);
      if (lookahead == ';')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(38);
      if (lookahead == '\\')
        ADVANCE(39);
      if (lookahead == 'f')
        ADVANCE(79);
      if (lookahead == 'n')
        ADVANCE(85);
      if (lookahead == 't')
        ADVANCE(88);
      if (lookahead == '{')
        ADVANCE(69);
      if (lookahead == '}')
        ADVANCE(70);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(130);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(73);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(84);
      END_STATE();
    case 131:
      if (lookahead == ',')
        SKIP(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(131);
      if (lookahead == '!' ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(84);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == '\n')
        SKIP(132);
      if (lookahead == ',')
        ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(133);
      if (lookahead != 0)
        ADVANCE(134);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == ',')
        ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(134);
      END_STATE();
    case 135:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        SKIP(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(135);
      END_STATE();
    case 136:
      if (lookahead == ',')
        SKIP(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(77);
      END_STATE();
    case 137:
      if (lookahead == ',')
        SKIP(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(137);
      if (('0' <= lookahead && lookahead <= '3'))
        ADVANCE(138);
      if (('4' <= lookahead && lookahead <= '7'))
        ADVANCE(141);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 78},
  [2] = {.lex_state = 94},
  [3] = {.lex_state = 94},
  [4] = {.lex_state = 95},
  [5] = {.lex_state = 118},
  [6] = {.lex_state = 122},
  [7] = {.lex_state = 78},
  [8] = {.lex_state = 78},
  [9] = {.lex_state = 125},
  [10] = {.lex_state = 125},
  [11] = {.lex_state = 127},
  [12] = {.lex_state = 128},
  [13] = {.lex_state = 129},
  [14] = {.lex_state = 130},
  [15] = {.lex_state = 130},
  [16] = {.lex_state = 131},
  [17] = {.lex_state = 130},
  [18] = {.lex_state = 132},
  [19] = {.lex_state = 132},
  [20] = {.lex_state = 78},
  [21] = {.lex_state = 128},
  [22] = {.lex_state = 135},
  [23] = {.lex_state = 94},
  [24] = {.lex_state = 94},
  [25] = {.lex_state = 94},
  [26] = {.lex_state = 94},
  [27] = {.lex_state = 78},
  [28] = {.lex_state = 94},
  [29] = {.lex_state = 136},
  [30] = {.lex_state = 137},
  [31] = {.lex_state = 94},
  [32] = {.lex_state = 118},
  [33] = {.lex_state = 94},
  [34] = {.lex_state = 122},
  [35] = {.lex_state = 94},
  [36] = {.lex_state = 78},
  [37] = {.lex_state = 78},
  [38] = {.lex_state = 128},
  [39] = {.lex_state = 94},
  [40] = {.lex_state = 127},
  [41] = {.lex_state = 131},
  [42] = {.lex_state = 78},
  [43] = {.lex_state = 94},
  [44] = {.lex_state = 78},
  [45] = {.lex_state = 128},
  [46] = {.lex_state = 78},
  [47] = {.lex_state = 94},
  [48] = {.lex_state = 78},
  [49] = {.lex_state = 129},
  [50] = {.lex_state = 78},
  [51] = {.lex_state = 94},
  [52] = {.lex_state = 78},
  [53] = {.lex_state = 78},
  [54] = {.lex_state = 78},
  [55] = {.lex_state = 130},
  [56] = {.lex_state = 94},
  [57] = {.lex_state = 130},
  [58] = {.lex_state = 78},
  [59] = {.lex_state = 78},
  [60] = {.lex_state = 94},
  [61] = {.lex_state = 78},
  [62] = {.lex_state = 130},
  [63] = {.lex_state = 94},
  [64] = {.lex_state = 94},
  [65] = {.lex_state = 94},
  [66] = {.lex_state = 94},
  [67] = {.lex_state = 128},
  [68] = {.lex_state = 78},
  [69] = {.lex_state = 136},
  [70] = {.lex_state = 94},
  [71] = {.lex_state = 94},
  [72] = {.lex_state = 118},
  [73] = {.lex_state = 94},
  [74] = {.lex_state = 122},
  [75] = {.lex_state = 94},
  [76] = {.lex_state = 125},
  [77] = {.lex_state = 94},
  [78] = {.lex_state = 94},
  [79] = {.lex_state = 128},
  [80] = {.lex_state = 94},
  [81] = {.lex_state = 129},
  [82] = {.lex_state = 130},
  [83] = {.lex_state = 130},
  [84] = {.lex_state = 94},
  [85] = {.lex_state = 130},
  [86] = {.lex_state = 94},
  [87] = {.lex_state = 130},
  [88] = {.lex_state = 94},
  [89] = {.lex_state = 130},
  [90] = {.lex_state = 94},
  [91] = {.lex_state = 136},
  [92] = {.lex_state = 94},
  [93] = {.lex_state = 94},
  [94] = {.lex_state = 130},
  [95] = {.lex_state = 136},
  [96] = {.lex_state = 94},
  [97] = {.lex_state = 94},
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
    [anon_sym_SLASH] = ACTIONS(1),
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
    [sym_program] = STATE(22),
    [sym__anything] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym_number] = STATE(27),
    [sym_character] = STATE(27),
    [sym_string] = STATE(27),
    [sym_regex] = STATE(27),
    [sym_quote] = STATE(27),
    [sym_keyword] = STATE(27),
    [sym__unqualified_keyword] = STATE(23),
    [sym_qualified_keyword] = STATE(23),
    [sym_symbol] = STATE(27),
    [sym_qualified_symbol] = STATE(24),
    [sym_list] = STATE(27),
    [sym_vector] = STATE(27),
    [sym_hash_map] = STATE(27),
    [sym_namespace_map] = STATE(25),
    [sym_set] = STATE(27),
    [sym_comment] = STATE(27),
    [sym_semicolon] = STATE(26),
    [sym_shebang_line] = STATE(26),
    [sym_ignore_form] = STATE(26),
    [sym_comment_macro] = STATE(26),
    [aux_sym_program_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_nil] = ACTIONS(7),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [sym__symbol_chars] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(45),
    [anon_sym_POUND_] = ACTIONS(47),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_nil] = ACTIONS(53),
    [sym_true] = ACTIONS(53),
    [sym_false] = ACTIONS(53),
    [sym_number_long] = ACTIONS(53),
    [sym_number_double] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_POUND_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [anon_sym_LPARENquote] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(51),
    [anon_sym_COLON] = ACTIONS(53),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__symbol_chars] = ACTIONS(53),
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
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_nil] = ACTIONS(57),
    [sym_true] = ACTIONS(57),
    [sym_false] = ACTIONS(57),
    [sym_number_long] = ACTIONS(57),
    [sym_number_double] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_LPARENquote] = ACTIONS(55),
    [anon_sym_RPAREN] = ACTIONS(55),
    [anon_sym_COLON] = ACTIONS(57),
    [anon_sym_COLON_COLON] = ACTIONS(55),
    [sym__symbol_chars] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_RBRACK] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(55),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(55),
    [anon_sym_POUND] = ACTIONS(57),
    [anon_sym_POUND_LBRACE] = ACTIONS(55),
    [anon_sym_SEMI] = ACTIONS(55),
    [anon_sym_POUND_BANG] = ACTIONS(55),
    [anon_sym_POUND_] = ACTIONS(55),
    [anon_sym_LPARENcomment] = ACTIONS(55),
  },
  [4] = {
    [sym__special_char] = STATE(28),
    [sym__unicode_char] = STATE(28),
    [sym__octal_char] = STATE(28),
    [sym__normal_char] = ACTIONS(59),
    [anon_sym_newline] = ACTIONS(59),
    [anon_sym_space] = ACTIONS(59),
    [anon_sym_tab] = ACTIONS(59),
    [anon_sym_formfeed] = ACTIONS(59),
    [anon_sym_backspace] = ACTIONS(59),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_u] = ACTIONS(61),
    [anon_sym_o] = ACTIONS(63),
  },
  [5] = {
    [aux_sym_string_repeat1] = STATE(32),
    [anon_sym_DQUOTE] = ACTIONS(65),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(67),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(67),
  },
  [6] = {
    [aux_sym_regex_repeat1] = STATE(34),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(71),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(71),
  },
  [7] = {
    [sym__anything] = STATE(35),
    [sym_boolean] = STATE(35),
    [sym_number] = STATE(35),
    [sym_character] = STATE(35),
    [sym_string] = STATE(35),
    [sym_regex] = STATE(35),
    [sym_quote] = STATE(35),
    [sym_keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(23),
    [sym_qualified_keyword] = STATE(23),
    [sym_symbol] = STATE(35),
    [sym_qualified_symbol] = STATE(24),
    [sym_list] = STATE(35),
    [sym_vector] = STATE(35),
    [sym_hash_map] = STATE(35),
    [sym_namespace_map] = STATE(25),
    [sym_set] = STATE(35),
    [sym_comment] = STATE(35),
    [sym_semicolon] = STATE(26),
    [sym_shebang_line] = STATE(26),
    [sym_ignore_form] = STATE(26),
    [sym_comment_macro] = STATE(26),
    [sym_nil] = ACTIONS(73),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [sym__symbol_chars] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(45),
    [anon_sym_POUND_] = ACTIONS(47),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [8] = {
    [sym__anything] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_number] = STATE(38),
    [sym_character] = STATE(38),
    [sym_string] = STATE(38),
    [sym_regex] = STATE(38),
    [sym_quote] = STATE(38),
    [sym_keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(23),
    [sym_qualified_keyword] = STATE(23),
    [sym_symbol] = STATE(38),
    [sym_qualified_symbol] = STATE(24),
    [sym_list] = STATE(38),
    [sym_vector] = STATE(38),
    [sym_hash_map] = STATE(38),
    [sym_namespace_map] = STATE(25),
    [sym_set] = STATE(38),
    [sym_comment] = STATE(38),
    [sym_semicolon] = STATE(26),
    [sym_shebang_line] = STATE(26),
    [sym_ignore_form] = STATE(26),
    [sym_comment_macro] = STATE(26),
    [sym_nil] = ACTIONS(75),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [sym__symbol_chars] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(45),
    [anon_sym_POUND_] = ACTIONS(79),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [9] = {
    [sym__keyword_chars] = ACTIONS(81),
  },
  [10] = {
    [sym__keyword_chars] = ACTIONS(83),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [sym_nil] = ACTIONS(87),
    [sym_true] = ACTIONS(87),
    [sym_false] = ACTIONS(87),
    [sym_number_long] = ACTIONS(87),
    [sym_number_double] = ACTIONS(85),
    [anon_sym_BSLASH] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_POUND_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_LPARENquote] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(87),
    [anon_sym_COLON_COLON] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(89),
    [sym__symbol_chars] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(85),
    [anon_sym_POUND] = ACTIONS(87),
    [anon_sym_POUND_LBRACE] = ACTIONS(85),
    [anon_sym_SEMI] = ACTIONS(85),
    [anon_sym_POUND_BANG] = ACTIONS(85),
    [anon_sym_POUND_] = ACTIONS(85),
    [anon_sym_LPARENcomment] = ACTIONS(85),
  },
  [12] = {
    [sym__anything] = STATE(45),
    [sym_boolean] = STATE(45),
    [sym_number] = STATE(45),
    [sym_character] = STATE(45),
    [sym_string] = STATE(45),
    [sym_regex] = STATE(45),
    [sym_quote] = STATE(45),
    [sym_keyword] = STATE(45),
    [sym__unqualified_keyword] = STATE(23),
    [sym_qualified_keyword] = STATE(23),
    [sym_symbol] = STATE(45),
    [sym_qualified_symbol] = STATE(24),
    [sym_list] = STATE(45),
    [sym_vector] = STATE(45),
    [sym_hash_map] = STATE(45),
    [sym_namespace_map] = STATE(25),
    [sym_set] = STATE(45),
    [sym_comment] = STATE(45),
    [sym_semicolon] = STATE(26),
    [sym_shebang_line] = STATE(26),
    [sym_ignore_form] = STATE(26),
    [sym_comment_macro] = STATE(26),
    [aux_sym_program_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(91),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [sym__symbol_chars] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(45),
    [anon_sym_POUND_] = ACTIONS(97),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [13] = {
    [sym__anything] = STATE(49),
    [sym_boolean] = STATE(49),
    [sym_number] = STATE(49),
    [sym_character] = STATE(49),
    [sym_string] = STATE(49),
    [sym_regex] = STATE(49),
    [sym_quote] = STATE(49),
    [sym_keyword] = STATE(49),
    [sym__unqualified_keyword] = STATE(23),
    [sym_qualified_keyword] = STATE(23),
    [sym_symbol] = STATE(49),
    [sym_qualified_symbol] = STATE(24),
    [sym_list] = STATE(49),
    [sym_vector] = STATE(49),
    [sym_hash_map] = STATE(49),
    [sym_namespace_map] = STATE(25),
    [sym_set] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_semicolon] = STATE(26),
    [sym_shebang_line] = STATE(26),
    [sym_ignore_form] = STATE(26),
    [sym_comment_macro] = STATE(26),
    [aux_sym_program_repeat1] = STATE(49),
    [sym_nil] = ACTIONS(99),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(101),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [sym__symbol_chars] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_RBRACK] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(45),
    [anon_sym_POUND_] = ACTIONS(105),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [14] = {
    [sym__anything] = STATE(53),
    [sym_boolean] = STATE(53),
    [sym_number] = STATE(53),
    [sym_character] = STATE(53),
    [sym_string] = STATE(53),
    [sym_regex] = STATE(53),
    [sym_quote] = STATE(53),
    [sym_keyword] = STATE(53),
    [sym__unqualified_keyword] = STATE(23),
    [sym_qualified_keyword] = STATE(23),
    [sym_symbol] = STATE(53),
    [sym_qualified_symbol] = STATE(24),
    [sym_list] = STATE(53),
    [sym_vector] = STATE(53),
    [sym_hash_map] = STATE(53),
    [sym_namespace_map] = STATE(25),
    [sym_hash_map_kv_pair] = STATE(55),
    [sym_hash_map_key] = STATE(54),
    [sym_set] = STATE(53),
    [sym_comment] = STATE(53),
    [sym_semicolon] = STATE(26),
    [sym_shebang_line] = STATE(26),
    [sym_ignore_form] = STATE(26),
    [sym_comment_macro] = STATE(26),
    [aux_sym_hash_map_repeat1] = STATE(55),
    [sym_nil] = ACTIONS(107),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [sym__symbol_chars] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(45),
    [anon_sym_POUND_] = ACTIONS(113),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [15] = {
    [sym__anything] = STATE(53),
    [sym_boolean] = STATE(53),
    [sym_number] = STATE(53),
    [sym_character] = STATE(53),
    [sym_string] = STATE(53),
    [sym_regex] = STATE(53),
    [sym_quote] = STATE(53),
    [sym_keyword] = STATE(53),
    [sym__unqualified_keyword] = STATE(23),
    [sym_qualified_keyword] = STATE(23),
    [sym_symbol] = STATE(53),
    [sym_qualified_symbol] = STATE(24),
    [sym_list] = STATE(53),
    [sym_vector] = STATE(53),
    [sym_hash_map] = STATE(53),
    [sym_namespace_map] = STATE(25),
    [sym_hash_map_kv_pair] = STATE(57),
    [sym_hash_map_key] = STATE(54),
    [sym_set] = STATE(53),
    [sym_comment] = STATE(53),
    [sym_semicolon] = STATE(26),
    [sym_shebang_line] = STATE(26),
    [sym_ignore_form] = STATE(26),
    [sym_comment_macro] = STATE(26),
    [aux_sym_hash_map_repeat1] = STATE(57),
    [sym_nil] = ACTIONS(107),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [sym__symbol_chars] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(45),
    [anon_sym_POUND_] = ACTIONS(113),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [16] = {
    [sym__symbol_chars] = ACTIONS(117),
  },
  [17] = {
    [sym__anything] = STATE(62),
    [sym_boolean] = STATE(62),
    [sym_number] = STATE(62),
    [sym_character] = STATE(62),
    [sym_string] = STATE(62),
    [sym_regex] = STATE(62),
    [sym_quote] = STATE(62),
    [sym_keyword] = STATE(62),
    [sym__unqualified_keyword] = STATE(23),
    [sym_qualified_keyword] = STATE(23),
    [sym_symbol] = STATE(62),
    [sym_qualified_symbol] = STATE(24),
    [sym_list] = STATE(62),
    [sym_vector] = STATE(62),
    [sym_hash_map] = STATE(62),
    [sym_namespace_map] = STATE(25),
    [sym_set] = STATE(62),
    [sym_comment] = STATE(62),
    [sym_semicolon] = STATE(26),
    [sym_shebang_line] = STATE(26),
    [sym_ignore_form] = STATE(26),
    [sym_comment_macro] = STATE(26),
    [aux_sym_program_repeat1] = STATE(62),
    [sym_nil] = ACTIONS(119),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(121),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [sym__symbol_chars] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(123),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(45),
    [anon_sym_POUND_] = ACTIONS(125),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [18] = {
    [aux_sym_SLASH_DOT_STAR_SLASH] = ACTIONS(127),
  },
  [19] = {
    [aux_sym_SLASH_DOT_STAR_SLASH] = ACTIONS(129),
  },
  [20] = {
    [sym__anything] = STATE(65),
    [sym_boolean] = STATE(65),
    [sym_number] = STATE(65),
    [sym_character] = STATE(65),
    [sym_string] = STATE(65),
    [sym_regex] = STATE(65),
    [sym_quote] = STATE(65),
    [sym_keyword] = STATE(65),
    [sym__unqualified_keyword] = STATE(23),
    [sym_qualified_keyword] = STATE(23),
    [sym_symbol] = STATE(65),
    [sym_qualified_symbol] = STATE(24),
    [sym_list] = STATE(65),
    [sym_vector] = STATE(65),
    [sym_hash_map] = STATE(65),
    [sym_namespace_map] = STATE(25),
    [sym_set] = STATE(65),
    [sym_comment] = STATE(65),
    [sym_semicolon] = STATE(26),
    [sym_shebang_line] = STATE(26),
    [sym_ignore_form] = STATE(26),
    [sym_comment_macro] = STATE(26),
    [sym_nil] = ACTIONS(131),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [sym__symbol_chars] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(45),
    [anon_sym_POUND_] = ACTIONS(47),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [21] = {
    [sym__anything] = STATE(67),
    [sym_boolean] = STATE(67),
    [sym_number] = STATE(67),
    [sym_character] = STATE(67),
    [sym_string] = STATE(67),
    [sym_regex] = STATE(67),
    [sym_quote] = STATE(67),
    [sym_keyword] = STATE(67),
    [sym__unqualified_keyword] = STATE(23),
    [sym_qualified_keyword] = STATE(23),
    [sym_symbol] = STATE(67),
    [sym_qualified_symbol] = STATE(24),
    [sym_list] = STATE(67),
    [sym_vector] = STATE(67),
    [sym_hash_map] = STATE(67),
    [sym_namespace_map] = STATE(25),
    [sym_set] = STATE(67),
    [sym_comment] = STATE(67),
    [sym_semicolon] = STATE(26),
    [sym_shebang_line] = STATE(26),
    [sym_ignore_form] = STATE(26),
    [sym_comment_macro] = STATE(26),
    [aux_sym_program_repeat1] = STATE(67),
    [sym_nil] = ACTIONS(133),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(135),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [sym__symbol_chars] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(45),
    [anon_sym_POUND_] = ACTIONS(97),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(137),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(139),
    [sym_nil] = ACTIONS(141),
    [sym_true] = ACTIONS(141),
    [sym_false] = ACTIONS(141),
    [sym_number_long] = ACTIONS(141),
    [sym_number_double] = ACTIONS(139),
    [anon_sym_BSLASH] = ACTIONS(139),
    [anon_sym_DQUOTE] = ACTIONS(139),
    [anon_sym_POUND_DQUOTE] = ACTIONS(139),
    [anon_sym_SQUOTE] = ACTIONS(139),
    [anon_sym_LPARENquote] = ACTIONS(139),
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_COLON] = ACTIONS(141),
    [anon_sym_COLON_COLON] = ACTIONS(139),
    [sym__symbol_chars] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_RBRACK] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(139),
    [anon_sym_POUND] = ACTIONS(141),
    [anon_sym_POUND_LBRACE] = ACTIONS(139),
    [anon_sym_SEMI] = ACTIONS(139),
    [anon_sym_POUND_BANG] = ACTIONS(139),
    [anon_sym_POUND_] = ACTIONS(139),
    [anon_sym_LPARENcomment] = ACTIONS(139),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [sym_nil] = ACTIONS(87),
    [sym_true] = ACTIONS(87),
    [sym_false] = ACTIONS(87),
    [sym_number_long] = ACTIONS(87),
    [sym_number_double] = ACTIONS(85),
    [anon_sym_BSLASH] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_POUND_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_LPARENquote] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(87),
    [anon_sym_COLON_COLON] = ACTIONS(85),
    [sym__symbol_chars] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(85),
    [anon_sym_POUND] = ACTIONS(87),
    [anon_sym_POUND_LBRACE] = ACTIONS(85),
    [anon_sym_SEMI] = ACTIONS(85),
    [anon_sym_POUND_BANG] = ACTIONS(85),
    [anon_sym_POUND_] = ACTIONS(85),
    [anon_sym_LPARENcomment] = ACTIONS(85),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(143),
    [sym_nil] = ACTIONS(145),
    [sym_true] = ACTIONS(145),
    [sym_false] = ACTIONS(145),
    [sym_number_long] = ACTIONS(145),
    [sym_number_double] = ACTIONS(143),
    [anon_sym_BSLASH] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [anon_sym_POUND_DQUOTE] = ACTIONS(143),
    [anon_sym_SQUOTE] = ACTIONS(143),
    [anon_sym_LPARENquote] = ACTIONS(143),
    [anon_sym_RPAREN] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(145),
    [anon_sym_COLON_COLON] = ACTIONS(143),
    [sym__symbol_chars] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_RBRACK] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(143),
    [anon_sym_RBRACE] = ACTIONS(143),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(143),
    [anon_sym_POUND] = ACTIONS(145),
    [anon_sym_POUND_LBRACE] = ACTIONS(143),
    [anon_sym_SEMI] = ACTIONS(143),
    [anon_sym_POUND_BANG] = ACTIONS(143),
    [anon_sym_POUND_] = ACTIONS(143),
    [anon_sym_LPARENcomment] = ACTIONS(143),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [sym_nil] = ACTIONS(149),
    [sym_true] = ACTIONS(149),
    [sym_false] = ACTIONS(149),
    [sym_number_long] = ACTIONS(149),
    [sym_number_double] = ACTIONS(147),
    [anon_sym_BSLASH] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(147),
    [anon_sym_POUND_DQUOTE] = ACTIONS(147),
    [anon_sym_SQUOTE] = ACTIONS(147),
    [anon_sym_LPARENquote] = ACTIONS(147),
    [anon_sym_RPAREN] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(149),
    [anon_sym_COLON_COLON] = ACTIONS(147),
    [sym__symbol_chars] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_RBRACK] = ACTIONS(147),
    [anon_sym_LBRACE] = ACTIONS(147),
    [anon_sym_RBRACE] = ACTIONS(147),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(147),
    [anon_sym_POUND] = ACTIONS(149),
    [anon_sym_POUND_LBRACE] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(147),
    [anon_sym_POUND_BANG] = ACTIONS(147),
    [anon_sym_POUND_] = ACTIONS(147),
    [anon_sym_LPARENcomment] = ACTIONS(147),
  },
  [27] = {
    [sym__anything] = STATE(68),
    [sym_boolean] = STATE(68),
    [sym_number] = STATE(68),
    [sym_character] = STATE(68),
    [sym_string] = STATE(68),
    [sym_regex] = STATE(68),
    [sym_quote] = STATE(68),
    [sym_keyword] = STATE(68),
    [sym__unqualified_keyword] = STATE(23),
    [sym_qualified_keyword] = STATE(23),
    [sym_symbol] = STATE(68),
    [sym_qualified_symbol] = STATE(24),
    [sym_list] = STATE(68),
    [sym_vector] = STATE(68),
    [sym_hash_map] = STATE(68),
    [sym_namespace_map] = STATE(25),
    [sym_set] = STATE(68),
    [sym_comment] = STATE(68),
    [sym_semicolon] = STATE(26),
    [sym_shebang_line] = STATE(26),
    [sym_ignore_form] = STATE(26),
    [sym_comment_macro] = STATE(26),
    [aux_sym_program_repeat1] = STATE(68),
    [ts_builtin_sym_end] = ACTIONS(151),
    [sym_nil] = ACTIONS(153),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [sym__symbol_chars] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(45),
    [anon_sym_POUND_] = ACTIONS(47),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [sym_nil] = ACTIONS(157),
    [sym_true] = ACTIONS(157),
    [sym_false] = ACTIONS(157),
    [sym_number_long] = ACTIONS(157),
    [sym_number_double] = ACTIONS(155),
    [anon_sym_BSLASH] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(155),
    [anon_sym_POUND_DQUOTE] = ACTIONS(155),
    [anon_sym_SQUOTE] = ACTIONS(155),
    [anon_sym_LPARENquote] = ACTIONS(155),
    [anon_sym_RPAREN] = ACTIONS(155),
    [anon_sym_COLON] = ACTIONS(157),
    [anon_sym_COLON_COLON] = ACTIONS(155),
    [sym__symbol_chars] = ACTIONS(157),
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
  [29] = {
    [sym__hex_char] = ACTIONS(159),
  },
  [30] = {
    [sym__octal_num] = STATE(70),
    [aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(161),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(163),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(163),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym_nil] = ACTIONS(167),
    [sym_true] = ACTIONS(167),
    [sym_false] = ACTIONS(167),
    [sym_number_long] = ACTIONS(167),
    [sym_number_double] = ACTIONS(165),
    [anon_sym_BSLASH] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [anon_sym_POUND_DQUOTE] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_LPARENquote] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_COLON] = ACTIONS(167),
    [anon_sym_COLON_COLON] = ACTIONS(165),
    [sym__symbol_chars] = ACTIONS(167),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_RBRACK] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_RBRACE] = ACTIONS(165),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(165),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LBRACE] = ACTIONS(165),
    [anon_sym_SEMI] = ACTIONS(165),
    [anon_sym_POUND_BANG] = ACTIONS(165),
    [anon_sym_POUND_] = ACTIONS(165),
    [anon_sym_LPARENcomment] = ACTIONS(165),
  },
  [32] = {
    [aux_sym_string_repeat1] = STATE(72),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(171),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(171),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [sym_nil] = ACTIONS(175),
    [sym_true] = ACTIONS(175),
    [sym_false] = ACTIONS(175),
    [sym_number_long] = ACTIONS(175),
    [sym_number_double] = ACTIONS(173),
    [anon_sym_BSLASH] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [anon_sym_POUND_DQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_LPARENquote] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_COLON] = ACTIONS(175),
    [anon_sym_COLON_COLON] = ACTIONS(173),
    [sym__symbol_chars] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(173),
    [anon_sym_RBRACK] = ACTIONS(173),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(173),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(173),
    [anon_sym_POUND] = ACTIONS(175),
    [anon_sym_POUND_LBRACE] = ACTIONS(173),
    [anon_sym_SEMI] = ACTIONS(173),
    [anon_sym_POUND_BANG] = ACTIONS(173),
    [anon_sym_POUND_] = ACTIONS(173),
    [anon_sym_LPARENcomment] = ACTIONS(173),
  },
  [34] = {
    [aux_sym_regex_repeat1] = STATE(74),
    [anon_sym_DQUOTE] = ACTIONS(177),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(179),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(179),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [sym_nil] = ACTIONS(183),
    [sym_true] = ACTIONS(183),
    [sym_false] = ACTIONS(183),
    [sym_number_long] = ACTIONS(183),
    [sym_number_double] = ACTIONS(181),
    [anon_sym_BSLASH] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [anon_sym_POUND_DQUOTE] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(181),
    [anon_sym_LPARENquote] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(181),
    [anon_sym_COLON] = ACTIONS(183),
    [anon_sym_COLON_COLON] = ACTIONS(181),
    [sym__symbol_chars] = ACTIONS(183),
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
  [36] = {
    [sym__anything] = STATE(35),
    [sym_boolean] = STATE(35),
    [sym_number] = STATE(35),
    [sym_character] = STATE(35),
    [sym_string] = STATE(35),
    [sym_regex] = STATE(35),
    [sym_quote] = STATE(35),
    [sym_keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(23),
    [sym_qualified_keyword] = STATE(23),
    [sym_symbol] = STATE(35),
    [sym_qualified_symbol] = STATE(24),
    [sym_list] = STATE(35),
    [sym_vector] = STATE(35),
    [sym_hash_map] = STATE(35),
    [sym_namespace_map] = STATE(25),
    [sym_set] = STATE(35),
    [sym_comment] = STATE(35),
    [sym_semicolon] = STATE(26),
    [sym_shebang_line] = STATE(26),
    [sym_ignore_form] = STATE(26),
    [sym_comment_macro] = STATE(26),
    [sym_nil] = ACTIONS(73),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [sym__symbol_chars] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(45),
    [anon_sym_POUND_] = ACTIONS(79),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [37] = {
    [sym__anything] = STATE(65),
    [sym_boolean] = STATE(65),
    [sym_number] = STATE(65),
    [sym_character] = STATE(65),
    [sym_string] = STATE(65),
    [sym_regex] = STATE(65),
    [sym_quote] = STATE(65),
    [sym_keyword] = STATE(65),
    [sym__unqualified_keyword] = STATE(23),
    [sym_qualified_keyword] = STATE(23),
    [sym_symbol] = STATE(65),
    [sym_qualified_symbol] = STATE(24),
    [sym_list] = STATE(65),
    [sym_vector] = STATE(65),
    [sym_hash_map] = STATE(65),
    [sym_namespace_map] = STATE(25),
    [sym_set] = STATE(65),
    [sym_comment] = STATE(65),
    [sym_semicolon] = STATE(26),
    [sym_shebang_line] = STATE(26),
    [sym_ignore_form] = STATE(26),
    [sym_comment_macro] = STATE(26),
    [sym_nil] = ACTIONS(131),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [sym__symbol_chars] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(45),
    [anon_sym_POUND_] = ACTIONS(79),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [38] = {
    [anon_sym_RPAREN] = ACTIONS(185),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [sym_nil] = ACTIONS(189),
    [sym_true] = ACTIONS(189),
    [sym_false] = ACTIONS(189),
    [sym_number_long] = ACTIONS(189),
    [sym_number_double] = ACTIONS(187),
    [anon_sym_BSLASH] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(187),
    [anon_sym_POUND_DQUOTE] = ACTIONS(187),
    [anon_sym_SQUOTE] = ACTIONS(187),
    [anon_sym_LPARENquote] = ACTIONS(187),
    [anon_sym_RPAREN] = ACTIONS(187),
    [anon_sym_COLON] = ACTIONS(189),
    [anon_sym_COLON_COLON] = ACTIONS(187),
    [sym__symbol_chars] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_RBRACK] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_RBRACE] = ACTIONS(187),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(187),
    [anon_sym_POUND] = ACTIONS(189),
    [anon_sym_POUND_LBRACE] = ACTIONS(187),
    [anon_sym_SEMI] = ACTIONS(187),
    [anon_sym_POUND_BANG] = ACTIONS(187),
    [anon_sym_POUND_] = ACTIONS(187),
    [anon_sym_LPARENcomment] = ACTIONS(187),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [sym_nil] = ACTIONS(193),
    [sym_true] = ACTIONS(193),
    [sym_false] = ACTIONS(193),
    [sym_number_long] = ACTIONS(193),
    [sym_number_double] = ACTIONS(191),
    [anon_sym_BSLASH] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(191),
    [anon_sym_POUND_DQUOTE] = ACTIONS(191),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [anon_sym_LPARENquote] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(191),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_COLON_COLON] = ACTIONS(191),
    [anon_sym_SLASH] = ACTIONS(195),
    [sym__symbol_chars] = ACTIONS(193),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(191),
    [anon_sym_RBRACK] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_RBRACE] = ACTIONS(191),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(191),
    [anon_sym_POUND] = ACTIONS(193),
    [anon_sym_POUND_LBRACE] = ACTIONS(191),
    [anon_sym_SEMI] = ACTIONS(191),
    [anon_sym_POUND_BANG] = ACTIONS(191),
    [anon_sym_POUND_] = ACTIONS(191),
    [anon_sym_LPARENcomment] = ACTIONS(191),
  },
  [41] = {
    [sym__symbol_chars] = ACTIONS(197),
  },
  [42] = {
    [sym__anything] = STATE(35),
    [sym_boolean] = STATE(35),
    [sym_number] = STATE(35),
    [sym_character] = STATE(35),
    [sym_string] = STATE(35),
    [sym_regex] = STATE(35),
    [sym_quote] = STATE(35),
    [sym_keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(23),
    [sym_qualified_keyword] = STATE(23),
    [sym_symbol] = STATE(35),
    [sym_qualified_symbol] = STATE(24),
    [sym_list] = STATE(35),
    [sym_vector] = STATE(35),
    [sym_hash_map] = STATE(35),
    [sym_namespace_map] = STATE(25),
    [sym_set] = STATE(35),
    [sym_comment] = STATE(35),
    [sym_semicolon] = STATE(26),
    [sym_shebang_line] = STATE(26),
    [sym_ignore_form] = STATE(26),
    [sym_comment_macro] = STATE(26),
    [sym_nil] = ACTIONS(73),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [sym__symbol_chars] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(45),
    [anon_sym_POUND_] = ACTIONS(97),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [sym_nil] = ACTIONS(201),
    [sym_true] = ACTIONS(201),
    [sym_false] = ACTIONS(201),
    [sym_number_long] = ACTIONS(201),
    [sym_number_double] = ACTIONS(199),
    [anon_sym_BSLASH] = ACTIONS(199),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [anon_sym_POUND_DQUOTE] = ACTIONS(199),
    [anon_sym_SQUOTE] = ACTIONS(199),
    [anon_sym_LPARENquote] = ACTIONS(199),
    [anon_sym_RPAREN] = ACTIONS(199),
    [anon_sym_COLON] = ACTIONS(201),
    [anon_sym_COLON_COLON] = ACTIONS(199),
    [sym__symbol_chars] = ACTIONS(201),
    [anon_sym_LPAREN] = ACTIONS(201),
    [anon_sym_LBRACK] = ACTIONS(199),
    [anon_sym_RBRACK] = ACTIONS(199),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_RBRACE] = ACTIONS(199),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(199),
    [anon_sym_POUND] = ACTIONS(201),
    [anon_sym_POUND_LBRACE] = ACTIONS(199),
    [anon_sym_SEMI] = ACTIONS(199),
    [anon_sym_POUND_BANG] = ACTIONS(199),
    [anon_sym_POUND_] = ACTIONS(199),
    [anon_sym_LPARENcomment] = ACTIONS(199),
  },
  [44] = {
    [sym__anything] = STATE(65),
    [sym_boolean] = STATE(65),
    [sym_number] = STATE(65),
    [sym_character] = STATE(65),
    [sym_string] = STATE(65),
    [sym_regex] = STATE(65),
    [sym_quote] = STATE(65),
    [sym_keyword] = STATE(65),
    [sym__unqualified_keyword] = STATE(23),
    [sym_qualified_keyword] = STATE(23),
    [sym_symbol] = STATE(65),
    [sym_qualified_symbol] = STATE(24),
    [sym_list] = STATE(65),
    [sym_vector] = STATE(65),
    [sym_hash_map] = STATE(65),
    [sym_namespace_map] = STATE(25),
    [sym_set] = STATE(65),
    [sym_comment] = STATE(65),
    [sym_semicolon] = STATE(26),
    [sym_shebang_line] = STATE(26),
    [sym_ignore_form] = STATE(26),
    [sym_comment_macro] = STATE(26),
    [sym_nil] = ACTIONS(131),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [sym__symbol_chars] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(45),
    [anon_sym_POUND_] = ACTIONS(97),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [45] = {
    [sym__anything] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_number] = STATE(79),
    [sym_character] = STATE(79),
    [sym_string] = STATE(79),
    [sym_regex] = STATE(79),
    [sym_quote] = STATE(79),
    [sym_keyword] = STATE(79),
    [sym__unqualified_keyword] = STATE(23),
    [sym_qualified_keyword] = STATE(23),
    [sym_symbol] = STATE(79),
    [sym_qualified_symbol] = STATE(24),
    [sym_list] = STATE(79),
    [sym_vector] = STATE(79),
    [sym_hash_map] = STATE(79),
    [sym_namespace_map] = STATE(25),
    [sym_set] = STATE(79),
    [sym_comment] = STATE(79),
    [sym_semicolon] = STATE(26),
    [sym_shebang_line] = STATE(26),
    [sym_ignore_form] = STATE(26),
    [sym_comment_macro] = STATE(26),
    [aux_sym_program_repeat1] = STATE(79),
    [sym_nil] = ACTIONS(203),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(205),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [sym__symbol_chars] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(45),
    [anon_sym_POUND_] = ACTIONS(97),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [46] = {
    [sym__anything] = STATE(35),
    [sym_boolean] = STATE(35),
    [sym_number] = STATE(35),
    [sym_character] = STATE(35),
    [sym_string] = STATE(35),
    [sym_regex] = STATE(35),
    [sym_quote] = STATE(35),
    [sym_keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(23),
    [sym_qualified_keyword] = STATE(23),
    [sym_symbol] = STATE(35),
    [sym_qualified_symbol] = STATE(24),
    [sym_list] = STATE(35),
    [sym_vector] = STATE(35),
    [sym_hash_map] = STATE(35),
    [sym_namespace_map] = STATE(25),
    [sym_set] = STATE(35),
    [sym_comment] = STATE(35),
    [sym_semicolon] = STATE(26),
    [sym_shebang_line] = STATE(26),
    [sym_ignore_form] = STATE(26),
    [sym_comment_macro] = STATE(26),
    [sym_nil] = ACTIONS(73),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(101),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [sym__symbol_chars] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(45),
    [anon_sym_POUND_] = ACTIONS(105),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(207),
    [sym_nil] = ACTIONS(209),
    [sym_true] = ACTIONS(209),
    [sym_false] = ACTIONS(209),
    [sym_number_long] = ACTIONS(209),
    [sym_number_double] = ACTIONS(207),
    [anon_sym_BSLASH] = ACTIONS(207),
    [anon_sym_DQUOTE] = ACTIONS(207),
    [anon_sym_POUND_DQUOTE] = ACTIONS(207),
    [anon_sym_SQUOTE] = ACTIONS(207),
    [anon_sym_LPARENquote] = ACTIONS(207),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_COLON] = ACTIONS(209),
    [anon_sym_COLON_COLON] = ACTIONS(207),
    [sym__symbol_chars] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(207),
    [anon_sym_RBRACK] = ACTIONS(207),
    [anon_sym_LBRACE] = ACTIONS(207),
    [anon_sym_RBRACE] = ACTIONS(207),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(207),
    [anon_sym_POUND] = ACTIONS(209),
    [anon_sym_POUND_LBRACE] = ACTIONS(207),
    [anon_sym_SEMI] = ACTIONS(207),
    [anon_sym_POUND_BANG] = ACTIONS(207),
    [anon_sym_POUND_] = ACTIONS(207),
    [anon_sym_LPARENcomment] = ACTIONS(207),
  },
  [48] = {
    [sym__anything] = STATE(65),
    [sym_boolean] = STATE(65),
    [sym_number] = STATE(65),
    [sym_character] = STATE(65),
    [sym_string] = STATE(65),
    [sym_regex] = STATE(65),
    [sym_quote] = STATE(65),
    [sym_keyword] = STATE(65),
    [sym__unqualified_keyword] = STATE(23),
    [sym_qualified_keyword] = STATE(23),
    [sym_symbol] = STATE(65),
    [sym_qualified_symbol] = STATE(24),
    [sym_list] = STATE(65),
    [sym_vector] = STATE(65),
    [sym_hash_map] = STATE(65),
    [sym_namespace_map] = STATE(25),
    [sym_set] = STATE(65),
    [sym_comment] = STATE(65),
    [sym_semicolon] = STATE(26),
    [sym_shebang_line] = STATE(26),
    [sym_ignore_form] = STATE(26),
    [sym_comment_macro] = STATE(26),
    [sym_nil] = ACTIONS(131),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(101),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [sym__symbol_chars] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(45),
    [anon_sym_POUND_] = ACTIONS(105),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [49] = {
    [sym__anything] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_number] = STATE(81),
    [sym_character] = STATE(81),
    [sym_string] = STATE(81),
    [sym_regex] = STATE(81),
    [sym_quote] = STATE(81),
    [sym_keyword] = STATE(81),
    [sym__unqualified_keyword] = STATE(23),
    [sym_qualified_keyword] = STATE(23),
    [sym_symbol] = STATE(81),
    [sym_qualified_symbol] = STATE(24),
    [sym_list] = STATE(81),
    [sym_vector] = STATE(81),
    [sym_hash_map] = STATE(81),
    [sym_namespace_map] = STATE(25),
    [sym_set] = STATE(81),
    [sym_comment] = STATE(81),
    [sym_semicolon] = STATE(26),
    [sym_shebang_line] = STATE(26),
    [sym_ignore_form] = STATE(26),
    [sym_comment_macro] = STATE(26),
    [aux_sym_program_repeat1] = STATE(81),
    [sym_nil] = ACTIONS(211),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(101),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [sym__symbol_chars] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_RBRACK] = ACTIONS(213),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(45),
    [anon_sym_POUND_] = ACTIONS(105),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [50] = {
    [sym__anything] = STATE(35),
    [sym_boolean] = STATE(35),
    [sym_number] = STATE(35),
    [sym_character] = STATE(35),
    [sym_string] = STATE(35),
    [sym_regex] = STATE(35),
    [sym_quote] = STATE(35),
    [sym_keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(23),
    [sym_qualified_keyword] = STATE(23),
    [sym_symbol] = STATE(35),
    [sym_qualified_symbol] = STATE(24),
    [sym_list] = STATE(35),
    [sym_vector] = STATE(35),
    [sym_hash_map] = STATE(35),
    [sym_namespace_map] = STATE(25),
    [sym_set] = STATE(35),
    [sym_comment] = STATE(35),
    [sym_semicolon] = STATE(26),
    [sym_shebang_line] = STATE(26),
    [sym_ignore_form] = STATE(26),
    [sym_comment_macro] = STATE(26),
    [sym_nil] = ACTIONS(73),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [sym__symbol_chars] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(45),
    [anon_sym_POUND_] = ACTIONS(113),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(215),
    [sym_nil] = ACTIONS(217),
    [sym_true] = ACTIONS(217),
    [sym_false] = ACTIONS(217),
    [sym_number_long] = ACTIONS(217),
    [sym_number_double] = ACTIONS(215),
    [anon_sym_BSLASH] = ACTIONS(215),
    [anon_sym_DQUOTE] = ACTIONS(215),
    [anon_sym_POUND_DQUOTE] = ACTIONS(215),
    [anon_sym_SQUOTE] = ACTIONS(215),
    [anon_sym_LPARENquote] = ACTIONS(215),
    [anon_sym_RPAREN] = ACTIONS(215),
    [anon_sym_COLON] = ACTIONS(217),
    [anon_sym_COLON_COLON] = ACTIONS(215),
    [sym__symbol_chars] = ACTIONS(217),
    [anon_sym_LPAREN] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(215),
    [anon_sym_RBRACK] = ACTIONS(215),
    [anon_sym_LBRACE] = ACTIONS(215),
    [anon_sym_RBRACE] = ACTIONS(215),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(215),
    [anon_sym_POUND] = ACTIONS(217),
    [anon_sym_POUND_LBRACE] = ACTIONS(215),
    [anon_sym_SEMI] = ACTIONS(215),
    [anon_sym_POUND_BANG] = ACTIONS(215),
    [anon_sym_POUND_] = ACTIONS(215),
    [anon_sym_LPARENcomment] = ACTIONS(215),
  },
  [52] = {
    [sym__anything] = STATE(65),
    [sym_boolean] = STATE(65),
    [sym_number] = STATE(65),
    [sym_character] = STATE(65),
    [sym_string] = STATE(65),
    [sym_regex] = STATE(65),
    [sym_quote] = STATE(65),
    [sym_keyword] = STATE(65),
    [sym__unqualified_keyword] = STATE(23),
    [sym_qualified_keyword] = STATE(23),
    [sym_symbol] = STATE(65),
    [sym_qualified_symbol] = STATE(24),
    [sym_list] = STATE(65),
    [sym_vector] = STATE(65),
    [sym_hash_map] = STATE(65),
    [sym_namespace_map] = STATE(25),
    [sym_set] = STATE(65),
    [sym_comment] = STATE(65),
    [sym_semicolon] = STATE(26),
    [sym_shebang_line] = STATE(26),
    [sym_ignore_form] = STATE(26),
    [sym_comment_macro] = STATE(26),
    [sym_nil] = ACTIONS(131),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [sym__symbol_chars] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(45),
    [anon_sym_POUND_] = ACTIONS(113),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [53] = {
    [sym_nil] = ACTIONS(219),
    [sym_true] = ACTIONS(219),
    [sym_false] = ACTIONS(219),
    [sym_number_long] = ACTIONS(219),
    [sym_number_double] = ACTIONS(221),
    [anon_sym_BSLASH] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(221),
    [anon_sym_POUND_DQUOTE] = ACTIONS(221),
    [anon_sym_SQUOTE] = ACTIONS(221),
    [anon_sym_LPARENquote] = ACTIONS(221),
    [anon_sym_COLON] = ACTIONS(219),
    [anon_sym_COLON_COLON] = ACTIONS(221),
    [sym__symbol_chars] = ACTIONS(219),
    [anon_sym_LPAREN] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_LBRACE] = ACTIONS(221),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(221),
    [anon_sym_POUND] = ACTIONS(219),
    [anon_sym_POUND_LBRACE] = ACTIONS(221),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_POUND_BANG] = ACTIONS(221),
    [anon_sym_POUND_] = ACTIONS(221),
    [anon_sym_LPARENcomment] = ACTIONS(221),
  },
  [54] = {
    [sym__anything] = STATE(82),
    [sym_boolean] = STATE(82),
    [sym_number] = STATE(82),
    [sym_character] = STATE(82),
    [sym_string] = STATE(82),
    [sym_regex] = STATE(82),
    [sym_quote] = STATE(82),
    [sym_keyword] = STATE(82),
    [sym__unqualified_keyword] = STATE(23),
    [sym_qualified_keyword] = STATE(23),
    [sym_symbol] = STATE(82),
    [sym_qualified_symbol] = STATE(24),
    [sym_list] = STATE(82),
    [sym_vector] = STATE(82),
    [sym_hash_map] = STATE(82),
    [sym_namespace_map] = STATE(25),
    [sym_hash_map_value] = STATE(83),
    [sym_set] = STATE(82),
    [sym_comment] = STATE(82),
    [sym_semicolon] = STATE(26),
    [sym_shebang_line] = STATE(26),
    [sym_ignore_form] = STATE(26),
    [sym_comment_macro] = STATE(26),
    [sym_nil] = ACTIONS(223),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(121),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [sym__symbol_chars] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(45),
    [anon_sym_POUND_] = ACTIONS(125),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [55] = {
    [sym__anything] = STATE(53),
    [sym_boolean] = STATE(53),
    [sym_number] = STATE(53),
    [sym_character] = STATE(53),
    [sym_string] = STATE(53),
    [sym_regex] = STATE(53),
    [sym_quote] = STATE(53),
    [sym_keyword] = STATE(53),
    [sym__unqualified_keyword] = STATE(23),
    [sym_qualified_keyword] = STATE(23),
    [sym_symbol] = STATE(53),
    [sym_qualified_symbol] = STATE(24),
    [sym_list] = STATE(53),
    [sym_vector] = STATE(53),
    [sym_hash_map] = STATE(53),
    [sym_namespace_map] = STATE(25),
    [sym_hash_map_kv_pair] = STATE(85),
    [sym_hash_map_key] = STATE(54),
    [sym_set] = STATE(53),
    [sym_comment] = STATE(53),
    [sym_semicolon] = STATE(26),
    [sym_shebang_line] = STATE(26),
    [sym_ignore_form] = STATE(26),
    [sym_comment_macro] = STATE(26),
    [aux_sym_hash_map_repeat1] = STATE(85),
    [sym_nil] = ACTIONS(107),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [sym__symbol_chars] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(225),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(45),
    [anon_sym_POUND_] = ACTIONS(113),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(227),
    [sym_nil] = ACTIONS(229),
    [sym_true] = ACTIONS(229),
    [sym_false] = ACTIONS(229),
    [sym_number_long] = ACTIONS(229),
    [sym_number_double] = ACTIONS(227),
    [anon_sym_BSLASH] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(227),
    [anon_sym_POUND_DQUOTE] = ACTIONS(227),
    [anon_sym_SQUOTE] = ACTIONS(227),
    [anon_sym_LPARENquote] = ACTIONS(227),
    [anon_sym_RPAREN] = ACTIONS(227),
    [anon_sym_COLON] = ACTIONS(229),
    [anon_sym_COLON_COLON] = ACTIONS(227),
    [sym__symbol_chars] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(227),
    [anon_sym_RBRACK] = ACTIONS(227),
    [anon_sym_LBRACE] = ACTIONS(227),
    [anon_sym_RBRACE] = ACTIONS(227),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(227),
    [anon_sym_POUND] = ACTIONS(229),
    [anon_sym_POUND_LBRACE] = ACTIONS(227),
    [anon_sym_SEMI] = ACTIONS(227),
    [anon_sym_POUND_BANG] = ACTIONS(227),
    [anon_sym_POUND_] = ACTIONS(227),
    [anon_sym_LPARENcomment] = ACTIONS(227),
  },
  [57] = {
    [sym__anything] = STATE(53),
    [sym_boolean] = STATE(53),
    [sym_number] = STATE(53),
    [sym_character] = STATE(53),
    [sym_string] = STATE(53),
    [sym_regex] = STATE(53),
    [sym_quote] = STATE(53),
    [sym_keyword] = STATE(53),
    [sym__unqualified_keyword] = STATE(23),
    [sym_qualified_keyword] = STATE(23),
    [sym_symbol] = STATE(53),
    [sym_qualified_symbol] = STATE(24),
    [sym_list] = STATE(53),
    [sym_vector] = STATE(53),
    [sym_hash_map] = STATE(53),
    [sym_namespace_map] = STATE(25),
    [sym_hash_map_kv_pair] = STATE(85),
    [sym_hash_map_key] = STATE(54),
    [sym_set] = STATE(53),
    [sym_comment] = STATE(53),
    [sym_semicolon] = STATE(26),
    [sym_shebang_line] = STATE(26),
    [sym_ignore_form] = STATE(26),
    [sym_comment_macro] = STATE(26),
    [aux_sym_hash_map_repeat1] = STATE(85),
    [sym_nil] = ACTIONS(107),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [sym__symbol_chars] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(231),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(45),
    [anon_sym_POUND_] = ACTIONS(113),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [58] = {
    [anon_sym_LBRACE] = ACTIONS(233),
  },
  [59] = {
    [sym__anything] = STATE(35),
    [sym_boolean] = STATE(35),
    [sym_number] = STATE(35),
    [sym_character] = STATE(35),
    [sym_string] = STATE(35),
    [sym_regex] = STATE(35),
    [sym_quote] = STATE(35),
    [sym_keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(23),
    [sym_qualified_keyword] = STATE(23),
    [sym_symbol] = STATE(35),
    [sym_qualified_symbol] = STATE(24),
    [sym_list] = STATE(35),
    [sym_vector] = STATE(35),
    [sym_hash_map] = STATE(35),
    [sym_namespace_map] = STATE(25),
    [sym_set] = STATE(35),
    [sym_comment] = STATE(35),
    [sym_semicolon] = STATE(26),
    [sym_shebang_line] = STATE(26),
    [sym_ignore_form] = STATE(26),
    [sym_comment_macro] = STATE(26),
    [sym_nil] = ACTIONS(73),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(121),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [sym__symbol_chars] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(45),
    [anon_sym_POUND_] = ACTIONS(125),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(235),
    [sym_nil] = ACTIONS(237),
    [sym_true] = ACTIONS(237),
    [sym_false] = ACTIONS(237),
    [sym_number_long] = ACTIONS(237),
    [sym_number_double] = ACTIONS(235),
    [anon_sym_BSLASH] = ACTIONS(235),
    [anon_sym_DQUOTE] = ACTIONS(235),
    [anon_sym_POUND_DQUOTE] = ACTIONS(235),
    [anon_sym_SQUOTE] = ACTIONS(235),
    [anon_sym_LPARENquote] = ACTIONS(235),
    [anon_sym_RPAREN] = ACTIONS(235),
    [anon_sym_COLON] = ACTIONS(237),
    [anon_sym_COLON_COLON] = ACTIONS(235),
    [sym__symbol_chars] = ACTIONS(237),
    [anon_sym_LPAREN] = ACTIONS(237),
    [anon_sym_LBRACK] = ACTIONS(235),
    [anon_sym_RBRACK] = ACTIONS(235),
    [anon_sym_LBRACE] = ACTIONS(235),
    [anon_sym_RBRACE] = ACTIONS(235),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(235),
    [anon_sym_POUND] = ACTIONS(237),
    [anon_sym_POUND_LBRACE] = ACTIONS(235),
    [anon_sym_SEMI] = ACTIONS(235),
    [anon_sym_POUND_BANG] = ACTIONS(235),
    [anon_sym_POUND_] = ACTIONS(235),
    [anon_sym_LPARENcomment] = ACTIONS(235),
  },
  [61] = {
    [sym__anything] = STATE(65),
    [sym_boolean] = STATE(65),
    [sym_number] = STATE(65),
    [sym_character] = STATE(65),
    [sym_string] = STATE(65),
    [sym_regex] = STATE(65),
    [sym_quote] = STATE(65),
    [sym_keyword] = STATE(65),
    [sym__unqualified_keyword] = STATE(23),
    [sym_qualified_keyword] = STATE(23),
    [sym_symbol] = STATE(65),
    [sym_qualified_symbol] = STATE(24),
    [sym_list] = STATE(65),
    [sym_vector] = STATE(65),
    [sym_hash_map] = STATE(65),
    [sym_namespace_map] = STATE(25),
    [sym_set] = STATE(65),
    [sym_comment] = STATE(65),
    [sym_semicolon] = STATE(26),
    [sym_shebang_line] = STATE(26),
    [sym_ignore_form] = STATE(26),
    [sym_comment_macro] = STATE(26),
    [sym_nil] = ACTIONS(131),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(121),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [sym__symbol_chars] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(45),
    [anon_sym_POUND_] = ACTIONS(125),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [62] = {
    [sym__anything] = STATE(89),
    [sym_boolean] = STATE(89),
    [sym_number] = STATE(89),
    [sym_character] = STATE(89),
    [sym_string] = STATE(89),
    [sym_regex] = STATE(89),
    [sym_quote] = STATE(89),
    [sym_keyword] = STATE(89),
    [sym__unqualified_keyword] = STATE(23),
    [sym_qualified_keyword] = STATE(23),
    [sym_symbol] = STATE(89),
    [sym_qualified_symbol] = STATE(24),
    [sym_list] = STATE(89),
    [sym_vector] = STATE(89),
    [sym_hash_map] = STATE(89),
    [sym_namespace_map] = STATE(25),
    [sym_set] = STATE(89),
    [sym_comment] = STATE(89),
    [sym_semicolon] = STATE(26),
    [sym_shebang_line] = STATE(26),
    [sym_ignore_form] = STATE(26),
    [sym_comment_macro] = STATE(26),
    [aux_sym_program_repeat1] = STATE(89),
    [sym_nil] = ACTIONS(239),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(121),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [sym__symbol_chars] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(241),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(45),
    [anon_sym_POUND_] = ACTIONS(125),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(243),
    [sym_nil] = ACTIONS(245),
    [sym_true] = ACTIONS(245),
    [sym_false] = ACTIONS(245),
    [sym_number_long] = ACTIONS(245),
    [sym_number_double] = ACTIONS(243),
    [anon_sym_BSLASH] = ACTIONS(243),
    [anon_sym_DQUOTE] = ACTIONS(243),
    [anon_sym_POUND_DQUOTE] = ACTIONS(243),
    [anon_sym_SQUOTE] = ACTIONS(243),
    [anon_sym_LPARENquote] = ACTIONS(243),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_COLON] = ACTIONS(245),
    [anon_sym_COLON_COLON] = ACTIONS(243),
    [sym__symbol_chars] = ACTIONS(245),
    [anon_sym_LPAREN] = ACTIONS(245),
    [anon_sym_LBRACK] = ACTIONS(243),
    [anon_sym_RBRACK] = ACTIONS(243),
    [anon_sym_LBRACE] = ACTIONS(243),
    [anon_sym_RBRACE] = ACTIONS(243),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(243),
    [anon_sym_POUND] = ACTIONS(245),
    [anon_sym_POUND_LBRACE] = ACTIONS(243),
    [anon_sym_SEMI] = ACTIONS(243),
    [anon_sym_POUND_BANG] = ACTIONS(243),
    [anon_sym_POUND_] = ACTIONS(243),
    [anon_sym_LPARENcomment] = ACTIONS(243),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(247),
    [sym_nil] = ACTIONS(249),
    [sym_true] = ACTIONS(249),
    [sym_false] = ACTIONS(249),
    [sym_number_long] = ACTIONS(249),
    [sym_number_double] = ACTIONS(247),
    [anon_sym_BSLASH] = ACTIONS(247),
    [anon_sym_DQUOTE] = ACTIONS(247),
    [anon_sym_POUND_DQUOTE] = ACTIONS(247),
    [anon_sym_SQUOTE] = ACTIONS(247),
    [anon_sym_LPARENquote] = ACTIONS(247),
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_COLON] = ACTIONS(249),
    [anon_sym_COLON_COLON] = ACTIONS(247),
    [sym__symbol_chars] = ACTIONS(249),
    [anon_sym_LPAREN] = ACTIONS(249),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_RBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(247),
    [anon_sym_RBRACE] = ACTIONS(247),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(247),
    [anon_sym_POUND] = ACTIONS(249),
    [anon_sym_POUND_LBRACE] = ACTIONS(247),
    [anon_sym_SEMI] = ACTIONS(247),
    [anon_sym_POUND_BANG] = ACTIONS(247),
    [anon_sym_POUND_] = ACTIONS(247),
    [anon_sym_LPARENcomment] = ACTIONS(247),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(251),
    [sym_nil] = ACTIONS(253),
    [sym_true] = ACTIONS(253),
    [sym_false] = ACTIONS(253),
    [sym_number_long] = ACTIONS(253),
    [sym_number_double] = ACTIONS(251),
    [anon_sym_BSLASH] = ACTIONS(251),
    [anon_sym_DQUOTE] = ACTIONS(251),
    [anon_sym_POUND_DQUOTE] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(251),
    [anon_sym_LPARENquote] = ACTIONS(251),
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_COLON] = ACTIONS(253),
    [anon_sym_COLON_COLON] = ACTIONS(251),
    [sym__symbol_chars] = ACTIONS(253),
    [anon_sym_LPAREN] = ACTIONS(253),
    [anon_sym_LBRACK] = ACTIONS(251),
    [anon_sym_RBRACK] = ACTIONS(251),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_RBRACE] = ACTIONS(251),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(251),
    [anon_sym_POUND] = ACTIONS(253),
    [anon_sym_POUND_LBRACE] = ACTIONS(251),
    [anon_sym_SEMI] = ACTIONS(251),
    [anon_sym_POUND_BANG] = ACTIONS(251),
    [anon_sym_POUND_] = ACTIONS(251),
    [anon_sym_LPARENcomment] = ACTIONS(251),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(255),
    [sym_nil] = ACTIONS(257),
    [sym_true] = ACTIONS(257),
    [sym_false] = ACTIONS(257),
    [sym_number_long] = ACTIONS(257),
    [sym_number_double] = ACTIONS(255),
    [anon_sym_BSLASH] = ACTIONS(255),
    [anon_sym_DQUOTE] = ACTIONS(255),
    [anon_sym_POUND_DQUOTE] = ACTIONS(255),
    [anon_sym_SQUOTE] = ACTIONS(255),
    [anon_sym_LPARENquote] = ACTIONS(255),
    [anon_sym_RPAREN] = ACTIONS(255),
    [anon_sym_COLON] = ACTIONS(257),
    [anon_sym_COLON_COLON] = ACTIONS(255),
    [sym__symbol_chars] = ACTIONS(257),
    [anon_sym_LPAREN] = ACTIONS(257),
    [anon_sym_LBRACK] = ACTIONS(255),
    [anon_sym_RBRACK] = ACTIONS(255),
    [anon_sym_LBRACE] = ACTIONS(255),
    [anon_sym_RBRACE] = ACTIONS(255),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(255),
    [anon_sym_POUND] = ACTIONS(257),
    [anon_sym_POUND_LBRACE] = ACTIONS(255),
    [anon_sym_SEMI] = ACTIONS(255),
    [anon_sym_POUND_BANG] = ACTIONS(255),
    [anon_sym_POUND_] = ACTIONS(255),
    [anon_sym_LPARENcomment] = ACTIONS(255),
  },
  [67] = {
    [sym__anything] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_number] = STATE(79),
    [sym_character] = STATE(79),
    [sym_string] = STATE(79),
    [sym_regex] = STATE(79),
    [sym_quote] = STATE(79),
    [sym_keyword] = STATE(79),
    [sym__unqualified_keyword] = STATE(23),
    [sym_qualified_keyword] = STATE(23),
    [sym_symbol] = STATE(79),
    [sym_qualified_symbol] = STATE(24),
    [sym_list] = STATE(79),
    [sym_vector] = STATE(79),
    [sym_hash_map] = STATE(79),
    [sym_namespace_map] = STATE(25),
    [sym_set] = STATE(79),
    [sym_comment] = STATE(79),
    [sym_semicolon] = STATE(26),
    [sym_shebang_line] = STATE(26),
    [sym_ignore_form] = STATE(26),
    [sym_comment_macro] = STATE(26),
    [aux_sym_program_repeat1] = STATE(79),
    [sym_nil] = ACTIONS(203),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(259),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [sym__symbol_chars] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(45),
    [anon_sym_POUND_] = ACTIONS(97),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [68] = {
    [sym__anything] = STATE(68),
    [sym_boolean] = STATE(68),
    [sym_number] = STATE(68),
    [sym_character] = STATE(68),
    [sym_string] = STATE(68),
    [sym_regex] = STATE(68),
    [sym_quote] = STATE(68),
    [sym_keyword] = STATE(68),
    [sym__unqualified_keyword] = STATE(23),
    [sym_qualified_keyword] = STATE(23),
    [sym_symbol] = STATE(68),
    [sym_qualified_symbol] = STATE(24),
    [sym_list] = STATE(68),
    [sym_vector] = STATE(68),
    [sym_hash_map] = STATE(68),
    [sym_namespace_map] = STATE(25),
    [sym_set] = STATE(68),
    [sym_comment] = STATE(68),
    [sym_semicolon] = STATE(26),
    [sym_shebang_line] = STATE(26),
    [sym_ignore_form] = STATE(26),
    [sym_comment_macro] = STATE(26),
    [aux_sym_program_repeat1] = STATE(68),
    [ts_builtin_sym_end] = ACTIONS(261),
    [sym_nil] = ACTIONS(263),
    [sym_true] = ACTIONS(266),
    [sym_false] = ACTIONS(266),
    [sym_number_long] = ACTIONS(269),
    [sym_number_double] = ACTIONS(272),
    [anon_sym_BSLASH] = ACTIONS(275),
    [anon_sym_DQUOTE] = ACTIONS(278),
    [anon_sym_POUND_DQUOTE] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(284),
    [anon_sym_LPARENquote] = ACTIONS(287),
    [anon_sym_COLON] = ACTIONS(290),
    [anon_sym_COLON_COLON] = ACTIONS(293),
    [sym__symbol_chars] = ACTIONS(296),
    [anon_sym_LPAREN] = ACTIONS(299),
    [anon_sym_LBRACK] = ACTIONS(302),
    [anon_sym_LBRACE] = ACTIONS(305),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(308),
    [anon_sym_POUND] = ACTIONS(311),
    [anon_sym_POUND_LBRACE] = ACTIONS(314),
    [anon_sym_SEMI] = ACTIONS(317),
    [anon_sym_POUND_BANG] = ACTIONS(320),
    [anon_sym_POUND_] = ACTIONS(323),
    [anon_sym_LPARENcomment] = ACTIONS(326),
  },
  [69] = {
    [sym__hex_char] = ACTIONS(329),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(331),
    [sym_nil] = ACTIONS(333),
    [sym_true] = ACTIONS(333),
    [sym_false] = ACTIONS(333),
    [sym_number_long] = ACTIONS(333),
    [sym_number_double] = ACTIONS(331),
    [anon_sym_BSLASH] = ACTIONS(331),
    [anon_sym_DQUOTE] = ACTIONS(331),
    [anon_sym_POUND_DQUOTE] = ACTIONS(331),
    [anon_sym_SQUOTE] = ACTIONS(331),
    [anon_sym_LPARENquote] = ACTIONS(331),
    [anon_sym_RPAREN] = ACTIONS(331),
    [anon_sym_COLON] = ACTIONS(333),
    [anon_sym_COLON_COLON] = ACTIONS(331),
    [sym__symbol_chars] = ACTIONS(333),
    [anon_sym_LPAREN] = ACTIONS(333),
    [anon_sym_LBRACK] = ACTIONS(331),
    [anon_sym_RBRACK] = ACTIONS(331),
    [anon_sym_LBRACE] = ACTIONS(331),
    [anon_sym_RBRACE] = ACTIONS(331),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(331),
    [anon_sym_POUND] = ACTIONS(333),
    [anon_sym_POUND_LBRACE] = ACTIONS(331),
    [anon_sym_SEMI] = ACTIONS(331),
    [anon_sym_POUND_BANG] = ACTIONS(331),
    [anon_sym_POUND_] = ACTIONS(331),
    [anon_sym_LPARENcomment] = ACTIONS(331),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(335),
    [sym_nil] = ACTIONS(337),
    [sym_true] = ACTIONS(337),
    [sym_false] = ACTIONS(337),
    [sym_number_long] = ACTIONS(337),
    [sym_number_double] = ACTIONS(335),
    [anon_sym_BSLASH] = ACTIONS(335),
    [anon_sym_DQUOTE] = ACTIONS(335),
    [anon_sym_POUND_DQUOTE] = ACTIONS(335),
    [anon_sym_SQUOTE] = ACTIONS(335),
    [anon_sym_LPARENquote] = ACTIONS(335),
    [anon_sym_RPAREN] = ACTIONS(335),
    [anon_sym_COLON] = ACTIONS(337),
    [anon_sym_COLON_COLON] = ACTIONS(335),
    [sym__symbol_chars] = ACTIONS(337),
    [anon_sym_LPAREN] = ACTIONS(337),
    [anon_sym_LBRACK] = ACTIONS(335),
    [anon_sym_RBRACK] = ACTIONS(335),
    [anon_sym_LBRACE] = ACTIONS(335),
    [anon_sym_RBRACE] = ACTIONS(335),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(335),
    [anon_sym_POUND] = ACTIONS(337),
    [anon_sym_POUND_LBRACE] = ACTIONS(335),
    [anon_sym_SEMI] = ACTIONS(335),
    [anon_sym_POUND_BANG] = ACTIONS(335),
    [anon_sym_POUND_] = ACTIONS(335),
    [anon_sym_LPARENcomment] = ACTIONS(335),
  },
  [72] = {
    [aux_sym_string_repeat1] = STATE(72),
    [anon_sym_DQUOTE] = ACTIONS(339),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(341),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(341),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(344),
    [sym_nil] = ACTIONS(346),
    [sym_true] = ACTIONS(346),
    [sym_false] = ACTIONS(346),
    [sym_number_long] = ACTIONS(346),
    [sym_number_double] = ACTIONS(344),
    [anon_sym_BSLASH] = ACTIONS(344),
    [anon_sym_DQUOTE] = ACTIONS(344),
    [anon_sym_POUND_DQUOTE] = ACTIONS(344),
    [anon_sym_SQUOTE] = ACTIONS(344),
    [anon_sym_LPARENquote] = ACTIONS(344),
    [anon_sym_RPAREN] = ACTIONS(344),
    [anon_sym_COLON] = ACTIONS(346),
    [anon_sym_COLON_COLON] = ACTIONS(344),
    [sym__symbol_chars] = ACTIONS(346),
    [anon_sym_LPAREN] = ACTIONS(346),
    [anon_sym_LBRACK] = ACTIONS(344),
    [anon_sym_RBRACK] = ACTIONS(344),
    [anon_sym_LBRACE] = ACTIONS(344),
    [anon_sym_RBRACE] = ACTIONS(344),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(344),
    [anon_sym_POUND] = ACTIONS(346),
    [anon_sym_POUND_LBRACE] = ACTIONS(344),
    [anon_sym_SEMI] = ACTIONS(344),
    [anon_sym_POUND_BANG] = ACTIONS(344),
    [anon_sym_POUND_] = ACTIONS(344),
    [anon_sym_LPARENcomment] = ACTIONS(344),
  },
  [74] = {
    [aux_sym_regex_repeat1] = STATE(74),
    [anon_sym_DQUOTE] = ACTIONS(348),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(350),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(350),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(353),
    [sym_nil] = ACTIONS(355),
    [sym_true] = ACTIONS(355),
    [sym_false] = ACTIONS(355),
    [sym_number_long] = ACTIONS(355),
    [sym_number_double] = ACTIONS(353),
    [anon_sym_BSLASH] = ACTIONS(353),
    [anon_sym_DQUOTE] = ACTIONS(353),
    [anon_sym_POUND_DQUOTE] = ACTIONS(353),
    [anon_sym_SQUOTE] = ACTIONS(353),
    [anon_sym_LPARENquote] = ACTIONS(353),
    [anon_sym_RPAREN] = ACTIONS(353),
    [anon_sym_COLON] = ACTIONS(355),
    [anon_sym_COLON_COLON] = ACTIONS(353),
    [sym__symbol_chars] = ACTIONS(355),
    [anon_sym_LPAREN] = ACTIONS(355),
    [anon_sym_LBRACK] = ACTIONS(353),
    [anon_sym_RBRACK] = ACTIONS(353),
    [anon_sym_LBRACE] = ACTIONS(353),
    [anon_sym_RBRACE] = ACTIONS(353),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(353),
    [anon_sym_POUND] = ACTIONS(355),
    [anon_sym_POUND_LBRACE] = ACTIONS(353),
    [anon_sym_SEMI] = ACTIONS(353),
    [anon_sym_POUND_BANG] = ACTIONS(353),
    [anon_sym_POUND_] = ACTIONS(353),
    [anon_sym_LPARENcomment] = ACTIONS(353),
  },
  [76] = {
    [sym__keyword_chars] = ACTIONS(357),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(359),
    [sym_nil] = ACTIONS(361),
    [sym_true] = ACTIONS(361),
    [sym_false] = ACTIONS(361),
    [sym_number_long] = ACTIONS(361),
    [sym_number_double] = ACTIONS(359),
    [anon_sym_BSLASH] = ACTIONS(359),
    [anon_sym_DQUOTE] = ACTIONS(359),
    [anon_sym_POUND_DQUOTE] = ACTIONS(359),
    [anon_sym_SQUOTE] = ACTIONS(359),
    [anon_sym_LPARENquote] = ACTIONS(359),
    [anon_sym_RPAREN] = ACTIONS(359),
    [anon_sym_COLON] = ACTIONS(361),
    [anon_sym_COLON_COLON] = ACTIONS(359),
    [sym__symbol_chars] = ACTIONS(361),
    [anon_sym_LPAREN] = ACTIONS(361),
    [anon_sym_LBRACK] = ACTIONS(359),
    [anon_sym_RBRACK] = ACTIONS(359),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_RBRACE] = ACTIONS(359),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(359),
    [anon_sym_POUND] = ACTIONS(361),
    [anon_sym_POUND_LBRACE] = ACTIONS(359),
    [anon_sym_SEMI] = ACTIONS(359),
    [anon_sym_POUND_BANG] = ACTIONS(359),
    [anon_sym_POUND_] = ACTIONS(359),
    [anon_sym_LPARENcomment] = ACTIONS(359),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(363),
    [sym_nil] = ACTIONS(365),
    [sym_true] = ACTIONS(365),
    [sym_false] = ACTIONS(365),
    [sym_number_long] = ACTIONS(365),
    [sym_number_double] = ACTIONS(363),
    [anon_sym_BSLASH] = ACTIONS(363),
    [anon_sym_DQUOTE] = ACTIONS(363),
    [anon_sym_POUND_DQUOTE] = ACTIONS(363),
    [anon_sym_SQUOTE] = ACTIONS(363),
    [anon_sym_LPARENquote] = ACTIONS(363),
    [anon_sym_RPAREN] = ACTIONS(363),
    [anon_sym_COLON] = ACTIONS(365),
    [anon_sym_COLON_COLON] = ACTIONS(363),
    [sym__symbol_chars] = ACTIONS(365),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(363),
    [anon_sym_RBRACK] = ACTIONS(363),
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
  [79] = {
    [sym__anything] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_number] = STATE(79),
    [sym_character] = STATE(79),
    [sym_string] = STATE(79),
    [sym_regex] = STATE(79),
    [sym_quote] = STATE(79),
    [sym_keyword] = STATE(79),
    [sym__unqualified_keyword] = STATE(23),
    [sym_qualified_keyword] = STATE(23),
    [sym_symbol] = STATE(79),
    [sym_qualified_symbol] = STATE(24),
    [sym_list] = STATE(79),
    [sym_vector] = STATE(79),
    [sym_hash_map] = STATE(79),
    [sym_namespace_map] = STATE(25),
    [sym_set] = STATE(79),
    [sym_comment] = STATE(79),
    [sym_semicolon] = STATE(26),
    [sym_shebang_line] = STATE(26),
    [sym_ignore_form] = STATE(26),
    [sym_comment_macro] = STATE(26),
    [aux_sym_program_repeat1] = STATE(79),
    [sym_nil] = ACTIONS(367),
    [sym_true] = ACTIONS(266),
    [sym_false] = ACTIONS(266),
    [sym_number_long] = ACTIONS(269),
    [sym_number_double] = ACTIONS(272),
    [anon_sym_BSLASH] = ACTIONS(275),
    [anon_sym_DQUOTE] = ACTIONS(278),
    [anon_sym_POUND_DQUOTE] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(370),
    [anon_sym_LPARENquote] = ACTIONS(287),
    [anon_sym_RPAREN] = ACTIONS(261),
    [anon_sym_COLON] = ACTIONS(290),
    [anon_sym_COLON_COLON] = ACTIONS(293),
    [sym__symbol_chars] = ACTIONS(296),
    [anon_sym_LPAREN] = ACTIONS(299),
    [anon_sym_LBRACK] = ACTIONS(302),
    [anon_sym_LBRACE] = ACTIONS(305),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(308),
    [anon_sym_POUND] = ACTIONS(311),
    [anon_sym_POUND_LBRACE] = ACTIONS(314),
    [anon_sym_SEMI] = ACTIONS(317),
    [anon_sym_POUND_BANG] = ACTIONS(320),
    [anon_sym_POUND_] = ACTIONS(373),
    [anon_sym_LPARENcomment] = ACTIONS(326),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(376),
    [sym_nil] = ACTIONS(378),
    [sym_true] = ACTIONS(378),
    [sym_false] = ACTIONS(378),
    [sym_number_long] = ACTIONS(378),
    [sym_number_double] = ACTIONS(376),
    [anon_sym_BSLASH] = ACTIONS(376),
    [anon_sym_DQUOTE] = ACTIONS(376),
    [anon_sym_POUND_DQUOTE] = ACTIONS(376),
    [anon_sym_SQUOTE] = ACTIONS(376),
    [anon_sym_LPARENquote] = ACTIONS(376),
    [anon_sym_RPAREN] = ACTIONS(376),
    [anon_sym_COLON] = ACTIONS(378),
    [anon_sym_COLON_COLON] = ACTIONS(376),
    [sym__symbol_chars] = ACTIONS(378),
    [anon_sym_LPAREN] = ACTIONS(378),
    [anon_sym_LBRACK] = ACTIONS(376),
    [anon_sym_RBRACK] = ACTIONS(376),
    [anon_sym_LBRACE] = ACTIONS(376),
    [anon_sym_RBRACE] = ACTIONS(376),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(376),
    [anon_sym_POUND] = ACTIONS(378),
    [anon_sym_POUND_LBRACE] = ACTIONS(376),
    [anon_sym_SEMI] = ACTIONS(376),
    [anon_sym_POUND_BANG] = ACTIONS(376),
    [anon_sym_POUND_] = ACTIONS(376),
    [anon_sym_LPARENcomment] = ACTIONS(376),
  },
  [81] = {
    [sym__anything] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_number] = STATE(81),
    [sym_character] = STATE(81),
    [sym_string] = STATE(81),
    [sym_regex] = STATE(81),
    [sym_quote] = STATE(81),
    [sym_keyword] = STATE(81),
    [sym__unqualified_keyword] = STATE(23),
    [sym_qualified_keyword] = STATE(23),
    [sym_symbol] = STATE(81),
    [sym_qualified_symbol] = STATE(24),
    [sym_list] = STATE(81),
    [sym_vector] = STATE(81),
    [sym_hash_map] = STATE(81),
    [sym_namespace_map] = STATE(25),
    [sym_set] = STATE(81),
    [sym_comment] = STATE(81),
    [sym_semicolon] = STATE(26),
    [sym_shebang_line] = STATE(26),
    [sym_ignore_form] = STATE(26),
    [sym_comment_macro] = STATE(26),
    [aux_sym_program_repeat1] = STATE(81),
    [sym_nil] = ACTIONS(380),
    [sym_true] = ACTIONS(266),
    [sym_false] = ACTIONS(266),
    [sym_number_long] = ACTIONS(269),
    [sym_number_double] = ACTIONS(272),
    [anon_sym_BSLASH] = ACTIONS(275),
    [anon_sym_DQUOTE] = ACTIONS(278),
    [anon_sym_POUND_DQUOTE] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(383),
    [anon_sym_LPARENquote] = ACTIONS(287),
    [anon_sym_COLON] = ACTIONS(290),
    [anon_sym_COLON_COLON] = ACTIONS(293),
    [sym__symbol_chars] = ACTIONS(296),
    [anon_sym_LPAREN] = ACTIONS(299),
    [anon_sym_LBRACK] = ACTIONS(302),
    [anon_sym_RBRACK] = ACTIONS(261),
    [anon_sym_LBRACE] = ACTIONS(305),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(308),
    [anon_sym_POUND] = ACTIONS(311),
    [anon_sym_POUND_LBRACE] = ACTIONS(314),
    [anon_sym_SEMI] = ACTIONS(317),
    [anon_sym_POUND_BANG] = ACTIONS(320),
    [anon_sym_POUND_] = ACTIONS(386),
    [anon_sym_LPARENcomment] = ACTIONS(326),
  },
  [82] = {
    [sym_nil] = ACTIONS(389),
    [sym_true] = ACTIONS(389),
    [sym_false] = ACTIONS(389),
    [sym_number_long] = ACTIONS(389),
    [sym_number_double] = ACTIONS(391),
    [anon_sym_BSLASH] = ACTIONS(391),
    [anon_sym_DQUOTE] = ACTIONS(391),
    [anon_sym_POUND_DQUOTE] = ACTIONS(391),
    [anon_sym_SQUOTE] = ACTIONS(391),
    [anon_sym_LPARENquote] = ACTIONS(391),
    [anon_sym_COLON] = ACTIONS(389),
    [anon_sym_COLON_COLON] = ACTIONS(391),
    [sym__symbol_chars] = ACTIONS(389),
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_LBRACE] = ACTIONS(391),
    [anon_sym_RBRACE] = ACTIONS(391),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(391),
    [anon_sym_POUND] = ACTIONS(389),
    [anon_sym_POUND_LBRACE] = ACTIONS(391),
    [anon_sym_SEMI] = ACTIONS(391),
    [anon_sym_POUND_BANG] = ACTIONS(391),
    [anon_sym_POUND_] = ACTIONS(391),
    [anon_sym_LPARENcomment] = ACTIONS(391),
  },
  [83] = {
    [sym_nil] = ACTIONS(393),
    [sym_true] = ACTIONS(393),
    [sym_false] = ACTIONS(393),
    [sym_number_long] = ACTIONS(393),
    [sym_number_double] = ACTIONS(395),
    [anon_sym_BSLASH] = ACTIONS(395),
    [anon_sym_DQUOTE] = ACTIONS(395),
    [anon_sym_POUND_DQUOTE] = ACTIONS(395),
    [anon_sym_SQUOTE] = ACTIONS(395),
    [anon_sym_LPARENquote] = ACTIONS(395),
    [anon_sym_COLON] = ACTIONS(393),
    [anon_sym_COLON_COLON] = ACTIONS(395),
    [sym__symbol_chars] = ACTIONS(393),
    [anon_sym_LPAREN] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(395),
    [anon_sym_LBRACE] = ACTIONS(395),
    [anon_sym_RBRACE] = ACTIONS(395),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(395),
    [anon_sym_POUND] = ACTIONS(393),
    [anon_sym_POUND_LBRACE] = ACTIONS(395),
    [anon_sym_SEMI] = ACTIONS(395),
    [anon_sym_POUND_BANG] = ACTIONS(395),
    [anon_sym_POUND_] = ACTIONS(395),
    [anon_sym_LPARENcomment] = ACTIONS(395),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(397),
    [sym_nil] = ACTIONS(399),
    [sym_true] = ACTIONS(399),
    [sym_false] = ACTIONS(399),
    [sym_number_long] = ACTIONS(399),
    [sym_number_double] = ACTIONS(397),
    [anon_sym_BSLASH] = ACTIONS(397),
    [anon_sym_DQUOTE] = ACTIONS(397),
    [anon_sym_POUND_DQUOTE] = ACTIONS(397),
    [anon_sym_SQUOTE] = ACTIONS(397),
    [anon_sym_LPARENquote] = ACTIONS(397),
    [anon_sym_RPAREN] = ACTIONS(397),
    [anon_sym_COLON] = ACTIONS(399),
    [anon_sym_COLON_COLON] = ACTIONS(397),
    [sym__symbol_chars] = ACTIONS(399),
    [anon_sym_LPAREN] = ACTIONS(399),
    [anon_sym_LBRACK] = ACTIONS(397),
    [anon_sym_RBRACK] = ACTIONS(397),
    [anon_sym_LBRACE] = ACTIONS(397),
    [anon_sym_RBRACE] = ACTIONS(397),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(397),
    [anon_sym_POUND] = ACTIONS(399),
    [anon_sym_POUND_LBRACE] = ACTIONS(397),
    [anon_sym_SEMI] = ACTIONS(397),
    [anon_sym_POUND_BANG] = ACTIONS(397),
    [anon_sym_POUND_] = ACTIONS(397),
    [anon_sym_LPARENcomment] = ACTIONS(397),
  },
  [85] = {
    [sym__anything] = STATE(53),
    [sym_boolean] = STATE(53),
    [sym_number] = STATE(53),
    [sym_character] = STATE(53),
    [sym_string] = STATE(53),
    [sym_regex] = STATE(53),
    [sym_quote] = STATE(53),
    [sym_keyword] = STATE(53),
    [sym__unqualified_keyword] = STATE(23),
    [sym_qualified_keyword] = STATE(23),
    [sym_symbol] = STATE(53),
    [sym_qualified_symbol] = STATE(24),
    [sym_list] = STATE(53),
    [sym_vector] = STATE(53),
    [sym_hash_map] = STATE(53),
    [sym_namespace_map] = STATE(25),
    [sym_hash_map_kv_pair] = STATE(85),
    [sym_hash_map_key] = STATE(54),
    [sym_set] = STATE(53),
    [sym_comment] = STATE(53),
    [sym_semicolon] = STATE(26),
    [sym_shebang_line] = STATE(26),
    [sym_ignore_form] = STATE(26),
    [sym_comment_macro] = STATE(26),
    [aux_sym_hash_map_repeat1] = STATE(85),
    [sym_nil] = ACTIONS(401),
    [sym_true] = ACTIONS(404),
    [sym_false] = ACTIONS(404),
    [sym_number_long] = ACTIONS(407),
    [sym_number_double] = ACTIONS(410),
    [anon_sym_BSLASH] = ACTIONS(413),
    [anon_sym_DQUOTE] = ACTIONS(416),
    [anon_sym_POUND_DQUOTE] = ACTIONS(419),
    [anon_sym_SQUOTE] = ACTIONS(422),
    [anon_sym_LPARENquote] = ACTIONS(425),
    [anon_sym_COLON] = ACTIONS(428),
    [anon_sym_COLON_COLON] = ACTIONS(431),
    [sym__symbol_chars] = ACTIONS(434),
    [anon_sym_LPAREN] = ACTIONS(437),
    [anon_sym_LBRACK] = ACTIONS(440),
    [anon_sym_LBRACE] = ACTIONS(443),
    [anon_sym_RBRACE] = ACTIONS(446),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(448),
    [anon_sym_POUND] = ACTIONS(451),
    [anon_sym_POUND_LBRACE] = ACTIONS(454),
    [anon_sym_SEMI] = ACTIONS(457),
    [anon_sym_POUND_BANG] = ACTIONS(460),
    [anon_sym_POUND_] = ACTIONS(463),
    [anon_sym_LPARENcomment] = ACTIONS(466),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(469),
    [sym_nil] = ACTIONS(471),
    [sym_true] = ACTIONS(471),
    [sym_false] = ACTIONS(471),
    [sym_number_long] = ACTIONS(471),
    [sym_number_double] = ACTIONS(469),
    [anon_sym_BSLASH] = ACTIONS(469),
    [anon_sym_DQUOTE] = ACTIONS(469),
    [anon_sym_POUND_DQUOTE] = ACTIONS(469),
    [anon_sym_SQUOTE] = ACTIONS(469),
    [anon_sym_LPARENquote] = ACTIONS(469),
    [anon_sym_RPAREN] = ACTIONS(469),
    [anon_sym_COLON] = ACTIONS(471),
    [anon_sym_COLON_COLON] = ACTIONS(469),
    [sym__symbol_chars] = ACTIONS(471),
    [anon_sym_LPAREN] = ACTIONS(471),
    [anon_sym_LBRACK] = ACTIONS(469),
    [anon_sym_RBRACK] = ACTIONS(469),
    [anon_sym_LBRACE] = ACTIONS(469),
    [anon_sym_RBRACE] = ACTIONS(469),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(469),
    [anon_sym_POUND] = ACTIONS(471),
    [anon_sym_POUND_LBRACE] = ACTIONS(469),
    [anon_sym_SEMI] = ACTIONS(469),
    [anon_sym_POUND_BANG] = ACTIONS(469),
    [anon_sym_POUND_] = ACTIONS(469),
    [anon_sym_LPARENcomment] = ACTIONS(469),
  },
  [87] = {
    [sym__anything] = STATE(53),
    [sym_boolean] = STATE(53),
    [sym_number] = STATE(53),
    [sym_character] = STATE(53),
    [sym_string] = STATE(53),
    [sym_regex] = STATE(53),
    [sym_quote] = STATE(53),
    [sym_keyword] = STATE(53),
    [sym__unqualified_keyword] = STATE(23),
    [sym_qualified_keyword] = STATE(23),
    [sym_symbol] = STATE(53),
    [sym_qualified_symbol] = STATE(24),
    [sym_list] = STATE(53),
    [sym_vector] = STATE(53),
    [sym_hash_map] = STATE(53),
    [sym_namespace_map] = STATE(25),
    [sym_hash_map_kv_pair] = STATE(94),
    [sym_hash_map_key] = STATE(54),
    [sym_set] = STATE(53),
    [sym_comment] = STATE(53),
    [sym_semicolon] = STATE(26),
    [sym_shebang_line] = STATE(26),
    [sym_ignore_form] = STATE(26),
    [sym_comment_macro] = STATE(26),
    [aux_sym_hash_map_repeat1] = STATE(94),
    [sym_nil] = ACTIONS(107),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [sym__symbol_chars] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(473),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(45),
    [anon_sym_POUND_] = ACTIONS(113),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [88] = {
    [ts_builtin_sym_end] = ACTIONS(475),
    [sym_nil] = ACTIONS(477),
    [sym_true] = ACTIONS(477),
    [sym_false] = ACTIONS(477),
    [sym_number_long] = ACTIONS(477),
    [sym_number_double] = ACTIONS(475),
    [anon_sym_BSLASH] = ACTIONS(475),
    [anon_sym_DQUOTE] = ACTIONS(475),
    [anon_sym_POUND_DQUOTE] = ACTIONS(475),
    [anon_sym_SQUOTE] = ACTIONS(475),
    [anon_sym_LPARENquote] = ACTIONS(475),
    [anon_sym_RPAREN] = ACTIONS(475),
    [anon_sym_COLON] = ACTIONS(477),
    [anon_sym_COLON_COLON] = ACTIONS(475),
    [sym__symbol_chars] = ACTIONS(477),
    [anon_sym_LPAREN] = ACTIONS(477),
    [anon_sym_LBRACK] = ACTIONS(475),
    [anon_sym_RBRACK] = ACTIONS(475),
    [anon_sym_LBRACE] = ACTIONS(475),
    [anon_sym_RBRACE] = ACTIONS(475),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(475),
    [anon_sym_POUND] = ACTIONS(477),
    [anon_sym_POUND_LBRACE] = ACTIONS(475),
    [anon_sym_SEMI] = ACTIONS(475),
    [anon_sym_POUND_BANG] = ACTIONS(475),
    [anon_sym_POUND_] = ACTIONS(475),
    [anon_sym_LPARENcomment] = ACTIONS(475),
  },
  [89] = {
    [sym__anything] = STATE(89),
    [sym_boolean] = STATE(89),
    [sym_number] = STATE(89),
    [sym_character] = STATE(89),
    [sym_string] = STATE(89),
    [sym_regex] = STATE(89),
    [sym_quote] = STATE(89),
    [sym_keyword] = STATE(89),
    [sym__unqualified_keyword] = STATE(23),
    [sym_qualified_keyword] = STATE(23),
    [sym_symbol] = STATE(89),
    [sym_qualified_symbol] = STATE(24),
    [sym_list] = STATE(89),
    [sym_vector] = STATE(89),
    [sym_hash_map] = STATE(89),
    [sym_namespace_map] = STATE(25),
    [sym_set] = STATE(89),
    [sym_comment] = STATE(89),
    [sym_semicolon] = STATE(26),
    [sym_shebang_line] = STATE(26),
    [sym_ignore_form] = STATE(26),
    [sym_comment_macro] = STATE(26),
    [aux_sym_program_repeat1] = STATE(89),
    [sym_nil] = ACTIONS(479),
    [sym_true] = ACTIONS(266),
    [sym_false] = ACTIONS(266),
    [sym_number_long] = ACTIONS(269),
    [sym_number_double] = ACTIONS(272),
    [anon_sym_BSLASH] = ACTIONS(275),
    [anon_sym_DQUOTE] = ACTIONS(278),
    [anon_sym_POUND_DQUOTE] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(482),
    [anon_sym_LPARENquote] = ACTIONS(287),
    [anon_sym_COLON] = ACTIONS(290),
    [anon_sym_COLON_COLON] = ACTIONS(293),
    [sym__symbol_chars] = ACTIONS(296),
    [anon_sym_LPAREN] = ACTIONS(299),
    [anon_sym_LBRACK] = ACTIONS(302),
    [anon_sym_LBRACE] = ACTIONS(305),
    [anon_sym_RBRACE] = ACTIONS(261),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(308),
    [anon_sym_POUND] = ACTIONS(311),
    [anon_sym_POUND_LBRACE] = ACTIONS(314),
    [anon_sym_SEMI] = ACTIONS(317),
    [anon_sym_POUND_BANG] = ACTIONS(320),
    [anon_sym_POUND_] = ACTIONS(485),
    [anon_sym_LPARENcomment] = ACTIONS(326),
  },
  [90] = {
    [ts_builtin_sym_end] = ACTIONS(488),
    [sym_nil] = ACTIONS(490),
    [sym_true] = ACTIONS(490),
    [sym_false] = ACTIONS(490),
    [sym_number_long] = ACTIONS(490),
    [sym_number_double] = ACTIONS(488),
    [anon_sym_BSLASH] = ACTIONS(488),
    [anon_sym_DQUOTE] = ACTIONS(488),
    [anon_sym_POUND_DQUOTE] = ACTIONS(488),
    [anon_sym_SQUOTE] = ACTIONS(488),
    [anon_sym_LPARENquote] = ACTIONS(488),
    [anon_sym_RPAREN] = ACTIONS(488),
    [anon_sym_COLON] = ACTIONS(490),
    [anon_sym_COLON_COLON] = ACTIONS(488),
    [sym__symbol_chars] = ACTIONS(490),
    [anon_sym_LPAREN] = ACTIONS(490),
    [anon_sym_LBRACK] = ACTIONS(488),
    [anon_sym_RBRACK] = ACTIONS(488),
    [anon_sym_LBRACE] = ACTIONS(488),
    [anon_sym_RBRACE] = ACTIONS(488),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(488),
    [anon_sym_POUND] = ACTIONS(490),
    [anon_sym_POUND_LBRACE] = ACTIONS(488),
    [anon_sym_SEMI] = ACTIONS(488),
    [anon_sym_POUND_BANG] = ACTIONS(488),
    [anon_sym_POUND_] = ACTIONS(488),
    [anon_sym_LPARENcomment] = ACTIONS(488),
  },
  [91] = {
    [sym__hex_char] = ACTIONS(492),
  },
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(494),
    [sym_nil] = ACTIONS(496),
    [sym_true] = ACTIONS(496),
    [sym_false] = ACTIONS(496),
    [sym_number_long] = ACTIONS(496),
    [sym_number_double] = ACTIONS(494),
    [anon_sym_BSLASH] = ACTIONS(494),
    [anon_sym_DQUOTE] = ACTIONS(494),
    [anon_sym_POUND_DQUOTE] = ACTIONS(494),
    [anon_sym_SQUOTE] = ACTIONS(494),
    [anon_sym_LPARENquote] = ACTIONS(494),
    [anon_sym_RPAREN] = ACTIONS(494),
    [anon_sym_COLON] = ACTIONS(496),
    [anon_sym_COLON_COLON] = ACTIONS(494),
    [sym__symbol_chars] = ACTIONS(496),
    [anon_sym_LPAREN] = ACTIONS(496),
    [anon_sym_LBRACK] = ACTIONS(494),
    [anon_sym_RBRACK] = ACTIONS(494),
    [anon_sym_LBRACE] = ACTIONS(494),
    [anon_sym_RBRACE] = ACTIONS(494),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(494),
    [anon_sym_POUND] = ACTIONS(496),
    [anon_sym_POUND_LBRACE] = ACTIONS(494),
    [anon_sym_SEMI] = ACTIONS(494),
    [anon_sym_POUND_BANG] = ACTIONS(494),
    [anon_sym_POUND_] = ACTIONS(494),
    [anon_sym_LPARENcomment] = ACTIONS(494),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(498),
    [sym_nil] = ACTIONS(500),
    [sym_true] = ACTIONS(500),
    [sym_false] = ACTIONS(500),
    [sym_number_long] = ACTIONS(500),
    [sym_number_double] = ACTIONS(498),
    [anon_sym_BSLASH] = ACTIONS(498),
    [anon_sym_DQUOTE] = ACTIONS(498),
    [anon_sym_POUND_DQUOTE] = ACTIONS(498),
    [anon_sym_SQUOTE] = ACTIONS(498),
    [anon_sym_LPARENquote] = ACTIONS(498),
    [anon_sym_RPAREN] = ACTIONS(498),
    [anon_sym_COLON] = ACTIONS(500),
    [anon_sym_COLON_COLON] = ACTIONS(498),
    [sym__symbol_chars] = ACTIONS(500),
    [anon_sym_LPAREN] = ACTIONS(500),
    [anon_sym_LBRACK] = ACTIONS(498),
    [anon_sym_RBRACK] = ACTIONS(498),
    [anon_sym_LBRACE] = ACTIONS(498),
    [anon_sym_RBRACE] = ACTIONS(498),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(498),
    [anon_sym_POUND] = ACTIONS(500),
    [anon_sym_POUND_LBRACE] = ACTIONS(498),
    [anon_sym_SEMI] = ACTIONS(498),
    [anon_sym_POUND_BANG] = ACTIONS(498),
    [anon_sym_POUND_] = ACTIONS(498),
    [anon_sym_LPARENcomment] = ACTIONS(498),
  },
  [94] = {
    [sym__anything] = STATE(53),
    [sym_boolean] = STATE(53),
    [sym_number] = STATE(53),
    [sym_character] = STATE(53),
    [sym_string] = STATE(53),
    [sym_regex] = STATE(53),
    [sym_quote] = STATE(53),
    [sym_keyword] = STATE(53),
    [sym__unqualified_keyword] = STATE(23),
    [sym_qualified_keyword] = STATE(23),
    [sym_symbol] = STATE(53),
    [sym_qualified_symbol] = STATE(24),
    [sym_list] = STATE(53),
    [sym_vector] = STATE(53),
    [sym_hash_map] = STATE(53),
    [sym_namespace_map] = STATE(25),
    [sym_hash_map_kv_pair] = STATE(85),
    [sym_hash_map_key] = STATE(54),
    [sym_set] = STATE(53),
    [sym_comment] = STATE(53),
    [sym_semicolon] = STATE(26),
    [sym_shebang_line] = STATE(26),
    [sym_ignore_form] = STATE(26),
    [sym_comment_macro] = STATE(26),
    [aux_sym_hash_map_repeat1] = STATE(85),
    [sym_nil] = ACTIONS(107),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [sym__symbol_chars] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(502),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(45),
    [anon_sym_POUND_] = ACTIONS(113),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [95] = {
    [sym__hex_char] = ACTIONS(504),
  },
  [96] = {
    [ts_builtin_sym_end] = ACTIONS(506),
    [sym_nil] = ACTIONS(508),
    [sym_true] = ACTIONS(508),
    [sym_false] = ACTIONS(508),
    [sym_number_long] = ACTIONS(508),
    [sym_number_double] = ACTIONS(506),
    [anon_sym_BSLASH] = ACTIONS(506),
    [anon_sym_DQUOTE] = ACTIONS(506),
    [anon_sym_POUND_DQUOTE] = ACTIONS(506),
    [anon_sym_SQUOTE] = ACTIONS(506),
    [anon_sym_LPARENquote] = ACTIONS(506),
    [anon_sym_RPAREN] = ACTIONS(506),
    [anon_sym_COLON] = ACTIONS(508),
    [anon_sym_COLON_COLON] = ACTIONS(506),
    [sym__symbol_chars] = ACTIONS(508),
    [anon_sym_LPAREN] = ACTIONS(508),
    [anon_sym_LBRACK] = ACTIONS(506),
    [anon_sym_RBRACK] = ACTIONS(506),
    [anon_sym_LBRACE] = ACTIONS(506),
    [anon_sym_RBRACE] = ACTIONS(506),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(506),
    [anon_sym_POUND] = ACTIONS(508),
    [anon_sym_POUND_LBRACE] = ACTIONS(506),
    [anon_sym_SEMI] = ACTIONS(506),
    [anon_sym_POUND_BANG] = ACTIONS(506),
    [anon_sym_POUND_] = ACTIONS(506),
    [anon_sym_LPARENcomment] = ACTIONS(506),
  },
  [97] = {
    [ts_builtin_sym_end] = ACTIONS(510),
    [sym_nil] = ACTIONS(512),
    [sym_true] = ACTIONS(512),
    [sym_false] = ACTIONS(512),
    [sym_number_long] = ACTIONS(512),
    [sym_number_double] = ACTIONS(510),
    [anon_sym_BSLASH] = ACTIONS(510),
    [anon_sym_DQUOTE] = ACTIONS(510),
    [anon_sym_POUND_DQUOTE] = ACTIONS(510),
    [anon_sym_SQUOTE] = ACTIONS(510),
    [anon_sym_LPARENquote] = ACTIONS(510),
    [anon_sym_RPAREN] = ACTIONS(510),
    [anon_sym_COLON] = ACTIONS(512),
    [anon_sym_COLON_COLON] = ACTIONS(510),
    [sym__symbol_chars] = ACTIONS(512),
    [anon_sym_LPAREN] = ACTIONS(512),
    [anon_sym_LBRACK] = ACTIONS(510),
    [anon_sym_RBRACK] = ACTIONS(510),
    [anon_sym_LBRACE] = ACTIONS(510),
    [anon_sym_RBRACE] = ACTIONS(510),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(510),
    [anon_sym_POUND] = ACTIONS(512),
    [anon_sym_POUND_LBRACE] = ACTIONS(510),
    [anon_sym_SEMI] = ACTIONS(510),
    [anon_sym_POUND_BANG] = ACTIONS(510),
    [anon_sym_POUND_] = ACTIONS(510),
    [anon_sym_LPARENcomment] = ACTIONS(510),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(27),
  [9] = {.count = 1, .reusable = false}, SHIFT(2),
  [11] = {.count = 1, .reusable = false}, SHIFT(3),
  [13] = {.count = 1, .reusable = true}, SHIFT(3),
  [15] = {.count = 1, .reusable = true}, SHIFT(4),
  [17] = {.count = 1, .reusable = true}, SHIFT(5),
  [19] = {.count = 1, .reusable = true}, SHIFT(6),
  [21] = {.count = 1, .reusable = true}, SHIFT(7),
  [23] = {.count = 1, .reusable = true}, SHIFT(8),
  [25] = {.count = 1, .reusable = false}, SHIFT(9),
  [27] = {.count = 1, .reusable = true}, SHIFT(10),
  [29] = {.count = 1, .reusable = false}, SHIFT(11),
  [31] = {.count = 1, .reusable = false}, SHIFT(12),
  [33] = {.count = 1, .reusable = true}, SHIFT(13),
  [35] = {.count = 1, .reusable = true}, SHIFT(14),
  [37] = {.count = 1, .reusable = true}, SHIFT(15),
  [39] = {.count = 1, .reusable = false}, SHIFT(16),
  [41] = {.count = 1, .reusable = true}, SHIFT(17),
  [43] = {.count = 1, .reusable = true}, SHIFT(18),
  [45] = {.count = 1, .reusable = true}, SHIFT(19),
  [47] = {.count = 1, .reusable = true}, SHIFT(20),
  [49] = {.count = 1, .reusable = true}, SHIFT(21),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [53] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 1),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_number, 1),
  [57] = {.count = 1, .reusable = false}, REDUCE(sym_number, 1),
  [59] = {.count = 1, .reusable = false}, SHIFT(28),
  [61] = {.count = 1, .reusable = false}, SHIFT(29),
  [63] = {.count = 1, .reusable = false}, SHIFT(30),
  [65] = {.count = 1, .reusable = false}, SHIFT(31),
  [67] = {.count = 1, .reusable = false}, SHIFT(32),
  [69] = {.count = 1, .reusable = false}, SHIFT(33),
  [71] = {.count = 1, .reusable = false}, SHIFT(34),
  [73] = {.count = 1, .reusable = false}, SHIFT(35),
  [75] = {.count = 1, .reusable = false}, SHIFT(38),
  [77] = {.count = 1, .reusable = true}, SHIFT(36),
  [79] = {.count = 1, .reusable = true}, SHIFT(37),
  [81] = {.count = 1, .reusable = true}, SHIFT(39),
  [83] = {.count = 1, .reusable = true}, SHIFT(40),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_symbol, 1),
  [87] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 1),
  [89] = {.count = 1, .reusable = true}, SHIFT(41),
  [91] = {.count = 1, .reusable = false}, SHIFT(45),
  [93] = {.count = 1, .reusable = true}, SHIFT(42),
  [95] = {.count = 1, .reusable = true}, SHIFT(43),
  [97] = {.count = 1, .reusable = true}, SHIFT(44),
  [99] = {.count = 1, .reusable = false}, SHIFT(49),
  [101] = {.count = 1, .reusable = true}, SHIFT(46),
  [103] = {.count = 1, .reusable = true}, SHIFT(47),
  [105] = {.count = 1, .reusable = true}, SHIFT(48),
  [107] = {.count = 1, .reusable = false}, SHIFT(53),
  [109] = {.count = 1, .reusable = true}, SHIFT(50),
  [111] = {.count = 1, .reusable = true}, SHIFT(51),
  [113] = {.count = 1, .reusable = true}, SHIFT(52),
  [115] = {.count = 1, .reusable = true}, SHIFT(56),
  [117] = {.count = 1, .reusable = true}, SHIFT(58),
  [119] = {.count = 1, .reusable = false}, SHIFT(62),
  [121] = {.count = 1, .reusable = true}, SHIFT(59),
  [123] = {.count = 1, .reusable = true}, SHIFT(60),
  [125] = {.count = 1, .reusable = true}, SHIFT(61),
  [127] = {.count = 1, .reusable = false}, SHIFT(63),
  [129] = {.count = 1, .reusable = false}, SHIFT(64),
  [131] = {.count = 1, .reusable = false}, SHIFT(65),
  [133] = {.count = 1, .reusable = false}, SHIFT(67),
  [135] = {.count = 1, .reusable = true}, SHIFT(66),
  [137] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_keyword, 1),
  [141] = {.count = 1, .reusable = false}, REDUCE(sym_keyword, 1),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map, 1),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map, 1),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [149] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 1),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [153] = {.count = 1, .reusable = false}, SHIFT(68),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_character, 2),
  [157] = {.count = 1, .reusable = false}, REDUCE(sym_character, 2),
  [159] = {.count = 1, .reusable = true}, SHIFT(69),
  [161] = {.count = 1, .reusable = true}, SHIFT(70),
  [163] = {.count = 1, .reusable = false}, SHIFT(70),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_string, 2),
  [169] = {.count = 1, .reusable = false}, SHIFT(71),
  [171] = {.count = 1, .reusable = false}, SHIFT(72),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_regex, 2),
  [175] = {.count = 1, .reusable = false}, REDUCE(sym_regex, 2),
  [177] = {.count = 1, .reusable = false}, SHIFT(73),
  [179] = {.count = 1, .reusable = false}, SHIFT(74),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_quote, 2),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym_quote, 2),
  [185] = {.count = 1, .reusable = true}, SHIFT(75),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym__unqualified_keyword, 2),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym__unqualified_keyword, 2),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_keyword, 2),
  [193] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_keyword, 2),
  [195] = {.count = 1, .reusable = true}, SHIFT(76),
  [197] = {.count = 1, .reusable = true}, SHIFT(77),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_list, 2),
  [201] = {.count = 1, .reusable = false}, REDUCE(sym_list, 2),
  [203] = {.count = 1, .reusable = false}, SHIFT(79),
  [205] = {.count = 1, .reusable = true}, SHIFT(78),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_vector, 2),
  [209] = {.count = 1, .reusable = false}, REDUCE(sym_vector, 2),
  [211] = {.count = 1, .reusable = false}, SHIFT(81),
  [213] = {.count = 1, .reusable = true}, SHIFT(80),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map, 2),
  [217] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map, 2),
  [219] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map_key, 1),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map_key, 1),
  [223] = {.count = 1, .reusable = false}, SHIFT(82),
  [225] = {.count = 1, .reusable = true}, SHIFT(84),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 2),
  [229] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 2),
  [231] = {.count = 1, .reusable = true}, SHIFT(86),
  [233] = {.count = 1, .reusable = true}, SHIFT(87),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_set, 2),
  [237] = {.count = 1, .reusable = false}, REDUCE(sym_set, 2),
  [239] = {.count = 1, .reusable = false}, SHIFT(89),
  [241] = {.count = 1, .reusable = true}, SHIFT(88),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_semicolon, 2),
  [245] = {.count = 1, .reusable = false}, REDUCE(sym_semicolon, 2),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_shebang_line, 2),
  [249] = {.count = 1, .reusable = false}, REDUCE(sym_shebang_line, 2),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_ignore_form, 2),
  [253] = {.count = 1, .reusable = false}, REDUCE(sym_ignore_form, 2),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_comment_macro, 2),
  [257] = {.count = 1, .reusable = false}, REDUCE(sym_comment_macro, 2),
  [259] = {.count = 1, .reusable = true}, SHIFT(90),
  [261] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [263] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(68),
  [266] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [269] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [272] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [275] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [278] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [281] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [284] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [287] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [290] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [293] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [296] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [299] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [302] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [305] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [308] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [311] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(16),
  [314] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [317] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [320] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(19),
  [323] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(20),
  [326] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(21),
  [329] = {.count = 1, .reusable = true}, SHIFT(91),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym__octal_char, 2),
  [333] = {.count = 1, .reusable = false}, REDUCE(sym__octal_char, 2),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [337] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [339] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2),
  [341] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(72),
  [344] = {.count = 1, .reusable = true}, REDUCE(sym_regex, 3),
  [346] = {.count = 1, .reusable = false}, REDUCE(sym_regex, 3),
  [348] = {.count = 1, .reusable = false}, REDUCE(aux_sym_regex_repeat1, 2),
  [350] = {.count = 2, .reusable = false}, REDUCE(aux_sym_regex_repeat1, 2), SHIFT_REPEAT(74),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym_quote, 3),
  [355] = {.count = 1, .reusable = false}, REDUCE(sym_quote, 3),
  [357] = {.count = 1, .reusable = true}, SHIFT(92),
  [359] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_symbol, 3),
  [361] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_symbol, 3),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym_list, 3),
  [365] = {.count = 1, .reusable = false}, REDUCE(sym_list, 3),
  [367] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(79),
  [370] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(42),
  [373] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(44),
  [376] = {.count = 1, .reusable = true}, REDUCE(sym_vector, 3),
  [378] = {.count = 1, .reusable = false}, REDUCE(sym_vector, 3),
  [380] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(81),
  [383] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(46),
  [386] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(48),
  [389] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map_value, 1),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map_value, 1),
  [393] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map_kv_pair, 2),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map_kv_pair, 2),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map, 3),
  [399] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map, 3),
  [401] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(53),
  [404] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(2),
  [407] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(3),
  [410] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(3),
  [413] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(4),
  [416] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(5),
  [419] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(6),
  [422] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(50),
  [425] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(8),
  [428] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(9),
  [431] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(10),
  [434] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(11),
  [437] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(12),
  [440] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(13),
  [443] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(14),
  [446] = {.count = 1, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2),
  [448] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(15),
  [451] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(16),
  [454] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(17),
  [457] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(18),
  [460] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(19),
  [463] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(52),
  [466] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(21),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 3),
  [471] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 3),
  [473] = {.count = 1, .reusable = true}, SHIFT(93),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym_set, 3),
  [477] = {.count = 1, .reusable = false}, REDUCE(sym_set, 3),
  [479] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(89),
  [482] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(59),
  [485] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(61),
  [488] = {.count = 1, .reusable = true}, REDUCE(sym_comment_macro, 3),
  [490] = {.count = 1, .reusable = false}, REDUCE(sym_comment_macro, 3),
  [492] = {.count = 1, .reusable = true}, SHIFT(95),
  [494] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_keyword, 4),
  [496] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_keyword, 4),
  [498] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 4),
  [500] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 4),
  [502] = {.count = 1, .reusable = true}, SHIFT(96),
  [504] = {.count = 1, .reusable = true}, SHIFT(97),
  [506] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 5),
  [508] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 5),
  [510] = {.count = 1, .reusable = true}, REDUCE(sym__unicode_char, 5),
  [512] = {.count = 1, .reusable = false}, REDUCE(sym__unicode_char, 5),
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
