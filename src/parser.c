#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 331
#define SYMBOL_COUNT 128
#define ALIAS_COUNT 0
#define TOKEN_COUNT 60
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
  sym_shorthand_fn_arg = 57,
  anon_sym_defn = 58,
  anon_sym_defn_DASH = 59,
  sym_program = 60,
  sym__anything = 61,
  sym__literal = 62,
  sym__collection_literal = 63,
  sym_boolean = 64,
  sym_number = 65,
  sym__number = 66,
  sym_character = 67,
  sym__character = 68,
  sym__special_char = 69,
  sym__unicode_char = 70,
  sym__octal_char = 71,
  sym__octal_num = 72,
  sym_string = 73,
  sym__string = 74,
  sym_regex = 75,
  sym__regex = 76,
  sym_quote = 77,
  sym__quote = 78,
  sym_keyword = 79,
  sym__keyword = 80,
  sym__unqualified_keyword = 81,
  sym_qualified_keyword = 82,
  sym_symbol = 83,
  sym__symbol = 84,
  sym_threading_macro = 85,
  sym_qualified_symbol = 86,
  sym_list = 87,
  sym__list = 88,
  sym_vector = 89,
  sym__vector = 90,
  sym_hash_map = 91,
  sym__hash_map = 92,
  sym_namespace_map = 93,
  sym__hash_map_kv_pair = 94,
  sym__hash_map_key = 95,
  sym__hash_map_value = 96,
  sym_set = 97,
  sym__set = 98,
  sym_comment = 99,
  sym_semicolon = 100,
  sym_shebang_line = 101,
  sym_ignore_form = 102,
  sym_comment_macro = 103,
  sym__one_form = 104,
  sym__paren_sequence = 105,
  sym__bracket_sequence = 106,
  sym__curly_brace_sequence = 107,
  sym_function = 108,
  sym_anonymous_fn = 109,
  sym__after_the_fn_name = 110,
  sym_function_name = 111,
  sym__single_arity_fn = 112,
  sym__multi_arity_fn = 113,
  sym_function_body = 114,
  sym_params = 115,
  sym_shorthand_fn = 116,
  sym_defn = 117,
  sym_docstring = 118,
  sym_attr_map = 119,
  aux_sym_program_repeat1 = 120,
  aux_sym__string_repeat1 = 121,
  aux_sym__regex_repeat1 = 122,
  aux_sym__hash_map_repeat1 = 123,
  aux_sym_ignore_form_repeat1 = 124,
  aux_sym_comment_macro_repeat1 = 125,
  aux_sym__multi_arity_fn_repeat1 = 126,
  aux_sym_shorthand_fn_repeat1 = 127,
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
  [sym_shorthand_fn_arg] = "shorthand_fn_arg",
  [anon_sym_defn] = "defn",
  [anon_sym_defn_DASH] = "defn-",
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
  [sym_anonymous_fn] = "anonymous_fn",
  [sym__after_the_fn_name] = "_after_the_fn_name",
  [sym_function_name] = "function_name",
  [sym__single_arity_fn] = "_single_arity_fn",
  [sym__multi_arity_fn] = "_multi_arity_fn",
  [sym_function_body] = "function_body",
  [sym_params] = "params",
  [sym_shorthand_fn] = "shorthand_fn",
  [sym_defn] = "defn",
  [sym_docstring] = "docstring",
  [sym_attr_map] = "attr_map",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym__string_repeat1] = "_string_repeat1",
  [aux_sym__regex_repeat1] = "_regex_repeat1",
  [aux_sym__hash_map_repeat1] = "_hash_map_repeat1",
  [aux_sym_ignore_form_repeat1] = "ignore_form_repeat1",
  [aux_sym_comment_macro_repeat1] = "comment_macro_repeat1",
  [aux_sym__multi_arity_fn_repeat1] = "_multi_arity_fn_repeat1",
  [aux_sym_shorthand_fn_repeat1] = "shorthand_fn_repeat1",
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
  [sym_shorthand_fn_arg] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_defn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defn_DASH] = {
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
  [sym_anonymous_fn] = {
    .visible = true,
    .named = true,
  },
  [sym__after_the_fn_name] = {
    .visible = false,
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
  [sym_shorthand_fn] = {
    .visible = true,
    .named = true,
  },
  [sym_defn] = {
    .visible = true,
    .named = true,
  },
  [sym_docstring] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_map] = {
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
  [aux_sym_shorthand_fn_repeat1] = {
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
      if (lookahead == '[')
        ADVANCE(45);
      if (lookahead == '\\')
        ADVANCE(46);
      if (lookahead == ']')
        ADVANCE(47);
      if (lookahead == 'n')
        ADVANCE(48);
      if (lookahead == 'o')
        ADVANCE(57);
      if (lookahead == 'r')
        ADVANCE(58);
      if (lookahead == 's')
        ADVANCE(64);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'u')
        ADVANCE(81);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '}')
        ADVANCE(83);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(88);
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
      ACCEPT_TOKEN(sym_shorthand_fn_arg);
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
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RBRACK);
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
      if (lookahead == 'o')
        ADVANCE(65);
      if (lookahead == 'p')
        ADVANCE(71);
      END_STATE();
    case 65:
      if (lookahead == 'm')
        ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'e')
        ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == '-')
        ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == '>')
        ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_some_DASH_GT);
      if (lookahead == '>')
        ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_some_DASH_GT_GT);
      END_STATE();
    case 71:
      if (lookahead == 'a')
        ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 'c')
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 'e')
        ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_space);
      END_STATE();
    case 75:
      if (lookahead == 'a')
        ADVANCE(76);
      if (lookahead == 'r')
        ADVANCE(78);
      END_STATE();
    case 76:
      if (lookahead == 'b')
        ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_tab);
      END_STATE();
    case 78:
      if (lookahead == 'u')
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 'e')
        ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_number_long);
      if (lookahead == '.')
        ADVANCE(85);
      if (lookahead == '_')
        ADVANCE(86);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(36);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(84);
      END_STATE();
    case 85:
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
    case 86:
      if (lookahead == '_')
        ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == '.')
        ADVANCE(85);
      if (lookahead == '_')
        ADVANCE(86);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(36);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__hex_char);
      END_STATE();
    case 89:
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
        ADVANCE(90);
      if (lookahead == ',')
        SKIP(89);
      if (lookahead == '-')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == '[')
        ADVANCE(45);
      if (lookahead == '\\')
        ADVANCE(46);
      if (lookahead == 'a')
        ADVANCE(94);
      if (lookahead == 'c')
        ADVANCE(98);
      if (lookahead == 'f')
        ADVANCE(105);
      if (lookahead == 'n')
        ADVANCE(110);
      if (lookahead == 's')
        ADVANCE(113);
      if (lookahead == 't')
        ADVANCE(118);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(89);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(92);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(91);
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
        ADVANCE(92);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_number_long);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(91);
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
        ADVANCE(92);
      END_STATE();
    case 92:
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
        ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '>')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(91);
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
        ADVANCE(92);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 's')
        ADVANCE(95);
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
        ADVANCE(92);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '-')
        ADVANCE(96);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(92);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '>')
        ADVANCE(97);
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
        ADVANCE(92);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_as_DASH_GT);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'o')
        ADVANCE(99);
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
        ADVANCE(92);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'n')
        ADVANCE(100);
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
        ADVANCE(92);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'd')
        ADVANCE(101);
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
        ADVANCE(92);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '-')
        ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(92);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '>')
        ADVANCE(103);
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
        ADVANCE(92);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_cond_DASH_GT);
      if (lookahead == '>')
        ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_cond_DASH_GT_GT);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'a')
        ADVANCE(106);
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
        ADVANCE(92);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'l')
        ADVANCE(107);
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
        ADVANCE(92);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 's')
        ADVANCE(108);
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
        ADVANCE(92);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'e')
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
        ADVANCE(92);
      END_STATE();
    case 109:
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
        ADVANCE(92);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'i')
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
        ADVANCE(92);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'l')
        ADVANCE(112);
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
        ADVANCE(92);
      END_STATE();
    case 112:
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
        ADVANCE(92);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'o')
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
        ADVANCE(92);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'm')
        ADVANCE(115);
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
        ADVANCE(92);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'e')
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
        ADVANCE(92);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '-')
        ADVANCE(117);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(92);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '>')
        ADVANCE(69);
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
        ADVANCE(92);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'r')
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
        ADVANCE(92);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'u')
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
        ADVANCE(92);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'e')
        ADVANCE(121);
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
        ADVANCE(92);
      END_STATE();
    case 121:
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
        ADVANCE(92);
      END_STATE();
    case 122:
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
        ADVANCE(90);
      if (lookahead == ',')
        SKIP(122);
      if (lookahead == '-')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == '[')
        ADVANCE(45);
      if (lookahead == '\\')
        ADVANCE(46);
      if (lookahead == ']')
        ADVANCE(47);
      if (lookahead == 'a')
        ADVANCE(94);
      if (lookahead == 'c')
        ADVANCE(98);
      if (lookahead == 'f')
        ADVANCE(105);
      if (lookahead == 'n')
        ADVANCE(110);
      if (lookahead == 's')
        ADVANCE(113);
      if (lookahead == 't')
        ADVANCE(118);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '}')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(122);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(92);
      END_STATE();
    case 123:
      if (lookahead == '\n')
        SKIP(123);
      if (lookahead == ',')
        ADVANCE(124);
      if (lookahead == 'b')
        ADVANCE(125);
      if (lookahead == 'f')
        ADVANCE(134);
      if (lookahead == 'n')
        ADVANCE(142);
      if (lookahead == 'o')
        ADVANCE(57);
      if (lookahead == 'r')
        ADVANCE(143);
      if (lookahead == 's')
        ADVANCE(144);
      if (lookahead == 't')
        ADVANCE(145);
      if (lookahead == 'u')
        ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(124);
      if (lookahead != 0)
        ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__normal_char);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'a')
        ADVANCE(126);
      END_STATE();
    case 126:
      if (lookahead == 'c')
        ADVANCE(127);
      END_STATE();
    case 127:
      if (lookahead == 'k')
        ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == 's')
        ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == 'p')
        ADVANCE(130);
      END_STATE();
    case 130:
      if (lookahead == 'a')
        ADVANCE(131);
      END_STATE();
    case 131:
      if (lookahead == 'c')
        ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == 'e')
        ADVANCE(133);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_backspace);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'o')
        ADVANCE(135);
      END_STATE();
    case 135:
      if (lookahead == 'r')
        ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == 'm')
        ADVANCE(137);
      END_STATE();
    case 137:
      if (lookahead == 'f')
        ADVANCE(138);
      END_STATE();
    case 138:
      if (lookahead == 'e')
        ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead == 'e')
        ADVANCE(140);
      END_STATE();
    case 140:
      if (lookahead == 'd')
        ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_formfeed);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'e')
        ADVANCE(49);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'e')
        ADVANCE(59);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'p')
        ADVANCE(71);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'a')
        ADVANCE(76);
      END_STATE();
    case 146:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(147);
      if (lookahead == '\\')
        ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(147);
      if (lookahead != 0)
        ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 150:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(151);
      if (lookahead == '\\')
        ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(151);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(150);
      if (lookahead != 0)
        ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(149);
      END_STATE();
    case 153:
      if (lookahead == ',')
        SKIP(153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(153);
      if (lookahead == '!' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__keyword_chars);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(154);
      END_STATE();
    case 155:
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
        ADVANCE(90);
      if (lookahead == ',')
        SKIP(155);
      if (lookahead == '-')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(33);
      if (lookahead == '/')
        ADVANCE(41);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == '[')
        ADVANCE(45);
      if (lookahead == '\\')
        ADVANCE(46);
      if (lookahead == ']')
        ADVANCE(47);
      if (lookahead == 'a')
        ADVANCE(94);
      if (lookahead == 'c')
        ADVANCE(98);
      if (lookahead == 'f')
        ADVANCE(105);
      if (lookahead == 'n')
        ADVANCE(110);
      if (lookahead == 's')
        ADVANCE(113);
      if (lookahead == 't')
        ADVANCE(118);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '}')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(155);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(92);
      END_STATE();
    case 156:
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
        ADVANCE(90);
      if (lookahead == ',')
        SKIP(156);
      if (lookahead == '-')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == '[')
        ADVANCE(45);
      if (lookahead == '\\')
        ADVANCE(46);
      if (lookahead == 'a')
        ADVANCE(94);
      if (lookahead == 'c')
        ADVANCE(98);
      if (lookahead == 'd')
        ADVANCE(157);
      if (lookahead == 'f')
        ADVANCE(162);
      if (lookahead == 'n')
        ADVANCE(110);
      if (lookahead == 's')
        ADVANCE(113);
      if (lookahead == 't')
        ADVANCE(118);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(156);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(92);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'e')
        ADVANCE(158);
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
        ADVANCE(92);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'f')
        ADVANCE(159);
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
        ADVANCE(92);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'n')
        ADVANCE(160);
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
        ADVANCE(92);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == '-')
        ADVANCE(161);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(92);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_defn_DASH);
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
        ADVANCE(92);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'a')
        ADVANCE(106);
      if (lookahead == 'n')
        ADVANCE(163);
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
        ADVANCE(92);
      END_STATE();
    case 163:
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
        ADVANCE(92);
      END_STATE();
    case 164:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(13);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(90);
      if (lookahead == ',')
        SKIP(164);
      if (lookahead == '-')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == '[')
        ADVANCE(45);
      if (lookahead == '\\')
        ADVANCE(46);
      if (lookahead == ']')
        ADVANCE(47);
      if (lookahead == 'a')
        ADVANCE(94);
      if (lookahead == 'c')
        ADVANCE(98);
      if (lookahead == 'f')
        ADVANCE(105);
      if (lookahead == 'n')
        ADVANCE(110);
      if (lookahead == 's')
        ADVANCE(113);
      if (lookahead == 't')
        ADVANCE(118);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(164);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(92);
      END_STATE();
    case 165:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(13);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(90);
      if (lookahead == ',')
        SKIP(165);
      if (lookahead == '-')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == '[')
        ADVANCE(45);
      if (lookahead == '\\')
        ADVANCE(46);
      if (lookahead == 'a')
        ADVANCE(94);
      if (lookahead == 'c')
        ADVANCE(98);
      if (lookahead == 'f')
        ADVANCE(105);
      if (lookahead == 'n')
        ADVANCE(110);
      if (lookahead == 's')
        ADVANCE(113);
      if (lookahead == 't')
        ADVANCE(118);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '}')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(165);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(92);
      END_STATE();
    case 166:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(167);
      if (lookahead == '(')
        ADVANCE(168);
      if (lookahead == ')')
        ADVANCE(27);
      if (lookahead == ',')
        SKIP(166);
      if (lookahead == '/')
        ADVANCE(41);
      if (lookahead == '[')
        ADVANCE(45);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(166);
      if (lookahead == '!' ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(92);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ':')
        ADVANCE(7);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == '\n')
        SKIP(169);
      if (lookahead == ',')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(170);
      if (lookahead != 0)
        ADVANCE(171);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == ',')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(171);
      END_STATE();
    case 172:
      if (lookahead == ' ')
        ADVANCE(173);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(174);
      if (lookahead == '(')
        ADVANCE(168);
      if (lookahead == '+')
        ADVANCE(90);
      if (lookahead == ',')
        ADVANCE(175);
      if (lookahead == '-')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(176);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(45);
      if (lookahead == 'a')
        ADVANCE(94);
      if (lookahead == 'c')
        ADVANCE(98);
      if (lookahead == 's')
        ADVANCE(113);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(92);
      if (lookahead != 0)
        ADVANCE(175);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(34);
      END_STATE();
    case 177:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(174);
      if (lookahead == '(')
        ADVANCE(168);
      if (lookahead == ')')
        ADVANCE(27);
      if (lookahead == '+')
        ADVANCE(90);
      if (lookahead == ',')
        ADVANCE(175);
      if (lookahead == '-')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(176);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(45);
      if (lookahead == 'a')
        ADVANCE(94);
      if (lookahead == 'c')
        ADVANCE(98);
      if (lookahead == 's')
        ADVANCE(113);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(92);
      if (lookahead != 0)
        ADVANCE(175);
      END_STATE();
    case 178:
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
        ADVANCE(90);
      if (lookahead == ',')
        SKIP(178);
      if (lookahead == '-')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == '[')
        ADVANCE(45);
      if (lookahead == '\\')
        ADVANCE(46);
      if (lookahead == 'a')
        ADVANCE(94);
      if (lookahead == 'c')
        ADVANCE(98);
      if (lookahead == 'f')
        ADVANCE(105);
      if (lookahead == 'n')
        ADVANCE(110);
      if (lookahead == 's')
        ADVANCE(113);
      if (lookahead == 't')
        ADVANCE(118);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(178);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(92);
      END_STATE();
    case 179:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        SKIP(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(179);
      END_STATE();
    case 180:
      if (lookahead == ',')
        SKIP(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(88);
      END_STATE();
    case 181:
      if (lookahead == ',')
        SKIP(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(181);
      if (('0' <= lookahead && lookahead <= '3'))
        ADVANCE(182);
      if (('4' <= lookahead && lookahead <= '7'))
        ADVANCE(185);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(186);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 187:
      if (lookahead == '(')
        ADVANCE(168);
      if (lookahead == ',')
        SKIP(187);
      if (lookahead == '-')
        ADVANCE(188);
      if (lookahead == '[')
        ADVANCE(45);
      if (lookahead == 'a')
        ADVANCE(94);
      if (lookahead == 'c')
        ADVANCE(98);
      if (lookahead == 's')
        ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(187);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(92);
      END_STATE();
    case 188:
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
        ADVANCE(92);
      END_STATE();
    case 189:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(173);
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
        ADVANCE(90);
      if (lookahead == ',')
        SKIP(189);
      if (lookahead == '-')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == '[')
        ADVANCE(45);
      if (lookahead == '\\')
        ADVANCE(46);
      if (lookahead == ']')
        ADVANCE(47);
      if (lookahead == 'a')
        ADVANCE(94);
      if (lookahead == 'c')
        ADVANCE(98);
      if (lookahead == 'f')
        ADVANCE(105);
      if (lookahead == 'n')
        ADVANCE(110);
      if (lookahead == 's')
        ADVANCE(113);
      if (lookahead == 't')
        ADVANCE(118);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '}')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(189);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(92);
      END_STATE();
    case 190:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(173);
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
        ADVANCE(90);
      if (lookahead == ',')
        SKIP(190);
      if (lookahead == '-')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(33);
      if (lookahead == '/')
        ADVANCE(41);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == '[')
        ADVANCE(45);
      if (lookahead == '\\')
        ADVANCE(46);
      if (lookahead == ']')
        ADVANCE(47);
      if (lookahead == 'a')
        ADVANCE(94);
      if (lookahead == 'c')
        ADVANCE(98);
      if (lookahead == 'f')
        ADVANCE(105);
      if (lookahead == 'n')
        ADVANCE(110);
      if (lookahead == 's')
        ADVANCE(113);
      if (lookahead == 't')
        ADVANCE(118);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '}')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(190);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(92);
      END_STATE();
    case 191:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(174);
      if (lookahead == '(')
        ADVANCE(168);
      if (lookahead == '+')
        ADVANCE(90);
      if (lookahead == ',')
        ADVANCE(175);
      if (lookahead == '-')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(176);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(45);
      if (lookahead == ']')
        ADVANCE(47);
      if (lookahead == 'a')
        ADVANCE(94);
      if (lookahead == 'c')
        ADVANCE(98);
      if (lookahead == 's')
        ADVANCE(113);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(92);
      if (lookahead != 0)
        ADVANCE(175);
      END_STATE();
    case 192:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(174);
      if (lookahead == '(')
        ADVANCE(168);
      if (lookahead == '+')
        ADVANCE(90);
      if (lookahead == ',')
        ADVANCE(175);
      if (lookahead == '-')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(176);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(45);
      if (lookahead == 'a')
        ADVANCE(94);
      if (lookahead == 'c')
        ADVANCE(98);
      if (lookahead == 's')
        ADVANCE(113);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '}')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(92);
      if (lookahead != 0)
        ADVANCE(175);
      END_STATE();
    case 193:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(173);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(13);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(90);
      if (lookahead == ',')
        SKIP(193);
      if (lookahead == '-')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == '[')
        ADVANCE(45);
      if (lookahead == '\\')
        ADVANCE(46);
      if (lookahead == 'a')
        ADVANCE(94);
      if (lookahead == 'c')
        ADVANCE(98);
      if (lookahead == 'f')
        ADVANCE(105);
      if (lookahead == 'n')
        ADVANCE(110);
      if (lookahead == 's')
        ADVANCE(113);
      if (lookahead == 't')
        ADVANCE(118);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(193);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(92);
      END_STATE();
    case 194:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(174);
      if (lookahead == '(')
        ADVANCE(168);
      if (lookahead == ')')
        ADVANCE(27);
      if (lookahead == '+')
        ADVANCE(90);
      if (lookahead == ',')
        ADVANCE(175);
      if (lookahead == '-')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(176);
      if (lookahead == '/')
        ADVANCE(41);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(45);
      if (lookahead == 'a')
        ADVANCE(94);
      if (lookahead == 'c')
        ADVANCE(98);
      if (lookahead == 's')
        ADVANCE(113);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(92);
      if (lookahead != 0)
        ADVANCE(175);
      END_STATE();
    case 195:
      if (lookahead == ' ')
        ADVANCE(173);
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
        ADVANCE(90);
      if (lookahead == ',')
        SKIP(195);
      if (lookahead == '-')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == '[')
        ADVANCE(45);
      if (lookahead == '\\')
        ADVANCE(46);
      if (lookahead == 'a')
        ADVANCE(94);
      if (lookahead == 'c')
        ADVANCE(98);
      if (lookahead == 'f')
        ADVANCE(105);
      if (lookahead == 'n')
        ADVANCE(110);
      if (lookahead == 's')
        ADVANCE(113);
      if (lookahead == 't')
        ADVANCE(118);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(195);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(92);
      END_STATE();
    case 196:
      if (lookahead == ' ')
        ADVANCE(173);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(13);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(90);
      if (lookahead == ',')
        SKIP(196);
      if (lookahead == '-')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == '[')
        ADVANCE(45);
      if (lookahead == '\\')
        ADVANCE(46);
      if (lookahead == ']')
        ADVANCE(47);
      if (lookahead == 'a')
        ADVANCE(94);
      if (lookahead == 'c')
        ADVANCE(98);
      if (lookahead == 'f')
        ADVANCE(105);
      if (lookahead == 'n')
        ADVANCE(110);
      if (lookahead == 's')
        ADVANCE(113);
      if (lookahead == 't')
        ADVANCE(118);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(196);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(92);
      END_STATE();
    case 197:
      if (lookahead == ' ')
        ADVANCE(173);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(13);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(90);
      if (lookahead == ',')
        SKIP(197);
      if (lookahead == '-')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == '[')
        ADVANCE(45);
      if (lookahead == '\\')
        ADVANCE(46);
      if (lookahead == 'a')
        ADVANCE(94);
      if (lookahead == 'c')
        ADVANCE(98);
      if (lookahead == 'f')
        ADVANCE(105);
      if (lookahead == 'n')
        ADVANCE(110);
      if (lookahead == 's')
        ADVANCE(113);
      if (lookahead == 't')
        ADVANCE(118);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '}')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(197);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(92);
      END_STATE();
    case 198:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(174);
      if (lookahead == '(')
        ADVANCE(168);
      if (lookahead == '+')
        ADVANCE(90);
      if (lookahead == ',')
        ADVANCE(175);
      if (lookahead == '-')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(176);
      if (lookahead == '/')
        ADVANCE(41);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(45);
      if (lookahead == ']')
        ADVANCE(47);
      if (lookahead == 'a')
        ADVANCE(94);
      if (lookahead == 'c')
        ADVANCE(98);
      if (lookahead == 's')
        ADVANCE(113);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(92);
      if (lookahead != 0)
        ADVANCE(175);
      END_STATE();
    case 199:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(174);
      if (lookahead == '(')
        ADVANCE(168);
      if (lookahead == '+')
        ADVANCE(90);
      if (lookahead == ',')
        ADVANCE(175);
      if (lookahead == '-')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(176);
      if (lookahead == '/')
        ADVANCE(41);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(45);
      if (lookahead == 'a')
        ADVANCE(94);
      if (lookahead == 'c')
        ADVANCE(98);
      if (lookahead == 's')
        ADVANCE(113);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '}')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(92);
      if (lookahead != 0)
        ADVANCE(175);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 89},
  [2] = {.lex_state = 122},
  [3] = {.lex_state = 123},
  [4] = {.lex_state = 146},
  [5] = {.lex_state = 150},
  [6] = {.lex_state = 89},
  [7] = {.lex_state = 89},
  [8] = {.lex_state = 153},
  [9] = {.lex_state = 153},
  [10] = {.lex_state = 122},
  [11] = {.lex_state = 155},
  [12] = {.lex_state = 156},
  [13] = {.lex_state = 164},
  [14] = {.lex_state = 165},
  [15] = {.lex_state = 165},
  [16] = {.lex_state = 166},
  [17] = {.lex_state = 165},
  [18] = {.lex_state = 169},
  [19] = {.lex_state = 169},
  [20] = {.lex_state = 172},
  [21] = {.lex_state = 177},
  [22] = {.lex_state = 178},
  [23] = {.lex_state = 179},
  [24] = {.lex_state = 122},
  [25] = {.lex_state = 122},
  [26] = {.lex_state = 122},
  [27] = {.lex_state = 122},
  [28] = {.lex_state = 122},
  [29] = {.lex_state = 122},
  [30] = {.lex_state = 122},
  [31] = {.lex_state = 122},
  [32] = {.lex_state = 122},
  [33] = {.lex_state = 122},
  [34] = {.lex_state = 122},
  [35] = {.lex_state = 122},
  [36] = {.lex_state = 122},
  [37] = {.lex_state = 89},
  [38] = {.lex_state = 122},
  [39] = {.lex_state = 180},
  [40] = {.lex_state = 181},
  [41] = {.lex_state = 122},
  [42] = {.lex_state = 146},
  [43] = {.lex_state = 122},
  [44] = {.lex_state = 150},
  [45] = {.lex_state = 122},
  [46] = {.lex_state = 89},
  [47] = {.lex_state = 172},
  [48] = {.lex_state = 156},
  [49] = {.lex_state = 122},
  [50] = {.lex_state = 155},
  [51] = {.lex_state = 166},
  [52] = {.lex_state = 89},
  [53] = {.lex_state = 122},
  [54] = {.lex_state = 172},
  [55] = {.lex_state = 187},
  [56] = {.lex_state = 187},
  [57] = {.lex_state = 178},
  [58] = {.lex_state = 89},
  [59] = {.lex_state = 122},
  [60] = {.lex_state = 172},
  [61] = {.lex_state = 164},
  [62] = {.lex_state = 89},
  [63] = {.lex_state = 122},
  [64] = {.lex_state = 172},
  [65] = {.lex_state = 89},
  [66] = {.lex_state = 165},
  [67] = {.lex_state = 122},
  [68] = {.lex_state = 165},
  [69] = {.lex_state = 89},
  [70] = {.lex_state = 89},
  [71] = {.lex_state = 122},
  [72] = {.lex_state = 172},
  [73] = {.lex_state = 165},
  [74] = {.lex_state = 122},
  [75] = {.lex_state = 122},
  [76] = {.lex_state = 146},
  [77] = {.lex_state = 153},
  [78] = {.lex_state = 153},
  [79] = {.lex_state = 189},
  [80] = {.lex_state = 190},
  [81] = {.lex_state = 177},
  [82] = {.lex_state = 191},
  [83] = {.lex_state = 192},
  [84] = {.lex_state = 89},
  [85] = {.lex_state = 193},
  [86] = {.lex_state = 172},
  [87] = {.lex_state = 146},
  [88] = {.lex_state = 122},
  [89] = {.lex_state = 153},
  [90] = {.lex_state = 153},
  [91] = {.lex_state = 177},
  [92] = {.lex_state = 194},
  [93] = {.lex_state = 177},
  [94] = {.lex_state = 191},
  [95] = {.lex_state = 192},
  [96] = {.lex_state = 89},
  [97] = {.lex_state = 177},
  [98] = {.lex_state = 89},
  [99] = {.lex_state = 122},
  [100] = {.lex_state = 172},
  [101] = {.lex_state = 178},
  [102] = {.lex_state = 89},
  [103] = {.lex_state = 180},
  [104] = {.lex_state = 122},
  [105] = {.lex_state = 122},
  [106] = {.lex_state = 146},
  [107] = {.lex_state = 122},
  [108] = {.lex_state = 150},
  [109] = {.lex_state = 195},
  [110] = {.lex_state = 172},
  [111] = {.lex_state = 122},
  [112] = {.lex_state = 153},
  [113] = {.lex_state = 122},
  [114] = {.lex_state = 195},
  [115] = {.lex_state = 172},
  [116] = {.lex_state = 166},
  [117] = {.lex_state = 166},
  [118] = {.lex_state = 89},
  [119] = {.lex_state = 166},
  [120] = {.lex_state = 166},
  [121] = {.lex_state = 178},
  [122] = {.lex_state = 156},
  [123] = {.lex_state = 166},
  [124] = {.lex_state = 178},
  [125] = {.lex_state = 166},
  [126] = {.lex_state = 166},
  [127] = {.lex_state = 122},
  [128] = {.lex_state = 178},
  [129] = {.lex_state = 196},
  [130] = {.lex_state = 172},
  [131] = {.lex_state = 122},
  [132] = {.lex_state = 164},
  [133] = {.lex_state = 189},
  [134] = {.lex_state = 172},
  [135] = {.lex_state = 165},
  [136] = {.lex_state = 122},
  [137] = {.lex_state = 165},
  [138] = {.lex_state = 122},
  [139] = {.lex_state = 165},
  [140] = {.lex_state = 197},
  [141] = {.lex_state = 172},
  [142] = {.lex_state = 122},
  [143] = {.lex_state = 165},
  [144] = {.lex_state = 189},
  [145] = {.lex_state = 146},
  [146] = {.lex_state = 189},
  [147] = {.lex_state = 190},
  [148] = {.lex_state = 166},
  [149] = {.lex_state = 189},
  [150] = {.lex_state = 177},
  [151] = {.lex_state = 146},
  [152] = {.lex_state = 153},
  [153] = {.lex_state = 153},
  [154] = {.lex_state = 191},
  [155] = {.lex_state = 198},
  [156] = {.lex_state = 177},
  [157] = {.lex_state = 191},
  [158] = {.lex_state = 189},
  [159] = {.lex_state = 192},
  [160] = {.lex_state = 89},
  [161] = {.lex_state = 191},
  [162] = {.lex_state = 146},
  [163] = {.lex_state = 153},
  [164] = {.lex_state = 153},
  [165] = {.lex_state = 192},
  [166] = {.lex_state = 199},
  [167] = {.lex_state = 177},
  [168] = {.lex_state = 191},
  [169] = {.lex_state = 192},
  [170] = {.lex_state = 189},
  [171] = {.lex_state = 89},
  [172] = {.lex_state = 192},
  [173] = {.lex_state = 192},
  [174] = {.lex_state = 193},
  [175] = {.lex_state = 193},
  [176] = {.lex_state = 172},
  [177] = {.lex_state = 177},
  [178] = {.lex_state = 146},
  [179] = {.lex_state = 177},
  [180] = {.lex_state = 194},
  [181] = {.lex_state = 166},
  [182] = {.lex_state = 177},
  [183] = {.lex_state = 177},
  [184] = {.lex_state = 177},
  [185] = {.lex_state = 191},
  [186] = {.lex_state = 177},
  [187] = {.lex_state = 192},
  [188] = {.lex_state = 192},
  [189] = {.lex_state = 122},
  [190] = {.lex_state = 177},
  [191] = {.lex_state = 195},
  [192] = {.lex_state = 172},
  [193] = {.lex_state = 122},
  [194] = {.lex_state = 178},
  [195] = {.lex_state = 180},
  [196] = {.lex_state = 195},
  [197] = {.lex_state = 195},
  [198] = {.lex_state = 122},
  [199] = {.lex_state = 195},
  [200] = {.lex_state = 195},
  [201] = {.lex_state = 166},
  [202] = {.lex_state = 156},
  [203] = {.lex_state = 122},
  [204] = {.lex_state = 156},
  [205] = {.lex_state = 156},
  [206] = {.lex_state = 178},
  [207] = {.lex_state = 166},
  [208] = {.lex_state = 146},
  [209] = {.lex_state = 165},
  [210] = {.lex_state = 165},
  [211] = {.lex_state = 166},
  [212] = {.lex_state = 166},
  [213] = {.lex_state = 166},
  [214] = {.lex_state = 166},
  [215] = {.lex_state = 166},
  [216] = {.lex_state = 156},
  [217] = {.lex_state = 166},
  [218] = {.lex_state = 166},
  [219] = {.lex_state = 196},
  [220] = {.lex_state = 196},
  [221] = {.lex_state = 189},
  [222] = {.lex_state = 189},
  [223] = {.lex_state = 122},
  [224] = {.lex_state = 165},
  [225] = {.lex_state = 197},
  [226] = {.lex_state = 197},
  [227] = {.lex_state = 189},
  [228] = {.lex_state = 153},
  [229] = {.lex_state = 189},
  [230] = {.lex_state = 189},
  [231] = {.lex_state = 191},
  [232] = {.lex_state = 146},
  [233] = {.lex_state = 191},
  [234] = {.lex_state = 198},
  [235] = {.lex_state = 166},
  [236] = {.lex_state = 191},
  [237] = {.lex_state = 177},
  [238] = {.lex_state = 191},
  [239] = {.lex_state = 191},
  [240] = {.lex_state = 191},
  [241] = {.lex_state = 192},
  [242] = {.lex_state = 192},
  [243] = {.lex_state = 189},
  [244] = {.lex_state = 191},
  [245] = {.lex_state = 192},
  [246] = {.lex_state = 146},
  [247] = {.lex_state = 192},
  [248] = {.lex_state = 199},
  [249] = {.lex_state = 166},
  [250] = {.lex_state = 192},
  [251] = {.lex_state = 177},
  [252] = {.lex_state = 192},
  [253] = {.lex_state = 191},
  [254] = {.lex_state = 192},
  [255] = {.lex_state = 192},
  [256] = {.lex_state = 192},
  [257] = {.lex_state = 189},
  [258] = {.lex_state = 192},
  [259] = {.lex_state = 192},
  [260] = {.lex_state = 193},
  [261] = {.lex_state = 193},
  [262] = {.lex_state = 177},
  [263] = {.lex_state = 153},
  [264] = {.lex_state = 177},
  [265] = {.lex_state = 177},
  [266] = {.lex_state = 177},
  [267] = {.lex_state = 177},
  [268] = {.lex_state = 192},
  [269] = {.lex_state = 195},
  [270] = {.lex_state = 195},
  [271] = {.lex_state = 180},
  [272] = {.lex_state = 195},
  [273] = {.lex_state = 195},
  [274] = {.lex_state = 195},
  [275] = {.lex_state = 195},
  [276] = {.lex_state = 166},
  [277] = {.lex_state = 166},
  [278] = {.lex_state = 122},
  [279] = {.lex_state = 166},
  [280] = {.lex_state = 146},
  [281] = {.lex_state = 166},
  [282] = {.lex_state = 165},
  [283] = {.lex_state = 166},
  [284] = {.lex_state = 165},
  [285] = {.lex_state = 89},
  [286] = {.lex_state = 122},
  [287] = {.lex_state = 156},
  [288] = {.lex_state = 166},
  [289] = {.lex_state = 196},
  [290] = {.lex_state = 196},
  [291] = {.lex_state = 189},
  [292] = {.lex_state = 189},
  [293] = {.lex_state = 122},
  [294] = {.lex_state = 197},
  [295] = {.lex_state = 197},
  [296] = {.lex_state = 189},
  [297] = {.lex_state = 191},
  [298] = {.lex_state = 153},
  [299] = {.lex_state = 191},
  [300] = {.lex_state = 191},
  [301] = {.lex_state = 191},
  [302] = {.lex_state = 191},
  [303] = {.lex_state = 192},
  [304] = {.lex_state = 192},
  [305] = {.lex_state = 153},
  [306] = {.lex_state = 192},
  [307] = {.lex_state = 192},
  [308] = {.lex_state = 192},
  [309] = {.lex_state = 192},
  [310] = {.lex_state = 192},
  [311] = {.lex_state = 189},
  [312] = {.lex_state = 177},
  [313] = {.lex_state = 177},
  [314] = {.lex_state = 195},
  [315] = {.lex_state = 195},
  [316] = {.lex_state = 122},
  [317] = {.lex_state = 166},
  [318] = {.lex_state = 166},
  [319] = {.lex_state = 166},
  [320] = {.lex_state = 165},
  [321] = {.lex_state = 122},
  [322] = {.lex_state = 156},
  [323] = {.lex_state = 191},
  [324] = {.lex_state = 191},
  [325] = {.lex_state = 192},
  [326] = {.lex_state = 192},
  [327] = {.lex_state = 166},
  [328] = {.lex_state = 165},
  [329] = {.lex_state = 122},
  [330] = {.lex_state = 166},
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
    [sym_shorthand_fn_arg] = ACTIONS(1),
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
    [sym_function] = STATE(37),
    [sym_anonymous_fn] = STATE(36),
    [sym_shorthand_fn] = STATE(36),
    [sym_defn] = STATE(36),
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
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(57),
    [sym_nil] = ACTIONS(59),
    [sym_true] = ACTIONS(59),
    [sym_false] = ACTIONS(59),
    [sym_number_long] = ACTIONS(59),
    [sym_number_double] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_LPARENquote] = ACTIONS(57),
    [anon_sym_RPAREN] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(57),
    [anon_sym_DASH_GT] = ACTIONS(59),
    [anon_sym_DASH_GT_GT] = ACTIONS(57),
    [anon_sym_as_DASH_GT] = ACTIONS(57),
    [anon_sym_some_DASH_GT] = ACTIONS(59),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(57),
    [anon_sym_cond_DASH_GT] = ACTIONS(59),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(57),
    [sym__symbol_chars] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_RBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(59),
    [anon_sym_POUND_LBRACE] = ACTIONS(57),
    [anon_sym_SEMI] = ACTIONS(57),
    [anon_sym_POUND_BANG] = ACTIONS(57),
    [anon_sym_POUND_] = ACTIONS(57),
    [anon_sym_LPARENcomment] = ACTIONS(57),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_fn_arg] = ACTIONS(57),
  },
  [3] = {
    [sym__special_char] = STATE(38),
    [sym__unicode_char] = STATE(38),
    [sym__octal_char] = STATE(38),
    [sym__normal_char] = ACTIONS(61),
    [anon_sym_newline] = ACTIONS(61),
    [anon_sym_space] = ACTIONS(61),
    [anon_sym_tab] = ACTIONS(61),
    [anon_sym_formfeed] = ACTIONS(61),
    [anon_sym_backspace] = ACTIONS(61),
    [anon_sym_return] = ACTIONS(61),
    [anon_sym_u] = ACTIONS(63),
    [anon_sym_o] = ACTIONS(65),
  },
  [4] = {
    [aux_sym__string_repeat1] = STATE(42),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(69),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(69),
  },
  [5] = {
    [aux_sym__regex_repeat1] = STATE(44),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(73),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(73),
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
    [sym_function] = STATE(45),
    [sym_anonymous_fn] = STATE(36),
    [sym_shorthand_fn] = STATE(36),
    [sym_defn] = STATE(36),
    [sym_nil] = ACTIONS(75),
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
    [sym_function] = STATE(48),
    [sym_anonymous_fn] = STATE(36),
    [sym_shorthand_fn] = STATE(36),
    [sym_defn] = STATE(36),
    [sym_nil] = ACTIONS(77),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(79),
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
    [anon_sym_POUND_] = ACTIONS(81),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
  },
  [8] = {
    [sym__keyword_chars] = ACTIONS(83),
  },
  [9] = {
    [sym__keyword_chars] = ACTIONS(85),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym_nil] = ACTIONS(89),
    [sym_true] = ACTIONS(89),
    [sym_false] = ACTIONS(89),
    [sym_number_long] = ACTIONS(89),
    [sym_number_double] = ACTIONS(87),
    [anon_sym_BSLASH] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [anon_sym_POUND_DQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [anon_sym_LPARENquote] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(87),
    [anon_sym_COLON] = ACTIONS(89),
    [anon_sym_COLON_COLON] = ACTIONS(87),
    [anon_sym_DASH_GT] = ACTIONS(89),
    [anon_sym_DASH_GT_GT] = ACTIONS(87),
    [anon_sym_as_DASH_GT] = ACTIONS(87),
    [anon_sym_some_DASH_GT] = ACTIONS(89),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(87),
    [anon_sym_cond_DASH_GT] = ACTIONS(89),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(87),
    [sym__symbol_chars] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(87),
    [anon_sym_RBRACE] = ACTIONS(87),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(87),
    [anon_sym_POUND] = ACTIONS(89),
    [anon_sym_POUND_LBRACE] = ACTIONS(87),
    [anon_sym_SEMI] = ACTIONS(87),
    [anon_sym_POUND_BANG] = ACTIONS(87),
    [anon_sym_POUND_] = ACTIONS(87),
    [anon_sym_LPARENcomment] = ACTIONS(87),
    [anon_sym_POUND_LPAREN] = ACTIONS(87),
    [sym_shorthand_fn_arg] = ACTIONS(87),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [sym_nil] = ACTIONS(93),
    [sym_true] = ACTIONS(93),
    [sym_false] = ACTIONS(93),
    [sym_number_long] = ACTIONS(93),
    [sym_number_double] = ACTIONS(91),
    [anon_sym_BSLASH] = ACTIONS(91),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_POUND_DQUOTE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_LPARENquote] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_COLON_COLON] = ACTIONS(91),
    [anon_sym_SLASH] = ACTIONS(95),
    [anon_sym_DASH_GT] = ACTIONS(93),
    [anon_sym_DASH_GT_GT] = ACTIONS(91),
    [anon_sym_as_DASH_GT] = ACTIONS(91),
    [anon_sym_some_DASH_GT] = ACTIONS(93),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(91),
    [anon_sym_cond_DASH_GT] = ACTIONS(93),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(91),
    [sym__symbol_chars] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_RBRACK] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(91),
    [anon_sym_POUND] = ACTIONS(93),
    [anon_sym_POUND_LBRACE] = ACTIONS(91),
    [anon_sym_SEMI] = ACTIONS(91),
    [anon_sym_POUND_BANG] = ACTIONS(91),
    [anon_sym_POUND_] = ACTIONS(91),
    [anon_sym_LPARENcomment] = ACTIONS(91),
    [anon_sym_POUND_LPAREN] = ACTIONS(91),
    [sym_shorthand_fn_arg] = ACTIONS(91),
  },
  [12] = {
    [sym__anything] = STATE(57),
    [sym__literal] = STATE(57),
    [sym__collection_literal] = STATE(57),
    [sym_boolean] = STATE(57),
    [sym_number] = STATE(57),
    [sym__number] = STATE(24),
    [sym_character] = STATE(57),
    [sym__character] = STATE(25),
    [sym_string] = STATE(57),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(57),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(57),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(57),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(57),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(57),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(57),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(57),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym_set] = STATE(57),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(57),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_function] = STATE(57),
    [sym_anonymous_fn] = STATE(36),
    [sym_shorthand_fn] = STATE(36),
    [sym_defn] = STATE(36),
    [aux_sym_program_repeat1] = STATE(57),
    [sym_nil] = ACTIONS(97),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(101),
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
    [anon_sym_POUND_] = ACTIONS(103),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_fn] = ACTIONS(105),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [anon_sym_defn] = ACTIONS(107),
    [anon_sym_defn_DASH] = ACTIONS(107),
  },
  [13] = {
    [sym__anything] = STATE(61),
    [sym__literal] = STATE(61),
    [sym__collection_literal] = STATE(61),
    [sym_boolean] = STATE(61),
    [sym_number] = STATE(61),
    [sym__number] = STATE(24),
    [sym_character] = STATE(61),
    [sym__character] = STATE(25),
    [sym_string] = STATE(61),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(61),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(61),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(61),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(61),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(61),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(61),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(61),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym_set] = STATE(61),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(61),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_function] = STATE(61),
    [sym_anonymous_fn] = STATE(36),
    [sym_shorthand_fn] = STATE(36),
    [sym_defn] = STATE(36),
    [aux_sym_program_repeat1] = STATE(61),
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
  },
  [14] = {
    [sym__anything] = STATE(65),
    [sym__literal] = STATE(65),
    [sym__collection_literal] = STATE(65),
    [sym_boolean] = STATE(65),
    [sym_number] = STATE(65),
    [sym__number] = STATE(24),
    [sym_character] = STATE(65),
    [sym__character] = STATE(25),
    [sym_string] = STATE(65),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(65),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(65),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(65),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(65),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(65),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(65),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(65),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym__hash_map_kv_pair] = STATE(66),
    [sym__hash_map_key] = STATE(65),
    [sym_set] = STATE(65),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(65),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_function] = STATE(65),
    [sym_anonymous_fn] = STATE(36),
    [sym_shorthand_fn] = STATE(36),
    [sym_defn] = STATE(36),
    [aux_sym__hash_map_repeat1] = STATE(66),
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
  },
  [15] = {
    [sym__anything] = STATE(65),
    [sym__literal] = STATE(65),
    [sym__collection_literal] = STATE(65),
    [sym_boolean] = STATE(65),
    [sym_number] = STATE(65),
    [sym__number] = STATE(24),
    [sym_character] = STATE(65),
    [sym__character] = STATE(25),
    [sym_string] = STATE(65),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(65),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(65),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(65),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(65),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(65),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(65),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(65),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym__hash_map_kv_pair] = STATE(68),
    [sym__hash_map_key] = STATE(65),
    [sym_set] = STATE(65),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(65),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_function] = STATE(65),
    [sym_anonymous_fn] = STATE(36),
    [sym_shorthand_fn] = STATE(36),
    [sym_defn] = STATE(36),
    [aux_sym__hash_map_repeat1] = STATE(68),
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
  },
  [16] = {
    [sym__symbol_chars] = ACTIONS(127),
  },
  [17] = {
    [sym__anything] = STATE(73),
    [sym__literal] = STATE(73),
    [sym__collection_literal] = STATE(73),
    [sym_boolean] = STATE(73),
    [sym_number] = STATE(73),
    [sym__number] = STATE(24),
    [sym_character] = STATE(73),
    [sym__character] = STATE(25),
    [sym_string] = STATE(73),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(73),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(73),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(73),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(73),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(73),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(73),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(73),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym_set] = STATE(73),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(73),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_function] = STATE(73),
    [sym_anonymous_fn] = STATE(36),
    [sym_shorthand_fn] = STATE(36),
    [sym_defn] = STATE(36),
    [aux_sym_program_repeat1] = STATE(73),
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
  },
  [18] = {
    [aux_sym_SLASH_DOT_STAR_SLASH] = ACTIONS(137),
  },
  [19] = {
    [aux_sym_SLASH_DOT_STAR_SLASH] = ACTIONS(139),
  },
  [20] = {
    [sym__number] = STATE(85),
    [sym__string] = STATE(85),
    [sym__keyword] = STATE(85),
    [sym__unqualified_keyword] = STATE(85),
    [sym_qualified_keyword] = STATE(85),
    [sym__symbol] = STATE(85),
    [sym_threading_macro] = STATE(85),
    [sym_qualified_symbol] = STATE(85),
    [sym__one_form] = STATE(85),
    [sym__paren_sequence] = STATE(85),
    [sym__bracket_sequence] = STATE(85),
    [sym__curly_brace_sequence] = STATE(85),
    [aux_sym_ignore_form_repeat1] = STATE(86),
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
    [sym__number] = STATE(97),
    [sym__string] = STATE(97),
    [sym__keyword] = STATE(97),
    [sym__unqualified_keyword] = STATE(97),
    [sym_qualified_keyword] = STATE(97),
    [sym__symbol] = STATE(97),
    [sym_threading_macro] = STATE(97),
    [sym_qualified_symbol] = STATE(97),
    [sym__one_form] = STATE(97),
    [sym__paren_sequence] = STATE(97),
    [sym__bracket_sequence] = STATE(97),
    [sym__curly_brace_sequence] = STATE(97),
    [aux_sym_comment_macro_repeat1] = STATE(97),
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
    [sym__anything] = STATE(101),
    [sym__literal] = STATE(101),
    [sym__collection_literal] = STATE(101),
    [sym_boolean] = STATE(101),
    [sym_number] = STATE(101),
    [sym__number] = STATE(24),
    [sym_character] = STATE(101),
    [sym__character] = STATE(25),
    [sym_string] = STATE(101),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(101),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(101),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(101),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(101),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(101),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(101),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(101),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym_set] = STATE(101),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(101),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_function] = STATE(101),
    [sym_anonymous_fn] = STATE(36),
    [sym_shorthand_fn] = STATE(36),
    [sym_defn] = STATE(36),
    [aux_sym_shorthand_fn_repeat1] = STATE(101),
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
    [sym_shorthand_fn_arg] = ACTIONS(193),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(195),
  },
  [24] = {
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
    [anon_sym_DASH_GT] = ACTIONS(199),
    [anon_sym_DASH_GT_GT] = ACTIONS(197),
    [anon_sym_as_DASH_GT] = ACTIONS(197),
    [anon_sym_some_DASH_GT] = ACTIONS(199),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(197),
    [anon_sym_cond_DASH_GT] = ACTIONS(199),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(197),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(197),
    [sym_shorthand_fn_arg] = ACTIONS(197),
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
    [sym_shorthand_fn_arg] = ACTIONS(201),
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
    [sym_shorthand_fn_arg] = ACTIONS(205),
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
    [sym_shorthand_fn_arg] = ACTIONS(209),
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
    [sym_shorthand_fn_arg] = ACTIONS(213),
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
    [sym_shorthand_fn_arg] = ACTIONS(217),
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
    [sym_shorthand_fn_arg] = ACTIONS(221),
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
    [sym_shorthand_fn_arg] = ACTIONS(225),
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
    [sym_shorthand_fn_arg] = ACTIONS(229),
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
    [sym_shorthand_fn_arg] = ACTIONS(233),
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
    [sym_shorthand_fn_arg] = ACTIONS(237),
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
    [sym_shorthand_fn_arg] = ACTIONS(241),
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
    [sym_shorthand_fn_arg] = ACTIONS(245),
  },
  [37] = {
    [sym__anything] = STATE(102),
    [sym__literal] = STATE(102),
    [sym__collection_literal] = STATE(102),
    [sym_boolean] = STATE(102),
    [sym_number] = STATE(102),
    [sym__number] = STATE(24),
    [sym_character] = STATE(102),
    [sym__character] = STATE(25),
    [sym_string] = STATE(102),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(102),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(102),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(102),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(102),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(102),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(102),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(102),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym_set] = STATE(102),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(102),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_function] = STATE(102),
    [sym_anonymous_fn] = STATE(36),
    [sym_shorthand_fn] = STATE(36),
    [sym_defn] = STATE(36),
    [aux_sym_program_repeat1] = STATE(102),
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
    [sym_shorthand_fn_arg] = ACTIONS(253),
  },
  [39] = {
    [sym__hex_char] = ACTIONS(257),
  },
  [40] = {
    [sym__octal_num] = STATE(104),
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
    [sym_shorthand_fn_arg] = ACTIONS(263),
  },
  [42] = {
    [aux_sym__string_repeat1] = STATE(106),
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
    [sym_shorthand_fn_arg] = ACTIONS(271),
  },
  [44] = {
    [aux_sym__regex_repeat1] = STATE(108),
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
    [sym_shorthand_fn_arg] = ACTIONS(279),
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
    [sym_function] = STATE(45),
    [sym_anonymous_fn] = STATE(36),
    [sym_shorthand_fn] = STATE(36),
    [sym_defn] = STATE(36),
    [sym_nil] = ACTIONS(75),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(79),
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
    [anon_sym_POUND_] = ACTIONS(81),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
  },
  [47] = {
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
    [sym_shorthand_fn_arg] = ACTIONS(289),
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
    [sym_shorthand_fn_arg] = ACTIONS(293),
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
    [sym_function] = STATE(45),
    [sym_anonymous_fn] = STATE(36),
    [sym_shorthand_fn] = STATE(36),
    [sym_defn] = STATE(36),
    [sym_nil] = ACTIONS(75),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(99),
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
    [anon_sym_POUND_] = ACTIONS(103),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
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
    [sym_shorthand_fn_arg] = ACTIONS(301),
  },
  [54] = {
    [sym__number] = STATE(114),
    [sym__string] = STATE(114),
    [sym__keyword] = STATE(114),
    [sym__unqualified_keyword] = STATE(114),
    [sym_qualified_keyword] = STATE(114),
    [sym__symbol] = STATE(114),
    [sym_threading_macro] = STATE(114),
    [sym_qualified_symbol] = STATE(114),
    [sym__one_form] = STATE(114),
    [sym__paren_sequence] = STATE(114),
    [sym__bracket_sequence] = STATE(114),
    [sym__curly_brace_sequence] = STATE(114),
    [aux_sym_ignore_form_repeat1] = STATE(115),
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
    [sym_symbol] = STATE(119),
    [sym__symbol] = STATE(120),
    [sym_threading_macro] = STATE(120),
    [sym_qualified_symbol] = STATE(120),
    [sym_vector] = STATE(121),
    [sym__vector] = STATE(32),
    [sym__after_the_fn_name] = STATE(122),
    [sym_function_name] = STATE(123),
    [sym__single_arity_fn] = STATE(122),
    [sym__multi_arity_fn] = STATE(122),
    [sym_params] = STATE(124),
    [aux_sym__multi_arity_fn_repeat1] = STATE(125),
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
    [sym_symbol] = STATE(119),
    [sym__symbol] = STATE(120),
    [sym_threading_macro] = STATE(120),
    [sym_qualified_symbol] = STATE(120),
    [sym_function_name] = STATE(126),
    [anon_sym_DASH_GT] = ACTIONS(309),
    [anon_sym_DASH_GT_GT] = ACTIONS(311),
    [anon_sym_as_DASH_GT] = ACTIONS(311),
    [anon_sym_some_DASH_GT] = ACTIONS(309),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(311),
    [anon_sym_cond_DASH_GT] = ACTIONS(309),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(311),
    [sym__symbol_chars] = ACTIONS(313),
  },
  [57] = {
    [sym__anything] = STATE(128),
    [sym__literal] = STATE(128),
    [sym__collection_literal] = STATE(128),
    [sym_boolean] = STATE(128),
    [sym_number] = STATE(128),
    [sym__number] = STATE(24),
    [sym_character] = STATE(128),
    [sym__character] = STATE(25),
    [sym_string] = STATE(128),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(128),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(128),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(128),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(128),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(128),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(128),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(128),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym_set] = STATE(128),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(128),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_function] = STATE(128),
    [sym_anonymous_fn] = STATE(36),
    [sym_shorthand_fn] = STATE(36),
    [sym_defn] = STATE(36),
    [aux_sym_program_repeat1] = STATE(128),
    [sym_nil] = ACTIONS(317),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(99),
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
    [anon_sym_POUND_] = ACTIONS(103),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
  },
  [58] = {
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
    [sym_function] = STATE(45),
    [sym_anonymous_fn] = STATE(36),
    [sym_shorthand_fn] = STATE(36),
    [sym_defn] = STATE(36),
    [sym_nil] = ACTIONS(75),
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
  },
  [59] = {
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
    [sym_shorthand_fn_arg] = ACTIONS(321),
  },
  [60] = {
    [sym__number] = STATE(129),
    [sym__string] = STATE(129),
    [sym__keyword] = STATE(129),
    [sym__unqualified_keyword] = STATE(129),
    [sym_qualified_keyword] = STATE(129),
    [sym__symbol] = STATE(129),
    [sym_threading_macro] = STATE(129),
    [sym_qualified_symbol] = STATE(129),
    [sym__one_form] = STATE(129),
    [sym__paren_sequence] = STATE(129),
    [sym__bracket_sequence] = STATE(129),
    [sym__curly_brace_sequence] = STATE(129),
    [aux_sym_ignore_form_repeat1] = STATE(130),
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
  [61] = {
    [sym__anything] = STATE(132),
    [sym__literal] = STATE(132),
    [sym__collection_literal] = STATE(132),
    [sym_boolean] = STATE(132),
    [sym_number] = STATE(132),
    [sym__number] = STATE(24),
    [sym_character] = STATE(132),
    [sym__character] = STATE(25),
    [sym_string] = STATE(132),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(132),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(132),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(132),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(132),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(132),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(132),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(132),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym_set] = STATE(132),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(132),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_function] = STATE(132),
    [sym_anonymous_fn] = STATE(36),
    [sym_shorthand_fn] = STATE(36),
    [sym_defn] = STATE(36),
    [aux_sym_program_repeat1] = STATE(132),
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
  },
  [62] = {
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
    [sym_function] = STATE(45),
    [sym_anonymous_fn] = STATE(36),
    [sym_shorthand_fn] = STATE(36),
    [sym_defn] = STATE(36),
    [sym_nil] = ACTIONS(75),
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
  },
  [63] = {
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
    [sym_shorthand_fn_arg] = ACTIONS(333),
  },
  [64] = {
    [sym__number] = STATE(133),
    [sym__string] = STATE(133),
    [sym__keyword] = STATE(133),
    [sym__unqualified_keyword] = STATE(133),
    [sym_qualified_keyword] = STATE(133),
    [sym__symbol] = STATE(133),
    [sym_threading_macro] = STATE(133),
    [sym_qualified_symbol] = STATE(133),
    [sym__one_form] = STATE(133),
    [sym__paren_sequence] = STATE(133),
    [sym__bracket_sequence] = STATE(133),
    [sym__curly_brace_sequence] = STATE(133),
    [aux_sym_ignore_form_repeat1] = STATE(134),
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
  [65] = {
    [sym__anything] = STATE(135),
    [sym__literal] = STATE(135),
    [sym__collection_literal] = STATE(135),
    [sym_boolean] = STATE(135),
    [sym_number] = STATE(135),
    [sym__number] = STATE(24),
    [sym_character] = STATE(135),
    [sym__character] = STATE(25),
    [sym_string] = STATE(135),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(135),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(135),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(135),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(135),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(135),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(135),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(135),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym__hash_map_value] = STATE(135),
    [sym_set] = STATE(135),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(135),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_function] = STATE(135),
    [sym_anonymous_fn] = STATE(36),
    [sym_shorthand_fn] = STATE(36),
    [sym_defn] = STATE(36),
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
  },
  [66] = {
    [sym__anything] = STATE(65),
    [sym__literal] = STATE(65),
    [sym__collection_literal] = STATE(65),
    [sym_boolean] = STATE(65),
    [sym_number] = STATE(65),
    [sym__number] = STATE(24),
    [sym_character] = STATE(65),
    [sym__character] = STATE(25),
    [sym_string] = STATE(65),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(65),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(65),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(65),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(65),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(65),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(65),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(65),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym__hash_map_kv_pair] = STATE(137),
    [sym__hash_map_key] = STATE(65),
    [sym_set] = STATE(65),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(65),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_function] = STATE(65),
    [sym_anonymous_fn] = STATE(36),
    [sym_shorthand_fn] = STATE(36),
    [sym_defn] = STATE(36),
    [aux_sym__hash_map_repeat1] = STATE(137),
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
  },
  [67] = {
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
    [sym_shorthand_fn_arg] = ACTIONS(345),
  },
  [68] = {
    [sym__anything] = STATE(65),
    [sym__literal] = STATE(65),
    [sym__collection_literal] = STATE(65),
    [sym_boolean] = STATE(65),
    [sym_number] = STATE(65),
    [sym__number] = STATE(24),
    [sym_character] = STATE(65),
    [sym__character] = STATE(25),
    [sym_string] = STATE(65),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(65),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(65),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(65),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(65),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(65),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(65),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(65),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym__hash_map_kv_pair] = STATE(137),
    [sym__hash_map_key] = STATE(65),
    [sym_set] = STATE(65),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(65),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_function] = STATE(65),
    [sym_anonymous_fn] = STATE(36),
    [sym_shorthand_fn] = STATE(36),
    [sym_defn] = STATE(36),
    [aux_sym__hash_map_repeat1] = STATE(137),
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
  },
  [69] = {
    [anon_sym_LBRACE] = ACTIONS(351),
  },
  [70] = {
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
    [sym_function] = STATE(45),
    [sym_anonymous_fn] = STATE(36),
    [sym_shorthand_fn] = STATE(36),
    [sym_defn] = STATE(36),
    [sym_nil] = ACTIONS(75),
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
  },
  [71] = {
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
    [sym_shorthand_fn_arg] = ACTIONS(353),
  },
  [72] = {
    [sym__number] = STATE(140),
    [sym__string] = STATE(140),
    [sym__keyword] = STATE(140),
    [sym__unqualified_keyword] = STATE(140),
    [sym_qualified_keyword] = STATE(140),
    [sym__symbol] = STATE(140),
    [sym_threading_macro] = STATE(140),
    [sym_qualified_symbol] = STATE(140),
    [sym__one_form] = STATE(140),
    [sym__paren_sequence] = STATE(140),
    [sym__bracket_sequence] = STATE(140),
    [sym__curly_brace_sequence] = STATE(140),
    [aux_sym_ignore_form_repeat1] = STATE(141),
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
  [73] = {
    [sym__anything] = STATE(143),
    [sym__literal] = STATE(143),
    [sym__collection_literal] = STATE(143),
    [sym_boolean] = STATE(143),
    [sym_number] = STATE(143),
    [sym__number] = STATE(24),
    [sym_character] = STATE(143),
    [sym__character] = STATE(25),
    [sym_string] = STATE(143),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(143),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(143),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(143),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(143),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(143),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(143),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(143),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym_set] = STATE(143),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(143),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_function] = STATE(143),
    [sym_anonymous_fn] = STATE(36),
    [sym_shorthand_fn] = STATE(36),
    [sym_defn] = STATE(36),
    [aux_sym_program_repeat1] = STATE(143),
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
  },
  [74] = {
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
    [sym_shorthand_fn_arg] = ACTIONS(365),
  },
  [75] = {
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
    [sym_shorthand_fn_arg] = ACTIONS(369),
  },
  [76] = {
    [aux_sym__string_repeat1] = STATE(145),
    [anon_sym_DQUOTE] = ACTIONS(373),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(375),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(375),
  },
  [77] = {
    [sym__keyword_chars] = ACTIONS(377),
  },
  [78] = {
    [sym__keyword_chars] = ACTIONS(379),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym_nil] = ACTIONS(89),
    [sym_true] = ACTIONS(89),
    [sym_false] = ACTIONS(89),
    [sym_number_long] = ACTIONS(89),
    [sym_number_double] = ACTIONS(89),
    [anon_sym_BSLASH] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [anon_sym_POUND_DQUOTE] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [anon_sym_LPARENquote] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(89),
    [anon_sym_COLON] = ACTIONS(89),
    [anon_sym_COLON_COLON] = ACTIONS(89),
    [anon_sym_DASH_GT] = ACTIONS(89),
    [anon_sym_DASH_GT_GT] = ACTIONS(89),
    [anon_sym_as_DASH_GT] = ACTIONS(89),
    [anon_sym_some_DASH_GT] = ACTIONS(89),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(89),
    [anon_sym_cond_DASH_GT] = ACTIONS(89),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(89),
    [sym__symbol_chars] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(89),
    [anon_sym_POUND] = ACTIONS(89),
    [anon_sym_POUND_LBRACE] = ACTIONS(89),
    [anon_sym_SEMI] = ACTIONS(89),
    [anon_sym_POUND_BANG] = ACTIONS(89),
    [anon_sym_POUND_] = ACTIONS(89),
    [anon_sym_] = ACTIONS(87),
    [anon_sym_LPARENcomment] = ACTIONS(89),
    [anon_sym_POUND_LPAREN] = ACTIONS(89),
    [sym_shorthand_fn_arg] = ACTIONS(89),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [sym_nil] = ACTIONS(93),
    [sym_true] = ACTIONS(93),
    [sym_false] = ACTIONS(93),
    [sym_number_long] = ACTIONS(93),
    [sym_number_double] = ACTIONS(93),
    [anon_sym_BSLASH] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_POUND_DQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_LPARENquote] = ACTIONS(93),
    [anon_sym_RPAREN] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_COLON_COLON] = ACTIONS(93),
    [anon_sym_SLASH] = ACTIONS(381),
    [anon_sym_DASH_GT] = ACTIONS(93),
    [anon_sym_DASH_GT_GT] = ACTIONS(93),
    [anon_sym_as_DASH_GT] = ACTIONS(93),
    [anon_sym_some_DASH_GT] = ACTIONS(93),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(93),
    [anon_sym_cond_DASH_GT] = ACTIONS(93),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(93),
    [sym__symbol_chars] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_RBRACE] = ACTIONS(93),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(93),
    [anon_sym_POUND] = ACTIONS(93),
    [anon_sym_POUND_LBRACE] = ACTIONS(93),
    [anon_sym_SEMI] = ACTIONS(93),
    [anon_sym_POUND_BANG] = ACTIONS(93),
    [anon_sym_POUND_] = ACTIONS(93),
    [anon_sym_] = ACTIONS(91),
    [anon_sym_LPARENcomment] = ACTIONS(93),
    [anon_sym_POUND_LPAREN] = ACTIONS(93),
    [sym_shorthand_fn_arg] = ACTIONS(93),
  },
  [81] = {
    [sym__number] = STATE(150),
    [sym__string] = STATE(150),
    [sym__keyword] = STATE(150),
    [sym__unqualified_keyword] = STATE(150),
    [sym_qualified_keyword] = STATE(150),
    [sym__symbol] = STATE(150),
    [sym_threading_macro] = STATE(150),
    [sym_qualified_symbol] = STATE(150),
    [sym__one_form] = STATE(150),
    [sym__paren_sequence] = STATE(150),
    [sym__bracket_sequence] = STATE(150),
    [sym__curly_brace_sequence] = STATE(150),
    [aux_sym_comment_macro_repeat1] = STATE(150),
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
  [82] = {
    [sym__number] = STATE(161),
    [sym__string] = STATE(161),
    [sym__keyword] = STATE(161),
    [sym__unqualified_keyword] = STATE(161),
    [sym_qualified_keyword] = STATE(161),
    [sym__symbol] = STATE(161),
    [sym_threading_macro] = STATE(161),
    [sym_qualified_symbol] = STATE(161),
    [sym__one_form] = STATE(161),
    [sym__paren_sequence] = STATE(161),
    [sym__bracket_sequence] = STATE(161),
    [sym__curly_brace_sequence] = STATE(161),
    [aux_sym_comment_macro_repeat1] = STATE(161),
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
  [83] = {
    [sym__number] = STATE(172),
    [sym__string] = STATE(172),
    [sym__keyword] = STATE(172),
    [sym__unqualified_keyword] = STATE(172),
    [sym_qualified_keyword] = STATE(172),
    [sym__symbol] = STATE(172),
    [sym_threading_macro] = STATE(172),
    [sym_qualified_symbol] = STATE(172),
    [sym__one_form] = STATE(172),
    [sym__paren_sequence] = STATE(172),
    [sym__bracket_sequence] = STATE(172),
    [sym__curly_brace_sequence] = STATE(172),
    [aux_sym_comment_macro_repeat1] = STATE(172),
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
  [84] = {
    [anon_sym_LBRACE] = ACTIONS(431),
  },
  [85] = {
    [aux_sym_ignore_form_repeat1] = STATE(174),
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
  },
  [86] = {
    [sym__number] = STATE(175),
    [sym__string] = STATE(175),
    [sym__keyword] = STATE(175),
    [sym__unqualified_keyword] = STATE(175),
    [sym_qualified_keyword] = STATE(175),
    [sym__symbol] = STATE(175),
    [sym_threading_macro] = STATE(175),
    [sym_qualified_symbol] = STATE(175),
    [sym__one_form] = STATE(175),
    [sym__paren_sequence] = STATE(175),
    [sym__bracket_sequence] = STATE(175),
    [sym__curly_brace_sequence] = STATE(175),
    [aux_sym_ignore_form_repeat1] = STATE(176),
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
  [87] = {
    [aux_sym__string_repeat1] = STATE(178),
    [anon_sym_DQUOTE] = ACTIONS(443),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(445),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(445),
  },
  [88] = {
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
    [sym_shorthand_fn_arg] = ACTIONS(447),
  },
  [89] = {
    [sym__keyword_chars] = ACTIONS(451),
  },
  [90] = {
    [sym__keyword_chars] = ACTIONS(453),
  },
  [91] = {
    [sym_number_long] = ACTIONS(89),
    [sym_number_double] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(89),
    [anon_sym_COLON] = ACTIONS(89),
    [anon_sym_COLON_COLON] = ACTIONS(89),
    [anon_sym_DASH_GT] = ACTIONS(89),
    [anon_sym_DASH_GT_GT] = ACTIONS(89),
    [anon_sym_as_DASH_GT] = ACTIONS(89),
    [anon_sym_some_DASH_GT] = ACTIONS(89),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(89),
    [anon_sym_cond_DASH_GT] = ACTIONS(89),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(89),
    [sym__symbol_chars] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_POUND] = ACTIONS(89),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(89),
  },
  [92] = {
    [sym_number_long] = ACTIONS(93),
    [sym_number_double] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_RPAREN] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_COLON_COLON] = ACTIONS(93),
    [anon_sym_SLASH] = ACTIONS(455),
    [anon_sym_DASH_GT] = ACTIONS(93),
    [anon_sym_DASH_GT_GT] = ACTIONS(93),
    [anon_sym_as_DASH_GT] = ACTIONS(93),
    [anon_sym_some_DASH_GT] = ACTIONS(93),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(93),
    [anon_sym_cond_DASH_GT] = ACTIONS(93),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(93),
    [sym__symbol_chars] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_POUND] = ACTIONS(93),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(93),
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
  [95] = {
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
    [aux_sym_comment_macro_repeat1] = STATE(187),
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
  [96] = {
    [anon_sym_LBRACE] = ACTIONS(469),
  },
  [97] = {
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
    [aux_sym_comment_macro_repeat1] = STATE(190),
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
  [98] = {
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
    [sym_function] = STATE(45),
    [sym_anonymous_fn] = STATE(36),
    [sym_shorthand_fn] = STATE(36),
    [sym_defn] = STATE(36),
    [sym_nil] = ACTIONS(75),
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
  },
  [99] = {
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
    [sym_shorthand_fn_arg] = ACTIONS(475),
  },
  [100] = {
    [sym__number] = STATE(191),
    [sym__string] = STATE(191),
    [sym__keyword] = STATE(191),
    [sym__unqualified_keyword] = STATE(191),
    [sym_qualified_keyword] = STATE(191),
    [sym__symbol] = STATE(191),
    [sym_threading_macro] = STATE(191),
    [sym_qualified_symbol] = STATE(191),
    [sym__one_form] = STATE(191),
    [sym__paren_sequence] = STATE(191),
    [sym__bracket_sequence] = STATE(191),
    [sym__curly_brace_sequence] = STATE(191),
    [aux_sym_ignore_form_repeat1] = STATE(192),
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
  [101] = {
    [sym__anything] = STATE(194),
    [sym__literal] = STATE(194),
    [sym__collection_literal] = STATE(194),
    [sym_boolean] = STATE(194),
    [sym_number] = STATE(194),
    [sym__number] = STATE(24),
    [sym_character] = STATE(194),
    [sym__character] = STATE(25),
    [sym_string] = STATE(194),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(194),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(194),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(194),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(194),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(194),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(194),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(194),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym_set] = STATE(194),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(194),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_function] = STATE(194),
    [sym_anonymous_fn] = STATE(36),
    [sym_shorthand_fn] = STATE(36),
    [sym_defn] = STATE(36),
    [aux_sym_shorthand_fn_repeat1] = STATE(194),
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
    [sym_shorthand_fn_arg] = ACTIONS(487),
  },
  [102] = {
    [sym__anything] = STATE(102),
    [sym__literal] = STATE(102),
    [sym__collection_literal] = STATE(102),
    [sym_boolean] = STATE(102),
    [sym_number] = STATE(102),
    [sym__number] = STATE(24),
    [sym_character] = STATE(102),
    [sym__character] = STATE(25),
    [sym_string] = STATE(102),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(102),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(102),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(102),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(102),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(102),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(102),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(102),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym_set] = STATE(102),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(102),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_function] = STATE(102),
    [sym_anonymous_fn] = STATE(36),
    [sym_shorthand_fn] = STATE(36),
    [sym_defn] = STATE(36),
    [aux_sym_program_repeat1] = STATE(102),
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
  },
  [103] = {
    [sym__hex_char] = ACTIONS(566),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(568),
    [sym_nil] = ACTIONS(570),
    [sym_true] = ACTIONS(570),
    [sym_false] = ACTIONS(570),
    [sym_number_long] = ACTIONS(570),
    [sym_number_double] = ACTIONS(568),
    [anon_sym_BSLASH] = ACTIONS(568),
    [anon_sym_DQUOTE] = ACTIONS(568),
    [anon_sym_POUND_DQUOTE] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(568),
    [anon_sym_LPARENquote] = ACTIONS(568),
    [anon_sym_RPAREN] = ACTIONS(568),
    [anon_sym_COLON] = ACTIONS(570),
    [anon_sym_COLON_COLON] = ACTIONS(568),
    [anon_sym_DASH_GT] = ACTIONS(570),
    [anon_sym_DASH_GT_GT] = ACTIONS(568),
    [anon_sym_as_DASH_GT] = ACTIONS(568),
    [anon_sym_some_DASH_GT] = ACTIONS(570),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(568),
    [anon_sym_cond_DASH_GT] = ACTIONS(570),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(568),
    [sym__symbol_chars] = ACTIONS(570),
    [anon_sym_LPAREN] = ACTIONS(570),
    [anon_sym_LBRACK] = ACTIONS(568),
    [anon_sym_RBRACK] = ACTIONS(568),
    [anon_sym_LBRACE] = ACTIONS(568),
    [anon_sym_RBRACE] = ACTIONS(568),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(568),
    [anon_sym_POUND] = ACTIONS(570),
    [anon_sym_POUND_LBRACE] = ACTIONS(568),
    [anon_sym_SEMI] = ACTIONS(568),
    [anon_sym_POUND_BANG] = ACTIONS(568),
    [anon_sym_POUND_] = ACTIONS(568),
    [anon_sym_LPARENcomment] = ACTIONS(568),
    [anon_sym_POUND_LPAREN] = ACTIONS(568),
    [sym_shorthand_fn_arg] = ACTIONS(568),
  },
  [105] = {
    [ts_builtin_sym_end] = ACTIONS(572),
    [sym_nil] = ACTIONS(574),
    [sym_true] = ACTIONS(574),
    [sym_false] = ACTIONS(574),
    [sym_number_long] = ACTIONS(574),
    [sym_number_double] = ACTIONS(572),
    [anon_sym_BSLASH] = ACTIONS(572),
    [anon_sym_DQUOTE] = ACTIONS(572),
    [anon_sym_POUND_DQUOTE] = ACTIONS(572),
    [anon_sym_SQUOTE] = ACTIONS(572),
    [anon_sym_LPARENquote] = ACTIONS(572),
    [anon_sym_RPAREN] = ACTIONS(572),
    [anon_sym_COLON] = ACTIONS(574),
    [anon_sym_COLON_COLON] = ACTIONS(572),
    [anon_sym_DASH_GT] = ACTIONS(574),
    [anon_sym_DASH_GT_GT] = ACTIONS(572),
    [anon_sym_as_DASH_GT] = ACTIONS(572),
    [anon_sym_some_DASH_GT] = ACTIONS(574),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(572),
    [anon_sym_cond_DASH_GT] = ACTIONS(574),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(572),
    [sym__symbol_chars] = ACTIONS(574),
    [anon_sym_LPAREN] = ACTIONS(574),
    [anon_sym_LBRACK] = ACTIONS(572),
    [anon_sym_RBRACK] = ACTIONS(572),
    [anon_sym_LBRACE] = ACTIONS(572),
    [anon_sym_RBRACE] = ACTIONS(572),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(572),
    [anon_sym_POUND] = ACTIONS(574),
    [anon_sym_POUND_LBRACE] = ACTIONS(572),
    [anon_sym_SEMI] = ACTIONS(572),
    [anon_sym_POUND_BANG] = ACTIONS(572),
    [anon_sym_POUND_] = ACTIONS(572),
    [anon_sym_LPARENcomment] = ACTIONS(572),
    [anon_sym_POUND_LPAREN] = ACTIONS(572),
    [sym_shorthand_fn_arg] = ACTIONS(572),
  },
  [106] = {
    [aux_sym__string_repeat1] = STATE(106),
    [anon_sym_DQUOTE] = ACTIONS(576),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(578),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(578),
  },
  [107] = {
    [ts_builtin_sym_end] = ACTIONS(581),
    [sym_nil] = ACTIONS(583),
    [sym_true] = ACTIONS(583),
    [sym_false] = ACTIONS(583),
    [sym_number_long] = ACTIONS(583),
    [sym_number_double] = ACTIONS(581),
    [anon_sym_BSLASH] = ACTIONS(581),
    [anon_sym_DQUOTE] = ACTIONS(581),
    [anon_sym_POUND_DQUOTE] = ACTIONS(581),
    [anon_sym_SQUOTE] = ACTIONS(581),
    [anon_sym_LPARENquote] = ACTIONS(581),
    [anon_sym_RPAREN] = ACTIONS(581),
    [anon_sym_COLON] = ACTIONS(583),
    [anon_sym_COLON_COLON] = ACTIONS(581),
    [anon_sym_DASH_GT] = ACTIONS(583),
    [anon_sym_DASH_GT_GT] = ACTIONS(581),
    [anon_sym_as_DASH_GT] = ACTIONS(581),
    [anon_sym_some_DASH_GT] = ACTIONS(583),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(581),
    [anon_sym_cond_DASH_GT] = ACTIONS(583),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(581),
    [sym__symbol_chars] = ACTIONS(583),
    [anon_sym_LPAREN] = ACTIONS(583),
    [anon_sym_LBRACK] = ACTIONS(581),
    [anon_sym_RBRACK] = ACTIONS(581),
    [anon_sym_LBRACE] = ACTIONS(581),
    [anon_sym_RBRACE] = ACTIONS(581),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(581),
    [anon_sym_POUND] = ACTIONS(583),
    [anon_sym_POUND_LBRACE] = ACTIONS(581),
    [anon_sym_SEMI] = ACTIONS(581),
    [anon_sym_POUND_BANG] = ACTIONS(581),
    [anon_sym_POUND_] = ACTIONS(581),
    [anon_sym_LPARENcomment] = ACTIONS(581),
    [anon_sym_POUND_LPAREN] = ACTIONS(581),
    [sym_shorthand_fn_arg] = ACTIONS(581),
  },
  [108] = {
    [aux_sym__regex_repeat1] = STATE(108),
    [anon_sym_DQUOTE] = ACTIONS(585),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(587),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(587),
  },
  [109] = {
    [aux_sym_ignore_form_repeat1] = STATE(196),
    [anon_sym_RPAREN] = ACTIONS(435),
    [anon_sym_] = ACTIONS(590),
  },
  [110] = {
    [sym__number] = STATE(197),
    [sym__string] = STATE(197),
    [sym__keyword] = STATE(197),
    [sym__unqualified_keyword] = STATE(197),
    [sym_qualified_keyword] = STATE(197),
    [sym__symbol] = STATE(197),
    [sym_threading_macro] = STATE(197),
    [sym_qualified_symbol] = STATE(197),
    [sym__one_form] = STATE(197),
    [sym__paren_sequence] = STATE(197),
    [sym__bracket_sequence] = STATE(197),
    [sym__curly_brace_sequence] = STATE(197),
    [aux_sym_ignore_form_repeat1] = STATE(176),
    [sym_number_long] = ACTIONS(592),
    [sym_number_double] = ACTIONS(592),
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
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(592),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(594),
    [sym_nil] = ACTIONS(596),
    [sym_true] = ACTIONS(596),
    [sym_false] = ACTIONS(596),
    [sym_number_long] = ACTIONS(596),
    [sym_number_double] = ACTIONS(594),
    [anon_sym_BSLASH] = ACTIONS(594),
    [anon_sym_DQUOTE] = ACTIONS(594),
    [anon_sym_POUND_DQUOTE] = ACTIONS(594),
    [anon_sym_SQUOTE] = ACTIONS(594),
    [anon_sym_LPARENquote] = ACTIONS(594),
    [anon_sym_RPAREN] = ACTIONS(594),
    [anon_sym_COLON] = ACTIONS(596),
    [anon_sym_COLON_COLON] = ACTIONS(594),
    [anon_sym_DASH_GT] = ACTIONS(596),
    [anon_sym_DASH_GT_GT] = ACTIONS(594),
    [anon_sym_as_DASH_GT] = ACTIONS(594),
    [anon_sym_some_DASH_GT] = ACTIONS(596),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(594),
    [anon_sym_cond_DASH_GT] = ACTIONS(596),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(594),
    [sym__symbol_chars] = ACTIONS(596),
    [anon_sym_LPAREN] = ACTIONS(596),
    [anon_sym_LBRACK] = ACTIONS(594),
    [anon_sym_RBRACK] = ACTIONS(594),
    [anon_sym_LBRACE] = ACTIONS(594),
    [anon_sym_RBRACE] = ACTIONS(594),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(594),
    [anon_sym_POUND] = ACTIONS(596),
    [anon_sym_POUND_LBRACE] = ACTIONS(594),
    [anon_sym_SEMI] = ACTIONS(594),
    [anon_sym_POUND_BANG] = ACTIONS(594),
    [anon_sym_POUND_] = ACTIONS(594),
    [anon_sym_LPARENcomment] = ACTIONS(594),
    [anon_sym_POUND_LPAREN] = ACTIONS(594),
    [sym_shorthand_fn_arg] = ACTIONS(594),
  },
  [112] = {
    [sym__keyword_chars] = ACTIONS(598),
  },
  [113] = {
    [ts_builtin_sym_end] = ACTIONS(600),
    [sym_nil] = ACTIONS(602),
    [sym_true] = ACTIONS(602),
    [sym_false] = ACTIONS(602),
    [sym_number_long] = ACTIONS(602),
    [sym_number_double] = ACTIONS(600),
    [anon_sym_BSLASH] = ACTIONS(600),
    [anon_sym_DQUOTE] = ACTIONS(600),
    [anon_sym_POUND_DQUOTE] = ACTIONS(600),
    [anon_sym_SQUOTE] = ACTIONS(600),
    [anon_sym_LPARENquote] = ACTIONS(600),
    [anon_sym_RPAREN] = ACTIONS(600),
    [anon_sym_COLON] = ACTIONS(602),
    [anon_sym_COLON_COLON] = ACTIONS(600),
    [anon_sym_DASH_GT] = ACTIONS(602),
    [anon_sym_DASH_GT_GT] = ACTIONS(600),
    [anon_sym_as_DASH_GT] = ACTIONS(600),
    [anon_sym_some_DASH_GT] = ACTIONS(602),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(600),
    [anon_sym_cond_DASH_GT] = ACTIONS(602),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(600),
    [sym__symbol_chars] = ACTIONS(602),
    [anon_sym_LPAREN] = ACTIONS(602),
    [anon_sym_LBRACK] = ACTIONS(600),
    [anon_sym_RBRACK] = ACTIONS(600),
    [anon_sym_LBRACE] = ACTIONS(600),
    [anon_sym_RBRACE] = ACTIONS(600),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(600),
    [anon_sym_POUND] = ACTIONS(602),
    [anon_sym_POUND_LBRACE] = ACTIONS(600),
    [anon_sym_SEMI] = ACTIONS(600),
    [anon_sym_POUND_BANG] = ACTIONS(600),
    [anon_sym_POUND_] = ACTIONS(600),
    [anon_sym_LPARENcomment] = ACTIONS(600),
    [anon_sym_POUND_LPAREN] = ACTIONS(600),
    [sym_shorthand_fn_arg] = ACTIONS(600),
  },
  [114] = {
    [aux_sym_ignore_form_repeat1] = STATE(199),
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
    [anon_sym_] = ACTIONS(604),
    [anon_sym_LPARENcomment] = ACTIONS(435),
    [anon_sym_POUND_LPAREN] = ACTIONS(435),
  },
  [115] = {
    [sym__number] = STATE(200),
    [sym__string] = STATE(200),
    [sym__keyword] = STATE(200),
    [sym__unqualified_keyword] = STATE(200),
    [sym_qualified_keyword] = STATE(200),
    [sym__symbol] = STATE(200),
    [sym_threading_macro] = STATE(200),
    [sym_qualified_symbol] = STATE(200),
    [sym__one_form] = STATE(200),
    [sym__paren_sequence] = STATE(200),
    [sym__bracket_sequence] = STATE(200),
    [sym__curly_brace_sequence] = STATE(200),
    [aux_sym_ignore_form_repeat1] = STATE(176),
    [sym_number_long] = ACTIONS(606),
    [sym_number_double] = ACTIONS(606),
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
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(606),
  },
  [116] = {
    [anon_sym_DQUOTE] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(87),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(87),
    [anon_sym_POUND] = ACTIONS(89),
  },
  [117] = {
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_SLASH] = ACTIONS(608),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(91),
    [anon_sym_POUND] = ACTIONS(93),
  },
  [118] = {
    [sym_vector] = STATE(121),
    [sym__vector] = STATE(32),
    [sym__single_arity_fn] = STATE(202),
    [sym_params] = STATE(124),
    [anon_sym_LBRACK] = ACTIONS(37),
  },
  [119] = {
    [anon_sym_DQUOTE] = ACTIONS(610),
    [anon_sym_LPAREN] = ACTIONS(610),
    [anon_sym_LBRACK] = ACTIONS(610),
    [anon_sym_LBRACE] = ACTIONS(610),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(610),
    [anon_sym_POUND] = ACTIONS(612),
  },
  [120] = {
    [anon_sym_DQUOTE] = ACTIONS(221),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_LBRACE] = ACTIONS(221),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(221),
    [anon_sym_POUND] = ACTIONS(223),
  },
  [121] = {
    [sym_nil] = ACTIONS(614),
    [sym_true] = ACTIONS(614),
    [sym_false] = ACTIONS(614),
    [sym_number_long] = ACTIONS(614),
    [sym_number_double] = ACTIONS(616),
    [anon_sym_BSLASH] = ACTIONS(616),
    [anon_sym_DQUOTE] = ACTIONS(616),
    [anon_sym_POUND_DQUOTE] = ACTIONS(616),
    [anon_sym_SQUOTE] = ACTIONS(616),
    [anon_sym_LPARENquote] = ACTIONS(616),
    [anon_sym_RPAREN] = ACTIONS(616),
    [anon_sym_COLON] = ACTIONS(614),
    [anon_sym_COLON_COLON] = ACTIONS(616),
    [anon_sym_DASH_GT] = ACTIONS(614),
    [anon_sym_DASH_GT_GT] = ACTIONS(616),
    [anon_sym_as_DASH_GT] = ACTIONS(616),
    [anon_sym_some_DASH_GT] = ACTIONS(614),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(616),
    [anon_sym_cond_DASH_GT] = ACTIONS(614),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(616),
    [sym__symbol_chars] = ACTIONS(614),
    [anon_sym_LPAREN] = ACTIONS(614),
    [anon_sym_LBRACK] = ACTIONS(616),
    [anon_sym_LBRACE] = ACTIONS(616),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(616),
    [anon_sym_POUND] = ACTIONS(614),
    [anon_sym_POUND_LBRACE] = ACTIONS(616),
    [anon_sym_SEMI] = ACTIONS(616),
    [anon_sym_POUND_BANG] = ACTIONS(616),
    [anon_sym_POUND_] = ACTIONS(616),
    [anon_sym_LPARENcomment] = ACTIONS(616),
    [anon_sym_POUND_LPAREN] = ACTIONS(616),
  },
  [122] = {
    [anon_sym_RPAREN] = ACTIONS(618),
  },
  [123] = {
    [sym_vector] = STATE(121),
    [sym__vector] = STATE(32),
    [sym__after_the_fn_name] = STATE(204),
    [sym__single_arity_fn] = STATE(204),
    [sym__multi_arity_fn] = STATE(204),
    [sym_params] = STATE(124),
    [aux_sym__multi_arity_fn_repeat1] = STATE(125),
    [anon_sym_LPAREN] = ACTIONS(315),
    [anon_sym_LBRACK] = ACTIONS(37),
  },
  [124] = {
    [sym__anything] = STATE(206),
    [sym__literal] = STATE(206),
    [sym__collection_literal] = STATE(206),
    [sym_boolean] = STATE(206),
    [sym_number] = STATE(206),
    [sym__number] = STATE(24),
    [sym_character] = STATE(206),
    [sym__character] = STATE(25),
    [sym_string] = STATE(206),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(206),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(206),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(206),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(206),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(206),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(206),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(206),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym_set] = STATE(206),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(206),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_function] = STATE(206),
    [sym_anonymous_fn] = STATE(36),
    [sym_function_body] = STATE(205),
    [sym_shorthand_fn] = STATE(36),
    [sym_defn] = STATE(36),
    [aux_sym_program_repeat1] = STATE(206),
    [sym_nil] = ACTIONS(620),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(622),
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
    [anon_sym_POUND_] = ACTIONS(103),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
  },
  [125] = {
    [aux_sym__multi_arity_fn_repeat1] = STATE(207),
    [anon_sym_RPAREN] = ACTIONS(624),
    [anon_sym_LPAREN] = ACTIONS(315),
  },
  [126] = {
    [sym_string] = STATE(212),
    [sym__string] = STATE(213),
    [sym_vector] = STATE(121),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(214),
    [sym__hash_map] = STATE(215),
    [sym_namespace_map] = STATE(215),
    [sym__after_the_fn_name] = STATE(216),
    [sym__single_arity_fn] = STATE(216),
    [sym__multi_arity_fn] = STATE(216),
    [sym_params] = STATE(124),
    [sym_docstring] = STATE(217),
    [sym_attr_map] = STATE(218),
    [aux_sym__multi_arity_fn_repeat1] = STATE(125),
    [anon_sym_DQUOTE] = ACTIONS(626),
    [anon_sym_LPAREN] = ACTIONS(315),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(628),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(630),
    [anon_sym_POUND] = ACTIONS(632),
  },
  [127] = {
    [ts_builtin_sym_end] = ACTIONS(634),
    [sym_nil] = ACTIONS(636),
    [sym_true] = ACTIONS(636),
    [sym_false] = ACTIONS(636),
    [sym_number_long] = ACTIONS(636),
    [sym_number_double] = ACTIONS(634),
    [anon_sym_BSLASH] = ACTIONS(634),
    [anon_sym_DQUOTE] = ACTIONS(634),
    [anon_sym_POUND_DQUOTE] = ACTIONS(634),
    [anon_sym_SQUOTE] = ACTIONS(634),
    [anon_sym_LPARENquote] = ACTIONS(634),
    [anon_sym_RPAREN] = ACTIONS(634),
    [anon_sym_COLON] = ACTIONS(636),
    [anon_sym_COLON_COLON] = ACTIONS(634),
    [anon_sym_DASH_GT] = ACTIONS(636),
    [anon_sym_DASH_GT_GT] = ACTIONS(634),
    [anon_sym_as_DASH_GT] = ACTIONS(634),
    [anon_sym_some_DASH_GT] = ACTIONS(636),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(634),
    [anon_sym_cond_DASH_GT] = ACTIONS(636),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(634),
    [sym__symbol_chars] = ACTIONS(636),
    [anon_sym_LPAREN] = ACTIONS(636),
    [anon_sym_LBRACK] = ACTIONS(634),
    [anon_sym_RBRACK] = ACTIONS(634),
    [anon_sym_LBRACE] = ACTIONS(634),
    [anon_sym_RBRACE] = ACTIONS(634),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(634),
    [anon_sym_POUND] = ACTIONS(636),
    [anon_sym_POUND_LBRACE] = ACTIONS(634),
    [anon_sym_SEMI] = ACTIONS(634),
    [anon_sym_POUND_BANG] = ACTIONS(634),
    [anon_sym_POUND_] = ACTIONS(634),
    [anon_sym_LPARENcomment] = ACTIONS(634),
    [anon_sym_POUND_LPAREN] = ACTIONS(634),
    [sym_shorthand_fn_arg] = ACTIONS(634),
  },
  [128] = {
    [sym__anything] = STATE(128),
    [sym__literal] = STATE(128),
    [sym__collection_literal] = STATE(128),
    [sym_boolean] = STATE(128),
    [sym_number] = STATE(128),
    [sym__number] = STATE(24),
    [sym_character] = STATE(128),
    [sym__character] = STATE(25),
    [sym_string] = STATE(128),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(128),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(128),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(128),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(128),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(128),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(128),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(128),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym_set] = STATE(128),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(128),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_function] = STATE(128),
    [sym_anonymous_fn] = STATE(36),
    [sym_shorthand_fn] = STATE(36),
    [sym_defn] = STATE(36),
    [aux_sym_program_repeat1] = STATE(128),
    [sym_nil] = ACTIONS(638),
    [sym_true] = ACTIONS(494),
    [sym_false] = ACTIONS(494),
    [sym_number_long] = ACTIONS(497),
    [sym_number_double] = ACTIONS(500),
    [anon_sym_BSLASH] = ACTIONS(503),
    [anon_sym_DQUOTE] = ACTIONS(506),
    [anon_sym_POUND_DQUOTE] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(641),
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
    [anon_sym_POUND_] = ACTIONS(644),
    [anon_sym_LPARENcomment] = ACTIONS(560),
    [anon_sym_POUND_LPAREN] = ACTIONS(563),
  },
  [129] = {
    [aux_sym_ignore_form_repeat1] = STATE(219),
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
    [anon_sym_] = ACTIONS(647),
    [anon_sym_LPARENcomment] = ACTIONS(435),
    [anon_sym_POUND_LPAREN] = ACTIONS(435),
  },
  [130] = {
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
    [aux_sym_ignore_form_repeat1] = STATE(176),
    [sym_number_long] = ACTIONS(649),
    [sym_number_double] = ACTIONS(649),
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
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(649),
  },
  [131] = {
    [ts_builtin_sym_end] = ACTIONS(651),
    [sym_nil] = ACTIONS(653),
    [sym_true] = ACTIONS(653),
    [sym_false] = ACTIONS(653),
    [sym_number_long] = ACTIONS(653),
    [sym_number_double] = ACTIONS(651),
    [anon_sym_BSLASH] = ACTIONS(651),
    [anon_sym_DQUOTE] = ACTIONS(651),
    [anon_sym_POUND_DQUOTE] = ACTIONS(651),
    [anon_sym_SQUOTE] = ACTIONS(651),
    [anon_sym_LPARENquote] = ACTIONS(651),
    [anon_sym_RPAREN] = ACTIONS(651),
    [anon_sym_COLON] = ACTIONS(653),
    [anon_sym_COLON_COLON] = ACTIONS(651),
    [anon_sym_DASH_GT] = ACTIONS(653),
    [anon_sym_DASH_GT_GT] = ACTIONS(651),
    [anon_sym_as_DASH_GT] = ACTIONS(651),
    [anon_sym_some_DASH_GT] = ACTIONS(653),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(651),
    [anon_sym_cond_DASH_GT] = ACTIONS(653),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(651),
    [sym__symbol_chars] = ACTIONS(653),
    [anon_sym_LPAREN] = ACTIONS(653),
    [anon_sym_LBRACK] = ACTIONS(651),
    [anon_sym_RBRACK] = ACTIONS(651),
    [anon_sym_LBRACE] = ACTIONS(651),
    [anon_sym_RBRACE] = ACTIONS(651),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(651),
    [anon_sym_POUND] = ACTIONS(653),
    [anon_sym_POUND_LBRACE] = ACTIONS(651),
    [anon_sym_SEMI] = ACTIONS(651),
    [anon_sym_POUND_BANG] = ACTIONS(651),
    [anon_sym_POUND_] = ACTIONS(651),
    [anon_sym_LPARENcomment] = ACTIONS(651),
    [anon_sym_POUND_LPAREN] = ACTIONS(651),
    [sym_shorthand_fn_arg] = ACTIONS(651),
  },
  [132] = {
    [sym__anything] = STATE(132),
    [sym__literal] = STATE(132),
    [sym__collection_literal] = STATE(132),
    [sym_boolean] = STATE(132),
    [sym_number] = STATE(132),
    [sym__number] = STATE(24),
    [sym_character] = STATE(132),
    [sym__character] = STATE(25),
    [sym_string] = STATE(132),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(132),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(132),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(132),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(132),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(132),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(132),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(132),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym_set] = STATE(132),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(132),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_function] = STATE(132),
    [sym_anonymous_fn] = STATE(36),
    [sym_shorthand_fn] = STATE(36),
    [sym_defn] = STATE(36),
    [aux_sym_program_repeat1] = STATE(132),
    [sym_nil] = ACTIONS(655),
    [sym_true] = ACTIONS(494),
    [sym_false] = ACTIONS(494),
    [sym_number_long] = ACTIONS(497),
    [sym_number_double] = ACTIONS(500),
    [anon_sym_BSLASH] = ACTIONS(503),
    [anon_sym_DQUOTE] = ACTIONS(506),
    [anon_sym_POUND_DQUOTE] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(658),
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
    [anon_sym_POUND_] = ACTIONS(661),
    [anon_sym_LPARENcomment] = ACTIONS(560),
    [anon_sym_POUND_LPAREN] = ACTIONS(563),
  },
  [133] = {
    [aux_sym_ignore_form_repeat1] = STATE(221),
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
    [anon_sym_] = ACTIONS(664),
    [anon_sym_LPARENcomment] = ACTIONS(435),
    [anon_sym_POUND_LPAREN] = ACTIONS(435),
  },
  [134] = {
    [sym__number] = STATE(222),
    [sym__string] = STATE(222),
    [sym__keyword] = STATE(222),
    [sym__unqualified_keyword] = STATE(222),
    [sym_qualified_keyword] = STATE(222),
    [sym__symbol] = STATE(222),
    [sym_threading_macro] = STATE(222),
    [sym_qualified_symbol] = STATE(222),
    [sym__one_form] = STATE(222),
    [sym__paren_sequence] = STATE(222),
    [sym__bracket_sequence] = STATE(222),
    [sym__curly_brace_sequence] = STATE(222),
    [aux_sym_ignore_form_repeat1] = STATE(176),
    [sym_number_long] = ACTIONS(666),
    [sym_number_double] = ACTIONS(666),
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
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(666),
  },
  [135] = {
    [sym_nil] = ACTIONS(668),
    [sym_true] = ACTIONS(668),
    [sym_false] = ACTIONS(668),
    [sym_number_long] = ACTIONS(668),
    [sym_number_double] = ACTIONS(670),
    [anon_sym_BSLASH] = ACTIONS(670),
    [anon_sym_DQUOTE] = ACTIONS(670),
    [anon_sym_POUND_DQUOTE] = ACTIONS(670),
    [anon_sym_SQUOTE] = ACTIONS(670),
    [anon_sym_LPARENquote] = ACTIONS(670),
    [anon_sym_COLON] = ACTIONS(668),
    [anon_sym_COLON_COLON] = ACTIONS(670),
    [anon_sym_DASH_GT] = ACTIONS(668),
    [anon_sym_DASH_GT_GT] = ACTIONS(670),
    [anon_sym_as_DASH_GT] = ACTIONS(670),
    [anon_sym_some_DASH_GT] = ACTIONS(668),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(670),
    [anon_sym_cond_DASH_GT] = ACTIONS(668),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(670),
    [sym__symbol_chars] = ACTIONS(668),
    [anon_sym_LPAREN] = ACTIONS(668),
    [anon_sym_LBRACK] = ACTIONS(670),
    [anon_sym_LBRACE] = ACTIONS(670),
    [anon_sym_RBRACE] = ACTIONS(670),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(670),
    [anon_sym_POUND] = ACTIONS(668),
    [anon_sym_POUND_LBRACE] = ACTIONS(670),
    [anon_sym_SEMI] = ACTIONS(670),
    [anon_sym_POUND_BANG] = ACTIONS(670),
    [anon_sym_POUND_] = ACTIONS(670),
    [anon_sym_LPARENcomment] = ACTIONS(670),
    [anon_sym_POUND_LPAREN] = ACTIONS(670),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(672),
    [sym_nil] = ACTIONS(674),
    [sym_true] = ACTIONS(674),
    [sym_false] = ACTIONS(674),
    [sym_number_long] = ACTIONS(674),
    [sym_number_double] = ACTIONS(672),
    [anon_sym_BSLASH] = ACTIONS(672),
    [anon_sym_DQUOTE] = ACTIONS(672),
    [anon_sym_POUND_DQUOTE] = ACTIONS(672),
    [anon_sym_SQUOTE] = ACTIONS(672),
    [anon_sym_LPARENquote] = ACTIONS(672),
    [anon_sym_RPAREN] = ACTIONS(672),
    [anon_sym_COLON] = ACTIONS(674),
    [anon_sym_COLON_COLON] = ACTIONS(672),
    [anon_sym_DASH_GT] = ACTIONS(674),
    [anon_sym_DASH_GT_GT] = ACTIONS(672),
    [anon_sym_as_DASH_GT] = ACTIONS(672),
    [anon_sym_some_DASH_GT] = ACTIONS(674),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(672),
    [anon_sym_cond_DASH_GT] = ACTIONS(674),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(672),
    [sym__symbol_chars] = ACTIONS(674),
    [anon_sym_LPAREN] = ACTIONS(674),
    [anon_sym_LBRACK] = ACTIONS(672),
    [anon_sym_RBRACK] = ACTIONS(672),
    [anon_sym_LBRACE] = ACTIONS(672),
    [anon_sym_RBRACE] = ACTIONS(672),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(672),
    [anon_sym_POUND] = ACTIONS(674),
    [anon_sym_POUND_LBRACE] = ACTIONS(672),
    [anon_sym_SEMI] = ACTIONS(672),
    [anon_sym_POUND_BANG] = ACTIONS(672),
    [anon_sym_POUND_] = ACTIONS(672),
    [anon_sym_LPARENcomment] = ACTIONS(672),
    [anon_sym_POUND_LPAREN] = ACTIONS(672),
    [sym_shorthand_fn_arg] = ACTIONS(672),
  },
  [137] = {
    [sym__anything] = STATE(65),
    [sym__literal] = STATE(65),
    [sym__collection_literal] = STATE(65),
    [sym_boolean] = STATE(65),
    [sym_number] = STATE(65),
    [sym__number] = STATE(24),
    [sym_character] = STATE(65),
    [sym__character] = STATE(25),
    [sym_string] = STATE(65),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(65),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(65),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(65),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(65),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(65),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(65),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(65),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym__hash_map_kv_pair] = STATE(137),
    [sym__hash_map_key] = STATE(65),
    [sym_set] = STATE(65),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(65),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_function] = STATE(65),
    [sym_anonymous_fn] = STATE(36),
    [sym_shorthand_fn] = STATE(36),
    [sym_defn] = STATE(36),
    [aux_sym__hash_map_repeat1] = STATE(137),
    [sym_nil] = ACTIONS(676),
    [sym_true] = ACTIONS(679),
    [sym_false] = ACTIONS(679),
    [sym_number_long] = ACTIONS(682),
    [sym_number_double] = ACTIONS(685),
    [anon_sym_BSLASH] = ACTIONS(688),
    [anon_sym_DQUOTE] = ACTIONS(691),
    [anon_sym_POUND_DQUOTE] = ACTIONS(694),
    [anon_sym_SQUOTE] = ACTIONS(697),
    [anon_sym_LPARENquote] = ACTIONS(700),
    [anon_sym_COLON] = ACTIONS(703),
    [anon_sym_COLON_COLON] = ACTIONS(706),
    [anon_sym_DASH_GT] = ACTIONS(709),
    [anon_sym_DASH_GT_GT] = ACTIONS(712),
    [anon_sym_as_DASH_GT] = ACTIONS(712),
    [anon_sym_some_DASH_GT] = ACTIONS(709),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(712),
    [anon_sym_cond_DASH_GT] = ACTIONS(709),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(712),
    [sym__symbol_chars] = ACTIONS(715),
    [anon_sym_LPAREN] = ACTIONS(718),
    [anon_sym_LBRACK] = ACTIONS(721),
    [anon_sym_LBRACE] = ACTIONS(724),
    [anon_sym_RBRACE] = ACTIONS(727),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(729),
    [anon_sym_POUND] = ACTIONS(732),
    [anon_sym_POUND_LBRACE] = ACTIONS(735),
    [anon_sym_SEMI] = ACTIONS(738),
    [anon_sym_POUND_BANG] = ACTIONS(741),
    [anon_sym_POUND_] = ACTIONS(744),
    [anon_sym_LPARENcomment] = ACTIONS(747),
    [anon_sym_POUND_LPAREN] = ACTIONS(750),
  },
  [138] = {
    [ts_builtin_sym_end] = ACTIONS(753),
    [sym_nil] = ACTIONS(755),
    [sym_true] = ACTIONS(755),
    [sym_false] = ACTIONS(755),
    [sym_number_long] = ACTIONS(755),
    [sym_number_double] = ACTIONS(753),
    [anon_sym_BSLASH] = ACTIONS(753),
    [anon_sym_DQUOTE] = ACTIONS(753),
    [anon_sym_POUND_DQUOTE] = ACTIONS(753),
    [anon_sym_SQUOTE] = ACTIONS(753),
    [anon_sym_LPARENquote] = ACTIONS(753),
    [anon_sym_RPAREN] = ACTIONS(753),
    [anon_sym_COLON] = ACTIONS(755),
    [anon_sym_COLON_COLON] = ACTIONS(753),
    [anon_sym_DASH_GT] = ACTIONS(755),
    [anon_sym_DASH_GT_GT] = ACTIONS(753),
    [anon_sym_as_DASH_GT] = ACTIONS(753),
    [anon_sym_some_DASH_GT] = ACTIONS(755),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(753),
    [anon_sym_cond_DASH_GT] = ACTIONS(755),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(753),
    [sym__symbol_chars] = ACTIONS(755),
    [anon_sym_LPAREN] = ACTIONS(755),
    [anon_sym_LBRACK] = ACTIONS(753),
    [anon_sym_RBRACK] = ACTIONS(753),
    [anon_sym_LBRACE] = ACTIONS(753),
    [anon_sym_RBRACE] = ACTIONS(753),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(753),
    [anon_sym_POUND] = ACTIONS(755),
    [anon_sym_POUND_LBRACE] = ACTIONS(753),
    [anon_sym_SEMI] = ACTIONS(753),
    [anon_sym_POUND_BANG] = ACTIONS(753),
    [anon_sym_POUND_] = ACTIONS(753),
    [anon_sym_LPARENcomment] = ACTIONS(753),
    [anon_sym_POUND_LPAREN] = ACTIONS(753),
    [sym_shorthand_fn_arg] = ACTIONS(753),
  },
  [139] = {
    [sym__anything] = STATE(65),
    [sym__literal] = STATE(65),
    [sym__collection_literal] = STATE(65),
    [sym_boolean] = STATE(65),
    [sym_number] = STATE(65),
    [sym__number] = STATE(24),
    [sym_character] = STATE(65),
    [sym__character] = STATE(25),
    [sym_string] = STATE(65),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(65),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(65),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(65),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(65),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(65),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(65),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(65),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym__hash_map_kv_pair] = STATE(224),
    [sym__hash_map_key] = STATE(65),
    [sym_set] = STATE(65),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(65),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_function] = STATE(65),
    [sym_anonymous_fn] = STATE(36),
    [sym_shorthand_fn] = STATE(36),
    [sym_defn] = STATE(36),
    [aux_sym__hash_map_repeat1] = STATE(224),
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
    [anon_sym_RBRACE] = ACTIONS(757),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(123),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
  },
  [140] = {
    [aux_sym_ignore_form_repeat1] = STATE(225),
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
    [anon_sym_] = ACTIONS(759),
    [anon_sym_LPARENcomment] = ACTIONS(435),
    [anon_sym_POUND_LPAREN] = ACTIONS(435),
  },
  [141] = {
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
    [aux_sym_ignore_form_repeat1] = STATE(176),
    [sym_number_long] = ACTIONS(761),
    [sym_number_double] = ACTIONS(761),
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
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(761),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(763),
    [sym_nil] = ACTIONS(765),
    [sym_true] = ACTIONS(765),
    [sym_false] = ACTIONS(765),
    [sym_number_long] = ACTIONS(765),
    [sym_number_double] = ACTIONS(763),
    [anon_sym_BSLASH] = ACTIONS(763),
    [anon_sym_DQUOTE] = ACTIONS(763),
    [anon_sym_POUND_DQUOTE] = ACTIONS(763),
    [anon_sym_SQUOTE] = ACTIONS(763),
    [anon_sym_LPARENquote] = ACTIONS(763),
    [anon_sym_RPAREN] = ACTIONS(763),
    [anon_sym_COLON] = ACTIONS(765),
    [anon_sym_COLON_COLON] = ACTIONS(763),
    [anon_sym_DASH_GT] = ACTIONS(765),
    [anon_sym_DASH_GT_GT] = ACTIONS(763),
    [anon_sym_as_DASH_GT] = ACTIONS(763),
    [anon_sym_some_DASH_GT] = ACTIONS(765),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(763),
    [anon_sym_cond_DASH_GT] = ACTIONS(765),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(763),
    [sym__symbol_chars] = ACTIONS(765),
    [anon_sym_LPAREN] = ACTIONS(765),
    [anon_sym_LBRACK] = ACTIONS(763),
    [anon_sym_RBRACK] = ACTIONS(763),
    [anon_sym_LBRACE] = ACTIONS(763),
    [anon_sym_RBRACE] = ACTIONS(763),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(763),
    [anon_sym_POUND] = ACTIONS(765),
    [anon_sym_POUND_LBRACE] = ACTIONS(763),
    [anon_sym_SEMI] = ACTIONS(763),
    [anon_sym_POUND_BANG] = ACTIONS(763),
    [anon_sym_POUND_] = ACTIONS(763),
    [anon_sym_LPARENcomment] = ACTIONS(763),
    [anon_sym_POUND_LPAREN] = ACTIONS(763),
    [sym_shorthand_fn_arg] = ACTIONS(763),
  },
  [143] = {
    [sym__anything] = STATE(143),
    [sym__literal] = STATE(143),
    [sym__collection_literal] = STATE(143),
    [sym_boolean] = STATE(143),
    [sym_number] = STATE(143),
    [sym__number] = STATE(24),
    [sym_character] = STATE(143),
    [sym__character] = STATE(25),
    [sym_string] = STATE(143),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(143),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(143),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(143),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(143),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(143),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(143),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(143),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym_set] = STATE(143),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(143),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_function] = STATE(143),
    [sym_anonymous_fn] = STATE(36),
    [sym_shorthand_fn] = STATE(36),
    [sym_defn] = STATE(36),
    [aux_sym_program_repeat1] = STATE(143),
    [sym_nil] = ACTIONS(767),
    [sym_true] = ACTIONS(494),
    [sym_false] = ACTIONS(494),
    [sym_number_long] = ACTIONS(497),
    [sym_number_double] = ACTIONS(500),
    [anon_sym_BSLASH] = ACTIONS(503),
    [anon_sym_DQUOTE] = ACTIONS(506),
    [anon_sym_POUND_DQUOTE] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(770),
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
    [anon_sym_POUND_] = ACTIONS(773),
    [anon_sym_LPARENcomment] = ACTIONS(560),
    [anon_sym_POUND_LPAREN] = ACTIONS(563),
  },
  [144] = {
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
    [sym_shorthand_fn_arg] = ACTIONS(265),
  },
  [145] = {
    [aux_sym__string_repeat1] = STATE(106),
    [anon_sym_DQUOTE] = ACTIONS(776),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(269),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(269),
  },
  [146] = {
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
    [sym_shorthand_fn_arg] = ACTIONS(291),
  },
  [147] = {
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
    [anon_sym_SLASH] = ACTIONS(778),
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
    [sym_shorthand_fn_arg] = ACTIONS(295),
  },
  [148] = {
    [sym__symbol_chars] = ACTIONS(780),
  },
  [149] = {
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
    [anon_sym_POUND_LPAREN] = ACTIONS(784),
    [sym_shorthand_fn_arg] = ACTIONS(784),
  },
  [150] = {
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
    [aux_sym_comment_macro_repeat1] = STATE(190),
    [sym_number_long] = ACTIONS(471),
    [sym_number_double] = ACTIONS(471),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(786),
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
  [151] = {
    [aux_sym__string_repeat1] = STATE(232),
    [anon_sym_DQUOTE] = ACTIONS(788),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(790),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(790),
  },
  [152] = {
    [sym__keyword_chars] = ACTIONS(792),
  },
  [153] = {
    [sym__keyword_chars] = ACTIONS(794),
  },
  [154] = {
    [sym_number_long] = ACTIONS(89),
    [sym_number_double] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [anon_sym_COLON] = ACTIONS(89),
    [anon_sym_COLON_COLON] = ACTIONS(89),
    [anon_sym_DASH_GT] = ACTIONS(89),
    [anon_sym_DASH_GT_GT] = ACTIONS(89),
    [anon_sym_as_DASH_GT] = ACTIONS(89),
    [anon_sym_some_DASH_GT] = ACTIONS(89),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(89),
    [anon_sym_cond_DASH_GT] = ACTIONS(89),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(89),
    [sym__symbol_chars] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_POUND] = ACTIONS(89),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(89),
  },
  [155] = {
    [sym_number_long] = ACTIONS(93),
    [sym_number_double] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_COLON_COLON] = ACTIONS(93),
    [anon_sym_SLASH] = ACTIONS(796),
    [anon_sym_DASH_GT] = ACTIONS(93),
    [anon_sym_DASH_GT_GT] = ACTIONS(93),
    [anon_sym_as_DASH_GT] = ACTIONS(93),
    [anon_sym_some_DASH_GT] = ACTIONS(93),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(93),
    [anon_sym_cond_DASH_GT] = ACTIONS(93),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(93),
    [sym__symbol_chars] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_POUND] = ACTIONS(93),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(93),
  },
  [156] = {
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
    [sym_number_long] = ACTIONS(798),
    [sym_number_double] = ACTIONS(798),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(800),
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
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(798),
  },
  [157] = {
    [sym__number] = STATE(239),
    [sym__string] = STATE(239),
    [sym__keyword] = STATE(239),
    [sym__unqualified_keyword] = STATE(239),
    [sym_qualified_keyword] = STATE(239),
    [sym__symbol] = STATE(239),
    [sym_threading_macro] = STATE(239),
    [sym_qualified_symbol] = STATE(239),
    [sym__one_form] = STATE(239),
    [sym__paren_sequence] = STATE(239),
    [sym__bracket_sequence] = STATE(239),
    [sym__curly_brace_sequence] = STATE(239),
    [aux_sym_comment_macro_repeat1] = STATE(239),
    [sym_number_long] = ACTIONS(802),
    [sym_number_double] = ACTIONS(802),
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
    [anon_sym_RBRACK] = ACTIONS(804),
    [anon_sym_LBRACE] = ACTIONS(405),
    [anon_sym_POUND] = ACTIONS(407),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(802),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(806),
    [sym_nil] = ACTIONS(808),
    [sym_true] = ACTIONS(808),
    [sym_false] = ACTIONS(808),
    [sym_number_long] = ACTIONS(808),
    [sym_number_double] = ACTIONS(808),
    [anon_sym_BSLASH] = ACTIONS(808),
    [anon_sym_DQUOTE] = ACTIONS(808),
    [anon_sym_POUND_DQUOTE] = ACTIONS(808),
    [anon_sym_SQUOTE] = ACTIONS(808),
    [anon_sym_LPARENquote] = ACTIONS(808),
    [anon_sym_RPAREN] = ACTIONS(808),
    [anon_sym_COLON] = ACTIONS(808),
    [anon_sym_COLON_COLON] = ACTIONS(808),
    [anon_sym_DASH_GT] = ACTIONS(808),
    [anon_sym_DASH_GT_GT] = ACTIONS(808),
    [anon_sym_as_DASH_GT] = ACTIONS(808),
    [anon_sym_some_DASH_GT] = ACTIONS(808),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(808),
    [anon_sym_cond_DASH_GT] = ACTIONS(808),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(808),
    [sym__symbol_chars] = ACTIONS(808),
    [anon_sym_LPAREN] = ACTIONS(808),
    [anon_sym_LBRACK] = ACTIONS(808),
    [anon_sym_RBRACK] = ACTIONS(808),
    [anon_sym_LBRACE] = ACTIONS(808),
    [anon_sym_RBRACE] = ACTIONS(808),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(808),
    [anon_sym_POUND] = ACTIONS(808),
    [anon_sym_POUND_LBRACE] = ACTIONS(808),
    [anon_sym_SEMI] = ACTIONS(808),
    [anon_sym_POUND_BANG] = ACTIONS(808),
    [anon_sym_POUND_] = ACTIONS(808),
    [anon_sym_] = ACTIONS(806),
    [anon_sym_LPARENcomment] = ACTIONS(808),
    [anon_sym_POUND_LPAREN] = ACTIONS(808),
    [sym_shorthand_fn_arg] = ACTIONS(808),
  },
  [159] = {
    [sym__number] = STATE(241),
    [sym__string] = STATE(241),
    [sym__keyword] = STATE(241),
    [sym__unqualified_keyword] = STATE(241),
    [sym_qualified_keyword] = STATE(241),
    [sym__symbol] = STATE(241),
    [sym_threading_macro] = STATE(241),
    [sym_qualified_symbol] = STATE(241),
    [sym__one_form] = STATE(241),
    [sym__paren_sequence] = STATE(241),
    [sym__bracket_sequence] = STATE(241),
    [sym__curly_brace_sequence] = STATE(241),
    [aux_sym_comment_macro_repeat1] = STATE(241),
    [sym_number_long] = ACTIONS(810),
    [sym_number_double] = ACTIONS(810),
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
    [anon_sym_RBRACE] = ACTIONS(812),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(810),
  },
  [160] = {
    [anon_sym_LBRACE] = ACTIONS(814),
  },
  [161] = {
    [sym__number] = STATE(244),
    [sym__string] = STATE(244),
    [sym__keyword] = STATE(244),
    [sym__unqualified_keyword] = STATE(244),
    [sym_qualified_keyword] = STATE(244),
    [sym__symbol] = STATE(244),
    [sym_threading_macro] = STATE(244),
    [sym_qualified_symbol] = STATE(244),
    [sym__one_form] = STATE(244),
    [sym__paren_sequence] = STATE(244),
    [sym__bracket_sequence] = STATE(244),
    [sym__curly_brace_sequence] = STATE(244),
    [aux_sym_comment_macro_repeat1] = STATE(244),
    [sym_number_long] = ACTIONS(816),
    [sym_number_double] = ACTIONS(816),
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
    [anon_sym_RBRACK] = ACTIONS(818),
    [anon_sym_LBRACE] = ACTIONS(405),
    [anon_sym_POUND] = ACTIONS(407),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(816),
  },
  [162] = {
    [aux_sym__string_repeat1] = STATE(246),
    [anon_sym_DQUOTE] = ACTIONS(820),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(822),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(822),
  },
  [163] = {
    [sym__keyword_chars] = ACTIONS(824),
  },
  [164] = {
    [sym__keyword_chars] = ACTIONS(826),
  },
  [165] = {
    [sym_number_long] = ACTIONS(89),
    [sym_number_double] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [anon_sym_COLON] = ACTIONS(89),
    [anon_sym_COLON_COLON] = ACTIONS(89),
    [anon_sym_DASH_GT] = ACTIONS(89),
    [anon_sym_DASH_GT_GT] = ACTIONS(89),
    [anon_sym_as_DASH_GT] = ACTIONS(89),
    [anon_sym_some_DASH_GT] = ACTIONS(89),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(89),
    [anon_sym_cond_DASH_GT] = ACTIONS(89),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(89),
    [sym__symbol_chars] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_POUND] = ACTIONS(89),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(89),
  },
  [166] = {
    [sym_number_long] = ACTIONS(93),
    [sym_number_double] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_COLON_COLON] = ACTIONS(93),
    [anon_sym_SLASH] = ACTIONS(828),
    [anon_sym_DASH_GT] = ACTIONS(93),
    [anon_sym_DASH_GT_GT] = ACTIONS(93),
    [anon_sym_as_DASH_GT] = ACTIONS(93),
    [anon_sym_some_DASH_GT] = ACTIONS(93),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(93),
    [anon_sym_cond_DASH_GT] = ACTIONS(93),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(93),
    [sym__symbol_chars] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_RBRACE] = ACTIONS(93),
    [anon_sym_POUND] = ACTIONS(93),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(93),
  },
  [167] = {
    [sym__number] = STATE(251),
    [sym__string] = STATE(251),
    [sym__keyword] = STATE(251),
    [sym__unqualified_keyword] = STATE(251),
    [sym_qualified_keyword] = STATE(251),
    [sym__symbol] = STATE(251),
    [sym_threading_macro] = STATE(251),
    [sym_qualified_symbol] = STATE(251),
    [sym__one_form] = STATE(251),
    [sym__paren_sequence] = STATE(251),
    [sym__bracket_sequence] = STATE(251),
    [sym__curly_brace_sequence] = STATE(251),
    [aux_sym_comment_macro_repeat1] = STATE(251),
    [sym_number_long] = ACTIONS(830),
    [sym_number_double] = ACTIONS(830),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(832),
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
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(830),
  },
  [168] = {
    [sym__number] = STATE(253),
    [sym__string] = STATE(253),
    [sym__keyword] = STATE(253),
    [sym__unqualified_keyword] = STATE(253),
    [sym_qualified_keyword] = STATE(253),
    [sym__symbol] = STATE(253),
    [sym_threading_macro] = STATE(253),
    [sym_qualified_symbol] = STATE(253),
    [sym__one_form] = STATE(253),
    [sym__paren_sequence] = STATE(253),
    [sym__bracket_sequence] = STATE(253),
    [sym__curly_brace_sequence] = STATE(253),
    [aux_sym_comment_macro_repeat1] = STATE(253),
    [sym_number_long] = ACTIONS(834),
    [sym_number_double] = ACTIONS(834),
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
    [anon_sym_RBRACK] = ACTIONS(836),
    [anon_sym_LBRACE] = ACTIONS(405),
    [anon_sym_POUND] = ACTIONS(407),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(834),
  },
  [169] = {
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
    [sym_number_long] = ACTIONS(838),
    [sym_number_double] = ACTIONS(838),
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
    [anon_sym_RBRACE] = ACTIONS(840),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(838),
  },
  [170] = {
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
    [anon_sym_DASH_GT] = ACTIONS(844),
    [anon_sym_DASH_GT_GT] = ACTIONS(844),
    [anon_sym_as_DASH_GT] = ACTIONS(844),
    [anon_sym_some_DASH_GT] = ACTIONS(844),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(844),
    [anon_sym_cond_DASH_GT] = ACTIONS(844),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(844),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(844),
    [sym_shorthand_fn_arg] = ACTIONS(844),
  },
  [171] = {
    [anon_sym_LBRACE] = ACTIONS(846),
  },
  [172] = {
    [sym__number] = STATE(258),
    [sym__string] = STATE(258),
    [sym__keyword] = STATE(258),
    [sym__unqualified_keyword] = STATE(258),
    [sym_qualified_keyword] = STATE(258),
    [sym__symbol] = STATE(258),
    [sym_threading_macro] = STATE(258),
    [sym_qualified_symbol] = STATE(258),
    [sym__one_form] = STATE(258),
    [sym__paren_sequence] = STATE(258),
    [sym__bracket_sequence] = STATE(258),
    [sym__curly_brace_sequence] = STATE(258),
    [aux_sym_comment_macro_repeat1] = STATE(258),
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
    [anon_sym_RBRACE] = ACTIONS(850),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(848),
  },
  [173] = {
    [sym__number] = STATE(259),
    [sym__string] = STATE(259),
    [sym__keyword] = STATE(259),
    [sym__unqualified_keyword] = STATE(259),
    [sym_qualified_keyword] = STATE(259),
    [sym__symbol] = STATE(259),
    [sym_threading_macro] = STATE(259),
    [sym_qualified_symbol] = STATE(259),
    [sym__one_form] = STATE(259),
    [sym__paren_sequence] = STATE(259),
    [sym__bracket_sequence] = STATE(259),
    [sym__curly_brace_sequence] = STATE(259),
    [aux_sym_comment_macro_repeat1] = STATE(259),
    [sym_number_long] = ACTIONS(852),
    [sym_number_double] = ACTIONS(852),
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
    [anon_sym_RBRACE] = ACTIONS(850),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(852),
  },
  [174] = {
    [aux_sym_ignore_form_repeat1] = STATE(260),
    [ts_builtin_sym_end] = ACTIONS(854),
    [sym_nil] = ACTIONS(856),
    [sym_true] = ACTIONS(856),
    [sym_false] = ACTIONS(856),
    [sym_number_long] = ACTIONS(856),
    [sym_number_double] = ACTIONS(856),
    [anon_sym_BSLASH] = ACTIONS(856),
    [anon_sym_DQUOTE] = ACTIONS(856),
    [anon_sym_POUND_DQUOTE] = ACTIONS(856),
    [anon_sym_SQUOTE] = ACTIONS(856),
    [anon_sym_LPARENquote] = ACTIONS(856),
    [anon_sym_COLON] = ACTIONS(856),
    [anon_sym_COLON_COLON] = ACTIONS(856),
    [anon_sym_DASH_GT] = ACTIONS(856),
    [anon_sym_DASH_GT_GT] = ACTIONS(856),
    [anon_sym_as_DASH_GT] = ACTIONS(856),
    [anon_sym_some_DASH_GT] = ACTIONS(856),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(856),
    [anon_sym_cond_DASH_GT] = ACTIONS(856),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(856),
    [sym__symbol_chars] = ACTIONS(856),
    [anon_sym_LPAREN] = ACTIONS(856),
    [anon_sym_LBRACK] = ACTIONS(856),
    [anon_sym_LBRACE] = ACTIONS(856),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(856),
    [anon_sym_POUND] = ACTIONS(856),
    [anon_sym_POUND_LBRACE] = ACTIONS(856),
    [anon_sym_SEMI] = ACTIONS(856),
    [anon_sym_POUND_BANG] = ACTIONS(856),
    [anon_sym_POUND_] = ACTIONS(856),
    [anon_sym_] = ACTIONS(858),
    [anon_sym_LPARENcomment] = ACTIONS(856),
    [anon_sym_POUND_LPAREN] = ACTIONS(856),
  },
  [175] = {
    [aux_sym_ignore_form_repeat1] = STATE(261),
    [ts_builtin_sym_end] = ACTIONS(854),
    [sym_nil] = ACTIONS(856),
    [sym_true] = ACTIONS(856),
    [sym_false] = ACTIONS(856),
    [sym_number_long] = ACTIONS(856),
    [sym_number_double] = ACTIONS(856),
    [anon_sym_BSLASH] = ACTIONS(856),
    [anon_sym_DQUOTE] = ACTIONS(856),
    [anon_sym_POUND_DQUOTE] = ACTIONS(856),
    [anon_sym_SQUOTE] = ACTIONS(856),
    [anon_sym_LPARENquote] = ACTIONS(856),
    [anon_sym_COLON] = ACTIONS(856),
    [anon_sym_COLON_COLON] = ACTIONS(856),
    [anon_sym_DASH_GT] = ACTIONS(856),
    [anon_sym_DASH_GT_GT] = ACTIONS(856),
    [anon_sym_as_DASH_GT] = ACTIONS(856),
    [anon_sym_some_DASH_GT] = ACTIONS(856),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(856),
    [anon_sym_cond_DASH_GT] = ACTIONS(856),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(856),
    [sym__symbol_chars] = ACTIONS(856),
    [anon_sym_LPAREN] = ACTIONS(856),
    [anon_sym_LBRACK] = ACTIONS(856),
    [anon_sym_LBRACE] = ACTIONS(856),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(856),
    [anon_sym_POUND] = ACTIONS(856),
    [anon_sym_POUND_LBRACE] = ACTIONS(856),
    [anon_sym_SEMI] = ACTIONS(856),
    [anon_sym_POUND_BANG] = ACTIONS(856),
    [anon_sym_POUND_] = ACTIONS(856),
    [anon_sym_] = ACTIONS(860),
    [anon_sym_LPARENcomment] = ACTIONS(856),
    [anon_sym_POUND_LPAREN] = ACTIONS(856),
  },
  [176] = {
    [aux_sym_ignore_form_repeat1] = STATE(176),
    [sym_number_long] = ACTIONS(862),
    [sym_number_double] = ACTIONS(862),
    [anon_sym_DQUOTE] = ACTIONS(862),
    [anon_sym_COLON] = ACTIONS(862),
    [anon_sym_COLON_COLON] = ACTIONS(862),
    [anon_sym_DASH_GT] = ACTIONS(862),
    [anon_sym_DASH_GT_GT] = ACTIONS(862),
    [anon_sym_as_DASH_GT] = ACTIONS(862),
    [anon_sym_some_DASH_GT] = ACTIONS(862),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(862),
    [anon_sym_cond_DASH_GT] = ACTIONS(862),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(862),
    [sym__symbol_chars] = ACTIONS(862),
    [anon_sym_LPAREN] = ACTIONS(862),
    [anon_sym_LBRACK] = ACTIONS(862),
    [anon_sym_LBRACE] = ACTIONS(862),
    [anon_sym_POUND] = ACTIONS(862),
    [anon_sym_] = ACTIONS(864),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(862),
  },
  [177] = {
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
  [178] = {
    [aux_sym__string_repeat1] = STATE(106),
    [anon_sym_DQUOTE] = ACTIONS(867),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(269),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(269),
  },
  [179] = {
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
  [180] = {
    [sym_number_long] = ACTIONS(295),
    [sym_number_double] = ACTIONS(295),
    [anon_sym_DQUOTE] = ACTIONS(295),
    [anon_sym_RPAREN] = ACTIONS(295),
    [anon_sym_COLON] = ACTIONS(295),
    [anon_sym_COLON_COLON] = ACTIONS(295),
    [anon_sym_SLASH] = ACTIONS(869),
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
  [181] = {
    [sym__symbol_chars] = ACTIONS(871),
  },
  [182] = {
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
  [183] = {
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
    [aux_sym_comment_macro_repeat1] = STATE(190),
    [sym_number_long] = ACTIONS(471),
    [sym_number_double] = ACTIONS(471),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(873),
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
  [184] = {
    [sym_number_long] = ACTIONS(808),
    [sym_number_double] = ACTIONS(808),
    [anon_sym_DQUOTE] = ACTIONS(808),
    [anon_sym_RPAREN] = ACTIONS(808),
    [anon_sym_COLON] = ACTIONS(808),
    [anon_sym_COLON_COLON] = ACTIONS(808),
    [anon_sym_DASH_GT] = ACTIONS(808),
    [anon_sym_DASH_GT_GT] = ACTIONS(808),
    [anon_sym_as_DASH_GT] = ACTIONS(808),
    [anon_sym_some_DASH_GT] = ACTIONS(808),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(808),
    [anon_sym_cond_DASH_GT] = ACTIONS(808),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(808),
    [sym__symbol_chars] = ACTIONS(808),
    [anon_sym_LPAREN] = ACTIONS(808),
    [anon_sym_LBRACK] = ACTIONS(808),
    [anon_sym_LBRACE] = ACTIONS(808),
    [anon_sym_POUND] = ACTIONS(808),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(808),
  },
  [185] = {
    [sym__number] = STATE(244),
    [sym__string] = STATE(244),
    [sym__keyword] = STATE(244),
    [sym__unqualified_keyword] = STATE(244),
    [sym_qualified_keyword] = STATE(244),
    [sym__symbol] = STATE(244),
    [sym_threading_macro] = STATE(244),
    [sym_qualified_symbol] = STATE(244),
    [sym__one_form] = STATE(244),
    [sym__paren_sequence] = STATE(244),
    [sym__bracket_sequence] = STATE(244),
    [sym__curly_brace_sequence] = STATE(244),
    [aux_sym_comment_macro_repeat1] = STATE(244),
    [sym_number_long] = ACTIONS(816),
    [sym_number_double] = ACTIONS(816),
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
    [anon_sym_RBRACK] = ACTIONS(875),
    [anon_sym_LBRACE] = ACTIONS(405),
    [anon_sym_POUND] = ACTIONS(407),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(816),
  },
  [186] = {
    [sym_number_long] = ACTIONS(844),
    [sym_number_double] = ACTIONS(844),
    [anon_sym_DQUOTE] = ACTIONS(844),
    [anon_sym_RPAREN] = ACTIONS(844),
    [anon_sym_COLON] = ACTIONS(844),
    [anon_sym_COLON_COLON] = ACTIONS(844),
    [anon_sym_DASH_GT] = ACTIONS(844),
    [anon_sym_DASH_GT_GT] = ACTIONS(844),
    [anon_sym_as_DASH_GT] = ACTIONS(844),
    [anon_sym_some_DASH_GT] = ACTIONS(844),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(844),
    [anon_sym_cond_DASH_GT] = ACTIONS(844),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(844),
    [sym__symbol_chars] = ACTIONS(844),
    [anon_sym_LPAREN] = ACTIONS(844),
    [anon_sym_LBRACK] = ACTIONS(844),
    [anon_sym_LBRACE] = ACTIONS(844),
    [anon_sym_POUND] = ACTIONS(844),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(844),
  },
  [187] = {
    [sym__number] = STATE(258),
    [sym__string] = STATE(258),
    [sym__keyword] = STATE(258),
    [sym__unqualified_keyword] = STATE(258),
    [sym_qualified_keyword] = STATE(258),
    [sym__symbol] = STATE(258),
    [sym_threading_macro] = STATE(258),
    [sym_qualified_symbol] = STATE(258),
    [sym__one_form] = STATE(258),
    [sym__paren_sequence] = STATE(258),
    [sym__bracket_sequence] = STATE(258),
    [sym__curly_brace_sequence] = STATE(258),
    [aux_sym_comment_macro_repeat1] = STATE(258),
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
    [anon_sym_RBRACE] = ACTIONS(877),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(848),
  },
  [188] = {
    [sym__number] = STATE(268),
    [sym__string] = STATE(268),
    [sym__keyword] = STATE(268),
    [sym__unqualified_keyword] = STATE(268),
    [sym_qualified_keyword] = STATE(268),
    [sym__symbol] = STATE(268),
    [sym_threading_macro] = STATE(268),
    [sym_qualified_symbol] = STATE(268),
    [sym__one_form] = STATE(268),
    [sym__paren_sequence] = STATE(268),
    [sym__bracket_sequence] = STATE(268),
    [sym__curly_brace_sequence] = STATE(268),
    [aux_sym_comment_macro_repeat1] = STATE(268),
    [sym_number_long] = ACTIONS(879),
    [sym_number_double] = ACTIONS(879),
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
    [anon_sym_RBRACE] = ACTIONS(877),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(879),
  },
  [189] = {
    [ts_builtin_sym_end] = ACTIONS(881),
    [sym_nil] = ACTIONS(883),
    [sym_true] = ACTIONS(883),
    [sym_false] = ACTIONS(883),
    [sym_number_long] = ACTIONS(883),
    [sym_number_double] = ACTIONS(881),
    [anon_sym_BSLASH] = ACTIONS(881),
    [anon_sym_DQUOTE] = ACTIONS(881),
    [anon_sym_POUND_DQUOTE] = ACTIONS(881),
    [anon_sym_SQUOTE] = ACTIONS(881),
    [anon_sym_LPARENquote] = ACTIONS(881),
    [anon_sym_RPAREN] = ACTIONS(881),
    [anon_sym_COLON] = ACTIONS(883),
    [anon_sym_COLON_COLON] = ACTIONS(881),
    [anon_sym_DASH_GT] = ACTIONS(883),
    [anon_sym_DASH_GT_GT] = ACTIONS(881),
    [anon_sym_as_DASH_GT] = ACTIONS(881),
    [anon_sym_some_DASH_GT] = ACTIONS(883),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(881),
    [anon_sym_cond_DASH_GT] = ACTIONS(883),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(881),
    [sym__symbol_chars] = ACTIONS(883),
    [anon_sym_LPAREN] = ACTIONS(883),
    [anon_sym_LBRACK] = ACTIONS(881),
    [anon_sym_RBRACK] = ACTIONS(881),
    [anon_sym_LBRACE] = ACTIONS(881),
    [anon_sym_RBRACE] = ACTIONS(881),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(881),
    [anon_sym_POUND] = ACTIONS(883),
    [anon_sym_POUND_LBRACE] = ACTIONS(881),
    [anon_sym_SEMI] = ACTIONS(881),
    [anon_sym_POUND_BANG] = ACTIONS(881),
    [anon_sym_POUND_] = ACTIONS(881),
    [anon_sym_LPARENcomment] = ACTIONS(881),
    [anon_sym_POUND_LPAREN] = ACTIONS(881),
    [sym_shorthand_fn_arg] = ACTIONS(881),
  },
  [190] = {
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
    [aux_sym_comment_macro_repeat1] = STATE(190),
    [sym_number_long] = ACTIONS(885),
    [sym_number_double] = ACTIONS(885),
    [anon_sym_DQUOTE] = ACTIONS(888),
    [anon_sym_RPAREN] = ACTIONS(891),
    [anon_sym_COLON] = ACTIONS(893),
    [anon_sym_COLON_COLON] = ACTIONS(896),
    [anon_sym_DASH_GT] = ACTIONS(899),
    [anon_sym_DASH_GT_GT] = ACTIONS(899),
    [anon_sym_as_DASH_GT] = ACTIONS(899),
    [anon_sym_some_DASH_GT] = ACTIONS(899),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(899),
    [anon_sym_cond_DASH_GT] = ACTIONS(899),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(899),
    [sym__symbol_chars] = ACTIONS(902),
    [anon_sym_LPAREN] = ACTIONS(905),
    [anon_sym_LBRACK] = ACTIONS(908),
    [anon_sym_LBRACE] = ACTIONS(911),
    [anon_sym_POUND] = ACTIONS(914),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(885),
  },
  [191] = {
    [aux_sym_ignore_form_repeat1] = STATE(269),
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
    [anon_sym_] = ACTIONS(917),
    [anon_sym_LPARENcomment] = ACTIONS(435),
    [anon_sym_POUND_LPAREN] = ACTIONS(435),
    [sym_shorthand_fn_arg] = ACTIONS(435),
  },
  [192] = {
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
    [aux_sym_ignore_form_repeat1] = STATE(176),
    [sym_number_long] = ACTIONS(919),
    [sym_number_double] = ACTIONS(919),
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
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(919),
  },
  [193] = {
    [ts_builtin_sym_end] = ACTIONS(921),
    [sym_nil] = ACTIONS(923),
    [sym_true] = ACTIONS(923),
    [sym_false] = ACTIONS(923),
    [sym_number_long] = ACTIONS(923),
    [sym_number_double] = ACTIONS(921),
    [anon_sym_BSLASH] = ACTIONS(921),
    [anon_sym_DQUOTE] = ACTIONS(921),
    [anon_sym_POUND_DQUOTE] = ACTIONS(921),
    [anon_sym_SQUOTE] = ACTIONS(921),
    [anon_sym_LPARENquote] = ACTIONS(921),
    [anon_sym_RPAREN] = ACTIONS(921),
    [anon_sym_COLON] = ACTIONS(923),
    [anon_sym_COLON_COLON] = ACTIONS(921),
    [anon_sym_DASH_GT] = ACTIONS(923),
    [anon_sym_DASH_GT_GT] = ACTIONS(921),
    [anon_sym_as_DASH_GT] = ACTIONS(921),
    [anon_sym_some_DASH_GT] = ACTIONS(923),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(921),
    [anon_sym_cond_DASH_GT] = ACTIONS(923),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(921),
    [sym__symbol_chars] = ACTIONS(923),
    [anon_sym_LPAREN] = ACTIONS(923),
    [anon_sym_LBRACK] = ACTIONS(921),
    [anon_sym_RBRACK] = ACTIONS(921),
    [anon_sym_LBRACE] = ACTIONS(921),
    [anon_sym_RBRACE] = ACTIONS(921),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(921),
    [anon_sym_POUND] = ACTIONS(923),
    [anon_sym_POUND_LBRACE] = ACTIONS(921),
    [anon_sym_SEMI] = ACTIONS(921),
    [anon_sym_POUND_BANG] = ACTIONS(921),
    [anon_sym_POUND_] = ACTIONS(921),
    [anon_sym_LPARENcomment] = ACTIONS(921),
    [anon_sym_POUND_LPAREN] = ACTIONS(921),
    [sym_shorthand_fn_arg] = ACTIONS(921),
  },
  [194] = {
    [sym__anything] = STATE(194),
    [sym__literal] = STATE(194),
    [sym__collection_literal] = STATE(194),
    [sym_boolean] = STATE(194),
    [sym_number] = STATE(194),
    [sym__number] = STATE(24),
    [sym_character] = STATE(194),
    [sym__character] = STATE(25),
    [sym_string] = STATE(194),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(194),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(194),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(194),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(194),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(194),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(194),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(194),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym_set] = STATE(194),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(194),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_function] = STATE(194),
    [sym_anonymous_fn] = STATE(36),
    [sym_shorthand_fn] = STATE(36),
    [sym_defn] = STATE(36),
    [aux_sym_shorthand_fn_repeat1] = STATE(194),
    [sym_nil] = ACTIONS(925),
    [sym_true] = ACTIONS(928),
    [sym_false] = ACTIONS(928),
    [sym_number_long] = ACTIONS(931),
    [sym_number_double] = ACTIONS(934),
    [anon_sym_BSLASH] = ACTIONS(937),
    [anon_sym_DQUOTE] = ACTIONS(940),
    [anon_sym_POUND_DQUOTE] = ACTIONS(943),
    [anon_sym_SQUOTE] = ACTIONS(946),
    [anon_sym_LPARENquote] = ACTIONS(949),
    [anon_sym_RPAREN] = ACTIONS(952),
    [anon_sym_COLON] = ACTIONS(954),
    [anon_sym_COLON_COLON] = ACTIONS(957),
    [anon_sym_DASH_GT] = ACTIONS(960),
    [anon_sym_DASH_GT_GT] = ACTIONS(963),
    [anon_sym_as_DASH_GT] = ACTIONS(963),
    [anon_sym_some_DASH_GT] = ACTIONS(960),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(963),
    [anon_sym_cond_DASH_GT] = ACTIONS(960),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(963),
    [sym__symbol_chars] = ACTIONS(966),
    [anon_sym_LPAREN] = ACTIONS(969),
    [anon_sym_LBRACK] = ACTIONS(972),
    [anon_sym_LBRACE] = ACTIONS(975),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(978),
    [anon_sym_POUND] = ACTIONS(981),
    [anon_sym_POUND_LBRACE] = ACTIONS(984),
    [anon_sym_SEMI] = ACTIONS(987),
    [anon_sym_POUND_BANG] = ACTIONS(990),
    [anon_sym_POUND_] = ACTIONS(993),
    [anon_sym_LPARENcomment] = ACTIONS(996),
    [anon_sym_POUND_LPAREN] = ACTIONS(999),
    [sym_shorthand_fn_arg] = ACTIONS(1002),
  },
  [195] = {
    [sym__hex_char] = ACTIONS(1005),
  },
  [196] = {
    [aux_sym_ignore_form_repeat1] = STATE(272),
    [anon_sym_RPAREN] = ACTIONS(856),
    [anon_sym_] = ACTIONS(1007),
  },
  [197] = {
    [aux_sym_ignore_form_repeat1] = STATE(273),
    [anon_sym_RPAREN] = ACTIONS(856),
    [anon_sym_] = ACTIONS(1009),
  },
  [198] = {
    [ts_builtin_sym_end] = ACTIONS(1011),
    [sym_nil] = ACTIONS(1013),
    [sym_true] = ACTIONS(1013),
    [sym_false] = ACTIONS(1013),
    [sym_number_long] = ACTIONS(1013),
    [sym_number_double] = ACTIONS(1011),
    [anon_sym_BSLASH] = ACTIONS(1011),
    [anon_sym_DQUOTE] = ACTIONS(1011),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1011),
    [anon_sym_SQUOTE] = ACTIONS(1011),
    [anon_sym_LPARENquote] = ACTIONS(1011),
    [anon_sym_RPAREN] = ACTIONS(1011),
    [anon_sym_COLON] = ACTIONS(1013),
    [anon_sym_COLON_COLON] = ACTIONS(1011),
    [anon_sym_DASH_GT] = ACTIONS(1013),
    [anon_sym_DASH_GT_GT] = ACTIONS(1011),
    [anon_sym_as_DASH_GT] = ACTIONS(1011),
    [anon_sym_some_DASH_GT] = ACTIONS(1013),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1011),
    [anon_sym_cond_DASH_GT] = ACTIONS(1013),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1011),
    [sym__symbol_chars] = ACTIONS(1013),
    [anon_sym_LPAREN] = ACTIONS(1013),
    [anon_sym_LBRACK] = ACTIONS(1011),
    [anon_sym_RBRACK] = ACTIONS(1011),
    [anon_sym_LBRACE] = ACTIONS(1011),
    [anon_sym_RBRACE] = ACTIONS(1011),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1011),
    [anon_sym_POUND] = ACTIONS(1013),
    [anon_sym_POUND_LBRACE] = ACTIONS(1011),
    [anon_sym_SEMI] = ACTIONS(1011),
    [anon_sym_POUND_BANG] = ACTIONS(1011),
    [anon_sym_POUND_] = ACTIONS(1011),
    [anon_sym_LPARENcomment] = ACTIONS(1011),
    [anon_sym_POUND_LPAREN] = ACTIONS(1011),
    [sym_shorthand_fn_arg] = ACTIONS(1011),
  },
  [199] = {
    [aux_sym_ignore_form_repeat1] = STATE(274),
    [sym_nil] = ACTIONS(856),
    [sym_true] = ACTIONS(856),
    [sym_false] = ACTIONS(856),
    [sym_number_long] = ACTIONS(856),
    [sym_number_double] = ACTIONS(856),
    [anon_sym_BSLASH] = ACTIONS(856),
    [anon_sym_DQUOTE] = ACTIONS(856),
    [anon_sym_POUND_DQUOTE] = ACTIONS(856),
    [anon_sym_SQUOTE] = ACTIONS(856),
    [anon_sym_LPARENquote] = ACTIONS(856),
    [anon_sym_RPAREN] = ACTIONS(856),
    [anon_sym_COLON] = ACTIONS(856),
    [anon_sym_COLON_COLON] = ACTIONS(856),
    [anon_sym_DASH_GT] = ACTIONS(856),
    [anon_sym_DASH_GT_GT] = ACTIONS(856),
    [anon_sym_as_DASH_GT] = ACTIONS(856),
    [anon_sym_some_DASH_GT] = ACTIONS(856),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(856),
    [anon_sym_cond_DASH_GT] = ACTIONS(856),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(856),
    [sym__symbol_chars] = ACTIONS(856),
    [anon_sym_LPAREN] = ACTIONS(856),
    [anon_sym_LBRACK] = ACTIONS(856),
    [anon_sym_LBRACE] = ACTIONS(856),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(856),
    [anon_sym_POUND] = ACTIONS(856),
    [anon_sym_POUND_LBRACE] = ACTIONS(856),
    [anon_sym_SEMI] = ACTIONS(856),
    [anon_sym_POUND_BANG] = ACTIONS(856),
    [anon_sym_POUND_] = ACTIONS(856),
    [anon_sym_] = ACTIONS(1015),
    [anon_sym_LPARENcomment] = ACTIONS(856),
    [anon_sym_POUND_LPAREN] = ACTIONS(856),
  },
  [200] = {
    [aux_sym_ignore_form_repeat1] = STATE(275),
    [sym_nil] = ACTIONS(856),
    [sym_true] = ACTIONS(856),
    [sym_false] = ACTIONS(856),
    [sym_number_long] = ACTIONS(856),
    [sym_number_double] = ACTIONS(856),
    [anon_sym_BSLASH] = ACTIONS(856),
    [anon_sym_DQUOTE] = ACTIONS(856),
    [anon_sym_POUND_DQUOTE] = ACTIONS(856),
    [anon_sym_SQUOTE] = ACTIONS(856),
    [anon_sym_LPARENquote] = ACTIONS(856),
    [anon_sym_RPAREN] = ACTIONS(856),
    [anon_sym_COLON] = ACTIONS(856),
    [anon_sym_COLON_COLON] = ACTIONS(856),
    [anon_sym_DASH_GT] = ACTIONS(856),
    [anon_sym_DASH_GT_GT] = ACTIONS(856),
    [anon_sym_as_DASH_GT] = ACTIONS(856),
    [anon_sym_some_DASH_GT] = ACTIONS(856),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(856),
    [anon_sym_cond_DASH_GT] = ACTIONS(856),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(856),
    [sym__symbol_chars] = ACTIONS(856),
    [anon_sym_LPAREN] = ACTIONS(856),
    [anon_sym_LBRACK] = ACTIONS(856),
    [anon_sym_LBRACE] = ACTIONS(856),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(856),
    [anon_sym_POUND] = ACTIONS(856),
    [anon_sym_POUND_LBRACE] = ACTIONS(856),
    [anon_sym_SEMI] = ACTIONS(856),
    [anon_sym_POUND_BANG] = ACTIONS(856),
    [anon_sym_POUND_] = ACTIONS(856),
    [anon_sym_] = ACTIONS(1017),
    [anon_sym_LPARENcomment] = ACTIONS(856),
    [anon_sym_POUND_LPAREN] = ACTIONS(856),
  },
  [201] = {
    [sym__symbol_chars] = ACTIONS(1019),
  },
  [202] = {
    [anon_sym_RPAREN] = ACTIONS(1021),
  },
  [203] = {
    [ts_builtin_sym_end] = ACTIONS(1023),
    [sym_nil] = ACTIONS(1025),
    [sym_true] = ACTIONS(1025),
    [sym_false] = ACTIONS(1025),
    [sym_number_long] = ACTIONS(1025),
    [sym_number_double] = ACTIONS(1023),
    [anon_sym_BSLASH] = ACTIONS(1023),
    [anon_sym_DQUOTE] = ACTIONS(1023),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1023),
    [anon_sym_SQUOTE] = ACTIONS(1023),
    [anon_sym_LPARENquote] = ACTIONS(1023),
    [anon_sym_RPAREN] = ACTIONS(1023),
    [anon_sym_COLON] = ACTIONS(1025),
    [anon_sym_COLON_COLON] = ACTIONS(1023),
    [anon_sym_DASH_GT] = ACTIONS(1025),
    [anon_sym_DASH_GT_GT] = ACTIONS(1023),
    [anon_sym_as_DASH_GT] = ACTIONS(1023),
    [anon_sym_some_DASH_GT] = ACTIONS(1025),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1023),
    [anon_sym_cond_DASH_GT] = ACTIONS(1025),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1023),
    [sym__symbol_chars] = ACTIONS(1025),
    [anon_sym_LPAREN] = ACTIONS(1025),
    [anon_sym_LBRACK] = ACTIONS(1023),
    [anon_sym_RBRACK] = ACTIONS(1023),
    [anon_sym_LBRACE] = ACTIONS(1023),
    [anon_sym_RBRACE] = ACTIONS(1023),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1023),
    [anon_sym_POUND] = ACTIONS(1025),
    [anon_sym_POUND_LBRACE] = ACTIONS(1023),
    [anon_sym_SEMI] = ACTIONS(1023),
    [anon_sym_POUND_BANG] = ACTIONS(1023),
    [anon_sym_POUND_] = ACTIONS(1023),
    [anon_sym_LPARENcomment] = ACTIONS(1023),
    [anon_sym_POUND_LPAREN] = ACTIONS(1023),
    [sym_shorthand_fn_arg] = ACTIONS(1023),
  },
  [204] = {
    [anon_sym_RPAREN] = ACTIONS(1027),
  },
  [205] = {
    [anon_sym_RPAREN] = ACTIONS(1029),
  },
  [206] = {
    [sym__anything] = STATE(128),
    [sym__literal] = STATE(128),
    [sym__collection_literal] = STATE(128),
    [sym_boolean] = STATE(128),
    [sym_number] = STATE(128),
    [sym__number] = STATE(24),
    [sym_character] = STATE(128),
    [sym__character] = STATE(25),
    [sym_string] = STATE(128),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(128),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(128),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(128),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(128),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(128),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(128),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(128),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym_set] = STATE(128),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(128),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_function] = STATE(128),
    [sym_anonymous_fn] = STATE(36),
    [sym_shorthand_fn] = STATE(36),
    [sym_defn] = STATE(36),
    [aux_sym_program_repeat1] = STATE(128),
    [sym_nil] = ACTIONS(317),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(1031),
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
    [anon_sym_POUND_] = ACTIONS(103),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
  },
  [207] = {
    [aux_sym__multi_arity_fn_repeat1] = STATE(207),
    [anon_sym_RPAREN] = ACTIONS(1033),
    [anon_sym_LPAREN] = ACTIONS(1035),
  },
  [208] = {
    [aux_sym__string_repeat1] = STATE(280),
    [anon_sym_DQUOTE] = ACTIONS(1038),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1040),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(1040),
  },
  [209] = {
    [sym__anything] = STATE(65),
    [sym__literal] = STATE(65),
    [sym__collection_literal] = STATE(65),
    [sym_boolean] = STATE(65),
    [sym_number] = STATE(65),
    [sym__number] = STATE(24),
    [sym_character] = STATE(65),
    [sym__character] = STATE(25),
    [sym_string] = STATE(65),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(65),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(65),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(65),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(65),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(65),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(65),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(65),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym__hash_map_kv_pair] = STATE(282),
    [sym__hash_map_key] = STATE(65),
    [sym_set] = STATE(65),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(65),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_function] = STATE(65),
    [sym_anonymous_fn] = STATE(36),
    [sym_shorthand_fn] = STATE(36),
    [sym_defn] = STATE(36),
    [aux_sym__hash_map_repeat1] = STATE(282),
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
    [anon_sym_RBRACE] = ACTIONS(1042),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(123),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
  },
  [210] = {
    [sym__anything] = STATE(65),
    [sym__literal] = STATE(65),
    [sym__collection_literal] = STATE(65),
    [sym_boolean] = STATE(65),
    [sym_number] = STATE(65),
    [sym__number] = STATE(24),
    [sym_character] = STATE(65),
    [sym__character] = STATE(25),
    [sym_string] = STATE(65),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(65),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(65),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(65),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(65),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(65),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(65),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(65),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym__hash_map_kv_pair] = STATE(284),
    [sym__hash_map_key] = STATE(65),
    [sym_set] = STATE(65),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(65),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_function] = STATE(65),
    [sym_anonymous_fn] = STATE(36),
    [sym_shorthand_fn] = STATE(36),
    [sym_defn] = STATE(36),
    [aux_sym__hash_map_repeat1] = STATE(284),
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
    [anon_sym_RBRACE] = ACTIONS(1044),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(123),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
  },
  [211] = {
    [sym__symbol_chars] = ACTIONS(1046),
  },
  [212] = {
    [anon_sym_LPAREN] = ACTIONS(1048),
    [anon_sym_LBRACK] = ACTIONS(1048),
    [anon_sym_LBRACE] = ACTIONS(1048),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1048),
    [anon_sym_POUND] = ACTIONS(1050),
  },
  [213] = {
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(205),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(205),
    [anon_sym_POUND] = ACTIONS(207),
  },
  [214] = {
    [anon_sym_LPAREN] = ACTIONS(1052),
    [anon_sym_LBRACK] = ACTIONS(1052),
  },
  [215] = {
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(233),
  },
  [216] = {
    [anon_sym_RPAREN] = ACTIONS(1054),
  },
  [217] = {
    [sym_vector] = STATE(121),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(214),
    [sym__hash_map] = STATE(215),
    [sym_namespace_map] = STATE(215),
    [sym__after_the_fn_name] = STATE(287),
    [sym__single_arity_fn] = STATE(287),
    [sym__multi_arity_fn] = STATE(287),
    [sym_params] = STATE(124),
    [sym_attr_map] = STATE(288),
    [aux_sym__multi_arity_fn_repeat1] = STATE(125),
    [anon_sym_LPAREN] = ACTIONS(315),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(628),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(630),
    [anon_sym_POUND] = ACTIONS(632),
  },
  [218] = {
    [sym_vector] = STATE(121),
    [sym__vector] = STATE(32),
    [sym__after_the_fn_name] = STATE(287),
    [sym__single_arity_fn] = STATE(287),
    [sym__multi_arity_fn] = STATE(287),
    [sym_params] = STATE(124),
    [aux_sym__multi_arity_fn_repeat1] = STATE(125),
    [anon_sym_LPAREN] = ACTIONS(315),
    [anon_sym_LBRACK] = ACTIONS(37),
  },
  [219] = {
    [aux_sym_ignore_form_repeat1] = STATE(289),
    [sym_nil] = ACTIONS(856),
    [sym_true] = ACTIONS(856),
    [sym_false] = ACTIONS(856),
    [sym_number_long] = ACTIONS(856),
    [sym_number_double] = ACTIONS(856),
    [anon_sym_BSLASH] = ACTIONS(856),
    [anon_sym_DQUOTE] = ACTIONS(856),
    [anon_sym_POUND_DQUOTE] = ACTIONS(856),
    [anon_sym_SQUOTE] = ACTIONS(856),
    [anon_sym_LPARENquote] = ACTIONS(856),
    [anon_sym_COLON] = ACTIONS(856),
    [anon_sym_COLON_COLON] = ACTIONS(856),
    [anon_sym_DASH_GT] = ACTIONS(856),
    [anon_sym_DASH_GT_GT] = ACTIONS(856),
    [anon_sym_as_DASH_GT] = ACTIONS(856),
    [anon_sym_some_DASH_GT] = ACTIONS(856),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(856),
    [anon_sym_cond_DASH_GT] = ACTIONS(856),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(856),
    [sym__symbol_chars] = ACTIONS(856),
    [anon_sym_LPAREN] = ACTIONS(856),
    [anon_sym_LBRACK] = ACTIONS(856),
    [anon_sym_RBRACK] = ACTIONS(856),
    [anon_sym_LBRACE] = ACTIONS(856),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(856),
    [anon_sym_POUND] = ACTIONS(856),
    [anon_sym_POUND_LBRACE] = ACTIONS(856),
    [anon_sym_SEMI] = ACTIONS(856),
    [anon_sym_POUND_BANG] = ACTIONS(856),
    [anon_sym_POUND_] = ACTIONS(856),
    [anon_sym_] = ACTIONS(1056),
    [anon_sym_LPARENcomment] = ACTIONS(856),
    [anon_sym_POUND_LPAREN] = ACTIONS(856),
  },
  [220] = {
    [aux_sym_ignore_form_repeat1] = STATE(290),
    [sym_nil] = ACTIONS(856),
    [sym_true] = ACTIONS(856),
    [sym_false] = ACTIONS(856),
    [sym_number_long] = ACTIONS(856),
    [sym_number_double] = ACTIONS(856),
    [anon_sym_BSLASH] = ACTIONS(856),
    [anon_sym_DQUOTE] = ACTIONS(856),
    [anon_sym_POUND_DQUOTE] = ACTIONS(856),
    [anon_sym_SQUOTE] = ACTIONS(856),
    [anon_sym_LPARENquote] = ACTIONS(856),
    [anon_sym_COLON] = ACTIONS(856),
    [anon_sym_COLON_COLON] = ACTIONS(856),
    [anon_sym_DASH_GT] = ACTIONS(856),
    [anon_sym_DASH_GT_GT] = ACTIONS(856),
    [anon_sym_as_DASH_GT] = ACTIONS(856),
    [anon_sym_some_DASH_GT] = ACTIONS(856),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(856),
    [anon_sym_cond_DASH_GT] = ACTIONS(856),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(856),
    [sym__symbol_chars] = ACTIONS(856),
    [anon_sym_LPAREN] = ACTIONS(856),
    [anon_sym_LBRACK] = ACTIONS(856),
    [anon_sym_RBRACK] = ACTIONS(856),
    [anon_sym_LBRACE] = ACTIONS(856),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(856),
    [anon_sym_POUND] = ACTIONS(856),
    [anon_sym_POUND_LBRACE] = ACTIONS(856),
    [anon_sym_SEMI] = ACTIONS(856),
    [anon_sym_POUND_BANG] = ACTIONS(856),
    [anon_sym_POUND_] = ACTIONS(856),
    [anon_sym_] = ACTIONS(1058),
    [anon_sym_LPARENcomment] = ACTIONS(856),
    [anon_sym_POUND_LPAREN] = ACTIONS(856),
  },
  [221] = {
    [aux_sym_ignore_form_repeat1] = STATE(291),
    [sym_nil] = ACTIONS(856),
    [sym_true] = ACTIONS(856),
    [sym_false] = ACTIONS(856),
    [sym_number_long] = ACTIONS(856),
    [sym_number_double] = ACTIONS(856),
    [anon_sym_BSLASH] = ACTIONS(856),
    [anon_sym_DQUOTE] = ACTIONS(856),
    [anon_sym_POUND_DQUOTE] = ACTIONS(856),
    [anon_sym_SQUOTE] = ACTIONS(856),
    [anon_sym_LPARENquote] = ACTIONS(856),
    [anon_sym_COLON] = ACTIONS(856),
    [anon_sym_COLON_COLON] = ACTIONS(856),
    [anon_sym_DASH_GT] = ACTIONS(856),
    [anon_sym_DASH_GT_GT] = ACTIONS(856),
    [anon_sym_as_DASH_GT] = ACTIONS(856),
    [anon_sym_some_DASH_GT] = ACTIONS(856),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(856),
    [anon_sym_cond_DASH_GT] = ACTIONS(856),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(856),
    [sym__symbol_chars] = ACTIONS(856),
    [anon_sym_LPAREN] = ACTIONS(856),
    [anon_sym_LBRACK] = ACTIONS(856),
    [anon_sym_LBRACE] = ACTIONS(856),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(856),
    [anon_sym_POUND] = ACTIONS(856),
    [anon_sym_POUND_LBRACE] = ACTIONS(856),
    [anon_sym_SEMI] = ACTIONS(856),
    [anon_sym_POUND_BANG] = ACTIONS(856),
    [anon_sym_POUND_] = ACTIONS(856),
    [anon_sym_] = ACTIONS(1060),
    [anon_sym_LPARENcomment] = ACTIONS(856),
    [anon_sym_POUND_LPAREN] = ACTIONS(856),
  },
  [222] = {
    [aux_sym_ignore_form_repeat1] = STATE(292),
    [sym_nil] = ACTIONS(856),
    [sym_true] = ACTIONS(856),
    [sym_false] = ACTIONS(856),
    [sym_number_long] = ACTIONS(856),
    [sym_number_double] = ACTIONS(856),
    [anon_sym_BSLASH] = ACTIONS(856),
    [anon_sym_DQUOTE] = ACTIONS(856),
    [anon_sym_POUND_DQUOTE] = ACTIONS(856),
    [anon_sym_SQUOTE] = ACTIONS(856),
    [anon_sym_LPARENquote] = ACTIONS(856),
    [anon_sym_COLON] = ACTIONS(856),
    [anon_sym_COLON_COLON] = ACTIONS(856),
    [anon_sym_DASH_GT] = ACTIONS(856),
    [anon_sym_DASH_GT_GT] = ACTIONS(856),
    [anon_sym_as_DASH_GT] = ACTIONS(856),
    [anon_sym_some_DASH_GT] = ACTIONS(856),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(856),
    [anon_sym_cond_DASH_GT] = ACTIONS(856),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(856),
    [sym__symbol_chars] = ACTIONS(856),
    [anon_sym_LPAREN] = ACTIONS(856),
    [anon_sym_LBRACK] = ACTIONS(856),
    [anon_sym_LBRACE] = ACTIONS(856),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(856),
    [anon_sym_POUND] = ACTIONS(856),
    [anon_sym_POUND_LBRACE] = ACTIONS(856),
    [anon_sym_SEMI] = ACTIONS(856),
    [anon_sym_POUND_BANG] = ACTIONS(856),
    [anon_sym_POUND_] = ACTIONS(856),
    [anon_sym_] = ACTIONS(1062),
    [anon_sym_LPARENcomment] = ACTIONS(856),
    [anon_sym_POUND_LPAREN] = ACTIONS(856),
  },
  [223] = {
    [ts_builtin_sym_end] = ACTIONS(1064),
    [sym_nil] = ACTIONS(1066),
    [sym_true] = ACTIONS(1066),
    [sym_false] = ACTIONS(1066),
    [sym_number_long] = ACTIONS(1066),
    [sym_number_double] = ACTIONS(1064),
    [anon_sym_BSLASH] = ACTIONS(1064),
    [anon_sym_DQUOTE] = ACTIONS(1064),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1064),
    [anon_sym_SQUOTE] = ACTIONS(1064),
    [anon_sym_LPARENquote] = ACTIONS(1064),
    [anon_sym_RPAREN] = ACTIONS(1064),
    [anon_sym_COLON] = ACTIONS(1066),
    [anon_sym_COLON_COLON] = ACTIONS(1064),
    [anon_sym_DASH_GT] = ACTIONS(1066),
    [anon_sym_DASH_GT_GT] = ACTIONS(1064),
    [anon_sym_as_DASH_GT] = ACTIONS(1064),
    [anon_sym_some_DASH_GT] = ACTIONS(1066),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1064),
    [anon_sym_cond_DASH_GT] = ACTIONS(1066),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1064),
    [sym__symbol_chars] = ACTIONS(1066),
    [anon_sym_LPAREN] = ACTIONS(1066),
    [anon_sym_LBRACK] = ACTIONS(1064),
    [anon_sym_RBRACK] = ACTIONS(1064),
    [anon_sym_LBRACE] = ACTIONS(1064),
    [anon_sym_RBRACE] = ACTIONS(1064),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1064),
    [anon_sym_POUND] = ACTIONS(1066),
    [anon_sym_POUND_LBRACE] = ACTIONS(1064),
    [anon_sym_SEMI] = ACTIONS(1064),
    [anon_sym_POUND_BANG] = ACTIONS(1064),
    [anon_sym_POUND_] = ACTIONS(1064),
    [anon_sym_LPARENcomment] = ACTIONS(1064),
    [anon_sym_POUND_LPAREN] = ACTIONS(1064),
    [sym_shorthand_fn_arg] = ACTIONS(1064),
  },
  [224] = {
    [sym__anything] = STATE(65),
    [sym__literal] = STATE(65),
    [sym__collection_literal] = STATE(65),
    [sym_boolean] = STATE(65),
    [sym_number] = STATE(65),
    [sym__number] = STATE(24),
    [sym_character] = STATE(65),
    [sym__character] = STATE(25),
    [sym_string] = STATE(65),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(65),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(65),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(65),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(65),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(65),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(65),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(65),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym__hash_map_kv_pair] = STATE(137),
    [sym__hash_map_key] = STATE(65),
    [sym_set] = STATE(65),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(65),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_function] = STATE(65),
    [sym_anonymous_fn] = STATE(36),
    [sym_shorthand_fn] = STATE(36),
    [sym_defn] = STATE(36),
    [aux_sym__hash_map_repeat1] = STATE(137),
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
    [anon_sym_RBRACE] = ACTIONS(1068),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(123),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
  },
  [225] = {
    [aux_sym_ignore_form_repeat1] = STATE(294),
    [sym_nil] = ACTIONS(856),
    [sym_true] = ACTIONS(856),
    [sym_false] = ACTIONS(856),
    [sym_number_long] = ACTIONS(856),
    [sym_number_double] = ACTIONS(856),
    [anon_sym_BSLASH] = ACTIONS(856),
    [anon_sym_DQUOTE] = ACTIONS(856),
    [anon_sym_POUND_DQUOTE] = ACTIONS(856),
    [anon_sym_SQUOTE] = ACTIONS(856),
    [anon_sym_LPARENquote] = ACTIONS(856),
    [anon_sym_COLON] = ACTIONS(856),
    [anon_sym_COLON_COLON] = ACTIONS(856),
    [anon_sym_DASH_GT] = ACTIONS(856),
    [anon_sym_DASH_GT_GT] = ACTIONS(856),
    [anon_sym_as_DASH_GT] = ACTIONS(856),
    [anon_sym_some_DASH_GT] = ACTIONS(856),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(856),
    [anon_sym_cond_DASH_GT] = ACTIONS(856),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(856),
    [sym__symbol_chars] = ACTIONS(856),
    [anon_sym_LPAREN] = ACTIONS(856),
    [anon_sym_LBRACK] = ACTIONS(856),
    [anon_sym_LBRACE] = ACTIONS(856),
    [anon_sym_RBRACE] = ACTIONS(856),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(856),
    [anon_sym_POUND] = ACTIONS(856),
    [anon_sym_POUND_LBRACE] = ACTIONS(856),
    [anon_sym_SEMI] = ACTIONS(856),
    [anon_sym_POUND_BANG] = ACTIONS(856),
    [anon_sym_POUND_] = ACTIONS(856),
    [anon_sym_] = ACTIONS(1070),
    [anon_sym_LPARENcomment] = ACTIONS(856),
    [anon_sym_POUND_LPAREN] = ACTIONS(856),
  },
  [226] = {
    [aux_sym_ignore_form_repeat1] = STATE(295),
    [sym_nil] = ACTIONS(856),
    [sym_true] = ACTIONS(856),
    [sym_false] = ACTIONS(856),
    [sym_number_long] = ACTIONS(856),
    [sym_number_double] = ACTIONS(856),
    [anon_sym_BSLASH] = ACTIONS(856),
    [anon_sym_DQUOTE] = ACTIONS(856),
    [anon_sym_POUND_DQUOTE] = ACTIONS(856),
    [anon_sym_SQUOTE] = ACTIONS(856),
    [anon_sym_LPARENquote] = ACTIONS(856),
    [anon_sym_COLON] = ACTIONS(856),
    [anon_sym_COLON_COLON] = ACTIONS(856),
    [anon_sym_DASH_GT] = ACTIONS(856),
    [anon_sym_DASH_GT_GT] = ACTIONS(856),
    [anon_sym_as_DASH_GT] = ACTIONS(856),
    [anon_sym_some_DASH_GT] = ACTIONS(856),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(856),
    [anon_sym_cond_DASH_GT] = ACTIONS(856),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(856),
    [sym__symbol_chars] = ACTIONS(856),
    [anon_sym_LPAREN] = ACTIONS(856),
    [anon_sym_LBRACK] = ACTIONS(856),
    [anon_sym_LBRACE] = ACTIONS(856),
    [anon_sym_RBRACE] = ACTIONS(856),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(856),
    [anon_sym_POUND] = ACTIONS(856),
    [anon_sym_POUND_LBRACE] = ACTIONS(856),
    [anon_sym_SEMI] = ACTIONS(856),
    [anon_sym_POUND_BANG] = ACTIONS(856),
    [anon_sym_POUND_] = ACTIONS(856),
    [anon_sym_] = ACTIONS(1072),
    [anon_sym_LPARENcomment] = ACTIONS(856),
    [anon_sym_POUND_LPAREN] = ACTIONS(856),
  },
  [227] = {
    [ts_builtin_sym_end] = ACTIONS(572),
    [sym_nil] = ACTIONS(574),
    [sym_true] = ACTIONS(574),
    [sym_false] = ACTIONS(574),
    [sym_number_long] = ACTIONS(574),
    [sym_number_double] = ACTIONS(574),
    [anon_sym_BSLASH] = ACTIONS(574),
    [anon_sym_DQUOTE] = ACTIONS(574),
    [anon_sym_POUND_DQUOTE] = ACTIONS(574),
    [anon_sym_SQUOTE] = ACTIONS(574),
    [anon_sym_LPARENquote] = ACTIONS(574),
    [anon_sym_RPAREN] = ACTIONS(574),
    [anon_sym_COLON] = ACTIONS(574),
    [anon_sym_COLON_COLON] = ACTIONS(574),
    [anon_sym_DASH_GT] = ACTIONS(574),
    [anon_sym_DASH_GT_GT] = ACTIONS(574),
    [anon_sym_as_DASH_GT] = ACTIONS(574),
    [anon_sym_some_DASH_GT] = ACTIONS(574),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(574),
    [anon_sym_cond_DASH_GT] = ACTIONS(574),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(574),
    [sym__symbol_chars] = ACTIONS(574),
    [anon_sym_LPAREN] = ACTIONS(574),
    [anon_sym_LBRACK] = ACTIONS(574),
    [anon_sym_RBRACK] = ACTIONS(574),
    [anon_sym_LBRACE] = ACTIONS(574),
    [anon_sym_RBRACE] = ACTIONS(574),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(574),
    [anon_sym_POUND] = ACTIONS(574),
    [anon_sym_POUND_LBRACE] = ACTIONS(574),
    [anon_sym_SEMI] = ACTIONS(574),
    [anon_sym_POUND_BANG] = ACTIONS(574),
    [anon_sym_POUND_] = ACTIONS(574),
    [anon_sym_] = ACTIONS(572),
    [anon_sym_LPARENcomment] = ACTIONS(574),
    [anon_sym_POUND_LPAREN] = ACTIONS(574),
    [sym_shorthand_fn_arg] = ACTIONS(574),
  },
  [228] = {
    [sym__keyword_chars] = ACTIONS(1074),
  },
  [229] = {
    [ts_builtin_sym_end] = ACTIONS(600),
    [sym_nil] = ACTIONS(602),
    [sym_true] = ACTIONS(602),
    [sym_false] = ACTIONS(602),
    [sym_number_long] = ACTIONS(602),
    [sym_number_double] = ACTIONS(602),
    [anon_sym_BSLASH] = ACTIONS(602),
    [anon_sym_DQUOTE] = ACTIONS(602),
    [anon_sym_POUND_DQUOTE] = ACTIONS(602),
    [anon_sym_SQUOTE] = ACTIONS(602),
    [anon_sym_LPARENquote] = ACTIONS(602),
    [anon_sym_RPAREN] = ACTIONS(602),
    [anon_sym_COLON] = ACTIONS(602),
    [anon_sym_COLON_COLON] = ACTIONS(602),
    [anon_sym_DASH_GT] = ACTIONS(602),
    [anon_sym_DASH_GT_GT] = ACTIONS(602),
    [anon_sym_as_DASH_GT] = ACTIONS(602),
    [anon_sym_some_DASH_GT] = ACTIONS(602),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(602),
    [anon_sym_cond_DASH_GT] = ACTIONS(602),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(602),
    [sym__symbol_chars] = ACTIONS(602),
    [anon_sym_LPAREN] = ACTIONS(602),
    [anon_sym_LBRACK] = ACTIONS(602),
    [anon_sym_RBRACK] = ACTIONS(602),
    [anon_sym_LBRACE] = ACTIONS(602),
    [anon_sym_RBRACE] = ACTIONS(602),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(602),
    [anon_sym_POUND] = ACTIONS(602),
    [anon_sym_POUND_LBRACE] = ACTIONS(602),
    [anon_sym_SEMI] = ACTIONS(602),
    [anon_sym_POUND_BANG] = ACTIONS(602),
    [anon_sym_POUND_] = ACTIONS(602),
    [anon_sym_] = ACTIONS(600),
    [anon_sym_LPARENcomment] = ACTIONS(602),
    [anon_sym_POUND_LPAREN] = ACTIONS(602),
    [sym_shorthand_fn_arg] = ACTIONS(602),
  },
  [230] = {
    [ts_builtin_sym_end] = ACTIONS(1076),
    [sym_nil] = ACTIONS(1078),
    [sym_true] = ACTIONS(1078),
    [sym_false] = ACTIONS(1078),
    [sym_number_long] = ACTIONS(1078),
    [sym_number_double] = ACTIONS(1078),
    [anon_sym_BSLASH] = ACTIONS(1078),
    [anon_sym_DQUOTE] = ACTIONS(1078),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1078),
    [anon_sym_SQUOTE] = ACTIONS(1078),
    [anon_sym_LPARENquote] = ACTIONS(1078),
    [anon_sym_RPAREN] = ACTIONS(1078),
    [anon_sym_COLON] = ACTIONS(1078),
    [anon_sym_COLON_COLON] = ACTIONS(1078),
    [anon_sym_DASH_GT] = ACTIONS(1078),
    [anon_sym_DASH_GT_GT] = ACTIONS(1078),
    [anon_sym_as_DASH_GT] = ACTIONS(1078),
    [anon_sym_some_DASH_GT] = ACTIONS(1078),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1078),
    [anon_sym_cond_DASH_GT] = ACTIONS(1078),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1078),
    [sym__symbol_chars] = ACTIONS(1078),
    [anon_sym_LPAREN] = ACTIONS(1078),
    [anon_sym_LBRACK] = ACTIONS(1078),
    [anon_sym_RBRACK] = ACTIONS(1078),
    [anon_sym_LBRACE] = ACTIONS(1078),
    [anon_sym_RBRACE] = ACTIONS(1078),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1078),
    [anon_sym_POUND] = ACTIONS(1078),
    [anon_sym_POUND_LBRACE] = ACTIONS(1078),
    [anon_sym_SEMI] = ACTIONS(1078),
    [anon_sym_POUND_BANG] = ACTIONS(1078),
    [anon_sym_POUND_] = ACTIONS(1078),
    [anon_sym_] = ACTIONS(1076),
    [anon_sym_LPARENcomment] = ACTIONS(1078),
    [anon_sym_POUND_LPAREN] = ACTIONS(1078),
    [sym_shorthand_fn_arg] = ACTIONS(1078),
  },
  [231] = {
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
  [232] = {
    [aux_sym__string_repeat1] = STATE(106),
    [anon_sym_DQUOTE] = ACTIONS(1080),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(269),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(269),
  },
  [233] = {
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
  [234] = {
    [sym_number_long] = ACTIONS(295),
    [sym_number_double] = ACTIONS(295),
    [anon_sym_DQUOTE] = ACTIONS(295),
    [anon_sym_COLON] = ACTIONS(295),
    [anon_sym_COLON_COLON] = ACTIONS(295),
    [anon_sym_SLASH] = ACTIONS(1082),
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
  [235] = {
    [sym__symbol_chars] = ACTIONS(1084),
  },
  [236] = {
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
  [237] = {
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
    [aux_sym_comment_macro_repeat1] = STATE(190),
    [sym_number_long] = ACTIONS(471),
    [sym_number_double] = ACTIONS(471),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(1086),
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
  [238] = {
    [sym_number_long] = ACTIONS(808),
    [sym_number_double] = ACTIONS(808),
    [anon_sym_DQUOTE] = ACTIONS(808),
    [anon_sym_COLON] = ACTIONS(808),
    [anon_sym_COLON_COLON] = ACTIONS(808),
    [anon_sym_DASH_GT] = ACTIONS(808),
    [anon_sym_DASH_GT_GT] = ACTIONS(808),
    [anon_sym_as_DASH_GT] = ACTIONS(808),
    [anon_sym_some_DASH_GT] = ACTIONS(808),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(808),
    [anon_sym_cond_DASH_GT] = ACTIONS(808),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(808),
    [sym__symbol_chars] = ACTIONS(808),
    [anon_sym_LPAREN] = ACTIONS(808),
    [anon_sym_LBRACK] = ACTIONS(808),
    [anon_sym_RBRACK] = ACTIONS(808),
    [anon_sym_LBRACE] = ACTIONS(808),
    [anon_sym_POUND] = ACTIONS(808),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(808),
  },
  [239] = {
    [sym__number] = STATE(244),
    [sym__string] = STATE(244),
    [sym__keyword] = STATE(244),
    [sym__unqualified_keyword] = STATE(244),
    [sym_qualified_keyword] = STATE(244),
    [sym__symbol] = STATE(244),
    [sym_threading_macro] = STATE(244),
    [sym_qualified_symbol] = STATE(244),
    [sym__one_form] = STATE(244),
    [sym__paren_sequence] = STATE(244),
    [sym__bracket_sequence] = STATE(244),
    [sym__curly_brace_sequence] = STATE(244),
    [aux_sym_comment_macro_repeat1] = STATE(244),
    [sym_number_long] = ACTIONS(816),
    [sym_number_double] = ACTIONS(816),
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
    [anon_sym_RBRACK] = ACTIONS(1088),
    [anon_sym_LBRACE] = ACTIONS(405),
    [anon_sym_POUND] = ACTIONS(407),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(816),
  },
  [240] = {
    [sym_number_long] = ACTIONS(844),
    [sym_number_double] = ACTIONS(844),
    [anon_sym_DQUOTE] = ACTIONS(844),
    [anon_sym_COLON] = ACTIONS(844),
    [anon_sym_COLON_COLON] = ACTIONS(844),
    [anon_sym_DASH_GT] = ACTIONS(844),
    [anon_sym_DASH_GT_GT] = ACTIONS(844),
    [anon_sym_as_DASH_GT] = ACTIONS(844),
    [anon_sym_some_DASH_GT] = ACTIONS(844),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(844),
    [anon_sym_cond_DASH_GT] = ACTIONS(844),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(844),
    [sym__symbol_chars] = ACTIONS(844),
    [anon_sym_LPAREN] = ACTIONS(844),
    [anon_sym_LBRACK] = ACTIONS(844),
    [anon_sym_RBRACK] = ACTIONS(844),
    [anon_sym_LBRACE] = ACTIONS(844),
    [anon_sym_POUND] = ACTIONS(844),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(844),
  },
  [241] = {
    [sym__number] = STATE(258),
    [sym__string] = STATE(258),
    [sym__keyword] = STATE(258),
    [sym__unqualified_keyword] = STATE(258),
    [sym_qualified_keyword] = STATE(258),
    [sym__symbol] = STATE(258),
    [sym_threading_macro] = STATE(258),
    [sym_qualified_symbol] = STATE(258),
    [sym__one_form] = STATE(258),
    [sym__paren_sequence] = STATE(258),
    [sym__bracket_sequence] = STATE(258),
    [sym__curly_brace_sequence] = STATE(258),
    [aux_sym_comment_macro_repeat1] = STATE(258),
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
    [anon_sym_RBRACE] = ACTIONS(1090),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(848),
  },
  [242] = {
    [sym__number] = STATE(303),
    [sym__string] = STATE(303),
    [sym__keyword] = STATE(303),
    [sym__unqualified_keyword] = STATE(303),
    [sym_qualified_keyword] = STATE(303),
    [sym__symbol] = STATE(303),
    [sym_threading_macro] = STATE(303),
    [sym_qualified_symbol] = STATE(303),
    [sym__one_form] = STATE(303),
    [sym__paren_sequence] = STATE(303),
    [sym__bracket_sequence] = STATE(303),
    [sym__curly_brace_sequence] = STATE(303),
    [aux_sym_comment_macro_repeat1] = STATE(303),
    [sym_number_long] = ACTIONS(1092),
    [sym_number_double] = ACTIONS(1092),
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
    [anon_sym_RBRACE] = ACTIONS(1090),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1092),
  },
  [243] = {
    [ts_builtin_sym_end] = ACTIONS(1094),
    [sym_nil] = ACTIONS(1096),
    [sym_true] = ACTIONS(1096),
    [sym_false] = ACTIONS(1096),
    [sym_number_long] = ACTIONS(1096),
    [sym_number_double] = ACTIONS(1096),
    [anon_sym_BSLASH] = ACTIONS(1096),
    [anon_sym_DQUOTE] = ACTIONS(1096),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1096),
    [anon_sym_SQUOTE] = ACTIONS(1096),
    [anon_sym_LPARENquote] = ACTIONS(1096),
    [anon_sym_RPAREN] = ACTIONS(1096),
    [anon_sym_COLON] = ACTIONS(1096),
    [anon_sym_COLON_COLON] = ACTIONS(1096),
    [anon_sym_DASH_GT] = ACTIONS(1096),
    [anon_sym_DASH_GT_GT] = ACTIONS(1096),
    [anon_sym_as_DASH_GT] = ACTIONS(1096),
    [anon_sym_some_DASH_GT] = ACTIONS(1096),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1096),
    [anon_sym_cond_DASH_GT] = ACTIONS(1096),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1096),
    [sym__symbol_chars] = ACTIONS(1096),
    [anon_sym_LPAREN] = ACTIONS(1096),
    [anon_sym_LBRACK] = ACTIONS(1096),
    [anon_sym_RBRACK] = ACTIONS(1096),
    [anon_sym_LBRACE] = ACTIONS(1096),
    [anon_sym_RBRACE] = ACTIONS(1096),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1096),
    [anon_sym_POUND] = ACTIONS(1096),
    [anon_sym_POUND_LBRACE] = ACTIONS(1096),
    [anon_sym_SEMI] = ACTIONS(1096),
    [anon_sym_POUND_BANG] = ACTIONS(1096),
    [anon_sym_POUND_] = ACTIONS(1096),
    [anon_sym_] = ACTIONS(1094),
    [anon_sym_LPARENcomment] = ACTIONS(1096),
    [anon_sym_POUND_LPAREN] = ACTIONS(1096),
    [sym_shorthand_fn_arg] = ACTIONS(1096),
  },
  [244] = {
    [sym__number] = STATE(244),
    [sym__string] = STATE(244),
    [sym__keyword] = STATE(244),
    [sym__unqualified_keyword] = STATE(244),
    [sym_qualified_keyword] = STATE(244),
    [sym__symbol] = STATE(244),
    [sym_threading_macro] = STATE(244),
    [sym_qualified_symbol] = STATE(244),
    [sym__one_form] = STATE(244),
    [sym__paren_sequence] = STATE(244),
    [sym__bracket_sequence] = STATE(244),
    [sym__curly_brace_sequence] = STATE(244),
    [aux_sym_comment_macro_repeat1] = STATE(244),
    [sym_number_long] = ACTIONS(1098),
    [sym_number_double] = ACTIONS(1098),
    [anon_sym_DQUOTE] = ACTIONS(1101),
    [anon_sym_COLON] = ACTIONS(1104),
    [anon_sym_COLON_COLON] = ACTIONS(1107),
    [anon_sym_DASH_GT] = ACTIONS(1110),
    [anon_sym_DASH_GT_GT] = ACTIONS(1110),
    [anon_sym_as_DASH_GT] = ACTIONS(1110),
    [anon_sym_some_DASH_GT] = ACTIONS(1110),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1110),
    [anon_sym_cond_DASH_GT] = ACTIONS(1110),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1110),
    [sym__symbol_chars] = ACTIONS(1113),
    [anon_sym_LPAREN] = ACTIONS(1116),
    [anon_sym_LBRACK] = ACTIONS(1119),
    [anon_sym_RBRACK] = ACTIONS(891),
    [anon_sym_LBRACE] = ACTIONS(1122),
    [anon_sym_POUND] = ACTIONS(1125),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1098),
  },
  [245] = {
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
  [246] = {
    [aux_sym__string_repeat1] = STATE(106),
    [anon_sym_DQUOTE] = ACTIONS(1128),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(269),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(269),
  },
  [247] = {
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
  [248] = {
    [sym_number_long] = ACTIONS(295),
    [sym_number_double] = ACTIONS(295),
    [anon_sym_DQUOTE] = ACTIONS(295),
    [anon_sym_COLON] = ACTIONS(295),
    [anon_sym_COLON_COLON] = ACTIONS(295),
    [anon_sym_SLASH] = ACTIONS(1130),
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
  [249] = {
    [sym__symbol_chars] = ACTIONS(1132),
  },
  [250] = {
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
  [251] = {
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
    [aux_sym_comment_macro_repeat1] = STATE(190),
    [sym_number_long] = ACTIONS(471),
    [sym_number_double] = ACTIONS(471),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(1134),
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
  [252] = {
    [sym_number_long] = ACTIONS(808),
    [sym_number_double] = ACTIONS(808),
    [anon_sym_DQUOTE] = ACTIONS(808),
    [anon_sym_COLON] = ACTIONS(808),
    [anon_sym_COLON_COLON] = ACTIONS(808),
    [anon_sym_DASH_GT] = ACTIONS(808),
    [anon_sym_DASH_GT_GT] = ACTIONS(808),
    [anon_sym_as_DASH_GT] = ACTIONS(808),
    [anon_sym_some_DASH_GT] = ACTIONS(808),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(808),
    [anon_sym_cond_DASH_GT] = ACTIONS(808),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(808),
    [sym__symbol_chars] = ACTIONS(808),
    [anon_sym_LPAREN] = ACTIONS(808),
    [anon_sym_LBRACK] = ACTIONS(808),
    [anon_sym_LBRACE] = ACTIONS(808),
    [anon_sym_RBRACE] = ACTIONS(808),
    [anon_sym_POUND] = ACTIONS(808),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(808),
  },
  [253] = {
    [sym__number] = STATE(244),
    [sym__string] = STATE(244),
    [sym__keyword] = STATE(244),
    [sym__unqualified_keyword] = STATE(244),
    [sym_qualified_keyword] = STATE(244),
    [sym__symbol] = STATE(244),
    [sym_threading_macro] = STATE(244),
    [sym_qualified_symbol] = STATE(244),
    [sym__one_form] = STATE(244),
    [sym__paren_sequence] = STATE(244),
    [sym__bracket_sequence] = STATE(244),
    [sym__curly_brace_sequence] = STATE(244),
    [aux_sym_comment_macro_repeat1] = STATE(244),
    [sym_number_long] = ACTIONS(816),
    [sym_number_double] = ACTIONS(816),
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
    [anon_sym_RBRACK] = ACTIONS(1136),
    [anon_sym_LBRACE] = ACTIONS(405),
    [anon_sym_POUND] = ACTIONS(407),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(816),
  },
  [254] = {
    [sym_number_long] = ACTIONS(844),
    [sym_number_double] = ACTIONS(844),
    [anon_sym_DQUOTE] = ACTIONS(844),
    [anon_sym_COLON] = ACTIONS(844),
    [anon_sym_COLON_COLON] = ACTIONS(844),
    [anon_sym_DASH_GT] = ACTIONS(844),
    [anon_sym_DASH_GT_GT] = ACTIONS(844),
    [anon_sym_as_DASH_GT] = ACTIONS(844),
    [anon_sym_some_DASH_GT] = ACTIONS(844),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(844),
    [anon_sym_cond_DASH_GT] = ACTIONS(844),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(844),
    [sym__symbol_chars] = ACTIONS(844),
    [anon_sym_LPAREN] = ACTIONS(844),
    [anon_sym_LBRACK] = ACTIONS(844),
    [anon_sym_LBRACE] = ACTIONS(844),
    [anon_sym_RBRACE] = ACTIONS(844),
    [anon_sym_POUND] = ACTIONS(844),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(844),
  },
  [255] = {
    [sym__number] = STATE(258),
    [sym__string] = STATE(258),
    [sym__keyword] = STATE(258),
    [sym__unqualified_keyword] = STATE(258),
    [sym_qualified_keyword] = STATE(258),
    [sym__symbol] = STATE(258),
    [sym_threading_macro] = STATE(258),
    [sym_qualified_symbol] = STATE(258),
    [sym__one_form] = STATE(258),
    [sym__paren_sequence] = STATE(258),
    [sym__bracket_sequence] = STATE(258),
    [sym__curly_brace_sequence] = STATE(258),
    [aux_sym_comment_macro_repeat1] = STATE(258),
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
    [anon_sym_RBRACE] = ACTIONS(1138),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(848),
  },
  [256] = {
    [sym__number] = STATE(310),
    [sym__string] = STATE(310),
    [sym__keyword] = STATE(310),
    [sym__unqualified_keyword] = STATE(310),
    [sym_qualified_keyword] = STATE(310),
    [sym__symbol] = STATE(310),
    [sym_threading_macro] = STATE(310),
    [sym_qualified_symbol] = STATE(310),
    [sym__one_form] = STATE(310),
    [sym__paren_sequence] = STATE(310),
    [sym__bracket_sequence] = STATE(310),
    [sym__curly_brace_sequence] = STATE(310),
    [aux_sym_comment_macro_repeat1] = STATE(310),
    [sym_number_long] = ACTIONS(1140),
    [sym_number_double] = ACTIONS(1140),
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
    [anon_sym_RBRACE] = ACTIONS(1138),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1140),
  },
  [257] = {
    [ts_builtin_sym_end] = ACTIONS(1142),
    [sym_nil] = ACTIONS(1144),
    [sym_true] = ACTIONS(1144),
    [sym_false] = ACTIONS(1144),
    [sym_number_long] = ACTIONS(1144),
    [sym_number_double] = ACTIONS(1144),
    [anon_sym_BSLASH] = ACTIONS(1144),
    [anon_sym_DQUOTE] = ACTIONS(1144),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1144),
    [anon_sym_SQUOTE] = ACTIONS(1144),
    [anon_sym_LPARENquote] = ACTIONS(1144),
    [anon_sym_RPAREN] = ACTIONS(1144),
    [anon_sym_COLON] = ACTIONS(1144),
    [anon_sym_COLON_COLON] = ACTIONS(1144),
    [anon_sym_DASH_GT] = ACTIONS(1144),
    [anon_sym_DASH_GT_GT] = ACTIONS(1144),
    [anon_sym_as_DASH_GT] = ACTIONS(1144),
    [anon_sym_some_DASH_GT] = ACTIONS(1144),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1144),
    [anon_sym_cond_DASH_GT] = ACTIONS(1144),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1144),
    [sym__symbol_chars] = ACTIONS(1144),
    [anon_sym_LPAREN] = ACTIONS(1144),
    [anon_sym_LBRACK] = ACTIONS(1144),
    [anon_sym_RBRACK] = ACTIONS(1144),
    [anon_sym_LBRACE] = ACTIONS(1144),
    [anon_sym_RBRACE] = ACTIONS(1144),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1144),
    [anon_sym_POUND] = ACTIONS(1144),
    [anon_sym_POUND_LBRACE] = ACTIONS(1144),
    [anon_sym_SEMI] = ACTIONS(1144),
    [anon_sym_POUND_BANG] = ACTIONS(1144),
    [anon_sym_POUND_] = ACTIONS(1144),
    [anon_sym_] = ACTIONS(1142),
    [anon_sym_LPARENcomment] = ACTIONS(1144),
    [anon_sym_POUND_LPAREN] = ACTIONS(1144),
    [sym_shorthand_fn_arg] = ACTIONS(1144),
  },
  [258] = {
    [sym__number] = STATE(258),
    [sym__string] = STATE(258),
    [sym__keyword] = STATE(258),
    [sym__unqualified_keyword] = STATE(258),
    [sym_qualified_keyword] = STATE(258),
    [sym__symbol] = STATE(258),
    [sym_threading_macro] = STATE(258),
    [sym_qualified_symbol] = STATE(258),
    [sym__one_form] = STATE(258),
    [sym__paren_sequence] = STATE(258),
    [sym__bracket_sequence] = STATE(258),
    [sym__curly_brace_sequence] = STATE(258),
    [aux_sym_comment_macro_repeat1] = STATE(258),
    [sym_number_long] = ACTIONS(1146),
    [sym_number_double] = ACTIONS(1146),
    [anon_sym_DQUOTE] = ACTIONS(1149),
    [anon_sym_COLON] = ACTIONS(1152),
    [anon_sym_COLON_COLON] = ACTIONS(1155),
    [anon_sym_DASH_GT] = ACTIONS(1158),
    [anon_sym_DASH_GT_GT] = ACTIONS(1158),
    [anon_sym_as_DASH_GT] = ACTIONS(1158),
    [anon_sym_some_DASH_GT] = ACTIONS(1158),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1158),
    [anon_sym_cond_DASH_GT] = ACTIONS(1158),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1158),
    [sym__symbol_chars] = ACTIONS(1161),
    [anon_sym_LPAREN] = ACTIONS(1164),
    [anon_sym_LBRACK] = ACTIONS(1167),
    [anon_sym_LBRACE] = ACTIONS(1170),
    [anon_sym_RBRACE] = ACTIONS(891),
    [anon_sym_POUND] = ACTIONS(1173),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1146),
  },
  [259] = {
    [sym__number] = STATE(258),
    [sym__string] = STATE(258),
    [sym__keyword] = STATE(258),
    [sym__unqualified_keyword] = STATE(258),
    [sym_qualified_keyword] = STATE(258),
    [sym__symbol] = STATE(258),
    [sym_threading_macro] = STATE(258),
    [sym_qualified_symbol] = STATE(258),
    [sym__one_form] = STATE(258),
    [sym__paren_sequence] = STATE(258),
    [sym__bracket_sequence] = STATE(258),
    [sym__curly_brace_sequence] = STATE(258),
    [aux_sym_comment_macro_repeat1] = STATE(258),
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
    [anon_sym_RBRACE] = ACTIONS(1176),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(848),
  },
  [260] = {
    [aux_sym_ignore_form_repeat1] = STATE(260),
    [ts_builtin_sym_end] = ACTIONS(1178),
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
    [anon_sym_COLON] = ACTIONS(862),
    [anon_sym_COLON_COLON] = ACTIONS(862),
    [anon_sym_DASH_GT] = ACTIONS(862),
    [anon_sym_DASH_GT_GT] = ACTIONS(862),
    [anon_sym_as_DASH_GT] = ACTIONS(862),
    [anon_sym_some_DASH_GT] = ACTIONS(862),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(862),
    [anon_sym_cond_DASH_GT] = ACTIONS(862),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(862),
    [sym__symbol_chars] = ACTIONS(862),
    [anon_sym_LPAREN] = ACTIONS(862),
    [anon_sym_LBRACK] = ACTIONS(862),
    [anon_sym_LBRACE] = ACTIONS(862),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(862),
    [anon_sym_POUND] = ACTIONS(862),
    [anon_sym_POUND_LBRACE] = ACTIONS(862),
    [anon_sym_SEMI] = ACTIONS(862),
    [anon_sym_POUND_BANG] = ACTIONS(862),
    [anon_sym_POUND_] = ACTIONS(862),
    [anon_sym_] = ACTIONS(1180),
    [anon_sym_LPARENcomment] = ACTIONS(862),
    [anon_sym_POUND_LPAREN] = ACTIONS(862),
  },
  [261] = {
    [aux_sym_ignore_form_repeat1] = STATE(260),
    [ts_builtin_sym_end] = ACTIONS(1183),
    [sym_nil] = ACTIONS(1185),
    [sym_true] = ACTIONS(1185),
    [sym_false] = ACTIONS(1185),
    [sym_number_long] = ACTIONS(1185),
    [sym_number_double] = ACTIONS(1185),
    [anon_sym_BSLASH] = ACTIONS(1185),
    [anon_sym_DQUOTE] = ACTIONS(1185),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1185),
    [anon_sym_SQUOTE] = ACTIONS(1185),
    [anon_sym_LPARENquote] = ACTIONS(1185),
    [anon_sym_COLON] = ACTIONS(1185),
    [anon_sym_COLON_COLON] = ACTIONS(1185),
    [anon_sym_DASH_GT] = ACTIONS(1185),
    [anon_sym_DASH_GT_GT] = ACTIONS(1185),
    [anon_sym_as_DASH_GT] = ACTIONS(1185),
    [anon_sym_some_DASH_GT] = ACTIONS(1185),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1185),
    [anon_sym_cond_DASH_GT] = ACTIONS(1185),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1185),
    [sym__symbol_chars] = ACTIONS(1185),
    [anon_sym_LPAREN] = ACTIONS(1185),
    [anon_sym_LBRACK] = ACTIONS(1185),
    [anon_sym_LBRACE] = ACTIONS(1185),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1185),
    [anon_sym_POUND] = ACTIONS(1185),
    [anon_sym_POUND_LBRACE] = ACTIONS(1185),
    [anon_sym_SEMI] = ACTIONS(1185),
    [anon_sym_POUND_BANG] = ACTIONS(1185),
    [anon_sym_POUND_] = ACTIONS(1185),
    [anon_sym_] = ACTIONS(858),
    [anon_sym_LPARENcomment] = ACTIONS(1185),
    [anon_sym_POUND_LPAREN] = ACTIONS(1185),
  },
  [262] = {
    [sym_number_long] = ACTIONS(574),
    [sym_number_double] = ACTIONS(574),
    [anon_sym_DQUOTE] = ACTIONS(574),
    [anon_sym_RPAREN] = ACTIONS(574),
    [anon_sym_COLON] = ACTIONS(574),
    [anon_sym_COLON_COLON] = ACTIONS(574),
    [anon_sym_DASH_GT] = ACTIONS(574),
    [anon_sym_DASH_GT_GT] = ACTIONS(574),
    [anon_sym_as_DASH_GT] = ACTIONS(574),
    [anon_sym_some_DASH_GT] = ACTIONS(574),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(574),
    [anon_sym_cond_DASH_GT] = ACTIONS(574),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(574),
    [sym__symbol_chars] = ACTIONS(574),
    [anon_sym_LPAREN] = ACTIONS(574),
    [anon_sym_LBRACK] = ACTIONS(574),
    [anon_sym_LBRACE] = ACTIONS(574),
    [anon_sym_POUND] = ACTIONS(574),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(574),
  },
  [263] = {
    [sym__keyword_chars] = ACTIONS(1187),
  },
  [264] = {
    [sym_number_long] = ACTIONS(602),
    [sym_number_double] = ACTIONS(602),
    [anon_sym_DQUOTE] = ACTIONS(602),
    [anon_sym_RPAREN] = ACTIONS(602),
    [anon_sym_COLON] = ACTIONS(602),
    [anon_sym_COLON_COLON] = ACTIONS(602),
    [anon_sym_DASH_GT] = ACTIONS(602),
    [anon_sym_DASH_GT_GT] = ACTIONS(602),
    [anon_sym_as_DASH_GT] = ACTIONS(602),
    [anon_sym_some_DASH_GT] = ACTIONS(602),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(602),
    [anon_sym_cond_DASH_GT] = ACTIONS(602),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(602),
    [sym__symbol_chars] = ACTIONS(602),
    [anon_sym_LPAREN] = ACTIONS(602),
    [anon_sym_LBRACK] = ACTIONS(602),
    [anon_sym_LBRACE] = ACTIONS(602),
    [anon_sym_POUND] = ACTIONS(602),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(602),
  },
  [265] = {
    [sym_number_long] = ACTIONS(1078),
    [sym_number_double] = ACTIONS(1078),
    [anon_sym_DQUOTE] = ACTIONS(1078),
    [anon_sym_RPAREN] = ACTIONS(1078),
    [anon_sym_COLON] = ACTIONS(1078),
    [anon_sym_COLON_COLON] = ACTIONS(1078),
    [anon_sym_DASH_GT] = ACTIONS(1078),
    [anon_sym_DASH_GT_GT] = ACTIONS(1078),
    [anon_sym_as_DASH_GT] = ACTIONS(1078),
    [anon_sym_some_DASH_GT] = ACTIONS(1078),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1078),
    [anon_sym_cond_DASH_GT] = ACTIONS(1078),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1078),
    [sym__symbol_chars] = ACTIONS(1078),
    [anon_sym_LPAREN] = ACTIONS(1078),
    [anon_sym_LBRACK] = ACTIONS(1078),
    [anon_sym_LBRACE] = ACTIONS(1078),
    [anon_sym_POUND] = ACTIONS(1078),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1078),
  },
  [266] = {
    [sym_number_long] = ACTIONS(1096),
    [sym_number_double] = ACTIONS(1096),
    [anon_sym_DQUOTE] = ACTIONS(1096),
    [anon_sym_RPAREN] = ACTIONS(1096),
    [anon_sym_COLON] = ACTIONS(1096),
    [anon_sym_COLON_COLON] = ACTIONS(1096),
    [anon_sym_DASH_GT] = ACTIONS(1096),
    [anon_sym_DASH_GT_GT] = ACTIONS(1096),
    [anon_sym_as_DASH_GT] = ACTIONS(1096),
    [anon_sym_some_DASH_GT] = ACTIONS(1096),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1096),
    [anon_sym_cond_DASH_GT] = ACTIONS(1096),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1096),
    [sym__symbol_chars] = ACTIONS(1096),
    [anon_sym_LPAREN] = ACTIONS(1096),
    [anon_sym_LBRACK] = ACTIONS(1096),
    [anon_sym_LBRACE] = ACTIONS(1096),
    [anon_sym_POUND] = ACTIONS(1096),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1096),
  },
  [267] = {
    [sym_number_long] = ACTIONS(1144),
    [sym_number_double] = ACTIONS(1144),
    [anon_sym_DQUOTE] = ACTIONS(1144),
    [anon_sym_RPAREN] = ACTIONS(1144),
    [anon_sym_COLON] = ACTIONS(1144),
    [anon_sym_COLON_COLON] = ACTIONS(1144),
    [anon_sym_DASH_GT] = ACTIONS(1144),
    [anon_sym_DASH_GT_GT] = ACTIONS(1144),
    [anon_sym_as_DASH_GT] = ACTIONS(1144),
    [anon_sym_some_DASH_GT] = ACTIONS(1144),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1144),
    [anon_sym_cond_DASH_GT] = ACTIONS(1144),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1144),
    [sym__symbol_chars] = ACTIONS(1144),
    [anon_sym_LPAREN] = ACTIONS(1144),
    [anon_sym_LBRACK] = ACTIONS(1144),
    [anon_sym_LBRACE] = ACTIONS(1144),
    [anon_sym_POUND] = ACTIONS(1144),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1144),
  },
  [268] = {
    [sym__number] = STATE(258),
    [sym__string] = STATE(258),
    [sym__keyword] = STATE(258),
    [sym__unqualified_keyword] = STATE(258),
    [sym_qualified_keyword] = STATE(258),
    [sym__symbol] = STATE(258),
    [sym_threading_macro] = STATE(258),
    [sym_qualified_symbol] = STATE(258),
    [sym__one_form] = STATE(258),
    [sym__paren_sequence] = STATE(258),
    [sym__bracket_sequence] = STATE(258),
    [sym__curly_brace_sequence] = STATE(258),
    [aux_sym_comment_macro_repeat1] = STATE(258),
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
    [anon_sym_RBRACE] = ACTIONS(1189),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(848),
  },
  [269] = {
    [aux_sym_ignore_form_repeat1] = STATE(314),
    [sym_nil] = ACTIONS(856),
    [sym_true] = ACTIONS(856),
    [sym_false] = ACTIONS(856),
    [sym_number_long] = ACTIONS(856),
    [sym_number_double] = ACTIONS(856),
    [anon_sym_BSLASH] = ACTIONS(856),
    [anon_sym_DQUOTE] = ACTIONS(856),
    [anon_sym_POUND_DQUOTE] = ACTIONS(856),
    [anon_sym_SQUOTE] = ACTIONS(856),
    [anon_sym_LPARENquote] = ACTIONS(856),
    [anon_sym_RPAREN] = ACTIONS(856),
    [anon_sym_COLON] = ACTIONS(856),
    [anon_sym_COLON_COLON] = ACTIONS(856),
    [anon_sym_DASH_GT] = ACTIONS(856),
    [anon_sym_DASH_GT_GT] = ACTIONS(856),
    [anon_sym_as_DASH_GT] = ACTIONS(856),
    [anon_sym_some_DASH_GT] = ACTIONS(856),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(856),
    [anon_sym_cond_DASH_GT] = ACTIONS(856),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(856),
    [sym__symbol_chars] = ACTIONS(856),
    [anon_sym_LPAREN] = ACTIONS(856),
    [anon_sym_LBRACK] = ACTIONS(856),
    [anon_sym_LBRACE] = ACTIONS(856),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(856),
    [anon_sym_POUND] = ACTIONS(856),
    [anon_sym_POUND_LBRACE] = ACTIONS(856),
    [anon_sym_SEMI] = ACTIONS(856),
    [anon_sym_POUND_BANG] = ACTIONS(856),
    [anon_sym_POUND_] = ACTIONS(856),
    [anon_sym_] = ACTIONS(1191),
    [anon_sym_LPARENcomment] = ACTIONS(856),
    [anon_sym_POUND_LPAREN] = ACTIONS(856),
    [sym_shorthand_fn_arg] = ACTIONS(856),
  },
  [270] = {
    [aux_sym_ignore_form_repeat1] = STATE(315),
    [sym_nil] = ACTIONS(856),
    [sym_true] = ACTIONS(856),
    [sym_false] = ACTIONS(856),
    [sym_number_long] = ACTIONS(856),
    [sym_number_double] = ACTIONS(856),
    [anon_sym_BSLASH] = ACTIONS(856),
    [anon_sym_DQUOTE] = ACTIONS(856),
    [anon_sym_POUND_DQUOTE] = ACTIONS(856),
    [anon_sym_SQUOTE] = ACTIONS(856),
    [anon_sym_LPARENquote] = ACTIONS(856),
    [anon_sym_RPAREN] = ACTIONS(856),
    [anon_sym_COLON] = ACTIONS(856),
    [anon_sym_COLON_COLON] = ACTIONS(856),
    [anon_sym_DASH_GT] = ACTIONS(856),
    [anon_sym_DASH_GT_GT] = ACTIONS(856),
    [anon_sym_as_DASH_GT] = ACTIONS(856),
    [anon_sym_some_DASH_GT] = ACTIONS(856),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(856),
    [anon_sym_cond_DASH_GT] = ACTIONS(856),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(856),
    [sym__symbol_chars] = ACTIONS(856),
    [anon_sym_LPAREN] = ACTIONS(856),
    [anon_sym_LBRACK] = ACTIONS(856),
    [anon_sym_LBRACE] = ACTIONS(856),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(856),
    [anon_sym_POUND] = ACTIONS(856),
    [anon_sym_POUND_LBRACE] = ACTIONS(856),
    [anon_sym_SEMI] = ACTIONS(856),
    [anon_sym_POUND_BANG] = ACTIONS(856),
    [anon_sym_POUND_] = ACTIONS(856),
    [anon_sym_] = ACTIONS(1193),
    [anon_sym_LPARENcomment] = ACTIONS(856),
    [anon_sym_POUND_LPAREN] = ACTIONS(856),
    [sym_shorthand_fn_arg] = ACTIONS(856),
  },
  [271] = {
    [sym__hex_char] = ACTIONS(1195),
  },
  [272] = {
    [aux_sym_ignore_form_repeat1] = STATE(272),
    [anon_sym_RPAREN] = ACTIONS(862),
    [anon_sym_] = ACTIONS(1197),
  },
  [273] = {
    [aux_sym_ignore_form_repeat1] = STATE(272),
    [anon_sym_RPAREN] = ACTIONS(1185),
    [anon_sym_] = ACTIONS(1007),
  },
  [274] = {
    [aux_sym_ignore_form_repeat1] = STATE(274),
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
    [anon_sym_DASH_GT] = ACTIONS(862),
    [anon_sym_DASH_GT_GT] = ACTIONS(862),
    [anon_sym_as_DASH_GT] = ACTIONS(862),
    [anon_sym_some_DASH_GT] = ACTIONS(862),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(862),
    [anon_sym_cond_DASH_GT] = ACTIONS(862),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(862),
    [sym__symbol_chars] = ACTIONS(862),
    [anon_sym_LPAREN] = ACTIONS(862),
    [anon_sym_LBRACK] = ACTIONS(862),
    [anon_sym_LBRACE] = ACTIONS(862),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(862),
    [anon_sym_POUND] = ACTIONS(862),
    [anon_sym_POUND_LBRACE] = ACTIONS(862),
    [anon_sym_SEMI] = ACTIONS(862),
    [anon_sym_POUND_BANG] = ACTIONS(862),
    [anon_sym_POUND_] = ACTIONS(862),
    [anon_sym_] = ACTIONS(1200),
    [anon_sym_LPARENcomment] = ACTIONS(862),
    [anon_sym_POUND_LPAREN] = ACTIONS(862),
  },
  [275] = {
    [aux_sym_ignore_form_repeat1] = STATE(274),
    [sym_nil] = ACTIONS(1185),
    [sym_true] = ACTIONS(1185),
    [sym_false] = ACTIONS(1185),
    [sym_number_long] = ACTIONS(1185),
    [sym_number_double] = ACTIONS(1185),
    [anon_sym_BSLASH] = ACTIONS(1185),
    [anon_sym_DQUOTE] = ACTIONS(1185),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1185),
    [anon_sym_SQUOTE] = ACTIONS(1185),
    [anon_sym_LPARENquote] = ACTIONS(1185),
    [anon_sym_RPAREN] = ACTIONS(1185),
    [anon_sym_COLON] = ACTIONS(1185),
    [anon_sym_COLON_COLON] = ACTIONS(1185),
    [anon_sym_DASH_GT] = ACTIONS(1185),
    [anon_sym_DASH_GT_GT] = ACTIONS(1185),
    [anon_sym_as_DASH_GT] = ACTIONS(1185),
    [anon_sym_some_DASH_GT] = ACTIONS(1185),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1185),
    [anon_sym_cond_DASH_GT] = ACTIONS(1185),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1185),
    [sym__symbol_chars] = ACTIONS(1185),
    [anon_sym_LPAREN] = ACTIONS(1185),
    [anon_sym_LBRACK] = ACTIONS(1185),
    [anon_sym_LBRACE] = ACTIONS(1185),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1185),
    [anon_sym_POUND] = ACTIONS(1185),
    [anon_sym_POUND_LBRACE] = ACTIONS(1185),
    [anon_sym_SEMI] = ACTIONS(1185),
    [anon_sym_POUND_BANG] = ACTIONS(1185),
    [anon_sym_POUND_] = ACTIONS(1185),
    [anon_sym_] = ACTIONS(1015),
    [anon_sym_LPARENcomment] = ACTIONS(1185),
    [anon_sym_POUND_LPAREN] = ACTIONS(1185),
  },
  [276] = {
    [anon_sym_DQUOTE] = ACTIONS(600),
    [anon_sym_LPAREN] = ACTIONS(600),
    [anon_sym_LBRACK] = ACTIONS(600),
    [anon_sym_LBRACE] = ACTIONS(600),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(600),
    [anon_sym_POUND] = ACTIONS(602),
  },
  [277] = {
    [anon_sym_RPAREN] = ACTIONS(1203),
    [anon_sym_LPAREN] = ACTIONS(1203),
  },
  [278] = {
    [ts_builtin_sym_end] = ACTIONS(1205),
    [sym_nil] = ACTIONS(1207),
    [sym_true] = ACTIONS(1207),
    [sym_false] = ACTIONS(1207),
    [sym_number_long] = ACTIONS(1207),
    [sym_number_double] = ACTIONS(1205),
    [anon_sym_BSLASH] = ACTIONS(1205),
    [anon_sym_DQUOTE] = ACTIONS(1205),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1205),
    [anon_sym_SQUOTE] = ACTIONS(1205),
    [anon_sym_LPARENquote] = ACTIONS(1205),
    [anon_sym_RPAREN] = ACTIONS(1205),
    [anon_sym_COLON] = ACTIONS(1207),
    [anon_sym_COLON_COLON] = ACTIONS(1205),
    [anon_sym_DASH_GT] = ACTIONS(1207),
    [anon_sym_DASH_GT_GT] = ACTIONS(1205),
    [anon_sym_as_DASH_GT] = ACTIONS(1205),
    [anon_sym_some_DASH_GT] = ACTIONS(1207),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1205),
    [anon_sym_cond_DASH_GT] = ACTIONS(1207),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1205),
    [sym__symbol_chars] = ACTIONS(1207),
    [anon_sym_LPAREN] = ACTIONS(1207),
    [anon_sym_LBRACK] = ACTIONS(1205),
    [anon_sym_RBRACK] = ACTIONS(1205),
    [anon_sym_LBRACE] = ACTIONS(1205),
    [anon_sym_RBRACE] = ACTIONS(1205),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1205),
    [anon_sym_POUND] = ACTIONS(1207),
    [anon_sym_POUND_LBRACE] = ACTIONS(1205),
    [anon_sym_SEMI] = ACTIONS(1205),
    [anon_sym_POUND_BANG] = ACTIONS(1205),
    [anon_sym_POUND_] = ACTIONS(1205),
    [anon_sym_LPARENcomment] = ACTIONS(1205),
    [anon_sym_POUND_LPAREN] = ACTIONS(1205),
    [sym_shorthand_fn_arg] = ACTIONS(1205),
  },
  [279] = {
    [anon_sym_LPAREN] = ACTIONS(263),
    [anon_sym_LBRACK] = ACTIONS(263),
    [anon_sym_LBRACE] = ACTIONS(263),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(263),
    [anon_sym_POUND] = ACTIONS(265),
  },
  [280] = {
    [aux_sym__string_repeat1] = STATE(106),
    [anon_sym_DQUOTE] = ACTIONS(1209),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(269),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(269),
  },
  [281] = {
    [anon_sym_LPAREN] = ACTIONS(333),
    [anon_sym_LBRACK] = ACTIONS(333),
  },
  [282] = {
    [sym__anything] = STATE(65),
    [sym__literal] = STATE(65),
    [sym__collection_literal] = STATE(65),
    [sym_boolean] = STATE(65),
    [sym_number] = STATE(65),
    [sym__number] = STATE(24),
    [sym_character] = STATE(65),
    [sym__character] = STATE(25),
    [sym_string] = STATE(65),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(65),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(65),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(65),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(65),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(65),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(65),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(65),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym__hash_map_kv_pair] = STATE(137),
    [sym__hash_map_key] = STATE(65),
    [sym_set] = STATE(65),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(65),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_function] = STATE(65),
    [sym_anonymous_fn] = STATE(36),
    [sym_shorthand_fn] = STATE(36),
    [sym_defn] = STATE(36),
    [aux_sym__hash_map_repeat1] = STATE(137),
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
    [anon_sym_RBRACE] = ACTIONS(1211),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(123),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
  },
  [283] = {
    [anon_sym_LPAREN] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(345),
  },
  [284] = {
    [sym__anything] = STATE(65),
    [sym__literal] = STATE(65),
    [sym__collection_literal] = STATE(65),
    [sym_boolean] = STATE(65),
    [sym_number] = STATE(65),
    [sym__number] = STATE(24),
    [sym_character] = STATE(65),
    [sym__character] = STATE(25),
    [sym_string] = STATE(65),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(65),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(65),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(65),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(65),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(65),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(65),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(65),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym__hash_map_kv_pair] = STATE(137),
    [sym__hash_map_key] = STATE(65),
    [sym_set] = STATE(65),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(65),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_function] = STATE(65),
    [sym_anonymous_fn] = STATE(36),
    [sym_shorthand_fn] = STATE(36),
    [sym_defn] = STATE(36),
    [aux_sym__hash_map_repeat1] = STATE(137),
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
    [anon_sym_RBRACE] = ACTIONS(1213),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(123),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
  },
  [285] = {
    [anon_sym_LBRACE] = ACTIONS(1215),
  },
  [286] = {
    [ts_builtin_sym_end] = ACTIONS(1217),
    [sym_nil] = ACTIONS(1219),
    [sym_true] = ACTIONS(1219),
    [sym_false] = ACTIONS(1219),
    [sym_number_long] = ACTIONS(1219),
    [sym_number_double] = ACTIONS(1217),
    [anon_sym_BSLASH] = ACTIONS(1217),
    [anon_sym_DQUOTE] = ACTIONS(1217),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1217),
    [anon_sym_SQUOTE] = ACTIONS(1217),
    [anon_sym_LPARENquote] = ACTIONS(1217),
    [anon_sym_RPAREN] = ACTIONS(1217),
    [anon_sym_COLON] = ACTIONS(1219),
    [anon_sym_COLON_COLON] = ACTIONS(1217),
    [anon_sym_DASH_GT] = ACTIONS(1219),
    [anon_sym_DASH_GT_GT] = ACTIONS(1217),
    [anon_sym_as_DASH_GT] = ACTIONS(1217),
    [anon_sym_some_DASH_GT] = ACTIONS(1219),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1217),
    [anon_sym_cond_DASH_GT] = ACTIONS(1219),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1217),
    [sym__symbol_chars] = ACTIONS(1219),
    [anon_sym_LPAREN] = ACTIONS(1219),
    [anon_sym_LBRACK] = ACTIONS(1217),
    [anon_sym_RBRACK] = ACTIONS(1217),
    [anon_sym_LBRACE] = ACTIONS(1217),
    [anon_sym_RBRACE] = ACTIONS(1217),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1217),
    [anon_sym_POUND] = ACTIONS(1219),
    [anon_sym_POUND_LBRACE] = ACTIONS(1217),
    [anon_sym_SEMI] = ACTIONS(1217),
    [anon_sym_POUND_BANG] = ACTIONS(1217),
    [anon_sym_POUND_] = ACTIONS(1217),
    [anon_sym_LPARENcomment] = ACTIONS(1217),
    [anon_sym_POUND_LPAREN] = ACTIONS(1217),
    [sym_shorthand_fn_arg] = ACTIONS(1217),
  },
  [287] = {
    [anon_sym_RPAREN] = ACTIONS(1221),
  },
  [288] = {
    [sym_vector] = STATE(121),
    [sym__vector] = STATE(32),
    [sym__after_the_fn_name] = STATE(322),
    [sym__single_arity_fn] = STATE(322),
    [sym__multi_arity_fn] = STATE(322),
    [sym_params] = STATE(124),
    [aux_sym__multi_arity_fn_repeat1] = STATE(125),
    [anon_sym_LPAREN] = ACTIONS(315),
    [anon_sym_LBRACK] = ACTIONS(37),
  },
  [289] = {
    [aux_sym_ignore_form_repeat1] = STATE(289),
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
    [anon_sym_COLON] = ACTIONS(862),
    [anon_sym_COLON_COLON] = ACTIONS(862),
    [anon_sym_DASH_GT] = ACTIONS(862),
    [anon_sym_DASH_GT_GT] = ACTIONS(862),
    [anon_sym_as_DASH_GT] = ACTIONS(862),
    [anon_sym_some_DASH_GT] = ACTIONS(862),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(862),
    [anon_sym_cond_DASH_GT] = ACTIONS(862),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(862),
    [sym__symbol_chars] = ACTIONS(862),
    [anon_sym_LPAREN] = ACTIONS(862),
    [anon_sym_LBRACK] = ACTIONS(862),
    [anon_sym_RBRACK] = ACTIONS(862),
    [anon_sym_LBRACE] = ACTIONS(862),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(862),
    [anon_sym_POUND] = ACTIONS(862),
    [anon_sym_POUND_LBRACE] = ACTIONS(862),
    [anon_sym_SEMI] = ACTIONS(862),
    [anon_sym_POUND_BANG] = ACTIONS(862),
    [anon_sym_POUND_] = ACTIONS(862),
    [anon_sym_] = ACTIONS(1223),
    [anon_sym_LPARENcomment] = ACTIONS(862),
    [anon_sym_POUND_LPAREN] = ACTIONS(862),
  },
  [290] = {
    [aux_sym_ignore_form_repeat1] = STATE(289),
    [sym_nil] = ACTIONS(1185),
    [sym_true] = ACTIONS(1185),
    [sym_false] = ACTIONS(1185),
    [sym_number_long] = ACTIONS(1185),
    [sym_number_double] = ACTIONS(1185),
    [anon_sym_BSLASH] = ACTIONS(1185),
    [anon_sym_DQUOTE] = ACTIONS(1185),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1185),
    [anon_sym_SQUOTE] = ACTIONS(1185),
    [anon_sym_LPARENquote] = ACTIONS(1185),
    [anon_sym_COLON] = ACTIONS(1185),
    [anon_sym_COLON_COLON] = ACTIONS(1185),
    [anon_sym_DASH_GT] = ACTIONS(1185),
    [anon_sym_DASH_GT_GT] = ACTIONS(1185),
    [anon_sym_as_DASH_GT] = ACTIONS(1185),
    [anon_sym_some_DASH_GT] = ACTIONS(1185),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1185),
    [anon_sym_cond_DASH_GT] = ACTIONS(1185),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1185),
    [sym__symbol_chars] = ACTIONS(1185),
    [anon_sym_LPAREN] = ACTIONS(1185),
    [anon_sym_LBRACK] = ACTIONS(1185),
    [anon_sym_RBRACK] = ACTIONS(1185),
    [anon_sym_LBRACE] = ACTIONS(1185),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1185),
    [anon_sym_POUND] = ACTIONS(1185),
    [anon_sym_POUND_LBRACE] = ACTIONS(1185),
    [anon_sym_SEMI] = ACTIONS(1185),
    [anon_sym_POUND_BANG] = ACTIONS(1185),
    [anon_sym_POUND_] = ACTIONS(1185),
    [anon_sym_] = ACTIONS(1056),
    [anon_sym_LPARENcomment] = ACTIONS(1185),
    [anon_sym_POUND_LPAREN] = ACTIONS(1185),
  },
  [291] = {
    [aux_sym_ignore_form_repeat1] = STATE(291),
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
    [anon_sym_COLON] = ACTIONS(862),
    [anon_sym_COLON_COLON] = ACTIONS(862),
    [anon_sym_DASH_GT] = ACTIONS(862),
    [anon_sym_DASH_GT_GT] = ACTIONS(862),
    [anon_sym_as_DASH_GT] = ACTIONS(862),
    [anon_sym_some_DASH_GT] = ACTIONS(862),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(862),
    [anon_sym_cond_DASH_GT] = ACTIONS(862),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(862),
    [sym__symbol_chars] = ACTIONS(862),
    [anon_sym_LPAREN] = ACTIONS(862),
    [anon_sym_LBRACK] = ACTIONS(862),
    [anon_sym_LBRACE] = ACTIONS(862),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(862),
    [anon_sym_POUND] = ACTIONS(862),
    [anon_sym_POUND_LBRACE] = ACTIONS(862),
    [anon_sym_SEMI] = ACTIONS(862),
    [anon_sym_POUND_BANG] = ACTIONS(862),
    [anon_sym_POUND_] = ACTIONS(862),
    [anon_sym_] = ACTIONS(1226),
    [anon_sym_LPARENcomment] = ACTIONS(862),
    [anon_sym_POUND_LPAREN] = ACTIONS(862),
  },
  [292] = {
    [aux_sym_ignore_form_repeat1] = STATE(291),
    [sym_nil] = ACTIONS(1185),
    [sym_true] = ACTIONS(1185),
    [sym_false] = ACTIONS(1185),
    [sym_number_long] = ACTIONS(1185),
    [sym_number_double] = ACTIONS(1185),
    [anon_sym_BSLASH] = ACTIONS(1185),
    [anon_sym_DQUOTE] = ACTIONS(1185),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1185),
    [anon_sym_SQUOTE] = ACTIONS(1185),
    [anon_sym_LPARENquote] = ACTIONS(1185),
    [anon_sym_COLON] = ACTIONS(1185),
    [anon_sym_COLON_COLON] = ACTIONS(1185),
    [anon_sym_DASH_GT] = ACTIONS(1185),
    [anon_sym_DASH_GT_GT] = ACTIONS(1185),
    [anon_sym_as_DASH_GT] = ACTIONS(1185),
    [anon_sym_some_DASH_GT] = ACTIONS(1185),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1185),
    [anon_sym_cond_DASH_GT] = ACTIONS(1185),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1185),
    [sym__symbol_chars] = ACTIONS(1185),
    [anon_sym_LPAREN] = ACTIONS(1185),
    [anon_sym_LBRACK] = ACTIONS(1185),
    [anon_sym_LBRACE] = ACTIONS(1185),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1185),
    [anon_sym_POUND] = ACTIONS(1185),
    [anon_sym_POUND_LBRACE] = ACTIONS(1185),
    [anon_sym_SEMI] = ACTIONS(1185),
    [anon_sym_POUND_BANG] = ACTIONS(1185),
    [anon_sym_POUND_] = ACTIONS(1185),
    [anon_sym_] = ACTIONS(1060),
    [anon_sym_LPARENcomment] = ACTIONS(1185),
    [anon_sym_POUND_LPAREN] = ACTIONS(1185),
  },
  [293] = {
    [ts_builtin_sym_end] = ACTIONS(1229),
    [sym_nil] = ACTIONS(1231),
    [sym_true] = ACTIONS(1231),
    [sym_false] = ACTIONS(1231),
    [sym_number_long] = ACTIONS(1231),
    [sym_number_double] = ACTIONS(1229),
    [anon_sym_BSLASH] = ACTIONS(1229),
    [anon_sym_DQUOTE] = ACTIONS(1229),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1229),
    [anon_sym_SQUOTE] = ACTIONS(1229),
    [anon_sym_LPARENquote] = ACTIONS(1229),
    [anon_sym_RPAREN] = ACTIONS(1229),
    [anon_sym_COLON] = ACTIONS(1231),
    [anon_sym_COLON_COLON] = ACTIONS(1229),
    [anon_sym_DASH_GT] = ACTIONS(1231),
    [anon_sym_DASH_GT_GT] = ACTIONS(1229),
    [anon_sym_as_DASH_GT] = ACTIONS(1229),
    [anon_sym_some_DASH_GT] = ACTIONS(1231),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1229),
    [anon_sym_cond_DASH_GT] = ACTIONS(1231),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1229),
    [sym__symbol_chars] = ACTIONS(1231),
    [anon_sym_LPAREN] = ACTIONS(1231),
    [anon_sym_LBRACK] = ACTIONS(1229),
    [anon_sym_RBRACK] = ACTIONS(1229),
    [anon_sym_LBRACE] = ACTIONS(1229),
    [anon_sym_RBRACE] = ACTIONS(1229),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1229),
    [anon_sym_POUND] = ACTIONS(1231),
    [anon_sym_POUND_LBRACE] = ACTIONS(1229),
    [anon_sym_SEMI] = ACTIONS(1229),
    [anon_sym_POUND_BANG] = ACTIONS(1229),
    [anon_sym_POUND_] = ACTIONS(1229),
    [anon_sym_LPARENcomment] = ACTIONS(1229),
    [anon_sym_POUND_LPAREN] = ACTIONS(1229),
    [sym_shorthand_fn_arg] = ACTIONS(1229),
  },
  [294] = {
    [aux_sym_ignore_form_repeat1] = STATE(294),
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
    [anon_sym_COLON] = ACTIONS(862),
    [anon_sym_COLON_COLON] = ACTIONS(862),
    [anon_sym_DASH_GT] = ACTIONS(862),
    [anon_sym_DASH_GT_GT] = ACTIONS(862),
    [anon_sym_as_DASH_GT] = ACTIONS(862),
    [anon_sym_some_DASH_GT] = ACTIONS(862),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(862),
    [anon_sym_cond_DASH_GT] = ACTIONS(862),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(862),
    [sym__symbol_chars] = ACTIONS(862),
    [anon_sym_LPAREN] = ACTIONS(862),
    [anon_sym_LBRACK] = ACTIONS(862),
    [anon_sym_LBRACE] = ACTIONS(862),
    [anon_sym_RBRACE] = ACTIONS(862),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(862),
    [anon_sym_POUND] = ACTIONS(862),
    [anon_sym_POUND_LBRACE] = ACTIONS(862),
    [anon_sym_SEMI] = ACTIONS(862),
    [anon_sym_POUND_BANG] = ACTIONS(862),
    [anon_sym_POUND_] = ACTIONS(862),
    [anon_sym_] = ACTIONS(1233),
    [anon_sym_LPARENcomment] = ACTIONS(862),
    [anon_sym_POUND_LPAREN] = ACTIONS(862),
  },
  [295] = {
    [aux_sym_ignore_form_repeat1] = STATE(294),
    [sym_nil] = ACTIONS(1185),
    [sym_true] = ACTIONS(1185),
    [sym_false] = ACTIONS(1185),
    [sym_number_long] = ACTIONS(1185),
    [sym_number_double] = ACTIONS(1185),
    [anon_sym_BSLASH] = ACTIONS(1185),
    [anon_sym_DQUOTE] = ACTIONS(1185),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1185),
    [anon_sym_SQUOTE] = ACTIONS(1185),
    [anon_sym_LPARENquote] = ACTIONS(1185),
    [anon_sym_COLON] = ACTIONS(1185),
    [anon_sym_COLON_COLON] = ACTIONS(1185),
    [anon_sym_DASH_GT] = ACTIONS(1185),
    [anon_sym_DASH_GT_GT] = ACTIONS(1185),
    [anon_sym_as_DASH_GT] = ACTIONS(1185),
    [anon_sym_some_DASH_GT] = ACTIONS(1185),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1185),
    [anon_sym_cond_DASH_GT] = ACTIONS(1185),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1185),
    [sym__symbol_chars] = ACTIONS(1185),
    [anon_sym_LPAREN] = ACTIONS(1185),
    [anon_sym_LBRACK] = ACTIONS(1185),
    [anon_sym_LBRACE] = ACTIONS(1185),
    [anon_sym_RBRACE] = ACTIONS(1185),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1185),
    [anon_sym_POUND] = ACTIONS(1185),
    [anon_sym_POUND_LBRACE] = ACTIONS(1185),
    [anon_sym_SEMI] = ACTIONS(1185),
    [anon_sym_POUND_BANG] = ACTIONS(1185),
    [anon_sym_POUND_] = ACTIONS(1185),
    [anon_sym_] = ACTIONS(1070),
    [anon_sym_LPARENcomment] = ACTIONS(1185),
    [anon_sym_POUND_LPAREN] = ACTIONS(1185),
  },
  [296] = {
    [ts_builtin_sym_end] = ACTIONS(1011),
    [sym_nil] = ACTIONS(1013),
    [sym_true] = ACTIONS(1013),
    [sym_false] = ACTIONS(1013),
    [sym_number_long] = ACTIONS(1013),
    [sym_number_double] = ACTIONS(1013),
    [anon_sym_BSLASH] = ACTIONS(1013),
    [anon_sym_DQUOTE] = ACTIONS(1013),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1013),
    [anon_sym_SQUOTE] = ACTIONS(1013),
    [anon_sym_LPARENquote] = ACTIONS(1013),
    [anon_sym_RPAREN] = ACTIONS(1013),
    [anon_sym_COLON] = ACTIONS(1013),
    [anon_sym_COLON_COLON] = ACTIONS(1013),
    [anon_sym_DASH_GT] = ACTIONS(1013),
    [anon_sym_DASH_GT_GT] = ACTIONS(1013),
    [anon_sym_as_DASH_GT] = ACTIONS(1013),
    [anon_sym_some_DASH_GT] = ACTIONS(1013),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1013),
    [anon_sym_cond_DASH_GT] = ACTIONS(1013),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1013),
    [sym__symbol_chars] = ACTIONS(1013),
    [anon_sym_LPAREN] = ACTIONS(1013),
    [anon_sym_LBRACK] = ACTIONS(1013),
    [anon_sym_RBRACK] = ACTIONS(1013),
    [anon_sym_LBRACE] = ACTIONS(1013),
    [anon_sym_RBRACE] = ACTIONS(1013),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1013),
    [anon_sym_POUND] = ACTIONS(1013),
    [anon_sym_POUND_LBRACE] = ACTIONS(1013),
    [anon_sym_SEMI] = ACTIONS(1013),
    [anon_sym_POUND_BANG] = ACTIONS(1013),
    [anon_sym_POUND_] = ACTIONS(1013),
    [anon_sym_] = ACTIONS(1011),
    [anon_sym_LPARENcomment] = ACTIONS(1013),
    [anon_sym_POUND_LPAREN] = ACTIONS(1013),
    [sym_shorthand_fn_arg] = ACTIONS(1013),
  },
  [297] = {
    [sym_number_long] = ACTIONS(574),
    [sym_number_double] = ACTIONS(574),
    [anon_sym_DQUOTE] = ACTIONS(574),
    [anon_sym_COLON] = ACTIONS(574),
    [anon_sym_COLON_COLON] = ACTIONS(574),
    [anon_sym_DASH_GT] = ACTIONS(574),
    [anon_sym_DASH_GT_GT] = ACTIONS(574),
    [anon_sym_as_DASH_GT] = ACTIONS(574),
    [anon_sym_some_DASH_GT] = ACTIONS(574),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(574),
    [anon_sym_cond_DASH_GT] = ACTIONS(574),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(574),
    [sym__symbol_chars] = ACTIONS(574),
    [anon_sym_LPAREN] = ACTIONS(574),
    [anon_sym_LBRACK] = ACTIONS(574),
    [anon_sym_RBRACK] = ACTIONS(574),
    [anon_sym_LBRACE] = ACTIONS(574),
    [anon_sym_POUND] = ACTIONS(574),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(574),
  },
  [298] = {
    [sym__keyword_chars] = ACTIONS(1236),
  },
  [299] = {
    [sym_number_long] = ACTIONS(602),
    [sym_number_double] = ACTIONS(602),
    [anon_sym_DQUOTE] = ACTIONS(602),
    [anon_sym_COLON] = ACTIONS(602),
    [anon_sym_COLON_COLON] = ACTIONS(602),
    [anon_sym_DASH_GT] = ACTIONS(602),
    [anon_sym_DASH_GT_GT] = ACTIONS(602),
    [anon_sym_as_DASH_GT] = ACTIONS(602),
    [anon_sym_some_DASH_GT] = ACTIONS(602),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(602),
    [anon_sym_cond_DASH_GT] = ACTIONS(602),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(602),
    [sym__symbol_chars] = ACTIONS(602),
    [anon_sym_LPAREN] = ACTIONS(602),
    [anon_sym_LBRACK] = ACTIONS(602),
    [anon_sym_RBRACK] = ACTIONS(602),
    [anon_sym_LBRACE] = ACTIONS(602),
    [anon_sym_POUND] = ACTIONS(602),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(602),
  },
  [300] = {
    [sym_number_long] = ACTIONS(1078),
    [sym_number_double] = ACTIONS(1078),
    [anon_sym_DQUOTE] = ACTIONS(1078),
    [anon_sym_COLON] = ACTIONS(1078),
    [anon_sym_COLON_COLON] = ACTIONS(1078),
    [anon_sym_DASH_GT] = ACTIONS(1078),
    [anon_sym_DASH_GT_GT] = ACTIONS(1078),
    [anon_sym_as_DASH_GT] = ACTIONS(1078),
    [anon_sym_some_DASH_GT] = ACTIONS(1078),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1078),
    [anon_sym_cond_DASH_GT] = ACTIONS(1078),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1078),
    [sym__symbol_chars] = ACTIONS(1078),
    [anon_sym_LPAREN] = ACTIONS(1078),
    [anon_sym_LBRACK] = ACTIONS(1078),
    [anon_sym_RBRACK] = ACTIONS(1078),
    [anon_sym_LBRACE] = ACTIONS(1078),
    [anon_sym_POUND] = ACTIONS(1078),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1078),
  },
  [301] = {
    [sym_number_long] = ACTIONS(1096),
    [sym_number_double] = ACTIONS(1096),
    [anon_sym_DQUOTE] = ACTIONS(1096),
    [anon_sym_COLON] = ACTIONS(1096),
    [anon_sym_COLON_COLON] = ACTIONS(1096),
    [anon_sym_DASH_GT] = ACTIONS(1096),
    [anon_sym_DASH_GT_GT] = ACTIONS(1096),
    [anon_sym_as_DASH_GT] = ACTIONS(1096),
    [anon_sym_some_DASH_GT] = ACTIONS(1096),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1096),
    [anon_sym_cond_DASH_GT] = ACTIONS(1096),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1096),
    [sym__symbol_chars] = ACTIONS(1096),
    [anon_sym_LPAREN] = ACTIONS(1096),
    [anon_sym_LBRACK] = ACTIONS(1096),
    [anon_sym_RBRACK] = ACTIONS(1096),
    [anon_sym_LBRACE] = ACTIONS(1096),
    [anon_sym_POUND] = ACTIONS(1096),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1096),
  },
  [302] = {
    [sym_number_long] = ACTIONS(1144),
    [sym_number_double] = ACTIONS(1144),
    [anon_sym_DQUOTE] = ACTIONS(1144),
    [anon_sym_COLON] = ACTIONS(1144),
    [anon_sym_COLON_COLON] = ACTIONS(1144),
    [anon_sym_DASH_GT] = ACTIONS(1144),
    [anon_sym_DASH_GT_GT] = ACTIONS(1144),
    [anon_sym_as_DASH_GT] = ACTIONS(1144),
    [anon_sym_some_DASH_GT] = ACTIONS(1144),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1144),
    [anon_sym_cond_DASH_GT] = ACTIONS(1144),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1144),
    [sym__symbol_chars] = ACTIONS(1144),
    [anon_sym_LPAREN] = ACTIONS(1144),
    [anon_sym_LBRACK] = ACTIONS(1144),
    [anon_sym_RBRACK] = ACTIONS(1144),
    [anon_sym_LBRACE] = ACTIONS(1144),
    [anon_sym_POUND] = ACTIONS(1144),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1144),
  },
  [303] = {
    [sym__number] = STATE(258),
    [sym__string] = STATE(258),
    [sym__keyword] = STATE(258),
    [sym__unqualified_keyword] = STATE(258),
    [sym_qualified_keyword] = STATE(258),
    [sym__symbol] = STATE(258),
    [sym_threading_macro] = STATE(258),
    [sym_qualified_symbol] = STATE(258),
    [sym__one_form] = STATE(258),
    [sym__paren_sequence] = STATE(258),
    [sym__bracket_sequence] = STATE(258),
    [sym__curly_brace_sequence] = STATE(258),
    [aux_sym_comment_macro_repeat1] = STATE(258),
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
    [anon_sym_RBRACE] = ACTIONS(1238),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(848),
  },
  [304] = {
    [sym_number_long] = ACTIONS(574),
    [sym_number_double] = ACTIONS(574),
    [anon_sym_DQUOTE] = ACTIONS(574),
    [anon_sym_COLON] = ACTIONS(574),
    [anon_sym_COLON_COLON] = ACTIONS(574),
    [anon_sym_DASH_GT] = ACTIONS(574),
    [anon_sym_DASH_GT_GT] = ACTIONS(574),
    [anon_sym_as_DASH_GT] = ACTIONS(574),
    [anon_sym_some_DASH_GT] = ACTIONS(574),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(574),
    [anon_sym_cond_DASH_GT] = ACTIONS(574),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(574),
    [sym__symbol_chars] = ACTIONS(574),
    [anon_sym_LPAREN] = ACTIONS(574),
    [anon_sym_LBRACK] = ACTIONS(574),
    [anon_sym_LBRACE] = ACTIONS(574),
    [anon_sym_RBRACE] = ACTIONS(574),
    [anon_sym_POUND] = ACTIONS(574),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(574),
  },
  [305] = {
    [sym__keyword_chars] = ACTIONS(1240),
  },
  [306] = {
    [sym_number_long] = ACTIONS(602),
    [sym_number_double] = ACTIONS(602),
    [anon_sym_DQUOTE] = ACTIONS(602),
    [anon_sym_COLON] = ACTIONS(602),
    [anon_sym_COLON_COLON] = ACTIONS(602),
    [anon_sym_DASH_GT] = ACTIONS(602),
    [anon_sym_DASH_GT_GT] = ACTIONS(602),
    [anon_sym_as_DASH_GT] = ACTIONS(602),
    [anon_sym_some_DASH_GT] = ACTIONS(602),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(602),
    [anon_sym_cond_DASH_GT] = ACTIONS(602),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(602),
    [sym__symbol_chars] = ACTIONS(602),
    [anon_sym_LPAREN] = ACTIONS(602),
    [anon_sym_LBRACK] = ACTIONS(602),
    [anon_sym_LBRACE] = ACTIONS(602),
    [anon_sym_RBRACE] = ACTIONS(602),
    [anon_sym_POUND] = ACTIONS(602),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(602),
  },
  [307] = {
    [sym_number_long] = ACTIONS(1078),
    [sym_number_double] = ACTIONS(1078),
    [anon_sym_DQUOTE] = ACTIONS(1078),
    [anon_sym_COLON] = ACTIONS(1078),
    [anon_sym_COLON_COLON] = ACTIONS(1078),
    [anon_sym_DASH_GT] = ACTIONS(1078),
    [anon_sym_DASH_GT_GT] = ACTIONS(1078),
    [anon_sym_as_DASH_GT] = ACTIONS(1078),
    [anon_sym_some_DASH_GT] = ACTIONS(1078),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1078),
    [anon_sym_cond_DASH_GT] = ACTIONS(1078),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1078),
    [sym__symbol_chars] = ACTIONS(1078),
    [anon_sym_LPAREN] = ACTIONS(1078),
    [anon_sym_LBRACK] = ACTIONS(1078),
    [anon_sym_LBRACE] = ACTIONS(1078),
    [anon_sym_RBRACE] = ACTIONS(1078),
    [anon_sym_POUND] = ACTIONS(1078),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1078),
  },
  [308] = {
    [sym_number_long] = ACTIONS(1096),
    [sym_number_double] = ACTIONS(1096),
    [anon_sym_DQUOTE] = ACTIONS(1096),
    [anon_sym_COLON] = ACTIONS(1096),
    [anon_sym_COLON_COLON] = ACTIONS(1096),
    [anon_sym_DASH_GT] = ACTIONS(1096),
    [anon_sym_DASH_GT_GT] = ACTIONS(1096),
    [anon_sym_as_DASH_GT] = ACTIONS(1096),
    [anon_sym_some_DASH_GT] = ACTIONS(1096),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1096),
    [anon_sym_cond_DASH_GT] = ACTIONS(1096),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1096),
    [sym__symbol_chars] = ACTIONS(1096),
    [anon_sym_LPAREN] = ACTIONS(1096),
    [anon_sym_LBRACK] = ACTIONS(1096),
    [anon_sym_LBRACE] = ACTIONS(1096),
    [anon_sym_RBRACE] = ACTIONS(1096),
    [anon_sym_POUND] = ACTIONS(1096),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1096),
  },
  [309] = {
    [sym_number_long] = ACTIONS(1144),
    [sym_number_double] = ACTIONS(1144),
    [anon_sym_DQUOTE] = ACTIONS(1144),
    [anon_sym_COLON] = ACTIONS(1144),
    [anon_sym_COLON_COLON] = ACTIONS(1144),
    [anon_sym_DASH_GT] = ACTIONS(1144),
    [anon_sym_DASH_GT_GT] = ACTIONS(1144),
    [anon_sym_as_DASH_GT] = ACTIONS(1144),
    [anon_sym_some_DASH_GT] = ACTIONS(1144),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1144),
    [anon_sym_cond_DASH_GT] = ACTIONS(1144),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1144),
    [sym__symbol_chars] = ACTIONS(1144),
    [anon_sym_LPAREN] = ACTIONS(1144),
    [anon_sym_LBRACK] = ACTIONS(1144),
    [anon_sym_LBRACE] = ACTIONS(1144),
    [anon_sym_RBRACE] = ACTIONS(1144),
    [anon_sym_POUND] = ACTIONS(1144),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1144),
  },
  [310] = {
    [sym__number] = STATE(258),
    [sym__string] = STATE(258),
    [sym__keyword] = STATE(258),
    [sym__unqualified_keyword] = STATE(258),
    [sym_qualified_keyword] = STATE(258),
    [sym__symbol] = STATE(258),
    [sym_threading_macro] = STATE(258),
    [sym_qualified_symbol] = STATE(258),
    [sym__one_form] = STATE(258),
    [sym__paren_sequence] = STATE(258),
    [sym__bracket_sequence] = STATE(258),
    [sym__curly_brace_sequence] = STATE(258),
    [aux_sym_comment_macro_repeat1] = STATE(258),
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
    [anon_sym_RBRACE] = ACTIONS(1242),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(848),
  },
  [311] = {
    [ts_builtin_sym_end] = ACTIONS(1244),
    [sym_nil] = ACTIONS(1246),
    [sym_true] = ACTIONS(1246),
    [sym_false] = ACTIONS(1246),
    [sym_number_long] = ACTIONS(1246),
    [sym_number_double] = ACTIONS(1246),
    [anon_sym_BSLASH] = ACTIONS(1246),
    [anon_sym_DQUOTE] = ACTIONS(1246),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1246),
    [anon_sym_SQUOTE] = ACTIONS(1246),
    [anon_sym_LPARENquote] = ACTIONS(1246),
    [anon_sym_RPAREN] = ACTIONS(1246),
    [anon_sym_COLON] = ACTIONS(1246),
    [anon_sym_COLON_COLON] = ACTIONS(1246),
    [anon_sym_DASH_GT] = ACTIONS(1246),
    [anon_sym_DASH_GT_GT] = ACTIONS(1246),
    [anon_sym_as_DASH_GT] = ACTIONS(1246),
    [anon_sym_some_DASH_GT] = ACTIONS(1246),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1246),
    [anon_sym_cond_DASH_GT] = ACTIONS(1246),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1246),
    [sym__symbol_chars] = ACTIONS(1246),
    [anon_sym_LPAREN] = ACTIONS(1246),
    [anon_sym_LBRACK] = ACTIONS(1246),
    [anon_sym_RBRACK] = ACTIONS(1246),
    [anon_sym_LBRACE] = ACTIONS(1246),
    [anon_sym_RBRACE] = ACTIONS(1246),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1246),
    [anon_sym_POUND] = ACTIONS(1246),
    [anon_sym_POUND_LBRACE] = ACTIONS(1246),
    [anon_sym_SEMI] = ACTIONS(1246),
    [anon_sym_POUND_BANG] = ACTIONS(1246),
    [anon_sym_POUND_] = ACTIONS(1246),
    [anon_sym_] = ACTIONS(1244),
    [anon_sym_LPARENcomment] = ACTIONS(1246),
    [anon_sym_POUND_LPAREN] = ACTIONS(1246),
    [sym_shorthand_fn_arg] = ACTIONS(1246),
  },
  [312] = {
    [sym_number_long] = ACTIONS(1013),
    [sym_number_double] = ACTIONS(1013),
    [anon_sym_DQUOTE] = ACTIONS(1013),
    [anon_sym_RPAREN] = ACTIONS(1013),
    [anon_sym_COLON] = ACTIONS(1013),
    [anon_sym_COLON_COLON] = ACTIONS(1013),
    [anon_sym_DASH_GT] = ACTIONS(1013),
    [anon_sym_DASH_GT_GT] = ACTIONS(1013),
    [anon_sym_as_DASH_GT] = ACTIONS(1013),
    [anon_sym_some_DASH_GT] = ACTIONS(1013),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1013),
    [anon_sym_cond_DASH_GT] = ACTIONS(1013),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1013),
    [sym__symbol_chars] = ACTIONS(1013),
    [anon_sym_LPAREN] = ACTIONS(1013),
    [anon_sym_LBRACK] = ACTIONS(1013),
    [anon_sym_LBRACE] = ACTIONS(1013),
    [anon_sym_POUND] = ACTIONS(1013),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1013),
  },
  [313] = {
    [sym_number_long] = ACTIONS(1246),
    [sym_number_double] = ACTIONS(1246),
    [anon_sym_DQUOTE] = ACTIONS(1246),
    [anon_sym_RPAREN] = ACTIONS(1246),
    [anon_sym_COLON] = ACTIONS(1246),
    [anon_sym_COLON_COLON] = ACTIONS(1246),
    [anon_sym_DASH_GT] = ACTIONS(1246),
    [anon_sym_DASH_GT_GT] = ACTIONS(1246),
    [anon_sym_as_DASH_GT] = ACTIONS(1246),
    [anon_sym_some_DASH_GT] = ACTIONS(1246),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1246),
    [anon_sym_cond_DASH_GT] = ACTIONS(1246),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1246),
    [sym__symbol_chars] = ACTIONS(1246),
    [anon_sym_LPAREN] = ACTIONS(1246),
    [anon_sym_LBRACK] = ACTIONS(1246),
    [anon_sym_LBRACE] = ACTIONS(1246),
    [anon_sym_POUND] = ACTIONS(1246),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1246),
  },
  [314] = {
    [aux_sym_ignore_form_repeat1] = STATE(314),
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
    [anon_sym_DASH_GT] = ACTIONS(862),
    [anon_sym_DASH_GT_GT] = ACTIONS(862),
    [anon_sym_as_DASH_GT] = ACTIONS(862),
    [anon_sym_some_DASH_GT] = ACTIONS(862),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(862),
    [anon_sym_cond_DASH_GT] = ACTIONS(862),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(862),
    [sym__symbol_chars] = ACTIONS(862),
    [anon_sym_LPAREN] = ACTIONS(862),
    [anon_sym_LBRACK] = ACTIONS(862),
    [anon_sym_LBRACE] = ACTIONS(862),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(862),
    [anon_sym_POUND] = ACTIONS(862),
    [anon_sym_POUND_LBRACE] = ACTIONS(862),
    [anon_sym_SEMI] = ACTIONS(862),
    [anon_sym_POUND_BANG] = ACTIONS(862),
    [anon_sym_POUND_] = ACTIONS(862),
    [anon_sym_] = ACTIONS(1248),
    [anon_sym_LPARENcomment] = ACTIONS(862),
    [anon_sym_POUND_LPAREN] = ACTIONS(862),
    [sym_shorthand_fn_arg] = ACTIONS(862),
  },
  [315] = {
    [aux_sym_ignore_form_repeat1] = STATE(314),
    [sym_nil] = ACTIONS(1185),
    [sym_true] = ACTIONS(1185),
    [sym_false] = ACTIONS(1185),
    [sym_number_long] = ACTIONS(1185),
    [sym_number_double] = ACTIONS(1185),
    [anon_sym_BSLASH] = ACTIONS(1185),
    [anon_sym_DQUOTE] = ACTIONS(1185),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1185),
    [anon_sym_SQUOTE] = ACTIONS(1185),
    [anon_sym_LPARENquote] = ACTIONS(1185),
    [anon_sym_RPAREN] = ACTIONS(1185),
    [anon_sym_COLON] = ACTIONS(1185),
    [anon_sym_COLON_COLON] = ACTIONS(1185),
    [anon_sym_DASH_GT] = ACTIONS(1185),
    [anon_sym_DASH_GT_GT] = ACTIONS(1185),
    [anon_sym_as_DASH_GT] = ACTIONS(1185),
    [anon_sym_some_DASH_GT] = ACTIONS(1185),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1185),
    [anon_sym_cond_DASH_GT] = ACTIONS(1185),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1185),
    [sym__symbol_chars] = ACTIONS(1185),
    [anon_sym_LPAREN] = ACTIONS(1185),
    [anon_sym_LBRACK] = ACTIONS(1185),
    [anon_sym_LBRACE] = ACTIONS(1185),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1185),
    [anon_sym_POUND] = ACTIONS(1185),
    [anon_sym_POUND_LBRACE] = ACTIONS(1185),
    [anon_sym_SEMI] = ACTIONS(1185),
    [anon_sym_POUND_BANG] = ACTIONS(1185),
    [anon_sym_POUND_] = ACTIONS(1185),
    [anon_sym_] = ACTIONS(1191),
    [anon_sym_LPARENcomment] = ACTIONS(1185),
    [anon_sym_POUND_LPAREN] = ACTIONS(1185),
    [sym_shorthand_fn_arg] = ACTIONS(1185),
  },
  [316] = {
    [ts_builtin_sym_end] = ACTIONS(1251),
    [sym_nil] = ACTIONS(1253),
    [sym_true] = ACTIONS(1253),
    [sym_false] = ACTIONS(1253),
    [sym_number_long] = ACTIONS(1253),
    [sym_number_double] = ACTIONS(1251),
    [anon_sym_BSLASH] = ACTIONS(1251),
    [anon_sym_DQUOTE] = ACTIONS(1251),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1251),
    [anon_sym_SQUOTE] = ACTIONS(1251),
    [anon_sym_LPARENquote] = ACTIONS(1251),
    [anon_sym_RPAREN] = ACTIONS(1251),
    [anon_sym_COLON] = ACTIONS(1253),
    [anon_sym_COLON_COLON] = ACTIONS(1251),
    [anon_sym_DASH_GT] = ACTIONS(1253),
    [anon_sym_DASH_GT_GT] = ACTIONS(1251),
    [anon_sym_as_DASH_GT] = ACTIONS(1251),
    [anon_sym_some_DASH_GT] = ACTIONS(1253),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1251),
    [anon_sym_cond_DASH_GT] = ACTIONS(1253),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1251),
    [sym__symbol_chars] = ACTIONS(1253),
    [anon_sym_LPAREN] = ACTIONS(1253),
    [anon_sym_LBRACK] = ACTIONS(1251),
    [anon_sym_RBRACK] = ACTIONS(1251),
    [anon_sym_LBRACE] = ACTIONS(1251),
    [anon_sym_RBRACE] = ACTIONS(1251),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1251),
    [anon_sym_POUND] = ACTIONS(1253),
    [anon_sym_POUND_LBRACE] = ACTIONS(1251),
    [anon_sym_SEMI] = ACTIONS(1251),
    [anon_sym_POUND_BANG] = ACTIONS(1251),
    [anon_sym_POUND_] = ACTIONS(1251),
    [anon_sym_LPARENcomment] = ACTIONS(1251),
    [anon_sym_POUND_LPAREN] = ACTIONS(1251),
    [sym_shorthand_fn_arg] = ACTIONS(1251),
  },
  [317] = {
    [anon_sym_LPAREN] = ACTIONS(572),
    [anon_sym_LBRACK] = ACTIONS(572),
    [anon_sym_LBRACE] = ACTIONS(572),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(572),
    [anon_sym_POUND] = ACTIONS(574),
  },
  [318] = {
    [anon_sym_LPAREN] = ACTIONS(672),
    [anon_sym_LBRACK] = ACTIONS(672),
  },
  [319] = {
    [anon_sym_LPAREN] = ACTIONS(753),
    [anon_sym_LBRACK] = ACTIONS(753),
  },
  [320] = {
    [sym__anything] = STATE(65),
    [sym__literal] = STATE(65),
    [sym__collection_literal] = STATE(65),
    [sym_boolean] = STATE(65),
    [sym_number] = STATE(65),
    [sym__number] = STATE(24),
    [sym_character] = STATE(65),
    [sym__character] = STATE(25),
    [sym_string] = STATE(65),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(65),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(65),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(65),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(65),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(65),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(65),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(65),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym__hash_map_kv_pair] = STATE(328),
    [sym__hash_map_key] = STATE(65),
    [sym_set] = STATE(65),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(65),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_function] = STATE(65),
    [sym_anonymous_fn] = STATE(36),
    [sym_shorthand_fn] = STATE(36),
    [sym_defn] = STATE(36),
    [aux_sym__hash_map_repeat1] = STATE(328),
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
    [anon_sym_RBRACE] = ACTIONS(1255),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(123),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
  },
  [321] = {
    [ts_builtin_sym_end] = ACTIONS(1257),
    [sym_nil] = ACTIONS(1259),
    [sym_true] = ACTIONS(1259),
    [sym_false] = ACTIONS(1259),
    [sym_number_long] = ACTIONS(1259),
    [sym_number_double] = ACTIONS(1257),
    [anon_sym_BSLASH] = ACTIONS(1257),
    [anon_sym_DQUOTE] = ACTIONS(1257),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1257),
    [anon_sym_SQUOTE] = ACTIONS(1257),
    [anon_sym_LPARENquote] = ACTIONS(1257),
    [anon_sym_RPAREN] = ACTIONS(1257),
    [anon_sym_COLON] = ACTIONS(1259),
    [anon_sym_COLON_COLON] = ACTIONS(1257),
    [anon_sym_DASH_GT] = ACTIONS(1259),
    [anon_sym_DASH_GT_GT] = ACTIONS(1257),
    [anon_sym_as_DASH_GT] = ACTIONS(1257),
    [anon_sym_some_DASH_GT] = ACTIONS(1259),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1257),
    [anon_sym_cond_DASH_GT] = ACTIONS(1259),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1257),
    [sym__symbol_chars] = ACTIONS(1259),
    [anon_sym_LPAREN] = ACTIONS(1259),
    [anon_sym_LBRACK] = ACTIONS(1257),
    [anon_sym_RBRACK] = ACTIONS(1257),
    [anon_sym_LBRACE] = ACTIONS(1257),
    [anon_sym_RBRACE] = ACTIONS(1257),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1257),
    [anon_sym_POUND] = ACTIONS(1259),
    [anon_sym_POUND_LBRACE] = ACTIONS(1257),
    [anon_sym_SEMI] = ACTIONS(1257),
    [anon_sym_POUND_BANG] = ACTIONS(1257),
    [anon_sym_POUND_] = ACTIONS(1257),
    [anon_sym_LPARENcomment] = ACTIONS(1257),
    [anon_sym_POUND_LPAREN] = ACTIONS(1257),
    [sym_shorthand_fn_arg] = ACTIONS(1257),
  },
  [322] = {
    [anon_sym_RPAREN] = ACTIONS(1261),
  },
  [323] = {
    [sym_number_long] = ACTIONS(1013),
    [sym_number_double] = ACTIONS(1013),
    [anon_sym_DQUOTE] = ACTIONS(1013),
    [anon_sym_COLON] = ACTIONS(1013),
    [anon_sym_COLON_COLON] = ACTIONS(1013),
    [anon_sym_DASH_GT] = ACTIONS(1013),
    [anon_sym_DASH_GT_GT] = ACTIONS(1013),
    [anon_sym_as_DASH_GT] = ACTIONS(1013),
    [anon_sym_some_DASH_GT] = ACTIONS(1013),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1013),
    [anon_sym_cond_DASH_GT] = ACTIONS(1013),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1013),
    [sym__symbol_chars] = ACTIONS(1013),
    [anon_sym_LPAREN] = ACTIONS(1013),
    [anon_sym_LBRACK] = ACTIONS(1013),
    [anon_sym_RBRACK] = ACTIONS(1013),
    [anon_sym_LBRACE] = ACTIONS(1013),
    [anon_sym_POUND] = ACTIONS(1013),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1013),
  },
  [324] = {
    [sym_number_long] = ACTIONS(1246),
    [sym_number_double] = ACTIONS(1246),
    [anon_sym_DQUOTE] = ACTIONS(1246),
    [anon_sym_COLON] = ACTIONS(1246),
    [anon_sym_COLON_COLON] = ACTIONS(1246),
    [anon_sym_DASH_GT] = ACTIONS(1246),
    [anon_sym_DASH_GT_GT] = ACTIONS(1246),
    [anon_sym_as_DASH_GT] = ACTIONS(1246),
    [anon_sym_some_DASH_GT] = ACTIONS(1246),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1246),
    [anon_sym_cond_DASH_GT] = ACTIONS(1246),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1246),
    [sym__symbol_chars] = ACTIONS(1246),
    [anon_sym_LPAREN] = ACTIONS(1246),
    [anon_sym_LBRACK] = ACTIONS(1246),
    [anon_sym_RBRACK] = ACTIONS(1246),
    [anon_sym_LBRACE] = ACTIONS(1246),
    [anon_sym_POUND] = ACTIONS(1246),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1246),
  },
  [325] = {
    [sym_number_long] = ACTIONS(1013),
    [sym_number_double] = ACTIONS(1013),
    [anon_sym_DQUOTE] = ACTIONS(1013),
    [anon_sym_COLON] = ACTIONS(1013),
    [anon_sym_COLON_COLON] = ACTIONS(1013),
    [anon_sym_DASH_GT] = ACTIONS(1013),
    [anon_sym_DASH_GT_GT] = ACTIONS(1013),
    [anon_sym_as_DASH_GT] = ACTIONS(1013),
    [anon_sym_some_DASH_GT] = ACTIONS(1013),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1013),
    [anon_sym_cond_DASH_GT] = ACTIONS(1013),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1013),
    [sym__symbol_chars] = ACTIONS(1013),
    [anon_sym_LPAREN] = ACTIONS(1013),
    [anon_sym_LBRACK] = ACTIONS(1013),
    [anon_sym_LBRACE] = ACTIONS(1013),
    [anon_sym_RBRACE] = ACTIONS(1013),
    [anon_sym_POUND] = ACTIONS(1013),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1013),
  },
  [326] = {
    [sym_number_long] = ACTIONS(1246),
    [sym_number_double] = ACTIONS(1246),
    [anon_sym_DQUOTE] = ACTIONS(1246),
    [anon_sym_COLON] = ACTIONS(1246),
    [anon_sym_COLON_COLON] = ACTIONS(1246),
    [anon_sym_DASH_GT] = ACTIONS(1246),
    [anon_sym_DASH_GT_GT] = ACTIONS(1246),
    [anon_sym_as_DASH_GT] = ACTIONS(1246),
    [anon_sym_some_DASH_GT] = ACTIONS(1246),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1246),
    [anon_sym_cond_DASH_GT] = ACTIONS(1246),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1246),
    [sym__symbol_chars] = ACTIONS(1246),
    [anon_sym_LPAREN] = ACTIONS(1246),
    [anon_sym_LBRACK] = ACTIONS(1246),
    [anon_sym_LBRACE] = ACTIONS(1246),
    [anon_sym_RBRACE] = ACTIONS(1246),
    [anon_sym_POUND] = ACTIONS(1246),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1246),
  },
  [327] = {
    [anon_sym_LPAREN] = ACTIONS(1064),
    [anon_sym_LBRACK] = ACTIONS(1064),
  },
  [328] = {
    [sym__anything] = STATE(65),
    [sym__literal] = STATE(65),
    [sym__collection_literal] = STATE(65),
    [sym_boolean] = STATE(65),
    [sym_number] = STATE(65),
    [sym__number] = STATE(24),
    [sym_character] = STATE(65),
    [sym__character] = STATE(25),
    [sym_string] = STATE(65),
    [sym__string] = STATE(26),
    [sym_regex] = STATE(65),
    [sym__regex] = STATE(27),
    [sym_quote] = STATE(65),
    [sym__quote] = STATE(28),
    [sym_keyword] = STATE(65),
    [sym__keyword] = STATE(29),
    [sym__unqualified_keyword] = STATE(29),
    [sym_qualified_keyword] = STATE(29),
    [sym_symbol] = STATE(65),
    [sym__symbol] = STATE(30),
    [sym_threading_macro] = STATE(30),
    [sym_qualified_symbol] = STATE(30),
    [sym_list] = STATE(65),
    [sym__list] = STATE(31),
    [sym_vector] = STATE(65),
    [sym__vector] = STATE(32),
    [sym_hash_map] = STATE(65),
    [sym__hash_map] = STATE(33),
    [sym_namespace_map] = STATE(33),
    [sym__hash_map_kv_pair] = STATE(137),
    [sym__hash_map_key] = STATE(65),
    [sym_set] = STATE(65),
    [sym__set] = STATE(34),
    [sym_comment] = STATE(65),
    [sym_semicolon] = STATE(35),
    [sym_shebang_line] = STATE(35),
    [sym_ignore_form] = STATE(35),
    [sym_comment_macro] = STATE(35),
    [sym_function] = STATE(65),
    [sym_anonymous_fn] = STATE(36),
    [sym_shorthand_fn] = STATE(36),
    [sym_defn] = STATE(36),
    [aux_sym__hash_map_repeat1] = STATE(137),
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
    [anon_sym_RBRACE] = ACTIONS(1263),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(123),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
  },
  [329] = {
    [ts_builtin_sym_end] = ACTIONS(1265),
    [sym_nil] = ACTIONS(1267),
    [sym_true] = ACTIONS(1267),
    [sym_false] = ACTIONS(1267),
    [sym_number_long] = ACTIONS(1267),
    [sym_number_double] = ACTIONS(1265),
    [anon_sym_BSLASH] = ACTIONS(1265),
    [anon_sym_DQUOTE] = ACTIONS(1265),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1265),
    [anon_sym_SQUOTE] = ACTIONS(1265),
    [anon_sym_LPARENquote] = ACTIONS(1265),
    [anon_sym_RPAREN] = ACTIONS(1265),
    [anon_sym_COLON] = ACTIONS(1267),
    [anon_sym_COLON_COLON] = ACTIONS(1265),
    [anon_sym_DASH_GT] = ACTIONS(1267),
    [anon_sym_DASH_GT_GT] = ACTIONS(1265),
    [anon_sym_as_DASH_GT] = ACTIONS(1265),
    [anon_sym_some_DASH_GT] = ACTIONS(1267),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1265),
    [anon_sym_cond_DASH_GT] = ACTIONS(1267),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1265),
    [sym__symbol_chars] = ACTIONS(1267),
    [anon_sym_LPAREN] = ACTIONS(1267),
    [anon_sym_LBRACK] = ACTIONS(1265),
    [anon_sym_RBRACK] = ACTIONS(1265),
    [anon_sym_LBRACE] = ACTIONS(1265),
    [anon_sym_RBRACE] = ACTIONS(1265),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1265),
    [anon_sym_POUND] = ACTIONS(1267),
    [anon_sym_POUND_LBRACE] = ACTIONS(1265),
    [anon_sym_SEMI] = ACTIONS(1265),
    [anon_sym_POUND_BANG] = ACTIONS(1265),
    [anon_sym_POUND_] = ACTIONS(1265),
    [anon_sym_LPARENcomment] = ACTIONS(1265),
    [anon_sym_POUND_LPAREN] = ACTIONS(1265),
    [sym_shorthand_fn_arg] = ACTIONS(1265),
  },
  [330] = {
    [anon_sym_LPAREN] = ACTIONS(1229),
    [anon_sym_LBRACK] = ACTIONS(1229),
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
  [55] = {.count = 1, .reusable = true}, SHIFT(22),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [59] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 1),
  [61] = {.count = 1, .reusable = false}, SHIFT(38),
  [63] = {.count = 1, .reusable = false}, SHIFT(39),
  [65] = {.count = 1, .reusable = false}, SHIFT(40),
  [67] = {.count = 1, .reusable = false}, SHIFT(41),
  [69] = {.count = 1, .reusable = false}, SHIFT(42),
  [71] = {.count = 1, .reusable = false}, SHIFT(43),
  [73] = {.count = 1, .reusable = false}, SHIFT(44),
  [75] = {.count = 1, .reusable = false}, SHIFT(45),
  [77] = {.count = 1, .reusable = false}, SHIFT(48),
  [79] = {.count = 1, .reusable = true}, SHIFT(46),
  [81] = {.count = 1, .reusable = true}, SHIFT(47),
  [83] = {.count = 1, .reusable = true}, SHIFT(49),
  [85] = {.count = 1, .reusable = true}, SHIFT(50),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_threading_macro, 1),
  [89] = {.count = 1, .reusable = false}, REDUCE(sym_threading_macro, 1),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym__symbol, 1),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym__symbol, 1),
  [95] = {.count = 1, .reusable = true}, SHIFT(51),
  [97] = {.count = 1, .reusable = false}, SHIFT(57),
  [99] = {.count = 1, .reusable = true}, SHIFT(52),
  [101] = {.count = 1, .reusable = true}, SHIFT(53),
  [103] = {.count = 1, .reusable = true}, SHIFT(54),
  [105] = {.count = 1, .reusable = false}, SHIFT(55),
  [107] = {.count = 1, .reusable = false}, SHIFT(56),
  [109] = {.count = 1, .reusable = false}, SHIFT(61),
  [111] = {.count = 1, .reusable = true}, SHIFT(58),
  [113] = {.count = 1, .reusable = true}, SHIFT(59),
  [115] = {.count = 1, .reusable = true}, SHIFT(60),
  [117] = {.count = 1, .reusable = false}, SHIFT(65),
  [119] = {.count = 1, .reusable = true}, SHIFT(62),
  [121] = {.count = 1, .reusable = true}, SHIFT(63),
  [123] = {.count = 1, .reusable = true}, SHIFT(64),
  [125] = {.count = 1, .reusable = true}, SHIFT(67),
  [127] = {.count = 1, .reusable = true}, SHIFT(69),
  [129] = {.count = 1, .reusable = false}, SHIFT(73),
  [131] = {.count = 1, .reusable = true}, SHIFT(70),
  [133] = {.count = 1, .reusable = true}, SHIFT(71),
  [135] = {.count = 1, .reusable = true}, SHIFT(72),
  [137] = {.count = 1, .reusable = false}, SHIFT(74),
  [139] = {.count = 1, .reusable = false}, SHIFT(75),
  [141] = {.count = 1, .reusable = false}, SHIFT(85),
  [143] = {.count = 1, .reusable = false}, SHIFT(76),
  [145] = {.count = 1, .reusable = false}, SHIFT(77),
  [147] = {.count = 1, .reusable = false}, SHIFT(78),
  [149] = {.count = 1, .reusable = false}, SHIFT(79),
  [151] = {.count = 1, .reusable = false}, SHIFT(80),
  [153] = {.count = 1, .reusable = false}, SHIFT(81),
  [155] = {.count = 1, .reusable = false}, SHIFT(82),
  [157] = {.count = 1, .reusable = false}, SHIFT(83),
  [159] = {.count = 1, .reusable = false}, SHIFT(84),
  [161] = {.count = 1, .reusable = false}, SHIFT(86),
  [163] = {.count = 1, .reusable = false}, SHIFT(97),
  [165] = {.count = 1, .reusable = false}, SHIFT(87),
  [167] = {.count = 1, .reusable = false}, SHIFT(88),
  [169] = {.count = 1, .reusable = false}, SHIFT(89),
  [171] = {.count = 1, .reusable = false}, SHIFT(90),
  [173] = {.count = 1, .reusable = false}, SHIFT(91),
  [175] = {.count = 1, .reusable = false}, SHIFT(92),
  [177] = {.count = 1, .reusable = false}, SHIFT(93),
  [179] = {.count = 1, .reusable = false}, SHIFT(94),
  [181] = {.count = 1, .reusable = false}, SHIFT(95),
  [183] = {.count = 1, .reusable = false}, SHIFT(96),
  [185] = {.count = 1, .reusable = false}, SHIFT(101),
  [187] = {.count = 1, .reusable = true}, SHIFT(98),
  [189] = {.count = 1, .reusable = true}, SHIFT(99),
  [191] = {.count = 1, .reusable = true}, SHIFT(100),
  [193] = {.count = 1, .reusable = true}, SHIFT(101),
  [195] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_number, 1),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym_number, 1),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_character, 1),
  [203] = {.count = 1, .reusable = false}, REDUCE(sym_character, 1),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [207] = {.count = 1, .reusable = false}, REDUCE(sym_string, 1),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_regex, 1),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym_regex, 1),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_quote, 1),
  [215] = {.count = 1, .reusable = false}, REDUCE(sym_quote, 1),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_keyword, 1),
  [219] = {.count = 1, .reusable = false}, REDUCE(sym_keyword, 1),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_symbol, 1),
  [223] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 1),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_list, 1),
  [227] = {.count = 1, .reusable = false}, REDUCE(sym_list, 1),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_vector, 1),
  [231] = {.count = 1, .reusable = false}, REDUCE(sym_vector, 1),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map, 1),
  [235] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map, 1),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_set, 1),
  [239] = {.count = 1, .reusable = false}, REDUCE(sym_set, 1),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [243] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 1),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_function, 1),
  [247] = {.count = 1, .reusable = false}, REDUCE(sym_function, 1),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [251] = {.count = 1, .reusable = false}, SHIFT(102),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym__character, 2),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym__character, 2),
  [257] = {.count = 1, .reusable = true}, SHIFT(103),
  [259] = {.count = 1, .reusable = true}, SHIFT(104),
  [261] = {.count = 1, .reusable = false}, SHIFT(104),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym__string, 2),
  [265] = {.count = 1, .reusable = false}, REDUCE(sym__string, 2),
  [267] = {.count = 1, .reusable = false}, SHIFT(105),
  [269] = {.count = 1, .reusable = false}, SHIFT(106),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym__regex, 2),
  [273] = {.count = 1, .reusable = false}, REDUCE(sym__regex, 2),
  [275] = {.count = 1, .reusable = false}, SHIFT(107),
  [277] = {.count = 1, .reusable = false}, SHIFT(108),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym__quote, 2),
  [281] = {.count = 1, .reusable = false}, REDUCE(sym__quote, 2),
  [283] = {.count = 1, .reusable = false}, SHIFT(109),
  [285] = {.count = 1, .reusable = false}, SHIFT(110),
  [287] = {.count = 1, .reusable = true}, SHIFT(111),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym__unqualified_keyword, 2),
  [291] = {.count = 1, .reusable = false}, REDUCE(sym__unqualified_keyword, 2),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_keyword, 2),
  [295] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_keyword, 2),
  [297] = {.count = 1, .reusable = true}, SHIFT(112),
  [299] = {.count = 1, .reusable = true}, SHIFT(113),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym__list, 2),
  [303] = {.count = 1, .reusable = false}, REDUCE(sym__list, 2),
  [305] = {.count = 1, .reusable = false}, SHIFT(114),
  [307] = {.count = 1, .reusable = false}, SHIFT(115),
  [309] = {.count = 1, .reusable = false}, SHIFT(116),
  [311] = {.count = 1, .reusable = true}, SHIFT(116),
  [313] = {.count = 1, .reusable = false}, SHIFT(117),
  [315] = {.count = 1, .reusable = true}, SHIFT(118),
  [317] = {.count = 1, .reusable = false}, SHIFT(128),
  [319] = {.count = 1, .reusable = true}, SHIFT(127),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym__vector, 2),
  [323] = {.count = 1, .reusable = false}, REDUCE(sym__vector, 2),
  [325] = {.count = 1, .reusable = false}, SHIFT(129),
  [327] = {.count = 1, .reusable = false}, SHIFT(130),
  [329] = {.count = 1, .reusable = false}, SHIFT(132),
  [331] = {.count = 1, .reusable = true}, SHIFT(131),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym__hash_map, 2),
  [335] = {.count = 1, .reusable = false}, REDUCE(sym__hash_map, 2),
  [337] = {.count = 1, .reusable = false}, SHIFT(133),
  [339] = {.count = 1, .reusable = false}, SHIFT(134),
  [341] = {.count = 1, .reusable = false}, SHIFT(135),
  [343] = {.count = 1, .reusable = true}, SHIFT(136),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 2),
  [347] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 2),
  [349] = {.count = 1, .reusable = true}, SHIFT(138),
  [351] = {.count = 1, .reusable = true}, SHIFT(139),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym__set, 2),
  [355] = {.count = 1, .reusable = false}, REDUCE(sym__set, 2),
  [357] = {.count = 1, .reusable = false}, SHIFT(140),
  [359] = {.count = 1, .reusable = false}, SHIFT(141),
  [361] = {.count = 1, .reusable = false}, SHIFT(143),
  [363] = {.count = 1, .reusable = true}, SHIFT(142),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym_semicolon, 2),
  [367] = {.count = 1, .reusable = false}, REDUCE(sym_semicolon, 2),
  [369] = {.count = 1, .reusable = true}, REDUCE(sym_shebang_line, 2),
  [371] = {.count = 1, .reusable = false}, REDUCE(sym_shebang_line, 2),
  [373] = {.count = 1, .reusable = false}, SHIFT(144),
  [375] = {.count = 1, .reusable = false}, SHIFT(145),
  [377] = {.count = 1, .reusable = true}, SHIFT(146),
  [379] = {.count = 1, .reusable = true}, SHIFT(147),
  [381] = {.count = 1, .reusable = false}, SHIFT(148),
  [383] = {.count = 1, .reusable = false}, SHIFT(150),
  [385] = {.count = 1, .reusable = false}, SHIFT(149),
  [387] = {.count = 1, .reusable = false}, SHIFT(161),
  [389] = {.count = 1, .reusable = false}, SHIFT(151),
  [391] = {.count = 1, .reusable = false}, SHIFT(152),
  [393] = {.count = 1, .reusable = false}, SHIFT(153),
  [395] = {.count = 1, .reusable = false}, SHIFT(154),
  [397] = {.count = 1, .reusable = false}, SHIFT(155),
  [399] = {.count = 1, .reusable = false}, SHIFT(156),
  [401] = {.count = 1, .reusable = false}, SHIFT(157),
  [403] = {.count = 1, .reusable = false}, SHIFT(158),
  [405] = {.count = 1, .reusable = false}, SHIFT(159),
  [407] = {.count = 1, .reusable = false}, SHIFT(160),
  [409] = {.count = 1, .reusable = false}, SHIFT(172),
  [411] = {.count = 1, .reusable = false}, SHIFT(162),
  [413] = {.count = 1, .reusable = false}, SHIFT(163),
  [415] = {.count = 1, .reusable = false}, SHIFT(164),
  [417] = {.count = 1, .reusable = false}, SHIFT(165),
  [419] = {.count = 1, .reusable = false}, SHIFT(166),
  [421] = {.count = 1, .reusable = false}, SHIFT(167),
  [423] = {.count = 1, .reusable = false}, SHIFT(168),
  [425] = {.count = 1, .reusable = false}, SHIFT(169),
  [427] = {.count = 1, .reusable = false}, SHIFT(170),
  [429] = {.count = 1, .reusable = false}, SHIFT(171),
  [431] = {.count = 1, .reusable = true}, SHIFT(173),
  [433] = {.count = 1, .reusable = true}, REDUCE(sym_ignore_form, 2),
  [435] = {.count = 1, .reusable = false}, REDUCE(sym_ignore_form, 2),
  [437] = {.count = 1, .reusable = true}, SHIFT(174),
  [439] = {.count = 1, .reusable = false}, SHIFT(175),
  [441] = {.count = 1, .reusable = false}, SHIFT(176),
  [443] = {.count = 1, .reusable = false}, SHIFT(177),
  [445] = {.count = 1, .reusable = false}, SHIFT(178),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym_comment_macro, 2),
  [449] = {.count = 1, .reusable = false}, REDUCE(sym_comment_macro, 2),
  [451] = {.count = 1, .reusable = true}, SHIFT(179),
  [453] = {.count = 1, .reusable = true}, SHIFT(180),
  [455] = {.count = 1, .reusable = false}, SHIFT(181),
  [457] = {.count = 1, .reusable = false}, SHIFT(183),
  [459] = {.count = 1, .reusable = false}, SHIFT(182),
  [461] = {.count = 1, .reusable = false}, SHIFT(185),
  [463] = {.count = 1, .reusable = false}, SHIFT(184),
  [465] = {.count = 1, .reusable = false}, SHIFT(187),
  [467] = {.count = 1, .reusable = false}, SHIFT(186),
  [469] = {.count = 1, .reusable = true}, SHIFT(188),
  [471] = {.count = 1, .reusable = false}, SHIFT(190),
  [473] = {.count = 1, .reusable = false}, SHIFT(189),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym_shorthand_fn, 2),
  [477] = {.count = 1, .reusable = false}, REDUCE(sym_shorthand_fn, 2),
  [479] = {.count = 1, .reusable = false}, SHIFT(191),
  [481] = {.count = 1, .reusable = false}, SHIFT(192),
  [483] = {.count = 1, .reusable = false}, SHIFT(194),
  [485] = {.count = 1, .reusable = true}, SHIFT(193),
  [487] = {.count = 1, .reusable = true}, SHIFT(194),
  [489] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [491] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(102),
  [494] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [497] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(24),
  [500] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(24),
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
  [566] = {.count = 1, .reusable = true}, SHIFT(195),
  [568] = {.count = 1, .reusable = true}, REDUCE(sym__octal_char, 2),
  [570] = {.count = 1, .reusable = false}, REDUCE(sym__octal_char, 2),
  [572] = {.count = 1, .reusable = true}, REDUCE(sym__string, 3),
  [574] = {.count = 1, .reusable = false}, REDUCE(sym__string, 3),
  [576] = {.count = 1, .reusable = false}, REDUCE(aux_sym__string_repeat1, 2),
  [578] = {.count = 2, .reusable = false}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(106),
  [581] = {.count = 1, .reusable = true}, REDUCE(sym__regex, 3),
  [583] = {.count = 1, .reusable = false}, REDUCE(sym__regex, 3),
  [585] = {.count = 1, .reusable = false}, REDUCE(aux_sym__regex_repeat1, 2),
  [587] = {.count = 2, .reusable = false}, REDUCE(aux_sym__regex_repeat1, 2), SHIFT_REPEAT(108),
  [590] = {.count = 1, .reusable = true}, SHIFT(196),
  [592] = {.count = 1, .reusable = false}, SHIFT(197),
  [594] = {.count = 1, .reusable = true}, REDUCE(sym__quote, 3),
  [596] = {.count = 1, .reusable = false}, REDUCE(sym__quote, 3),
  [598] = {.count = 1, .reusable = true}, SHIFT(198),
  [600] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_symbol, 3),
  [602] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_symbol, 3),
  [604] = {.count = 1, .reusable = true}, SHIFT(199),
  [606] = {.count = 1, .reusable = false}, SHIFT(200),
  [608] = {.count = 1, .reusable = true}, SHIFT(201),
  [610] = {.count = 1, .reusable = true}, REDUCE(sym_function_name, 1),
  [612] = {.count = 1, .reusable = false}, REDUCE(sym_function_name, 1),
  [614] = {.count = 1, .reusable = false}, REDUCE(sym_params, 1),
  [616] = {.count = 1, .reusable = true}, REDUCE(sym_params, 1),
  [618] = {.count = 1, .reusable = true}, SHIFT(203),
  [620] = {.count = 1, .reusable = false}, SHIFT(206),
  [622] = {.count = 1, .reusable = true}, REDUCE(sym__single_arity_fn, 1),
  [624] = {.count = 1, .reusable = true}, REDUCE(sym__multi_arity_fn, 1),
  [626] = {.count = 1, .reusable = true}, SHIFT(208),
  [628] = {.count = 1, .reusable = true}, SHIFT(209),
  [630] = {.count = 1, .reusable = true}, SHIFT(210),
  [632] = {.count = 1, .reusable = false}, SHIFT(211),
  [634] = {.count = 1, .reusable = true}, REDUCE(sym__list, 3),
  [636] = {.count = 1, .reusable = false}, REDUCE(sym__list, 3),
  [638] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(128),
  [641] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(52),
  [644] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(54),
  [647] = {.count = 1, .reusable = true}, SHIFT(219),
  [649] = {.count = 1, .reusable = false}, SHIFT(220),
  [651] = {.count = 1, .reusable = true}, REDUCE(sym__vector, 3),
  [653] = {.count = 1, .reusable = false}, REDUCE(sym__vector, 3),
  [655] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(132),
  [658] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(58),
  [661] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(60),
  [664] = {.count = 1, .reusable = true}, SHIFT(221),
  [666] = {.count = 1, .reusable = false}, SHIFT(222),
  [668] = {.count = 1, .reusable = false}, REDUCE(sym__hash_map_kv_pair, 2),
  [670] = {.count = 1, .reusable = true}, REDUCE(sym__hash_map_kv_pair, 2),
  [672] = {.count = 1, .reusable = true}, REDUCE(sym__hash_map, 3),
  [674] = {.count = 1, .reusable = false}, REDUCE(sym__hash_map, 3),
  [676] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(65),
  [679] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(2),
  [682] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(24),
  [685] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(24),
  [688] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(3),
  [691] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(4),
  [694] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(5),
  [697] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(62),
  [700] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(7),
  [703] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(8),
  [706] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(9),
  [709] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(10),
  [712] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(10),
  [715] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(11),
  [718] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(12),
  [721] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(13),
  [724] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(14),
  [727] = {.count = 1, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2),
  [729] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(15),
  [732] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(16),
  [735] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(17),
  [738] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(18),
  [741] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(19),
  [744] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(64),
  [747] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(21),
  [750] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(22),
  [753] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 3),
  [755] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 3),
  [757] = {.count = 1, .reusable = true}, SHIFT(223),
  [759] = {.count = 1, .reusable = true}, SHIFT(225),
  [761] = {.count = 1, .reusable = false}, SHIFT(226),
  [763] = {.count = 1, .reusable = true}, REDUCE(sym__set, 3),
  [765] = {.count = 1, .reusable = false}, REDUCE(sym__set, 3),
  [767] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(143),
  [770] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(70),
  [773] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(72),
  [776] = {.count = 1, .reusable = false}, SHIFT(227),
  [778] = {.count = 1, .reusable = false}, SHIFT(228),
  [780] = {.count = 1, .reusable = true}, SHIFT(229),
  [782] = {.count = 1, .reusable = true}, REDUCE(sym__paren_sequence, 2),
  [784] = {.count = 1, .reusable = false}, REDUCE(sym__paren_sequence, 2),
  [786] = {.count = 1, .reusable = false}, SHIFT(230),
  [788] = {.count = 1, .reusable = false}, SHIFT(231),
  [790] = {.count = 1, .reusable = false}, SHIFT(232),
  [792] = {.count = 1, .reusable = true}, SHIFT(233),
  [794] = {.count = 1, .reusable = true}, SHIFT(234),
  [796] = {.count = 1, .reusable = false}, SHIFT(235),
  [798] = {.count = 1, .reusable = false}, SHIFT(237),
  [800] = {.count = 1, .reusable = false}, SHIFT(236),
  [802] = {.count = 1, .reusable = false}, SHIFT(239),
  [804] = {.count = 1, .reusable = false}, SHIFT(238),
  [806] = {.count = 1, .reusable = true}, REDUCE(sym__bracket_sequence, 2),
  [808] = {.count = 1, .reusable = false}, REDUCE(sym__bracket_sequence, 2),
  [810] = {.count = 1, .reusable = false}, SHIFT(241),
  [812] = {.count = 1, .reusable = false}, SHIFT(240),
  [814] = {.count = 1, .reusable = true}, SHIFT(242),
  [816] = {.count = 1, .reusable = false}, SHIFT(244),
  [818] = {.count = 1, .reusable = false}, SHIFT(243),
  [820] = {.count = 1, .reusable = false}, SHIFT(245),
  [822] = {.count = 1, .reusable = false}, SHIFT(246),
  [824] = {.count = 1, .reusable = true}, SHIFT(247),
  [826] = {.count = 1, .reusable = true}, SHIFT(248),
  [828] = {.count = 1, .reusable = false}, SHIFT(249),
  [830] = {.count = 1, .reusable = false}, SHIFT(251),
  [832] = {.count = 1, .reusable = false}, SHIFT(250),
  [834] = {.count = 1, .reusable = false}, SHIFT(253),
  [836] = {.count = 1, .reusable = false}, SHIFT(252),
  [838] = {.count = 1, .reusable = false}, SHIFT(255),
  [840] = {.count = 1, .reusable = false}, SHIFT(254),
  [842] = {.count = 1, .reusable = true}, REDUCE(sym__curly_brace_sequence, 2),
  [844] = {.count = 1, .reusable = false}, REDUCE(sym__curly_brace_sequence, 2),
  [846] = {.count = 1, .reusable = true}, SHIFT(256),
  [848] = {.count = 1, .reusable = false}, SHIFT(258),
  [850] = {.count = 1, .reusable = false}, SHIFT(257),
  [852] = {.count = 1, .reusable = false}, SHIFT(259),
  [854] = {.count = 1, .reusable = true}, REDUCE(sym_ignore_form, 3),
  [856] = {.count = 1, .reusable = false}, REDUCE(sym_ignore_form, 3),
  [858] = {.count = 1, .reusable = true}, SHIFT(260),
  [860] = {.count = 1, .reusable = true}, SHIFT(261),
  [862] = {.count = 1, .reusable = false}, REDUCE(aux_sym_ignore_form_repeat1, 2),
  [864] = {.count = 2, .reusable = false}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(176),
  [867] = {.count = 1, .reusable = false}, SHIFT(262),
  [869] = {.count = 1, .reusable = false}, SHIFT(263),
  [871] = {.count = 1, .reusable = true}, SHIFT(264),
  [873] = {.count = 1, .reusable = false}, SHIFT(265),
  [875] = {.count = 1, .reusable = false}, SHIFT(266),
  [877] = {.count = 1, .reusable = false}, SHIFT(267),
  [879] = {.count = 1, .reusable = false}, SHIFT(268),
  [881] = {.count = 1, .reusable = true}, REDUCE(sym_comment_macro, 3),
  [883] = {.count = 1, .reusable = false}, REDUCE(sym_comment_macro, 3),
  [885] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(190),
  [888] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(87),
  [891] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2),
  [893] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(89),
  [896] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(90),
  [899] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(91),
  [902] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(92),
  [905] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(93),
  [908] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(94),
  [911] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(95),
  [914] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(96),
  [917] = {.count = 1, .reusable = true}, SHIFT(269),
  [919] = {.count = 1, .reusable = false}, SHIFT(270),
  [921] = {.count = 1, .reusable = true}, REDUCE(sym_shorthand_fn, 3),
  [923] = {.count = 1, .reusable = false}, REDUCE(sym_shorthand_fn, 3),
  [925] = {.count = 2, .reusable = false}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(194),
  [928] = {.count = 2, .reusable = false}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(2),
  [931] = {.count = 2, .reusable = false}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(24),
  [934] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(24),
  [937] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(3),
  [940] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(4),
  [943] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(5),
  [946] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(98),
  [949] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(7),
  [952] = {.count = 1, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2),
  [954] = {.count = 2, .reusable = false}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(8),
  [957] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(9),
  [960] = {.count = 2, .reusable = false}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(10),
  [963] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(10),
  [966] = {.count = 2, .reusable = false}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(11),
  [969] = {.count = 2, .reusable = false}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(12),
  [972] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(13),
  [975] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(14),
  [978] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(15),
  [981] = {.count = 2, .reusable = false}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(16),
  [984] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(17),
  [987] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(18),
  [990] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(19),
  [993] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(100),
  [996] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(21),
  [999] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(22),
  [1002] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(194),
  [1005] = {.count = 1, .reusable = true}, SHIFT(271),
  [1007] = {.count = 1, .reusable = true}, SHIFT(272),
  [1009] = {.count = 1, .reusable = true}, SHIFT(273),
  [1011] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_keyword, 4),
  [1013] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_keyword, 4),
  [1015] = {.count = 1, .reusable = true}, SHIFT(274),
  [1017] = {.count = 1, .reusable = true}, SHIFT(275),
  [1019] = {.count = 1, .reusable = true}, SHIFT(276),
  [1021] = {.count = 1, .reusable = true}, SHIFT(277),
  [1023] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_fn, 4),
  [1025] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_fn, 4),
  [1027] = {.count = 1, .reusable = true}, SHIFT(278),
  [1029] = {.count = 1, .reusable = true}, REDUCE(sym__single_arity_fn, 2),
  [1031] = {.count = 1, .reusable = true}, REDUCE(sym_function_body, 1),
  [1033] = {.count = 1, .reusable = true}, REDUCE(aux_sym__multi_arity_fn_repeat1, 2),
  [1035] = {.count = 2, .reusable = true}, REDUCE(aux_sym__multi_arity_fn_repeat1, 2), SHIFT_REPEAT(118),
  [1038] = {.count = 1, .reusable = false}, SHIFT(279),
  [1040] = {.count = 1, .reusable = false}, SHIFT(280),
  [1042] = {.count = 1, .reusable = true}, SHIFT(281),
  [1044] = {.count = 1, .reusable = true}, SHIFT(283),
  [1046] = {.count = 1, .reusable = true}, SHIFT(285),
  [1048] = {.count = 1, .reusable = true}, REDUCE(sym_docstring, 1),
  [1050] = {.count = 1, .reusable = false}, REDUCE(sym_docstring, 1),
  [1052] = {.count = 1, .reusable = true}, REDUCE(sym_attr_map, 1),
  [1054] = {.count = 1, .reusable = true}, SHIFT(286),
  [1056] = {.count = 1, .reusable = true}, SHIFT(289),
  [1058] = {.count = 1, .reusable = true}, SHIFT(290),
  [1060] = {.count = 1, .reusable = true}, SHIFT(291),
  [1062] = {.count = 1, .reusable = true}, SHIFT(292),
  [1064] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 4),
  [1066] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 4),
  [1068] = {.count = 1, .reusable = true}, SHIFT(293),
  [1070] = {.count = 1, .reusable = true}, SHIFT(294),
  [1072] = {.count = 1, .reusable = true}, SHIFT(295),
  [1074] = {.count = 1, .reusable = true}, SHIFT(296),
  [1076] = {.count = 1, .reusable = true}, REDUCE(sym__paren_sequence, 3),
  [1078] = {.count = 1, .reusable = false}, REDUCE(sym__paren_sequence, 3),
  [1080] = {.count = 1, .reusable = false}, SHIFT(297),
  [1082] = {.count = 1, .reusable = false}, SHIFT(298),
  [1084] = {.count = 1, .reusable = true}, SHIFT(299),
  [1086] = {.count = 1, .reusable = false}, SHIFT(300),
  [1088] = {.count = 1, .reusable = false}, SHIFT(301),
  [1090] = {.count = 1, .reusable = false}, SHIFT(302),
  [1092] = {.count = 1, .reusable = false}, SHIFT(303),
  [1094] = {.count = 1, .reusable = true}, REDUCE(sym__bracket_sequence, 3),
  [1096] = {.count = 1, .reusable = false}, REDUCE(sym__bracket_sequence, 3),
  [1098] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(244),
  [1101] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(151),
  [1104] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(152),
  [1107] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(153),
  [1110] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(154),
  [1113] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(155),
  [1116] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(156),
  [1119] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(157),
  [1122] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(159),
  [1125] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(160),
  [1128] = {.count = 1, .reusable = false}, SHIFT(304),
  [1130] = {.count = 1, .reusable = false}, SHIFT(305),
  [1132] = {.count = 1, .reusable = true}, SHIFT(306),
  [1134] = {.count = 1, .reusable = false}, SHIFT(307),
  [1136] = {.count = 1, .reusable = false}, SHIFT(308),
  [1138] = {.count = 1, .reusable = false}, SHIFT(309),
  [1140] = {.count = 1, .reusable = false}, SHIFT(310),
  [1142] = {.count = 1, .reusable = true}, REDUCE(sym__curly_brace_sequence, 3),
  [1144] = {.count = 1, .reusable = false}, REDUCE(sym__curly_brace_sequence, 3),
  [1146] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(258),
  [1149] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(162),
  [1152] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(163),
  [1155] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(164),
  [1158] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(165),
  [1161] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(166),
  [1164] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(167),
  [1167] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(168),
  [1170] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(169),
  [1173] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(171),
  [1176] = {.count = 1, .reusable = false}, SHIFT(311),
  [1178] = {.count = 1, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2),
  [1180] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(260),
  [1183] = {.count = 1, .reusable = true}, REDUCE(sym_ignore_form, 4),
  [1185] = {.count = 1, .reusable = false}, REDUCE(sym_ignore_form, 4),
  [1187] = {.count = 1, .reusable = true}, SHIFT(312),
  [1189] = {.count = 1, .reusable = false}, SHIFT(313),
  [1191] = {.count = 1, .reusable = true}, SHIFT(314),
  [1193] = {.count = 1, .reusable = true}, SHIFT(315),
  [1195] = {.count = 1, .reusable = true}, SHIFT(316),
  [1197] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(272),
  [1200] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(274),
  [1203] = {.count = 1, .reusable = true}, REDUCE(aux_sym__multi_arity_fn_repeat1, 3),
  [1205] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_fn, 5),
  [1207] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_fn, 5),
  [1209] = {.count = 1, .reusable = false}, SHIFT(317),
  [1211] = {.count = 1, .reusable = true}, SHIFT(318),
  [1213] = {.count = 1, .reusable = true}, SHIFT(319),
  [1215] = {.count = 1, .reusable = true}, SHIFT(320),
  [1217] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 5),
  [1219] = {.count = 1, .reusable = false}, REDUCE(sym_defn, 5),
  [1221] = {.count = 1, .reusable = true}, SHIFT(321),
  [1223] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(289),
  [1226] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(291),
  [1229] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 5),
  [1231] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 5),
  [1233] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(294),
  [1236] = {.count = 1, .reusable = true}, SHIFT(323),
  [1238] = {.count = 1, .reusable = false}, SHIFT(324),
  [1240] = {.count = 1, .reusable = true}, SHIFT(325),
  [1242] = {.count = 1, .reusable = false}, SHIFT(326),
  [1244] = {.count = 1, .reusable = true}, REDUCE(sym__curly_brace_sequence, 4),
  [1246] = {.count = 1, .reusable = false}, REDUCE(sym__curly_brace_sequence, 4),
  [1248] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(314),
  [1251] = {.count = 1, .reusable = true}, REDUCE(sym__unicode_char, 5),
  [1253] = {.count = 1, .reusable = false}, REDUCE(sym__unicode_char, 5),
  [1255] = {.count = 1, .reusable = true}, SHIFT(327),
  [1257] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 6),
  [1259] = {.count = 1, .reusable = false}, REDUCE(sym_defn, 6),
  [1261] = {.count = 1, .reusable = true}, SHIFT(329),
  [1263] = {.count = 1, .reusable = true}, SHIFT(330),
  [1265] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 7),
  [1267] = {.count = 1, .reusable = false}, REDUCE(sym_defn, 7),
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
