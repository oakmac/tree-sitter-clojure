#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 298
#define SYMBOL_COUNT 123
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
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
  anon_sym_POUND_LPAREN = 56,
  sym_shorthand_function_arg = 57,
  sym_defn_function = 58,
  sym_program = 59,
  sym__anything = 60,
  sym__literal = 61,
  sym__collection_literal = 62,
  sym_boolean = 63,
  sym_number = 64,
  sym__number = 65,
  sym_character = 66,
  sym__character = 67,
  sym__special_char = 68,
  sym__unicode_char = 69,
  sym__octal_char = 70,
  sym__octal_num = 71,
  sym_string = 72,
  sym__string = 73,
  sym_regex = 74,
  sym__regex = 75,
  sym_quote = 76,
  sym__quote = 77,
  sym_keyword = 78,
  sym__keyword = 79,
  sym__unqualified_keyword = 80,
  sym_qualified_keyword = 81,
  sym_symbol = 82,
  sym__symbol = 83,
  sym_threading_macro = 84,
  sym_qualified_symbol = 85,
  sym_list = 86,
  sym__list = 87,
  sym_vector = 88,
  sym__vector = 89,
  sym_hash_map = 90,
  sym__hash_map = 91,
  sym_namespace_map = 92,
  sym__hash_map_kv_pair = 93,
  sym__hash_map_key = 94,
  sym__hash_map_value = 95,
  sym_set = 96,
  sym__set = 97,
  sym_comment = 98,
  sym_semicolon = 99,
  sym_shebang_line = 100,
  sym_ignore_form = 101,
  sym_comment_macro = 102,
  sym__one_form = 103,
  sym__paren_sequence = 104,
  sym__bracket_sequence = 105,
  sym__curly_brace_sequence = 106,
  sym_function = 107,
  sym_anonymous_function = 108,
  sym_function_name = 109,
  sym__single_arity_fn = 110,
  sym__multi_arity_fn = 111,
  sym_function_body = 112,
  sym_params = 113,
  sym_shorthand_function = 114,
  aux_sym_program_repeat1 = 115,
  aux_sym__string_repeat1 = 116,
  aux_sym__regex_repeat1 = 117,
  aux_sym__hash_map_repeat1 = 118,
  aux_sym_ignore_form_repeat1 = 119,
  aux_sym_comment_macro_repeat1 = 120,
  aux_sym__multi_arity_fn_repeat1 = 121,
  aux_sym_shorthand_function_repeat1 = 122,
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
  [anon_sym_POUND_LPAREN] = "#(",
  [sym_shorthand_function_arg] = "shorthand_function_arg",
  [sym_defn_function] = "defn_function",
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
  [sym_function] = "function",
  [sym_anonymous_function] = "anonymous_function",
  [sym_function_name] = "function_name",
  [sym__single_arity_fn] = "_single_arity_fn",
  [sym__multi_arity_fn] = "_multi_arity_fn",
  [sym_function_body] = "function_body",
  [sym_params] = "params",
  [sym_shorthand_function] = "shorthand_function",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym__string_repeat1] = "_string_repeat1",
  [aux_sym__regex_repeat1] = "_regex_repeat1",
  [aux_sym__hash_map_repeat1] = "_hash_map_repeat1",
  [aux_sym_ignore_form_repeat1] = "ignore_form_repeat1",
  [aux_sym_comment_macro_repeat1] = "comment_macro_repeat1",
  [aux_sym__multi_arity_fn_repeat1] = "_multi_arity_fn_repeat1",
  [aux_sym_shorthand_function_repeat1] = "shorthand_function_repeat1",
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
  [anon_sym_POUND_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_shorthand_function_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_defn_function] = {
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
  [sym_shorthand_function] = {
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
  [aux_sym_shorthand_function_repeat1] = {
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
      if (lookahead == '%')
        ADVANCE(12);
      if (lookahead == '\'')
        ADVANCE(13);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == ')')
        ADVANCE(27);
      if (lookahead == '+')
        ADVANCE(28);
      if (lookahead == ',')
        SKIP(0);
      if (lookahead == '-')
        ADVANCE(30);
      if (lookahead == '.')
        ADVANCE(33);
      if (lookahead == '/')
        ADVANCE(41);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'T')
        ADVANCE(45);
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
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(7);
      if (lookahead == '_')
        ADVANCE(10);
      if (lookahead == '{')
        ADVANCE(11);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_POUND_DQUOTE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_POUND_LPAREN);
      END_STATE();
    case 7:
      if (lookahead == ':')
        ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '{')
        ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_POUND_COLON_COLON_LBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_POUND_);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_shorthand_function_arg);
      if (lookahead == '&' ||
          ('1' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == 'c')
        ADVANCE(15);
      if (lookahead == 'q')
        ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'o')
        ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'm')
        ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'm')
        ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'e')
        ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'n')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 't')
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LPARENcomment);
      END_STATE();
    case 22:
      if (lookahead == 'u')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'o')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 't')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'e')
        ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LPARENquote);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_number_long);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '>')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead == '>')
        ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GT);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_number_double);
      if (lookahead == '_')
        ADVANCE(35);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(36);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '_')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == '+')
        ADVANCE(37);
      if (lookahead == '-')
        ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(38);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_number_double);
      if (lookahead == '_')
        ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '_')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(38);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_number_double);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 45:
      if (lookahead == 'O')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'D')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'O')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == ':')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == ' ')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'w')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'r')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'i')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 't')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'e')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == ' ')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'm')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'e')
        ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_defn_function);
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
        ADVANCE(36);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_number_double);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(36);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(34);
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
        ADVANCE(36);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(40);
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
        ADVANCE(13);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        SKIP(103);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '.')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == ';')
        ADVANCE(44);
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
        ADVANCE(31);
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
        ADVANCE(50);
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
      if (lookahead == '%')
        ADVANCE(12);
      if (lookahead == '\'')
        ADVANCE(13);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == ')')
        ADVANCE(27);
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        SKIP(141);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '.')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == ';')
        ADVANCE(44);
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
      if (lookahead == '%')
        ADVANCE(12);
      if (lookahead == '\'')
        ADVANCE(13);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == ')')
        ADVANCE(27);
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        SKIP(174);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '.')
        ADVANCE(33);
      if (lookahead == '/')
        ADVANCE(41);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == ';')
        ADVANCE(44);
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
        ADVANCE(13);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == ')')
        ADVANCE(27);
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        SKIP(175);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '.')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == ';')
        ADVANCE(44);
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
        ADVANCE(13);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        SKIP(178);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '.')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == ';')
        ADVANCE(44);
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
        ADVANCE(13);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        SKIP(179);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '.')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == ';')
        ADVANCE(44);
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
        ADVANCE(27);
      if (lookahead == ',')
        SKIP(180);
      if (lookahead == '/')
        ADVANCE(41);
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
        ADVANCE(42);
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
        ADVANCE(34);
      END_STATE();
    case 190:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(187);
      if (lookahead == '(')
        ADVANCE(181);
      if (lookahead == ')')
        ADVANCE(27);
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        ADVANCE(188);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '.')
        ADVANCE(189);
      if (lookahead == ':')
        ADVANCE(42);
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
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(12);
      if (lookahead == '\'')
        ADVANCE(13);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == ')')
        ADVANCE(27);
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        SKIP(191);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '.')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == ';')
        ADVANCE(44);
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
        SKIP(191);
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
    case 192:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        SKIP(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(192);
      END_STATE();
    case 193:
      if (lookahead == ',')
        SKIP(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(102);
      END_STATE();
    case 194:
      if (lookahead == ',')
        SKIP(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(194);
      if (('0' <= lookahead && lookahead <= '3'))
        ADVANCE(195);
      if (('4' <= lookahead && lookahead <= '7'))
        ADVANCE(198);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 200:
      if (lookahead == '(')
        ADVANCE(181);
      if (lookahead == ',')
        SKIP(200);
      if (lookahead == '-')
        ADVANCE(201);
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
        SKIP(200);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(106);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '>')
        ADVANCE(31);
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
    case 202:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(186);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(12);
      if (lookahead == '\'')
        ADVANCE(13);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == ')')
        ADVANCE(27);
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        SKIP(202);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '.')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == ';')
        ADVANCE(44);
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
      if (lookahead == '%')
        ADVANCE(12);
      if (lookahead == '\'')
        ADVANCE(13);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == ')')
        ADVANCE(27);
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        SKIP(203);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '.')
        ADVANCE(33);
      if (lookahead == '/')
        ADVANCE(41);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == ';')
        ADVANCE(44);
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
        ADVANCE(42);
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
        ADVANCE(42);
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
        ADVANCE(13);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        SKIP(206);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '.')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == ';')
        ADVANCE(44);
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
        ADVANCE(27);
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        ADVANCE(188);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '.')
        ADVANCE(189);
      if (lookahead == '/')
        ADVANCE(41);
      if (lookahead == ':')
        ADVANCE(42);
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
      if (lookahead == '%')
        ADVANCE(12);
      if (lookahead == '\'')
        ADVANCE(13);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == ')')
        ADVANCE(27);
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        SKIP(208);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '.')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == ';')
        ADVANCE(44);
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
        ADVANCE(13);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        SKIP(209);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '.')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == ';')
        ADVANCE(44);
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
        ADVANCE(13);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        SKIP(210);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '.')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == ';')
        ADVANCE(44);
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
        ADVANCE(41);
      if (lookahead == ':')
        ADVANCE(42);
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
        ADVANCE(41);
      if (lookahead == ':')
        ADVANCE(42);
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
  [22] = {.lex_state = 191},
  [23] = {.lex_state = 141},
  [24] = {.lex_state = 192},
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
  [39] = {.lex_state = 193},
  [40] = {.lex_state = 194},
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
  [55] = {.lex_state = 200},
  [56] = {.lex_state = 191},
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
  [98] = {.lex_state = 141},
  [99] = {.lex_state = 185},
  [100] = {.lex_state = 191},
  [101] = {.lex_state = 103},
  [102] = {.lex_state = 193},
  [103] = {.lex_state = 141},
  [104] = {.lex_state = 141},
  [105] = {.lex_state = 165},
  [106] = {.lex_state = 141},
  [107] = {.lex_state = 169},
  [108] = {.lex_state = 208},
  [109] = {.lex_state = 185},
  [110] = {.lex_state = 141},
  [111] = {.lex_state = 172},
  [112] = {.lex_state = 141},
  [113] = {.lex_state = 208},
  [114] = {.lex_state = 185},
  [115] = {.lex_state = 180},
  [116] = {.lex_state = 180},
  [117] = {.lex_state = 103},
  [118] = {.lex_state = 180},
  [119] = {.lex_state = 180},
  [120] = {.lex_state = 191},
  [121] = {.lex_state = 180},
  [122] = {.lex_state = 175},
  [123] = {.lex_state = 191},
  [124] = {.lex_state = 180},
  [125] = {.lex_state = 141},
  [126] = {.lex_state = 191},
  [127] = {.lex_state = 209},
  [128] = {.lex_state = 185},
  [129] = {.lex_state = 141},
  [130] = {.lex_state = 178},
  [131] = {.lex_state = 202},
  [132] = {.lex_state = 185},
  [133] = {.lex_state = 179},
  [134] = {.lex_state = 141},
  [135] = {.lex_state = 179},
  [136] = {.lex_state = 141},
  [137] = {.lex_state = 179},
  [138] = {.lex_state = 210},
  [139] = {.lex_state = 185},
  [140] = {.lex_state = 141},
  [141] = {.lex_state = 179},
  [142] = {.lex_state = 202},
  [143] = {.lex_state = 165},
  [144] = {.lex_state = 202},
  [145] = {.lex_state = 203},
  [146] = {.lex_state = 180},
  [147] = {.lex_state = 202},
  [148] = {.lex_state = 190},
  [149] = {.lex_state = 165},
  [150] = {.lex_state = 172},
  [151] = {.lex_state = 172},
  [152] = {.lex_state = 204},
  [153] = {.lex_state = 211},
  [154] = {.lex_state = 190},
  [155] = {.lex_state = 204},
  [156] = {.lex_state = 202},
  [157] = {.lex_state = 205},
  [158] = {.lex_state = 103},
  [159] = {.lex_state = 204},
  [160] = {.lex_state = 165},
  [161] = {.lex_state = 172},
  [162] = {.lex_state = 172},
  [163] = {.lex_state = 205},
  [164] = {.lex_state = 212},
  [165] = {.lex_state = 190},
  [166] = {.lex_state = 204},
  [167] = {.lex_state = 205},
  [168] = {.lex_state = 202},
  [169] = {.lex_state = 103},
  [170] = {.lex_state = 205},
  [171] = {.lex_state = 205},
  [172] = {.lex_state = 206},
  [173] = {.lex_state = 206},
  [174] = {.lex_state = 185},
  [175] = {.lex_state = 190},
  [176] = {.lex_state = 165},
  [177] = {.lex_state = 190},
  [178] = {.lex_state = 207},
  [179] = {.lex_state = 180},
  [180] = {.lex_state = 190},
  [181] = {.lex_state = 190},
  [182] = {.lex_state = 190},
  [183] = {.lex_state = 204},
  [184] = {.lex_state = 190},
  [185] = {.lex_state = 205},
  [186] = {.lex_state = 205},
  [187] = {.lex_state = 141},
  [188] = {.lex_state = 190},
  [189] = {.lex_state = 208},
  [190] = {.lex_state = 185},
  [191] = {.lex_state = 141},
  [192] = {.lex_state = 191},
  [193] = {.lex_state = 193},
  [194] = {.lex_state = 208},
  [195] = {.lex_state = 208},
  [196] = {.lex_state = 141},
  [197] = {.lex_state = 208},
  [198] = {.lex_state = 208},
  [199] = {.lex_state = 180},
  [200] = {.lex_state = 175},
  [201] = {.lex_state = 175},
  [202] = {.lex_state = 141},
  [203] = {.lex_state = 175},
  [204] = {.lex_state = 191},
  [205] = {.lex_state = 180},
  [206] = {.lex_state = 209},
  [207] = {.lex_state = 209},
  [208] = {.lex_state = 202},
  [209] = {.lex_state = 202},
  [210] = {.lex_state = 141},
  [211] = {.lex_state = 179},
  [212] = {.lex_state = 210},
  [213] = {.lex_state = 210},
  [214] = {.lex_state = 202},
  [215] = {.lex_state = 172},
  [216] = {.lex_state = 202},
  [217] = {.lex_state = 202},
  [218] = {.lex_state = 204},
  [219] = {.lex_state = 165},
  [220] = {.lex_state = 204},
  [221] = {.lex_state = 211},
  [222] = {.lex_state = 180},
  [223] = {.lex_state = 204},
  [224] = {.lex_state = 190},
  [225] = {.lex_state = 204},
  [226] = {.lex_state = 204},
  [227] = {.lex_state = 204},
  [228] = {.lex_state = 205},
  [229] = {.lex_state = 205},
  [230] = {.lex_state = 202},
  [231] = {.lex_state = 204},
  [232] = {.lex_state = 205},
  [233] = {.lex_state = 165},
  [234] = {.lex_state = 205},
  [235] = {.lex_state = 212},
  [236] = {.lex_state = 180},
  [237] = {.lex_state = 205},
  [238] = {.lex_state = 190},
  [239] = {.lex_state = 205},
  [240] = {.lex_state = 204},
  [241] = {.lex_state = 205},
  [242] = {.lex_state = 205},
  [243] = {.lex_state = 205},
  [244] = {.lex_state = 202},
  [245] = {.lex_state = 205},
  [246] = {.lex_state = 205},
  [247] = {.lex_state = 206},
  [248] = {.lex_state = 206},
  [249] = {.lex_state = 190},
  [250] = {.lex_state = 172},
  [251] = {.lex_state = 190},
  [252] = {.lex_state = 190},
  [253] = {.lex_state = 190},
  [254] = {.lex_state = 190},
  [255] = {.lex_state = 205},
  [256] = {.lex_state = 208},
  [257] = {.lex_state = 208},
  [258] = {.lex_state = 193},
  [259] = {.lex_state = 208},
  [260] = {.lex_state = 208},
  [261] = {.lex_state = 208},
  [262] = {.lex_state = 208},
  [263] = {.lex_state = 180},
  [264] = {.lex_state = 180},
  [265] = {.lex_state = 141},
  [266] = {.lex_state = 209},
  [267] = {.lex_state = 209},
  [268] = {.lex_state = 202},
  [269] = {.lex_state = 202},
  [270] = {.lex_state = 141},
  [271] = {.lex_state = 210},
  [272] = {.lex_state = 210},
  [273] = {.lex_state = 202},
  [274] = {.lex_state = 204},
  [275] = {.lex_state = 172},
  [276] = {.lex_state = 204},
  [277] = {.lex_state = 204},
  [278] = {.lex_state = 204},
  [279] = {.lex_state = 204},
  [280] = {.lex_state = 205},
  [281] = {.lex_state = 205},
  [282] = {.lex_state = 172},
  [283] = {.lex_state = 205},
  [284] = {.lex_state = 205},
  [285] = {.lex_state = 205},
  [286] = {.lex_state = 205},
  [287] = {.lex_state = 205},
  [288] = {.lex_state = 202},
  [289] = {.lex_state = 190},
  [290] = {.lex_state = 190},
  [291] = {.lex_state = 208},
  [292] = {.lex_state = 208},
  [293] = {.lex_state = 141},
  [294] = {.lex_state = 204},
  [295] = {.lex_state = 204},
  [296] = {.lex_state = 205},
  [297] = {.lex_state = 205},
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
    [anon_sym_POUND_LPAREN] = ACTIONS(1),
    [sym_shorthand_function_arg] = ACTIONS(1),
    [sym_defn_function] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(24),
    [sym__anything] = STATE(37),
    [sym__literal] = STATE(37),
    [sym__collection_literal] = STATE(37),
    [sym_boolean] = STATE(37),
    [sym_number] = STATE(37),
    [sym__number] = STATE(25),
    [sym_character] = STATE(37),
    [sym__character] = STATE(26),
    [sym_string] = STATE(37),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(37),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(37),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(37),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(37),
    [sym__symbol] = STATE(31),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(37),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(37),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(37),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym_set] = STATE(37),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(37),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [sym_function] = STATE(37),
    [sym_anonymous_function] = STATE(23),
    [sym_shorthand_function] = STATE(23),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_defn_function] = ACTIONS(57),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(59),
    [sym_shorthand_function_arg] = ACTIONS(59),
    [sym_defn_function] = ACTIONS(59),
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
    [sym__number] = STATE(25),
    [sym_character] = STATE(45),
    [sym__character] = STATE(26),
    [sym_string] = STATE(45),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(45),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(45),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(45),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(45),
    [sym__symbol] = STATE(31),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(45),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(45),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(45),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym_set] = STATE(45),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(45),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [sym_function] = STATE(45),
    [sym_anonymous_function] = STATE(23),
    [sym_shorthand_function] = STATE(23),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_defn_function] = ACTIONS(57),
  },
  [7] = {
    [sym__anything] = STATE(48),
    [sym__literal] = STATE(48),
    [sym__collection_literal] = STATE(48),
    [sym_boolean] = STATE(48),
    [sym_number] = STATE(48),
    [sym__number] = STATE(25),
    [sym_character] = STATE(48),
    [sym__character] = STATE(26),
    [sym_string] = STATE(48),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(48),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(48),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(48),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(48),
    [sym__symbol] = STATE(31),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(48),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(48),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(48),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym_set] = STATE(48),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(48),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [sym_function] = STATE(48),
    [sym_anonymous_function] = STATE(23),
    [sym_shorthand_function] = STATE(23),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_defn_function] = ACTIONS(57),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(89),
    [sym_shorthand_function_arg] = ACTIONS(89),
    [sym_defn_function] = ACTIONS(89),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(93),
    [sym_shorthand_function_arg] = ACTIONS(93),
    [sym_defn_function] = ACTIONS(93),
  },
  [12] = {
    [sym__anything] = STATE(56),
    [sym__literal] = STATE(56),
    [sym__collection_literal] = STATE(56),
    [sym_boolean] = STATE(56),
    [sym_number] = STATE(56),
    [sym__number] = STATE(25),
    [sym_character] = STATE(56),
    [sym__character] = STATE(26),
    [sym_string] = STATE(56),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(56),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(56),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(56),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(56),
    [sym__symbol] = STATE(31),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(56),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(56),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(56),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym_set] = STATE(56),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(56),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [sym_function] = STATE(56),
    [sym_anonymous_function] = STATE(23),
    [sym_shorthand_function] = STATE(23),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_defn_function] = ACTIONS(57),
  },
  [13] = {
    [sym__anything] = STATE(60),
    [sym__literal] = STATE(60),
    [sym__collection_literal] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym_number] = STATE(60),
    [sym__number] = STATE(25),
    [sym_character] = STATE(60),
    [sym__character] = STATE(26),
    [sym_string] = STATE(60),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(60),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(60),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(60),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(60),
    [sym__symbol] = STATE(31),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(60),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(60),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(60),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym_set] = STATE(60),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(60),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [sym_function] = STATE(60),
    [sym_anonymous_function] = STATE(23),
    [sym_shorthand_function] = STATE(23),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_defn_function] = ACTIONS(57),
  },
  [14] = {
    [sym__anything] = STATE(64),
    [sym__literal] = STATE(64),
    [sym__collection_literal] = STATE(64),
    [sym_boolean] = STATE(64),
    [sym_number] = STATE(64),
    [sym__number] = STATE(25),
    [sym_character] = STATE(64),
    [sym__character] = STATE(26),
    [sym_string] = STATE(64),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(64),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(64),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(64),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(64),
    [sym__symbol] = STATE(31),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(64),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(64),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(64),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym__hash_map_kv_pair] = STATE(65),
    [sym__hash_map_key] = STATE(64),
    [sym_set] = STATE(64),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(64),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [sym_function] = STATE(64),
    [sym_anonymous_function] = STATE(23),
    [sym_shorthand_function] = STATE(23),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_defn_function] = ACTIONS(57),
  },
  [15] = {
    [sym__anything] = STATE(64),
    [sym__literal] = STATE(64),
    [sym__collection_literal] = STATE(64),
    [sym_boolean] = STATE(64),
    [sym_number] = STATE(64),
    [sym__number] = STATE(25),
    [sym_character] = STATE(64),
    [sym__character] = STATE(26),
    [sym_string] = STATE(64),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(64),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(64),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(64),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(64),
    [sym__symbol] = STATE(31),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(64),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(64),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(64),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym__hash_map_kv_pair] = STATE(67),
    [sym__hash_map_key] = STATE(64),
    [sym_set] = STATE(64),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(64),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [sym_function] = STATE(64),
    [sym_anonymous_function] = STATE(23),
    [sym_shorthand_function] = STATE(23),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_defn_function] = ACTIONS(57),
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
    [sym__number] = STATE(25),
    [sym_character] = STATE(72),
    [sym__character] = STATE(26),
    [sym_string] = STATE(72),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(72),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(72),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(72),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(72),
    [sym__symbol] = STATE(31),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(72),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(72),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(72),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym_set] = STATE(72),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(72),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [sym_function] = STATE(72),
    [sym_anonymous_function] = STATE(23),
    [sym_shorthand_function] = STATE(23),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_defn_function] = ACTIONS(57),
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
    [sym__anything] = STATE(100),
    [sym__literal] = STATE(100),
    [sym__collection_literal] = STATE(100),
    [sym_boolean] = STATE(100),
    [sym_number] = STATE(100),
    [sym__number] = STATE(25),
    [sym_character] = STATE(100),
    [sym__character] = STATE(26),
    [sym_string] = STATE(100),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(100),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(100),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(100),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(100),
    [sym__symbol] = STATE(31),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(100),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(100),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(100),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym_set] = STATE(100),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(100),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [sym_function] = STATE(100),
    [sym_anonymous_function] = STATE(23),
    [sym_shorthand_function] = STATE(23),
    [aux_sym_shorthand_function_repeat1] = STATE(100),
    [sym_nil] = ACTIONS(185),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(187),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(189),
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
    [anon_sym_POUND_] = ACTIONS(191),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(193),
    [sym_defn_function] = ACTIONS(57),
  },
  [23] = {
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
    [anon_sym_POUND_LPAREN] = ACTIONS(195),
    [sym_shorthand_function_arg] = ACTIONS(195),
    [sym_defn_function] = ACTIONS(195),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(199),
  },
  [25] = {
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
    [anon_sym_DASH_GT] = ACTIONS(203),
    [anon_sym_DASH_GT_GT] = ACTIONS(201),
    [anon_sym_as_DASH_GT] = ACTIONS(201),
    [anon_sym_some_DASH_GT] = ACTIONS(203),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(201),
    [anon_sym_cond_DASH_GT] = ACTIONS(203),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(201),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(201),
    [sym_shorthand_function_arg] = ACTIONS(201),
    [sym_defn_function] = ACTIONS(201),
  },
  [26] = {
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
    [anon_sym_DASH_GT] = ACTIONS(207),
    [anon_sym_DASH_GT_GT] = ACTIONS(205),
    [anon_sym_as_DASH_GT] = ACTIONS(205),
    [anon_sym_some_DASH_GT] = ACTIONS(207),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(205),
    [anon_sym_cond_DASH_GT] = ACTIONS(207),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(205),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(205),
    [sym_shorthand_function_arg] = ACTIONS(205),
    [sym_defn_function] = ACTIONS(205),
  },
  [27] = {
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
    [anon_sym_DASH_GT] = ACTIONS(211),
    [anon_sym_DASH_GT_GT] = ACTIONS(209),
    [anon_sym_as_DASH_GT] = ACTIONS(209),
    [anon_sym_some_DASH_GT] = ACTIONS(211),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(209),
    [anon_sym_cond_DASH_GT] = ACTIONS(211),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(209),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(209),
    [sym_shorthand_function_arg] = ACTIONS(209),
    [sym_defn_function] = ACTIONS(209),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [sym_nil] = ACTIONS(215),
    [sym_true] = ACTIONS(215),
    [sym_false] = ACTIONS(215),
    [sym_number_long] = ACTIONS(215),
    [sym_number_double] = ACTIONS(213),
    [anon_sym_BSLASH] = ACTIONS(213),
    [anon_sym_DQUOTE] = ACTIONS(213),
    [anon_sym_POUND_DQUOTE] = ACTIONS(213),
    [anon_sym_SQUOTE] = ACTIONS(213),
    [anon_sym_LPARENquote] = ACTIONS(213),
    [anon_sym_RPAREN] = ACTIONS(213),
    [anon_sym_COLON] = ACTIONS(215),
    [anon_sym_COLON_COLON] = ACTIONS(213),
    [anon_sym_DASH_GT] = ACTIONS(215),
    [anon_sym_DASH_GT_GT] = ACTIONS(213),
    [anon_sym_as_DASH_GT] = ACTIONS(213),
    [anon_sym_some_DASH_GT] = ACTIONS(215),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(213),
    [anon_sym_cond_DASH_GT] = ACTIONS(215),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(213),
    [sym__symbol_chars] = ACTIONS(215),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(213),
    [sym_shorthand_function_arg] = ACTIONS(213),
    [sym_defn_function] = ACTIONS(213),
  },
  [29] = {
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
    [anon_sym_DASH_GT] = ACTIONS(219),
    [anon_sym_DASH_GT_GT] = ACTIONS(217),
    [anon_sym_as_DASH_GT] = ACTIONS(217),
    [anon_sym_some_DASH_GT] = ACTIONS(219),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(217),
    [anon_sym_cond_DASH_GT] = ACTIONS(219),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(217),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(217),
    [sym_shorthand_function_arg] = ACTIONS(217),
    [sym_defn_function] = ACTIONS(217),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(221),
    [sym_nil] = ACTIONS(223),
    [sym_true] = ACTIONS(223),
    [sym_false] = ACTIONS(223),
    [sym_number_long] = ACTIONS(223),
    [sym_number_double] = ACTIONS(221),
    [anon_sym_BSLASH] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(221),
    [anon_sym_POUND_DQUOTE] = ACTIONS(221),
    [anon_sym_SQUOTE] = ACTIONS(221),
    [anon_sym_LPARENquote] = ACTIONS(221),
    [anon_sym_RPAREN] = ACTIONS(221),
    [anon_sym_COLON] = ACTIONS(223),
    [anon_sym_COLON_COLON] = ACTIONS(221),
    [anon_sym_DASH_GT] = ACTIONS(223),
    [anon_sym_DASH_GT_GT] = ACTIONS(221),
    [anon_sym_as_DASH_GT] = ACTIONS(221),
    [anon_sym_some_DASH_GT] = ACTIONS(223),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(221),
    [anon_sym_cond_DASH_GT] = ACTIONS(223),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(221),
    [sym__symbol_chars] = ACTIONS(223),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(221),
    [sym_shorthand_function_arg] = ACTIONS(221),
    [sym_defn_function] = ACTIONS(221),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(225),
    [sym_nil] = ACTIONS(227),
    [sym_true] = ACTIONS(227),
    [sym_false] = ACTIONS(227),
    [sym_number_long] = ACTIONS(227),
    [sym_number_double] = ACTIONS(225),
    [anon_sym_BSLASH] = ACTIONS(225),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(225),
    [anon_sym_SQUOTE] = ACTIONS(225),
    [anon_sym_LPARENquote] = ACTIONS(225),
    [anon_sym_RPAREN] = ACTIONS(225),
    [anon_sym_COLON] = ACTIONS(227),
    [anon_sym_COLON_COLON] = ACTIONS(225),
    [anon_sym_DASH_GT] = ACTIONS(227),
    [anon_sym_DASH_GT_GT] = ACTIONS(225),
    [anon_sym_as_DASH_GT] = ACTIONS(225),
    [anon_sym_some_DASH_GT] = ACTIONS(227),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(225),
    [anon_sym_cond_DASH_GT] = ACTIONS(227),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(225),
    [sym__symbol_chars] = ACTIONS(227),
    [anon_sym_LPAREN] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(225),
    [anon_sym_RBRACK] = ACTIONS(225),
    [anon_sym_LBRACE] = ACTIONS(225),
    [anon_sym_RBRACE] = ACTIONS(225),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(225),
    [anon_sym_POUND] = ACTIONS(227),
    [anon_sym_POUND_LBRACE] = ACTIONS(225),
    [anon_sym_SEMI] = ACTIONS(225),
    [anon_sym_POUND_BANG] = ACTIONS(225),
    [anon_sym_POUND_] = ACTIONS(225),
    [anon_sym_LPARENcomment] = ACTIONS(225),
    [anon_sym_POUND_LPAREN] = ACTIONS(225),
    [sym_shorthand_function_arg] = ACTIONS(225),
    [sym_defn_function] = ACTIONS(225),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(229),
    [sym_nil] = ACTIONS(231),
    [sym_true] = ACTIONS(231),
    [sym_false] = ACTIONS(231),
    [sym_number_long] = ACTIONS(231),
    [sym_number_double] = ACTIONS(229),
    [anon_sym_BSLASH] = ACTIONS(229),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND_DQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE] = ACTIONS(229),
    [anon_sym_LPARENquote] = ACTIONS(229),
    [anon_sym_RPAREN] = ACTIONS(229),
    [anon_sym_COLON] = ACTIONS(231),
    [anon_sym_COLON_COLON] = ACTIONS(229),
    [anon_sym_DASH_GT] = ACTIONS(231),
    [anon_sym_DASH_GT_GT] = ACTIONS(229),
    [anon_sym_as_DASH_GT] = ACTIONS(229),
    [anon_sym_some_DASH_GT] = ACTIONS(231),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(229),
    [anon_sym_cond_DASH_GT] = ACTIONS(231),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(229),
    [sym__symbol_chars] = ACTIONS(231),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(229),
    [sym_shorthand_function_arg] = ACTIONS(229),
    [sym_defn_function] = ACTIONS(229),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(233),
    [sym_nil] = ACTIONS(235),
    [sym_true] = ACTIONS(235),
    [sym_false] = ACTIONS(235),
    [sym_number_long] = ACTIONS(235),
    [sym_number_double] = ACTIONS(233),
    [anon_sym_BSLASH] = ACTIONS(233),
    [anon_sym_DQUOTE] = ACTIONS(233),
    [anon_sym_POUND_DQUOTE] = ACTIONS(233),
    [anon_sym_SQUOTE] = ACTIONS(233),
    [anon_sym_LPARENquote] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_COLON] = ACTIONS(235),
    [anon_sym_COLON_COLON] = ACTIONS(233),
    [anon_sym_DASH_GT] = ACTIONS(235),
    [anon_sym_DASH_GT_GT] = ACTIONS(233),
    [anon_sym_as_DASH_GT] = ACTIONS(233),
    [anon_sym_some_DASH_GT] = ACTIONS(235),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(233),
    [anon_sym_cond_DASH_GT] = ACTIONS(235),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(233),
    [sym__symbol_chars] = ACTIONS(235),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(233),
    [sym_shorthand_function_arg] = ACTIONS(233),
    [sym_defn_function] = ACTIONS(233),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [sym_nil] = ACTIONS(239),
    [sym_true] = ACTIONS(239),
    [sym_false] = ACTIONS(239),
    [sym_number_long] = ACTIONS(239),
    [sym_number_double] = ACTIONS(237),
    [anon_sym_BSLASH] = ACTIONS(237),
    [anon_sym_DQUOTE] = ACTIONS(237),
    [anon_sym_POUND_DQUOTE] = ACTIONS(237),
    [anon_sym_SQUOTE] = ACTIONS(237),
    [anon_sym_LPARENquote] = ACTIONS(237),
    [anon_sym_RPAREN] = ACTIONS(237),
    [anon_sym_COLON] = ACTIONS(239),
    [anon_sym_COLON_COLON] = ACTIONS(237),
    [anon_sym_DASH_GT] = ACTIONS(239),
    [anon_sym_DASH_GT_GT] = ACTIONS(237),
    [anon_sym_as_DASH_GT] = ACTIONS(237),
    [anon_sym_some_DASH_GT] = ACTIONS(239),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(237),
    [anon_sym_cond_DASH_GT] = ACTIONS(239),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(237),
    [sym__symbol_chars] = ACTIONS(239),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(237),
    [sym_shorthand_function_arg] = ACTIONS(237),
    [sym_defn_function] = ACTIONS(237),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(241),
    [sym_nil] = ACTIONS(243),
    [sym_true] = ACTIONS(243),
    [sym_false] = ACTIONS(243),
    [sym_number_long] = ACTIONS(243),
    [sym_number_double] = ACTIONS(241),
    [anon_sym_BSLASH] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [anon_sym_POUND_DQUOTE] = ACTIONS(241),
    [anon_sym_SQUOTE] = ACTIONS(241),
    [anon_sym_LPARENquote] = ACTIONS(241),
    [anon_sym_RPAREN] = ACTIONS(241),
    [anon_sym_COLON] = ACTIONS(243),
    [anon_sym_COLON_COLON] = ACTIONS(241),
    [anon_sym_DASH_GT] = ACTIONS(243),
    [anon_sym_DASH_GT_GT] = ACTIONS(241),
    [anon_sym_as_DASH_GT] = ACTIONS(241),
    [anon_sym_some_DASH_GT] = ACTIONS(243),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(241),
    [anon_sym_cond_DASH_GT] = ACTIONS(243),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(241),
    [sym__symbol_chars] = ACTIONS(243),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(241),
    [sym_shorthand_function_arg] = ACTIONS(241),
    [sym_defn_function] = ACTIONS(241),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(245),
    [sym_nil] = ACTIONS(247),
    [sym_true] = ACTIONS(247),
    [sym_false] = ACTIONS(247),
    [sym_number_long] = ACTIONS(247),
    [sym_number_double] = ACTIONS(245),
    [anon_sym_BSLASH] = ACTIONS(245),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [anon_sym_POUND_DQUOTE] = ACTIONS(245),
    [anon_sym_SQUOTE] = ACTIONS(245),
    [anon_sym_LPARENquote] = ACTIONS(245),
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_COLON] = ACTIONS(247),
    [anon_sym_COLON_COLON] = ACTIONS(245),
    [anon_sym_DASH_GT] = ACTIONS(247),
    [anon_sym_DASH_GT_GT] = ACTIONS(245),
    [anon_sym_as_DASH_GT] = ACTIONS(245),
    [anon_sym_some_DASH_GT] = ACTIONS(247),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(245),
    [anon_sym_cond_DASH_GT] = ACTIONS(247),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(245),
    [sym__symbol_chars] = ACTIONS(247),
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(245),
    [anon_sym_RBRACK] = ACTIONS(245),
    [anon_sym_LBRACE] = ACTIONS(245),
    [anon_sym_RBRACE] = ACTIONS(245),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(245),
    [anon_sym_POUND] = ACTIONS(247),
    [anon_sym_POUND_LBRACE] = ACTIONS(245),
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_POUND_BANG] = ACTIONS(245),
    [anon_sym_POUND_] = ACTIONS(245),
    [anon_sym_LPARENcomment] = ACTIONS(245),
    [anon_sym_POUND_LPAREN] = ACTIONS(245),
    [sym_shorthand_function_arg] = ACTIONS(245),
    [sym_defn_function] = ACTIONS(245),
  },
  [37] = {
    [sym__anything] = STATE(101),
    [sym__literal] = STATE(101),
    [sym__collection_literal] = STATE(101),
    [sym_boolean] = STATE(101),
    [sym_number] = STATE(101),
    [sym__number] = STATE(25),
    [sym_character] = STATE(101),
    [sym__character] = STATE(26),
    [sym_string] = STATE(101),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(101),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(101),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(101),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(101),
    [sym__symbol] = STATE(31),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(101),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(101),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(101),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym_set] = STATE(101),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(101),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [sym_function] = STATE(101),
    [sym_anonymous_function] = STATE(23),
    [sym_shorthand_function] = STATE(23),
    [aux_sym_program_repeat1] = STATE(101),
    [ts_builtin_sym_end] = ACTIONS(249),
    [sym_nil] = ACTIONS(251),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_defn_function] = ACTIONS(57),
  },
  [38] = {
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
    [anon_sym_DASH_GT] = ACTIONS(255),
    [anon_sym_DASH_GT_GT] = ACTIONS(253),
    [anon_sym_as_DASH_GT] = ACTIONS(253),
    [anon_sym_some_DASH_GT] = ACTIONS(255),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(253),
    [anon_sym_cond_DASH_GT] = ACTIONS(255),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(253),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(253),
    [sym_shorthand_function_arg] = ACTIONS(253),
    [sym_defn_function] = ACTIONS(253),
  },
  [39] = {
    [sym__hex_char] = ACTIONS(257),
  },
  [40] = {
    [sym__octal_num] = STATE(103),
    [aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(259),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(261),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(261),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(263),
    [sym_nil] = ACTIONS(265),
    [sym_true] = ACTIONS(265),
    [sym_false] = ACTIONS(265),
    [sym_number_long] = ACTIONS(265),
    [sym_number_double] = ACTIONS(263),
    [anon_sym_BSLASH] = ACTIONS(263),
    [anon_sym_DQUOTE] = ACTIONS(263),
    [anon_sym_POUND_DQUOTE] = ACTIONS(263),
    [anon_sym_SQUOTE] = ACTIONS(263),
    [anon_sym_LPARENquote] = ACTIONS(263),
    [anon_sym_RPAREN] = ACTIONS(263),
    [anon_sym_COLON] = ACTIONS(265),
    [anon_sym_COLON_COLON] = ACTIONS(263),
    [anon_sym_DASH_GT] = ACTIONS(265),
    [anon_sym_DASH_GT_GT] = ACTIONS(263),
    [anon_sym_as_DASH_GT] = ACTIONS(263),
    [anon_sym_some_DASH_GT] = ACTIONS(265),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(263),
    [anon_sym_cond_DASH_GT] = ACTIONS(265),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(263),
    [sym__symbol_chars] = ACTIONS(265),
    [anon_sym_LPAREN] = ACTIONS(265),
    [anon_sym_LBRACK] = ACTIONS(263),
    [anon_sym_RBRACK] = ACTIONS(263),
    [anon_sym_LBRACE] = ACTIONS(263),
    [anon_sym_RBRACE] = ACTIONS(263),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(263),
    [anon_sym_POUND] = ACTIONS(265),
    [anon_sym_POUND_LBRACE] = ACTIONS(263),
    [anon_sym_SEMI] = ACTIONS(263),
    [anon_sym_POUND_BANG] = ACTIONS(263),
    [anon_sym_POUND_] = ACTIONS(263),
    [anon_sym_LPARENcomment] = ACTIONS(263),
    [anon_sym_POUND_LPAREN] = ACTIONS(263),
    [sym_shorthand_function_arg] = ACTIONS(263),
    [sym_defn_function] = ACTIONS(263),
  },
  [42] = {
    [aux_sym__string_repeat1] = STATE(105),
    [anon_sym_DQUOTE] = ACTIONS(267),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(269),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(269),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(271),
    [sym_nil] = ACTIONS(273),
    [sym_true] = ACTIONS(273),
    [sym_false] = ACTIONS(273),
    [sym_number_long] = ACTIONS(273),
    [sym_number_double] = ACTIONS(271),
    [anon_sym_BSLASH] = ACTIONS(271),
    [anon_sym_DQUOTE] = ACTIONS(271),
    [anon_sym_POUND_DQUOTE] = ACTIONS(271),
    [anon_sym_SQUOTE] = ACTIONS(271),
    [anon_sym_LPARENquote] = ACTIONS(271),
    [anon_sym_RPAREN] = ACTIONS(271),
    [anon_sym_COLON] = ACTIONS(273),
    [anon_sym_COLON_COLON] = ACTIONS(271),
    [anon_sym_DASH_GT] = ACTIONS(273),
    [anon_sym_DASH_GT_GT] = ACTIONS(271),
    [anon_sym_as_DASH_GT] = ACTIONS(271),
    [anon_sym_some_DASH_GT] = ACTIONS(273),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(271),
    [anon_sym_cond_DASH_GT] = ACTIONS(273),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(271),
    [sym__symbol_chars] = ACTIONS(273),
    [anon_sym_LPAREN] = ACTIONS(273),
    [anon_sym_LBRACK] = ACTIONS(271),
    [anon_sym_RBRACK] = ACTIONS(271),
    [anon_sym_LBRACE] = ACTIONS(271),
    [anon_sym_RBRACE] = ACTIONS(271),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(271),
    [anon_sym_POUND] = ACTIONS(273),
    [anon_sym_POUND_LBRACE] = ACTIONS(271),
    [anon_sym_SEMI] = ACTIONS(271),
    [anon_sym_POUND_BANG] = ACTIONS(271),
    [anon_sym_POUND_] = ACTIONS(271),
    [anon_sym_LPARENcomment] = ACTIONS(271),
    [anon_sym_POUND_LPAREN] = ACTIONS(271),
    [sym_shorthand_function_arg] = ACTIONS(271),
    [sym_defn_function] = ACTIONS(271),
  },
  [44] = {
    [aux_sym__regex_repeat1] = STATE(107),
    [anon_sym_DQUOTE] = ACTIONS(275),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(277),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(277),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(279),
    [sym_nil] = ACTIONS(281),
    [sym_true] = ACTIONS(281),
    [sym_false] = ACTIONS(281),
    [sym_number_long] = ACTIONS(281),
    [sym_number_double] = ACTIONS(279),
    [anon_sym_BSLASH] = ACTIONS(279),
    [anon_sym_DQUOTE] = ACTIONS(279),
    [anon_sym_POUND_DQUOTE] = ACTIONS(279),
    [anon_sym_SQUOTE] = ACTIONS(279),
    [anon_sym_LPARENquote] = ACTIONS(279),
    [anon_sym_RPAREN] = ACTIONS(279),
    [anon_sym_COLON] = ACTIONS(281),
    [anon_sym_COLON_COLON] = ACTIONS(279),
    [anon_sym_DASH_GT] = ACTIONS(281),
    [anon_sym_DASH_GT_GT] = ACTIONS(279),
    [anon_sym_as_DASH_GT] = ACTIONS(279),
    [anon_sym_some_DASH_GT] = ACTIONS(281),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(279),
    [anon_sym_cond_DASH_GT] = ACTIONS(281),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(279),
    [sym__symbol_chars] = ACTIONS(281),
    [anon_sym_LPAREN] = ACTIONS(281),
    [anon_sym_LBRACK] = ACTIONS(279),
    [anon_sym_RBRACK] = ACTIONS(279),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_RBRACE] = ACTIONS(279),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(279),
    [anon_sym_POUND] = ACTIONS(281),
    [anon_sym_POUND_LBRACE] = ACTIONS(279),
    [anon_sym_SEMI] = ACTIONS(279),
    [anon_sym_POUND_BANG] = ACTIONS(279),
    [anon_sym_POUND_] = ACTIONS(279),
    [anon_sym_LPARENcomment] = ACTIONS(279),
    [anon_sym_POUND_LPAREN] = ACTIONS(279),
    [sym_shorthand_function_arg] = ACTIONS(279),
    [sym_defn_function] = ACTIONS(279),
  },
  [46] = {
    [sym__anything] = STATE(45),
    [sym__literal] = STATE(45),
    [sym__collection_literal] = STATE(45),
    [sym_boolean] = STATE(45),
    [sym_number] = STATE(45),
    [sym__number] = STATE(25),
    [sym_character] = STATE(45),
    [sym__character] = STATE(26),
    [sym_string] = STATE(45),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(45),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(45),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(45),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(45),
    [sym__symbol] = STATE(31),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(45),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(45),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(45),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym_set] = STATE(45),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(45),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [sym_function] = STATE(45),
    [sym_anonymous_function] = STATE(23),
    [sym_shorthand_function] = STATE(23),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_defn_function] = ACTIONS(57),
  },
  [47] = {
    [sym__number] = STATE(108),
    [sym__string] = STATE(108),
    [sym__keyword] = STATE(108),
    [sym__unqualified_keyword] = STATE(108),
    [sym_qualified_keyword] = STATE(108),
    [sym__symbol] = STATE(108),
    [sym_threading_macro] = STATE(108),
    [sym_qualified_symbol] = STATE(108),
    [sym__one_form] = STATE(108),
    [sym__paren_sequence] = STATE(108),
    [sym__bracket_sequence] = STATE(108),
    [sym__curly_brace_sequence] = STATE(108),
    [aux_sym_ignore_form_repeat1] = STATE(109),
    [sym_number_long] = ACTIONS(283),
    [sym_number_double] = ACTIONS(283),
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
    [anon_sym_] = ACTIONS(285),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(283),
  },
  [48] = {
    [anon_sym_RPAREN] = ACTIONS(287),
  },
  [49] = {
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
    [anon_sym_DASH_GT] = ACTIONS(291),
    [anon_sym_DASH_GT_GT] = ACTIONS(289),
    [anon_sym_as_DASH_GT] = ACTIONS(289),
    [anon_sym_some_DASH_GT] = ACTIONS(291),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(289),
    [anon_sym_cond_DASH_GT] = ACTIONS(291),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(289),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(289),
    [sym_shorthand_function_arg] = ACTIONS(289),
    [sym_defn_function] = ACTIONS(289),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(293),
    [sym_nil] = ACTIONS(295),
    [sym_true] = ACTIONS(295),
    [sym_false] = ACTIONS(295),
    [sym_number_long] = ACTIONS(295),
    [sym_number_double] = ACTIONS(293),
    [anon_sym_BSLASH] = ACTIONS(293),
    [anon_sym_DQUOTE] = ACTIONS(293),
    [anon_sym_POUND_DQUOTE] = ACTIONS(293),
    [anon_sym_SQUOTE] = ACTIONS(293),
    [anon_sym_LPARENquote] = ACTIONS(293),
    [anon_sym_RPAREN] = ACTIONS(293),
    [anon_sym_COLON] = ACTIONS(295),
    [anon_sym_COLON_COLON] = ACTIONS(293),
    [anon_sym_SLASH] = ACTIONS(297),
    [anon_sym_DASH_GT] = ACTIONS(295),
    [anon_sym_DASH_GT_GT] = ACTIONS(293),
    [anon_sym_as_DASH_GT] = ACTIONS(293),
    [anon_sym_some_DASH_GT] = ACTIONS(295),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(293),
    [anon_sym_cond_DASH_GT] = ACTIONS(295),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(293),
    [sym__symbol_chars] = ACTIONS(295),
    [anon_sym_LPAREN] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(293),
    [anon_sym_RBRACK] = ACTIONS(293),
    [anon_sym_LBRACE] = ACTIONS(293),
    [anon_sym_RBRACE] = ACTIONS(293),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(293),
    [anon_sym_POUND] = ACTIONS(295),
    [anon_sym_POUND_LBRACE] = ACTIONS(293),
    [anon_sym_SEMI] = ACTIONS(293),
    [anon_sym_POUND_BANG] = ACTIONS(293),
    [anon_sym_POUND_] = ACTIONS(293),
    [anon_sym_LPARENcomment] = ACTIONS(293),
    [anon_sym_POUND_LPAREN] = ACTIONS(293),
    [sym_shorthand_function_arg] = ACTIONS(293),
    [sym_defn_function] = ACTIONS(293),
  },
  [51] = {
    [sym__symbol_chars] = ACTIONS(299),
  },
  [52] = {
    [sym__anything] = STATE(45),
    [sym__literal] = STATE(45),
    [sym__collection_literal] = STATE(45),
    [sym_boolean] = STATE(45),
    [sym_number] = STATE(45),
    [sym__number] = STATE(25),
    [sym_character] = STATE(45),
    [sym__character] = STATE(26),
    [sym_string] = STATE(45),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(45),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(45),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(45),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(45),
    [sym__symbol] = STATE(31),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(45),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(45),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(45),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym_set] = STATE(45),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(45),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [sym_function] = STATE(45),
    [sym_anonymous_function] = STATE(23),
    [sym_shorthand_function] = STATE(23),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_defn_function] = ACTIONS(57),
  },
  [53] = {
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
    [anon_sym_DASH_GT] = ACTIONS(303),
    [anon_sym_DASH_GT_GT] = ACTIONS(301),
    [anon_sym_as_DASH_GT] = ACTIONS(301),
    [anon_sym_some_DASH_GT] = ACTIONS(303),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(301),
    [anon_sym_cond_DASH_GT] = ACTIONS(303),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(301),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(301),
    [sym_shorthand_function_arg] = ACTIONS(301),
    [sym_defn_function] = ACTIONS(301),
  },
  [54] = {
    [sym__number] = STATE(113),
    [sym__string] = STATE(113),
    [sym__keyword] = STATE(113),
    [sym__unqualified_keyword] = STATE(113),
    [sym_qualified_keyword] = STATE(113),
    [sym__symbol] = STATE(113),
    [sym_threading_macro] = STATE(113),
    [sym_qualified_symbol] = STATE(113),
    [sym__one_form] = STATE(113),
    [sym__paren_sequence] = STATE(113),
    [sym__bracket_sequence] = STATE(113),
    [sym__curly_brace_sequence] = STATE(113),
    [aux_sym_ignore_form_repeat1] = STATE(114),
    [sym_number_long] = ACTIONS(305),
    [sym_number_double] = ACTIONS(305),
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
    [anon_sym_] = ACTIONS(307),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(305),
  },
  [55] = {
    [sym_symbol] = STATE(118),
    [sym__symbol] = STATE(119),
    [sym_threading_macro] = STATE(119),
    [sym_qualified_symbol] = STATE(119),
    [sym_vector] = STATE(120),
    [sym__vector] = STATE(33),
    [sym_function_name] = STATE(121),
    [sym__single_arity_fn] = STATE(122),
    [sym__multi_arity_fn] = STATE(122),
    [sym_params] = STATE(123),
    [aux_sym__multi_arity_fn_repeat1] = STATE(124),
    [anon_sym_DASH_GT] = ACTIONS(309),
    [anon_sym_DASH_GT_GT] = ACTIONS(311),
    [anon_sym_as_DASH_GT] = ACTIONS(311),
    [anon_sym_some_DASH_GT] = ACTIONS(309),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(311),
    [anon_sym_cond_DASH_GT] = ACTIONS(309),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(311),
    [sym__symbol_chars] = ACTIONS(313),
    [anon_sym_LPAREN] = ACTIONS(315),
    [anon_sym_LBRACK] = ACTIONS(37),
  },
  [56] = {
    [sym__anything] = STATE(126),
    [sym__literal] = STATE(126),
    [sym__collection_literal] = STATE(126),
    [sym_boolean] = STATE(126),
    [sym_number] = STATE(126),
    [sym__number] = STATE(25),
    [sym_character] = STATE(126),
    [sym__character] = STATE(26),
    [sym_string] = STATE(126),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(126),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(126),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(126),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(126),
    [sym__symbol] = STATE(31),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(126),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(126),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(126),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym_set] = STATE(126),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(126),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [sym_function] = STATE(126),
    [sym_anonymous_function] = STATE(23),
    [sym_shorthand_function] = STATE(23),
    [aux_sym_program_repeat1] = STATE(126),
    [sym_nil] = ACTIONS(317),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(101),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(319),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_defn_function] = ACTIONS(57),
  },
  [57] = {
    [sym__anything] = STATE(45),
    [sym__literal] = STATE(45),
    [sym__collection_literal] = STATE(45),
    [sym_boolean] = STATE(45),
    [sym_number] = STATE(45),
    [sym__number] = STATE(25),
    [sym_character] = STATE(45),
    [sym__character] = STATE(26),
    [sym_string] = STATE(45),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(45),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(45),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(45),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(45),
    [sym__symbol] = STATE(31),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(45),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(45),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(45),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym_set] = STATE(45),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(45),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [sym_function] = STATE(45),
    [sym_anonymous_function] = STATE(23),
    [sym_shorthand_function] = STATE(23),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_defn_function] = ACTIONS(57),
  },
  [58] = {
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
    [anon_sym_DASH_GT] = ACTIONS(323),
    [anon_sym_DASH_GT_GT] = ACTIONS(321),
    [anon_sym_as_DASH_GT] = ACTIONS(321),
    [anon_sym_some_DASH_GT] = ACTIONS(323),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(321),
    [anon_sym_cond_DASH_GT] = ACTIONS(323),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(321),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(321),
    [sym_shorthand_function_arg] = ACTIONS(321),
    [sym_defn_function] = ACTIONS(321),
  },
  [59] = {
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
    [sym_number_long] = ACTIONS(325),
    [sym_number_double] = ACTIONS(325),
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
    [anon_sym_] = ACTIONS(327),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(325),
  },
  [60] = {
    [sym__anything] = STATE(130),
    [sym__literal] = STATE(130),
    [sym__collection_literal] = STATE(130),
    [sym_boolean] = STATE(130),
    [sym_number] = STATE(130),
    [sym__number] = STATE(25),
    [sym_character] = STATE(130),
    [sym__character] = STATE(26),
    [sym_string] = STATE(130),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(130),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(130),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(130),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(130),
    [sym__symbol] = STATE(31),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(130),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(130),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(130),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym_set] = STATE(130),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(130),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [sym_function] = STATE(130),
    [sym_anonymous_function] = STATE(23),
    [sym_shorthand_function] = STATE(23),
    [aux_sym_program_repeat1] = STATE(130),
    [sym_nil] = ACTIONS(329),
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
    [anon_sym_RBRACK] = ACTIONS(331),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(115),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_defn_function] = ACTIONS(57),
  },
  [61] = {
    [sym__anything] = STATE(45),
    [sym__literal] = STATE(45),
    [sym__collection_literal] = STATE(45),
    [sym_boolean] = STATE(45),
    [sym_number] = STATE(45),
    [sym__number] = STATE(25),
    [sym_character] = STATE(45),
    [sym__character] = STATE(26),
    [sym_string] = STATE(45),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(45),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(45),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(45),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(45),
    [sym__symbol] = STATE(31),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(45),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(45),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(45),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym_set] = STATE(45),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(45),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [sym_function] = STATE(45),
    [sym_anonymous_function] = STATE(23),
    [sym_shorthand_function] = STATE(23),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_defn_function] = ACTIONS(57),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(333),
    [sym_nil] = ACTIONS(335),
    [sym_true] = ACTIONS(335),
    [sym_false] = ACTIONS(335),
    [sym_number_long] = ACTIONS(335),
    [sym_number_double] = ACTIONS(333),
    [anon_sym_BSLASH] = ACTIONS(333),
    [anon_sym_DQUOTE] = ACTIONS(333),
    [anon_sym_POUND_DQUOTE] = ACTIONS(333),
    [anon_sym_SQUOTE] = ACTIONS(333),
    [anon_sym_LPARENquote] = ACTIONS(333),
    [anon_sym_RPAREN] = ACTIONS(333),
    [anon_sym_COLON] = ACTIONS(335),
    [anon_sym_COLON_COLON] = ACTIONS(333),
    [anon_sym_DASH_GT] = ACTIONS(335),
    [anon_sym_DASH_GT_GT] = ACTIONS(333),
    [anon_sym_as_DASH_GT] = ACTIONS(333),
    [anon_sym_some_DASH_GT] = ACTIONS(335),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(333),
    [anon_sym_cond_DASH_GT] = ACTIONS(335),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(333),
    [sym__symbol_chars] = ACTIONS(335),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(333),
    [sym_shorthand_function_arg] = ACTIONS(333),
    [sym_defn_function] = ACTIONS(333),
  },
  [63] = {
    [sym__number] = STATE(131),
    [sym__string] = STATE(131),
    [sym__keyword] = STATE(131),
    [sym__unqualified_keyword] = STATE(131),
    [sym_qualified_keyword] = STATE(131),
    [sym__symbol] = STATE(131),
    [sym_threading_macro] = STATE(131),
    [sym_qualified_symbol] = STATE(131),
    [sym__one_form] = STATE(131),
    [sym__paren_sequence] = STATE(131),
    [sym__bracket_sequence] = STATE(131),
    [sym__curly_brace_sequence] = STATE(131),
    [aux_sym_ignore_form_repeat1] = STATE(132),
    [sym_number_long] = ACTIONS(337),
    [sym_number_double] = ACTIONS(337),
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
    [anon_sym_] = ACTIONS(339),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(337),
  },
  [64] = {
    [sym__anything] = STATE(133),
    [sym__literal] = STATE(133),
    [sym__collection_literal] = STATE(133),
    [sym_boolean] = STATE(133),
    [sym_number] = STATE(133),
    [sym__number] = STATE(25),
    [sym_character] = STATE(133),
    [sym__character] = STATE(26),
    [sym_string] = STATE(133),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(133),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(133),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(133),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(133),
    [sym__symbol] = STATE(31),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(133),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(133),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(133),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym__hash_map_value] = STATE(133),
    [sym_set] = STATE(133),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(133),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [sym_function] = STATE(133),
    [sym_anonymous_function] = STATE(23),
    [sym_shorthand_function] = STATE(23),
    [sym_nil] = ACTIONS(341),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_defn_function] = ACTIONS(57),
  },
  [65] = {
    [sym__anything] = STATE(64),
    [sym__literal] = STATE(64),
    [sym__collection_literal] = STATE(64),
    [sym_boolean] = STATE(64),
    [sym_number] = STATE(64),
    [sym__number] = STATE(25),
    [sym_character] = STATE(64),
    [sym__character] = STATE(26),
    [sym_string] = STATE(64),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(64),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(64),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(64),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(64),
    [sym__symbol] = STATE(31),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(64),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(64),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(64),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym__hash_map_kv_pair] = STATE(135),
    [sym__hash_map_key] = STATE(64),
    [sym_set] = STATE(64),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(64),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [sym_function] = STATE(64),
    [sym_anonymous_function] = STATE(23),
    [sym_shorthand_function] = STATE(23),
    [aux_sym__hash_map_repeat1] = STATE(135),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_defn_function] = ACTIONS(57),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(345),
    [sym_nil] = ACTIONS(347),
    [sym_true] = ACTIONS(347),
    [sym_false] = ACTIONS(347),
    [sym_number_long] = ACTIONS(347),
    [sym_number_double] = ACTIONS(345),
    [anon_sym_BSLASH] = ACTIONS(345),
    [anon_sym_DQUOTE] = ACTIONS(345),
    [anon_sym_POUND_DQUOTE] = ACTIONS(345),
    [anon_sym_SQUOTE] = ACTIONS(345),
    [anon_sym_LPARENquote] = ACTIONS(345),
    [anon_sym_RPAREN] = ACTIONS(345),
    [anon_sym_COLON] = ACTIONS(347),
    [anon_sym_COLON_COLON] = ACTIONS(345),
    [anon_sym_DASH_GT] = ACTIONS(347),
    [anon_sym_DASH_GT_GT] = ACTIONS(345),
    [anon_sym_as_DASH_GT] = ACTIONS(345),
    [anon_sym_some_DASH_GT] = ACTIONS(347),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(345),
    [anon_sym_cond_DASH_GT] = ACTIONS(347),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(345),
    [sym__symbol_chars] = ACTIONS(347),
    [anon_sym_LPAREN] = ACTIONS(347),
    [anon_sym_LBRACK] = ACTIONS(345),
    [anon_sym_RBRACK] = ACTIONS(345),
    [anon_sym_LBRACE] = ACTIONS(345),
    [anon_sym_RBRACE] = ACTIONS(345),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(345),
    [anon_sym_POUND] = ACTIONS(347),
    [anon_sym_POUND_LBRACE] = ACTIONS(345),
    [anon_sym_SEMI] = ACTIONS(345),
    [anon_sym_POUND_BANG] = ACTIONS(345),
    [anon_sym_POUND_] = ACTIONS(345),
    [anon_sym_LPARENcomment] = ACTIONS(345),
    [anon_sym_POUND_LPAREN] = ACTIONS(345),
    [sym_shorthand_function_arg] = ACTIONS(345),
    [sym_defn_function] = ACTIONS(345),
  },
  [67] = {
    [sym__anything] = STATE(64),
    [sym__literal] = STATE(64),
    [sym__collection_literal] = STATE(64),
    [sym_boolean] = STATE(64),
    [sym_number] = STATE(64),
    [sym__number] = STATE(25),
    [sym_character] = STATE(64),
    [sym__character] = STATE(26),
    [sym_string] = STATE(64),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(64),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(64),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(64),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(64),
    [sym__symbol] = STATE(31),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(64),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(64),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(64),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym__hash_map_kv_pair] = STATE(135),
    [sym__hash_map_key] = STATE(64),
    [sym_set] = STATE(64),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(64),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [sym_function] = STATE(64),
    [sym_anonymous_function] = STATE(23),
    [sym_shorthand_function] = STATE(23),
    [aux_sym__hash_map_repeat1] = STATE(135),
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
    [anon_sym_RBRACE] = ACTIONS(349),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(123),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_defn_function] = ACTIONS(57),
  },
  [68] = {
    [anon_sym_LBRACE] = ACTIONS(351),
  },
  [69] = {
    [sym__anything] = STATE(45),
    [sym__literal] = STATE(45),
    [sym__collection_literal] = STATE(45),
    [sym_boolean] = STATE(45),
    [sym_number] = STATE(45),
    [sym__number] = STATE(25),
    [sym_character] = STATE(45),
    [sym__character] = STATE(26),
    [sym_string] = STATE(45),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(45),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(45),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(45),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(45),
    [sym__symbol] = STATE(31),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(45),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(45),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(45),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym_set] = STATE(45),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(45),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [sym_function] = STATE(45),
    [sym_anonymous_function] = STATE(23),
    [sym_shorthand_function] = STATE(23),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_defn_function] = ACTIONS(57),
  },
  [70] = {
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
    [anon_sym_DASH_GT] = ACTIONS(355),
    [anon_sym_DASH_GT_GT] = ACTIONS(353),
    [anon_sym_as_DASH_GT] = ACTIONS(353),
    [anon_sym_some_DASH_GT] = ACTIONS(355),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(353),
    [anon_sym_cond_DASH_GT] = ACTIONS(355),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(353),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(353),
    [sym_shorthand_function_arg] = ACTIONS(353),
    [sym_defn_function] = ACTIONS(353),
  },
  [71] = {
    [sym__number] = STATE(138),
    [sym__string] = STATE(138),
    [sym__keyword] = STATE(138),
    [sym__unqualified_keyword] = STATE(138),
    [sym_qualified_keyword] = STATE(138),
    [sym__symbol] = STATE(138),
    [sym_threading_macro] = STATE(138),
    [sym_qualified_symbol] = STATE(138),
    [sym__one_form] = STATE(138),
    [sym__paren_sequence] = STATE(138),
    [sym__bracket_sequence] = STATE(138),
    [sym__curly_brace_sequence] = STATE(138),
    [aux_sym_ignore_form_repeat1] = STATE(139),
    [sym_number_long] = ACTIONS(357),
    [sym_number_double] = ACTIONS(357),
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
    [anon_sym_] = ACTIONS(359),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(357),
  },
  [72] = {
    [sym__anything] = STATE(141),
    [sym__literal] = STATE(141),
    [sym__collection_literal] = STATE(141),
    [sym_boolean] = STATE(141),
    [sym_number] = STATE(141),
    [sym__number] = STATE(25),
    [sym_character] = STATE(141),
    [sym__character] = STATE(26),
    [sym_string] = STATE(141),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(141),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(141),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(141),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(141),
    [sym__symbol] = STATE(31),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(141),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(141),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(141),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym_set] = STATE(141),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(141),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [sym_function] = STATE(141),
    [sym_anonymous_function] = STATE(23),
    [sym_shorthand_function] = STATE(23),
    [aux_sym_program_repeat1] = STATE(141),
    [sym_nil] = ACTIONS(361),
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
    [anon_sym_RBRACE] = ACTIONS(363),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(135),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_defn_function] = ACTIONS(57),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(365),
    [sym_nil] = ACTIONS(367),
    [sym_true] = ACTIONS(367),
    [sym_false] = ACTIONS(367),
    [sym_number_long] = ACTIONS(367),
    [sym_number_double] = ACTIONS(365),
    [anon_sym_BSLASH] = ACTIONS(365),
    [anon_sym_DQUOTE] = ACTIONS(365),
    [anon_sym_POUND_DQUOTE] = ACTIONS(365),
    [anon_sym_SQUOTE] = ACTIONS(365),
    [anon_sym_LPARENquote] = ACTIONS(365),
    [anon_sym_RPAREN] = ACTIONS(365),
    [anon_sym_COLON] = ACTIONS(367),
    [anon_sym_COLON_COLON] = ACTIONS(365),
    [anon_sym_DASH_GT] = ACTIONS(367),
    [anon_sym_DASH_GT_GT] = ACTIONS(365),
    [anon_sym_as_DASH_GT] = ACTIONS(365),
    [anon_sym_some_DASH_GT] = ACTIONS(367),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(365),
    [anon_sym_cond_DASH_GT] = ACTIONS(367),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(365),
    [sym__symbol_chars] = ACTIONS(367),
    [anon_sym_LPAREN] = ACTIONS(367),
    [anon_sym_LBRACK] = ACTIONS(365),
    [anon_sym_RBRACK] = ACTIONS(365),
    [anon_sym_LBRACE] = ACTIONS(365),
    [anon_sym_RBRACE] = ACTIONS(365),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(365),
    [anon_sym_POUND] = ACTIONS(367),
    [anon_sym_POUND_LBRACE] = ACTIONS(365),
    [anon_sym_SEMI] = ACTIONS(365),
    [anon_sym_POUND_BANG] = ACTIONS(365),
    [anon_sym_POUND_] = ACTIONS(365),
    [anon_sym_LPARENcomment] = ACTIONS(365),
    [anon_sym_POUND_LPAREN] = ACTIONS(365),
    [sym_shorthand_function_arg] = ACTIONS(365),
    [sym_defn_function] = ACTIONS(365),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(369),
    [sym_nil] = ACTIONS(371),
    [sym_true] = ACTIONS(371),
    [sym_false] = ACTIONS(371),
    [sym_number_long] = ACTIONS(371),
    [sym_number_double] = ACTIONS(369),
    [anon_sym_BSLASH] = ACTIONS(369),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [anon_sym_POUND_DQUOTE] = ACTIONS(369),
    [anon_sym_SQUOTE] = ACTIONS(369),
    [anon_sym_LPARENquote] = ACTIONS(369),
    [anon_sym_RPAREN] = ACTIONS(369),
    [anon_sym_COLON] = ACTIONS(371),
    [anon_sym_COLON_COLON] = ACTIONS(369),
    [anon_sym_DASH_GT] = ACTIONS(371),
    [anon_sym_DASH_GT_GT] = ACTIONS(369),
    [anon_sym_as_DASH_GT] = ACTIONS(369),
    [anon_sym_some_DASH_GT] = ACTIONS(371),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(369),
    [anon_sym_cond_DASH_GT] = ACTIONS(371),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(369),
    [sym__symbol_chars] = ACTIONS(371),
    [anon_sym_LPAREN] = ACTIONS(371),
    [anon_sym_LBRACK] = ACTIONS(369),
    [anon_sym_RBRACK] = ACTIONS(369),
    [anon_sym_LBRACE] = ACTIONS(369),
    [anon_sym_RBRACE] = ACTIONS(369),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(369),
    [anon_sym_POUND] = ACTIONS(371),
    [anon_sym_POUND_LBRACE] = ACTIONS(369),
    [anon_sym_SEMI] = ACTIONS(369),
    [anon_sym_POUND_BANG] = ACTIONS(369),
    [anon_sym_POUND_] = ACTIONS(369),
    [anon_sym_LPARENcomment] = ACTIONS(369),
    [anon_sym_POUND_LPAREN] = ACTIONS(369),
    [sym_shorthand_function_arg] = ACTIONS(369),
    [sym_defn_function] = ACTIONS(369),
  },
  [75] = {
    [aux_sym__string_repeat1] = STATE(143),
    [anon_sym_DQUOTE] = ACTIONS(373),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(375),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(375),
  },
  [76] = {
    [sym__keyword_chars] = ACTIONS(377),
  },
  [77] = {
    [sym__keyword_chars] = ACTIONS(379),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(91),
    [sym_shorthand_function_arg] = ACTIONS(91),
    [sym_defn_function] = ACTIONS(91),
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
    [anon_sym_SLASH] = ACTIONS(381),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(95),
    [sym_shorthand_function_arg] = ACTIONS(95),
    [sym_defn_function] = ACTIONS(95),
  },
  [80] = {
    [sym__number] = STATE(148),
    [sym__string] = STATE(148),
    [sym__keyword] = STATE(148),
    [sym__unqualified_keyword] = STATE(148),
    [sym_qualified_keyword] = STATE(148),
    [sym__symbol] = STATE(148),
    [sym_threading_macro] = STATE(148),
    [sym_qualified_symbol] = STATE(148),
    [sym__one_form] = STATE(148),
    [sym__paren_sequence] = STATE(148),
    [sym__bracket_sequence] = STATE(148),
    [sym__curly_brace_sequence] = STATE(148),
    [aux_sym_comment_macro_repeat1] = STATE(148),
    [sym_number_long] = ACTIONS(383),
    [sym_number_double] = ACTIONS(383),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(385),
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
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(383),
  },
  [81] = {
    [sym__number] = STATE(159),
    [sym__string] = STATE(159),
    [sym__keyword] = STATE(159),
    [sym__unqualified_keyword] = STATE(159),
    [sym_qualified_keyword] = STATE(159),
    [sym__symbol] = STATE(159),
    [sym_threading_macro] = STATE(159),
    [sym_qualified_symbol] = STATE(159),
    [sym__one_form] = STATE(159),
    [sym__paren_sequence] = STATE(159),
    [sym__bracket_sequence] = STATE(159),
    [sym__curly_brace_sequence] = STATE(159),
    [aux_sym_comment_macro_repeat1] = STATE(159),
    [sym_number_long] = ACTIONS(387),
    [sym_number_double] = ACTIONS(387),
    [anon_sym_DQUOTE] = ACTIONS(389),
    [anon_sym_COLON] = ACTIONS(391),
    [anon_sym_COLON_COLON] = ACTIONS(393),
    [anon_sym_DASH_GT] = ACTIONS(395),
    [anon_sym_DASH_GT_GT] = ACTIONS(395),
    [anon_sym_as_DASH_GT] = ACTIONS(395),
    [anon_sym_some_DASH_GT] = ACTIONS(395),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(395),
    [anon_sym_cond_DASH_GT] = ACTIONS(395),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(395),
    [sym__symbol_chars] = ACTIONS(397),
    [anon_sym_LPAREN] = ACTIONS(399),
    [anon_sym_LBRACK] = ACTIONS(401),
    [anon_sym_RBRACK] = ACTIONS(403),
    [anon_sym_LBRACE] = ACTIONS(405),
    [anon_sym_POUND] = ACTIONS(407),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(387),
  },
  [82] = {
    [sym__number] = STATE(170),
    [sym__string] = STATE(170),
    [sym__keyword] = STATE(170),
    [sym__unqualified_keyword] = STATE(170),
    [sym_qualified_keyword] = STATE(170),
    [sym__symbol] = STATE(170),
    [sym_threading_macro] = STATE(170),
    [sym_qualified_symbol] = STATE(170),
    [sym__one_form] = STATE(170),
    [sym__paren_sequence] = STATE(170),
    [sym__bracket_sequence] = STATE(170),
    [sym__curly_brace_sequence] = STATE(170),
    [aux_sym_comment_macro_repeat1] = STATE(170),
    [sym_number_long] = ACTIONS(409),
    [sym_number_double] = ACTIONS(409),
    [anon_sym_DQUOTE] = ACTIONS(411),
    [anon_sym_COLON] = ACTIONS(413),
    [anon_sym_COLON_COLON] = ACTIONS(415),
    [anon_sym_DASH_GT] = ACTIONS(417),
    [anon_sym_DASH_GT_GT] = ACTIONS(417),
    [anon_sym_as_DASH_GT] = ACTIONS(417),
    [anon_sym_some_DASH_GT] = ACTIONS(417),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(417),
    [anon_sym_cond_DASH_GT] = ACTIONS(417),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(417),
    [sym__symbol_chars] = ACTIONS(419),
    [anon_sym_LPAREN] = ACTIONS(421),
    [anon_sym_LBRACK] = ACTIONS(423),
    [anon_sym_LBRACE] = ACTIONS(425),
    [anon_sym_RBRACE] = ACTIONS(427),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(409),
  },
  [83] = {
    [anon_sym_LBRACE] = ACTIONS(431),
  },
  [84] = {
    [aux_sym_ignore_form_repeat1] = STATE(172),
    [ts_builtin_sym_end] = ACTIONS(433),
    [sym_nil] = ACTIONS(435),
    [sym_true] = ACTIONS(435),
    [sym_false] = ACTIONS(435),
    [sym_number_long] = ACTIONS(435),
    [sym_number_double] = ACTIONS(435),
    [anon_sym_BSLASH] = ACTIONS(435),
    [anon_sym_DQUOTE] = ACTIONS(435),
    [anon_sym_POUND_DQUOTE] = ACTIONS(435),
    [anon_sym_SQUOTE] = ACTIONS(435),
    [anon_sym_LPARENquote] = ACTIONS(435),
    [anon_sym_COLON] = ACTIONS(435),
    [anon_sym_COLON_COLON] = ACTIONS(435),
    [anon_sym_DASH_GT] = ACTIONS(435),
    [anon_sym_DASH_GT_GT] = ACTIONS(435),
    [anon_sym_as_DASH_GT] = ACTIONS(435),
    [anon_sym_some_DASH_GT] = ACTIONS(435),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(435),
    [anon_sym_cond_DASH_GT] = ACTIONS(435),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(435),
    [sym__symbol_chars] = ACTIONS(435),
    [anon_sym_LPAREN] = ACTIONS(435),
    [anon_sym_LBRACK] = ACTIONS(435),
    [anon_sym_LBRACE] = ACTIONS(435),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(435),
    [anon_sym_POUND] = ACTIONS(435),
    [anon_sym_POUND_LBRACE] = ACTIONS(435),
    [anon_sym_SEMI] = ACTIONS(435),
    [anon_sym_POUND_BANG] = ACTIONS(435),
    [anon_sym_POUND_] = ACTIONS(435),
    [anon_sym_] = ACTIONS(437),
    [anon_sym_LPARENcomment] = ACTIONS(435),
    [anon_sym_POUND_LPAREN] = ACTIONS(435),
    [sym_defn_function] = ACTIONS(435),
  },
  [85] = {
    [sym__number] = STATE(173),
    [sym__string] = STATE(173),
    [sym__keyword] = STATE(173),
    [sym__unqualified_keyword] = STATE(173),
    [sym_qualified_keyword] = STATE(173),
    [sym__symbol] = STATE(173),
    [sym_threading_macro] = STATE(173),
    [sym_qualified_symbol] = STATE(173),
    [sym__one_form] = STATE(173),
    [sym__paren_sequence] = STATE(173),
    [sym__bracket_sequence] = STATE(173),
    [sym__curly_brace_sequence] = STATE(173),
    [aux_sym_ignore_form_repeat1] = STATE(174),
    [sym_number_long] = ACTIONS(439),
    [sym_number_double] = ACTIONS(439),
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
    [anon_sym_] = ACTIONS(441),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(439),
  },
  [86] = {
    [aux_sym__string_repeat1] = STATE(176),
    [anon_sym_DQUOTE] = ACTIONS(443),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(445),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(445),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(447),
    [sym_nil] = ACTIONS(449),
    [sym_true] = ACTIONS(449),
    [sym_false] = ACTIONS(449),
    [sym_number_long] = ACTIONS(449),
    [sym_number_double] = ACTIONS(447),
    [anon_sym_BSLASH] = ACTIONS(447),
    [anon_sym_DQUOTE] = ACTIONS(447),
    [anon_sym_POUND_DQUOTE] = ACTIONS(447),
    [anon_sym_SQUOTE] = ACTIONS(447),
    [anon_sym_LPARENquote] = ACTIONS(447),
    [anon_sym_RPAREN] = ACTIONS(447),
    [anon_sym_COLON] = ACTIONS(449),
    [anon_sym_COLON_COLON] = ACTIONS(447),
    [anon_sym_DASH_GT] = ACTIONS(449),
    [anon_sym_DASH_GT_GT] = ACTIONS(447),
    [anon_sym_as_DASH_GT] = ACTIONS(447),
    [anon_sym_some_DASH_GT] = ACTIONS(449),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(447),
    [anon_sym_cond_DASH_GT] = ACTIONS(449),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(447),
    [sym__symbol_chars] = ACTIONS(449),
    [anon_sym_LPAREN] = ACTIONS(449),
    [anon_sym_LBRACK] = ACTIONS(447),
    [anon_sym_RBRACK] = ACTIONS(447),
    [anon_sym_LBRACE] = ACTIONS(447),
    [anon_sym_RBRACE] = ACTIONS(447),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(447),
    [anon_sym_POUND] = ACTIONS(449),
    [anon_sym_POUND_LBRACE] = ACTIONS(447),
    [anon_sym_SEMI] = ACTIONS(447),
    [anon_sym_POUND_BANG] = ACTIONS(447),
    [anon_sym_POUND_] = ACTIONS(447),
    [anon_sym_LPARENcomment] = ACTIONS(447),
    [anon_sym_POUND_LPAREN] = ACTIONS(447),
    [sym_shorthand_function_arg] = ACTIONS(447),
    [sym_defn_function] = ACTIONS(447),
  },
  [88] = {
    [sym__keyword_chars] = ACTIONS(451),
  },
  [89] = {
    [sym__keyword_chars] = ACTIONS(453),
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
    [anon_sym_SLASH] = ACTIONS(455),
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
    [sym_number_long] = ACTIONS(457),
    [sym_number_double] = ACTIONS(457),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(459),
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
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(457),
  },
  [93] = {
    [sym__number] = STATE(183),
    [sym__string] = STATE(183),
    [sym__keyword] = STATE(183),
    [sym__unqualified_keyword] = STATE(183),
    [sym_qualified_keyword] = STATE(183),
    [sym__symbol] = STATE(183),
    [sym_threading_macro] = STATE(183),
    [sym_qualified_symbol] = STATE(183),
    [sym__one_form] = STATE(183),
    [sym__paren_sequence] = STATE(183),
    [sym__bracket_sequence] = STATE(183),
    [sym__curly_brace_sequence] = STATE(183),
    [aux_sym_comment_macro_repeat1] = STATE(183),
    [sym_number_long] = ACTIONS(461),
    [sym_number_double] = ACTIONS(461),
    [anon_sym_DQUOTE] = ACTIONS(389),
    [anon_sym_COLON] = ACTIONS(391),
    [anon_sym_COLON_COLON] = ACTIONS(393),
    [anon_sym_DASH_GT] = ACTIONS(395),
    [anon_sym_DASH_GT_GT] = ACTIONS(395),
    [anon_sym_as_DASH_GT] = ACTIONS(395),
    [anon_sym_some_DASH_GT] = ACTIONS(395),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(395),
    [anon_sym_cond_DASH_GT] = ACTIONS(395),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(395),
    [sym__symbol_chars] = ACTIONS(397),
    [anon_sym_LPAREN] = ACTIONS(399),
    [anon_sym_LBRACK] = ACTIONS(401),
    [anon_sym_RBRACK] = ACTIONS(463),
    [anon_sym_LBRACE] = ACTIONS(405),
    [anon_sym_POUND] = ACTIONS(407),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(461),
  },
  [94] = {
    [sym__number] = STATE(185),
    [sym__string] = STATE(185),
    [sym__keyword] = STATE(185),
    [sym__unqualified_keyword] = STATE(185),
    [sym_qualified_keyword] = STATE(185),
    [sym__symbol] = STATE(185),
    [sym_threading_macro] = STATE(185),
    [sym_qualified_symbol] = STATE(185),
    [sym__one_form] = STATE(185),
    [sym__paren_sequence] = STATE(185),
    [sym__bracket_sequence] = STATE(185),
    [sym__curly_brace_sequence] = STATE(185),
    [aux_sym_comment_macro_repeat1] = STATE(185),
    [sym_number_long] = ACTIONS(465),
    [sym_number_double] = ACTIONS(465),
    [anon_sym_DQUOTE] = ACTIONS(411),
    [anon_sym_COLON] = ACTIONS(413),
    [anon_sym_COLON_COLON] = ACTIONS(415),
    [anon_sym_DASH_GT] = ACTIONS(417),
    [anon_sym_DASH_GT_GT] = ACTIONS(417),
    [anon_sym_as_DASH_GT] = ACTIONS(417),
    [anon_sym_some_DASH_GT] = ACTIONS(417),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(417),
    [anon_sym_cond_DASH_GT] = ACTIONS(417),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(417),
    [sym__symbol_chars] = ACTIONS(419),
    [anon_sym_LPAREN] = ACTIONS(421),
    [anon_sym_LBRACK] = ACTIONS(423),
    [anon_sym_LBRACE] = ACTIONS(425),
    [anon_sym_RBRACE] = ACTIONS(467),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(465),
  },
  [95] = {
    [anon_sym_LBRACE] = ACTIONS(469),
  },
  [96] = {
    [sym__number] = STATE(188),
    [sym__string] = STATE(188),
    [sym__keyword] = STATE(188),
    [sym__unqualified_keyword] = STATE(188),
    [sym_qualified_keyword] = STATE(188),
    [sym__symbol] = STATE(188),
    [sym_threading_macro] = STATE(188),
    [sym_qualified_symbol] = STATE(188),
    [sym__one_form] = STATE(188),
    [sym__paren_sequence] = STATE(188),
    [sym__bracket_sequence] = STATE(188),
    [sym__curly_brace_sequence] = STATE(188),
    [aux_sym_comment_macro_repeat1] = STATE(188),
    [sym_number_long] = ACTIONS(471),
    [sym_number_double] = ACTIONS(471),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(473),
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
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(471),
  },
  [97] = {
    [sym__anything] = STATE(45),
    [sym__literal] = STATE(45),
    [sym__collection_literal] = STATE(45),
    [sym_boolean] = STATE(45),
    [sym_number] = STATE(45),
    [sym__number] = STATE(25),
    [sym_character] = STATE(45),
    [sym__character] = STATE(26),
    [sym_string] = STATE(45),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(45),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(45),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(45),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(45),
    [sym__symbol] = STATE(31),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(45),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(45),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(45),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym_set] = STATE(45),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(45),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [sym_function] = STATE(45),
    [sym_anonymous_function] = STATE(23),
    [sym_shorthand_function] = STATE(23),
    [sym_nil] = ACTIONS(77),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(187),
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
    [anon_sym_POUND_] = ACTIONS(191),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_defn_function] = ACTIONS(57),
  },
  [98] = {
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
    [anon_sym_DASH_GT] = ACTIONS(477),
    [anon_sym_DASH_GT_GT] = ACTIONS(475),
    [anon_sym_as_DASH_GT] = ACTIONS(475),
    [anon_sym_some_DASH_GT] = ACTIONS(477),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(475),
    [anon_sym_cond_DASH_GT] = ACTIONS(477),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(475),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(475),
    [sym_shorthand_function_arg] = ACTIONS(475),
    [sym_defn_function] = ACTIONS(475),
  },
  [99] = {
    [sym__number] = STATE(189),
    [sym__string] = STATE(189),
    [sym__keyword] = STATE(189),
    [sym__unqualified_keyword] = STATE(189),
    [sym_qualified_keyword] = STATE(189),
    [sym__symbol] = STATE(189),
    [sym_threading_macro] = STATE(189),
    [sym_qualified_symbol] = STATE(189),
    [sym__one_form] = STATE(189),
    [sym__paren_sequence] = STATE(189),
    [sym__bracket_sequence] = STATE(189),
    [sym__curly_brace_sequence] = STATE(189),
    [aux_sym_ignore_form_repeat1] = STATE(190),
    [sym_number_long] = ACTIONS(479),
    [sym_number_double] = ACTIONS(479),
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
    [anon_sym_] = ACTIONS(481),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(479),
  },
  [100] = {
    [sym__anything] = STATE(192),
    [sym__literal] = STATE(192),
    [sym__collection_literal] = STATE(192),
    [sym_boolean] = STATE(192),
    [sym_number] = STATE(192),
    [sym__number] = STATE(25),
    [sym_character] = STATE(192),
    [sym__character] = STATE(26),
    [sym_string] = STATE(192),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(192),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(192),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(192),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(192),
    [sym__symbol] = STATE(31),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(192),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(192),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(192),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym_set] = STATE(192),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(192),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [sym_function] = STATE(192),
    [sym_anonymous_function] = STATE(23),
    [sym_shorthand_function] = STATE(23),
    [aux_sym_shorthand_function_repeat1] = STATE(192),
    [sym_nil] = ACTIONS(483),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(187),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(485),
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
    [anon_sym_POUND_] = ACTIONS(191),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(487),
    [sym_defn_function] = ACTIONS(57),
  },
  [101] = {
    [sym__anything] = STATE(101),
    [sym__literal] = STATE(101),
    [sym__collection_literal] = STATE(101),
    [sym_boolean] = STATE(101),
    [sym_number] = STATE(101),
    [sym__number] = STATE(25),
    [sym_character] = STATE(101),
    [sym__character] = STATE(26),
    [sym_string] = STATE(101),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(101),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(101),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(101),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(101),
    [sym__symbol] = STATE(31),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(101),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(101),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(101),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym_set] = STATE(101),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(101),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [sym_function] = STATE(101),
    [sym_anonymous_function] = STATE(23),
    [sym_shorthand_function] = STATE(23),
    [aux_sym_program_repeat1] = STATE(101),
    [ts_builtin_sym_end] = ACTIONS(489),
    [sym_nil] = ACTIONS(491),
    [sym_true] = ACTIONS(494),
    [sym_false] = ACTIONS(494),
    [sym_number_long] = ACTIONS(497),
    [sym_number_double] = ACTIONS(500),
    [anon_sym_BSLASH] = ACTIONS(503),
    [anon_sym_DQUOTE] = ACTIONS(506),
    [anon_sym_POUND_DQUOTE] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(512),
    [anon_sym_LPARENquote] = ACTIONS(515),
    [anon_sym_COLON] = ACTIONS(518),
    [anon_sym_COLON_COLON] = ACTIONS(521),
    [anon_sym_DASH_GT] = ACTIONS(524),
    [anon_sym_DASH_GT_GT] = ACTIONS(527),
    [anon_sym_as_DASH_GT] = ACTIONS(527),
    [anon_sym_some_DASH_GT] = ACTIONS(524),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(527),
    [anon_sym_cond_DASH_GT] = ACTIONS(524),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(527),
    [sym__symbol_chars] = ACTIONS(530),
    [anon_sym_LPAREN] = ACTIONS(533),
    [anon_sym_LBRACK] = ACTIONS(536),
    [anon_sym_LBRACE] = ACTIONS(539),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(542),
    [anon_sym_POUND] = ACTIONS(545),
    [anon_sym_POUND_LBRACE] = ACTIONS(548),
    [anon_sym_SEMI] = ACTIONS(551),
    [anon_sym_POUND_BANG] = ACTIONS(554),
    [anon_sym_POUND_] = ACTIONS(557),
    [anon_sym_LPARENcomment] = ACTIONS(560),
    [anon_sym_POUND_LPAREN] = ACTIONS(563),
    [sym_defn_function] = ACTIONS(566),
  },
  [102] = {
    [sym__hex_char] = ACTIONS(569),
  },
  [103] = {
    [ts_builtin_sym_end] = ACTIONS(571),
    [sym_nil] = ACTIONS(573),
    [sym_true] = ACTIONS(573),
    [sym_false] = ACTIONS(573),
    [sym_number_long] = ACTIONS(573),
    [sym_number_double] = ACTIONS(571),
    [anon_sym_BSLASH] = ACTIONS(571),
    [anon_sym_DQUOTE] = ACTIONS(571),
    [anon_sym_POUND_DQUOTE] = ACTIONS(571),
    [anon_sym_SQUOTE] = ACTIONS(571),
    [anon_sym_LPARENquote] = ACTIONS(571),
    [anon_sym_RPAREN] = ACTIONS(571),
    [anon_sym_COLON] = ACTIONS(573),
    [anon_sym_COLON_COLON] = ACTIONS(571),
    [anon_sym_DASH_GT] = ACTIONS(573),
    [anon_sym_DASH_GT_GT] = ACTIONS(571),
    [anon_sym_as_DASH_GT] = ACTIONS(571),
    [anon_sym_some_DASH_GT] = ACTIONS(573),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(571),
    [anon_sym_cond_DASH_GT] = ACTIONS(573),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(571),
    [sym__symbol_chars] = ACTIONS(573),
    [anon_sym_LPAREN] = ACTIONS(573),
    [anon_sym_LBRACK] = ACTIONS(571),
    [anon_sym_RBRACK] = ACTIONS(571),
    [anon_sym_LBRACE] = ACTIONS(571),
    [anon_sym_RBRACE] = ACTIONS(571),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(571),
    [anon_sym_POUND] = ACTIONS(573),
    [anon_sym_POUND_LBRACE] = ACTIONS(571),
    [anon_sym_SEMI] = ACTIONS(571),
    [anon_sym_POUND_BANG] = ACTIONS(571),
    [anon_sym_POUND_] = ACTIONS(571),
    [anon_sym_LPARENcomment] = ACTIONS(571),
    [anon_sym_POUND_LPAREN] = ACTIONS(571),
    [sym_shorthand_function_arg] = ACTIONS(571),
    [sym_defn_function] = ACTIONS(571),
  },
  [104] = {
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
    [anon_sym_DASH_GT] = ACTIONS(577),
    [anon_sym_DASH_GT_GT] = ACTIONS(575),
    [anon_sym_as_DASH_GT] = ACTIONS(575),
    [anon_sym_some_DASH_GT] = ACTIONS(577),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(575),
    [anon_sym_cond_DASH_GT] = ACTIONS(577),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(575),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(575),
    [sym_shorthand_function_arg] = ACTIONS(575),
    [sym_defn_function] = ACTIONS(575),
  },
  [105] = {
    [aux_sym__string_repeat1] = STATE(105),
    [anon_sym_DQUOTE] = ACTIONS(579),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(581),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(581),
  },
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(584),
    [sym_nil] = ACTIONS(586),
    [sym_true] = ACTIONS(586),
    [sym_false] = ACTIONS(586),
    [sym_number_long] = ACTIONS(586),
    [sym_number_double] = ACTIONS(584),
    [anon_sym_BSLASH] = ACTIONS(584),
    [anon_sym_DQUOTE] = ACTIONS(584),
    [anon_sym_POUND_DQUOTE] = ACTIONS(584),
    [anon_sym_SQUOTE] = ACTIONS(584),
    [anon_sym_LPARENquote] = ACTIONS(584),
    [anon_sym_RPAREN] = ACTIONS(584),
    [anon_sym_COLON] = ACTIONS(586),
    [anon_sym_COLON_COLON] = ACTIONS(584),
    [anon_sym_DASH_GT] = ACTIONS(586),
    [anon_sym_DASH_GT_GT] = ACTIONS(584),
    [anon_sym_as_DASH_GT] = ACTIONS(584),
    [anon_sym_some_DASH_GT] = ACTIONS(586),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(584),
    [anon_sym_cond_DASH_GT] = ACTIONS(586),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(584),
    [sym__symbol_chars] = ACTIONS(586),
    [anon_sym_LPAREN] = ACTIONS(586),
    [anon_sym_LBRACK] = ACTIONS(584),
    [anon_sym_RBRACK] = ACTIONS(584),
    [anon_sym_LBRACE] = ACTIONS(584),
    [anon_sym_RBRACE] = ACTIONS(584),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(584),
    [anon_sym_POUND] = ACTIONS(586),
    [anon_sym_POUND_LBRACE] = ACTIONS(584),
    [anon_sym_SEMI] = ACTIONS(584),
    [anon_sym_POUND_BANG] = ACTIONS(584),
    [anon_sym_POUND_] = ACTIONS(584),
    [anon_sym_LPARENcomment] = ACTIONS(584),
    [anon_sym_POUND_LPAREN] = ACTIONS(584),
    [sym_shorthand_function_arg] = ACTIONS(584),
    [sym_defn_function] = ACTIONS(584),
  },
  [107] = {
    [aux_sym__regex_repeat1] = STATE(107),
    [anon_sym_DQUOTE] = ACTIONS(588),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(590),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(590),
  },
  [108] = {
    [aux_sym_ignore_form_repeat1] = STATE(194),
    [anon_sym_RPAREN] = ACTIONS(435),
    [anon_sym_] = ACTIONS(593),
  },
  [109] = {
    [sym__number] = STATE(195),
    [sym__string] = STATE(195),
    [sym__keyword] = STATE(195),
    [sym__unqualified_keyword] = STATE(195),
    [sym_qualified_keyword] = STATE(195),
    [sym__symbol] = STATE(195),
    [sym_threading_macro] = STATE(195),
    [sym_qualified_symbol] = STATE(195),
    [sym__one_form] = STATE(195),
    [sym__paren_sequence] = STATE(195),
    [sym__bracket_sequence] = STATE(195),
    [sym__curly_brace_sequence] = STATE(195),
    [aux_sym_ignore_form_repeat1] = STATE(174),
    [sym_number_long] = ACTIONS(595),
    [sym_number_double] = ACTIONS(595),
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
    [anon_sym_] = ACTIONS(441),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(595),
  },
  [110] = {
    [ts_builtin_sym_end] = ACTIONS(597),
    [sym_nil] = ACTIONS(599),
    [sym_true] = ACTIONS(599),
    [sym_false] = ACTIONS(599),
    [sym_number_long] = ACTIONS(599),
    [sym_number_double] = ACTIONS(597),
    [anon_sym_BSLASH] = ACTIONS(597),
    [anon_sym_DQUOTE] = ACTIONS(597),
    [anon_sym_POUND_DQUOTE] = ACTIONS(597),
    [anon_sym_SQUOTE] = ACTIONS(597),
    [anon_sym_LPARENquote] = ACTIONS(597),
    [anon_sym_RPAREN] = ACTIONS(597),
    [anon_sym_COLON] = ACTIONS(599),
    [anon_sym_COLON_COLON] = ACTIONS(597),
    [anon_sym_DASH_GT] = ACTIONS(599),
    [anon_sym_DASH_GT_GT] = ACTIONS(597),
    [anon_sym_as_DASH_GT] = ACTIONS(597),
    [anon_sym_some_DASH_GT] = ACTIONS(599),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(597),
    [anon_sym_cond_DASH_GT] = ACTIONS(599),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(597),
    [sym__symbol_chars] = ACTIONS(599),
    [anon_sym_LPAREN] = ACTIONS(599),
    [anon_sym_LBRACK] = ACTIONS(597),
    [anon_sym_RBRACK] = ACTIONS(597),
    [anon_sym_LBRACE] = ACTIONS(597),
    [anon_sym_RBRACE] = ACTIONS(597),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(597),
    [anon_sym_POUND] = ACTIONS(599),
    [anon_sym_POUND_LBRACE] = ACTIONS(597),
    [anon_sym_SEMI] = ACTIONS(597),
    [anon_sym_POUND_BANG] = ACTIONS(597),
    [anon_sym_POUND_] = ACTIONS(597),
    [anon_sym_LPARENcomment] = ACTIONS(597),
    [anon_sym_POUND_LPAREN] = ACTIONS(597),
    [sym_shorthand_function_arg] = ACTIONS(597),
    [sym_defn_function] = ACTIONS(597),
  },
  [111] = {
    [sym__keyword_chars] = ACTIONS(601),
  },
  [112] = {
    [ts_builtin_sym_end] = ACTIONS(603),
    [sym_nil] = ACTIONS(605),
    [sym_true] = ACTIONS(605),
    [sym_false] = ACTIONS(605),
    [sym_number_long] = ACTIONS(605),
    [sym_number_double] = ACTIONS(603),
    [anon_sym_BSLASH] = ACTIONS(603),
    [anon_sym_DQUOTE] = ACTIONS(603),
    [anon_sym_POUND_DQUOTE] = ACTIONS(603),
    [anon_sym_SQUOTE] = ACTIONS(603),
    [anon_sym_LPARENquote] = ACTIONS(603),
    [anon_sym_RPAREN] = ACTIONS(603),
    [anon_sym_COLON] = ACTIONS(605),
    [anon_sym_COLON_COLON] = ACTIONS(603),
    [anon_sym_DASH_GT] = ACTIONS(605),
    [anon_sym_DASH_GT_GT] = ACTIONS(603),
    [anon_sym_as_DASH_GT] = ACTIONS(603),
    [anon_sym_some_DASH_GT] = ACTIONS(605),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(603),
    [anon_sym_cond_DASH_GT] = ACTIONS(605),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(603),
    [sym__symbol_chars] = ACTIONS(605),
    [anon_sym_LPAREN] = ACTIONS(605),
    [anon_sym_LBRACK] = ACTIONS(603),
    [anon_sym_RBRACK] = ACTIONS(603),
    [anon_sym_LBRACE] = ACTIONS(603),
    [anon_sym_RBRACE] = ACTIONS(603),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(603),
    [anon_sym_POUND] = ACTIONS(605),
    [anon_sym_POUND_LBRACE] = ACTIONS(603),
    [anon_sym_SEMI] = ACTIONS(603),
    [anon_sym_POUND_BANG] = ACTIONS(603),
    [anon_sym_POUND_] = ACTIONS(603),
    [anon_sym_LPARENcomment] = ACTIONS(603),
    [anon_sym_POUND_LPAREN] = ACTIONS(603),
    [sym_shorthand_function_arg] = ACTIONS(603),
    [sym_defn_function] = ACTIONS(603),
  },
  [113] = {
    [aux_sym_ignore_form_repeat1] = STATE(197),
    [sym_nil] = ACTIONS(435),
    [sym_true] = ACTIONS(435),
    [sym_false] = ACTIONS(435),
    [sym_number_long] = ACTIONS(435),
    [sym_number_double] = ACTIONS(435),
    [anon_sym_BSLASH] = ACTIONS(435),
    [anon_sym_DQUOTE] = ACTIONS(435),
    [anon_sym_POUND_DQUOTE] = ACTIONS(435),
    [anon_sym_SQUOTE] = ACTIONS(435),
    [anon_sym_LPARENquote] = ACTIONS(435),
    [anon_sym_RPAREN] = ACTIONS(435),
    [anon_sym_COLON] = ACTIONS(435),
    [anon_sym_COLON_COLON] = ACTIONS(435),
    [anon_sym_DASH_GT] = ACTIONS(435),
    [anon_sym_DASH_GT_GT] = ACTIONS(435),
    [anon_sym_as_DASH_GT] = ACTIONS(435),
    [anon_sym_some_DASH_GT] = ACTIONS(435),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(435),
    [anon_sym_cond_DASH_GT] = ACTIONS(435),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(435),
    [sym__symbol_chars] = ACTIONS(435),
    [anon_sym_LPAREN] = ACTIONS(435),
    [anon_sym_LBRACK] = ACTIONS(435),
    [anon_sym_LBRACE] = ACTIONS(435),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(435),
    [anon_sym_POUND] = ACTIONS(435),
    [anon_sym_POUND_LBRACE] = ACTIONS(435),
    [anon_sym_SEMI] = ACTIONS(435),
    [anon_sym_POUND_BANG] = ACTIONS(435),
    [anon_sym_POUND_] = ACTIONS(435),
    [anon_sym_] = ACTIONS(607),
    [anon_sym_LPARENcomment] = ACTIONS(435),
    [anon_sym_POUND_LPAREN] = ACTIONS(435),
    [sym_defn_function] = ACTIONS(435),
  },
  [114] = {
    [sym__number] = STATE(198),
    [sym__string] = STATE(198),
    [sym__keyword] = STATE(198),
    [sym__unqualified_keyword] = STATE(198),
    [sym_qualified_keyword] = STATE(198),
    [sym__symbol] = STATE(198),
    [sym_threading_macro] = STATE(198),
    [sym_qualified_symbol] = STATE(198),
    [sym__one_form] = STATE(198),
    [sym__paren_sequence] = STATE(198),
    [sym__bracket_sequence] = STATE(198),
    [sym__curly_brace_sequence] = STATE(198),
    [aux_sym_ignore_form_repeat1] = STATE(174),
    [sym_number_long] = ACTIONS(609),
    [sym_number_double] = ACTIONS(609),
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
    [anon_sym_] = ACTIONS(441),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(609),
  },
  [115] = {
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(89),
  },
  [116] = {
    [anon_sym_SLASH] = ACTIONS(611),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(93),
  },
  [117] = {
    [sym_vector] = STATE(120),
    [sym__vector] = STATE(33),
    [sym__single_arity_fn] = STATE(200),
    [sym_params] = STATE(123),
    [anon_sym_LBRACK] = ACTIONS(37),
  },
  [118] = {
    [anon_sym_LPAREN] = ACTIONS(613),
    [anon_sym_LBRACK] = ACTIONS(613),
  },
  [119] = {
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_LBRACK] = ACTIONS(225),
  },
  [120] = {
    [sym_nil] = ACTIONS(615),
    [sym_true] = ACTIONS(615),
    [sym_false] = ACTIONS(615),
    [sym_number_long] = ACTIONS(615),
    [sym_number_double] = ACTIONS(617),
    [anon_sym_BSLASH] = ACTIONS(617),
    [anon_sym_DQUOTE] = ACTIONS(617),
    [anon_sym_POUND_DQUOTE] = ACTIONS(617),
    [anon_sym_SQUOTE] = ACTIONS(617),
    [anon_sym_LPARENquote] = ACTIONS(617),
    [anon_sym_RPAREN] = ACTIONS(617),
    [anon_sym_COLON] = ACTIONS(615),
    [anon_sym_COLON_COLON] = ACTIONS(617),
    [anon_sym_DASH_GT] = ACTIONS(615),
    [anon_sym_DASH_GT_GT] = ACTIONS(617),
    [anon_sym_as_DASH_GT] = ACTIONS(617),
    [anon_sym_some_DASH_GT] = ACTIONS(615),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(617),
    [anon_sym_cond_DASH_GT] = ACTIONS(615),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(617),
    [sym__symbol_chars] = ACTIONS(615),
    [anon_sym_LPAREN] = ACTIONS(615),
    [anon_sym_LBRACK] = ACTIONS(617),
    [anon_sym_LBRACE] = ACTIONS(617),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(617),
    [anon_sym_POUND] = ACTIONS(615),
    [anon_sym_POUND_LBRACE] = ACTIONS(617),
    [anon_sym_SEMI] = ACTIONS(617),
    [anon_sym_POUND_BANG] = ACTIONS(617),
    [anon_sym_POUND_] = ACTIONS(617),
    [anon_sym_LPARENcomment] = ACTIONS(617),
    [anon_sym_POUND_LPAREN] = ACTIONS(617),
    [sym_defn_function] = ACTIONS(617),
  },
  [121] = {
    [sym_vector] = STATE(120),
    [sym__vector] = STATE(33),
    [sym__single_arity_fn] = STATE(201),
    [sym__multi_arity_fn] = STATE(201),
    [sym_params] = STATE(123),
    [aux_sym__multi_arity_fn_repeat1] = STATE(124),
    [anon_sym_LPAREN] = ACTIONS(315),
    [anon_sym_LBRACK] = ACTIONS(37),
  },
  [122] = {
    [anon_sym_RPAREN] = ACTIONS(619),
  },
  [123] = {
    [sym__anything] = STATE(204),
    [sym__literal] = STATE(204),
    [sym__collection_literal] = STATE(204),
    [sym_boolean] = STATE(204),
    [sym_number] = STATE(204),
    [sym__number] = STATE(25),
    [sym_character] = STATE(204),
    [sym__character] = STATE(26),
    [sym_string] = STATE(204),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(204),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(204),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(204),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(204),
    [sym__symbol] = STATE(31),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(204),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(204),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(204),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym_set] = STATE(204),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(204),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [sym_function] = STATE(204),
    [sym_anonymous_function] = STATE(23),
    [sym_function_body] = STATE(203),
    [sym_shorthand_function] = STATE(23),
    [aux_sym_program_repeat1] = STATE(204),
    [sym_nil] = ACTIONS(621),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(101),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(623),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_defn_function] = ACTIONS(57),
  },
  [124] = {
    [aux_sym__multi_arity_fn_repeat1] = STATE(205),
    [anon_sym_RPAREN] = ACTIONS(625),
    [anon_sym_LPAREN] = ACTIONS(315),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(627),
    [sym_nil] = ACTIONS(629),
    [sym_true] = ACTIONS(629),
    [sym_false] = ACTIONS(629),
    [sym_number_long] = ACTIONS(629),
    [sym_number_double] = ACTIONS(627),
    [anon_sym_BSLASH] = ACTIONS(627),
    [anon_sym_DQUOTE] = ACTIONS(627),
    [anon_sym_POUND_DQUOTE] = ACTIONS(627),
    [anon_sym_SQUOTE] = ACTIONS(627),
    [anon_sym_LPARENquote] = ACTIONS(627),
    [anon_sym_RPAREN] = ACTIONS(627),
    [anon_sym_COLON] = ACTIONS(629),
    [anon_sym_COLON_COLON] = ACTIONS(627),
    [anon_sym_DASH_GT] = ACTIONS(629),
    [anon_sym_DASH_GT_GT] = ACTIONS(627),
    [anon_sym_as_DASH_GT] = ACTIONS(627),
    [anon_sym_some_DASH_GT] = ACTIONS(629),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(627),
    [anon_sym_cond_DASH_GT] = ACTIONS(629),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(627),
    [sym__symbol_chars] = ACTIONS(629),
    [anon_sym_LPAREN] = ACTIONS(629),
    [anon_sym_LBRACK] = ACTIONS(627),
    [anon_sym_RBRACK] = ACTIONS(627),
    [anon_sym_LBRACE] = ACTIONS(627),
    [anon_sym_RBRACE] = ACTIONS(627),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(627),
    [anon_sym_POUND] = ACTIONS(629),
    [anon_sym_POUND_LBRACE] = ACTIONS(627),
    [anon_sym_SEMI] = ACTIONS(627),
    [anon_sym_POUND_BANG] = ACTIONS(627),
    [anon_sym_POUND_] = ACTIONS(627),
    [anon_sym_LPARENcomment] = ACTIONS(627),
    [anon_sym_POUND_LPAREN] = ACTIONS(627),
    [sym_shorthand_function_arg] = ACTIONS(627),
    [sym_defn_function] = ACTIONS(627),
  },
  [126] = {
    [sym__anything] = STATE(126),
    [sym__literal] = STATE(126),
    [sym__collection_literal] = STATE(126),
    [sym_boolean] = STATE(126),
    [sym_number] = STATE(126),
    [sym__number] = STATE(25),
    [sym_character] = STATE(126),
    [sym__character] = STATE(26),
    [sym_string] = STATE(126),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(126),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(126),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(126),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(126),
    [sym__symbol] = STATE(31),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(126),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(126),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(126),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym_set] = STATE(126),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(126),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [sym_function] = STATE(126),
    [sym_anonymous_function] = STATE(23),
    [sym_shorthand_function] = STATE(23),
    [aux_sym_program_repeat1] = STATE(126),
    [sym_nil] = ACTIONS(631),
    [sym_true] = ACTIONS(494),
    [sym_false] = ACTIONS(494),
    [sym_number_long] = ACTIONS(497),
    [sym_number_double] = ACTIONS(500),
    [anon_sym_BSLASH] = ACTIONS(503),
    [anon_sym_DQUOTE] = ACTIONS(506),
    [anon_sym_POUND_DQUOTE] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(634),
    [anon_sym_LPARENquote] = ACTIONS(515),
    [anon_sym_RPAREN] = ACTIONS(489),
    [anon_sym_COLON] = ACTIONS(518),
    [anon_sym_COLON_COLON] = ACTIONS(521),
    [anon_sym_DASH_GT] = ACTIONS(524),
    [anon_sym_DASH_GT_GT] = ACTIONS(527),
    [anon_sym_as_DASH_GT] = ACTIONS(527),
    [anon_sym_some_DASH_GT] = ACTIONS(524),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(527),
    [anon_sym_cond_DASH_GT] = ACTIONS(524),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(527),
    [sym__symbol_chars] = ACTIONS(530),
    [anon_sym_LPAREN] = ACTIONS(533),
    [anon_sym_LBRACK] = ACTIONS(536),
    [anon_sym_LBRACE] = ACTIONS(539),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(542),
    [anon_sym_POUND] = ACTIONS(545),
    [anon_sym_POUND_LBRACE] = ACTIONS(548),
    [anon_sym_SEMI] = ACTIONS(551),
    [anon_sym_POUND_BANG] = ACTIONS(554),
    [anon_sym_POUND_] = ACTIONS(637),
    [anon_sym_LPARENcomment] = ACTIONS(560),
    [anon_sym_POUND_LPAREN] = ACTIONS(563),
    [sym_defn_function] = ACTIONS(566),
  },
  [127] = {
    [aux_sym_ignore_form_repeat1] = STATE(206),
    [sym_nil] = ACTIONS(435),
    [sym_true] = ACTIONS(435),
    [sym_false] = ACTIONS(435),
    [sym_number_long] = ACTIONS(435),
    [sym_number_double] = ACTIONS(435),
    [anon_sym_BSLASH] = ACTIONS(435),
    [anon_sym_DQUOTE] = ACTIONS(435),
    [anon_sym_POUND_DQUOTE] = ACTIONS(435),
    [anon_sym_SQUOTE] = ACTIONS(435),
    [anon_sym_LPARENquote] = ACTIONS(435),
    [anon_sym_COLON] = ACTIONS(435),
    [anon_sym_COLON_COLON] = ACTIONS(435),
    [anon_sym_DASH_GT] = ACTIONS(435),
    [anon_sym_DASH_GT_GT] = ACTIONS(435),
    [anon_sym_as_DASH_GT] = ACTIONS(435),
    [anon_sym_some_DASH_GT] = ACTIONS(435),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(435),
    [anon_sym_cond_DASH_GT] = ACTIONS(435),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(435),
    [sym__symbol_chars] = ACTIONS(435),
    [anon_sym_LPAREN] = ACTIONS(435),
    [anon_sym_LBRACK] = ACTIONS(435),
    [anon_sym_RBRACK] = ACTIONS(435),
    [anon_sym_LBRACE] = ACTIONS(435),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(435),
    [anon_sym_POUND] = ACTIONS(435),
    [anon_sym_POUND_LBRACE] = ACTIONS(435),
    [anon_sym_SEMI] = ACTIONS(435),
    [anon_sym_POUND_BANG] = ACTIONS(435),
    [anon_sym_POUND_] = ACTIONS(435),
    [anon_sym_] = ACTIONS(640),
    [anon_sym_LPARENcomment] = ACTIONS(435),
    [anon_sym_POUND_LPAREN] = ACTIONS(435),
    [sym_defn_function] = ACTIONS(435),
  },
  [128] = {
    [sym__number] = STATE(207),
    [sym__string] = STATE(207),
    [sym__keyword] = STATE(207),
    [sym__unqualified_keyword] = STATE(207),
    [sym_qualified_keyword] = STATE(207),
    [sym__symbol] = STATE(207),
    [sym_threading_macro] = STATE(207),
    [sym_qualified_symbol] = STATE(207),
    [sym__one_form] = STATE(207),
    [sym__paren_sequence] = STATE(207),
    [sym__bracket_sequence] = STATE(207),
    [sym__curly_brace_sequence] = STATE(207),
    [aux_sym_ignore_form_repeat1] = STATE(174),
    [sym_number_long] = ACTIONS(642),
    [sym_number_double] = ACTIONS(642),
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
    [anon_sym_] = ACTIONS(441),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(642),
  },
  [129] = {
    [ts_builtin_sym_end] = ACTIONS(644),
    [sym_nil] = ACTIONS(646),
    [sym_true] = ACTIONS(646),
    [sym_false] = ACTIONS(646),
    [sym_number_long] = ACTIONS(646),
    [sym_number_double] = ACTIONS(644),
    [anon_sym_BSLASH] = ACTIONS(644),
    [anon_sym_DQUOTE] = ACTIONS(644),
    [anon_sym_POUND_DQUOTE] = ACTIONS(644),
    [anon_sym_SQUOTE] = ACTIONS(644),
    [anon_sym_LPARENquote] = ACTIONS(644),
    [anon_sym_RPAREN] = ACTIONS(644),
    [anon_sym_COLON] = ACTIONS(646),
    [anon_sym_COLON_COLON] = ACTIONS(644),
    [anon_sym_DASH_GT] = ACTIONS(646),
    [anon_sym_DASH_GT_GT] = ACTIONS(644),
    [anon_sym_as_DASH_GT] = ACTIONS(644),
    [anon_sym_some_DASH_GT] = ACTIONS(646),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(644),
    [anon_sym_cond_DASH_GT] = ACTIONS(646),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(644),
    [sym__symbol_chars] = ACTIONS(646),
    [anon_sym_LPAREN] = ACTIONS(646),
    [anon_sym_LBRACK] = ACTIONS(644),
    [anon_sym_RBRACK] = ACTIONS(644),
    [anon_sym_LBRACE] = ACTIONS(644),
    [anon_sym_RBRACE] = ACTIONS(644),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(644),
    [anon_sym_POUND] = ACTIONS(646),
    [anon_sym_POUND_LBRACE] = ACTIONS(644),
    [anon_sym_SEMI] = ACTIONS(644),
    [anon_sym_POUND_BANG] = ACTIONS(644),
    [anon_sym_POUND_] = ACTIONS(644),
    [anon_sym_LPARENcomment] = ACTIONS(644),
    [anon_sym_POUND_LPAREN] = ACTIONS(644),
    [sym_shorthand_function_arg] = ACTIONS(644),
    [sym_defn_function] = ACTIONS(644),
  },
  [130] = {
    [sym__anything] = STATE(130),
    [sym__literal] = STATE(130),
    [sym__collection_literal] = STATE(130),
    [sym_boolean] = STATE(130),
    [sym_number] = STATE(130),
    [sym__number] = STATE(25),
    [sym_character] = STATE(130),
    [sym__character] = STATE(26),
    [sym_string] = STATE(130),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(130),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(130),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(130),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(130),
    [sym__symbol] = STATE(31),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(130),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(130),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(130),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym_set] = STATE(130),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(130),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [sym_function] = STATE(130),
    [sym_anonymous_function] = STATE(23),
    [sym_shorthand_function] = STATE(23),
    [aux_sym_program_repeat1] = STATE(130),
    [sym_nil] = ACTIONS(648),
    [sym_true] = ACTIONS(494),
    [sym_false] = ACTIONS(494),
    [sym_number_long] = ACTIONS(497),
    [sym_number_double] = ACTIONS(500),
    [anon_sym_BSLASH] = ACTIONS(503),
    [anon_sym_DQUOTE] = ACTIONS(506),
    [anon_sym_POUND_DQUOTE] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(651),
    [anon_sym_LPARENquote] = ACTIONS(515),
    [anon_sym_COLON] = ACTIONS(518),
    [anon_sym_COLON_COLON] = ACTIONS(521),
    [anon_sym_DASH_GT] = ACTIONS(524),
    [anon_sym_DASH_GT_GT] = ACTIONS(527),
    [anon_sym_as_DASH_GT] = ACTIONS(527),
    [anon_sym_some_DASH_GT] = ACTIONS(524),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(527),
    [anon_sym_cond_DASH_GT] = ACTIONS(524),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(527),
    [sym__symbol_chars] = ACTIONS(530),
    [anon_sym_LPAREN] = ACTIONS(533),
    [anon_sym_LBRACK] = ACTIONS(536),
    [anon_sym_RBRACK] = ACTIONS(489),
    [anon_sym_LBRACE] = ACTIONS(539),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(542),
    [anon_sym_POUND] = ACTIONS(545),
    [anon_sym_POUND_LBRACE] = ACTIONS(548),
    [anon_sym_SEMI] = ACTIONS(551),
    [anon_sym_POUND_BANG] = ACTIONS(554),
    [anon_sym_POUND_] = ACTIONS(654),
    [anon_sym_LPARENcomment] = ACTIONS(560),
    [anon_sym_POUND_LPAREN] = ACTIONS(563),
    [sym_defn_function] = ACTIONS(566),
  },
  [131] = {
    [aux_sym_ignore_form_repeat1] = STATE(208),
    [sym_nil] = ACTIONS(435),
    [sym_true] = ACTIONS(435),
    [sym_false] = ACTIONS(435),
    [sym_number_long] = ACTIONS(435),
    [sym_number_double] = ACTIONS(435),
    [anon_sym_BSLASH] = ACTIONS(435),
    [anon_sym_DQUOTE] = ACTIONS(435),
    [anon_sym_POUND_DQUOTE] = ACTIONS(435),
    [anon_sym_SQUOTE] = ACTIONS(435),
    [anon_sym_LPARENquote] = ACTIONS(435),
    [anon_sym_COLON] = ACTIONS(435),
    [anon_sym_COLON_COLON] = ACTIONS(435),
    [anon_sym_DASH_GT] = ACTIONS(435),
    [anon_sym_DASH_GT_GT] = ACTIONS(435),
    [anon_sym_as_DASH_GT] = ACTIONS(435),
    [anon_sym_some_DASH_GT] = ACTIONS(435),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(435),
    [anon_sym_cond_DASH_GT] = ACTIONS(435),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(435),
    [sym__symbol_chars] = ACTIONS(435),
    [anon_sym_LPAREN] = ACTIONS(435),
    [anon_sym_LBRACK] = ACTIONS(435),
    [anon_sym_LBRACE] = ACTIONS(435),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(435),
    [anon_sym_POUND] = ACTIONS(435),
    [anon_sym_POUND_LBRACE] = ACTIONS(435),
    [anon_sym_SEMI] = ACTIONS(435),
    [anon_sym_POUND_BANG] = ACTIONS(435),
    [anon_sym_POUND_] = ACTIONS(435),
    [anon_sym_] = ACTIONS(657),
    [anon_sym_LPARENcomment] = ACTIONS(435),
    [anon_sym_POUND_LPAREN] = ACTIONS(435),
    [sym_defn_function] = ACTIONS(435),
  },
  [132] = {
    [sym__number] = STATE(209),
    [sym__string] = STATE(209),
    [sym__keyword] = STATE(209),
    [sym__unqualified_keyword] = STATE(209),
    [sym_qualified_keyword] = STATE(209),
    [sym__symbol] = STATE(209),
    [sym_threading_macro] = STATE(209),
    [sym_qualified_symbol] = STATE(209),
    [sym__one_form] = STATE(209),
    [sym__paren_sequence] = STATE(209),
    [sym__bracket_sequence] = STATE(209),
    [sym__curly_brace_sequence] = STATE(209),
    [aux_sym_ignore_form_repeat1] = STATE(174),
    [sym_number_long] = ACTIONS(659),
    [sym_number_double] = ACTIONS(659),
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
    [anon_sym_] = ACTIONS(441),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(659),
  },
  [133] = {
    [sym_nil] = ACTIONS(661),
    [sym_true] = ACTIONS(661),
    [sym_false] = ACTIONS(661),
    [sym_number_long] = ACTIONS(661),
    [sym_number_double] = ACTIONS(663),
    [anon_sym_BSLASH] = ACTIONS(663),
    [anon_sym_DQUOTE] = ACTIONS(663),
    [anon_sym_POUND_DQUOTE] = ACTIONS(663),
    [anon_sym_SQUOTE] = ACTIONS(663),
    [anon_sym_LPARENquote] = ACTIONS(663),
    [anon_sym_COLON] = ACTIONS(661),
    [anon_sym_COLON_COLON] = ACTIONS(663),
    [anon_sym_DASH_GT] = ACTIONS(661),
    [anon_sym_DASH_GT_GT] = ACTIONS(663),
    [anon_sym_as_DASH_GT] = ACTIONS(663),
    [anon_sym_some_DASH_GT] = ACTIONS(661),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(663),
    [anon_sym_cond_DASH_GT] = ACTIONS(661),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(663),
    [sym__symbol_chars] = ACTIONS(661),
    [anon_sym_LPAREN] = ACTIONS(661),
    [anon_sym_LBRACK] = ACTIONS(663),
    [anon_sym_LBRACE] = ACTIONS(663),
    [anon_sym_RBRACE] = ACTIONS(663),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(663),
    [anon_sym_POUND] = ACTIONS(661),
    [anon_sym_POUND_LBRACE] = ACTIONS(663),
    [anon_sym_SEMI] = ACTIONS(663),
    [anon_sym_POUND_BANG] = ACTIONS(663),
    [anon_sym_POUND_] = ACTIONS(663),
    [anon_sym_LPARENcomment] = ACTIONS(663),
    [anon_sym_POUND_LPAREN] = ACTIONS(663),
    [sym_defn_function] = ACTIONS(663),
  },
  [134] = {
    [ts_builtin_sym_end] = ACTIONS(665),
    [sym_nil] = ACTIONS(667),
    [sym_true] = ACTIONS(667),
    [sym_false] = ACTIONS(667),
    [sym_number_long] = ACTIONS(667),
    [sym_number_double] = ACTIONS(665),
    [anon_sym_BSLASH] = ACTIONS(665),
    [anon_sym_DQUOTE] = ACTIONS(665),
    [anon_sym_POUND_DQUOTE] = ACTIONS(665),
    [anon_sym_SQUOTE] = ACTIONS(665),
    [anon_sym_LPARENquote] = ACTIONS(665),
    [anon_sym_RPAREN] = ACTIONS(665),
    [anon_sym_COLON] = ACTIONS(667),
    [anon_sym_COLON_COLON] = ACTIONS(665),
    [anon_sym_DASH_GT] = ACTIONS(667),
    [anon_sym_DASH_GT_GT] = ACTIONS(665),
    [anon_sym_as_DASH_GT] = ACTIONS(665),
    [anon_sym_some_DASH_GT] = ACTIONS(667),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(665),
    [anon_sym_cond_DASH_GT] = ACTIONS(667),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(665),
    [sym__symbol_chars] = ACTIONS(667),
    [anon_sym_LPAREN] = ACTIONS(667),
    [anon_sym_LBRACK] = ACTIONS(665),
    [anon_sym_RBRACK] = ACTIONS(665),
    [anon_sym_LBRACE] = ACTIONS(665),
    [anon_sym_RBRACE] = ACTIONS(665),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(665),
    [anon_sym_POUND] = ACTIONS(667),
    [anon_sym_POUND_LBRACE] = ACTIONS(665),
    [anon_sym_SEMI] = ACTIONS(665),
    [anon_sym_POUND_BANG] = ACTIONS(665),
    [anon_sym_POUND_] = ACTIONS(665),
    [anon_sym_LPARENcomment] = ACTIONS(665),
    [anon_sym_POUND_LPAREN] = ACTIONS(665),
    [sym_shorthand_function_arg] = ACTIONS(665),
    [sym_defn_function] = ACTIONS(665),
  },
  [135] = {
    [sym__anything] = STATE(64),
    [sym__literal] = STATE(64),
    [sym__collection_literal] = STATE(64),
    [sym_boolean] = STATE(64),
    [sym_number] = STATE(64),
    [sym__number] = STATE(25),
    [sym_character] = STATE(64),
    [sym__character] = STATE(26),
    [sym_string] = STATE(64),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(64),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(64),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(64),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(64),
    [sym__symbol] = STATE(31),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(64),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(64),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(64),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym__hash_map_kv_pair] = STATE(135),
    [sym__hash_map_key] = STATE(64),
    [sym_set] = STATE(64),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(64),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [sym_function] = STATE(64),
    [sym_anonymous_function] = STATE(23),
    [sym_shorthand_function] = STATE(23),
    [aux_sym__hash_map_repeat1] = STATE(135),
    [sym_nil] = ACTIONS(669),
    [sym_true] = ACTIONS(672),
    [sym_false] = ACTIONS(672),
    [sym_number_long] = ACTIONS(675),
    [sym_number_double] = ACTIONS(678),
    [anon_sym_BSLASH] = ACTIONS(681),
    [anon_sym_DQUOTE] = ACTIONS(684),
    [anon_sym_POUND_DQUOTE] = ACTIONS(687),
    [anon_sym_SQUOTE] = ACTIONS(690),
    [anon_sym_LPARENquote] = ACTIONS(693),
    [anon_sym_COLON] = ACTIONS(696),
    [anon_sym_COLON_COLON] = ACTIONS(699),
    [anon_sym_DASH_GT] = ACTIONS(702),
    [anon_sym_DASH_GT_GT] = ACTIONS(705),
    [anon_sym_as_DASH_GT] = ACTIONS(705),
    [anon_sym_some_DASH_GT] = ACTIONS(702),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(705),
    [anon_sym_cond_DASH_GT] = ACTIONS(702),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(705),
    [sym__symbol_chars] = ACTIONS(708),
    [anon_sym_LPAREN] = ACTIONS(711),
    [anon_sym_LBRACK] = ACTIONS(714),
    [anon_sym_LBRACE] = ACTIONS(717),
    [anon_sym_RBRACE] = ACTIONS(720),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(722),
    [anon_sym_POUND] = ACTIONS(725),
    [anon_sym_POUND_LBRACE] = ACTIONS(728),
    [anon_sym_SEMI] = ACTIONS(731),
    [anon_sym_POUND_BANG] = ACTIONS(734),
    [anon_sym_POUND_] = ACTIONS(737),
    [anon_sym_LPARENcomment] = ACTIONS(740),
    [anon_sym_POUND_LPAREN] = ACTIONS(743),
    [sym_defn_function] = ACTIONS(746),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(749),
    [sym_nil] = ACTIONS(751),
    [sym_true] = ACTIONS(751),
    [sym_false] = ACTIONS(751),
    [sym_number_long] = ACTIONS(751),
    [sym_number_double] = ACTIONS(749),
    [anon_sym_BSLASH] = ACTIONS(749),
    [anon_sym_DQUOTE] = ACTIONS(749),
    [anon_sym_POUND_DQUOTE] = ACTIONS(749),
    [anon_sym_SQUOTE] = ACTIONS(749),
    [anon_sym_LPARENquote] = ACTIONS(749),
    [anon_sym_RPAREN] = ACTIONS(749),
    [anon_sym_COLON] = ACTIONS(751),
    [anon_sym_COLON_COLON] = ACTIONS(749),
    [anon_sym_DASH_GT] = ACTIONS(751),
    [anon_sym_DASH_GT_GT] = ACTIONS(749),
    [anon_sym_as_DASH_GT] = ACTIONS(749),
    [anon_sym_some_DASH_GT] = ACTIONS(751),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(749),
    [anon_sym_cond_DASH_GT] = ACTIONS(751),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(749),
    [sym__symbol_chars] = ACTIONS(751),
    [anon_sym_LPAREN] = ACTIONS(751),
    [anon_sym_LBRACK] = ACTIONS(749),
    [anon_sym_RBRACK] = ACTIONS(749),
    [anon_sym_LBRACE] = ACTIONS(749),
    [anon_sym_RBRACE] = ACTIONS(749),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(749),
    [anon_sym_POUND] = ACTIONS(751),
    [anon_sym_POUND_LBRACE] = ACTIONS(749),
    [anon_sym_SEMI] = ACTIONS(749),
    [anon_sym_POUND_BANG] = ACTIONS(749),
    [anon_sym_POUND_] = ACTIONS(749),
    [anon_sym_LPARENcomment] = ACTIONS(749),
    [anon_sym_POUND_LPAREN] = ACTIONS(749),
    [sym_shorthand_function_arg] = ACTIONS(749),
    [sym_defn_function] = ACTIONS(749),
  },
  [137] = {
    [sym__anything] = STATE(64),
    [sym__literal] = STATE(64),
    [sym__collection_literal] = STATE(64),
    [sym_boolean] = STATE(64),
    [sym_number] = STATE(64),
    [sym__number] = STATE(25),
    [sym_character] = STATE(64),
    [sym__character] = STATE(26),
    [sym_string] = STATE(64),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(64),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(64),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(64),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(64),
    [sym__symbol] = STATE(31),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(64),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(64),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(64),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym__hash_map_kv_pair] = STATE(211),
    [sym__hash_map_key] = STATE(64),
    [sym_set] = STATE(64),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(64),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [sym_function] = STATE(64),
    [sym_anonymous_function] = STATE(23),
    [sym_shorthand_function] = STATE(23),
    [aux_sym__hash_map_repeat1] = STATE(211),
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
    [anon_sym_RBRACE] = ACTIONS(753),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(123),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_defn_function] = ACTIONS(57),
  },
  [138] = {
    [aux_sym_ignore_form_repeat1] = STATE(212),
    [sym_nil] = ACTIONS(435),
    [sym_true] = ACTIONS(435),
    [sym_false] = ACTIONS(435),
    [sym_number_long] = ACTIONS(435),
    [sym_number_double] = ACTIONS(435),
    [anon_sym_BSLASH] = ACTIONS(435),
    [anon_sym_DQUOTE] = ACTIONS(435),
    [anon_sym_POUND_DQUOTE] = ACTIONS(435),
    [anon_sym_SQUOTE] = ACTIONS(435),
    [anon_sym_LPARENquote] = ACTIONS(435),
    [anon_sym_COLON] = ACTIONS(435),
    [anon_sym_COLON_COLON] = ACTIONS(435),
    [anon_sym_DASH_GT] = ACTIONS(435),
    [anon_sym_DASH_GT_GT] = ACTIONS(435),
    [anon_sym_as_DASH_GT] = ACTIONS(435),
    [anon_sym_some_DASH_GT] = ACTIONS(435),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(435),
    [anon_sym_cond_DASH_GT] = ACTIONS(435),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(435),
    [sym__symbol_chars] = ACTIONS(435),
    [anon_sym_LPAREN] = ACTIONS(435),
    [anon_sym_LBRACK] = ACTIONS(435),
    [anon_sym_LBRACE] = ACTIONS(435),
    [anon_sym_RBRACE] = ACTIONS(435),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(435),
    [anon_sym_POUND] = ACTIONS(435),
    [anon_sym_POUND_LBRACE] = ACTIONS(435),
    [anon_sym_SEMI] = ACTIONS(435),
    [anon_sym_POUND_BANG] = ACTIONS(435),
    [anon_sym_POUND_] = ACTIONS(435),
    [anon_sym_] = ACTIONS(755),
    [anon_sym_LPARENcomment] = ACTIONS(435),
    [anon_sym_POUND_LPAREN] = ACTIONS(435),
    [sym_defn_function] = ACTIONS(435),
  },
  [139] = {
    [sym__number] = STATE(213),
    [sym__string] = STATE(213),
    [sym__keyword] = STATE(213),
    [sym__unqualified_keyword] = STATE(213),
    [sym_qualified_keyword] = STATE(213),
    [sym__symbol] = STATE(213),
    [sym_threading_macro] = STATE(213),
    [sym_qualified_symbol] = STATE(213),
    [sym__one_form] = STATE(213),
    [sym__paren_sequence] = STATE(213),
    [sym__bracket_sequence] = STATE(213),
    [sym__curly_brace_sequence] = STATE(213),
    [aux_sym_ignore_form_repeat1] = STATE(174),
    [sym_number_long] = ACTIONS(757),
    [sym_number_double] = ACTIONS(757),
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
    [anon_sym_] = ACTIONS(441),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(757),
  },
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(759),
    [sym_nil] = ACTIONS(761),
    [sym_true] = ACTIONS(761),
    [sym_false] = ACTIONS(761),
    [sym_number_long] = ACTIONS(761),
    [sym_number_double] = ACTIONS(759),
    [anon_sym_BSLASH] = ACTIONS(759),
    [anon_sym_DQUOTE] = ACTIONS(759),
    [anon_sym_POUND_DQUOTE] = ACTIONS(759),
    [anon_sym_SQUOTE] = ACTIONS(759),
    [anon_sym_LPARENquote] = ACTIONS(759),
    [anon_sym_RPAREN] = ACTIONS(759),
    [anon_sym_COLON] = ACTIONS(761),
    [anon_sym_COLON_COLON] = ACTIONS(759),
    [anon_sym_DASH_GT] = ACTIONS(761),
    [anon_sym_DASH_GT_GT] = ACTIONS(759),
    [anon_sym_as_DASH_GT] = ACTIONS(759),
    [anon_sym_some_DASH_GT] = ACTIONS(761),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(759),
    [anon_sym_cond_DASH_GT] = ACTIONS(761),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(759),
    [sym__symbol_chars] = ACTIONS(761),
    [anon_sym_LPAREN] = ACTIONS(761),
    [anon_sym_LBRACK] = ACTIONS(759),
    [anon_sym_RBRACK] = ACTIONS(759),
    [anon_sym_LBRACE] = ACTIONS(759),
    [anon_sym_RBRACE] = ACTIONS(759),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(759),
    [anon_sym_POUND] = ACTIONS(761),
    [anon_sym_POUND_LBRACE] = ACTIONS(759),
    [anon_sym_SEMI] = ACTIONS(759),
    [anon_sym_POUND_BANG] = ACTIONS(759),
    [anon_sym_POUND_] = ACTIONS(759),
    [anon_sym_LPARENcomment] = ACTIONS(759),
    [anon_sym_POUND_LPAREN] = ACTIONS(759),
    [sym_shorthand_function_arg] = ACTIONS(759),
    [sym_defn_function] = ACTIONS(759),
  },
  [141] = {
    [sym__anything] = STATE(141),
    [sym__literal] = STATE(141),
    [sym__collection_literal] = STATE(141),
    [sym_boolean] = STATE(141),
    [sym_number] = STATE(141),
    [sym__number] = STATE(25),
    [sym_character] = STATE(141),
    [sym__character] = STATE(26),
    [sym_string] = STATE(141),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(141),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(141),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(141),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(141),
    [sym__symbol] = STATE(31),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(141),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(141),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(141),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym_set] = STATE(141),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(141),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [sym_function] = STATE(141),
    [sym_anonymous_function] = STATE(23),
    [sym_shorthand_function] = STATE(23),
    [aux_sym_program_repeat1] = STATE(141),
    [sym_nil] = ACTIONS(763),
    [sym_true] = ACTIONS(494),
    [sym_false] = ACTIONS(494),
    [sym_number_long] = ACTIONS(497),
    [sym_number_double] = ACTIONS(500),
    [anon_sym_BSLASH] = ACTIONS(503),
    [anon_sym_DQUOTE] = ACTIONS(506),
    [anon_sym_POUND_DQUOTE] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(766),
    [anon_sym_LPARENquote] = ACTIONS(515),
    [anon_sym_COLON] = ACTIONS(518),
    [anon_sym_COLON_COLON] = ACTIONS(521),
    [anon_sym_DASH_GT] = ACTIONS(524),
    [anon_sym_DASH_GT_GT] = ACTIONS(527),
    [anon_sym_as_DASH_GT] = ACTIONS(527),
    [anon_sym_some_DASH_GT] = ACTIONS(524),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(527),
    [anon_sym_cond_DASH_GT] = ACTIONS(524),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(527),
    [sym__symbol_chars] = ACTIONS(530),
    [anon_sym_LPAREN] = ACTIONS(533),
    [anon_sym_LBRACK] = ACTIONS(536),
    [anon_sym_LBRACE] = ACTIONS(539),
    [anon_sym_RBRACE] = ACTIONS(489),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(542),
    [anon_sym_POUND] = ACTIONS(545),
    [anon_sym_POUND_LBRACE] = ACTIONS(548),
    [anon_sym_SEMI] = ACTIONS(551),
    [anon_sym_POUND_BANG] = ACTIONS(554),
    [anon_sym_POUND_] = ACTIONS(769),
    [anon_sym_LPARENcomment] = ACTIONS(560),
    [anon_sym_POUND_LPAREN] = ACTIONS(563),
    [sym_defn_function] = ACTIONS(566),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(263),
    [sym_nil] = ACTIONS(265),
    [sym_true] = ACTIONS(265),
    [sym_false] = ACTIONS(265),
    [sym_number_long] = ACTIONS(265),
    [sym_number_double] = ACTIONS(265),
    [anon_sym_BSLASH] = ACTIONS(265),
    [anon_sym_DQUOTE] = ACTIONS(265),
    [anon_sym_POUND_DQUOTE] = ACTIONS(265),
    [anon_sym_SQUOTE] = ACTIONS(265),
    [anon_sym_LPARENquote] = ACTIONS(265),
    [anon_sym_RPAREN] = ACTIONS(265),
    [anon_sym_COLON] = ACTIONS(265),
    [anon_sym_COLON_COLON] = ACTIONS(265),
    [anon_sym_DASH_GT] = ACTIONS(265),
    [anon_sym_DASH_GT_GT] = ACTIONS(265),
    [anon_sym_as_DASH_GT] = ACTIONS(265),
    [anon_sym_some_DASH_GT] = ACTIONS(265),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(265),
    [anon_sym_cond_DASH_GT] = ACTIONS(265),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(265),
    [sym__symbol_chars] = ACTIONS(265),
    [anon_sym_LPAREN] = ACTIONS(265),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_RBRACK] = ACTIONS(265),
    [anon_sym_LBRACE] = ACTIONS(265),
    [anon_sym_RBRACE] = ACTIONS(265),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(265),
    [anon_sym_POUND] = ACTIONS(265),
    [anon_sym_POUND_LBRACE] = ACTIONS(265),
    [anon_sym_SEMI] = ACTIONS(265),
    [anon_sym_POUND_BANG] = ACTIONS(265),
    [anon_sym_POUND_] = ACTIONS(265),
    [anon_sym_] = ACTIONS(263),
    [anon_sym_LPARENcomment] = ACTIONS(265),
    [anon_sym_POUND_LPAREN] = ACTIONS(265),
    [sym_shorthand_function_arg] = ACTIONS(265),
    [sym_defn_function] = ACTIONS(265),
  },
  [143] = {
    [aux_sym__string_repeat1] = STATE(105),
    [anon_sym_DQUOTE] = ACTIONS(772),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(269),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(269),
  },
  [144] = {
    [ts_builtin_sym_end] = ACTIONS(289),
    [sym_nil] = ACTIONS(291),
    [sym_true] = ACTIONS(291),
    [sym_false] = ACTIONS(291),
    [sym_number_long] = ACTIONS(291),
    [sym_number_double] = ACTIONS(291),
    [anon_sym_BSLASH] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(291),
    [anon_sym_POUND_DQUOTE] = ACTIONS(291),
    [anon_sym_SQUOTE] = ACTIONS(291),
    [anon_sym_LPARENquote] = ACTIONS(291),
    [anon_sym_RPAREN] = ACTIONS(291),
    [anon_sym_COLON] = ACTIONS(291),
    [anon_sym_COLON_COLON] = ACTIONS(291),
    [anon_sym_DASH_GT] = ACTIONS(291),
    [anon_sym_DASH_GT_GT] = ACTIONS(291),
    [anon_sym_as_DASH_GT] = ACTIONS(291),
    [anon_sym_some_DASH_GT] = ACTIONS(291),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(291),
    [anon_sym_cond_DASH_GT] = ACTIONS(291),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(291),
    [sym__symbol_chars] = ACTIONS(291),
    [anon_sym_LPAREN] = ACTIONS(291),
    [anon_sym_LBRACK] = ACTIONS(291),
    [anon_sym_RBRACK] = ACTIONS(291),
    [anon_sym_LBRACE] = ACTIONS(291),
    [anon_sym_RBRACE] = ACTIONS(291),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(291),
    [anon_sym_POUND] = ACTIONS(291),
    [anon_sym_POUND_LBRACE] = ACTIONS(291),
    [anon_sym_SEMI] = ACTIONS(291),
    [anon_sym_POUND_BANG] = ACTIONS(291),
    [anon_sym_POUND_] = ACTIONS(291),
    [anon_sym_] = ACTIONS(289),
    [anon_sym_LPARENcomment] = ACTIONS(291),
    [anon_sym_POUND_LPAREN] = ACTIONS(291),
    [sym_shorthand_function_arg] = ACTIONS(291),
    [sym_defn_function] = ACTIONS(291),
  },
  [145] = {
    [ts_builtin_sym_end] = ACTIONS(293),
    [sym_nil] = ACTIONS(295),
    [sym_true] = ACTIONS(295),
    [sym_false] = ACTIONS(295),
    [sym_number_long] = ACTIONS(295),
    [sym_number_double] = ACTIONS(295),
    [anon_sym_BSLASH] = ACTIONS(295),
    [anon_sym_DQUOTE] = ACTIONS(295),
    [anon_sym_POUND_DQUOTE] = ACTIONS(295),
    [anon_sym_SQUOTE] = ACTIONS(295),
    [anon_sym_LPARENquote] = ACTIONS(295),
    [anon_sym_RPAREN] = ACTIONS(295),
    [anon_sym_COLON] = ACTIONS(295),
    [anon_sym_COLON_COLON] = ACTIONS(295),
    [anon_sym_SLASH] = ACTIONS(774),
    [anon_sym_DASH_GT] = ACTIONS(295),
    [anon_sym_DASH_GT_GT] = ACTIONS(295),
    [anon_sym_as_DASH_GT] = ACTIONS(295),
    [anon_sym_some_DASH_GT] = ACTIONS(295),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(295),
    [anon_sym_cond_DASH_GT] = ACTIONS(295),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(295),
    [sym__symbol_chars] = ACTIONS(295),
    [anon_sym_LPAREN] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(295),
    [anon_sym_RBRACK] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(295),
    [anon_sym_RBRACE] = ACTIONS(295),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(295),
    [anon_sym_POUND] = ACTIONS(295),
    [anon_sym_POUND_LBRACE] = ACTIONS(295),
    [anon_sym_SEMI] = ACTIONS(295),
    [anon_sym_POUND_BANG] = ACTIONS(295),
    [anon_sym_POUND_] = ACTIONS(295),
    [anon_sym_] = ACTIONS(293),
    [anon_sym_LPARENcomment] = ACTIONS(295),
    [anon_sym_POUND_LPAREN] = ACTIONS(295),
    [sym_shorthand_function_arg] = ACTIONS(295),
    [sym_defn_function] = ACTIONS(295),
  },
  [146] = {
    [sym__symbol_chars] = ACTIONS(776),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(778),
    [sym_nil] = ACTIONS(780),
    [sym_true] = ACTIONS(780),
    [sym_false] = ACTIONS(780),
    [sym_number_long] = ACTIONS(780),
    [sym_number_double] = ACTIONS(780),
    [anon_sym_BSLASH] = ACTIONS(780),
    [anon_sym_DQUOTE] = ACTIONS(780),
    [anon_sym_POUND_DQUOTE] = ACTIONS(780),
    [anon_sym_SQUOTE] = ACTIONS(780),
    [anon_sym_LPARENquote] = ACTIONS(780),
    [anon_sym_RPAREN] = ACTIONS(780),
    [anon_sym_COLON] = ACTIONS(780),
    [anon_sym_COLON_COLON] = ACTIONS(780),
    [anon_sym_DASH_GT] = ACTIONS(780),
    [anon_sym_DASH_GT_GT] = ACTIONS(780),
    [anon_sym_as_DASH_GT] = ACTIONS(780),
    [anon_sym_some_DASH_GT] = ACTIONS(780),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(780),
    [anon_sym_cond_DASH_GT] = ACTIONS(780),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(780),
    [sym__symbol_chars] = ACTIONS(780),
    [anon_sym_LPAREN] = ACTIONS(780),
    [anon_sym_LBRACK] = ACTIONS(780),
    [anon_sym_RBRACK] = ACTIONS(780),
    [anon_sym_LBRACE] = ACTIONS(780),
    [anon_sym_RBRACE] = ACTIONS(780),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(780),
    [anon_sym_POUND] = ACTIONS(780),
    [anon_sym_POUND_LBRACE] = ACTIONS(780),
    [anon_sym_SEMI] = ACTIONS(780),
    [anon_sym_POUND_BANG] = ACTIONS(780),
    [anon_sym_POUND_] = ACTIONS(780),
    [anon_sym_] = ACTIONS(778),
    [anon_sym_LPARENcomment] = ACTIONS(780),
    [anon_sym_POUND_LPAREN] = ACTIONS(780),
    [sym_shorthand_function_arg] = ACTIONS(780),
    [sym_defn_function] = ACTIONS(780),
  },
  [148] = {
    [sym__number] = STATE(188),
    [sym__string] = STATE(188),
    [sym__keyword] = STATE(188),
    [sym__unqualified_keyword] = STATE(188),
    [sym_qualified_keyword] = STATE(188),
    [sym__symbol] = STATE(188),
    [sym_threading_macro] = STATE(188),
    [sym_qualified_symbol] = STATE(188),
    [sym__one_form] = STATE(188),
    [sym__paren_sequence] = STATE(188),
    [sym__bracket_sequence] = STATE(188),
    [sym__curly_brace_sequence] = STATE(188),
    [aux_sym_comment_macro_repeat1] = STATE(188),
    [sym_number_long] = ACTIONS(471),
    [sym_number_double] = ACTIONS(471),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(782),
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
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(471),
  },
  [149] = {
    [aux_sym__string_repeat1] = STATE(219),
    [anon_sym_DQUOTE] = ACTIONS(784),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(786),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(786),
  },
  [150] = {
    [sym__keyword_chars] = ACTIONS(788),
  },
  [151] = {
    [sym__keyword_chars] = ACTIONS(790),
  },
  [152] = {
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
  [153] = {
    [sym_number_long] = ACTIONS(95),
    [sym_number_double] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(95),
    [anon_sym_SLASH] = ACTIONS(792),
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
  [154] = {
    [sym__number] = STATE(224),
    [sym__string] = STATE(224),
    [sym__keyword] = STATE(224),
    [sym__unqualified_keyword] = STATE(224),
    [sym_qualified_keyword] = STATE(224),
    [sym__symbol] = STATE(224),
    [sym_threading_macro] = STATE(224),
    [sym_qualified_symbol] = STATE(224),
    [sym__one_form] = STATE(224),
    [sym__paren_sequence] = STATE(224),
    [sym__bracket_sequence] = STATE(224),
    [sym__curly_brace_sequence] = STATE(224),
    [aux_sym_comment_macro_repeat1] = STATE(224),
    [sym_number_long] = ACTIONS(794),
    [sym_number_double] = ACTIONS(794),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(796),
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
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(794),
  },
  [155] = {
    [sym__number] = STATE(226),
    [sym__string] = STATE(226),
    [sym__keyword] = STATE(226),
    [sym__unqualified_keyword] = STATE(226),
    [sym_qualified_keyword] = STATE(226),
    [sym__symbol] = STATE(226),
    [sym_threading_macro] = STATE(226),
    [sym_qualified_symbol] = STATE(226),
    [sym__one_form] = STATE(226),
    [sym__paren_sequence] = STATE(226),
    [sym__bracket_sequence] = STATE(226),
    [sym__curly_brace_sequence] = STATE(226),
    [aux_sym_comment_macro_repeat1] = STATE(226),
    [sym_number_long] = ACTIONS(798),
    [sym_number_double] = ACTIONS(798),
    [anon_sym_DQUOTE] = ACTIONS(389),
    [anon_sym_COLON] = ACTIONS(391),
    [anon_sym_COLON_COLON] = ACTIONS(393),
    [anon_sym_DASH_GT] = ACTIONS(395),
    [anon_sym_DASH_GT_GT] = ACTIONS(395),
    [anon_sym_as_DASH_GT] = ACTIONS(395),
    [anon_sym_some_DASH_GT] = ACTIONS(395),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(395),
    [anon_sym_cond_DASH_GT] = ACTIONS(395),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(395),
    [sym__symbol_chars] = ACTIONS(397),
    [anon_sym_LPAREN] = ACTIONS(399),
    [anon_sym_LBRACK] = ACTIONS(401),
    [anon_sym_RBRACK] = ACTIONS(800),
    [anon_sym_LBRACE] = ACTIONS(405),
    [anon_sym_POUND] = ACTIONS(407),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(798),
  },
  [156] = {
    [ts_builtin_sym_end] = ACTIONS(802),
    [sym_nil] = ACTIONS(804),
    [sym_true] = ACTIONS(804),
    [sym_false] = ACTIONS(804),
    [sym_number_long] = ACTIONS(804),
    [sym_number_double] = ACTIONS(804),
    [anon_sym_BSLASH] = ACTIONS(804),
    [anon_sym_DQUOTE] = ACTIONS(804),
    [anon_sym_POUND_DQUOTE] = ACTIONS(804),
    [anon_sym_SQUOTE] = ACTIONS(804),
    [anon_sym_LPARENquote] = ACTIONS(804),
    [anon_sym_RPAREN] = ACTIONS(804),
    [anon_sym_COLON] = ACTIONS(804),
    [anon_sym_COLON_COLON] = ACTIONS(804),
    [anon_sym_DASH_GT] = ACTIONS(804),
    [anon_sym_DASH_GT_GT] = ACTIONS(804),
    [anon_sym_as_DASH_GT] = ACTIONS(804),
    [anon_sym_some_DASH_GT] = ACTIONS(804),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(804),
    [anon_sym_cond_DASH_GT] = ACTIONS(804),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(804),
    [sym__symbol_chars] = ACTIONS(804),
    [anon_sym_LPAREN] = ACTIONS(804),
    [anon_sym_LBRACK] = ACTIONS(804),
    [anon_sym_RBRACK] = ACTIONS(804),
    [anon_sym_LBRACE] = ACTIONS(804),
    [anon_sym_RBRACE] = ACTIONS(804),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(804),
    [anon_sym_POUND] = ACTIONS(804),
    [anon_sym_POUND_LBRACE] = ACTIONS(804),
    [anon_sym_SEMI] = ACTIONS(804),
    [anon_sym_POUND_BANG] = ACTIONS(804),
    [anon_sym_POUND_] = ACTIONS(804),
    [anon_sym_] = ACTIONS(802),
    [anon_sym_LPARENcomment] = ACTIONS(804),
    [anon_sym_POUND_LPAREN] = ACTIONS(804),
    [sym_shorthand_function_arg] = ACTIONS(804),
    [sym_defn_function] = ACTIONS(804),
  },
  [157] = {
    [sym__number] = STATE(228),
    [sym__string] = STATE(228),
    [sym__keyword] = STATE(228),
    [sym__unqualified_keyword] = STATE(228),
    [sym_qualified_keyword] = STATE(228),
    [sym__symbol] = STATE(228),
    [sym_threading_macro] = STATE(228),
    [sym_qualified_symbol] = STATE(228),
    [sym__one_form] = STATE(228),
    [sym__paren_sequence] = STATE(228),
    [sym__bracket_sequence] = STATE(228),
    [sym__curly_brace_sequence] = STATE(228),
    [aux_sym_comment_macro_repeat1] = STATE(228),
    [sym_number_long] = ACTIONS(806),
    [sym_number_double] = ACTIONS(806),
    [anon_sym_DQUOTE] = ACTIONS(411),
    [anon_sym_COLON] = ACTIONS(413),
    [anon_sym_COLON_COLON] = ACTIONS(415),
    [anon_sym_DASH_GT] = ACTIONS(417),
    [anon_sym_DASH_GT_GT] = ACTIONS(417),
    [anon_sym_as_DASH_GT] = ACTIONS(417),
    [anon_sym_some_DASH_GT] = ACTIONS(417),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(417),
    [anon_sym_cond_DASH_GT] = ACTIONS(417),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(417),
    [sym__symbol_chars] = ACTIONS(419),
    [anon_sym_LPAREN] = ACTIONS(421),
    [anon_sym_LBRACK] = ACTIONS(423),
    [anon_sym_LBRACE] = ACTIONS(425),
    [anon_sym_RBRACE] = ACTIONS(808),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(806),
  },
  [158] = {
    [anon_sym_LBRACE] = ACTIONS(810),
  },
  [159] = {
    [sym__number] = STATE(231),
    [sym__string] = STATE(231),
    [sym__keyword] = STATE(231),
    [sym__unqualified_keyword] = STATE(231),
    [sym_qualified_keyword] = STATE(231),
    [sym__symbol] = STATE(231),
    [sym_threading_macro] = STATE(231),
    [sym_qualified_symbol] = STATE(231),
    [sym__one_form] = STATE(231),
    [sym__paren_sequence] = STATE(231),
    [sym__bracket_sequence] = STATE(231),
    [sym__curly_brace_sequence] = STATE(231),
    [aux_sym_comment_macro_repeat1] = STATE(231),
    [sym_number_long] = ACTIONS(812),
    [sym_number_double] = ACTIONS(812),
    [anon_sym_DQUOTE] = ACTIONS(389),
    [anon_sym_COLON] = ACTIONS(391),
    [anon_sym_COLON_COLON] = ACTIONS(393),
    [anon_sym_DASH_GT] = ACTIONS(395),
    [anon_sym_DASH_GT_GT] = ACTIONS(395),
    [anon_sym_as_DASH_GT] = ACTIONS(395),
    [anon_sym_some_DASH_GT] = ACTIONS(395),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(395),
    [anon_sym_cond_DASH_GT] = ACTIONS(395),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(395),
    [sym__symbol_chars] = ACTIONS(397),
    [anon_sym_LPAREN] = ACTIONS(399),
    [anon_sym_LBRACK] = ACTIONS(401),
    [anon_sym_RBRACK] = ACTIONS(814),
    [anon_sym_LBRACE] = ACTIONS(405),
    [anon_sym_POUND] = ACTIONS(407),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(812),
  },
  [160] = {
    [aux_sym__string_repeat1] = STATE(233),
    [anon_sym_DQUOTE] = ACTIONS(816),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(818),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(818),
  },
  [161] = {
    [sym__keyword_chars] = ACTIONS(820),
  },
  [162] = {
    [sym__keyword_chars] = ACTIONS(822),
  },
  [163] = {
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
  [164] = {
    [sym_number_long] = ACTIONS(95),
    [sym_number_double] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(95),
    [anon_sym_SLASH] = ACTIONS(824),
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
  [165] = {
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
    [sym_number_long] = ACTIONS(826),
    [sym_number_double] = ACTIONS(826),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(828),
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
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(826),
  },
  [166] = {
    [sym__number] = STATE(240),
    [sym__string] = STATE(240),
    [sym__keyword] = STATE(240),
    [sym__unqualified_keyword] = STATE(240),
    [sym_qualified_keyword] = STATE(240),
    [sym__symbol] = STATE(240),
    [sym_threading_macro] = STATE(240),
    [sym_qualified_symbol] = STATE(240),
    [sym__one_form] = STATE(240),
    [sym__paren_sequence] = STATE(240),
    [sym__bracket_sequence] = STATE(240),
    [sym__curly_brace_sequence] = STATE(240),
    [aux_sym_comment_macro_repeat1] = STATE(240),
    [sym_number_long] = ACTIONS(830),
    [sym_number_double] = ACTIONS(830),
    [anon_sym_DQUOTE] = ACTIONS(389),
    [anon_sym_COLON] = ACTIONS(391),
    [anon_sym_COLON_COLON] = ACTIONS(393),
    [anon_sym_DASH_GT] = ACTIONS(395),
    [anon_sym_DASH_GT_GT] = ACTIONS(395),
    [anon_sym_as_DASH_GT] = ACTIONS(395),
    [anon_sym_some_DASH_GT] = ACTIONS(395),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(395),
    [anon_sym_cond_DASH_GT] = ACTIONS(395),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(395),
    [sym__symbol_chars] = ACTIONS(397),
    [anon_sym_LPAREN] = ACTIONS(399),
    [anon_sym_LBRACK] = ACTIONS(401),
    [anon_sym_RBRACK] = ACTIONS(832),
    [anon_sym_LBRACE] = ACTIONS(405),
    [anon_sym_POUND] = ACTIONS(407),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(830),
  },
  [167] = {
    [sym__number] = STATE(242),
    [sym__string] = STATE(242),
    [sym__keyword] = STATE(242),
    [sym__unqualified_keyword] = STATE(242),
    [sym_qualified_keyword] = STATE(242),
    [sym__symbol] = STATE(242),
    [sym_threading_macro] = STATE(242),
    [sym_qualified_symbol] = STATE(242),
    [sym__one_form] = STATE(242),
    [sym__paren_sequence] = STATE(242),
    [sym__bracket_sequence] = STATE(242),
    [sym__curly_brace_sequence] = STATE(242),
    [aux_sym_comment_macro_repeat1] = STATE(242),
    [sym_number_long] = ACTIONS(834),
    [sym_number_double] = ACTIONS(834),
    [anon_sym_DQUOTE] = ACTIONS(411),
    [anon_sym_COLON] = ACTIONS(413),
    [anon_sym_COLON_COLON] = ACTIONS(415),
    [anon_sym_DASH_GT] = ACTIONS(417),
    [anon_sym_DASH_GT_GT] = ACTIONS(417),
    [anon_sym_as_DASH_GT] = ACTIONS(417),
    [anon_sym_some_DASH_GT] = ACTIONS(417),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(417),
    [anon_sym_cond_DASH_GT] = ACTIONS(417),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(417),
    [sym__symbol_chars] = ACTIONS(419),
    [anon_sym_LPAREN] = ACTIONS(421),
    [anon_sym_LBRACK] = ACTIONS(423),
    [anon_sym_LBRACE] = ACTIONS(425),
    [anon_sym_RBRACE] = ACTIONS(836),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(834),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(838),
    [sym_nil] = ACTIONS(840),
    [sym_true] = ACTIONS(840),
    [sym_false] = ACTIONS(840),
    [sym_number_long] = ACTIONS(840),
    [sym_number_double] = ACTIONS(840),
    [anon_sym_BSLASH] = ACTIONS(840),
    [anon_sym_DQUOTE] = ACTIONS(840),
    [anon_sym_POUND_DQUOTE] = ACTIONS(840),
    [anon_sym_SQUOTE] = ACTIONS(840),
    [anon_sym_LPARENquote] = ACTIONS(840),
    [anon_sym_RPAREN] = ACTIONS(840),
    [anon_sym_COLON] = ACTIONS(840),
    [anon_sym_COLON_COLON] = ACTIONS(840),
    [anon_sym_DASH_GT] = ACTIONS(840),
    [anon_sym_DASH_GT_GT] = ACTIONS(840),
    [anon_sym_as_DASH_GT] = ACTIONS(840),
    [anon_sym_some_DASH_GT] = ACTIONS(840),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(840),
    [anon_sym_cond_DASH_GT] = ACTIONS(840),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(840),
    [sym__symbol_chars] = ACTIONS(840),
    [anon_sym_LPAREN] = ACTIONS(840),
    [anon_sym_LBRACK] = ACTIONS(840),
    [anon_sym_RBRACK] = ACTIONS(840),
    [anon_sym_LBRACE] = ACTIONS(840),
    [anon_sym_RBRACE] = ACTIONS(840),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(840),
    [anon_sym_POUND] = ACTIONS(840),
    [anon_sym_POUND_LBRACE] = ACTIONS(840),
    [anon_sym_SEMI] = ACTIONS(840),
    [anon_sym_POUND_BANG] = ACTIONS(840),
    [anon_sym_POUND_] = ACTIONS(840),
    [anon_sym_] = ACTIONS(838),
    [anon_sym_LPARENcomment] = ACTIONS(840),
    [anon_sym_POUND_LPAREN] = ACTIONS(840),
    [sym_shorthand_function_arg] = ACTIONS(840),
    [sym_defn_function] = ACTIONS(840),
  },
  [169] = {
    [anon_sym_LBRACE] = ACTIONS(842),
  },
  [170] = {
    [sym__number] = STATE(245),
    [sym__string] = STATE(245),
    [sym__keyword] = STATE(245),
    [sym__unqualified_keyword] = STATE(245),
    [sym_qualified_keyword] = STATE(245),
    [sym__symbol] = STATE(245),
    [sym_threading_macro] = STATE(245),
    [sym_qualified_symbol] = STATE(245),
    [sym__one_form] = STATE(245),
    [sym__paren_sequence] = STATE(245),
    [sym__bracket_sequence] = STATE(245),
    [sym__curly_brace_sequence] = STATE(245),
    [aux_sym_comment_macro_repeat1] = STATE(245),
    [sym_number_long] = ACTIONS(844),
    [sym_number_double] = ACTIONS(844),
    [anon_sym_DQUOTE] = ACTIONS(411),
    [anon_sym_COLON] = ACTIONS(413),
    [anon_sym_COLON_COLON] = ACTIONS(415),
    [anon_sym_DASH_GT] = ACTIONS(417),
    [anon_sym_DASH_GT_GT] = ACTIONS(417),
    [anon_sym_as_DASH_GT] = ACTIONS(417),
    [anon_sym_some_DASH_GT] = ACTIONS(417),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(417),
    [anon_sym_cond_DASH_GT] = ACTIONS(417),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(417),
    [sym__symbol_chars] = ACTIONS(419),
    [anon_sym_LPAREN] = ACTIONS(421),
    [anon_sym_LBRACK] = ACTIONS(423),
    [anon_sym_LBRACE] = ACTIONS(425),
    [anon_sym_RBRACE] = ACTIONS(846),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(844),
  },
  [171] = {
    [sym__number] = STATE(246),
    [sym__string] = STATE(246),
    [sym__keyword] = STATE(246),
    [sym__unqualified_keyword] = STATE(246),
    [sym_qualified_keyword] = STATE(246),
    [sym__symbol] = STATE(246),
    [sym_threading_macro] = STATE(246),
    [sym_qualified_symbol] = STATE(246),
    [sym__one_form] = STATE(246),
    [sym__paren_sequence] = STATE(246),
    [sym__bracket_sequence] = STATE(246),
    [sym__curly_brace_sequence] = STATE(246),
    [aux_sym_comment_macro_repeat1] = STATE(246),
    [sym_number_long] = ACTIONS(848),
    [sym_number_double] = ACTIONS(848),
    [anon_sym_DQUOTE] = ACTIONS(411),
    [anon_sym_COLON] = ACTIONS(413),
    [anon_sym_COLON_COLON] = ACTIONS(415),
    [anon_sym_DASH_GT] = ACTIONS(417),
    [anon_sym_DASH_GT_GT] = ACTIONS(417),
    [anon_sym_as_DASH_GT] = ACTIONS(417),
    [anon_sym_some_DASH_GT] = ACTIONS(417),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(417),
    [anon_sym_cond_DASH_GT] = ACTIONS(417),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(417),
    [sym__symbol_chars] = ACTIONS(419),
    [anon_sym_LPAREN] = ACTIONS(421),
    [anon_sym_LBRACK] = ACTIONS(423),
    [anon_sym_LBRACE] = ACTIONS(425),
    [anon_sym_RBRACE] = ACTIONS(846),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(848),
  },
  [172] = {
    [aux_sym_ignore_form_repeat1] = STATE(247),
    [ts_builtin_sym_end] = ACTIONS(850),
    [sym_nil] = ACTIONS(852),
    [sym_true] = ACTIONS(852),
    [sym_false] = ACTIONS(852),
    [sym_number_long] = ACTIONS(852),
    [sym_number_double] = ACTIONS(852),
    [anon_sym_BSLASH] = ACTIONS(852),
    [anon_sym_DQUOTE] = ACTIONS(852),
    [anon_sym_POUND_DQUOTE] = ACTIONS(852),
    [anon_sym_SQUOTE] = ACTIONS(852),
    [anon_sym_LPARENquote] = ACTIONS(852),
    [anon_sym_COLON] = ACTIONS(852),
    [anon_sym_COLON_COLON] = ACTIONS(852),
    [anon_sym_DASH_GT] = ACTIONS(852),
    [anon_sym_DASH_GT_GT] = ACTIONS(852),
    [anon_sym_as_DASH_GT] = ACTIONS(852),
    [anon_sym_some_DASH_GT] = ACTIONS(852),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(852),
    [anon_sym_cond_DASH_GT] = ACTIONS(852),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(852),
    [sym__symbol_chars] = ACTIONS(852),
    [anon_sym_LPAREN] = ACTIONS(852),
    [anon_sym_LBRACK] = ACTIONS(852),
    [anon_sym_LBRACE] = ACTIONS(852),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(852),
    [anon_sym_POUND] = ACTIONS(852),
    [anon_sym_POUND_LBRACE] = ACTIONS(852),
    [anon_sym_SEMI] = ACTIONS(852),
    [anon_sym_POUND_BANG] = ACTIONS(852),
    [anon_sym_POUND_] = ACTIONS(852),
    [anon_sym_] = ACTIONS(854),
    [anon_sym_LPARENcomment] = ACTIONS(852),
    [anon_sym_POUND_LPAREN] = ACTIONS(852),
    [sym_defn_function] = ACTIONS(852),
  },
  [173] = {
    [aux_sym_ignore_form_repeat1] = STATE(248),
    [ts_builtin_sym_end] = ACTIONS(850),
    [sym_nil] = ACTIONS(852),
    [sym_true] = ACTIONS(852),
    [sym_false] = ACTIONS(852),
    [sym_number_long] = ACTIONS(852),
    [sym_number_double] = ACTIONS(852),
    [anon_sym_BSLASH] = ACTIONS(852),
    [anon_sym_DQUOTE] = ACTIONS(852),
    [anon_sym_POUND_DQUOTE] = ACTIONS(852),
    [anon_sym_SQUOTE] = ACTIONS(852),
    [anon_sym_LPARENquote] = ACTIONS(852),
    [anon_sym_COLON] = ACTIONS(852),
    [anon_sym_COLON_COLON] = ACTIONS(852),
    [anon_sym_DASH_GT] = ACTIONS(852),
    [anon_sym_DASH_GT_GT] = ACTIONS(852),
    [anon_sym_as_DASH_GT] = ACTIONS(852),
    [anon_sym_some_DASH_GT] = ACTIONS(852),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(852),
    [anon_sym_cond_DASH_GT] = ACTIONS(852),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(852),
    [sym__symbol_chars] = ACTIONS(852),
    [anon_sym_LPAREN] = ACTIONS(852),
    [anon_sym_LBRACK] = ACTIONS(852),
    [anon_sym_LBRACE] = ACTIONS(852),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(852),
    [anon_sym_POUND] = ACTIONS(852),
    [anon_sym_POUND_LBRACE] = ACTIONS(852),
    [anon_sym_SEMI] = ACTIONS(852),
    [anon_sym_POUND_BANG] = ACTIONS(852),
    [anon_sym_POUND_] = ACTIONS(852),
    [anon_sym_] = ACTIONS(856),
    [anon_sym_LPARENcomment] = ACTIONS(852),
    [anon_sym_POUND_LPAREN] = ACTIONS(852),
    [sym_defn_function] = ACTIONS(852),
  },
  [174] = {
    [aux_sym_ignore_form_repeat1] = STATE(174),
    [sym_number_long] = ACTIONS(858),
    [sym_number_double] = ACTIONS(858),
    [anon_sym_DQUOTE] = ACTIONS(858),
    [anon_sym_COLON] = ACTIONS(858),
    [anon_sym_COLON_COLON] = ACTIONS(858),
    [anon_sym_DASH_GT] = ACTIONS(858),
    [anon_sym_DASH_GT_GT] = ACTIONS(858),
    [anon_sym_as_DASH_GT] = ACTIONS(858),
    [anon_sym_some_DASH_GT] = ACTIONS(858),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(858),
    [anon_sym_cond_DASH_GT] = ACTIONS(858),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(858),
    [sym__symbol_chars] = ACTIONS(858),
    [anon_sym_LPAREN] = ACTIONS(858),
    [anon_sym_LBRACK] = ACTIONS(858),
    [anon_sym_LBRACE] = ACTIONS(858),
    [anon_sym_POUND] = ACTIONS(858),
    [anon_sym_] = ACTIONS(860),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(858),
  },
  [175] = {
    [sym_number_long] = ACTIONS(265),
    [sym_number_double] = ACTIONS(265),
    [anon_sym_DQUOTE] = ACTIONS(265),
    [anon_sym_RPAREN] = ACTIONS(265),
    [anon_sym_COLON] = ACTIONS(265),
    [anon_sym_COLON_COLON] = ACTIONS(265),
    [anon_sym_DASH_GT] = ACTIONS(265),
    [anon_sym_DASH_GT_GT] = ACTIONS(265),
    [anon_sym_as_DASH_GT] = ACTIONS(265),
    [anon_sym_some_DASH_GT] = ACTIONS(265),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(265),
    [anon_sym_cond_DASH_GT] = ACTIONS(265),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(265),
    [sym__symbol_chars] = ACTIONS(265),
    [anon_sym_LPAREN] = ACTIONS(265),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_LBRACE] = ACTIONS(265),
    [anon_sym_POUND] = ACTIONS(265),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(265),
  },
  [176] = {
    [aux_sym__string_repeat1] = STATE(105),
    [anon_sym_DQUOTE] = ACTIONS(863),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(269),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(269),
  },
  [177] = {
    [sym_number_long] = ACTIONS(291),
    [sym_number_double] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(291),
    [anon_sym_RPAREN] = ACTIONS(291),
    [anon_sym_COLON] = ACTIONS(291),
    [anon_sym_COLON_COLON] = ACTIONS(291),
    [anon_sym_DASH_GT] = ACTIONS(291),
    [anon_sym_DASH_GT_GT] = ACTIONS(291),
    [anon_sym_as_DASH_GT] = ACTIONS(291),
    [anon_sym_some_DASH_GT] = ACTIONS(291),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(291),
    [anon_sym_cond_DASH_GT] = ACTIONS(291),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(291),
    [sym__symbol_chars] = ACTIONS(291),
    [anon_sym_LPAREN] = ACTIONS(291),
    [anon_sym_LBRACK] = ACTIONS(291),
    [anon_sym_LBRACE] = ACTIONS(291),
    [anon_sym_POUND] = ACTIONS(291),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(291),
  },
  [178] = {
    [sym_number_long] = ACTIONS(295),
    [sym_number_double] = ACTIONS(295),
    [anon_sym_DQUOTE] = ACTIONS(295),
    [anon_sym_RPAREN] = ACTIONS(295),
    [anon_sym_COLON] = ACTIONS(295),
    [anon_sym_COLON_COLON] = ACTIONS(295),
    [anon_sym_SLASH] = ACTIONS(865),
    [anon_sym_DASH_GT] = ACTIONS(295),
    [anon_sym_DASH_GT_GT] = ACTIONS(295),
    [anon_sym_as_DASH_GT] = ACTIONS(295),
    [anon_sym_some_DASH_GT] = ACTIONS(295),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(295),
    [anon_sym_cond_DASH_GT] = ACTIONS(295),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(295),
    [sym__symbol_chars] = ACTIONS(295),
    [anon_sym_LPAREN] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(295),
    [anon_sym_POUND] = ACTIONS(295),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(295),
  },
  [179] = {
    [sym__symbol_chars] = ACTIONS(867),
  },
  [180] = {
    [sym_number_long] = ACTIONS(780),
    [sym_number_double] = ACTIONS(780),
    [anon_sym_DQUOTE] = ACTIONS(780),
    [anon_sym_RPAREN] = ACTIONS(780),
    [anon_sym_COLON] = ACTIONS(780),
    [anon_sym_COLON_COLON] = ACTIONS(780),
    [anon_sym_DASH_GT] = ACTIONS(780),
    [anon_sym_DASH_GT_GT] = ACTIONS(780),
    [anon_sym_as_DASH_GT] = ACTIONS(780),
    [anon_sym_some_DASH_GT] = ACTIONS(780),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(780),
    [anon_sym_cond_DASH_GT] = ACTIONS(780),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(780),
    [sym__symbol_chars] = ACTIONS(780),
    [anon_sym_LPAREN] = ACTIONS(780),
    [anon_sym_LBRACK] = ACTIONS(780),
    [anon_sym_LBRACE] = ACTIONS(780),
    [anon_sym_POUND] = ACTIONS(780),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(780),
  },
  [181] = {
    [sym__number] = STATE(188),
    [sym__string] = STATE(188),
    [sym__keyword] = STATE(188),
    [sym__unqualified_keyword] = STATE(188),
    [sym_qualified_keyword] = STATE(188),
    [sym__symbol] = STATE(188),
    [sym_threading_macro] = STATE(188),
    [sym_qualified_symbol] = STATE(188),
    [sym__one_form] = STATE(188),
    [sym__paren_sequence] = STATE(188),
    [sym__bracket_sequence] = STATE(188),
    [sym__curly_brace_sequence] = STATE(188),
    [aux_sym_comment_macro_repeat1] = STATE(188),
    [sym_number_long] = ACTIONS(471),
    [sym_number_double] = ACTIONS(471),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(869),
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
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(471),
  },
  [182] = {
    [sym_number_long] = ACTIONS(804),
    [sym_number_double] = ACTIONS(804),
    [anon_sym_DQUOTE] = ACTIONS(804),
    [anon_sym_RPAREN] = ACTIONS(804),
    [anon_sym_COLON] = ACTIONS(804),
    [anon_sym_COLON_COLON] = ACTIONS(804),
    [anon_sym_DASH_GT] = ACTIONS(804),
    [anon_sym_DASH_GT_GT] = ACTIONS(804),
    [anon_sym_as_DASH_GT] = ACTIONS(804),
    [anon_sym_some_DASH_GT] = ACTIONS(804),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(804),
    [anon_sym_cond_DASH_GT] = ACTIONS(804),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(804),
    [sym__symbol_chars] = ACTIONS(804),
    [anon_sym_LPAREN] = ACTIONS(804),
    [anon_sym_LBRACK] = ACTIONS(804),
    [anon_sym_LBRACE] = ACTIONS(804),
    [anon_sym_POUND] = ACTIONS(804),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(804),
  },
  [183] = {
    [sym__number] = STATE(231),
    [sym__string] = STATE(231),
    [sym__keyword] = STATE(231),
    [sym__unqualified_keyword] = STATE(231),
    [sym_qualified_keyword] = STATE(231),
    [sym__symbol] = STATE(231),
    [sym_threading_macro] = STATE(231),
    [sym_qualified_symbol] = STATE(231),
    [sym__one_form] = STATE(231),
    [sym__paren_sequence] = STATE(231),
    [sym__bracket_sequence] = STATE(231),
    [sym__curly_brace_sequence] = STATE(231),
    [aux_sym_comment_macro_repeat1] = STATE(231),
    [sym_number_long] = ACTIONS(812),
    [sym_number_double] = ACTIONS(812),
    [anon_sym_DQUOTE] = ACTIONS(389),
    [anon_sym_COLON] = ACTIONS(391),
    [anon_sym_COLON_COLON] = ACTIONS(393),
    [anon_sym_DASH_GT] = ACTIONS(395),
    [anon_sym_DASH_GT_GT] = ACTIONS(395),
    [anon_sym_as_DASH_GT] = ACTIONS(395),
    [anon_sym_some_DASH_GT] = ACTIONS(395),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(395),
    [anon_sym_cond_DASH_GT] = ACTIONS(395),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(395),
    [sym__symbol_chars] = ACTIONS(397),
    [anon_sym_LPAREN] = ACTIONS(399),
    [anon_sym_LBRACK] = ACTIONS(401),
    [anon_sym_RBRACK] = ACTIONS(871),
    [anon_sym_LBRACE] = ACTIONS(405),
    [anon_sym_POUND] = ACTIONS(407),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(812),
  },
  [184] = {
    [sym_number_long] = ACTIONS(840),
    [sym_number_double] = ACTIONS(840),
    [anon_sym_DQUOTE] = ACTIONS(840),
    [anon_sym_RPAREN] = ACTIONS(840),
    [anon_sym_COLON] = ACTIONS(840),
    [anon_sym_COLON_COLON] = ACTIONS(840),
    [anon_sym_DASH_GT] = ACTIONS(840),
    [anon_sym_DASH_GT_GT] = ACTIONS(840),
    [anon_sym_as_DASH_GT] = ACTIONS(840),
    [anon_sym_some_DASH_GT] = ACTIONS(840),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(840),
    [anon_sym_cond_DASH_GT] = ACTIONS(840),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(840),
    [sym__symbol_chars] = ACTIONS(840),
    [anon_sym_LPAREN] = ACTIONS(840),
    [anon_sym_LBRACK] = ACTIONS(840),
    [anon_sym_LBRACE] = ACTIONS(840),
    [anon_sym_POUND] = ACTIONS(840),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(840),
  },
  [185] = {
    [sym__number] = STATE(245),
    [sym__string] = STATE(245),
    [sym__keyword] = STATE(245),
    [sym__unqualified_keyword] = STATE(245),
    [sym_qualified_keyword] = STATE(245),
    [sym__symbol] = STATE(245),
    [sym_threading_macro] = STATE(245),
    [sym_qualified_symbol] = STATE(245),
    [sym__one_form] = STATE(245),
    [sym__paren_sequence] = STATE(245),
    [sym__bracket_sequence] = STATE(245),
    [sym__curly_brace_sequence] = STATE(245),
    [aux_sym_comment_macro_repeat1] = STATE(245),
    [sym_number_long] = ACTIONS(844),
    [sym_number_double] = ACTIONS(844),
    [anon_sym_DQUOTE] = ACTIONS(411),
    [anon_sym_COLON] = ACTIONS(413),
    [anon_sym_COLON_COLON] = ACTIONS(415),
    [anon_sym_DASH_GT] = ACTIONS(417),
    [anon_sym_DASH_GT_GT] = ACTIONS(417),
    [anon_sym_as_DASH_GT] = ACTIONS(417),
    [anon_sym_some_DASH_GT] = ACTIONS(417),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(417),
    [anon_sym_cond_DASH_GT] = ACTIONS(417),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(417),
    [sym__symbol_chars] = ACTIONS(419),
    [anon_sym_LPAREN] = ACTIONS(421),
    [anon_sym_LBRACK] = ACTIONS(423),
    [anon_sym_LBRACE] = ACTIONS(425),
    [anon_sym_RBRACE] = ACTIONS(873),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(844),
  },
  [186] = {
    [sym__number] = STATE(255),
    [sym__string] = STATE(255),
    [sym__keyword] = STATE(255),
    [sym__unqualified_keyword] = STATE(255),
    [sym_qualified_keyword] = STATE(255),
    [sym__symbol] = STATE(255),
    [sym_threading_macro] = STATE(255),
    [sym_qualified_symbol] = STATE(255),
    [sym__one_form] = STATE(255),
    [sym__paren_sequence] = STATE(255),
    [sym__bracket_sequence] = STATE(255),
    [sym__curly_brace_sequence] = STATE(255),
    [aux_sym_comment_macro_repeat1] = STATE(255),
    [sym_number_long] = ACTIONS(875),
    [sym_number_double] = ACTIONS(875),
    [anon_sym_DQUOTE] = ACTIONS(411),
    [anon_sym_COLON] = ACTIONS(413),
    [anon_sym_COLON_COLON] = ACTIONS(415),
    [anon_sym_DASH_GT] = ACTIONS(417),
    [anon_sym_DASH_GT_GT] = ACTIONS(417),
    [anon_sym_as_DASH_GT] = ACTIONS(417),
    [anon_sym_some_DASH_GT] = ACTIONS(417),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(417),
    [anon_sym_cond_DASH_GT] = ACTIONS(417),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(417),
    [sym__symbol_chars] = ACTIONS(419),
    [anon_sym_LPAREN] = ACTIONS(421),
    [anon_sym_LBRACK] = ACTIONS(423),
    [anon_sym_LBRACE] = ACTIONS(425),
    [anon_sym_RBRACE] = ACTIONS(873),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(875),
  },
  [187] = {
    [ts_builtin_sym_end] = ACTIONS(877),
    [sym_nil] = ACTIONS(879),
    [sym_true] = ACTIONS(879),
    [sym_false] = ACTIONS(879),
    [sym_number_long] = ACTIONS(879),
    [sym_number_double] = ACTIONS(877),
    [anon_sym_BSLASH] = ACTIONS(877),
    [anon_sym_DQUOTE] = ACTIONS(877),
    [anon_sym_POUND_DQUOTE] = ACTIONS(877),
    [anon_sym_SQUOTE] = ACTIONS(877),
    [anon_sym_LPARENquote] = ACTIONS(877),
    [anon_sym_RPAREN] = ACTIONS(877),
    [anon_sym_COLON] = ACTIONS(879),
    [anon_sym_COLON_COLON] = ACTIONS(877),
    [anon_sym_DASH_GT] = ACTIONS(879),
    [anon_sym_DASH_GT_GT] = ACTIONS(877),
    [anon_sym_as_DASH_GT] = ACTIONS(877),
    [anon_sym_some_DASH_GT] = ACTIONS(879),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(877),
    [anon_sym_cond_DASH_GT] = ACTIONS(879),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(877),
    [sym__symbol_chars] = ACTIONS(879),
    [anon_sym_LPAREN] = ACTIONS(879),
    [anon_sym_LBRACK] = ACTIONS(877),
    [anon_sym_RBRACK] = ACTIONS(877),
    [anon_sym_LBRACE] = ACTIONS(877),
    [anon_sym_RBRACE] = ACTIONS(877),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(877),
    [anon_sym_POUND] = ACTIONS(879),
    [anon_sym_POUND_LBRACE] = ACTIONS(877),
    [anon_sym_SEMI] = ACTIONS(877),
    [anon_sym_POUND_BANG] = ACTIONS(877),
    [anon_sym_POUND_] = ACTIONS(877),
    [anon_sym_LPARENcomment] = ACTIONS(877),
    [anon_sym_POUND_LPAREN] = ACTIONS(877),
    [sym_shorthand_function_arg] = ACTIONS(877),
    [sym_defn_function] = ACTIONS(877),
  },
  [188] = {
    [sym__number] = STATE(188),
    [sym__string] = STATE(188),
    [sym__keyword] = STATE(188),
    [sym__unqualified_keyword] = STATE(188),
    [sym_qualified_keyword] = STATE(188),
    [sym__symbol] = STATE(188),
    [sym_threading_macro] = STATE(188),
    [sym_qualified_symbol] = STATE(188),
    [sym__one_form] = STATE(188),
    [sym__paren_sequence] = STATE(188),
    [sym__bracket_sequence] = STATE(188),
    [sym__curly_brace_sequence] = STATE(188),
    [aux_sym_comment_macro_repeat1] = STATE(188),
    [sym_number_long] = ACTIONS(881),
    [sym_number_double] = ACTIONS(881),
    [anon_sym_DQUOTE] = ACTIONS(884),
    [anon_sym_RPAREN] = ACTIONS(887),
    [anon_sym_COLON] = ACTIONS(889),
    [anon_sym_COLON_COLON] = ACTIONS(892),
    [anon_sym_DASH_GT] = ACTIONS(895),
    [anon_sym_DASH_GT_GT] = ACTIONS(895),
    [anon_sym_as_DASH_GT] = ACTIONS(895),
    [anon_sym_some_DASH_GT] = ACTIONS(895),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(895),
    [anon_sym_cond_DASH_GT] = ACTIONS(895),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(895),
    [sym__symbol_chars] = ACTIONS(898),
    [anon_sym_LPAREN] = ACTIONS(901),
    [anon_sym_LBRACK] = ACTIONS(904),
    [anon_sym_LBRACE] = ACTIONS(907),
    [anon_sym_POUND] = ACTIONS(910),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(881),
  },
  [189] = {
    [aux_sym_ignore_form_repeat1] = STATE(256),
    [sym_nil] = ACTIONS(435),
    [sym_true] = ACTIONS(435),
    [sym_false] = ACTIONS(435),
    [sym_number_long] = ACTIONS(435),
    [sym_number_double] = ACTIONS(435),
    [anon_sym_BSLASH] = ACTIONS(435),
    [anon_sym_DQUOTE] = ACTIONS(435),
    [anon_sym_POUND_DQUOTE] = ACTIONS(435),
    [anon_sym_SQUOTE] = ACTIONS(435),
    [anon_sym_LPARENquote] = ACTIONS(435),
    [anon_sym_RPAREN] = ACTIONS(435),
    [anon_sym_COLON] = ACTIONS(435),
    [anon_sym_COLON_COLON] = ACTIONS(435),
    [anon_sym_DASH_GT] = ACTIONS(435),
    [anon_sym_DASH_GT_GT] = ACTIONS(435),
    [anon_sym_as_DASH_GT] = ACTIONS(435),
    [anon_sym_some_DASH_GT] = ACTIONS(435),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(435),
    [anon_sym_cond_DASH_GT] = ACTIONS(435),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(435),
    [sym__symbol_chars] = ACTIONS(435),
    [anon_sym_LPAREN] = ACTIONS(435),
    [anon_sym_LBRACK] = ACTIONS(435),
    [anon_sym_LBRACE] = ACTIONS(435),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(435),
    [anon_sym_POUND] = ACTIONS(435),
    [anon_sym_POUND_LBRACE] = ACTIONS(435),
    [anon_sym_SEMI] = ACTIONS(435),
    [anon_sym_POUND_BANG] = ACTIONS(435),
    [anon_sym_POUND_] = ACTIONS(435),
    [anon_sym_] = ACTIONS(913),
    [anon_sym_LPARENcomment] = ACTIONS(435),
    [anon_sym_POUND_LPAREN] = ACTIONS(435),
    [sym_shorthand_function_arg] = ACTIONS(435),
    [sym_defn_function] = ACTIONS(435),
  },
  [190] = {
    [sym__number] = STATE(257),
    [sym__string] = STATE(257),
    [sym__keyword] = STATE(257),
    [sym__unqualified_keyword] = STATE(257),
    [sym_qualified_keyword] = STATE(257),
    [sym__symbol] = STATE(257),
    [sym_threading_macro] = STATE(257),
    [sym_qualified_symbol] = STATE(257),
    [sym__one_form] = STATE(257),
    [sym__paren_sequence] = STATE(257),
    [sym__bracket_sequence] = STATE(257),
    [sym__curly_brace_sequence] = STATE(257),
    [aux_sym_ignore_form_repeat1] = STATE(174),
    [sym_number_long] = ACTIONS(915),
    [sym_number_double] = ACTIONS(915),
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
    [anon_sym_] = ACTIONS(441),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(915),
  },
  [191] = {
    [ts_builtin_sym_end] = ACTIONS(917),
    [sym_nil] = ACTIONS(919),
    [sym_true] = ACTIONS(919),
    [sym_false] = ACTIONS(919),
    [sym_number_long] = ACTIONS(919),
    [sym_number_double] = ACTIONS(917),
    [anon_sym_BSLASH] = ACTIONS(917),
    [anon_sym_DQUOTE] = ACTIONS(917),
    [anon_sym_POUND_DQUOTE] = ACTIONS(917),
    [anon_sym_SQUOTE] = ACTIONS(917),
    [anon_sym_LPARENquote] = ACTIONS(917),
    [anon_sym_RPAREN] = ACTIONS(917),
    [anon_sym_COLON] = ACTIONS(919),
    [anon_sym_COLON_COLON] = ACTIONS(917),
    [anon_sym_DASH_GT] = ACTIONS(919),
    [anon_sym_DASH_GT_GT] = ACTIONS(917),
    [anon_sym_as_DASH_GT] = ACTIONS(917),
    [anon_sym_some_DASH_GT] = ACTIONS(919),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(917),
    [anon_sym_cond_DASH_GT] = ACTIONS(919),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(917),
    [sym__symbol_chars] = ACTIONS(919),
    [anon_sym_LPAREN] = ACTIONS(919),
    [anon_sym_LBRACK] = ACTIONS(917),
    [anon_sym_RBRACK] = ACTIONS(917),
    [anon_sym_LBRACE] = ACTIONS(917),
    [anon_sym_RBRACE] = ACTIONS(917),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(917),
    [anon_sym_POUND] = ACTIONS(919),
    [anon_sym_POUND_LBRACE] = ACTIONS(917),
    [anon_sym_SEMI] = ACTIONS(917),
    [anon_sym_POUND_BANG] = ACTIONS(917),
    [anon_sym_POUND_] = ACTIONS(917),
    [anon_sym_LPARENcomment] = ACTIONS(917),
    [anon_sym_POUND_LPAREN] = ACTIONS(917),
    [sym_shorthand_function_arg] = ACTIONS(917),
    [sym_defn_function] = ACTIONS(917),
  },
  [192] = {
    [sym__anything] = STATE(192),
    [sym__literal] = STATE(192),
    [sym__collection_literal] = STATE(192),
    [sym_boolean] = STATE(192),
    [sym_number] = STATE(192),
    [sym__number] = STATE(25),
    [sym_character] = STATE(192),
    [sym__character] = STATE(26),
    [sym_string] = STATE(192),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(192),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(192),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(192),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(192),
    [sym__symbol] = STATE(31),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(192),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(192),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(192),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym_set] = STATE(192),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(192),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [sym_function] = STATE(192),
    [sym_anonymous_function] = STATE(23),
    [sym_shorthand_function] = STATE(23),
    [aux_sym_shorthand_function_repeat1] = STATE(192),
    [sym_nil] = ACTIONS(921),
    [sym_true] = ACTIONS(924),
    [sym_false] = ACTIONS(924),
    [sym_number_long] = ACTIONS(927),
    [sym_number_double] = ACTIONS(930),
    [anon_sym_BSLASH] = ACTIONS(933),
    [anon_sym_DQUOTE] = ACTIONS(936),
    [anon_sym_POUND_DQUOTE] = ACTIONS(939),
    [anon_sym_SQUOTE] = ACTIONS(942),
    [anon_sym_LPARENquote] = ACTIONS(945),
    [anon_sym_RPAREN] = ACTIONS(948),
    [anon_sym_COLON] = ACTIONS(950),
    [anon_sym_COLON_COLON] = ACTIONS(953),
    [anon_sym_DASH_GT] = ACTIONS(956),
    [anon_sym_DASH_GT_GT] = ACTIONS(959),
    [anon_sym_as_DASH_GT] = ACTIONS(959),
    [anon_sym_some_DASH_GT] = ACTIONS(956),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(959),
    [anon_sym_cond_DASH_GT] = ACTIONS(956),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(959),
    [sym__symbol_chars] = ACTIONS(962),
    [anon_sym_LPAREN] = ACTIONS(965),
    [anon_sym_LBRACK] = ACTIONS(968),
    [anon_sym_LBRACE] = ACTIONS(971),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(974),
    [anon_sym_POUND] = ACTIONS(977),
    [anon_sym_POUND_LBRACE] = ACTIONS(980),
    [anon_sym_SEMI] = ACTIONS(983),
    [anon_sym_POUND_BANG] = ACTIONS(986),
    [anon_sym_POUND_] = ACTIONS(989),
    [anon_sym_LPARENcomment] = ACTIONS(992),
    [anon_sym_POUND_LPAREN] = ACTIONS(995),
    [sym_shorthand_function_arg] = ACTIONS(998),
    [sym_defn_function] = ACTIONS(1001),
  },
  [193] = {
    [sym__hex_char] = ACTIONS(1004),
  },
  [194] = {
    [aux_sym_ignore_form_repeat1] = STATE(259),
    [anon_sym_RPAREN] = ACTIONS(852),
    [anon_sym_] = ACTIONS(1006),
  },
  [195] = {
    [aux_sym_ignore_form_repeat1] = STATE(260),
    [anon_sym_RPAREN] = ACTIONS(852),
    [anon_sym_] = ACTIONS(1008),
  },
  [196] = {
    [ts_builtin_sym_end] = ACTIONS(1010),
    [sym_nil] = ACTIONS(1012),
    [sym_true] = ACTIONS(1012),
    [sym_false] = ACTIONS(1012),
    [sym_number_long] = ACTIONS(1012),
    [sym_number_double] = ACTIONS(1010),
    [anon_sym_BSLASH] = ACTIONS(1010),
    [anon_sym_DQUOTE] = ACTIONS(1010),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1010),
    [anon_sym_SQUOTE] = ACTIONS(1010),
    [anon_sym_LPARENquote] = ACTIONS(1010),
    [anon_sym_RPAREN] = ACTIONS(1010),
    [anon_sym_COLON] = ACTIONS(1012),
    [anon_sym_COLON_COLON] = ACTIONS(1010),
    [anon_sym_DASH_GT] = ACTIONS(1012),
    [anon_sym_DASH_GT_GT] = ACTIONS(1010),
    [anon_sym_as_DASH_GT] = ACTIONS(1010),
    [anon_sym_some_DASH_GT] = ACTIONS(1012),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1010),
    [anon_sym_cond_DASH_GT] = ACTIONS(1012),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1010),
    [sym__symbol_chars] = ACTIONS(1012),
    [anon_sym_LPAREN] = ACTIONS(1012),
    [anon_sym_LBRACK] = ACTIONS(1010),
    [anon_sym_RBRACK] = ACTIONS(1010),
    [anon_sym_LBRACE] = ACTIONS(1010),
    [anon_sym_RBRACE] = ACTIONS(1010),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1010),
    [anon_sym_POUND] = ACTIONS(1012),
    [anon_sym_POUND_LBRACE] = ACTIONS(1010),
    [anon_sym_SEMI] = ACTIONS(1010),
    [anon_sym_POUND_BANG] = ACTIONS(1010),
    [anon_sym_POUND_] = ACTIONS(1010),
    [anon_sym_LPARENcomment] = ACTIONS(1010),
    [anon_sym_POUND_LPAREN] = ACTIONS(1010),
    [sym_shorthand_function_arg] = ACTIONS(1010),
    [sym_defn_function] = ACTIONS(1010),
  },
  [197] = {
    [aux_sym_ignore_form_repeat1] = STATE(261),
    [sym_nil] = ACTIONS(852),
    [sym_true] = ACTIONS(852),
    [sym_false] = ACTIONS(852),
    [sym_number_long] = ACTIONS(852),
    [sym_number_double] = ACTIONS(852),
    [anon_sym_BSLASH] = ACTIONS(852),
    [anon_sym_DQUOTE] = ACTIONS(852),
    [anon_sym_POUND_DQUOTE] = ACTIONS(852),
    [anon_sym_SQUOTE] = ACTIONS(852),
    [anon_sym_LPARENquote] = ACTIONS(852),
    [anon_sym_RPAREN] = ACTIONS(852),
    [anon_sym_COLON] = ACTIONS(852),
    [anon_sym_COLON_COLON] = ACTIONS(852),
    [anon_sym_DASH_GT] = ACTIONS(852),
    [anon_sym_DASH_GT_GT] = ACTIONS(852),
    [anon_sym_as_DASH_GT] = ACTIONS(852),
    [anon_sym_some_DASH_GT] = ACTIONS(852),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(852),
    [anon_sym_cond_DASH_GT] = ACTIONS(852),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(852),
    [sym__symbol_chars] = ACTIONS(852),
    [anon_sym_LPAREN] = ACTIONS(852),
    [anon_sym_LBRACK] = ACTIONS(852),
    [anon_sym_LBRACE] = ACTIONS(852),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(852),
    [anon_sym_POUND] = ACTIONS(852),
    [anon_sym_POUND_LBRACE] = ACTIONS(852),
    [anon_sym_SEMI] = ACTIONS(852),
    [anon_sym_POUND_BANG] = ACTIONS(852),
    [anon_sym_POUND_] = ACTIONS(852),
    [anon_sym_] = ACTIONS(1014),
    [anon_sym_LPARENcomment] = ACTIONS(852),
    [anon_sym_POUND_LPAREN] = ACTIONS(852),
    [sym_defn_function] = ACTIONS(852),
  },
  [198] = {
    [aux_sym_ignore_form_repeat1] = STATE(262),
    [sym_nil] = ACTIONS(852),
    [sym_true] = ACTIONS(852),
    [sym_false] = ACTIONS(852),
    [sym_number_long] = ACTIONS(852),
    [sym_number_double] = ACTIONS(852),
    [anon_sym_BSLASH] = ACTIONS(852),
    [anon_sym_DQUOTE] = ACTIONS(852),
    [anon_sym_POUND_DQUOTE] = ACTIONS(852),
    [anon_sym_SQUOTE] = ACTIONS(852),
    [anon_sym_LPARENquote] = ACTIONS(852),
    [anon_sym_RPAREN] = ACTIONS(852),
    [anon_sym_COLON] = ACTIONS(852),
    [anon_sym_COLON_COLON] = ACTIONS(852),
    [anon_sym_DASH_GT] = ACTIONS(852),
    [anon_sym_DASH_GT_GT] = ACTIONS(852),
    [anon_sym_as_DASH_GT] = ACTIONS(852),
    [anon_sym_some_DASH_GT] = ACTIONS(852),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(852),
    [anon_sym_cond_DASH_GT] = ACTIONS(852),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(852),
    [sym__symbol_chars] = ACTIONS(852),
    [anon_sym_LPAREN] = ACTIONS(852),
    [anon_sym_LBRACK] = ACTIONS(852),
    [anon_sym_LBRACE] = ACTIONS(852),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(852),
    [anon_sym_POUND] = ACTIONS(852),
    [anon_sym_POUND_LBRACE] = ACTIONS(852),
    [anon_sym_SEMI] = ACTIONS(852),
    [anon_sym_POUND_BANG] = ACTIONS(852),
    [anon_sym_POUND_] = ACTIONS(852),
    [anon_sym_] = ACTIONS(1016),
    [anon_sym_LPARENcomment] = ACTIONS(852),
    [anon_sym_POUND_LPAREN] = ACTIONS(852),
    [sym_defn_function] = ACTIONS(852),
  },
  [199] = {
    [sym__symbol_chars] = ACTIONS(1018),
  },
  [200] = {
    [anon_sym_RPAREN] = ACTIONS(1020),
  },
  [201] = {
    [anon_sym_RPAREN] = ACTIONS(1022),
  },
  [202] = {
    [ts_builtin_sym_end] = ACTIONS(1024),
    [sym_nil] = ACTIONS(1026),
    [sym_true] = ACTIONS(1026),
    [sym_false] = ACTIONS(1026),
    [sym_number_long] = ACTIONS(1026),
    [sym_number_double] = ACTIONS(1024),
    [anon_sym_BSLASH] = ACTIONS(1024),
    [anon_sym_DQUOTE] = ACTIONS(1024),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1024),
    [anon_sym_SQUOTE] = ACTIONS(1024),
    [anon_sym_LPARENquote] = ACTIONS(1024),
    [anon_sym_RPAREN] = ACTIONS(1024),
    [anon_sym_COLON] = ACTIONS(1026),
    [anon_sym_COLON_COLON] = ACTIONS(1024),
    [anon_sym_DASH_GT] = ACTIONS(1026),
    [anon_sym_DASH_GT_GT] = ACTIONS(1024),
    [anon_sym_as_DASH_GT] = ACTIONS(1024),
    [anon_sym_some_DASH_GT] = ACTIONS(1026),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1024),
    [anon_sym_cond_DASH_GT] = ACTIONS(1026),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1024),
    [sym__symbol_chars] = ACTIONS(1026),
    [anon_sym_LPAREN] = ACTIONS(1026),
    [anon_sym_LBRACK] = ACTIONS(1024),
    [anon_sym_RBRACK] = ACTIONS(1024),
    [anon_sym_LBRACE] = ACTIONS(1024),
    [anon_sym_RBRACE] = ACTIONS(1024),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1024),
    [anon_sym_POUND] = ACTIONS(1026),
    [anon_sym_POUND_LBRACE] = ACTIONS(1024),
    [anon_sym_SEMI] = ACTIONS(1024),
    [anon_sym_POUND_BANG] = ACTIONS(1024),
    [anon_sym_POUND_] = ACTIONS(1024),
    [anon_sym_LPARENcomment] = ACTIONS(1024),
    [anon_sym_POUND_LPAREN] = ACTIONS(1024),
    [sym_shorthand_function_arg] = ACTIONS(1024),
    [sym_defn_function] = ACTIONS(1024),
  },
  [203] = {
    [anon_sym_RPAREN] = ACTIONS(1028),
  },
  [204] = {
    [sym__anything] = STATE(126),
    [sym__literal] = STATE(126),
    [sym__collection_literal] = STATE(126),
    [sym_boolean] = STATE(126),
    [sym_number] = STATE(126),
    [sym__number] = STATE(25),
    [sym_character] = STATE(126),
    [sym__character] = STATE(26),
    [sym_string] = STATE(126),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(126),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(126),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(126),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(126),
    [sym__symbol] = STATE(31),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(126),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(126),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(126),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym_set] = STATE(126),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(126),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [sym_function] = STATE(126),
    [sym_anonymous_function] = STATE(23),
    [sym_shorthand_function] = STATE(23),
    [aux_sym_program_repeat1] = STATE(126),
    [sym_nil] = ACTIONS(317),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(101),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(1030),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_defn_function] = ACTIONS(57),
  },
  [205] = {
    [aux_sym__multi_arity_fn_repeat1] = STATE(205),
    [anon_sym_RPAREN] = ACTIONS(1032),
    [anon_sym_LPAREN] = ACTIONS(1034),
  },
  [206] = {
    [aux_sym_ignore_form_repeat1] = STATE(266),
    [sym_nil] = ACTIONS(852),
    [sym_true] = ACTIONS(852),
    [sym_false] = ACTIONS(852),
    [sym_number_long] = ACTIONS(852),
    [sym_number_double] = ACTIONS(852),
    [anon_sym_BSLASH] = ACTIONS(852),
    [anon_sym_DQUOTE] = ACTIONS(852),
    [anon_sym_POUND_DQUOTE] = ACTIONS(852),
    [anon_sym_SQUOTE] = ACTIONS(852),
    [anon_sym_LPARENquote] = ACTIONS(852),
    [anon_sym_COLON] = ACTIONS(852),
    [anon_sym_COLON_COLON] = ACTIONS(852),
    [anon_sym_DASH_GT] = ACTIONS(852),
    [anon_sym_DASH_GT_GT] = ACTIONS(852),
    [anon_sym_as_DASH_GT] = ACTIONS(852),
    [anon_sym_some_DASH_GT] = ACTIONS(852),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(852),
    [anon_sym_cond_DASH_GT] = ACTIONS(852),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(852),
    [sym__symbol_chars] = ACTIONS(852),
    [anon_sym_LPAREN] = ACTIONS(852),
    [anon_sym_LBRACK] = ACTIONS(852),
    [anon_sym_RBRACK] = ACTIONS(852),
    [anon_sym_LBRACE] = ACTIONS(852),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(852),
    [anon_sym_POUND] = ACTIONS(852),
    [anon_sym_POUND_LBRACE] = ACTIONS(852),
    [anon_sym_SEMI] = ACTIONS(852),
    [anon_sym_POUND_BANG] = ACTIONS(852),
    [anon_sym_POUND_] = ACTIONS(852),
    [anon_sym_] = ACTIONS(1037),
    [anon_sym_LPARENcomment] = ACTIONS(852),
    [anon_sym_POUND_LPAREN] = ACTIONS(852),
    [sym_defn_function] = ACTIONS(852),
  },
  [207] = {
    [aux_sym_ignore_form_repeat1] = STATE(267),
    [sym_nil] = ACTIONS(852),
    [sym_true] = ACTIONS(852),
    [sym_false] = ACTIONS(852),
    [sym_number_long] = ACTIONS(852),
    [sym_number_double] = ACTIONS(852),
    [anon_sym_BSLASH] = ACTIONS(852),
    [anon_sym_DQUOTE] = ACTIONS(852),
    [anon_sym_POUND_DQUOTE] = ACTIONS(852),
    [anon_sym_SQUOTE] = ACTIONS(852),
    [anon_sym_LPARENquote] = ACTIONS(852),
    [anon_sym_COLON] = ACTIONS(852),
    [anon_sym_COLON_COLON] = ACTIONS(852),
    [anon_sym_DASH_GT] = ACTIONS(852),
    [anon_sym_DASH_GT_GT] = ACTIONS(852),
    [anon_sym_as_DASH_GT] = ACTIONS(852),
    [anon_sym_some_DASH_GT] = ACTIONS(852),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(852),
    [anon_sym_cond_DASH_GT] = ACTIONS(852),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(852),
    [sym__symbol_chars] = ACTIONS(852),
    [anon_sym_LPAREN] = ACTIONS(852),
    [anon_sym_LBRACK] = ACTIONS(852),
    [anon_sym_RBRACK] = ACTIONS(852),
    [anon_sym_LBRACE] = ACTIONS(852),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(852),
    [anon_sym_POUND] = ACTIONS(852),
    [anon_sym_POUND_LBRACE] = ACTIONS(852),
    [anon_sym_SEMI] = ACTIONS(852),
    [anon_sym_POUND_BANG] = ACTIONS(852),
    [anon_sym_POUND_] = ACTIONS(852),
    [anon_sym_] = ACTIONS(1039),
    [anon_sym_LPARENcomment] = ACTIONS(852),
    [anon_sym_POUND_LPAREN] = ACTIONS(852),
    [sym_defn_function] = ACTIONS(852),
  },
  [208] = {
    [aux_sym_ignore_form_repeat1] = STATE(268),
    [sym_nil] = ACTIONS(852),
    [sym_true] = ACTIONS(852),
    [sym_false] = ACTIONS(852),
    [sym_number_long] = ACTIONS(852),
    [sym_number_double] = ACTIONS(852),
    [anon_sym_BSLASH] = ACTIONS(852),
    [anon_sym_DQUOTE] = ACTIONS(852),
    [anon_sym_POUND_DQUOTE] = ACTIONS(852),
    [anon_sym_SQUOTE] = ACTIONS(852),
    [anon_sym_LPARENquote] = ACTIONS(852),
    [anon_sym_COLON] = ACTIONS(852),
    [anon_sym_COLON_COLON] = ACTIONS(852),
    [anon_sym_DASH_GT] = ACTIONS(852),
    [anon_sym_DASH_GT_GT] = ACTIONS(852),
    [anon_sym_as_DASH_GT] = ACTIONS(852),
    [anon_sym_some_DASH_GT] = ACTIONS(852),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(852),
    [anon_sym_cond_DASH_GT] = ACTIONS(852),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(852),
    [sym__symbol_chars] = ACTIONS(852),
    [anon_sym_LPAREN] = ACTIONS(852),
    [anon_sym_LBRACK] = ACTIONS(852),
    [anon_sym_LBRACE] = ACTIONS(852),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(852),
    [anon_sym_POUND] = ACTIONS(852),
    [anon_sym_POUND_LBRACE] = ACTIONS(852),
    [anon_sym_SEMI] = ACTIONS(852),
    [anon_sym_POUND_BANG] = ACTIONS(852),
    [anon_sym_POUND_] = ACTIONS(852),
    [anon_sym_] = ACTIONS(1041),
    [anon_sym_LPARENcomment] = ACTIONS(852),
    [anon_sym_POUND_LPAREN] = ACTIONS(852),
    [sym_defn_function] = ACTIONS(852),
  },
  [209] = {
    [aux_sym_ignore_form_repeat1] = STATE(269),
    [sym_nil] = ACTIONS(852),
    [sym_true] = ACTIONS(852),
    [sym_false] = ACTIONS(852),
    [sym_number_long] = ACTIONS(852),
    [sym_number_double] = ACTIONS(852),
    [anon_sym_BSLASH] = ACTIONS(852),
    [anon_sym_DQUOTE] = ACTIONS(852),
    [anon_sym_POUND_DQUOTE] = ACTIONS(852),
    [anon_sym_SQUOTE] = ACTIONS(852),
    [anon_sym_LPARENquote] = ACTIONS(852),
    [anon_sym_COLON] = ACTIONS(852),
    [anon_sym_COLON_COLON] = ACTIONS(852),
    [anon_sym_DASH_GT] = ACTIONS(852),
    [anon_sym_DASH_GT_GT] = ACTIONS(852),
    [anon_sym_as_DASH_GT] = ACTIONS(852),
    [anon_sym_some_DASH_GT] = ACTIONS(852),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(852),
    [anon_sym_cond_DASH_GT] = ACTIONS(852),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(852),
    [sym__symbol_chars] = ACTIONS(852),
    [anon_sym_LPAREN] = ACTIONS(852),
    [anon_sym_LBRACK] = ACTIONS(852),
    [anon_sym_LBRACE] = ACTIONS(852),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(852),
    [anon_sym_POUND] = ACTIONS(852),
    [anon_sym_POUND_LBRACE] = ACTIONS(852),
    [anon_sym_SEMI] = ACTIONS(852),
    [anon_sym_POUND_BANG] = ACTIONS(852),
    [anon_sym_POUND_] = ACTIONS(852),
    [anon_sym_] = ACTIONS(1043),
    [anon_sym_LPARENcomment] = ACTIONS(852),
    [anon_sym_POUND_LPAREN] = ACTIONS(852),
    [sym_defn_function] = ACTIONS(852),
  },
  [210] = {
    [ts_builtin_sym_end] = ACTIONS(1045),
    [sym_nil] = ACTIONS(1047),
    [sym_true] = ACTIONS(1047),
    [sym_false] = ACTIONS(1047),
    [sym_number_long] = ACTIONS(1047),
    [sym_number_double] = ACTIONS(1045),
    [anon_sym_BSLASH] = ACTIONS(1045),
    [anon_sym_DQUOTE] = ACTIONS(1045),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1045),
    [anon_sym_SQUOTE] = ACTIONS(1045),
    [anon_sym_LPARENquote] = ACTIONS(1045),
    [anon_sym_RPAREN] = ACTIONS(1045),
    [anon_sym_COLON] = ACTIONS(1047),
    [anon_sym_COLON_COLON] = ACTIONS(1045),
    [anon_sym_DASH_GT] = ACTIONS(1047),
    [anon_sym_DASH_GT_GT] = ACTIONS(1045),
    [anon_sym_as_DASH_GT] = ACTIONS(1045),
    [anon_sym_some_DASH_GT] = ACTIONS(1047),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1045),
    [anon_sym_cond_DASH_GT] = ACTIONS(1047),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1045),
    [sym__symbol_chars] = ACTIONS(1047),
    [anon_sym_LPAREN] = ACTIONS(1047),
    [anon_sym_LBRACK] = ACTIONS(1045),
    [anon_sym_RBRACK] = ACTIONS(1045),
    [anon_sym_LBRACE] = ACTIONS(1045),
    [anon_sym_RBRACE] = ACTIONS(1045),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1045),
    [anon_sym_POUND] = ACTIONS(1047),
    [anon_sym_POUND_LBRACE] = ACTIONS(1045),
    [anon_sym_SEMI] = ACTIONS(1045),
    [anon_sym_POUND_BANG] = ACTIONS(1045),
    [anon_sym_POUND_] = ACTIONS(1045),
    [anon_sym_LPARENcomment] = ACTIONS(1045),
    [anon_sym_POUND_LPAREN] = ACTIONS(1045),
    [sym_shorthand_function_arg] = ACTIONS(1045),
    [sym_defn_function] = ACTIONS(1045),
  },
  [211] = {
    [sym__anything] = STATE(64),
    [sym__literal] = STATE(64),
    [sym__collection_literal] = STATE(64),
    [sym_boolean] = STATE(64),
    [sym_number] = STATE(64),
    [sym__number] = STATE(25),
    [sym_character] = STATE(64),
    [sym__character] = STATE(26),
    [sym_string] = STATE(64),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(64),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(64),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(64),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(64),
    [sym__symbol] = STATE(31),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(64),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(64),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(64),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym__hash_map_kv_pair] = STATE(135),
    [sym__hash_map_key] = STATE(64),
    [sym_set] = STATE(64),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(64),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [sym_function] = STATE(64),
    [sym_anonymous_function] = STATE(23),
    [sym_shorthand_function] = STATE(23),
    [aux_sym__hash_map_repeat1] = STATE(135),
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
    [anon_sym_RBRACE] = ACTIONS(1049),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(123),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_defn_function] = ACTIONS(57),
  },
  [212] = {
    [aux_sym_ignore_form_repeat1] = STATE(271),
    [sym_nil] = ACTIONS(852),
    [sym_true] = ACTIONS(852),
    [sym_false] = ACTIONS(852),
    [sym_number_long] = ACTIONS(852),
    [sym_number_double] = ACTIONS(852),
    [anon_sym_BSLASH] = ACTIONS(852),
    [anon_sym_DQUOTE] = ACTIONS(852),
    [anon_sym_POUND_DQUOTE] = ACTIONS(852),
    [anon_sym_SQUOTE] = ACTIONS(852),
    [anon_sym_LPARENquote] = ACTIONS(852),
    [anon_sym_COLON] = ACTIONS(852),
    [anon_sym_COLON_COLON] = ACTIONS(852),
    [anon_sym_DASH_GT] = ACTIONS(852),
    [anon_sym_DASH_GT_GT] = ACTIONS(852),
    [anon_sym_as_DASH_GT] = ACTIONS(852),
    [anon_sym_some_DASH_GT] = ACTIONS(852),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(852),
    [anon_sym_cond_DASH_GT] = ACTIONS(852),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(852),
    [sym__symbol_chars] = ACTIONS(852),
    [anon_sym_LPAREN] = ACTIONS(852),
    [anon_sym_LBRACK] = ACTIONS(852),
    [anon_sym_LBRACE] = ACTIONS(852),
    [anon_sym_RBRACE] = ACTIONS(852),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(852),
    [anon_sym_POUND] = ACTIONS(852),
    [anon_sym_POUND_LBRACE] = ACTIONS(852),
    [anon_sym_SEMI] = ACTIONS(852),
    [anon_sym_POUND_BANG] = ACTIONS(852),
    [anon_sym_POUND_] = ACTIONS(852),
    [anon_sym_] = ACTIONS(1051),
    [anon_sym_LPARENcomment] = ACTIONS(852),
    [anon_sym_POUND_LPAREN] = ACTIONS(852),
    [sym_defn_function] = ACTIONS(852),
  },
  [213] = {
    [aux_sym_ignore_form_repeat1] = STATE(272),
    [sym_nil] = ACTIONS(852),
    [sym_true] = ACTIONS(852),
    [sym_false] = ACTIONS(852),
    [sym_number_long] = ACTIONS(852),
    [sym_number_double] = ACTIONS(852),
    [anon_sym_BSLASH] = ACTIONS(852),
    [anon_sym_DQUOTE] = ACTIONS(852),
    [anon_sym_POUND_DQUOTE] = ACTIONS(852),
    [anon_sym_SQUOTE] = ACTIONS(852),
    [anon_sym_LPARENquote] = ACTIONS(852),
    [anon_sym_COLON] = ACTIONS(852),
    [anon_sym_COLON_COLON] = ACTIONS(852),
    [anon_sym_DASH_GT] = ACTIONS(852),
    [anon_sym_DASH_GT_GT] = ACTIONS(852),
    [anon_sym_as_DASH_GT] = ACTIONS(852),
    [anon_sym_some_DASH_GT] = ACTIONS(852),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(852),
    [anon_sym_cond_DASH_GT] = ACTIONS(852),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(852),
    [sym__symbol_chars] = ACTIONS(852),
    [anon_sym_LPAREN] = ACTIONS(852),
    [anon_sym_LBRACK] = ACTIONS(852),
    [anon_sym_LBRACE] = ACTIONS(852),
    [anon_sym_RBRACE] = ACTIONS(852),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(852),
    [anon_sym_POUND] = ACTIONS(852),
    [anon_sym_POUND_LBRACE] = ACTIONS(852),
    [anon_sym_SEMI] = ACTIONS(852),
    [anon_sym_POUND_BANG] = ACTIONS(852),
    [anon_sym_POUND_] = ACTIONS(852),
    [anon_sym_] = ACTIONS(1053),
    [anon_sym_LPARENcomment] = ACTIONS(852),
    [anon_sym_POUND_LPAREN] = ACTIONS(852),
    [sym_defn_function] = ACTIONS(852),
  },
  [214] = {
    [ts_builtin_sym_end] = ACTIONS(575),
    [sym_nil] = ACTIONS(577),
    [sym_true] = ACTIONS(577),
    [sym_false] = ACTIONS(577),
    [sym_number_long] = ACTIONS(577),
    [sym_number_double] = ACTIONS(577),
    [anon_sym_BSLASH] = ACTIONS(577),
    [anon_sym_DQUOTE] = ACTIONS(577),
    [anon_sym_POUND_DQUOTE] = ACTIONS(577),
    [anon_sym_SQUOTE] = ACTIONS(577),
    [anon_sym_LPARENquote] = ACTIONS(577),
    [anon_sym_RPAREN] = ACTIONS(577),
    [anon_sym_COLON] = ACTIONS(577),
    [anon_sym_COLON_COLON] = ACTIONS(577),
    [anon_sym_DASH_GT] = ACTIONS(577),
    [anon_sym_DASH_GT_GT] = ACTIONS(577),
    [anon_sym_as_DASH_GT] = ACTIONS(577),
    [anon_sym_some_DASH_GT] = ACTIONS(577),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(577),
    [anon_sym_cond_DASH_GT] = ACTIONS(577),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(577),
    [sym__symbol_chars] = ACTIONS(577),
    [anon_sym_LPAREN] = ACTIONS(577),
    [anon_sym_LBRACK] = ACTIONS(577),
    [anon_sym_RBRACK] = ACTIONS(577),
    [anon_sym_LBRACE] = ACTIONS(577),
    [anon_sym_RBRACE] = ACTIONS(577),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(577),
    [anon_sym_POUND] = ACTIONS(577),
    [anon_sym_POUND_LBRACE] = ACTIONS(577),
    [anon_sym_SEMI] = ACTIONS(577),
    [anon_sym_POUND_BANG] = ACTIONS(577),
    [anon_sym_POUND_] = ACTIONS(577),
    [anon_sym_] = ACTIONS(575),
    [anon_sym_LPARENcomment] = ACTIONS(577),
    [anon_sym_POUND_LPAREN] = ACTIONS(577),
    [sym_shorthand_function_arg] = ACTIONS(577),
    [sym_defn_function] = ACTIONS(577),
  },
  [215] = {
    [sym__keyword_chars] = ACTIONS(1055),
  },
  [216] = {
    [ts_builtin_sym_end] = ACTIONS(603),
    [sym_nil] = ACTIONS(605),
    [sym_true] = ACTIONS(605),
    [sym_false] = ACTIONS(605),
    [sym_number_long] = ACTIONS(605),
    [sym_number_double] = ACTIONS(605),
    [anon_sym_BSLASH] = ACTIONS(605),
    [anon_sym_DQUOTE] = ACTIONS(605),
    [anon_sym_POUND_DQUOTE] = ACTIONS(605),
    [anon_sym_SQUOTE] = ACTIONS(605),
    [anon_sym_LPARENquote] = ACTIONS(605),
    [anon_sym_RPAREN] = ACTIONS(605),
    [anon_sym_COLON] = ACTIONS(605),
    [anon_sym_COLON_COLON] = ACTIONS(605),
    [anon_sym_DASH_GT] = ACTIONS(605),
    [anon_sym_DASH_GT_GT] = ACTIONS(605),
    [anon_sym_as_DASH_GT] = ACTIONS(605),
    [anon_sym_some_DASH_GT] = ACTIONS(605),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(605),
    [anon_sym_cond_DASH_GT] = ACTIONS(605),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(605),
    [sym__symbol_chars] = ACTIONS(605),
    [anon_sym_LPAREN] = ACTIONS(605),
    [anon_sym_LBRACK] = ACTIONS(605),
    [anon_sym_RBRACK] = ACTIONS(605),
    [anon_sym_LBRACE] = ACTIONS(605),
    [anon_sym_RBRACE] = ACTIONS(605),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(605),
    [anon_sym_POUND] = ACTIONS(605),
    [anon_sym_POUND_LBRACE] = ACTIONS(605),
    [anon_sym_SEMI] = ACTIONS(605),
    [anon_sym_POUND_BANG] = ACTIONS(605),
    [anon_sym_POUND_] = ACTIONS(605),
    [anon_sym_] = ACTIONS(603),
    [anon_sym_LPARENcomment] = ACTIONS(605),
    [anon_sym_POUND_LPAREN] = ACTIONS(605),
    [sym_shorthand_function_arg] = ACTIONS(605),
    [sym_defn_function] = ACTIONS(605),
  },
  [217] = {
    [ts_builtin_sym_end] = ACTIONS(1057),
    [sym_nil] = ACTIONS(1059),
    [sym_true] = ACTIONS(1059),
    [sym_false] = ACTIONS(1059),
    [sym_number_long] = ACTIONS(1059),
    [sym_number_double] = ACTIONS(1059),
    [anon_sym_BSLASH] = ACTIONS(1059),
    [anon_sym_DQUOTE] = ACTIONS(1059),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1059),
    [anon_sym_SQUOTE] = ACTIONS(1059),
    [anon_sym_LPARENquote] = ACTIONS(1059),
    [anon_sym_RPAREN] = ACTIONS(1059),
    [anon_sym_COLON] = ACTIONS(1059),
    [anon_sym_COLON_COLON] = ACTIONS(1059),
    [anon_sym_DASH_GT] = ACTIONS(1059),
    [anon_sym_DASH_GT_GT] = ACTIONS(1059),
    [anon_sym_as_DASH_GT] = ACTIONS(1059),
    [anon_sym_some_DASH_GT] = ACTIONS(1059),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1059),
    [anon_sym_cond_DASH_GT] = ACTIONS(1059),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1059),
    [sym__symbol_chars] = ACTIONS(1059),
    [anon_sym_LPAREN] = ACTIONS(1059),
    [anon_sym_LBRACK] = ACTIONS(1059),
    [anon_sym_RBRACK] = ACTIONS(1059),
    [anon_sym_LBRACE] = ACTIONS(1059),
    [anon_sym_RBRACE] = ACTIONS(1059),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1059),
    [anon_sym_POUND] = ACTIONS(1059),
    [anon_sym_POUND_LBRACE] = ACTIONS(1059),
    [anon_sym_SEMI] = ACTIONS(1059),
    [anon_sym_POUND_BANG] = ACTIONS(1059),
    [anon_sym_POUND_] = ACTIONS(1059),
    [anon_sym_] = ACTIONS(1057),
    [anon_sym_LPARENcomment] = ACTIONS(1059),
    [anon_sym_POUND_LPAREN] = ACTIONS(1059),
    [sym_shorthand_function_arg] = ACTIONS(1059),
    [sym_defn_function] = ACTIONS(1059),
  },
  [218] = {
    [sym_number_long] = ACTIONS(265),
    [sym_number_double] = ACTIONS(265),
    [anon_sym_DQUOTE] = ACTIONS(265),
    [anon_sym_COLON] = ACTIONS(265),
    [anon_sym_COLON_COLON] = ACTIONS(265),
    [anon_sym_DASH_GT] = ACTIONS(265),
    [anon_sym_DASH_GT_GT] = ACTIONS(265),
    [anon_sym_as_DASH_GT] = ACTIONS(265),
    [anon_sym_some_DASH_GT] = ACTIONS(265),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(265),
    [anon_sym_cond_DASH_GT] = ACTIONS(265),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(265),
    [sym__symbol_chars] = ACTIONS(265),
    [anon_sym_LPAREN] = ACTIONS(265),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_RBRACK] = ACTIONS(265),
    [anon_sym_LBRACE] = ACTIONS(265),
    [anon_sym_POUND] = ACTIONS(265),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(265),
  },
  [219] = {
    [aux_sym__string_repeat1] = STATE(105),
    [anon_sym_DQUOTE] = ACTIONS(1061),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(269),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(269),
  },
  [220] = {
    [sym_number_long] = ACTIONS(291),
    [sym_number_double] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(291),
    [anon_sym_COLON] = ACTIONS(291),
    [anon_sym_COLON_COLON] = ACTIONS(291),
    [anon_sym_DASH_GT] = ACTIONS(291),
    [anon_sym_DASH_GT_GT] = ACTIONS(291),
    [anon_sym_as_DASH_GT] = ACTIONS(291),
    [anon_sym_some_DASH_GT] = ACTIONS(291),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(291),
    [anon_sym_cond_DASH_GT] = ACTIONS(291),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(291),
    [sym__symbol_chars] = ACTIONS(291),
    [anon_sym_LPAREN] = ACTIONS(291),
    [anon_sym_LBRACK] = ACTIONS(291),
    [anon_sym_RBRACK] = ACTIONS(291),
    [anon_sym_LBRACE] = ACTIONS(291),
    [anon_sym_POUND] = ACTIONS(291),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(291),
  },
  [221] = {
    [sym_number_long] = ACTIONS(295),
    [sym_number_double] = ACTIONS(295),
    [anon_sym_DQUOTE] = ACTIONS(295),
    [anon_sym_COLON] = ACTIONS(295),
    [anon_sym_COLON_COLON] = ACTIONS(295),
    [anon_sym_SLASH] = ACTIONS(1063),
    [anon_sym_DASH_GT] = ACTIONS(295),
    [anon_sym_DASH_GT_GT] = ACTIONS(295),
    [anon_sym_as_DASH_GT] = ACTIONS(295),
    [anon_sym_some_DASH_GT] = ACTIONS(295),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(295),
    [anon_sym_cond_DASH_GT] = ACTIONS(295),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(295),
    [sym__symbol_chars] = ACTIONS(295),
    [anon_sym_LPAREN] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(295),
    [anon_sym_RBRACK] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(295),
    [anon_sym_POUND] = ACTIONS(295),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(295),
  },
  [222] = {
    [sym__symbol_chars] = ACTIONS(1065),
  },
  [223] = {
    [sym_number_long] = ACTIONS(780),
    [sym_number_double] = ACTIONS(780),
    [anon_sym_DQUOTE] = ACTIONS(780),
    [anon_sym_COLON] = ACTIONS(780),
    [anon_sym_COLON_COLON] = ACTIONS(780),
    [anon_sym_DASH_GT] = ACTIONS(780),
    [anon_sym_DASH_GT_GT] = ACTIONS(780),
    [anon_sym_as_DASH_GT] = ACTIONS(780),
    [anon_sym_some_DASH_GT] = ACTIONS(780),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(780),
    [anon_sym_cond_DASH_GT] = ACTIONS(780),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(780),
    [sym__symbol_chars] = ACTIONS(780),
    [anon_sym_LPAREN] = ACTIONS(780),
    [anon_sym_LBRACK] = ACTIONS(780),
    [anon_sym_RBRACK] = ACTIONS(780),
    [anon_sym_LBRACE] = ACTIONS(780),
    [anon_sym_POUND] = ACTIONS(780),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(780),
  },
  [224] = {
    [sym__number] = STATE(188),
    [sym__string] = STATE(188),
    [sym__keyword] = STATE(188),
    [sym__unqualified_keyword] = STATE(188),
    [sym_qualified_keyword] = STATE(188),
    [sym__symbol] = STATE(188),
    [sym_threading_macro] = STATE(188),
    [sym_qualified_symbol] = STATE(188),
    [sym__one_form] = STATE(188),
    [sym__paren_sequence] = STATE(188),
    [sym__bracket_sequence] = STATE(188),
    [sym__curly_brace_sequence] = STATE(188),
    [aux_sym_comment_macro_repeat1] = STATE(188),
    [sym_number_long] = ACTIONS(471),
    [sym_number_double] = ACTIONS(471),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(1067),
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
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(471),
  },
  [225] = {
    [sym_number_long] = ACTIONS(804),
    [sym_number_double] = ACTIONS(804),
    [anon_sym_DQUOTE] = ACTIONS(804),
    [anon_sym_COLON] = ACTIONS(804),
    [anon_sym_COLON_COLON] = ACTIONS(804),
    [anon_sym_DASH_GT] = ACTIONS(804),
    [anon_sym_DASH_GT_GT] = ACTIONS(804),
    [anon_sym_as_DASH_GT] = ACTIONS(804),
    [anon_sym_some_DASH_GT] = ACTIONS(804),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(804),
    [anon_sym_cond_DASH_GT] = ACTIONS(804),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(804),
    [sym__symbol_chars] = ACTIONS(804),
    [anon_sym_LPAREN] = ACTIONS(804),
    [anon_sym_LBRACK] = ACTIONS(804),
    [anon_sym_RBRACK] = ACTIONS(804),
    [anon_sym_LBRACE] = ACTIONS(804),
    [anon_sym_POUND] = ACTIONS(804),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(804),
  },
  [226] = {
    [sym__number] = STATE(231),
    [sym__string] = STATE(231),
    [sym__keyword] = STATE(231),
    [sym__unqualified_keyword] = STATE(231),
    [sym_qualified_keyword] = STATE(231),
    [sym__symbol] = STATE(231),
    [sym_threading_macro] = STATE(231),
    [sym_qualified_symbol] = STATE(231),
    [sym__one_form] = STATE(231),
    [sym__paren_sequence] = STATE(231),
    [sym__bracket_sequence] = STATE(231),
    [sym__curly_brace_sequence] = STATE(231),
    [aux_sym_comment_macro_repeat1] = STATE(231),
    [sym_number_long] = ACTIONS(812),
    [sym_number_double] = ACTIONS(812),
    [anon_sym_DQUOTE] = ACTIONS(389),
    [anon_sym_COLON] = ACTIONS(391),
    [anon_sym_COLON_COLON] = ACTIONS(393),
    [anon_sym_DASH_GT] = ACTIONS(395),
    [anon_sym_DASH_GT_GT] = ACTIONS(395),
    [anon_sym_as_DASH_GT] = ACTIONS(395),
    [anon_sym_some_DASH_GT] = ACTIONS(395),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(395),
    [anon_sym_cond_DASH_GT] = ACTIONS(395),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(395),
    [sym__symbol_chars] = ACTIONS(397),
    [anon_sym_LPAREN] = ACTIONS(399),
    [anon_sym_LBRACK] = ACTIONS(401),
    [anon_sym_RBRACK] = ACTIONS(1069),
    [anon_sym_LBRACE] = ACTIONS(405),
    [anon_sym_POUND] = ACTIONS(407),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(812),
  },
  [227] = {
    [sym_number_long] = ACTIONS(840),
    [sym_number_double] = ACTIONS(840),
    [anon_sym_DQUOTE] = ACTIONS(840),
    [anon_sym_COLON] = ACTIONS(840),
    [anon_sym_COLON_COLON] = ACTIONS(840),
    [anon_sym_DASH_GT] = ACTIONS(840),
    [anon_sym_DASH_GT_GT] = ACTIONS(840),
    [anon_sym_as_DASH_GT] = ACTIONS(840),
    [anon_sym_some_DASH_GT] = ACTIONS(840),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(840),
    [anon_sym_cond_DASH_GT] = ACTIONS(840),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(840),
    [sym__symbol_chars] = ACTIONS(840),
    [anon_sym_LPAREN] = ACTIONS(840),
    [anon_sym_LBRACK] = ACTIONS(840),
    [anon_sym_RBRACK] = ACTIONS(840),
    [anon_sym_LBRACE] = ACTIONS(840),
    [anon_sym_POUND] = ACTIONS(840),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(840),
  },
  [228] = {
    [sym__number] = STATE(245),
    [sym__string] = STATE(245),
    [sym__keyword] = STATE(245),
    [sym__unqualified_keyword] = STATE(245),
    [sym_qualified_keyword] = STATE(245),
    [sym__symbol] = STATE(245),
    [sym_threading_macro] = STATE(245),
    [sym_qualified_symbol] = STATE(245),
    [sym__one_form] = STATE(245),
    [sym__paren_sequence] = STATE(245),
    [sym__bracket_sequence] = STATE(245),
    [sym__curly_brace_sequence] = STATE(245),
    [aux_sym_comment_macro_repeat1] = STATE(245),
    [sym_number_long] = ACTIONS(844),
    [sym_number_double] = ACTIONS(844),
    [anon_sym_DQUOTE] = ACTIONS(411),
    [anon_sym_COLON] = ACTIONS(413),
    [anon_sym_COLON_COLON] = ACTIONS(415),
    [anon_sym_DASH_GT] = ACTIONS(417),
    [anon_sym_DASH_GT_GT] = ACTIONS(417),
    [anon_sym_as_DASH_GT] = ACTIONS(417),
    [anon_sym_some_DASH_GT] = ACTIONS(417),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(417),
    [anon_sym_cond_DASH_GT] = ACTIONS(417),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(417),
    [sym__symbol_chars] = ACTIONS(419),
    [anon_sym_LPAREN] = ACTIONS(421),
    [anon_sym_LBRACK] = ACTIONS(423),
    [anon_sym_LBRACE] = ACTIONS(425),
    [anon_sym_RBRACE] = ACTIONS(1071),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(844),
  },
  [229] = {
    [sym__number] = STATE(280),
    [sym__string] = STATE(280),
    [sym__keyword] = STATE(280),
    [sym__unqualified_keyword] = STATE(280),
    [sym_qualified_keyword] = STATE(280),
    [sym__symbol] = STATE(280),
    [sym_threading_macro] = STATE(280),
    [sym_qualified_symbol] = STATE(280),
    [sym__one_form] = STATE(280),
    [sym__paren_sequence] = STATE(280),
    [sym__bracket_sequence] = STATE(280),
    [sym__curly_brace_sequence] = STATE(280),
    [aux_sym_comment_macro_repeat1] = STATE(280),
    [sym_number_long] = ACTIONS(1073),
    [sym_number_double] = ACTIONS(1073),
    [anon_sym_DQUOTE] = ACTIONS(411),
    [anon_sym_COLON] = ACTIONS(413),
    [anon_sym_COLON_COLON] = ACTIONS(415),
    [anon_sym_DASH_GT] = ACTIONS(417),
    [anon_sym_DASH_GT_GT] = ACTIONS(417),
    [anon_sym_as_DASH_GT] = ACTIONS(417),
    [anon_sym_some_DASH_GT] = ACTIONS(417),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(417),
    [anon_sym_cond_DASH_GT] = ACTIONS(417),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(417),
    [sym__symbol_chars] = ACTIONS(419),
    [anon_sym_LPAREN] = ACTIONS(421),
    [anon_sym_LBRACK] = ACTIONS(423),
    [anon_sym_LBRACE] = ACTIONS(425),
    [anon_sym_RBRACE] = ACTIONS(1071),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1073),
  },
  [230] = {
    [ts_builtin_sym_end] = ACTIONS(1075),
    [sym_nil] = ACTIONS(1077),
    [sym_true] = ACTIONS(1077),
    [sym_false] = ACTIONS(1077),
    [sym_number_long] = ACTIONS(1077),
    [sym_number_double] = ACTIONS(1077),
    [anon_sym_BSLASH] = ACTIONS(1077),
    [anon_sym_DQUOTE] = ACTIONS(1077),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1077),
    [anon_sym_SQUOTE] = ACTIONS(1077),
    [anon_sym_LPARENquote] = ACTIONS(1077),
    [anon_sym_RPAREN] = ACTIONS(1077),
    [anon_sym_COLON] = ACTIONS(1077),
    [anon_sym_COLON_COLON] = ACTIONS(1077),
    [anon_sym_DASH_GT] = ACTIONS(1077),
    [anon_sym_DASH_GT_GT] = ACTIONS(1077),
    [anon_sym_as_DASH_GT] = ACTIONS(1077),
    [anon_sym_some_DASH_GT] = ACTIONS(1077),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1077),
    [anon_sym_cond_DASH_GT] = ACTIONS(1077),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1077),
    [sym__symbol_chars] = ACTIONS(1077),
    [anon_sym_LPAREN] = ACTIONS(1077),
    [anon_sym_LBRACK] = ACTIONS(1077),
    [anon_sym_RBRACK] = ACTIONS(1077),
    [anon_sym_LBRACE] = ACTIONS(1077),
    [anon_sym_RBRACE] = ACTIONS(1077),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1077),
    [anon_sym_POUND] = ACTIONS(1077),
    [anon_sym_POUND_LBRACE] = ACTIONS(1077),
    [anon_sym_SEMI] = ACTIONS(1077),
    [anon_sym_POUND_BANG] = ACTIONS(1077),
    [anon_sym_POUND_] = ACTIONS(1077),
    [anon_sym_] = ACTIONS(1075),
    [anon_sym_LPARENcomment] = ACTIONS(1077),
    [anon_sym_POUND_LPAREN] = ACTIONS(1077),
    [sym_shorthand_function_arg] = ACTIONS(1077),
    [sym_defn_function] = ACTIONS(1077),
  },
  [231] = {
    [sym__number] = STATE(231),
    [sym__string] = STATE(231),
    [sym__keyword] = STATE(231),
    [sym__unqualified_keyword] = STATE(231),
    [sym_qualified_keyword] = STATE(231),
    [sym__symbol] = STATE(231),
    [sym_threading_macro] = STATE(231),
    [sym_qualified_symbol] = STATE(231),
    [sym__one_form] = STATE(231),
    [sym__paren_sequence] = STATE(231),
    [sym__bracket_sequence] = STATE(231),
    [sym__curly_brace_sequence] = STATE(231),
    [aux_sym_comment_macro_repeat1] = STATE(231),
    [sym_number_long] = ACTIONS(1079),
    [sym_number_double] = ACTIONS(1079),
    [anon_sym_DQUOTE] = ACTIONS(1082),
    [anon_sym_COLON] = ACTIONS(1085),
    [anon_sym_COLON_COLON] = ACTIONS(1088),
    [anon_sym_DASH_GT] = ACTIONS(1091),
    [anon_sym_DASH_GT_GT] = ACTIONS(1091),
    [anon_sym_as_DASH_GT] = ACTIONS(1091),
    [anon_sym_some_DASH_GT] = ACTIONS(1091),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1091),
    [anon_sym_cond_DASH_GT] = ACTIONS(1091),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1091),
    [sym__symbol_chars] = ACTIONS(1094),
    [anon_sym_LPAREN] = ACTIONS(1097),
    [anon_sym_LBRACK] = ACTIONS(1100),
    [anon_sym_RBRACK] = ACTIONS(887),
    [anon_sym_LBRACE] = ACTIONS(1103),
    [anon_sym_POUND] = ACTIONS(1106),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1079),
  },
  [232] = {
    [sym_number_long] = ACTIONS(265),
    [sym_number_double] = ACTIONS(265),
    [anon_sym_DQUOTE] = ACTIONS(265),
    [anon_sym_COLON] = ACTIONS(265),
    [anon_sym_COLON_COLON] = ACTIONS(265),
    [anon_sym_DASH_GT] = ACTIONS(265),
    [anon_sym_DASH_GT_GT] = ACTIONS(265),
    [anon_sym_as_DASH_GT] = ACTIONS(265),
    [anon_sym_some_DASH_GT] = ACTIONS(265),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(265),
    [anon_sym_cond_DASH_GT] = ACTIONS(265),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(265),
    [sym__symbol_chars] = ACTIONS(265),
    [anon_sym_LPAREN] = ACTIONS(265),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_LBRACE] = ACTIONS(265),
    [anon_sym_RBRACE] = ACTIONS(265),
    [anon_sym_POUND] = ACTIONS(265),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(265),
  },
  [233] = {
    [aux_sym__string_repeat1] = STATE(105),
    [anon_sym_DQUOTE] = ACTIONS(1109),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(269),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(269),
  },
  [234] = {
    [sym_number_long] = ACTIONS(291),
    [sym_number_double] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(291),
    [anon_sym_COLON] = ACTIONS(291),
    [anon_sym_COLON_COLON] = ACTIONS(291),
    [anon_sym_DASH_GT] = ACTIONS(291),
    [anon_sym_DASH_GT_GT] = ACTIONS(291),
    [anon_sym_as_DASH_GT] = ACTIONS(291),
    [anon_sym_some_DASH_GT] = ACTIONS(291),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(291),
    [anon_sym_cond_DASH_GT] = ACTIONS(291),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(291),
    [sym__symbol_chars] = ACTIONS(291),
    [anon_sym_LPAREN] = ACTIONS(291),
    [anon_sym_LBRACK] = ACTIONS(291),
    [anon_sym_LBRACE] = ACTIONS(291),
    [anon_sym_RBRACE] = ACTIONS(291),
    [anon_sym_POUND] = ACTIONS(291),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(291),
  },
  [235] = {
    [sym_number_long] = ACTIONS(295),
    [sym_number_double] = ACTIONS(295),
    [anon_sym_DQUOTE] = ACTIONS(295),
    [anon_sym_COLON] = ACTIONS(295),
    [anon_sym_COLON_COLON] = ACTIONS(295),
    [anon_sym_SLASH] = ACTIONS(1111),
    [anon_sym_DASH_GT] = ACTIONS(295),
    [anon_sym_DASH_GT_GT] = ACTIONS(295),
    [anon_sym_as_DASH_GT] = ACTIONS(295),
    [anon_sym_some_DASH_GT] = ACTIONS(295),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(295),
    [anon_sym_cond_DASH_GT] = ACTIONS(295),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(295),
    [sym__symbol_chars] = ACTIONS(295),
    [anon_sym_LPAREN] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(295),
    [anon_sym_RBRACE] = ACTIONS(295),
    [anon_sym_POUND] = ACTIONS(295),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(295),
  },
  [236] = {
    [sym__symbol_chars] = ACTIONS(1113),
  },
  [237] = {
    [sym_number_long] = ACTIONS(780),
    [sym_number_double] = ACTIONS(780),
    [anon_sym_DQUOTE] = ACTIONS(780),
    [anon_sym_COLON] = ACTIONS(780),
    [anon_sym_COLON_COLON] = ACTIONS(780),
    [anon_sym_DASH_GT] = ACTIONS(780),
    [anon_sym_DASH_GT_GT] = ACTIONS(780),
    [anon_sym_as_DASH_GT] = ACTIONS(780),
    [anon_sym_some_DASH_GT] = ACTIONS(780),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(780),
    [anon_sym_cond_DASH_GT] = ACTIONS(780),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(780),
    [sym__symbol_chars] = ACTIONS(780),
    [anon_sym_LPAREN] = ACTIONS(780),
    [anon_sym_LBRACK] = ACTIONS(780),
    [anon_sym_LBRACE] = ACTIONS(780),
    [anon_sym_RBRACE] = ACTIONS(780),
    [anon_sym_POUND] = ACTIONS(780),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(780),
  },
  [238] = {
    [sym__number] = STATE(188),
    [sym__string] = STATE(188),
    [sym__keyword] = STATE(188),
    [sym__unqualified_keyword] = STATE(188),
    [sym_qualified_keyword] = STATE(188),
    [sym__symbol] = STATE(188),
    [sym_threading_macro] = STATE(188),
    [sym_qualified_symbol] = STATE(188),
    [sym__one_form] = STATE(188),
    [sym__paren_sequence] = STATE(188),
    [sym__bracket_sequence] = STATE(188),
    [sym__curly_brace_sequence] = STATE(188),
    [aux_sym_comment_macro_repeat1] = STATE(188),
    [sym_number_long] = ACTIONS(471),
    [sym_number_double] = ACTIONS(471),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(1115),
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
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(471),
  },
  [239] = {
    [sym_number_long] = ACTIONS(804),
    [sym_number_double] = ACTIONS(804),
    [anon_sym_DQUOTE] = ACTIONS(804),
    [anon_sym_COLON] = ACTIONS(804),
    [anon_sym_COLON_COLON] = ACTIONS(804),
    [anon_sym_DASH_GT] = ACTIONS(804),
    [anon_sym_DASH_GT_GT] = ACTIONS(804),
    [anon_sym_as_DASH_GT] = ACTIONS(804),
    [anon_sym_some_DASH_GT] = ACTIONS(804),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(804),
    [anon_sym_cond_DASH_GT] = ACTIONS(804),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(804),
    [sym__symbol_chars] = ACTIONS(804),
    [anon_sym_LPAREN] = ACTIONS(804),
    [anon_sym_LBRACK] = ACTIONS(804),
    [anon_sym_LBRACE] = ACTIONS(804),
    [anon_sym_RBRACE] = ACTIONS(804),
    [anon_sym_POUND] = ACTIONS(804),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(804),
  },
  [240] = {
    [sym__number] = STATE(231),
    [sym__string] = STATE(231),
    [sym__keyword] = STATE(231),
    [sym__unqualified_keyword] = STATE(231),
    [sym_qualified_keyword] = STATE(231),
    [sym__symbol] = STATE(231),
    [sym_threading_macro] = STATE(231),
    [sym_qualified_symbol] = STATE(231),
    [sym__one_form] = STATE(231),
    [sym__paren_sequence] = STATE(231),
    [sym__bracket_sequence] = STATE(231),
    [sym__curly_brace_sequence] = STATE(231),
    [aux_sym_comment_macro_repeat1] = STATE(231),
    [sym_number_long] = ACTIONS(812),
    [sym_number_double] = ACTIONS(812),
    [anon_sym_DQUOTE] = ACTIONS(389),
    [anon_sym_COLON] = ACTIONS(391),
    [anon_sym_COLON_COLON] = ACTIONS(393),
    [anon_sym_DASH_GT] = ACTIONS(395),
    [anon_sym_DASH_GT_GT] = ACTIONS(395),
    [anon_sym_as_DASH_GT] = ACTIONS(395),
    [anon_sym_some_DASH_GT] = ACTIONS(395),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(395),
    [anon_sym_cond_DASH_GT] = ACTIONS(395),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(395),
    [sym__symbol_chars] = ACTIONS(397),
    [anon_sym_LPAREN] = ACTIONS(399),
    [anon_sym_LBRACK] = ACTIONS(401),
    [anon_sym_RBRACK] = ACTIONS(1117),
    [anon_sym_LBRACE] = ACTIONS(405),
    [anon_sym_POUND] = ACTIONS(407),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(812),
  },
  [241] = {
    [sym_number_long] = ACTIONS(840),
    [sym_number_double] = ACTIONS(840),
    [anon_sym_DQUOTE] = ACTIONS(840),
    [anon_sym_COLON] = ACTIONS(840),
    [anon_sym_COLON_COLON] = ACTIONS(840),
    [anon_sym_DASH_GT] = ACTIONS(840),
    [anon_sym_DASH_GT_GT] = ACTIONS(840),
    [anon_sym_as_DASH_GT] = ACTIONS(840),
    [anon_sym_some_DASH_GT] = ACTIONS(840),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(840),
    [anon_sym_cond_DASH_GT] = ACTIONS(840),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(840),
    [sym__symbol_chars] = ACTIONS(840),
    [anon_sym_LPAREN] = ACTIONS(840),
    [anon_sym_LBRACK] = ACTIONS(840),
    [anon_sym_LBRACE] = ACTIONS(840),
    [anon_sym_RBRACE] = ACTIONS(840),
    [anon_sym_POUND] = ACTIONS(840),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(840),
  },
  [242] = {
    [sym__number] = STATE(245),
    [sym__string] = STATE(245),
    [sym__keyword] = STATE(245),
    [sym__unqualified_keyword] = STATE(245),
    [sym_qualified_keyword] = STATE(245),
    [sym__symbol] = STATE(245),
    [sym_threading_macro] = STATE(245),
    [sym_qualified_symbol] = STATE(245),
    [sym__one_form] = STATE(245),
    [sym__paren_sequence] = STATE(245),
    [sym__bracket_sequence] = STATE(245),
    [sym__curly_brace_sequence] = STATE(245),
    [aux_sym_comment_macro_repeat1] = STATE(245),
    [sym_number_long] = ACTIONS(844),
    [sym_number_double] = ACTIONS(844),
    [anon_sym_DQUOTE] = ACTIONS(411),
    [anon_sym_COLON] = ACTIONS(413),
    [anon_sym_COLON_COLON] = ACTIONS(415),
    [anon_sym_DASH_GT] = ACTIONS(417),
    [anon_sym_DASH_GT_GT] = ACTIONS(417),
    [anon_sym_as_DASH_GT] = ACTIONS(417),
    [anon_sym_some_DASH_GT] = ACTIONS(417),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(417),
    [anon_sym_cond_DASH_GT] = ACTIONS(417),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(417),
    [sym__symbol_chars] = ACTIONS(419),
    [anon_sym_LPAREN] = ACTIONS(421),
    [anon_sym_LBRACK] = ACTIONS(423),
    [anon_sym_LBRACE] = ACTIONS(425),
    [anon_sym_RBRACE] = ACTIONS(1119),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(844),
  },
  [243] = {
    [sym__number] = STATE(287),
    [sym__string] = STATE(287),
    [sym__keyword] = STATE(287),
    [sym__unqualified_keyword] = STATE(287),
    [sym_qualified_keyword] = STATE(287),
    [sym__symbol] = STATE(287),
    [sym_threading_macro] = STATE(287),
    [sym_qualified_symbol] = STATE(287),
    [sym__one_form] = STATE(287),
    [sym__paren_sequence] = STATE(287),
    [sym__bracket_sequence] = STATE(287),
    [sym__curly_brace_sequence] = STATE(287),
    [aux_sym_comment_macro_repeat1] = STATE(287),
    [sym_number_long] = ACTIONS(1121),
    [sym_number_double] = ACTIONS(1121),
    [anon_sym_DQUOTE] = ACTIONS(411),
    [anon_sym_COLON] = ACTIONS(413),
    [anon_sym_COLON_COLON] = ACTIONS(415),
    [anon_sym_DASH_GT] = ACTIONS(417),
    [anon_sym_DASH_GT_GT] = ACTIONS(417),
    [anon_sym_as_DASH_GT] = ACTIONS(417),
    [anon_sym_some_DASH_GT] = ACTIONS(417),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(417),
    [anon_sym_cond_DASH_GT] = ACTIONS(417),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(417),
    [sym__symbol_chars] = ACTIONS(419),
    [anon_sym_LPAREN] = ACTIONS(421),
    [anon_sym_LBRACK] = ACTIONS(423),
    [anon_sym_LBRACE] = ACTIONS(425),
    [anon_sym_RBRACE] = ACTIONS(1119),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1121),
  },
  [244] = {
    [ts_builtin_sym_end] = ACTIONS(1123),
    [sym_nil] = ACTIONS(1125),
    [sym_true] = ACTIONS(1125),
    [sym_false] = ACTIONS(1125),
    [sym_number_long] = ACTIONS(1125),
    [sym_number_double] = ACTIONS(1125),
    [anon_sym_BSLASH] = ACTIONS(1125),
    [anon_sym_DQUOTE] = ACTIONS(1125),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1125),
    [anon_sym_SQUOTE] = ACTIONS(1125),
    [anon_sym_LPARENquote] = ACTIONS(1125),
    [anon_sym_RPAREN] = ACTIONS(1125),
    [anon_sym_COLON] = ACTIONS(1125),
    [anon_sym_COLON_COLON] = ACTIONS(1125),
    [anon_sym_DASH_GT] = ACTIONS(1125),
    [anon_sym_DASH_GT_GT] = ACTIONS(1125),
    [anon_sym_as_DASH_GT] = ACTIONS(1125),
    [anon_sym_some_DASH_GT] = ACTIONS(1125),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1125),
    [anon_sym_cond_DASH_GT] = ACTIONS(1125),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1125),
    [sym__symbol_chars] = ACTIONS(1125),
    [anon_sym_LPAREN] = ACTIONS(1125),
    [anon_sym_LBRACK] = ACTIONS(1125),
    [anon_sym_RBRACK] = ACTIONS(1125),
    [anon_sym_LBRACE] = ACTIONS(1125),
    [anon_sym_RBRACE] = ACTIONS(1125),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1125),
    [anon_sym_POUND] = ACTIONS(1125),
    [anon_sym_POUND_LBRACE] = ACTIONS(1125),
    [anon_sym_SEMI] = ACTIONS(1125),
    [anon_sym_POUND_BANG] = ACTIONS(1125),
    [anon_sym_POUND_] = ACTIONS(1125),
    [anon_sym_] = ACTIONS(1123),
    [anon_sym_LPARENcomment] = ACTIONS(1125),
    [anon_sym_POUND_LPAREN] = ACTIONS(1125),
    [sym_shorthand_function_arg] = ACTIONS(1125),
    [sym_defn_function] = ACTIONS(1125),
  },
  [245] = {
    [sym__number] = STATE(245),
    [sym__string] = STATE(245),
    [sym__keyword] = STATE(245),
    [sym__unqualified_keyword] = STATE(245),
    [sym_qualified_keyword] = STATE(245),
    [sym__symbol] = STATE(245),
    [sym_threading_macro] = STATE(245),
    [sym_qualified_symbol] = STATE(245),
    [sym__one_form] = STATE(245),
    [sym__paren_sequence] = STATE(245),
    [sym__bracket_sequence] = STATE(245),
    [sym__curly_brace_sequence] = STATE(245),
    [aux_sym_comment_macro_repeat1] = STATE(245),
    [sym_number_long] = ACTIONS(1127),
    [sym_number_double] = ACTIONS(1127),
    [anon_sym_DQUOTE] = ACTIONS(1130),
    [anon_sym_COLON] = ACTIONS(1133),
    [anon_sym_COLON_COLON] = ACTIONS(1136),
    [anon_sym_DASH_GT] = ACTIONS(1139),
    [anon_sym_DASH_GT_GT] = ACTIONS(1139),
    [anon_sym_as_DASH_GT] = ACTIONS(1139),
    [anon_sym_some_DASH_GT] = ACTIONS(1139),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1139),
    [anon_sym_cond_DASH_GT] = ACTIONS(1139),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1139),
    [sym__symbol_chars] = ACTIONS(1142),
    [anon_sym_LPAREN] = ACTIONS(1145),
    [anon_sym_LBRACK] = ACTIONS(1148),
    [anon_sym_LBRACE] = ACTIONS(1151),
    [anon_sym_RBRACE] = ACTIONS(887),
    [anon_sym_POUND] = ACTIONS(1154),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1127),
  },
  [246] = {
    [sym__number] = STATE(245),
    [sym__string] = STATE(245),
    [sym__keyword] = STATE(245),
    [sym__unqualified_keyword] = STATE(245),
    [sym_qualified_keyword] = STATE(245),
    [sym__symbol] = STATE(245),
    [sym_threading_macro] = STATE(245),
    [sym_qualified_symbol] = STATE(245),
    [sym__one_form] = STATE(245),
    [sym__paren_sequence] = STATE(245),
    [sym__bracket_sequence] = STATE(245),
    [sym__curly_brace_sequence] = STATE(245),
    [aux_sym_comment_macro_repeat1] = STATE(245),
    [sym_number_long] = ACTIONS(844),
    [sym_number_double] = ACTIONS(844),
    [anon_sym_DQUOTE] = ACTIONS(411),
    [anon_sym_COLON] = ACTIONS(413),
    [anon_sym_COLON_COLON] = ACTIONS(415),
    [anon_sym_DASH_GT] = ACTIONS(417),
    [anon_sym_DASH_GT_GT] = ACTIONS(417),
    [anon_sym_as_DASH_GT] = ACTIONS(417),
    [anon_sym_some_DASH_GT] = ACTIONS(417),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(417),
    [anon_sym_cond_DASH_GT] = ACTIONS(417),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(417),
    [sym__symbol_chars] = ACTIONS(419),
    [anon_sym_LPAREN] = ACTIONS(421),
    [anon_sym_LBRACK] = ACTIONS(423),
    [anon_sym_LBRACE] = ACTIONS(425),
    [anon_sym_RBRACE] = ACTIONS(1157),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(844),
  },
  [247] = {
    [aux_sym_ignore_form_repeat1] = STATE(247),
    [ts_builtin_sym_end] = ACTIONS(1159),
    [sym_nil] = ACTIONS(858),
    [sym_true] = ACTIONS(858),
    [sym_false] = ACTIONS(858),
    [sym_number_long] = ACTIONS(858),
    [sym_number_double] = ACTIONS(858),
    [anon_sym_BSLASH] = ACTIONS(858),
    [anon_sym_DQUOTE] = ACTIONS(858),
    [anon_sym_POUND_DQUOTE] = ACTIONS(858),
    [anon_sym_SQUOTE] = ACTIONS(858),
    [anon_sym_LPARENquote] = ACTIONS(858),
    [anon_sym_COLON] = ACTIONS(858),
    [anon_sym_COLON_COLON] = ACTIONS(858),
    [anon_sym_DASH_GT] = ACTIONS(858),
    [anon_sym_DASH_GT_GT] = ACTIONS(858),
    [anon_sym_as_DASH_GT] = ACTIONS(858),
    [anon_sym_some_DASH_GT] = ACTIONS(858),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(858),
    [anon_sym_cond_DASH_GT] = ACTIONS(858),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(858),
    [sym__symbol_chars] = ACTIONS(858),
    [anon_sym_LPAREN] = ACTIONS(858),
    [anon_sym_LBRACK] = ACTIONS(858),
    [anon_sym_LBRACE] = ACTIONS(858),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(858),
    [anon_sym_POUND] = ACTIONS(858),
    [anon_sym_POUND_LBRACE] = ACTIONS(858),
    [anon_sym_SEMI] = ACTIONS(858),
    [anon_sym_POUND_BANG] = ACTIONS(858),
    [anon_sym_POUND_] = ACTIONS(858),
    [anon_sym_] = ACTIONS(1161),
    [anon_sym_LPARENcomment] = ACTIONS(858),
    [anon_sym_POUND_LPAREN] = ACTIONS(858),
    [sym_defn_function] = ACTIONS(858),
  },
  [248] = {
    [aux_sym_ignore_form_repeat1] = STATE(247),
    [ts_builtin_sym_end] = ACTIONS(1164),
    [sym_nil] = ACTIONS(1166),
    [sym_true] = ACTIONS(1166),
    [sym_false] = ACTIONS(1166),
    [sym_number_long] = ACTIONS(1166),
    [sym_number_double] = ACTIONS(1166),
    [anon_sym_BSLASH] = ACTIONS(1166),
    [anon_sym_DQUOTE] = ACTIONS(1166),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1166),
    [anon_sym_SQUOTE] = ACTIONS(1166),
    [anon_sym_LPARENquote] = ACTIONS(1166),
    [anon_sym_COLON] = ACTIONS(1166),
    [anon_sym_COLON_COLON] = ACTIONS(1166),
    [anon_sym_DASH_GT] = ACTIONS(1166),
    [anon_sym_DASH_GT_GT] = ACTIONS(1166),
    [anon_sym_as_DASH_GT] = ACTIONS(1166),
    [anon_sym_some_DASH_GT] = ACTIONS(1166),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1166),
    [anon_sym_cond_DASH_GT] = ACTIONS(1166),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1166),
    [sym__symbol_chars] = ACTIONS(1166),
    [anon_sym_LPAREN] = ACTIONS(1166),
    [anon_sym_LBRACK] = ACTIONS(1166),
    [anon_sym_LBRACE] = ACTIONS(1166),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1166),
    [anon_sym_POUND] = ACTIONS(1166),
    [anon_sym_POUND_LBRACE] = ACTIONS(1166),
    [anon_sym_SEMI] = ACTIONS(1166),
    [anon_sym_POUND_BANG] = ACTIONS(1166),
    [anon_sym_POUND_] = ACTIONS(1166),
    [anon_sym_] = ACTIONS(854),
    [anon_sym_LPARENcomment] = ACTIONS(1166),
    [anon_sym_POUND_LPAREN] = ACTIONS(1166),
    [sym_defn_function] = ACTIONS(1166),
  },
  [249] = {
    [sym_number_long] = ACTIONS(577),
    [sym_number_double] = ACTIONS(577),
    [anon_sym_DQUOTE] = ACTIONS(577),
    [anon_sym_RPAREN] = ACTIONS(577),
    [anon_sym_COLON] = ACTIONS(577),
    [anon_sym_COLON_COLON] = ACTIONS(577),
    [anon_sym_DASH_GT] = ACTIONS(577),
    [anon_sym_DASH_GT_GT] = ACTIONS(577),
    [anon_sym_as_DASH_GT] = ACTIONS(577),
    [anon_sym_some_DASH_GT] = ACTIONS(577),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(577),
    [anon_sym_cond_DASH_GT] = ACTIONS(577),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(577),
    [sym__symbol_chars] = ACTIONS(577),
    [anon_sym_LPAREN] = ACTIONS(577),
    [anon_sym_LBRACK] = ACTIONS(577),
    [anon_sym_LBRACE] = ACTIONS(577),
    [anon_sym_POUND] = ACTIONS(577),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(577),
  },
  [250] = {
    [sym__keyword_chars] = ACTIONS(1168),
  },
  [251] = {
    [sym_number_long] = ACTIONS(605),
    [sym_number_double] = ACTIONS(605),
    [anon_sym_DQUOTE] = ACTIONS(605),
    [anon_sym_RPAREN] = ACTIONS(605),
    [anon_sym_COLON] = ACTIONS(605),
    [anon_sym_COLON_COLON] = ACTIONS(605),
    [anon_sym_DASH_GT] = ACTIONS(605),
    [anon_sym_DASH_GT_GT] = ACTIONS(605),
    [anon_sym_as_DASH_GT] = ACTIONS(605),
    [anon_sym_some_DASH_GT] = ACTIONS(605),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(605),
    [anon_sym_cond_DASH_GT] = ACTIONS(605),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(605),
    [sym__symbol_chars] = ACTIONS(605),
    [anon_sym_LPAREN] = ACTIONS(605),
    [anon_sym_LBRACK] = ACTIONS(605),
    [anon_sym_LBRACE] = ACTIONS(605),
    [anon_sym_POUND] = ACTIONS(605),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(605),
  },
  [252] = {
    [sym_number_long] = ACTIONS(1059),
    [sym_number_double] = ACTIONS(1059),
    [anon_sym_DQUOTE] = ACTIONS(1059),
    [anon_sym_RPAREN] = ACTIONS(1059),
    [anon_sym_COLON] = ACTIONS(1059),
    [anon_sym_COLON_COLON] = ACTIONS(1059),
    [anon_sym_DASH_GT] = ACTIONS(1059),
    [anon_sym_DASH_GT_GT] = ACTIONS(1059),
    [anon_sym_as_DASH_GT] = ACTIONS(1059),
    [anon_sym_some_DASH_GT] = ACTIONS(1059),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1059),
    [anon_sym_cond_DASH_GT] = ACTIONS(1059),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1059),
    [sym__symbol_chars] = ACTIONS(1059),
    [anon_sym_LPAREN] = ACTIONS(1059),
    [anon_sym_LBRACK] = ACTIONS(1059),
    [anon_sym_LBRACE] = ACTIONS(1059),
    [anon_sym_POUND] = ACTIONS(1059),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1059),
  },
  [253] = {
    [sym_number_long] = ACTIONS(1077),
    [sym_number_double] = ACTIONS(1077),
    [anon_sym_DQUOTE] = ACTIONS(1077),
    [anon_sym_RPAREN] = ACTIONS(1077),
    [anon_sym_COLON] = ACTIONS(1077),
    [anon_sym_COLON_COLON] = ACTIONS(1077),
    [anon_sym_DASH_GT] = ACTIONS(1077),
    [anon_sym_DASH_GT_GT] = ACTIONS(1077),
    [anon_sym_as_DASH_GT] = ACTIONS(1077),
    [anon_sym_some_DASH_GT] = ACTIONS(1077),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1077),
    [anon_sym_cond_DASH_GT] = ACTIONS(1077),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1077),
    [sym__symbol_chars] = ACTIONS(1077),
    [anon_sym_LPAREN] = ACTIONS(1077),
    [anon_sym_LBRACK] = ACTIONS(1077),
    [anon_sym_LBRACE] = ACTIONS(1077),
    [anon_sym_POUND] = ACTIONS(1077),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1077),
  },
  [254] = {
    [sym_number_long] = ACTIONS(1125),
    [sym_number_double] = ACTIONS(1125),
    [anon_sym_DQUOTE] = ACTIONS(1125),
    [anon_sym_RPAREN] = ACTIONS(1125),
    [anon_sym_COLON] = ACTIONS(1125),
    [anon_sym_COLON_COLON] = ACTIONS(1125),
    [anon_sym_DASH_GT] = ACTIONS(1125),
    [anon_sym_DASH_GT_GT] = ACTIONS(1125),
    [anon_sym_as_DASH_GT] = ACTIONS(1125),
    [anon_sym_some_DASH_GT] = ACTIONS(1125),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1125),
    [anon_sym_cond_DASH_GT] = ACTIONS(1125),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1125),
    [sym__symbol_chars] = ACTIONS(1125),
    [anon_sym_LPAREN] = ACTIONS(1125),
    [anon_sym_LBRACK] = ACTIONS(1125),
    [anon_sym_LBRACE] = ACTIONS(1125),
    [anon_sym_POUND] = ACTIONS(1125),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1125),
  },
  [255] = {
    [sym__number] = STATE(245),
    [sym__string] = STATE(245),
    [sym__keyword] = STATE(245),
    [sym__unqualified_keyword] = STATE(245),
    [sym_qualified_keyword] = STATE(245),
    [sym__symbol] = STATE(245),
    [sym_threading_macro] = STATE(245),
    [sym_qualified_symbol] = STATE(245),
    [sym__one_form] = STATE(245),
    [sym__paren_sequence] = STATE(245),
    [sym__bracket_sequence] = STATE(245),
    [sym__curly_brace_sequence] = STATE(245),
    [aux_sym_comment_macro_repeat1] = STATE(245),
    [sym_number_long] = ACTIONS(844),
    [sym_number_double] = ACTIONS(844),
    [anon_sym_DQUOTE] = ACTIONS(411),
    [anon_sym_COLON] = ACTIONS(413),
    [anon_sym_COLON_COLON] = ACTIONS(415),
    [anon_sym_DASH_GT] = ACTIONS(417),
    [anon_sym_DASH_GT_GT] = ACTIONS(417),
    [anon_sym_as_DASH_GT] = ACTIONS(417),
    [anon_sym_some_DASH_GT] = ACTIONS(417),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(417),
    [anon_sym_cond_DASH_GT] = ACTIONS(417),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(417),
    [sym__symbol_chars] = ACTIONS(419),
    [anon_sym_LPAREN] = ACTIONS(421),
    [anon_sym_LBRACK] = ACTIONS(423),
    [anon_sym_LBRACE] = ACTIONS(425),
    [anon_sym_RBRACE] = ACTIONS(1170),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(844),
  },
  [256] = {
    [aux_sym_ignore_form_repeat1] = STATE(291),
    [sym_nil] = ACTIONS(852),
    [sym_true] = ACTIONS(852),
    [sym_false] = ACTIONS(852),
    [sym_number_long] = ACTIONS(852),
    [sym_number_double] = ACTIONS(852),
    [anon_sym_BSLASH] = ACTIONS(852),
    [anon_sym_DQUOTE] = ACTIONS(852),
    [anon_sym_POUND_DQUOTE] = ACTIONS(852),
    [anon_sym_SQUOTE] = ACTIONS(852),
    [anon_sym_LPARENquote] = ACTIONS(852),
    [anon_sym_RPAREN] = ACTIONS(852),
    [anon_sym_COLON] = ACTIONS(852),
    [anon_sym_COLON_COLON] = ACTIONS(852),
    [anon_sym_DASH_GT] = ACTIONS(852),
    [anon_sym_DASH_GT_GT] = ACTIONS(852),
    [anon_sym_as_DASH_GT] = ACTIONS(852),
    [anon_sym_some_DASH_GT] = ACTIONS(852),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(852),
    [anon_sym_cond_DASH_GT] = ACTIONS(852),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(852),
    [sym__symbol_chars] = ACTIONS(852),
    [anon_sym_LPAREN] = ACTIONS(852),
    [anon_sym_LBRACK] = ACTIONS(852),
    [anon_sym_LBRACE] = ACTIONS(852),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(852),
    [anon_sym_POUND] = ACTIONS(852),
    [anon_sym_POUND_LBRACE] = ACTIONS(852),
    [anon_sym_SEMI] = ACTIONS(852),
    [anon_sym_POUND_BANG] = ACTIONS(852),
    [anon_sym_POUND_] = ACTIONS(852),
    [anon_sym_] = ACTIONS(1172),
    [anon_sym_LPARENcomment] = ACTIONS(852),
    [anon_sym_POUND_LPAREN] = ACTIONS(852),
    [sym_shorthand_function_arg] = ACTIONS(852),
    [sym_defn_function] = ACTIONS(852),
  },
  [257] = {
    [aux_sym_ignore_form_repeat1] = STATE(292),
    [sym_nil] = ACTIONS(852),
    [sym_true] = ACTIONS(852),
    [sym_false] = ACTIONS(852),
    [sym_number_long] = ACTIONS(852),
    [sym_number_double] = ACTIONS(852),
    [anon_sym_BSLASH] = ACTIONS(852),
    [anon_sym_DQUOTE] = ACTIONS(852),
    [anon_sym_POUND_DQUOTE] = ACTIONS(852),
    [anon_sym_SQUOTE] = ACTIONS(852),
    [anon_sym_LPARENquote] = ACTIONS(852),
    [anon_sym_RPAREN] = ACTIONS(852),
    [anon_sym_COLON] = ACTIONS(852),
    [anon_sym_COLON_COLON] = ACTIONS(852),
    [anon_sym_DASH_GT] = ACTIONS(852),
    [anon_sym_DASH_GT_GT] = ACTIONS(852),
    [anon_sym_as_DASH_GT] = ACTIONS(852),
    [anon_sym_some_DASH_GT] = ACTIONS(852),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(852),
    [anon_sym_cond_DASH_GT] = ACTIONS(852),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(852),
    [sym__symbol_chars] = ACTIONS(852),
    [anon_sym_LPAREN] = ACTIONS(852),
    [anon_sym_LBRACK] = ACTIONS(852),
    [anon_sym_LBRACE] = ACTIONS(852),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(852),
    [anon_sym_POUND] = ACTIONS(852),
    [anon_sym_POUND_LBRACE] = ACTIONS(852),
    [anon_sym_SEMI] = ACTIONS(852),
    [anon_sym_POUND_BANG] = ACTIONS(852),
    [anon_sym_POUND_] = ACTIONS(852),
    [anon_sym_] = ACTIONS(1174),
    [anon_sym_LPARENcomment] = ACTIONS(852),
    [anon_sym_POUND_LPAREN] = ACTIONS(852),
    [sym_shorthand_function_arg] = ACTIONS(852),
    [sym_defn_function] = ACTIONS(852),
  },
  [258] = {
    [sym__hex_char] = ACTIONS(1176),
  },
  [259] = {
    [aux_sym_ignore_form_repeat1] = STATE(259),
    [anon_sym_RPAREN] = ACTIONS(858),
    [anon_sym_] = ACTIONS(1178),
  },
  [260] = {
    [aux_sym_ignore_form_repeat1] = STATE(259),
    [anon_sym_RPAREN] = ACTIONS(1166),
    [anon_sym_] = ACTIONS(1006),
  },
  [261] = {
    [aux_sym_ignore_form_repeat1] = STATE(261),
    [sym_nil] = ACTIONS(858),
    [sym_true] = ACTIONS(858),
    [sym_false] = ACTIONS(858),
    [sym_number_long] = ACTIONS(858),
    [sym_number_double] = ACTIONS(858),
    [anon_sym_BSLASH] = ACTIONS(858),
    [anon_sym_DQUOTE] = ACTIONS(858),
    [anon_sym_POUND_DQUOTE] = ACTIONS(858),
    [anon_sym_SQUOTE] = ACTIONS(858),
    [anon_sym_LPARENquote] = ACTIONS(858),
    [anon_sym_RPAREN] = ACTIONS(858),
    [anon_sym_COLON] = ACTIONS(858),
    [anon_sym_COLON_COLON] = ACTIONS(858),
    [anon_sym_DASH_GT] = ACTIONS(858),
    [anon_sym_DASH_GT_GT] = ACTIONS(858),
    [anon_sym_as_DASH_GT] = ACTIONS(858),
    [anon_sym_some_DASH_GT] = ACTIONS(858),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(858),
    [anon_sym_cond_DASH_GT] = ACTIONS(858),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(858),
    [sym__symbol_chars] = ACTIONS(858),
    [anon_sym_LPAREN] = ACTIONS(858),
    [anon_sym_LBRACK] = ACTIONS(858),
    [anon_sym_LBRACE] = ACTIONS(858),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(858),
    [anon_sym_POUND] = ACTIONS(858),
    [anon_sym_POUND_LBRACE] = ACTIONS(858),
    [anon_sym_SEMI] = ACTIONS(858),
    [anon_sym_POUND_BANG] = ACTIONS(858),
    [anon_sym_POUND_] = ACTIONS(858),
    [anon_sym_] = ACTIONS(1181),
    [anon_sym_LPARENcomment] = ACTIONS(858),
    [anon_sym_POUND_LPAREN] = ACTIONS(858),
    [sym_defn_function] = ACTIONS(858),
  },
  [262] = {
    [aux_sym_ignore_form_repeat1] = STATE(261),
    [sym_nil] = ACTIONS(1166),
    [sym_true] = ACTIONS(1166),
    [sym_false] = ACTIONS(1166),
    [sym_number_long] = ACTIONS(1166),
    [sym_number_double] = ACTIONS(1166),
    [anon_sym_BSLASH] = ACTIONS(1166),
    [anon_sym_DQUOTE] = ACTIONS(1166),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1166),
    [anon_sym_SQUOTE] = ACTIONS(1166),
    [anon_sym_LPARENquote] = ACTIONS(1166),
    [anon_sym_RPAREN] = ACTIONS(1166),
    [anon_sym_COLON] = ACTIONS(1166),
    [anon_sym_COLON_COLON] = ACTIONS(1166),
    [anon_sym_DASH_GT] = ACTIONS(1166),
    [anon_sym_DASH_GT_GT] = ACTIONS(1166),
    [anon_sym_as_DASH_GT] = ACTIONS(1166),
    [anon_sym_some_DASH_GT] = ACTIONS(1166),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1166),
    [anon_sym_cond_DASH_GT] = ACTIONS(1166),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1166),
    [sym__symbol_chars] = ACTIONS(1166),
    [anon_sym_LPAREN] = ACTIONS(1166),
    [anon_sym_LBRACK] = ACTIONS(1166),
    [anon_sym_LBRACE] = ACTIONS(1166),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1166),
    [anon_sym_POUND] = ACTIONS(1166),
    [anon_sym_POUND_LBRACE] = ACTIONS(1166),
    [anon_sym_SEMI] = ACTIONS(1166),
    [anon_sym_POUND_BANG] = ACTIONS(1166),
    [anon_sym_POUND_] = ACTIONS(1166),
    [anon_sym_] = ACTIONS(1014),
    [anon_sym_LPARENcomment] = ACTIONS(1166),
    [anon_sym_POUND_LPAREN] = ACTIONS(1166),
    [sym_defn_function] = ACTIONS(1166),
  },
  [263] = {
    [anon_sym_LPAREN] = ACTIONS(603),
    [anon_sym_LBRACK] = ACTIONS(603),
  },
  [264] = {
    [anon_sym_RPAREN] = ACTIONS(1184),
    [anon_sym_LPAREN] = ACTIONS(1184),
  },
  [265] = {
    [ts_builtin_sym_end] = ACTIONS(1186),
    [sym_nil] = ACTIONS(1188),
    [sym_true] = ACTIONS(1188),
    [sym_false] = ACTIONS(1188),
    [sym_number_long] = ACTIONS(1188),
    [sym_number_double] = ACTIONS(1186),
    [anon_sym_BSLASH] = ACTIONS(1186),
    [anon_sym_DQUOTE] = ACTIONS(1186),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1186),
    [anon_sym_SQUOTE] = ACTIONS(1186),
    [anon_sym_LPARENquote] = ACTIONS(1186),
    [anon_sym_RPAREN] = ACTIONS(1186),
    [anon_sym_COLON] = ACTIONS(1188),
    [anon_sym_COLON_COLON] = ACTIONS(1186),
    [anon_sym_DASH_GT] = ACTIONS(1188),
    [anon_sym_DASH_GT_GT] = ACTIONS(1186),
    [anon_sym_as_DASH_GT] = ACTIONS(1186),
    [anon_sym_some_DASH_GT] = ACTIONS(1188),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1186),
    [anon_sym_cond_DASH_GT] = ACTIONS(1188),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1186),
    [sym__symbol_chars] = ACTIONS(1188),
    [anon_sym_LPAREN] = ACTIONS(1188),
    [anon_sym_LBRACK] = ACTIONS(1186),
    [anon_sym_RBRACK] = ACTIONS(1186),
    [anon_sym_LBRACE] = ACTIONS(1186),
    [anon_sym_RBRACE] = ACTIONS(1186),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1186),
    [anon_sym_POUND] = ACTIONS(1188),
    [anon_sym_POUND_LBRACE] = ACTIONS(1186),
    [anon_sym_SEMI] = ACTIONS(1186),
    [anon_sym_POUND_BANG] = ACTIONS(1186),
    [anon_sym_POUND_] = ACTIONS(1186),
    [anon_sym_LPARENcomment] = ACTIONS(1186),
    [anon_sym_POUND_LPAREN] = ACTIONS(1186),
    [sym_shorthand_function_arg] = ACTIONS(1186),
    [sym_defn_function] = ACTIONS(1186),
  },
  [266] = {
    [aux_sym_ignore_form_repeat1] = STATE(266),
    [sym_nil] = ACTIONS(858),
    [sym_true] = ACTIONS(858),
    [sym_false] = ACTIONS(858),
    [sym_number_long] = ACTIONS(858),
    [sym_number_double] = ACTIONS(858),
    [anon_sym_BSLASH] = ACTIONS(858),
    [anon_sym_DQUOTE] = ACTIONS(858),
    [anon_sym_POUND_DQUOTE] = ACTIONS(858),
    [anon_sym_SQUOTE] = ACTIONS(858),
    [anon_sym_LPARENquote] = ACTIONS(858),
    [anon_sym_COLON] = ACTIONS(858),
    [anon_sym_COLON_COLON] = ACTIONS(858),
    [anon_sym_DASH_GT] = ACTIONS(858),
    [anon_sym_DASH_GT_GT] = ACTIONS(858),
    [anon_sym_as_DASH_GT] = ACTIONS(858),
    [anon_sym_some_DASH_GT] = ACTIONS(858),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(858),
    [anon_sym_cond_DASH_GT] = ACTIONS(858),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(858),
    [sym__symbol_chars] = ACTIONS(858),
    [anon_sym_LPAREN] = ACTIONS(858),
    [anon_sym_LBRACK] = ACTIONS(858),
    [anon_sym_RBRACK] = ACTIONS(858),
    [anon_sym_LBRACE] = ACTIONS(858),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(858),
    [anon_sym_POUND] = ACTIONS(858),
    [anon_sym_POUND_LBRACE] = ACTIONS(858),
    [anon_sym_SEMI] = ACTIONS(858),
    [anon_sym_POUND_BANG] = ACTIONS(858),
    [anon_sym_POUND_] = ACTIONS(858),
    [anon_sym_] = ACTIONS(1190),
    [anon_sym_LPARENcomment] = ACTIONS(858),
    [anon_sym_POUND_LPAREN] = ACTIONS(858),
    [sym_defn_function] = ACTIONS(858),
  },
  [267] = {
    [aux_sym_ignore_form_repeat1] = STATE(266),
    [sym_nil] = ACTIONS(1166),
    [sym_true] = ACTIONS(1166),
    [sym_false] = ACTIONS(1166),
    [sym_number_long] = ACTIONS(1166),
    [sym_number_double] = ACTIONS(1166),
    [anon_sym_BSLASH] = ACTIONS(1166),
    [anon_sym_DQUOTE] = ACTIONS(1166),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1166),
    [anon_sym_SQUOTE] = ACTIONS(1166),
    [anon_sym_LPARENquote] = ACTIONS(1166),
    [anon_sym_COLON] = ACTIONS(1166),
    [anon_sym_COLON_COLON] = ACTIONS(1166),
    [anon_sym_DASH_GT] = ACTIONS(1166),
    [anon_sym_DASH_GT_GT] = ACTIONS(1166),
    [anon_sym_as_DASH_GT] = ACTIONS(1166),
    [anon_sym_some_DASH_GT] = ACTIONS(1166),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1166),
    [anon_sym_cond_DASH_GT] = ACTIONS(1166),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1166),
    [sym__symbol_chars] = ACTIONS(1166),
    [anon_sym_LPAREN] = ACTIONS(1166),
    [anon_sym_LBRACK] = ACTIONS(1166),
    [anon_sym_RBRACK] = ACTIONS(1166),
    [anon_sym_LBRACE] = ACTIONS(1166),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1166),
    [anon_sym_POUND] = ACTIONS(1166),
    [anon_sym_POUND_LBRACE] = ACTIONS(1166),
    [anon_sym_SEMI] = ACTIONS(1166),
    [anon_sym_POUND_BANG] = ACTIONS(1166),
    [anon_sym_POUND_] = ACTIONS(1166),
    [anon_sym_] = ACTIONS(1037),
    [anon_sym_LPARENcomment] = ACTIONS(1166),
    [anon_sym_POUND_LPAREN] = ACTIONS(1166),
    [sym_defn_function] = ACTIONS(1166),
  },
  [268] = {
    [aux_sym_ignore_form_repeat1] = STATE(268),
    [sym_nil] = ACTIONS(858),
    [sym_true] = ACTIONS(858),
    [sym_false] = ACTIONS(858),
    [sym_number_long] = ACTIONS(858),
    [sym_number_double] = ACTIONS(858),
    [anon_sym_BSLASH] = ACTIONS(858),
    [anon_sym_DQUOTE] = ACTIONS(858),
    [anon_sym_POUND_DQUOTE] = ACTIONS(858),
    [anon_sym_SQUOTE] = ACTIONS(858),
    [anon_sym_LPARENquote] = ACTIONS(858),
    [anon_sym_COLON] = ACTIONS(858),
    [anon_sym_COLON_COLON] = ACTIONS(858),
    [anon_sym_DASH_GT] = ACTIONS(858),
    [anon_sym_DASH_GT_GT] = ACTIONS(858),
    [anon_sym_as_DASH_GT] = ACTIONS(858),
    [anon_sym_some_DASH_GT] = ACTIONS(858),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(858),
    [anon_sym_cond_DASH_GT] = ACTIONS(858),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(858),
    [sym__symbol_chars] = ACTIONS(858),
    [anon_sym_LPAREN] = ACTIONS(858),
    [anon_sym_LBRACK] = ACTIONS(858),
    [anon_sym_LBRACE] = ACTIONS(858),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(858),
    [anon_sym_POUND] = ACTIONS(858),
    [anon_sym_POUND_LBRACE] = ACTIONS(858),
    [anon_sym_SEMI] = ACTIONS(858),
    [anon_sym_POUND_BANG] = ACTIONS(858),
    [anon_sym_POUND_] = ACTIONS(858),
    [anon_sym_] = ACTIONS(1193),
    [anon_sym_LPARENcomment] = ACTIONS(858),
    [anon_sym_POUND_LPAREN] = ACTIONS(858),
    [sym_defn_function] = ACTIONS(858),
  },
  [269] = {
    [aux_sym_ignore_form_repeat1] = STATE(268),
    [sym_nil] = ACTIONS(1166),
    [sym_true] = ACTIONS(1166),
    [sym_false] = ACTIONS(1166),
    [sym_number_long] = ACTIONS(1166),
    [sym_number_double] = ACTIONS(1166),
    [anon_sym_BSLASH] = ACTIONS(1166),
    [anon_sym_DQUOTE] = ACTIONS(1166),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1166),
    [anon_sym_SQUOTE] = ACTIONS(1166),
    [anon_sym_LPARENquote] = ACTIONS(1166),
    [anon_sym_COLON] = ACTIONS(1166),
    [anon_sym_COLON_COLON] = ACTIONS(1166),
    [anon_sym_DASH_GT] = ACTIONS(1166),
    [anon_sym_DASH_GT_GT] = ACTIONS(1166),
    [anon_sym_as_DASH_GT] = ACTIONS(1166),
    [anon_sym_some_DASH_GT] = ACTIONS(1166),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1166),
    [anon_sym_cond_DASH_GT] = ACTIONS(1166),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1166),
    [sym__symbol_chars] = ACTIONS(1166),
    [anon_sym_LPAREN] = ACTIONS(1166),
    [anon_sym_LBRACK] = ACTIONS(1166),
    [anon_sym_LBRACE] = ACTIONS(1166),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1166),
    [anon_sym_POUND] = ACTIONS(1166),
    [anon_sym_POUND_LBRACE] = ACTIONS(1166),
    [anon_sym_SEMI] = ACTIONS(1166),
    [anon_sym_POUND_BANG] = ACTIONS(1166),
    [anon_sym_POUND_] = ACTIONS(1166),
    [anon_sym_] = ACTIONS(1041),
    [anon_sym_LPARENcomment] = ACTIONS(1166),
    [anon_sym_POUND_LPAREN] = ACTIONS(1166),
    [sym_defn_function] = ACTIONS(1166),
  },
  [270] = {
    [ts_builtin_sym_end] = ACTIONS(1196),
    [sym_nil] = ACTIONS(1198),
    [sym_true] = ACTIONS(1198),
    [sym_false] = ACTIONS(1198),
    [sym_number_long] = ACTIONS(1198),
    [sym_number_double] = ACTIONS(1196),
    [anon_sym_BSLASH] = ACTIONS(1196),
    [anon_sym_DQUOTE] = ACTIONS(1196),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1196),
    [anon_sym_SQUOTE] = ACTIONS(1196),
    [anon_sym_LPARENquote] = ACTIONS(1196),
    [anon_sym_RPAREN] = ACTIONS(1196),
    [anon_sym_COLON] = ACTIONS(1198),
    [anon_sym_COLON_COLON] = ACTIONS(1196),
    [anon_sym_DASH_GT] = ACTIONS(1198),
    [anon_sym_DASH_GT_GT] = ACTIONS(1196),
    [anon_sym_as_DASH_GT] = ACTIONS(1196),
    [anon_sym_some_DASH_GT] = ACTIONS(1198),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1196),
    [anon_sym_cond_DASH_GT] = ACTIONS(1198),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1196),
    [sym__symbol_chars] = ACTIONS(1198),
    [anon_sym_LPAREN] = ACTIONS(1198),
    [anon_sym_LBRACK] = ACTIONS(1196),
    [anon_sym_RBRACK] = ACTIONS(1196),
    [anon_sym_LBRACE] = ACTIONS(1196),
    [anon_sym_RBRACE] = ACTIONS(1196),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1196),
    [anon_sym_POUND] = ACTIONS(1198),
    [anon_sym_POUND_LBRACE] = ACTIONS(1196),
    [anon_sym_SEMI] = ACTIONS(1196),
    [anon_sym_POUND_BANG] = ACTIONS(1196),
    [anon_sym_POUND_] = ACTIONS(1196),
    [anon_sym_LPARENcomment] = ACTIONS(1196),
    [anon_sym_POUND_LPAREN] = ACTIONS(1196),
    [sym_shorthand_function_arg] = ACTIONS(1196),
    [sym_defn_function] = ACTIONS(1196),
  },
  [271] = {
    [aux_sym_ignore_form_repeat1] = STATE(271),
    [sym_nil] = ACTIONS(858),
    [sym_true] = ACTIONS(858),
    [sym_false] = ACTIONS(858),
    [sym_number_long] = ACTIONS(858),
    [sym_number_double] = ACTIONS(858),
    [anon_sym_BSLASH] = ACTIONS(858),
    [anon_sym_DQUOTE] = ACTIONS(858),
    [anon_sym_POUND_DQUOTE] = ACTIONS(858),
    [anon_sym_SQUOTE] = ACTIONS(858),
    [anon_sym_LPARENquote] = ACTIONS(858),
    [anon_sym_COLON] = ACTIONS(858),
    [anon_sym_COLON_COLON] = ACTIONS(858),
    [anon_sym_DASH_GT] = ACTIONS(858),
    [anon_sym_DASH_GT_GT] = ACTIONS(858),
    [anon_sym_as_DASH_GT] = ACTIONS(858),
    [anon_sym_some_DASH_GT] = ACTIONS(858),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(858),
    [anon_sym_cond_DASH_GT] = ACTIONS(858),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(858),
    [sym__symbol_chars] = ACTIONS(858),
    [anon_sym_LPAREN] = ACTIONS(858),
    [anon_sym_LBRACK] = ACTIONS(858),
    [anon_sym_LBRACE] = ACTIONS(858),
    [anon_sym_RBRACE] = ACTIONS(858),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(858),
    [anon_sym_POUND] = ACTIONS(858),
    [anon_sym_POUND_LBRACE] = ACTIONS(858),
    [anon_sym_SEMI] = ACTIONS(858),
    [anon_sym_POUND_BANG] = ACTIONS(858),
    [anon_sym_POUND_] = ACTIONS(858),
    [anon_sym_] = ACTIONS(1200),
    [anon_sym_LPARENcomment] = ACTIONS(858),
    [anon_sym_POUND_LPAREN] = ACTIONS(858),
    [sym_defn_function] = ACTIONS(858),
  },
  [272] = {
    [aux_sym_ignore_form_repeat1] = STATE(271),
    [sym_nil] = ACTIONS(1166),
    [sym_true] = ACTIONS(1166),
    [sym_false] = ACTIONS(1166),
    [sym_number_long] = ACTIONS(1166),
    [sym_number_double] = ACTIONS(1166),
    [anon_sym_BSLASH] = ACTIONS(1166),
    [anon_sym_DQUOTE] = ACTIONS(1166),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1166),
    [anon_sym_SQUOTE] = ACTIONS(1166),
    [anon_sym_LPARENquote] = ACTIONS(1166),
    [anon_sym_COLON] = ACTIONS(1166),
    [anon_sym_COLON_COLON] = ACTIONS(1166),
    [anon_sym_DASH_GT] = ACTIONS(1166),
    [anon_sym_DASH_GT_GT] = ACTIONS(1166),
    [anon_sym_as_DASH_GT] = ACTIONS(1166),
    [anon_sym_some_DASH_GT] = ACTIONS(1166),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1166),
    [anon_sym_cond_DASH_GT] = ACTIONS(1166),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1166),
    [sym__symbol_chars] = ACTIONS(1166),
    [anon_sym_LPAREN] = ACTIONS(1166),
    [anon_sym_LBRACK] = ACTIONS(1166),
    [anon_sym_LBRACE] = ACTIONS(1166),
    [anon_sym_RBRACE] = ACTIONS(1166),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1166),
    [anon_sym_POUND] = ACTIONS(1166),
    [anon_sym_POUND_LBRACE] = ACTIONS(1166),
    [anon_sym_SEMI] = ACTIONS(1166),
    [anon_sym_POUND_BANG] = ACTIONS(1166),
    [anon_sym_POUND_] = ACTIONS(1166),
    [anon_sym_] = ACTIONS(1051),
    [anon_sym_LPARENcomment] = ACTIONS(1166),
    [anon_sym_POUND_LPAREN] = ACTIONS(1166),
    [sym_defn_function] = ACTIONS(1166),
  },
  [273] = {
    [ts_builtin_sym_end] = ACTIONS(1010),
    [sym_nil] = ACTIONS(1012),
    [sym_true] = ACTIONS(1012),
    [sym_false] = ACTIONS(1012),
    [sym_number_long] = ACTIONS(1012),
    [sym_number_double] = ACTIONS(1012),
    [anon_sym_BSLASH] = ACTIONS(1012),
    [anon_sym_DQUOTE] = ACTIONS(1012),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1012),
    [anon_sym_SQUOTE] = ACTIONS(1012),
    [anon_sym_LPARENquote] = ACTIONS(1012),
    [anon_sym_RPAREN] = ACTIONS(1012),
    [anon_sym_COLON] = ACTIONS(1012),
    [anon_sym_COLON_COLON] = ACTIONS(1012),
    [anon_sym_DASH_GT] = ACTIONS(1012),
    [anon_sym_DASH_GT_GT] = ACTIONS(1012),
    [anon_sym_as_DASH_GT] = ACTIONS(1012),
    [anon_sym_some_DASH_GT] = ACTIONS(1012),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1012),
    [anon_sym_cond_DASH_GT] = ACTIONS(1012),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1012),
    [sym__symbol_chars] = ACTIONS(1012),
    [anon_sym_LPAREN] = ACTIONS(1012),
    [anon_sym_LBRACK] = ACTIONS(1012),
    [anon_sym_RBRACK] = ACTIONS(1012),
    [anon_sym_LBRACE] = ACTIONS(1012),
    [anon_sym_RBRACE] = ACTIONS(1012),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1012),
    [anon_sym_POUND] = ACTIONS(1012),
    [anon_sym_POUND_LBRACE] = ACTIONS(1012),
    [anon_sym_SEMI] = ACTIONS(1012),
    [anon_sym_POUND_BANG] = ACTIONS(1012),
    [anon_sym_POUND_] = ACTIONS(1012),
    [anon_sym_] = ACTIONS(1010),
    [anon_sym_LPARENcomment] = ACTIONS(1012),
    [anon_sym_POUND_LPAREN] = ACTIONS(1012),
    [sym_shorthand_function_arg] = ACTIONS(1012),
    [sym_defn_function] = ACTIONS(1012),
  },
  [274] = {
    [sym_number_long] = ACTIONS(577),
    [sym_number_double] = ACTIONS(577),
    [anon_sym_DQUOTE] = ACTIONS(577),
    [anon_sym_COLON] = ACTIONS(577),
    [anon_sym_COLON_COLON] = ACTIONS(577),
    [anon_sym_DASH_GT] = ACTIONS(577),
    [anon_sym_DASH_GT_GT] = ACTIONS(577),
    [anon_sym_as_DASH_GT] = ACTIONS(577),
    [anon_sym_some_DASH_GT] = ACTIONS(577),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(577),
    [anon_sym_cond_DASH_GT] = ACTIONS(577),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(577),
    [sym__symbol_chars] = ACTIONS(577),
    [anon_sym_LPAREN] = ACTIONS(577),
    [anon_sym_LBRACK] = ACTIONS(577),
    [anon_sym_RBRACK] = ACTIONS(577),
    [anon_sym_LBRACE] = ACTIONS(577),
    [anon_sym_POUND] = ACTIONS(577),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(577),
  },
  [275] = {
    [sym__keyword_chars] = ACTIONS(1203),
  },
  [276] = {
    [sym_number_long] = ACTIONS(605),
    [sym_number_double] = ACTIONS(605),
    [anon_sym_DQUOTE] = ACTIONS(605),
    [anon_sym_COLON] = ACTIONS(605),
    [anon_sym_COLON_COLON] = ACTIONS(605),
    [anon_sym_DASH_GT] = ACTIONS(605),
    [anon_sym_DASH_GT_GT] = ACTIONS(605),
    [anon_sym_as_DASH_GT] = ACTIONS(605),
    [anon_sym_some_DASH_GT] = ACTIONS(605),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(605),
    [anon_sym_cond_DASH_GT] = ACTIONS(605),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(605),
    [sym__symbol_chars] = ACTIONS(605),
    [anon_sym_LPAREN] = ACTIONS(605),
    [anon_sym_LBRACK] = ACTIONS(605),
    [anon_sym_RBRACK] = ACTIONS(605),
    [anon_sym_LBRACE] = ACTIONS(605),
    [anon_sym_POUND] = ACTIONS(605),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(605),
  },
  [277] = {
    [sym_number_long] = ACTIONS(1059),
    [sym_number_double] = ACTIONS(1059),
    [anon_sym_DQUOTE] = ACTIONS(1059),
    [anon_sym_COLON] = ACTIONS(1059),
    [anon_sym_COLON_COLON] = ACTIONS(1059),
    [anon_sym_DASH_GT] = ACTIONS(1059),
    [anon_sym_DASH_GT_GT] = ACTIONS(1059),
    [anon_sym_as_DASH_GT] = ACTIONS(1059),
    [anon_sym_some_DASH_GT] = ACTIONS(1059),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1059),
    [anon_sym_cond_DASH_GT] = ACTIONS(1059),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1059),
    [sym__symbol_chars] = ACTIONS(1059),
    [anon_sym_LPAREN] = ACTIONS(1059),
    [anon_sym_LBRACK] = ACTIONS(1059),
    [anon_sym_RBRACK] = ACTIONS(1059),
    [anon_sym_LBRACE] = ACTIONS(1059),
    [anon_sym_POUND] = ACTIONS(1059),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1059),
  },
  [278] = {
    [sym_number_long] = ACTIONS(1077),
    [sym_number_double] = ACTIONS(1077),
    [anon_sym_DQUOTE] = ACTIONS(1077),
    [anon_sym_COLON] = ACTIONS(1077),
    [anon_sym_COLON_COLON] = ACTIONS(1077),
    [anon_sym_DASH_GT] = ACTIONS(1077),
    [anon_sym_DASH_GT_GT] = ACTIONS(1077),
    [anon_sym_as_DASH_GT] = ACTIONS(1077),
    [anon_sym_some_DASH_GT] = ACTIONS(1077),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1077),
    [anon_sym_cond_DASH_GT] = ACTIONS(1077),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1077),
    [sym__symbol_chars] = ACTIONS(1077),
    [anon_sym_LPAREN] = ACTIONS(1077),
    [anon_sym_LBRACK] = ACTIONS(1077),
    [anon_sym_RBRACK] = ACTIONS(1077),
    [anon_sym_LBRACE] = ACTIONS(1077),
    [anon_sym_POUND] = ACTIONS(1077),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1077),
  },
  [279] = {
    [sym_number_long] = ACTIONS(1125),
    [sym_number_double] = ACTIONS(1125),
    [anon_sym_DQUOTE] = ACTIONS(1125),
    [anon_sym_COLON] = ACTIONS(1125),
    [anon_sym_COLON_COLON] = ACTIONS(1125),
    [anon_sym_DASH_GT] = ACTIONS(1125),
    [anon_sym_DASH_GT_GT] = ACTIONS(1125),
    [anon_sym_as_DASH_GT] = ACTIONS(1125),
    [anon_sym_some_DASH_GT] = ACTIONS(1125),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1125),
    [anon_sym_cond_DASH_GT] = ACTIONS(1125),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1125),
    [sym__symbol_chars] = ACTIONS(1125),
    [anon_sym_LPAREN] = ACTIONS(1125),
    [anon_sym_LBRACK] = ACTIONS(1125),
    [anon_sym_RBRACK] = ACTIONS(1125),
    [anon_sym_LBRACE] = ACTIONS(1125),
    [anon_sym_POUND] = ACTIONS(1125),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1125),
  },
  [280] = {
    [sym__number] = STATE(245),
    [sym__string] = STATE(245),
    [sym__keyword] = STATE(245),
    [sym__unqualified_keyword] = STATE(245),
    [sym_qualified_keyword] = STATE(245),
    [sym__symbol] = STATE(245),
    [sym_threading_macro] = STATE(245),
    [sym_qualified_symbol] = STATE(245),
    [sym__one_form] = STATE(245),
    [sym__paren_sequence] = STATE(245),
    [sym__bracket_sequence] = STATE(245),
    [sym__curly_brace_sequence] = STATE(245),
    [aux_sym_comment_macro_repeat1] = STATE(245),
    [sym_number_long] = ACTIONS(844),
    [sym_number_double] = ACTIONS(844),
    [anon_sym_DQUOTE] = ACTIONS(411),
    [anon_sym_COLON] = ACTIONS(413),
    [anon_sym_COLON_COLON] = ACTIONS(415),
    [anon_sym_DASH_GT] = ACTIONS(417),
    [anon_sym_DASH_GT_GT] = ACTIONS(417),
    [anon_sym_as_DASH_GT] = ACTIONS(417),
    [anon_sym_some_DASH_GT] = ACTIONS(417),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(417),
    [anon_sym_cond_DASH_GT] = ACTIONS(417),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(417),
    [sym__symbol_chars] = ACTIONS(419),
    [anon_sym_LPAREN] = ACTIONS(421),
    [anon_sym_LBRACK] = ACTIONS(423),
    [anon_sym_LBRACE] = ACTIONS(425),
    [anon_sym_RBRACE] = ACTIONS(1205),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(844),
  },
  [281] = {
    [sym_number_long] = ACTIONS(577),
    [sym_number_double] = ACTIONS(577),
    [anon_sym_DQUOTE] = ACTIONS(577),
    [anon_sym_COLON] = ACTIONS(577),
    [anon_sym_COLON_COLON] = ACTIONS(577),
    [anon_sym_DASH_GT] = ACTIONS(577),
    [anon_sym_DASH_GT_GT] = ACTIONS(577),
    [anon_sym_as_DASH_GT] = ACTIONS(577),
    [anon_sym_some_DASH_GT] = ACTIONS(577),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(577),
    [anon_sym_cond_DASH_GT] = ACTIONS(577),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(577),
    [sym__symbol_chars] = ACTIONS(577),
    [anon_sym_LPAREN] = ACTIONS(577),
    [anon_sym_LBRACK] = ACTIONS(577),
    [anon_sym_LBRACE] = ACTIONS(577),
    [anon_sym_RBRACE] = ACTIONS(577),
    [anon_sym_POUND] = ACTIONS(577),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(577),
  },
  [282] = {
    [sym__keyword_chars] = ACTIONS(1207),
  },
  [283] = {
    [sym_number_long] = ACTIONS(605),
    [sym_number_double] = ACTIONS(605),
    [anon_sym_DQUOTE] = ACTIONS(605),
    [anon_sym_COLON] = ACTIONS(605),
    [anon_sym_COLON_COLON] = ACTIONS(605),
    [anon_sym_DASH_GT] = ACTIONS(605),
    [anon_sym_DASH_GT_GT] = ACTIONS(605),
    [anon_sym_as_DASH_GT] = ACTIONS(605),
    [anon_sym_some_DASH_GT] = ACTIONS(605),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(605),
    [anon_sym_cond_DASH_GT] = ACTIONS(605),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(605),
    [sym__symbol_chars] = ACTIONS(605),
    [anon_sym_LPAREN] = ACTIONS(605),
    [anon_sym_LBRACK] = ACTIONS(605),
    [anon_sym_LBRACE] = ACTIONS(605),
    [anon_sym_RBRACE] = ACTIONS(605),
    [anon_sym_POUND] = ACTIONS(605),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(605),
  },
  [284] = {
    [sym_number_long] = ACTIONS(1059),
    [sym_number_double] = ACTIONS(1059),
    [anon_sym_DQUOTE] = ACTIONS(1059),
    [anon_sym_COLON] = ACTIONS(1059),
    [anon_sym_COLON_COLON] = ACTIONS(1059),
    [anon_sym_DASH_GT] = ACTIONS(1059),
    [anon_sym_DASH_GT_GT] = ACTIONS(1059),
    [anon_sym_as_DASH_GT] = ACTIONS(1059),
    [anon_sym_some_DASH_GT] = ACTIONS(1059),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1059),
    [anon_sym_cond_DASH_GT] = ACTIONS(1059),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1059),
    [sym__symbol_chars] = ACTIONS(1059),
    [anon_sym_LPAREN] = ACTIONS(1059),
    [anon_sym_LBRACK] = ACTIONS(1059),
    [anon_sym_LBRACE] = ACTIONS(1059),
    [anon_sym_RBRACE] = ACTIONS(1059),
    [anon_sym_POUND] = ACTIONS(1059),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1059),
  },
  [285] = {
    [sym_number_long] = ACTIONS(1077),
    [sym_number_double] = ACTIONS(1077),
    [anon_sym_DQUOTE] = ACTIONS(1077),
    [anon_sym_COLON] = ACTIONS(1077),
    [anon_sym_COLON_COLON] = ACTIONS(1077),
    [anon_sym_DASH_GT] = ACTIONS(1077),
    [anon_sym_DASH_GT_GT] = ACTIONS(1077),
    [anon_sym_as_DASH_GT] = ACTIONS(1077),
    [anon_sym_some_DASH_GT] = ACTIONS(1077),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1077),
    [anon_sym_cond_DASH_GT] = ACTIONS(1077),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1077),
    [sym__symbol_chars] = ACTIONS(1077),
    [anon_sym_LPAREN] = ACTIONS(1077),
    [anon_sym_LBRACK] = ACTIONS(1077),
    [anon_sym_LBRACE] = ACTIONS(1077),
    [anon_sym_RBRACE] = ACTIONS(1077),
    [anon_sym_POUND] = ACTIONS(1077),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1077),
  },
  [286] = {
    [sym_number_long] = ACTIONS(1125),
    [sym_number_double] = ACTIONS(1125),
    [anon_sym_DQUOTE] = ACTIONS(1125),
    [anon_sym_COLON] = ACTIONS(1125),
    [anon_sym_COLON_COLON] = ACTIONS(1125),
    [anon_sym_DASH_GT] = ACTIONS(1125),
    [anon_sym_DASH_GT_GT] = ACTIONS(1125),
    [anon_sym_as_DASH_GT] = ACTIONS(1125),
    [anon_sym_some_DASH_GT] = ACTIONS(1125),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1125),
    [anon_sym_cond_DASH_GT] = ACTIONS(1125),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1125),
    [sym__symbol_chars] = ACTIONS(1125),
    [anon_sym_LPAREN] = ACTIONS(1125),
    [anon_sym_LBRACK] = ACTIONS(1125),
    [anon_sym_LBRACE] = ACTIONS(1125),
    [anon_sym_RBRACE] = ACTIONS(1125),
    [anon_sym_POUND] = ACTIONS(1125),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1125),
  },
  [287] = {
    [sym__number] = STATE(245),
    [sym__string] = STATE(245),
    [sym__keyword] = STATE(245),
    [sym__unqualified_keyword] = STATE(245),
    [sym_qualified_keyword] = STATE(245),
    [sym__symbol] = STATE(245),
    [sym_threading_macro] = STATE(245),
    [sym_qualified_symbol] = STATE(245),
    [sym__one_form] = STATE(245),
    [sym__paren_sequence] = STATE(245),
    [sym__bracket_sequence] = STATE(245),
    [sym__curly_brace_sequence] = STATE(245),
    [aux_sym_comment_macro_repeat1] = STATE(245),
    [sym_number_long] = ACTIONS(844),
    [sym_number_double] = ACTIONS(844),
    [anon_sym_DQUOTE] = ACTIONS(411),
    [anon_sym_COLON] = ACTIONS(413),
    [anon_sym_COLON_COLON] = ACTIONS(415),
    [anon_sym_DASH_GT] = ACTIONS(417),
    [anon_sym_DASH_GT_GT] = ACTIONS(417),
    [anon_sym_as_DASH_GT] = ACTIONS(417),
    [anon_sym_some_DASH_GT] = ACTIONS(417),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(417),
    [anon_sym_cond_DASH_GT] = ACTIONS(417),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(417),
    [sym__symbol_chars] = ACTIONS(419),
    [anon_sym_LPAREN] = ACTIONS(421),
    [anon_sym_LBRACK] = ACTIONS(423),
    [anon_sym_LBRACE] = ACTIONS(425),
    [anon_sym_RBRACE] = ACTIONS(1209),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(844),
  },
  [288] = {
    [ts_builtin_sym_end] = ACTIONS(1211),
    [sym_nil] = ACTIONS(1213),
    [sym_true] = ACTIONS(1213),
    [sym_false] = ACTIONS(1213),
    [sym_number_long] = ACTIONS(1213),
    [sym_number_double] = ACTIONS(1213),
    [anon_sym_BSLASH] = ACTIONS(1213),
    [anon_sym_DQUOTE] = ACTIONS(1213),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1213),
    [anon_sym_SQUOTE] = ACTIONS(1213),
    [anon_sym_LPARENquote] = ACTIONS(1213),
    [anon_sym_RPAREN] = ACTIONS(1213),
    [anon_sym_COLON] = ACTIONS(1213),
    [anon_sym_COLON_COLON] = ACTIONS(1213),
    [anon_sym_DASH_GT] = ACTIONS(1213),
    [anon_sym_DASH_GT_GT] = ACTIONS(1213),
    [anon_sym_as_DASH_GT] = ACTIONS(1213),
    [anon_sym_some_DASH_GT] = ACTIONS(1213),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1213),
    [anon_sym_cond_DASH_GT] = ACTIONS(1213),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1213),
    [sym__symbol_chars] = ACTIONS(1213),
    [anon_sym_LPAREN] = ACTIONS(1213),
    [anon_sym_LBRACK] = ACTIONS(1213),
    [anon_sym_RBRACK] = ACTIONS(1213),
    [anon_sym_LBRACE] = ACTIONS(1213),
    [anon_sym_RBRACE] = ACTIONS(1213),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1213),
    [anon_sym_POUND] = ACTIONS(1213),
    [anon_sym_POUND_LBRACE] = ACTIONS(1213),
    [anon_sym_SEMI] = ACTIONS(1213),
    [anon_sym_POUND_BANG] = ACTIONS(1213),
    [anon_sym_POUND_] = ACTIONS(1213),
    [anon_sym_] = ACTIONS(1211),
    [anon_sym_LPARENcomment] = ACTIONS(1213),
    [anon_sym_POUND_LPAREN] = ACTIONS(1213),
    [sym_shorthand_function_arg] = ACTIONS(1213),
    [sym_defn_function] = ACTIONS(1213),
  },
  [289] = {
    [sym_number_long] = ACTIONS(1012),
    [sym_number_double] = ACTIONS(1012),
    [anon_sym_DQUOTE] = ACTIONS(1012),
    [anon_sym_RPAREN] = ACTIONS(1012),
    [anon_sym_COLON] = ACTIONS(1012),
    [anon_sym_COLON_COLON] = ACTIONS(1012),
    [anon_sym_DASH_GT] = ACTIONS(1012),
    [anon_sym_DASH_GT_GT] = ACTIONS(1012),
    [anon_sym_as_DASH_GT] = ACTIONS(1012),
    [anon_sym_some_DASH_GT] = ACTIONS(1012),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1012),
    [anon_sym_cond_DASH_GT] = ACTIONS(1012),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1012),
    [sym__symbol_chars] = ACTIONS(1012),
    [anon_sym_LPAREN] = ACTIONS(1012),
    [anon_sym_LBRACK] = ACTIONS(1012),
    [anon_sym_LBRACE] = ACTIONS(1012),
    [anon_sym_POUND] = ACTIONS(1012),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1012),
  },
  [290] = {
    [sym_number_long] = ACTIONS(1213),
    [sym_number_double] = ACTIONS(1213),
    [anon_sym_DQUOTE] = ACTIONS(1213),
    [anon_sym_RPAREN] = ACTIONS(1213),
    [anon_sym_COLON] = ACTIONS(1213),
    [anon_sym_COLON_COLON] = ACTIONS(1213),
    [anon_sym_DASH_GT] = ACTIONS(1213),
    [anon_sym_DASH_GT_GT] = ACTIONS(1213),
    [anon_sym_as_DASH_GT] = ACTIONS(1213),
    [anon_sym_some_DASH_GT] = ACTIONS(1213),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1213),
    [anon_sym_cond_DASH_GT] = ACTIONS(1213),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1213),
    [sym__symbol_chars] = ACTIONS(1213),
    [anon_sym_LPAREN] = ACTIONS(1213),
    [anon_sym_LBRACK] = ACTIONS(1213),
    [anon_sym_LBRACE] = ACTIONS(1213),
    [anon_sym_POUND] = ACTIONS(1213),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1213),
  },
  [291] = {
    [aux_sym_ignore_form_repeat1] = STATE(291),
    [sym_nil] = ACTIONS(858),
    [sym_true] = ACTIONS(858),
    [sym_false] = ACTIONS(858),
    [sym_number_long] = ACTIONS(858),
    [sym_number_double] = ACTIONS(858),
    [anon_sym_BSLASH] = ACTIONS(858),
    [anon_sym_DQUOTE] = ACTIONS(858),
    [anon_sym_POUND_DQUOTE] = ACTIONS(858),
    [anon_sym_SQUOTE] = ACTIONS(858),
    [anon_sym_LPARENquote] = ACTIONS(858),
    [anon_sym_RPAREN] = ACTIONS(858),
    [anon_sym_COLON] = ACTIONS(858),
    [anon_sym_COLON_COLON] = ACTIONS(858),
    [anon_sym_DASH_GT] = ACTIONS(858),
    [anon_sym_DASH_GT_GT] = ACTIONS(858),
    [anon_sym_as_DASH_GT] = ACTIONS(858),
    [anon_sym_some_DASH_GT] = ACTIONS(858),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(858),
    [anon_sym_cond_DASH_GT] = ACTIONS(858),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(858),
    [sym__symbol_chars] = ACTIONS(858),
    [anon_sym_LPAREN] = ACTIONS(858),
    [anon_sym_LBRACK] = ACTIONS(858),
    [anon_sym_LBRACE] = ACTIONS(858),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(858),
    [anon_sym_POUND] = ACTIONS(858),
    [anon_sym_POUND_LBRACE] = ACTIONS(858),
    [anon_sym_SEMI] = ACTIONS(858),
    [anon_sym_POUND_BANG] = ACTIONS(858),
    [anon_sym_POUND_] = ACTIONS(858),
    [anon_sym_] = ACTIONS(1215),
    [anon_sym_LPARENcomment] = ACTIONS(858),
    [anon_sym_POUND_LPAREN] = ACTIONS(858),
    [sym_shorthand_function_arg] = ACTIONS(858),
    [sym_defn_function] = ACTIONS(858),
  },
  [292] = {
    [aux_sym_ignore_form_repeat1] = STATE(291),
    [sym_nil] = ACTIONS(1166),
    [sym_true] = ACTIONS(1166),
    [sym_false] = ACTIONS(1166),
    [sym_number_long] = ACTIONS(1166),
    [sym_number_double] = ACTIONS(1166),
    [anon_sym_BSLASH] = ACTIONS(1166),
    [anon_sym_DQUOTE] = ACTIONS(1166),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1166),
    [anon_sym_SQUOTE] = ACTIONS(1166),
    [anon_sym_LPARENquote] = ACTIONS(1166),
    [anon_sym_RPAREN] = ACTIONS(1166),
    [anon_sym_COLON] = ACTIONS(1166),
    [anon_sym_COLON_COLON] = ACTIONS(1166),
    [anon_sym_DASH_GT] = ACTIONS(1166),
    [anon_sym_DASH_GT_GT] = ACTIONS(1166),
    [anon_sym_as_DASH_GT] = ACTIONS(1166),
    [anon_sym_some_DASH_GT] = ACTIONS(1166),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1166),
    [anon_sym_cond_DASH_GT] = ACTIONS(1166),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1166),
    [sym__symbol_chars] = ACTIONS(1166),
    [anon_sym_LPAREN] = ACTIONS(1166),
    [anon_sym_LBRACK] = ACTIONS(1166),
    [anon_sym_LBRACE] = ACTIONS(1166),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1166),
    [anon_sym_POUND] = ACTIONS(1166),
    [anon_sym_POUND_LBRACE] = ACTIONS(1166),
    [anon_sym_SEMI] = ACTIONS(1166),
    [anon_sym_POUND_BANG] = ACTIONS(1166),
    [anon_sym_POUND_] = ACTIONS(1166),
    [anon_sym_] = ACTIONS(1172),
    [anon_sym_LPARENcomment] = ACTIONS(1166),
    [anon_sym_POUND_LPAREN] = ACTIONS(1166),
    [sym_shorthand_function_arg] = ACTIONS(1166),
    [sym_defn_function] = ACTIONS(1166),
  },
  [293] = {
    [ts_builtin_sym_end] = ACTIONS(1218),
    [sym_nil] = ACTIONS(1220),
    [sym_true] = ACTIONS(1220),
    [sym_false] = ACTIONS(1220),
    [sym_number_long] = ACTIONS(1220),
    [sym_number_double] = ACTIONS(1218),
    [anon_sym_BSLASH] = ACTIONS(1218),
    [anon_sym_DQUOTE] = ACTIONS(1218),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1218),
    [anon_sym_SQUOTE] = ACTIONS(1218),
    [anon_sym_LPARENquote] = ACTIONS(1218),
    [anon_sym_RPAREN] = ACTIONS(1218),
    [anon_sym_COLON] = ACTIONS(1220),
    [anon_sym_COLON_COLON] = ACTIONS(1218),
    [anon_sym_DASH_GT] = ACTIONS(1220),
    [anon_sym_DASH_GT_GT] = ACTIONS(1218),
    [anon_sym_as_DASH_GT] = ACTIONS(1218),
    [anon_sym_some_DASH_GT] = ACTIONS(1220),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1218),
    [anon_sym_cond_DASH_GT] = ACTIONS(1220),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1218),
    [sym__symbol_chars] = ACTIONS(1220),
    [anon_sym_LPAREN] = ACTIONS(1220),
    [anon_sym_LBRACK] = ACTIONS(1218),
    [anon_sym_RBRACK] = ACTIONS(1218),
    [anon_sym_LBRACE] = ACTIONS(1218),
    [anon_sym_RBRACE] = ACTIONS(1218),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1218),
    [anon_sym_POUND] = ACTIONS(1220),
    [anon_sym_POUND_LBRACE] = ACTIONS(1218),
    [anon_sym_SEMI] = ACTIONS(1218),
    [anon_sym_POUND_BANG] = ACTIONS(1218),
    [anon_sym_POUND_] = ACTIONS(1218),
    [anon_sym_LPARENcomment] = ACTIONS(1218),
    [anon_sym_POUND_LPAREN] = ACTIONS(1218),
    [sym_shorthand_function_arg] = ACTIONS(1218),
    [sym_defn_function] = ACTIONS(1218),
  },
  [294] = {
    [sym_number_long] = ACTIONS(1012),
    [sym_number_double] = ACTIONS(1012),
    [anon_sym_DQUOTE] = ACTIONS(1012),
    [anon_sym_COLON] = ACTIONS(1012),
    [anon_sym_COLON_COLON] = ACTIONS(1012),
    [anon_sym_DASH_GT] = ACTIONS(1012),
    [anon_sym_DASH_GT_GT] = ACTIONS(1012),
    [anon_sym_as_DASH_GT] = ACTIONS(1012),
    [anon_sym_some_DASH_GT] = ACTIONS(1012),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1012),
    [anon_sym_cond_DASH_GT] = ACTIONS(1012),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1012),
    [sym__symbol_chars] = ACTIONS(1012),
    [anon_sym_LPAREN] = ACTIONS(1012),
    [anon_sym_LBRACK] = ACTIONS(1012),
    [anon_sym_RBRACK] = ACTIONS(1012),
    [anon_sym_LBRACE] = ACTIONS(1012),
    [anon_sym_POUND] = ACTIONS(1012),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1012),
  },
  [295] = {
    [sym_number_long] = ACTIONS(1213),
    [sym_number_double] = ACTIONS(1213),
    [anon_sym_DQUOTE] = ACTIONS(1213),
    [anon_sym_COLON] = ACTIONS(1213),
    [anon_sym_COLON_COLON] = ACTIONS(1213),
    [anon_sym_DASH_GT] = ACTIONS(1213),
    [anon_sym_DASH_GT_GT] = ACTIONS(1213),
    [anon_sym_as_DASH_GT] = ACTIONS(1213),
    [anon_sym_some_DASH_GT] = ACTIONS(1213),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1213),
    [anon_sym_cond_DASH_GT] = ACTIONS(1213),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1213),
    [sym__symbol_chars] = ACTIONS(1213),
    [anon_sym_LPAREN] = ACTIONS(1213),
    [anon_sym_LBRACK] = ACTIONS(1213),
    [anon_sym_RBRACK] = ACTIONS(1213),
    [anon_sym_LBRACE] = ACTIONS(1213),
    [anon_sym_POUND] = ACTIONS(1213),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1213),
  },
  [296] = {
    [sym_number_long] = ACTIONS(1012),
    [sym_number_double] = ACTIONS(1012),
    [anon_sym_DQUOTE] = ACTIONS(1012),
    [anon_sym_COLON] = ACTIONS(1012),
    [anon_sym_COLON_COLON] = ACTIONS(1012),
    [anon_sym_DASH_GT] = ACTIONS(1012),
    [anon_sym_DASH_GT_GT] = ACTIONS(1012),
    [anon_sym_as_DASH_GT] = ACTIONS(1012),
    [anon_sym_some_DASH_GT] = ACTIONS(1012),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1012),
    [anon_sym_cond_DASH_GT] = ACTIONS(1012),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1012),
    [sym__symbol_chars] = ACTIONS(1012),
    [anon_sym_LPAREN] = ACTIONS(1012),
    [anon_sym_LBRACK] = ACTIONS(1012),
    [anon_sym_LBRACE] = ACTIONS(1012),
    [anon_sym_RBRACE] = ACTIONS(1012),
    [anon_sym_POUND] = ACTIONS(1012),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1012),
  },
  [297] = {
    [sym_number_long] = ACTIONS(1213),
    [sym_number_double] = ACTIONS(1213),
    [anon_sym_DQUOTE] = ACTIONS(1213),
    [anon_sym_COLON] = ACTIONS(1213),
    [anon_sym_COLON_COLON] = ACTIONS(1213),
    [anon_sym_DASH_GT] = ACTIONS(1213),
    [anon_sym_DASH_GT_GT] = ACTIONS(1213),
    [anon_sym_as_DASH_GT] = ACTIONS(1213),
    [anon_sym_some_DASH_GT] = ACTIONS(1213),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1213),
    [anon_sym_cond_DASH_GT] = ACTIONS(1213),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1213),
    [sym__symbol_chars] = ACTIONS(1213),
    [anon_sym_LPAREN] = ACTIONS(1213),
    [anon_sym_LBRACK] = ACTIONS(1213),
    [anon_sym_LBRACE] = ACTIONS(1213),
    [anon_sym_RBRACE] = ACTIONS(1213),
    [anon_sym_POUND] = ACTIONS(1213),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1213),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(37),
  [9] = {.count = 1, .reusable = false}, SHIFT(2),
  [11] = {.count = 1, .reusable = false}, SHIFT(25),
  [13] = {.count = 1, .reusable = true}, SHIFT(25),
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
  [55] = {.count = 1, .reusable = true}, SHIFT(22),
  [57] = {.count = 1, .reusable = true}, SHIFT(23),
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
  [185] = {.count = 1, .reusable = false}, SHIFT(100),
  [187] = {.count = 1, .reusable = true}, SHIFT(97),
  [189] = {.count = 1, .reusable = true}, SHIFT(98),
  [191] = {.count = 1, .reusable = true}, SHIFT(99),
  [193] = {.count = 1, .reusable = true}, SHIFT(100),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_function, 1),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym_function, 1),
  [199] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_number, 1),
  [203] = {.count = 1, .reusable = false}, REDUCE(sym_number, 1),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_character, 1),
  [207] = {.count = 1, .reusable = false}, REDUCE(sym_character, 1),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym_string, 1),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_regex, 1),
  [215] = {.count = 1, .reusable = false}, REDUCE(sym_regex, 1),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_quote, 1),
  [219] = {.count = 1, .reusable = false}, REDUCE(sym_quote, 1),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_keyword, 1),
  [223] = {.count = 1, .reusable = false}, REDUCE(sym_keyword, 1),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_symbol, 1),
  [227] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 1),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_list, 1),
  [231] = {.count = 1, .reusable = false}, REDUCE(sym_list, 1),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_vector, 1),
  [235] = {.count = 1, .reusable = false}, REDUCE(sym_vector, 1),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map, 1),
  [239] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map, 1),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_set, 1),
  [243] = {.count = 1, .reusable = false}, REDUCE(sym_set, 1),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [247] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 1),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [251] = {.count = 1, .reusable = false}, SHIFT(101),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym__character, 2),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym__character, 2),
  [257] = {.count = 1, .reusable = true}, SHIFT(102),
  [259] = {.count = 1, .reusable = true}, SHIFT(103),
  [261] = {.count = 1, .reusable = false}, SHIFT(103),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym__string, 2),
  [265] = {.count = 1, .reusable = false}, REDUCE(sym__string, 2),
  [267] = {.count = 1, .reusable = false}, SHIFT(104),
  [269] = {.count = 1, .reusable = false}, SHIFT(105),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym__regex, 2),
  [273] = {.count = 1, .reusable = false}, REDUCE(sym__regex, 2),
  [275] = {.count = 1, .reusable = false}, SHIFT(106),
  [277] = {.count = 1, .reusable = false}, SHIFT(107),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym__quote, 2),
  [281] = {.count = 1, .reusable = false}, REDUCE(sym__quote, 2),
  [283] = {.count = 1, .reusable = false}, SHIFT(108),
  [285] = {.count = 1, .reusable = false}, SHIFT(109),
  [287] = {.count = 1, .reusable = true}, SHIFT(110),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym__unqualified_keyword, 2),
  [291] = {.count = 1, .reusable = false}, REDUCE(sym__unqualified_keyword, 2),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_keyword, 2),
  [295] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_keyword, 2),
  [297] = {.count = 1, .reusable = true}, SHIFT(111),
  [299] = {.count = 1, .reusable = true}, SHIFT(112),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym__list, 2),
  [303] = {.count = 1, .reusable = false}, REDUCE(sym__list, 2),
  [305] = {.count = 1, .reusable = false}, SHIFT(113),
  [307] = {.count = 1, .reusable = false}, SHIFT(114),
  [309] = {.count = 1, .reusable = false}, SHIFT(115),
  [311] = {.count = 1, .reusable = true}, SHIFT(115),
  [313] = {.count = 1, .reusable = false}, SHIFT(116),
  [315] = {.count = 1, .reusable = true}, SHIFT(117),
  [317] = {.count = 1, .reusable = false}, SHIFT(126),
  [319] = {.count = 1, .reusable = true}, SHIFT(125),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym__vector, 2),
  [323] = {.count = 1, .reusable = false}, REDUCE(sym__vector, 2),
  [325] = {.count = 1, .reusable = false}, SHIFT(127),
  [327] = {.count = 1, .reusable = false}, SHIFT(128),
  [329] = {.count = 1, .reusable = false}, SHIFT(130),
  [331] = {.count = 1, .reusable = true}, SHIFT(129),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym__hash_map, 2),
  [335] = {.count = 1, .reusable = false}, REDUCE(sym__hash_map, 2),
  [337] = {.count = 1, .reusable = false}, SHIFT(131),
  [339] = {.count = 1, .reusable = false}, SHIFT(132),
  [341] = {.count = 1, .reusable = false}, SHIFT(133),
  [343] = {.count = 1, .reusable = true}, SHIFT(134),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 2),
  [347] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 2),
  [349] = {.count = 1, .reusable = true}, SHIFT(136),
  [351] = {.count = 1, .reusable = true}, SHIFT(137),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym__set, 2),
  [355] = {.count = 1, .reusable = false}, REDUCE(sym__set, 2),
  [357] = {.count = 1, .reusable = false}, SHIFT(138),
  [359] = {.count = 1, .reusable = false}, SHIFT(139),
  [361] = {.count = 1, .reusable = false}, SHIFT(141),
  [363] = {.count = 1, .reusable = true}, SHIFT(140),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym_semicolon, 2),
  [367] = {.count = 1, .reusable = false}, REDUCE(sym_semicolon, 2),
  [369] = {.count = 1, .reusable = true}, REDUCE(sym_shebang_line, 2),
  [371] = {.count = 1, .reusable = false}, REDUCE(sym_shebang_line, 2),
  [373] = {.count = 1, .reusable = false}, SHIFT(142),
  [375] = {.count = 1, .reusable = false}, SHIFT(143),
  [377] = {.count = 1, .reusable = true}, SHIFT(144),
  [379] = {.count = 1, .reusable = true}, SHIFT(145),
  [381] = {.count = 1, .reusable = false}, SHIFT(146),
  [383] = {.count = 1, .reusable = false}, SHIFT(148),
  [385] = {.count = 1, .reusable = false}, SHIFT(147),
  [387] = {.count = 1, .reusable = false}, SHIFT(159),
  [389] = {.count = 1, .reusable = false}, SHIFT(149),
  [391] = {.count = 1, .reusable = false}, SHIFT(150),
  [393] = {.count = 1, .reusable = false}, SHIFT(151),
  [395] = {.count = 1, .reusable = false}, SHIFT(152),
  [397] = {.count = 1, .reusable = false}, SHIFT(153),
  [399] = {.count = 1, .reusable = false}, SHIFT(154),
  [401] = {.count = 1, .reusable = false}, SHIFT(155),
  [403] = {.count = 1, .reusable = false}, SHIFT(156),
  [405] = {.count = 1, .reusable = false}, SHIFT(157),
  [407] = {.count = 1, .reusable = false}, SHIFT(158),
  [409] = {.count = 1, .reusable = false}, SHIFT(170),
  [411] = {.count = 1, .reusable = false}, SHIFT(160),
  [413] = {.count = 1, .reusable = false}, SHIFT(161),
  [415] = {.count = 1, .reusable = false}, SHIFT(162),
  [417] = {.count = 1, .reusable = false}, SHIFT(163),
  [419] = {.count = 1, .reusable = false}, SHIFT(164),
  [421] = {.count = 1, .reusable = false}, SHIFT(165),
  [423] = {.count = 1, .reusable = false}, SHIFT(166),
  [425] = {.count = 1, .reusable = false}, SHIFT(167),
  [427] = {.count = 1, .reusable = false}, SHIFT(168),
  [429] = {.count = 1, .reusable = false}, SHIFT(169),
  [431] = {.count = 1, .reusable = true}, SHIFT(171),
  [433] = {.count = 1, .reusable = true}, REDUCE(sym_ignore_form, 2),
  [435] = {.count = 1, .reusable = false}, REDUCE(sym_ignore_form, 2),
  [437] = {.count = 1, .reusable = true}, SHIFT(172),
  [439] = {.count = 1, .reusable = false}, SHIFT(173),
  [441] = {.count = 1, .reusable = false}, SHIFT(174),
  [443] = {.count = 1, .reusable = false}, SHIFT(175),
  [445] = {.count = 1, .reusable = false}, SHIFT(176),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym_comment_macro, 2),
  [449] = {.count = 1, .reusable = false}, REDUCE(sym_comment_macro, 2),
  [451] = {.count = 1, .reusable = true}, SHIFT(177),
  [453] = {.count = 1, .reusable = true}, SHIFT(178),
  [455] = {.count = 1, .reusable = false}, SHIFT(179),
  [457] = {.count = 1, .reusable = false}, SHIFT(181),
  [459] = {.count = 1, .reusable = false}, SHIFT(180),
  [461] = {.count = 1, .reusable = false}, SHIFT(183),
  [463] = {.count = 1, .reusable = false}, SHIFT(182),
  [465] = {.count = 1, .reusable = false}, SHIFT(185),
  [467] = {.count = 1, .reusable = false}, SHIFT(184),
  [469] = {.count = 1, .reusable = true}, SHIFT(186),
  [471] = {.count = 1, .reusable = false}, SHIFT(188),
  [473] = {.count = 1, .reusable = false}, SHIFT(187),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym_shorthand_function, 2),
  [477] = {.count = 1, .reusable = false}, REDUCE(sym_shorthand_function, 2),
  [479] = {.count = 1, .reusable = false}, SHIFT(189),
  [481] = {.count = 1, .reusable = false}, SHIFT(190),
  [483] = {.count = 1, .reusable = false}, SHIFT(192),
  [485] = {.count = 1, .reusable = true}, SHIFT(191),
  [487] = {.count = 1, .reusable = true}, SHIFT(192),
  [489] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [491] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(101),
  [494] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [497] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(25),
  [500] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(25),
  [503] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [506] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [509] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [512] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [515] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [518] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [521] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [524] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [527] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [530] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [533] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [536] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [539] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [542] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [545] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(16),
  [548] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [551] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [554] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(19),
  [557] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(20),
  [560] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(21),
  [563] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(22),
  [566] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [569] = {.count = 1, .reusable = true}, SHIFT(193),
  [571] = {.count = 1, .reusable = true}, REDUCE(sym__octal_char, 2),
  [573] = {.count = 1, .reusable = false}, REDUCE(sym__octal_char, 2),
  [575] = {.count = 1, .reusable = true}, REDUCE(sym__string, 3),
  [577] = {.count = 1, .reusable = false}, REDUCE(sym__string, 3),
  [579] = {.count = 1, .reusable = false}, REDUCE(aux_sym__string_repeat1, 2),
  [581] = {.count = 2, .reusable = false}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(105),
  [584] = {.count = 1, .reusable = true}, REDUCE(sym__regex, 3),
  [586] = {.count = 1, .reusable = false}, REDUCE(sym__regex, 3),
  [588] = {.count = 1, .reusable = false}, REDUCE(aux_sym__regex_repeat1, 2),
  [590] = {.count = 2, .reusable = false}, REDUCE(aux_sym__regex_repeat1, 2), SHIFT_REPEAT(107),
  [593] = {.count = 1, .reusable = true}, SHIFT(194),
  [595] = {.count = 1, .reusable = false}, SHIFT(195),
  [597] = {.count = 1, .reusable = true}, REDUCE(sym__quote, 3),
  [599] = {.count = 1, .reusable = false}, REDUCE(sym__quote, 3),
  [601] = {.count = 1, .reusable = true}, SHIFT(196),
  [603] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_symbol, 3),
  [605] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_symbol, 3),
  [607] = {.count = 1, .reusable = true}, SHIFT(197),
  [609] = {.count = 1, .reusable = false}, SHIFT(198),
  [611] = {.count = 1, .reusable = true}, SHIFT(199),
  [613] = {.count = 1, .reusable = true}, REDUCE(sym_function_name, 1),
  [615] = {.count = 1, .reusable = false}, REDUCE(sym_params, 1),
  [617] = {.count = 1, .reusable = true}, REDUCE(sym_params, 1),
  [619] = {.count = 1, .reusable = true}, SHIFT(202),
  [621] = {.count = 1, .reusable = false}, SHIFT(204),
  [623] = {.count = 1, .reusable = true}, REDUCE(sym__single_arity_fn, 1),
  [625] = {.count = 1, .reusable = true}, REDUCE(sym__multi_arity_fn, 1),
  [627] = {.count = 1, .reusable = true}, REDUCE(sym__list, 3),
  [629] = {.count = 1, .reusable = false}, REDUCE(sym__list, 3),
  [631] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(126),
  [634] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(52),
  [637] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(54),
  [640] = {.count = 1, .reusable = true}, SHIFT(206),
  [642] = {.count = 1, .reusable = false}, SHIFT(207),
  [644] = {.count = 1, .reusable = true}, REDUCE(sym__vector, 3),
  [646] = {.count = 1, .reusable = false}, REDUCE(sym__vector, 3),
  [648] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(130),
  [651] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(57),
  [654] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(59),
  [657] = {.count = 1, .reusable = true}, SHIFT(208),
  [659] = {.count = 1, .reusable = false}, SHIFT(209),
  [661] = {.count = 1, .reusable = false}, REDUCE(sym__hash_map_kv_pair, 2),
  [663] = {.count = 1, .reusable = true}, REDUCE(sym__hash_map_kv_pair, 2),
  [665] = {.count = 1, .reusable = true}, REDUCE(sym__hash_map, 3),
  [667] = {.count = 1, .reusable = false}, REDUCE(sym__hash_map, 3),
  [669] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(64),
  [672] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(2),
  [675] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(25),
  [678] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(25),
  [681] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(3),
  [684] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(4),
  [687] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(5),
  [690] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(61),
  [693] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(7),
  [696] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(8),
  [699] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(9),
  [702] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(10),
  [705] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(10),
  [708] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(11),
  [711] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(12),
  [714] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(13),
  [717] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(14),
  [720] = {.count = 1, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2),
  [722] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(15),
  [725] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(16),
  [728] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(17),
  [731] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(18),
  [734] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(19),
  [737] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(63),
  [740] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(21),
  [743] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(22),
  [746] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(23),
  [749] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 3),
  [751] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 3),
  [753] = {.count = 1, .reusable = true}, SHIFT(210),
  [755] = {.count = 1, .reusable = true}, SHIFT(212),
  [757] = {.count = 1, .reusable = false}, SHIFT(213),
  [759] = {.count = 1, .reusable = true}, REDUCE(sym__set, 3),
  [761] = {.count = 1, .reusable = false}, REDUCE(sym__set, 3),
  [763] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(141),
  [766] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(69),
  [769] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(71),
  [772] = {.count = 1, .reusable = false}, SHIFT(214),
  [774] = {.count = 1, .reusable = false}, SHIFT(215),
  [776] = {.count = 1, .reusable = true}, SHIFT(216),
  [778] = {.count = 1, .reusable = true}, REDUCE(sym__paren_sequence, 2),
  [780] = {.count = 1, .reusable = false}, REDUCE(sym__paren_sequence, 2),
  [782] = {.count = 1, .reusable = false}, SHIFT(217),
  [784] = {.count = 1, .reusable = false}, SHIFT(218),
  [786] = {.count = 1, .reusable = false}, SHIFT(219),
  [788] = {.count = 1, .reusable = true}, SHIFT(220),
  [790] = {.count = 1, .reusable = true}, SHIFT(221),
  [792] = {.count = 1, .reusable = false}, SHIFT(222),
  [794] = {.count = 1, .reusable = false}, SHIFT(224),
  [796] = {.count = 1, .reusable = false}, SHIFT(223),
  [798] = {.count = 1, .reusable = false}, SHIFT(226),
  [800] = {.count = 1, .reusable = false}, SHIFT(225),
  [802] = {.count = 1, .reusable = true}, REDUCE(sym__bracket_sequence, 2),
  [804] = {.count = 1, .reusable = false}, REDUCE(sym__bracket_sequence, 2),
  [806] = {.count = 1, .reusable = false}, SHIFT(228),
  [808] = {.count = 1, .reusable = false}, SHIFT(227),
  [810] = {.count = 1, .reusable = true}, SHIFT(229),
  [812] = {.count = 1, .reusable = false}, SHIFT(231),
  [814] = {.count = 1, .reusable = false}, SHIFT(230),
  [816] = {.count = 1, .reusable = false}, SHIFT(232),
  [818] = {.count = 1, .reusable = false}, SHIFT(233),
  [820] = {.count = 1, .reusable = true}, SHIFT(234),
  [822] = {.count = 1, .reusable = true}, SHIFT(235),
  [824] = {.count = 1, .reusable = false}, SHIFT(236),
  [826] = {.count = 1, .reusable = false}, SHIFT(238),
  [828] = {.count = 1, .reusable = false}, SHIFT(237),
  [830] = {.count = 1, .reusable = false}, SHIFT(240),
  [832] = {.count = 1, .reusable = false}, SHIFT(239),
  [834] = {.count = 1, .reusable = false}, SHIFT(242),
  [836] = {.count = 1, .reusable = false}, SHIFT(241),
  [838] = {.count = 1, .reusable = true}, REDUCE(sym__curly_brace_sequence, 2),
  [840] = {.count = 1, .reusable = false}, REDUCE(sym__curly_brace_sequence, 2),
  [842] = {.count = 1, .reusable = true}, SHIFT(243),
  [844] = {.count = 1, .reusable = false}, SHIFT(245),
  [846] = {.count = 1, .reusable = false}, SHIFT(244),
  [848] = {.count = 1, .reusable = false}, SHIFT(246),
  [850] = {.count = 1, .reusable = true}, REDUCE(sym_ignore_form, 3),
  [852] = {.count = 1, .reusable = false}, REDUCE(sym_ignore_form, 3),
  [854] = {.count = 1, .reusable = true}, SHIFT(247),
  [856] = {.count = 1, .reusable = true}, SHIFT(248),
  [858] = {.count = 1, .reusable = false}, REDUCE(aux_sym_ignore_form_repeat1, 2),
  [860] = {.count = 2, .reusable = false}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(174),
  [863] = {.count = 1, .reusable = false}, SHIFT(249),
  [865] = {.count = 1, .reusable = false}, SHIFT(250),
  [867] = {.count = 1, .reusable = true}, SHIFT(251),
  [869] = {.count = 1, .reusable = false}, SHIFT(252),
  [871] = {.count = 1, .reusable = false}, SHIFT(253),
  [873] = {.count = 1, .reusable = false}, SHIFT(254),
  [875] = {.count = 1, .reusable = false}, SHIFT(255),
  [877] = {.count = 1, .reusable = true}, REDUCE(sym_comment_macro, 3),
  [879] = {.count = 1, .reusable = false}, REDUCE(sym_comment_macro, 3),
  [881] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(188),
  [884] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(86),
  [887] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2),
  [889] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(88),
  [892] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(89),
  [895] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(90),
  [898] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(91),
  [901] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(92),
  [904] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(93),
  [907] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(94),
  [910] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(95),
  [913] = {.count = 1, .reusable = true}, SHIFT(256),
  [915] = {.count = 1, .reusable = false}, SHIFT(257),
  [917] = {.count = 1, .reusable = true}, REDUCE(sym_shorthand_function, 3),
  [919] = {.count = 1, .reusable = false}, REDUCE(sym_shorthand_function, 3),
  [921] = {.count = 2, .reusable = false}, REDUCE(aux_sym_shorthand_function_repeat1, 2), SHIFT_REPEAT(192),
  [924] = {.count = 2, .reusable = false}, REDUCE(aux_sym_shorthand_function_repeat1, 2), SHIFT_REPEAT(2),
  [927] = {.count = 2, .reusable = false}, REDUCE(aux_sym_shorthand_function_repeat1, 2), SHIFT_REPEAT(25),
  [930] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_function_repeat1, 2), SHIFT_REPEAT(25),
  [933] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_function_repeat1, 2), SHIFT_REPEAT(3),
  [936] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_function_repeat1, 2), SHIFT_REPEAT(4),
  [939] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_function_repeat1, 2), SHIFT_REPEAT(5),
  [942] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_function_repeat1, 2), SHIFT_REPEAT(97),
  [945] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_function_repeat1, 2), SHIFT_REPEAT(7),
  [948] = {.count = 1, .reusable = true}, REDUCE(aux_sym_shorthand_function_repeat1, 2),
  [950] = {.count = 2, .reusable = false}, REDUCE(aux_sym_shorthand_function_repeat1, 2), SHIFT_REPEAT(8),
  [953] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_function_repeat1, 2), SHIFT_REPEAT(9),
  [956] = {.count = 2, .reusable = false}, REDUCE(aux_sym_shorthand_function_repeat1, 2), SHIFT_REPEAT(10),
  [959] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_function_repeat1, 2), SHIFT_REPEAT(10),
  [962] = {.count = 2, .reusable = false}, REDUCE(aux_sym_shorthand_function_repeat1, 2), SHIFT_REPEAT(11),
  [965] = {.count = 2, .reusable = false}, REDUCE(aux_sym_shorthand_function_repeat1, 2), SHIFT_REPEAT(12),
  [968] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_function_repeat1, 2), SHIFT_REPEAT(13),
  [971] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_function_repeat1, 2), SHIFT_REPEAT(14),
  [974] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_function_repeat1, 2), SHIFT_REPEAT(15),
  [977] = {.count = 2, .reusable = false}, REDUCE(aux_sym_shorthand_function_repeat1, 2), SHIFT_REPEAT(16),
  [980] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_function_repeat1, 2), SHIFT_REPEAT(17),
  [983] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_function_repeat1, 2), SHIFT_REPEAT(18),
  [986] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_function_repeat1, 2), SHIFT_REPEAT(19),
  [989] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_function_repeat1, 2), SHIFT_REPEAT(99),
  [992] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_function_repeat1, 2), SHIFT_REPEAT(21),
  [995] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_function_repeat1, 2), SHIFT_REPEAT(22),
  [998] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_function_repeat1, 2), SHIFT_REPEAT(192),
  [1001] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_function_repeat1, 2), SHIFT_REPEAT(23),
  [1004] = {.count = 1, .reusable = true}, SHIFT(258),
  [1006] = {.count = 1, .reusable = true}, SHIFT(259),
  [1008] = {.count = 1, .reusable = true}, SHIFT(260),
  [1010] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_keyword, 4),
  [1012] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_keyword, 4),
  [1014] = {.count = 1, .reusable = true}, SHIFT(261),
  [1016] = {.count = 1, .reusable = true}, SHIFT(262),
  [1018] = {.count = 1, .reusable = true}, SHIFT(263),
  [1020] = {.count = 1, .reusable = true}, SHIFT(264),
  [1022] = {.count = 1, .reusable = true}, SHIFT(265),
  [1024] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_function, 4),
  [1026] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_function, 4),
  [1028] = {.count = 1, .reusable = true}, REDUCE(sym__single_arity_fn, 2),
  [1030] = {.count = 1, .reusable = true}, REDUCE(sym_function_body, 1),
  [1032] = {.count = 1, .reusable = true}, REDUCE(aux_sym__multi_arity_fn_repeat1, 2),
  [1034] = {.count = 2, .reusable = true}, REDUCE(aux_sym__multi_arity_fn_repeat1, 2), SHIFT_REPEAT(117),
  [1037] = {.count = 1, .reusable = true}, SHIFT(266),
  [1039] = {.count = 1, .reusable = true}, SHIFT(267),
  [1041] = {.count = 1, .reusable = true}, SHIFT(268),
  [1043] = {.count = 1, .reusable = true}, SHIFT(269),
  [1045] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 4),
  [1047] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 4),
  [1049] = {.count = 1, .reusable = true}, SHIFT(270),
  [1051] = {.count = 1, .reusable = true}, SHIFT(271),
  [1053] = {.count = 1, .reusable = true}, SHIFT(272),
  [1055] = {.count = 1, .reusable = true}, SHIFT(273),
  [1057] = {.count = 1, .reusable = true}, REDUCE(sym__paren_sequence, 3),
  [1059] = {.count = 1, .reusable = false}, REDUCE(sym__paren_sequence, 3),
  [1061] = {.count = 1, .reusable = false}, SHIFT(274),
  [1063] = {.count = 1, .reusable = false}, SHIFT(275),
  [1065] = {.count = 1, .reusable = true}, SHIFT(276),
  [1067] = {.count = 1, .reusable = false}, SHIFT(277),
  [1069] = {.count = 1, .reusable = false}, SHIFT(278),
  [1071] = {.count = 1, .reusable = false}, SHIFT(279),
  [1073] = {.count = 1, .reusable = false}, SHIFT(280),
  [1075] = {.count = 1, .reusable = true}, REDUCE(sym__bracket_sequence, 3),
  [1077] = {.count = 1, .reusable = false}, REDUCE(sym__bracket_sequence, 3),
  [1079] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(231),
  [1082] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(149),
  [1085] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(150),
  [1088] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(151),
  [1091] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(152),
  [1094] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(153),
  [1097] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(154),
  [1100] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(155),
  [1103] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(157),
  [1106] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(158),
  [1109] = {.count = 1, .reusable = false}, SHIFT(281),
  [1111] = {.count = 1, .reusable = false}, SHIFT(282),
  [1113] = {.count = 1, .reusable = true}, SHIFT(283),
  [1115] = {.count = 1, .reusable = false}, SHIFT(284),
  [1117] = {.count = 1, .reusable = false}, SHIFT(285),
  [1119] = {.count = 1, .reusable = false}, SHIFT(286),
  [1121] = {.count = 1, .reusable = false}, SHIFT(287),
  [1123] = {.count = 1, .reusable = true}, REDUCE(sym__curly_brace_sequence, 3),
  [1125] = {.count = 1, .reusable = false}, REDUCE(sym__curly_brace_sequence, 3),
  [1127] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(245),
  [1130] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(160),
  [1133] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(161),
  [1136] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(162),
  [1139] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(163),
  [1142] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(164),
  [1145] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(165),
  [1148] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(166),
  [1151] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(167),
  [1154] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(169),
  [1157] = {.count = 1, .reusable = false}, SHIFT(288),
  [1159] = {.count = 1, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2),
  [1161] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(247),
  [1164] = {.count = 1, .reusable = true}, REDUCE(sym_ignore_form, 4),
  [1166] = {.count = 1, .reusable = false}, REDUCE(sym_ignore_form, 4),
  [1168] = {.count = 1, .reusable = true}, SHIFT(289),
  [1170] = {.count = 1, .reusable = false}, SHIFT(290),
  [1172] = {.count = 1, .reusable = true}, SHIFT(291),
  [1174] = {.count = 1, .reusable = true}, SHIFT(292),
  [1176] = {.count = 1, .reusable = true}, SHIFT(293),
  [1178] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(259),
  [1181] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(261),
  [1184] = {.count = 1, .reusable = true}, REDUCE(aux_sym__multi_arity_fn_repeat1, 3),
  [1186] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_function, 5),
  [1188] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_function, 5),
  [1190] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(266),
  [1193] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(268),
  [1196] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 5),
  [1198] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 5),
  [1200] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(271),
  [1203] = {.count = 1, .reusable = true}, SHIFT(294),
  [1205] = {.count = 1, .reusable = false}, SHIFT(295),
  [1207] = {.count = 1, .reusable = true}, SHIFT(296),
  [1209] = {.count = 1, .reusable = false}, SHIFT(297),
  [1211] = {.count = 1, .reusable = true}, REDUCE(sym__curly_brace_sequence, 4),
  [1213] = {.count = 1, .reusable = false}, REDUCE(sym__curly_brace_sequence, 4),
  [1215] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(291),
  [1218] = {.count = 1, .reusable = true}, REDUCE(sym__unicode_char, 5),
  [1220] = {.count = 1, .reusable = false}, REDUCE(sym__unicode_char, 5),
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
