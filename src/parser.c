#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 286
#define SYMBOL_COUNT 121
#define ALIAS_COUNT 0
#define TOKEN_COUNT 58
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
  anon_sym_DASH_GT = 32,
  anon_sym_DASH_GT_GT = 33,
  anon_sym_as_DASH_GT = 34,
  anon_sym_some_DASH_GT = 35,
  anon_sym_some_DASH_GT_GT = 36,
  anon_sym_cond_DASH_GT = 37,
  anon_sym_cond_DASH_GT_GT = 38,
  sym__symbol_chars = 39,
  anon_sym_LPAREN = 40,
  anon_sym_LBRACK = 41,
  anon_sym_RBRACK = 42,
  anon_sym_LBRACE = 43,
  anon_sym_RBRACE = 44,
  anon_sym_POUND_COLON_COLON_LBRACE = 45,
  anon_sym_POUND = 46,
  anon_sym_POUND_LBRACE = 47,
  anon_sym_SEMI = 48,
  aux_sym_SLASH_DOT_STAR_SLASH = 49,
  anon_sym_POUND_BANG = 50,
  anon_sym_POUND_ = 51,
  anon_sym_ = 52,
  anon_sym_LPARENcomment = 53,
  aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH = 54,
  anon_sym_fn = 55,
  sym_named_function = 56,
  sym_shorthand_function = 57,
  sym_program = 58,
  sym__anything = 59,
  sym__literal = 60,
  sym__collection_literal = 61,
  sym_boolean = 62,
  sym_number = 63,
  sym__number = 64,
  sym_character = 65,
  sym__character = 66,
  sym__special_char = 67,
  sym__unicode_char = 68,
  sym__octal_char = 69,
  sym__octal_num = 70,
  sym_string = 71,
  sym__string = 72,
  sym_regex = 73,
  sym__regex = 74,
  sym_quote = 75,
  sym__quote = 76,
  sym_keyword = 77,
  sym__keyword = 78,
  sym__unqualified_keyword = 79,
  sym_qualified_keyword = 80,
  sym_symbol = 81,
  sym__symbol = 82,
  sym_threading_macro = 83,
  sym_qualified_symbol = 84,
  sym_list = 85,
  sym__list = 86,
  sym_vector = 87,
  sym__vector = 88,
  sym_hash_map = 89,
  sym__hash_map = 90,
  sym_namespace_map = 91,
  sym__hash_map_kv_pair = 92,
  sym__hash_map_key = 93,
  sym__hash_map_value = 94,
  sym_set = 95,
  sym__set = 96,
  sym_comment = 97,
  sym_semicolon = 98,
  sym_shebang_line = 99,
  sym_ignore_form = 100,
  sym_comment_macro = 101,
  sym__one_form = 102,
  sym__paren_sequence = 103,
  sym__bracket_sequence = 104,
  sym__curly_brace_sequence = 105,
  sym_special_form = 106,
  sym_function = 107,
  sym_anonymous_function = 108,
  sym_function_name = 109,
  sym__single_arity_fn = 110,
  sym__multi_arity_fn = 111,
  sym_function_body = 112,
  sym_params = 113,
  aux_sym_program_repeat1 = 114,
  aux_sym__string_repeat1 = 115,
  aux_sym__regex_repeat1 = 116,
  aux_sym__hash_map_repeat1 = 117,
  aux_sym_ignore_form_repeat1 = 118,
  aux_sym_comment_macro_repeat1 = 119,
  aux_sym__multi_arity_fn_repeat1 = 120,
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
  [anon_sym_DASH_GT] = "->",
  [anon_sym_DASH_GT_GT] = "->>",
  [anon_sym_as_DASH_GT] = "as->",
  [anon_sym_some_DASH_GT] = "some->",
  [anon_sym_some_DASH_GT_GT] = "some->>",
  [anon_sym_cond_DASH_GT] = "cond->",
  [anon_sym_cond_DASH_GT_GT] = "cond->>",
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
  [anon_sym_fn] = "fn",
  [sym_named_function] = "named_function",
  [sym_shorthand_function] = "shorthand_function",
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
  [sym__quote] = "_quote",
  [sym_keyword] = "keyword",
  [sym__keyword] = "_keyword",
  [sym__unqualified_keyword] = "_unqualified_keyword",
  [sym_qualified_keyword] = "qualified_keyword",
  [sym_symbol] = "symbol",
  [sym__symbol] = "_symbol",
  [sym_threading_macro] = "threading_macro",
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
  [sym_special_form] = "special_form",
  [sym_function] = "function",
  [sym_anonymous_function] = "anonymous_function",
  [sym_function_name] = "function_name",
  [sym__single_arity_fn] = "_single_arity_fn",
  [sym__multi_arity_fn] = "_multi_arity_fn",
  [sym_function_body] = "function_body",
  [sym_params] = "params",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym__string_repeat1] = "_string_repeat1",
  [aux_sym__regex_repeat1] = "_regex_repeat1",
  [aux_sym__hash_map_repeat1] = "_hash_map_repeat1",
  [aux_sym_ignore_form_repeat1] = "ignore_form_repeat1",
  [aux_sym_comment_macro_repeat1] = "comment_macro_repeat1",
  [aux_sym__multi_arity_fn_repeat1] = "_multi_arity_fn_repeat1",
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
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_some_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_some_DASH_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cond_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cond_DASH_GT_GT] = {
    .visible = true,
    .named = false,
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
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [sym_named_function] = {
    .visible = true,
    .named = true,
  },
  [sym_shorthand_function] = {
    .visible = true,
    .named = true,
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
  [sym__quote] = {
    .visible = false,
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
  [sym_threading_macro] = {
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
  [sym_special_form] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_anonymous_function] = {
    .visible = true,
    .named = true,
  },
  [sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [sym__single_arity_fn] = {
    .visible = false,
    .named = true,
  },
  [sym__multi_arity_fn] = {
    .visible = false,
    .named = true,
  },
  [sym_function_body] = {
    .visible = true,
    .named = true,
  },
  [sym_params] = {
    .visible = true,
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
  [aux_sym__multi_arity_fn_repeat1] = {
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
      if (lookahead == '+')
        ADVANCE(26);
      if (lookahead == ',')
        SKIP(0);
      if (lookahead == '-')
        ADVANCE(28);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == '/')
        ADVANCE(39);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == 'T')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(60);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == 'n')
        ADVANCE(62);
      if (lookahead == 'o')
        ADVANCE(71);
      if (lookahead == 'r')
        ADVANCE(72);
      if (lookahead == 's')
        ADVANCE(78);
      if (lookahead == 't')
        ADVANCE(89);
      if (lookahead == 'u')
        ADVANCE(95);
      if (lookahead == '{')
        ADVANCE(96);
      if (lookahead == '}')
        ADVANCE(97);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(102);
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
      ACCEPT_TOKEN(sym_number_long);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '>')
        ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead == '>')
        ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GT);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_number_double);
      if (lookahead == '_')
        ADVANCE(33);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(34);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '_')
        ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == '+')
        ADVANCE(35);
      if (lookahead == '-')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(36);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_number_double);
      if (lookahead == '_')
        ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '_')
        ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(36);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_number_double);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 43:
      if (lookahead == 'O')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'D')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'O')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == ':')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == ' ')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'w')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'r')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'i')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 't')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'e')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == ' ')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'm')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'e')
        ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_named_function);
      if (lookahead == ' ')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == '2')
        ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_shorthand_function);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 62:
      if (lookahead == 'e')
        ADVANCE(63);
      if (lookahead == 'i')
        ADVANCE(69);
      END_STATE();
    case 63:
      if (lookahead == 'w')
        ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 'l')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 'i')
        ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'n')
        ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 'e')
        ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_newline);
      END_STATE();
    case 69:
      if (lookahead == 'l')
        ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 72:
      if (lookahead == 'e')
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 't')
        ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == 'u')
        ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == 'r')
        ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == 'n')
        ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 78:
      if (lookahead == 'o')
        ADVANCE(79);
      if (lookahead == 'p')
        ADVANCE(85);
      END_STATE();
    case 79:
      if (lookahead == 'm')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == 'e')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == '-')
        ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == '>')
        ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_some_DASH_GT);
      if (lookahead == '>')
        ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_some_DASH_GT_GT);
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
      ACCEPT_TOKEN(anon_sym_space);
      END_STATE();
    case 89:
      if (lookahead == 'a')
        ADVANCE(90);
      if (lookahead == 'r')
        ADVANCE(92);
      END_STATE();
    case 90:
      if (lookahead == 'b')
        ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_tab);
      END_STATE();
    case 92:
      if (lookahead == 'u')
        ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'e')
        ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_number_long);
      if (lookahead == '.')
        ADVANCE(99);
      if (lookahead == '_')
        ADVANCE(100);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(34);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_number_double);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(34);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(32);
      END_STATE();
    case 100:
      if (lookahead == '_')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == '.')
        ADVANCE(99);
      if (lookahead == '_')
        ADVANCE(100);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(34);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__hex_char);
      END_STATE();
    case 103:
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
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        SKIP(103);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == 'T')
        ADVANCE(108);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(60);
      if (lookahead == 'a')
        ADVANCE(113);
      if (lookahead == 'c')
        ADVANCE(117);
      if (lookahead == 'f')
        ADVANCE(124);
      if (lookahead == 'n')
        ADVANCE(129);
      if (lookahead == 's')
        ADVANCE(132);
      if (lookahead == 't')
        ADVANCE(137);
      if (lookahead == '{')
        ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(103);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(106);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
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
        ADVANCE(106);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_number_long);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
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
        ADVANCE(106);
      END_STATE();
    case 106:
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
        ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '>')
        ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
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
        ADVANCE(106);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'O')
        ADVANCE(109);
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
        ADVANCE(106);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'D')
        ADVANCE(110);
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
        ADVANCE(106);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'O')
        ADVANCE(111);
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
        ADVANCE(106);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == ':')
        ADVANCE(112);
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
        ADVANCE(106);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == ' ')
        ADVANCE(48);
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
        ADVANCE(106);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 's')
        ADVANCE(114);
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
        ADVANCE(106);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '-')
        ADVANCE(115);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(106);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '>')
        ADVANCE(116);
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
        ADVANCE(106);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_as_DASH_GT);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'o')
        ADVANCE(118);
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
        ADVANCE(106);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'n')
        ADVANCE(119);
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
        ADVANCE(106);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'd')
        ADVANCE(120);
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
        ADVANCE(106);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '-')
        ADVANCE(121);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(106);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '>')
        ADVANCE(122);
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
        ADVANCE(106);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_cond_DASH_GT);
      if (lookahead == '>')
        ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_cond_DASH_GT_GT);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'a')
        ADVANCE(125);
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
        ADVANCE(106);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'l')
        ADVANCE(126);
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
        ADVANCE(106);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 's')
        ADVANCE(127);
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
        ADVANCE(106);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'e')
        ADVANCE(128);
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
        ADVANCE(106);
      END_STATE();
    case 128:
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
        ADVANCE(106);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'i')
        ADVANCE(130);
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
        ADVANCE(106);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'l')
        ADVANCE(131);
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
        ADVANCE(106);
      END_STATE();
    case 131:
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
        ADVANCE(106);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'o')
        ADVANCE(133);
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
        ADVANCE(106);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'm')
        ADVANCE(134);
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
        ADVANCE(106);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'e')
        ADVANCE(135);
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
        ADVANCE(106);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '-')
        ADVANCE(136);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(106);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '>')
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
        ADVANCE(106);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'r')
        ADVANCE(138);
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
        ADVANCE(106);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'u')
        ADVANCE(139);
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
        ADVANCE(106);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'e')
        ADVANCE(140);
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
        ADVANCE(106);
      END_STATE();
    case 140:
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
        ADVANCE(106);
      END_STATE();
    case 141:
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
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        SKIP(141);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == 'T')
        ADVANCE(108);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(60);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == 'a')
        ADVANCE(113);
      if (lookahead == 'c')
        ADVANCE(117);
      if (lookahead == 'f')
        ADVANCE(124);
      if (lookahead == 'n')
        ADVANCE(129);
      if (lookahead == 's')
        ADVANCE(132);
      if (lookahead == 't')
        ADVANCE(137);
      if (lookahead == '{')
        ADVANCE(96);
      if (lookahead == '}')
        ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(141);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(106);
      END_STATE();
    case 142:
      if (lookahead == '\n')
        SKIP(142);
      if (lookahead == ',')
        ADVANCE(143);
      if (lookahead == 'b')
        ADVANCE(144);
      if (lookahead == 'f')
        ADVANCE(153);
      if (lookahead == 'n')
        ADVANCE(161);
      if (lookahead == 'o')
        ADVANCE(71);
      if (lookahead == 'r')
        ADVANCE(162);
      if (lookahead == 's')
        ADVANCE(163);
      if (lookahead == 't')
        ADVANCE(164);
      if (lookahead == 'u')
        ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(143);
      if (lookahead != 0)
        ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__normal_char);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'a')
        ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 'c')
        ADVANCE(146);
      END_STATE();
    case 146:
      if (lookahead == 'k')
        ADVANCE(147);
      END_STATE();
    case 147:
      if (lookahead == 's')
        ADVANCE(148);
      END_STATE();
    case 148:
      if (lookahead == 'p')
        ADVANCE(149);
      END_STATE();
    case 149:
      if (lookahead == 'a')
        ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == 'c')
        ADVANCE(151);
      END_STATE();
    case 151:
      if (lookahead == 'e')
        ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_backspace);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'o')
        ADVANCE(154);
      END_STATE();
    case 154:
      if (lookahead == 'r')
        ADVANCE(155);
      END_STATE();
    case 155:
      if (lookahead == 'm')
        ADVANCE(156);
      END_STATE();
    case 156:
      if (lookahead == 'f')
        ADVANCE(157);
      END_STATE();
    case 157:
      if (lookahead == 'e')
        ADVANCE(158);
      END_STATE();
    case 158:
      if (lookahead == 'e')
        ADVANCE(159);
      END_STATE();
    case 159:
      if (lookahead == 'd')
        ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_formfeed);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'e')
        ADVANCE(63);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'e')
        ADVANCE(73);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'p')
        ADVANCE(85);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'a')
        ADVANCE(90);
      END_STATE();
    case 165:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(166);
      if (lookahead == '\\')
        ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(166);
      if (lookahead != 0)
        ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 169:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(170);
      if (lookahead == '\\')
        ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(170);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(169);
      if (lookahead != 0)
        ADVANCE(170);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(168);
      END_STATE();
    case 172:
      if (lookahead == ',')
        SKIP(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(172);
      if (lookahead == '!' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__keyword_chars);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(173);
      END_STATE();
    case 174:
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
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        SKIP(174);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == '/')
        ADVANCE(39);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == 'T')
        ADVANCE(108);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(60);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == 'a')
        ADVANCE(113);
      if (lookahead == 'c')
        ADVANCE(117);
      if (lookahead == 'f')
        ADVANCE(124);
      if (lookahead == 'n')
        ADVANCE(129);
      if (lookahead == 's')
        ADVANCE(132);
      if (lookahead == 't')
        ADVANCE(137);
      if (lookahead == '{')
        ADVANCE(96);
      if (lookahead == '}')
        ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(174);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(106);
      END_STATE();
    case 175:
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
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        SKIP(175);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == 'T')
        ADVANCE(108);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(60);
      if (lookahead == 'a')
        ADVANCE(113);
      if (lookahead == 'c')
        ADVANCE(117);
      if (lookahead == 'f')
        ADVANCE(176);
      if (lookahead == 'n')
        ADVANCE(129);
      if (lookahead == 's')
        ADVANCE(132);
      if (lookahead == 't')
        ADVANCE(137);
      if (lookahead == '{')
        ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(175);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(106);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'a')
        ADVANCE(125);
      if (lookahead == 'n')
        ADVANCE(177);
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
        ADVANCE(106);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_fn);
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
        ADVANCE(106);
      END_STATE();
    case 178:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        SKIP(178);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == 'T')
        ADVANCE(108);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(60);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == 'a')
        ADVANCE(113);
      if (lookahead == 'c')
        ADVANCE(117);
      if (lookahead == 'f')
        ADVANCE(124);
      if (lookahead == 'n')
        ADVANCE(129);
      if (lookahead == 's')
        ADVANCE(132);
      if (lookahead == 't')
        ADVANCE(137);
      if (lookahead == '{')
        ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(178);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(106);
      END_STATE();
    case 179:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        SKIP(179);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == 'T')
        ADVANCE(108);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(60);
      if (lookahead == 'a')
        ADVANCE(113);
      if (lookahead == 'c')
        ADVANCE(117);
      if (lookahead == 'f')
        ADVANCE(124);
      if (lookahead == 'n')
        ADVANCE(129);
      if (lookahead == 's')
        ADVANCE(132);
      if (lookahead == 't')
        ADVANCE(137);
      if (lookahead == '{')
        ADVANCE(96);
      if (lookahead == '}')
        ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(179);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(106);
      END_STATE();
    case 180:
      if (lookahead == '(')
        ADVANCE(181);
      if (lookahead == ')')
        ADVANCE(25);
      if (lookahead == ',')
        SKIP(180);
      if (lookahead == '/')
        ADVANCE(39);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(180);
      if (lookahead == '!' ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(106);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == '\n')
        SKIP(182);
      if (lookahead == ',')
        ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(183);
      if (lookahead != 0)
        ADVANCE(184);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == ',')
        ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(184);
      END_STATE();
    case 185:
      if (lookahead == ' ')
        ADVANCE(186);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(187);
      if (lookahead == '(')
        ADVANCE(181);
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        ADVANCE(188);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '.')
        ADVANCE(189);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == 'a')
        ADVANCE(113);
      if (lookahead == 'c')
        ADVANCE(117);
      if (lookahead == 's')
        ADVANCE(132);
      if (lookahead == '{')
        ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(106);
      if (lookahead != 0)
        ADVANCE(188);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(32);
      END_STATE();
    case 190:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(187);
      if (lookahead == '(')
        ADVANCE(181);
      if (lookahead == ')')
        ADVANCE(25);
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        ADVANCE(188);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '.')
        ADVANCE(189);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == 'a')
        ADVANCE(113);
      if (lookahead == 'c')
        ADVANCE(117);
      if (lookahead == 's')
        ADVANCE(132);
      if (lookahead == '{')
        ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(106);
      if (lookahead != 0)
        ADVANCE(188);
      END_STATE();
    case 191:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        SKIP(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(191);
      END_STATE();
    case 192:
      if (lookahead == ',')
        SKIP(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(102);
      END_STATE();
    case 193:
      if (lookahead == ',')
        SKIP(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(193);
      if (('0' <= lookahead && lookahead <= '3'))
        ADVANCE(194);
      if (('4' <= lookahead && lookahead <= '7'))
        ADVANCE(197);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 199:
      if (lookahead == '(')
        ADVANCE(181);
      if (lookahead == ',')
        SKIP(199);
      if (lookahead == '-')
        ADVANCE(200);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == 'a')
        ADVANCE(113);
      if (lookahead == 'c')
        ADVANCE(117);
      if (lookahead == 's')
        ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(199);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(106);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '>')
        ADVANCE(29);
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
        ADVANCE(106);
      END_STATE();
    case 201:
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
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        SKIP(201);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == 'T')
        ADVANCE(108);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(60);
      if (lookahead == 'a')
        ADVANCE(113);
      if (lookahead == 'c')
        ADVANCE(117);
      if (lookahead == 'f')
        ADVANCE(124);
      if (lookahead == 'n')
        ADVANCE(129);
      if (lookahead == 's')
        ADVANCE(132);
      if (lookahead == 't')
        ADVANCE(137);
      if (lookahead == '{')
        ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(201);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(106);
      END_STATE();
    case 202:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(186);
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
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        SKIP(202);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == 'T')
        ADVANCE(108);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(60);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == 'a')
        ADVANCE(113);
      if (lookahead == 'c')
        ADVANCE(117);
      if (lookahead == 'f')
        ADVANCE(124);
      if (lookahead == 'n')
        ADVANCE(129);
      if (lookahead == 's')
        ADVANCE(132);
      if (lookahead == 't')
        ADVANCE(137);
      if (lookahead == '{')
        ADVANCE(96);
      if (lookahead == '}')
        ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(202);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(106);
      END_STATE();
    case 203:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(186);
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
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        SKIP(203);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == '/')
        ADVANCE(39);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == 'T')
        ADVANCE(108);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(60);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == 'a')
        ADVANCE(113);
      if (lookahead == 'c')
        ADVANCE(117);
      if (lookahead == 'f')
        ADVANCE(124);
      if (lookahead == 'n')
        ADVANCE(129);
      if (lookahead == 's')
        ADVANCE(132);
      if (lookahead == 't')
        ADVANCE(137);
      if (lookahead == '{')
        ADVANCE(96);
      if (lookahead == '}')
        ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(203);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(106);
      END_STATE();
    case 204:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(187);
      if (lookahead == '(')
        ADVANCE(181);
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        ADVANCE(188);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '.')
        ADVANCE(189);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == 'a')
        ADVANCE(113);
      if (lookahead == 'c')
        ADVANCE(117);
      if (lookahead == 's')
        ADVANCE(132);
      if (lookahead == '{')
        ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(106);
      if (lookahead != 0)
        ADVANCE(188);
      END_STATE();
    case 205:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(187);
      if (lookahead == '(')
        ADVANCE(181);
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        ADVANCE(188);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '.')
        ADVANCE(189);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == 'a')
        ADVANCE(113);
      if (lookahead == 'c')
        ADVANCE(117);
      if (lookahead == 's')
        ADVANCE(132);
      if (lookahead == '{')
        ADVANCE(96);
      if (lookahead == '}')
        ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(106);
      if (lookahead != 0)
        ADVANCE(188);
      END_STATE();
    case 206:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(186);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        SKIP(206);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == 'T')
        ADVANCE(108);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(60);
      if (lookahead == 'a')
        ADVANCE(113);
      if (lookahead == 'c')
        ADVANCE(117);
      if (lookahead == 'f')
        ADVANCE(124);
      if (lookahead == 'n')
        ADVANCE(129);
      if (lookahead == 's')
        ADVANCE(132);
      if (lookahead == 't')
        ADVANCE(137);
      if (lookahead == '{')
        ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(206);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(106);
      END_STATE();
    case 207:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(187);
      if (lookahead == '(')
        ADVANCE(181);
      if (lookahead == ')')
        ADVANCE(25);
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        ADVANCE(188);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '.')
        ADVANCE(189);
      if (lookahead == '/')
        ADVANCE(39);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == 'a')
        ADVANCE(113);
      if (lookahead == 'c')
        ADVANCE(117);
      if (lookahead == 's')
        ADVANCE(132);
      if (lookahead == '{')
        ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(106);
      if (lookahead != 0)
        ADVANCE(188);
      END_STATE();
    case 208:
      if (lookahead == ' ')
        ADVANCE(186);
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
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        SKIP(208);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == 'T')
        ADVANCE(108);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(60);
      if (lookahead == 'a')
        ADVANCE(113);
      if (lookahead == 'c')
        ADVANCE(117);
      if (lookahead == 'f')
        ADVANCE(124);
      if (lookahead == 'n')
        ADVANCE(129);
      if (lookahead == 's')
        ADVANCE(132);
      if (lookahead == 't')
        ADVANCE(137);
      if (lookahead == '{')
        ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(208);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(106);
      END_STATE();
    case 209:
      if (lookahead == ' ')
        ADVANCE(186);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        SKIP(209);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == 'T')
        ADVANCE(108);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(60);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == 'a')
        ADVANCE(113);
      if (lookahead == 'c')
        ADVANCE(117);
      if (lookahead == 'f')
        ADVANCE(124);
      if (lookahead == 'n')
        ADVANCE(129);
      if (lookahead == 's')
        ADVANCE(132);
      if (lookahead == 't')
        ADVANCE(137);
      if (lookahead == '{')
        ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(209);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(106);
      END_STATE();
    case 210:
      if (lookahead == ' ')
        ADVANCE(186);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        SKIP(210);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == 'T')
        ADVANCE(108);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(60);
      if (lookahead == 'a')
        ADVANCE(113);
      if (lookahead == 'c')
        ADVANCE(117);
      if (lookahead == 'f')
        ADVANCE(124);
      if (lookahead == 'n')
        ADVANCE(129);
      if (lookahead == 's')
        ADVANCE(132);
      if (lookahead == 't')
        ADVANCE(137);
      if (lookahead == '{')
        ADVANCE(96);
      if (lookahead == '}')
        ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(210);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(106);
      END_STATE();
    case 211:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(187);
      if (lookahead == '(')
        ADVANCE(181);
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        ADVANCE(188);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '.')
        ADVANCE(189);
      if (lookahead == '/')
        ADVANCE(39);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == 'a')
        ADVANCE(113);
      if (lookahead == 'c')
        ADVANCE(117);
      if (lookahead == 's')
        ADVANCE(132);
      if (lookahead == '{')
        ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(106);
      if (lookahead != 0)
        ADVANCE(188);
      END_STATE();
    case 212:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(187);
      if (lookahead == '(')
        ADVANCE(181);
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        ADVANCE(188);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '.')
        ADVANCE(189);
      if (lookahead == '/')
        ADVANCE(39);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == 'a')
        ADVANCE(113);
      if (lookahead == 'c')
        ADVANCE(117);
      if (lookahead == 's')
        ADVANCE(132);
      if (lookahead == '{')
        ADVANCE(96);
      if (lookahead == '}')
        ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(106);
      if (lookahead != 0)
        ADVANCE(188);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 103},
  [2] = {.lex_state = 141},
  [3] = {.lex_state = 142},
  [4] = {.lex_state = 165},
  [5] = {.lex_state = 169},
  [6] = {.lex_state = 103},
  [7] = {.lex_state = 103},
  [8] = {.lex_state = 172},
  [9] = {.lex_state = 172},
  [10] = {.lex_state = 141},
  [11] = {.lex_state = 174},
  [12] = {.lex_state = 175},
  [13] = {.lex_state = 178},
  [14] = {.lex_state = 179},
  [15] = {.lex_state = 179},
  [16] = {.lex_state = 180},
  [17] = {.lex_state = 179},
  [18] = {.lex_state = 182},
  [19] = {.lex_state = 182},
  [20] = {.lex_state = 185},
  [21] = {.lex_state = 190},
  [22] = {.lex_state = 141},
  [23] = {.lex_state = 191},
  [24] = {.lex_state = 141},
  [25] = {.lex_state = 141},
  [26] = {.lex_state = 141},
  [27] = {.lex_state = 141},
  [28] = {.lex_state = 141},
  [29] = {.lex_state = 141},
  [30] = {.lex_state = 141},
  [31] = {.lex_state = 141},
  [32] = {.lex_state = 141},
  [33] = {.lex_state = 141},
  [34] = {.lex_state = 141},
  [35] = {.lex_state = 141},
  [36] = {.lex_state = 141},
  [37] = {.lex_state = 103},
  [38] = {.lex_state = 141},
  [39] = {.lex_state = 192},
  [40] = {.lex_state = 193},
  [41] = {.lex_state = 141},
  [42] = {.lex_state = 165},
  [43] = {.lex_state = 141},
  [44] = {.lex_state = 169},
  [45] = {.lex_state = 141},
  [46] = {.lex_state = 103},
  [47] = {.lex_state = 185},
  [48] = {.lex_state = 175},
  [49] = {.lex_state = 141},
  [50] = {.lex_state = 174},
  [51] = {.lex_state = 180},
  [52] = {.lex_state = 103},
  [53] = {.lex_state = 141},
  [54] = {.lex_state = 185},
  [55] = {.lex_state = 199},
  [56] = {.lex_state = 201},
  [57] = {.lex_state = 103},
  [58] = {.lex_state = 141},
  [59] = {.lex_state = 185},
  [60] = {.lex_state = 178},
  [61] = {.lex_state = 103},
  [62] = {.lex_state = 141},
  [63] = {.lex_state = 185},
  [64] = {.lex_state = 103},
  [65] = {.lex_state = 179},
  [66] = {.lex_state = 141},
  [67] = {.lex_state = 179},
  [68] = {.lex_state = 103},
  [69] = {.lex_state = 103},
  [70] = {.lex_state = 141},
  [71] = {.lex_state = 185},
  [72] = {.lex_state = 179},
  [73] = {.lex_state = 141},
  [74] = {.lex_state = 141},
  [75] = {.lex_state = 165},
  [76] = {.lex_state = 172},
  [77] = {.lex_state = 172},
  [78] = {.lex_state = 202},
  [79] = {.lex_state = 203},
  [80] = {.lex_state = 190},
  [81] = {.lex_state = 204},
  [82] = {.lex_state = 205},
  [83] = {.lex_state = 103},
  [84] = {.lex_state = 206},
  [85] = {.lex_state = 185},
  [86] = {.lex_state = 165},
  [87] = {.lex_state = 141},
  [88] = {.lex_state = 172},
  [89] = {.lex_state = 172},
  [90] = {.lex_state = 190},
  [91] = {.lex_state = 207},
  [92] = {.lex_state = 190},
  [93] = {.lex_state = 204},
  [94] = {.lex_state = 205},
  [95] = {.lex_state = 103},
  [96] = {.lex_state = 190},
  [97] = {.lex_state = 103},
  [98] = {.lex_state = 192},
  [99] = {.lex_state = 141},
  [100] = {.lex_state = 141},
  [101] = {.lex_state = 165},
  [102] = {.lex_state = 141},
  [103] = {.lex_state = 169},
  [104] = {.lex_state = 208},
  [105] = {.lex_state = 185},
  [106] = {.lex_state = 141},
  [107] = {.lex_state = 172},
  [108] = {.lex_state = 141},
  [109] = {.lex_state = 208},
  [110] = {.lex_state = 185},
  [111] = {.lex_state = 180},
  [112] = {.lex_state = 180},
  [113] = {.lex_state = 103},
  [114] = {.lex_state = 180},
  [115] = {.lex_state = 180},
  [116] = {.lex_state = 201},
  [117] = {.lex_state = 180},
  [118] = {.lex_state = 175},
  [119] = {.lex_state = 201},
  [120] = {.lex_state = 180},
  [121] = {.lex_state = 141},
  [122] = {.lex_state = 201},
  [123] = {.lex_state = 209},
  [124] = {.lex_state = 185},
  [125] = {.lex_state = 141},
  [126] = {.lex_state = 178},
  [127] = {.lex_state = 202},
  [128] = {.lex_state = 185},
  [129] = {.lex_state = 179},
  [130] = {.lex_state = 141},
  [131] = {.lex_state = 179},
  [132] = {.lex_state = 141},
  [133] = {.lex_state = 179},
  [134] = {.lex_state = 210},
  [135] = {.lex_state = 185},
  [136] = {.lex_state = 141},
  [137] = {.lex_state = 179},
  [138] = {.lex_state = 202},
  [139] = {.lex_state = 165},
  [140] = {.lex_state = 202},
  [141] = {.lex_state = 203},
  [142] = {.lex_state = 180},
  [143] = {.lex_state = 202},
  [144] = {.lex_state = 190},
  [145] = {.lex_state = 165},
  [146] = {.lex_state = 172},
  [147] = {.lex_state = 172},
  [148] = {.lex_state = 204},
  [149] = {.lex_state = 211},
  [150] = {.lex_state = 190},
  [151] = {.lex_state = 204},
  [152] = {.lex_state = 202},
  [153] = {.lex_state = 205},
  [154] = {.lex_state = 103},
  [155] = {.lex_state = 204},
  [156] = {.lex_state = 165},
  [157] = {.lex_state = 172},
  [158] = {.lex_state = 172},
  [159] = {.lex_state = 205},
  [160] = {.lex_state = 212},
  [161] = {.lex_state = 190},
  [162] = {.lex_state = 204},
  [163] = {.lex_state = 205},
  [164] = {.lex_state = 202},
  [165] = {.lex_state = 103},
  [166] = {.lex_state = 205},
  [167] = {.lex_state = 205},
  [168] = {.lex_state = 206},
  [169] = {.lex_state = 206},
  [170] = {.lex_state = 185},
  [171] = {.lex_state = 190},
  [172] = {.lex_state = 165},
  [173] = {.lex_state = 190},
  [174] = {.lex_state = 207},
  [175] = {.lex_state = 180},
  [176] = {.lex_state = 190},
  [177] = {.lex_state = 190},
  [178] = {.lex_state = 190},
  [179] = {.lex_state = 204},
  [180] = {.lex_state = 190},
  [181] = {.lex_state = 205},
  [182] = {.lex_state = 205},
  [183] = {.lex_state = 141},
  [184] = {.lex_state = 190},
  [185] = {.lex_state = 192},
  [186] = {.lex_state = 208},
  [187] = {.lex_state = 208},
  [188] = {.lex_state = 141},
  [189] = {.lex_state = 208},
  [190] = {.lex_state = 208},
  [191] = {.lex_state = 180},
  [192] = {.lex_state = 175},
  [193] = {.lex_state = 175},
  [194] = {.lex_state = 141},
  [195] = {.lex_state = 175},
  [196] = {.lex_state = 201},
  [197] = {.lex_state = 180},
  [198] = {.lex_state = 209},
  [199] = {.lex_state = 209},
  [200] = {.lex_state = 202},
  [201] = {.lex_state = 202},
  [202] = {.lex_state = 141},
  [203] = {.lex_state = 179},
  [204] = {.lex_state = 210},
  [205] = {.lex_state = 210},
  [206] = {.lex_state = 202},
  [207] = {.lex_state = 172},
  [208] = {.lex_state = 202},
  [209] = {.lex_state = 202},
  [210] = {.lex_state = 204},
  [211] = {.lex_state = 165},
  [212] = {.lex_state = 204},
  [213] = {.lex_state = 211},
  [214] = {.lex_state = 180},
  [215] = {.lex_state = 204},
  [216] = {.lex_state = 190},
  [217] = {.lex_state = 204},
  [218] = {.lex_state = 204},
  [219] = {.lex_state = 204},
  [220] = {.lex_state = 205},
  [221] = {.lex_state = 205},
  [222] = {.lex_state = 202},
  [223] = {.lex_state = 204},
  [224] = {.lex_state = 205},
  [225] = {.lex_state = 165},
  [226] = {.lex_state = 205},
  [227] = {.lex_state = 212},
  [228] = {.lex_state = 180},
  [229] = {.lex_state = 205},
  [230] = {.lex_state = 190},
  [231] = {.lex_state = 205},
  [232] = {.lex_state = 204},
  [233] = {.lex_state = 205},
  [234] = {.lex_state = 205},
  [235] = {.lex_state = 205},
  [236] = {.lex_state = 202},
  [237] = {.lex_state = 205},
  [238] = {.lex_state = 205},
  [239] = {.lex_state = 206},
  [240] = {.lex_state = 206},
  [241] = {.lex_state = 190},
  [242] = {.lex_state = 172},
  [243] = {.lex_state = 190},
  [244] = {.lex_state = 190},
  [245] = {.lex_state = 190},
  [246] = {.lex_state = 190},
  [247] = {.lex_state = 205},
  [248] = {.lex_state = 192},
  [249] = {.lex_state = 208},
  [250] = {.lex_state = 208},
  [251] = {.lex_state = 208},
  [252] = {.lex_state = 208},
  [253] = {.lex_state = 180},
  [254] = {.lex_state = 180},
  [255] = {.lex_state = 141},
  [256] = {.lex_state = 209},
  [257] = {.lex_state = 209},
  [258] = {.lex_state = 202},
  [259] = {.lex_state = 202},
  [260] = {.lex_state = 141},
  [261] = {.lex_state = 210},
  [262] = {.lex_state = 210},
  [263] = {.lex_state = 202},
  [264] = {.lex_state = 204},
  [265] = {.lex_state = 172},
  [266] = {.lex_state = 204},
  [267] = {.lex_state = 204},
  [268] = {.lex_state = 204},
  [269] = {.lex_state = 204},
  [270] = {.lex_state = 205},
  [271] = {.lex_state = 205},
  [272] = {.lex_state = 172},
  [273] = {.lex_state = 205},
  [274] = {.lex_state = 205},
  [275] = {.lex_state = 205},
  [276] = {.lex_state = 205},
  [277] = {.lex_state = 205},
  [278] = {.lex_state = 202},
  [279] = {.lex_state = 190},
  [280] = {.lex_state = 190},
  [281] = {.lex_state = 141},
  [282] = {.lex_state = 204},
  [283] = {.lex_state = 204},
  [284] = {.lex_state = 205},
  [285] = {.lex_state = 205},
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
    [anon_sym_DASH_GT] = ACTIONS(3),
    [anon_sym_DASH_GT_GT] = ACTIONS(1),
    [anon_sym_some_DASH_GT] = ACTIONS(3),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1),
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
    [sym_named_function] = ACTIONS(3),
    [sym_shorthand_function] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(23),
    [sym__anything] = STATE(37),
    [sym__literal] = STATE(37),
    [sym__collection_literal] = STATE(37),
    [sym_boolean] = STATE(37),
    [sym_number] = STATE(37),
    [sym__number] = STATE(24),
    [sym_character] = STATE(37),
    [sym__character] = STATE(25),
    [sym_string] = STATE(37),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(37),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(37),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(37),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(37),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(37),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(37),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(37),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym_set] = STATE(37),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(37),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_special_form] = STATE(37),
    [sym_function] = STATE(36),
    [sym_anonymous_function] = STATE(22),
    [aux_sym_program_repeat1] = STATE(37),
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
    [anon_sym_DASH_GT] = ACTIONS(29),
    [anon_sym_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_as_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT] = ACTIONS(29),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT] = ACTIONS(29),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(31),
    [sym__symbol_chars] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(51),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [sym_named_function] = ACTIONS(55),
    [sym_shorthand_function] = ACTIONS(57),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_nil] = ACTIONS(61),
    [sym_true] = ACTIONS(61),
    [sym_false] = ACTIONS(61),
    [sym_number_long] = ACTIONS(61),
    [sym_number_double] = ACTIONS(59),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [anon_sym_LPARENquote] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(59),
    [anon_sym_DASH_GT] = ACTIONS(61),
    [anon_sym_DASH_GT_GT] = ACTIONS(59),
    [anon_sym_as_DASH_GT] = ACTIONS(59),
    [anon_sym_some_DASH_GT] = ACTIONS(61),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(59),
    [anon_sym_cond_DASH_GT] = ACTIONS(61),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(59),
    [sym__symbol_chars] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_RBRACK] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(59),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(59),
    [anon_sym_POUND] = ACTIONS(61),
    [anon_sym_POUND_LBRACE] = ACTIONS(59),
    [anon_sym_SEMI] = ACTIONS(59),
    [anon_sym_POUND_BANG] = ACTIONS(59),
    [anon_sym_POUND_] = ACTIONS(59),
    [anon_sym_LPARENcomment] = ACTIONS(59),
    [sym_named_function] = ACTIONS(61),
    [sym_shorthand_function] = ACTIONS(59),
  },
  [3] = {
    [sym__special_char] = STATE(38),
    [sym__unicode_char] = STATE(38),
    [sym__octal_char] = STATE(38),
    [sym__normal_char] = ACTIONS(63),
    [anon_sym_newline] = ACTIONS(63),
    [anon_sym_space] = ACTIONS(63),
    [anon_sym_tab] = ACTIONS(63),
    [anon_sym_formfeed] = ACTIONS(63),
    [anon_sym_backspace] = ACTIONS(63),
    [anon_sym_return] = ACTIONS(63),
    [anon_sym_u] = ACTIONS(65),
    [anon_sym_o] = ACTIONS(67),
  },
  [4] = {
    [aux_sym__string_repeat1] = STATE(42),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(71),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(71),
  },
  [5] = {
    [aux_sym__regex_repeat1] = STATE(44),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(75),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(75),
  },
  [6] = {
    [sym__anything] = STATE(45),
    [sym__literal] = STATE(45),
    [sym__collection_literal] = STATE(45),
    [sym_boolean] = STATE(45),
    [sym_number] = STATE(45),
    [sym__number] = STATE(24),
    [sym_character] = STATE(45),
    [sym__character] = STATE(25),
    [sym_string] = STATE(45),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(45),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(45),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(45),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(45),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(45),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(45),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(45),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym_set] = STATE(45),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(45),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_special_form] = STATE(45),
    [sym_function] = STATE(36),
    [sym_anonymous_function] = STATE(22),
    [sym_nil] = ACTIONS(77),
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
    [anon_sym_DASH_GT] = ACTIONS(29),
    [anon_sym_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_as_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT] = ACTIONS(29),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT] = ACTIONS(29),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(31),
    [sym__symbol_chars] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(51),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [sym_named_function] = ACTIONS(55),
    [sym_shorthand_function] = ACTIONS(57),
  },
  [7] = {
    [sym__anything] = STATE(48),
    [sym__literal] = STATE(48),
    [sym__collection_literal] = STATE(48),
    [sym_boolean] = STATE(48),
    [sym_number] = STATE(48),
    [sym__number] = STATE(24),
    [sym_character] = STATE(48),
    [sym__character] = STATE(25),
    [sym_string] = STATE(48),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(48),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(48),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(48),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(48),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(48),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(48),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(48),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym_set] = STATE(48),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(48),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_special_form] = STATE(48),
    [sym_function] = STATE(36),
    [sym_anonymous_function] = STATE(22),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_DASH_GT] = ACTIONS(29),
    [anon_sym_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_as_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT] = ACTIONS(29),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT] = ACTIONS(29),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(31),
    [sym__symbol_chars] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(83),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [sym_named_function] = ACTIONS(55),
    [sym_shorthand_function] = ACTIONS(57),
  },
  [8] = {
    [sym__keyword_chars] = ACTIONS(85),
  },
  [9] = {
    [sym__keyword_chars] = ACTIONS(87),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [sym_nil] = ACTIONS(91),
    [sym_true] = ACTIONS(91),
    [sym_false] = ACTIONS(91),
    [sym_number_long] = ACTIONS(91),
    [sym_number_double] = ACTIONS(89),
    [anon_sym_BSLASH] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [anon_sym_POUND_DQUOTE] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [anon_sym_LPARENquote] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(89),
    [anon_sym_COLON] = ACTIONS(91),
    [anon_sym_COLON_COLON] = ACTIONS(89),
    [anon_sym_DASH_GT] = ACTIONS(91),
    [anon_sym_DASH_GT_GT] = ACTIONS(89),
    [anon_sym_as_DASH_GT] = ACTIONS(89),
    [anon_sym_some_DASH_GT] = ACTIONS(91),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(89),
    [anon_sym_cond_DASH_GT] = ACTIONS(91),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(89),
    [sym__symbol_chars] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(89),
    [anon_sym_POUND] = ACTIONS(91),
    [anon_sym_POUND_LBRACE] = ACTIONS(89),
    [anon_sym_SEMI] = ACTIONS(89),
    [anon_sym_POUND_BANG] = ACTIONS(89),
    [anon_sym_POUND_] = ACTIONS(89),
    [anon_sym_LPARENcomment] = ACTIONS(89),
    [sym_named_function] = ACTIONS(91),
    [sym_shorthand_function] = ACTIONS(89),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [sym_nil] = ACTIONS(95),
    [sym_true] = ACTIONS(95),
    [sym_false] = ACTIONS(95),
    [sym_number_long] = ACTIONS(95),
    [sym_number_double] = ACTIONS(93),
    [anon_sym_BSLASH] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_POUND_DQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_LPARENquote] = ACTIONS(93),
    [anon_sym_RPAREN] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(93),
    [anon_sym_SLASH] = ACTIONS(97),
    [anon_sym_DASH_GT] = ACTIONS(95),
    [anon_sym_DASH_GT_GT] = ACTIONS(93),
    [anon_sym_as_DASH_GT] = ACTIONS(93),
    [anon_sym_some_DASH_GT] = ACTIONS(95),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(93),
    [anon_sym_cond_DASH_GT] = ACTIONS(95),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(93),
    [sym__symbol_chars] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_RBRACE] = ACTIONS(93),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(93),
    [anon_sym_POUND] = ACTIONS(95),
    [anon_sym_POUND_LBRACE] = ACTIONS(93),
    [anon_sym_SEMI] = ACTIONS(93),
    [anon_sym_POUND_BANG] = ACTIONS(93),
    [anon_sym_POUND_] = ACTIONS(93),
    [anon_sym_LPARENcomment] = ACTIONS(93),
    [sym_named_function] = ACTIONS(95),
    [sym_shorthand_function] = ACTIONS(93),
  },
  [12] = {
    [sym__anything] = STATE(56),
    [sym__literal] = STATE(56),
    [sym__collection_literal] = STATE(56),
    [sym_boolean] = STATE(56),
    [sym_number] = STATE(56),
    [sym__number] = STATE(24),
    [sym_character] = STATE(56),
    [sym__character] = STATE(25),
    [sym_string] = STATE(56),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(56),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(56),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(56),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(56),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(56),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(56),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(56),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym_set] = STATE(56),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(56),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_special_form] = STATE(56),
    [sym_function] = STATE(36),
    [sym_anonymous_function] = STATE(22),
    [aux_sym_program_repeat1] = STATE(56),
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
    [anon_sym_RPAREN] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_DASH_GT] = ACTIONS(29),
    [anon_sym_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_as_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT] = ACTIONS(29),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT] = ACTIONS(29),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(31),
    [sym__symbol_chars] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(105),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_fn] = ACTIONS(107),
    [sym_named_function] = ACTIONS(55),
    [sym_shorthand_function] = ACTIONS(57),
  },
  [13] = {
    [sym__anything] = STATE(60),
    [sym__literal] = STATE(60),
    [sym__collection_literal] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym_number] = STATE(60),
    [sym__number] = STATE(24),
    [sym_character] = STATE(60),
    [sym__character] = STATE(25),
    [sym_string] = STATE(60),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(60),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(60),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(60),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(60),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(60),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(60),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(60),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym_set] = STATE(60),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(60),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_special_form] = STATE(60),
    [sym_function] = STATE(36),
    [sym_anonymous_function] = STATE(22),
    [aux_sym_program_repeat1] = STATE(60),
    [sym_nil] = ACTIONS(109),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(111),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_DASH_GT] = ACTIONS(29),
    [anon_sym_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_as_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT] = ACTIONS(29),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT] = ACTIONS(29),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(31),
    [sym__symbol_chars] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_RBRACK] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(115),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [sym_named_function] = ACTIONS(55),
    [sym_shorthand_function] = ACTIONS(57),
  },
  [14] = {
    [sym__anything] = STATE(64),
    [sym__literal] = STATE(64),
    [sym__collection_literal] = STATE(64),
    [sym_boolean] = STATE(64),
    [sym_number] = STATE(64),
    [sym__number] = STATE(24),
    [sym_character] = STATE(64),
    [sym__character] = STATE(25),
    [sym_string] = STATE(64),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(64),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(64),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(64),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(64),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(64),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(64),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(64),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym__hash_map_kv_pair] = STATE(65),
    [sym__hash_map_key] = STATE(64),
    [sym_set] = STATE(64),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(64),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_special_form] = STATE(64),
    [sym_function] = STATE(36),
    [sym_anonymous_function] = STATE(22),
    [aux_sym__hash_map_repeat1] = STATE(65),
    [sym_nil] = ACTIONS(117),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(119),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_DASH_GT] = ACTIONS(29),
    [anon_sym_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_as_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT] = ACTIONS(29),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT] = ACTIONS(29),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(31),
    [sym__symbol_chars] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(121),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(123),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [sym_named_function] = ACTIONS(55),
    [sym_shorthand_function] = ACTIONS(57),
  },
  [15] = {
    [sym__anything] = STATE(64),
    [sym__literal] = STATE(64),
    [sym__collection_literal] = STATE(64),
    [sym_boolean] = STATE(64),
    [sym_number] = STATE(64),
    [sym__number] = STATE(24),
    [sym_character] = STATE(64),
    [sym__character] = STATE(25),
    [sym_string] = STATE(64),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(64),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(64),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(64),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(64),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(64),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(64),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(64),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym__hash_map_kv_pair] = STATE(67),
    [sym__hash_map_key] = STATE(64),
    [sym_set] = STATE(64),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(64),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_special_form] = STATE(64),
    [sym_function] = STATE(36),
    [sym_anonymous_function] = STATE(22),
    [aux_sym__hash_map_repeat1] = STATE(67),
    [sym_nil] = ACTIONS(117),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(119),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_DASH_GT] = ACTIONS(29),
    [anon_sym_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_as_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT] = ACTIONS(29),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT] = ACTIONS(29),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(31),
    [sym__symbol_chars] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(125),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(123),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [sym_named_function] = ACTIONS(55),
    [sym_shorthand_function] = ACTIONS(57),
  },
  [16] = {
    [sym__symbol_chars] = ACTIONS(127),
  },
  [17] = {
    [sym__anything] = STATE(72),
    [sym__literal] = STATE(72),
    [sym__collection_literal] = STATE(72),
    [sym_boolean] = STATE(72),
    [sym_number] = STATE(72),
    [sym__number] = STATE(24),
    [sym_character] = STATE(72),
    [sym__character] = STATE(25),
    [sym_string] = STATE(72),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(72),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(72),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(72),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(72),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(72),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(72),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(72),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym_set] = STATE(72),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(72),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_special_form] = STATE(72),
    [sym_function] = STATE(36),
    [sym_anonymous_function] = STATE(22),
    [aux_sym_program_repeat1] = STATE(72),
    [sym_nil] = ACTIONS(129),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_DASH_GT] = ACTIONS(29),
    [anon_sym_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_as_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT] = ACTIONS(29),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT] = ACTIONS(29),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(31),
    [sym__symbol_chars] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(133),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(135),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [sym_named_function] = ACTIONS(55),
    [sym_shorthand_function] = ACTIONS(57),
  },
  [18] = {
    [aux_sym_SLASH_DOT_STAR_SLASH] = ACTIONS(137),
  },
  [19] = {
    [aux_sym_SLASH_DOT_STAR_SLASH] = ACTIONS(139),
  },
  [20] = {
    [sym__number] = STATE(84),
    [sym__string] = STATE(84),
    [sym__keyword] = STATE(84),
    [sym__unqualified_keyword] = STATE(84),
    [sym_qualified_keyword] = STATE(84),
    [sym__symbol] = STATE(84),
    [sym_threading_macro] = STATE(84),
    [sym_qualified_symbol] = STATE(84),
    [sym__one_form] = STATE(84),
    [sym__paren_sequence] = STATE(84),
    [sym__bracket_sequence] = STATE(84),
    [sym__curly_brace_sequence] = STATE(84),
    [aux_sym_ignore_form_repeat1] = STATE(85),
    [sym_number_long] = ACTIONS(141),
    [sym_number_double] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(145),
    [anon_sym_COLON_COLON] = ACTIONS(147),
    [anon_sym_DASH_GT] = ACTIONS(149),
    [anon_sym_DASH_GT_GT] = ACTIONS(149),
    [anon_sym_as_DASH_GT] = ACTIONS(149),
    [anon_sym_some_DASH_GT] = ACTIONS(149),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(149),
    [anon_sym_cond_DASH_GT] = ACTIONS(149),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(149),
    [sym__symbol_chars] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_POUND] = ACTIONS(159),
    [anon_sym_] = ACTIONS(161),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(141),
  },
  [21] = {
    [sym__number] = STATE(96),
    [sym__string] = STATE(96),
    [sym__keyword] = STATE(96),
    [sym__unqualified_keyword] = STATE(96),
    [sym_qualified_keyword] = STATE(96),
    [sym__symbol] = STATE(96),
    [sym_threading_macro] = STATE(96),
    [sym_qualified_symbol] = STATE(96),
    [sym__one_form] = STATE(96),
    [sym__paren_sequence] = STATE(96),
    [sym__bracket_sequence] = STATE(96),
    [sym__curly_brace_sequence] = STATE(96),
    [aux_sym_comment_macro_repeat1] = STATE(96),
    [sym_number_long] = ACTIONS(163),
    [sym_number_double] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(169),
    [anon_sym_COLON_COLON] = ACTIONS(171),
    [anon_sym_DASH_GT] = ACTIONS(173),
    [anon_sym_DASH_GT_GT] = ACTIONS(173),
    [anon_sym_as_DASH_GT] = ACTIONS(173),
    [anon_sym_some_DASH_GT] = ACTIONS(173),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(173),
    [anon_sym_cond_DASH_GT] = ACTIONS(173),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(173),
    [sym__symbol_chars] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(183),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(163),
  },
  [22] = {
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
    [anon_sym_DASH_GT] = ACTIONS(187),
    [anon_sym_DASH_GT_GT] = ACTIONS(185),
    [anon_sym_as_DASH_GT] = ACTIONS(185),
    [anon_sym_some_DASH_GT] = ACTIONS(187),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(185),
    [anon_sym_cond_DASH_GT] = ACTIONS(187),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(185),
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
    [sym_named_function] = ACTIONS(187),
    [sym_shorthand_function] = ACTIONS(185),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(189),
  },
  [24] = {
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
    [anon_sym_DASH_GT] = ACTIONS(193),
    [anon_sym_DASH_GT_GT] = ACTIONS(191),
    [anon_sym_as_DASH_GT] = ACTIONS(191),
    [anon_sym_some_DASH_GT] = ACTIONS(193),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(191),
    [anon_sym_cond_DASH_GT] = ACTIONS(193),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(191),
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
    [sym_named_function] = ACTIONS(193),
    [sym_shorthand_function] = ACTIONS(191),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [sym_nil] = ACTIONS(197),
    [sym_true] = ACTIONS(197),
    [sym_false] = ACTIONS(197),
    [sym_number_long] = ACTIONS(197),
    [sym_number_double] = ACTIONS(195),
    [anon_sym_BSLASH] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_POUND_DQUOTE] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(195),
    [anon_sym_LPARENquote] = ACTIONS(195),
    [anon_sym_RPAREN] = ACTIONS(195),
    [anon_sym_COLON] = ACTIONS(197),
    [anon_sym_COLON_COLON] = ACTIONS(195),
    [anon_sym_DASH_GT] = ACTIONS(197),
    [anon_sym_DASH_GT_GT] = ACTIONS(195),
    [anon_sym_as_DASH_GT] = ACTIONS(195),
    [anon_sym_some_DASH_GT] = ACTIONS(197),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(195),
    [anon_sym_cond_DASH_GT] = ACTIONS(197),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(195),
    [sym__symbol_chars] = ACTIONS(197),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(195),
    [anon_sym_RBRACK] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_RBRACE] = ACTIONS(195),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(195),
    [anon_sym_POUND] = ACTIONS(197),
    [anon_sym_POUND_LBRACE] = ACTIONS(195),
    [anon_sym_SEMI] = ACTIONS(195),
    [anon_sym_POUND_BANG] = ACTIONS(195),
    [anon_sym_POUND_] = ACTIONS(195),
    [anon_sym_LPARENcomment] = ACTIONS(195),
    [sym_named_function] = ACTIONS(197),
    [sym_shorthand_function] = ACTIONS(195),
  },
  [26] = {
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
    [anon_sym_DASH_GT] = ACTIONS(201),
    [anon_sym_DASH_GT_GT] = ACTIONS(199),
    [anon_sym_as_DASH_GT] = ACTIONS(199),
    [anon_sym_some_DASH_GT] = ACTIONS(201),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(199),
    [anon_sym_cond_DASH_GT] = ACTIONS(201),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(199),
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
    [sym_named_function] = ACTIONS(201),
    [sym_shorthand_function] = ACTIONS(199),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [sym_nil] = ACTIONS(205),
    [sym_true] = ACTIONS(205),
    [sym_false] = ACTIONS(205),
    [sym_number_long] = ACTIONS(205),
    [sym_number_double] = ACTIONS(203),
    [anon_sym_BSLASH] = ACTIONS(203),
    [anon_sym_DQUOTE] = ACTIONS(203),
    [anon_sym_POUND_DQUOTE] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(203),
    [anon_sym_LPARENquote] = ACTIONS(203),
    [anon_sym_RPAREN] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(205),
    [anon_sym_COLON_COLON] = ACTIONS(203),
    [anon_sym_DASH_GT] = ACTIONS(205),
    [anon_sym_DASH_GT_GT] = ACTIONS(203),
    [anon_sym_as_DASH_GT] = ACTIONS(203),
    [anon_sym_some_DASH_GT] = ACTIONS(205),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(203),
    [anon_sym_cond_DASH_GT] = ACTIONS(205),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(203),
    [sym__symbol_chars] = ACTIONS(205),
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(203),
    [anon_sym_RBRACK] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_RBRACE] = ACTIONS(203),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(203),
    [anon_sym_POUND] = ACTIONS(205),
    [anon_sym_POUND_LBRACE] = ACTIONS(203),
    [anon_sym_SEMI] = ACTIONS(203),
    [anon_sym_POUND_BANG] = ACTIONS(203),
    [anon_sym_POUND_] = ACTIONS(203),
    [anon_sym_LPARENcomment] = ACTIONS(203),
    [sym_named_function] = ACTIONS(205),
    [sym_shorthand_function] = ACTIONS(203),
  },
  [28] = {
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
    [anon_sym_DASH_GT] = ACTIONS(209),
    [anon_sym_DASH_GT_GT] = ACTIONS(207),
    [anon_sym_as_DASH_GT] = ACTIONS(207),
    [anon_sym_some_DASH_GT] = ACTIONS(209),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(207),
    [anon_sym_cond_DASH_GT] = ACTIONS(209),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(207),
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
    [sym_named_function] = ACTIONS(209),
    [sym_shorthand_function] = ACTIONS(207),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(211),
    [sym_nil] = ACTIONS(213),
    [sym_true] = ACTIONS(213),
    [sym_false] = ACTIONS(213),
    [sym_number_long] = ACTIONS(213),
    [sym_number_double] = ACTIONS(211),
    [anon_sym_BSLASH] = ACTIONS(211),
    [anon_sym_DQUOTE] = ACTIONS(211),
    [anon_sym_POUND_DQUOTE] = ACTIONS(211),
    [anon_sym_SQUOTE] = ACTIONS(211),
    [anon_sym_LPARENquote] = ACTIONS(211),
    [anon_sym_RPAREN] = ACTIONS(211),
    [anon_sym_COLON] = ACTIONS(213),
    [anon_sym_COLON_COLON] = ACTIONS(211),
    [anon_sym_DASH_GT] = ACTIONS(213),
    [anon_sym_DASH_GT_GT] = ACTIONS(211),
    [anon_sym_as_DASH_GT] = ACTIONS(211),
    [anon_sym_some_DASH_GT] = ACTIONS(213),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(211),
    [anon_sym_cond_DASH_GT] = ACTIONS(213),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(211),
    [sym__symbol_chars] = ACTIONS(213),
    [anon_sym_LPAREN] = ACTIONS(213),
    [anon_sym_LBRACK] = ACTIONS(211),
    [anon_sym_RBRACK] = ACTIONS(211),
    [anon_sym_LBRACE] = ACTIONS(211),
    [anon_sym_RBRACE] = ACTIONS(211),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(211),
    [anon_sym_POUND] = ACTIONS(213),
    [anon_sym_POUND_LBRACE] = ACTIONS(211),
    [anon_sym_SEMI] = ACTIONS(211),
    [anon_sym_POUND_BANG] = ACTIONS(211),
    [anon_sym_POUND_] = ACTIONS(211),
    [anon_sym_LPARENcomment] = ACTIONS(211),
    [sym_named_function] = ACTIONS(213),
    [sym_shorthand_function] = ACTIONS(211),
  },
  [30] = {
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
    [anon_sym_DASH_GT] = ACTIONS(217),
    [anon_sym_DASH_GT_GT] = ACTIONS(215),
    [anon_sym_as_DASH_GT] = ACTIONS(215),
    [anon_sym_some_DASH_GT] = ACTIONS(217),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(215),
    [anon_sym_cond_DASH_GT] = ACTIONS(217),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(215),
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
    [sym_named_function] = ACTIONS(217),
    [sym_shorthand_function] = ACTIONS(215),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(219),
    [sym_nil] = ACTIONS(221),
    [sym_true] = ACTIONS(221),
    [sym_false] = ACTIONS(221),
    [sym_number_long] = ACTIONS(221),
    [sym_number_double] = ACTIONS(219),
    [anon_sym_BSLASH] = ACTIONS(219),
    [anon_sym_DQUOTE] = ACTIONS(219),
    [anon_sym_POUND_DQUOTE] = ACTIONS(219),
    [anon_sym_SQUOTE] = ACTIONS(219),
    [anon_sym_LPARENquote] = ACTIONS(219),
    [anon_sym_RPAREN] = ACTIONS(219),
    [anon_sym_COLON] = ACTIONS(221),
    [anon_sym_COLON_COLON] = ACTIONS(219),
    [anon_sym_DASH_GT] = ACTIONS(221),
    [anon_sym_DASH_GT_GT] = ACTIONS(219),
    [anon_sym_as_DASH_GT] = ACTIONS(219),
    [anon_sym_some_DASH_GT] = ACTIONS(221),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(219),
    [anon_sym_cond_DASH_GT] = ACTIONS(221),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(219),
    [sym__symbol_chars] = ACTIONS(221),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_RBRACK] = ACTIONS(219),
    [anon_sym_LBRACE] = ACTIONS(219),
    [anon_sym_RBRACE] = ACTIONS(219),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(219),
    [anon_sym_POUND] = ACTIONS(221),
    [anon_sym_POUND_LBRACE] = ACTIONS(219),
    [anon_sym_SEMI] = ACTIONS(219),
    [anon_sym_POUND_BANG] = ACTIONS(219),
    [anon_sym_POUND_] = ACTIONS(219),
    [anon_sym_LPARENcomment] = ACTIONS(219),
    [sym_named_function] = ACTIONS(221),
    [sym_shorthand_function] = ACTIONS(219),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(223),
    [sym_nil] = ACTIONS(225),
    [sym_true] = ACTIONS(225),
    [sym_false] = ACTIONS(225),
    [sym_number_long] = ACTIONS(225),
    [sym_number_double] = ACTIONS(223),
    [anon_sym_BSLASH] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(223),
    [anon_sym_POUND_DQUOTE] = ACTIONS(223),
    [anon_sym_SQUOTE] = ACTIONS(223),
    [anon_sym_LPARENquote] = ACTIONS(223),
    [anon_sym_RPAREN] = ACTIONS(223),
    [anon_sym_COLON] = ACTIONS(225),
    [anon_sym_COLON_COLON] = ACTIONS(223),
    [anon_sym_DASH_GT] = ACTIONS(225),
    [anon_sym_DASH_GT_GT] = ACTIONS(223),
    [anon_sym_as_DASH_GT] = ACTIONS(223),
    [anon_sym_some_DASH_GT] = ACTIONS(225),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(223),
    [anon_sym_cond_DASH_GT] = ACTIONS(225),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(223),
    [sym__symbol_chars] = ACTIONS(225),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_LBRACK] = ACTIONS(223),
    [anon_sym_RBRACK] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(223),
    [anon_sym_RBRACE] = ACTIONS(223),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(223),
    [anon_sym_POUND] = ACTIONS(225),
    [anon_sym_POUND_LBRACE] = ACTIONS(223),
    [anon_sym_SEMI] = ACTIONS(223),
    [anon_sym_POUND_BANG] = ACTIONS(223),
    [anon_sym_POUND_] = ACTIONS(223),
    [anon_sym_LPARENcomment] = ACTIONS(223),
    [sym_named_function] = ACTIONS(225),
    [sym_shorthand_function] = ACTIONS(223),
  },
  [33] = {
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
    [anon_sym_DASH_GT] = ACTIONS(229),
    [anon_sym_DASH_GT_GT] = ACTIONS(227),
    [anon_sym_as_DASH_GT] = ACTIONS(227),
    [anon_sym_some_DASH_GT] = ACTIONS(229),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(227),
    [anon_sym_cond_DASH_GT] = ACTIONS(229),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(227),
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
    [sym_named_function] = ACTIONS(229),
    [sym_shorthand_function] = ACTIONS(227),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(231),
    [sym_nil] = ACTIONS(233),
    [sym_true] = ACTIONS(233),
    [sym_false] = ACTIONS(233),
    [sym_number_long] = ACTIONS(233),
    [sym_number_double] = ACTIONS(231),
    [anon_sym_BSLASH] = ACTIONS(231),
    [anon_sym_DQUOTE] = ACTIONS(231),
    [anon_sym_POUND_DQUOTE] = ACTIONS(231),
    [anon_sym_SQUOTE] = ACTIONS(231),
    [anon_sym_LPARENquote] = ACTIONS(231),
    [anon_sym_RPAREN] = ACTIONS(231),
    [anon_sym_COLON] = ACTIONS(233),
    [anon_sym_COLON_COLON] = ACTIONS(231),
    [anon_sym_DASH_GT] = ACTIONS(233),
    [anon_sym_DASH_GT_GT] = ACTIONS(231),
    [anon_sym_as_DASH_GT] = ACTIONS(231),
    [anon_sym_some_DASH_GT] = ACTIONS(233),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(231),
    [anon_sym_cond_DASH_GT] = ACTIONS(233),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(231),
    [sym__symbol_chars] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_RBRACK] = ACTIONS(231),
    [anon_sym_LBRACE] = ACTIONS(231),
    [anon_sym_RBRACE] = ACTIONS(231),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(231),
    [anon_sym_POUND] = ACTIONS(233),
    [anon_sym_POUND_LBRACE] = ACTIONS(231),
    [anon_sym_SEMI] = ACTIONS(231),
    [anon_sym_POUND_BANG] = ACTIONS(231),
    [anon_sym_POUND_] = ACTIONS(231),
    [anon_sym_LPARENcomment] = ACTIONS(231),
    [sym_named_function] = ACTIONS(233),
    [sym_shorthand_function] = ACTIONS(231),
  },
  [35] = {
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
    [anon_sym_DASH_GT] = ACTIONS(237),
    [anon_sym_DASH_GT_GT] = ACTIONS(235),
    [anon_sym_as_DASH_GT] = ACTIONS(235),
    [anon_sym_some_DASH_GT] = ACTIONS(237),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(235),
    [anon_sym_cond_DASH_GT] = ACTIONS(237),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(235),
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
    [sym_named_function] = ACTIONS(237),
    [sym_shorthand_function] = ACTIONS(235),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(239),
    [sym_nil] = ACTIONS(241),
    [sym_true] = ACTIONS(241),
    [sym_false] = ACTIONS(241),
    [sym_number_long] = ACTIONS(241),
    [sym_number_double] = ACTIONS(239),
    [anon_sym_BSLASH] = ACTIONS(239),
    [anon_sym_DQUOTE] = ACTIONS(239),
    [anon_sym_POUND_DQUOTE] = ACTIONS(239),
    [anon_sym_SQUOTE] = ACTIONS(239),
    [anon_sym_LPARENquote] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(239),
    [anon_sym_COLON] = ACTIONS(241),
    [anon_sym_COLON_COLON] = ACTIONS(239),
    [anon_sym_DASH_GT] = ACTIONS(241),
    [anon_sym_DASH_GT_GT] = ACTIONS(239),
    [anon_sym_as_DASH_GT] = ACTIONS(239),
    [anon_sym_some_DASH_GT] = ACTIONS(241),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(239),
    [anon_sym_cond_DASH_GT] = ACTIONS(241),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(239),
    [sym__symbol_chars] = ACTIONS(241),
    [anon_sym_LPAREN] = ACTIONS(241),
    [anon_sym_LBRACK] = ACTIONS(239),
    [anon_sym_RBRACK] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(239),
    [anon_sym_RBRACE] = ACTIONS(239),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(239),
    [anon_sym_POUND] = ACTIONS(241),
    [anon_sym_POUND_LBRACE] = ACTIONS(239),
    [anon_sym_SEMI] = ACTIONS(239),
    [anon_sym_POUND_BANG] = ACTIONS(239),
    [anon_sym_POUND_] = ACTIONS(239),
    [anon_sym_LPARENcomment] = ACTIONS(239),
    [sym_named_function] = ACTIONS(241),
    [sym_shorthand_function] = ACTIONS(239),
  },
  [37] = {
    [sym__anything] = STATE(97),
    [sym__literal] = STATE(97),
    [sym__collection_literal] = STATE(97),
    [sym_boolean] = STATE(97),
    [sym_number] = STATE(97),
    [sym__number] = STATE(24),
    [sym_character] = STATE(97),
    [sym__character] = STATE(25),
    [sym_string] = STATE(97),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(97),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(97),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(97),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(97),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(97),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(97),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(97),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym_set] = STATE(97),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(97),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_special_form] = STATE(97),
    [sym_function] = STATE(36),
    [sym_anonymous_function] = STATE(22),
    [aux_sym_program_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(243),
    [sym_nil] = ACTIONS(245),
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
    [anon_sym_DASH_GT] = ACTIONS(29),
    [anon_sym_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_as_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT] = ACTIONS(29),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT] = ACTIONS(29),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(31),
    [sym__symbol_chars] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(51),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [sym_named_function] = ACTIONS(55),
    [sym_shorthand_function] = ACTIONS(57),
  },
  [38] = {
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
    [anon_sym_DASH_GT] = ACTIONS(249),
    [anon_sym_DASH_GT_GT] = ACTIONS(247),
    [anon_sym_as_DASH_GT] = ACTIONS(247),
    [anon_sym_some_DASH_GT] = ACTIONS(249),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(247),
    [anon_sym_cond_DASH_GT] = ACTIONS(249),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(247),
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
    [sym_named_function] = ACTIONS(249),
    [sym_shorthand_function] = ACTIONS(247),
  },
  [39] = {
    [sym__hex_char] = ACTIONS(251),
  },
  [40] = {
    [sym__octal_num] = STATE(99),
    [aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(253),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(255),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(255),
  },
  [41] = {
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
    [anon_sym_DASH_GT] = ACTIONS(259),
    [anon_sym_DASH_GT_GT] = ACTIONS(257),
    [anon_sym_as_DASH_GT] = ACTIONS(257),
    [anon_sym_some_DASH_GT] = ACTIONS(259),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(257),
    [anon_sym_cond_DASH_GT] = ACTIONS(259),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(257),
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
    [sym_named_function] = ACTIONS(259),
    [sym_shorthand_function] = ACTIONS(257),
  },
  [42] = {
    [aux_sym__string_repeat1] = STATE(101),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(263),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(263),
  },
  [43] = {
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
    [anon_sym_DASH_GT] = ACTIONS(267),
    [anon_sym_DASH_GT_GT] = ACTIONS(265),
    [anon_sym_as_DASH_GT] = ACTIONS(265),
    [anon_sym_some_DASH_GT] = ACTIONS(267),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(265),
    [anon_sym_cond_DASH_GT] = ACTIONS(267),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(265),
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
    [sym_named_function] = ACTIONS(267),
    [sym_shorthand_function] = ACTIONS(265),
  },
  [44] = {
    [aux_sym__regex_repeat1] = STATE(103),
    [anon_sym_DQUOTE] = ACTIONS(269),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(271),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(271),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(273),
    [sym_nil] = ACTIONS(275),
    [sym_true] = ACTIONS(275),
    [sym_false] = ACTIONS(275),
    [sym_number_long] = ACTIONS(275),
    [sym_number_double] = ACTIONS(273),
    [anon_sym_BSLASH] = ACTIONS(273),
    [anon_sym_DQUOTE] = ACTIONS(273),
    [anon_sym_POUND_DQUOTE] = ACTIONS(273),
    [anon_sym_SQUOTE] = ACTIONS(273),
    [anon_sym_LPARENquote] = ACTIONS(273),
    [anon_sym_RPAREN] = ACTIONS(273),
    [anon_sym_COLON] = ACTIONS(275),
    [anon_sym_COLON_COLON] = ACTIONS(273),
    [anon_sym_DASH_GT] = ACTIONS(275),
    [anon_sym_DASH_GT_GT] = ACTIONS(273),
    [anon_sym_as_DASH_GT] = ACTIONS(273),
    [anon_sym_some_DASH_GT] = ACTIONS(275),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(273),
    [anon_sym_cond_DASH_GT] = ACTIONS(275),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(273),
    [sym__symbol_chars] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(275),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_RBRACK] = ACTIONS(273),
    [anon_sym_LBRACE] = ACTIONS(273),
    [anon_sym_RBRACE] = ACTIONS(273),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(273),
    [anon_sym_POUND] = ACTIONS(275),
    [anon_sym_POUND_LBRACE] = ACTIONS(273),
    [anon_sym_SEMI] = ACTIONS(273),
    [anon_sym_POUND_BANG] = ACTIONS(273),
    [anon_sym_POUND_] = ACTIONS(273),
    [anon_sym_LPARENcomment] = ACTIONS(273),
    [sym_named_function] = ACTIONS(275),
    [sym_shorthand_function] = ACTIONS(273),
  },
  [46] = {
    [sym__anything] = STATE(45),
    [sym__literal] = STATE(45),
    [sym__collection_literal] = STATE(45),
    [sym_boolean] = STATE(45),
    [sym_number] = STATE(45),
    [sym__number] = STATE(24),
    [sym_character] = STATE(45),
    [sym__character] = STATE(25),
    [sym_string] = STATE(45),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(45),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(45),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(45),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(45),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(45),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(45),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(45),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym_set] = STATE(45),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(45),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_special_form] = STATE(45),
    [sym_function] = STATE(36),
    [sym_anonymous_function] = STATE(22),
    [sym_nil] = ACTIONS(77),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_DASH_GT] = ACTIONS(29),
    [anon_sym_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_as_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT] = ACTIONS(29),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT] = ACTIONS(29),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(31),
    [sym__symbol_chars] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(83),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [sym_named_function] = ACTIONS(55),
    [sym_shorthand_function] = ACTIONS(57),
  },
  [47] = {
    [sym__number] = STATE(104),
    [sym__string] = STATE(104),
    [sym__keyword] = STATE(104),
    [sym__unqualified_keyword] = STATE(104),
    [sym_qualified_keyword] = STATE(104),
    [sym__symbol] = STATE(104),
    [sym_threading_macro] = STATE(104),
    [sym_qualified_symbol] = STATE(104),
    [sym__one_form] = STATE(104),
    [sym__paren_sequence] = STATE(104),
    [sym__bracket_sequence] = STATE(104),
    [sym__curly_brace_sequence] = STATE(104),
    [aux_sym_ignore_form_repeat1] = STATE(105),
    [sym_number_long] = ACTIONS(277),
    [sym_number_double] = ACTIONS(277),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(145),
    [anon_sym_COLON_COLON] = ACTIONS(147),
    [anon_sym_DASH_GT] = ACTIONS(149),
    [anon_sym_DASH_GT_GT] = ACTIONS(149),
    [anon_sym_as_DASH_GT] = ACTIONS(149),
    [anon_sym_some_DASH_GT] = ACTIONS(149),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(149),
    [anon_sym_cond_DASH_GT] = ACTIONS(149),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(149),
    [sym__symbol_chars] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_POUND] = ACTIONS(159),
    [anon_sym_] = ACTIONS(279),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(277),
  },
  [48] = {
    [anon_sym_RPAREN] = ACTIONS(281),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(283),
    [sym_nil] = ACTIONS(285),
    [sym_true] = ACTIONS(285),
    [sym_false] = ACTIONS(285),
    [sym_number_long] = ACTIONS(285),
    [sym_number_double] = ACTIONS(283),
    [anon_sym_BSLASH] = ACTIONS(283),
    [anon_sym_DQUOTE] = ACTIONS(283),
    [anon_sym_POUND_DQUOTE] = ACTIONS(283),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [anon_sym_LPARENquote] = ACTIONS(283),
    [anon_sym_RPAREN] = ACTIONS(283),
    [anon_sym_COLON] = ACTIONS(285),
    [anon_sym_COLON_COLON] = ACTIONS(283),
    [anon_sym_DASH_GT] = ACTIONS(285),
    [anon_sym_DASH_GT_GT] = ACTIONS(283),
    [anon_sym_as_DASH_GT] = ACTIONS(283),
    [anon_sym_some_DASH_GT] = ACTIONS(285),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(283),
    [anon_sym_cond_DASH_GT] = ACTIONS(285),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(283),
    [sym__symbol_chars] = ACTIONS(285),
    [anon_sym_LPAREN] = ACTIONS(285),
    [anon_sym_LBRACK] = ACTIONS(283),
    [anon_sym_RBRACK] = ACTIONS(283),
    [anon_sym_LBRACE] = ACTIONS(283),
    [anon_sym_RBRACE] = ACTIONS(283),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(283),
    [anon_sym_POUND] = ACTIONS(285),
    [anon_sym_POUND_LBRACE] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(283),
    [anon_sym_POUND_BANG] = ACTIONS(283),
    [anon_sym_POUND_] = ACTIONS(283),
    [anon_sym_LPARENcomment] = ACTIONS(283),
    [sym_named_function] = ACTIONS(285),
    [sym_shorthand_function] = ACTIONS(283),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(287),
    [sym_nil] = ACTIONS(289),
    [sym_true] = ACTIONS(289),
    [sym_false] = ACTIONS(289),
    [sym_number_long] = ACTIONS(289),
    [sym_number_double] = ACTIONS(287),
    [anon_sym_BSLASH] = ACTIONS(287),
    [anon_sym_DQUOTE] = ACTIONS(287),
    [anon_sym_POUND_DQUOTE] = ACTIONS(287),
    [anon_sym_SQUOTE] = ACTIONS(287),
    [anon_sym_LPARENquote] = ACTIONS(287),
    [anon_sym_RPAREN] = ACTIONS(287),
    [anon_sym_COLON] = ACTIONS(289),
    [anon_sym_COLON_COLON] = ACTIONS(287),
    [anon_sym_SLASH] = ACTIONS(291),
    [anon_sym_DASH_GT] = ACTIONS(289),
    [anon_sym_DASH_GT_GT] = ACTIONS(287),
    [anon_sym_as_DASH_GT] = ACTIONS(287),
    [anon_sym_some_DASH_GT] = ACTIONS(289),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(287),
    [anon_sym_cond_DASH_GT] = ACTIONS(289),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(287),
    [sym__symbol_chars] = ACTIONS(289),
    [anon_sym_LPAREN] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(287),
    [anon_sym_RBRACK] = ACTIONS(287),
    [anon_sym_LBRACE] = ACTIONS(287),
    [anon_sym_RBRACE] = ACTIONS(287),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(287),
    [anon_sym_POUND] = ACTIONS(289),
    [anon_sym_POUND_LBRACE] = ACTIONS(287),
    [anon_sym_SEMI] = ACTIONS(287),
    [anon_sym_POUND_BANG] = ACTIONS(287),
    [anon_sym_POUND_] = ACTIONS(287),
    [anon_sym_LPARENcomment] = ACTIONS(287),
    [sym_named_function] = ACTIONS(289),
    [sym_shorthand_function] = ACTIONS(287),
  },
  [51] = {
    [sym__symbol_chars] = ACTIONS(293),
  },
  [52] = {
    [sym__anything] = STATE(45),
    [sym__literal] = STATE(45),
    [sym__collection_literal] = STATE(45),
    [sym_boolean] = STATE(45),
    [sym_number] = STATE(45),
    [sym__number] = STATE(24),
    [sym_character] = STATE(45),
    [sym__character] = STATE(25),
    [sym_string] = STATE(45),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(45),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(45),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(45),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(45),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(45),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(45),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(45),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym_set] = STATE(45),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(45),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_special_form] = STATE(45),
    [sym_function] = STATE(36),
    [sym_anonymous_function] = STATE(22),
    [sym_nil] = ACTIONS(77),
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
    [anon_sym_DASH_GT] = ACTIONS(29),
    [anon_sym_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_as_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT] = ACTIONS(29),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT] = ACTIONS(29),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(31),
    [sym__symbol_chars] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(105),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [sym_named_function] = ACTIONS(55),
    [sym_shorthand_function] = ACTIONS(57),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(295),
    [sym_nil] = ACTIONS(297),
    [sym_true] = ACTIONS(297),
    [sym_false] = ACTIONS(297),
    [sym_number_long] = ACTIONS(297),
    [sym_number_double] = ACTIONS(295),
    [anon_sym_BSLASH] = ACTIONS(295),
    [anon_sym_DQUOTE] = ACTIONS(295),
    [anon_sym_POUND_DQUOTE] = ACTIONS(295),
    [anon_sym_SQUOTE] = ACTIONS(295),
    [anon_sym_LPARENquote] = ACTIONS(295),
    [anon_sym_RPAREN] = ACTIONS(295),
    [anon_sym_COLON] = ACTIONS(297),
    [anon_sym_COLON_COLON] = ACTIONS(295),
    [anon_sym_DASH_GT] = ACTIONS(297),
    [anon_sym_DASH_GT_GT] = ACTIONS(295),
    [anon_sym_as_DASH_GT] = ACTIONS(295),
    [anon_sym_some_DASH_GT] = ACTIONS(297),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(295),
    [anon_sym_cond_DASH_GT] = ACTIONS(297),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(295),
    [sym__symbol_chars] = ACTIONS(297),
    [anon_sym_LPAREN] = ACTIONS(297),
    [anon_sym_LBRACK] = ACTIONS(295),
    [anon_sym_RBRACK] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(295),
    [anon_sym_RBRACE] = ACTIONS(295),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(295),
    [anon_sym_POUND] = ACTIONS(297),
    [anon_sym_POUND_LBRACE] = ACTIONS(295),
    [anon_sym_SEMI] = ACTIONS(295),
    [anon_sym_POUND_BANG] = ACTIONS(295),
    [anon_sym_POUND_] = ACTIONS(295),
    [anon_sym_LPARENcomment] = ACTIONS(295),
    [sym_named_function] = ACTIONS(297),
    [sym_shorthand_function] = ACTIONS(295),
  },
  [54] = {
    [sym__number] = STATE(109),
    [sym__string] = STATE(109),
    [sym__keyword] = STATE(109),
    [sym__unqualified_keyword] = STATE(109),
    [sym_qualified_keyword] = STATE(109),
    [sym__symbol] = STATE(109),
    [sym_threading_macro] = STATE(109),
    [sym_qualified_symbol] = STATE(109),
    [sym__one_form] = STATE(109),
    [sym__paren_sequence] = STATE(109),
    [sym__bracket_sequence] = STATE(109),
    [sym__curly_brace_sequence] = STATE(109),
    [aux_sym_ignore_form_repeat1] = STATE(110),
    [sym_number_long] = ACTIONS(299),
    [sym_number_double] = ACTIONS(299),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(145),
    [anon_sym_COLON_COLON] = ACTIONS(147),
    [anon_sym_DASH_GT] = ACTIONS(149),
    [anon_sym_DASH_GT_GT] = ACTIONS(149),
    [anon_sym_as_DASH_GT] = ACTIONS(149),
    [anon_sym_some_DASH_GT] = ACTIONS(149),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(149),
    [anon_sym_cond_DASH_GT] = ACTIONS(149),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(149),
    [sym__symbol_chars] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_POUND] = ACTIONS(159),
    [anon_sym_] = ACTIONS(301),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(299),
  },
  [55] = {
    [sym_symbol] = STATE(114),
    [sym__symbol] = STATE(115),
    [sym_threading_macro] = STATE(115),
    [sym_qualified_symbol] = STATE(115),
    [sym_vector] = STATE(116),
    [sym__vector] = STATE(32),
    [sym_function_name] = STATE(117),
    [sym__single_arity_fn] = STATE(118),
    [sym__multi_arity_fn] = STATE(118),
    [sym_params] = STATE(119),
    [aux_sym__multi_arity_fn_repeat1] = STATE(120),
    [anon_sym_DASH_GT] = ACTIONS(303),
    [anon_sym_DASH_GT_GT] = ACTIONS(305),
    [anon_sym_as_DASH_GT] = ACTIONS(305),
    [anon_sym_some_DASH_GT] = ACTIONS(303),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(305),
    [anon_sym_cond_DASH_GT] = ACTIONS(303),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(305),
    [sym__symbol_chars] = ACTIONS(307),
    [anon_sym_LPAREN] = ACTIONS(309),
    [anon_sym_LBRACK] = ACTIONS(37),
  },
  [56] = {
    [sym__anything] = STATE(122),
    [sym__literal] = STATE(122),
    [sym__collection_literal] = STATE(122),
    [sym_boolean] = STATE(122),
    [sym_number] = STATE(122),
    [sym__number] = STATE(24),
    [sym_character] = STATE(122),
    [sym__character] = STATE(25),
    [sym_string] = STATE(122),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(122),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(122),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(122),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(122),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(122),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(122),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(122),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym_set] = STATE(122),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(122),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_special_form] = STATE(122),
    [sym_function] = STATE(36),
    [sym_anonymous_function] = STATE(22),
    [aux_sym_program_repeat1] = STATE(122),
    [sym_nil] = ACTIONS(311),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(101),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(313),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_DASH_GT] = ACTIONS(29),
    [anon_sym_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_as_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT] = ACTIONS(29),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT] = ACTIONS(29),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(31),
    [sym__symbol_chars] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(105),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [sym_named_function] = ACTIONS(55),
    [sym_shorthand_function] = ACTIONS(57),
  },
  [57] = {
    [sym__anything] = STATE(45),
    [sym__literal] = STATE(45),
    [sym__collection_literal] = STATE(45),
    [sym_boolean] = STATE(45),
    [sym_number] = STATE(45),
    [sym__number] = STATE(24),
    [sym_character] = STATE(45),
    [sym__character] = STATE(25),
    [sym_string] = STATE(45),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(45),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(45),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(45),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(45),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(45),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(45),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(45),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym_set] = STATE(45),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(45),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_special_form] = STATE(45),
    [sym_function] = STATE(36),
    [sym_anonymous_function] = STATE(22),
    [sym_nil] = ACTIONS(77),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(111),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_DASH_GT] = ACTIONS(29),
    [anon_sym_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_as_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT] = ACTIONS(29),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT] = ACTIONS(29),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(31),
    [sym__symbol_chars] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(115),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [sym_named_function] = ACTIONS(55),
    [sym_shorthand_function] = ACTIONS(57),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(315),
    [sym_nil] = ACTIONS(317),
    [sym_true] = ACTIONS(317),
    [sym_false] = ACTIONS(317),
    [sym_number_long] = ACTIONS(317),
    [sym_number_double] = ACTIONS(315),
    [anon_sym_BSLASH] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(315),
    [anon_sym_POUND_DQUOTE] = ACTIONS(315),
    [anon_sym_SQUOTE] = ACTIONS(315),
    [anon_sym_LPARENquote] = ACTIONS(315),
    [anon_sym_RPAREN] = ACTIONS(315),
    [anon_sym_COLON] = ACTIONS(317),
    [anon_sym_COLON_COLON] = ACTIONS(315),
    [anon_sym_DASH_GT] = ACTIONS(317),
    [anon_sym_DASH_GT_GT] = ACTIONS(315),
    [anon_sym_as_DASH_GT] = ACTIONS(315),
    [anon_sym_some_DASH_GT] = ACTIONS(317),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(315),
    [anon_sym_cond_DASH_GT] = ACTIONS(317),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(315),
    [sym__symbol_chars] = ACTIONS(317),
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
    [sym_named_function] = ACTIONS(317),
    [sym_shorthand_function] = ACTIONS(315),
  },
  [59] = {
    [sym__number] = STATE(123),
    [sym__string] = STATE(123),
    [sym__keyword] = STATE(123),
    [sym__unqualified_keyword] = STATE(123),
    [sym_qualified_keyword] = STATE(123),
    [sym__symbol] = STATE(123),
    [sym_threading_macro] = STATE(123),
    [sym_qualified_symbol] = STATE(123),
    [sym__one_form] = STATE(123),
    [sym__paren_sequence] = STATE(123),
    [sym__bracket_sequence] = STATE(123),
    [sym__curly_brace_sequence] = STATE(123),
    [aux_sym_ignore_form_repeat1] = STATE(124),
    [sym_number_long] = ACTIONS(319),
    [sym_number_double] = ACTIONS(319),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(145),
    [anon_sym_COLON_COLON] = ACTIONS(147),
    [anon_sym_DASH_GT] = ACTIONS(149),
    [anon_sym_DASH_GT_GT] = ACTIONS(149),
    [anon_sym_as_DASH_GT] = ACTIONS(149),
    [anon_sym_some_DASH_GT] = ACTIONS(149),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(149),
    [anon_sym_cond_DASH_GT] = ACTIONS(149),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(149),
    [sym__symbol_chars] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_POUND] = ACTIONS(159),
    [anon_sym_] = ACTIONS(321),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(319),
  },
  [60] = {
    [sym__anything] = STATE(126),
    [sym__literal] = STATE(126),
    [sym__collection_literal] = STATE(126),
    [sym_boolean] = STATE(126),
    [sym_number] = STATE(126),
    [sym__number] = STATE(24),
    [sym_character] = STATE(126),
    [sym__character] = STATE(25),
    [sym_string] = STATE(126),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(126),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(126),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(126),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(126),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(126),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(126),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(126),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym_set] = STATE(126),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(126),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_special_form] = STATE(126),
    [sym_function] = STATE(36),
    [sym_anonymous_function] = STATE(22),
    [aux_sym_program_repeat1] = STATE(126),
    [sym_nil] = ACTIONS(323),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(111),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_DASH_GT] = ACTIONS(29),
    [anon_sym_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_as_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT] = ACTIONS(29),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT] = ACTIONS(29),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(31),
    [sym__symbol_chars] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_RBRACK] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(115),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [sym_named_function] = ACTIONS(55),
    [sym_shorthand_function] = ACTIONS(57),
  },
  [61] = {
    [sym__anything] = STATE(45),
    [sym__literal] = STATE(45),
    [sym__collection_literal] = STATE(45),
    [sym_boolean] = STATE(45),
    [sym_number] = STATE(45),
    [sym__number] = STATE(24),
    [sym_character] = STATE(45),
    [sym__character] = STATE(25),
    [sym_string] = STATE(45),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(45),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(45),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(45),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(45),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(45),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(45),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(45),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym_set] = STATE(45),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(45),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_special_form] = STATE(45),
    [sym_function] = STATE(36),
    [sym_anonymous_function] = STATE(22),
    [sym_nil] = ACTIONS(77),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(119),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_DASH_GT] = ACTIONS(29),
    [anon_sym_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_as_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT] = ACTIONS(29),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT] = ACTIONS(29),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(31),
    [sym__symbol_chars] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(123),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [sym_named_function] = ACTIONS(55),
    [sym_shorthand_function] = ACTIONS(57),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(327),
    [sym_nil] = ACTIONS(329),
    [sym_true] = ACTIONS(329),
    [sym_false] = ACTIONS(329),
    [sym_number_long] = ACTIONS(329),
    [sym_number_double] = ACTIONS(327),
    [anon_sym_BSLASH] = ACTIONS(327),
    [anon_sym_DQUOTE] = ACTIONS(327),
    [anon_sym_POUND_DQUOTE] = ACTIONS(327),
    [anon_sym_SQUOTE] = ACTIONS(327),
    [anon_sym_LPARENquote] = ACTIONS(327),
    [anon_sym_RPAREN] = ACTIONS(327),
    [anon_sym_COLON] = ACTIONS(329),
    [anon_sym_COLON_COLON] = ACTIONS(327),
    [anon_sym_DASH_GT] = ACTIONS(329),
    [anon_sym_DASH_GT_GT] = ACTIONS(327),
    [anon_sym_as_DASH_GT] = ACTIONS(327),
    [anon_sym_some_DASH_GT] = ACTIONS(329),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(327),
    [anon_sym_cond_DASH_GT] = ACTIONS(329),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(327),
    [sym__symbol_chars] = ACTIONS(329),
    [anon_sym_LPAREN] = ACTIONS(329),
    [anon_sym_LBRACK] = ACTIONS(327),
    [anon_sym_RBRACK] = ACTIONS(327),
    [anon_sym_LBRACE] = ACTIONS(327),
    [anon_sym_RBRACE] = ACTIONS(327),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(327),
    [anon_sym_POUND] = ACTIONS(329),
    [anon_sym_POUND_LBRACE] = ACTIONS(327),
    [anon_sym_SEMI] = ACTIONS(327),
    [anon_sym_POUND_BANG] = ACTIONS(327),
    [anon_sym_POUND_] = ACTIONS(327),
    [anon_sym_LPARENcomment] = ACTIONS(327),
    [sym_named_function] = ACTIONS(329),
    [sym_shorthand_function] = ACTIONS(327),
  },
  [63] = {
    [sym__number] = STATE(127),
    [sym__string] = STATE(127),
    [sym__keyword] = STATE(127),
    [sym__unqualified_keyword] = STATE(127),
    [sym_qualified_keyword] = STATE(127),
    [sym__symbol] = STATE(127),
    [sym_threading_macro] = STATE(127),
    [sym_qualified_symbol] = STATE(127),
    [sym__one_form] = STATE(127),
    [sym__paren_sequence] = STATE(127),
    [sym__bracket_sequence] = STATE(127),
    [sym__curly_brace_sequence] = STATE(127),
    [aux_sym_ignore_form_repeat1] = STATE(128),
    [sym_number_long] = ACTIONS(331),
    [sym_number_double] = ACTIONS(331),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(145),
    [anon_sym_COLON_COLON] = ACTIONS(147),
    [anon_sym_DASH_GT] = ACTIONS(149),
    [anon_sym_DASH_GT_GT] = ACTIONS(149),
    [anon_sym_as_DASH_GT] = ACTIONS(149),
    [anon_sym_some_DASH_GT] = ACTIONS(149),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(149),
    [anon_sym_cond_DASH_GT] = ACTIONS(149),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(149),
    [sym__symbol_chars] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_POUND] = ACTIONS(159),
    [anon_sym_] = ACTIONS(333),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(331),
  },
  [64] = {
    [sym__anything] = STATE(129),
    [sym__literal] = STATE(129),
    [sym__collection_literal] = STATE(129),
    [sym_boolean] = STATE(129),
    [sym_number] = STATE(129),
    [sym__number] = STATE(24),
    [sym_character] = STATE(129),
    [sym__character] = STATE(25),
    [sym_string] = STATE(129),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(129),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(129),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(129),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(129),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(129),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(129),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(129),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym__hash_map_value] = STATE(129),
    [sym_set] = STATE(129),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(129),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_special_form] = STATE(129),
    [sym_function] = STATE(36),
    [sym_anonymous_function] = STATE(22),
    [sym_nil] = ACTIONS(335),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_DASH_GT] = ACTIONS(29),
    [anon_sym_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_as_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT] = ACTIONS(29),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT] = ACTIONS(29),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(31),
    [sym__symbol_chars] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(135),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [sym_named_function] = ACTIONS(55),
    [sym_shorthand_function] = ACTIONS(57),
  },
  [65] = {
    [sym__anything] = STATE(64),
    [sym__literal] = STATE(64),
    [sym__collection_literal] = STATE(64),
    [sym_boolean] = STATE(64),
    [sym_number] = STATE(64),
    [sym__number] = STATE(24),
    [sym_character] = STATE(64),
    [sym__character] = STATE(25),
    [sym_string] = STATE(64),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(64),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(64),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(64),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(64),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(64),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(64),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(64),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym__hash_map_kv_pair] = STATE(131),
    [sym__hash_map_key] = STATE(64),
    [sym_set] = STATE(64),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(64),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_special_form] = STATE(64),
    [sym_function] = STATE(36),
    [sym_anonymous_function] = STATE(22),
    [aux_sym__hash_map_repeat1] = STATE(131),
    [sym_nil] = ACTIONS(117),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(119),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_DASH_GT] = ACTIONS(29),
    [anon_sym_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_as_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT] = ACTIONS(29),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT] = ACTIONS(29),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(31),
    [sym__symbol_chars] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(337),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(123),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [sym_named_function] = ACTIONS(55),
    [sym_shorthand_function] = ACTIONS(57),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(339),
    [sym_nil] = ACTIONS(341),
    [sym_true] = ACTIONS(341),
    [sym_false] = ACTIONS(341),
    [sym_number_long] = ACTIONS(341),
    [sym_number_double] = ACTIONS(339),
    [anon_sym_BSLASH] = ACTIONS(339),
    [anon_sym_DQUOTE] = ACTIONS(339),
    [anon_sym_POUND_DQUOTE] = ACTIONS(339),
    [anon_sym_SQUOTE] = ACTIONS(339),
    [anon_sym_LPARENquote] = ACTIONS(339),
    [anon_sym_RPAREN] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(341),
    [anon_sym_COLON_COLON] = ACTIONS(339),
    [anon_sym_DASH_GT] = ACTIONS(341),
    [anon_sym_DASH_GT_GT] = ACTIONS(339),
    [anon_sym_as_DASH_GT] = ACTIONS(339),
    [anon_sym_some_DASH_GT] = ACTIONS(341),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(339),
    [anon_sym_cond_DASH_GT] = ACTIONS(341),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(339),
    [sym__symbol_chars] = ACTIONS(341),
    [anon_sym_LPAREN] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(339),
    [anon_sym_RBRACK] = ACTIONS(339),
    [anon_sym_LBRACE] = ACTIONS(339),
    [anon_sym_RBRACE] = ACTIONS(339),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(339),
    [anon_sym_POUND] = ACTIONS(341),
    [anon_sym_POUND_LBRACE] = ACTIONS(339),
    [anon_sym_SEMI] = ACTIONS(339),
    [anon_sym_POUND_BANG] = ACTIONS(339),
    [anon_sym_POUND_] = ACTIONS(339),
    [anon_sym_LPARENcomment] = ACTIONS(339),
    [sym_named_function] = ACTIONS(341),
    [sym_shorthand_function] = ACTIONS(339),
  },
  [67] = {
    [sym__anything] = STATE(64),
    [sym__literal] = STATE(64),
    [sym__collection_literal] = STATE(64),
    [sym_boolean] = STATE(64),
    [sym_number] = STATE(64),
    [sym__number] = STATE(24),
    [sym_character] = STATE(64),
    [sym__character] = STATE(25),
    [sym_string] = STATE(64),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(64),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(64),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(64),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(64),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(64),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(64),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(64),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym__hash_map_kv_pair] = STATE(131),
    [sym__hash_map_key] = STATE(64),
    [sym_set] = STATE(64),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(64),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_special_form] = STATE(64),
    [sym_function] = STATE(36),
    [sym_anonymous_function] = STATE(22),
    [aux_sym__hash_map_repeat1] = STATE(131),
    [sym_nil] = ACTIONS(117),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(119),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_DASH_GT] = ACTIONS(29),
    [anon_sym_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_as_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT] = ACTIONS(29),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT] = ACTIONS(29),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(31),
    [sym__symbol_chars] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(343),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(123),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [sym_named_function] = ACTIONS(55),
    [sym_shorthand_function] = ACTIONS(57),
  },
  [68] = {
    [anon_sym_LBRACE] = ACTIONS(345),
  },
  [69] = {
    [sym__anything] = STATE(45),
    [sym__literal] = STATE(45),
    [sym__collection_literal] = STATE(45),
    [sym_boolean] = STATE(45),
    [sym_number] = STATE(45),
    [sym__number] = STATE(24),
    [sym_character] = STATE(45),
    [sym__character] = STATE(25),
    [sym_string] = STATE(45),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(45),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(45),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(45),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(45),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(45),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(45),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(45),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym_set] = STATE(45),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(45),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_special_form] = STATE(45),
    [sym_function] = STATE(36),
    [sym_anonymous_function] = STATE(22),
    [sym_nil] = ACTIONS(77),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_DASH_GT] = ACTIONS(29),
    [anon_sym_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_as_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT] = ACTIONS(29),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT] = ACTIONS(29),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(31),
    [sym__symbol_chars] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(135),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [sym_named_function] = ACTIONS(55),
    [sym_shorthand_function] = ACTIONS(57),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(347),
    [sym_nil] = ACTIONS(349),
    [sym_true] = ACTIONS(349),
    [sym_false] = ACTIONS(349),
    [sym_number_long] = ACTIONS(349),
    [sym_number_double] = ACTIONS(347),
    [anon_sym_BSLASH] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(347),
    [anon_sym_POUND_DQUOTE] = ACTIONS(347),
    [anon_sym_SQUOTE] = ACTIONS(347),
    [anon_sym_LPARENquote] = ACTIONS(347),
    [anon_sym_RPAREN] = ACTIONS(347),
    [anon_sym_COLON] = ACTIONS(349),
    [anon_sym_COLON_COLON] = ACTIONS(347),
    [anon_sym_DASH_GT] = ACTIONS(349),
    [anon_sym_DASH_GT_GT] = ACTIONS(347),
    [anon_sym_as_DASH_GT] = ACTIONS(347),
    [anon_sym_some_DASH_GT] = ACTIONS(349),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(347),
    [anon_sym_cond_DASH_GT] = ACTIONS(349),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(347),
    [sym__symbol_chars] = ACTIONS(349),
    [anon_sym_LPAREN] = ACTIONS(349),
    [anon_sym_LBRACK] = ACTIONS(347),
    [anon_sym_RBRACK] = ACTIONS(347),
    [anon_sym_LBRACE] = ACTIONS(347),
    [anon_sym_RBRACE] = ACTIONS(347),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(347),
    [anon_sym_POUND] = ACTIONS(349),
    [anon_sym_POUND_LBRACE] = ACTIONS(347),
    [anon_sym_SEMI] = ACTIONS(347),
    [anon_sym_POUND_BANG] = ACTIONS(347),
    [anon_sym_POUND_] = ACTIONS(347),
    [anon_sym_LPARENcomment] = ACTIONS(347),
    [sym_named_function] = ACTIONS(349),
    [sym_shorthand_function] = ACTIONS(347),
  },
  [71] = {
    [sym__number] = STATE(134),
    [sym__string] = STATE(134),
    [sym__keyword] = STATE(134),
    [sym__unqualified_keyword] = STATE(134),
    [sym_qualified_keyword] = STATE(134),
    [sym__symbol] = STATE(134),
    [sym_threading_macro] = STATE(134),
    [sym_qualified_symbol] = STATE(134),
    [sym__one_form] = STATE(134),
    [sym__paren_sequence] = STATE(134),
    [sym__bracket_sequence] = STATE(134),
    [sym__curly_brace_sequence] = STATE(134),
    [aux_sym_ignore_form_repeat1] = STATE(135),
    [sym_number_long] = ACTIONS(351),
    [sym_number_double] = ACTIONS(351),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(145),
    [anon_sym_COLON_COLON] = ACTIONS(147),
    [anon_sym_DASH_GT] = ACTIONS(149),
    [anon_sym_DASH_GT_GT] = ACTIONS(149),
    [anon_sym_as_DASH_GT] = ACTIONS(149),
    [anon_sym_some_DASH_GT] = ACTIONS(149),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(149),
    [anon_sym_cond_DASH_GT] = ACTIONS(149),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(149),
    [sym__symbol_chars] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_POUND] = ACTIONS(159),
    [anon_sym_] = ACTIONS(353),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(351),
  },
  [72] = {
    [sym__anything] = STATE(137),
    [sym__literal] = STATE(137),
    [sym__collection_literal] = STATE(137),
    [sym_boolean] = STATE(137),
    [sym_number] = STATE(137),
    [sym__number] = STATE(24),
    [sym_character] = STATE(137),
    [sym__character] = STATE(25),
    [sym_string] = STATE(137),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(137),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(137),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(137),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(137),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(137),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(137),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(137),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym_set] = STATE(137),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(137),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_special_form] = STATE(137),
    [sym_function] = STATE(36),
    [sym_anonymous_function] = STATE(22),
    [aux_sym_program_repeat1] = STATE(137),
    [sym_nil] = ACTIONS(355),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_DASH_GT] = ACTIONS(29),
    [anon_sym_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_as_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT] = ACTIONS(29),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT] = ACTIONS(29),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(31),
    [sym__symbol_chars] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(357),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(135),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [sym_named_function] = ACTIONS(55),
    [sym_shorthand_function] = ACTIONS(57),
  },
  [73] = {
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
    [anon_sym_DASH_GT] = ACTIONS(361),
    [anon_sym_DASH_GT_GT] = ACTIONS(359),
    [anon_sym_as_DASH_GT] = ACTIONS(359),
    [anon_sym_some_DASH_GT] = ACTIONS(361),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(359),
    [anon_sym_cond_DASH_GT] = ACTIONS(361),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(359),
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
    [sym_named_function] = ACTIONS(361),
    [sym_shorthand_function] = ACTIONS(359),
  },
  [74] = {
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
    [anon_sym_DASH_GT] = ACTIONS(365),
    [anon_sym_DASH_GT_GT] = ACTIONS(363),
    [anon_sym_as_DASH_GT] = ACTIONS(363),
    [anon_sym_some_DASH_GT] = ACTIONS(365),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(363),
    [anon_sym_cond_DASH_GT] = ACTIONS(365),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(363),
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
    [sym_named_function] = ACTIONS(365),
    [sym_shorthand_function] = ACTIONS(363),
  },
  [75] = {
    [aux_sym__string_repeat1] = STATE(139),
    [anon_sym_DQUOTE] = ACTIONS(367),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(369),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(369),
  },
  [76] = {
    [sym__keyword_chars] = ACTIONS(371),
  },
  [77] = {
    [sym__keyword_chars] = ACTIONS(373),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [sym_nil] = ACTIONS(91),
    [sym_true] = ACTIONS(91),
    [sym_false] = ACTIONS(91),
    [sym_number_long] = ACTIONS(91),
    [sym_number_double] = ACTIONS(91),
    [anon_sym_BSLASH] = ACTIONS(91),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_POUND_DQUOTE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_LPARENquote] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(91),
    [anon_sym_COLON_COLON] = ACTIONS(91),
    [anon_sym_DASH_GT] = ACTIONS(91),
    [anon_sym_DASH_GT_GT] = ACTIONS(91),
    [anon_sym_as_DASH_GT] = ACTIONS(91),
    [anon_sym_some_DASH_GT] = ACTIONS(91),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(91),
    [anon_sym_cond_DASH_GT] = ACTIONS(91),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(91),
    [sym__symbol_chars] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_RBRACK] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(91),
    [anon_sym_POUND] = ACTIONS(91),
    [anon_sym_POUND_LBRACE] = ACTIONS(91),
    [anon_sym_SEMI] = ACTIONS(91),
    [anon_sym_POUND_BANG] = ACTIONS(91),
    [anon_sym_POUND_] = ACTIONS(91),
    [anon_sym_] = ACTIONS(89),
    [anon_sym_LPARENcomment] = ACTIONS(91),
    [sym_named_function] = ACTIONS(91),
    [sym_shorthand_function] = ACTIONS(91),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [sym_nil] = ACTIONS(95),
    [sym_true] = ACTIONS(95),
    [sym_false] = ACTIONS(95),
    [sym_number_long] = ACTIONS(95),
    [sym_number_double] = ACTIONS(95),
    [anon_sym_BSLASH] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_POUND_DQUOTE] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(95),
    [anon_sym_LPARENquote] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(95),
    [anon_sym_SLASH] = ACTIONS(375),
    [anon_sym_DASH_GT] = ACTIONS(95),
    [anon_sym_DASH_GT_GT] = ACTIONS(95),
    [anon_sym_as_DASH_GT] = ACTIONS(95),
    [anon_sym_some_DASH_GT] = ACTIONS(95),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(95),
    [anon_sym_cond_DASH_GT] = ACTIONS(95),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(95),
    [sym__symbol_chars] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_RBRACK] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(95),
    [anon_sym_POUND] = ACTIONS(95),
    [anon_sym_POUND_LBRACE] = ACTIONS(95),
    [anon_sym_SEMI] = ACTIONS(95),
    [anon_sym_POUND_BANG] = ACTIONS(95),
    [anon_sym_POUND_] = ACTIONS(95),
    [anon_sym_] = ACTIONS(93),
    [anon_sym_LPARENcomment] = ACTIONS(95),
    [sym_named_function] = ACTIONS(95),
    [sym_shorthand_function] = ACTIONS(95),
  },
  [80] = {
    [sym__number] = STATE(144),
    [sym__string] = STATE(144),
    [sym__keyword] = STATE(144),
    [sym__unqualified_keyword] = STATE(144),
    [sym_qualified_keyword] = STATE(144),
    [sym__symbol] = STATE(144),
    [sym_threading_macro] = STATE(144),
    [sym_qualified_symbol] = STATE(144),
    [sym__one_form] = STATE(144),
    [sym__paren_sequence] = STATE(144),
    [sym__bracket_sequence] = STATE(144),
    [sym__curly_brace_sequence] = STATE(144),
    [aux_sym_comment_macro_repeat1] = STATE(144),
    [sym_number_long] = ACTIONS(377),
    [sym_number_double] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(379),
    [anon_sym_COLON] = ACTIONS(169),
    [anon_sym_COLON_COLON] = ACTIONS(171),
    [anon_sym_DASH_GT] = ACTIONS(173),
    [anon_sym_DASH_GT_GT] = ACTIONS(173),
    [anon_sym_as_DASH_GT] = ACTIONS(173),
    [anon_sym_some_DASH_GT] = ACTIONS(173),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(173),
    [anon_sym_cond_DASH_GT] = ACTIONS(173),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(173),
    [sym__symbol_chars] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(183),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(377),
  },
  [81] = {
    [sym__number] = STATE(155),
    [sym__string] = STATE(155),
    [sym__keyword] = STATE(155),
    [sym__unqualified_keyword] = STATE(155),
    [sym_qualified_keyword] = STATE(155),
    [sym__symbol] = STATE(155),
    [sym_threading_macro] = STATE(155),
    [sym_qualified_symbol] = STATE(155),
    [sym__one_form] = STATE(155),
    [sym__paren_sequence] = STATE(155),
    [sym__bracket_sequence] = STATE(155),
    [sym__curly_brace_sequence] = STATE(155),
    [aux_sym_comment_macro_repeat1] = STATE(155),
    [sym_number_long] = ACTIONS(381),
    [sym_number_double] = ACTIONS(381),
    [anon_sym_DQUOTE] = ACTIONS(383),
    [anon_sym_COLON] = ACTIONS(385),
    [anon_sym_COLON_COLON] = ACTIONS(387),
    [anon_sym_DASH_GT] = ACTIONS(389),
    [anon_sym_DASH_GT_GT] = ACTIONS(389),
    [anon_sym_as_DASH_GT] = ACTIONS(389),
    [anon_sym_some_DASH_GT] = ACTIONS(389),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(389),
    [anon_sym_cond_DASH_GT] = ACTIONS(389),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(389),
    [sym__symbol_chars] = ACTIONS(391),
    [anon_sym_LPAREN] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(395),
    [anon_sym_RBRACK] = ACTIONS(397),
    [anon_sym_LBRACE] = ACTIONS(399),
    [anon_sym_POUND] = ACTIONS(401),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(381),
  },
  [82] = {
    [sym__number] = STATE(166),
    [sym__string] = STATE(166),
    [sym__keyword] = STATE(166),
    [sym__unqualified_keyword] = STATE(166),
    [sym_qualified_keyword] = STATE(166),
    [sym__symbol] = STATE(166),
    [sym_threading_macro] = STATE(166),
    [sym_qualified_symbol] = STATE(166),
    [sym__one_form] = STATE(166),
    [sym__paren_sequence] = STATE(166),
    [sym__bracket_sequence] = STATE(166),
    [sym__curly_brace_sequence] = STATE(166),
    [aux_sym_comment_macro_repeat1] = STATE(166),
    [sym_number_long] = ACTIONS(403),
    [sym_number_double] = ACTIONS(403),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [anon_sym_COLON] = ACTIONS(407),
    [anon_sym_COLON_COLON] = ACTIONS(409),
    [anon_sym_DASH_GT] = ACTIONS(411),
    [anon_sym_DASH_GT_GT] = ACTIONS(411),
    [anon_sym_as_DASH_GT] = ACTIONS(411),
    [anon_sym_some_DASH_GT] = ACTIONS(411),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(411),
    [anon_sym_cond_DASH_GT] = ACTIONS(411),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(411),
    [sym__symbol_chars] = ACTIONS(413),
    [anon_sym_LPAREN] = ACTIONS(415),
    [anon_sym_LBRACK] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(419),
    [anon_sym_RBRACE] = ACTIONS(421),
    [anon_sym_POUND] = ACTIONS(423),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(403),
  },
  [83] = {
    [anon_sym_LBRACE] = ACTIONS(425),
  },
  [84] = {
    [aux_sym_ignore_form_repeat1] = STATE(168),
    [ts_builtin_sym_end] = ACTIONS(427),
    [sym_nil] = ACTIONS(429),
    [sym_true] = ACTIONS(429),
    [sym_false] = ACTIONS(429),
    [sym_number_long] = ACTIONS(429),
    [sym_number_double] = ACTIONS(429),
    [anon_sym_BSLASH] = ACTIONS(429),
    [anon_sym_DQUOTE] = ACTIONS(429),
    [anon_sym_POUND_DQUOTE] = ACTIONS(429),
    [anon_sym_SQUOTE] = ACTIONS(429),
    [anon_sym_LPARENquote] = ACTIONS(429),
    [anon_sym_COLON] = ACTIONS(429),
    [anon_sym_COLON_COLON] = ACTIONS(429),
    [anon_sym_DASH_GT] = ACTIONS(429),
    [anon_sym_DASH_GT_GT] = ACTIONS(429),
    [anon_sym_as_DASH_GT] = ACTIONS(429),
    [anon_sym_some_DASH_GT] = ACTIONS(429),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(429),
    [anon_sym_cond_DASH_GT] = ACTIONS(429),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(429),
    [sym__symbol_chars] = ACTIONS(429),
    [anon_sym_LPAREN] = ACTIONS(429),
    [anon_sym_LBRACK] = ACTIONS(429),
    [anon_sym_LBRACE] = ACTIONS(429),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(429),
    [anon_sym_POUND] = ACTIONS(429),
    [anon_sym_POUND_LBRACE] = ACTIONS(429),
    [anon_sym_SEMI] = ACTIONS(429),
    [anon_sym_POUND_BANG] = ACTIONS(429),
    [anon_sym_POUND_] = ACTIONS(429),
    [anon_sym_] = ACTIONS(431),
    [anon_sym_LPARENcomment] = ACTIONS(429),
    [sym_named_function] = ACTIONS(429),
    [sym_shorthand_function] = ACTIONS(429),
  },
  [85] = {
    [sym__number] = STATE(169),
    [sym__string] = STATE(169),
    [sym__keyword] = STATE(169),
    [sym__unqualified_keyword] = STATE(169),
    [sym_qualified_keyword] = STATE(169),
    [sym__symbol] = STATE(169),
    [sym_threading_macro] = STATE(169),
    [sym_qualified_symbol] = STATE(169),
    [sym__one_form] = STATE(169),
    [sym__paren_sequence] = STATE(169),
    [sym__bracket_sequence] = STATE(169),
    [sym__curly_brace_sequence] = STATE(169),
    [aux_sym_ignore_form_repeat1] = STATE(170),
    [sym_number_long] = ACTIONS(433),
    [sym_number_double] = ACTIONS(433),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(145),
    [anon_sym_COLON_COLON] = ACTIONS(147),
    [anon_sym_DASH_GT] = ACTIONS(149),
    [anon_sym_DASH_GT_GT] = ACTIONS(149),
    [anon_sym_as_DASH_GT] = ACTIONS(149),
    [anon_sym_some_DASH_GT] = ACTIONS(149),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(149),
    [anon_sym_cond_DASH_GT] = ACTIONS(149),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(149),
    [sym__symbol_chars] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_POUND] = ACTIONS(159),
    [anon_sym_] = ACTIONS(435),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(433),
  },
  [86] = {
    [aux_sym__string_repeat1] = STATE(172),
    [anon_sym_DQUOTE] = ACTIONS(437),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(439),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(439),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(441),
    [sym_nil] = ACTIONS(443),
    [sym_true] = ACTIONS(443),
    [sym_false] = ACTIONS(443),
    [sym_number_long] = ACTIONS(443),
    [sym_number_double] = ACTIONS(441),
    [anon_sym_BSLASH] = ACTIONS(441),
    [anon_sym_DQUOTE] = ACTIONS(441),
    [anon_sym_POUND_DQUOTE] = ACTIONS(441),
    [anon_sym_SQUOTE] = ACTIONS(441),
    [anon_sym_LPARENquote] = ACTIONS(441),
    [anon_sym_RPAREN] = ACTIONS(441),
    [anon_sym_COLON] = ACTIONS(443),
    [anon_sym_COLON_COLON] = ACTIONS(441),
    [anon_sym_DASH_GT] = ACTIONS(443),
    [anon_sym_DASH_GT_GT] = ACTIONS(441),
    [anon_sym_as_DASH_GT] = ACTIONS(441),
    [anon_sym_some_DASH_GT] = ACTIONS(443),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(441),
    [anon_sym_cond_DASH_GT] = ACTIONS(443),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(441),
    [sym__symbol_chars] = ACTIONS(443),
    [anon_sym_LPAREN] = ACTIONS(443),
    [anon_sym_LBRACK] = ACTIONS(441),
    [anon_sym_RBRACK] = ACTIONS(441),
    [anon_sym_LBRACE] = ACTIONS(441),
    [anon_sym_RBRACE] = ACTIONS(441),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(441),
    [anon_sym_POUND] = ACTIONS(443),
    [anon_sym_POUND_LBRACE] = ACTIONS(441),
    [anon_sym_SEMI] = ACTIONS(441),
    [anon_sym_POUND_BANG] = ACTIONS(441),
    [anon_sym_POUND_] = ACTIONS(441),
    [anon_sym_LPARENcomment] = ACTIONS(441),
    [sym_named_function] = ACTIONS(443),
    [sym_shorthand_function] = ACTIONS(441),
  },
  [88] = {
    [sym__keyword_chars] = ACTIONS(445),
  },
  [89] = {
    [sym__keyword_chars] = ACTIONS(447),
  },
  [90] = {
    [sym_number_long] = ACTIONS(91),
    [sym_number_double] = ACTIONS(91),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(91),
    [anon_sym_COLON_COLON] = ACTIONS(91),
    [anon_sym_DASH_GT] = ACTIONS(91),
    [anon_sym_DASH_GT_GT] = ACTIONS(91),
    [anon_sym_as_DASH_GT] = ACTIONS(91),
    [anon_sym_some_DASH_GT] = ACTIONS(91),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(91),
    [anon_sym_cond_DASH_GT] = ACTIONS(91),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(91),
    [sym__symbol_chars] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_POUND] = ACTIONS(91),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(91),
  },
  [91] = {
    [sym_number_long] = ACTIONS(95),
    [sym_number_double] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(95),
    [anon_sym_SLASH] = ACTIONS(449),
    [anon_sym_DASH_GT] = ACTIONS(95),
    [anon_sym_DASH_GT_GT] = ACTIONS(95),
    [anon_sym_as_DASH_GT] = ACTIONS(95),
    [anon_sym_some_DASH_GT] = ACTIONS(95),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(95),
    [anon_sym_cond_DASH_GT] = ACTIONS(95),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(95),
    [sym__symbol_chars] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(95),
    [anon_sym_POUND] = ACTIONS(95),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(95),
  },
  [92] = {
    [sym__number] = STATE(177),
    [sym__string] = STATE(177),
    [sym__keyword] = STATE(177),
    [sym__unqualified_keyword] = STATE(177),
    [sym_qualified_keyword] = STATE(177),
    [sym__symbol] = STATE(177),
    [sym_threading_macro] = STATE(177),
    [sym_qualified_symbol] = STATE(177),
    [sym__one_form] = STATE(177),
    [sym__paren_sequence] = STATE(177),
    [sym__bracket_sequence] = STATE(177),
    [sym__curly_brace_sequence] = STATE(177),
    [aux_sym_comment_macro_repeat1] = STATE(177),
    [sym_number_long] = ACTIONS(451),
    [sym_number_double] = ACTIONS(451),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(453),
    [anon_sym_COLON] = ACTIONS(169),
    [anon_sym_COLON_COLON] = ACTIONS(171),
    [anon_sym_DASH_GT] = ACTIONS(173),
    [anon_sym_DASH_GT_GT] = ACTIONS(173),
    [anon_sym_as_DASH_GT] = ACTIONS(173),
    [anon_sym_some_DASH_GT] = ACTIONS(173),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(173),
    [anon_sym_cond_DASH_GT] = ACTIONS(173),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(173),
    [sym__symbol_chars] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(183),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(451),
  },
  [93] = {
    [sym__number] = STATE(179),
    [sym__string] = STATE(179),
    [sym__keyword] = STATE(179),
    [sym__unqualified_keyword] = STATE(179),
    [sym_qualified_keyword] = STATE(179),
    [sym__symbol] = STATE(179),
    [sym_threading_macro] = STATE(179),
    [sym_qualified_symbol] = STATE(179),
    [sym__one_form] = STATE(179),
    [sym__paren_sequence] = STATE(179),
    [sym__bracket_sequence] = STATE(179),
    [sym__curly_brace_sequence] = STATE(179),
    [aux_sym_comment_macro_repeat1] = STATE(179),
    [sym_number_long] = ACTIONS(455),
    [sym_number_double] = ACTIONS(455),
    [anon_sym_DQUOTE] = ACTIONS(383),
    [anon_sym_COLON] = ACTIONS(385),
    [anon_sym_COLON_COLON] = ACTIONS(387),
    [anon_sym_DASH_GT] = ACTIONS(389),
    [anon_sym_DASH_GT_GT] = ACTIONS(389),
    [anon_sym_as_DASH_GT] = ACTIONS(389),
    [anon_sym_some_DASH_GT] = ACTIONS(389),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(389),
    [anon_sym_cond_DASH_GT] = ACTIONS(389),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(389),
    [sym__symbol_chars] = ACTIONS(391),
    [anon_sym_LPAREN] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(395),
    [anon_sym_RBRACK] = ACTIONS(457),
    [anon_sym_LBRACE] = ACTIONS(399),
    [anon_sym_POUND] = ACTIONS(401),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(455),
  },
  [94] = {
    [sym__number] = STATE(181),
    [sym__string] = STATE(181),
    [sym__keyword] = STATE(181),
    [sym__unqualified_keyword] = STATE(181),
    [sym_qualified_keyword] = STATE(181),
    [sym__symbol] = STATE(181),
    [sym_threading_macro] = STATE(181),
    [sym_qualified_symbol] = STATE(181),
    [sym__one_form] = STATE(181),
    [sym__paren_sequence] = STATE(181),
    [sym__bracket_sequence] = STATE(181),
    [sym__curly_brace_sequence] = STATE(181),
    [aux_sym_comment_macro_repeat1] = STATE(181),
    [sym_number_long] = ACTIONS(459),
    [sym_number_double] = ACTIONS(459),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [anon_sym_COLON] = ACTIONS(407),
    [anon_sym_COLON_COLON] = ACTIONS(409),
    [anon_sym_DASH_GT] = ACTIONS(411),
    [anon_sym_DASH_GT_GT] = ACTIONS(411),
    [anon_sym_as_DASH_GT] = ACTIONS(411),
    [anon_sym_some_DASH_GT] = ACTIONS(411),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(411),
    [anon_sym_cond_DASH_GT] = ACTIONS(411),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(411),
    [sym__symbol_chars] = ACTIONS(413),
    [anon_sym_LPAREN] = ACTIONS(415),
    [anon_sym_LBRACK] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(419),
    [anon_sym_RBRACE] = ACTIONS(461),
    [anon_sym_POUND] = ACTIONS(423),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(459),
  },
  [95] = {
    [anon_sym_LBRACE] = ACTIONS(463),
  },
  [96] = {
    [sym__number] = STATE(184),
    [sym__string] = STATE(184),
    [sym__keyword] = STATE(184),
    [sym__unqualified_keyword] = STATE(184),
    [sym_qualified_keyword] = STATE(184),
    [sym__symbol] = STATE(184),
    [sym_threading_macro] = STATE(184),
    [sym_qualified_symbol] = STATE(184),
    [sym__one_form] = STATE(184),
    [sym__paren_sequence] = STATE(184),
    [sym__bracket_sequence] = STATE(184),
    [sym__curly_brace_sequence] = STATE(184),
    [aux_sym_comment_macro_repeat1] = STATE(184),
    [sym_number_long] = ACTIONS(465),
    [sym_number_double] = ACTIONS(465),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(467),
    [anon_sym_COLON] = ACTIONS(169),
    [anon_sym_COLON_COLON] = ACTIONS(171),
    [anon_sym_DASH_GT] = ACTIONS(173),
    [anon_sym_DASH_GT_GT] = ACTIONS(173),
    [anon_sym_as_DASH_GT] = ACTIONS(173),
    [anon_sym_some_DASH_GT] = ACTIONS(173),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(173),
    [anon_sym_cond_DASH_GT] = ACTIONS(173),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(173),
    [sym__symbol_chars] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(183),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(465),
  },
  [97] = {
    [sym__anything] = STATE(97),
    [sym__literal] = STATE(97),
    [sym__collection_literal] = STATE(97),
    [sym_boolean] = STATE(97),
    [sym_number] = STATE(97),
    [sym__number] = STATE(24),
    [sym_character] = STATE(97),
    [sym__character] = STATE(25),
    [sym_string] = STATE(97),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(97),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(97),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(97),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(97),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(97),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(97),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(97),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym_set] = STATE(97),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(97),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_special_form] = STATE(97),
    [sym_function] = STATE(36),
    [sym_anonymous_function] = STATE(22),
    [aux_sym_program_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(469),
    [sym_nil] = ACTIONS(471),
    [sym_true] = ACTIONS(474),
    [sym_false] = ACTIONS(474),
    [sym_number_long] = ACTIONS(477),
    [sym_number_double] = ACTIONS(480),
    [anon_sym_BSLASH] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(486),
    [anon_sym_POUND_DQUOTE] = ACTIONS(489),
    [anon_sym_SQUOTE] = ACTIONS(492),
    [anon_sym_LPARENquote] = ACTIONS(495),
    [anon_sym_COLON] = ACTIONS(498),
    [anon_sym_COLON_COLON] = ACTIONS(501),
    [anon_sym_DASH_GT] = ACTIONS(504),
    [anon_sym_DASH_GT_GT] = ACTIONS(507),
    [anon_sym_as_DASH_GT] = ACTIONS(507),
    [anon_sym_some_DASH_GT] = ACTIONS(504),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(507),
    [anon_sym_cond_DASH_GT] = ACTIONS(504),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(507),
    [sym__symbol_chars] = ACTIONS(510),
    [anon_sym_LPAREN] = ACTIONS(513),
    [anon_sym_LBRACK] = ACTIONS(516),
    [anon_sym_LBRACE] = ACTIONS(519),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(522),
    [anon_sym_POUND] = ACTIONS(525),
    [anon_sym_POUND_LBRACE] = ACTIONS(528),
    [anon_sym_SEMI] = ACTIONS(531),
    [anon_sym_POUND_BANG] = ACTIONS(534),
    [anon_sym_POUND_] = ACTIONS(537),
    [anon_sym_LPARENcomment] = ACTIONS(540),
    [sym_named_function] = ACTIONS(543),
    [sym_shorthand_function] = ACTIONS(546),
  },
  [98] = {
    [sym__hex_char] = ACTIONS(549),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(551),
    [sym_nil] = ACTIONS(553),
    [sym_true] = ACTIONS(553),
    [sym_false] = ACTIONS(553),
    [sym_number_long] = ACTIONS(553),
    [sym_number_double] = ACTIONS(551),
    [anon_sym_BSLASH] = ACTIONS(551),
    [anon_sym_DQUOTE] = ACTIONS(551),
    [anon_sym_POUND_DQUOTE] = ACTIONS(551),
    [anon_sym_SQUOTE] = ACTIONS(551),
    [anon_sym_LPARENquote] = ACTIONS(551),
    [anon_sym_RPAREN] = ACTIONS(551),
    [anon_sym_COLON] = ACTIONS(553),
    [anon_sym_COLON_COLON] = ACTIONS(551),
    [anon_sym_DASH_GT] = ACTIONS(553),
    [anon_sym_DASH_GT_GT] = ACTIONS(551),
    [anon_sym_as_DASH_GT] = ACTIONS(551),
    [anon_sym_some_DASH_GT] = ACTIONS(553),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(551),
    [anon_sym_cond_DASH_GT] = ACTIONS(553),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(551),
    [sym__symbol_chars] = ACTIONS(553),
    [anon_sym_LPAREN] = ACTIONS(553),
    [anon_sym_LBRACK] = ACTIONS(551),
    [anon_sym_RBRACK] = ACTIONS(551),
    [anon_sym_LBRACE] = ACTIONS(551),
    [anon_sym_RBRACE] = ACTIONS(551),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(551),
    [anon_sym_POUND] = ACTIONS(553),
    [anon_sym_POUND_LBRACE] = ACTIONS(551),
    [anon_sym_SEMI] = ACTIONS(551),
    [anon_sym_POUND_BANG] = ACTIONS(551),
    [anon_sym_POUND_] = ACTIONS(551),
    [anon_sym_LPARENcomment] = ACTIONS(551),
    [sym_named_function] = ACTIONS(553),
    [sym_shorthand_function] = ACTIONS(551),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(555),
    [sym_nil] = ACTIONS(557),
    [sym_true] = ACTIONS(557),
    [sym_false] = ACTIONS(557),
    [sym_number_long] = ACTIONS(557),
    [sym_number_double] = ACTIONS(555),
    [anon_sym_BSLASH] = ACTIONS(555),
    [anon_sym_DQUOTE] = ACTIONS(555),
    [anon_sym_POUND_DQUOTE] = ACTIONS(555),
    [anon_sym_SQUOTE] = ACTIONS(555),
    [anon_sym_LPARENquote] = ACTIONS(555),
    [anon_sym_RPAREN] = ACTIONS(555),
    [anon_sym_COLON] = ACTIONS(557),
    [anon_sym_COLON_COLON] = ACTIONS(555),
    [anon_sym_DASH_GT] = ACTIONS(557),
    [anon_sym_DASH_GT_GT] = ACTIONS(555),
    [anon_sym_as_DASH_GT] = ACTIONS(555),
    [anon_sym_some_DASH_GT] = ACTIONS(557),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(555),
    [anon_sym_cond_DASH_GT] = ACTIONS(557),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(555),
    [sym__symbol_chars] = ACTIONS(557),
    [anon_sym_LPAREN] = ACTIONS(557),
    [anon_sym_LBRACK] = ACTIONS(555),
    [anon_sym_RBRACK] = ACTIONS(555),
    [anon_sym_LBRACE] = ACTIONS(555),
    [anon_sym_RBRACE] = ACTIONS(555),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(555),
    [anon_sym_POUND] = ACTIONS(557),
    [anon_sym_POUND_LBRACE] = ACTIONS(555),
    [anon_sym_SEMI] = ACTIONS(555),
    [anon_sym_POUND_BANG] = ACTIONS(555),
    [anon_sym_POUND_] = ACTIONS(555),
    [anon_sym_LPARENcomment] = ACTIONS(555),
    [sym_named_function] = ACTIONS(557),
    [sym_shorthand_function] = ACTIONS(555),
  },
  [101] = {
    [aux_sym__string_repeat1] = STATE(101),
    [anon_sym_DQUOTE] = ACTIONS(559),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(561),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(561),
  },
  [102] = {
    [ts_builtin_sym_end] = ACTIONS(564),
    [sym_nil] = ACTIONS(566),
    [sym_true] = ACTIONS(566),
    [sym_false] = ACTIONS(566),
    [sym_number_long] = ACTIONS(566),
    [sym_number_double] = ACTIONS(564),
    [anon_sym_BSLASH] = ACTIONS(564),
    [anon_sym_DQUOTE] = ACTIONS(564),
    [anon_sym_POUND_DQUOTE] = ACTIONS(564),
    [anon_sym_SQUOTE] = ACTIONS(564),
    [anon_sym_LPARENquote] = ACTIONS(564),
    [anon_sym_RPAREN] = ACTIONS(564),
    [anon_sym_COLON] = ACTIONS(566),
    [anon_sym_COLON_COLON] = ACTIONS(564),
    [anon_sym_DASH_GT] = ACTIONS(566),
    [anon_sym_DASH_GT_GT] = ACTIONS(564),
    [anon_sym_as_DASH_GT] = ACTIONS(564),
    [anon_sym_some_DASH_GT] = ACTIONS(566),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(564),
    [anon_sym_cond_DASH_GT] = ACTIONS(566),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(564),
    [sym__symbol_chars] = ACTIONS(566),
    [anon_sym_LPAREN] = ACTIONS(566),
    [anon_sym_LBRACK] = ACTIONS(564),
    [anon_sym_RBRACK] = ACTIONS(564),
    [anon_sym_LBRACE] = ACTIONS(564),
    [anon_sym_RBRACE] = ACTIONS(564),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(564),
    [anon_sym_POUND] = ACTIONS(566),
    [anon_sym_POUND_LBRACE] = ACTIONS(564),
    [anon_sym_SEMI] = ACTIONS(564),
    [anon_sym_POUND_BANG] = ACTIONS(564),
    [anon_sym_POUND_] = ACTIONS(564),
    [anon_sym_LPARENcomment] = ACTIONS(564),
    [sym_named_function] = ACTIONS(566),
    [sym_shorthand_function] = ACTIONS(564),
  },
  [103] = {
    [aux_sym__regex_repeat1] = STATE(103),
    [anon_sym_DQUOTE] = ACTIONS(568),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(570),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(570),
  },
  [104] = {
    [aux_sym_ignore_form_repeat1] = STATE(186),
    [anon_sym_RPAREN] = ACTIONS(429),
    [anon_sym_] = ACTIONS(573),
  },
  [105] = {
    [sym__number] = STATE(187),
    [sym__string] = STATE(187),
    [sym__keyword] = STATE(187),
    [sym__unqualified_keyword] = STATE(187),
    [sym_qualified_keyword] = STATE(187),
    [sym__symbol] = STATE(187),
    [sym_threading_macro] = STATE(187),
    [sym_qualified_symbol] = STATE(187),
    [sym__one_form] = STATE(187),
    [sym__paren_sequence] = STATE(187),
    [sym__bracket_sequence] = STATE(187),
    [sym__curly_brace_sequence] = STATE(187),
    [aux_sym_ignore_form_repeat1] = STATE(170),
    [sym_number_long] = ACTIONS(575),
    [sym_number_double] = ACTIONS(575),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(145),
    [anon_sym_COLON_COLON] = ACTIONS(147),
    [anon_sym_DASH_GT] = ACTIONS(149),
    [anon_sym_DASH_GT_GT] = ACTIONS(149),
    [anon_sym_as_DASH_GT] = ACTIONS(149),
    [anon_sym_some_DASH_GT] = ACTIONS(149),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(149),
    [anon_sym_cond_DASH_GT] = ACTIONS(149),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(149),
    [sym__symbol_chars] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_POUND] = ACTIONS(159),
    [anon_sym_] = ACTIONS(435),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(575),
  },
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(577),
    [sym_nil] = ACTIONS(579),
    [sym_true] = ACTIONS(579),
    [sym_false] = ACTIONS(579),
    [sym_number_long] = ACTIONS(579),
    [sym_number_double] = ACTIONS(577),
    [anon_sym_BSLASH] = ACTIONS(577),
    [anon_sym_DQUOTE] = ACTIONS(577),
    [anon_sym_POUND_DQUOTE] = ACTIONS(577),
    [anon_sym_SQUOTE] = ACTIONS(577),
    [anon_sym_LPARENquote] = ACTIONS(577),
    [anon_sym_RPAREN] = ACTIONS(577),
    [anon_sym_COLON] = ACTIONS(579),
    [anon_sym_COLON_COLON] = ACTIONS(577),
    [anon_sym_DASH_GT] = ACTIONS(579),
    [anon_sym_DASH_GT_GT] = ACTIONS(577),
    [anon_sym_as_DASH_GT] = ACTIONS(577),
    [anon_sym_some_DASH_GT] = ACTIONS(579),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(577),
    [anon_sym_cond_DASH_GT] = ACTIONS(579),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(577),
    [sym__symbol_chars] = ACTIONS(579),
    [anon_sym_LPAREN] = ACTIONS(579),
    [anon_sym_LBRACK] = ACTIONS(577),
    [anon_sym_RBRACK] = ACTIONS(577),
    [anon_sym_LBRACE] = ACTIONS(577),
    [anon_sym_RBRACE] = ACTIONS(577),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(577),
    [anon_sym_POUND] = ACTIONS(579),
    [anon_sym_POUND_LBRACE] = ACTIONS(577),
    [anon_sym_SEMI] = ACTIONS(577),
    [anon_sym_POUND_BANG] = ACTIONS(577),
    [anon_sym_POUND_] = ACTIONS(577),
    [anon_sym_LPARENcomment] = ACTIONS(577),
    [sym_named_function] = ACTIONS(579),
    [sym_shorthand_function] = ACTIONS(577),
  },
  [107] = {
    [sym__keyword_chars] = ACTIONS(581),
  },
  [108] = {
    [ts_builtin_sym_end] = ACTIONS(583),
    [sym_nil] = ACTIONS(585),
    [sym_true] = ACTIONS(585),
    [sym_false] = ACTIONS(585),
    [sym_number_long] = ACTIONS(585),
    [sym_number_double] = ACTIONS(583),
    [anon_sym_BSLASH] = ACTIONS(583),
    [anon_sym_DQUOTE] = ACTIONS(583),
    [anon_sym_POUND_DQUOTE] = ACTIONS(583),
    [anon_sym_SQUOTE] = ACTIONS(583),
    [anon_sym_LPARENquote] = ACTIONS(583),
    [anon_sym_RPAREN] = ACTIONS(583),
    [anon_sym_COLON] = ACTIONS(585),
    [anon_sym_COLON_COLON] = ACTIONS(583),
    [anon_sym_DASH_GT] = ACTIONS(585),
    [anon_sym_DASH_GT_GT] = ACTIONS(583),
    [anon_sym_as_DASH_GT] = ACTIONS(583),
    [anon_sym_some_DASH_GT] = ACTIONS(585),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(583),
    [anon_sym_cond_DASH_GT] = ACTIONS(585),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(583),
    [sym__symbol_chars] = ACTIONS(585),
    [anon_sym_LPAREN] = ACTIONS(585),
    [anon_sym_LBRACK] = ACTIONS(583),
    [anon_sym_RBRACK] = ACTIONS(583),
    [anon_sym_LBRACE] = ACTIONS(583),
    [anon_sym_RBRACE] = ACTIONS(583),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(583),
    [anon_sym_POUND] = ACTIONS(585),
    [anon_sym_POUND_LBRACE] = ACTIONS(583),
    [anon_sym_SEMI] = ACTIONS(583),
    [anon_sym_POUND_BANG] = ACTIONS(583),
    [anon_sym_POUND_] = ACTIONS(583),
    [anon_sym_LPARENcomment] = ACTIONS(583),
    [sym_named_function] = ACTIONS(585),
    [sym_shorthand_function] = ACTIONS(583),
  },
  [109] = {
    [aux_sym_ignore_form_repeat1] = STATE(189),
    [sym_nil] = ACTIONS(429),
    [sym_true] = ACTIONS(429),
    [sym_false] = ACTIONS(429),
    [sym_number_long] = ACTIONS(429),
    [sym_number_double] = ACTIONS(429),
    [anon_sym_BSLASH] = ACTIONS(429),
    [anon_sym_DQUOTE] = ACTIONS(429),
    [anon_sym_POUND_DQUOTE] = ACTIONS(429),
    [anon_sym_SQUOTE] = ACTIONS(429),
    [anon_sym_LPARENquote] = ACTIONS(429),
    [anon_sym_RPAREN] = ACTIONS(429),
    [anon_sym_COLON] = ACTIONS(429),
    [anon_sym_COLON_COLON] = ACTIONS(429),
    [anon_sym_DASH_GT] = ACTIONS(429),
    [anon_sym_DASH_GT_GT] = ACTIONS(429),
    [anon_sym_as_DASH_GT] = ACTIONS(429),
    [anon_sym_some_DASH_GT] = ACTIONS(429),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(429),
    [anon_sym_cond_DASH_GT] = ACTIONS(429),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(429),
    [sym__symbol_chars] = ACTIONS(429),
    [anon_sym_LPAREN] = ACTIONS(429),
    [anon_sym_LBRACK] = ACTIONS(429),
    [anon_sym_LBRACE] = ACTIONS(429),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(429),
    [anon_sym_POUND] = ACTIONS(429),
    [anon_sym_POUND_LBRACE] = ACTIONS(429),
    [anon_sym_SEMI] = ACTIONS(429),
    [anon_sym_POUND_BANG] = ACTIONS(429),
    [anon_sym_POUND_] = ACTIONS(429),
    [anon_sym_] = ACTIONS(587),
    [anon_sym_LPARENcomment] = ACTIONS(429),
    [sym_named_function] = ACTIONS(429),
    [sym_shorthand_function] = ACTIONS(429),
  },
  [110] = {
    [sym__number] = STATE(190),
    [sym__string] = STATE(190),
    [sym__keyword] = STATE(190),
    [sym__unqualified_keyword] = STATE(190),
    [sym_qualified_keyword] = STATE(190),
    [sym__symbol] = STATE(190),
    [sym_threading_macro] = STATE(190),
    [sym_qualified_symbol] = STATE(190),
    [sym__one_form] = STATE(190),
    [sym__paren_sequence] = STATE(190),
    [sym__bracket_sequence] = STATE(190),
    [sym__curly_brace_sequence] = STATE(190),
    [aux_sym_ignore_form_repeat1] = STATE(170),
    [sym_number_long] = ACTIONS(589),
    [sym_number_double] = ACTIONS(589),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(145),
    [anon_sym_COLON_COLON] = ACTIONS(147),
    [anon_sym_DASH_GT] = ACTIONS(149),
    [anon_sym_DASH_GT_GT] = ACTIONS(149),
    [anon_sym_as_DASH_GT] = ACTIONS(149),
    [anon_sym_some_DASH_GT] = ACTIONS(149),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(149),
    [anon_sym_cond_DASH_GT] = ACTIONS(149),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(149),
    [sym__symbol_chars] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_POUND] = ACTIONS(159),
    [anon_sym_] = ACTIONS(435),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(589),
  },
  [111] = {
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(89),
  },
  [112] = {
    [anon_sym_SLASH] = ACTIONS(591),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(93),
  },
  [113] = {
    [sym_vector] = STATE(116),
    [sym__vector] = STATE(32),
    [sym__single_arity_fn] = STATE(192),
    [sym_params] = STATE(119),
    [anon_sym_LBRACK] = ACTIONS(37),
  },
  [114] = {
    [anon_sym_LPAREN] = ACTIONS(593),
    [anon_sym_LBRACK] = ACTIONS(593),
  },
  [115] = {
    [anon_sym_LPAREN] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(215),
  },
  [116] = {
    [sym_nil] = ACTIONS(595),
    [sym_true] = ACTIONS(595),
    [sym_false] = ACTIONS(595),
    [sym_number_long] = ACTIONS(595),
    [sym_number_double] = ACTIONS(597),
    [anon_sym_BSLASH] = ACTIONS(597),
    [anon_sym_DQUOTE] = ACTIONS(597),
    [anon_sym_POUND_DQUOTE] = ACTIONS(597),
    [anon_sym_SQUOTE] = ACTIONS(597),
    [anon_sym_LPARENquote] = ACTIONS(597),
    [anon_sym_RPAREN] = ACTIONS(597),
    [anon_sym_COLON] = ACTIONS(595),
    [anon_sym_COLON_COLON] = ACTIONS(597),
    [anon_sym_DASH_GT] = ACTIONS(595),
    [anon_sym_DASH_GT_GT] = ACTIONS(597),
    [anon_sym_as_DASH_GT] = ACTIONS(597),
    [anon_sym_some_DASH_GT] = ACTIONS(595),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(597),
    [anon_sym_cond_DASH_GT] = ACTIONS(595),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(597),
    [sym__symbol_chars] = ACTIONS(595),
    [anon_sym_LPAREN] = ACTIONS(595),
    [anon_sym_LBRACK] = ACTIONS(597),
    [anon_sym_LBRACE] = ACTIONS(597),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(597),
    [anon_sym_POUND] = ACTIONS(595),
    [anon_sym_POUND_LBRACE] = ACTIONS(597),
    [anon_sym_SEMI] = ACTIONS(597),
    [anon_sym_POUND_BANG] = ACTIONS(597),
    [anon_sym_POUND_] = ACTIONS(597),
    [anon_sym_LPARENcomment] = ACTIONS(597),
    [sym_named_function] = ACTIONS(595),
    [sym_shorthand_function] = ACTIONS(597),
  },
  [117] = {
    [sym_vector] = STATE(116),
    [sym__vector] = STATE(32),
    [sym__single_arity_fn] = STATE(193),
    [sym__multi_arity_fn] = STATE(193),
    [sym_params] = STATE(119),
    [aux_sym__multi_arity_fn_repeat1] = STATE(120),
    [anon_sym_LPAREN] = ACTIONS(309),
    [anon_sym_LBRACK] = ACTIONS(37),
  },
  [118] = {
    [anon_sym_RPAREN] = ACTIONS(599),
  },
  [119] = {
    [sym__anything] = STATE(196),
    [sym__literal] = STATE(196),
    [sym__collection_literal] = STATE(196),
    [sym_boolean] = STATE(196),
    [sym_number] = STATE(196),
    [sym__number] = STATE(24),
    [sym_character] = STATE(196),
    [sym__character] = STATE(25),
    [sym_string] = STATE(196),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(196),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(196),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(196),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(196),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(196),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(196),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(196),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym_set] = STATE(196),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(196),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_special_form] = STATE(196),
    [sym_function] = STATE(36),
    [sym_anonymous_function] = STATE(22),
    [sym_function_body] = STATE(195),
    [aux_sym_program_repeat1] = STATE(196),
    [sym_nil] = ACTIONS(601),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(101),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(603),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_DASH_GT] = ACTIONS(29),
    [anon_sym_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_as_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT] = ACTIONS(29),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT] = ACTIONS(29),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(31),
    [sym__symbol_chars] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(105),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [sym_named_function] = ACTIONS(55),
    [sym_shorthand_function] = ACTIONS(57),
  },
  [120] = {
    [aux_sym__multi_arity_fn_repeat1] = STATE(197),
    [anon_sym_RPAREN] = ACTIONS(605),
    [anon_sym_LPAREN] = ACTIONS(309),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(607),
    [sym_nil] = ACTIONS(609),
    [sym_true] = ACTIONS(609),
    [sym_false] = ACTIONS(609),
    [sym_number_long] = ACTIONS(609),
    [sym_number_double] = ACTIONS(607),
    [anon_sym_BSLASH] = ACTIONS(607),
    [anon_sym_DQUOTE] = ACTIONS(607),
    [anon_sym_POUND_DQUOTE] = ACTIONS(607),
    [anon_sym_SQUOTE] = ACTIONS(607),
    [anon_sym_LPARENquote] = ACTIONS(607),
    [anon_sym_RPAREN] = ACTIONS(607),
    [anon_sym_COLON] = ACTIONS(609),
    [anon_sym_COLON_COLON] = ACTIONS(607),
    [anon_sym_DASH_GT] = ACTIONS(609),
    [anon_sym_DASH_GT_GT] = ACTIONS(607),
    [anon_sym_as_DASH_GT] = ACTIONS(607),
    [anon_sym_some_DASH_GT] = ACTIONS(609),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(607),
    [anon_sym_cond_DASH_GT] = ACTIONS(609),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(607),
    [sym__symbol_chars] = ACTIONS(609),
    [anon_sym_LPAREN] = ACTIONS(609),
    [anon_sym_LBRACK] = ACTIONS(607),
    [anon_sym_RBRACK] = ACTIONS(607),
    [anon_sym_LBRACE] = ACTIONS(607),
    [anon_sym_RBRACE] = ACTIONS(607),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(607),
    [anon_sym_POUND] = ACTIONS(609),
    [anon_sym_POUND_LBRACE] = ACTIONS(607),
    [anon_sym_SEMI] = ACTIONS(607),
    [anon_sym_POUND_BANG] = ACTIONS(607),
    [anon_sym_POUND_] = ACTIONS(607),
    [anon_sym_LPARENcomment] = ACTIONS(607),
    [sym_named_function] = ACTIONS(609),
    [sym_shorthand_function] = ACTIONS(607),
  },
  [122] = {
    [sym__anything] = STATE(122),
    [sym__literal] = STATE(122),
    [sym__collection_literal] = STATE(122),
    [sym_boolean] = STATE(122),
    [sym_number] = STATE(122),
    [sym__number] = STATE(24),
    [sym_character] = STATE(122),
    [sym__character] = STATE(25),
    [sym_string] = STATE(122),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(122),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(122),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(122),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(122),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(122),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(122),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(122),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym_set] = STATE(122),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(122),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_special_form] = STATE(122),
    [sym_function] = STATE(36),
    [sym_anonymous_function] = STATE(22),
    [aux_sym_program_repeat1] = STATE(122),
    [sym_nil] = ACTIONS(611),
    [sym_true] = ACTIONS(474),
    [sym_false] = ACTIONS(474),
    [sym_number_long] = ACTIONS(477),
    [sym_number_double] = ACTIONS(480),
    [anon_sym_BSLASH] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(486),
    [anon_sym_POUND_DQUOTE] = ACTIONS(489),
    [anon_sym_SQUOTE] = ACTIONS(614),
    [anon_sym_LPARENquote] = ACTIONS(495),
    [anon_sym_RPAREN] = ACTIONS(469),
    [anon_sym_COLON] = ACTIONS(498),
    [anon_sym_COLON_COLON] = ACTIONS(501),
    [anon_sym_DASH_GT] = ACTIONS(504),
    [anon_sym_DASH_GT_GT] = ACTIONS(507),
    [anon_sym_as_DASH_GT] = ACTIONS(507),
    [anon_sym_some_DASH_GT] = ACTIONS(504),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(507),
    [anon_sym_cond_DASH_GT] = ACTIONS(504),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(507),
    [sym__symbol_chars] = ACTIONS(510),
    [anon_sym_LPAREN] = ACTIONS(513),
    [anon_sym_LBRACK] = ACTIONS(516),
    [anon_sym_LBRACE] = ACTIONS(519),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(522),
    [anon_sym_POUND] = ACTIONS(525),
    [anon_sym_POUND_LBRACE] = ACTIONS(528),
    [anon_sym_SEMI] = ACTIONS(531),
    [anon_sym_POUND_BANG] = ACTIONS(534),
    [anon_sym_POUND_] = ACTIONS(617),
    [anon_sym_LPARENcomment] = ACTIONS(540),
    [sym_named_function] = ACTIONS(543),
    [sym_shorthand_function] = ACTIONS(546),
  },
  [123] = {
    [aux_sym_ignore_form_repeat1] = STATE(198),
    [sym_nil] = ACTIONS(429),
    [sym_true] = ACTIONS(429),
    [sym_false] = ACTIONS(429),
    [sym_number_long] = ACTIONS(429),
    [sym_number_double] = ACTIONS(429),
    [anon_sym_BSLASH] = ACTIONS(429),
    [anon_sym_DQUOTE] = ACTIONS(429),
    [anon_sym_POUND_DQUOTE] = ACTIONS(429),
    [anon_sym_SQUOTE] = ACTIONS(429),
    [anon_sym_LPARENquote] = ACTIONS(429),
    [anon_sym_COLON] = ACTIONS(429),
    [anon_sym_COLON_COLON] = ACTIONS(429),
    [anon_sym_DASH_GT] = ACTIONS(429),
    [anon_sym_DASH_GT_GT] = ACTIONS(429),
    [anon_sym_as_DASH_GT] = ACTIONS(429),
    [anon_sym_some_DASH_GT] = ACTIONS(429),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(429),
    [anon_sym_cond_DASH_GT] = ACTIONS(429),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(429),
    [sym__symbol_chars] = ACTIONS(429),
    [anon_sym_LPAREN] = ACTIONS(429),
    [anon_sym_LBRACK] = ACTIONS(429),
    [anon_sym_RBRACK] = ACTIONS(429),
    [anon_sym_LBRACE] = ACTIONS(429),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(429),
    [anon_sym_POUND] = ACTIONS(429),
    [anon_sym_POUND_LBRACE] = ACTIONS(429),
    [anon_sym_SEMI] = ACTIONS(429),
    [anon_sym_POUND_BANG] = ACTIONS(429),
    [anon_sym_POUND_] = ACTIONS(429),
    [anon_sym_] = ACTIONS(620),
    [anon_sym_LPARENcomment] = ACTIONS(429),
    [sym_named_function] = ACTIONS(429),
    [sym_shorthand_function] = ACTIONS(429),
  },
  [124] = {
    [sym__number] = STATE(199),
    [sym__string] = STATE(199),
    [sym__keyword] = STATE(199),
    [sym__unqualified_keyword] = STATE(199),
    [sym_qualified_keyword] = STATE(199),
    [sym__symbol] = STATE(199),
    [sym_threading_macro] = STATE(199),
    [sym_qualified_symbol] = STATE(199),
    [sym__one_form] = STATE(199),
    [sym__paren_sequence] = STATE(199),
    [sym__bracket_sequence] = STATE(199),
    [sym__curly_brace_sequence] = STATE(199),
    [aux_sym_ignore_form_repeat1] = STATE(170),
    [sym_number_long] = ACTIONS(622),
    [sym_number_double] = ACTIONS(622),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(145),
    [anon_sym_COLON_COLON] = ACTIONS(147),
    [anon_sym_DASH_GT] = ACTIONS(149),
    [anon_sym_DASH_GT_GT] = ACTIONS(149),
    [anon_sym_as_DASH_GT] = ACTIONS(149),
    [anon_sym_some_DASH_GT] = ACTIONS(149),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(149),
    [anon_sym_cond_DASH_GT] = ACTIONS(149),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(149),
    [sym__symbol_chars] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_POUND] = ACTIONS(159),
    [anon_sym_] = ACTIONS(435),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(622),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(624),
    [sym_nil] = ACTIONS(626),
    [sym_true] = ACTIONS(626),
    [sym_false] = ACTIONS(626),
    [sym_number_long] = ACTIONS(626),
    [sym_number_double] = ACTIONS(624),
    [anon_sym_BSLASH] = ACTIONS(624),
    [anon_sym_DQUOTE] = ACTIONS(624),
    [anon_sym_POUND_DQUOTE] = ACTIONS(624),
    [anon_sym_SQUOTE] = ACTIONS(624),
    [anon_sym_LPARENquote] = ACTIONS(624),
    [anon_sym_RPAREN] = ACTIONS(624),
    [anon_sym_COLON] = ACTIONS(626),
    [anon_sym_COLON_COLON] = ACTIONS(624),
    [anon_sym_DASH_GT] = ACTIONS(626),
    [anon_sym_DASH_GT_GT] = ACTIONS(624),
    [anon_sym_as_DASH_GT] = ACTIONS(624),
    [anon_sym_some_DASH_GT] = ACTIONS(626),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(624),
    [anon_sym_cond_DASH_GT] = ACTIONS(626),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(624),
    [sym__symbol_chars] = ACTIONS(626),
    [anon_sym_LPAREN] = ACTIONS(626),
    [anon_sym_LBRACK] = ACTIONS(624),
    [anon_sym_RBRACK] = ACTIONS(624),
    [anon_sym_LBRACE] = ACTIONS(624),
    [anon_sym_RBRACE] = ACTIONS(624),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(624),
    [anon_sym_POUND] = ACTIONS(626),
    [anon_sym_POUND_LBRACE] = ACTIONS(624),
    [anon_sym_SEMI] = ACTIONS(624),
    [anon_sym_POUND_BANG] = ACTIONS(624),
    [anon_sym_POUND_] = ACTIONS(624),
    [anon_sym_LPARENcomment] = ACTIONS(624),
    [sym_named_function] = ACTIONS(626),
    [sym_shorthand_function] = ACTIONS(624),
  },
  [126] = {
    [sym__anything] = STATE(126),
    [sym__literal] = STATE(126),
    [sym__collection_literal] = STATE(126),
    [sym_boolean] = STATE(126),
    [sym_number] = STATE(126),
    [sym__number] = STATE(24),
    [sym_character] = STATE(126),
    [sym__character] = STATE(25),
    [sym_string] = STATE(126),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(126),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(126),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(126),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(126),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(126),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(126),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(126),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym_set] = STATE(126),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(126),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_special_form] = STATE(126),
    [sym_function] = STATE(36),
    [sym_anonymous_function] = STATE(22),
    [aux_sym_program_repeat1] = STATE(126),
    [sym_nil] = ACTIONS(628),
    [sym_true] = ACTIONS(474),
    [sym_false] = ACTIONS(474),
    [sym_number_long] = ACTIONS(477),
    [sym_number_double] = ACTIONS(480),
    [anon_sym_BSLASH] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(486),
    [anon_sym_POUND_DQUOTE] = ACTIONS(489),
    [anon_sym_SQUOTE] = ACTIONS(631),
    [anon_sym_LPARENquote] = ACTIONS(495),
    [anon_sym_COLON] = ACTIONS(498),
    [anon_sym_COLON_COLON] = ACTIONS(501),
    [anon_sym_DASH_GT] = ACTIONS(504),
    [anon_sym_DASH_GT_GT] = ACTIONS(507),
    [anon_sym_as_DASH_GT] = ACTIONS(507),
    [anon_sym_some_DASH_GT] = ACTIONS(504),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(507),
    [anon_sym_cond_DASH_GT] = ACTIONS(504),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(507),
    [sym__symbol_chars] = ACTIONS(510),
    [anon_sym_LPAREN] = ACTIONS(513),
    [anon_sym_LBRACK] = ACTIONS(516),
    [anon_sym_RBRACK] = ACTIONS(469),
    [anon_sym_LBRACE] = ACTIONS(519),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(522),
    [anon_sym_POUND] = ACTIONS(525),
    [anon_sym_POUND_LBRACE] = ACTIONS(528),
    [anon_sym_SEMI] = ACTIONS(531),
    [anon_sym_POUND_BANG] = ACTIONS(534),
    [anon_sym_POUND_] = ACTIONS(634),
    [anon_sym_LPARENcomment] = ACTIONS(540),
    [sym_named_function] = ACTIONS(543),
    [sym_shorthand_function] = ACTIONS(546),
  },
  [127] = {
    [aux_sym_ignore_form_repeat1] = STATE(200),
    [sym_nil] = ACTIONS(429),
    [sym_true] = ACTIONS(429),
    [sym_false] = ACTIONS(429),
    [sym_number_long] = ACTIONS(429),
    [sym_number_double] = ACTIONS(429),
    [anon_sym_BSLASH] = ACTIONS(429),
    [anon_sym_DQUOTE] = ACTIONS(429),
    [anon_sym_POUND_DQUOTE] = ACTIONS(429),
    [anon_sym_SQUOTE] = ACTIONS(429),
    [anon_sym_LPARENquote] = ACTIONS(429),
    [anon_sym_COLON] = ACTIONS(429),
    [anon_sym_COLON_COLON] = ACTIONS(429),
    [anon_sym_DASH_GT] = ACTIONS(429),
    [anon_sym_DASH_GT_GT] = ACTIONS(429),
    [anon_sym_as_DASH_GT] = ACTIONS(429),
    [anon_sym_some_DASH_GT] = ACTIONS(429),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(429),
    [anon_sym_cond_DASH_GT] = ACTIONS(429),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(429),
    [sym__symbol_chars] = ACTIONS(429),
    [anon_sym_LPAREN] = ACTIONS(429),
    [anon_sym_LBRACK] = ACTIONS(429),
    [anon_sym_LBRACE] = ACTIONS(429),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(429),
    [anon_sym_POUND] = ACTIONS(429),
    [anon_sym_POUND_LBRACE] = ACTIONS(429),
    [anon_sym_SEMI] = ACTIONS(429),
    [anon_sym_POUND_BANG] = ACTIONS(429),
    [anon_sym_POUND_] = ACTIONS(429),
    [anon_sym_] = ACTIONS(637),
    [anon_sym_LPARENcomment] = ACTIONS(429),
    [sym_named_function] = ACTIONS(429),
    [sym_shorthand_function] = ACTIONS(429),
  },
  [128] = {
    [sym__number] = STATE(201),
    [sym__string] = STATE(201),
    [sym__keyword] = STATE(201),
    [sym__unqualified_keyword] = STATE(201),
    [sym_qualified_keyword] = STATE(201),
    [sym__symbol] = STATE(201),
    [sym_threading_macro] = STATE(201),
    [sym_qualified_symbol] = STATE(201),
    [sym__one_form] = STATE(201),
    [sym__paren_sequence] = STATE(201),
    [sym__bracket_sequence] = STATE(201),
    [sym__curly_brace_sequence] = STATE(201),
    [aux_sym_ignore_form_repeat1] = STATE(170),
    [sym_number_long] = ACTIONS(639),
    [sym_number_double] = ACTIONS(639),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(145),
    [anon_sym_COLON_COLON] = ACTIONS(147),
    [anon_sym_DASH_GT] = ACTIONS(149),
    [anon_sym_DASH_GT_GT] = ACTIONS(149),
    [anon_sym_as_DASH_GT] = ACTIONS(149),
    [anon_sym_some_DASH_GT] = ACTIONS(149),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(149),
    [anon_sym_cond_DASH_GT] = ACTIONS(149),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(149),
    [sym__symbol_chars] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_POUND] = ACTIONS(159),
    [anon_sym_] = ACTIONS(435),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(639),
  },
  [129] = {
    [sym_nil] = ACTIONS(641),
    [sym_true] = ACTIONS(641),
    [sym_false] = ACTIONS(641),
    [sym_number_long] = ACTIONS(641),
    [sym_number_double] = ACTIONS(643),
    [anon_sym_BSLASH] = ACTIONS(643),
    [anon_sym_DQUOTE] = ACTIONS(643),
    [anon_sym_POUND_DQUOTE] = ACTIONS(643),
    [anon_sym_SQUOTE] = ACTIONS(643),
    [anon_sym_LPARENquote] = ACTIONS(643),
    [anon_sym_COLON] = ACTIONS(641),
    [anon_sym_COLON_COLON] = ACTIONS(643),
    [anon_sym_DASH_GT] = ACTIONS(641),
    [anon_sym_DASH_GT_GT] = ACTIONS(643),
    [anon_sym_as_DASH_GT] = ACTIONS(643),
    [anon_sym_some_DASH_GT] = ACTIONS(641),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(643),
    [anon_sym_cond_DASH_GT] = ACTIONS(641),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(643),
    [sym__symbol_chars] = ACTIONS(641),
    [anon_sym_LPAREN] = ACTIONS(641),
    [anon_sym_LBRACK] = ACTIONS(643),
    [anon_sym_LBRACE] = ACTIONS(643),
    [anon_sym_RBRACE] = ACTIONS(643),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(643),
    [anon_sym_POUND] = ACTIONS(641),
    [anon_sym_POUND_LBRACE] = ACTIONS(643),
    [anon_sym_SEMI] = ACTIONS(643),
    [anon_sym_POUND_BANG] = ACTIONS(643),
    [anon_sym_POUND_] = ACTIONS(643),
    [anon_sym_LPARENcomment] = ACTIONS(643),
    [sym_named_function] = ACTIONS(641),
    [sym_shorthand_function] = ACTIONS(643),
  },
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(645),
    [sym_nil] = ACTIONS(647),
    [sym_true] = ACTIONS(647),
    [sym_false] = ACTIONS(647),
    [sym_number_long] = ACTIONS(647),
    [sym_number_double] = ACTIONS(645),
    [anon_sym_BSLASH] = ACTIONS(645),
    [anon_sym_DQUOTE] = ACTIONS(645),
    [anon_sym_POUND_DQUOTE] = ACTIONS(645),
    [anon_sym_SQUOTE] = ACTIONS(645),
    [anon_sym_LPARENquote] = ACTIONS(645),
    [anon_sym_RPAREN] = ACTIONS(645),
    [anon_sym_COLON] = ACTIONS(647),
    [anon_sym_COLON_COLON] = ACTIONS(645),
    [anon_sym_DASH_GT] = ACTIONS(647),
    [anon_sym_DASH_GT_GT] = ACTIONS(645),
    [anon_sym_as_DASH_GT] = ACTIONS(645),
    [anon_sym_some_DASH_GT] = ACTIONS(647),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(645),
    [anon_sym_cond_DASH_GT] = ACTIONS(647),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(645),
    [sym__symbol_chars] = ACTIONS(647),
    [anon_sym_LPAREN] = ACTIONS(647),
    [anon_sym_LBRACK] = ACTIONS(645),
    [anon_sym_RBRACK] = ACTIONS(645),
    [anon_sym_LBRACE] = ACTIONS(645),
    [anon_sym_RBRACE] = ACTIONS(645),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(645),
    [anon_sym_POUND] = ACTIONS(647),
    [anon_sym_POUND_LBRACE] = ACTIONS(645),
    [anon_sym_SEMI] = ACTIONS(645),
    [anon_sym_POUND_BANG] = ACTIONS(645),
    [anon_sym_POUND_] = ACTIONS(645),
    [anon_sym_LPARENcomment] = ACTIONS(645),
    [sym_named_function] = ACTIONS(647),
    [sym_shorthand_function] = ACTIONS(645),
  },
  [131] = {
    [sym__anything] = STATE(64),
    [sym__literal] = STATE(64),
    [sym__collection_literal] = STATE(64),
    [sym_boolean] = STATE(64),
    [sym_number] = STATE(64),
    [sym__number] = STATE(24),
    [sym_character] = STATE(64),
    [sym__character] = STATE(25),
    [sym_string] = STATE(64),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(64),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(64),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(64),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(64),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(64),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(64),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(64),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym__hash_map_kv_pair] = STATE(131),
    [sym__hash_map_key] = STATE(64),
    [sym_set] = STATE(64),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(64),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_special_form] = STATE(64),
    [sym_function] = STATE(36),
    [sym_anonymous_function] = STATE(22),
    [aux_sym__hash_map_repeat1] = STATE(131),
    [sym_nil] = ACTIONS(649),
    [sym_true] = ACTIONS(652),
    [sym_false] = ACTIONS(652),
    [sym_number_long] = ACTIONS(655),
    [sym_number_double] = ACTIONS(658),
    [anon_sym_BSLASH] = ACTIONS(661),
    [anon_sym_DQUOTE] = ACTIONS(664),
    [anon_sym_POUND_DQUOTE] = ACTIONS(667),
    [anon_sym_SQUOTE] = ACTIONS(670),
    [anon_sym_LPARENquote] = ACTIONS(673),
    [anon_sym_COLON] = ACTIONS(676),
    [anon_sym_COLON_COLON] = ACTIONS(679),
    [anon_sym_DASH_GT] = ACTIONS(682),
    [anon_sym_DASH_GT_GT] = ACTIONS(685),
    [anon_sym_as_DASH_GT] = ACTIONS(685),
    [anon_sym_some_DASH_GT] = ACTIONS(682),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(685),
    [anon_sym_cond_DASH_GT] = ACTIONS(682),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(685),
    [sym__symbol_chars] = ACTIONS(688),
    [anon_sym_LPAREN] = ACTIONS(691),
    [anon_sym_LBRACK] = ACTIONS(694),
    [anon_sym_LBRACE] = ACTIONS(697),
    [anon_sym_RBRACE] = ACTIONS(700),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(702),
    [anon_sym_POUND] = ACTIONS(705),
    [anon_sym_POUND_LBRACE] = ACTIONS(708),
    [anon_sym_SEMI] = ACTIONS(711),
    [anon_sym_POUND_BANG] = ACTIONS(714),
    [anon_sym_POUND_] = ACTIONS(717),
    [anon_sym_LPARENcomment] = ACTIONS(720),
    [sym_named_function] = ACTIONS(723),
    [sym_shorthand_function] = ACTIONS(726),
  },
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(729),
    [sym_nil] = ACTIONS(731),
    [sym_true] = ACTIONS(731),
    [sym_false] = ACTIONS(731),
    [sym_number_long] = ACTIONS(731),
    [sym_number_double] = ACTIONS(729),
    [anon_sym_BSLASH] = ACTIONS(729),
    [anon_sym_DQUOTE] = ACTIONS(729),
    [anon_sym_POUND_DQUOTE] = ACTIONS(729),
    [anon_sym_SQUOTE] = ACTIONS(729),
    [anon_sym_LPARENquote] = ACTIONS(729),
    [anon_sym_RPAREN] = ACTIONS(729),
    [anon_sym_COLON] = ACTIONS(731),
    [anon_sym_COLON_COLON] = ACTIONS(729),
    [anon_sym_DASH_GT] = ACTIONS(731),
    [anon_sym_DASH_GT_GT] = ACTIONS(729),
    [anon_sym_as_DASH_GT] = ACTIONS(729),
    [anon_sym_some_DASH_GT] = ACTIONS(731),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(729),
    [anon_sym_cond_DASH_GT] = ACTIONS(731),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(729),
    [sym__symbol_chars] = ACTIONS(731),
    [anon_sym_LPAREN] = ACTIONS(731),
    [anon_sym_LBRACK] = ACTIONS(729),
    [anon_sym_RBRACK] = ACTIONS(729),
    [anon_sym_LBRACE] = ACTIONS(729),
    [anon_sym_RBRACE] = ACTIONS(729),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(729),
    [anon_sym_POUND] = ACTIONS(731),
    [anon_sym_POUND_LBRACE] = ACTIONS(729),
    [anon_sym_SEMI] = ACTIONS(729),
    [anon_sym_POUND_BANG] = ACTIONS(729),
    [anon_sym_POUND_] = ACTIONS(729),
    [anon_sym_LPARENcomment] = ACTIONS(729),
    [sym_named_function] = ACTIONS(731),
    [sym_shorthand_function] = ACTIONS(729),
  },
  [133] = {
    [sym__anything] = STATE(64),
    [sym__literal] = STATE(64),
    [sym__collection_literal] = STATE(64),
    [sym_boolean] = STATE(64),
    [sym_number] = STATE(64),
    [sym__number] = STATE(24),
    [sym_character] = STATE(64),
    [sym__character] = STATE(25),
    [sym_string] = STATE(64),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(64),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(64),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(64),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(64),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(64),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(64),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(64),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym__hash_map_kv_pair] = STATE(203),
    [sym__hash_map_key] = STATE(64),
    [sym_set] = STATE(64),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(64),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_special_form] = STATE(64),
    [sym_function] = STATE(36),
    [sym_anonymous_function] = STATE(22),
    [aux_sym__hash_map_repeat1] = STATE(203),
    [sym_nil] = ACTIONS(117),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(119),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_DASH_GT] = ACTIONS(29),
    [anon_sym_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_as_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT] = ACTIONS(29),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT] = ACTIONS(29),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(31),
    [sym__symbol_chars] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(733),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(123),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [sym_named_function] = ACTIONS(55),
    [sym_shorthand_function] = ACTIONS(57),
  },
  [134] = {
    [aux_sym_ignore_form_repeat1] = STATE(204),
    [sym_nil] = ACTIONS(429),
    [sym_true] = ACTIONS(429),
    [sym_false] = ACTIONS(429),
    [sym_number_long] = ACTIONS(429),
    [sym_number_double] = ACTIONS(429),
    [anon_sym_BSLASH] = ACTIONS(429),
    [anon_sym_DQUOTE] = ACTIONS(429),
    [anon_sym_POUND_DQUOTE] = ACTIONS(429),
    [anon_sym_SQUOTE] = ACTIONS(429),
    [anon_sym_LPARENquote] = ACTIONS(429),
    [anon_sym_COLON] = ACTIONS(429),
    [anon_sym_COLON_COLON] = ACTIONS(429),
    [anon_sym_DASH_GT] = ACTIONS(429),
    [anon_sym_DASH_GT_GT] = ACTIONS(429),
    [anon_sym_as_DASH_GT] = ACTIONS(429),
    [anon_sym_some_DASH_GT] = ACTIONS(429),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(429),
    [anon_sym_cond_DASH_GT] = ACTIONS(429),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(429),
    [sym__symbol_chars] = ACTIONS(429),
    [anon_sym_LPAREN] = ACTIONS(429),
    [anon_sym_LBRACK] = ACTIONS(429),
    [anon_sym_LBRACE] = ACTIONS(429),
    [anon_sym_RBRACE] = ACTIONS(429),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(429),
    [anon_sym_POUND] = ACTIONS(429),
    [anon_sym_POUND_LBRACE] = ACTIONS(429),
    [anon_sym_SEMI] = ACTIONS(429),
    [anon_sym_POUND_BANG] = ACTIONS(429),
    [anon_sym_POUND_] = ACTIONS(429),
    [anon_sym_] = ACTIONS(735),
    [anon_sym_LPARENcomment] = ACTIONS(429),
    [sym_named_function] = ACTIONS(429),
    [sym_shorthand_function] = ACTIONS(429),
  },
  [135] = {
    [sym__number] = STATE(205),
    [sym__string] = STATE(205),
    [sym__keyword] = STATE(205),
    [sym__unqualified_keyword] = STATE(205),
    [sym_qualified_keyword] = STATE(205),
    [sym__symbol] = STATE(205),
    [sym_threading_macro] = STATE(205),
    [sym_qualified_symbol] = STATE(205),
    [sym__one_form] = STATE(205),
    [sym__paren_sequence] = STATE(205),
    [sym__bracket_sequence] = STATE(205),
    [sym__curly_brace_sequence] = STATE(205),
    [aux_sym_ignore_form_repeat1] = STATE(170),
    [sym_number_long] = ACTIONS(737),
    [sym_number_double] = ACTIONS(737),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(145),
    [anon_sym_COLON_COLON] = ACTIONS(147),
    [anon_sym_DASH_GT] = ACTIONS(149),
    [anon_sym_DASH_GT_GT] = ACTIONS(149),
    [anon_sym_as_DASH_GT] = ACTIONS(149),
    [anon_sym_some_DASH_GT] = ACTIONS(149),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(149),
    [anon_sym_cond_DASH_GT] = ACTIONS(149),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(149),
    [sym__symbol_chars] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_POUND] = ACTIONS(159),
    [anon_sym_] = ACTIONS(435),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(737),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(739),
    [sym_nil] = ACTIONS(741),
    [sym_true] = ACTIONS(741),
    [sym_false] = ACTIONS(741),
    [sym_number_long] = ACTIONS(741),
    [sym_number_double] = ACTIONS(739),
    [anon_sym_BSLASH] = ACTIONS(739),
    [anon_sym_DQUOTE] = ACTIONS(739),
    [anon_sym_POUND_DQUOTE] = ACTIONS(739),
    [anon_sym_SQUOTE] = ACTIONS(739),
    [anon_sym_LPARENquote] = ACTIONS(739),
    [anon_sym_RPAREN] = ACTIONS(739),
    [anon_sym_COLON] = ACTIONS(741),
    [anon_sym_COLON_COLON] = ACTIONS(739),
    [anon_sym_DASH_GT] = ACTIONS(741),
    [anon_sym_DASH_GT_GT] = ACTIONS(739),
    [anon_sym_as_DASH_GT] = ACTIONS(739),
    [anon_sym_some_DASH_GT] = ACTIONS(741),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(739),
    [anon_sym_cond_DASH_GT] = ACTIONS(741),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(739),
    [sym__symbol_chars] = ACTIONS(741),
    [anon_sym_LPAREN] = ACTIONS(741),
    [anon_sym_LBRACK] = ACTIONS(739),
    [anon_sym_RBRACK] = ACTIONS(739),
    [anon_sym_LBRACE] = ACTIONS(739),
    [anon_sym_RBRACE] = ACTIONS(739),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(739),
    [anon_sym_POUND] = ACTIONS(741),
    [anon_sym_POUND_LBRACE] = ACTIONS(739),
    [anon_sym_SEMI] = ACTIONS(739),
    [anon_sym_POUND_BANG] = ACTIONS(739),
    [anon_sym_POUND_] = ACTIONS(739),
    [anon_sym_LPARENcomment] = ACTIONS(739),
    [sym_named_function] = ACTIONS(741),
    [sym_shorthand_function] = ACTIONS(739),
  },
  [137] = {
    [sym__anything] = STATE(137),
    [sym__literal] = STATE(137),
    [sym__collection_literal] = STATE(137),
    [sym_boolean] = STATE(137),
    [sym_number] = STATE(137),
    [sym__number] = STATE(24),
    [sym_character] = STATE(137),
    [sym__character] = STATE(25),
    [sym_string] = STATE(137),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(137),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(137),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(137),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(137),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(137),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(137),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(137),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym_set] = STATE(137),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(137),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_special_form] = STATE(137),
    [sym_function] = STATE(36),
    [sym_anonymous_function] = STATE(22),
    [aux_sym_program_repeat1] = STATE(137),
    [sym_nil] = ACTIONS(743),
    [sym_true] = ACTIONS(474),
    [sym_false] = ACTIONS(474),
    [sym_number_long] = ACTIONS(477),
    [sym_number_double] = ACTIONS(480),
    [anon_sym_BSLASH] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(486),
    [anon_sym_POUND_DQUOTE] = ACTIONS(489),
    [anon_sym_SQUOTE] = ACTIONS(746),
    [anon_sym_LPARENquote] = ACTIONS(495),
    [anon_sym_COLON] = ACTIONS(498),
    [anon_sym_COLON_COLON] = ACTIONS(501),
    [anon_sym_DASH_GT] = ACTIONS(504),
    [anon_sym_DASH_GT_GT] = ACTIONS(507),
    [anon_sym_as_DASH_GT] = ACTIONS(507),
    [anon_sym_some_DASH_GT] = ACTIONS(504),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(507),
    [anon_sym_cond_DASH_GT] = ACTIONS(504),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(507),
    [sym__symbol_chars] = ACTIONS(510),
    [anon_sym_LPAREN] = ACTIONS(513),
    [anon_sym_LBRACK] = ACTIONS(516),
    [anon_sym_LBRACE] = ACTIONS(519),
    [anon_sym_RBRACE] = ACTIONS(469),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(522),
    [anon_sym_POUND] = ACTIONS(525),
    [anon_sym_POUND_LBRACE] = ACTIONS(528),
    [anon_sym_SEMI] = ACTIONS(531),
    [anon_sym_POUND_BANG] = ACTIONS(534),
    [anon_sym_POUND_] = ACTIONS(749),
    [anon_sym_LPARENcomment] = ACTIONS(540),
    [sym_named_function] = ACTIONS(543),
    [sym_shorthand_function] = ACTIONS(546),
  },
  [138] = {
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
    [anon_sym_DASH_GT] = ACTIONS(259),
    [anon_sym_DASH_GT_GT] = ACTIONS(259),
    [anon_sym_as_DASH_GT] = ACTIONS(259),
    [anon_sym_some_DASH_GT] = ACTIONS(259),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(259),
    [anon_sym_cond_DASH_GT] = ACTIONS(259),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(259),
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
    [sym_named_function] = ACTIONS(259),
    [sym_shorthand_function] = ACTIONS(259),
  },
  [139] = {
    [aux_sym__string_repeat1] = STATE(101),
    [anon_sym_DQUOTE] = ACTIONS(752),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(263),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(263),
  },
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(283),
    [sym_nil] = ACTIONS(285),
    [sym_true] = ACTIONS(285),
    [sym_false] = ACTIONS(285),
    [sym_number_long] = ACTIONS(285),
    [sym_number_double] = ACTIONS(285),
    [anon_sym_BSLASH] = ACTIONS(285),
    [anon_sym_DQUOTE] = ACTIONS(285),
    [anon_sym_POUND_DQUOTE] = ACTIONS(285),
    [anon_sym_SQUOTE] = ACTIONS(285),
    [anon_sym_LPARENquote] = ACTIONS(285),
    [anon_sym_RPAREN] = ACTIONS(285),
    [anon_sym_COLON] = ACTIONS(285),
    [anon_sym_COLON_COLON] = ACTIONS(285),
    [anon_sym_DASH_GT] = ACTIONS(285),
    [anon_sym_DASH_GT_GT] = ACTIONS(285),
    [anon_sym_as_DASH_GT] = ACTIONS(285),
    [anon_sym_some_DASH_GT] = ACTIONS(285),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(285),
    [anon_sym_cond_DASH_GT] = ACTIONS(285),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(285),
    [sym__symbol_chars] = ACTIONS(285),
    [anon_sym_LPAREN] = ACTIONS(285),
    [anon_sym_LBRACK] = ACTIONS(285),
    [anon_sym_RBRACK] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [anon_sym_RBRACE] = ACTIONS(285),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(285),
    [anon_sym_POUND] = ACTIONS(285),
    [anon_sym_POUND_LBRACE] = ACTIONS(285),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_POUND_BANG] = ACTIONS(285),
    [anon_sym_POUND_] = ACTIONS(285),
    [anon_sym_] = ACTIONS(283),
    [anon_sym_LPARENcomment] = ACTIONS(285),
    [sym_named_function] = ACTIONS(285),
    [sym_shorthand_function] = ACTIONS(285),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(287),
    [sym_nil] = ACTIONS(289),
    [sym_true] = ACTIONS(289),
    [sym_false] = ACTIONS(289),
    [sym_number_long] = ACTIONS(289),
    [sym_number_double] = ACTIONS(289),
    [anon_sym_BSLASH] = ACTIONS(289),
    [anon_sym_DQUOTE] = ACTIONS(289),
    [anon_sym_POUND_DQUOTE] = ACTIONS(289),
    [anon_sym_SQUOTE] = ACTIONS(289),
    [anon_sym_LPARENquote] = ACTIONS(289),
    [anon_sym_RPAREN] = ACTIONS(289),
    [anon_sym_COLON] = ACTIONS(289),
    [anon_sym_COLON_COLON] = ACTIONS(289),
    [anon_sym_SLASH] = ACTIONS(754),
    [anon_sym_DASH_GT] = ACTIONS(289),
    [anon_sym_DASH_GT_GT] = ACTIONS(289),
    [anon_sym_as_DASH_GT] = ACTIONS(289),
    [anon_sym_some_DASH_GT] = ACTIONS(289),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(289),
    [anon_sym_cond_DASH_GT] = ACTIONS(289),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(289),
    [sym__symbol_chars] = ACTIONS(289),
    [anon_sym_LPAREN] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(289),
    [anon_sym_RBRACK] = ACTIONS(289),
    [anon_sym_LBRACE] = ACTIONS(289),
    [anon_sym_RBRACE] = ACTIONS(289),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(289),
    [anon_sym_POUND] = ACTIONS(289),
    [anon_sym_POUND_LBRACE] = ACTIONS(289),
    [anon_sym_SEMI] = ACTIONS(289),
    [anon_sym_POUND_BANG] = ACTIONS(289),
    [anon_sym_POUND_] = ACTIONS(289),
    [anon_sym_] = ACTIONS(287),
    [anon_sym_LPARENcomment] = ACTIONS(289),
    [sym_named_function] = ACTIONS(289),
    [sym_shorthand_function] = ACTIONS(289),
  },
  [142] = {
    [sym__symbol_chars] = ACTIONS(756),
  },
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(758),
    [sym_nil] = ACTIONS(760),
    [sym_true] = ACTIONS(760),
    [sym_false] = ACTIONS(760),
    [sym_number_long] = ACTIONS(760),
    [sym_number_double] = ACTIONS(760),
    [anon_sym_BSLASH] = ACTIONS(760),
    [anon_sym_DQUOTE] = ACTIONS(760),
    [anon_sym_POUND_DQUOTE] = ACTIONS(760),
    [anon_sym_SQUOTE] = ACTIONS(760),
    [anon_sym_LPARENquote] = ACTIONS(760),
    [anon_sym_RPAREN] = ACTIONS(760),
    [anon_sym_COLON] = ACTIONS(760),
    [anon_sym_COLON_COLON] = ACTIONS(760),
    [anon_sym_DASH_GT] = ACTIONS(760),
    [anon_sym_DASH_GT_GT] = ACTIONS(760),
    [anon_sym_as_DASH_GT] = ACTIONS(760),
    [anon_sym_some_DASH_GT] = ACTIONS(760),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(760),
    [anon_sym_cond_DASH_GT] = ACTIONS(760),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(760),
    [sym__symbol_chars] = ACTIONS(760),
    [anon_sym_LPAREN] = ACTIONS(760),
    [anon_sym_LBRACK] = ACTIONS(760),
    [anon_sym_RBRACK] = ACTIONS(760),
    [anon_sym_LBRACE] = ACTIONS(760),
    [anon_sym_RBRACE] = ACTIONS(760),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(760),
    [anon_sym_POUND] = ACTIONS(760),
    [anon_sym_POUND_LBRACE] = ACTIONS(760),
    [anon_sym_SEMI] = ACTIONS(760),
    [anon_sym_POUND_BANG] = ACTIONS(760),
    [anon_sym_POUND_] = ACTIONS(760),
    [anon_sym_] = ACTIONS(758),
    [anon_sym_LPARENcomment] = ACTIONS(760),
    [sym_named_function] = ACTIONS(760),
    [sym_shorthand_function] = ACTIONS(760),
  },
  [144] = {
    [sym__number] = STATE(184),
    [sym__string] = STATE(184),
    [sym__keyword] = STATE(184),
    [sym__unqualified_keyword] = STATE(184),
    [sym_qualified_keyword] = STATE(184),
    [sym__symbol] = STATE(184),
    [sym_threading_macro] = STATE(184),
    [sym_qualified_symbol] = STATE(184),
    [sym__one_form] = STATE(184),
    [sym__paren_sequence] = STATE(184),
    [sym__bracket_sequence] = STATE(184),
    [sym__curly_brace_sequence] = STATE(184),
    [aux_sym_comment_macro_repeat1] = STATE(184),
    [sym_number_long] = ACTIONS(465),
    [sym_number_double] = ACTIONS(465),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(762),
    [anon_sym_COLON] = ACTIONS(169),
    [anon_sym_COLON_COLON] = ACTIONS(171),
    [anon_sym_DASH_GT] = ACTIONS(173),
    [anon_sym_DASH_GT_GT] = ACTIONS(173),
    [anon_sym_as_DASH_GT] = ACTIONS(173),
    [anon_sym_some_DASH_GT] = ACTIONS(173),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(173),
    [anon_sym_cond_DASH_GT] = ACTIONS(173),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(173),
    [sym__symbol_chars] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(183),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(465),
  },
  [145] = {
    [aux_sym__string_repeat1] = STATE(211),
    [anon_sym_DQUOTE] = ACTIONS(764),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(766),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(766),
  },
  [146] = {
    [sym__keyword_chars] = ACTIONS(768),
  },
  [147] = {
    [sym__keyword_chars] = ACTIONS(770),
  },
  [148] = {
    [sym_number_long] = ACTIONS(91),
    [sym_number_double] = ACTIONS(91),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(91),
    [anon_sym_COLON_COLON] = ACTIONS(91),
    [anon_sym_DASH_GT] = ACTIONS(91),
    [anon_sym_DASH_GT_GT] = ACTIONS(91),
    [anon_sym_as_DASH_GT] = ACTIONS(91),
    [anon_sym_some_DASH_GT] = ACTIONS(91),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(91),
    [anon_sym_cond_DASH_GT] = ACTIONS(91),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(91),
    [sym__symbol_chars] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_RBRACK] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_POUND] = ACTIONS(91),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(91),
  },
  [149] = {
    [sym_number_long] = ACTIONS(95),
    [sym_number_double] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(95),
    [anon_sym_SLASH] = ACTIONS(772),
    [anon_sym_DASH_GT] = ACTIONS(95),
    [anon_sym_DASH_GT_GT] = ACTIONS(95),
    [anon_sym_as_DASH_GT] = ACTIONS(95),
    [anon_sym_some_DASH_GT] = ACTIONS(95),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(95),
    [anon_sym_cond_DASH_GT] = ACTIONS(95),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(95),
    [sym__symbol_chars] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_RBRACK] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(95),
    [anon_sym_POUND] = ACTIONS(95),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(95),
  },
  [150] = {
    [sym__number] = STATE(216),
    [sym__string] = STATE(216),
    [sym__keyword] = STATE(216),
    [sym__unqualified_keyword] = STATE(216),
    [sym_qualified_keyword] = STATE(216),
    [sym__symbol] = STATE(216),
    [sym_threading_macro] = STATE(216),
    [sym_qualified_symbol] = STATE(216),
    [sym__one_form] = STATE(216),
    [sym__paren_sequence] = STATE(216),
    [sym__bracket_sequence] = STATE(216),
    [sym__curly_brace_sequence] = STATE(216),
    [aux_sym_comment_macro_repeat1] = STATE(216),
    [sym_number_long] = ACTIONS(774),
    [sym_number_double] = ACTIONS(774),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(776),
    [anon_sym_COLON] = ACTIONS(169),
    [anon_sym_COLON_COLON] = ACTIONS(171),
    [anon_sym_DASH_GT] = ACTIONS(173),
    [anon_sym_DASH_GT_GT] = ACTIONS(173),
    [anon_sym_as_DASH_GT] = ACTIONS(173),
    [anon_sym_some_DASH_GT] = ACTIONS(173),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(173),
    [anon_sym_cond_DASH_GT] = ACTIONS(173),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(173),
    [sym__symbol_chars] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(183),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(774),
  },
  [151] = {
    [sym__number] = STATE(218),
    [sym__string] = STATE(218),
    [sym__keyword] = STATE(218),
    [sym__unqualified_keyword] = STATE(218),
    [sym_qualified_keyword] = STATE(218),
    [sym__symbol] = STATE(218),
    [sym_threading_macro] = STATE(218),
    [sym_qualified_symbol] = STATE(218),
    [sym__one_form] = STATE(218),
    [sym__paren_sequence] = STATE(218),
    [sym__bracket_sequence] = STATE(218),
    [sym__curly_brace_sequence] = STATE(218),
    [aux_sym_comment_macro_repeat1] = STATE(218),
    [sym_number_long] = ACTIONS(778),
    [sym_number_double] = ACTIONS(778),
    [anon_sym_DQUOTE] = ACTIONS(383),
    [anon_sym_COLON] = ACTIONS(385),
    [anon_sym_COLON_COLON] = ACTIONS(387),
    [anon_sym_DASH_GT] = ACTIONS(389),
    [anon_sym_DASH_GT_GT] = ACTIONS(389),
    [anon_sym_as_DASH_GT] = ACTIONS(389),
    [anon_sym_some_DASH_GT] = ACTIONS(389),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(389),
    [anon_sym_cond_DASH_GT] = ACTIONS(389),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(389),
    [sym__symbol_chars] = ACTIONS(391),
    [anon_sym_LPAREN] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(395),
    [anon_sym_RBRACK] = ACTIONS(780),
    [anon_sym_LBRACE] = ACTIONS(399),
    [anon_sym_POUND] = ACTIONS(401),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(778),
  },
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(782),
    [sym_nil] = ACTIONS(784),
    [sym_true] = ACTIONS(784),
    [sym_false] = ACTIONS(784),
    [sym_number_long] = ACTIONS(784),
    [sym_number_double] = ACTIONS(784),
    [anon_sym_BSLASH] = ACTIONS(784),
    [anon_sym_DQUOTE] = ACTIONS(784),
    [anon_sym_POUND_DQUOTE] = ACTIONS(784),
    [anon_sym_SQUOTE] = ACTIONS(784),
    [anon_sym_LPARENquote] = ACTIONS(784),
    [anon_sym_RPAREN] = ACTIONS(784),
    [anon_sym_COLON] = ACTIONS(784),
    [anon_sym_COLON_COLON] = ACTIONS(784),
    [anon_sym_DASH_GT] = ACTIONS(784),
    [anon_sym_DASH_GT_GT] = ACTIONS(784),
    [anon_sym_as_DASH_GT] = ACTIONS(784),
    [anon_sym_some_DASH_GT] = ACTIONS(784),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(784),
    [anon_sym_cond_DASH_GT] = ACTIONS(784),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(784),
    [sym__symbol_chars] = ACTIONS(784),
    [anon_sym_LPAREN] = ACTIONS(784),
    [anon_sym_LBRACK] = ACTIONS(784),
    [anon_sym_RBRACK] = ACTIONS(784),
    [anon_sym_LBRACE] = ACTIONS(784),
    [anon_sym_RBRACE] = ACTIONS(784),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(784),
    [anon_sym_POUND] = ACTIONS(784),
    [anon_sym_POUND_LBRACE] = ACTIONS(784),
    [anon_sym_SEMI] = ACTIONS(784),
    [anon_sym_POUND_BANG] = ACTIONS(784),
    [anon_sym_POUND_] = ACTIONS(784),
    [anon_sym_] = ACTIONS(782),
    [anon_sym_LPARENcomment] = ACTIONS(784),
    [sym_named_function] = ACTIONS(784),
    [sym_shorthand_function] = ACTIONS(784),
  },
  [153] = {
    [sym__number] = STATE(220),
    [sym__string] = STATE(220),
    [sym__keyword] = STATE(220),
    [sym__unqualified_keyword] = STATE(220),
    [sym_qualified_keyword] = STATE(220),
    [sym__symbol] = STATE(220),
    [sym_threading_macro] = STATE(220),
    [sym_qualified_symbol] = STATE(220),
    [sym__one_form] = STATE(220),
    [sym__paren_sequence] = STATE(220),
    [sym__bracket_sequence] = STATE(220),
    [sym__curly_brace_sequence] = STATE(220),
    [aux_sym_comment_macro_repeat1] = STATE(220),
    [sym_number_long] = ACTIONS(786),
    [sym_number_double] = ACTIONS(786),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [anon_sym_COLON] = ACTIONS(407),
    [anon_sym_COLON_COLON] = ACTIONS(409),
    [anon_sym_DASH_GT] = ACTIONS(411),
    [anon_sym_DASH_GT_GT] = ACTIONS(411),
    [anon_sym_as_DASH_GT] = ACTIONS(411),
    [anon_sym_some_DASH_GT] = ACTIONS(411),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(411),
    [anon_sym_cond_DASH_GT] = ACTIONS(411),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(411),
    [sym__symbol_chars] = ACTIONS(413),
    [anon_sym_LPAREN] = ACTIONS(415),
    [anon_sym_LBRACK] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(419),
    [anon_sym_RBRACE] = ACTIONS(788),
    [anon_sym_POUND] = ACTIONS(423),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(786),
  },
  [154] = {
    [anon_sym_LBRACE] = ACTIONS(790),
  },
  [155] = {
    [sym__number] = STATE(223),
    [sym__string] = STATE(223),
    [sym__keyword] = STATE(223),
    [sym__unqualified_keyword] = STATE(223),
    [sym_qualified_keyword] = STATE(223),
    [sym__symbol] = STATE(223),
    [sym_threading_macro] = STATE(223),
    [sym_qualified_symbol] = STATE(223),
    [sym__one_form] = STATE(223),
    [sym__paren_sequence] = STATE(223),
    [sym__bracket_sequence] = STATE(223),
    [sym__curly_brace_sequence] = STATE(223),
    [aux_sym_comment_macro_repeat1] = STATE(223),
    [sym_number_long] = ACTIONS(792),
    [sym_number_double] = ACTIONS(792),
    [anon_sym_DQUOTE] = ACTIONS(383),
    [anon_sym_COLON] = ACTIONS(385),
    [anon_sym_COLON_COLON] = ACTIONS(387),
    [anon_sym_DASH_GT] = ACTIONS(389),
    [anon_sym_DASH_GT_GT] = ACTIONS(389),
    [anon_sym_as_DASH_GT] = ACTIONS(389),
    [anon_sym_some_DASH_GT] = ACTIONS(389),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(389),
    [anon_sym_cond_DASH_GT] = ACTIONS(389),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(389),
    [sym__symbol_chars] = ACTIONS(391),
    [anon_sym_LPAREN] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(395),
    [anon_sym_RBRACK] = ACTIONS(794),
    [anon_sym_LBRACE] = ACTIONS(399),
    [anon_sym_POUND] = ACTIONS(401),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(792),
  },
  [156] = {
    [aux_sym__string_repeat1] = STATE(225),
    [anon_sym_DQUOTE] = ACTIONS(796),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(798),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(798),
  },
  [157] = {
    [sym__keyword_chars] = ACTIONS(800),
  },
  [158] = {
    [sym__keyword_chars] = ACTIONS(802),
  },
  [159] = {
    [sym_number_long] = ACTIONS(91),
    [sym_number_double] = ACTIONS(91),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(91),
    [anon_sym_COLON_COLON] = ACTIONS(91),
    [anon_sym_DASH_GT] = ACTIONS(91),
    [anon_sym_DASH_GT_GT] = ACTIONS(91),
    [anon_sym_as_DASH_GT] = ACTIONS(91),
    [anon_sym_some_DASH_GT] = ACTIONS(91),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(91),
    [anon_sym_cond_DASH_GT] = ACTIONS(91),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(91),
    [sym__symbol_chars] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_POUND] = ACTIONS(91),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(91),
  },
  [160] = {
    [sym_number_long] = ACTIONS(95),
    [sym_number_double] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(95),
    [anon_sym_SLASH] = ACTIONS(804),
    [anon_sym_DASH_GT] = ACTIONS(95),
    [anon_sym_DASH_GT_GT] = ACTIONS(95),
    [anon_sym_as_DASH_GT] = ACTIONS(95),
    [anon_sym_some_DASH_GT] = ACTIONS(95),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(95),
    [anon_sym_cond_DASH_GT] = ACTIONS(95),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(95),
    [sym__symbol_chars] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_POUND] = ACTIONS(95),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(95),
  },
  [161] = {
    [sym__number] = STATE(230),
    [sym__string] = STATE(230),
    [sym__keyword] = STATE(230),
    [sym__unqualified_keyword] = STATE(230),
    [sym_qualified_keyword] = STATE(230),
    [sym__symbol] = STATE(230),
    [sym_threading_macro] = STATE(230),
    [sym_qualified_symbol] = STATE(230),
    [sym__one_form] = STATE(230),
    [sym__paren_sequence] = STATE(230),
    [sym__bracket_sequence] = STATE(230),
    [sym__curly_brace_sequence] = STATE(230),
    [aux_sym_comment_macro_repeat1] = STATE(230),
    [sym_number_long] = ACTIONS(806),
    [sym_number_double] = ACTIONS(806),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(808),
    [anon_sym_COLON] = ACTIONS(169),
    [anon_sym_COLON_COLON] = ACTIONS(171),
    [anon_sym_DASH_GT] = ACTIONS(173),
    [anon_sym_DASH_GT_GT] = ACTIONS(173),
    [anon_sym_as_DASH_GT] = ACTIONS(173),
    [anon_sym_some_DASH_GT] = ACTIONS(173),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(173),
    [anon_sym_cond_DASH_GT] = ACTIONS(173),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(173),
    [sym__symbol_chars] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(183),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(806),
  },
  [162] = {
    [sym__number] = STATE(232),
    [sym__string] = STATE(232),
    [sym__keyword] = STATE(232),
    [sym__unqualified_keyword] = STATE(232),
    [sym_qualified_keyword] = STATE(232),
    [sym__symbol] = STATE(232),
    [sym_threading_macro] = STATE(232),
    [sym_qualified_symbol] = STATE(232),
    [sym__one_form] = STATE(232),
    [sym__paren_sequence] = STATE(232),
    [sym__bracket_sequence] = STATE(232),
    [sym__curly_brace_sequence] = STATE(232),
    [aux_sym_comment_macro_repeat1] = STATE(232),
    [sym_number_long] = ACTIONS(810),
    [sym_number_double] = ACTIONS(810),
    [anon_sym_DQUOTE] = ACTIONS(383),
    [anon_sym_COLON] = ACTIONS(385),
    [anon_sym_COLON_COLON] = ACTIONS(387),
    [anon_sym_DASH_GT] = ACTIONS(389),
    [anon_sym_DASH_GT_GT] = ACTIONS(389),
    [anon_sym_as_DASH_GT] = ACTIONS(389),
    [anon_sym_some_DASH_GT] = ACTIONS(389),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(389),
    [anon_sym_cond_DASH_GT] = ACTIONS(389),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(389),
    [sym__symbol_chars] = ACTIONS(391),
    [anon_sym_LPAREN] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(395),
    [anon_sym_RBRACK] = ACTIONS(812),
    [anon_sym_LBRACE] = ACTIONS(399),
    [anon_sym_POUND] = ACTIONS(401),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(810),
  },
  [163] = {
    [sym__number] = STATE(234),
    [sym__string] = STATE(234),
    [sym__keyword] = STATE(234),
    [sym__unqualified_keyword] = STATE(234),
    [sym_qualified_keyword] = STATE(234),
    [sym__symbol] = STATE(234),
    [sym_threading_macro] = STATE(234),
    [sym_qualified_symbol] = STATE(234),
    [sym__one_form] = STATE(234),
    [sym__paren_sequence] = STATE(234),
    [sym__bracket_sequence] = STATE(234),
    [sym__curly_brace_sequence] = STATE(234),
    [aux_sym_comment_macro_repeat1] = STATE(234),
    [sym_number_long] = ACTIONS(814),
    [sym_number_double] = ACTIONS(814),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [anon_sym_COLON] = ACTIONS(407),
    [anon_sym_COLON_COLON] = ACTIONS(409),
    [anon_sym_DASH_GT] = ACTIONS(411),
    [anon_sym_DASH_GT_GT] = ACTIONS(411),
    [anon_sym_as_DASH_GT] = ACTIONS(411),
    [anon_sym_some_DASH_GT] = ACTIONS(411),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(411),
    [anon_sym_cond_DASH_GT] = ACTIONS(411),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(411),
    [sym__symbol_chars] = ACTIONS(413),
    [anon_sym_LPAREN] = ACTIONS(415),
    [anon_sym_LBRACK] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(419),
    [anon_sym_RBRACE] = ACTIONS(816),
    [anon_sym_POUND] = ACTIONS(423),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(814),
  },
  [164] = {
    [ts_builtin_sym_end] = ACTIONS(818),
    [sym_nil] = ACTIONS(820),
    [sym_true] = ACTIONS(820),
    [sym_false] = ACTIONS(820),
    [sym_number_long] = ACTIONS(820),
    [sym_number_double] = ACTIONS(820),
    [anon_sym_BSLASH] = ACTIONS(820),
    [anon_sym_DQUOTE] = ACTIONS(820),
    [anon_sym_POUND_DQUOTE] = ACTIONS(820),
    [anon_sym_SQUOTE] = ACTIONS(820),
    [anon_sym_LPARENquote] = ACTIONS(820),
    [anon_sym_RPAREN] = ACTIONS(820),
    [anon_sym_COLON] = ACTIONS(820),
    [anon_sym_COLON_COLON] = ACTIONS(820),
    [anon_sym_DASH_GT] = ACTIONS(820),
    [anon_sym_DASH_GT_GT] = ACTIONS(820),
    [anon_sym_as_DASH_GT] = ACTIONS(820),
    [anon_sym_some_DASH_GT] = ACTIONS(820),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(820),
    [anon_sym_cond_DASH_GT] = ACTIONS(820),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(820),
    [sym__symbol_chars] = ACTIONS(820),
    [anon_sym_LPAREN] = ACTIONS(820),
    [anon_sym_LBRACK] = ACTIONS(820),
    [anon_sym_RBRACK] = ACTIONS(820),
    [anon_sym_LBRACE] = ACTIONS(820),
    [anon_sym_RBRACE] = ACTIONS(820),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(820),
    [anon_sym_POUND] = ACTIONS(820),
    [anon_sym_POUND_LBRACE] = ACTIONS(820),
    [anon_sym_SEMI] = ACTIONS(820),
    [anon_sym_POUND_BANG] = ACTIONS(820),
    [anon_sym_POUND_] = ACTIONS(820),
    [anon_sym_] = ACTIONS(818),
    [anon_sym_LPARENcomment] = ACTIONS(820),
    [sym_named_function] = ACTIONS(820),
    [sym_shorthand_function] = ACTIONS(820),
  },
  [165] = {
    [anon_sym_LBRACE] = ACTIONS(822),
  },
  [166] = {
    [sym__number] = STATE(237),
    [sym__string] = STATE(237),
    [sym__keyword] = STATE(237),
    [sym__unqualified_keyword] = STATE(237),
    [sym_qualified_keyword] = STATE(237),
    [sym__symbol] = STATE(237),
    [sym_threading_macro] = STATE(237),
    [sym_qualified_symbol] = STATE(237),
    [sym__one_form] = STATE(237),
    [sym__paren_sequence] = STATE(237),
    [sym__bracket_sequence] = STATE(237),
    [sym__curly_brace_sequence] = STATE(237),
    [aux_sym_comment_macro_repeat1] = STATE(237),
    [sym_number_long] = ACTIONS(824),
    [sym_number_double] = ACTIONS(824),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [anon_sym_COLON] = ACTIONS(407),
    [anon_sym_COLON_COLON] = ACTIONS(409),
    [anon_sym_DASH_GT] = ACTIONS(411),
    [anon_sym_DASH_GT_GT] = ACTIONS(411),
    [anon_sym_as_DASH_GT] = ACTIONS(411),
    [anon_sym_some_DASH_GT] = ACTIONS(411),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(411),
    [anon_sym_cond_DASH_GT] = ACTIONS(411),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(411),
    [sym__symbol_chars] = ACTIONS(413),
    [anon_sym_LPAREN] = ACTIONS(415),
    [anon_sym_LBRACK] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(419),
    [anon_sym_RBRACE] = ACTIONS(826),
    [anon_sym_POUND] = ACTIONS(423),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(824),
  },
  [167] = {
    [sym__number] = STATE(238),
    [sym__string] = STATE(238),
    [sym__keyword] = STATE(238),
    [sym__unqualified_keyword] = STATE(238),
    [sym_qualified_keyword] = STATE(238),
    [sym__symbol] = STATE(238),
    [sym_threading_macro] = STATE(238),
    [sym_qualified_symbol] = STATE(238),
    [sym__one_form] = STATE(238),
    [sym__paren_sequence] = STATE(238),
    [sym__bracket_sequence] = STATE(238),
    [sym__curly_brace_sequence] = STATE(238),
    [aux_sym_comment_macro_repeat1] = STATE(238),
    [sym_number_long] = ACTIONS(828),
    [sym_number_double] = ACTIONS(828),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [anon_sym_COLON] = ACTIONS(407),
    [anon_sym_COLON_COLON] = ACTIONS(409),
    [anon_sym_DASH_GT] = ACTIONS(411),
    [anon_sym_DASH_GT_GT] = ACTIONS(411),
    [anon_sym_as_DASH_GT] = ACTIONS(411),
    [anon_sym_some_DASH_GT] = ACTIONS(411),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(411),
    [anon_sym_cond_DASH_GT] = ACTIONS(411),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(411),
    [sym__symbol_chars] = ACTIONS(413),
    [anon_sym_LPAREN] = ACTIONS(415),
    [anon_sym_LBRACK] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(419),
    [anon_sym_RBRACE] = ACTIONS(826),
    [anon_sym_POUND] = ACTIONS(423),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(828),
  },
  [168] = {
    [aux_sym_ignore_form_repeat1] = STATE(239),
    [ts_builtin_sym_end] = ACTIONS(830),
    [sym_nil] = ACTIONS(832),
    [sym_true] = ACTIONS(832),
    [sym_false] = ACTIONS(832),
    [sym_number_long] = ACTIONS(832),
    [sym_number_double] = ACTIONS(832),
    [anon_sym_BSLASH] = ACTIONS(832),
    [anon_sym_DQUOTE] = ACTIONS(832),
    [anon_sym_POUND_DQUOTE] = ACTIONS(832),
    [anon_sym_SQUOTE] = ACTIONS(832),
    [anon_sym_LPARENquote] = ACTIONS(832),
    [anon_sym_COLON] = ACTIONS(832),
    [anon_sym_COLON_COLON] = ACTIONS(832),
    [anon_sym_DASH_GT] = ACTIONS(832),
    [anon_sym_DASH_GT_GT] = ACTIONS(832),
    [anon_sym_as_DASH_GT] = ACTIONS(832),
    [anon_sym_some_DASH_GT] = ACTIONS(832),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(832),
    [anon_sym_cond_DASH_GT] = ACTIONS(832),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(832),
    [sym__symbol_chars] = ACTIONS(832),
    [anon_sym_LPAREN] = ACTIONS(832),
    [anon_sym_LBRACK] = ACTIONS(832),
    [anon_sym_LBRACE] = ACTIONS(832),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(832),
    [anon_sym_POUND] = ACTIONS(832),
    [anon_sym_POUND_LBRACE] = ACTIONS(832),
    [anon_sym_SEMI] = ACTIONS(832),
    [anon_sym_POUND_BANG] = ACTIONS(832),
    [anon_sym_POUND_] = ACTIONS(832),
    [anon_sym_] = ACTIONS(834),
    [anon_sym_LPARENcomment] = ACTIONS(832),
    [sym_named_function] = ACTIONS(832),
    [sym_shorthand_function] = ACTIONS(832),
  },
  [169] = {
    [aux_sym_ignore_form_repeat1] = STATE(240),
    [ts_builtin_sym_end] = ACTIONS(830),
    [sym_nil] = ACTIONS(832),
    [sym_true] = ACTIONS(832),
    [sym_false] = ACTIONS(832),
    [sym_number_long] = ACTIONS(832),
    [sym_number_double] = ACTIONS(832),
    [anon_sym_BSLASH] = ACTIONS(832),
    [anon_sym_DQUOTE] = ACTIONS(832),
    [anon_sym_POUND_DQUOTE] = ACTIONS(832),
    [anon_sym_SQUOTE] = ACTIONS(832),
    [anon_sym_LPARENquote] = ACTIONS(832),
    [anon_sym_COLON] = ACTIONS(832),
    [anon_sym_COLON_COLON] = ACTIONS(832),
    [anon_sym_DASH_GT] = ACTIONS(832),
    [anon_sym_DASH_GT_GT] = ACTIONS(832),
    [anon_sym_as_DASH_GT] = ACTIONS(832),
    [anon_sym_some_DASH_GT] = ACTIONS(832),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(832),
    [anon_sym_cond_DASH_GT] = ACTIONS(832),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(832),
    [sym__symbol_chars] = ACTIONS(832),
    [anon_sym_LPAREN] = ACTIONS(832),
    [anon_sym_LBRACK] = ACTIONS(832),
    [anon_sym_LBRACE] = ACTIONS(832),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(832),
    [anon_sym_POUND] = ACTIONS(832),
    [anon_sym_POUND_LBRACE] = ACTIONS(832),
    [anon_sym_SEMI] = ACTIONS(832),
    [anon_sym_POUND_BANG] = ACTIONS(832),
    [anon_sym_POUND_] = ACTIONS(832),
    [anon_sym_] = ACTIONS(836),
    [anon_sym_LPARENcomment] = ACTIONS(832),
    [sym_named_function] = ACTIONS(832),
    [sym_shorthand_function] = ACTIONS(832),
  },
  [170] = {
    [aux_sym_ignore_form_repeat1] = STATE(170),
    [sym_number_long] = ACTIONS(838),
    [sym_number_double] = ACTIONS(838),
    [anon_sym_DQUOTE] = ACTIONS(838),
    [anon_sym_COLON] = ACTIONS(838),
    [anon_sym_COLON_COLON] = ACTIONS(838),
    [anon_sym_DASH_GT] = ACTIONS(838),
    [anon_sym_DASH_GT_GT] = ACTIONS(838),
    [anon_sym_as_DASH_GT] = ACTIONS(838),
    [anon_sym_some_DASH_GT] = ACTIONS(838),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(838),
    [anon_sym_cond_DASH_GT] = ACTIONS(838),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(838),
    [sym__symbol_chars] = ACTIONS(838),
    [anon_sym_LPAREN] = ACTIONS(838),
    [anon_sym_LBRACK] = ACTIONS(838),
    [anon_sym_LBRACE] = ACTIONS(838),
    [anon_sym_POUND] = ACTIONS(838),
    [anon_sym_] = ACTIONS(840),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(838),
  },
  [171] = {
    [sym_number_long] = ACTIONS(259),
    [sym_number_double] = ACTIONS(259),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [anon_sym_RPAREN] = ACTIONS(259),
    [anon_sym_COLON] = ACTIONS(259),
    [anon_sym_COLON_COLON] = ACTIONS(259),
    [anon_sym_DASH_GT] = ACTIONS(259),
    [anon_sym_DASH_GT_GT] = ACTIONS(259),
    [anon_sym_as_DASH_GT] = ACTIONS(259),
    [anon_sym_some_DASH_GT] = ACTIONS(259),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(259),
    [anon_sym_cond_DASH_GT] = ACTIONS(259),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(259),
    [sym__symbol_chars] = ACTIONS(259),
    [anon_sym_LPAREN] = ACTIONS(259),
    [anon_sym_LBRACK] = ACTIONS(259),
    [anon_sym_LBRACE] = ACTIONS(259),
    [anon_sym_POUND] = ACTIONS(259),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(259),
  },
  [172] = {
    [aux_sym__string_repeat1] = STATE(101),
    [anon_sym_DQUOTE] = ACTIONS(843),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(263),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(263),
  },
  [173] = {
    [sym_number_long] = ACTIONS(285),
    [sym_number_double] = ACTIONS(285),
    [anon_sym_DQUOTE] = ACTIONS(285),
    [anon_sym_RPAREN] = ACTIONS(285),
    [anon_sym_COLON] = ACTIONS(285),
    [anon_sym_COLON_COLON] = ACTIONS(285),
    [anon_sym_DASH_GT] = ACTIONS(285),
    [anon_sym_DASH_GT_GT] = ACTIONS(285),
    [anon_sym_as_DASH_GT] = ACTIONS(285),
    [anon_sym_some_DASH_GT] = ACTIONS(285),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(285),
    [anon_sym_cond_DASH_GT] = ACTIONS(285),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(285),
    [sym__symbol_chars] = ACTIONS(285),
    [anon_sym_LPAREN] = ACTIONS(285),
    [anon_sym_LBRACK] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [anon_sym_POUND] = ACTIONS(285),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(285),
  },
  [174] = {
    [sym_number_long] = ACTIONS(289),
    [sym_number_double] = ACTIONS(289),
    [anon_sym_DQUOTE] = ACTIONS(289),
    [anon_sym_RPAREN] = ACTIONS(289),
    [anon_sym_COLON] = ACTIONS(289),
    [anon_sym_COLON_COLON] = ACTIONS(289),
    [anon_sym_SLASH] = ACTIONS(845),
    [anon_sym_DASH_GT] = ACTIONS(289),
    [anon_sym_DASH_GT_GT] = ACTIONS(289),
    [anon_sym_as_DASH_GT] = ACTIONS(289),
    [anon_sym_some_DASH_GT] = ACTIONS(289),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(289),
    [anon_sym_cond_DASH_GT] = ACTIONS(289),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(289),
    [sym__symbol_chars] = ACTIONS(289),
    [anon_sym_LPAREN] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(289),
    [anon_sym_LBRACE] = ACTIONS(289),
    [anon_sym_POUND] = ACTIONS(289),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(289),
  },
  [175] = {
    [sym__symbol_chars] = ACTIONS(847),
  },
  [176] = {
    [sym_number_long] = ACTIONS(760),
    [sym_number_double] = ACTIONS(760),
    [anon_sym_DQUOTE] = ACTIONS(760),
    [anon_sym_RPAREN] = ACTIONS(760),
    [anon_sym_COLON] = ACTIONS(760),
    [anon_sym_COLON_COLON] = ACTIONS(760),
    [anon_sym_DASH_GT] = ACTIONS(760),
    [anon_sym_DASH_GT_GT] = ACTIONS(760),
    [anon_sym_as_DASH_GT] = ACTIONS(760),
    [anon_sym_some_DASH_GT] = ACTIONS(760),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(760),
    [anon_sym_cond_DASH_GT] = ACTIONS(760),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(760),
    [sym__symbol_chars] = ACTIONS(760),
    [anon_sym_LPAREN] = ACTIONS(760),
    [anon_sym_LBRACK] = ACTIONS(760),
    [anon_sym_LBRACE] = ACTIONS(760),
    [anon_sym_POUND] = ACTIONS(760),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(760),
  },
  [177] = {
    [sym__number] = STATE(184),
    [sym__string] = STATE(184),
    [sym__keyword] = STATE(184),
    [sym__unqualified_keyword] = STATE(184),
    [sym_qualified_keyword] = STATE(184),
    [sym__symbol] = STATE(184),
    [sym_threading_macro] = STATE(184),
    [sym_qualified_symbol] = STATE(184),
    [sym__one_form] = STATE(184),
    [sym__paren_sequence] = STATE(184),
    [sym__bracket_sequence] = STATE(184),
    [sym__curly_brace_sequence] = STATE(184),
    [aux_sym_comment_macro_repeat1] = STATE(184),
    [sym_number_long] = ACTIONS(465),
    [sym_number_double] = ACTIONS(465),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(849),
    [anon_sym_COLON] = ACTIONS(169),
    [anon_sym_COLON_COLON] = ACTIONS(171),
    [anon_sym_DASH_GT] = ACTIONS(173),
    [anon_sym_DASH_GT_GT] = ACTIONS(173),
    [anon_sym_as_DASH_GT] = ACTIONS(173),
    [anon_sym_some_DASH_GT] = ACTIONS(173),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(173),
    [anon_sym_cond_DASH_GT] = ACTIONS(173),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(173),
    [sym__symbol_chars] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(183),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(465),
  },
  [178] = {
    [sym_number_long] = ACTIONS(784),
    [sym_number_double] = ACTIONS(784),
    [anon_sym_DQUOTE] = ACTIONS(784),
    [anon_sym_RPAREN] = ACTIONS(784),
    [anon_sym_COLON] = ACTIONS(784),
    [anon_sym_COLON_COLON] = ACTIONS(784),
    [anon_sym_DASH_GT] = ACTIONS(784),
    [anon_sym_DASH_GT_GT] = ACTIONS(784),
    [anon_sym_as_DASH_GT] = ACTIONS(784),
    [anon_sym_some_DASH_GT] = ACTIONS(784),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(784),
    [anon_sym_cond_DASH_GT] = ACTIONS(784),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(784),
    [sym__symbol_chars] = ACTIONS(784),
    [anon_sym_LPAREN] = ACTIONS(784),
    [anon_sym_LBRACK] = ACTIONS(784),
    [anon_sym_LBRACE] = ACTIONS(784),
    [anon_sym_POUND] = ACTIONS(784),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(784),
  },
  [179] = {
    [sym__number] = STATE(223),
    [sym__string] = STATE(223),
    [sym__keyword] = STATE(223),
    [sym__unqualified_keyword] = STATE(223),
    [sym_qualified_keyword] = STATE(223),
    [sym__symbol] = STATE(223),
    [sym_threading_macro] = STATE(223),
    [sym_qualified_symbol] = STATE(223),
    [sym__one_form] = STATE(223),
    [sym__paren_sequence] = STATE(223),
    [sym__bracket_sequence] = STATE(223),
    [sym__curly_brace_sequence] = STATE(223),
    [aux_sym_comment_macro_repeat1] = STATE(223),
    [sym_number_long] = ACTIONS(792),
    [sym_number_double] = ACTIONS(792),
    [anon_sym_DQUOTE] = ACTIONS(383),
    [anon_sym_COLON] = ACTIONS(385),
    [anon_sym_COLON_COLON] = ACTIONS(387),
    [anon_sym_DASH_GT] = ACTIONS(389),
    [anon_sym_DASH_GT_GT] = ACTIONS(389),
    [anon_sym_as_DASH_GT] = ACTIONS(389),
    [anon_sym_some_DASH_GT] = ACTIONS(389),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(389),
    [anon_sym_cond_DASH_GT] = ACTIONS(389),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(389),
    [sym__symbol_chars] = ACTIONS(391),
    [anon_sym_LPAREN] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(395),
    [anon_sym_RBRACK] = ACTIONS(851),
    [anon_sym_LBRACE] = ACTIONS(399),
    [anon_sym_POUND] = ACTIONS(401),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(792),
  },
  [180] = {
    [sym_number_long] = ACTIONS(820),
    [sym_number_double] = ACTIONS(820),
    [anon_sym_DQUOTE] = ACTIONS(820),
    [anon_sym_RPAREN] = ACTIONS(820),
    [anon_sym_COLON] = ACTIONS(820),
    [anon_sym_COLON_COLON] = ACTIONS(820),
    [anon_sym_DASH_GT] = ACTIONS(820),
    [anon_sym_DASH_GT_GT] = ACTIONS(820),
    [anon_sym_as_DASH_GT] = ACTIONS(820),
    [anon_sym_some_DASH_GT] = ACTIONS(820),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(820),
    [anon_sym_cond_DASH_GT] = ACTIONS(820),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(820),
    [sym__symbol_chars] = ACTIONS(820),
    [anon_sym_LPAREN] = ACTIONS(820),
    [anon_sym_LBRACK] = ACTIONS(820),
    [anon_sym_LBRACE] = ACTIONS(820),
    [anon_sym_POUND] = ACTIONS(820),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(820),
  },
  [181] = {
    [sym__number] = STATE(237),
    [sym__string] = STATE(237),
    [sym__keyword] = STATE(237),
    [sym__unqualified_keyword] = STATE(237),
    [sym_qualified_keyword] = STATE(237),
    [sym__symbol] = STATE(237),
    [sym_threading_macro] = STATE(237),
    [sym_qualified_symbol] = STATE(237),
    [sym__one_form] = STATE(237),
    [sym__paren_sequence] = STATE(237),
    [sym__bracket_sequence] = STATE(237),
    [sym__curly_brace_sequence] = STATE(237),
    [aux_sym_comment_macro_repeat1] = STATE(237),
    [sym_number_long] = ACTIONS(824),
    [sym_number_double] = ACTIONS(824),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [anon_sym_COLON] = ACTIONS(407),
    [anon_sym_COLON_COLON] = ACTIONS(409),
    [anon_sym_DASH_GT] = ACTIONS(411),
    [anon_sym_DASH_GT_GT] = ACTIONS(411),
    [anon_sym_as_DASH_GT] = ACTIONS(411),
    [anon_sym_some_DASH_GT] = ACTIONS(411),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(411),
    [anon_sym_cond_DASH_GT] = ACTIONS(411),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(411),
    [sym__symbol_chars] = ACTIONS(413),
    [anon_sym_LPAREN] = ACTIONS(415),
    [anon_sym_LBRACK] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(419),
    [anon_sym_RBRACE] = ACTIONS(853),
    [anon_sym_POUND] = ACTIONS(423),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(824),
  },
  [182] = {
    [sym__number] = STATE(247),
    [sym__string] = STATE(247),
    [sym__keyword] = STATE(247),
    [sym__unqualified_keyword] = STATE(247),
    [sym_qualified_keyword] = STATE(247),
    [sym__symbol] = STATE(247),
    [sym_threading_macro] = STATE(247),
    [sym_qualified_symbol] = STATE(247),
    [sym__one_form] = STATE(247),
    [sym__paren_sequence] = STATE(247),
    [sym__bracket_sequence] = STATE(247),
    [sym__curly_brace_sequence] = STATE(247),
    [aux_sym_comment_macro_repeat1] = STATE(247),
    [sym_number_long] = ACTIONS(855),
    [sym_number_double] = ACTIONS(855),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [anon_sym_COLON] = ACTIONS(407),
    [anon_sym_COLON_COLON] = ACTIONS(409),
    [anon_sym_DASH_GT] = ACTIONS(411),
    [anon_sym_DASH_GT_GT] = ACTIONS(411),
    [anon_sym_as_DASH_GT] = ACTIONS(411),
    [anon_sym_some_DASH_GT] = ACTIONS(411),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(411),
    [anon_sym_cond_DASH_GT] = ACTIONS(411),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(411),
    [sym__symbol_chars] = ACTIONS(413),
    [anon_sym_LPAREN] = ACTIONS(415),
    [anon_sym_LBRACK] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(419),
    [anon_sym_RBRACE] = ACTIONS(853),
    [anon_sym_POUND] = ACTIONS(423),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(855),
  },
  [183] = {
    [ts_builtin_sym_end] = ACTIONS(857),
    [sym_nil] = ACTIONS(859),
    [sym_true] = ACTIONS(859),
    [sym_false] = ACTIONS(859),
    [sym_number_long] = ACTIONS(859),
    [sym_number_double] = ACTIONS(857),
    [anon_sym_BSLASH] = ACTIONS(857),
    [anon_sym_DQUOTE] = ACTIONS(857),
    [anon_sym_POUND_DQUOTE] = ACTIONS(857),
    [anon_sym_SQUOTE] = ACTIONS(857),
    [anon_sym_LPARENquote] = ACTIONS(857),
    [anon_sym_RPAREN] = ACTIONS(857),
    [anon_sym_COLON] = ACTIONS(859),
    [anon_sym_COLON_COLON] = ACTIONS(857),
    [anon_sym_DASH_GT] = ACTIONS(859),
    [anon_sym_DASH_GT_GT] = ACTIONS(857),
    [anon_sym_as_DASH_GT] = ACTIONS(857),
    [anon_sym_some_DASH_GT] = ACTIONS(859),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(857),
    [anon_sym_cond_DASH_GT] = ACTIONS(859),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(857),
    [sym__symbol_chars] = ACTIONS(859),
    [anon_sym_LPAREN] = ACTIONS(859),
    [anon_sym_LBRACK] = ACTIONS(857),
    [anon_sym_RBRACK] = ACTIONS(857),
    [anon_sym_LBRACE] = ACTIONS(857),
    [anon_sym_RBRACE] = ACTIONS(857),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(857),
    [anon_sym_POUND] = ACTIONS(859),
    [anon_sym_POUND_LBRACE] = ACTIONS(857),
    [anon_sym_SEMI] = ACTIONS(857),
    [anon_sym_POUND_BANG] = ACTIONS(857),
    [anon_sym_POUND_] = ACTIONS(857),
    [anon_sym_LPARENcomment] = ACTIONS(857),
    [sym_named_function] = ACTIONS(859),
    [sym_shorthand_function] = ACTIONS(857),
  },
  [184] = {
    [sym__number] = STATE(184),
    [sym__string] = STATE(184),
    [sym__keyword] = STATE(184),
    [sym__unqualified_keyword] = STATE(184),
    [sym_qualified_keyword] = STATE(184),
    [sym__symbol] = STATE(184),
    [sym_threading_macro] = STATE(184),
    [sym_qualified_symbol] = STATE(184),
    [sym__one_form] = STATE(184),
    [sym__paren_sequence] = STATE(184),
    [sym__bracket_sequence] = STATE(184),
    [sym__curly_brace_sequence] = STATE(184),
    [aux_sym_comment_macro_repeat1] = STATE(184),
    [sym_number_long] = ACTIONS(861),
    [sym_number_double] = ACTIONS(861),
    [anon_sym_DQUOTE] = ACTIONS(864),
    [anon_sym_RPAREN] = ACTIONS(867),
    [anon_sym_COLON] = ACTIONS(869),
    [anon_sym_COLON_COLON] = ACTIONS(872),
    [anon_sym_DASH_GT] = ACTIONS(875),
    [anon_sym_DASH_GT_GT] = ACTIONS(875),
    [anon_sym_as_DASH_GT] = ACTIONS(875),
    [anon_sym_some_DASH_GT] = ACTIONS(875),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(875),
    [anon_sym_cond_DASH_GT] = ACTIONS(875),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(875),
    [sym__symbol_chars] = ACTIONS(878),
    [anon_sym_LPAREN] = ACTIONS(881),
    [anon_sym_LBRACK] = ACTIONS(884),
    [anon_sym_LBRACE] = ACTIONS(887),
    [anon_sym_POUND] = ACTIONS(890),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(861),
  },
  [185] = {
    [sym__hex_char] = ACTIONS(893),
  },
  [186] = {
    [aux_sym_ignore_form_repeat1] = STATE(249),
    [anon_sym_RPAREN] = ACTIONS(832),
    [anon_sym_] = ACTIONS(895),
  },
  [187] = {
    [aux_sym_ignore_form_repeat1] = STATE(250),
    [anon_sym_RPAREN] = ACTIONS(832),
    [anon_sym_] = ACTIONS(897),
  },
  [188] = {
    [ts_builtin_sym_end] = ACTIONS(899),
    [sym_nil] = ACTIONS(901),
    [sym_true] = ACTIONS(901),
    [sym_false] = ACTIONS(901),
    [sym_number_long] = ACTIONS(901),
    [sym_number_double] = ACTIONS(899),
    [anon_sym_BSLASH] = ACTIONS(899),
    [anon_sym_DQUOTE] = ACTIONS(899),
    [anon_sym_POUND_DQUOTE] = ACTIONS(899),
    [anon_sym_SQUOTE] = ACTIONS(899),
    [anon_sym_LPARENquote] = ACTIONS(899),
    [anon_sym_RPAREN] = ACTIONS(899),
    [anon_sym_COLON] = ACTIONS(901),
    [anon_sym_COLON_COLON] = ACTIONS(899),
    [anon_sym_DASH_GT] = ACTIONS(901),
    [anon_sym_DASH_GT_GT] = ACTIONS(899),
    [anon_sym_as_DASH_GT] = ACTIONS(899),
    [anon_sym_some_DASH_GT] = ACTIONS(901),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(899),
    [anon_sym_cond_DASH_GT] = ACTIONS(901),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(899),
    [sym__symbol_chars] = ACTIONS(901),
    [anon_sym_LPAREN] = ACTIONS(901),
    [anon_sym_LBRACK] = ACTIONS(899),
    [anon_sym_RBRACK] = ACTIONS(899),
    [anon_sym_LBRACE] = ACTIONS(899),
    [anon_sym_RBRACE] = ACTIONS(899),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(899),
    [anon_sym_POUND] = ACTIONS(901),
    [anon_sym_POUND_LBRACE] = ACTIONS(899),
    [anon_sym_SEMI] = ACTIONS(899),
    [anon_sym_POUND_BANG] = ACTIONS(899),
    [anon_sym_POUND_] = ACTIONS(899),
    [anon_sym_LPARENcomment] = ACTIONS(899),
    [sym_named_function] = ACTIONS(901),
    [sym_shorthand_function] = ACTIONS(899),
  },
  [189] = {
    [aux_sym_ignore_form_repeat1] = STATE(251),
    [sym_nil] = ACTIONS(832),
    [sym_true] = ACTIONS(832),
    [sym_false] = ACTIONS(832),
    [sym_number_long] = ACTIONS(832),
    [sym_number_double] = ACTIONS(832),
    [anon_sym_BSLASH] = ACTIONS(832),
    [anon_sym_DQUOTE] = ACTIONS(832),
    [anon_sym_POUND_DQUOTE] = ACTIONS(832),
    [anon_sym_SQUOTE] = ACTIONS(832),
    [anon_sym_LPARENquote] = ACTIONS(832),
    [anon_sym_RPAREN] = ACTIONS(832),
    [anon_sym_COLON] = ACTIONS(832),
    [anon_sym_COLON_COLON] = ACTIONS(832),
    [anon_sym_DASH_GT] = ACTIONS(832),
    [anon_sym_DASH_GT_GT] = ACTIONS(832),
    [anon_sym_as_DASH_GT] = ACTIONS(832),
    [anon_sym_some_DASH_GT] = ACTIONS(832),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(832),
    [anon_sym_cond_DASH_GT] = ACTIONS(832),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(832),
    [sym__symbol_chars] = ACTIONS(832),
    [anon_sym_LPAREN] = ACTIONS(832),
    [anon_sym_LBRACK] = ACTIONS(832),
    [anon_sym_LBRACE] = ACTIONS(832),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(832),
    [anon_sym_POUND] = ACTIONS(832),
    [anon_sym_POUND_LBRACE] = ACTIONS(832),
    [anon_sym_SEMI] = ACTIONS(832),
    [anon_sym_POUND_BANG] = ACTIONS(832),
    [anon_sym_POUND_] = ACTIONS(832),
    [anon_sym_] = ACTIONS(903),
    [anon_sym_LPARENcomment] = ACTIONS(832),
    [sym_named_function] = ACTIONS(832),
    [sym_shorthand_function] = ACTIONS(832),
  },
  [190] = {
    [aux_sym_ignore_form_repeat1] = STATE(252),
    [sym_nil] = ACTIONS(832),
    [sym_true] = ACTIONS(832),
    [sym_false] = ACTIONS(832),
    [sym_number_long] = ACTIONS(832),
    [sym_number_double] = ACTIONS(832),
    [anon_sym_BSLASH] = ACTIONS(832),
    [anon_sym_DQUOTE] = ACTIONS(832),
    [anon_sym_POUND_DQUOTE] = ACTIONS(832),
    [anon_sym_SQUOTE] = ACTIONS(832),
    [anon_sym_LPARENquote] = ACTIONS(832),
    [anon_sym_RPAREN] = ACTIONS(832),
    [anon_sym_COLON] = ACTIONS(832),
    [anon_sym_COLON_COLON] = ACTIONS(832),
    [anon_sym_DASH_GT] = ACTIONS(832),
    [anon_sym_DASH_GT_GT] = ACTIONS(832),
    [anon_sym_as_DASH_GT] = ACTIONS(832),
    [anon_sym_some_DASH_GT] = ACTIONS(832),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(832),
    [anon_sym_cond_DASH_GT] = ACTIONS(832),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(832),
    [sym__symbol_chars] = ACTIONS(832),
    [anon_sym_LPAREN] = ACTIONS(832),
    [anon_sym_LBRACK] = ACTIONS(832),
    [anon_sym_LBRACE] = ACTIONS(832),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(832),
    [anon_sym_POUND] = ACTIONS(832),
    [anon_sym_POUND_LBRACE] = ACTIONS(832),
    [anon_sym_SEMI] = ACTIONS(832),
    [anon_sym_POUND_BANG] = ACTIONS(832),
    [anon_sym_POUND_] = ACTIONS(832),
    [anon_sym_] = ACTIONS(905),
    [anon_sym_LPARENcomment] = ACTIONS(832),
    [sym_named_function] = ACTIONS(832),
    [sym_shorthand_function] = ACTIONS(832),
  },
  [191] = {
    [sym__symbol_chars] = ACTIONS(907),
  },
  [192] = {
    [anon_sym_RPAREN] = ACTIONS(909),
  },
  [193] = {
    [anon_sym_RPAREN] = ACTIONS(911),
  },
  [194] = {
    [ts_builtin_sym_end] = ACTIONS(913),
    [sym_nil] = ACTIONS(915),
    [sym_true] = ACTIONS(915),
    [sym_false] = ACTIONS(915),
    [sym_number_long] = ACTIONS(915),
    [sym_number_double] = ACTIONS(913),
    [anon_sym_BSLASH] = ACTIONS(913),
    [anon_sym_DQUOTE] = ACTIONS(913),
    [anon_sym_POUND_DQUOTE] = ACTIONS(913),
    [anon_sym_SQUOTE] = ACTIONS(913),
    [anon_sym_LPARENquote] = ACTIONS(913),
    [anon_sym_RPAREN] = ACTIONS(913),
    [anon_sym_COLON] = ACTIONS(915),
    [anon_sym_COLON_COLON] = ACTIONS(913),
    [anon_sym_DASH_GT] = ACTIONS(915),
    [anon_sym_DASH_GT_GT] = ACTIONS(913),
    [anon_sym_as_DASH_GT] = ACTIONS(913),
    [anon_sym_some_DASH_GT] = ACTIONS(915),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(913),
    [anon_sym_cond_DASH_GT] = ACTIONS(915),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(913),
    [sym__symbol_chars] = ACTIONS(915),
    [anon_sym_LPAREN] = ACTIONS(915),
    [anon_sym_LBRACK] = ACTIONS(913),
    [anon_sym_RBRACK] = ACTIONS(913),
    [anon_sym_LBRACE] = ACTIONS(913),
    [anon_sym_RBRACE] = ACTIONS(913),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(913),
    [anon_sym_POUND] = ACTIONS(915),
    [anon_sym_POUND_LBRACE] = ACTIONS(913),
    [anon_sym_SEMI] = ACTIONS(913),
    [anon_sym_POUND_BANG] = ACTIONS(913),
    [anon_sym_POUND_] = ACTIONS(913),
    [anon_sym_LPARENcomment] = ACTIONS(913),
    [sym_named_function] = ACTIONS(915),
    [sym_shorthand_function] = ACTIONS(913),
  },
  [195] = {
    [anon_sym_RPAREN] = ACTIONS(917),
  },
  [196] = {
    [sym__anything] = STATE(122),
    [sym__literal] = STATE(122),
    [sym__collection_literal] = STATE(122),
    [sym_boolean] = STATE(122),
    [sym_number] = STATE(122),
    [sym__number] = STATE(24),
    [sym_character] = STATE(122),
    [sym__character] = STATE(25),
    [sym_string] = STATE(122),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(122),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(122),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(122),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(122),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(122),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(122),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(122),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym_set] = STATE(122),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(122),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_special_form] = STATE(122),
    [sym_function] = STATE(36),
    [sym_anonymous_function] = STATE(22),
    [aux_sym_program_repeat1] = STATE(122),
    [sym_nil] = ACTIONS(311),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(101),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(919),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_DASH_GT] = ACTIONS(29),
    [anon_sym_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_as_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT] = ACTIONS(29),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT] = ACTIONS(29),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(31),
    [sym__symbol_chars] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(105),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [sym_named_function] = ACTIONS(55),
    [sym_shorthand_function] = ACTIONS(57),
  },
  [197] = {
    [aux_sym__multi_arity_fn_repeat1] = STATE(197),
    [anon_sym_RPAREN] = ACTIONS(921),
    [anon_sym_LPAREN] = ACTIONS(923),
  },
  [198] = {
    [aux_sym_ignore_form_repeat1] = STATE(256),
    [sym_nil] = ACTIONS(832),
    [sym_true] = ACTIONS(832),
    [sym_false] = ACTIONS(832),
    [sym_number_long] = ACTIONS(832),
    [sym_number_double] = ACTIONS(832),
    [anon_sym_BSLASH] = ACTIONS(832),
    [anon_sym_DQUOTE] = ACTIONS(832),
    [anon_sym_POUND_DQUOTE] = ACTIONS(832),
    [anon_sym_SQUOTE] = ACTIONS(832),
    [anon_sym_LPARENquote] = ACTIONS(832),
    [anon_sym_COLON] = ACTIONS(832),
    [anon_sym_COLON_COLON] = ACTIONS(832),
    [anon_sym_DASH_GT] = ACTIONS(832),
    [anon_sym_DASH_GT_GT] = ACTIONS(832),
    [anon_sym_as_DASH_GT] = ACTIONS(832),
    [anon_sym_some_DASH_GT] = ACTIONS(832),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(832),
    [anon_sym_cond_DASH_GT] = ACTIONS(832),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(832),
    [sym__symbol_chars] = ACTIONS(832),
    [anon_sym_LPAREN] = ACTIONS(832),
    [anon_sym_LBRACK] = ACTIONS(832),
    [anon_sym_RBRACK] = ACTIONS(832),
    [anon_sym_LBRACE] = ACTIONS(832),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(832),
    [anon_sym_POUND] = ACTIONS(832),
    [anon_sym_POUND_LBRACE] = ACTIONS(832),
    [anon_sym_SEMI] = ACTIONS(832),
    [anon_sym_POUND_BANG] = ACTIONS(832),
    [anon_sym_POUND_] = ACTIONS(832),
    [anon_sym_] = ACTIONS(926),
    [anon_sym_LPARENcomment] = ACTIONS(832),
    [sym_named_function] = ACTIONS(832),
    [sym_shorthand_function] = ACTIONS(832),
  },
  [199] = {
    [aux_sym_ignore_form_repeat1] = STATE(257),
    [sym_nil] = ACTIONS(832),
    [sym_true] = ACTIONS(832),
    [sym_false] = ACTIONS(832),
    [sym_number_long] = ACTIONS(832),
    [sym_number_double] = ACTIONS(832),
    [anon_sym_BSLASH] = ACTIONS(832),
    [anon_sym_DQUOTE] = ACTIONS(832),
    [anon_sym_POUND_DQUOTE] = ACTIONS(832),
    [anon_sym_SQUOTE] = ACTIONS(832),
    [anon_sym_LPARENquote] = ACTIONS(832),
    [anon_sym_COLON] = ACTIONS(832),
    [anon_sym_COLON_COLON] = ACTIONS(832),
    [anon_sym_DASH_GT] = ACTIONS(832),
    [anon_sym_DASH_GT_GT] = ACTIONS(832),
    [anon_sym_as_DASH_GT] = ACTIONS(832),
    [anon_sym_some_DASH_GT] = ACTIONS(832),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(832),
    [anon_sym_cond_DASH_GT] = ACTIONS(832),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(832),
    [sym__symbol_chars] = ACTIONS(832),
    [anon_sym_LPAREN] = ACTIONS(832),
    [anon_sym_LBRACK] = ACTIONS(832),
    [anon_sym_RBRACK] = ACTIONS(832),
    [anon_sym_LBRACE] = ACTIONS(832),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(832),
    [anon_sym_POUND] = ACTIONS(832),
    [anon_sym_POUND_LBRACE] = ACTIONS(832),
    [anon_sym_SEMI] = ACTIONS(832),
    [anon_sym_POUND_BANG] = ACTIONS(832),
    [anon_sym_POUND_] = ACTIONS(832),
    [anon_sym_] = ACTIONS(928),
    [anon_sym_LPARENcomment] = ACTIONS(832),
    [sym_named_function] = ACTIONS(832),
    [sym_shorthand_function] = ACTIONS(832),
  },
  [200] = {
    [aux_sym_ignore_form_repeat1] = STATE(258),
    [sym_nil] = ACTIONS(832),
    [sym_true] = ACTIONS(832),
    [sym_false] = ACTIONS(832),
    [sym_number_long] = ACTIONS(832),
    [sym_number_double] = ACTIONS(832),
    [anon_sym_BSLASH] = ACTIONS(832),
    [anon_sym_DQUOTE] = ACTIONS(832),
    [anon_sym_POUND_DQUOTE] = ACTIONS(832),
    [anon_sym_SQUOTE] = ACTIONS(832),
    [anon_sym_LPARENquote] = ACTIONS(832),
    [anon_sym_COLON] = ACTIONS(832),
    [anon_sym_COLON_COLON] = ACTIONS(832),
    [anon_sym_DASH_GT] = ACTIONS(832),
    [anon_sym_DASH_GT_GT] = ACTIONS(832),
    [anon_sym_as_DASH_GT] = ACTIONS(832),
    [anon_sym_some_DASH_GT] = ACTIONS(832),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(832),
    [anon_sym_cond_DASH_GT] = ACTIONS(832),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(832),
    [sym__symbol_chars] = ACTIONS(832),
    [anon_sym_LPAREN] = ACTIONS(832),
    [anon_sym_LBRACK] = ACTIONS(832),
    [anon_sym_LBRACE] = ACTIONS(832),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(832),
    [anon_sym_POUND] = ACTIONS(832),
    [anon_sym_POUND_LBRACE] = ACTIONS(832),
    [anon_sym_SEMI] = ACTIONS(832),
    [anon_sym_POUND_BANG] = ACTIONS(832),
    [anon_sym_POUND_] = ACTIONS(832),
    [anon_sym_] = ACTIONS(930),
    [anon_sym_LPARENcomment] = ACTIONS(832),
    [sym_named_function] = ACTIONS(832),
    [sym_shorthand_function] = ACTIONS(832),
  },
  [201] = {
    [aux_sym_ignore_form_repeat1] = STATE(259),
    [sym_nil] = ACTIONS(832),
    [sym_true] = ACTIONS(832),
    [sym_false] = ACTIONS(832),
    [sym_number_long] = ACTIONS(832),
    [sym_number_double] = ACTIONS(832),
    [anon_sym_BSLASH] = ACTIONS(832),
    [anon_sym_DQUOTE] = ACTIONS(832),
    [anon_sym_POUND_DQUOTE] = ACTIONS(832),
    [anon_sym_SQUOTE] = ACTIONS(832),
    [anon_sym_LPARENquote] = ACTIONS(832),
    [anon_sym_COLON] = ACTIONS(832),
    [anon_sym_COLON_COLON] = ACTIONS(832),
    [anon_sym_DASH_GT] = ACTIONS(832),
    [anon_sym_DASH_GT_GT] = ACTIONS(832),
    [anon_sym_as_DASH_GT] = ACTIONS(832),
    [anon_sym_some_DASH_GT] = ACTIONS(832),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(832),
    [anon_sym_cond_DASH_GT] = ACTIONS(832),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(832),
    [sym__symbol_chars] = ACTIONS(832),
    [anon_sym_LPAREN] = ACTIONS(832),
    [anon_sym_LBRACK] = ACTIONS(832),
    [anon_sym_LBRACE] = ACTIONS(832),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(832),
    [anon_sym_POUND] = ACTIONS(832),
    [anon_sym_POUND_LBRACE] = ACTIONS(832),
    [anon_sym_SEMI] = ACTIONS(832),
    [anon_sym_POUND_BANG] = ACTIONS(832),
    [anon_sym_POUND_] = ACTIONS(832),
    [anon_sym_] = ACTIONS(932),
    [anon_sym_LPARENcomment] = ACTIONS(832),
    [sym_named_function] = ACTIONS(832),
    [sym_shorthand_function] = ACTIONS(832),
  },
  [202] = {
    [ts_builtin_sym_end] = ACTIONS(934),
    [sym_nil] = ACTIONS(936),
    [sym_true] = ACTIONS(936),
    [sym_false] = ACTIONS(936),
    [sym_number_long] = ACTIONS(936),
    [sym_number_double] = ACTIONS(934),
    [anon_sym_BSLASH] = ACTIONS(934),
    [anon_sym_DQUOTE] = ACTIONS(934),
    [anon_sym_POUND_DQUOTE] = ACTIONS(934),
    [anon_sym_SQUOTE] = ACTIONS(934),
    [anon_sym_LPARENquote] = ACTIONS(934),
    [anon_sym_RPAREN] = ACTIONS(934),
    [anon_sym_COLON] = ACTIONS(936),
    [anon_sym_COLON_COLON] = ACTIONS(934),
    [anon_sym_DASH_GT] = ACTIONS(936),
    [anon_sym_DASH_GT_GT] = ACTIONS(934),
    [anon_sym_as_DASH_GT] = ACTIONS(934),
    [anon_sym_some_DASH_GT] = ACTIONS(936),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(934),
    [anon_sym_cond_DASH_GT] = ACTIONS(936),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(934),
    [sym__symbol_chars] = ACTIONS(936),
    [anon_sym_LPAREN] = ACTIONS(936),
    [anon_sym_LBRACK] = ACTIONS(934),
    [anon_sym_RBRACK] = ACTIONS(934),
    [anon_sym_LBRACE] = ACTIONS(934),
    [anon_sym_RBRACE] = ACTIONS(934),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(934),
    [anon_sym_POUND] = ACTIONS(936),
    [anon_sym_POUND_LBRACE] = ACTIONS(934),
    [anon_sym_SEMI] = ACTIONS(934),
    [anon_sym_POUND_BANG] = ACTIONS(934),
    [anon_sym_POUND_] = ACTIONS(934),
    [anon_sym_LPARENcomment] = ACTIONS(934),
    [sym_named_function] = ACTIONS(936),
    [sym_shorthand_function] = ACTIONS(934),
  },
  [203] = {
    [sym__anything] = STATE(64),
    [sym__literal] = STATE(64),
    [sym__collection_literal] = STATE(64),
    [sym_boolean] = STATE(64),
    [sym_number] = STATE(64),
    [sym__number] = STATE(24),
    [sym_character] = STATE(64),
    [sym__character] = STATE(25),
    [sym_string] = STATE(64),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(64),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(64),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(64),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(64),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(64),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(64),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(64),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym__hash_map_kv_pair] = STATE(131),
    [sym__hash_map_key] = STATE(64),
    [sym_set] = STATE(64),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(64),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_special_form] = STATE(64),
    [sym_function] = STATE(36),
    [sym_anonymous_function] = STATE(22),
    [aux_sym__hash_map_repeat1] = STATE(131),
    [sym_nil] = ACTIONS(117),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(119),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_DASH_GT] = ACTIONS(29),
    [anon_sym_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_as_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT] = ACTIONS(29),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT] = ACTIONS(29),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(31),
    [sym__symbol_chars] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(938),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(123),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [sym_named_function] = ACTIONS(55),
    [sym_shorthand_function] = ACTIONS(57),
  },
  [204] = {
    [aux_sym_ignore_form_repeat1] = STATE(261),
    [sym_nil] = ACTIONS(832),
    [sym_true] = ACTIONS(832),
    [sym_false] = ACTIONS(832),
    [sym_number_long] = ACTIONS(832),
    [sym_number_double] = ACTIONS(832),
    [anon_sym_BSLASH] = ACTIONS(832),
    [anon_sym_DQUOTE] = ACTIONS(832),
    [anon_sym_POUND_DQUOTE] = ACTIONS(832),
    [anon_sym_SQUOTE] = ACTIONS(832),
    [anon_sym_LPARENquote] = ACTIONS(832),
    [anon_sym_COLON] = ACTIONS(832),
    [anon_sym_COLON_COLON] = ACTIONS(832),
    [anon_sym_DASH_GT] = ACTIONS(832),
    [anon_sym_DASH_GT_GT] = ACTIONS(832),
    [anon_sym_as_DASH_GT] = ACTIONS(832),
    [anon_sym_some_DASH_GT] = ACTIONS(832),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(832),
    [anon_sym_cond_DASH_GT] = ACTIONS(832),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(832),
    [sym__symbol_chars] = ACTIONS(832),
    [anon_sym_LPAREN] = ACTIONS(832),
    [anon_sym_LBRACK] = ACTIONS(832),
    [anon_sym_LBRACE] = ACTIONS(832),
    [anon_sym_RBRACE] = ACTIONS(832),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(832),
    [anon_sym_POUND] = ACTIONS(832),
    [anon_sym_POUND_LBRACE] = ACTIONS(832),
    [anon_sym_SEMI] = ACTIONS(832),
    [anon_sym_POUND_BANG] = ACTIONS(832),
    [anon_sym_POUND_] = ACTIONS(832),
    [anon_sym_] = ACTIONS(940),
    [anon_sym_LPARENcomment] = ACTIONS(832),
    [sym_named_function] = ACTIONS(832),
    [sym_shorthand_function] = ACTIONS(832),
  },
  [205] = {
    [aux_sym_ignore_form_repeat1] = STATE(262),
    [sym_nil] = ACTIONS(832),
    [sym_true] = ACTIONS(832),
    [sym_false] = ACTIONS(832),
    [sym_number_long] = ACTIONS(832),
    [sym_number_double] = ACTIONS(832),
    [anon_sym_BSLASH] = ACTIONS(832),
    [anon_sym_DQUOTE] = ACTIONS(832),
    [anon_sym_POUND_DQUOTE] = ACTIONS(832),
    [anon_sym_SQUOTE] = ACTIONS(832),
    [anon_sym_LPARENquote] = ACTIONS(832),
    [anon_sym_COLON] = ACTIONS(832),
    [anon_sym_COLON_COLON] = ACTIONS(832),
    [anon_sym_DASH_GT] = ACTIONS(832),
    [anon_sym_DASH_GT_GT] = ACTIONS(832),
    [anon_sym_as_DASH_GT] = ACTIONS(832),
    [anon_sym_some_DASH_GT] = ACTIONS(832),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(832),
    [anon_sym_cond_DASH_GT] = ACTIONS(832),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(832),
    [sym__symbol_chars] = ACTIONS(832),
    [anon_sym_LPAREN] = ACTIONS(832),
    [anon_sym_LBRACK] = ACTIONS(832),
    [anon_sym_LBRACE] = ACTIONS(832),
    [anon_sym_RBRACE] = ACTIONS(832),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(832),
    [anon_sym_POUND] = ACTIONS(832),
    [anon_sym_POUND_LBRACE] = ACTIONS(832),
    [anon_sym_SEMI] = ACTIONS(832),
    [anon_sym_POUND_BANG] = ACTIONS(832),
    [anon_sym_POUND_] = ACTIONS(832),
    [anon_sym_] = ACTIONS(942),
    [anon_sym_LPARENcomment] = ACTIONS(832),
    [sym_named_function] = ACTIONS(832),
    [sym_shorthand_function] = ACTIONS(832),
  },
  [206] = {
    [ts_builtin_sym_end] = ACTIONS(555),
    [sym_nil] = ACTIONS(557),
    [sym_true] = ACTIONS(557),
    [sym_false] = ACTIONS(557),
    [sym_number_long] = ACTIONS(557),
    [sym_number_double] = ACTIONS(557),
    [anon_sym_BSLASH] = ACTIONS(557),
    [anon_sym_DQUOTE] = ACTIONS(557),
    [anon_sym_POUND_DQUOTE] = ACTIONS(557),
    [anon_sym_SQUOTE] = ACTIONS(557),
    [anon_sym_LPARENquote] = ACTIONS(557),
    [anon_sym_RPAREN] = ACTIONS(557),
    [anon_sym_COLON] = ACTIONS(557),
    [anon_sym_COLON_COLON] = ACTIONS(557),
    [anon_sym_DASH_GT] = ACTIONS(557),
    [anon_sym_DASH_GT_GT] = ACTIONS(557),
    [anon_sym_as_DASH_GT] = ACTIONS(557),
    [anon_sym_some_DASH_GT] = ACTIONS(557),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(557),
    [anon_sym_cond_DASH_GT] = ACTIONS(557),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(557),
    [sym__symbol_chars] = ACTIONS(557),
    [anon_sym_LPAREN] = ACTIONS(557),
    [anon_sym_LBRACK] = ACTIONS(557),
    [anon_sym_RBRACK] = ACTIONS(557),
    [anon_sym_LBRACE] = ACTIONS(557),
    [anon_sym_RBRACE] = ACTIONS(557),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(557),
    [anon_sym_POUND] = ACTIONS(557),
    [anon_sym_POUND_LBRACE] = ACTIONS(557),
    [anon_sym_SEMI] = ACTIONS(557),
    [anon_sym_POUND_BANG] = ACTIONS(557),
    [anon_sym_POUND_] = ACTIONS(557),
    [anon_sym_] = ACTIONS(555),
    [anon_sym_LPARENcomment] = ACTIONS(557),
    [sym_named_function] = ACTIONS(557),
    [sym_shorthand_function] = ACTIONS(557),
  },
  [207] = {
    [sym__keyword_chars] = ACTIONS(944),
  },
  [208] = {
    [ts_builtin_sym_end] = ACTIONS(583),
    [sym_nil] = ACTIONS(585),
    [sym_true] = ACTIONS(585),
    [sym_false] = ACTIONS(585),
    [sym_number_long] = ACTIONS(585),
    [sym_number_double] = ACTIONS(585),
    [anon_sym_BSLASH] = ACTIONS(585),
    [anon_sym_DQUOTE] = ACTIONS(585),
    [anon_sym_POUND_DQUOTE] = ACTIONS(585),
    [anon_sym_SQUOTE] = ACTIONS(585),
    [anon_sym_LPARENquote] = ACTIONS(585),
    [anon_sym_RPAREN] = ACTIONS(585),
    [anon_sym_COLON] = ACTIONS(585),
    [anon_sym_COLON_COLON] = ACTIONS(585),
    [anon_sym_DASH_GT] = ACTIONS(585),
    [anon_sym_DASH_GT_GT] = ACTIONS(585),
    [anon_sym_as_DASH_GT] = ACTIONS(585),
    [anon_sym_some_DASH_GT] = ACTIONS(585),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(585),
    [anon_sym_cond_DASH_GT] = ACTIONS(585),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(585),
    [sym__symbol_chars] = ACTIONS(585),
    [anon_sym_LPAREN] = ACTIONS(585),
    [anon_sym_LBRACK] = ACTIONS(585),
    [anon_sym_RBRACK] = ACTIONS(585),
    [anon_sym_LBRACE] = ACTIONS(585),
    [anon_sym_RBRACE] = ACTIONS(585),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(585),
    [anon_sym_POUND] = ACTIONS(585),
    [anon_sym_POUND_LBRACE] = ACTIONS(585),
    [anon_sym_SEMI] = ACTIONS(585),
    [anon_sym_POUND_BANG] = ACTIONS(585),
    [anon_sym_POUND_] = ACTIONS(585),
    [anon_sym_] = ACTIONS(583),
    [anon_sym_LPARENcomment] = ACTIONS(585),
    [sym_named_function] = ACTIONS(585),
    [sym_shorthand_function] = ACTIONS(585),
  },
  [209] = {
    [ts_builtin_sym_end] = ACTIONS(946),
    [sym_nil] = ACTIONS(948),
    [sym_true] = ACTIONS(948),
    [sym_false] = ACTIONS(948),
    [sym_number_long] = ACTIONS(948),
    [sym_number_double] = ACTIONS(948),
    [anon_sym_BSLASH] = ACTIONS(948),
    [anon_sym_DQUOTE] = ACTIONS(948),
    [anon_sym_POUND_DQUOTE] = ACTIONS(948),
    [anon_sym_SQUOTE] = ACTIONS(948),
    [anon_sym_LPARENquote] = ACTIONS(948),
    [anon_sym_RPAREN] = ACTIONS(948),
    [anon_sym_COLON] = ACTIONS(948),
    [anon_sym_COLON_COLON] = ACTIONS(948),
    [anon_sym_DASH_GT] = ACTIONS(948),
    [anon_sym_DASH_GT_GT] = ACTIONS(948),
    [anon_sym_as_DASH_GT] = ACTIONS(948),
    [anon_sym_some_DASH_GT] = ACTIONS(948),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(948),
    [anon_sym_cond_DASH_GT] = ACTIONS(948),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(948),
    [sym__symbol_chars] = ACTIONS(948),
    [anon_sym_LPAREN] = ACTIONS(948),
    [anon_sym_LBRACK] = ACTIONS(948),
    [anon_sym_RBRACK] = ACTIONS(948),
    [anon_sym_LBRACE] = ACTIONS(948),
    [anon_sym_RBRACE] = ACTIONS(948),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(948),
    [anon_sym_POUND] = ACTIONS(948),
    [anon_sym_POUND_LBRACE] = ACTIONS(948),
    [anon_sym_SEMI] = ACTIONS(948),
    [anon_sym_POUND_BANG] = ACTIONS(948),
    [anon_sym_POUND_] = ACTIONS(948),
    [anon_sym_] = ACTIONS(946),
    [anon_sym_LPARENcomment] = ACTIONS(948),
    [sym_named_function] = ACTIONS(948),
    [sym_shorthand_function] = ACTIONS(948),
  },
  [210] = {
    [sym_number_long] = ACTIONS(259),
    [sym_number_double] = ACTIONS(259),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [anon_sym_COLON] = ACTIONS(259),
    [anon_sym_COLON_COLON] = ACTIONS(259),
    [anon_sym_DASH_GT] = ACTIONS(259),
    [anon_sym_DASH_GT_GT] = ACTIONS(259),
    [anon_sym_as_DASH_GT] = ACTIONS(259),
    [anon_sym_some_DASH_GT] = ACTIONS(259),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(259),
    [anon_sym_cond_DASH_GT] = ACTIONS(259),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(259),
    [sym__symbol_chars] = ACTIONS(259),
    [anon_sym_LPAREN] = ACTIONS(259),
    [anon_sym_LBRACK] = ACTIONS(259),
    [anon_sym_RBRACK] = ACTIONS(259),
    [anon_sym_LBRACE] = ACTIONS(259),
    [anon_sym_POUND] = ACTIONS(259),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(259),
  },
  [211] = {
    [aux_sym__string_repeat1] = STATE(101),
    [anon_sym_DQUOTE] = ACTIONS(950),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(263),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(263),
  },
  [212] = {
    [sym_number_long] = ACTIONS(285),
    [sym_number_double] = ACTIONS(285),
    [anon_sym_DQUOTE] = ACTIONS(285),
    [anon_sym_COLON] = ACTIONS(285),
    [anon_sym_COLON_COLON] = ACTIONS(285),
    [anon_sym_DASH_GT] = ACTIONS(285),
    [anon_sym_DASH_GT_GT] = ACTIONS(285),
    [anon_sym_as_DASH_GT] = ACTIONS(285),
    [anon_sym_some_DASH_GT] = ACTIONS(285),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(285),
    [anon_sym_cond_DASH_GT] = ACTIONS(285),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(285),
    [sym__symbol_chars] = ACTIONS(285),
    [anon_sym_LPAREN] = ACTIONS(285),
    [anon_sym_LBRACK] = ACTIONS(285),
    [anon_sym_RBRACK] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [anon_sym_POUND] = ACTIONS(285),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(285),
  },
  [213] = {
    [sym_number_long] = ACTIONS(289),
    [sym_number_double] = ACTIONS(289),
    [anon_sym_DQUOTE] = ACTIONS(289),
    [anon_sym_COLON] = ACTIONS(289),
    [anon_sym_COLON_COLON] = ACTIONS(289),
    [anon_sym_SLASH] = ACTIONS(952),
    [anon_sym_DASH_GT] = ACTIONS(289),
    [anon_sym_DASH_GT_GT] = ACTIONS(289),
    [anon_sym_as_DASH_GT] = ACTIONS(289),
    [anon_sym_some_DASH_GT] = ACTIONS(289),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(289),
    [anon_sym_cond_DASH_GT] = ACTIONS(289),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(289),
    [sym__symbol_chars] = ACTIONS(289),
    [anon_sym_LPAREN] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(289),
    [anon_sym_RBRACK] = ACTIONS(289),
    [anon_sym_LBRACE] = ACTIONS(289),
    [anon_sym_POUND] = ACTIONS(289),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(289),
  },
  [214] = {
    [sym__symbol_chars] = ACTIONS(954),
  },
  [215] = {
    [sym_number_long] = ACTIONS(760),
    [sym_number_double] = ACTIONS(760),
    [anon_sym_DQUOTE] = ACTIONS(760),
    [anon_sym_COLON] = ACTIONS(760),
    [anon_sym_COLON_COLON] = ACTIONS(760),
    [anon_sym_DASH_GT] = ACTIONS(760),
    [anon_sym_DASH_GT_GT] = ACTIONS(760),
    [anon_sym_as_DASH_GT] = ACTIONS(760),
    [anon_sym_some_DASH_GT] = ACTIONS(760),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(760),
    [anon_sym_cond_DASH_GT] = ACTIONS(760),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(760),
    [sym__symbol_chars] = ACTIONS(760),
    [anon_sym_LPAREN] = ACTIONS(760),
    [anon_sym_LBRACK] = ACTIONS(760),
    [anon_sym_RBRACK] = ACTIONS(760),
    [anon_sym_LBRACE] = ACTIONS(760),
    [anon_sym_POUND] = ACTIONS(760),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(760),
  },
  [216] = {
    [sym__number] = STATE(184),
    [sym__string] = STATE(184),
    [sym__keyword] = STATE(184),
    [sym__unqualified_keyword] = STATE(184),
    [sym_qualified_keyword] = STATE(184),
    [sym__symbol] = STATE(184),
    [sym_threading_macro] = STATE(184),
    [sym_qualified_symbol] = STATE(184),
    [sym__one_form] = STATE(184),
    [sym__paren_sequence] = STATE(184),
    [sym__bracket_sequence] = STATE(184),
    [sym__curly_brace_sequence] = STATE(184),
    [aux_sym_comment_macro_repeat1] = STATE(184),
    [sym_number_long] = ACTIONS(465),
    [sym_number_double] = ACTIONS(465),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(956),
    [anon_sym_COLON] = ACTIONS(169),
    [anon_sym_COLON_COLON] = ACTIONS(171),
    [anon_sym_DASH_GT] = ACTIONS(173),
    [anon_sym_DASH_GT_GT] = ACTIONS(173),
    [anon_sym_as_DASH_GT] = ACTIONS(173),
    [anon_sym_some_DASH_GT] = ACTIONS(173),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(173),
    [anon_sym_cond_DASH_GT] = ACTIONS(173),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(173),
    [sym__symbol_chars] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(183),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(465),
  },
  [217] = {
    [sym_number_long] = ACTIONS(784),
    [sym_number_double] = ACTIONS(784),
    [anon_sym_DQUOTE] = ACTIONS(784),
    [anon_sym_COLON] = ACTIONS(784),
    [anon_sym_COLON_COLON] = ACTIONS(784),
    [anon_sym_DASH_GT] = ACTIONS(784),
    [anon_sym_DASH_GT_GT] = ACTIONS(784),
    [anon_sym_as_DASH_GT] = ACTIONS(784),
    [anon_sym_some_DASH_GT] = ACTIONS(784),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(784),
    [anon_sym_cond_DASH_GT] = ACTIONS(784),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(784),
    [sym__symbol_chars] = ACTIONS(784),
    [anon_sym_LPAREN] = ACTIONS(784),
    [anon_sym_LBRACK] = ACTIONS(784),
    [anon_sym_RBRACK] = ACTIONS(784),
    [anon_sym_LBRACE] = ACTIONS(784),
    [anon_sym_POUND] = ACTIONS(784),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(784),
  },
  [218] = {
    [sym__number] = STATE(223),
    [sym__string] = STATE(223),
    [sym__keyword] = STATE(223),
    [sym__unqualified_keyword] = STATE(223),
    [sym_qualified_keyword] = STATE(223),
    [sym__symbol] = STATE(223),
    [sym_threading_macro] = STATE(223),
    [sym_qualified_symbol] = STATE(223),
    [sym__one_form] = STATE(223),
    [sym__paren_sequence] = STATE(223),
    [sym__bracket_sequence] = STATE(223),
    [sym__curly_brace_sequence] = STATE(223),
    [aux_sym_comment_macro_repeat1] = STATE(223),
    [sym_number_long] = ACTIONS(792),
    [sym_number_double] = ACTIONS(792),
    [anon_sym_DQUOTE] = ACTIONS(383),
    [anon_sym_COLON] = ACTIONS(385),
    [anon_sym_COLON_COLON] = ACTIONS(387),
    [anon_sym_DASH_GT] = ACTIONS(389),
    [anon_sym_DASH_GT_GT] = ACTIONS(389),
    [anon_sym_as_DASH_GT] = ACTIONS(389),
    [anon_sym_some_DASH_GT] = ACTIONS(389),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(389),
    [anon_sym_cond_DASH_GT] = ACTIONS(389),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(389),
    [sym__symbol_chars] = ACTIONS(391),
    [anon_sym_LPAREN] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(395),
    [anon_sym_RBRACK] = ACTIONS(958),
    [anon_sym_LBRACE] = ACTIONS(399),
    [anon_sym_POUND] = ACTIONS(401),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(792),
  },
  [219] = {
    [sym_number_long] = ACTIONS(820),
    [sym_number_double] = ACTIONS(820),
    [anon_sym_DQUOTE] = ACTIONS(820),
    [anon_sym_COLON] = ACTIONS(820),
    [anon_sym_COLON_COLON] = ACTIONS(820),
    [anon_sym_DASH_GT] = ACTIONS(820),
    [anon_sym_DASH_GT_GT] = ACTIONS(820),
    [anon_sym_as_DASH_GT] = ACTIONS(820),
    [anon_sym_some_DASH_GT] = ACTIONS(820),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(820),
    [anon_sym_cond_DASH_GT] = ACTIONS(820),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(820),
    [sym__symbol_chars] = ACTIONS(820),
    [anon_sym_LPAREN] = ACTIONS(820),
    [anon_sym_LBRACK] = ACTIONS(820),
    [anon_sym_RBRACK] = ACTIONS(820),
    [anon_sym_LBRACE] = ACTIONS(820),
    [anon_sym_POUND] = ACTIONS(820),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(820),
  },
  [220] = {
    [sym__number] = STATE(237),
    [sym__string] = STATE(237),
    [sym__keyword] = STATE(237),
    [sym__unqualified_keyword] = STATE(237),
    [sym_qualified_keyword] = STATE(237),
    [sym__symbol] = STATE(237),
    [sym_threading_macro] = STATE(237),
    [sym_qualified_symbol] = STATE(237),
    [sym__one_form] = STATE(237),
    [sym__paren_sequence] = STATE(237),
    [sym__bracket_sequence] = STATE(237),
    [sym__curly_brace_sequence] = STATE(237),
    [aux_sym_comment_macro_repeat1] = STATE(237),
    [sym_number_long] = ACTIONS(824),
    [sym_number_double] = ACTIONS(824),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [anon_sym_COLON] = ACTIONS(407),
    [anon_sym_COLON_COLON] = ACTIONS(409),
    [anon_sym_DASH_GT] = ACTIONS(411),
    [anon_sym_DASH_GT_GT] = ACTIONS(411),
    [anon_sym_as_DASH_GT] = ACTIONS(411),
    [anon_sym_some_DASH_GT] = ACTIONS(411),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(411),
    [anon_sym_cond_DASH_GT] = ACTIONS(411),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(411),
    [sym__symbol_chars] = ACTIONS(413),
    [anon_sym_LPAREN] = ACTIONS(415),
    [anon_sym_LBRACK] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(419),
    [anon_sym_RBRACE] = ACTIONS(960),
    [anon_sym_POUND] = ACTIONS(423),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(824),
  },
  [221] = {
    [sym__number] = STATE(270),
    [sym__string] = STATE(270),
    [sym__keyword] = STATE(270),
    [sym__unqualified_keyword] = STATE(270),
    [sym_qualified_keyword] = STATE(270),
    [sym__symbol] = STATE(270),
    [sym_threading_macro] = STATE(270),
    [sym_qualified_symbol] = STATE(270),
    [sym__one_form] = STATE(270),
    [sym__paren_sequence] = STATE(270),
    [sym__bracket_sequence] = STATE(270),
    [sym__curly_brace_sequence] = STATE(270),
    [aux_sym_comment_macro_repeat1] = STATE(270),
    [sym_number_long] = ACTIONS(962),
    [sym_number_double] = ACTIONS(962),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [anon_sym_COLON] = ACTIONS(407),
    [anon_sym_COLON_COLON] = ACTIONS(409),
    [anon_sym_DASH_GT] = ACTIONS(411),
    [anon_sym_DASH_GT_GT] = ACTIONS(411),
    [anon_sym_as_DASH_GT] = ACTIONS(411),
    [anon_sym_some_DASH_GT] = ACTIONS(411),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(411),
    [anon_sym_cond_DASH_GT] = ACTIONS(411),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(411),
    [sym__symbol_chars] = ACTIONS(413),
    [anon_sym_LPAREN] = ACTIONS(415),
    [anon_sym_LBRACK] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(419),
    [anon_sym_RBRACE] = ACTIONS(960),
    [anon_sym_POUND] = ACTIONS(423),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(962),
  },
  [222] = {
    [ts_builtin_sym_end] = ACTIONS(964),
    [sym_nil] = ACTIONS(966),
    [sym_true] = ACTIONS(966),
    [sym_false] = ACTIONS(966),
    [sym_number_long] = ACTIONS(966),
    [sym_number_double] = ACTIONS(966),
    [anon_sym_BSLASH] = ACTIONS(966),
    [anon_sym_DQUOTE] = ACTIONS(966),
    [anon_sym_POUND_DQUOTE] = ACTIONS(966),
    [anon_sym_SQUOTE] = ACTIONS(966),
    [anon_sym_LPARENquote] = ACTIONS(966),
    [anon_sym_RPAREN] = ACTIONS(966),
    [anon_sym_COLON] = ACTIONS(966),
    [anon_sym_COLON_COLON] = ACTIONS(966),
    [anon_sym_DASH_GT] = ACTIONS(966),
    [anon_sym_DASH_GT_GT] = ACTIONS(966),
    [anon_sym_as_DASH_GT] = ACTIONS(966),
    [anon_sym_some_DASH_GT] = ACTIONS(966),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(966),
    [anon_sym_cond_DASH_GT] = ACTIONS(966),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(966),
    [sym__symbol_chars] = ACTIONS(966),
    [anon_sym_LPAREN] = ACTIONS(966),
    [anon_sym_LBRACK] = ACTIONS(966),
    [anon_sym_RBRACK] = ACTIONS(966),
    [anon_sym_LBRACE] = ACTIONS(966),
    [anon_sym_RBRACE] = ACTIONS(966),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(966),
    [anon_sym_POUND] = ACTIONS(966),
    [anon_sym_POUND_LBRACE] = ACTIONS(966),
    [anon_sym_SEMI] = ACTIONS(966),
    [anon_sym_POUND_BANG] = ACTIONS(966),
    [anon_sym_POUND_] = ACTIONS(966),
    [anon_sym_] = ACTIONS(964),
    [anon_sym_LPARENcomment] = ACTIONS(966),
    [sym_named_function] = ACTIONS(966),
    [sym_shorthand_function] = ACTIONS(966),
  },
  [223] = {
    [sym__number] = STATE(223),
    [sym__string] = STATE(223),
    [sym__keyword] = STATE(223),
    [sym__unqualified_keyword] = STATE(223),
    [sym_qualified_keyword] = STATE(223),
    [sym__symbol] = STATE(223),
    [sym_threading_macro] = STATE(223),
    [sym_qualified_symbol] = STATE(223),
    [sym__one_form] = STATE(223),
    [sym__paren_sequence] = STATE(223),
    [sym__bracket_sequence] = STATE(223),
    [sym__curly_brace_sequence] = STATE(223),
    [aux_sym_comment_macro_repeat1] = STATE(223),
    [sym_number_long] = ACTIONS(968),
    [sym_number_double] = ACTIONS(968),
    [anon_sym_DQUOTE] = ACTIONS(971),
    [anon_sym_COLON] = ACTIONS(974),
    [anon_sym_COLON_COLON] = ACTIONS(977),
    [anon_sym_DASH_GT] = ACTIONS(980),
    [anon_sym_DASH_GT_GT] = ACTIONS(980),
    [anon_sym_as_DASH_GT] = ACTIONS(980),
    [anon_sym_some_DASH_GT] = ACTIONS(980),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(980),
    [anon_sym_cond_DASH_GT] = ACTIONS(980),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(980),
    [sym__symbol_chars] = ACTIONS(983),
    [anon_sym_LPAREN] = ACTIONS(986),
    [anon_sym_LBRACK] = ACTIONS(989),
    [anon_sym_RBRACK] = ACTIONS(867),
    [anon_sym_LBRACE] = ACTIONS(992),
    [anon_sym_POUND] = ACTIONS(995),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(968),
  },
  [224] = {
    [sym_number_long] = ACTIONS(259),
    [sym_number_double] = ACTIONS(259),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [anon_sym_COLON] = ACTIONS(259),
    [anon_sym_COLON_COLON] = ACTIONS(259),
    [anon_sym_DASH_GT] = ACTIONS(259),
    [anon_sym_DASH_GT_GT] = ACTIONS(259),
    [anon_sym_as_DASH_GT] = ACTIONS(259),
    [anon_sym_some_DASH_GT] = ACTIONS(259),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(259),
    [anon_sym_cond_DASH_GT] = ACTIONS(259),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(259),
    [sym__symbol_chars] = ACTIONS(259),
    [anon_sym_LPAREN] = ACTIONS(259),
    [anon_sym_LBRACK] = ACTIONS(259),
    [anon_sym_LBRACE] = ACTIONS(259),
    [anon_sym_RBRACE] = ACTIONS(259),
    [anon_sym_POUND] = ACTIONS(259),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(259),
  },
  [225] = {
    [aux_sym__string_repeat1] = STATE(101),
    [anon_sym_DQUOTE] = ACTIONS(998),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(263),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(263),
  },
  [226] = {
    [sym_number_long] = ACTIONS(285),
    [sym_number_double] = ACTIONS(285),
    [anon_sym_DQUOTE] = ACTIONS(285),
    [anon_sym_COLON] = ACTIONS(285),
    [anon_sym_COLON_COLON] = ACTIONS(285),
    [anon_sym_DASH_GT] = ACTIONS(285),
    [anon_sym_DASH_GT_GT] = ACTIONS(285),
    [anon_sym_as_DASH_GT] = ACTIONS(285),
    [anon_sym_some_DASH_GT] = ACTIONS(285),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(285),
    [anon_sym_cond_DASH_GT] = ACTIONS(285),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(285),
    [sym__symbol_chars] = ACTIONS(285),
    [anon_sym_LPAREN] = ACTIONS(285),
    [anon_sym_LBRACK] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [anon_sym_RBRACE] = ACTIONS(285),
    [anon_sym_POUND] = ACTIONS(285),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(285),
  },
  [227] = {
    [sym_number_long] = ACTIONS(289),
    [sym_number_double] = ACTIONS(289),
    [anon_sym_DQUOTE] = ACTIONS(289),
    [anon_sym_COLON] = ACTIONS(289),
    [anon_sym_COLON_COLON] = ACTIONS(289),
    [anon_sym_SLASH] = ACTIONS(1000),
    [anon_sym_DASH_GT] = ACTIONS(289),
    [anon_sym_DASH_GT_GT] = ACTIONS(289),
    [anon_sym_as_DASH_GT] = ACTIONS(289),
    [anon_sym_some_DASH_GT] = ACTIONS(289),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(289),
    [anon_sym_cond_DASH_GT] = ACTIONS(289),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(289),
    [sym__symbol_chars] = ACTIONS(289),
    [anon_sym_LPAREN] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(289),
    [anon_sym_LBRACE] = ACTIONS(289),
    [anon_sym_RBRACE] = ACTIONS(289),
    [anon_sym_POUND] = ACTIONS(289),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(289),
  },
  [228] = {
    [sym__symbol_chars] = ACTIONS(1002),
  },
  [229] = {
    [sym_number_long] = ACTIONS(760),
    [sym_number_double] = ACTIONS(760),
    [anon_sym_DQUOTE] = ACTIONS(760),
    [anon_sym_COLON] = ACTIONS(760),
    [anon_sym_COLON_COLON] = ACTIONS(760),
    [anon_sym_DASH_GT] = ACTIONS(760),
    [anon_sym_DASH_GT_GT] = ACTIONS(760),
    [anon_sym_as_DASH_GT] = ACTIONS(760),
    [anon_sym_some_DASH_GT] = ACTIONS(760),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(760),
    [anon_sym_cond_DASH_GT] = ACTIONS(760),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(760),
    [sym__symbol_chars] = ACTIONS(760),
    [anon_sym_LPAREN] = ACTIONS(760),
    [anon_sym_LBRACK] = ACTIONS(760),
    [anon_sym_LBRACE] = ACTIONS(760),
    [anon_sym_RBRACE] = ACTIONS(760),
    [anon_sym_POUND] = ACTIONS(760),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(760),
  },
  [230] = {
    [sym__number] = STATE(184),
    [sym__string] = STATE(184),
    [sym__keyword] = STATE(184),
    [sym__unqualified_keyword] = STATE(184),
    [sym_qualified_keyword] = STATE(184),
    [sym__symbol] = STATE(184),
    [sym_threading_macro] = STATE(184),
    [sym_qualified_symbol] = STATE(184),
    [sym__one_form] = STATE(184),
    [sym__paren_sequence] = STATE(184),
    [sym__bracket_sequence] = STATE(184),
    [sym__curly_brace_sequence] = STATE(184),
    [aux_sym_comment_macro_repeat1] = STATE(184),
    [sym_number_long] = ACTIONS(465),
    [sym_number_double] = ACTIONS(465),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(1004),
    [anon_sym_COLON] = ACTIONS(169),
    [anon_sym_COLON_COLON] = ACTIONS(171),
    [anon_sym_DASH_GT] = ACTIONS(173),
    [anon_sym_DASH_GT_GT] = ACTIONS(173),
    [anon_sym_as_DASH_GT] = ACTIONS(173),
    [anon_sym_some_DASH_GT] = ACTIONS(173),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(173),
    [anon_sym_cond_DASH_GT] = ACTIONS(173),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(173),
    [sym__symbol_chars] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(183),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(465),
  },
  [231] = {
    [sym_number_long] = ACTIONS(784),
    [sym_number_double] = ACTIONS(784),
    [anon_sym_DQUOTE] = ACTIONS(784),
    [anon_sym_COLON] = ACTIONS(784),
    [anon_sym_COLON_COLON] = ACTIONS(784),
    [anon_sym_DASH_GT] = ACTIONS(784),
    [anon_sym_DASH_GT_GT] = ACTIONS(784),
    [anon_sym_as_DASH_GT] = ACTIONS(784),
    [anon_sym_some_DASH_GT] = ACTIONS(784),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(784),
    [anon_sym_cond_DASH_GT] = ACTIONS(784),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(784),
    [sym__symbol_chars] = ACTIONS(784),
    [anon_sym_LPAREN] = ACTIONS(784),
    [anon_sym_LBRACK] = ACTIONS(784),
    [anon_sym_LBRACE] = ACTIONS(784),
    [anon_sym_RBRACE] = ACTIONS(784),
    [anon_sym_POUND] = ACTIONS(784),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(784),
  },
  [232] = {
    [sym__number] = STATE(223),
    [sym__string] = STATE(223),
    [sym__keyword] = STATE(223),
    [sym__unqualified_keyword] = STATE(223),
    [sym_qualified_keyword] = STATE(223),
    [sym__symbol] = STATE(223),
    [sym_threading_macro] = STATE(223),
    [sym_qualified_symbol] = STATE(223),
    [sym__one_form] = STATE(223),
    [sym__paren_sequence] = STATE(223),
    [sym__bracket_sequence] = STATE(223),
    [sym__curly_brace_sequence] = STATE(223),
    [aux_sym_comment_macro_repeat1] = STATE(223),
    [sym_number_long] = ACTIONS(792),
    [sym_number_double] = ACTIONS(792),
    [anon_sym_DQUOTE] = ACTIONS(383),
    [anon_sym_COLON] = ACTIONS(385),
    [anon_sym_COLON_COLON] = ACTIONS(387),
    [anon_sym_DASH_GT] = ACTIONS(389),
    [anon_sym_DASH_GT_GT] = ACTIONS(389),
    [anon_sym_as_DASH_GT] = ACTIONS(389),
    [anon_sym_some_DASH_GT] = ACTIONS(389),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(389),
    [anon_sym_cond_DASH_GT] = ACTIONS(389),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(389),
    [sym__symbol_chars] = ACTIONS(391),
    [anon_sym_LPAREN] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(395),
    [anon_sym_RBRACK] = ACTIONS(1006),
    [anon_sym_LBRACE] = ACTIONS(399),
    [anon_sym_POUND] = ACTIONS(401),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(792),
  },
  [233] = {
    [sym_number_long] = ACTIONS(820),
    [sym_number_double] = ACTIONS(820),
    [anon_sym_DQUOTE] = ACTIONS(820),
    [anon_sym_COLON] = ACTIONS(820),
    [anon_sym_COLON_COLON] = ACTIONS(820),
    [anon_sym_DASH_GT] = ACTIONS(820),
    [anon_sym_DASH_GT_GT] = ACTIONS(820),
    [anon_sym_as_DASH_GT] = ACTIONS(820),
    [anon_sym_some_DASH_GT] = ACTIONS(820),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(820),
    [anon_sym_cond_DASH_GT] = ACTIONS(820),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(820),
    [sym__symbol_chars] = ACTIONS(820),
    [anon_sym_LPAREN] = ACTIONS(820),
    [anon_sym_LBRACK] = ACTIONS(820),
    [anon_sym_LBRACE] = ACTIONS(820),
    [anon_sym_RBRACE] = ACTIONS(820),
    [anon_sym_POUND] = ACTIONS(820),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(820),
  },
  [234] = {
    [sym__number] = STATE(237),
    [sym__string] = STATE(237),
    [sym__keyword] = STATE(237),
    [sym__unqualified_keyword] = STATE(237),
    [sym_qualified_keyword] = STATE(237),
    [sym__symbol] = STATE(237),
    [sym_threading_macro] = STATE(237),
    [sym_qualified_symbol] = STATE(237),
    [sym__one_form] = STATE(237),
    [sym__paren_sequence] = STATE(237),
    [sym__bracket_sequence] = STATE(237),
    [sym__curly_brace_sequence] = STATE(237),
    [aux_sym_comment_macro_repeat1] = STATE(237),
    [sym_number_long] = ACTIONS(824),
    [sym_number_double] = ACTIONS(824),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [anon_sym_COLON] = ACTIONS(407),
    [anon_sym_COLON_COLON] = ACTIONS(409),
    [anon_sym_DASH_GT] = ACTIONS(411),
    [anon_sym_DASH_GT_GT] = ACTIONS(411),
    [anon_sym_as_DASH_GT] = ACTIONS(411),
    [anon_sym_some_DASH_GT] = ACTIONS(411),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(411),
    [anon_sym_cond_DASH_GT] = ACTIONS(411),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(411),
    [sym__symbol_chars] = ACTIONS(413),
    [anon_sym_LPAREN] = ACTIONS(415),
    [anon_sym_LBRACK] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(419),
    [anon_sym_RBRACE] = ACTIONS(1008),
    [anon_sym_POUND] = ACTIONS(423),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(824),
  },
  [235] = {
    [sym__number] = STATE(277),
    [sym__string] = STATE(277),
    [sym__keyword] = STATE(277),
    [sym__unqualified_keyword] = STATE(277),
    [sym_qualified_keyword] = STATE(277),
    [sym__symbol] = STATE(277),
    [sym_threading_macro] = STATE(277),
    [sym_qualified_symbol] = STATE(277),
    [sym__one_form] = STATE(277),
    [sym__paren_sequence] = STATE(277),
    [sym__bracket_sequence] = STATE(277),
    [sym__curly_brace_sequence] = STATE(277),
    [aux_sym_comment_macro_repeat1] = STATE(277),
    [sym_number_long] = ACTIONS(1010),
    [sym_number_double] = ACTIONS(1010),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [anon_sym_COLON] = ACTIONS(407),
    [anon_sym_COLON_COLON] = ACTIONS(409),
    [anon_sym_DASH_GT] = ACTIONS(411),
    [anon_sym_DASH_GT_GT] = ACTIONS(411),
    [anon_sym_as_DASH_GT] = ACTIONS(411),
    [anon_sym_some_DASH_GT] = ACTIONS(411),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(411),
    [anon_sym_cond_DASH_GT] = ACTIONS(411),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(411),
    [sym__symbol_chars] = ACTIONS(413),
    [anon_sym_LPAREN] = ACTIONS(415),
    [anon_sym_LBRACK] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(419),
    [anon_sym_RBRACE] = ACTIONS(1008),
    [anon_sym_POUND] = ACTIONS(423),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1010),
  },
  [236] = {
    [ts_builtin_sym_end] = ACTIONS(1012),
    [sym_nil] = ACTIONS(1014),
    [sym_true] = ACTIONS(1014),
    [sym_false] = ACTIONS(1014),
    [sym_number_long] = ACTIONS(1014),
    [sym_number_double] = ACTIONS(1014),
    [anon_sym_BSLASH] = ACTIONS(1014),
    [anon_sym_DQUOTE] = ACTIONS(1014),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1014),
    [anon_sym_SQUOTE] = ACTIONS(1014),
    [anon_sym_LPARENquote] = ACTIONS(1014),
    [anon_sym_RPAREN] = ACTIONS(1014),
    [anon_sym_COLON] = ACTIONS(1014),
    [anon_sym_COLON_COLON] = ACTIONS(1014),
    [anon_sym_DASH_GT] = ACTIONS(1014),
    [anon_sym_DASH_GT_GT] = ACTIONS(1014),
    [anon_sym_as_DASH_GT] = ACTIONS(1014),
    [anon_sym_some_DASH_GT] = ACTIONS(1014),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1014),
    [anon_sym_cond_DASH_GT] = ACTIONS(1014),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1014),
    [sym__symbol_chars] = ACTIONS(1014),
    [anon_sym_LPAREN] = ACTIONS(1014),
    [anon_sym_LBRACK] = ACTIONS(1014),
    [anon_sym_RBRACK] = ACTIONS(1014),
    [anon_sym_LBRACE] = ACTIONS(1014),
    [anon_sym_RBRACE] = ACTIONS(1014),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1014),
    [anon_sym_POUND] = ACTIONS(1014),
    [anon_sym_POUND_LBRACE] = ACTIONS(1014),
    [anon_sym_SEMI] = ACTIONS(1014),
    [anon_sym_POUND_BANG] = ACTIONS(1014),
    [anon_sym_POUND_] = ACTIONS(1014),
    [anon_sym_] = ACTIONS(1012),
    [anon_sym_LPARENcomment] = ACTIONS(1014),
    [sym_named_function] = ACTIONS(1014),
    [sym_shorthand_function] = ACTIONS(1014),
  },
  [237] = {
    [sym__number] = STATE(237),
    [sym__string] = STATE(237),
    [sym__keyword] = STATE(237),
    [sym__unqualified_keyword] = STATE(237),
    [sym_qualified_keyword] = STATE(237),
    [sym__symbol] = STATE(237),
    [sym_threading_macro] = STATE(237),
    [sym_qualified_symbol] = STATE(237),
    [sym__one_form] = STATE(237),
    [sym__paren_sequence] = STATE(237),
    [sym__bracket_sequence] = STATE(237),
    [sym__curly_brace_sequence] = STATE(237),
    [aux_sym_comment_macro_repeat1] = STATE(237),
    [sym_number_long] = ACTIONS(1016),
    [sym_number_double] = ACTIONS(1016),
    [anon_sym_DQUOTE] = ACTIONS(1019),
    [anon_sym_COLON] = ACTIONS(1022),
    [anon_sym_COLON_COLON] = ACTIONS(1025),
    [anon_sym_DASH_GT] = ACTIONS(1028),
    [anon_sym_DASH_GT_GT] = ACTIONS(1028),
    [anon_sym_as_DASH_GT] = ACTIONS(1028),
    [anon_sym_some_DASH_GT] = ACTIONS(1028),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1028),
    [anon_sym_cond_DASH_GT] = ACTIONS(1028),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1028),
    [sym__symbol_chars] = ACTIONS(1031),
    [anon_sym_LPAREN] = ACTIONS(1034),
    [anon_sym_LBRACK] = ACTIONS(1037),
    [anon_sym_LBRACE] = ACTIONS(1040),
    [anon_sym_RBRACE] = ACTIONS(867),
    [anon_sym_POUND] = ACTIONS(1043),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1016),
  },
  [238] = {
    [sym__number] = STATE(237),
    [sym__string] = STATE(237),
    [sym__keyword] = STATE(237),
    [sym__unqualified_keyword] = STATE(237),
    [sym_qualified_keyword] = STATE(237),
    [sym__symbol] = STATE(237),
    [sym_threading_macro] = STATE(237),
    [sym_qualified_symbol] = STATE(237),
    [sym__one_form] = STATE(237),
    [sym__paren_sequence] = STATE(237),
    [sym__bracket_sequence] = STATE(237),
    [sym__curly_brace_sequence] = STATE(237),
    [aux_sym_comment_macro_repeat1] = STATE(237),
    [sym_number_long] = ACTIONS(824),
    [sym_number_double] = ACTIONS(824),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [anon_sym_COLON] = ACTIONS(407),
    [anon_sym_COLON_COLON] = ACTIONS(409),
    [anon_sym_DASH_GT] = ACTIONS(411),
    [anon_sym_DASH_GT_GT] = ACTIONS(411),
    [anon_sym_as_DASH_GT] = ACTIONS(411),
    [anon_sym_some_DASH_GT] = ACTIONS(411),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(411),
    [anon_sym_cond_DASH_GT] = ACTIONS(411),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(411),
    [sym__symbol_chars] = ACTIONS(413),
    [anon_sym_LPAREN] = ACTIONS(415),
    [anon_sym_LBRACK] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(419),
    [anon_sym_RBRACE] = ACTIONS(1046),
    [anon_sym_POUND] = ACTIONS(423),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(824),
  },
  [239] = {
    [aux_sym_ignore_form_repeat1] = STATE(239),
    [ts_builtin_sym_end] = ACTIONS(1048),
    [sym_nil] = ACTIONS(838),
    [sym_true] = ACTIONS(838),
    [sym_false] = ACTIONS(838),
    [sym_number_long] = ACTIONS(838),
    [sym_number_double] = ACTIONS(838),
    [anon_sym_BSLASH] = ACTIONS(838),
    [anon_sym_DQUOTE] = ACTIONS(838),
    [anon_sym_POUND_DQUOTE] = ACTIONS(838),
    [anon_sym_SQUOTE] = ACTIONS(838),
    [anon_sym_LPARENquote] = ACTIONS(838),
    [anon_sym_COLON] = ACTIONS(838),
    [anon_sym_COLON_COLON] = ACTIONS(838),
    [anon_sym_DASH_GT] = ACTIONS(838),
    [anon_sym_DASH_GT_GT] = ACTIONS(838),
    [anon_sym_as_DASH_GT] = ACTIONS(838),
    [anon_sym_some_DASH_GT] = ACTIONS(838),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(838),
    [anon_sym_cond_DASH_GT] = ACTIONS(838),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(838),
    [sym__symbol_chars] = ACTIONS(838),
    [anon_sym_LPAREN] = ACTIONS(838),
    [anon_sym_LBRACK] = ACTIONS(838),
    [anon_sym_LBRACE] = ACTIONS(838),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(838),
    [anon_sym_POUND] = ACTIONS(838),
    [anon_sym_POUND_LBRACE] = ACTIONS(838),
    [anon_sym_SEMI] = ACTIONS(838),
    [anon_sym_POUND_BANG] = ACTIONS(838),
    [anon_sym_POUND_] = ACTIONS(838),
    [anon_sym_] = ACTIONS(1050),
    [anon_sym_LPARENcomment] = ACTIONS(838),
    [sym_named_function] = ACTIONS(838),
    [sym_shorthand_function] = ACTIONS(838),
  },
  [240] = {
    [aux_sym_ignore_form_repeat1] = STATE(239),
    [ts_builtin_sym_end] = ACTIONS(1053),
    [sym_nil] = ACTIONS(1055),
    [sym_true] = ACTIONS(1055),
    [sym_false] = ACTIONS(1055),
    [sym_number_long] = ACTIONS(1055),
    [sym_number_double] = ACTIONS(1055),
    [anon_sym_BSLASH] = ACTIONS(1055),
    [anon_sym_DQUOTE] = ACTIONS(1055),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1055),
    [anon_sym_SQUOTE] = ACTIONS(1055),
    [anon_sym_LPARENquote] = ACTIONS(1055),
    [anon_sym_COLON] = ACTIONS(1055),
    [anon_sym_COLON_COLON] = ACTIONS(1055),
    [anon_sym_DASH_GT] = ACTIONS(1055),
    [anon_sym_DASH_GT_GT] = ACTIONS(1055),
    [anon_sym_as_DASH_GT] = ACTIONS(1055),
    [anon_sym_some_DASH_GT] = ACTIONS(1055),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1055),
    [anon_sym_cond_DASH_GT] = ACTIONS(1055),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1055),
    [sym__symbol_chars] = ACTIONS(1055),
    [anon_sym_LPAREN] = ACTIONS(1055),
    [anon_sym_LBRACK] = ACTIONS(1055),
    [anon_sym_LBRACE] = ACTIONS(1055),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1055),
    [anon_sym_POUND] = ACTIONS(1055),
    [anon_sym_POUND_LBRACE] = ACTIONS(1055),
    [anon_sym_SEMI] = ACTIONS(1055),
    [anon_sym_POUND_BANG] = ACTIONS(1055),
    [anon_sym_POUND_] = ACTIONS(1055),
    [anon_sym_] = ACTIONS(834),
    [anon_sym_LPARENcomment] = ACTIONS(1055),
    [sym_named_function] = ACTIONS(1055),
    [sym_shorthand_function] = ACTIONS(1055),
  },
  [241] = {
    [sym_number_long] = ACTIONS(557),
    [sym_number_double] = ACTIONS(557),
    [anon_sym_DQUOTE] = ACTIONS(557),
    [anon_sym_RPAREN] = ACTIONS(557),
    [anon_sym_COLON] = ACTIONS(557),
    [anon_sym_COLON_COLON] = ACTIONS(557),
    [anon_sym_DASH_GT] = ACTIONS(557),
    [anon_sym_DASH_GT_GT] = ACTIONS(557),
    [anon_sym_as_DASH_GT] = ACTIONS(557),
    [anon_sym_some_DASH_GT] = ACTIONS(557),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(557),
    [anon_sym_cond_DASH_GT] = ACTIONS(557),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(557),
    [sym__symbol_chars] = ACTIONS(557),
    [anon_sym_LPAREN] = ACTIONS(557),
    [anon_sym_LBRACK] = ACTIONS(557),
    [anon_sym_LBRACE] = ACTIONS(557),
    [anon_sym_POUND] = ACTIONS(557),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(557),
  },
  [242] = {
    [sym__keyword_chars] = ACTIONS(1057),
  },
  [243] = {
    [sym_number_long] = ACTIONS(585),
    [sym_number_double] = ACTIONS(585),
    [anon_sym_DQUOTE] = ACTIONS(585),
    [anon_sym_RPAREN] = ACTIONS(585),
    [anon_sym_COLON] = ACTIONS(585),
    [anon_sym_COLON_COLON] = ACTIONS(585),
    [anon_sym_DASH_GT] = ACTIONS(585),
    [anon_sym_DASH_GT_GT] = ACTIONS(585),
    [anon_sym_as_DASH_GT] = ACTIONS(585),
    [anon_sym_some_DASH_GT] = ACTIONS(585),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(585),
    [anon_sym_cond_DASH_GT] = ACTIONS(585),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(585),
    [sym__symbol_chars] = ACTIONS(585),
    [anon_sym_LPAREN] = ACTIONS(585),
    [anon_sym_LBRACK] = ACTIONS(585),
    [anon_sym_LBRACE] = ACTIONS(585),
    [anon_sym_POUND] = ACTIONS(585),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(585),
  },
  [244] = {
    [sym_number_long] = ACTIONS(948),
    [sym_number_double] = ACTIONS(948),
    [anon_sym_DQUOTE] = ACTIONS(948),
    [anon_sym_RPAREN] = ACTIONS(948),
    [anon_sym_COLON] = ACTIONS(948),
    [anon_sym_COLON_COLON] = ACTIONS(948),
    [anon_sym_DASH_GT] = ACTIONS(948),
    [anon_sym_DASH_GT_GT] = ACTIONS(948),
    [anon_sym_as_DASH_GT] = ACTIONS(948),
    [anon_sym_some_DASH_GT] = ACTIONS(948),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(948),
    [anon_sym_cond_DASH_GT] = ACTIONS(948),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(948),
    [sym__symbol_chars] = ACTIONS(948),
    [anon_sym_LPAREN] = ACTIONS(948),
    [anon_sym_LBRACK] = ACTIONS(948),
    [anon_sym_LBRACE] = ACTIONS(948),
    [anon_sym_POUND] = ACTIONS(948),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(948),
  },
  [245] = {
    [sym_number_long] = ACTIONS(966),
    [sym_number_double] = ACTIONS(966),
    [anon_sym_DQUOTE] = ACTIONS(966),
    [anon_sym_RPAREN] = ACTIONS(966),
    [anon_sym_COLON] = ACTIONS(966),
    [anon_sym_COLON_COLON] = ACTIONS(966),
    [anon_sym_DASH_GT] = ACTIONS(966),
    [anon_sym_DASH_GT_GT] = ACTIONS(966),
    [anon_sym_as_DASH_GT] = ACTIONS(966),
    [anon_sym_some_DASH_GT] = ACTIONS(966),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(966),
    [anon_sym_cond_DASH_GT] = ACTIONS(966),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(966),
    [sym__symbol_chars] = ACTIONS(966),
    [anon_sym_LPAREN] = ACTIONS(966),
    [anon_sym_LBRACK] = ACTIONS(966),
    [anon_sym_LBRACE] = ACTIONS(966),
    [anon_sym_POUND] = ACTIONS(966),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(966),
  },
  [246] = {
    [sym_number_long] = ACTIONS(1014),
    [sym_number_double] = ACTIONS(1014),
    [anon_sym_DQUOTE] = ACTIONS(1014),
    [anon_sym_RPAREN] = ACTIONS(1014),
    [anon_sym_COLON] = ACTIONS(1014),
    [anon_sym_COLON_COLON] = ACTIONS(1014),
    [anon_sym_DASH_GT] = ACTIONS(1014),
    [anon_sym_DASH_GT_GT] = ACTIONS(1014),
    [anon_sym_as_DASH_GT] = ACTIONS(1014),
    [anon_sym_some_DASH_GT] = ACTIONS(1014),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1014),
    [anon_sym_cond_DASH_GT] = ACTIONS(1014),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1014),
    [sym__symbol_chars] = ACTIONS(1014),
    [anon_sym_LPAREN] = ACTIONS(1014),
    [anon_sym_LBRACK] = ACTIONS(1014),
    [anon_sym_LBRACE] = ACTIONS(1014),
    [anon_sym_POUND] = ACTIONS(1014),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1014),
  },
  [247] = {
    [sym__number] = STATE(237),
    [sym__string] = STATE(237),
    [sym__keyword] = STATE(237),
    [sym__unqualified_keyword] = STATE(237),
    [sym_qualified_keyword] = STATE(237),
    [sym__symbol] = STATE(237),
    [sym_threading_macro] = STATE(237),
    [sym_qualified_symbol] = STATE(237),
    [sym__one_form] = STATE(237),
    [sym__paren_sequence] = STATE(237),
    [sym__bracket_sequence] = STATE(237),
    [sym__curly_brace_sequence] = STATE(237),
    [aux_sym_comment_macro_repeat1] = STATE(237),
    [sym_number_long] = ACTIONS(824),
    [sym_number_double] = ACTIONS(824),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [anon_sym_COLON] = ACTIONS(407),
    [anon_sym_COLON_COLON] = ACTIONS(409),
    [anon_sym_DASH_GT] = ACTIONS(411),
    [anon_sym_DASH_GT_GT] = ACTIONS(411),
    [anon_sym_as_DASH_GT] = ACTIONS(411),
    [anon_sym_some_DASH_GT] = ACTIONS(411),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(411),
    [anon_sym_cond_DASH_GT] = ACTIONS(411),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(411),
    [sym__symbol_chars] = ACTIONS(413),
    [anon_sym_LPAREN] = ACTIONS(415),
    [anon_sym_LBRACK] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(419),
    [anon_sym_RBRACE] = ACTIONS(1059),
    [anon_sym_POUND] = ACTIONS(423),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(824),
  },
  [248] = {
    [sym__hex_char] = ACTIONS(1061),
  },
  [249] = {
    [aux_sym_ignore_form_repeat1] = STATE(249),
    [anon_sym_RPAREN] = ACTIONS(838),
    [anon_sym_] = ACTIONS(1063),
  },
  [250] = {
    [aux_sym_ignore_form_repeat1] = STATE(249),
    [anon_sym_RPAREN] = ACTIONS(1055),
    [anon_sym_] = ACTIONS(895),
  },
  [251] = {
    [aux_sym_ignore_form_repeat1] = STATE(251),
    [sym_nil] = ACTIONS(838),
    [sym_true] = ACTIONS(838),
    [sym_false] = ACTIONS(838),
    [sym_number_long] = ACTIONS(838),
    [sym_number_double] = ACTIONS(838),
    [anon_sym_BSLASH] = ACTIONS(838),
    [anon_sym_DQUOTE] = ACTIONS(838),
    [anon_sym_POUND_DQUOTE] = ACTIONS(838),
    [anon_sym_SQUOTE] = ACTIONS(838),
    [anon_sym_LPARENquote] = ACTIONS(838),
    [anon_sym_RPAREN] = ACTIONS(838),
    [anon_sym_COLON] = ACTIONS(838),
    [anon_sym_COLON_COLON] = ACTIONS(838),
    [anon_sym_DASH_GT] = ACTIONS(838),
    [anon_sym_DASH_GT_GT] = ACTIONS(838),
    [anon_sym_as_DASH_GT] = ACTIONS(838),
    [anon_sym_some_DASH_GT] = ACTIONS(838),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(838),
    [anon_sym_cond_DASH_GT] = ACTIONS(838),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(838),
    [sym__symbol_chars] = ACTIONS(838),
    [anon_sym_LPAREN] = ACTIONS(838),
    [anon_sym_LBRACK] = ACTIONS(838),
    [anon_sym_LBRACE] = ACTIONS(838),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(838),
    [anon_sym_POUND] = ACTIONS(838),
    [anon_sym_POUND_LBRACE] = ACTIONS(838),
    [anon_sym_SEMI] = ACTIONS(838),
    [anon_sym_POUND_BANG] = ACTIONS(838),
    [anon_sym_POUND_] = ACTIONS(838),
    [anon_sym_] = ACTIONS(1066),
    [anon_sym_LPARENcomment] = ACTIONS(838),
    [sym_named_function] = ACTIONS(838),
    [sym_shorthand_function] = ACTIONS(838),
  },
  [252] = {
    [aux_sym_ignore_form_repeat1] = STATE(251),
    [sym_nil] = ACTIONS(1055),
    [sym_true] = ACTIONS(1055),
    [sym_false] = ACTIONS(1055),
    [sym_number_long] = ACTIONS(1055),
    [sym_number_double] = ACTIONS(1055),
    [anon_sym_BSLASH] = ACTIONS(1055),
    [anon_sym_DQUOTE] = ACTIONS(1055),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1055),
    [anon_sym_SQUOTE] = ACTIONS(1055),
    [anon_sym_LPARENquote] = ACTIONS(1055),
    [anon_sym_RPAREN] = ACTIONS(1055),
    [anon_sym_COLON] = ACTIONS(1055),
    [anon_sym_COLON_COLON] = ACTIONS(1055),
    [anon_sym_DASH_GT] = ACTIONS(1055),
    [anon_sym_DASH_GT_GT] = ACTIONS(1055),
    [anon_sym_as_DASH_GT] = ACTIONS(1055),
    [anon_sym_some_DASH_GT] = ACTIONS(1055),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1055),
    [anon_sym_cond_DASH_GT] = ACTIONS(1055),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1055),
    [sym__symbol_chars] = ACTIONS(1055),
    [anon_sym_LPAREN] = ACTIONS(1055),
    [anon_sym_LBRACK] = ACTIONS(1055),
    [anon_sym_LBRACE] = ACTIONS(1055),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1055),
    [anon_sym_POUND] = ACTIONS(1055),
    [anon_sym_POUND_LBRACE] = ACTIONS(1055),
    [anon_sym_SEMI] = ACTIONS(1055),
    [anon_sym_POUND_BANG] = ACTIONS(1055),
    [anon_sym_POUND_] = ACTIONS(1055),
    [anon_sym_] = ACTIONS(903),
    [anon_sym_LPARENcomment] = ACTIONS(1055),
    [sym_named_function] = ACTIONS(1055),
    [sym_shorthand_function] = ACTIONS(1055),
  },
  [253] = {
    [anon_sym_LPAREN] = ACTIONS(583),
    [anon_sym_LBRACK] = ACTIONS(583),
  },
  [254] = {
    [anon_sym_RPAREN] = ACTIONS(1069),
    [anon_sym_LPAREN] = ACTIONS(1069),
  },
  [255] = {
    [ts_builtin_sym_end] = ACTIONS(1071),
    [sym_nil] = ACTIONS(1073),
    [sym_true] = ACTIONS(1073),
    [sym_false] = ACTIONS(1073),
    [sym_number_long] = ACTIONS(1073),
    [sym_number_double] = ACTIONS(1071),
    [anon_sym_BSLASH] = ACTIONS(1071),
    [anon_sym_DQUOTE] = ACTIONS(1071),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1071),
    [anon_sym_SQUOTE] = ACTIONS(1071),
    [anon_sym_LPARENquote] = ACTIONS(1071),
    [anon_sym_RPAREN] = ACTIONS(1071),
    [anon_sym_COLON] = ACTIONS(1073),
    [anon_sym_COLON_COLON] = ACTIONS(1071),
    [anon_sym_DASH_GT] = ACTIONS(1073),
    [anon_sym_DASH_GT_GT] = ACTIONS(1071),
    [anon_sym_as_DASH_GT] = ACTIONS(1071),
    [anon_sym_some_DASH_GT] = ACTIONS(1073),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1071),
    [anon_sym_cond_DASH_GT] = ACTIONS(1073),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1071),
    [sym__symbol_chars] = ACTIONS(1073),
    [anon_sym_LPAREN] = ACTIONS(1073),
    [anon_sym_LBRACK] = ACTIONS(1071),
    [anon_sym_RBRACK] = ACTIONS(1071),
    [anon_sym_LBRACE] = ACTIONS(1071),
    [anon_sym_RBRACE] = ACTIONS(1071),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1071),
    [anon_sym_POUND] = ACTIONS(1073),
    [anon_sym_POUND_LBRACE] = ACTIONS(1071),
    [anon_sym_SEMI] = ACTIONS(1071),
    [anon_sym_POUND_BANG] = ACTIONS(1071),
    [anon_sym_POUND_] = ACTIONS(1071),
    [anon_sym_LPARENcomment] = ACTIONS(1071),
    [sym_named_function] = ACTIONS(1073),
    [sym_shorthand_function] = ACTIONS(1071),
  },
  [256] = {
    [aux_sym_ignore_form_repeat1] = STATE(256),
    [sym_nil] = ACTIONS(838),
    [sym_true] = ACTIONS(838),
    [sym_false] = ACTIONS(838),
    [sym_number_long] = ACTIONS(838),
    [sym_number_double] = ACTIONS(838),
    [anon_sym_BSLASH] = ACTIONS(838),
    [anon_sym_DQUOTE] = ACTIONS(838),
    [anon_sym_POUND_DQUOTE] = ACTIONS(838),
    [anon_sym_SQUOTE] = ACTIONS(838),
    [anon_sym_LPARENquote] = ACTIONS(838),
    [anon_sym_COLON] = ACTIONS(838),
    [anon_sym_COLON_COLON] = ACTIONS(838),
    [anon_sym_DASH_GT] = ACTIONS(838),
    [anon_sym_DASH_GT_GT] = ACTIONS(838),
    [anon_sym_as_DASH_GT] = ACTIONS(838),
    [anon_sym_some_DASH_GT] = ACTIONS(838),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(838),
    [anon_sym_cond_DASH_GT] = ACTIONS(838),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(838),
    [sym__symbol_chars] = ACTIONS(838),
    [anon_sym_LPAREN] = ACTIONS(838),
    [anon_sym_LBRACK] = ACTIONS(838),
    [anon_sym_RBRACK] = ACTIONS(838),
    [anon_sym_LBRACE] = ACTIONS(838),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(838),
    [anon_sym_POUND] = ACTIONS(838),
    [anon_sym_POUND_LBRACE] = ACTIONS(838),
    [anon_sym_SEMI] = ACTIONS(838),
    [anon_sym_POUND_BANG] = ACTIONS(838),
    [anon_sym_POUND_] = ACTIONS(838),
    [anon_sym_] = ACTIONS(1075),
    [anon_sym_LPARENcomment] = ACTIONS(838),
    [sym_named_function] = ACTIONS(838),
    [sym_shorthand_function] = ACTIONS(838),
  },
  [257] = {
    [aux_sym_ignore_form_repeat1] = STATE(256),
    [sym_nil] = ACTIONS(1055),
    [sym_true] = ACTIONS(1055),
    [sym_false] = ACTIONS(1055),
    [sym_number_long] = ACTIONS(1055),
    [sym_number_double] = ACTIONS(1055),
    [anon_sym_BSLASH] = ACTIONS(1055),
    [anon_sym_DQUOTE] = ACTIONS(1055),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1055),
    [anon_sym_SQUOTE] = ACTIONS(1055),
    [anon_sym_LPARENquote] = ACTIONS(1055),
    [anon_sym_COLON] = ACTIONS(1055),
    [anon_sym_COLON_COLON] = ACTIONS(1055),
    [anon_sym_DASH_GT] = ACTIONS(1055),
    [anon_sym_DASH_GT_GT] = ACTIONS(1055),
    [anon_sym_as_DASH_GT] = ACTIONS(1055),
    [anon_sym_some_DASH_GT] = ACTIONS(1055),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1055),
    [anon_sym_cond_DASH_GT] = ACTIONS(1055),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1055),
    [sym__symbol_chars] = ACTIONS(1055),
    [anon_sym_LPAREN] = ACTIONS(1055),
    [anon_sym_LBRACK] = ACTIONS(1055),
    [anon_sym_RBRACK] = ACTIONS(1055),
    [anon_sym_LBRACE] = ACTIONS(1055),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1055),
    [anon_sym_POUND] = ACTIONS(1055),
    [anon_sym_POUND_LBRACE] = ACTIONS(1055),
    [anon_sym_SEMI] = ACTIONS(1055),
    [anon_sym_POUND_BANG] = ACTIONS(1055),
    [anon_sym_POUND_] = ACTIONS(1055),
    [anon_sym_] = ACTIONS(926),
    [anon_sym_LPARENcomment] = ACTIONS(1055),
    [sym_named_function] = ACTIONS(1055),
    [sym_shorthand_function] = ACTIONS(1055),
  },
  [258] = {
    [aux_sym_ignore_form_repeat1] = STATE(258),
    [sym_nil] = ACTIONS(838),
    [sym_true] = ACTIONS(838),
    [sym_false] = ACTIONS(838),
    [sym_number_long] = ACTIONS(838),
    [sym_number_double] = ACTIONS(838),
    [anon_sym_BSLASH] = ACTIONS(838),
    [anon_sym_DQUOTE] = ACTIONS(838),
    [anon_sym_POUND_DQUOTE] = ACTIONS(838),
    [anon_sym_SQUOTE] = ACTIONS(838),
    [anon_sym_LPARENquote] = ACTIONS(838),
    [anon_sym_COLON] = ACTIONS(838),
    [anon_sym_COLON_COLON] = ACTIONS(838),
    [anon_sym_DASH_GT] = ACTIONS(838),
    [anon_sym_DASH_GT_GT] = ACTIONS(838),
    [anon_sym_as_DASH_GT] = ACTIONS(838),
    [anon_sym_some_DASH_GT] = ACTIONS(838),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(838),
    [anon_sym_cond_DASH_GT] = ACTIONS(838),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(838),
    [sym__symbol_chars] = ACTIONS(838),
    [anon_sym_LPAREN] = ACTIONS(838),
    [anon_sym_LBRACK] = ACTIONS(838),
    [anon_sym_LBRACE] = ACTIONS(838),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(838),
    [anon_sym_POUND] = ACTIONS(838),
    [anon_sym_POUND_LBRACE] = ACTIONS(838),
    [anon_sym_SEMI] = ACTIONS(838),
    [anon_sym_POUND_BANG] = ACTIONS(838),
    [anon_sym_POUND_] = ACTIONS(838),
    [anon_sym_] = ACTIONS(1078),
    [anon_sym_LPARENcomment] = ACTIONS(838),
    [sym_named_function] = ACTIONS(838),
    [sym_shorthand_function] = ACTIONS(838),
  },
  [259] = {
    [aux_sym_ignore_form_repeat1] = STATE(258),
    [sym_nil] = ACTIONS(1055),
    [sym_true] = ACTIONS(1055),
    [sym_false] = ACTIONS(1055),
    [sym_number_long] = ACTIONS(1055),
    [sym_number_double] = ACTIONS(1055),
    [anon_sym_BSLASH] = ACTIONS(1055),
    [anon_sym_DQUOTE] = ACTIONS(1055),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1055),
    [anon_sym_SQUOTE] = ACTIONS(1055),
    [anon_sym_LPARENquote] = ACTIONS(1055),
    [anon_sym_COLON] = ACTIONS(1055),
    [anon_sym_COLON_COLON] = ACTIONS(1055),
    [anon_sym_DASH_GT] = ACTIONS(1055),
    [anon_sym_DASH_GT_GT] = ACTIONS(1055),
    [anon_sym_as_DASH_GT] = ACTIONS(1055),
    [anon_sym_some_DASH_GT] = ACTIONS(1055),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1055),
    [anon_sym_cond_DASH_GT] = ACTIONS(1055),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1055),
    [sym__symbol_chars] = ACTIONS(1055),
    [anon_sym_LPAREN] = ACTIONS(1055),
    [anon_sym_LBRACK] = ACTIONS(1055),
    [anon_sym_LBRACE] = ACTIONS(1055),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1055),
    [anon_sym_POUND] = ACTIONS(1055),
    [anon_sym_POUND_LBRACE] = ACTIONS(1055),
    [anon_sym_SEMI] = ACTIONS(1055),
    [anon_sym_POUND_BANG] = ACTIONS(1055),
    [anon_sym_POUND_] = ACTIONS(1055),
    [anon_sym_] = ACTIONS(930),
    [anon_sym_LPARENcomment] = ACTIONS(1055),
    [sym_named_function] = ACTIONS(1055),
    [sym_shorthand_function] = ACTIONS(1055),
  },
  [260] = {
    [ts_builtin_sym_end] = ACTIONS(1081),
    [sym_nil] = ACTIONS(1083),
    [sym_true] = ACTIONS(1083),
    [sym_false] = ACTIONS(1083),
    [sym_number_long] = ACTIONS(1083),
    [sym_number_double] = ACTIONS(1081),
    [anon_sym_BSLASH] = ACTIONS(1081),
    [anon_sym_DQUOTE] = ACTIONS(1081),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1081),
    [anon_sym_SQUOTE] = ACTIONS(1081),
    [anon_sym_LPARENquote] = ACTIONS(1081),
    [anon_sym_RPAREN] = ACTIONS(1081),
    [anon_sym_COLON] = ACTIONS(1083),
    [anon_sym_COLON_COLON] = ACTIONS(1081),
    [anon_sym_DASH_GT] = ACTIONS(1083),
    [anon_sym_DASH_GT_GT] = ACTIONS(1081),
    [anon_sym_as_DASH_GT] = ACTIONS(1081),
    [anon_sym_some_DASH_GT] = ACTIONS(1083),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1081),
    [anon_sym_cond_DASH_GT] = ACTIONS(1083),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1081),
    [sym__symbol_chars] = ACTIONS(1083),
    [anon_sym_LPAREN] = ACTIONS(1083),
    [anon_sym_LBRACK] = ACTIONS(1081),
    [anon_sym_RBRACK] = ACTIONS(1081),
    [anon_sym_LBRACE] = ACTIONS(1081),
    [anon_sym_RBRACE] = ACTIONS(1081),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1081),
    [anon_sym_POUND] = ACTIONS(1083),
    [anon_sym_POUND_LBRACE] = ACTIONS(1081),
    [anon_sym_SEMI] = ACTIONS(1081),
    [anon_sym_POUND_BANG] = ACTIONS(1081),
    [anon_sym_POUND_] = ACTIONS(1081),
    [anon_sym_LPARENcomment] = ACTIONS(1081),
    [sym_named_function] = ACTIONS(1083),
    [sym_shorthand_function] = ACTIONS(1081),
  },
  [261] = {
    [aux_sym_ignore_form_repeat1] = STATE(261),
    [sym_nil] = ACTIONS(838),
    [sym_true] = ACTIONS(838),
    [sym_false] = ACTIONS(838),
    [sym_number_long] = ACTIONS(838),
    [sym_number_double] = ACTIONS(838),
    [anon_sym_BSLASH] = ACTIONS(838),
    [anon_sym_DQUOTE] = ACTIONS(838),
    [anon_sym_POUND_DQUOTE] = ACTIONS(838),
    [anon_sym_SQUOTE] = ACTIONS(838),
    [anon_sym_LPARENquote] = ACTIONS(838),
    [anon_sym_COLON] = ACTIONS(838),
    [anon_sym_COLON_COLON] = ACTIONS(838),
    [anon_sym_DASH_GT] = ACTIONS(838),
    [anon_sym_DASH_GT_GT] = ACTIONS(838),
    [anon_sym_as_DASH_GT] = ACTIONS(838),
    [anon_sym_some_DASH_GT] = ACTIONS(838),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(838),
    [anon_sym_cond_DASH_GT] = ACTIONS(838),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(838),
    [sym__symbol_chars] = ACTIONS(838),
    [anon_sym_LPAREN] = ACTIONS(838),
    [anon_sym_LBRACK] = ACTIONS(838),
    [anon_sym_LBRACE] = ACTIONS(838),
    [anon_sym_RBRACE] = ACTIONS(838),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(838),
    [anon_sym_POUND] = ACTIONS(838),
    [anon_sym_POUND_LBRACE] = ACTIONS(838),
    [anon_sym_SEMI] = ACTIONS(838),
    [anon_sym_POUND_BANG] = ACTIONS(838),
    [anon_sym_POUND_] = ACTIONS(838),
    [anon_sym_] = ACTIONS(1085),
    [anon_sym_LPARENcomment] = ACTIONS(838),
    [sym_named_function] = ACTIONS(838),
    [sym_shorthand_function] = ACTIONS(838),
  },
  [262] = {
    [aux_sym_ignore_form_repeat1] = STATE(261),
    [sym_nil] = ACTIONS(1055),
    [sym_true] = ACTIONS(1055),
    [sym_false] = ACTIONS(1055),
    [sym_number_long] = ACTIONS(1055),
    [sym_number_double] = ACTIONS(1055),
    [anon_sym_BSLASH] = ACTIONS(1055),
    [anon_sym_DQUOTE] = ACTIONS(1055),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1055),
    [anon_sym_SQUOTE] = ACTIONS(1055),
    [anon_sym_LPARENquote] = ACTIONS(1055),
    [anon_sym_COLON] = ACTIONS(1055),
    [anon_sym_COLON_COLON] = ACTIONS(1055),
    [anon_sym_DASH_GT] = ACTIONS(1055),
    [anon_sym_DASH_GT_GT] = ACTIONS(1055),
    [anon_sym_as_DASH_GT] = ACTIONS(1055),
    [anon_sym_some_DASH_GT] = ACTIONS(1055),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1055),
    [anon_sym_cond_DASH_GT] = ACTIONS(1055),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1055),
    [sym__symbol_chars] = ACTIONS(1055),
    [anon_sym_LPAREN] = ACTIONS(1055),
    [anon_sym_LBRACK] = ACTIONS(1055),
    [anon_sym_LBRACE] = ACTIONS(1055),
    [anon_sym_RBRACE] = ACTIONS(1055),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1055),
    [anon_sym_POUND] = ACTIONS(1055),
    [anon_sym_POUND_LBRACE] = ACTIONS(1055),
    [anon_sym_SEMI] = ACTIONS(1055),
    [anon_sym_POUND_BANG] = ACTIONS(1055),
    [anon_sym_POUND_] = ACTIONS(1055),
    [anon_sym_] = ACTIONS(940),
    [anon_sym_LPARENcomment] = ACTIONS(1055),
    [sym_named_function] = ACTIONS(1055),
    [sym_shorthand_function] = ACTIONS(1055),
  },
  [263] = {
    [ts_builtin_sym_end] = ACTIONS(899),
    [sym_nil] = ACTIONS(901),
    [sym_true] = ACTIONS(901),
    [sym_false] = ACTIONS(901),
    [sym_number_long] = ACTIONS(901),
    [sym_number_double] = ACTIONS(901),
    [anon_sym_BSLASH] = ACTIONS(901),
    [anon_sym_DQUOTE] = ACTIONS(901),
    [anon_sym_POUND_DQUOTE] = ACTIONS(901),
    [anon_sym_SQUOTE] = ACTIONS(901),
    [anon_sym_LPARENquote] = ACTIONS(901),
    [anon_sym_RPAREN] = ACTIONS(901),
    [anon_sym_COLON] = ACTIONS(901),
    [anon_sym_COLON_COLON] = ACTIONS(901),
    [anon_sym_DASH_GT] = ACTIONS(901),
    [anon_sym_DASH_GT_GT] = ACTIONS(901),
    [anon_sym_as_DASH_GT] = ACTIONS(901),
    [anon_sym_some_DASH_GT] = ACTIONS(901),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(901),
    [anon_sym_cond_DASH_GT] = ACTIONS(901),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(901),
    [sym__symbol_chars] = ACTIONS(901),
    [anon_sym_LPAREN] = ACTIONS(901),
    [anon_sym_LBRACK] = ACTIONS(901),
    [anon_sym_RBRACK] = ACTIONS(901),
    [anon_sym_LBRACE] = ACTIONS(901),
    [anon_sym_RBRACE] = ACTIONS(901),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(901),
    [anon_sym_POUND] = ACTIONS(901),
    [anon_sym_POUND_LBRACE] = ACTIONS(901),
    [anon_sym_SEMI] = ACTIONS(901),
    [anon_sym_POUND_BANG] = ACTIONS(901),
    [anon_sym_POUND_] = ACTIONS(901),
    [anon_sym_] = ACTIONS(899),
    [anon_sym_LPARENcomment] = ACTIONS(901),
    [sym_named_function] = ACTIONS(901),
    [sym_shorthand_function] = ACTIONS(901),
  },
  [264] = {
    [sym_number_long] = ACTIONS(557),
    [sym_number_double] = ACTIONS(557),
    [anon_sym_DQUOTE] = ACTIONS(557),
    [anon_sym_COLON] = ACTIONS(557),
    [anon_sym_COLON_COLON] = ACTIONS(557),
    [anon_sym_DASH_GT] = ACTIONS(557),
    [anon_sym_DASH_GT_GT] = ACTIONS(557),
    [anon_sym_as_DASH_GT] = ACTIONS(557),
    [anon_sym_some_DASH_GT] = ACTIONS(557),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(557),
    [anon_sym_cond_DASH_GT] = ACTIONS(557),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(557),
    [sym__symbol_chars] = ACTIONS(557),
    [anon_sym_LPAREN] = ACTIONS(557),
    [anon_sym_LBRACK] = ACTIONS(557),
    [anon_sym_RBRACK] = ACTIONS(557),
    [anon_sym_LBRACE] = ACTIONS(557),
    [anon_sym_POUND] = ACTIONS(557),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(557),
  },
  [265] = {
    [sym__keyword_chars] = ACTIONS(1088),
  },
  [266] = {
    [sym_number_long] = ACTIONS(585),
    [sym_number_double] = ACTIONS(585),
    [anon_sym_DQUOTE] = ACTIONS(585),
    [anon_sym_COLON] = ACTIONS(585),
    [anon_sym_COLON_COLON] = ACTIONS(585),
    [anon_sym_DASH_GT] = ACTIONS(585),
    [anon_sym_DASH_GT_GT] = ACTIONS(585),
    [anon_sym_as_DASH_GT] = ACTIONS(585),
    [anon_sym_some_DASH_GT] = ACTIONS(585),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(585),
    [anon_sym_cond_DASH_GT] = ACTIONS(585),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(585),
    [sym__symbol_chars] = ACTIONS(585),
    [anon_sym_LPAREN] = ACTIONS(585),
    [anon_sym_LBRACK] = ACTIONS(585),
    [anon_sym_RBRACK] = ACTIONS(585),
    [anon_sym_LBRACE] = ACTIONS(585),
    [anon_sym_POUND] = ACTIONS(585),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(585),
  },
  [267] = {
    [sym_number_long] = ACTIONS(948),
    [sym_number_double] = ACTIONS(948),
    [anon_sym_DQUOTE] = ACTIONS(948),
    [anon_sym_COLON] = ACTIONS(948),
    [anon_sym_COLON_COLON] = ACTIONS(948),
    [anon_sym_DASH_GT] = ACTIONS(948),
    [anon_sym_DASH_GT_GT] = ACTIONS(948),
    [anon_sym_as_DASH_GT] = ACTIONS(948),
    [anon_sym_some_DASH_GT] = ACTIONS(948),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(948),
    [anon_sym_cond_DASH_GT] = ACTIONS(948),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(948),
    [sym__symbol_chars] = ACTIONS(948),
    [anon_sym_LPAREN] = ACTIONS(948),
    [anon_sym_LBRACK] = ACTIONS(948),
    [anon_sym_RBRACK] = ACTIONS(948),
    [anon_sym_LBRACE] = ACTIONS(948),
    [anon_sym_POUND] = ACTIONS(948),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(948),
  },
  [268] = {
    [sym_number_long] = ACTIONS(966),
    [sym_number_double] = ACTIONS(966),
    [anon_sym_DQUOTE] = ACTIONS(966),
    [anon_sym_COLON] = ACTIONS(966),
    [anon_sym_COLON_COLON] = ACTIONS(966),
    [anon_sym_DASH_GT] = ACTIONS(966),
    [anon_sym_DASH_GT_GT] = ACTIONS(966),
    [anon_sym_as_DASH_GT] = ACTIONS(966),
    [anon_sym_some_DASH_GT] = ACTIONS(966),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(966),
    [anon_sym_cond_DASH_GT] = ACTIONS(966),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(966),
    [sym__symbol_chars] = ACTIONS(966),
    [anon_sym_LPAREN] = ACTIONS(966),
    [anon_sym_LBRACK] = ACTIONS(966),
    [anon_sym_RBRACK] = ACTIONS(966),
    [anon_sym_LBRACE] = ACTIONS(966),
    [anon_sym_POUND] = ACTIONS(966),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(966),
  },
  [269] = {
    [sym_number_long] = ACTIONS(1014),
    [sym_number_double] = ACTIONS(1014),
    [anon_sym_DQUOTE] = ACTIONS(1014),
    [anon_sym_COLON] = ACTIONS(1014),
    [anon_sym_COLON_COLON] = ACTIONS(1014),
    [anon_sym_DASH_GT] = ACTIONS(1014),
    [anon_sym_DASH_GT_GT] = ACTIONS(1014),
    [anon_sym_as_DASH_GT] = ACTIONS(1014),
    [anon_sym_some_DASH_GT] = ACTIONS(1014),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1014),
    [anon_sym_cond_DASH_GT] = ACTIONS(1014),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1014),
    [sym__symbol_chars] = ACTIONS(1014),
    [anon_sym_LPAREN] = ACTIONS(1014),
    [anon_sym_LBRACK] = ACTIONS(1014),
    [anon_sym_RBRACK] = ACTIONS(1014),
    [anon_sym_LBRACE] = ACTIONS(1014),
    [anon_sym_POUND] = ACTIONS(1014),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1014),
  },
  [270] = {
    [sym__number] = STATE(237),
    [sym__string] = STATE(237),
    [sym__keyword] = STATE(237),
    [sym__unqualified_keyword] = STATE(237),
    [sym_qualified_keyword] = STATE(237),
    [sym__symbol] = STATE(237),
    [sym_threading_macro] = STATE(237),
    [sym_qualified_symbol] = STATE(237),
    [sym__one_form] = STATE(237),
    [sym__paren_sequence] = STATE(237),
    [sym__bracket_sequence] = STATE(237),
    [sym__curly_brace_sequence] = STATE(237),
    [aux_sym_comment_macro_repeat1] = STATE(237),
    [sym_number_long] = ACTIONS(824),
    [sym_number_double] = ACTIONS(824),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [anon_sym_COLON] = ACTIONS(407),
    [anon_sym_COLON_COLON] = ACTIONS(409),
    [anon_sym_DASH_GT] = ACTIONS(411),
    [anon_sym_DASH_GT_GT] = ACTIONS(411),
    [anon_sym_as_DASH_GT] = ACTIONS(411),
    [anon_sym_some_DASH_GT] = ACTIONS(411),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(411),
    [anon_sym_cond_DASH_GT] = ACTIONS(411),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(411),
    [sym__symbol_chars] = ACTIONS(413),
    [anon_sym_LPAREN] = ACTIONS(415),
    [anon_sym_LBRACK] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(419),
    [anon_sym_RBRACE] = ACTIONS(1090),
    [anon_sym_POUND] = ACTIONS(423),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(824),
  },
  [271] = {
    [sym_number_long] = ACTIONS(557),
    [sym_number_double] = ACTIONS(557),
    [anon_sym_DQUOTE] = ACTIONS(557),
    [anon_sym_COLON] = ACTIONS(557),
    [anon_sym_COLON_COLON] = ACTIONS(557),
    [anon_sym_DASH_GT] = ACTIONS(557),
    [anon_sym_DASH_GT_GT] = ACTIONS(557),
    [anon_sym_as_DASH_GT] = ACTIONS(557),
    [anon_sym_some_DASH_GT] = ACTIONS(557),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(557),
    [anon_sym_cond_DASH_GT] = ACTIONS(557),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(557),
    [sym__symbol_chars] = ACTIONS(557),
    [anon_sym_LPAREN] = ACTIONS(557),
    [anon_sym_LBRACK] = ACTIONS(557),
    [anon_sym_LBRACE] = ACTIONS(557),
    [anon_sym_RBRACE] = ACTIONS(557),
    [anon_sym_POUND] = ACTIONS(557),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(557),
  },
  [272] = {
    [sym__keyword_chars] = ACTIONS(1092),
  },
  [273] = {
    [sym_number_long] = ACTIONS(585),
    [sym_number_double] = ACTIONS(585),
    [anon_sym_DQUOTE] = ACTIONS(585),
    [anon_sym_COLON] = ACTIONS(585),
    [anon_sym_COLON_COLON] = ACTIONS(585),
    [anon_sym_DASH_GT] = ACTIONS(585),
    [anon_sym_DASH_GT_GT] = ACTIONS(585),
    [anon_sym_as_DASH_GT] = ACTIONS(585),
    [anon_sym_some_DASH_GT] = ACTIONS(585),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(585),
    [anon_sym_cond_DASH_GT] = ACTIONS(585),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(585),
    [sym__symbol_chars] = ACTIONS(585),
    [anon_sym_LPAREN] = ACTIONS(585),
    [anon_sym_LBRACK] = ACTIONS(585),
    [anon_sym_LBRACE] = ACTIONS(585),
    [anon_sym_RBRACE] = ACTIONS(585),
    [anon_sym_POUND] = ACTIONS(585),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(585),
  },
  [274] = {
    [sym_number_long] = ACTIONS(948),
    [sym_number_double] = ACTIONS(948),
    [anon_sym_DQUOTE] = ACTIONS(948),
    [anon_sym_COLON] = ACTIONS(948),
    [anon_sym_COLON_COLON] = ACTIONS(948),
    [anon_sym_DASH_GT] = ACTIONS(948),
    [anon_sym_DASH_GT_GT] = ACTIONS(948),
    [anon_sym_as_DASH_GT] = ACTIONS(948),
    [anon_sym_some_DASH_GT] = ACTIONS(948),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(948),
    [anon_sym_cond_DASH_GT] = ACTIONS(948),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(948),
    [sym__symbol_chars] = ACTIONS(948),
    [anon_sym_LPAREN] = ACTIONS(948),
    [anon_sym_LBRACK] = ACTIONS(948),
    [anon_sym_LBRACE] = ACTIONS(948),
    [anon_sym_RBRACE] = ACTIONS(948),
    [anon_sym_POUND] = ACTIONS(948),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(948),
  },
  [275] = {
    [sym_number_long] = ACTIONS(966),
    [sym_number_double] = ACTIONS(966),
    [anon_sym_DQUOTE] = ACTIONS(966),
    [anon_sym_COLON] = ACTIONS(966),
    [anon_sym_COLON_COLON] = ACTIONS(966),
    [anon_sym_DASH_GT] = ACTIONS(966),
    [anon_sym_DASH_GT_GT] = ACTIONS(966),
    [anon_sym_as_DASH_GT] = ACTIONS(966),
    [anon_sym_some_DASH_GT] = ACTIONS(966),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(966),
    [anon_sym_cond_DASH_GT] = ACTIONS(966),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(966),
    [sym__symbol_chars] = ACTIONS(966),
    [anon_sym_LPAREN] = ACTIONS(966),
    [anon_sym_LBRACK] = ACTIONS(966),
    [anon_sym_LBRACE] = ACTIONS(966),
    [anon_sym_RBRACE] = ACTIONS(966),
    [anon_sym_POUND] = ACTIONS(966),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(966),
  },
  [276] = {
    [sym_number_long] = ACTIONS(1014),
    [sym_number_double] = ACTIONS(1014),
    [anon_sym_DQUOTE] = ACTIONS(1014),
    [anon_sym_COLON] = ACTIONS(1014),
    [anon_sym_COLON_COLON] = ACTIONS(1014),
    [anon_sym_DASH_GT] = ACTIONS(1014),
    [anon_sym_DASH_GT_GT] = ACTIONS(1014),
    [anon_sym_as_DASH_GT] = ACTIONS(1014),
    [anon_sym_some_DASH_GT] = ACTIONS(1014),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1014),
    [anon_sym_cond_DASH_GT] = ACTIONS(1014),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1014),
    [sym__symbol_chars] = ACTIONS(1014),
    [anon_sym_LPAREN] = ACTIONS(1014),
    [anon_sym_LBRACK] = ACTIONS(1014),
    [anon_sym_LBRACE] = ACTIONS(1014),
    [anon_sym_RBRACE] = ACTIONS(1014),
    [anon_sym_POUND] = ACTIONS(1014),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1014),
  },
  [277] = {
    [sym__number] = STATE(237),
    [sym__string] = STATE(237),
    [sym__keyword] = STATE(237),
    [sym__unqualified_keyword] = STATE(237),
    [sym_qualified_keyword] = STATE(237),
    [sym__symbol] = STATE(237),
    [sym_threading_macro] = STATE(237),
    [sym_qualified_symbol] = STATE(237),
    [sym__one_form] = STATE(237),
    [sym__paren_sequence] = STATE(237),
    [sym__bracket_sequence] = STATE(237),
    [sym__curly_brace_sequence] = STATE(237),
    [aux_sym_comment_macro_repeat1] = STATE(237),
    [sym_number_long] = ACTIONS(824),
    [sym_number_double] = ACTIONS(824),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [anon_sym_COLON] = ACTIONS(407),
    [anon_sym_COLON_COLON] = ACTIONS(409),
    [anon_sym_DASH_GT] = ACTIONS(411),
    [anon_sym_DASH_GT_GT] = ACTIONS(411),
    [anon_sym_as_DASH_GT] = ACTIONS(411),
    [anon_sym_some_DASH_GT] = ACTIONS(411),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(411),
    [anon_sym_cond_DASH_GT] = ACTIONS(411),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(411),
    [sym__symbol_chars] = ACTIONS(413),
    [anon_sym_LPAREN] = ACTIONS(415),
    [anon_sym_LBRACK] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(419),
    [anon_sym_RBRACE] = ACTIONS(1094),
    [anon_sym_POUND] = ACTIONS(423),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(824),
  },
  [278] = {
    [ts_builtin_sym_end] = ACTIONS(1096),
    [sym_nil] = ACTIONS(1098),
    [sym_true] = ACTIONS(1098),
    [sym_false] = ACTIONS(1098),
    [sym_number_long] = ACTIONS(1098),
    [sym_number_double] = ACTIONS(1098),
    [anon_sym_BSLASH] = ACTIONS(1098),
    [anon_sym_DQUOTE] = ACTIONS(1098),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1098),
    [anon_sym_SQUOTE] = ACTIONS(1098),
    [anon_sym_LPARENquote] = ACTIONS(1098),
    [anon_sym_RPAREN] = ACTIONS(1098),
    [anon_sym_COLON] = ACTIONS(1098),
    [anon_sym_COLON_COLON] = ACTIONS(1098),
    [anon_sym_DASH_GT] = ACTIONS(1098),
    [anon_sym_DASH_GT_GT] = ACTIONS(1098),
    [anon_sym_as_DASH_GT] = ACTIONS(1098),
    [anon_sym_some_DASH_GT] = ACTIONS(1098),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1098),
    [anon_sym_cond_DASH_GT] = ACTIONS(1098),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1098),
    [sym__symbol_chars] = ACTIONS(1098),
    [anon_sym_LPAREN] = ACTIONS(1098),
    [anon_sym_LBRACK] = ACTIONS(1098),
    [anon_sym_RBRACK] = ACTIONS(1098),
    [anon_sym_LBRACE] = ACTIONS(1098),
    [anon_sym_RBRACE] = ACTIONS(1098),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1098),
    [anon_sym_POUND] = ACTIONS(1098),
    [anon_sym_POUND_LBRACE] = ACTIONS(1098),
    [anon_sym_SEMI] = ACTIONS(1098),
    [anon_sym_POUND_BANG] = ACTIONS(1098),
    [anon_sym_POUND_] = ACTIONS(1098),
    [anon_sym_] = ACTIONS(1096),
    [anon_sym_LPARENcomment] = ACTIONS(1098),
    [sym_named_function] = ACTIONS(1098),
    [sym_shorthand_function] = ACTIONS(1098),
  },
  [279] = {
    [sym_number_long] = ACTIONS(901),
    [sym_number_double] = ACTIONS(901),
    [anon_sym_DQUOTE] = ACTIONS(901),
    [anon_sym_RPAREN] = ACTIONS(901),
    [anon_sym_COLON] = ACTIONS(901),
    [anon_sym_COLON_COLON] = ACTIONS(901),
    [anon_sym_DASH_GT] = ACTIONS(901),
    [anon_sym_DASH_GT_GT] = ACTIONS(901),
    [anon_sym_as_DASH_GT] = ACTIONS(901),
    [anon_sym_some_DASH_GT] = ACTIONS(901),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(901),
    [anon_sym_cond_DASH_GT] = ACTIONS(901),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(901),
    [sym__symbol_chars] = ACTIONS(901),
    [anon_sym_LPAREN] = ACTIONS(901),
    [anon_sym_LBRACK] = ACTIONS(901),
    [anon_sym_LBRACE] = ACTIONS(901),
    [anon_sym_POUND] = ACTIONS(901),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(901),
  },
  [280] = {
    [sym_number_long] = ACTIONS(1098),
    [sym_number_double] = ACTIONS(1098),
    [anon_sym_DQUOTE] = ACTIONS(1098),
    [anon_sym_RPAREN] = ACTIONS(1098),
    [anon_sym_COLON] = ACTIONS(1098),
    [anon_sym_COLON_COLON] = ACTIONS(1098),
    [anon_sym_DASH_GT] = ACTIONS(1098),
    [anon_sym_DASH_GT_GT] = ACTIONS(1098),
    [anon_sym_as_DASH_GT] = ACTIONS(1098),
    [anon_sym_some_DASH_GT] = ACTIONS(1098),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1098),
    [anon_sym_cond_DASH_GT] = ACTIONS(1098),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1098),
    [sym__symbol_chars] = ACTIONS(1098),
    [anon_sym_LPAREN] = ACTIONS(1098),
    [anon_sym_LBRACK] = ACTIONS(1098),
    [anon_sym_LBRACE] = ACTIONS(1098),
    [anon_sym_POUND] = ACTIONS(1098),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1098),
  },
  [281] = {
    [ts_builtin_sym_end] = ACTIONS(1100),
    [sym_nil] = ACTIONS(1102),
    [sym_true] = ACTIONS(1102),
    [sym_false] = ACTIONS(1102),
    [sym_number_long] = ACTIONS(1102),
    [sym_number_double] = ACTIONS(1100),
    [anon_sym_BSLASH] = ACTIONS(1100),
    [anon_sym_DQUOTE] = ACTIONS(1100),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1100),
    [anon_sym_SQUOTE] = ACTIONS(1100),
    [anon_sym_LPARENquote] = ACTIONS(1100),
    [anon_sym_RPAREN] = ACTIONS(1100),
    [anon_sym_COLON] = ACTIONS(1102),
    [anon_sym_COLON_COLON] = ACTIONS(1100),
    [anon_sym_DASH_GT] = ACTIONS(1102),
    [anon_sym_DASH_GT_GT] = ACTIONS(1100),
    [anon_sym_as_DASH_GT] = ACTIONS(1100),
    [anon_sym_some_DASH_GT] = ACTIONS(1102),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1100),
    [anon_sym_cond_DASH_GT] = ACTIONS(1102),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1100),
    [sym__symbol_chars] = ACTIONS(1102),
    [anon_sym_LPAREN] = ACTIONS(1102),
    [anon_sym_LBRACK] = ACTIONS(1100),
    [anon_sym_RBRACK] = ACTIONS(1100),
    [anon_sym_LBRACE] = ACTIONS(1100),
    [anon_sym_RBRACE] = ACTIONS(1100),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1100),
    [anon_sym_POUND] = ACTIONS(1102),
    [anon_sym_POUND_LBRACE] = ACTIONS(1100),
    [anon_sym_SEMI] = ACTIONS(1100),
    [anon_sym_POUND_BANG] = ACTIONS(1100),
    [anon_sym_POUND_] = ACTIONS(1100),
    [anon_sym_LPARENcomment] = ACTIONS(1100),
    [sym_named_function] = ACTIONS(1102),
    [sym_shorthand_function] = ACTIONS(1100),
  },
  [282] = {
    [sym_number_long] = ACTIONS(901),
    [sym_number_double] = ACTIONS(901),
    [anon_sym_DQUOTE] = ACTIONS(901),
    [anon_sym_COLON] = ACTIONS(901),
    [anon_sym_COLON_COLON] = ACTIONS(901),
    [anon_sym_DASH_GT] = ACTIONS(901),
    [anon_sym_DASH_GT_GT] = ACTIONS(901),
    [anon_sym_as_DASH_GT] = ACTIONS(901),
    [anon_sym_some_DASH_GT] = ACTIONS(901),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(901),
    [anon_sym_cond_DASH_GT] = ACTIONS(901),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(901),
    [sym__symbol_chars] = ACTIONS(901),
    [anon_sym_LPAREN] = ACTIONS(901),
    [anon_sym_LBRACK] = ACTIONS(901),
    [anon_sym_RBRACK] = ACTIONS(901),
    [anon_sym_LBRACE] = ACTIONS(901),
    [anon_sym_POUND] = ACTIONS(901),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(901),
  },
  [283] = {
    [sym_number_long] = ACTIONS(1098),
    [sym_number_double] = ACTIONS(1098),
    [anon_sym_DQUOTE] = ACTIONS(1098),
    [anon_sym_COLON] = ACTIONS(1098),
    [anon_sym_COLON_COLON] = ACTIONS(1098),
    [anon_sym_DASH_GT] = ACTIONS(1098),
    [anon_sym_DASH_GT_GT] = ACTIONS(1098),
    [anon_sym_as_DASH_GT] = ACTIONS(1098),
    [anon_sym_some_DASH_GT] = ACTIONS(1098),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1098),
    [anon_sym_cond_DASH_GT] = ACTIONS(1098),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1098),
    [sym__symbol_chars] = ACTIONS(1098),
    [anon_sym_LPAREN] = ACTIONS(1098),
    [anon_sym_LBRACK] = ACTIONS(1098),
    [anon_sym_RBRACK] = ACTIONS(1098),
    [anon_sym_LBRACE] = ACTIONS(1098),
    [anon_sym_POUND] = ACTIONS(1098),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1098),
  },
  [284] = {
    [sym_number_long] = ACTIONS(901),
    [sym_number_double] = ACTIONS(901),
    [anon_sym_DQUOTE] = ACTIONS(901),
    [anon_sym_COLON] = ACTIONS(901),
    [anon_sym_COLON_COLON] = ACTIONS(901),
    [anon_sym_DASH_GT] = ACTIONS(901),
    [anon_sym_DASH_GT_GT] = ACTIONS(901),
    [anon_sym_as_DASH_GT] = ACTIONS(901),
    [anon_sym_some_DASH_GT] = ACTIONS(901),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(901),
    [anon_sym_cond_DASH_GT] = ACTIONS(901),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(901),
    [sym__symbol_chars] = ACTIONS(901),
    [anon_sym_LPAREN] = ACTIONS(901),
    [anon_sym_LBRACK] = ACTIONS(901),
    [anon_sym_LBRACE] = ACTIONS(901),
    [anon_sym_RBRACE] = ACTIONS(901),
    [anon_sym_POUND] = ACTIONS(901),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(901),
  },
  [285] = {
    [sym_number_long] = ACTIONS(1098),
    [sym_number_double] = ACTIONS(1098),
    [anon_sym_DQUOTE] = ACTIONS(1098),
    [anon_sym_COLON] = ACTIONS(1098),
    [anon_sym_COLON_COLON] = ACTIONS(1098),
    [anon_sym_DASH_GT] = ACTIONS(1098),
    [anon_sym_DASH_GT_GT] = ACTIONS(1098),
    [anon_sym_as_DASH_GT] = ACTIONS(1098),
    [anon_sym_some_DASH_GT] = ACTIONS(1098),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1098),
    [anon_sym_cond_DASH_GT] = ACTIONS(1098),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1098),
    [sym__symbol_chars] = ACTIONS(1098),
    [anon_sym_LPAREN] = ACTIONS(1098),
    [anon_sym_LBRACK] = ACTIONS(1098),
    [anon_sym_LBRACE] = ACTIONS(1098),
    [anon_sym_RBRACE] = ACTIONS(1098),
    [anon_sym_POUND] = ACTIONS(1098),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1098),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(37),
  [9] = {.count = 1, .reusable = false}, SHIFT(2),
  [11] = {.count = 1, .reusable = false}, SHIFT(24),
  [13] = {.count = 1, .reusable = true}, SHIFT(24),
  [15] = {.count = 1, .reusable = true}, SHIFT(3),
  [17] = {.count = 1, .reusable = true}, SHIFT(4),
  [19] = {.count = 1, .reusable = true}, SHIFT(5),
  [21] = {.count = 1, .reusable = true}, SHIFT(6),
  [23] = {.count = 1, .reusable = true}, SHIFT(7),
  [25] = {.count = 1, .reusable = false}, SHIFT(8),
  [27] = {.count = 1, .reusable = true}, SHIFT(9),
  [29] = {.count = 1, .reusable = false}, SHIFT(10),
  [31] = {.count = 1, .reusable = true}, SHIFT(10),
  [33] = {.count = 1, .reusable = false}, SHIFT(11),
  [35] = {.count = 1, .reusable = false}, SHIFT(12),
  [37] = {.count = 1, .reusable = true}, SHIFT(13),
  [39] = {.count = 1, .reusable = true}, SHIFT(14),
  [41] = {.count = 1, .reusable = true}, SHIFT(15),
  [43] = {.count = 1, .reusable = false}, SHIFT(16),
  [45] = {.count = 1, .reusable = true}, SHIFT(17),
  [47] = {.count = 1, .reusable = true}, SHIFT(18),
  [49] = {.count = 1, .reusable = true}, SHIFT(19),
  [51] = {.count = 1, .reusable = true}, SHIFT(20),
  [53] = {.count = 1, .reusable = true}, SHIFT(21),
  [55] = {.count = 1, .reusable = false}, SHIFT(22),
  [57] = {.count = 1, .reusable = true}, SHIFT(22),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [61] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 1),
  [63] = {.count = 1, .reusable = false}, SHIFT(38),
  [65] = {.count = 1, .reusable = false}, SHIFT(39),
  [67] = {.count = 1, .reusable = false}, SHIFT(40),
  [69] = {.count = 1, .reusable = false}, SHIFT(41),
  [71] = {.count = 1, .reusable = false}, SHIFT(42),
  [73] = {.count = 1, .reusable = false}, SHIFT(43),
  [75] = {.count = 1, .reusable = false}, SHIFT(44),
  [77] = {.count = 1, .reusable = false}, SHIFT(45),
  [79] = {.count = 1, .reusable = false}, SHIFT(48),
  [81] = {.count = 1, .reusable = true}, SHIFT(46),
  [83] = {.count = 1, .reusable = true}, SHIFT(47),
  [85] = {.count = 1, .reusable = true}, SHIFT(49),
  [87] = {.count = 1, .reusable = true}, SHIFT(50),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_threading_macro, 1),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym_threading_macro, 1),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym__symbol, 1),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym__symbol, 1),
  [97] = {.count = 1, .reusable = true}, SHIFT(51),
  [99] = {.count = 1, .reusable = false}, SHIFT(56),
  [101] = {.count = 1, .reusable = true}, SHIFT(52),
  [103] = {.count = 1, .reusable = true}, SHIFT(53),
  [105] = {.count = 1, .reusable = true}, SHIFT(54),
  [107] = {.count = 1, .reusable = false}, SHIFT(55),
  [109] = {.count = 1, .reusable = false}, SHIFT(60),
  [111] = {.count = 1, .reusable = true}, SHIFT(57),
  [113] = {.count = 1, .reusable = true}, SHIFT(58),
  [115] = {.count = 1, .reusable = true}, SHIFT(59),
  [117] = {.count = 1, .reusable = false}, SHIFT(64),
  [119] = {.count = 1, .reusable = true}, SHIFT(61),
  [121] = {.count = 1, .reusable = true}, SHIFT(62),
  [123] = {.count = 1, .reusable = true}, SHIFT(63),
  [125] = {.count = 1, .reusable = true}, SHIFT(66),
  [127] = {.count = 1, .reusable = true}, SHIFT(68),
  [129] = {.count = 1, .reusable = false}, SHIFT(72),
  [131] = {.count = 1, .reusable = true}, SHIFT(69),
  [133] = {.count = 1, .reusable = true}, SHIFT(70),
  [135] = {.count = 1, .reusable = true}, SHIFT(71),
  [137] = {.count = 1, .reusable = false}, SHIFT(73),
  [139] = {.count = 1, .reusable = false}, SHIFT(74),
  [141] = {.count = 1, .reusable = false}, SHIFT(84),
  [143] = {.count = 1, .reusable = false}, SHIFT(75),
  [145] = {.count = 1, .reusable = false}, SHIFT(76),
  [147] = {.count = 1, .reusable = false}, SHIFT(77),
  [149] = {.count = 1, .reusable = false}, SHIFT(78),
  [151] = {.count = 1, .reusable = false}, SHIFT(79),
  [153] = {.count = 1, .reusable = false}, SHIFT(80),
  [155] = {.count = 1, .reusable = false}, SHIFT(81),
  [157] = {.count = 1, .reusable = false}, SHIFT(82),
  [159] = {.count = 1, .reusable = false}, SHIFT(83),
  [161] = {.count = 1, .reusable = false}, SHIFT(85),
  [163] = {.count = 1, .reusable = false}, SHIFT(96),
  [165] = {.count = 1, .reusable = false}, SHIFT(86),
  [167] = {.count = 1, .reusable = false}, SHIFT(87),
  [169] = {.count = 1, .reusable = false}, SHIFT(88),
  [171] = {.count = 1, .reusable = false}, SHIFT(89),
  [173] = {.count = 1, .reusable = false}, SHIFT(90),
  [175] = {.count = 1, .reusable = false}, SHIFT(91),
  [177] = {.count = 1, .reusable = false}, SHIFT(92),
  [179] = {.count = 1, .reusable = false}, SHIFT(93),
  [181] = {.count = 1, .reusable = false}, SHIFT(94),
  [183] = {.count = 1, .reusable = false}, SHIFT(95),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_function, 1),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym_function, 1),
  [189] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_number, 1),
  [193] = {.count = 1, .reusable = false}, REDUCE(sym_number, 1),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_character, 1),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym_character, 1),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [201] = {.count = 1, .reusable = false}, REDUCE(sym_string, 1),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_regex, 1),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym_regex, 1),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_quote, 1),
  [209] = {.count = 1, .reusable = false}, REDUCE(sym_quote, 1),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym_keyword, 1),
  [213] = {.count = 1, .reusable = false}, REDUCE(sym_keyword, 1),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_symbol, 1),
  [217] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 1),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_list, 1),
  [221] = {.count = 1, .reusable = false}, REDUCE(sym_list, 1),
  [223] = {.count = 1, .reusable = true}, REDUCE(sym_vector, 1),
  [225] = {.count = 1, .reusable = false}, REDUCE(sym_vector, 1),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map, 1),
  [229] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map, 1),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_set, 1),
  [233] = {.count = 1, .reusable = false}, REDUCE(sym_set, 1),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [237] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 1),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_special_form, 1),
  [241] = {.count = 1, .reusable = false}, REDUCE(sym_special_form, 1),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [245] = {.count = 1, .reusable = false}, SHIFT(97),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym__character, 2),
  [249] = {.count = 1, .reusable = false}, REDUCE(sym__character, 2),
  [251] = {.count = 1, .reusable = true}, SHIFT(98),
  [253] = {.count = 1, .reusable = true}, SHIFT(99),
  [255] = {.count = 1, .reusable = false}, SHIFT(99),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym__string, 2),
  [259] = {.count = 1, .reusable = false}, REDUCE(sym__string, 2),
  [261] = {.count = 1, .reusable = false}, SHIFT(100),
  [263] = {.count = 1, .reusable = false}, SHIFT(101),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym__regex, 2),
  [267] = {.count = 1, .reusable = false}, REDUCE(sym__regex, 2),
  [269] = {.count = 1, .reusable = false}, SHIFT(102),
  [271] = {.count = 1, .reusable = false}, SHIFT(103),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym__quote, 2),
  [275] = {.count = 1, .reusable = false}, REDUCE(sym__quote, 2),
  [277] = {.count = 1, .reusable = false}, SHIFT(104),
  [279] = {.count = 1, .reusable = false}, SHIFT(105),
  [281] = {.count = 1, .reusable = true}, SHIFT(106),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym__unqualified_keyword, 2),
  [285] = {.count = 1, .reusable = false}, REDUCE(sym__unqualified_keyword, 2),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_keyword, 2),
  [289] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_keyword, 2),
  [291] = {.count = 1, .reusable = true}, SHIFT(107),
  [293] = {.count = 1, .reusable = true}, SHIFT(108),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym__list, 2),
  [297] = {.count = 1, .reusable = false}, REDUCE(sym__list, 2),
  [299] = {.count = 1, .reusable = false}, SHIFT(109),
  [301] = {.count = 1, .reusable = false}, SHIFT(110),
  [303] = {.count = 1, .reusable = false}, SHIFT(111),
  [305] = {.count = 1, .reusable = true}, SHIFT(111),
  [307] = {.count = 1, .reusable = false}, SHIFT(112),
  [309] = {.count = 1, .reusable = true}, SHIFT(113),
  [311] = {.count = 1, .reusable = false}, SHIFT(122),
  [313] = {.count = 1, .reusable = true}, SHIFT(121),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym__vector, 2),
  [317] = {.count = 1, .reusable = false}, REDUCE(sym__vector, 2),
  [319] = {.count = 1, .reusable = false}, SHIFT(123),
  [321] = {.count = 1, .reusable = false}, SHIFT(124),
  [323] = {.count = 1, .reusable = false}, SHIFT(126),
  [325] = {.count = 1, .reusable = true}, SHIFT(125),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym__hash_map, 2),
  [329] = {.count = 1, .reusable = false}, REDUCE(sym__hash_map, 2),
  [331] = {.count = 1, .reusable = false}, SHIFT(127),
  [333] = {.count = 1, .reusable = false}, SHIFT(128),
  [335] = {.count = 1, .reusable = false}, SHIFT(129),
  [337] = {.count = 1, .reusable = true}, SHIFT(130),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 2),
  [341] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 2),
  [343] = {.count = 1, .reusable = true}, SHIFT(132),
  [345] = {.count = 1, .reusable = true}, SHIFT(133),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym__set, 2),
  [349] = {.count = 1, .reusable = false}, REDUCE(sym__set, 2),
  [351] = {.count = 1, .reusable = false}, SHIFT(134),
  [353] = {.count = 1, .reusable = false}, SHIFT(135),
  [355] = {.count = 1, .reusable = false}, SHIFT(137),
  [357] = {.count = 1, .reusable = true}, SHIFT(136),
  [359] = {.count = 1, .reusable = true}, REDUCE(sym_semicolon, 2),
  [361] = {.count = 1, .reusable = false}, REDUCE(sym_semicolon, 2),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym_shebang_line, 2),
  [365] = {.count = 1, .reusable = false}, REDUCE(sym_shebang_line, 2),
  [367] = {.count = 1, .reusable = false}, SHIFT(138),
  [369] = {.count = 1, .reusable = false}, SHIFT(139),
  [371] = {.count = 1, .reusable = true}, SHIFT(140),
  [373] = {.count = 1, .reusable = true}, SHIFT(141),
  [375] = {.count = 1, .reusable = false}, SHIFT(142),
  [377] = {.count = 1, .reusable = false}, SHIFT(144),
  [379] = {.count = 1, .reusable = false}, SHIFT(143),
  [381] = {.count = 1, .reusable = false}, SHIFT(155),
  [383] = {.count = 1, .reusable = false}, SHIFT(145),
  [385] = {.count = 1, .reusable = false}, SHIFT(146),
  [387] = {.count = 1, .reusable = false}, SHIFT(147),
  [389] = {.count = 1, .reusable = false}, SHIFT(148),
  [391] = {.count = 1, .reusable = false}, SHIFT(149),
  [393] = {.count = 1, .reusable = false}, SHIFT(150),
  [395] = {.count = 1, .reusable = false}, SHIFT(151),
  [397] = {.count = 1, .reusable = false}, SHIFT(152),
  [399] = {.count = 1, .reusable = false}, SHIFT(153),
  [401] = {.count = 1, .reusable = false}, SHIFT(154),
  [403] = {.count = 1, .reusable = false}, SHIFT(166),
  [405] = {.count = 1, .reusable = false}, SHIFT(156),
  [407] = {.count = 1, .reusable = false}, SHIFT(157),
  [409] = {.count = 1, .reusable = false}, SHIFT(158),
  [411] = {.count = 1, .reusable = false}, SHIFT(159),
  [413] = {.count = 1, .reusable = false}, SHIFT(160),
  [415] = {.count = 1, .reusable = false}, SHIFT(161),
  [417] = {.count = 1, .reusable = false}, SHIFT(162),
  [419] = {.count = 1, .reusable = false}, SHIFT(163),
  [421] = {.count = 1, .reusable = false}, SHIFT(164),
  [423] = {.count = 1, .reusable = false}, SHIFT(165),
  [425] = {.count = 1, .reusable = true}, SHIFT(167),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_ignore_form, 2),
  [429] = {.count = 1, .reusable = false}, REDUCE(sym_ignore_form, 2),
  [431] = {.count = 1, .reusable = true}, SHIFT(168),
  [433] = {.count = 1, .reusable = false}, SHIFT(169),
  [435] = {.count = 1, .reusable = false}, SHIFT(170),
  [437] = {.count = 1, .reusable = false}, SHIFT(171),
  [439] = {.count = 1, .reusable = false}, SHIFT(172),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_comment_macro, 2),
  [443] = {.count = 1, .reusable = false}, REDUCE(sym_comment_macro, 2),
  [445] = {.count = 1, .reusable = true}, SHIFT(173),
  [447] = {.count = 1, .reusable = true}, SHIFT(174),
  [449] = {.count = 1, .reusable = false}, SHIFT(175),
  [451] = {.count = 1, .reusable = false}, SHIFT(177),
  [453] = {.count = 1, .reusable = false}, SHIFT(176),
  [455] = {.count = 1, .reusable = false}, SHIFT(179),
  [457] = {.count = 1, .reusable = false}, SHIFT(178),
  [459] = {.count = 1, .reusable = false}, SHIFT(181),
  [461] = {.count = 1, .reusable = false}, SHIFT(180),
  [463] = {.count = 1, .reusable = true}, SHIFT(182),
  [465] = {.count = 1, .reusable = false}, SHIFT(184),
  [467] = {.count = 1, .reusable = false}, SHIFT(183),
  [469] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [471] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(97),
  [474] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [477] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(24),
  [480] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(24),
  [483] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [486] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [489] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [492] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [495] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [498] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [501] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [504] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [507] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [510] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [513] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [516] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [519] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [522] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [525] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(16),
  [528] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [531] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [534] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(19),
  [537] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(20),
  [540] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(21),
  [543] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(22),
  [546] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(22),
  [549] = {.count = 1, .reusable = true}, SHIFT(185),
  [551] = {.count = 1, .reusable = true}, REDUCE(sym__octal_char, 2),
  [553] = {.count = 1, .reusable = false}, REDUCE(sym__octal_char, 2),
  [555] = {.count = 1, .reusable = true}, REDUCE(sym__string, 3),
  [557] = {.count = 1, .reusable = false}, REDUCE(sym__string, 3),
  [559] = {.count = 1, .reusable = false}, REDUCE(aux_sym__string_repeat1, 2),
  [561] = {.count = 2, .reusable = false}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(101),
  [564] = {.count = 1, .reusable = true}, REDUCE(sym__regex, 3),
  [566] = {.count = 1, .reusable = false}, REDUCE(sym__regex, 3),
  [568] = {.count = 1, .reusable = false}, REDUCE(aux_sym__regex_repeat1, 2),
  [570] = {.count = 2, .reusable = false}, REDUCE(aux_sym__regex_repeat1, 2), SHIFT_REPEAT(103),
  [573] = {.count = 1, .reusable = true}, SHIFT(186),
  [575] = {.count = 1, .reusable = false}, SHIFT(187),
  [577] = {.count = 1, .reusable = true}, REDUCE(sym__quote, 3),
  [579] = {.count = 1, .reusable = false}, REDUCE(sym__quote, 3),
  [581] = {.count = 1, .reusable = true}, SHIFT(188),
  [583] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_symbol, 3),
  [585] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_symbol, 3),
  [587] = {.count = 1, .reusable = true}, SHIFT(189),
  [589] = {.count = 1, .reusable = false}, SHIFT(190),
  [591] = {.count = 1, .reusable = true}, SHIFT(191),
  [593] = {.count = 1, .reusable = true}, REDUCE(sym_function_name, 1),
  [595] = {.count = 1, .reusable = false}, REDUCE(sym_params, 1),
  [597] = {.count = 1, .reusable = true}, REDUCE(sym_params, 1),
  [599] = {.count = 1, .reusable = true}, SHIFT(194),
  [601] = {.count = 1, .reusable = false}, SHIFT(196),
  [603] = {.count = 1, .reusable = true}, REDUCE(sym__single_arity_fn, 1),
  [605] = {.count = 1, .reusable = true}, REDUCE(sym__multi_arity_fn, 1),
  [607] = {.count = 1, .reusable = true}, REDUCE(sym__list, 3),
  [609] = {.count = 1, .reusable = false}, REDUCE(sym__list, 3),
  [611] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(122),
  [614] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(52),
  [617] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(54),
  [620] = {.count = 1, .reusable = true}, SHIFT(198),
  [622] = {.count = 1, .reusable = false}, SHIFT(199),
  [624] = {.count = 1, .reusable = true}, REDUCE(sym__vector, 3),
  [626] = {.count = 1, .reusable = false}, REDUCE(sym__vector, 3),
  [628] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(126),
  [631] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(57),
  [634] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(59),
  [637] = {.count = 1, .reusable = true}, SHIFT(200),
  [639] = {.count = 1, .reusable = false}, SHIFT(201),
  [641] = {.count = 1, .reusable = false}, REDUCE(sym__hash_map_kv_pair, 2),
  [643] = {.count = 1, .reusable = true}, REDUCE(sym__hash_map_kv_pair, 2),
  [645] = {.count = 1, .reusable = true}, REDUCE(sym__hash_map, 3),
  [647] = {.count = 1, .reusable = false}, REDUCE(sym__hash_map, 3),
  [649] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(64),
  [652] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(2),
  [655] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(24),
  [658] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(24),
  [661] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(3),
  [664] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(4),
  [667] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(5),
  [670] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(61),
  [673] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(7),
  [676] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(8),
  [679] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(9),
  [682] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(10),
  [685] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(10),
  [688] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(11),
  [691] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(12),
  [694] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(13),
  [697] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(14),
  [700] = {.count = 1, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2),
  [702] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(15),
  [705] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(16),
  [708] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(17),
  [711] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(18),
  [714] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(19),
  [717] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(63),
  [720] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(21),
  [723] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(22),
  [726] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(22),
  [729] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 3),
  [731] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 3),
  [733] = {.count = 1, .reusable = true}, SHIFT(202),
  [735] = {.count = 1, .reusable = true}, SHIFT(204),
  [737] = {.count = 1, .reusable = false}, SHIFT(205),
  [739] = {.count = 1, .reusable = true}, REDUCE(sym__set, 3),
  [741] = {.count = 1, .reusable = false}, REDUCE(sym__set, 3),
  [743] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(137),
  [746] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(69),
  [749] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(71),
  [752] = {.count = 1, .reusable = false}, SHIFT(206),
  [754] = {.count = 1, .reusable = false}, SHIFT(207),
  [756] = {.count = 1, .reusable = true}, SHIFT(208),
  [758] = {.count = 1, .reusable = true}, REDUCE(sym__paren_sequence, 2),
  [760] = {.count = 1, .reusable = false}, REDUCE(sym__paren_sequence, 2),
  [762] = {.count = 1, .reusable = false}, SHIFT(209),
  [764] = {.count = 1, .reusable = false}, SHIFT(210),
  [766] = {.count = 1, .reusable = false}, SHIFT(211),
  [768] = {.count = 1, .reusable = true}, SHIFT(212),
  [770] = {.count = 1, .reusable = true}, SHIFT(213),
  [772] = {.count = 1, .reusable = false}, SHIFT(214),
  [774] = {.count = 1, .reusable = false}, SHIFT(216),
  [776] = {.count = 1, .reusable = false}, SHIFT(215),
  [778] = {.count = 1, .reusable = false}, SHIFT(218),
  [780] = {.count = 1, .reusable = false}, SHIFT(217),
  [782] = {.count = 1, .reusable = true}, REDUCE(sym__bracket_sequence, 2),
  [784] = {.count = 1, .reusable = false}, REDUCE(sym__bracket_sequence, 2),
  [786] = {.count = 1, .reusable = false}, SHIFT(220),
  [788] = {.count = 1, .reusable = false}, SHIFT(219),
  [790] = {.count = 1, .reusable = true}, SHIFT(221),
  [792] = {.count = 1, .reusable = false}, SHIFT(223),
  [794] = {.count = 1, .reusable = false}, SHIFT(222),
  [796] = {.count = 1, .reusable = false}, SHIFT(224),
  [798] = {.count = 1, .reusable = false}, SHIFT(225),
  [800] = {.count = 1, .reusable = true}, SHIFT(226),
  [802] = {.count = 1, .reusable = true}, SHIFT(227),
  [804] = {.count = 1, .reusable = false}, SHIFT(228),
  [806] = {.count = 1, .reusable = false}, SHIFT(230),
  [808] = {.count = 1, .reusable = false}, SHIFT(229),
  [810] = {.count = 1, .reusable = false}, SHIFT(232),
  [812] = {.count = 1, .reusable = false}, SHIFT(231),
  [814] = {.count = 1, .reusable = false}, SHIFT(234),
  [816] = {.count = 1, .reusable = false}, SHIFT(233),
  [818] = {.count = 1, .reusable = true}, REDUCE(sym__curly_brace_sequence, 2),
  [820] = {.count = 1, .reusable = false}, REDUCE(sym__curly_brace_sequence, 2),
  [822] = {.count = 1, .reusable = true}, SHIFT(235),
  [824] = {.count = 1, .reusable = false}, SHIFT(237),
  [826] = {.count = 1, .reusable = false}, SHIFT(236),
  [828] = {.count = 1, .reusable = false}, SHIFT(238),
  [830] = {.count = 1, .reusable = true}, REDUCE(sym_ignore_form, 3),
  [832] = {.count = 1, .reusable = false}, REDUCE(sym_ignore_form, 3),
  [834] = {.count = 1, .reusable = true}, SHIFT(239),
  [836] = {.count = 1, .reusable = true}, SHIFT(240),
  [838] = {.count = 1, .reusable = false}, REDUCE(aux_sym_ignore_form_repeat1, 2),
  [840] = {.count = 2, .reusable = false}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(170),
  [843] = {.count = 1, .reusable = false}, SHIFT(241),
  [845] = {.count = 1, .reusable = false}, SHIFT(242),
  [847] = {.count = 1, .reusable = true}, SHIFT(243),
  [849] = {.count = 1, .reusable = false}, SHIFT(244),
  [851] = {.count = 1, .reusable = false}, SHIFT(245),
  [853] = {.count = 1, .reusable = false}, SHIFT(246),
  [855] = {.count = 1, .reusable = false}, SHIFT(247),
  [857] = {.count = 1, .reusable = true}, REDUCE(sym_comment_macro, 3),
  [859] = {.count = 1, .reusable = false}, REDUCE(sym_comment_macro, 3),
  [861] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(184),
  [864] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(86),
  [867] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2),
  [869] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(88),
  [872] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(89),
  [875] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(90),
  [878] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(91),
  [881] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(92),
  [884] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(93),
  [887] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(94),
  [890] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(95),
  [893] = {.count = 1, .reusable = true}, SHIFT(248),
  [895] = {.count = 1, .reusable = true}, SHIFT(249),
  [897] = {.count = 1, .reusable = true}, SHIFT(250),
  [899] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_keyword, 4),
  [901] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_keyword, 4),
  [903] = {.count = 1, .reusable = true}, SHIFT(251),
  [905] = {.count = 1, .reusable = true}, SHIFT(252),
  [907] = {.count = 1, .reusable = true}, SHIFT(253),
  [909] = {.count = 1, .reusable = true}, SHIFT(254),
  [911] = {.count = 1, .reusable = true}, SHIFT(255),
  [913] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_function, 4),
  [915] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_function, 4),
  [917] = {.count = 1, .reusable = true}, REDUCE(sym__single_arity_fn, 2),
  [919] = {.count = 1, .reusable = true}, REDUCE(sym_function_body, 1),
  [921] = {.count = 1, .reusable = true}, REDUCE(aux_sym__multi_arity_fn_repeat1, 2),
  [923] = {.count = 2, .reusable = true}, REDUCE(aux_sym__multi_arity_fn_repeat1, 2), SHIFT_REPEAT(113),
  [926] = {.count = 1, .reusable = true}, SHIFT(256),
  [928] = {.count = 1, .reusable = true}, SHIFT(257),
  [930] = {.count = 1, .reusable = true}, SHIFT(258),
  [932] = {.count = 1, .reusable = true}, SHIFT(259),
  [934] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 4),
  [936] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 4),
  [938] = {.count = 1, .reusable = true}, SHIFT(260),
  [940] = {.count = 1, .reusable = true}, SHIFT(261),
  [942] = {.count = 1, .reusable = true}, SHIFT(262),
  [944] = {.count = 1, .reusable = true}, SHIFT(263),
  [946] = {.count = 1, .reusable = true}, REDUCE(sym__paren_sequence, 3),
  [948] = {.count = 1, .reusable = false}, REDUCE(sym__paren_sequence, 3),
  [950] = {.count = 1, .reusable = false}, SHIFT(264),
  [952] = {.count = 1, .reusable = false}, SHIFT(265),
  [954] = {.count = 1, .reusable = true}, SHIFT(266),
  [956] = {.count = 1, .reusable = false}, SHIFT(267),
  [958] = {.count = 1, .reusable = false}, SHIFT(268),
  [960] = {.count = 1, .reusable = false}, SHIFT(269),
  [962] = {.count = 1, .reusable = false}, SHIFT(270),
  [964] = {.count = 1, .reusable = true}, REDUCE(sym__bracket_sequence, 3),
  [966] = {.count = 1, .reusable = false}, REDUCE(sym__bracket_sequence, 3),
  [968] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(223),
  [971] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(145),
  [974] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(146),
  [977] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(147),
  [980] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(148),
  [983] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(149),
  [986] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(150),
  [989] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(151),
  [992] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(153),
  [995] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(154),
  [998] = {.count = 1, .reusable = false}, SHIFT(271),
  [1000] = {.count = 1, .reusable = false}, SHIFT(272),
  [1002] = {.count = 1, .reusable = true}, SHIFT(273),
  [1004] = {.count = 1, .reusable = false}, SHIFT(274),
  [1006] = {.count = 1, .reusable = false}, SHIFT(275),
  [1008] = {.count = 1, .reusable = false}, SHIFT(276),
  [1010] = {.count = 1, .reusable = false}, SHIFT(277),
  [1012] = {.count = 1, .reusable = true}, REDUCE(sym__curly_brace_sequence, 3),
  [1014] = {.count = 1, .reusable = false}, REDUCE(sym__curly_brace_sequence, 3),
  [1016] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(237),
  [1019] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(156),
  [1022] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(157),
  [1025] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(158),
  [1028] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(159),
  [1031] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(160),
  [1034] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(161),
  [1037] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(162),
  [1040] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(163),
  [1043] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(165),
  [1046] = {.count = 1, .reusable = false}, SHIFT(278),
  [1048] = {.count = 1, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2),
  [1050] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(239),
  [1053] = {.count = 1, .reusable = true}, REDUCE(sym_ignore_form, 4),
  [1055] = {.count = 1, .reusable = false}, REDUCE(sym_ignore_form, 4),
  [1057] = {.count = 1, .reusable = true}, SHIFT(279),
  [1059] = {.count = 1, .reusable = false}, SHIFT(280),
  [1061] = {.count = 1, .reusable = true}, SHIFT(281),
  [1063] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(249),
  [1066] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(251),
  [1069] = {.count = 1, .reusable = true}, REDUCE(aux_sym__multi_arity_fn_repeat1, 3),
  [1071] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_function, 5),
  [1073] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_function, 5),
  [1075] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(256),
  [1078] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(258),
  [1081] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 5),
  [1083] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 5),
  [1085] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(261),
  [1088] = {.count = 1, .reusable = true}, SHIFT(282),
  [1090] = {.count = 1, .reusable = false}, SHIFT(283),
  [1092] = {.count = 1, .reusable = true}, SHIFT(284),
  [1094] = {.count = 1, .reusable = false}, SHIFT(285),
  [1096] = {.count = 1, .reusable = true}, REDUCE(sym__curly_brace_sequence, 4),
  [1098] = {.count = 1, .reusable = false}, REDUCE(sym__curly_brace_sequence, 4),
  [1100] = {.count = 1, .reusable = true}, REDUCE(sym__unicode_char, 5),
  [1102] = {.count = 1, .reusable = false}, REDUCE(sym__unicode_char, 5),
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
