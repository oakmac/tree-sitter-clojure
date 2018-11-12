#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 257
#define SYMBOL_COUNT 100
#define ALIAS_COUNT 0
#define TOKEN_COUNT 48
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
  anon_sym_ = 45,
  anon_sym_LPARENcomment = 46,
  aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH = 47,
  sym_program = 48,
  sym__anything = 49,
  sym__literal = 50,
  sym__collection_literal = 51,
  sym_boolean = 52,
  sym_number = 53,
  sym__number = 54,
  sym_character = 55,
  sym__character = 56,
  sym__special_char = 57,
  sym__unicode_char = 58,
  sym__octal_char = 59,
  sym__octal_num = 60,
  sym_string = 61,
  sym__string = 62,
  sym_regex = 63,
  sym__regex = 64,
  sym_quote = 65,
  sym_keyword = 66,
  sym__keyword = 67,
  sym__unqualified_keyword = 68,
  sym_qualified_keyword = 69,
  sym_symbol = 70,
  sym__symbol = 71,
  sym_qualified_symbol = 72,
  sym_list = 73,
  sym__list = 74,
  sym_vector = 75,
  sym__vector = 76,
  sym_hash_map = 77,
  sym__hash_map = 78,
  sym_namespace_map = 79,
  sym__hash_map_kv_pair = 80,
  sym__hash_map_key = 81,
  sym__hash_map_value = 82,
  sym_set = 83,
  sym__set = 84,
  sym_comment = 85,
  sym_semicolon = 86,
  sym_shebang_line = 87,
  sym_ignore_form = 88,
  sym_comment_macro = 89,
  sym__one_form = 90,
  sym__paren_sequence = 91,
  sym__bracket_sequence = 92,
  sym__curly_brace_sequence = 93,
  aux_sym_program_repeat1 = 94,
  aux_sym__string_repeat1 = 95,
  aux_sym__regex_repeat1 = 96,
  aux_sym__hash_map_repeat1 = 97,
  aux_sym_ignore_form_repeat1 = 98,
  aux_sym_comment_macro_repeat1 = 99,
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
  [anon_sym_] = " ",
  [anon_sym_LPARENcomment] = "(comment",
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = "/[^\\(\\[\\{\\\"]/",
  [sym_program] = "program",
  [sym__anything] = "_anything",
  [sym__literal] = "_literal",
  [sym__collection_literal] = "_collection_literal",
  [sym_boolean] = "boolean",
  [sym_number] = "number",
  [sym__number] = "_number",
  [sym_character] = "character",
  [sym__character] = "_character",
  [sym__special_char] = "_special_char",
  [sym__unicode_char] = "_unicode_char",
  [sym__octal_char] = "_octal_char",
  [sym__octal_num] = "_octal_num",
  [sym_string] = "string",
  [sym__string] = "_string",
  [sym_regex] = "regex",
  [sym__regex] = "_regex",
  [sym_quote] = "quote",
  [sym_keyword] = "keyword",
  [sym__keyword] = "_keyword",
  [sym__unqualified_keyword] = "_unqualified_keyword",
  [sym_qualified_keyword] = "qualified_keyword",
  [sym_symbol] = "symbol",
  [sym__symbol] = "_symbol",
  [sym_qualified_symbol] = "qualified_symbol",
  [sym_list] = "list",
  [sym__list] = "_list",
  [sym_vector] = "vector",
  [sym__vector] = "_vector",
  [sym_hash_map] = "hash_map",
  [sym__hash_map] = "_hash_map",
  [sym_namespace_map] = "namespace_map",
  [sym__hash_map_kv_pair] = "_hash_map_kv_pair",
  [sym__hash_map_key] = "_hash_map_key",
  [sym__hash_map_value] = "_hash_map_value",
  [sym_set] = "set",
  [sym__set] = "_set",
  [sym_comment] = "comment",
  [sym_semicolon] = "semicolon",
  [sym_shebang_line] = "shebang_line",
  [sym_ignore_form] = "ignore_form",
  [sym_comment_macro] = "comment_macro",
  [sym__one_form] = "_one_form",
  [sym__paren_sequence] = "_paren_sequence",
  [sym__bracket_sequence] = "_bracket_sequence",
  [sym__curly_brace_sequence] = "_curly_brace_sequence",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym__string_repeat1] = "_string_repeat1",
  [aux_sym__regex_repeat1] = "_regex_repeat1",
  [aux_sym__hash_map_repeat1] = "_hash_map_repeat1",
  [aux_sym_ignore_form_repeat1] = "ignore_form_repeat1",
  [aux_sym_comment_macro_repeat1] = "comment_macro_repeat1",
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
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPARENcomment] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = {
    .visible = false,
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
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym__collection_literal] = {
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
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [sym__character] = {
    .visible = false,
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
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym__regex] = {
    .visible = false,
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
  [sym__keyword] = {
    .visible = false,
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
  [sym__symbol] = {
    .visible = false,
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
  [sym__list] = {
    .visible = false,
    .named = true,
  },
  [sym_vector] = {
    .visible = true,
    .named = true,
  },
  [sym__vector] = {
    .visible = false,
    .named = true,
  },
  [sym_hash_map] = {
    .visible = true,
    .named = true,
  },
  [sym__hash_map] = {
    .visible = false,
    .named = true,
  },
  [sym_namespace_map] = {
    .visible = true,
    .named = true,
  },
  [sym__hash_map_kv_pair] = {
    .visible = false,
    .named = true,
  },
  [sym__hash_map_key] = {
    .visible = false,
    .named = true,
  },
  [sym__hash_map_value] = {
    .visible = false,
    .named = true,
  },
  [sym_set] = {
    .visible = true,
    .named = true,
  },
  [sym__set] = {
    .visible = false,
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
  [sym__one_form] = {
    .visible = false,
    .named = true,
  },
  [sym__paren_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym__bracket_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym__curly_brace_sequence] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__regex_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__hash_map_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ignore_form_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_macro_repeat1] = {
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
      if (lookahead == ' ')
        ADVANCE(136);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(137);
      if (lookahead == '(')
        ADVANCE(138);
      if (lookahead == ',')
        ADVANCE(139);
      if (lookahead == '.')
        ADVANCE(140);
      if (lookahead == ':')
        ADVANCE(35);
      if (lookahead == '[')
        ADVANCE(38);
      if (lookahead == '{')
        ADVANCE(69);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(73);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(84);
      if (lookahead != 0)
        ADVANCE(139);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      END_STATE();
    case 141:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(137);
      if (lookahead == '(')
        ADVANCE(138);
      if (lookahead == ')')
        ADVANCE(25);
      if (lookahead == ',')
        ADVANCE(139);
      if (lookahead == '.')
        ADVANCE(140);
      if (lookahead == ':')
        ADVANCE(35);
      if (lookahead == '[')
        ADVANCE(38);
      if (lookahead == '{')
        ADVANCE(69);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(73);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(84);
      if (lookahead != 0)
        ADVANCE(139);
      END_STATE();
    case 142:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        SKIP(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(142);
      END_STATE();
    case 143:
      if (lookahead == ',')
        SKIP(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(77);
      END_STATE();
    case 144:
      if (lookahead == ',')
        SKIP(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(144);
      if (('0' <= lookahead && lookahead <= '3'))
        ADVANCE(145);
      if (('4' <= lookahead && lookahead <= '7'))
        ADVANCE(148);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 150:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(136);
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
        SKIP(150);
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
          lookahead == '\r')
        SKIP(150);
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
    case 151:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(137);
      if (lookahead == '(')
        ADVANCE(138);
      if (lookahead == ',')
        ADVANCE(139);
      if (lookahead == '.')
        ADVANCE(140);
      if (lookahead == ':')
        ADVANCE(35);
      if (lookahead == '[')
        ADVANCE(38);
      if (lookahead == ']')
        ADVANCE(40);
      if (lookahead == '{')
        ADVANCE(69);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(73);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(84);
      if (lookahead != 0)
        ADVANCE(139);
      END_STATE();
    case 152:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(137);
      if (lookahead == '(')
        ADVANCE(138);
      if (lookahead == ',')
        ADVANCE(139);
      if (lookahead == '.')
        ADVANCE(140);
      if (lookahead == ':')
        ADVANCE(35);
      if (lookahead == '[')
        ADVANCE(38);
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
        ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(73);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(84);
      if (lookahead != 0)
        ADVANCE(139);
      END_STATE();
    case 153:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(136);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ',')
        SKIP(153);
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
          lookahead == '\r')
        SKIP(153);
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
    case 154:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(137);
      if (lookahead == '(')
        ADVANCE(138);
      if (lookahead == ')')
        ADVANCE(25);
      if (lookahead == ',')
        ADVANCE(139);
      if (lookahead == '.')
        ADVANCE(140);
      if (lookahead == '/')
        ADVANCE(34);
      if (lookahead == ':')
        ADVANCE(35);
      if (lookahead == '[')
        ADVANCE(38);
      if (lookahead == '{')
        ADVANCE(69);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(73);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(84);
      if (lookahead != 0)
        ADVANCE(139);
      END_STATE();
    case 155:
      if (lookahead == ' ')
        ADVANCE(136);
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
        SKIP(155);
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
          lookahead == '\r')
        SKIP(155);
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
    case 156:
      if (lookahead == ' ')
        ADVANCE(136);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ',')
        SKIP(156);
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
          lookahead == '\r')
        SKIP(156);
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
    case 157:
      if (lookahead == ' ')
        ADVANCE(136);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ',')
        SKIP(157);
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
          lookahead == '\r')
        SKIP(157);
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
    case 158:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(136);
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
        SKIP(158);
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
          lookahead == '\r')
        SKIP(158);
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
    case 159:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(137);
      if (lookahead == '(')
        ADVANCE(138);
      if (lookahead == ',')
        ADVANCE(139);
      if (lookahead == '.')
        ADVANCE(140);
      if (lookahead == '/')
        ADVANCE(34);
      if (lookahead == ':')
        ADVANCE(35);
      if (lookahead == '[')
        ADVANCE(38);
      if (lookahead == ']')
        ADVANCE(40);
      if (lookahead == '{')
        ADVANCE(69);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(73);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(84);
      if (lookahead != 0)
        ADVANCE(139);
      END_STATE();
    case 160:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(137);
      if (lookahead == '(')
        ADVANCE(138);
      if (lookahead == ',')
        ADVANCE(139);
      if (lookahead == '.')
        ADVANCE(140);
      if (lookahead == '/')
        ADVANCE(34);
      if (lookahead == ':')
        ADVANCE(35);
      if (lookahead == '[')
        ADVANCE(38);
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
        ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(73);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(84);
      if (lookahead != 0)
        ADVANCE(139);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 78},
  [2] = {.lex_state = 94},
  [3] = {.lex_state = 95},
  [4] = {.lex_state = 118},
  [5] = {.lex_state = 122},
  [6] = {.lex_state = 78},
  [7] = {.lex_state = 78},
  [8] = {.lex_state = 125},
  [9] = {.lex_state = 125},
  [10] = {.lex_state = 127},
  [11] = {.lex_state = 128},
  [12] = {.lex_state = 129},
  [13] = {.lex_state = 130},
  [14] = {.lex_state = 130},
  [15] = {.lex_state = 131},
  [16] = {.lex_state = 130},
  [17] = {.lex_state = 132},
  [18] = {.lex_state = 132},
  [19] = {.lex_state = 135},
  [20] = {.lex_state = 141},
  [21] = {.lex_state = 142},
  [22] = {.lex_state = 94},
  [23] = {.lex_state = 94},
  [24] = {.lex_state = 94},
  [25] = {.lex_state = 94},
  [26] = {.lex_state = 94},
  [27] = {.lex_state = 94},
  [28] = {.lex_state = 94},
  [29] = {.lex_state = 94},
  [30] = {.lex_state = 94},
  [31] = {.lex_state = 94},
  [32] = {.lex_state = 94},
  [33] = {.lex_state = 78},
  [34] = {.lex_state = 94},
  [35] = {.lex_state = 143},
  [36] = {.lex_state = 144},
  [37] = {.lex_state = 94},
  [38] = {.lex_state = 118},
  [39] = {.lex_state = 94},
  [40] = {.lex_state = 122},
  [41] = {.lex_state = 94},
  [42] = {.lex_state = 78},
  [43] = {.lex_state = 135},
  [44] = {.lex_state = 128},
  [45] = {.lex_state = 94},
  [46] = {.lex_state = 127},
  [47] = {.lex_state = 131},
  [48] = {.lex_state = 78},
  [49] = {.lex_state = 94},
  [50] = {.lex_state = 135},
  [51] = {.lex_state = 128},
  [52] = {.lex_state = 78},
  [53] = {.lex_state = 94},
  [54] = {.lex_state = 135},
  [55] = {.lex_state = 129},
  [56] = {.lex_state = 78},
  [57] = {.lex_state = 94},
  [58] = {.lex_state = 135},
  [59] = {.lex_state = 78},
  [60] = {.lex_state = 130},
  [61] = {.lex_state = 94},
  [62] = {.lex_state = 130},
  [63] = {.lex_state = 78},
  [64] = {.lex_state = 78},
  [65] = {.lex_state = 94},
  [66] = {.lex_state = 135},
  [67] = {.lex_state = 130},
  [68] = {.lex_state = 94},
  [69] = {.lex_state = 94},
  [70] = {.lex_state = 118},
  [71] = {.lex_state = 125},
  [72] = {.lex_state = 125},
  [73] = {.lex_state = 150},
  [74] = {.lex_state = 141},
  [75] = {.lex_state = 151},
  [76] = {.lex_state = 152},
  [77] = {.lex_state = 78},
  [78] = {.lex_state = 153},
  [79] = {.lex_state = 135},
  [80] = {.lex_state = 118},
  [81] = {.lex_state = 94},
  [82] = {.lex_state = 125},
  [83] = {.lex_state = 125},
  [84] = {.lex_state = 154},
  [85] = {.lex_state = 141},
  [86] = {.lex_state = 151},
  [87] = {.lex_state = 152},
  [88] = {.lex_state = 78},
  [89] = {.lex_state = 141},
  [90] = {.lex_state = 78},
  [91] = {.lex_state = 143},
  [92] = {.lex_state = 94},
  [93] = {.lex_state = 94},
  [94] = {.lex_state = 118},
  [95] = {.lex_state = 94},
  [96] = {.lex_state = 122},
  [97] = {.lex_state = 155},
  [98] = {.lex_state = 135},
  [99] = {.lex_state = 94},
  [100] = {.lex_state = 125},
  [101] = {.lex_state = 94},
  [102] = {.lex_state = 155},
  [103] = {.lex_state = 135},
  [104] = {.lex_state = 94},
  [105] = {.lex_state = 128},
  [106] = {.lex_state = 156},
  [107] = {.lex_state = 135},
  [108] = {.lex_state = 94},
  [109] = {.lex_state = 129},
  [110] = {.lex_state = 150},
  [111] = {.lex_state = 135},
  [112] = {.lex_state = 130},
  [113] = {.lex_state = 94},
  [114] = {.lex_state = 130},
  [115] = {.lex_state = 94},
  [116] = {.lex_state = 130},
  [117] = {.lex_state = 157},
  [118] = {.lex_state = 135},
  [119] = {.lex_state = 94},
  [120] = {.lex_state = 130},
  [121] = {.lex_state = 158},
  [122] = {.lex_state = 118},
  [123] = {.lex_state = 158},
  [124] = {.lex_state = 150},
  [125] = {.lex_state = 131},
  [126] = {.lex_state = 158},
  [127] = {.lex_state = 141},
  [128] = {.lex_state = 118},
  [129] = {.lex_state = 125},
  [130] = {.lex_state = 125},
  [131] = {.lex_state = 159},
  [132] = {.lex_state = 141},
  [133] = {.lex_state = 151},
  [134] = {.lex_state = 158},
  [135] = {.lex_state = 152},
  [136] = {.lex_state = 78},
  [137] = {.lex_state = 151},
  [138] = {.lex_state = 118},
  [139] = {.lex_state = 125},
  [140] = {.lex_state = 125},
  [141] = {.lex_state = 160},
  [142] = {.lex_state = 141},
  [143] = {.lex_state = 151},
  [144] = {.lex_state = 152},
  [145] = {.lex_state = 158},
  [146] = {.lex_state = 78},
  [147] = {.lex_state = 152},
  [148] = {.lex_state = 152},
  [149] = {.lex_state = 153},
  [150] = {.lex_state = 153},
  [151] = {.lex_state = 135},
  [152] = {.lex_state = 141},
  [153] = {.lex_state = 118},
  [154] = {.lex_state = 141},
  [155] = {.lex_state = 154},
  [156] = {.lex_state = 131},
  [157] = {.lex_state = 141},
  [158] = {.lex_state = 141},
  [159] = {.lex_state = 141},
  [160] = {.lex_state = 151},
  [161] = {.lex_state = 141},
  [162] = {.lex_state = 152},
  [163] = {.lex_state = 152},
  [164] = {.lex_state = 94},
  [165] = {.lex_state = 141},
  [166] = {.lex_state = 143},
  [167] = {.lex_state = 155},
  [168] = {.lex_state = 155},
  [169] = {.lex_state = 94},
  [170] = {.lex_state = 155},
  [171] = {.lex_state = 155},
  [172] = {.lex_state = 156},
  [173] = {.lex_state = 156},
  [174] = {.lex_state = 150},
  [175] = {.lex_state = 150},
  [176] = {.lex_state = 94},
  [177] = {.lex_state = 130},
  [178] = {.lex_state = 157},
  [179] = {.lex_state = 157},
  [180] = {.lex_state = 158},
  [181] = {.lex_state = 125},
  [182] = {.lex_state = 158},
  [183] = {.lex_state = 158},
  [184] = {.lex_state = 151},
  [185] = {.lex_state = 118},
  [186] = {.lex_state = 151},
  [187] = {.lex_state = 159},
  [188] = {.lex_state = 131},
  [189] = {.lex_state = 151},
  [190] = {.lex_state = 141},
  [191] = {.lex_state = 151},
  [192] = {.lex_state = 151},
  [193] = {.lex_state = 151},
  [194] = {.lex_state = 152},
  [195] = {.lex_state = 152},
  [196] = {.lex_state = 158},
  [197] = {.lex_state = 151},
  [198] = {.lex_state = 152},
  [199] = {.lex_state = 118},
  [200] = {.lex_state = 152},
  [201] = {.lex_state = 160},
  [202] = {.lex_state = 131},
  [203] = {.lex_state = 152},
  [204] = {.lex_state = 141},
  [205] = {.lex_state = 152},
  [206] = {.lex_state = 151},
  [207] = {.lex_state = 152},
  [208] = {.lex_state = 152},
  [209] = {.lex_state = 152},
  [210] = {.lex_state = 158},
  [211] = {.lex_state = 152},
  [212] = {.lex_state = 152},
  [213] = {.lex_state = 153},
  [214] = {.lex_state = 153},
  [215] = {.lex_state = 141},
  [216] = {.lex_state = 125},
  [217] = {.lex_state = 141},
  [218] = {.lex_state = 141},
  [219] = {.lex_state = 141},
  [220] = {.lex_state = 141},
  [221] = {.lex_state = 152},
  [222] = {.lex_state = 143},
  [223] = {.lex_state = 155},
  [224] = {.lex_state = 155},
  [225] = {.lex_state = 155},
  [226] = {.lex_state = 155},
  [227] = {.lex_state = 156},
  [228] = {.lex_state = 156},
  [229] = {.lex_state = 150},
  [230] = {.lex_state = 150},
  [231] = {.lex_state = 94},
  [232] = {.lex_state = 157},
  [233] = {.lex_state = 157},
  [234] = {.lex_state = 158},
  [235] = {.lex_state = 151},
  [236] = {.lex_state = 125},
  [237] = {.lex_state = 151},
  [238] = {.lex_state = 151},
  [239] = {.lex_state = 151},
  [240] = {.lex_state = 151},
  [241] = {.lex_state = 152},
  [242] = {.lex_state = 152},
  [243] = {.lex_state = 125},
  [244] = {.lex_state = 152},
  [245] = {.lex_state = 152},
  [246] = {.lex_state = 152},
  [247] = {.lex_state = 152},
  [248] = {.lex_state = 152},
  [249] = {.lex_state = 158},
  [250] = {.lex_state = 141},
  [251] = {.lex_state = 141},
  [252] = {.lex_state = 94},
  [253] = {.lex_state = 151},
  [254] = {.lex_state = 151},
  [255] = {.lex_state = 152},
  [256] = {.lex_state = 152},
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
    [sym_program] = STATE(21),
    [sym__anything] = STATE(33),
    [sym__literal] = STATE(33),
    [sym__collection_literal] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_number] = STATE(33),
    [sym__number] = STATE(22),
    [sym_character] = STATE(33),
    [sym__character] = STATE(23),
    [sym_string] = STATE(33),
    [sym__string] = STATE(24),
    [sym_regex] = STATE(33),
    [sym__regex] = STATE(25),
    [sym_quote] = STATE(33),
    [sym_keyword] = STATE(33),
    [sym__keyword] = STATE(26),
    [sym__unqualified_keyword] = STATE(26),
    [sym_qualified_keyword] = STATE(26),
    [sym_symbol] = STATE(33),
    [sym__symbol] = STATE(27),
    [sym_qualified_symbol] = STATE(27),
    [sym_list] = STATE(33),
    [sym__list] = STATE(28),
    [sym_vector] = STATE(33),
    [sym__vector] = STATE(29),
    [sym_hash_map] = STATE(33),
    [sym__hash_map] = STATE(30),
    [sym_namespace_map] = STATE(30),
    [sym_set] = STATE(33),
    [sym__set] = STATE(31),
    [sym_comment] = STATE(33),
    [sym_semicolon] = STATE(32),
    [sym_shebang_line] = STATE(32),
    [sym_ignore_form] = STATE(32),
    [sym_comment_macro] = STATE(32),
    [aux_sym_program_repeat1] = STATE(33),
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
    [sym__special_char] = STATE(34),
    [sym__unicode_char] = STATE(34),
    [sym__octal_char] = STATE(34),
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
  [4] = {
    [aux_sym__string_repeat1] = STATE(38),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(63),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(63),
  },
  [5] = {
    [aux_sym__regex_repeat1] = STATE(40),
    [anon_sym_DQUOTE] = ACTIONS(65),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(67),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(67),
  },
  [6] = {
    [sym__anything] = STATE(41),
    [sym__literal] = STATE(41),
    [sym__collection_literal] = STATE(41),
    [sym_boolean] = STATE(41),
    [sym_number] = STATE(41),
    [sym__number] = STATE(22),
    [sym_character] = STATE(41),
    [sym__character] = STATE(23),
    [sym_string] = STATE(41),
    [sym__string] = STATE(24),
    [sym_regex] = STATE(41),
    [sym__regex] = STATE(25),
    [sym_quote] = STATE(41),
    [sym_keyword] = STATE(41),
    [sym__keyword] = STATE(26),
    [sym__unqualified_keyword] = STATE(26),
    [sym_qualified_keyword] = STATE(26),
    [sym_symbol] = STATE(41),
    [sym__symbol] = STATE(27),
    [sym_qualified_symbol] = STATE(27),
    [sym_list] = STATE(41),
    [sym__list] = STATE(28),
    [sym_vector] = STATE(41),
    [sym__vector] = STATE(29),
    [sym_hash_map] = STATE(41),
    [sym__hash_map] = STATE(30),
    [sym_namespace_map] = STATE(30),
    [sym_set] = STATE(41),
    [sym__set] = STATE(31),
    [sym_comment] = STATE(41),
    [sym_semicolon] = STATE(32),
    [sym_shebang_line] = STATE(32),
    [sym_ignore_form] = STATE(32),
    [sym_comment_macro] = STATE(32),
    [sym_nil] = ACTIONS(69),
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
  [7] = {
    [sym__anything] = STATE(44),
    [sym__literal] = STATE(44),
    [sym__collection_literal] = STATE(44),
    [sym_boolean] = STATE(44),
    [sym_number] = STATE(44),
    [sym__number] = STATE(22),
    [sym_character] = STATE(44),
    [sym__character] = STATE(23),
    [sym_string] = STATE(44),
    [sym__string] = STATE(24),
    [sym_regex] = STATE(44),
    [sym__regex] = STATE(25),
    [sym_quote] = STATE(44),
    [sym_keyword] = STATE(44),
    [sym__keyword] = STATE(26),
    [sym__unqualified_keyword] = STATE(26),
    [sym_qualified_keyword] = STATE(26),
    [sym_symbol] = STATE(44),
    [sym__symbol] = STATE(27),
    [sym_qualified_symbol] = STATE(27),
    [sym_list] = STATE(44),
    [sym__list] = STATE(28),
    [sym_vector] = STATE(44),
    [sym__vector] = STATE(29),
    [sym_hash_map] = STATE(44),
    [sym__hash_map] = STATE(30),
    [sym_namespace_map] = STATE(30),
    [sym_set] = STATE(44),
    [sym__set] = STATE(31),
    [sym_comment] = STATE(44),
    [sym_semicolon] = STATE(32),
    [sym_shebang_line] = STATE(32),
    [sym_ignore_form] = STATE(32),
    [sym_comment_macro] = STATE(32),
    [sym_nil] = ACTIONS(71),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(73),
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
    [anon_sym_POUND_] = ACTIONS(75),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [8] = {
    [sym__keyword_chars] = ACTIONS(77),
  },
  [9] = {
    [sym__keyword_chars] = ACTIONS(79),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [sym_nil] = ACTIONS(83),
    [sym_true] = ACTIONS(83),
    [sym_false] = ACTIONS(83),
    [sym_number_long] = ACTIONS(83),
    [sym_number_double] = ACTIONS(81),
    [anon_sym_BSLASH] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_POUND_DQUOTE] = ACTIONS(81),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_LPARENquote] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_COLON] = ACTIONS(83),
    [anon_sym_COLON_COLON] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(85),
    [sym__symbol_chars] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(81),
    [anon_sym_POUND] = ACTIONS(83),
    [anon_sym_POUND_LBRACE] = ACTIONS(81),
    [anon_sym_SEMI] = ACTIONS(81),
    [anon_sym_POUND_BANG] = ACTIONS(81),
    [anon_sym_POUND_] = ACTIONS(81),
    [anon_sym_LPARENcomment] = ACTIONS(81),
  },
  [11] = {
    [sym__anything] = STATE(51),
    [sym__literal] = STATE(51),
    [sym__collection_literal] = STATE(51),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym__number] = STATE(22),
    [sym_character] = STATE(51),
    [sym__character] = STATE(23),
    [sym_string] = STATE(51),
    [sym__string] = STATE(24),
    [sym_regex] = STATE(51),
    [sym__regex] = STATE(25),
    [sym_quote] = STATE(51),
    [sym_keyword] = STATE(51),
    [sym__keyword] = STATE(26),
    [sym__unqualified_keyword] = STATE(26),
    [sym_qualified_keyword] = STATE(26),
    [sym_symbol] = STATE(51),
    [sym__symbol] = STATE(27),
    [sym_qualified_symbol] = STATE(27),
    [sym_list] = STATE(51),
    [sym__list] = STATE(28),
    [sym_vector] = STATE(51),
    [sym__vector] = STATE(29),
    [sym_hash_map] = STATE(51),
    [sym__hash_map] = STATE(30),
    [sym_namespace_map] = STATE(30),
    [sym_set] = STATE(51),
    [sym__set] = STATE(31),
    [sym_comment] = STATE(51),
    [sym_semicolon] = STATE(32),
    [sym_shebang_line] = STATE(32),
    [sym_ignore_form] = STATE(32),
    [sym_comment_macro] = STATE(32),
    [aux_sym_program_repeat1] = STATE(51),
    [sym_nil] = ACTIONS(87),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(91),
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
    [anon_sym_POUND_] = ACTIONS(93),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [12] = {
    [sym__anything] = STATE(55),
    [sym__literal] = STATE(55),
    [sym__collection_literal] = STATE(55),
    [sym_boolean] = STATE(55),
    [sym_number] = STATE(55),
    [sym__number] = STATE(22),
    [sym_character] = STATE(55),
    [sym__character] = STATE(23),
    [sym_string] = STATE(55),
    [sym__string] = STATE(24),
    [sym_regex] = STATE(55),
    [sym__regex] = STATE(25),
    [sym_quote] = STATE(55),
    [sym_keyword] = STATE(55),
    [sym__keyword] = STATE(26),
    [sym__unqualified_keyword] = STATE(26),
    [sym_qualified_keyword] = STATE(26),
    [sym_symbol] = STATE(55),
    [sym__symbol] = STATE(27),
    [sym_qualified_symbol] = STATE(27),
    [sym_list] = STATE(55),
    [sym__list] = STATE(28),
    [sym_vector] = STATE(55),
    [sym__vector] = STATE(29),
    [sym_hash_map] = STATE(55),
    [sym__hash_map] = STATE(30),
    [sym_namespace_map] = STATE(30),
    [sym_set] = STATE(55),
    [sym__set] = STATE(31),
    [sym_comment] = STATE(55),
    [sym_semicolon] = STATE(32),
    [sym_shebang_line] = STATE(32),
    [sym_ignore_form] = STATE(32),
    [sym_comment_macro] = STATE(32),
    [aux_sym_program_repeat1] = STATE(55),
    [sym_nil] = ACTIONS(95),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [sym__symbol_chars] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_RBRACK] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(45),
    [anon_sym_POUND_] = ACTIONS(101),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [13] = {
    [sym__anything] = STATE(59),
    [sym__literal] = STATE(59),
    [sym__collection_literal] = STATE(59),
    [sym_boolean] = STATE(59),
    [sym_number] = STATE(59),
    [sym__number] = STATE(22),
    [sym_character] = STATE(59),
    [sym__character] = STATE(23),
    [sym_string] = STATE(59),
    [sym__string] = STATE(24),
    [sym_regex] = STATE(59),
    [sym__regex] = STATE(25),
    [sym_quote] = STATE(59),
    [sym_keyword] = STATE(59),
    [sym__keyword] = STATE(26),
    [sym__unqualified_keyword] = STATE(26),
    [sym_qualified_keyword] = STATE(26),
    [sym_symbol] = STATE(59),
    [sym__symbol] = STATE(27),
    [sym_qualified_symbol] = STATE(27),
    [sym_list] = STATE(59),
    [sym__list] = STATE(28),
    [sym_vector] = STATE(59),
    [sym__vector] = STATE(29),
    [sym_hash_map] = STATE(59),
    [sym__hash_map] = STATE(30),
    [sym_namespace_map] = STATE(30),
    [sym__hash_map_kv_pair] = STATE(60),
    [sym__hash_map_key] = STATE(59),
    [sym_set] = STATE(59),
    [sym__set] = STATE(31),
    [sym_comment] = STATE(59),
    [sym_semicolon] = STATE(32),
    [sym_shebang_line] = STATE(32),
    [sym_ignore_form] = STATE(32),
    [sym_comment_macro] = STATE(32),
    [aux_sym__hash_map_repeat1] = STATE(60),
    [sym_nil] = ACTIONS(103),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [sym__symbol_chars] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(45),
    [anon_sym_POUND_] = ACTIONS(109),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [14] = {
    [sym__anything] = STATE(59),
    [sym__literal] = STATE(59),
    [sym__collection_literal] = STATE(59),
    [sym_boolean] = STATE(59),
    [sym_number] = STATE(59),
    [sym__number] = STATE(22),
    [sym_character] = STATE(59),
    [sym__character] = STATE(23),
    [sym_string] = STATE(59),
    [sym__string] = STATE(24),
    [sym_regex] = STATE(59),
    [sym__regex] = STATE(25),
    [sym_quote] = STATE(59),
    [sym_keyword] = STATE(59),
    [sym__keyword] = STATE(26),
    [sym__unqualified_keyword] = STATE(26),
    [sym_qualified_keyword] = STATE(26),
    [sym_symbol] = STATE(59),
    [sym__symbol] = STATE(27),
    [sym_qualified_symbol] = STATE(27),
    [sym_list] = STATE(59),
    [sym__list] = STATE(28),
    [sym_vector] = STATE(59),
    [sym__vector] = STATE(29),
    [sym_hash_map] = STATE(59),
    [sym__hash_map] = STATE(30),
    [sym_namespace_map] = STATE(30),
    [sym__hash_map_kv_pair] = STATE(62),
    [sym__hash_map_key] = STATE(59),
    [sym_set] = STATE(59),
    [sym__set] = STATE(31),
    [sym_comment] = STATE(59),
    [sym_semicolon] = STATE(32),
    [sym_shebang_line] = STATE(32),
    [sym_ignore_form] = STATE(32),
    [sym_comment_macro] = STATE(32),
    [aux_sym__hash_map_repeat1] = STATE(62),
    [sym_nil] = ACTIONS(103),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(105),
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
    [anon_sym_POUND_] = ACTIONS(109),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [15] = {
    [sym__symbol_chars] = ACTIONS(113),
  },
  [16] = {
    [sym__anything] = STATE(67),
    [sym__literal] = STATE(67),
    [sym__collection_literal] = STATE(67),
    [sym_boolean] = STATE(67),
    [sym_number] = STATE(67),
    [sym__number] = STATE(22),
    [sym_character] = STATE(67),
    [sym__character] = STATE(23),
    [sym_string] = STATE(67),
    [sym__string] = STATE(24),
    [sym_regex] = STATE(67),
    [sym__regex] = STATE(25),
    [sym_quote] = STATE(67),
    [sym_keyword] = STATE(67),
    [sym__keyword] = STATE(26),
    [sym__unqualified_keyword] = STATE(26),
    [sym_qualified_keyword] = STATE(26),
    [sym_symbol] = STATE(67),
    [sym__symbol] = STATE(27),
    [sym_qualified_symbol] = STATE(27),
    [sym_list] = STATE(67),
    [sym__list] = STATE(28),
    [sym_vector] = STATE(67),
    [sym__vector] = STATE(29),
    [sym_hash_map] = STATE(67),
    [sym__hash_map] = STATE(30),
    [sym_namespace_map] = STATE(30),
    [sym_set] = STATE(67),
    [sym__set] = STATE(31),
    [sym_comment] = STATE(67),
    [sym_semicolon] = STATE(32),
    [sym_shebang_line] = STATE(32),
    [sym_ignore_form] = STATE(32),
    [sym_comment_macro] = STATE(32),
    [aux_sym_program_repeat1] = STATE(67),
    [sym_nil] = ACTIONS(115),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(117),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [sym__symbol_chars] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(45),
    [anon_sym_POUND_] = ACTIONS(121),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [17] = {
    [aux_sym_SLASH_DOT_STAR_SLASH] = ACTIONS(123),
  },
  [18] = {
    [aux_sym_SLASH_DOT_STAR_SLASH] = ACTIONS(125),
  },
  [19] = {
    [sym__number] = STATE(78),
    [sym__string] = STATE(78),
    [sym__keyword] = STATE(78),
    [sym__unqualified_keyword] = STATE(78),
    [sym_qualified_keyword] = STATE(78),
    [sym__symbol] = STATE(78),
    [sym_qualified_symbol] = STATE(78),
    [sym__one_form] = STATE(78),
    [sym__paren_sequence] = STATE(78),
    [sym__bracket_sequence] = STATE(78),
    [sym__curly_brace_sequence] = STATE(78),
    [aux_sym_ignore_form_repeat1] = STATE(79),
    [sym_number_long] = ACTIONS(127),
    [sym_number_double] = ACTIONS(127),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [anon_sym_COLON] = ACTIONS(131),
    [anon_sym_COLON_COLON] = ACTIONS(133),
    [sym__symbol_chars] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_POUND] = ACTIONS(143),
    [anon_sym_] = ACTIONS(145),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(127),
  },
  [20] = {
    [sym__number] = STATE(89),
    [sym__string] = STATE(89),
    [sym__keyword] = STATE(89),
    [sym__unqualified_keyword] = STATE(89),
    [sym_qualified_keyword] = STATE(89),
    [sym__symbol] = STATE(89),
    [sym_qualified_symbol] = STATE(89),
    [sym__one_form] = STATE(89),
    [sym__paren_sequence] = STATE(89),
    [sym__bracket_sequence] = STATE(89),
    [sym__curly_brace_sequence] = STATE(89),
    [aux_sym_comment_macro_repeat1] = STATE(89),
    [sym_number_long] = ACTIONS(147),
    [sym_number_double] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(151),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_COLON_COLON] = ACTIONS(155),
    [sym__symbol_chars] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_POUND] = ACTIONS(165),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(147),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(167),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [sym_nil] = ACTIONS(171),
    [sym_true] = ACTIONS(171),
    [sym_false] = ACTIONS(171),
    [sym_number_long] = ACTIONS(171),
    [sym_number_double] = ACTIONS(169),
    [anon_sym_BSLASH] = ACTIONS(169),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [anon_sym_POUND_DQUOTE] = ACTIONS(169),
    [anon_sym_SQUOTE] = ACTIONS(169),
    [anon_sym_LPARENquote] = ACTIONS(169),
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_COLON] = ACTIONS(171),
    [anon_sym_COLON_COLON] = ACTIONS(169),
    [sym__symbol_chars] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(169),
    [anon_sym_LBRACE] = ACTIONS(169),
    [anon_sym_RBRACE] = ACTIONS(169),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(169),
    [anon_sym_POUND] = ACTIONS(171),
    [anon_sym_POUND_LBRACE] = ACTIONS(169),
    [anon_sym_SEMI] = ACTIONS(169),
    [anon_sym_POUND_BANG] = ACTIONS(169),
    [anon_sym_POUND_] = ACTIONS(169),
    [anon_sym_LPARENcomment] = ACTIONS(169),
  },
  [23] = {
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
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [sym_nil] = ACTIONS(179),
    [sym_true] = ACTIONS(179),
    [sym_false] = ACTIONS(179),
    [sym_number_long] = ACTIONS(179),
    [sym_number_double] = ACTIONS(177),
    [anon_sym_BSLASH] = ACTIONS(177),
    [anon_sym_DQUOTE] = ACTIONS(177),
    [anon_sym_POUND_DQUOTE] = ACTIONS(177),
    [anon_sym_SQUOTE] = ACTIONS(177),
    [anon_sym_LPARENquote] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_COLON_COLON] = ACTIONS(177),
    [sym__symbol_chars] = ACTIONS(179),
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
  [25] = {
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
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(185),
    [sym_nil] = ACTIONS(187),
    [sym_true] = ACTIONS(187),
    [sym_false] = ACTIONS(187),
    [sym_number_long] = ACTIONS(187),
    [sym_number_double] = ACTIONS(185),
    [anon_sym_BSLASH] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(185),
    [anon_sym_POUND_DQUOTE] = ACTIONS(185),
    [anon_sym_SQUOTE] = ACTIONS(185),
    [anon_sym_LPARENquote] = ACTIONS(185),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_COLON] = ACTIONS(187),
    [anon_sym_COLON_COLON] = ACTIONS(185),
    [sym__symbol_chars] = ACTIONS(187),
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
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [sym_nil] = ACTIONS(191),
    [sym_true] = ACTIONS(191),
    [sym_false] = ACTIONS(191),
    [sym_number_long] = ACTIONS(191),
    [sym_number_double] = ACTIONS(189),
    [anon_sym_BSLASH] = ACTIONS(189),
    [anon_sym_DQUOTE] = ACTIONS(189),
    [anon_sym_POUND_DQUOTE] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(189),
    [anon_sym_LPARENquote] = ACTIONS(189),
    [anon_sym_RPAREN] = ACTIONS(189),
    [anon_sym_COLON] = ACTIONS(191),
    [anon_sym_COLON_COLON] = ACTIONS(189),
    [sym__symbol_chars] = ACTIONS(191),
    [anon_sym_LPAREN] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(189),
    [anon_sym_RBRACK] = ACTIONS(189),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(189),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(189),
    [anon_sym_POUND] = ACTIONS(191),
    [anon_sym_POUND_LBRACE] = ACTIONS(189),
    [anon_sym_SEMI] = ACTIONS(189),
    [anon_sym_POUND_BANG] = ACTIONS(189),
    [anon_sym_POUND_] = ACTIONS(189),
    [anon_sym_LPARENcomment] = ACTIONS(189),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [sym_nil] = ACTIONS(195),
    [sym_true] = ACTIONS(195),
    [sym_false] = ACTIONS(195),
    [sym_number_long] = ACTIONS(195),
    [sym_number_double] = ACTIONS(193),
    [anon_sym_BSLASH] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(193),
    [anon_sym_POUND_DQUOTE] = ACTIONS(193),
    [anon_sym_SQUOTE] = ACTIONS(193),
    [anon_sym_LPARENquote] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(193),
    [anon_sym_COLON] = ACTIONS(195),
    [anon_sym_COLON_COLON] = ACTIONS(193),
    [sym__symbol_chars] = ACTIONS(195),
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
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [sym_nil] = ACTIONS(199),
    [sym_true] = ACTIONS(199),
    [sym_false] = ACTIONS(199),
    [sym_number_long] = ACTIONS(199),
    [sym_number_double] = ACTIONS(197),
    [anon_sym_BSLASH] = ACTIONS(197),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_POUND_DQUOTE] = ACTIONS(197),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_LPARENquote] = ACTIONS(197),
    [anon_sym_RPAREN] = ACTIONS(197),
    [anon_sym_COLON] = ACTIONS(199),
    [anon_sym_COLON_COLON] = ACTIONS(197),
    [sym__symbol_chars] = ACTIONS(199),
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(197),
    [anon_sym_RBRACK] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(197),
    [anon_sym_RBRACE] = ACTIONS(197),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(197),
    [anon_sym_POUND] = ACTIONS(199),
    [anon_sym_POUND_LBRACE] = ACTIONS(197),
    [anon_sym_SEMI] = ACTIONS(197),
    [anon_sym_POUND_BANG] = ACTIONS(197),
    [anon_sym_POUND_] = ACTIONS(197),
    [anon_sym_LPARENcomment] = ACTIONS(197),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [sym_nil] = ACTIONS(203),
    [sym_true] = ACTIONS(203),
    [sym_false] = ACTIONS(203),
    [sym_number_long] = ACTIONS(203),
    [sym_number_double] = ACTIONS(201),
    [anon_sym_BSLASH] = ACTIONS(201),
    [anon_sym_DQUOTE] = ACTIONS(201),
    [anon_sym_POUND_DQUOTE] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(201),
    [anon_sym_LPARENquote] = ACTIONS(201),
    [anon_sym_RPAREN] = ACTIONS(201),
    [anon_sym_COLON] = ACTIONS(203),
    [anon_sym_COLON_COLON] = ACTIONS(201),
    [sym__symbol_chars] = ACTIONS(203),
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
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [sym_nil] = ACTIONS(207),
    [sym_true] = ACTIONS(207),
    [sym_false] = ACTIONS(207),
    [sym_number_long] = ACTIONS(207),
    [sym_number_double] = ACTIONS(205),
    [anon_sym_BSLASH] = ACTIONS(205),
    [anon_sym_DQUOTE] = ACTIONS(205),
    [anon_sym_POUND_DQUOTE] = ACTIONS(205),
    [anon_sym_SQUOTE] = ACTIONS(205),
    [anon_sym_LPARENquote] = ACTIONS(205),
    [anon_sym_RPAREN] = ACTIONS(205),
    [anon_sym_COLON] = ACTIONS(207),
    [anon_sym_COLON_COLON] = ACTIONS(205),
    [sym__symbol_chars] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(205),
    [anon_sym_RBRACK] = ACTIONS(205),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_RBRACE] = ACTIONS(205),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(205),
    [anon_sym_POUND] = ACTIONS(207),
    [anon_sym_POUND_LBRACE] = ACTIONS(205),
    [anon_sym_SEMI] = ACTIONS(205),
    [anon_sym_POUND_BANG] = ACTIONS(205),
    [anon_sym_POUND_] = ACTIONS(205),
    [anon_sym_LPARENcomment] = ACTIONS(205),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [sym_nil] = ACTIONS(211),
    [sym_true] = ACTIONS(211),
    [sym_false] = ACTIONS(211),
    [sym_number_long] = ACTIONS(211),
    [sym_number_double] = ACTIONS(209),
    [anon_sym_BSLASH] = ACTIONS(209),
    [anon_sym_DQUOTE] = ACTIONS(209),
    [anon_sym_POUND_DQUOTE] = ACTIONS(209),
    [anon_sym_SQUOTE] = ACTIONS(209),
    [anon_sym_LPARENquote] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(209),
    [anon_sym_COLON] = ACTIONS(211),
    [anon_sym_COLON_COLON] = ACTIONS(209),
    [sym__symbol_chars] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_LBRACK] = ACTIONS(209),
    [anon_sym_RBRACK] = ACTIONS(209),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_RBRACE] = ACTIONS(209),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(209),
    [anon_sym_POUND] = ACTIONS(211),
    [anon_sym_POUND_LBRACE] = ACTIONS(209),
    [anon_sym_SEMI] = ACTIONS(209),
    [anon_sym_POUND_BANG] = ACTIONS(209),
    [anon_sym_POUND_] = ACTIONS(209),
    [anon_sym_LPARENcomment] = ACTIONS(209),
  },
  [33] = {
    [sym__anything] = STATE(90),
    [sym__literal] = STATE(90),
    [sym__collection_literal] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_number] = STATE(90),
    [sym__number] = STATE(22),
    [sym_character] = STATE(90),
    [sym__character] = STATE(23),
    [sym_string] = STATE(90),
    [sym__string] = STATE(24),
    [sym_regex] = STATE(90),
    [sym__regex] = STATE(25),
    [sym_quote] = STATE(90),
    [sym_keyword] = STATE(90),
    [sym__keyword] = STATE(26),
    [sym__unqualified_keyword] = STATE(26),
    [sym_qualified_keyword] = STATE(26),
    [sym_symbol] = STATE(90),
    [sym__symbol] = STATE(27),
    [sym_qualified_symbol] = STATE(27),
    [sym_list] = STATE(90),
    [sym__list] = STATE(28),
    [sym_vector] = STATE(90),
    [sym__vector] = STATE(29),
    [sym_hash_map] = STATE(90),
    [sym__hash_map] = STATE(30),
    [sym_namespace_map] = STATE(30),
    [sym_set] = STATE(90),
    [sym__set] = STATE(31),
    [sym_comment] = STATE(90),
    [sym_semicolon] = STATE(32),
    [sym_shebang_line] = STATE(32),
    [sym_ignore_form] = STATE(32),
    [sym_comment_macro] = STATE(32),
    [aux_sym_program_repeat1] = STATE(90),
    [ts_builtin_sym_end] = ACTIONS(213),
    [sym_nil] = ACTIONS(215),
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
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [sym_nil] = ACTIONS(219),
    [sym_true] = ACTIONS(219),
    [sym_false] = ACTIONS(219),
    [sym_number_long] = ACTIONS(219),
    [sym_number_double] = ACTIONS(217),
    [anon_sym_BSLASH] = ACTIONS(217),
    [anon_sym_DQUOTE] = ACTIONS(217),
    [anon_sym_POUND_DQUOTE] = ACTIONS(217),
    [anon_sym_SQUOTE] = ACTIONS(217),
    [anon_sym_LPARENquote] = ACTIONS(217),
    [anon_sym_RPAREN] = ACTIONS(217),
    [anon_sym_COLON] = ACTIONS(219),
    [anon_sym_COLON_COLON] = ACTIONS(217),
    [sym__symbol_chars] = ACTIONS(219),
    [anon_sym_LPAREN] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(217),
    [anon_sym_RBRACK] = ACTIONS(217),
    [anon_sym_LBRACE] = ACTIONS(217),
    [anon_sym_RBRACE] = ACTIONS(217),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(217),
    [anon_sym_POUND] = ACTIONS(219),
    [anon_sym_POUND_LBRACE] = ACTIONS(217),
    [anon_sym_SEMI] = ACTIONS(217),
    [anon_sym_POUND_BANG] = ACTIONS(217),
    [anon_sym_POUND_] = ACTIONS(217),
    [anon_sym_LPARENcomment] = ACTIONS(217),
  },
  [35] = {
    [sym__hex_char] = ACTIONS(221),
  },
  [36] = {
    [sym__octal_num] = STATE(92),
    [aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(225),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(225),
  },
  [37] = {
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
  [38] = {
    [aux_sym__string_repeat1] = STATE(94),
    [anon_sym_DQUOTE] = ACTIONS(231),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(233),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(233),
  },
  [39] = {
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
  [40] = {
    [aux_sym__regex_repeat1] = STATE(96),
    [anon_sym_DQUOTE] = ACTIONS(239),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(241),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(241),
  },
  [41] = {
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
  [42] = {
    [sym__anything] = STATE(41),
    [sym__literal] = STATE(41),
    [sym__collection_literal] = STATE(41),
    [sym_boolean] = STATE(41),
    [sym_number] = STATE(41),
    [sym__number] = STATE(22),
    [sym_character] = STATE(41),
    [sym__character] = STATE(23),
    [sym_string] = STATE(41),
    [sym__string] = STATE(24),
    [sym_regex] = STATE(41),
    [sym__regex] = STATE(25),
    [sym_quote] = STATE(41),
    [sym_keyword] = STATE(41),
    [sym__keyword] = STATE(26),
    [sym__unqualified_keyword] = STATE(26),
    [sym_qualified_keyword] = STATE(26),
    [sym_symbol] = STATE(41),
    [sym__symbol] = STATE(27),
    [sym_qualified_symbol] = STATE(27),
    [sym_list] = STATE(41),
    [sym__list] = STATE(28),
    [sym_vector] = STATE(41),
    [sym__vector] = STATE(29),
    [sym_hash_map] = STATE(41),
    [sym__hash_map] = STATE(30),
    [sym_namespace_map] = STATE(30),
    [sym_set] = STATE(41),
    [sym__set] = STATE(31),
    [sym_comment] = STATE(41),
    [sym_semicolon] = STATE(32),
    [sym_shebang_line] = STATE(32),
    [sym_ignore_form] = STATE(32),
    [sym_comment_macro] = STATE(32),
    [sym_nil] = ACTIONS(69),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(73),
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
    [anon_sym_POUND_] = ACTIONS(75),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [43] = {
    [sym__number] = STATE(97),
    [sym__string] = STATE(97),
    [sym__keyword] = STATE(97),
    [sym__unqualified_keyword] = STATE(97),
    [sym_qualified_keyword] = STATE(97),
    [sym__symbol] = STATE(97),
    [sym_qualified_symbol] = STATE(97),
    [sym__one_form] = STATE(97),
    [sym__paren_sequence] = STATE(97),
    [sym__bracket_sequence] = STATE(97),
    [sym__curly_brace_sequence] = STATE(97),
    [aux_sym_ignore_form_repeat1] = STATE(98),
    [sym_number_long] = ACTIONS(247),
    [sym_number_double] = ACTIONS(247),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [anon_sym_COLON] = ACTIONS(131),
    [anon_sym_COLON_COLON] = ACTIONS(133),
    [sym__symbol_chars] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_POUND] = ACTIONS(143),
    [anon_sym_] = ACTIONS(249),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(247),
  },
  [44] = {
    [anon_sym_RPAREN] = ACTIONS(251),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(253),
    [sym_nil] = ACTIONS(255),
    [sym_true] = ACTIONS(255),
    [sym_false] = ACTIONS(255),
    [sym_number_long] = ACTIONS(255),
    [sym_number_double] = ACTIONS(253),
    [anon_sym_BSLASH] = ACTIONS(253),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [anon_sym_POUND_DQUOTE] = ACTIONS(253),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [anon_sym_LPARENquote] = ACTIONS(253),
    [anon_sym_RPAREN] = ACTIONS(253),
    [anon_sym_COLON] = ACTIONS(255),
    [anon_sym_COLON_COLON] = ACTIONS(253),
    [sym__symbol_chars] = ACTIONS(255),
    [anon_sym_LPAREN] = ACTIONS(255),
    [anon_sym_LBRACK] = ACTIONS(253),
    [anon_sym_RBRACK] = ACTIONS(253),
    [anon_sym_LBRACE] = ACTIONS(253),
    [anon_sym_RBRACE] = ACTIONS(253),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(253),
    [anon_sym_POUND] = ACTIONS(255),
    [anon_sym_POUND_LBRACE] = ACTIONS(253),
    [anon_sym_SEMI] = ACTIONS(253),
    [anon_sym_POUND_BANG] = ACTIONS(253),
    [anon_sym_POUND_] = ACTIONS(253),
    [anon_sym_LPARENcomment] = ACTIONS(253),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(257),
    [sym_nil] = ACTIONS(259),
    [sym_true] = ACTIONS(259),
    [sym_false] = ACTIONS(259),
    [sym_number_long] = ACTIONS(259),
    [sym_number_double] = ACTIONS(257),
    [anon_sym_BSLASH] = ACTIONS(257),
    [anon_sym_DQUOTE] = ACTIONS(257),
    [anon_sym_POUND_DQUOTE] = ACTIONS(257),
    [anon_sym_SQUOTE] = ACTIONS(257),
    [anon_sym_LPARENquote] = ACTIONS(257),
    [anon_sym_RPAREN] = ACTIONS(257),
    [anon_sym_COLON] = ACTIONS(259),
    [anon_sym_COLON_COLON] = ACTIONS(257),
    [anon_sym_SLASH] = ACTIONS(261),
    [sym__symbol_chars] = ACTIONS(259),
    [anon_sym_LPAREN] = ACTIONS(259),
    [anon_sym_LBRACK] = ACTIONS(257),
    [anon_sym_RBRACK] = ACTIONS(257),
    [anon_sym_LBRACE] = ACTIONS(257),
    [anon_sym_RBRACE] = ACTIONS(257),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(257),
    [anon_sym_POUND] = ACTIONS(259),
    [anon_sym_POUND_LBRACE] = ACTIONS(257),
    [anon_sym_SEMI] = ACTIONS(257),
    [anon_sym_POUND_BANG] = ACTIONS(257),
    [anon_sym_POUND_] = ACTIONS(257),
    [anon_sym_LPARENcomment] = ACTIONS(257),
  },
  [47] = {
    [sym__symbol_chars] = ACTIONS(263),
  },
  [48] = {
    [sym__anything] = STATE(41),
    [sym__literal] = STATE(41),
    [sym__collection_literal] = STATE(41),
    [sym_boolean] = STATE(41),
    [sym_number] = STATE(41),
    [sym__number] = STATE(22),
    [sym_character] = STATE(41),
    [sym__character] = STATE(23),
    [sym_string] = STATE(41),
    [sym__string] = STATE(24),
    [sym_regex] = STATE(41),
    [sym__regex] = STATE(25),
    [sym_quote] = STATE(41),
    [sym_keyword] = STATE(41),
    [sym__keyword] = STATE(26),
    [sym__unqualified_keyword] = STATE(26),
    [sym_qualified_keyword] = STATE(26),
    [sym_symbol] = STATE(41),
    [sym__symbol] = STATE(27),
    [sym_qualified_symbol] = STATE(27),
    [sym_list] = STATE(41),
    [sym__list] = STATE(28),
    [sym_vector] = STATE(41),
    [sym__vector] = STATE(29),
    [sym_hash_map] = STATE(41),
    [sym__hash_map] = STATE(30),
    [sym_namespace_map] = STATE(30),
    [sym_set] = STATE(41),
    [sym__set] = STATE(31),
    [sym_comment] = STATE(41),
    [sym_semicolon] = STATE(32),
    [sym_shebang_line] = STATE(32),
    [sym_ignore_form] = STATE(32),
    [sym_comment_macro] = STATE(32),
    [sym_nil] = ACTIONS(69),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(89),
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
    [anon_sym_POUND_] = ACTIONS(93),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(265),
    [sym_nil] = ACTIONS(267),
    [sym_true] = ACTIONS(267),
    [sym_false] = ACTIONS(267),
    [sym_number_long] = ACTIONS(267),
    [sym_number_double] = ACTIONS(265),
    [anon_sym_BSLASH] = ACTIONS(265),
    [anon_sym_DQUOTE] = ACTIONS(265),
    [anon_sym_POUND_DQUOTE] = ACTIONS(265),
    [anon_sym_SQUOTE] = ACTIONS(265),
    [anon_sym_LPARENquote] = ACTIONS(265),
    [anon_sym_RPAREN] = ACTIONS(265),
    [anon_sym_COLON] = ACTIONS(267),
    [anon_sym_COLON_COLON] = ACTIONS(265),
    [sym__symbol_chars] = ACTIONS(267),
    [anon_sym_LPAREN] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_RBRACK] = ACTIONS(265),
    [anon_sym_LBRACE] = ACTIONS(265),
    [anon_sym_RBRACE] = ACTIONS(265),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(265),
    [anon_sym_POUND] = ACTIONS(267),
    [anon_sym_POUND_LBRACE] = ACTIONS(265),
    [anon_sym_SEMI] = ACTIONS(265),
    [anon_sym_POUND_BANG] = ACTIONS(265),
    [anon_sym_POUND_] = ACTIONS(265),
    [anon_sym_LPARENcomment] = ACTIONS(265),
  },
  [50] = {
    [sym__number] = STATE(102),
    [sym__string] = STATE(102),
    [sym__keyword] = STATE(102),
    [sym__unqualified_keyword] = STATE(102),
    [sym_qualified_keyword] = STATE(102),
    [sym__symbol] = STATE(102),
    [sym_qualified_symbol] = STATE(102),
    [sym__one_form] = STATE(102),
    [sym__paren_sequence] = STATE(102),
    [sym__bracket_sequence] = STATE(102),
    [sym__curly_brace_sequence] = STATE(102),
    [aux_sym_ignore_form_repeat1] = STATE(103),
    [sym_number_long] = ACTIONS(269),
    [sym_number_double] = ACTIONS(269),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [anon_sym_COLON] = ACTIONS(131),
    [anon_sym_COLON_COLON] = ACTIONS(133),
    [sym__symbol_chars] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_POUND] = ACTIONS(143),
    [anon_sym_] = ACTIONS(271),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(269),
  },
  [51] = {
    [sym__anything] = STATE(105),
    [sym__literal] = STATE(105),
    [sym__collection_literal] = STATE(105),
    [sym_boolean] = STATE(105),
    [sym_number] = STATE(105),
    [sym__number] = STATE(22),
    [sym_character] = STATE(105),
    [sym__character] = STATE(23),
    [sym_string] = STATE(105),
    [sym__string] = STATE(24),
    [sym_regex] = STATE(105),
    [sym__regex] = STATE(25),
    [sym_quote] = STATE(105),
    [sym_keyword] = STATE(105),
    [sym__keyword] = STATE(26),
    [sym__unqualified_keyword] = STATE(26),
    [sym_qualified_keyword] = STATE(26),
    [sym_symbol] = STATE(105),
    [sym__symbol] = STATE(27),
    [sym_qualified_symbol] = STATE(27),
    [sym_list] = STATE(105),
    [sym__list] = STATE(28),
    [sym_vector] = STATE(105),
    [sym__vector] = STATE(29),
    [sym_hash_map] = STATE(105),
    [sym__hash_map] = STATE(30),
    [sym_namespace_map] = STATE(30),
    [sym_set] = STATE(105),
    [sym__set] = STATE(31),
    [sym_comment] = STATE(105),
    [sym_semicolon] = STATE(32),
    [sym_shebang_line] = STATE(32),
    [sym_ignore_form] = STATE(32),
    [sym_comment_macro] = STATE(32),
    [aux_sym_program_repeat1] = STATE(105),
    [sym_nil] = ACTIONS(273),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(275),
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
    [anon_sym_POUND_] = ACTIONS(93),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [52] = {
    [sym__anything] = STATE(41),
    [sym__literal] = STATE(41),
    [sym__collection_literal] = STATE(41),
    [sym_boolean] = STATE(41),
    [sym_number] = STATE(41),
    [sym__number] = STATE(22),
    [sym_character] = STATE(41),
    [sym__character] = STATE(23),
    [sym_string] = STATE(41),
    [sym__string] = STATE(24),
    [sym_regex] = STATE(41),
    [sym__regex] = STATE(25),
    [sym_quote] = STATE(41),
    [sym_keyword] = STATE(41),
    [sym__keyword] = STATE(26),
    [sym__unqualified_keyword] = STATE(26),
    [sym_qualified_keyword] = STATE(26),
    [sym_symbol] = STATE(41),
    [sym__symbol] = STATE(27),
    [sym_qualified_symbol] = STATE(27),
    [sym_list] = STATE(41),
    [sym__list] = STATE(28),
    [sym_vector] = STATE(41),
    [sym__vector] = STATE(29),
    [sym_hash_map] = STATE(41),
    [sym__hash_map] = STATE(30),
    [sym_namespace_map] = STATE(30),
    [sym_set] = STATE(41),
    [sym__set] = STATE(31),
    [sym_comment] = STATE(41),
    [sym_semicolon] = STATE(32),
    [sym_shebang_line] = STATE(32),
    [sym_ignore_form] = STATE(32),
    [sym_comment_macro] = STATE(32),
    [sym_nil] = ACTIONS(69),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(97),
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
    [anon_sym_POUND_] = ACTIONS(101),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(277),
    [sym_nil] = ACTIONS(279),
    [sym_true] = ACTIONS(279),
    [sym_false] = ACTIONS(279),
    [sym_number_long] = ACTIONS(279),
    [sym_number_double] = ACTIONS(277),
    [anon_sym_BSLASH] = ACTIONS(277),
    [anon_sym_DQUOTE] = ACTIONS(277),
    [anon_sym_POUND_DQUOTE] = ACTIONS(277),
    [anon_sym_SQUOTE] = ACTIONS(277),
    [anon_sym_LPARENquote] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(277),
    [anon_sym_COLON] = ACTIONS(279),
    [anon_sym_COLON_COLON] = ACTIONS(277),
    [sym__symbol_chars] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(279),
    [anon_sym_LBRACK] = ACTIONS(277),
    [anon_sym_RBRACK] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(277),
    [anon_sym_RBRACE] = ACTIONS(277),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(277),
    [anon_sym_POUND] = ACTIONS(279),
    [anon_sym_POUND_LBRACE] = ACTIONS(277),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_POUND_BANG] = ACTIONS(277),
    [anon_sym_POUND_] = ACTIONS(277),
    [anon_sym_LPARENcomment] = ACTIONS(277),
  },
  [54] = {
    [sym__number] = STATE(106),
    [sym__string] = STATE(106),
    [sym__keyword] = STATE(106),
    [sym__unqualified_keyword] = STATE(106),
    [sym_qualified_keyword] = STATE(106),
    [sym__symbol] = STATE(106),
    [sym_qualified_symbol] = STATE(106),
    [sym__one_form] = STATE(106),
    [sym__paren_sequence] = STATE(106),
    [sym__bracket_sequence] = STATE(106),
    [sym__curly_brace_sequence] = STATE(106),
    [aux_sym_ignore_form_repeat1] = STATE(107),
    [sym_number_long] = ACTIONS(281),
    [sym_number_double] = ACTIONS(281),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [anon_sym_COLON] = ACTIONS(131),
    [anon_sym_COLON_COLON] = ACTIONS(133),
    [sym__symbol_chars] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_POUND] = ACTIONS(143),
    [anon_sym_] = ACTIONS(283),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(281),
  },
  [55] = {
    [sym__anything] = STATE(109),
    [sym__literal] = STATE(109),
    [sym__collection_literal] = STATE(109),
    [sym_boolean] = STATE(109),
    [sym_number] = STATE(109),
    [sym__number] = STATE(22),
    [sym_character] = STATE(109),
    [sym__character] = STATE(23),
    [sym_string] = STATE(109),
    [sym__string] = STATE(24),
    [sym_regex] = STATE(109),
    [sym__regex] = STATE(25),
    [sym_quote] = STATE(109),
    [sym_keyword] = STATE(109),
    [sym__keyword] = STATE(26),
    [sym__unqualified_keyword] = STATE(26),
    [sym_qualified_keyword] = STATE(26),
    [sym_symbol] = STATE(109),
    [sym__symbol] = STATE(27),
    [sym_qualified_symbol] = STATE(27),
    [sym_list] = STATE(109),
    [sym__list] = STATE(28),
    [sym_vector] = STATE(109),
    [sym__vector] = STATE(29),
    [sym_hash_map] = STATE(109),
    [sym__hash_map] = STATE(30),
    [sym_namespace_map] = STATE(30),
    [sym_set] = STATE(109),
    [sym__set] = STATE(31),
    [sym_comment] = STATE(109),
    [sym_semicolon] = STATE(32),
    [sym_shebang_line] = STATE(32),
    [sym_ignore_form] = STATE(32),
    [sym_comment_macro] = STATE(32),
    [aux_sym_program_repeat1] = STATE(109),
    [sym_nil] = ACTIONS(285),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [sym__symbol_chars] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_RBRACK] = ACTIONS(287),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(45),
    [anon_sym_POUND_] = ACTIONS(101),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [56] = {
    [sym__anything] = STATE(41),
    [sym__literal] = STATE(41),
    [sym__collection_literal] = STATE(41),
    [sym_boolean] = STATE(41),
    [sym_number] = STATE(41),
    [sym__number] = STATE(22),
    [sym_character] = STATE(41),
    [sym__character] = STATE(23),
    [sym_string] = STATE(41),
    [sym__string] = STATE(24),
    [sym_regex] = STATE(41),
    [sym__regex] = STATE(25),
    [sym_quote] = STATE(41),
    [sym_keyword] = STATE(41),
    [sym__keyword] = STATE(26),
    [sym__unqualified_keyword] = STATE(26),
    [sym_qualified_keyword] = STATE(26),
    [sym_symbol] = STATE(41),
    [sym__symbol] = STATE(27),
    [sym_qualified_symbol] = STATE(27),
    [sym_list] = STATE(41),
    [sym__list] = STATE(28),
    [sym_vector] = STATE(41),
    [sym__vector] = STATE(29),
    [sym_hash_map] = STATE(41),
    [sym__hash_map] = STATE(30),
    [sym_namespace_map] = STATE(30),
    [sym_set] = STATE(41),
    [sym__set] = STATE(31),
    [sym_comment] = STATE(41),
    [sym_semicolon] = STATE(32),
    [sym_shebang_line] = STATE(32),
    [sym_ignore_form] = STATE(32),
    [sym_comment_macro] = STATE(32),
    [sym_nil] = ACTIONS(69),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(105),
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
    [anon_sym_POUND_] = ACTIONS(109),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(289),
    [sym_nil] = ACTIONS(291),
    [sym_true] = ACTIONS(291),
    [sym_false] = ACTIONS(291),
    [sym_number_long] = ACTIONS(291),
    [sym_number_double] = ACTIONS(289),
    [anon_sym_BSLASH] = ACTIONS(289),
    [anon_sym_DQUOTE] = ACTIONS(289),
    [anon_sym_POUND_DQUOTE] = ACTIONS(289),
    [anon_sym_SQUOTE] = ACTIONS(289),
    [anon_sym_LPARENquote] = ACTIONS(289),
    [anon_sym_RPAREN] = ACTIONS(289),
    [anon_sym_COLON] = ACTIONS(291),
    [anon_sym_COLON_COLON] = ACTIONS(289),
    [sym__symbol_chars] = ACTIONS(291),
    [anon_sym_LPAREN] = ACTIONS(291),
    [anon_sym_LBRACK] = ACTIONS(289),
    [anon_sym_RBRACK] = ACTIONS(289),
    [anon_sym_LBRACE] = ACTIONS(289),
    [anon_sym_RBRACE] = ACTIONS(289),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(289),
    [anon_sym_POUND] = ACTIONS(291),
    [anon_sym_POUND_LBRACE] = ACTIONS(289),
    [anon_sym_SEMI] = ACTIONS(289),
    [anon_sym_POUND_BANG] = ACTIONS(289),
    [anon_sym_POUND_] = ACTIONS(289),
    [anon_sym_LPARENcomment] = ACTIONS(289),
  },
  [58] = {
    [sym__number] = STATE(110),
    [sym__string] = STATE(110),
    [sym__keyword] = STATE(110),
    [sym__unqualified_keyword] = STATE(110),
    [sym_qualified_keyword] = STATE(110),
    [sym__symbol] = STATE(110),
    [sym_qualified_symbol] = STATE(110),
    [sym__one_form] = STATE(110),
    [sym__paren_sequence] = STATE(110),
    [sym__bracket_sequence] = STATE(110),
    [sym__curly_brace_sequence] = STATE(110),
    [aux_sym_ignore_form_repeat1] = STATE(111),
    [sym_number_long] = ACTIONS(293),
    [sym_number_double] = ACTIONS(293),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [anon_sym_COLON] = ACTIONS(131),
    [anon_sym_COLON_COLON] = ACTIONS(133),
    [sym__symbol_chars] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_POUND] = ACTIONS(143),
    [anon_sym_] = ACTIONS(295),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(293),
  },
  [59] = {
    [sym__anything] = STATE(112),
    [sym__literal] = STATE(112),
    [sym__collection_literal] = STATE(112),
    [sym_boolean] = STATE(112),
    [sym_number] = STATE(112),
    [sym__number] = STATE(22),
    [sym_character] = STATE(112),
    [sym__character] = STATE(23),
    [sym_string] = STATE(112),
    [sym__string] = STATE(24),
    [sym_regex] = STATE(112),
    [sym__regex] = STATE(25),
    [sym_quote] = STATE(112),
    [sym_keyword] = STATE(112),
    [sym__keyword] = STATE(26),
    [sym__unqualified_keyword] = STATE(26),
    [sym_qualified_keyword] = STATE(26),
    [sym_symbol] = STATE(112),
    [sym__symbol] = STATE(27),
    [sym_qualified_symbol] = STATE(27),
    [sym_list] = STATE(112),
    [sym__list] = STATE(28),
    [sym_vector] = STATE(112),
    [sym__vector] = STATE(29),
    [sym_hash_map] = STATE(112),
    [sym__hash_map] = STATE(30),
    [sym_namespace_map] = STATE(30),
    [sym__hash_map_value] = STATE(112),
    [sym_set] = STATE(112),
    [sym__set] = STATE(31),
    [sym_comment] = STATE(112),
    [sym_semicolon] = STATE(32),
    [sym_shebang_line] = STATE(32),
    [sym_ignore_form] = STATE(32),
    [sym_comment_macro] = STATE(32),
    [sym_nil] = ACTIONS(297),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(117),
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
    [anon_sym_POUND_] = ACTIONS(121),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [60] = {
    [sym__anything] = STATE(59),
    [sym__literal] = STATE(59),
    [sym__collection_literal] = STATE(59),
    [sym_boolean] = STATE(59),
    [sym_number] = STATE(59),
    [sym__number] = STATE(22),
    [sym_character] = STATE(59),
    [sym__character] = STATE(23),
    [sym_string] = STATE(59),
    [sym__string] = STATE(24),
    [sym_regex] = STATE(59),
    [sym__regex] = STATE(25),
    [sym_quote] = STATE(59),
    [sym_keyword] = STATE(59),
    [sym__keyword] = STATE(26),
    [sym__unqualified_keyword] = STATE(26),
    [sym_qualified_keyword] = STATE(26),
    [sym_symbol] = STATE(59),
    [sym__symbol] = STATE(27),
    [sym_qualified_symbol] = STATE(27),
    [sym_list] = STATE(59),
    [sym__list] = STATE(28),
    [sym_vector] = STATE(59),
    [sym__vector] = STATE(29),
    [sym_hash_map] = STATE(59),
    [sym__hash_map] = STATE(30),
    [sym_namespace_map] = STATE(30),
    [sym__hash_map_kv_pair] = STATE(114),
    [sym__hash_map_key] = STATE(59),
    [sym_set] = STATE(59),
    [sym__set] = STATE(31),
    [sym_comment] = STATE(59),
    [sym_semicolon] = STATE(32),
    [sym_shebang_line] = STATE(32),
    [sym_ignore_form] = STATE(32),
    [sym_comment_macro] = STATE(32),
    [aux_sym__hash_map_repeat1] = STATE(114),
    [sym_nil] = ACTIONS(103),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [sym__symbol_chars] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(299),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(45),
    [anon_sym_POUND_] = ACTIONS(109),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(301),
    [sym_nil] = ACTIONS(303),
    [sym_true] = ACTIONS(303),
    [sym_false] = ACTIONS(303),
    [sym_number_long] = ACTIONS(303),
    [sym_number_double] = ACTIONS(301),
    [anon_sym_BSLASH] = ACTIONS(301),
    [anon_sym_DQUOTE] = ACTIONS(301),
    [anon_sym_POUND_DQUOTE] = ACTIONS(301),
    [anon_sym_SQUOTE] = ACTIONS(301),
    [anon_sym_LPARENquote] = ACTIONS(301),
    [anon_sym_RPAREN] = ACTIONS(301),
    [anon_sym_COLON] = ACTIONS(303),
    [anon_sym_COLON_COLON] = ACTIONS(301),
    [sym__symbol_chars] = ACTIONS(303),
    [anon_sym_LPAREN] = ACTIONS(303),
    [anon_sym_LBRACK] = ACTIONS(301),
    [anon_sym_RBRACK] = ACTIONS(301),
    [anon_sym_LBRACE] = ACTIONS(301),
    [anon_sym_RBRACE] = ACTIONS(301),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(301),
    [anon_sym_POUND] = ACTIONS(303),
    [anon_sym_POUND_LBRACE] = ACTIONS(301),
    [anon_sym_SEMI] = ACTIONS(301),
    [anon_sym_POUND_BANG] = ACTIONS(301),
    [anon_sym_POUND_] = ACTIONS(301),
    [anon_sym_LPARENcomment] = ACTIONS(301),
  },
  [62] = {
    [sym__anything] = STATE(59),
    [sym__literal] = STATE(59),
    [sym__collection_literal] = STATE(59),
    [sym_boolean] = STATE(59),
    [sym_number] = STATE(59),
    [sym__number] = STATE(22),
    [sym_character] = STATE(59),
    [sym__character] = STATE(23),
    [sym_string] = STATE(59),
    [sym__string] = STATE(24),
    [sym_regex] = STATE(59),
    [sym__regex] = STATE(25),
    [sym_quote] = STATE(59),
    [sym_keyword] = STATE(59),
    [sym__keyword] = STATE(26),
    [sym__unqualified_keyword] = STATE(26),
    [sym_qualified_keyword] = STATE(26),
    [sym_symbol] = STATE(59),
    [sym__symbol] = STATE(27),
    [sym_qualified_symbol] = STATE(27),
    [sym_list] = STATE(59),
    [sym__list] = STATE(28),
    [sym_vector] = STATE(59),
    [sym__vector] = STATE(29),
    [sym_hash_map] = STATE(59),
    [sym__hash_map] = STATE(30),
    [sym_namespace_map] = STATE(30),
    [sym__hash_map_kv_pair] = STATE(114),
    [sym__hash_map_key] = STATE(59),
    [sym_set] = STATE(59),
    [sym__set] = STATE(31),
    [sym_comment] = STATE(59),
    [sym_semicolon] = STATE(32),
    [sym_shebang_line] = STATE(32),
    [sym_ignore_form] = STATE(32),
    [sym_comment_macro] = STATE(32),
    [aux_sym__hash_map_repeat1] = STATE(114),
    [sym_nil] = ACTIONS(103),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [sym__symbol_chars] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(305),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(45),
    [anon_sym_POUND_] = ACTIONS(109),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [63] = {
    [anon_sym_LBRACE] = ACTIONS(307),
  },
  [64] = {
    [sym__anything] = STATE(41),
    [sym__literal] = STATE(41),
    [sym__collection_literal] = STATE(41),
    [sym_boolean] = STATE(41),
    [sym_number] = STATE(41),
    [sym__number] = STATE(22),
    [sym_character] = STATE(41),
    [sym__character] = STATE(23),
    [sym_string] = STATE(41),
    [sym__string] = STATE(24),
    [sym_regex] = STATE(41),
    [sym__regex] = STATE(25),
    [sym_quote] = STATE(41),
    [sym_keyword] = STATE(41),
    [sym__keyword] = STATE(26),
    [sym__unqualified_keyword] = STATE(26),
    [sym_qualified_keyword] = STATE(26),
    [sym_symbol] = STATE(41),
    [sym__symbol] = STATE(27),
    [sym_qualified_symbol] = STATE(27),
    [sym_list] = STATE(41),
    [sym__list] = STATE(28),
    [sym_vector] = STATE(41),
    [sym__vector] = STATE(29),
    [sym_hash_map] = STATE(41),
    [sym__hash_map] = STATE(30),
    [sym_namespace_map] = STATE(30),
    [sym_set] = STATE(41),
    [sym__set] = STATE(31),
    [sym_comment] = STATE(41),
    [sym_semicolon] = STATE(32),
    [sym_shebang_line] = STATE(32),
    [sym_ignore_form] = STATE(32),
    [sym_comment_macro] = STATE(32),
    [sym_nil] = ACTIONS(69),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(117),
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
    [anon_sym_POUND_] = ACTIONS(121),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(309),
    [sym_nil] = ACTIONS(311),
    [sym_true] = ACTIONS(311),
    [sym_false] = ACTIONS(311),
    [sym_number_long] = ACTIONS(311),
    [sym_number_double] = ACTIONS(309),
    [anon_sym_BSLASH] = ACTIONS(309),
    [anon_sym_DQUOTE] = ACTIONS(309),
    [anon_sym_POUND_DQUOTE] = ACTIONS(309),
    [anon_sym_SQUOTE] = ACTIONS(309),
    [anon_sym_LPARENquote] = ACTIONS(309),
    [anon_sym_RPAREN] = ACTIONS(309),
    [anon_sym_COLON] = ACTIONS(311),
    [anon_sym_COLON_COLON] = ACTIONS(309),
    [sym__symbol_chars] = ACTIONS(311),
    [anon_sym_LPAREN] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(309),
    [anon_sym_RBRACK] = ACTIONS(309),
    [anon_sym_LBRACE] = ACTIONS(309),
    [anon_sym_RBRACE] = ACTIONS(309),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(309),
    [anon_sym_POUND] = ACTIONS(311),
    [anon_sym_POUND_LBRACE] = ACTIONS(309),
    [anon_sym_SEMI] = ACTIONS(309),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_] = ACTIONS(309),
    [anon_sym_LPARENcomment] = ACTIONS(309),
  },
  [66] = {
    [sym__number] = STATE(117),
    [sym__string] = STATE(117),
    [sym__keyword] = STATE(117),
    [sym__unqualified_keyword] = STATE(117),
    [sym_qualified_keyword] = STATE(117),
    [sym__symbol] = STATE(117),
    [sym_qualified_symbol] = STATE(117),
    [sym__one_form] = STATE(117),
    [sym__paren_sequence] = STATE(117),
    [sym__bracket_sequence] = STATE(117),
    [sym__curly_brace_sequence] = STATE(117),
    [aux_sym_ignore_form_repeat1] = STATE(118),
    [sym_number_long] = ACTIONS(313),
    [sym_number_double] = ACTIONS(313),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [anon_sym_COLON] = ACTIONS(131),
    [anon_sym_COLON_COLON] = ACTIONS(133),
    [sym__symbol_chars] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_POUND] = ACTIONS(143),
    [anon_sym_] = ACTIONS(315),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(313),
  },
  [67] = {
    [sym__anything] = STATE(120),
    [sym__literal] = STATE(120),
    [sym__collection_literal] = STATE(120),
    [sym_boolean] = STATE(120),
    [sym_number] = STATE(120),
    [sym__number] = STATE(22),
    [sym_character] = STATE(120),
    [sym__character] = STATE(23),
    [sym_string] = STATE(120),
    [sym__string] = STATE(24),
    [sym_regex] = STATE(120),
    [sym__regex] = STATE(25),
    [sym_quote] = STATE(120),
    [sym_keyword] = STATE(120),
    [sym__keyword] = STATE(26),
    [sym__unqualified_keyword] = STATE(26),
    [sym_qualified_keyword] = STATE(26),
    [sym_symbol] = STATE(120),
    [sym__symbol] = STATE(27),
    [sym_qualified_symbol] = STATE(27),
    [sym_list] = STATE(120),
    [sym__list] = STATE(28),
    [sym_vector] = STATE(120),
    [sym__vector] = STATE(29),
    [sym_hash_map] = STATE(120),
    [sym__hash_map] = STATE(30),
    [sym_namespace_map] = STATE(30),
    [sym_set] = STATE(120),
    [sym__set] = STATE(31),
    [sym_comment] = STATE(120),
    [sym_semicolon] = STATE(32),
    [sym_shebang_line] = STATE(32),
    [sym_ignore_form] = STATE(32),
    [sym_comment_macro] = STATE(32),
    [aux_sym_program_repeat1] = STATE(120),
    [sym_nil] = ACTIONS(317),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(117),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [sym__symbol_chars] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(319),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(45),
    [anon_sym_POUND_] = ACTIONS(121),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(321),
    [sym_nil] = ACTIONS(323),
    [sym_true] = ACTIONS(323),
    [sym_false] = ACTIONS(323),
    [sym_number_long] = ACTIONS(323),
    [sym_number_double] = ACTIONS(321),
    [anon_sym_BSLASH] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(321),
    [anon_sym_POUND_DQUOTE] = ACTIONS(321),
    [anon_sym_SQUOTE] = ACTIONS(321),
    [anon_sym_LPARENquote] = ACTIONS(321),
    [anon_sym_RPAREN] = ACTIONS(321),
    [anon_sym_COLON] = ACTIONS(323),
    [anon_sym_COLON_COLON] = ACTIONS(321),
    [sym__symbol_chars] = ACTIONS(323),
    [anon_sym_LPAREN] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(321),
    [anon_sym_RBRACK] = ACTIONS(321),
    [anon_sym_LBRACE] = ACTIONS(321),
    [anon_sym_RBRACE] = ACTIONS(321),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(321),
    [anon_sym_POUND] = ACTIONS(323),
    [anon_sym_POUND_LBRACE] = ACTIONS(321),
    [anon_sym_SEMI] = ACTIONS(321),
    [anon_sym_POUND_BANG] = ACTIONS(321),
    [anon_sym_POUND_] = ACTIONS(321),
    [anon_sym_LPARENcomment] = ACTIONS(321),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(325),
    [sym_nil] = ACTIONS(327),
    [sym_true] = ACTIONS(327),
    [sym_false] = ACTIONS(327),
    [sym_number_long] = ACTIONS(327),
    [sym_number_double] = ACTIONS(325),
    [anon_sym_BSLASH] = ACTIONS(325),
    [anon_sym_DQUOTE] = ACTIONS(325),
    [anon_sym_POUND_DQUOTE] = ACTIONS(325),
    [anon_sym_SQUOTE] = ACTIONS(325),
    [anon_sym_LPARENquote] = ACTIONS(325),
    [anon_sym_RPAREN] = ACTIONS(325),
    [anon_sym_COLON] = ACTIONS(327),
    [anon_sym_COLON_COLON] = ACTIONS(325),
    [sym__symbol_chars] = ACTIONS(327),
    [anon_sym_LPAREN] = ACTIONS(327),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_RBRACK] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(325),
    [anon_sym_RBRACE] = ACTIONS(325),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(325),
    [anon_sym_POUND] = ACTIONS(327),
    [anon_sym_POUND_LBRACE] = ACTIONS(325),
    [anon_sym_SEMI] = ACTIONS(325),
    [anon_sym_POUND_BANG] = ACTIONS(325),
    [anon_sym_POUND_] = ACTIONS(325),
    [anon_sym_LPARENcomment] = ACTIONS(325),
  },
  [70] = {
    [aux_sym__string_repeat1] = STATE(122),
    [anon_sym_DQUOTE] = ACTIONS(329),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(331),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(331),
  },
  [71] = {
    [sym__keyword_chars] = ACTIONS(333),
  },
  [72] = {
    [sym__keyword_chars] = ACTIONS(335),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [sym_nil] = ACTIONS(83),
    [sym_true] = ACTIONS(83),
    [sym_false] = ACTIONS(83),
    [sym_number_long] = ACTIONS(83),
    [sym_number_double] = ACTIONS(83),
    [anon_sym_BSLASH] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_POUND_DQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [anon_sym_LPARENquote] = ACTIONS(83),
    [anon_sym_RPAREN] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(83),
    [anon_sym_COLON_COLON] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(337),
    [sym__symbol_chars] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_RBRACK] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(83),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(83),
    [anon_sym_POUND] = ACTIONS(83),
    [anon_sym_POUND_LBRACE] = ACTIONS(83),
    [anon_sym_SEMI] = ACTIONS(83),
    [anon_sym_POUND_BANG] = ACTIONS(83),
    [anon_sym_POUND_] = ACTIONS(83),
    [anon_sym_] = ACTIONS(81),
    [anon_sym_LPARENcomment] = ACTIONS(83),
  },
  [74] = {
    [sym__number] = STATE(127),
    [sym__string] = STATE(127),
    [sym__keyword] = STATE(127),
    [sym__unqualified_keyword] = STATE(127),
    [sym_qualified_keyword] = STATE(127),
    [sym__symbol] = STATE(127),
    [sym_qualified_symbol] = STATE(127),
    [sym__one_form] = STATE(127),
    [sym__paren_sequence] = STATE(127),
    [sym__bracket_sequence] = STATE(127),
    [sym__curly_brace_sequence] = STATE(127),
    [aux_sym_comment_macro_repeat1] = STATE(127),
    [sym_number_long] = ACTIONS(339),
    [sym_number_double] = ACTIONS(339),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(341),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_COLON_COLON] = ACTIONS(155),
    [sym__symbol_chars] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_POUND] = ACTIONS(165),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(339),
  },
  [75] = {
    [sym__number] = STATE(137),
    [sym__string] = STATE(137),
    [sym__keyword] = STATE(137),
    [sym__unqualified_keyword] = STATE(137),
    [sym_qualified_keyword] = STATE(137),
    [sym__symbol] = STATE(137),
    [sym_qualified_symbol] = STATE(137),
    [sym__one_form] = STATE(137),
    [sym__paren_sequence] = STATE(137),
    [sym__bracket_sequence] = STATE(137),
    [sym__curly_brace_sequence] = STATE(137),
    [aux_sym_comment_macro_repeat1] = STATE(137),
    [sym_number_long] = ACTIONS(343),
    [sym_number_double] = ACTIONS(343),
    [anon_sym_DQUOTE] = ACTIONS(345),
    [anon_sym_COLON] = ACTIONS(347),
    [anon_sym_COLON_COLON] = ACTIONS(349),
    [sym__symbol_chars] = ACTIONS(351),
    [anon_sym_LPAREN] = ACTIONS(353),
    [anon_sym_LBRACK] = ACTIONS(355),
    [anon_sym_RBRACK] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_POUND] = ACTIONS(361),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(343),
  },
  [76] = {
    [sym__number] = STATE(147),
    [sym__string] = STATE(147),
    [sym__keyword] = STATE(147),
    [sym__unqualified_keyword] = STATE(147),
    [sym_qualified_keyword] = STATE(147),
    [sym__symbol] = STATE(147),
    [sym_qualified_symbol] = STATE(147),
    [sym__one_form] = STATE(147),
    [sym__paren_sequence] = STATE(147),
    [sym__bracket_sequence] = STATE(147),
    [sym__curly_brace_sequence] = STATE(147),
    [aux_sym_comment_macro_repeat1] = STATE(147),
    [sym_number_long] = ACTIONS(363),
    [sym_number_double] = ACTIONS(363),
    [anon_sym_DQUOTE] = ACTIONS(365),
    [anon_sym_COLON] = ACTIONS(367),
    [anon_sym_COLON_COLON] = ACTIONS(369),
    [sym__symbol_chars] = ACTIONS(371),
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(375),
    [anon_sym_LBRACE] = ACTIONS(377),
    [anon_sym_RBRACE] = ACTIONS(379),
    [anon_sym_POUND] = ACTIONS(381),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(363),
  },
  [77] = {
    [anon_sym_LBRACE] = ACTIONS(383),
  },
  [78] = {
    [aux_sym_ignore_form_repeat1] = STATE(149),
    [ts_builtin_sym_end] = ACTIONS(385),
    [sym_nil] = ACTIONS(387),
    [sym_true] = ACTIONS(387),
    [sym_false] = ACTIONS(387),
    [sym_number_long] = ACTIONS(387),
    [sym_number_double] = ACTIONS(387),
    [anon_sym_BSLASH] = ACTIONS(387),
    [anon_sym_DQUOTE] = ACTIONS(387),
    [anon_sym_POUND_DQUOTE] = ACTIONS(387),
    [anon_sym_SQUOTE] = ACTIONS(387),
    [anon_sym_LPARENquote] = ACTIONS(387),
    [anon_sym_COLON] = ACTIONS(387),
    [anon_sym_COLON_COLON] = ACTIONS(387),
    [sym__symbol_chars] = ACTIONS(387),
    [anon_sym_LPAREN] = ACTIONS(387),
    [anon_sym_LBRACK] = ACTIONS(387),
    [anon_sym_LBRACE] = ACTIONS(387),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(387),
    [anon_sym_POUND] = ACTIONS(387),
    [anon_sym_POUND_LBRACE] = ACTIONS(387),
    [anon_sym_SEMI] = ACTIONS(387),
    [anon_sym_POUND_BANG] = ACTIONS(387),
    [anon_sym_POUND_] = ACTIONS(387),
    [anon_sym_] = ACTIONS(389),
    [anon_sym_LPARENcomment] = ACTIONS(387),
  },
  [79] = {
    [sym__number] = STATE(150),
    [sym__string] = STATE(150),
    [sym__keyword] = STATE(150),
    [sym__unqualified_keyword] = STATE(150),
    [sym_qualified_keyword] = STATE(150),
    [sym__symbol] = STATE(150),
    [sym_qualified_symbol] = STATE(150),
    [sym__one_form] = STATE(150),
    [sym__paren_sequence] = STATE(150),
    [sym__bracket_sequence] = STATE(150),
    [sym__curly_brace_sequence] = STATE(150),
    [aux_sym_ignore_form_repeat1] = STATE(151),
    [sym_number_long] = ACTIONS(391),
    [sym_number_double] = ACTIONS(391),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [anon_sym_COLON] = ACTIONS(131),
    [anon_sym_COLON_COLON] = ACTIONS(133),
    [sym__symbol_chars] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_POUND] = ACTIONS(143),
    [anon_sym_] = ACTIONS(393),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(391),
  },
  [80] = {
    [aux_sym__string_repeat1] = STATE(153),
    [anon_sym_DQUOTE] = ACTIONS(395),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(397),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(397),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(399),
    [sym_nil] = ACTIONS(401),
    [sym_true] = ACTIONS(401),
    [sym_false] = ACTIONS(401),
    [sym_number_long] = ACTIONS(401),
    [sym_number_double] = ACTIONS(399),
    [anon_sym_BSLASH] = ACTIONS(399),
    [anon_sym_DQUOTE] = ACTIONS(399),
    [anon_sym_POUND_DQUOTE] = ACTIONS(399),
    [anon_sym_SQUOTE] = ACTIONS(399),
    [anon_sym_LPARENquote] = ACTIONS(399),
    [anon_sym_RPAREN] = ACTIONS(399),
    [anon_sym_COLON] = ACTIONS(401),
    [anon_sym_COLON_COLON] = ACTIONS(399),
    [sym__symbol_chars] = ACTIONS(401),
    [anon_sym_LPAREN] = ACTIONS(401),
    [anon_sym_LBRACK] = ACTIONS(399),
    [anon_sym_RBRACK] = ACTIONS(399),
    [anon_sym_LBRACE] = ACTIONS(399),
    [anon_sym_RBRACE] = ACTIONS(399),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(399),
    [anon_sym_POUND] = ACTIONS(401),
    [anon_sym_POUND_LBRACE] = ACTIONS(399),
    [anon_sym_SEMI] = ACTIONS(399),
    [anon_sym_POUND_BANG] = ACTIONS(399),
    [anon_sym_POUND_] = ACTIONS(399),
    [anon_sym_LPARENcomment] = ACTIONS(399),
  },
  [82] = {
    [sym__keyword_chars] = ACTIONS(403),
  },
  [83] = {
    [sym__keyword_chars] = ACTIONS(405),
  },
  [84] = {
    [sym_number_long] = ACTIONS(83),
    [sym_number_double] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_RPAREN] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(83),
    [anon_sym_COLON_COLON] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(407),
    [sym__symbol_chars] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_POUND] = ACTIONS(83),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(83),
  },
  [85] = {
    [sym__number] = STATE(158),
    [sym__string] = STATE(158),
    [sym__keyword] = STATE(158),
    [sym__unqualified_keyword] = STATE(158),
    [sym_qualified_keyword] = STATE(158),
    [sym__symbol] = STATE(158),
    [sym_qualified_symbol] = STATE(158),
    [sym__one_form] = STATE(158),
    [sym__paren_sequence] = STATE(158),
    [sym__bracket_sequence] = STATE(158),
    [sym__curly_brace_sequence] = STATE(158),
    [aux_sym_comment_macro_repeat1] = STATE(158),
    [sym_number_long] = ACTIONS(409),
    [sym_number_double] = ACTIONS(409),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(411),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_COLON_COLON] = ACTIONS(155),
    [sym__symbol_chars] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_POUND] = ACTIONS(165),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(409),
  },
  [86] = {
    [sym__number] = STATE(160),
    [sym__string] = STATE(160),
    [sym__keyword] = STATE(160),
    [sym__unqualified_keyword] = STATE(160),
    [sym_qualified_keyword] = STATE(160),
    [sym__symbol] = STATE(160),
    [sym_qualified_symbol] = STATE(160),
    [sym__one_form] = STATE(160),
    [sym__paren_sequence] = STATE(160),
    [sym__bracket_sequence] = STATE(160),
    [sym__curly_brace_sequence] = STATE(160),
    [aux_sym_comment_macro_repeat1] = STATE(160),
    [sym_number_long] = ACTIONS(413),
    [sym_number_double] = ACTIONS(413),
    [anon_sym_DQUOTE] = ACTIONS(345),
    [anon_sym_COLON] = ACTIONS(347),
    [anon_sym_COLON_COLON] = ACTIONS(349),
    [sym__symbol_chars] = ACTIONS(351),
    [anon_sym_LPAREN] = ACTIONS(353),
    [anon_sym_LBRACK] = ACTIONS(355),
    [anon_sym_RBRACK] = ACTIONS(415),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_POUND] = ACTIONS(361),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(413),
  },
  [87] = {
    [sym__number] = STATE(162),
    [sym__string] = STATE(162),
    [sym__keyword] = STATE(162),
    [sym__unqualified_keyword] = STATE(162),
    [sym_qualified_keyword] = STATE(162),
    [sym__symbol] = STATE(162),
    [sym_qualified_symbol] = STATE(162),
    [sym__one_form] = STATE(162),
    [sym__paren_sequence] = STATE(162),
    [sym__bracket_sequence] = STATE(162),
    [sym__curly_brace_sequence] = STATE(162),
    [aux_sym_comment_macro_repeat1] = STATE(162),
    [sym_number_long] = ACTIONS(417),
    [sym_number_double] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(365),
    [anon_sym_COLON] = ACTIONS(367),
    [anon_sym_COLON_COLON] = ACTIONS(369),
    [sym__symbol_chars] = ACTIONS(371),
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(375),
    [anon_sym_LBRACE] = ACTIONS(377),
    [anon_sym_RBRACE] = ACTIONS(419),
    [anon_sym_POUND] = ACTIONS(381),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(417),
  },
  [88] = {
    [anon_sym_LBRACE] = ACTIONS(421),
  },
  [89] = {
    [sym__number] = STATE(165),
    [sym__string] = STATE(165),
    [sym__keyword] = STATE(165),
    [sym__unqualified_keyword] = STATE(165),
    [sym_qualified_keyword] = STATE(165),
    [sym__symbol] = STATE(165),
    [sym_qualified_symbol] = STATE(165),
    [sym__one_form] = STATE(165),
    [sym__paren_sequence] = STATE(165),
    [sym__bracket_sequence] = STATE(165),
    [sym__curly_brace_sequence] = STATE(165),
    [aux_sym_comment_macro_repeat1] = STATE(165),
    [sym_number_long] = ACTIONS(423),
    [sym_number_double] = ACTIONS(423),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(425),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_COLON_COLON] = ACTIONS(155),
    [sym__symbol_chars] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_POUND] = ACTIONS(165),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(423),
  },
  [90] = {
    [sym__anything] = STATE(90),
    [sym__literal] = STATE(90),
    [sym__collection_literal] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_number] = STATE(90),
    [sym__number] = STATE(22),
    [sym_character] = STATE(90),
    [sym__character] = STATE(23),
    [sym_string] = STATE(90),
    [sym__string] = STATE(24),
    [sym_regex] = STATE(90),
    [sym__regex] = STATE(25),
    [sym_quote] = STATE(90),
    [sym_keyword] = STATE(90),
    [sym__keyword] = STATE(26),
    [sym__unqualified_keyword] = STATE(26),
    [sym_qualified_keyword] = STATE(26),
    [sym_symbol] = STATE(90),
    [sym__symbol] = STATE(27),
    [sym_qualified_symbol] = STATE(27),
    [sym_list] = STATE(90),
    [sym__list] = STATE(28),
    [sym_vector] = STATE(90),
    [sym__vector] = STATE(29),
    [sym_hash_map] = STATE(90),
    [sym__hash_map] = STATE(30),
    [sym_namespace_map] = STATE(30),
    [sym_set] = STATE(90),
    [sym__set] = STATE(31),
    [sym_comment] = STATE(90),
    [sym_semicolon] = STATE(32),
    [sym_shebang_line] = STATE(32),
    [sym_ignore_form] = STATE(32),
    [sym_comment_macro] = STATE(32),
    [aux_sym_program_repeat1] = STATE(90),
    [ts_builtin_sym_end] = ACTIONS(427),
    [sym_nil] = ACTIONS(429),
    [sym_true] = ACTIONS(432),
    [sym_false] = ACTIONS(432),
    [sym_number_long] = ACTIONS(435),
    [sym_number_double] = ACTIONS(438),
    [anon_sym_BSLASH] = ACTIONS(441),
    [anon_sym_DQUOTE] = ACTIONS(444),
    [anon_sym_POUND_DQUOTE] = ACTIONS(447),
    [anon_sym_SQUOTE] = ACTIONS(450),
    [anon_sym_LPARENquote] = ACTIONS(453),
    [anon_sym_COLON] = ACTIONS(456),
    [anon_sym_COLON_COLON] = ACTIONS(459),
    [sym__symbol_chars] = ACTIONS(462),
    [anon_sym_LPAREN] = ACTIONS(465),
    [anon_sym_LBRACK] = ACTIONS(468),
    [anon_sym_LBRACE] = ACTIONS(471),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(474),
    [anon_sym_POUND] = ACTIONS(477),
    [anon_sym_POUND_LBRACE] = ACTIONS(480),
    [anon_sym_SEMI] = ACTIONS(483),
    [anon_sym_POUND_BANG] = ACTIONS(486),
    [anon_sym_POUND_] = ACTIONS(489),
    [anon_sym_LPARENcomment] = ACTIONS(492),
  },
  [91] = {
    [sym__hex_char] = ACTIONS(495),
  },
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(497),
    [sym_nil] = ACTIONS(499),
    [sym_true] = ACTIONS(499),
    [sym_false] = ACTIONS(499),
    [sym_number_long] = ACTIONS(499),
    [sym_number_double] = ACTIONS(497),
    [anon_sym_BSLASH] = ACTIONS(497),
    [anon_sym_DQUOTE] = ACTIONS(497),
    [anon_sym_POUND_DQUOTE] = ACTIONS(497),
    [anon_sym_SQUOTE] = ACTIONS(497),
    [anon_sym_LPARENquote] = ACTIONS(497),
    [anon_sym_RPAREN] = ACTIONS(497),
    [anon_sym_COLON] = ACTIONS(499),
    [anon_sym_COLON_COLON] = ACTIONS(497),
    [sym__symbol_chars] = ACTIONS(499),
    [anon_sym_LPAREN] = ACTIONS(499),
    [anon_sym_LBRACK] = ACTIONS(497),
    [anon_sym_RBRACK] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_RBRACE] = ACTIONS(497),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(497),
    [anon_sym_POUND] = ACTIONS(499),
    [anon_sym_POUND_LBRACE] = ACTIONS(497),
    [anon_sym_SEMI] = ACTIONS(497),
    [anon_sym_POUND_BANG] = ACTIONS(497),
    [anon_sym_POUND_] = ACTIONS(497),
    [anon_sym_LPARENcomment] = ACTIONS(497),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(501),
    [sym_nil] = ACTIONS(503),
    [sym_true] = ACTIONS(503),
    [sym_false] = ACTIONS(503),
    [sym_number_long] = ACTIONS(503),
    [sym_number_double] = ACTIONS(501),
    [anon_sym_BSLASH] = ACTIONS(501),
    [anon_sym_DQUOTE] = ACTIONS(501),
    [anon_sym_POUND_DQUOTE] = ACTIONS(501),
    [anon_sym_SQUOTE] = ACTIONS(501),
    [anon_sym_LPARENquote] = ACTIONS(501),
    [anon_sym_RPAREN] = ACTIONS(501),
    [anon_sym_COLON] = ACTIONS(503),
    [anon_sym_COLON_COLON] = ACTIONS(501),
    [sym__symbol_chars] = ACTIONS(503),
    [anon_sym_LPAREN] = ACTIONS(503),
    [anon_sym_LBRACK] = ACTIONS(501),
    [anon_sym_RBRACK] = ACTIONS(501),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_RBRACE] = ACTIONS(501),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(501),
    [anon_sym_POUND] = ACTIONS(503),
    [anon_sym_POUND_LBRACE] = ACTIONS(501),
    [anon_sym_SEMI] = ACTIONS(501),
    [anon_sym_POUND_BANG] = ACTIONS(501),
    [anon_sym_POUND_] = ACTIONS(501),
    [anon_sym_LPARENcomment] = ACTIONS(501),
  },
  [94] = {
    [aux_sym__string_repeat1] = STATE(94),
    [anon_sym_DQUOTE] = ACTIONS(505),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(507),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(507),
  },
  [95] = {
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
  [96] = {
    [aux_sym__regex_repeat1] = STATE(96),
    [anon_sym_DQUOTE] = ACTIONS(514),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(516),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(516),
  },
  [97] = {
    [aux_sym_ignore_form_repeat1] = STATE(167),
    [anon_sym_RPAREN] = ACTIONS(387),
    [anon_sym_] = ACTIONS(519),
  },
  [98] = {
    [sym__number] = STATE(168),
    [sym__string] = STATE(168),
    [sym__keyword] = STATE(168),
    [sym__unqualified_keyword] = STATE(168),
    [sym_qualified_keyword] = STATE(168),
    [sym__symbol] = STATE(168),
    [sym_qualified_symbol] = STATE(168),
    [sym__one_form] = STATE(168),
    [sym__paren_sequence] = STATE(168),
    [sym__bracket_sequence] = STATE(168),
    [sym__curly_brace_sequence] = STATE(168),
    [aux_sym_ignore_form_repeat1] = STATE(151),
    [sym_number_long] = ACTIONS(521),
    [sym_number_double] = ACTIONS(521),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [anon_sym_COLON] = ACTIONS(131),
    [anon_sym_COLON_COLON] = ACTIONS(133),
    [sym__symbol_chars] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_POUND] = ACTIONS(143),
    [anon_sym_] = ACTIONS(393),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(521),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(523),
    [sym_nil] = ACTIONS(525),
    [sym_true] = ACTIONS(525),
    [sym_false] = ACTIONS(525),
    [sym_number_long] = ACTIONS(525),
    [sym_number_double] = ACTIONS(523),
    [anon_sym_BSLASH] = ACTIONS(523),
    [anon_sym_DQUOTE] = ACTIONS(523),
    [anon_sym_POUND_DQUOTE] = ACTIONS(523),
    [anon_sym_SQUOTE] = ACTIONS(523),
    [anon_sym_LPARENquote] = ACTIONS(523),
    [anon_sym_RPAREN] = ACTIONS(523),
    [anon_sym_COLON] = ACTIONS(525),
    [anon_sym_COLON_COLON] = ACTIONS(523),
    [sym__symbol_chars] = ACTIONS(525),
    [anon_sym_LPAREN] = ACTIONS(525),
    [anon_sym_LBRACK] = ACTIONS(523),
    [anon_sym_RBRACK] = ACTIONS(523),
    [anon_sym_LBRACE] = ACTIONS(523),
    [anon_sym_RBRACE] = ACTIONS(523),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(523),
    [anon_sym_POUND] = ACTIONS(525),
    [anon_sym_POUND_LBRACE] = ACTIONS(523),
    [anon_sym_SEMI] = ACTIONS(523),
    [anon_sym_POUND_BANG] = ACTIONS(523),
    [anon_sym_POUND_] = ACTIONS(523),
    [anon_sym_LPARENcomment] = ACTIONS(523),
  },
  [100] = {
    [sym__keyword_chars] = ACTIONS(527),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(529),
    [sym_nil] = ACTIONS(531),
    [sym_true] = ACTIONS(531),
    [sym_false] = ACTIONS(531),
    [sym_number_long] = ACTIONS(531),
    [sym_number_double] = ACTIONS(529),
    [anon_sym_BSLASH] = ACTIONS(529),
    [anon_sym_DQUOTE] = ACTIONS(529),
    [anon_sym_POUND_DQUOTE] = ACTIONS(529),
    [anon_sym_SQUOTE] = ACTIONS(529),
    [anon_sym_LPARENquote] = ACTIONS(529),
    [anon_sym_RPAREN] = ACTIONS(529),
    [anon_sym_COLON] = ACTIONS(531),
    [anon_sym_COLON_COLON] = ACTIONS(529),
    [sym__symbol_chars] = ACTIONS(531),
    [anon_sym_LPAREN] = ACTIONS(531),
    [anon_sym_LBRACK] = ACTIONS(529),
    [anon_sym_RBRACK] = ACTIONS(529),
    [anon_sym_LBRACE] = ACTIONS(529),
    [anon_sym_RBRACE] = ACTIONS(529),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(529),
    [anon_sym_POUND] = ACTIONS(531),
    [anon_sym_POUND_LBRACE] = ACTIONS(529),
    [anon_sym_SEMI] = ACTIONS(529),
    [anon_sym_POUND_BANG] = ACTIONS(529),
    [anon_sym_POUND_] = ACTIONS(529),
    [anon_sym_LPARENcomment] = ACTIONS(529),
  },
  [102] = {
    [aux_sym_ignore_form_repeat1] = STATE(170),
    [sym_nil] = ACTIONS(387),
    [sym_true] = ACTIONS(387),
    [sym_false] = ACTIONS(387),
    [sym_number_long] = ACTIONS(387),
    [sym_number_double] = ACTIONS(387),
    [anon_sym_BSLASH] = ACTIONS(387),
    [anon_sym_DQUOTE] = ACTIONS(387),
    [anon_sym_POUND_DQUOTE] = ACTIONS(387),
    [anon_sym_SQUOTE] = ACTIONS(387),
    [anon_sym_LPARENquote] = ACTIONS(387),
    [anon_sym_RPAREN] = ACTIONS(387),
    [anon_sym_COLON] = ACTIONS(387),
    [anon_sym_COLON_COLON] = ACTIONS(387),
    [sym__symbol_chars] = ACTIONS(387),
    [anon_sym_LPAREN] = ACTIONS(387),
    [anon_sym_LBRACK] = ACTIONS(387),
    [anon_sym_LBRACE] = ACTIONS(387),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(387),
    [anon_sym_POUND] = ACTIONS(387),
    [anon_sym_POUND_LBRACE] = ACTIONS(387),
    [anon_sym_SEMI] = ACTIONS(387),
    [anon_sym_POUND_BANG] = ACTIONS(387),
    [anon_sym_POUND_] = ACTIONS(387),
    [anon_sym_] = ACTIONS(533),
    [anon_sym_LPARENcomment] = ACTIONS(387),
  },
  [103] = {
    [sym__number] = STATE(171),
    [sym__string] = STATE(171),
    [sym__keyword] = STATE(171),
    [sym__unqualified_keyword] = STATE(171),
    [sym_qualified_keyword] = STATE(171),
    [sym__symbol] = STATE(171),
    [sym_qualified_symbol] = STATE(171),
    [sym__one_form] = STATE(171),
    [sym__paren_sequence] = STATE(171),
    [sym__bracket_sequence] = STATE(171),
    [sym__curly_brace_sequence] = STATE(171),
    [aux_sym_ignore_form_repeat1] = STATE(151),
    [sym_number_long] = ACTIONS(535),
    [sym_number_double] = ACTIONS(535),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [anon_sym_COLON] = ACTIONS(131),
    [anon_sym_COLON_COLON] = ACTIONS(133),
    [sym__symbol_chars] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_POUND] = ACTIONS(143),
    [anon_sym_] = ACTIONS(393),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(535),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(537),
    [sym_nil] = ACTIONS(539),
    [sym_true] = ACTIONS(539),
    [sym_false] = ACTIONS(539),
    [sym_number_long] = ACTIONS(539),
    [sym_number_double] = ACTIONS(537),
    [anon_sym_BSLASH] = ACTIONS(537),
    [anon_sym_DQUOTE] = ACTIONS(537),
    [anon_sym_POUND_DQUOTE] = ACTIONS(537),
    [anon_sym_SQUOTE] = ACTIONS(537),
    [anon_sym_LPARENquote] = ACTIONS(537),
    [anon_sym_RPAREN] = ACTIONS(537),
    [anon_sym_COLON] = ACTIONS(539),
    [anon_sym_COLON_COLON] = ACTIONS(537),
    [sym__symbol_chars] = ACTIONS(539),
    [anon_sym_LPAREN] = ACTIONS(539),
    [anon_sym_LBRACK] = ACTIONS(537),
    [anon_sym_RBRACK] = ACTIONS(537),
    [anon_sym_LBRACE] = ACTIONS(537),
    [anon_sym_RBRACE] = ACTIONS(537),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(537),
    [anon_sym_POUND] = ACTIONS(539),
    [anon_sym_POUND_LBRACE] = ACTIONS(537),
    [anon_sym_SEMI] = ACTIONS(537),
    [anon_sym_POUND_BANG] = ACTIONS(537),
    [anon_sym_POUND_] = ACTIONS(537),
    [anon_sym_LPARENcomment] = ACTIONS(537),
  },
  [105] = {
    [sym__anything] = STATE(105),
    [sym__literal] = STATE(105),
    [sym__collection_literal] = STATE(105),
    [sym_boolean] = STATE(105),
    [sym_number] = STATE(105),
    [sym__number] = STATE(22),
    [sym_character] = STATE(105),
    [sym__character] = STATE(23),
    [sym_string] = STATE(105),
    [sym__string] = STATE(24),
    [sym_regex] = STATE(105),
    [sym__regex] = STATE(25),
    [sym_quote] = STATE(105),
    [sym_keyword] = STATE(105),
    [sym__keyword] = STATE(26),
    [sym__unqualified_keyword] = STATE(26),
    [sym_qualified_keyword] = STATE(26),
    [sym_symbol] = STATE(105),
    [sym__symbol] = STATE(27),
    [sym_qualified_symbol] = STATE(27),
    [sym_list] = STATE(105),
    [sym__list] = STATE(28),
    [sym_vector] = STATE(105),
    [sym__vector] = STATE(29),
    [sym_hash_map] = STATE(105),
    [sym__hash_map] = STATE(30),
    [sym_namespace_map] = STATE(30),
    [sym_set] = STATE(105),
    [sym__set] = STATE(31),
    [sym_comment] = STATE(105),
    [sym_semicolon] = STATE(32),
    [sym_shebang_line] = STATE(32),
    [sym_ignore_form] = STATE(32),
    [sym_comment_macro] = STATE(32),
    [aux_sym_program_repeat1] = STATE(105),
    [sym_nil] = ACTIONS(541),
    [sym_true] = ACTIONS(432),
    [sym_false] = ACTIONS(432),
    [sym_number_long] = ACTIONS(435),
    [sym_number_double] = ACTIONS(438),
    [anon_sym_BSLASH] = ACTIONS(441),
    [anon_sym_DQUOTE] = ACTIONS(444),
    [anon_sym_POUND_DQUOTE] = ACTIONS(447),
    [anon_sym_SQUOTE] = ACTIONS(544),
    [anon_sym_LPARENquote] = ACTIONS(453),
    [anon_sym_RPAREN] = ACTIONS(427),
    [anon_sym_COLON] = ACTIONS(456),
    [anon_sym_COLON_COLON] = ACTIONS(459),
    [sym__symbol_chars] = ACTIONS(462),
    [anon_sym_LPAREN] = ACTIONS(465),
    [anon_sym_LBRACK] = ACTIONS(468),
    [anon_sym_LBRACE] = ACTIONS(471),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(474),
    [anon_sym_POUND] = ACTIONS(477),
    [anon_sym_POUND_LBRACE] = ACTIONS(480),
    [anon_sym_SEMI] = ACTIONS(483),
    [anon_sym_POUND_BANG] = ACTIONS(486),
    [anon_sym_POUND_] = ACTIONS(547),
    [anon_sym_LPARENcomment] = ACTIONS(492),
  },
  [106] = {
    [aux_sym_ignore_form_repeat1] = STATE(172),
    [sym_nil] = ACTIONS(387),
    [sym_true] = ACTIONS(387),
    [sym_false] = ACTIONS(387),
    [sym_number_long] = ACTIONS(387),
    [sym_number_double] = ACTIONS(387),
    [anon_sym_BSLASH] = ACTIONS(387),
    [anon_sym_DQUOTE] = ACTIONS(387),
    [anon_sym_POUND_DQUOTE] = ACTIONS(387),
    [anon_sym_SQUOTE] = ACTIONS(387),
    [anon_sym_LPARENquote] = ACTIONS(387),
    [anon_sym_COLON] = ACTIONS(387),
    [anon_sym_COLON_COLON] = ACTIONS(387),
    [sym__symbol_chars] = ACTIONS(387),
    [anon_sym_LPAREN] = ACTIONS(387),
    [anon_sym_LBRACK] = ACTIONS(387),
    [anon_sym_RBRACK] = ACTIONS(387),
    [anon_sym_LBRACE] = ACTIONS(387),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(387),
    [anon_sym_POUND] = ACTIONS(387),
    [anon_sym_POUND_LBRACE] = ACTIONS(387),
    [anon_sym_SEMI] = ACTIONS(387),
    [anon_sym_POUND_BANG] = ACTIONS(387),
    [anon_sym_POUND_] = ACTIONS(387),
    [anon_sym_] = ACTIONS(550),
    [anon_sym_LPARENcomment] = ACTIONS(387),
  },
  [107] = {
    [sym__number] = STATE(173),
    [sym__string] = STATE(173),
    [sym__keyword] = STATE(173),
    [sym__unqualified_keyword] = STATE(173),
    [sym_qualified_keyword] = STATE(173),
    [sym__symbol] = STATE(173),
    [sym_qualified_symbol] = STATE(173),
    [sym__one_form] = STATE(173),
    [sym__paren_sequence] = STATE(173),
    [sym__bracket_sequence] = STATE(173),
    [sym__curly_brace_sequence] = STATE(173),
    [aux_sym_ignore_form_repeat1] = STATE(151),
    [sym_number_long] = ACTIONS(552),
    [sym_number_double] = ACTIONS(552),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [anon_sym_COLON] = ACTIONS(131),
    [anon_sym_COLON_COLON] = ACTIONS(133),
    [sym__symbol_chars] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_POUND] = ACTIONS(143),
    [anon_sym_] = ACTIONS(393),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(552),
  },
  [108] = {
    [ts_builtin_sym_end] = ACTIONS(554),
    [sym_nil] = ACTIONS(556),
    [sym_true] = ACTIONS(556),
    [sym_false] = ACTIONS(556),
    [sym_number_long] = ACTIONS(556),
    [sym_number_double] = ACTIONS(554),
    [anon_sym_BSLASH] = ACTIONS(554),
    [anon_sym_DQUOTE] = ACTIONS(554),
    [anon_sym_POUND_DQUOTE] = ACTIONS(554),
    [anon_sym_SQUOTE] = ACTIONS(554),
    [anon_sym_LPARENquote] = ACTIONS(554),
    [anon_sym_RPAREN] = ACTIONS(554),
    [anon_sym_COLON] = ACTIONS(556),
    [anon_sym_COLON_COLON] = ACTIONS(554),
    [sym__symbol_chars] = ACTIONS(556),
    [anon_sym_LPAREN] = ACTIONS(556),
    [anon_sym_LBRACK] = ACTIONS(554),
    [anon_sym_RBRACK] = ACTIONS(554),
    [anon_sym_LBRACE] = ACTIONS(554),
    [anon_sym_RBRACE] = ACTIONS(554),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(554),
    [anon_sym_POUND] = ACTIONS(556),
    [anon_sym_POUND_LBRACE] = ACTIONS(554),
    [anon_sym_SEMI] = ACTIONS(554),
    [anon_sym_POUND_BANG] = ACTIONS(554),
    [anon_sym_POUND_] = ACTIONS(554),
    [anon_sym_LPARENcomment] = ACTIONS(554),
  },
  [109] = {
    [sym__anything] = STATE(109),
    [sym__literal] = STATE(109),
    [sym__collection_literal] = STATE(109),
    [sym_boolean] = STATE(109),
    [sym_number] = STATE(109),
    [sym__number] = STATE(22),
    [sym_character] = STATE(109),
    [sym__character] = STATE(23),
    [sym_string] = STATE(109),
    [sym__string] = STATE(24),
    [sym_regex] = STATE(109),
    [sym__regex] = STATE(25),
    [sym_quote] = STATE(109),
    [sym_keyword] = STATE(109),
    [sym__keyword] = STATE(26),
    [sym__unqualified_keyword] = STATE(26),
    [sym_qualified_keyword] = STATE(26),
    [sym_symbol] = STATE(109),
    [sym__symbol] = STATE(27),
    [sym_qualified_symbol] = STATE(27),
    [sym_list] = STATE(109),
    [sym__list] = STATE(28),
    [sym_vector] = STATE(109),
    [sym__vector] = STATE(29),
    [sym_hash_map] = STATE(109),
    [sym__hash_map] = STATE(30),
    [sym_namespace_map] = STATE(30),
    [sym_set] = STATE(109),
    [sym__set] = STATE(31),
    [sym_comment] = STATE(109),
    [sym_semicolon] = STATE(32),
    [sym_shebang_line] = STATE(32),
    [sym_ignore_form] = STATE(32),
    [sym_comment_macro] = STATE(32),
    [aux_sym_program_repeat1] = STATE(109),
    [sym_nil] = ACTIONS(558),
    [sym_true] = ACTIONS(432),
    [sym_false] = ACTIONS(432),
    [sym_number_long] = ACTIONS(435),
    [sym_number_double] = ACTIONS(438),
    [anon_sym_BSLASH] = ACTIONS(441),
    [anon_sym_DQUOTE] = ACTIONS(444),
    [anon_sym_POUND_DQUOTE] = ACTIONS(447),
    [anon_sym_SQUOTE] = ACTIONS(561),
    [anon_sym_LPARENquote] = ACTIONS(453),
    [anon_sym_COLON] = ACTIONS(456),
    [anon_sym_COLON_COLON] = ACTIONS(459),
    [sym__symbol_chars] = ACTIONS(462),
    [anon_sym_LPAREN] = ACTIONS(465),
    [anon_sym_LBRACK] = ACTIONS(468),
    [anon_sym_RBRACK] = ACTIONS(427),
    [anon_sym_LBRACE] = ACTIONS(471),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(474),
    [anon_sym_POUND] = ACTIONS(477),
    [anon_sym_POUND_LBRACE] = ACTIONS(480),
    [anon_sym_SEMI] = ACTIONS(483),
    [anon_sym_POUND_BANG] = ACTIONS(486),
    [anon_sym_POUND_] = ACTIONS(564),
    [anon_sym_LPARENcomment] = ACTIONS(492),
  },
  [110] = {
    [aux_sym_ignore_form_repeat1] = STATE(174),
    [sym_nil] = ACTIONS(387),
    [sym_true] = ACTIONS(387),
    [sym_false] = ACTIONS(387),
    [sym_number_long] = ACTIONS(387),
    [sym_number_double] = ACTIONS(387),
    [anon_sym_BSLASH] = ACTIONS(387),
    [anon_sym_DQUOTE] = ACTIONS(387),
    [anon_sym_POUND_DQUOTE] = ACTIONS(387),
    [anon_sym_SQUOTE] = ACTIONS(387),
    [anon_sym_LPARENquote] = ACTIONS(387),
    [anon_sym_COLON] = ACTIONS(387),
    [anon_sym_COLON_COLON] = ACTIONS(387),
    [sym__symbol_chars] = ACTIONS(387),
    [anon_sym_LPAREN] = ACTIONS(387),
    [anon_sym_LBRACK] = ACTIONS(387),
    [anon_sym_LBRACE] = ACTIONS(387),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(387),
    [anon_sym_POUND] = ACTIONS(387),
    [anon_sym_POUND_LBRACE] = ACTIONS(387),
    [anon_sym_SEMI] = ACTIONS(387),
    [anon_sym_POUND_BANG] = ACTIONS(387),
    [anon_sym_POUND_] = ACTIONS(387),
    [anon_sym_] = ACTIONS(567),
    [anon_sym_LPARENcomment] = ACTIONS(387),
  },
  [111] = {
    [sym__number] = STATE(175),
    [sym__string] = STATE(175),
    [sym__keyword] = STATE(175),
    [sym__unqualified_keyword] = STATE(175),
    [sym_qualified_keyword] = STATE(175),
    [sym__symbol] = STATE(175),
    [sym_qualified_symbol] = STATE(175),
    [sym__one_form] = STATE(175),
    [sym__paren_sequence] = STATE(175),
    [sym__bracket_sequence] = STATE(175),
    [sym__curly_brace_sequence] = STATE(175),
    [aux_sym_ignore_form_repeat1] = STATE(151),
    [sym_number_long] = ACTIONS(569),
    [sym_number_double] = ACTIONS(569),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [anon_sym_COLON] = ACTIONS(131),
    [anon_sym_COLON_COLON] = ACTIONS(133),
    [sym__symbol_chars] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_POUND] = ACTIONS(143),
    [anon_sym_] = ACTIONS(393),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(569),
  },
  [112] = {
    [sym_nil] = ACTIONS(571),
    [sym_true] = ACTIONS(571),
    [sym_false] = ACTIONS(571),
    [sym_number_long] = ACTIONS(571),
    [sym_number_double] = ACTIONS(573),
    [anon_sym_BSLASH] = ACTIONS(573),
    [anon_sym_DQUOTE] = ACTIONS(573),
    [anon_sym_POUND_DQUOTE] = ACTIONS(573),
    [anon_sym_SQUOTE] = ACTIONS(573),
    [anon_sym_LPARENquote] = ACTIONS(573),
    [anon_sym_COLON] = ACTIONS(571),
    [anon_sym_COLON_COLON] = ACTIONS(573),
    [sym__symbol_chars] = ACTIONS(571),
    [anon_sym_LPAREN] = ACTIONS(571),
    [anon_sym_LBRACK] = ACTIONS(573),
    [anon_sym_LBRACE] = ACTIONS(573),
    [anon_sym_RBRACE] = ACTIONS(573),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(573),
    [anon_sym_POUND] = ACTIONS(571),
    [anon_sym_POUND_LBRACE] = ACTIONS(573),
    [anon_sym_SEMI] = ACTIONS(573),
    [anon_sym_POUND_BANG] = ACTIONS(573),
    [anon_sym_POUND_] = ACTIONS(573),
    [anon_sym_LPARENcomment] = ACTIONS(573),
  },
  [113] = {
    [ts_builtin_sym_end] = ACTIONS(575),
    [sym_nil] = ACTIONS(577),
    [sym_true] = ACTIONS(577),
    [sym_false] = ACTIONS(577),
    [sym_number_long] = ACTIONS(577),
    [sym_number_double] = ACTIONS(575),
    [anon_sym_BSLASH] = ACTIONS(575),
    [anon_sym_DQUOTE] = ACTIONS(575),
    [anon_sym_POUND_DQUOTE] = ACTIONS(575),
    [anon_sym_SQUOTE] = ACTIONS(575),
    [anon_sym_LPARENquote] = ACTIONS(575),
    [anon_sym_RPAREN] = ACTIONS(575),
    [anon_sym_COLON] = ACTIONS(577),
    [anon_sym_COLON_COLON] = ACTIONS(575),
    [sym__symbol_chars] = ACTIONS(577),
    [anon_sym_LPAREN] = ACTIONS(577),
    [anon_sym_LBRACK] = ACTIONS(575),
    [anon_sym_RBRACK] = ACTIONS(575),
    [anon_sym_LBRACE] = ACTIONS(575),
    [anon_sym_RBRACE] = ACTIONS(575),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(575),
    [anon_sym_POUND] = ACTIONS(577),
    [anon_sym_POUND_LBRACE] = ACTIONS(575),
    [anon_sym_SEMI] = ACTIONS(575),
    [anon_sym_POUND_BANG] = ACTIONS(575),
    [anon_sym_POUND_] = ACTIONS(575),
    [anon_sym_LPARENcomment] = ACTIONS(575),
  },
  [114] = {
    [sym__anything] = STATE(59),
    [sym__literal] = STATE(59),
    [sym__collection_literal] = STATE(59),
    [sym_boolean] = STATE(59),
    [sym_number] = STATE(59),
    [sym__number] = STATE(22),
    [sym_character] = STATE(59),
    [sym__character] = STATE(23),
    [sym_string] = STATE(59),
    [sym__string] = STATE(24),
    [sym_regex] = STATE(59),
    [sym__regex] = STATE(25),
    [sym_quote] = STATE(59),
    [sym_keyword] = STATE(59),
    [sym__keyword] = STATE(26),
    [sym__unqualified_keyword] = STATE(26),
    [sym_qualified_keyword] = STATE(26),
    [sym_symbol] = STATE(59),
    [sym__symbol] = STATE(27),
    [sym_qualified_symbol] = STATE(27),
    [sym_list] = STATE(59),
    [sym__list] = STATE(28),
    [sym_vector] = STATE(59),
    [sym__vector] = STATE(29),
    [sym_hash_map] = STATE(59),
    [sym__hash_map] = STATE(30),
    [sym_namespace_map] = STATE(30),
    [sym__hash_map_kv_pair] = STATE(114),
    [sym__hash_map_key] = STATE(59),
    [sym_set] = STATE(59),
    [sym__set] = STATE(31),
    [sym_comment] = STATE(59),
    [sym_semicolon] = STATE(32),
    [sym_shebang_line] = STATE(32),
    [sym_ignore_form] = STATE(32),
    [sym_comment_macro] = STATE(32),
    [aux_sym__hash_map_repeat1] = STATE(114),
    [sym_nil] = ACTIONS(579),
    [sym_true] = ACTIONS(582),
    [sym_false] = ACTIONS(582),
    [sym_number_long] = ACTIONS(585),
    [sym_number_double] = ACTIONS(588),
    [anon_sym_BSLASH] = ACTIONS(591),
    [anon_sym_DQUOTE] = ACTIONS(594),
    [anon_sym_POUND_DQUOTE] = ACTIONS(597),
    [anon_sym_SQUOTE] = ACTIONS(600),
    [anon_sym_LPARENquote] = ACTIONS(603),
    [anon_sym_COLON] = ACTIONS(606),
    [anon_sym_COLON_COLON] = ACTIONS(609),
    [sym__symbol_chars] = ACTIONS(612),
    [anon_sym_LPAREN] = ACTIONS(615),
    [anon_sym_LBRACK] = ACTIONS(618),
    [anon_sym_LBRACE] = ACTIONS(621),
    [anon_sym_RBRACE] = ACTIONS(624),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(626),
    [anon_sym_POUND] = ACTIONS(629),
    [anon_sym_POUND_LBRACE] = ACTIONS(632),
    [anon_sym_SEMI] = ACTIONS(635),
    [anon_sym_POUND_BANG] = ACTIONS(638),
    [anon_sym_POUND_] = ACTIONS(641),
    [anon_sym_LPARENcomment] = ACTIONS(644),
  },
  [115] = {
    [ts_builtin_sym_end] = ACTIONS(647),
    [sym_nil] = ACTIONS(649),
    [sym_true] = ACTIONS(649),
    [sym_false] = ACTIONS(649),
    [sym_number_long] = ACTIONS(649),
    [sym_number_double] = ACTIONS(647),
    [anon_sym_BSLASH] = ACTIONS(647),
    [anon_sym_DQUOTE] = ACTIONS(647),
    [anon_sym_POUND_DQUOTE] = ACTIONS(647),
    [anon_sym_SQUOTE] = ACTIONS(647),
    [anon_sym_LPARENquote] = ACTIONS(647),
    [anon_sym_RPAREN] = ACTIONS(647),
    [anon_sym_COLON] = ACTIONS(649),
    [anon_sym_COLON_COLON] = ACTIONS(647),
    [sym__symbol_chars] = ACTIONS(649),
    [anon_sym_LPAREN] = ACTIONS(649),
    [anon_sym_LBRACK] = ACTIONS(647),
    [anon_sym_RBRACK] = ACTIONS(647),
    [anon_sym_LBRACE] = ACTIONS(647),
    [anon_sym_RBRACE] = ACTIONS(647),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(647),
    [anon_sym_POUND] = ACTIONS(649),
    [anon_sym_POUND_LBRACE] = ACTIONS(647),
    [anon_sym_SEMI] = ACTIONS(647),
    [anon_sym_POUND_BANG] = ACTIONS(647),
    [anon_sym_POUND_] = ACTIONS(647),
    [anon_sym_LPARENcomment] = ACTIONS(647),
  },
  [116] = {
    [sym__anything] = STATE(59),
    [sym__literal] = STATE(59),
    [sym__collection_literal] = STATE(59),
    [sym_boolean] = STATE(59),
    [sym_number] = STATE(59),
    [sym__number] = STATE(22),
    [sym_character] = STATE(59),
    [sym__character] = STATE(23),
    [sym_string] = STATE(59),
    [sym__string] = STATE(24),
    [sym_regex] = STATE(59),
    [sym__regex] = STATE(25),
    [sym_quote] = STATE(59),
    [sym_keyword] = STATE(59),
    [sym__keyword] = STATE(26),
    [sym__unqualified_keyword] = STATE(26),
    [sym_qualified_keyword] = STATE(26),
    [sym_symbol] = STATE(59),
    [sym__symbol] = STATE(27),
    [sym_qualified_symbol] = STATE(27),
    [sym_list] = STATE(59),
    [sym__list] = STATE(28),
    [sym_vector] = STATE(59),
    [sym__vector] = STATE(29),
    [sym_hash_map] = STATE(59),
    [sym__hash_map] = STATE(30),
    [sym_namespace_map] = STATE(30),
    [sym__hash_map_kv_pair] = STATE(177),
    [sym__hash_map_key] = STATE(59),
    [sym_set] = STATE(59),
    [sym__set] = STATE(31),
    [sym_comment] = STATE(59),
    [sym_semicolon] = STATE(32),
    [sym_shebang_line] = STATE(32),
    [sym_ignore_form] = STATE(32),
    [sym_comment_macro] = STATE(32),
    [aux_sym__hash_map_repeat1] = STATE(177),
    [sym_nil] = ACTIONS(103),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [sym__symbol_chars] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(651),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(45),
    [anon_sym_POUND_] = ACTIONS(109),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [117] = {
    [aux_sym_ignore_form_repeat1] = STATE(178),
    [sym_nil] = ACTIONS(387),
    [sym_true] = ACTIONS(387),
    [sym_false] = ACTIONS(387),
    [sym_number_long] = ACTIONS(387),
    [sym_number_double] = ACTIONS(387),
    [anon_sym_BSLASH] = ACTIONS(387),
    [anon_sym_DQUOTE] = ACTIONS(387),
    [anon_sym_POUND_DQUOTE] = ACTIONS(387),
    [anon_sym_SQUOTE] = ACTIONS(387),
    [anon_sym_LPARENquote] = ACTIONS(387),
    [anon_sym_COLON] = ACTIONS(387),
    [anon_sym_COLON_COLON] = ACTIONS(387),
    [sym__symbol_chars] = ACTIONS(387),
    [anon_sym_LPAREN] = ACTIONS(387),
    [anon_sym_LBRACK] = ACTIONS(387),
    [anon_sym_LBRACE] = ACTIONS(387),
    [anon_sym_RBRACE] = ACTIONS(387),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(387),
    [anon_sym_POUND] = ACTIONS(387),
    [anon_sym_POUND_LBRACE] = ACTIONS(387),
    [anon_sym_SEMI] = ACTIONS(387),
    [anon_sym_POUND_BANG] = ACTIONS(387),
    [anon_sym_POUND_] = ACTIONS(387),
    [anon_sym_] = ACTIONS(653),
    [anon_sym_LPARENcomment] = ACTIONS(387),
  },
  [118] = {
    [sym__number] = STATE(179),
    [sym__string] = STATE(179),
    [sym__keyword] = STATE(179),
    [sym__unqualified_keyword] = STATE(179),
    [sym_qualified_keyword] = STATE(179),
    [sym__symbol] = STATE(179),
    [sym_qualified_symbol] = STATE(179),
    [sym__one_form] = STATE(179),
    [sym__paren_sequence] = STATE(179),
    [sym__bracket_sequence] = STATE(179),
    [sym__curly_brace_sequence] = STATE(179),
    [aux_sym_ignore_form_repeat1] = STATE(151),
    [sym_number_long] = ACTIONS(655),
    [sym_number_double] = ACTIONS(655),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [anon_sym_COLON] = ACTIONS(131),
    [anon_sym_COLON_COLON] = ACTIONS(133),
    [sym__symbol_chars] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_POUND] = ACTIONS(143),
    [anon_sym_] = ACTIONS(393),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(655),
  },
  [119] = {
    [ts_builtin_sym_end] = ACTIONS(657),
    [sym_nil] = ACTIONS(659),
    [sym_true] = ACTIONS(659),
    [sym_false] = ACTIONS(659),
    [sym_number_long] = ACTIONS(659),
    [sym_number_double] = ACTIONS(657),
    [anon_sym_BSLASH] = ACTIONS(657),
    [anon_sym_DQUOTE] = ACTIONS(657),
    [anon_sym_POUND_DQUOTE] = ACTIONS(657),
    [anon_sym_SQUOTE] = ACTIONS(657),
    [anon_sym_LPARENquote] = ACTIONS(657),
    [anon_sym_RPAREN] = ACTIONS(657),
    [anon_sym_COLON] = ACTIONS(659),
    [anon_sym_COLON_COLON] = ACTIONS(657),
    [sym__symbol_chars] = ACTIONS(659),
    [anon_sym_LPAREN] = ACTIONS(659),
    [anon_sym_LBRACK] = ACTIONS(657),
    [anon_sym_RBRACK] = ACTIONS(657),
    [anon_sym_LBRACE] = ACTIONS(657),
    [anon_sym_RBRACE] = ACTIONS(657),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(657),
    [anon_sym_POUND] = ACTIONS(659),
    [anon_sym_POUND_LBRACE] = ACTIONS(657),
    [anon_sym_SEMI] = ACTIONS(657),
    [anon_sym_POUND_BANG] = ACTIONS(657),
    [anon_sym_POUND_] = ACTIONS(657),
    [anon_sym_LPARENcomment] = ACTIONS(657),
  },
  [120] = {
    [sym__anything] = STATE(120),
    [sym__literal] = STATE(120),
    [sym__collection_literal] = STATE(120),
    [sym_boolean] = STATE(120),
    [sym_number] = STATE(120),
    [sym__number] = STATE(22),
    [sym_character] = STATE(120),
    [sym__character] = STATE(23),
    [sym_string] = STATE(120),
    [sym__string] = STATE(24),
    [sym_regex] = STATE(120),
    [sym__regex] = STATE(25),
    [sym_quote] = STATE(120),
    [sym_keyword] = STATE(120),
    [sym__keyword] = STATE(26),
    [sym__unqualified_keyword] = STATE(26),
    [sym_qualified_keyword] = STATE(26),
    [sym_symbol] = STATE(120),
    [sym__symbol] = STATE(27),
    [sym_qualified_symbol] = STATE(27),
    [sym_list] = STATE(120),
    [sym__list] = STATE(28),
    [sym_vector] = STATE(120),
    [sym__vector] = STATE(29),
    [sym_hash_map] = STATE(120),
    [sym__hash_map] = STATE(30),
    [sym_namespace_map] = STATE(30),
    [sym_set] = STATE(120),
    [sym__set] = STATE(31),
    [sym_comment] = STATE(120),
    [sym_semicolon] = STATE(32),
    [sym_shebang_line] = STATE(32),
    [sym_ignore_form] = STATE(32),
    [sym_comment_macro] = STATE(32),
    [aux_sym_program_repeat1] = STATE(120),
    [sym_nil] = ACTIONS(661),
    [sym_true] = ACTIONS(432),
    [sym_false] = ACTIONS(432),
    [sym_number_long] = ACTIONS(435),
    [sym_number_double] = ACTIONS(438),
    [anon_sym_BSLASH] = ACTIONS(441),
    [anon_sym_DQUOTE] = ACTIONS(444),
    [anon_sym_POUND_DQUOTE] = ACTIONS(447),
    [anon_sym_SQUOTE] = ACTIONS(664),
    [anon_sym_LPARENquote] = ACTIONS(453),
    [anon_sym_COLON] = ACTIONS(456),
    [anon_sym_COLON_COLON] = ACTIONS(459),
    [sym__symbol_chars] = ACTIONS(462),
    [anon_sym_LPAREN] = ACTIONS(465),
    [anon_sym_LBRACK] = ACTIONS(468),
    [anon_sym_LBRACE] = ACTIONS(471),
    [anon_sym_RBRACE] = ACTIONS(427),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(474),
    [anon_sym_POUND] = ACTIONS(477),
    [anon_sym_POUND_LBRACE] = ACTIONS(480),
    [anon_sym_SEMI] = ACTIONS(483),
    [anon_sym_POUND_BANG] = ACTIONS(486),
    [anon_sym_POUND_] = ACTIONS(667),
    [anon_sym_LPARENcomment] = ACTIONS(492),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(227),
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
    [anon_sym_COLON] = ACTIONS(229),
    [anon_sym_COLON_COLON] = ACTIONS(229),
    [sym__symbol_chars] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_RBRACK] = ACTIONS(229),
    [anon_sym_LBRACE] = ACTIONS(229),
    [anon_sym_RBRACE] = ACTIONS(229),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(229),
    [anon_sym_POUND] = ACTIONS(229),
    [anon_sym_POUND_LBRACE] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(229),
    [anon_sym_POUND_BANG] = ACTIONS(229),
    [anon_sym_POUND_] = ACTIONS(229),
    [anon_sym_] = ACTIONS(227),
    [anon_sym_LPARENcomment] = ACTIONS(229),
  },
  [122] = {
    [aux_sym__string_repeat1] = STATE(94),
    [anon_sym_DQUOTE] = ACTIONS(670),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(233),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(233),
  },
  [123] = {
    [ts_builtin_sym_end] = ACTIONS(253),
    [sym_nil] = ACTIONS(255),
    [sym_true] = ACTIONS(255),
    [sym_false] = ACTIONS(255),
    [sym_number_long] = ACTIONS(255),
    [sym_number_double] = ACTIONS(255),
    [anon_sym_BSLASH] = ACTIONS(255),
    [anon_sym_DQUOTE] = ACTIONS(255),
    [anon_sym_POUND_DQUOTE] = ACTIONS(255),
    [anon_sym_SQUOTE] = ACTIONS(255),
    [anon_sym_LPARENquote] = ACTIONS(255),
    [anon_sym_RPAREN] = ACTIONS(255),
    [anon_sym_COLON] = ACTIONS(255),
    [anon_sym_COLON_COLON] = ACTIONS(255),
    [sym__symbol_chars] = ACTIONS(255),
    [anon_sym_LPAREN] = ACTIONS(255),
    [anon_sym_LBRACK] = ACTIONS(255),
    [anon_sym_RBRACK] = ACTIONS(255),
    [anon_sym_LBRACE] = ACTIONS(255),
    [anon_sym_RBRACE] = ACTIONS(255),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(255),
    [anon_sym_POUND] = ACTIONS(255),
    [anon_sym_POUND_LBRACE] = ACTIONS(255),
    [anon_sym_SEMI] = ACTIONS(255),
    [anon_sym_POUND_BANG] = ACTIONS(255),
    [anon_sym_POUND_] = ACTIONS(255),
    [anon_sym_] = ACTIONS(253),
    [anon_sym_LPARENcomment] = ACTIONS(255),
  },
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(257),
    [sym_nil] = ACTIONS(259),
    [sym_true] = ACTIONS(259),
    [sym_false] = ACTIONS(259),
    [sym_number_long] = ACTIONS(259),
    [sym_number_double] = ACTIONS(259),
    [anon_sym_BSLASH] = ACTIONS(259),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [anon_sym_POUND_DQUOTE] = ACTIONS(259),
    [anon_sym_SQUOTE] = ACTIONS(259),
    [anon_sym_LPARENquote] = ACTIONS(259),
    [anon_sym_RPAREN] = ACTIONS(259),
    [anon_sym_COLON] = ACTIONS(259),
    [anon_sym_COLON_COLON] = ACTIONS(259),
    [anon_sym_SLASH] = ACTIONS(672),
    [sym__symbol_chars] = ACTIONS(259),
    [anon_sym_LPAREN] = ACTIONS(259),
    [anon_sym_LBRACK] = ACTIONS(259),
    [anon_sym_RBRACK] = ACTIONS(259),
    [anon_sym_LBRACE] = ACTIONS(259),
    [anon_sym_RBRACE] = ACTIONS(259),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(259),
    [anon_sym_POUND] = ACTIONS(259),
    [anon_sym_POUND_LBRACE] = ACTIONS(259),
    [anon_sym_SEMI] = ACTIONS(259),
    [anon_sym_POUND_BANG] = ACTIONS(259),
    [anon_sym_POUND_] = ACTIONS(259),
    [anon_sym_] = ACTIONS(257),
    [anon_sym_LPARENcomment] = ACTIONS(259),
  },
  [125] = {
    [sym__symbol_chars] = ACTIONS(674),
  },
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(676),
    [sym_nil] = ACTIONS(678),
    [sym_true] = ACTIONS(678),
    [sym_false] = ACTIONS(678),
    [sym_number_long] = ACTIONS(678),
    [sym_number_double] = ACTIONS(678),
    [anon_sym_BSLASH] = ACTIONS(678),
    [anon_sym_DQUOTE] = ACTIONS(678),
    [anon_sym_POUND_DQUOTE] = ACTIONS(678),
    [anon_sym_SQUOTE] = ACTIONS(678),
    [anon_sym_LPARENquote] = ACTIONS(678),
    [anon_sym_RPAREN] = ACTIONS(678),
    [anon_sym_COLON] = ACTIONS(678),
    [anon_sym_COLON_COLON] = ACTIONS(678),
    [sym__symbol_chars] = ACTIONS(678),
    [anon_sym_LPAREN] = ACTIONS(678),
    [anon_sym_LBRACK] = ACTIONS(678),
    [anon_sym_RBRACK] = ACTIONS(678),
    [anon_sym_LBRACE] = ACTIONS(678),
    [anon_sym_RBRACE] = ACTIONS(678),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(678),
    [anon_sym_POUND] = ACTIONS(678),
    [anon_sym_POUND_LBRACE] = ACTIONS(678),
    [anon_sym_SEMI] = ACTIONS(678),
    [anon_sym_POUND_BANG] = ACTIONS(678),
    [anon_sym_POUND_] = ACTIONS(678),
    [anon_sym_] = ACTIONS(676),
    [anon_sym_LPARENcomment] = ACTIONS(678),
  },
  [127] = {
    [sym__number] = STATE(165),
    [sym__string] = STATE(165),
    [sym__keyword] = STATE(165),
    [sym__unqualified_keyword] = STATE(165),
    [sym_qualified_keyword] = STATE(165),
    [sym__symbol] = STATE(165),
    [sym_qualified_symbol] = STATE(165),
    [sym__one_form] = STATE(165),
    [sym__paren_sequence] = STATE(165),
    [sym__bracket_sequence] = STATE(165),
    [sym__curly_brace_sequence] = STATE(165),
    [aux_sym_comment_macro_repeat1] = STATE(165),
    [sym_number_long] = ACTIONS(423),
    [sym_number_double] = ACTIONS(423),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(680),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_COLON_COLON] = ACTIONS(155),
    [sym__symbol_chars] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_POUND] = ACTIONS(165),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(423),
  },
  [128] = {
    [aux_sym__string_repeat1] = STATE(185),
    [anon_sym_DQUOTE] = ACTIONS(682),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(684),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(684),
  },
  [129] = {
    [sym__keyword_chars] = ACTIONS(686),
  },
  [130] = {
    [sym__keyword_chars] = ACTIONS(688),
  },
  [131] = {
    [sym_number_long] = ACTIONS(83),
    [sym_number_double] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(83),
    [anon_sym_COLON_COLON] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(690),
    [sym__symbol_chars] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_RBRACK] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_POUND] = ACTIONS(83),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(83),
  },
  [132] = {
    [sym__number] = STATE(190),
    [sym__string] = STATE(190),
    [sym__keyword] = STATE(190),
    [sym__unqualified_keyword] = STATE(190),
    [sym_qualified_keyword] = STATE(190),
    [sym__symbol] = STATE(190),
    [sym_qualified_symbol] = STATE(190),
    [sym__one_form] = STATE(190),
    [sym__paren_sequence] = STATE(190),
    [sym__bracket_sequence] = STATE(190),
    [sym__curly_brace_sequence] = STATE(190),
    [aux_sym_comment_macro_repeat1] = STATE(190),
    [sym_number_long] = ACTIONS(692),
    [sym_number_double] = ACTIONS(692),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(694),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_COLON_COLON] = ACTIONS(155),
    [sym__symbol_chars] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_POUND] = ACTIONS(165),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(692),
  },
  [133] = {
    [sym__number] = STATE(192),
    [sym__string] = STATE(192),
    [sym__keyword] = STATE(192),
    [sym__unqualified_keyword] = STATE(192),
    [sym_qualified_keyword] = STATE(192),
    [sym__symbol] = STATE(192),
    [sym_qualified_symbol] = STATE(192),
    [sym__one_form] = STATE(192),
    [sym__paren_sequence] = STATE(192),
    [sym__bracket_sequence] = STATE(192),
    [sym__curly_brace_sequence] = STATE(192),
    [aux_sym_comment_macro_repeat1] = STATE(192),
    [sym_number_long] = ACTIONS(696),
    [sym_number_double] = ACTIONS(696),
    [anon_sym_DQUOTE] = ACTIONS(345),
    [anon_sym_COLON] = ACTIONS(347),
    [anon_sym_COLON_COLON] = ACTIONS(349),
    [sym__symbol_chars] = ACTIONS(351),
    [anon_sym_LPAREN] = ACTIONS(353),
    [anon_sym_LBRACK] = ACTIONS(355),
    [anon_sym_RBRACK] = ACTIONS(698),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_POUND] = ACTIONS(361),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(696),
  },
  [134] = {
    [ts_builtin_sym_end] = ACTIONS(700),
    [sym_nil] = ACTIONS(702),
    [sym_true] = ACTIONS(702),
    [sym_false] = ACTIONS(702),
    [sym_number_long] = ACTIONS(702),
    [sym_number_double] = ACTIONS(702),
    [anon_sym_BSLASH] = ACTIONS(702),
    [anon_sym_DQUOTE] = ACTIONS(702),
    [anon_sym_POUND_DQUOTE] = ACTIONS(702),
    [anon_sym_SQUOTE] = ACTIONS(702),
    [anon_sym_LPARENquote] = ACTIONS(702),
    [anon_sym_RPAREN] = ACTIONS(702),
    [anon_sym_COLON] = ACTIONS(702),
    [anon_sym_COLON_COLON] = ACTIONS(702),
    [sym__symbol_chars] = ACTIONS(702),
    [anon_sym_LPAREN] = ACTIONS(702),
    [anon_sym_LBRACK] = ACTIONS(702),
    [anon_sym_RBRACK] = ACTIONS(702),
    [anon_sym_LBRACE] = ACTIONS(702),
    [anon_sym_RBRACE] = ACTIONS(702),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(702),
    [anon_sym_POUND] = ACTIONS(702),
    [anon_sym_POUND_LBRACE] = ACTIONS(702),
    [anon_sym_SEMI] = ACTIONS(702),
    [anon_sym_POUND_BANG] = ACTIONS(702),
    [anon_sym_POUND_] = ACTIONS(702),
    [anon_sym_] = ACTIONS(700),
    [anon_sym_LPARENcomment] = ACTIONS(702),
  },
  [135] = {
    [sym__number] = STATE(194),
    [sym__string] = STATE(194),
    [sym__keyword] = STATE(194),
    [sym__unqualified_keyword] = STATE(194),
    [sym_qualified_keyword] = STATE(194),
    [sym__symbol] = STATE(194),
    [sym_qualified_symbol] = STATE(194),
    [sym__one_form] = STATE(194),
    [sym__paren_sequence] = STATE(194),
    [sym__bracket_sequence] = STATE(194),
    [sym__curly_brace_sequence] = STATE(194),
    [aux_sym_comment_macro_repeat1] = STATE(194),
    [sym_number_long] = ACTIONS(704),
    [sym_number_double] = ACTIONS(704),
    [anon_sym_DQUOTE] = ACTIONS(365),
    [anon_sym_COLON] = ACTIONS(367),
    [anon_sym_COLON_COLON] = ACTIONS(369),
    [sym__symbol_chars] = ACTIONS(371),
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(375),
    [anon_sym_LBRACE] = ACTIONS(377),
    [anon_sym_RBRACE] = ACTIONS(706),
    [anon_sym_POUND] = ACTIONS(381),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(704),
  },
  [136] = {
    [anon_sym_LBRACE] = ACTIONS(708),
  },
  [137] = {
    [sym__number] = STATE(197),
    [sym__string] = STATE(197),
    [sym__keyword] = STATE(197),
    [sym__unqualified_keyword] = STATE(197),
    [sym_qualified_keyword] = STATE(197),
    [sym__symbol] = STATE(197),
    [sym_qualified_symbol] = STATE(197),
    [sym__one_form] = STATE(197),
    [sym__paren_sequence] = STATE(197),
    [sym__bracket_sequence] = STATE(197),
    [sym__curly_brace_sequence] = STATE(197),
    [aux_sym_comment_macro_repeat1] = STATE(197),
    [sym_number_long] = ACTIONS(710),
    [sym_number_double] = ACTIONS(710),
    [anon_sym_DQUOTE] = ACTIONS(345),
    [anon_sym_COLON] = ACTIONS(347),
    [anon_sym_COLON_COLON] = ACTIONS(349),
    [sym__symbol_chars] = ACTIONS(351),
    [anon_sym_LPAREN] = ACTIONS(353),
    [anon_sym_LBRACK] = ACTIONS(355),
    [anon_sym_RBRACK] = ACTIONS(712),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_POUND] = ACTIONS(361),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(710),
  },
  [138] = {
    [aux_sym__string_repeat1] = STATE(199),
    [anon_sym_DQUOTE] = ACTIONS(714),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(716),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(716),
  },
  [139] = {
    [sym__keyword_chars] = ACTIONS(718),
  },
  [140] = {
    [sym__keyword_chars] = ACTIONS(720),
  },
  [141] = {
    [sym_number_long] = ACTIONS(83),
    [sym_number_double] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(83),
    [anon_sym_COLON_COLON] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(722),
    [sym__symbol_chars] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(83),
    [anon_sym_POUND] = ACTIONS(83),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(83),
  },
  [142] = {
    [sym__number] = STATE(204),
    [sym__string] = STATE(204),
    [sym__keyword] = STATE(204),
    [sym__unqualified_keyword] = STATE(204),
    [sym_qualified_keyword] = STATE(204),
    [sym__symbol] = STATE(204),
    [sym_qualified_symbol] = STATE(204),
    [sym__one_form] = STATE(204),
    [sym__paren_sequence] = STATE(204),
    [sym__bracket_sequence] = STATE(204),
    [sym__curly_brace_sequence] = STATE(204),
    [aux_sym_comment_macro_repeat1] = STATE(204),
    [sym_number_long] = ACTIONS(724),
    [sym_number_double] = ACTIONS(724),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(726),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_COLON_COLON] = ACTIONS(155),
    [sym__symbol_chars] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_POUND] = ACTIONS(165),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(724),
  },
  [143] = {
    [sym__number] = STATE(206),
    [sym__string] = STATE(206),
    [sym__keyword] = STATE(206),
    [sym__unqualified_keyword] = STATE(206),
    [sym_qualified_keyword] = STATE(206),
    [sym__symbol] = STATE(206),
    [sym_qualified_symbol] = STATE(206),
    [sym__one_form] = STATE(206),
    [sym__paren_sequence] = STATE(206),
    [sym__bracket_sequence] = STATE(206),
    [sym__curly_brace_sequence] = STATE(206),
    [aux_sym_comment_macro_repeat1] = STATE(206),
    [sym_number_long] = ACTIONS(728),
    [sym_number_double] = ACTIONS(728),
    [anon_sym_DQUOTE] = ACTIONS(345),
    [anon_sym_COLON] = ACTIONS(347),
    [anon_sym_COLON_COLON] = ACTIONS(349),
    [sym__symbol_chars] = ACTIONS(351),
    [anon_sym_LPAREN] = ACTIONS(353),
    [anon_sym_LBRACK] = ACTIONS(355),
    [anon_sym_RBRACK] = ACTIONS(730),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_POUND] = ACTIONS(361),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(728),
  },
  [144] = {
    [sym__number] = STATE(208),
    [sym__string] = STATE(208),
    [sym__keyword] = STATE(208),
    [sym__unqualified_keyword] = STATE(208),
    [sym_qualified_keyword] = STATE(208),
    [sym__symbol] = STATE(208),
    [sym_qualified_symbol] = STATE(208),
    [sym__one_form] = STATE(208),
    [sym__paren_sequence] = STATE(208),
    [sym__bracket_sequence] = STATE(208),
    [sym__curly_brace_sequence] = STATE(208),
    [aux_sym_comment_macro_repeat1] = STATE(208),
    [sym_number_long] = ACTIONS(732),
    [sym_number_double] = ACTIONS(732),
    [anon_sym_DQUOTE] = ACTIONS(365),
    [anon_sym_COLON] = ACTIONS(367),
    [anon_sym_COLON_COLON] = ACTIONS(369),
    [sym__symbol_chars] = ACTIONS(371),
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(375),
    [anon_sym_LBRACE] = ACTIONS(377),
    [anon_sym_RBRACE] = ACTIONS(734),
    [anon_sym_POUND] = ACTIONS(381),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(732),
  },
  [145] = {
    [ts_builtin_sym_end] = ACTIONS(736),
    [sym_nil] = ACTIONS(738),
    [sym_true] = ACTIONS(738),
    [sym_false] = ACTIONS(738),
    [sym_number_long] = ACTIONS(738),
    [sym_number_double] = ACTIONS(738),
    [anon_sym_BSLASH] = ACTIONS(738),
    [anon_sym_DQUOTE] = ACTIONS(738),
    [anon_sym_POUND_DQUOTE] = ACTIONS(738),
    [anon_sym_SQUOTE] = ACTIONS(738),
    [anon_sym_LPARENquote] = ACTIONS(738),
    [anon_sym_RPAREN] = ACTIONS(738),
    [anon_sym_COLON] = ACTIONS(738),
    [anon_sym_COLON_COLON] = ACTIONS(738),
    [sym__symbol_chars] = ACTIONS(738),
    [anon_sym_LPAREN] = ACTIONS(738),
    [anon_sym_LBRACK] = ACTIONS(738),
    [anon_sym_RBRACK] = ACTIONS(738),
    [anon_sym_LBRACE] = ACTIONS(738),
    [anon_sym_RBRACE] = ACTIONS(738),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(738),
    [anon_sym_POUND] = ACTIONS(738),
    [anon_sym_POUND_LBRACE] = ACTIONS(738),
    [anon_sym_SEMI] = ACTIONS(738),
    [anon_sym_POUND_BANG] = ACTIONS(738),
    [anon_sym_POUND_] = ACTIONS(738),
    [anon_sym_] = ACTIONS(736),
    [anon_sym_LPARENcomment] = ACTIONS(738),
  },
  [146] = {
    [anon_sym_LBRACE] = ACTIONS(740),
  },
  [147] = {
    [sym__number] = STATE(211),
    [sym__string] = STATE(211),
    [sym__keyword] = STATE(211),
    [sym__unqualified_keyword] = STATE(211),
    [sym_qualified_keyword] = STATE(211),
    [sym__symbol] = STATE(211),
    [sym_qualified_symbol] = STATE(211),
    [sym__one_form] = STATE(211),
    [sym__paren_sequence] = STATE(211),
    [sym__bracket_sequence] = STATE(211),
    [sym__curly_brace_sequence] = STATE(211),
    [aux_sym_comment_macro_repeat1] = STATE(211),
    [sym_number_long] = ACTIONS(742),
    [sym_number_double] = ACTIONS(742),
    [anon_sym_DQUOTE] = ACTIONS(365),
    [anon_sym_COLON] = ACTIONS(367),
    [anon_sym_COLON_COLON] = ACTIONS(369),
    [sym__symbol_chars] = ACTIONS(371),
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(375),
    [anon_sym_LBRACE] = ACTIONS(377),
    [anon_sym_RBRACE] = ACTIONS(744),
    [anon_sym_POUND] = ACTIONS(381),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(742),
  },
  [148] = {
    [sym__number] = STATE(212),
    [sym__string] = STATE(212),
    [sym__keyword] = STATE(212),
    [sym__unqualified_keyword] = STATE(212),
    [sym_qualified_keyword] = STATE(212),
    [sym__symbol] = STATE(212),
    [sym_qualified_symbol] = STATE(212),
    [sym__one_form] = STATE(212),
    [sym__paren_sequence] = STATE(212),
    [sym__bracket_sequence] = STATE(212),
    [sym__curly_brace_sequence] = STATE(212),
    [aux_sym_comment_macro_repeat1] = STATE(212),
    [sym_number_long] = ACTIONS(746),
    [sym_number_double] = ACTIONS(746),
    [anon_sym_DQUOTE] = ACTIONS(365),
    [anon_sym_COLON] = ACTIONS(367),
    [anon_sym_COLON_COLON] = ACTIONS(369),
    [sym__symbol_chars] = ACTIONS(371),
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(375),
    [anon_sym_LBRACE] = ACTIONS(377),
    [anon_sym_RBRACE] = ACTIONS(744),
    [anon_sym_POUND] = ACTIONS(381),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(746),
  },
  [149] = {
    [aux_sym_ignore_form_repeat1] = STATE(213),
    [ts_builtin_sym_end] = ACTIONS(748),
    [sym_nil] = ACTIONS(750),
    [sym_true] = ACTIONS(750),
    [sym_false] = ACTIONS(750),
    [sym_number_long] = ACTIONS(750),
    [sym_number_double] = ACTIONS(750),
    [anon_sym_BSLASH] = ACTIONS(750),
    [anon_sym_DQUOTE] = ACTIONS(750),
    [anon_sym_POUND_DQUOTE] = ACTIONS(750),
    [anon_sym_SQUOTE] = ACTIONS(750),
    [anon_sym_LPARENquote] = ACTIONS(750),
    [anon_sym_COLON] = ACTIONS(750),
    [anon_sym_COLON_COLON] = ACTIONS(750),
    [sym__symbol_chars] = ACTIONS(750),
    [anon_sym_LPAREN] = ACTIONS(750),
    [anon_sym_LBRACK] = ACTIONS(750),
    [anon_sym_LBRACE] = ACTIONS(750),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(750),
    [anon_sym_POUND] = ACTIONS(750),
    [anon_sym_POUND_LBRACE] = ACTIONS(750),
    [anon_sym_SEMI] = ACTIONS(750),
    [anon_sym_POUND_BANG] = ACTIONS(750),
    [anon_sym_POUND_] = ACTIONS(750),
    [anon_sym_] = ACTIONS(752),
    [anon_sym_LPARENcomment] = ACTIONS(750),
  },
  [150] = {
    [aux_sym_ignore_form_repeat1] = STATE(214),
    [ts_builtin_sym_end] = ACTIONS(748),
    [sym_nil] = ACTIONS(750),
    [sym_true] = ACTIONS(750),
    [sym_false] = ACTIONS(750),
    [sym_number_long] = ACTIONS(750),
    [sym_number_double] = ACTIONS(750),
    [anon_sym_BSLASH] = ACTIONS(750),
    [anon_sym_DQUOTE] = ACTIONS(750),
    [anon_sym_POUND_DQUOTE] = ACTIONS(750),
    [anon_sym_SQUOTE] = ACTIONS(750),
    [anon_sym_LPARENquote] = ACTIONS(750),
    [anon_sym_COLON] = ACTIONS(750),
    [anon_sym_COLON_COLON] = ACTIONS(750),
    [sym__symbol_chars] = ACTIONS(750),
    [anon_sym_LPAREN] = ACTIONS(750),
    [anon_sym_LBRACK] = ACTIONS(750),
    [anon_sym_LBRACE] = ACTIONS(750),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(750),
    [anon_sym_POUND] = ACTIONS(750),
    [anon_sym_POUND_LBRACE] = ACTIONS(750),
    [anon_sym_SEMI] = ACTIONS(750),
    [anon_sym_POUND_BANG] = ACTIONS(750),
    [anon_sym_POUND_] = ACTIONS(750),
    [anon_sym_] = ACTIONS(754),
    [anon_sym_LPARENcomment] = ACTIONS(750),
  },
  [151] = {
    [aux_sym_ignore_form_repeat1] = STATE(151),
    [sym_number_long] = ACTIONS(756),
    [sym_number_double] = ACTIONS(756),
    [anon_sym_DQUOTE] = ACTIONS(756),
    [anon_sym_COLON] = ACTIONS(756),
    [anon_sym_COLON_COLON] = ACTIONS(756),
    [sym__symbol_chars] = ACTIONS(756),
    [anon_sym_LPAREN] = ACTIONS(756),
    [anon_sym_LBRACK] = ACTIONS(756),
    [anon_sym_LBRACE] = ACTIONS(756),
    [anon_sym_POUND] = ACTIONS(756),
    [anon_sym_] = ACTIONS(758),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(756),
  },
  [152] = {
    [sym_number_long] = ACTIONS(229),
    [sym_number_double] = ACTIONS(229),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_RPAREN] = ACTIONS(229),
    [anon_sym_COLON] = ACTIONS(229),
    [anon_sym_COLON_COLON] = ACTIONS(229),
    [sym__symbol_chars] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_LBRACE] = ACTIONS(229),
    [anon_sym_POUND] = ACTIONS(229),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(229),
  },
  [153] = {
    [aux_sym__string_repeat1] = STATE(94),
    [anon_sym_DQUOTE] = ACTIONS(761),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(233),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(233),
  },
  [154] = {
    [sym_number_long] = ACTIONS(255),
    [sym_number_double] = ACTIONS(255),
    [anon_sym_DQUOTE] = ACTIONS(255),
    [anon_sym_RPAREN] = ACTIONS(255),
    [anon_sym_COLON] = ACTIONS(255),
    [anon_sym_COLON_COLON] = ACTIONS(255),
    [sym__symbol_chars] = ACTIONS(255),
    [anon_sym_LPAREN] = ACTIONS(255),
    [anon_sym_LBRACK] = ACTIONS(255),
    [anon_sym_LBRACE] = ACTIONS(255),
    [anon_sym_POUND] = ACTIONS(255),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(255),
  },
  [155] = {
    [sym_number_long] = ACTIONS(259),
    [sym_number_double] = ACTIONS(259),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [anon_sym_RPAREN] = ACTIONS(259),
    [anon_sym_COLON] = ACTIONS(259),
    [anon_sym_COLON_COLON] = ACTIONS(259),
    [anon_sym_SLASH] = ACTIONS(763),
    [sym__symbol_chars] = ACTIONS(259),
    [anon_sym_LPAREN] = ACTIONS(259),
    [anon_sym_LBRACK] = ACTIONS(259),
    [anon_sym_LBRACE] = ACTIONS(259),
    [anon_sym_POUND] = ACTIONS(259),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(259),
  },
  [156] = {
    [sym__symbol_chars] = ACTIONS(765),
  },
  [157] = {
    [sym_number_long] = ACTIONS(678),
    [sym_number_double] = ACTIONS(678),
    [anon_sym_DQUOTE] = ACTIONS(678),
    [anon_sym_RPAREN] = ACTIONS(678),
    [anon_sym_COLON] = ACTIONS(678),
    [anon_sym_COLON_COLON] = ACTIONS(678),
    [sym__symbol_chars] = ACTIONS(678),
    [anon_sym_LPAREN] = ACTIONS(678),
    [anon_sym_LBRACK] = ACTIONS(678),
    [anon_sym_LBRACE] = ACTIONS(678),
    [anon_sym_POUND] = ACTIONS(678),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(678),
  },
  [158] = {
    [sym__number] = STATE(165),
    [sym__string] = STATE(165),
    [sym__keyword] = STATE(165),
    [sym__unqualified_keyword] = STATE(165),
    [sym_qualified_keyword] = STATE(165),
    [sym__symbol] = STATE(165),
    [sym_qualified_symbol] = STATE(165),
    [sym__one_form] = STATE(165),
    [sym__paren_sequence] = STATE(165),
    [sym__bracket_sequence] = STATE(165),
    [sym__curly_brace_sequence] = STATE(165),
    [aux_sym_comment_macro_repeat1] = STATE(165),
    [sym_number_long] = ACTIONS(423),
    [sym_number_double] = ACTIONS(423),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(767),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_COLON_COLON] = ACTIONS(155),
    [sym__symbol_chars] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_POUND] = ACTIONS(165),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(423),
  },
  [159] = {
    [sym_number_long] = ACTIONS(702),
    [sym_number_double] = ACTIONS(702),
    [anon_sym_DQUOTE] = ACTIONS(702),
    [anon_sym_RPAREN] = ACTIONS(702),
    [anon_sym_COLON] = ACTIONS(702),
    [anon_sym_COLON_COLON] = ACTIONS(702),
    [sym__symbol_chars] = ACTIONS(702),
    [anon_sym_LPAREN] = ACTIONS(702),
    [anon_sym_LBRACK] = ACTIONS(702),
    [anon_sym_LBRACE] = ACTIONS(702),
    [anon_sym_POUND] = ACTIONS(702),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(702),
  },
  [160] = {
    [sym__number] = STATE(197),
    [sym__string] = STATE(197),
    [sym__keyword] = STATE(197),
    [sym__unqualified_keyword] = STATE(197),
    [sym_qualified_keyword] = STATE(197),
    [sym__symbol] = STATE(197),
    [sym_qualified_symbol] = STATE(197),
    [sym__one_form] = STATE(197),
    [sym__paren_sequence] = STATE(197),
    [sym__bracket_sequence] = STATE(197),
    [sym__curly_brace_sequence] = STATE(197),
    [aux_sym_comment_macro_repeat1] = STATE(197),
    [sym_number_long] = ACTIONS(710),
    [sym_number_double] = ACTIONS(710),
    [anon_sym_DQUOTE] = ACTIONS(345),
    [anon_sym_COLON] = ACTIONS(347),
    [anon_sym_COLON_COLON] = ACTIONS(349),
    [sym__symbol_chars] = ACTIONS(351),
    [anon_sym_LPAREN] = ACTIONS(353),
    [anon_sym_LBRACK] = ACTIONS(355),
    [anon_sym_RBRACK] = ACTIONS(769),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_POUND] = ACTIONS(361),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(710),
  },
  [161] = {
    [sym_number_long] = ACTIONS(738),
    [sym_number_double] = ACTIONS(738),
    [anon_sym_DQUOTE] = ACTIONS(738),
    [anon_sym_RPAREN] = ACTIONS(738),
    [anon_sym_COLON] = ACTIONS(738),
    [anon_sym_COLON_COLON] = ACTIONS(738),
    [sym__symbol_chars] = ACTIONS(738),
    [anon_sym_LPAREN] = ACTIONS(738),
    [anon_sym_LBRACK] = ACTIONS(738),
    [anon_sym_LBRACE] = ACTIONS(738),
    [anon_sym_POUND] = ACTIONS(738),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(738),
  },
  [162] = {
    [sym__number] = STATE(211),
    [sym__string] = STATE(211),
    [sym__keyword] = STATE(211),
    [sym__unqualified_keyword] = STATE(211),
    [sym_qualified_keyword] = STATE(211),
    [sym__symbol] = STATE(211),
    [sym_qualified_symbol] = STATE(211),
    [sym__one_form] = STATE(211),
    [sym__paren_sequence] = STATE(211),
    [sym__bracket_sequence] = STATE(211),
    [sym__curly_brace_sequence] = STATE(211),
    [aux_sym_comment_macro_repeat1] = STATE(211),
    [sym_number_long] = ACTIONS(742),
    [sym_number_double] = ACTIONS(742),
    [anon_sym_DQUOTE] = ACTIONS(365),
    [anon_sym_COLON] = ACTIONS(367),
    [anon_sym_COLON_COLON] = ACTIONS(369),
    [sym__symbol_chars] = ACTIONS(371),
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(375),
    [anon_sym_LBRACE] = ACTIONS(377),
    [anon_sym_RBRACE] = ACTIONS(771),
    [anon_sym_POUND] = ACTIONS(381),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(742),
  },
  [163] = {
    [sym__number] = STATE(221),
    [sym__string] = STATE(221),
    [sym__keyword] = STATE(221),
    [sym__unqualified_keyword] = STATE(221),
    [sym_qualified_keyword] = STATE(221),
    [sym__symbol] = STATE(221),
    [sym_qualified_symbol] = STATE(221),
    [sym__one_form] = STATE(221),
    [sym__paren_sequence] = STATE(221),
    [sym__bracket_sequence] = STATE(221),
    [sym__curly_brace_sequence] = STATE(221),
    [aux_sym_comment_macro_repeat1] = STATE(221),
    [sym_number_long] = ACTIONS(773),
    [sym_number_double] = ACTIONS(773),
    [anon_sym_DQUOTE] = ACTIONS(365),
    [anon_sym_COLON] = ACTIONS(367),
    [anon_sym_COLON_COLON] = ACTIONS(369),
    [sym__symbol_chars] = ACTIONS(371),
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(375),
    [anon_sym_LBRACE] = ACTIONS(377),
    [anon_sym_RBRACE] = ACTIONS(771),
    [anon_sym_POUND] = ACTIONS(381),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(773),
  },
  [164] = {
    [ts_builtin_sym_end] = ACTIONS(775),
    [sym_nil] = ACTIONS(777),
    [sym_true] = ACTIONS(777),
    [sym_false] = ACTIONS(777),
    [sym_number_long] = ACTIONS(777),
    [sym_number_double] = ACTIONS(775),
    [anon_sym_BSLASH] = ACTIONS(775),
    [anon_sym_DQUOTE] = ACTIONS(775),
    [anon_sym_POUND_DQUOTE] = ACTIONS(775),
    [anon_sym_SQUOTE] = ACTIONS(775),
    [anon_sym_LPARENquote] = ACTIONS(775),
    [anon_sym_RPAREN] = ACTIONS(775),
    [anon_sym_COLON] = ACTIONS(777),
    [anon_sym_COLON_COLON] = ACTIONS(775),
    [sym__symbol_chars] = ACTIONS(777),
    [anon_sym_LPAREN] = ACTIONS(777),
    [anon_sym_LBRACK] = ACTIONS(775),
    [anon_sym_RBRACK] = ACTIONS(775),
    [anon_sym_LBRACE] = ACTIONS(775),
    [anon_sym_RBRACE] = ACTIONS(775),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(775),
    [anon_sym_POUND] = ACTIONS(777),
    [anon_sym_POUND_LBRACE] = ACTIONS(775),
    [anon_sym_SEMI] = ACTIONS(775),
    [anon_sym_POUND_BANG] = ACTIONS(775),
    [anon_sym_POUND_] = ACTIONS(775),
    [anon_sym_LPARENcomment] = ACTIONS(775),
  },
  [165] = {
    [sym__number] = STATE(165),
    [sym__string] = STATE(165),
    [sym__keyword] = STATE(165),
    [sym__unqualified_keyword] = STATE(165),
    [sym_qualified_keyword] = STATE(165),
    [sym__symbol] = STATE(165),
    [sym_qualified_symbol] = STATE(165),
    [sym__one_form] = STATE(165),
    [sym__paren_sequence] = STATE(165),
    [sym__bracket_sequence] = STATE(165),
    [sym__curly_brace_sequence] = STATE(165),
    [aux_sym_comment_macro_repeat1] = STATE(165),
    [sym_number_long] = ACTIONS(779),
    [sym_number_double] = ACTIONS(779),
    [anon_sym_DQUOTE] = ACTIONS(782),
    [anon_sym_RPAREN] = ACTIONS(785),
    [anon_sym_COLON] = ACTIONS(787),
    [anon_sym_COLON_COLON] = ACTIONS(790),
    [sym__symbol_chars] = ACTIONS(793),
    [anon_sym_LPAREN] = ACTIONS(796),
    [anon_sym_LBRACK] = ACTIONS(799),
    [anon_sym_LBRACE] = ACTIONS(802),
    [anon_sym_POUND] = ACTIONS(805),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(779),
  },
  [166] = {
    [sym__hex_char] = ACTIONS(808),
  },
  [167] = {
    [aux_sym_ignore_form_repeat1] = STATE(223),
    [anon_sym_RPAREN] = ACTIONS(750),
    [anon_sym_] = ACTIONS(810),
  },
  [168] = {
    [aux_sym_ignore_form_repeat1] = STATE(224),
    [anon_sym_RPAREN] = ACTIONS(750),
    [anon_sym_] = ACTIONS(812),
  },
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(814),
    [sym_nil] = ACTIONS(816),
    [sym_true] = ACTIONS(816),
    [sym_false] = ACTIONS(816),
    [sym_number_long] = ACTIONS(816),
    [sym_number_double] = ACTIONS(814),
    [anon_sym_BSLASH] = ACTIONS(814),
    [anon_sym_DQUOTE] = ACTIONS(814),
    [anon_sym_POUND_DQUOTE] = ACTIONS(814),
    [anon_sym_SQUOTE] = ACTIONS(814),
    [anon_sym_LPARENquote] = ACTIONS(814),
    [anon_sym_RPAREN] = ACTIONS(814),
    [anon_sym_COLON] = ACTIONS(816),
    [anon_sym_COLON_COLON] = ACTIONS(814),
    [sym__symbol_chars] = ACTIONS(816),
    [anon_sym_LPAREN] = ACTIONS(816),
    [anon_sym_LBRACK] = ACTIONS(814),
    [anon_sym_RBRACK] = ACTIONS(814),
    [anon_sym_LBRACE] = ACTIONS(814),
    [anon_sym_RBRACE] = ACTIONS(814),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(814),
    [anon_sym_POUND] = ACTIONS(816),
    [anon_sym_POUND_LBRACE] = ACTIONS(814),
    [anon_sym_SEMI] = ACTIONS(814),
    [anon_sym_POUND_BANG] = ACTIONS(814),
    [anon_sym_POUND_] = ACTIONS(814),
    [anon_sym_LPARENcomment] = ACTIONS(814),
  },
  [170] = {
    [aux_sym_ignore_form_repeat1] = STATE(225),
    [sym_nil] = ACTIONS(750),
    [sym_true] = ACTIONS(750),
    [sym_false] = ACTIONS(750),
    [sym_number_long] = ACTIONS(750),
    [sym_number_double] = ACTIONS(750),
    [anon_sym_BSLASH] = ACTIONS(750),
    [anon_sym_DQUOTE] = ACTIONS(750),
    [anon_sym_POUND_DQUOTE] = ACTIONS(750),
    [anon_sym_SQUOTE] = ACTIONS(750),
    [anon_sym_LPARENquote] = ACTIONS(750),
    [anon_sym_RPAREN] = ACTIONS(750),
    [anon_sym_COLON] = ACTIONS(750),
    [anon_sym_COLON_COLON] = ACTIONS(750),
    [sym__symbol_chars] = ACTIONS(750),
    [anon_sym_LPAREN] = ACTIONS(750),
    [anon_sym_LBRACK] = ACTIONS(750),
    [anon_sym_LBRACE] = ACTIONS(750),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(750),
    [anon_sym_POUND] = ACTIONS(750),
    [anon_sym_POUND_LBRACE] = ACTIONS(750),
    [anon_sym_SEMI] = ACTIONS(750),
    [anon_sym_POUND_BANG] = ACTIONS(750),
    [anon_sym_POUND_] = ACTIONS(750),
    [anon_sym_] = ACTIONS(818),
    [anon_sym_LPARENcomment] = ACTIONS(750),
  },
  [171] = {
    [aux_sym_ignore_form_repeat1] = STATE(226),
    [sym_nil] = ACTIONS(750),
    [sym_true] = ACTIONS(750),
    [sym_false] = ACTIONS(750),
    [sym_number_long] = ACTIONS(750),
    [sym_number_double] = ACTIONS(750),
    [anon_sym_BSLASH] = ACTIONS(750),
    [anon_sym_DQUOTE] = ACTIONS(750),
    [anon_sym_POUND_DQUOTE] = ACTIONS(750),
    [anon_sym_SQUOTE] = ACTIONS(750),
    [anon_sym_LPARENquote] = ACTIONS(750),
    [anon_sym_RPAREN] = ACTIONS(750),
    [anon_sym_COLON] = ACTIONS(750),
    [anon_sym_COLON_COLON] = ACTIONS(750),
    [sym__symbol_chars] = ACTIONS(750),
    [anon_sym_LPAREN] = ACTIONS(750),
    [anon_sym_LBRACK] = ACTIONS(750),
    [anon_sym_LBRACE] = ACTIONS(750),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(750),
    [anon_sym_POUND] = ACTIONS(750),
    [anon_sym_POUND_LBRACE] = ACTIONS(750),
    [anon_sym_SEMI] = ACTIONS(750),
    [anon_sym_POUND_BANG] = ACTIONS(750),
    [anon_sym_POUND_] = ACTIONS(750),
    [anon_sym_] = ACTIONS(820),
    [anon_sym_LPARENcomment] = ACTIONS(750),
  },
  [172] = {
    [aux_sym_ignore_form_repeat1] = STATE(227),
    [sym_nil] = ACTIONS(750),
    [sym_true] = ACTIONS(750),
    [sym_false] = ACTIONS(750),
    [sym_number_long] = ACTIONS(750),
    [sym_number_double] = ACTIONS(750),
    [anon_sym_BSLASH] = ACTIONS(750),
    [anon_sym_DQUOTE] = ACTIONS(750),
    [anon_sym_POUND_DQUOTE] = ACTIONS(750),
    [anon_sym_SQUOTE] = ACTIONS(750),
    [anon_sym_LPARENquote] = ACTIONS(750),
    [anon_sym_COLON] = ACTIONS(750),
    [anon_sym_COLON_COLON] = ACTIONS(750),
    [sym__symbol_chars] = ACTIONS(750),
    [anon_sym_LPAREN] = ACTIONS(750),
    [anon_sym_LBRACK] = ACTIONS(750),
    [anon_sym_RBRACK] = ACTIONS(750),
    [anon_sym_LBRACE] = ACTIONS(750),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(750),
    [anon_sym_POUND] = ACTIONS(750),
    [anon_sym_POUND_LBRACE] = ACTIONS(750),
    [anon_sym_SEMI] = ACTIONS(750),
    [anon_sym_POUND_BANG] = ACTIONS(750),
    [anon_sym_POUND_] = ACTIONS(750),
    [anon_sym_] = ACTIONS(822),
    [anon_sym_LPARENcomment] = ACTIONS(750),
  },
  [173] = {
    [aux_sym_ignore_form_repeat1] = STATE(228),
    [sym_nil] = ACTIONS(750),
    [sym_true] = ACTIONS(750),
    [sym_false] = ACTIONS(750),
    [sym_number_long] = ACTIONS(750),
    [sym_number_double] = ACTIONS(750),
    [anon_sym_BSLASH] = ACTIONS(750),
    [anon_sym_DQUOTE] = ACTIONS(750),
    [anon_sym_POUND_DQUOTE] = ACTIONS(750),
    [anon_sym_SQUOTE] = ACTIONS(750),
    [anon_sym_LPARENquote] = ACTIONS(750),
    [anon_sym_COLON] = ACTIONS(750),
    [anon_sym_COLON_COLON] = ACTIONS(750),
    [sym__symbol_chars] = ACTIONS(750),
    [anon_sym_LPAREN] = ACTIONS(750),
    [anon_sym_LBRACK] = ACTIONS(750),
    [anon_sym_RBRACK] = ACTIONS(750),
    [anon_sym_LBRACE] = ACTIONS(750),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(750),
    [anon_sym_POUND] = ACTIONS(750),
    [anon_sym_POUND_LBRACE] = ACTIONS(750),
    [anon_sym_SEMI] = ACTIONS(750),
    [anon_sym_POUND_BANG] = ACTIONS(750),
    [anon_sym_POUND_] = ACTIONS(750),
    [anon_sym_] = ACTIONS(824),
    [anon_sym_LPARENcomment] = ACTIONS(750),
  },
  [174] = {
    [aux_sym_ignore_form_repeat1] = STATE(229),
    [sym_nil] = ACTIONS(750),
    [sym_true] = ACTIONS(750),
    [sym_false] = ACTIONS(750),
    [sym_number_long] = ACTIONS(750),
    [sym_number_double] = ACTIONS(750),
    [anon_sym_BSLASH] = ACTIONS(750),
    [anon_sym_DQUOTE] = ACTIONS(750),
    [anon_sym_POUND_DQUOTE] = ACTIONS(750),
    [anon_sym_SQUOTE] = ACTIONS(750),
    [anon_sym_LPARENquote] = ACTIONS(750),
    [anon_sym_COLON] = ACTIONS(750),
    [anon_sym_COLON_COLON] = ACTIONS(750),
    [sym__symbol_chars] = ACTIONS(750),
    [anon_sym_LPAREN] = ACTIONS(750),
    [anon_sym_LBRACK] = ACTIONS(750),
    [anon_sym_LBRACE] = ACTIONS(750),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(750),
    [anon_sym_POUND] = ACTIONS(750),
    [anon_sym_POUND_LBRACE] = ACTIONS(750),
    [anon_sym_SEMI] = ACTIONS(750),
    [anon_sym_POUND_BANG] = ACTIONS(750),
    [anon_sym_POUND_] = ACTIONS(750),
    [anon_sym_] = ACTIONS(826),
    [anon_sym_LPARENcomment] = ACTIONS(750),
  },
  [175] = {
    [aux_sym_ignore_form_repeat1] = STATE(230),
    [sym_nil] = ACTIONS(750),
    [sym_true] = ACTIONS(750),
    [sym_false] = ACTIONS(750),
    [sym_number_long] = ACTIONS(750),
    [sym_number_double] = ACTIONS(750),
    [anon_sym_BSLASH] = ACTIONS(750),
    [anon_sym_DQUOTE] = ACTIONS(750),
    [anon_sym_POUND_DQUOTE] = ACTIONS(750),
    [anon_sym_SQUOTE] = ACTIONS(750),
    [anon_sym_LPARENquote] = ACTIONS(750),
    [anon_sym_COLON] = ACTIONS(750),
    [anon_sym_COLON_COLON] = ACTIONS(750),
    [sym__symbol_chars] = ACTIONS(750),
    [anon_sym_LPAREN] = ACTIONS(750),
    [anon_sym_LBRACK] = ACTIONS(750),
    [anon_sym_LBRACE] = ACTIONS(750),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(750),
    [anon_sym_POUND] = ACTIONS(750),
    [anon_sym_POUND_LBRACE] = ACTIONS(750),
    [anon_sym_SEMI] = ACTIONS(750),
    [anon_sym_POUND_BANG] = ACTIONS(750),
    [anon_sym_POUND_] = ACTIONS(750),
    [anon_sym_] = ACTIONS(828),
    [anon_sym_LPARENcomment] = ACTIONS(750),
  },
  [176] = {
    [ts_builtin_sym_end] = ACTIONS(830),
    [sym_nil] = ACTIONS(832),
    [sym_true] = ACTIONS(832),
    [sym_false] = ACTIONS(832),
    [sym_number_long] = ACTIONS(832),
    [sym_number_double] = ACTIONS(830),
    [anon_sym_BSLASH] = ACTIONS(830),
    [anon_sym_DQUOTE] = ACTIONS(830),
    [anon_sym_POUND_DQUOTE] = ACTIONS(830),
    [anon_sym_SQUOTE] = ACTIONS(830),
    [anon_sym_LPARENquote] = ACTIONS(830),
    [anon_sym_RPAREN] = ACTIONS(830),
    [anon_sym_COLON] = ACTIONS(832),
    [anon_sym_COLON_COLON] = ACTIONS(830),
    [sym__symbol_chars] = ACTIONS(832),
    [anon_sym_LPAREN] = ACTIONS(832),
    [anon_sym_LBRACK] = ACTIONS(830),
    [anon_sym_RBRACK] = ACTIONS(830),
    [anon_sym_LBRACE] = ACTIONS(830),
    [anon_sym_RBRACE] = ACTIONS(830),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(830),
    [anon_sym_POUND] = ACTIONS(832),
    [anon_sym_POUND_LBRACE] = ACTIONS(830),
    [anon_sym_SEMI] = ACTIONS(830),
    [anon_sym_POUND_BANG] = ACTIONS(830),
    [anon_sym_POUND_] = ACTIONS(830),
    [anon_sym_LPARENcomment] = ACTIONS(830),
  },
  [177] = {
    [sym__anything] = STATE(59),
    [sym__literal] = STATE(59),
    [sym__collection_literal] = STATE(59),
    [sym_boolean] = STATE(59),
    [sym_number] = STATE(59),
    [sym__number] = STATE(22),
    [sym_character] = STATE(59),
    [sym__character] = STATE(23),
    [sym_string] = STATE(59),
    [sym__string] = STATE(24),
    [sym_regex] = STATE(59),
    [sym__regex] = STATE(25),
    [sym_quote] = STATE(59),
    [sym_keyword] = STATE(59),
    [sym__keyword] = STATE(26),
    [sym__unqualified_keyword] = STATE(26),
    [sym_qualified_keyword] = STATE(26),
    [sym_symbol] = STATE(59),
    [sym__symbol] = STATE(27),
    [sym_qualified_symbol] = STATE(27),
    [sym_list] = STATE(59),
    [sym__list] = STATE(28),
    [sym_vector] = STATE(59),
    [sym__vector] = STATE(29),
    [sym_hash_map] = STATE(59),
    [sym__hash_map] = STATE(30),
    [sym_namespace_map] = STATE(30),
    [sym__hash_map_kv_pair] = STATE(114),
    [sym__hash_map_key] = STATE(59),
    [sym_set] = STATE(59),
    [sym__set] = STATE(31),
    [sym_comment] = STATE(59),
    [sym_semicolon] = STATE(32),
    [sym_shebang_line] = STATE(32),
    [sym_ignore_form] = STATE(32),
    [sym_comment_macro] = STATE(32),
    [aux_sym__hash_map_repeat1] = STATE(114),
    [sym_nil] = ACTIONS(103),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [sym__symbol_chars] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(834),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(45),
    [anon_sym_POUND_] = ACTIONS(109),
    [anon_sym_LPARENcomment] = ACTIONS(49),
  },
  [178] = {
    [aux_sym_ignore_form_repeat1] = STATE(232),
    [sym_nil] = ACTIONS(750),
    [sym_true] = ACTIONS(750),
    [sym_false] = ACTIONS(750),
    [sym_number_long] = ACTIONS(750),
    [sym_number_double] = ACTIONS(750),
    [anon_sym_BSLASH] = ACTIONS(750),
    [anon_sym_DQUOTE] = ACTIONS(750),
    [anon_sym_POUND_DQUOTE] = ACTIONS(750),
    [anon_sym_SQUOTE] = ACTIONS(750),
    [anon_sym_LPARENquote] = ACTIONS(750),
    [anon_sym_COLON] = ACTIONS(750),
    [anon_sym_COLON_COLON] = ACTIONS(750),
    [sym__symbol_chars] = ACTIONS(750),
    [anon_sym_LPAREN] = ACTIONS(750),
    [anon_sym_LBRACK] = ACTIONS(750),
    [anon_sym_LBRACE] = ACTIONS(750),
    [anon_sym_RBRACE] = ACTIONS(750),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(750),
    [anon_sym_POUND] = ACTIONS(750),
    [anon_sym_POUND_LBRACE] = ACTIONS(750),
    [anon_sym_SEMI] = ACTIONS(750),
    [anon_sym_POUND_BANG] = ACTIONS(750),
    [anon_sym_POUND_] = ACTIONS(750),
    [anon_sym_] = ACTIONS(836),
    [anon_sym_LPARENcomment] = ACTIONS(750),
  },
  [179] = {
    [aux_sym_ignore_form_repeat1] = STATE(233),
    [sym_nil] = ACTIONS(750),
    [sym_true] = ACTIONS(750),
    [sym_false] = ACTIONS(750),
    [sym_number_long] = ACTIONS(750),
    [sym_number_double] = ACTIONS(750),
    [anon_sym_BSLASH] = ACTIONS(750),
    [anon_sym_DQUOTE] = ACTIONS(750),
    [anon_sym_POUND_DQUOTE] = ACTIONS(750),
    [anon_sym_SQUOTE] = ACTIONS(750),
    [anon_sym_LPARENquote] = ACTIONS(750),
    [anon_sym_COLON] = ACTIONS(750),
    [anon_sym_COLON_COLON] = ACTIONS(750),
    [sym__symbol_chars] = ACTIONS(750),
    [anon_sym_LPAREN] = ACTIONS(750),
    [anon_sym_LBRACK] = ACTIONS(750),
    [anon_sym_LBRACE] = ACTIONS(750),
    [anon_sym_RBRACE] = ACTIONS(750),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(750),
    [anon_sym_POUND] = ACTIONS(750),
    [anon_sym_POUND_LBRACE] = ACTIONS(750),
    [anon_sym_SEMI] = ACTIONS(750),
    [anon_sym_POUND_BANG] = ACTIONS(750),
    [anon_sym_POUND_] = ACTIONS(750),
    [anon_sym_] = ACTIONS(838),
    [anon_sym_LPARENcomment] = ACTIONS(750),
  },
  [180] = {
    [ts_builtin_sym_end] = ACTIONS(501),
    [sym_nil] = ACTIONS(503),
    [sym_true] = ACTIONS(503),
    [sym_false] = ACTIONS(503),
    [sym_number_long] = ACTIONS(503),
    [sym_number_double] = ACTIONS(503),
    [anon_sym_BSLASH] = ACTIONS(503),
    [anon_sym_DQUOTE] = ACTIONS(503),
    [anon_sym_POUND_DQUOTE] = ACTIONS(503),
    [anon_sym_SQUOTE] = ACTIONS(503),
    [anon_sym_LPARENquote] = ACTIONS(503),
    [anon_sym_RPAREN] = ACTIONS(503),
    [anon_sym_COLON] = ACTIONS(503),
    [anon_sym_COLON_COLON] = ACTIONS(503),
    [sym__symbol_chars] = ACTIONS(503),
    [anon_sym_LPAREN] = ACTIONS(503),
    [anon_sym_LBRACK] = ACTIONS(503),
    [anon_sym_RBRACK] = ACTIONS(503),
    [anon_sym_LBRACE] = ACTIONS(503),
    [anon_sym_RBRACE] = ACTIONS(503),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(503),
    [anon_sym_POUND] = ACTIONS(503),
    [anon_sym_POUND_LBRACE] = ACTIONS(503),
    [anon_sym_SEMI] = ACTIONS(503),
    [anon_sym_POUND_BANG] = ACTIONS(503),
    [anon_sym_POUND_] = ACTIONS(503),
    [anon_sym_] = ACTIONS(501),
    [anon_sym_LPARENcomment] = ACTIONS(503),
  },
  [181] = {
    [sym__keyword_chars] = ACTIONS(840),
  },
  [182] = {
    [ts_builtin_sym_end] = ACTIONS(529),
    [sym_nil] = ACTIONS(531),
    [sym_true] = ACTIONS(531),
    [sym_false] = ACTIONS(531),
    [sym_number_long] = ACTIONS(531),
    [sym_number_double] = ACTIONS(531),
    [anon_sym_BSLASH] = ACTIONS(531),
    [anon_sym_DQUOTE] = ACTIONS(531),
    [anon_sym_POUND_DQUOTE] = ACTIONS(531),
    [anon_sym_SQUOTE] = ACTIONS(531),
    [anon_sym_LPARENquote] = ACTIONS(531),
    [anon_sym_RPAREN] = ACTIONS(531),
    [anon_sym_COLON] = ACTIONS(531),
    [anon_sym_COLON_COLON] = ACTIONS(531),
    [sym__symbol_chars] = ACTIONS(531),
    [anon_sym_LPAREN] = ACTIONS(531),
    [anon_sym_LBRACK] = ACTIONS(531),
    [anon_sym_RBRACK] = ACTIONS(531),
    [anon_sym_LBRACE] = ACTIONS(531),
    [anon_sym_RBRACE] = ACTIONS(531),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(531),
    [anon_sym_POUND] = ACTIONS(531),
    [anon_sym_POUND_LBRACE] = ACTIONS(531),
    [anon_sym_SEMI] = ACTIONS(531),
    [anon_sym_POUND_BANG] = ACTIONS(531),
    [anon_sym_POUND_] = ACTIONS(531),
    [anon_sym_] = ACTIONS(529),
    [anon_sym_LPARENcomment] = ACTIONS(531),
  },
  [183] = {
    [ts_builtin_sym_end] = ACTIONS(842),
    [sym_nil] = ACTIONS(844),
    [sym_true] = ACTIONS(844),
    [sym_false] = ACTIONS(844),
    [sym_number_long] = ACTIONS(844),
    [sym_number_double] = ACTIONS(844),
    [anon_sym_BSLASH] = ACTIONS(844),
    [anon_sym_DQUOTE] = ACTIONS(844),
    [anon_sym_POUND_DQUOTE] = ACTIONS(844),
    [anon_sym_SQUOTE] = ACTIONS(844),
    [anon_sym_LPARENquote] = ACTIONS(844),
    [anon_sym_RPAREN] = ACTIONS(844),
    [anon_sym_COLON] = ACTIONS(844),
    [anon_sym_COLON_COLON] = ACTIONS(844),
    [sym__symbol_chars] = ACTIONS(844),
    [anon_sym_LPAREN] = ACTIONS(844),
    [anon_sym_LBRACK] = ACTIONS(844),
    [anon_sym_RBRACK] = ACTIONS(844),
    [anon_sym_LBRACE] = ACTIONS(844),
    [anon_sym_RBRACE] = ACTIONS(844),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(844),
    [anon_sym_POUND] = ACTIONS(844),
    [anon_sym_POUND_LBRACE] = ACTIONS(844),
    [anon_sym_SEMI] = ACTIONS(844),
    [anon_sym_POUND_BANG] = ACTIONS(844),
    [anon_sym_POUND_] = ACTIONS(844),
    [anon_sym_] = ACTIONS(842),
    [anon_sym_LPARENcomment] = ACTIONS(844),
  },
  [184] = {
    [sym_number_long] = ACTIONS(229),
    [sym_number_double] = ACTIONS(229),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_COLON] = ACTIONS(229),
    [anon_sym_COLON_COLON] = ACTIONS(229),
    [sym__symbol_chars] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_RBRACK] = ACTIONS(229),
    [anon_sym_LBRACE] = ACTIONS(229),
    [anon_sym_POUND] = ACTIONS(229),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(229),
  },
  [185] = {
    [aux_sym__string_repeat1] = STATE(94),
    [anon_sym_DQUOTE] = ACTIONS(846),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(233),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(233),
  },
  [186] = {
    [sym_number_long] = ACTIONS(255),
    [sym_number_double] = ACTIONS(255),
    [anon_sym_DQUOTE] = ACTIONS(255),
    [anon_sym_COLON] = ACTIONS(255),
    [anon_sym_COLON_COLON] = ACTIONS(255),
    [sym__symbol_chars] = ACTIONS(255),
    [anon_sym_LPAREN] = ACTIONS(255),
    [anon_sym_LBRACK] = ACTIONS(255),
    [anon_sym_RBRACK] = ACTIONS(255),
    [anon_sym_LBRACE] = ACTIONS(255),
    [anon_sym_POUND] = ACTIONS(255),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(255),
  },
  [187] = {
    [sym_number_long] = ACTIONS(259),
    [sym_number_double] = ACTIONS(259),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [anon_sym_COLON] = ACTIONS(259),
    [anon_sym_COLON_COLON] = ACTIONS(259),
    [anon_sym_SLASH] = ACTIONS(848),
    [sym__symbol_chars] = ACTIONS(259),
    [anon_sym_LPAREN] = ACTIONS(259),
    [anon_sym_LBRACK] = ACTIONS(259),
    [anon_sym_RBRACK] = ACTIONS(259),
    [anon_sym_LBRACE] = ACTIONS(259),
    [anon_sym_POUND] = ACTIONS(259),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(259),
  },
  [188] = {
    [sym__symbol_chars] = ACTIONS(850),
  },
  [189] = {
    [sym_number_long] = ACTIONS(678),
    [sym_number_double] = ACTIONS(678),
    [anon_sym_DQUOTE] = ACTIONS(678),
    [anon_sym_COLON] = ACTIONS(678),
    [anon_sym_COLON_COLON] = ACTIONS(678),
    [sym__symbol_chars] = ACTIONS(678),
    [anon_sym_LPAREN] = ACTIONS(678),
    [anon_sym_LBRACK] = ACTIONS(678),
    [anon_sym_RBRACK] = ACTIONS(678),
    [anon_sym_LBRACE] = ACTIONS(678),
    [anon_sym_POUND] = ACTIONS(678),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(678),
  },
  [190] = {
    [sym__number] = STATE(165),
    [sym__string] = STATE(165),
    [sym__keyword] = STATE(165),
    [sym__unqualified_keyword] = STATE(165),
    [sym_qualified_keyword] = STATE(165),
    [sym__symbol] = STATE(165),
    [sym_qualified_symbol] = STATE(165),
    [sym__one_form] = STATE(165),
    [sym__paren_sequence] = STATE(165),
    [sym__bracket_sequence] = STATE(165),
    [sym__curly_brace_sequence] = STATE(165),
    [aux_sym_comment_macro_repeat1] = STATE(165),
    [sym_number_long] = ACTIONS(423),
    [sym_number_double] = ACTIONS(423),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(852),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_COLON_COLON] = ACTIONS(155),
    [sym__symbol_chars] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_POUND] = ACTIONS(165),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(423),
  },
  [191] = {
    [sym_number_long] = ACTIONS(702),
    [sym_number_double] = ACTIONS(702),
    [anon_sym_DQUOTE] = ACTIONS(702),
    [anon_sym_COLON] = ACTIONS(702),
    [anon_sym_COLON_COLON] = ACTIONS(702),
    [sym__symbol_chars] = ACTIONS(702),
    [anon_sym_LPAREN] = ACTIONS(702),
    [anon_sym_LBRACK] = ACTIONS(702),
    [anon_sym_RBRACK] = ACTIONS(702),
    [anon_sym_LBRACE] = ACTIONS(702),
    [anon_sym_POUND] = ACTIONS(702),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(702),
  },
  [192] = {
    [sym__number] = STATE(197),
    [sym__string] = STATE(197),
    [sym__keyword] = STATE(197),
    [sym__unqualified_keyword] = STATE(197),
    [sym_qualified_keyword] = STATE(197),
    [sym__symbol] = STATE(197),
    [sym_qualified_symbol] = STATE(197),
    [sym__one_form] = STATE(197),
    [sym__paren_sequence] = STATE(197),
    [sym__bracket_sequence] = STATE(197),
    [sym__curly_brace_sequence] = STATE(197),
    [aux_sym_comment_macro_repeat1] = STATE(197),
    [sym_number_long] = ACTIONS(710),
    [sym_number_double] = ACTIONS(710),
    [anon_sym_DQUOTE] = ACTIONS(345),
    [anon_sym_COLON] = ACTIONS(347),
    [anon_sym_COLON_COLON] = ACTIONS(349),
    [sym__symbol_chars] = ACTIONS(351),
    [anon_sym_LPAREN] = ACTIONS(353),
    [anon_sym_LBRACK] = ACTIONS(355),
    [anon_sym_RBRACK] = ACTIONS(854),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_POUND] = ACTIONS(361),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(710),
  },
  [193] = {
    [sym_number_long] = ACTIONS(738),
    [sym_number_double] = ACTIONS(738),
    [anon_sym_DQUOTE] = ACTIONS(738),
    [anon_sym_COLON] = ACTIONS(738),
    [anon_sym_COLON_COLON] = ACTIONS(738),
    [sym__symbol_chars] = ACTIONS(738),
    [anon_sym_LPAREN] = ACTIONS(738),
    [anon_sym_LBRACK] = ACTIONS(738),
    [anon_sym_RBRACK] = ACTIONS(738),
    [anon_sym_LBRACE] = ACTIONS(738),
    [anon_sym_POUND] = ACTIONS(738),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(738),
  },
  [194] = {
    [sym__number] = STATE(211),
    [sym__string] = STATE(211),
    [sym__keyword] = STATE(211),
    [sym__unqualified_keyword] = STATE(211),
    [sym_qualified_keyword] = STATE(211),
    [sym__symbol] = STATE(211),
    [sym_qualified_symbol] = STATE(211),
    [sym__one_form] = STATE(211),
    [sym__paren_sequence] = STATE(211),
    [sym__bracket_sequence] = STATE(211),
    [sym__curly_brace_sequence] = STATE(211),
    [aux_sym_comment_macro_repeat1] = STATE(211),
    [sym_number_long] = ACTIONS(742),
    [sym_number_double] = ACTIONS(742),
    [anon_sym_DQUOTE] = ACTIONS(365),
    [anon_sym_COLON] = ACTIONS(367),
    [anon_sym_COLON_COLON] = ACTIONS(369),
    [sym__symbol_chars] = ACTIONS(371),
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(375),
    [anon_sym_LBRACE] = ACTIONS(377),
    [anon_sym_RBRACE] = ACTIONS(856),
    [anon_sym_POUND] = ACTIONS(381),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(742),
  },
  [195] = {
    [sym__number] = STATE(241),
    [sym__string] = STATE(241),
    [sym__keyword] = STATE(241),
    [sym__unqualified_keyword] = STATE(241),
    [sym_qualified_keyword] = STATE(241),
    [sym__symbol] = STATE(241),
    [sym_qualified_symbol] = STATE(241),
    [sym__one_form] = STATE(241),
    [sym__paren_sequence] = STATE(241),
    [sym__bracket_sequence] = STATE(241),
    [sym__curly_brace_sequence] = STATE(241),
    [aux_sym_comment_macro_repeat1] = STATE(241),
    [sym_number_long] = ACTIONS(858),
    [sym_number_double] = ACTIONS(858),
    [anon_sym_DQUOTE] = ACTIONS(365),
    [anon_sym_COLON] = ACTIONS(367),
    [anon_sym_COLON_COLON] = ACTIONS(369),
    [sym__symbol_chars] = ACTIONS(371),
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(375),
    [anon_sym_LBRACE] = ACTIONS(377),
    [anon_sym_RBRACE] = ACTIONS(856),
    [anon_sym_POUND] = ACTIONS(381),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(858),
  },
  [196] = {
    [ts_builtin_sym_end] = ACTIONS(860),
    [sym_nil] = ACTIONS(862),
    [sym_true] = ACTIONS(862),
    [sym_false] = ACTIONS(862),
    [sym_number_long] = ACTIONS(862),
    [sym_number_double] = ACTIONS(862),
    [anon_sym_BSLASH] = ACTIONS(862),
    [anon_sym_DQUOTE] = ACTIONS(862),
    [anon_sym_POUND_DQUOTE] = ACTIONS(862),
    [anon_sym_SQUOTE] = ACTIONS(862),
    [anon_sym_LPARENquote] = ACTIONS(862),
    [anon_sym_RPAREN] = ACTIONS(862),
    [anon_sym_COLON] = ACTIONS(862),
    [anon_sym_COLON_COLON] = ACTIONS(862),
    [sym__symbol_chars] = ACTIONS(862),
    [anon_sym_LPAREN] = ACTIONS(862),
    [anon_sym_LBRACK] = ACTIONS(862),
    [anon_sym_RBRACK] = ACTIONS(862),
    [anon_sym_LBRACE] = ACTIONS(862),
    [anon_sym_RBRACE] = ACTIONS(862),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(862),
    [anon_sym_POUND] = ACTIONS(862),
    [anon_sym_POUND_LBRACE] = ACTIONS(862),
    [anon_sym_SEMI] = ACTIONS(862),
    [anon_sym_POUND_BANG] = ACTIONS(862),
    [anon_sym_POUND_] = ACTIONS(862),
    [anon_sym_] = ACTIONS(860),
    [anon_sym_LPARENcomment] = ACTIONS(862),
  },
  [197] = {
    [sym__number] = STATE(197),
    [sym__string] = STATE(197),
    [sym__keyword] = STATE(197),
    [sym__unqualified_keyword] = STATE(197),
    [sym_qualified_keyword] = STATE(197),
    [sym__symbol] = STATE(197),
    [sym_qualified_symbol] = STATE(197),
    [sym__one_form] = STATE(197),
    [sym__paren_sequence] = STATE(197),
    [sym__bracket_sequence] = STATE(197),
    [sym__curly_brace_sequence] = STATE(197),
    [aux_sym_comment_macro_repeat1] = STATE(197),
    [sym_number_long] = ACTIONS(864),
    [sym_number_double] = ACTIONS(864),
    [anon_sym_DQUOTE] = ACTIONS(867),
    [anon_sym_COLON] = ACTIONS(870),
    [anon_sym_COLON_COLON] = ACTIONS(873),
    [sym__symbol_chars] = ACTIONS(876),
    [anon_sym_LPAREN] = ACTIONS(879),
    [anon_sym_LBRACK] = ACTIONS(882),
    [anon_sym_RBRACK] = ACTIONS(785),
    [anon_sym_LBRACE] = ACTIONS(885),
    [anon_sym_POUND] = ACTIONS(888),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(864),
  },
  [198] = {
    [sym_number_long] = ACTIONS(229),
    [sym_number_double] = ACTIONS(229),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_COLON] = ACTIONS(229),
    [anon_sym_COLON_COLON] = ACTIONS(229),
    [sym__symbol_chars] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_LBRACE] = ACTIONS(229),
    [anon_sym_RBRACE] = ACTIONS(229),
    [anon_sym_POUND] = ACTIONS(229),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(229),
  },
  [199] = {
    [aux_sym__string_repeat1] = STATE(94),
    [anon_sym_DQUOTE] = ACTIONS(891),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(233),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(233),
  },
  [200] = {
    [sym_number_long] = ACTIONS(255),
    [sym_number_double] = ACTIONS(255),
    [anon_sym_DQUOTE] = ACTIONS(255),
    [anon_sym_COLON] = ACTIONS(255),
    [anon_sym_COLON_COLON] = ACTIONS(255),
    [sym__symbol_chars] = ACTIONS(255),
    [anon_sym_LPAREN] = ACTIONS(255),
    [anon_sym_LBRACK] = ACTIONS(255),
    [anon_sym_LBRACE] = ACTIONS(255),
    [anon_sym_RBRACE] = ACTIONS(255),
    [anon_sym_POUND] = ACTIONS(255),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(255),
  },
  [201] = {
    [sym_number_long] = ACTIONS(259),
    [sym_number_double] = ACTIONS(259),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [anon_sym_COLON] = ACTIONS(259),
    [anon_sym_COLON_COLON] = ACTIONS(259),
    [anon_sym_SLASH] = ACTIONS(893),
    [sym__symbol_chars] = ACTIONS(259),
    [anon_sym_LPAREN] = ACTIONS(259),
    [anon_sym_LBRACK] = ACTIONS(259),
    [anon_sym_LBRACE] = ACTIONS(259),
    [anon_sym_RBRACE] = ACTIONS(259),
    [anon_sym_POUND] = ACTIONS(259),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(259),
  },
  [202] = {
    [sym__symbol_chars] = ACTIONS(895),
  },
  [203] = {
    [sym_number_long] = ACTIONS(678),
    [sym_number_double] = ACTIONS(678),
    [anon_sym_DQUOTE] = ACTIONS(678),
    [anon_sym_COLON] = ACTIONS(678),
    [anon_sym_COLON_COLON] = ACTIONS(678),
    [sym__symbol_chars] = ACTIONS(678),
    [anon_sym_LPAREN] = ACTIONS(678),
    [anon_sym_LBRACK] = ACTIONS(678),
    [anon_sym_LBRACE] = ACTIONS(678),
    [anon_sym_RBRACE] = ACTIONS(678),
    [anon_sym_POUND] = ACTIONS(678),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(678),
  },
  [204] = {
    [sym__number] = STATE(165),
    [sym__string] = STATE(165),
    [sym__keyword] = STATE(165),
    [sym__unqualified_keyword] = STATE(165),
    [sym_qualified_keyword] = STATE(165),
    [sym__symbol] = STATE(165),
    [sym_qualified_symbol] = STATE(165),
    [sym__one_form] = STATE(165),
    [sym__paren_sequence] = STATE(165),
    [sym__bracket_sequence] = STATE(165),
    [sym__curly_brace_sequence] = STATE(165),
    [aux_sym_comment_macro_repeat1] = STATE(165),
    [sym_number_long] = ACTIONS(423),
    [sym_number_double] = ACTIONS(423),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(897),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_COLON_COLON] = ACTIONS(155),
    [sym__symbol_chars] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_POUND] = ACTIONS(165),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(423),
  },
  [205] = {
    [sym_number_long] = ACTIONS(702),
    [sym_number_double] = ACTIONS(702),
    [anon_sym_DQUOTE] = ACTIONS(702),
    [anon_sym_COLON] = ACTIONS(702),
    [anon_sym_COLON_COLON] = ACTIONS(702),
    [sym__symbol_chars] = ACTIONS(702),
    [anon_sym_LPAREN] = ACTIONS(702),
    [anon_sym_LBRACK] = ACTIONS(702),
    [anon_sym_LBRACE] = ACTIONS(702),
    [anon_sym_RBRACE] = ACTIONS(702),
    [anon_sym_POUND] = ACTIONS(702),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(702),
  },
  [206] = {
    [sym__number] = STATE(197),
    [sym__string] = STATE(197),
    [sym__keyword] = STATE(197),
    [sym__unqualified_keyword] = STATE(197),
    [sym_qualified_keyword] = STATE(197),
    [sym__symbol] = STATE(197),
    [sym_qualified_symbol] = STATE(197),
    [sym__one_form] = STATE(197),
    [sym__paren_sequence] = STATE(197),
    [sym__bracket_sequence] = STATE(197),
    [sym__curly_brace_sequence] = STATE(197),
    [aux_sym_comment_macro_repeat1] = STATE(197),
    [sym_number_long] = ACTIONS(710),
    [sym_number_double] = ACTIONS(710),
    [anon_sym_DQUOTE] = ACTIONS(345),
    [anon_sym_COLON] = ACTIONS(347),
    [anon_sym_COLON_COLON] = ACTIONS(349),
    [sym__symbol_chars] = ACTIONS(351),
    [anon_sym_LPAREN] = ACTIONS(353),
    [anon_sym_LBRACK] = ACTIONS(355),
    [anon_sym_RBRACK] = ACTIONS(899),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_POUND] = ACTIONS(361),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(710),
  },
  [207] = {
    [sym_number_long] = ACTIONS(738),
    [sym_number_double] = ACTIONS(738),
    [anon_sym_DQUOTE] = ACTIONS(738),
    [anon_sym_COLON] = ACTIONS(738),
    [anon_sym_COLON_COLON] = ACTIONS(738),
    [sym__symbol_chars] = ACTIONS(738),
    [anon_sym_LPAREN] = ACTIONS(738),
    [anon_sym_LBRACK] = ACTIONS(738),
    [anon_sym_LBRACE] = ACTIONS(738),
    [anon_sym_RBRACE] = ACTIONS(738),
    [anon_sym_POUND] = ACTIONS(738),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(738),
  },
  [208] = {
    [sym__number] = STATE(211),
    [sym__string] = STATE(211),
    [sym__keyword] = STATE(211),
    [sym__unqualified_keyword] = STATE(211),
    [sym_qualified_keyword] = STATE(211),
    [sym__symbol] = STATE(211),
    [sym_qualified_symbol] = STATE(211),
    [sym__one_form] = STATE(211),
    [sym__paren_sequence] = STATE(211),
    [sym__bracket_sequence] = STATE(211),
    [sym__curly_brace_sequence] = STATE(211),
    [aux_sym_comment_macro_repeat1] = STATE(211),
    [sym_number_long] = ACTIONS(742),
    [sym_number_double] = ACTIONS(742),
    [anon_sym_DQUOTE] = ACTIONS(365),
    [anon_sym_COLON] = ACTIONS(367),
    [anon_sym_COLON_COLON] = ACTIONS(369),
    [sym__symbol_chars] = ACTIONS(371),
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(375),
    [anon_sym_LBRACE] = ACTIONS(377),
    [anon_sym_RBRACE] = ACTIONS(901),
    [anon_sym_POUND] = ACTIONS(381),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(742),
  },
  [209] = {
    [sym__number] = STATE(248),
    [sym__string] = STATE(248),
    [sym__keyword] = STATE(248),
    [sym__unqualified_keyword] = STATE(248),
    [sym_qualified_keyword] = STATE(248),
    [sym__symbol] = STATE(248),
    [sym_qualified_symbol] = STATE(248),
    [sym__one_form] = STATE(248),
    [sym__paren_sequence] = STATE(248),
    [sym__bracket_sequence] = STATE(248),
    [sym__curly_brace_sequence] = STATE(248),
    [aux_sym_comment_macro_repeat1] = STATE(248),
    [sym_number_long] = ACTIONS(903),
    [sym_number_double] = ACTIONS(903),
    [anon_sym_DQUOTE] = ACTIONS(365),
    [anon_sym_COLON] = ACTIONS(367),
    [anon_sym_COLON_COLON] = ACTIONS(369),
    [sym__symbol_chars] = ACTIONS(371),
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(375),
    [anon_sym_LBRACE] = ACTIONS(377),
    [anon_sym_RBRACE] = ACTIONS(901),
    [anon_sym_POUND] = ACTIONS(381),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(903),
  },
  [210] = {
    [ts_builtin_sym_end] = ACTIONS(905),
    [sym_nil] = ACTIONS(907),
    [sym_true] = ACTIONS(907),
    [sym_false] = ACTIONS(907),
    [sym_number_long] = ACTIONS(907),
    [sym_number_double] = ACTIONS(907),
    [anon_sym_BSLASH] = ACTIONS(907),
    [anon_sym_DQUOTE] = ACTIONS(907),
    [anon_sym_POUND_DQUOTE] = ACTIONS(907),
    [anon_sym_SQUOTE] = ACTIONS(907),
    [anon_sym_LPARENquote] = ACTIONS(907),
    [anon_sym_RPAREN] = ACTIONS(907),
    [anon_sym_COLON] = ACTIONS(907),
    [anon_sym_COLON_COLON] = ACTIONS(907),
    [sym__symbol_chars] = ACTIONS(907),
    [anon_sym_LPAREN] = ACTIONS(907),
    [anon_sym_LBRACK] = ACTIONS(907),
    [anon_sym_RBRACK] = ACTIONS(907),
    [anon_sym_LBRACE] = ACTIONS(907),
    [anon_sym_RBRACE] = ACTIONS(907),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(907),
    [anon_sym_POUND] = ACTIONS(907),
    [anon_sym_POUND_LBRACE] = ACTIONS(907),
    [anon_sym_SEMI] = ACTIONS(907),
    [anon_sym_POUND_BANG] = ACTIONS(907),
    [anon_sym_POUND_] = ACTIONS(907),
    [anon_sym_] = ACTIONS(905),
    [anon_sym_LPARENcomment] = ACTIONS(907),
  },
  [211] = {
    [sym__number] = STATE(211),
    [sym__string] = STATE(211),
    [sym__keyword] = STATE(211),
    [sym__unqualified_keyword] = STATE(211),
    [sym_qualified_keyword] = STATE(211),
    [sym__symbol] = STATE(211),
    [sym_qualified_symbol] = STATE(211),
    [sym__one_form] = STATE(211),
    [sym__paren_sequence] = STATE(211),
    [sym__bracket_sequence] = STATE(211),
    [sym__curly_brace_sequence] = STATE(211),
    [aux_sym_comment_macro_repeat1] = STATE(211),
    [sym_number_long] = ACTIONS(909),
    [sym_number_double] = ACTIONS(909),
    [anon_sym_DQUOTE] = ACTIONS(912),
    [anon_sym_COLON] = ACTIONS(915),
    [anon_sym_COLON_COLON] = ACTIONS(918),
    [sym__symbol_chars] = ACTIONS(921),
    [anon_sym_LPAREN] = ACTIONS(924),
    [anon_sym_LBRACK] = ACTIONS(927),
    [anon_sym_LBRACE] = ACTIONS(930),
    [anon_sym_RBRACE] = ACTIONS(785),
    [anon_sym_POUND] = ACTIONS(933),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(909),
  },
  [212] = {
    [sym__number] = STATE(211),
    [sym__string] = STATE(211),
    [sym__keyword] = STATE(211),
    [sym__unqualified_keyword] = STATE(211),
    [sym_qualified_keyword] = STATE(211),
    [sym__symbol] = STATE(211),
    [sym_qualified_symbol] = STATE(211),
    [sym__one_form] = STATE(211),
    [sym__paren_sequence] = STATE(211),
    [sym__bracket_sequence] = STATE(211),
    [sym__curly_brace_sequence] = STATE(211),
    [aux_sym_comment_macro_repeat1] = STATE(211),
    [sym_number_long] = ACTIONS(742),
    [sym_number_double] = ACTIONS(742),
    [anon_sym_DQUOTE] = ACTIONS(365),
    [anon_sym_COLON] = ACTIONS(367),
    [anon_sym_COLON_COLON] = ACTIONS(369),
    [sym__symbol_chars] = ACTIONS(371),
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(375),
    [anon_sym_LBRACE] = ACTIONS(377),
    [anon_sym_RBRACE] = ACTIONS(936),
    [anon_sym_POUND] = ACTIONS(381),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(742),
  },
  [213] = {
    [aux_sym_ignore_form_repeat1] = STATE(213),
    [ts_builtin_sym_end] = ACTIONS(938),
    [sym_nil] = ACTIONS(756),
    [sym_true] = ACTIONS(756),
    [sym_false] = ACTIONS(756),
    [sym_number_long] = ACTIONS(756),
    [sym_number_double] = ACTIONS(756),
    [anon_sym_BSLASH] = ACTIONS(756),
    [anon_sym_DQUOTE] = ACTIONS(756),
    [anon_sym_POUND_DQUOTE] = ACTIONS(756),
    [anon_sym_SQUOTE] = ACTIONS(756),
    [anon_sym_LPARENquote] = ACTIONS(756),
    [anon_sym_COLON] = ACTIONS(756),
    [anon_sym_COLON_COLON] = ACTIONS(756),
    [sym__symbol_chars] = ACTIONS(756),
    [anon_sym_LPAREN] = ACTIONS(756),
    [anon_sym_LBRACK] = ACTIONS(756),
    [anon_sym_LBRACE] = ACTIONS(756),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(756),
    [anon_sym_POUND] = ACTIONS(756),
    [anon_sym_POUND_LBRACE] = ACTIONS(756),
    [anon_sym_SEMI] = ACTIONS(756),
    [anon_sym_POUND_BANG] = ACTIONS(756),
    [anon_sym_POUND_] = ACTIONS(756),
    [anon_sym_] = ACTIONS(940),
    [anon_sym_LPARENcomment] = ACTIONS(756),
  },
  [214] = {
    [aux_sym_ignore_form_repeat1] = STATE(213),
    [ts_builtin_sym_end] = ACTIONS(943),
    [sym_nil] = ACTIONS(945),
    [sym_true] = ACTIONS(945),
    [sym_false] = ACTIONS(945),
    [sym_number_long] = ACTIONS(945),
    [sym_number_double] = ACTIONS(945),
    [anon_sym_BSLASH] = ACTIONS(945),
    [anon_sym_DQUOTE] = ACTIONS(945),
    [anon_sym_POUND_DQUOTE] = ACTIONS(945),
    [anon_sym_SQUOTE] = ACTIONS(945),
    [anon_sym_LPARENquote] = ACTIONS(945),
    [anon_sym_COLON] = ACTIONS(945),
    [anon_sym_COLON_COLON] = ACTIONS(945),
    [sym__symbol_chars] = ACTIONS(945),
    [anon_sym_LPAREN] = ACTIONS(945),
    [anon_sym_LBRACK] = ACTIONS(945),
    [anon_sym_LBRACE] = ACTIONS(945),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(945),
    [anon_sym_POUND] = ACTIONS(945),
    [anon_sym_POUND_LBRACE] = ACTIONS(945),
    [anon_sym_SEMI] = ACTIONS(945),
    [anon_sym_POUND_BANG] = ACTIONS(945),
    [anon_sym_POUND_] = ACTIONS(945),
    [anon_sym_] = ACTIONS(752),
    [anon_sym_LPARENcomment] = ACTIONS(945),
  },
  [215] = {
    [sym_number_long] = ACTIONS(503),
    [sym_number_double] = ACTIONS(503),
    [anon_sym_DQUOTE] = ACTIONS(503),
    [anon_sym_RPAREN] = ACTIONS(503),
    [anon_sym_COLON] = ACTIONS(503),
    [anon_sym_COLON_COLON] = ACTIONS(503),
    [sym__symbol_chars] = ACTIONS(503),
    [anon_sym_LPAREN] = ACTIONS(503),
    [anon_sym_LBRACK] = ACTIONS(503),
    [anon_sym_LBRACE] = ACTIONS(503),
    [anon_sym_POUND] = ACTIONS(503),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(503),
  },
  [216] = {
    [sym__keyword_chars] = ACTIONS(947),
  },
  [217] = {
    [sym_number_long] = ACTIONS(531),
    [sym_number_double] = ACTIONS(531),
    [anon_sym_DQUOTE] = ACTIONS(531),
    [anon_sym_RPAREN] = ACTIONS(531),
    [anon_sym_COLON] = ACTIONS(531),
    [anon_sym_COLON_COLON] = ACTIONS(531),
    [sym__symbol_chars] = ACTIONS(531),
    [anon_sym_LPAREN] = ACTIONS(531),
    [anon_sym_LBRACK] = ACTIONS(531),
    [anon_sym_LBRACE] = ACTIONS(531),
    [anon_sym_POUND] = ACTIONS(531),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(531),
  },
  [218] = {
    [sym_number_long] = ACTIONS(844),
    [sym_number_double] = ACTIONS(844),
    [anon_sym_DQUOTE] = ACTIONS(844),
    [anon_sym_RPAREN] = ACTIONS(844),
    [anon_sym_COLON] = ACTIONS(844),
    [anon_sym_COLON_COLON] = ACTIONS(844),
    [sym__symbol_chars] = ACTIONS(844),
    [anon_sym_LPAREN] = ACTIONS(844),
    [anon_sym_LBRACK] = ACTIONS(844),
    [anon_sym_LBRACE] = ACTIONS(844),
    [anon_sym_POUND] = ACTIONS(844),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(844),
  },
  [219] = {
    [sym_number_long] = ACTIONS(862),
    [sym_number_double] = ACTIONS(862),
    [anon_sym_DQUOTE] = ACTIONS(862),
    [anon_sym_RPAREN] = ACTIONS(862),
    [anon_sym_COLON] = ACTIONS(862),
    [anon_sym_COLON_COLON] = ACTIONS(862),
    [sym__symbol_chars] = ACTIONS(862),
    [anon_sym_LPAREN] = ACTIONS(862),
    [anon_sym_LBRACK] = ACTIONS(862),
    [anon_sym_LBRACE] = ACTIONS(862),
    [anon_sym_POUND] = ACTIONS(862),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(862),
  },
  [220] = {
    [sym_number_long] = ACTIONS(907),
    [sym_number_double] = ACTIONS(907),
    [anon_sym_DQUOTE] = ACTIONS(907),
    [anon_sym_RPAREN] = ACTIONS(907),
    [anon_sym_COLON] = ACTIONS(907),
    [anon_sym_COLON_COLON] = ACTIONS(907),
    [sym__symbol_chars] = ACTIONS(907),
    [anon_sym_LPAREN] = ACTIONS(907),
    [anon_sym_LBRACK] = ACTIONS(907),
    [anon_sym_LBRACE] = ACTIONS(907),
    [anon_sym_POUND] = ACTIONS(907),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(907),
  },
  [221] = {
    [sym__number] = STATE(211),
    [sym__string] = STATE(211),
    [sym__keyword] = STATE(211),
    [sym__unqualified_keyword] = STATE(211),
    [sym_qualified_keyword] = STATE(211),
    [sym__symbol] = STATE(211),
    [sym_qualified_symbol] = STATE(211),
    [sym__one_form] = STATE(211),
    [sym__paren_sequence] = STATE(211),
    [sym__bracket_sequence] = STATE(211),
    [sym__curly_brace_sequence] = STATE(211),
    [aux_sym_comment_macro_repeat1] = STATE(211),
    [sym_number_long] = ACTIONS(742),
    [sym_number_double] = ACTIONS(742),
    [anon_sym_DQUOTE] = ACTIONS(365),
    [anon_sym_COLON] = ACTIONS(367),
    [anon_sym_COLON_COLON] = ACTIONS(369),
    [sym__symbol_chars] = ACTIONS(371),
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(375),
    [anon_sym_LBRACE] = ACTIONS(377),
    [anon_sym_RBRACE] = ACTIONS(949),
    [anon_sym_POUND] = ACTIONS(381),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(742),
  },
  [222] = {
    [sym__hex_char] = ACTIONS(951),
  },
  [223] = {
    [aux_sym_ignore_form_repeat1] = STATE(223),
    [anon_sym_RPAREN] = ACTIONS(756),
    [anon_sym_] = ACTIONS(953),
  },
  [224] = {
    [aux_sym_ignore_form_repeat1] = STATE(223),
    [anon_sym_RPAREN] = ACTIONS(945),
    [anon_sym_] = ACTIONS(810),
  },
  [225] = {
    [aux_sym_ignore_form_repeat1] = STATE(225),
    [sym_nil] = ACTIONS(756),
    [sym_true] = ACTIONS(756),
    [sym_false] = ACTIONS(756),
    [sym_number_long] = ACTIONS(756),
    [sym_number_double] = ACTIONS(756),
    [anon_sym_BSLASH] = ACTIONS(756),
    [anon_sym_DQUOTE] = ACTIONS(756),
    [anon_sym_POUND_DQUOTE] = ACTIONS(756),
    [anon_sym_SQUOTE] = ACTIONS(756),
    [anon_sym_LPARENquote] = ACTIONS(756),
    [anon_sym_RPAREN] = ACTIONS(756),
    [anon_sym_COLON] = ACTIONS(756),
    [anon_sym_COLON_COLON] = ACTIONS(756),
    [sym__symbol_chars] = ACTIONS(756),
    [anon_sym_LPAREN] = ACTIONS(756),
    [anon_sym_LBRACK] = ACTIONS(756),
    [anon_sym_LBRACE] = ACTIONS(756),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(756),
    [anon_sym_POUND] = ACTIONS(756),
    [anon_sym_POUND_LBRACE] = ACTIONS(756),
    [anon_sym_SEMI] = ACTIONS(756),
    [anon_sym_POUND_BANG] = ACTIONS(756),
    [anon_sym_POUND_] = ACTIONS(756),
    [anon_sym_] = ACTIONS(956),
    [anon_sym_LPARENcomment] = ACTIONS(756),
  },
  [226] = {
    [aux_sym_ignore_form_repeat1] = STATE(225),
    [sym_nil] = ACTIONS(945),
    [sym_true] = ACTIONS(945),
    [sym_false] = ACTIONS(945),
    [sym_number_long] = ACTIONS(945),
    [sym_number_double] = ACTIONS(945),
    [anon_sym_BSLASH] = ACTIONS(945),
    [anon_sym_DQUOTE] = ACTIONS(945),
    [anon_sym_POUND_DQUOTE] = ACTIONS(945),
    [anon_sym_SQUOTE] = ACTIONS(945),
    [anon_sym_LPARENquote] = ACTIONS(945),
    [anon_sym_RPAREN] = ACTIONS(945),
    [anon_sym_COLON] = ACTIONS(945),
    [anon_sym_COLON_COLON] = ACTIONS(945),
    [sym__symbol_chars] = ACTIONS(945),
    [anon_sym_LPAREN] = ACTIONS(945),
    [anon_sym_LBRACK] = ACTIONS(945),
    [anon_sym_LBRACE] = ACTIONS(945),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(945),
    [anon_sym_POUND] = ACTIONS(945),
    [anon_sym_POUND_LBRACE] = ACTIONS(945),
    [anon_sym_SEMI] = ACTIONS(945),
    [anon_sym_POUND_BANG] = ACTIONS(945),
    [anon_sym_POUND_] = ACTIONS(945),
    [anon_sym_] = ACTIONS(818),
    [anon_sym_LPARENcomment] = ACTIONS(945),
  },
  [227] = {
    [aux_sym_ignore_form_repeat1] = STATE(227),
    [sym_nil] = ACTIONS(756),
    [sym_true] = ACTIONS(756),
    [sym_false] = ACTIONS(756),
    [sym_number_long] = ACTIONS(756),
    [sym_number_double] = ACTIONS(756),
    [anon_sym_BSLASH] = ACTIONS(756),
    [anon_sym_DQUOTE] = ACTIONS(756),
    [anon_sym_POUND_DQUOTE] = ACTIONS(756),
    [anon_sym_SQUOTE] = ACTIONS(756),
    [anon_sym_LPARENquote] = ACTIONS(756),
    [anon_sym_COLON] = ACTIONS(756),
    [anon_sym_COLON_COLON] = ACTIONS(756),
    [sym__symbol_chars] = ACTIONS(756),
    [anon_sym_LPAREN] = ACTIONS(756),
    [anon_sym_LBRACK] = ACTIONS(756),
    [anon_sym_RBRACK] = ACTIONS(756),
    [anon_sym_LBRACE] = ACTIONS(756),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(756),
    [anon_sym_POUND] = ACTIONS(756),
    [anon_sym_POUND_LBRACE] = ACTIONS(756),
    [anon_sym_SEMI] = ACTIONS(756),
    [anon_sym_POUND_BANG] = ACTIONS(756),
    [anon_sym_POUND_] = ACTIONS(756),
    [anon_sym_] = ACTIONS(959),
    [anon_sym_LPARENcomment] = ACTIONS(756),
  },
  [228] = {
    [aux_sym_ignore_form_repeat1] = STATE(227),
    [sym_nil] = ACTIONS(945),
    [sym_true] = ACTIONS(945),
    [sym_false] = ACTIONS(945),
    [sym_number_long] = ACTIONS(945),
    [sym_number_double] = ACTIONS(945),
    [anon_sym_BSLASH] = ACTIONS(945),
    [anon_sym_DQUOTE] = ACTIONS(945),
    [anon_sym_POUND_DQUOTE] = ACTIONS(945),
    [anon_sym_SQUOTE] = ACTIONS(945),
    [anon_sym_LPARENquote] = ACTIONS(945),
    [anon_sym_COLON] = ACTIONS(945),
    [anon_sym_COLON_COLON] = ACTIONS(945),
    [sym__symbol_chars] = ACTIONS(945),
    [anon_sym_LPAREN] = ACTIONS(945),
    [anon_sym_LBRACK] = ACTIONS(945),
    [anon_sym_RBRACK] = ACTIONS(945),
    [anon_sym_LBRACE] = ACTIONS(945),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(945),
    [anon_sym_POUND] = ACTIONS(945),
    [anon_sym_POUND_LBRACE] = ACTIONS(945),
    [anon_sym_SEMI] = ACTIONS(945),
    [anon_sym_POUND_BANG] = ACTIONS(945),
    [anon_sym_POUND_] = ACTIONS(945),
    [anon_sym_] = ACTIONS(822),
    [anon_sym_LPARENcomment] = ACTIONS(945),
  },
  [229] = {
    [aux_sym_ignore_form_repeat1] = STATE(229),
    [sym_nil] = ACTIONS(756),
    [sym_true] = ACTIONS(756),
    [sym_false] = ACTIONS(756),
    [sym_number_long] = ACTIONS(756),
    [sym_number_double] = ACTIONS(756),
    [anon_sym_BSLASH] = ACTIONS(756),
    [anon_sym_DQUOTE] = ACTIONS(756),
    [anon_sym_POUND_DQUOTE] = ACTIONS(756),
    [anon_sym_SQUOTE] = ACTIONS(756),
    [anon_sym_LPARENquote] = ACTIONS(756),
    [anon_sym_COLON] = ACTIONS(756),
    [anon_sym_COLON_COLON] = ACTIONS(756),
    [sym__symbol_chars] = ACTIONS(756),
    [anon_sym_LPAREN] = ACTIONS(756),
    [anon_sym_LBRACK] = ACTIONS(756),
    [anon_sym_LBRACE] = ACTIONS(756),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(756),
    [anon_sym_POUND] = ACTIONS(756),
    [anon_sym_POUND_LBRACE] = ACTIONS(756),
    [anon_sym_SEMI] = ACTIONS(756),
    [anon_sym_POUND_BANG] = ACTIONS(756),
    [anon_sym_POUND_] = ACTIONS(756),
    [anon_sym_] = ACTIONS(962),
    [anon_sym_LPARENcomment] = ACTIONS(756),
  },
  [230] = {
    [aux_sym_ignore_form_repeat1] = STATE(229),
    [sym_nil] = ACTIONS(945),
    [sym_true] = ACTIONS(945),
    [sym_false] = ACTIONS(945),
    [sym_number_long] = ACTIONS(945),
    [sym_number_double] = ACTIONS(945),
    [anon_sym_BSLASH] = ACTIONS(945),
    [anon_sym_DQUOTE] = ACTIONS(945),
    [anon_sym_POUND_DQUOTE] = ACTIONS(945),
    [anon_sym_SQUOTE] = ACTIONS(945),
    [anon_sym_LPARENquote] = ACTIONS(945),
    [anon_sym_COLON] = ACTIONS(945),
    [anon_sym_COLON_COLON] = ACTIONS(945),
    [sym__symbol_chars] = ACTIONS(945),
    [anon_sym_LPAREN] = ACTIONS(945),
    [anon_sym_LBRACK] = ACTIONS(945),
    [anon_sym_LBRACE] = ACTIONS(945),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(945),
    [anon_sym_POUND] = ACTIONS(945),
    [anon_sym_POUND_LBRACE] = ACTIONS(945),
    [anon_sym_SEMI] = ACTIONS(945),
    [anon_sym_POUND_BANG] = ACTIONS(945),
    [anon_sym_POUND_] = ACTIONS(945),
    [anon_sym_] = ACTIONS(826),
    [anon_sym_LPARENcomment] = ACTIONS(945),
  },
  [231] = {
    [ts_builtin_sym_end] = ACTIONS(965),
    [sym_nil] = ACTIONS(967),
    [sym_true] = ACTIONS(967),
    [sym_false] = ACTIONS(967),
    [sym_number_long] = ACTIONS(967),
    [sym_number_double] = ACTIONS(965),
    [anon_sym_BSLASH] = ACTIONS(965),
    [anon_sym_DQUOTE] = ACTIONS(965),
    [anon_sym_POUND_DQUOTE] = ACTIONS(965),
    [anon_sym_SQUOTE] = ACTIONS(965),
    [anon_sym_LPARENquote] = ACTIONS(965),
    [anon_sym_RPAREN] = ACTIONS(965),
    [anon_sym_COLON] = ACTIONS(967),
    [anon_sym_COLON_COLON] = ACTIONS(965),
    [sym__symbol_chars] = ACTIONS(967),
    [anon_sym_LPAREN] = ACTIONS(967),
    [anon_sym_LBRACK] = ACTIONS(965),
    [anon_sym_RBRACK] = ACTIONS(965),
    [anon_sym_LBRACE] = ACTIONS(965),
    [anon_sym_RBRACE] = ACTIONS(965),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(965),
    [anon_sym_POUND] = ACTIONS(967),
    [anon_sym_POUND_LBRACE] = ACTIONS(965),
    [anon_sym_SEMI] = ACTIONS(965),
    [anon_sym_POUND_BANG] = ACTIONS(965),
    [anon_sym_POUND_] = ACTIONS(965),
    [anon_sym_LPARENcomment] = ACTIONS(965),
  },
  [232] = {
    [aux_sym_ignore_form_repeat1] = STATE(232),
    [sym_nil] = ACTIONS(756),
    [sym_true] = ACTIONS(756),
    [sym_false] = ACTIONS(756),
    [sym_number_long] = ACTIONS(756),
    [sym_number_double] = ACTIONS(756),
    [anon_sym_BSLASH] = ACTIONS(756),
    [anon_sym_DQUOTE] = ACTIONS(756),
    [anon_sym_POUND_DQUOTE] = ACTIONS(756),
    [anon_sym_SQUOTE] = ACTIONS(756),
    [anon_sym_LPARENquote] = ACTIONS(756),
    [anon_sym_COLON] = ACTIONS(756),
    [anon_sym_COLON_COLON] = ACTIONS(756),
    [sym__symbol_chars] = ACTIONS(756),
    [anon_sym_LPAREN] = ACTIONS(756),
    [anon_sym_LBRACK] = ACTIONS(756),
    [anon_sym_LBRACE] = ACTIONS(756),
    [anon_sym_RBRACE] = ACTIONS(756),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(756),
    [anon_sym_POUND] = ACTIONS(756),
    [anon_sym_POUND_LBRACE] = ACTIONS(756),
    [anon_sym_SEMI] = ACTIONS(756),
    [anon_sym_POUND_BANG] = ACTIONS(756),
    [anon_sym_POUND_] = ACTIONS(756),
    [anon_sym_] = ACTIONS(969),
    [anon_sym_LPARENcomment] = ACTIONS(756),
  },
  [233] = {
    [aux_sym_ignore_form_repeat1] = STATE(232),
    [sym_nil] = ACTIONS(945),
    [sym_true] = ACTIONS(945),
    [sym_false] = ACTIONS(945),
    [sym_number_long] = ACTIONS(945),
    [sym_number_double] = ACTIONS(945),
    [anon_sym_BSLASH] = ACTIONS(945),
    [anon_sym_DQUOTE] = ACTIONS(945),
    [anon_sym_POUND_DQUOTE] = ACTIONS(945),
    [anon_sym_SQUOTE] = ACTIONS(945),
    [anon_sym_LPARENquote] = ACTIONS(945),
    [anon_sym_COLON] = ACTIONS(945),
    [anon_sym_COLON_COLON] = ACTIONS(945),
    [sym__symbol_chars] = ACTIONS(945),
    [anon_sym_LPAREN] = ACTIONS(945),
    [anon_sym_LBRACK] = ACTIONS(945),
    [anon_sym_LBRACE] = ACTIONS(945),
    [anon_sym_RBRACE] = ACTIONS(945),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(945),
    [anon_sym_POUND] = ACTIONS(945),
    [anon_sym_POUND_LBRACE] = ACTIONS(945),
    [anon_sym_SEMI] = ACTIONS(945),
    [anon_sym_POUND_BANG] = ACTIONS(945),
    [anon_sym_POUND_] = ACTIONS(945),
    [anon_sym_] = ACTIONS(836),
    [anon_sym_LPARENcomment] = ACTIONS(945),
  },
  [234] = {
    [ts_builtin_sym_end] = ACTIONS(814),
    [sym_nil] = ACTIONS(816),
    [sym_true] = ACTIONS(816),
    [sym_false] = ACTIONS(816),
    [sym_number_long] = ACTIONS(816),
    [sym_number_double] = ACTIONS(816),
    [anon_sym_BSLASH] = ACTIONS(816),
    [anon_sym_DQUOTE] = ACTIONS(816),
    [anon_sym_POUND_DQUOTE] = ACTIONS(816),
    [anon_sym_SQUOTE] = ACTIONS(816),
    [anon_sym_LPARENquote] = ACTIONS(816),
    [anon_sym_RPAREN] = ACTIONS(816),
    [anon_sym_COLON] = ACTIONS(816),
    [anon_sym_COLON_COLON] = ACTIONS(816),
    [sym__symbol_chars] = ACTIONS(816),
    [anon_sym_LPAREN] = ACTIONS(816),
    [anon_sym_LBRACK] = ACTIONS(816),
    [anon_sym_RBRACK] = ACTIONS(816),
    [anon_sym_LBRACE] = ACTIONS(816),
    [anon_sym_RBRACE] = ACTIONS(816),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(816),
    [anon_sym_POUND] = ACTIONS(816),
    [anon_sym_POUND_LBRACE] = ACTIONS(816),
    [anon_sym_SEMI] = ACTIONS(816),
    [anon_sym_POUND_BANG] = ACTIONS(816),
    [anon_sym_POUND_] = ACTIONS(816),
    [anon_sym_] = ACTIONS(814),
    [anon_sym_LPARENcomment] = ACTIONS(816),
  },
  [235] = {
    [sym_number_long] = ACTIONS(503),
    [sym_number_double] = ACTIONS(503),
    [anon_sym_DQUOTE] = ACTIONS(503),
    [anon_sym_COLON] = ACTIONS(503),
    [anon_sym_COLON_COLON] = ACTIONS(503),
    [sym__symbol_chars] = ACTIONS(503),
    [anon_sym_LPAREN] = ACTIONS(503),
    [anon_sym_LBRACK] = ACTIONS(503),
    [anon_sym_RBRACK] = ACTIONS(503),
    [anon_sym_LBRACE] = ACTIONS(503),
    [anon_sym_POUND] = ACTIONS(503),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(503),
  },
  [236] = {
    [sym__keyword_chars] = ACTIONS(972),
  },
  [237] = {
    [sym_number_long] = ACTIONS(531),
    [sym_number_double] = ACTIONS(531),
    [anon_sym_DQUOTE] = ACTIONS(531),
    [anon_sym_COLON] = ACTIONS(531),
    [anon_sym_COLON_COLON] = ACTIONS(531),
    [sym__symbol_chars] = ACTIONS(531),
    [anon_sym_LPAREN] = ACTIONS(531),
    [anon_sym_LBRACK] = ACTIONS(531),
    [anon_sym_RBRACK] = ACTIONS(531),
    [anon_sym_LBRACE] = ACTIONS(531),
    [anon_sym_POUND] = ACTIONS(531),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(531),
  },
  [238] = {
    [sym_number_long] = ACTIONS(844),
    [sym_number_double] = ACTIONS(844),
    [anon_sym_DQUOTE] = ACTIONS(844),
    [anon_sym_COLON] = ACTIONS(844),
    [anon_sym_COLON_COLON] = ACTIONS(844),
    [sym__symbol_chars] = ACTIONS(844),
    [anon_sym_LPAREN] = ACTIONS(844),
    [anon_sym_LBRACK] = ACTIONS(844),
    [anon_sym_RBRACK] = ACTIONS(844),
    [anon_sym_LBRACE] = ACTIONS(844),
    [anon_sym_POUND] = ACTIONS(844),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(844),
  },
  [239] = {
    [sym_number_long] = ACTIONS(862),
    [sym_number_double] = ACTIONS(862),
    [anon_sym_DQUOTE] = ACTIONS(862),
    [anon_sym_COLON] = ACTIONS(862),
    [anon_sym_COLON_COLON] = ACTIONS(862),
    [sym__symbol_chars] = ACTIONS(862),
    [anon_sym_LPAREN] = ACTIONS(862),
    [anon_sym_LBRACK] = ACTIONS(862),
    [anon_sym_RBRACK] = ACTIONS(862),
    [anon_sym_LBRACE] = ACTIONS(862),
    [anon_sym_POUND] = ACTIONS(862),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(862),
  },
  [240] = {
    [sym_number_long] = ACTIONS(907),
    [sym_number_double] = ACTIONS(907),
    [anon_sym_DQUOTE] = ACTIONS(907),
    [anon_sym_COLON] = ACTIONS(907),
    [anon_sym_COLON_COLON] = ACTIONS(907),
    [sym__symbol_chars] = ACTIONS(907),
    [anon_sym_LPAREN] = ACTIONS(907),
    [anon_sym_LBRACK] = ACTIONS(907),
    [anon_sym_RBRACK] = ACTIONS(907),
    [anon_sym_LBRACE] = ACTIONS(907),
    [anon_sym_POUND] = ACTIONS(907),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(907),
  },
  [241] = {
    [sym__number] = STATE(211),
    [sym__string] = STATE(211),
    [sym__keyword] = STATE(211),
    [sym__unqualified_keyword] = STATE(211),
    [sym_qualified_keyword] = STATE(211),
    [sym__symbol] = STATE(211),
    [sym_qualified_symbol] = STATE(211),
    [sym__one_form] = STATE(211),
    [sym__paren_sequence] = STATE(211),
    [sym__bracket_sequence] = STATE(211),
    [sym__curly_brace_sequence] = STATE(211),
    [aux_sym_comment_macro_repeat1] = STATE(211),
    [sym_number_long] = ACTIONS(742),
    [sym_number_double] = ACTIONS(742),
    [anon_sym_DQUOTE] = ACTIONS(365),
    [anon_sym_COLON] = ACTIONS(367),
    [anon_sym_COLON_COLON] = ACTIONS(369),
    [sym__symbol_chars] = ACTIONS(371),
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(375),
    [anon_sym_LBRACE] = ACTIONS(377),
    [anon_sym_RBRACE] = ACTIONS(974),
    [anon_sym_POUND] = ACTIONS(381),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(742),
  },
  [242] = {
    [sym_number_long] = ACTIONS(503),
    [sym_number_double] = ACTIONS(503),
    [anon_sym_DQUOTE] = ACTIONS(503),
    [anon_sym_COLON] = ACTIONS(503),
    [anon_sym_COLON_COLON] = ACTIONS(503),
    [sym__symbol_chars] = ACTIONS(503),
    [anon_sym_LPAREN] = ACTIONS(503),
    [anon_sym_LBRACK] = ACTIONS(503),
    [anon_sym_LBRACE] = ACTIONS(503),
    [anon_sym_RBRACE] = ACTIONS(503),
    [anon_sym_POUND] = ACTIONS(503),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(503),
  },
  [243] = {
    [sym__keyword_chars] = ACTIONS(976),
  },
  [244] = {
    [sym_number_long] = ACTIONS(531),
    [sym_number_double] = ACTIONS(531),
    [anon_sym_DQUOTE] = ACTIONS(531),
    [anon_sym_COLON] = ACTIONS(531),
    [anon_sym_COLON_COLON] = ACTIONS(531),
    [sym__symbol_chars] = ACTIONS(531),
    [anon_sym_LPAREN] = ACTIONS(531),
    [anon_sym_LBRACK] = ACTIONS(531),
    [anon_sym_LBRACE] = ACTIONS(531),
    [anon_sym_RBRACE] = ACTIONS(531),
    [anon_sym_POUND] = ACTIONS(531),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(531),
  },
  [245] = {
    [sym_number_long] = ACTIONS(844),
    [sym_number_double] = ACTIONS(844),
    [anon_sym_DQUOTE] = ACTIONS(844),
    [anon_sym_COLON] = ACTIONS(844),
    [anon_sym_COLON_COLON] = ACTIONS(844),
    [sym__symbol_chars] = ACTIONS(844),
    [anon_sym_LPAREN] = ACTIONS(844),
    [anon_sym_LBRACK] = ACTIONS(844),
    [anon_sym_LBRACE] = ACTIONS(844),
    [anon_sym_RBRACE] = ACTIONS(844),
    [anon_sym_POUND] = ACTIONS(844),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(844),
  },
  [246] = {
    [sym_number_long] = ACTIONS(862),
    [sym_number_double] = ACTIONS(862),
    [anon_sym_DQUOTE] = ACTIONS(862),
    [anon_sym_COLON] = ACTIONS(862),
    [anon_sym_COLON_COLON] = ACTIONS(862),
    [sym__symbol_chars] = ACTIONS(862),
    [anon_sym_LPAREN] = ACTIONS(862),
    [anon_sym_LBRACK] = ACTIONS(862),
    [anon_sym_LBRACE] = ACTIONS(862),
    [anon_sym_RBRACE] = ACTIONS(862),
    [anon_sym_POUND] = ACTIONS(862),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(862),
  },
  [247] = {
    [sym_number_long] = ACTIONS(907),
    [sym_number_double] = ACTIONS(907),
    [anon_sym_DQUOTE] = ACTIONS(907),
    [anon_sym_COLON] = ACTIONS(907),
    [anon_sym_COLON_COLON] = ACTIONS(907),
    [sym__symbol_chars] = ACTIONS(907),
    [anon_sym_LPAREN] = ACTIONS(907),
    [anon_sym_LBRACK] = ACTIONS(907),
    [anon_sym_LBRACE] = ACTIONS(907),
    [anon_sym_RBRACE] = ACTIONS(907),
    [anon_sym_POUND] = ACTIONS(907),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(907),
  },
  [248] = {
    [sym__number] = STATE(211),
    [sym__string] = STATE(211),
    [sym__keyword] = STATE(211),
    [sym__unqualified_keyword] = STATE(211),
    [sym_qualified_keyword] = STATE(211),
    [sym__symbol] = STATE(211),
    [sym_qualified_symbol] = STATE(211),
    [sym__one_form] = STATE(211),
    [sym__paren_sequence] = STATE(211),
    [sym__bracket_sequence] = STATE(211),
    [sym__curly_brace_sequence] = STATE(211),
    [aux_sym_comment_macro_repeat1] = STATE(211),
    [sym_number_long] = ACTIONS(742),
    [sym_number_double] = ACTIONS(742),
    [anon_sym_DQUOTE] = ACTIONS(365),
    [anon_sym_COLON] = ACTIONS(367),
    [anon_sym_COLON_COLON] = ACTIONS(369),
    [sym__symbol_chars] = ACTIONS(371),
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(375),
    [anon_sym_LBRACE] = ACTIONS(377),
    [anon_sym_RBRACE] = ACTIONS(978),
    [anon_sym_POUND] = ACTIONS(381),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(742),
  },
  [249] = {
    [ts_builtin_sym_end] = ACTIONS(980),
    [sym_nil] = ACTIONS(982),
    [sym_true] = ACTIONS(982),
    [sym_false] = ACTIONS(982),
    [sym_number_long] = ACTIONS(982),
    [sym_number_double] = ACTIONS(982),
    [anon_sym_BSLASH] = ACTIONS(982),
    [anon_sym_DQUOTE] = ACTIONS(982),
    [anon_sym_POUND_DQUOTE] = ACTIONS(982),
    [anon_sym_SQUOTE] = ACTIONS(982),
    [anon_sym_LPARENquote] = ACTIONS(982),
    [anon_sym_RPAREN] = ACTIONS(982),
    [anon_sym_COLON] = ACTIONS(982),
    [anon_sym_COLON_COLON] = ACTIONS(982),
    [sym__symbol_chars] = ACTIONS(982),
    [anon_sym_LPAREN] = ACTIONS(982),
    [anon_sym_LBRACK] = ACTIONS(982),
    [anon_sym_RBRACK] = ACTIONS(982),
    [anon_sym_LBRACE] = ACTIONS(982),
    [anon_sym_RBRACE] = ACTIONS(982),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(982),
    [anon_sym_POUND] = ACTIONS(982),
    [anon_sym_POUND_LBRACE] = ACTIONS(982),
    [anon_sym_SEMI] = ACTIONS(982),
    [anon_sym_POUND_BANG] = ACTIONS(982),
    [anon_sym_POUND_] = ACTIONS(982),
    [anon_sym_] = ACTIONS(980),
    [anon_sym_LPARENcomment] = ACTIONS(982),
  },
  [250] = {
    [sym_number_long] = ACTIONS(816),
    [sym_number_double] = ACTIONS(816),
    [anon_sym_DQUOTE] = ACTIONS(816),
    [anon_sym_RPAREN] = ACTIONS(816),
    [anon_sym_COLON] = ACTIONS(816),
    [anon_sym_COLON_COLON] = ACTIONS(816),
    [sym__symbol_chars] = ACTIONS(816),
    [anon_sym_LPAREN] = ACTIONS(816),
    [anon_sym_LBRACK] = ACTIONS(816),
    [anon_sym_LBRACE] = ACTIONS(816),
    [anon_sym_POUND] = ACTIONS(816),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(816),
  },
  [251] = {
    [sym_number_long] = ACTIONS(982),
    [sym_number_double] = ACTIONS(982),
    [anon_sym_DQUOTE] = ACTIONS(982),
    [anon_sym_RPAREN] = ACTIONS(982),
    [anon_sym_COLON] = ACTIONS(982),
    [anon_sym_COLON_COLON] = ACTIONS(982),
    [sym__symbol_chars] = ACTIONS(982),
    [anon_sym_LPAREN] = ACTIONS(982),
    [anon_sym_LBRACK] = ACTIONS(982),
    [anon_sym_LBRACE] = ACTIONS(982),
    [anon_sym_POUND] = ACTIONS(982),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(982),
  },
  [252] = {
    [ts_builtin_sym_end] = ACTIONS(984),
    [sym_nil] = ACTIONS(986),
    [sym_true] = ACTIONS(986),
    [sym_false] = ACTIONS(986),
    [sym_number_long] = ACTIONS(986),
    [sym_number_double] = ACTIONS(984),
    [anon_sym_BSLASH] = ACTIONS(984),
    [anon_sym_DQUOTE] = ACTIONS(984),
    [anon_sym_POUND_DQUOTE] = ACTIONS(984),
    [anon_sym_SQUOTE] = ACTIONS(984),
    [anon_sym_LPARENquote] = ACTIONS(984),
    [anon_sym_RPAREN] = ACTIONS(984),
    [anon_sym_COLON] = ACTIONS(986),
    [anon_sym_COLON_COLON] = ACTIONS(984),
    [sym__symbol_chars] = ACTIONS(986),
    [anon_sym_LPAREN] = ACTIONS(986),
    [anon_sym_LBRACK] = ACTIONS(984),
    [anon_sym_RBRACK] = ACTIONS(984),
    [anon_sym_LBRACE] = ACTIONS(984),
    [anon_sym_RBRACE] = ACTIONS(984),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(984),
    [anon_sym_POUND] = ACTIONS(986),
    [anon_sym_POUND_LBRACE] = ACTIONS(984),
    [anon_sym_SEMI] = ACTIONS(984),
    [anon_sym_POUND_BANG] = ACTIONS(984),
    [anon_sym_POUND_] = ACTIONS(984),
    [anon_sym_LPARENcomment] = ACTIONS(984),
  },
  [253] = {
    [sym_number_long] = ACTIONS(816),
    [sym_number_double] = ACTIONS(816),
    [anon_sym_DQUOTE] = ACTIONS(816),
    [anon_sym_COLON] = ACTIONS(816),
    [anon_sym_COLON_COLON] = ACTIONS(816),
    [sym__symbol_chars] = ACTIONS(816),
    [anon_sym_LPAREN] = ACTIONS(816),
    [anon_sym_LBRACK] = ACTIONS(816),
    [anon_sym_RBRACK] = ACTIONS(816),
    [anon_sym_LBRACE] = ACTIONS(816),
    [anon_sym_POUND] = ACTIONS(816),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(816),
  },
  [254] = {
    [sym_number_long] = ACTIONS(982),
    [sym_number_double] = ACTIONS(982),
    [anon_sym_DQUOTE] = ACTIONS(982),
    [anon_sym_COLON] = ACTIONS(982),
    [anon_sym_COLON_COLON] = ACTIONS(982),
    [sym__symbol_chars] = ACTIONS(982),
    [anon_sym_LPAREN] = ACTIONS(982),
    [anon_sym_LBRACK] = ACTIONS(982),
    [anon_sym_RBRACK] = ACTIONS(982),
    [anon_sym_LBRACE] = ACTIONS(982),
    [anon_sym_POUND] = ACTIONS(982),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(982),
  },
  [255] = {
    [sym_number_long] = ACTIONS(816),
    [sym_number_double] = ACTIONS(816),
    [anon_sym_DQUOTE] = ACTIONS(816),
    [anon_sym_COLON] = ACTIONS(816),
    [anon_sym_COLON_COLON] = ACTIONS(816),
    [sym__symbol_chars] = ACTIONS(816),
    [anon_sym_LPAREN] = ACTIONS(816),
    [anon_sym_LBRACK] = ACTIONS(816),
    [anon_sym_LBRACE] = ACTIONS(816),
    [anon_sym_RBRACE] = ACTIONS(816),
    [anon_sym_POUND] = ACTIONS(816),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(816),
  },
  [256] = {
    [sym_number_long] = ACTIONS(982),
    [sym_number_double] = ACTIONS(982),
    [anon_sym_DQUOTE] = ACTIONS(982),
    [anon_sym_COLON] = ACTIONS(982),
    [anon_sym_COLON_COLON] = ACTIONS(982),
    [sym__symbol_chars] = ACTIONS(982),
    [anon_sym_LPAREN] = ACTIONS(982),
    [anon_sym_LBRACK] = ACTIONS(982),
    [anon_sym_LBRACE] = ACTIONS(982),
    [anon_sym_RBRACE] = ACTIONS(982),
    [anon_sym_POUND] = ACTIONS(982),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(982),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(33),
  [9] = {.count = 1, .reusable = false}, SHIFT(2),
  [11] = {.count = 1, .reusable = false}, SHIFT(22),
  [13] = {.count = 1, .reusable = true}, SHIFT(22),
  [15] = {.count = 1, .reusable = true}, SHIFT(3),
  [17] = {.count = 1, .reusable = true}, SHIFT(4),
  [19] = {.count = 1, .reusable = true}, SHIFT(5),
  [21] = {.count = 1, .reusable = true}, SHIFT(6),
  [23] = {.count = 1, .reusable = true}, SHIFT(7),
  [25] = {.count = 1, .reusable = false}, SHIFT(8),
  [27] = {.count = 1, .reusable = true}, SHIFT(9),
  [29] = {.count = 1, .reusable = false}, SHIFT(10),
  [31] = {.count = 1, .reusable = false}, SHIFT(11),
  [33] = {.count = 1, .reusable = true}, SHIFT(12),
  [35] = {.count = 1, .reusable = true}, SHIFT(13),
  [37] = {.count = 1, .reusable = true}, SHIFT(14),
  [39] = {.count = 1, .reusable = false}, SHIFT(15),
  [41] = {.count = 1, .reusable = true}, SHIFT(16),
  [43] = {.count = 1, .reusable = true}, SHIFT(17),
  [45] = {.count = 1, .reusable = true}, SHIFT(18),
  [47] = {.count = 1, .reusable = true}, SHIFT(19),
  [49] = {.count = 1, .reusable = true}, SHIFT(20),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [53] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 1),
  [55] = {.count = 1, .reusable = false}, SHIFT(34),
  [57] = {.count = 1, .reusable = false}, SHIFT(35),
  [59] = {.count = 1, .reusable = false}, SHIFT(36),
  [61] = {.count = 1, .reusable = false}, SHIFT(37),
  [63] = {.count = 1, .reusable = false}, SHIFT(38),
  [65] = {.count = 1, .reusable = false}, SHIFT(39),
  [67] = {.count = 1, .reusable = false}, SHIFT(40),
  [69] = {.count = 1, .reusable = false}, SHIFT(41),
  [71] = {.count = 1, .reusable = false}, SHIFT(44),
  [73] = {.count = 1, .reusable = true}, SHIFT(42),
  [75] = {.count = 1, .reusable = true}, SHIFT(43),
  [77] = {.count = 1, .reusable = true}, SHIFT(45),
  [79] = {.count = 1, .reusable = true}, SHIFT(46),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym__symbol, 1),
  [83] = {.count = 1, .reusable = false}, REDUCE(sym__symbol, 1),
  [85] = {.count = 1, .reusable = true}, SHIFT(47),
  [87] = {.count = 1, .reusable = false}, SHIFT(51),
  [89] = {.count = 1, .reusable = true}, SHIFT(48),
  [91] = {.count = 1, .reusable = true}, SHIFT(49),
  [93] = {.count = 1, .reusable = true}, SHIFT(50),
  [95] = {.count = 1, .reusable = false}, SHIFT(55),
  [97] = {.count = 1, .reusable = true}, SHIFT(52),
  [99] = {.count = 1, .reusable = true}, SHIFT(53),
  [101] = {.count = 1, .reusable = true}, SHIFT(54),
  [103] = {.count = 1, .reusable = false}, SHIFT(59),
  [105] = {.count = 1, .reusable = true}, SHIFT(56),
  [107] = {.count = 1, .reusable = true}, SHIFT(57),
  [109] = {.count = 1, .reusable = true}, SHIFT(58),
  [111] = {.count = 1, .reusable = true}, SHIFT(61),
  [113] = {.count = 1, .reusable = true}, SHIFT(63),
  [115] = {.count = 1, .reusable = false}, SHIFT(67),
  [117] = {.count = 1, .reusable = true}, SHIFT(64),
  [119] = {.count = 1, .reusable = true}, SHIFT(65),
  [121] = {.count = 1, .reusable = true}, SHIFT(66),
  [123] = {.count = 1, .reusable = false}, SHIFT(68),
  [125] = {.count = 1, .reusable = false}, SHIFT(69),
  [127] = {.count = 1, .reusable = false}, SHIFT(78),
  [129] = {.count = 1, .reusable = false}, SHIFT(70),
  [131] = {.count = 1, .reusable = false}, SHIFT(71),
  [133] = {.count = 1, .reusable = false}, SHIFT(72),
  [135] = {.count = 1, .reusable = false}, SHIFT(73),
  [137] = {.count = 1, .reusable = false}, SHIFT(74),
  [139] = {.count = 1, .reusable = false}, SHIFT(75),
  [141] = {.count = 1, .reusable = false}, SHIFT(76),
  [143] = {.count = 1, .reusable = false}, SHIFT(77),
  [145] = {.count = 1, .reusable = false}, SHIFT(79),
  [147] = {.count = 1, .reusable = false}, SHIFT(89),
  [149] = {.count = 1, .reusable = false}, SHIFT(80),
  [151] = {.count = 1, .reusable = false}, SHIFT(81),
  [153] = {.count = 1, .reusable = false}, SHIFT(82),
  [155] = {.count = 1, .reusable = false}, SHIFT(83),
  [157] = {.count = 1, .reusable = false}, SHIFT(84),
  [159] = {.count = 1, .reusable = false}, SHIFT(85),
  [161] = {.count = 1, .reusable = false}, SHIFT(86),
  [163] = {.count = 1, .reusable = false}, SHIFT(87),
  [165] = {.count = 1, .reusable = false}, SHIFT(88),
  [167] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_number, 1),
  [171] = {.count = 1, .reusable = false}, REDUCE(sym_number, 1),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_character, 1),
  [175] = {.count = 1, .reusable = false}, REDUCE(sym_character, 1),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [179] = {.count = 1, .reusable = false}, REDUCE(sym_string, 1),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_regex, 1),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym_regex, 1),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_keyword, 1),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym_keyword, 1),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_symbol, 1),
  [191] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 1),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_list, 1),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym_list, 1),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_vector, 1),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym_vector, 1),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map, 1),
  [203] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map, 1),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_set, 1),
  [207] = {.count = 1, .reusable = false}, REDUCE(sym_set, 1),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 1),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [215] = {.count = 1, .reusable = false}, SHIFT(90),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym__character, 2),
  [219] = {.count = 1, .reusable = false}, REDUCE(sym__character, 2),
  [221] = {.count = 1, .reusable = true}, SHIFT(91),
  [223] = {.count = 1, .reusable = true}, SHIFT(92),
  [225] = {.count = 1, .reusable = false}, SHIFT(92),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym__string, 2),
  [229] = {.count = 1, .reusable = false}, REDUCE(sym__string, 2),
  [231] = {.count = 1, .reusable = false}, SHIFT(93),
  [233] = {.count = 1, .reusable = false}, SHIFT(94),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym__regex, 2),
  [237] = {.count = 1, .reusable = false}, REDUCE(sym__regex, 2),
  [239] = {.count = 1, .reusable = false}, SHIFT(95),
  [241] = {.count = 1, .reusable = false}, SHIFT(96),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_quote, 2),
  [245] = {.count = 1, .reusable = false}, REDUCE(sym_quote, 2),
  [247] = {.count = 1, .reusable = false}, SHIFT(97),
  [249] = {.count = 1, .reusable = false}, SHIFT(98),
  [251] = {.count = 1, .reusable = true}, SHIFT(99),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym__unqualified_keyword, 2),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym__unqualified_keyword, 2),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_keyword, 2),
  [259] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_keyword, 2),
  [261] = {.count = 1, .reusable = true}, SHIFT(100),
  [263] = {.count = 1, .reusable = true}, SHIFT(101),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym__list, 2),
  [267] = {.count = 1, .reusable = false}, REDUCE(sym__list, 2),
  [269] = {.count = 1, .reusable = false}, SHIFT(102),
  [271] = {.count = 1, .reusable = false}, SHIFT(103),
  [273] = {.count = 1, .reusable = false}, SHIFT(105),
  [275] = {.count = 1, .reusable = true}, SHIFT(104),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym__vector, 2),
  [279] = {.count = 1, .reusable = false}, REDUCE(sym__vector, 2),
  [281] = {.count = 1, .reusable = false}, SHIFT(106),
  [283] = {.count = 1, .reusable = false}, SHIFT(107),
  [285] = {.count = 1, .reusable = false}, SHIFT(109),
  [287] = {.count = 1, .reusable = true}, SHIFT(108),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym__hash_map, 2),
  [291] = {.count = 1, .reusable = false}, REDUCE(sym__hash_map, 2),
  [293] = {.count = 1, .reusable = false}, SHIFT(110),
  [295] = {.count = 1, .reusable = false}, SHIFT(111),
  [297] = {.count = 1, .reusable = false}, SHIFT(112),
  [299] = {.count = 1, .reusable = true}, SHIFT(113),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 2),
  [303] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 2),
  [305] = {.count = 1, .reusable = true}, SHIFT(115),
  [307] = {.count = 1, .reusable = true}, SHIFT(116),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym__set, 2),
  [311] = {.count = 1, .reusable = false}, REDUCE(sym__set, 2),
  [313] = {.count = 1, .reusable = false}, SHIFT(117),
  [315] = {.count = 1, .reusable = false}, SHIFT(118),
  [317] = {.count = 1, .reusable = false}, SHIFT(120),
  [319] = {.count = 1, .reusable = true}, SHIFT(119),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym_semicolon, 2),
  [323] = {.count = 1, .reusable = false}, REDUCE(sym_semicolon, 2),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_shebang_line, 2),
  [327] = {.count = 1, .reusable = false}, REDUCE(sym_shebang_line, 2),
  [329] = {.count = 1, .reusable = false}, SHIFT(121),
  [331] = {.count = 1, .reusable = false}, SHIFT(122),
  [333] = {.count = 1, .reusable = true}, SHIFT(123),
  [335] = {.count = 1, .reusable = true}, SHIFT(124),
  [337] = {.count = 1, .reusable = false}, SHIFT(125),
  [339] = {.count = 1, .reusable = false}, SHIFT(127),
  [341] = {.count = 1, .reusable = false}, SHIFT(126),
  [343] = {.count = 1, .reusable = false}, SHIFT(137),
  [345] = {.count = 1, .reusable = false}, SHIFT(128),
  [347] = {.count = 1, .reusable = false}, SHIFT(129),
  [349] = {.count = 1, .reusable = false}, SHIFT(130),
  [351] = {.count = 1, .reusable = false}, SHIFT(131),
  [353] = {.count = 1, .reusable = false}, SHIFT(132),
  [355] = {.count = 1, .reusable = false}, SHIFT(133),
  [357] = {.count = 1, .reusable = false}, SHIFT(134),
  [359] = {.count = 1, .reusable = false}, SHIFT(135),
  [361] = {.count = 1, .reusable = false}, SHIFT(136),
  [363] = {.count = 1, .reusable = false}, SHIFT(147),
  [365] = {.count = 1, .reusable = false}, SHIFT(138),
  [367] = {.count = 1, .reusable = false}, SHIFT(139),
  [369] = {.count = 1, .reusable = false}, SHIFT(140),
  [371] = {.count = 1, .reusable = false}, SHIFT(141),
  [373] = {.count = 1, .reusable = false}, SHIFT(142),
  [375] = {.count = 1, .reusable = false}, SHIFT(143),
  [377] = {.count = 1, .reusable = false}, SHIFT(144),
  [379] = {.count = 1, .reusable = false}, SHIFT(145),
  [381] = {.count = 1, .reusable = false}, SHIFT(146),
  [383] = {.count = 1, .reusable = true}, SHIFT(148),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym_ignore_form, 2),
  [387] = {.count = 1, .reusable = false}, REDUCE(sym_ignore_form, 2),
  [389] = {.count = 1, .reusable = true}, SHIFT(149),
  [391] = {.count = 1, .reusable = false}, SHIFT(150),
  [393] = {.count = 1, .reusable = false}, SHIFT(151),
  [395] = {.count = 1, .reusable = false}, SHIFT(152),
  [397] = {.count = 1, .reusable = false}, SHIFT(153),
  [399] = {.count = 1, .reusable = true}, REDUCE(sym_comment_macro, 2),
  [401] = {.count = 1, .reusable = false}, REDUCE(sym_comment_macro, 2),
  [403] = {.count = 1, .reusable = true}, SHIFT(154),
  [405] = {.count = 1, .reusable = true}, SHIFT(155),
  [407] = {.count = 1, .reusable = false}, SHIFT(156),
  [409] = {.count = 1, .reusable = false}, SHIFT(158),
  [411] = {.count = 1, .reusable = false}, SHIFT(157),
  [413] = {.count = 1, .reusable = false}, SHIFT(160),
  [415] = {.count = 1, .reusable = false}, SHIFT(159),
  [417] = {.count = 1, .reusable = false}, SHIFT(162),
  [419] = {.count = 1, .reusable = false}, SHIFT(161),
  [421] = {.count = 1, .reusable = true}, SHIFT(163),
  [423] = {.count = 1, .reusable = false}, SHIFT(165),
  [425] = {.count = 1, .reusable = false}, SHIFT(164),
  [427] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [429] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(90),
  [432] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [435] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(22),
  [438] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(22),
  [441] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [444] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [447] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [450] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [453] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [456] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [459] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [462] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [465] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [468] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [471] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [474] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [477] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [480] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(16),
  [483] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [486] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [489] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(19),
  [492] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(20),
  [495] = {.count = 1, .reusable = true}, SHIFT(166),
  [497] = {.count = 1, .reusable = true}, REDUCE(sym__octal_char, 2),
  [499] = {.count = 1, .reusable = false}, REDUCE(sym__octal_char, 2),
  [501] = {.count = 1, .reusable = true}, REDUCE(sym__string, 3),
  [503] = {.count = 1, .reusable = false}, REDUCE(sym__string, 3),
  [505] = {.count = 1, .reusable = false}, REDUCE(aux_sym__string_repeat1, 2),
  [507] = {.count = 2, .reusable = false}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(94),
  [510] = {.count = 1, .reusable = true}, REDUCE(sym__regex, 3),
  [512] = {.count = 1, .reusable = false}, REDUCE(sym__regex, 3),
  [514] = {.count = 1, .reusable = false}, REDUCE(aux_sym__regex_repeat1, 2),
  [516] = {.count = 2, .reusable = false}, REDUCE(aux_sym__regex_repeat1, 2), SHIFT_REPEAT(96),
  [519] = {.count = 1, .reusable = true}, SHIFT(167),
  [521] = {.count = 1, .reusable = false}, SHIFT(168),
  [523] = {.count = 1, .reusable = true}, REDUCE(sym_quote, 3),
  [525] = {.count = 1, .reusable = false}, REDUCE(sym_quote, 3),
  [527] = {.count = 1, .reusable = true}, SHIFT(169),
  [529] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_symbol, 3),
  [531] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_symbol, 3),
  [533] = {.count = 1, .reusable = true}, SHIFT(170),
  [535] = {.count = 1, .reusable = false}, SHIFT(171),
  [537] = {.count = 1, .reusable = true}, REDUCE(sym__list, 3),
  [539] = {.count = 1, .reusable = false}, REDUCE(sym__list, 3),
  [541] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(105),
  [544] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(48),
  [547] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(50),
  [550] = {.count = 1, .reusable = true}, SHIFT(172),
  [552] = {.count = 1, .reusable = false}, SHIFT(173),
  [554] = {.count = 1, .reusable = true}, REDUCE(sym__vector, 3),
  [556] = {.count = 1, .reusable = false}, REDUCE(sym__vector, 3),
  [558] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(109),
  [561] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(52),
  [564] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(54),
  [567] = {.count = 1, .reusable = true}, SHIFT(174),
  [569] = {.count = 1, .reusable = false}, SHIFT(175),
  [571] = {.count = 1, .reusable = false}, REDUCE(sym__hash_map_kv_pair, 2),
  [573] = {.count = 1, .reusable = true}, REDUCE(sym__hash_map_kv_pair, 2),
  [575] = {.count = 1, .reusable = true}, REDUCE(sym__hash_map, 3),
  [577] = {.count = 1, .reusable = false}, REDUCE(sym__hash_map, 3),
  [579] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(59),
  [582] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(2),
  [585] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(22),
  [588] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(22),
  [591] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(3),
  [594] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(4),
  [597] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(5),
  [600] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(56),
  [603] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(7),
  [606] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(8),
  [609] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(9),
  [612] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(10),
  [615] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(11),
  [618] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(12),
  [621] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(13),
  [624] = {.count = 1, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2),
  [626] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(14),
  [629] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(15),
  [632] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(16),
  [635] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(17),
  [638] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(18),
  [641] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(58),
  [644] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(20),
  [647] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 3),
  [649] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 3),
  [651] = {.count = 1, .reusable = true}, SHIFT(176),
  [653] = {.count = 1, .reusable = true}, SHIFT(178),
  [655] = {.count = 1, .reusable = false}, SHIFT(179),
  [657] = {.count = 1, .reusable = true}, REDUCE(sym__set, 3),
  [659] = {.count = 1, .reusable = false}, REDUCE(sym__set, 3),
  [661] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(120),
  [664] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(64),
  [667] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(66),
  [670] = {.count = 1, .reusable = false}, SHIFT(180),
  [672] = {.count = 1, .reusable = false}, SHIFT(181),
  [674] = {.count = 1, .reusable = true}, SHIFT(182),
  [676] = {.count = 1, .reusable = true}, REDUCE(sym__paren_sequence, 2),
  [678] = {.count = 1, .reusable = false}, REDUCE(sym__paren_sequence, 2),
  [680] = {.count = 1, .reusable = false}, SHIFT(183),
  [682] = {.count = 1, .reusable = false}, SHIFT(184),
  [684] = {.count = 1, .reusable = false}, SHIFT(185),
  [686] = {.count = 1, .reusable = true}, SHIFT(186),
  [688] = {.count = 1, .reusable = true}, SHIFT(187),
  [690] = {.count = 1, .reusable = false}, SHIFT(188),
  [692] = {.count = 1, .reusable = false}, SHIFT(190),
  [694] = {.count = 1, .reusable = false}, SHIFT(189),
  [696] = {.count = 1, .reusable = false}, SHIFT(192),
  [698] = {.count = 1, .reusable = false}, SHIFT(191),
  [700] = {.count = 1, .reusable = true}, REDUCE(sym__bracket_sequence, 2),
  [702] = {.count = 1, .reusable = false}, REDUCE(sym__bracket_sequence, 2),
  [704] = {.count = 1, .reusable = false}, SHIFT(194),
  [706] = {.count = 1, .reusable = false}, SHIFT(193),
  [708] = {.count = 1, .reusable = true}, SHIFT(195),
  [710] = {.count = 1, .reusable = false}, SHIFT(197),
  [712] = {.count = 1, .reusable = false}, SHIFT(196),
  [714] = {.count = 1, .reusable = false}, SHIFT(198),
  [716] = {.count = 1, .reusable = false}, SHIFT(199),
  [718] = {.count = 1, .reusable = true}, SHIFT(200),
  [720] = {.count = 1, .reusable = true}, SHIFT(201),
  [722] = {.count = 1, .reusable = false}, SHIFT(202),
  [724] = {.count = 1, .reusable = false}, SHIFT(204),
  [726] = {.count = 1, .reusable = false}, SHIFT(203),
  [728] = {.count = 1, .reusable = false}, SHIFT(206),
  [730] = {.count = 1, .reusable = false}, SHIFT(205),
  [732] = {.count = 1, .reusable = false}, SHIFT(208),
  [734] = {.count = 1, .reusable = false}, SHIFT(207),
  [736] = {.count = 1, .reusable = true}, REDUCE(sym__curly_brace_sequence, 2),
  [738] = {.count = 1, .reusable = false}, REDUCE(sym__curly_brace_sequence, 2),
  [740] = {.count = 1, .reusable = true}, SHIFT(209),
  [742] = {.count = 1, .reusable = false}, SHIFT(211),
  [744] = {.count = 1, .reusable = false}, SHIFT(210),
  [746] = {.count = 1, .reusable = false}, SHIFT(212),
  [748] = {.count = 1, .reusable = true}, REDUCE(sym_ignore_form, 3),
  [750] = {.count = 1, .reusable = false}, REDUCE(sym_ignore_form, 3),
  [752] = {.count = 1, .reusable = true}, SHIFT(213),
  [754] = {.count = 1, .reusable = true}, SHIFT(214),
  [756] = {.count = 1, .reusable = false}, REDUCE(aux_sym_ignore_form_repeat1, 2),
  [758] = {.count = 2, .reusable = false}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(151),
  [761] = {.count = 1, .reusable = false}, SHIFT(215),
  [763] = {.count = 1, .reusable = false}, SHIFT(216),
  [765] = {.count = 1, .reusable = true}, SHIFT(217),
  [767] = {.count = 1, .reusable = false}, SHIFT(218),
  [769] = {.count = 1, .reusable = false}, SHIFT(219),
  [771] = {.count = 1, .reusable = false}, SHIFT(220),
  [773] = {.count = 1, .reusable = false}, SHIFT(221),
  [775] = {.count = 1, .reusable = true}, REDUCE(sym_comment_macro, 3),
  [777] = {.count = 1, .reusable = false}, REDUCE(sym_comment_macro, 3),
  [779] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(165),
  [782] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(80),
  [785] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2),
  [787] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(82),
  [790] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(83),
  [793] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(84),
  [796] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(85),
  [799] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(86),
  [802] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(87),
  [805] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(88),
  [808] = {.count = 1, .reusable = true}, SHIFT(222),
  [810] = {.count = 1, .reusable = true}, SHIFT(223),
  [812] = {.count = 1, .reusable = true}, SHIFT(224),
  [814] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_keyword, 4),
  [816] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_keyword, 4),
  [818] = {.count = 1, .reusable = true}, SHIFT(225),
  [820] = {.count = 1, .reusable = true}, SHIFT(226),
  [822] = {.count = 1, .reusable = true}, SHIFT(227),
  [824] = {.count = 1, .reusable = true}, SHIFT(228),
  [826] = {.count = 1, .reusable = true}, SHIFT(229),
  [828] = {.count = 1, .reusable = true}, SHIFT(230),
  [830] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 4),
  [832] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 4),
  [834] = {.count = 1, .reusable = true}, SHIFT(231),
  [836] = {.count = 1, .reusable = true}, SHIFT(232),
  [838] = {.count = 1, .reusable = true}, SHIFT(233),
  [840] = {.count = 1, .reusable = true}, SHIFT(234),
  [842] = {.count = 1, .reusable = true}, REDUCE(sym__paren_sequence, 3),
  [844] = {.count = 1, .reusable = false}, REDUCE(sym__paren_sequence, 3),
  [846] = {.count = 1, .reusable = false}, SHIFT(235),
  [848] = {.count = 1, .reusable = false}, SHIFT(236),
  [850] = {.count = 1, .reusable = true}, SHIFT(237),
  [852] = {.count = 1, .reusable = false}, SHIFT(238),
  [854] = {.count = 1, .reusable = false}, SHIFT(239),
  [856] = {.count = 1, .reusable = false}, SHIFT(240),
  [858] = {.count = 1, .reusable = false}, SHIFT(241),
  [860] = {.count = 1, .reusable = true}, REDUCE(sym__bracket_sequence, 3),
  [862] = {.count = 1, .reusable = false}, REDUCE(sym__bracket_sequence, 3),
  [864] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(197),
  [867] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(128),
  [870] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(129),
  [873] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(130),
  [876] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(131),
  [879] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(132),
  [882] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(133),
  [885] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(135),
  [888] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(136),
  [891] = {.count = 1, .reusable = false}, SHIFT(242),
  [893] = {.count = 1, .reusable = false}, SHIFT(243),
  [895] = {.count = 1, .reusable = true}, SHIFT(244),
  [897] = {.count = 1, .reusable = false}, SHIFT(245),
  [899] = {.count = 1, .reusable = false}, SHIFT(246),
  [901] = {.count = 1, .reusable = false}, SHIFT(247),
  [903] = {.count = 1, .reusable = false}, SHIFT(248),
  [905] = {.count = 1, .reusable = true}, REDUCE(sym__curly_brace_sequence, 3),
  [907] = {.count = 1, .reusable = false}, REDUCE(sym__curly_brace_sequence, 3),
  [909] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(211),
  [912] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(138),
  [915] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(139),
  [918] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(140),
  [921] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(141),
  [924] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(142),
  [927] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(143),
  [930] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(144),
  [933] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(146),
  [936] = {.count = 1, .reusable = false}, SHIFT(249),
  [938] = {.count = 1, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2),
  [940] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(213),
  [943] = {.count = 1, .reusable = true}, REDUCE(sym_ignore_form, 4),
  [945] = {.count = 1, .reusable = false}, REDUCE(sym_ignore_form, 4),
  [947] = {.count = 1, .reusable = true}, SHIFT(250),
  [949] = {.count = 1, .reusable = false}, SHIFT(251),
  [951] = {.count = 1, .reusable = true}, SHIFT(252),
  [953] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(223),
  [956] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(225),
  [959] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(227),
  [962] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(229),
  [965] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 5),
  [967] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 5),
  [969] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(232),
  [972] = {.count = 1, .reusable = true}, SHIFT(253),
  [974] = {.count = 1, .reusable = false}, SHIFT(254),
  [976] = {.count = 1, .reusable = true}, SHIFT(255),
  [978] = {.count = 1, .reusable = false}, SHIFT(256),
  [980] = {.count = 1, .reusable = true}, REDUCE(sym__curly_brace_sequence, 4),
  [982] = {.count = 1, .reusable = false}, REDUCE(sym__curly_brace_sequence, 4),
  [984] = {.count = 1, .reusable = true}, REDUCE(sym__unicode_char, 5),
  [986] = {.count = 1, .reusable = false}, REDUCE(sym__unicode_char, 5),
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
