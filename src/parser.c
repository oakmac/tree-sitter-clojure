#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 353
#define SYMBOL_COUNT 135
#define ALIAS_COUNT 0
#define TOKEN_COUNT 63
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
  anon_sym_CARET = 60,
  anon_sym_CARET_COLON = 61,
  anon_sym_CARET_DQUOTE = 62,
  sym_program = 63,
  sym__anything = 64,
  sym__literal = 65,
  sym__collection_literal = 66,
  sym_boolean = 67,
  sym_number = 68,
  sym__number = 69,
  sym_character = 70,
  sym__character = 71,
  sym__special_char = 72,
  sym__unicode_char = 73,
  sym__octal_char = 74,
  sym__octal_num = 75,
  sym_string = 76,
  sym__string = 77,
  sym_regex = 78,
  sym__regex = 79,
  sym_quote = 80,
  sym__quote = 81,
  sym_keyword = 82,
  sym__keyword = 83,
  sym__unqualified_keyword = 84,
  sym_qualified_keyword = 85,
  sym_symbol = 86,
  sym__symbol = 87,
  sym_threading_macro = 88,
  sym_qualified_symbol = 89,
  sym_list = 90,
  sym__list = 91,
  sym_vector = 92,
  sym__vector = 93,
  sym_hash_map = 94,
  sym__hash_map = 95,
  sym_namespace_map = 96,
  sym__hash_map_kv_pair = 97,
  sym__hash_map_key = 98,
  sym__hash_map_value = 99,
  sym_set = 100,
  sym__set = 101,
  sym_comment = 102,
  sym_semicolon = 103,
  sym_shebang_line = 104,
  sym_ignore_form = 105,
  sym_comment_macro = 106,
  sym__one_form = 107,
  sym__paren_sequence = 108,
  sym__bracket_sequence = 109,
  sym__curly_brace_sequence = 110,
  sym_function = 111,
  sym_anonymous_fn = 112,
  sym__after_the_fn_name = 113,
  sym_function_name = 114,
  sym__single_arity_fn = 115,
  sym__multi_arity_fn = 116,
  sym_function_body = 117,
  sym_params = 118,
  sym_shorthand_fn = 119,
  sym_defn = 120,
  sym_docstring = 121,
  sym_attr_map = 122,
  sym_metadata = 123,
  sym__metadata_map = 124,
  sym_metadata_shorthand = 125,
  aux_sym_program_repeat1 = 126,
  aux_sym__string_repeat1 = 127,
  aux_sym__regex_repeat1 = 128,
  aux_sym__hash_map_repeat1 = 129,
  aux_sym_ignore_form_repeat1 = 130,
  aux_sym_comment_macro_repeat1 = 131,
  aux_sym__multi_arity_fn_repeat1 = 132,
  aux_sym_shorthand_fn_repeat1 = 133,
  aux_sym_metadata_repeat1 = 134,
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
  [anon_sym_CARET] = "^",
  [anon_sym_CARET_COLON] = "^:",
  [anon_sym_CARET_DQUOTE] = "^\"",
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
  [sym_metadata] = "metadata",
  [sym__metadata_map] = "_metadata_map",
  [sym_metadata_shorthand] = "metadata_shorthand",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym__string_repeat1] = "_string_repeat1",
  [aux_sym__regex_repeat1] = "_regex_repeat1",
  [aux_sym__hash_map_repeat1] = "_hash_map_repeat1",
  [aux_sym_ignore_form_repeat1] = "ignore_form_repeat1",
  [aux_sym_comment_macro_repeat1] = "comment_macro_repeat1",
  [aux_sym__multi_arity_fn_repeat1] = "_multi_arity_fn_repeat1",
  [aux_sym_shorthand_fn_repeat1] = "shorthand_fn_repeat1",
  [aux_sym_metadata_repeat1] = "metadata_repeat1",
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
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_DQUOTE] = {
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
  [sym_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym__metadata_map] = {
    .visible = false,
    .named = true,
  },
  [sym_metadata_shorthand] = {
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
  [aux_sym_metadata_repeat1] = {
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
      if (lookahead == '^')
        ADVANCE(48);
      if (lookahead == 'n')
        ADVANCE(51);
      if (lookahead == 'o')
        ADVANCE(60);
      if (lookahead == 'r')
        ADVANCE(61);
      if (lookahead == 's')
        ADVANCE(67);
      if (lookahead == 't')
        ADVANCE(78);
      if (lookahead == 'u')
        ADVANCE(84);
      if (lookahead == '{')
        ADVANCE(85);
      if (lookahead == '}')
        ADVANCE(86);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(91);
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
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '\"')
        ADVANCE(49);
      if (lookahead == ':')
        ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_CARET_DQUOTE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_CARET_COLON);
      END_STATE();
    case 51:
      if (lookahead == 'e')
        ADVANCE(52);
      if (lookahead == 'i')
        ADVANCE(58);
      END_STATE();
    case 52:
      if (lookahead == 'w')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'l')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'i')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'n')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'e')
        ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_newline);
      END_STATE();
    case 58:
      if (lookahead == 'l')
        ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 61:
      if (lookahead == 'e')
        ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 't')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'u')
        ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 'r')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 'n')
        ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 67:
      if (lookahead == 'o')
        ADVANCE(68);
      if (lookahead == 'p')
        ADVANCE(74);
      END_STATE();
    case 68:
      if (lookahead == 'm')
        ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 'e')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == '-')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == '>')
        ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_some_DASH_GT);
      if (lookahead == '>')
        ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_some_DASH_GT_GT);
      END_STATE();
    case 74:
      if (lookahead == 'a')
        ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == 'c')
        ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == 'e')
        ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_space);
      END_STATE();
    case 78:
      if (lookahead == 'a')
        ADVANCE(79);
      if (lookahead == 'r')
        ADVANCE(81);
      END_STATE();
    case 79:
      if (lookahead == 'b')
        ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_tab);
      END_STATE();
    case 81:
      if (lookahead == 'u')
        ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 'e')
        ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_number_long);
      if (lookahead == '.')
        ADVANCE(88);
      if (lookahead == '_')
        ADVANCE(89);
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
    case 89:
      if (lookahead == '_')
        ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == '.')
        ADVANCE(88);
      if (lookahead == '_')
        ADVANCE(89);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(36);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__hex_char);
      END_STATE();
    case 92:
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
        ADVANCE(93);
      if (lookahead == ',')
        SKIP(92);
      if (lookahead == '-')
        ADVANCE(96);
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
      if (lookahead == '^')
        ADVANCE(48);
      if (lookahead == 'a')
        ADVANCE(97);
      if (lookahead == 'c')
        ADVANCE(101);
      if (lookahead == 'f')
        ADVANCE(108);
      if (lookahead == 'n')
        ADVANCE(113);
      if (lookahead == 's')
        ADVANCE(116);
      if (lookahead == 't')
        ADVANCE(121);
      if (lookahead == '{')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(92);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
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
        ADVANCE(95);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_number_long);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
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
        ADVANCE(95);
      END_STATE();
    case 95:
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
        ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '>')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
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
        ADVANCE(95);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 's')
        ADVANCE(98);
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
        ADVANCE(95);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '-')
        ADVANCE(99);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '>')
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
        ADVANCE(95);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_as_DASH_GT);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'o')
        ADVANCE(102);
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
        ADVANCE(95);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'n')
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
        ADVANCE(95);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'd')
        ADVANCE(104);
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
        ADVANCE(95);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '-')
        ADVANCE(105);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '>')
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
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_cond_DASH_GT);
      if (lookahead == '>')
        ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_cond_DASH_GT_GT);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'a')
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
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'l')
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
        ADVANCE(95);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 's')
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
        ADVANCE(95);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'e')
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
        ADVANCE(95);
      END_STATE();
    case 112:
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
        ADVANCE(95);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'i')
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
        ADVANCE(95);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'l')
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
        ADVANCE(95);
      END_STATE();
    case 115:
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
        ADVANCE(95);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'o')
        ADVANCE(117);
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
        ADVANCE(95);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'm')
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
        ADVANCE(95);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'e')
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
        ADVANCE(95);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '-')
        ADVANCE(120);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '>')
        ADVANCE(72);
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
        ADVANCE(95);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'r')
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
        ADVANCE(95);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'u')
        ADVANCE(123);
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
        ADVANCE(95);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'e')
        ADVANCE(124);
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
        ADVANCE(95);
      END_STATE();
    case 124:
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
        ADVANCE(95);
      END_STATE();
    case 125:
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
        ADVANCE(93);
      if (lookahead == ',')
        SKIP(125);
      if (lookahead == '-')
        ADVANCE(96);
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
      if (lookahead == '^')
        ADVANCE(48);
      if (lookahead == 'a')
        ADVANCE(97);
      if (lookahead == 'c')
        ADVANCE(101);
      if (lookahead == 'f')
        ADVANCE(108);
      if (lookahead == 'n')
        ADVANCE(113);
      if (lookahead == 's')
        ADVANCE(116);
      if (lookahead == 't')
        ADVANCE(121);
      if (lookahead == '{')
        ADVANCE(85);
      if (lookahead == '}')
        ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(125);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      END_STATE();
    case 126:
      if (lookahead == '\n')
        SKIP(126);
      if (lookahead == ',')
        ADVANCE(127);
      if (lookahead == 'b')
        ADVANCE(128);
      if (lookahead == 'f')
        ADVANCE(137);
      if (lookahead == 'n')
        ADVANCE(145);
      if (lookahead == 'o')
        ADVANCE(60);
      if (lookahead == 'r')
        ADVANCE(146);
      if (lookahead == 's')
        ADVANCE(147);
      if (lookahead == 't')
        ADVANCE(148);
      if (lookahead == 'u')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(127);
      if (lookahead != 0)
        ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__normal_char);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'a')
        ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == 'c')
        ADVANCE(130);
      END_STATE();
    case 130:
      if (lookahead == 'k')
        ADVANCE(131);
      END_STATE();
    case 131:
      if (lookahead == 's')
        ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == 'p')
        ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == 'a')
        ADVANCE(134);
      END_STATE();
    case 134:
      if (lookahead == 'c')
        ADVANCE(135);
      END_STATE();
    case 135:
      if (lookahead == 'e')
        ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_backspace);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'o')
        ADVANCE(138);
      END_STATE();
    case 138:
      if (lookahead == 'r')
        ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead == 'm')
        ADVANCE(140);
      END_STATE();
    case 140:
      if (lookahead == 'f')
        ADVANCE(141);
      END_STATE();
    case 141:
      if (lookahead == 'e')
        ADVANCE(142);
      END_STATE();
    case 142:
      if (lookahead == 'e')
        ADVANCE(143);
      END_STATE();
    case 143:
      if (lookahead == 'd')
        ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_formfeed);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'e')
        ADVANCE(52);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'e')
        ADVANCE(62);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'p')
        ADVANCE(74);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'a')
        ADVANCE(79);
      END_STATE();
    case 149:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(150);
      if (lookahead == '\\')
        ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(150);
      if (lookahead != 0)
        ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 153:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(154);
      if (lookahead == '\\')
        ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(154);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(153);
      if (lookahead != 0)
        ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(152);
      END_STATE();
    case 156:
      if (lookahead == ',')
        SKIP(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(156);
      if (lookahead == '!' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__keyword_chars);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(157);
      END_STATE();
    case 158:
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
        ADVANCE(93);
      if (lookahead == ',')
        SKIP(158);
      if (lookahead == '-')
        ADVANCE(96);
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
      if (lookahead == '^')
        ADVANCE(48);
      if (lookahead == 'a')
        ADVANCE(97);
      if (lookahead == 'c')
        ADVANCE(101);
      if (lookahead == 'f')
        ADVANCE(108);
      if (lookahead == 'n')
        ADVANCE(113);
      if (lookahead == 's')
        ADVANCE(116);
      if (lookahead == 't')
        ADVANCE(121);
      if (lookahead == '{')
        ADVANCE(85);
      if (lookahead == '}')
        ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(158);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      END_STATE();
    case 159:
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
        ADVANCE(93);
      if (lookahead == ',')
        SKIP(159);
      if (lookahead == '-')
        ADVANCE(96);
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
      if (lookahead == '^')
        ADVANCE(48);
      if (lookahead == 'a')
        ADVANCE(97);
      if (lookahead == 'c')
        ADVANCE(101);
      if (lookahead == 'd')
        ADVANCE(160);
      if (lookahead == 'f')
        ADVANCE(165);
      if (lookahead == 'n')
        ADVANCE(113);
      if (lookahead == 's')
        ADVANCE(116);
      if (lookahead == 't')
        ADVANCE(121);
      if (lookahead == '{')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(159);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'e')
        ADVANCE(161);
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
        ADVANCE(95);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'f')
        ADVANCE(162);
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
        ADVANCE(95);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__symbol_chars);
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
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == '-')
        ADVANCE(164);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      END_STATE();
    case 164:
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
        ADVANCE(95);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'a')
        ADVANCE(109);
      if (lookahead == 'n')
        ADVANCE(166);
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
        ADVANCE(95);
      END_STATE();
    case 166:
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
        ADVANCE(95);
      END_STATE();
    case 167:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(13);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(93);
      if (lookahead == ',')
        SKIP(167);
      if (lookahead == '-')
        ADVANCE(96);
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
      if (lookahead == '^')
        ADVANCE(48);
      if (lookahead == 'a')
        ADVANCE(97);
      if (lookahead == 'c')
        ADVANCE(101);
      if (lookahead == 'f')
        ADVANCE(108);
      if (lookahead == 'n')
        ADVANCE(113);
      if (lookahead == 's')
        ADVANCE(116);
      if (lookahead == 't')
        ADVANCE(121);
      if (lookahead == '{')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(167);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      END_STATE();
    case 168:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(13);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(93);
      if (lookahead == ',')
        SKIP(168);
      if (lookahead == '-')
        ADVANCE(96);
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
      if (lookahead == '^')
        ADVANCE(48);
      if (lookahead == 'a')
        ADVANCE(97);
      if (lookahead == 'c')
        ADVANCE(101);
      if (lookahead == 'f')
        ADVANCE(108);
      if (lookahead == 'n')
        ADVANCE(113);
      if (lookahead == 's')
        ADVANCE(116);
      if (lookahead == 't')
        ADVANCE(121);
      if (lookahead == '{')
        ADVANCE(85);
      if (lookahead == '}')
        ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(168);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      END_STATE();
    case 169:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(170);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == ')')
        ADVANCE(27);
      if (lookahead == ',')
        SKIP(169);
      if (lookahead == '/')
        ADVANCE(41);
      if (lookahead == '[')
        ADVANCE(45);
      if (lookahead == '{')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(169);
      if (lookahead == '!' ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ':')
        ADVANCE(7);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == '\n')
        SKIP(172);
      if (lookahead == ',')
        ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(173);
      if (lookahead != 0)
        ADVANCE(174);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == ',')
        ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(174);
      END_STATE();
    case 175:
      if (lookahead == ' ')
        ADVANCE(176);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(177);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '+')
        ADVANCE(93);
      if (lookahead == ',')
        ADVANCE(178);
      if (lookahead == '-')
        ADVANCE(96);
      if (lookahead == '.')
        ADVANCE(179);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(45);
      if (lookahead == 'a')
        ADVANCE(97);
      if (lookahead == 'c')
        ADVANCE(101);
      if (lookahead == 's')
        ADVANCE(116);
      if (lookahead == '{')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(178);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(34);
      END_STATE();
    case 180:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(177);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == ')')
        ADVANCE(27);
      if (lookahead == '+')
        ADVANCE(93);
      if (lookahead == ',')
        ADVANCE(178);
      if (lookahead == '-')
        ADVANCE(96);
      if (lookahead == '.')
        ADVANCE(179);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(45);
      if (lookahead == 'a')
        ADVANCE(97);
      if (lookahead == 'c')
        ADVANCE(101);
      if (lookahead == 's')
        ADVANCE(116);
      if (lookahead == '{')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(178);
      END_STATE();
    case 181:
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
        ADVANCE(93);
      if (lookahead == ',')
        SKIP(181);
      if (lookahead == '-')
        ADVANCE(96);
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
      if (lookahead == '^')
        ADVANCE(48);
      if (lookahead == 'a')
        ADVANCE(97);
      if (lookahead == 'c')
        ADVANCE(101);
      if (lookahead == 'f')
        ADVANCE(108);
      if (lookahead == 'n')
        ADVANCE(113);
      if (lookahead == 's')
        ADVANCE(116);
      if (lookahead == 't')
        ADVANCE(121);
      if (lookahead == '{')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(181);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      END_STATE();
    case 182:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        SKIP(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(182);
      END_STATE();
    case 183:
      if (lookahead == '#')
        ADVANCE(184);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == ',')
        SKIP(183);
      if (lookahead == '-')
        ADVANCE(185);
      if (lookahead == '[')
        ADVANCE(45);
      if (lookahead == '^')
        ADVANCE(48);
      if (lookahead == 'a')
        ADVANCE(97);
      if (lookahead == 'c')
        ADVANCE(101);
      if (lookahead == 's')
        ADVANCE(116);
      if (lookahead == '{')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(183);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ':')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(11);
      END_STATE();
    case 185:
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
        ADVANCE(95);
      END_STATE();
    case 186:
      if (lookahead == ',')
        SKIP(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(91);
      END_STATE();
    case 187:
      if (lookahead == ',')
        SKIP(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(187);
      if (('0' <= lookahead && lookahead <= '3'))
        ADVANCE(188);
      if (('4' <= lookahead && lookahead <= '7'))
        ADVANCE(191);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(189);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(190);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 193:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(176);
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
        ADVANCE(93);
      if (lookahead == ',')
        SKIP(193);
      if (lookahead == '-')
        ADVANCE(96);
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
      if (lookahead == '^')
        ADVANCE(48);
      if (lookahead == 'a')
        ADVANCE(97);
      if (lookahead == 'c')
        ADVANCE(101);
      if (lookahead == 'f')
        ADVANCE(108);
      if (lookahead == 'n')
        ADVANCE(113);
      if (lookahead == 's')
        ADVANCE(116);
      if (lookahead == 't')
        ADVANCE(121);
      if (lookahead == '{')
        ADVANCE(85);
      if (lookahead == '}')
        ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(193);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      END_STATE();
    case 194:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(176);
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
        ADVANCE(93);
      if (lookahead == ',')
        SKIP(194);
      if (lookahead == '-')
        ADVANCE(96);
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
      if (lookahead == '^')
        ADVANCE(48);
      if (lookahead == 'a')
        ADVANCE(97);
      if (lookahead == 'c')
        ADVANCE(101);
      if (lookahead == 'f')
        ADVANCE(108);
      if (lookahead == 'n')
        ADVANCE(113);
      if (lookahead == 's')
        ADVANCE(116);
      if (lookahead == 't')
        ADVANCE(121);
      if (lookahead == '{')
        ADVANCE(85);
      if (lookahead == '}')
        ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(194);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      END_STATE();
    case 195:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(177);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '+')
        ADVANCE(93);
      if (lookahead == ',')
        ADVANCE(178);
      if (lookahead == '-')
        ADVANCE(96);
      if (lookahead == '.')
        ADVANCE(179);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(45);
      if (lookahead == ']')
        ADVANCE(47);
      if (lookahead == 'a')
        ADVANCE(97);
      if (lookahead == 'c')
        ADVANCE(101);
      if (lookahead == 's')
        ADVANCE(116);
      if (lookahead == '{')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(178);
      END_STATE();
    case 196:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(177);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '+')
        ADVANCE(93);
      if (lookahead == ',')
        ADVANCE(178);
      if (lookahead == '-')
        ADVANCE(96);
      if (lookahead == '.')
        ADVANCE(179);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(45);
      if (lookahead == 'a')
        ADVANCE(97);
      if (lookahead == 'c')
        ADVANCE(101);
      if (lookahead == 's')
        ADVANCE(116);
      if (lookahead == '{')
        ADVANCE(85);
      if (lookahead == '}')
        ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(178);
      END_STATE();
    case 197:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(176);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(13);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(93);
      if (lookahead == ',')
        SKIP(197);
      if (lookahead == '-')
        ADVANCE(96);
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
      if (lookahead == '^')
        ADVANCE(48);
      if (lookahead == 'a')
        ADVANCE(97);
      if (lookahead == 'c')
        ADVANCE(101);
      if (lookahead == 'f')
        ADVANCE(108);
      if (lookahead == 'n')
        ADVANCE(113);
      if (lookahead == 's')
        ADVANCE(116);
      if (lookahead == 't')
        ADVANCE(121);
      if (lookahead == '{')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(197);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      END_STATE();
    case 198:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(177);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == ')')
        ADVANCE(27);
      if (lookahead == '+')
        ADVANCE(93);
      if (lookahead == ',')
        ADVANCE(178);
      if (lookahead == '-')
        ADVANCE(96);
      if (lookahead == '.')
        ADVANCE(179);
      if (lookahead == '/')
        ADVANCE(41);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(45);
      if (lookahead == 'a')
        ADVANCE(97);
      if (lookahead == 'c')
        ADVANCE(101);
      if (lookahead == 's')
        ADVANCE(116);
      if (lookahead == '{')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(178);
      END_STATE();
    case 199:
      if (lookahead == ' ')
        ADVANCE(176);
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
        ADVANCE(93);
      if (lookahead == ',')
        SKIP(199);
      if (lookahead == '-')
        ADVANCE(96);
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
      if (lookahead == '^')
        ADVANCE(48);
      if (lookahead == 'a')
        ADVANCE(97);
      if (lookahead == 'c')
        ADVANCE(101);
      if (lookahead == 'f')
        ADVANCE(108);
      if (lookahead == 'n')
        ADVANCE(113);
      if (lookahead == 's')
        ADVANCE(116);
      if (lookahead == 't')
        ADVANCE(121);
      if (lookahead == '{')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(199);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      END_STATE();
    case 200:
      if (lookahead == ' ')
        ADVANCE(176);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(13);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(93);
      if (lookahead == ',')
        SKIP(200);
      if (lookahead == '-')
        ADVANCE(96);
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
      if (lookahead == '^')
        ADVANCE(48);
      if (lookahead == 'a')
        ADVANCE(97);
      if (lookahead == 'c')
        ADVANCE(101);
      if (lookahead == 'f')
        ADVANCE(108);
      if (lookahead == 'n')
        ADVANCE(113);
      if (lookahead == 's')
        ADVANCE(116);
      if (lookahead == 't')
        ADVANCE(121);
      if (lookahead == '{')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(200);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      END_STATE();
    case 201:
      if (lookahead == ' ')
        ADVANCE(176);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(13);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(93);
      if (lookahead == ',')
        SKIP(201);
      if (lookahead == '-')
        ADVANCE(96);
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
      if (lookahead == '^')
        ADVANCE(48);
      if (lookahead == 'a')
        ADVANCE(97);
      if (lookahead == 'c')
        ADVANCE(101);
      if (lookahead == 'f')
        ADVANCE(108);
      if (lookahead == 'n')
        ADVANCE(113);
      if (lookahead == 's')
        ADVANCE(116);
      if (lookahead == 't')
        ADVANCE(121);
      if (lookahead == '{')
        ADVANCE(85);
      if (lookahead == '}')
        ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(201);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      END_STATE();
    case 202:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(177);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '+')
        ADVANCE(93);
      if (lookahead == ',')
        ADVANCE(178);
      if (lookahead == '-')
        ADVANCE(96);
      if (lookahead == '.')
        ADVANCE(179);
      if (lookahead == '/')
        ADVANCE(41);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(45);
      if (lookahead == ']')
        ADVANCE(47);
      if (lookahead == 'a')
        ADVANCE(97);
      if (lookahead == 'c')
        ADVANCE(101);
      if (lookahead == 's')
        ADVANCE(116);
      if (lookahead == '{')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(178);
      END_STATE();
    case 203:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(177);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '+')
        ADVANCE(93);
      if (lookahead == ',')
        ADVANCE(178);
      if (lookahead == '-')
        ADVANCE(96);
      if (lookahead == '.')
        ADVANCE(179);
      if (lookahead == '/')
        ADVANCE(41);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(45);
      if (lookahead == 'a')
        ADVANCE(97);
      if (lookahead == 'c')
        ADVANCE(101);
      if (lookahead == 's')
        ADVANCE(116);
      if (lookahead == '{')
        ADVANCE(85);
      if (lookahead == '}')
        ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(178);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 92},
  [2] = {.lex_state = 125},
  [3] = {.lex_state = 126},
  [4] = {.lex_state = 149},
  [5] = {.lex_state = 153},
  [6] = {.lex_state = 92},
  [7] = {.lex_state = 92},
  [8] = {.lex_state = 156},
  [9] = {.lex_state = 156},
  [10] = {.lex_state = 125},
  [11] = {.lex_state = 158},
  [12] = {.lex_state = 159},
  [13] = {.lex_state = 167},
  [14] = {.lex_state = 168},
  [15] = {.lex_state = 168},
  [16] = {.lex_state = 169},
  [17] = {.lex_state = 168},
  [18] = {.lex_state = 172},
  [19] = {.lex_state = 172},
  [20] = {.lex_state = 175},
  [21] = {.lex_state = 180},
  [22] = {.lex_state = 181},
  [23] = {.lex_state = 169},
  [24] = {.lex_state = 156},
  [25] = {.lex_state = 149},
  [26] = {.lex_state = 182},
  [27] = {.lex_state = 125},
  [28] = {.lex_state = 125},
  [29] = {.lex_state = 125},
  [30] = {.lex_state = 125},
  [31] = {.lex_state = 125},
  [32] = {.lex_state = 125},
  [33] = {.lex_state = 125},
  [34] = {.lex_state = 125},
  [35] = {.lex_state = 125},
  [36] = {.lex_state = 125},
  [37] = {.lex_state = 125},
  [38] = {.lex_state = 125},
  [39] = {.lex_state = 125},
  [40] = {.lex_state = 183},
  [41] = {.lex_state = 183},
  [42] = {.lex_state = 92},
  [43] = {.lex_state = 183},
  [44] = {.lex_state = 125},
  [45] = {.lex_state = 186},
  [46] = {.lex_state = 187},
  [47] = {.lex_state = 125},
  [48] = {.lex_state = 149},
  [49] = {.lex_state = 125},
  [50] = {.lex_state = 153},
  [51] = {.lex_state = 125},
  [52] = {.lex_state = 92},
  [53] = {.lex_state = 175},
  [54] = {.lex_state = 159},
  [55] = {.lex_state = 125},
  [56] = {.lex_state = 158},
  [57] = {.lex_state = 169},
  [58] = {.lex_state = 92},
  [59] = {.lex_state = 125},
  [60] = {.lex_state = 175},
  [61] = {.lex_state = 183},
  [62] = {.lex_state = 183},
  [63] = {.lex_state = 181},
  [64] = {.lex_state = 92},
  [65] = {.lex_state = 125},
  [66] = {.lex_state = 175},
  [67] = {.lex_state = 167},
  [68] = {.lex_state = 92},
  [69] = {.lex_state = 125},
  [70] = {.lex_state = 175},
  [71] = {.lex_state = 92},
  [72] = {.lex_state = 168},
  [73] = {.lex_state = 125},
  [74] = {.lex_state = 168},
  [75] = {.lex_state = 92},
  [76] = {.lex_state = 92},
  [77] = {.lex_state = 125},
  [78] = {.lex_state = 175},
  [79] = {.lex_state = 168},
  [80] = {.lex_state = 125},
  [81] = {.lex_state = 125},
  [82] = {.lex_state = 149},
  [83] = {.lex_state = 156},
  [84] = {.lex_state = 156},
  [85] = {.lex_state = 193},
  [86] = {.lex_state = 194},
  [87] = {.lex_state = 180},
  [88] = {.lex_state = 195},
  [89] = {.lex_state = 196},
  [90] = {.lex_state = 92},
  [91] = {.lex_state = 197},
  [92] = {.lex_state = 175},
  [93] = {.lex_state = 149},
  [94] = {.lex_state = 125},
  [95] = {.lex_state = 156},
  [96] = {.lex_state = 156},
  [97] = {.lex_state = 180},
  [98] = {.lex_state = 198},
  [99] = {.lex_state = 180},
  [100] = {.lex_state = 195},
  [101] = {.lex_state = 196},
  [102] = {.lex_state = 92},
  [103] = {.lex_state = 180},
  [104] = {.lex_state = 92},
  [105] = {.lex_state = 125},
  [106] = {.lex_state = 175},
  [107] = {.lex_state = 181},
  [108] = {.lex_state = 183},
  [109] = {.lex_state = 168},
  [110] = {.lex_state = 168},
  [111] = {.lex_state = 169},
  [112] = {.lex_state = 183},
  [113] = {.lex_state = 183},
  [114] = {.lex_state = 149},
  [115] = {.lex_state = 181},
  [116] = {.lex_state = 125},
  [117] = {.lex_state = 92},
  [118] = {.lex_state = 169},
  [119] = {.lex_state = 183},
  [120] = {.lex_state = 186},
  [121] = {.lex_state = 125},
  [122] = {.lex_state = 125},
  [123] = {.lex_state = 149},
  [124] = {.lex_state = 125},
  [125] = {.lex_state = 153},
  [126] = {.lex_state = 199},
  [127] = {.lex_state = 175},
  [128] = {.lex_state = 125},
  [129] = {.lex_state = 156},
  [130] = {.lex_state = 125},
  [131] = {.lex_state = 199},
  [132] = {.lex_state = 175},
  [133] = {.lex_state = 169},
  [134] = {.lex_state = 169},
  [135] = {.lex_state = 92},
  [136] = {.lex_state = 169},
  [137] = {.lex_state = 169},
  [138] = {.lex_state = 181},
  [139] = {.lex_state = 159},
  [140] = {.lex_state = 169},
  [141] = {.lex_state = 181},
  [142] = {.lex_state = 169},
  [143] = {.lex_state = 169},
  [144] = {.lex_state = 183},
  [145] = {.lex_state = 183},
  [146] = {.lex_state = 125},
  [147] = {.lex_state = 181},
  [148] = {.lex_state = 200},
  [149] = {.lex_state = 175},
  [150] = {.lex_state = 125},
  [151] = {.lex_state = 167},
  [152] = {.lex_state = 193},
  [153] = {.lex_state = 175},
  [154] = {.lex_state = 168},
  [155] = {.lex_state = 125},
  [156] = {.lex_state = 168},
  [157] = {.lex_state = 125},
  [158] = {.lex_state = 168},
  [159] = {.lex_state = 201},
  [160] = {.lex_state = 175},
  [161] = {.lex_state = 125},
  [162] = {.lex_state = 168},
  [163] = {.lex_state = 193},
  [164] = {.lex_state = 149},
  [165] = {.lex_state = 193},
  [166] = {.lex_state = 194},
  [167] = {.lex_state = 169},
  [168] = {.lex_state = 193},
  [169] = {.lex_state = 180},
  [170] = {.lex_state = 149},
  [171] = {.lex_state = 156},
  [172] = {.lex_state = 156},
  [173] = {.lex_state = 195},
  [174] = {.lex_state = 202},
  [175] = {.lex_state = 180},
  [176] = {.lex_state = 195},
  [177] = {.lex_state = 193},
  [178] = {.lex_state = 196},
  [179] = {.lex_state = 92},
  [180] = {.lex_state = 195},
  [181] = {.lex_state = 149},
  [182] = {.lex_state = 156},
  [183] = {.lex_state = 156},
  [184] = {.lex_state = 196},
  [185] = {.lex_state = 203},
  [186] = {.lex_state = 180},
  [187] = {.lex_state = 195},
  [188] = {.lex_state = 196},
  [189] = {.lex_state = 193},
  [190] = {.lex_state = 92},
  [191] = {.lex_state = 196},
  [192] = {.lex_state = 196},
  [193] = {.lex_state = 197},
  [194] = {.lex_state = 197},
  [195] = {.lex_state = 175},
  [196] = {.lex_state = 180},
  [197] = {.lex_state = 149},
  [198] = {.lex_state = 180},
  [199] = {.lex_state = 198},
  [200] = {.lex_state = 169},
  [201] = {.lex_state = 180},
  [202] = {.lex_state = 180},
  [203] = {.lex_state = 180},
  [204] = {.lex_state = 195},
  [205] = {.lex_state = 180},
  [206] = {.lex_state = 196},
  [207] = {.lex_state = 196},
  [208] = {.lex_state = 125},
  [209] = {.lex_state = 180},
  [210] = {.lex_state = 199},
  [211] = {.lex_state = 175},
  [212] = {.lex_state = 125},
  [213] = {.lex_state = 181},
  [214] = {.lex_state = 183},
  [215] = {.lex_state = 168},
  [216] = {.lex_state = 183},
  [217] = {.lex_state = 168},
  [218] = {.lex_state = 92},
  [219] = {.lex_state = 183},
  [220] = {.lex_state = 186},
  [221] = {.lex_state = 199},
  [222] = {.lex_state = 199},
  [223] = {.lex_state = 125},
  [224] = {.lex_state = 199},
  [225] = {.lex_state = 199},
  [226] = {.lex_state = 169},
  [227] = {.lex_state = 159},
  [228] = {.lex_state = 125},
  [229] = {.lex_state = 159},
  [230] = {.lex_state = 159},
  [231] = {.lex_state = 181},
  [232] = {.lex_state = 169},
  [233] = {.lex_state = 149},
  [234] = {.lex_state = 169},
  [235] = {.lex_state = 169},
  [236] = {.lex_state = 169},
  [237] = {.lex_state = 159},
  [238] = {.lex_state = 169},
  [239] = {.lex_state = 169},
  [240] = {.lex_state = 169},
  [241] = {.lex_state = 183},
  [242] = {.lex_state = 200},
  [243] = {.lex_state = 200},
  [244] = {.lex_state = 193},
  [245] = {.lex_state = 193},
  [246] = {.lex_state = 125},
  [247] = {.lex_state = 168},
  [248] = {.lex_state = 201},
  [249] = {.lex_state = 201},
  [250] = {.lex_state = 193},
  [251] = {.lex_state = 156},
  [252] = {.lex_state = 193},
  [253] = {.lex_state = 193},
  [254] = {.lex_state = 195},
  [255] = {.lex_state = 149},
  [256] = {.lex_state = 195},
  [257] = {.lex_state = 202},
  [258] = {.lex_state = 169},
  [259] = {.lex_state = 195},
  [260] = {.lex_state = 180},
  [261] = {.lex_state = 195},
  [262] = {.lex_state = 195},
  [263] = {.lex_state = 195},
  [264] = {.lex_state = 196},
  [265] = {.lex_state = 196},
  [266] = {.lex_state = 193},
  [267] = {.lex_state = 195},
  [268] = {.lex_state = 196},
  [269] = {.lex_state = 149},
  [270] = {.lex_state = 196},
  [271] = {.lex_state = 203},
  [272] = {.lex_state = 169},
  [273] = {.lex_state = 196},
  [274] = {.lex_state = 180},
  [275] = {.lex_state = 196},
  [276] = {.lex_state = 195},
  [277] = {.lex_state = 196},
  [278] = {.lex_state = 196},
  [279] = {.lex_state = 196},
  [280] = {.lex_state = 193},
  [281] = {.lex_state = 196},
  [282] = {.lex_state = 196},
  [283] = {.lex_state = 197},
  [284] = {.lex_state = 197},
  [285] = {.lex_state = 180},
  [286] = {.lex_state = 156},
  [287] = {.lex_state = 180},
  [288] = {.lex_state = 180},
  [289] = {.lex_state = 180},
  [290] = {.lex_state = 180},
  [291] = {.lex_state = 196},
  [292] = {.lex_state = 199},
  [293] = {.lex_state = 199},
  [294] = {.lex_state = 183},
  [295] = {.lex_state = 183},
  [296] = {.lex_state = 168},
  [297] = {.lex_state = 186},
  [298] = {.lex_state = 199},
  [299] = {.lex_state = 199},
  [300] = {.lex_state = 199},
  [301] = {.lex_state = 199},
  [302] = {.lex_state = 169},
  [303] = {.lex_state = 169},
  [304] = {.lex_state = 125},
  [305] = {.lex_state = 169},
  [306] = {.lex_state = 149},
  [307] = {.lex_state = 125},
  [308] = {.lex_state = 159},
  [309] = {.lex_state = 169},
  [310] = {.lex_state = 169},
  [311] = {.lex_state = 200},
  [312] = {.lex_state = 200},
  [313] = {.lex_state = 193},
  [314] = {.lex_state = 193},
  [315] = {.lex_state = 125},
  [316] = {.lex_state = 201},
  [317] = {.lex_state = 201},
  [318] = {.lex_state = 193},
  [319] = {.lex_state = 195},
  [320] = {.lex_state = 156},
  [321] = {.lex_state = 195},
  [322] = {.lex_state = 195},
  [323] = {.lex_state = 195},
  [324] = {.lex_state = 195},
  [325] = {.lex_state = 196},
  [326] = {.lex_state = 196},
  [327] = {.lex_state = 156},
  [328] = {.lex_state = 196},
  [329] = {.lex_state = 196},
  [330] = {.lex_state = 196},
  [331] = {.lex_state = 196},
  [332] = {.lex_state = 196},
  [333] = {.lex_state = 193},
  [334] = {.lex_state = 180},
  [335] = {.lex_state = 180},
  [336] = {.lex_state = 199},
  [337] = {.lex_state = 199},
  [338] = {.lex_state = 183},
  [339] = {.lex_state = 168},
  [340] = {.lex_state = 125},
  [341] = {.lex_state = 169},
  [342] = {.lex_state = 125},
  [343] = {.lex_state = 159},
  [344] = {.lex_state = 169},
  [345] = {.lex_state = 195},
  [346] = {.lex_state = 195},
  [347] = {.lex_state = 196},
  [348] = {.lex_state = 196},
  [349] = {.lex_state = 183},
  [350] = {.lex_state = 125},
  [351] = {.lex_state = 159},
  [352] = {.lex_state = 125},
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
    [anon_sym_CARET] = ACTIONS(3),
    [anon_sym_CARET_COLON] = ACTIONS(1),
    [anon_sym_CARET_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(26),
    [sym__anything] = STATE(42),
    [sym__literal] = STATE(42),
    [sym__collection_literal] = STATE(42),
    [sym_boolean] = STATE(42),
    [sym_number] = STATE(42),
    [sym__number] = STATE(27),
    [sym_character] = STATE(42),
    [sym__character] = STATE(28),
    [sym_string] = STATE(42),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(42),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(42),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(42),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(42),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(42),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(42),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(42),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym_set] = STATE(42),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(42),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(42),
    [sym_anonymous_fn] = STATE(39),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym_program_repeat1] = STATE(42),
    [aux_sym_metadata_repeat1] = STATE(43),
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
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(63),
    [sym_nil] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_false] = ACTIONS(65),
    [sym_number_long] = ACTIONS(65),
    [sym_number_double] = ACTIONS(63),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [anon_sym_LPARENquote] = ACTIONS(63),
    [anon_sym_RPAREN] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [anon_sym_DASH_GT] = ACTIONS(65),
    [anon_sym_DASH_GT_GT] = ACTIONS(63),
    [anon_sym_as_DASH_GT] = ACTIONS(63),
    [anon_sym_some_DASH_GT] = ACTIONS(65),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(63),
    [anon_sym_cond_DASH_GT] = ACTIONS(65),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(63),
    [sym__symbol_chars] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(63),
    [anon_sym_RBRACK] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(63),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(65),
    [anon_sym_POUND_LBRACE] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(63),
    [anon_sym_POUND_BANG] = ACTIONS(63),
    [anon_sym_POUND_] = ACTIONS(63),
    [anon_sym_LPARENcomment] = ACTIONS(63),
    [anon_sym_POUND_LPAREN] = ACTIONS(63),
    [sym_shorthand_fn_arg] = ACTIONS(63),
    [anon_sym_CARET] = ACTIONS(65),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
  },
  [3] = {
    [sym__special_char] = STATE(44),
    [sym__unicode_char] = STATE(44),
    [sym__octal_char] = STATE(44),
    [sym__normal_char] = ACTIONS(67),
    [anon_sym_newline] = ACTIONS(67),
    [anon_sym_space] = ACTIONS(67),
    [anon_sym_tab] = ACTIONS(67),
    [anon_sym_formfeed] = ACTIONS(67),
    [anon_sym_backspace] = ACTIONS(67),
    [anon_sym_return] = ACTIONS(67),
    [anon_sym_u] = ACTIONS(69),
    [anon_sym_o] = ACTIONS(71),
  },
  [4] = {
    [aux_sym__string_repeat1] = STATE(48),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(75),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(75),
  },
  [5] = {
    [aux_sym__regex_repeat1] = STATE(50),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(79),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(79),
  },
  [6] = {
    [sym__anything] = STATE(51),
    [sym__literal] = STATE(51),
    [sym__collection_literal] = STATE(51),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym__number] = STATE(27),
    [sym_character] = STATE(51),
    [sym__character] = STATE(28),
    [sym_string] = STATE(51),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(51),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(51),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(51),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(51),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(51),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(51),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(51),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym_set] = STATE(51),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(51),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(51),
    [sym_anonymous_fn] = STATE(39),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym_metadata_repeat1] = STATE(43),
    [sym_nil] = ACTIONS(81),
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
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [7] = {
    [sym__anything] = STATE(54),
    [sym__literal] = STATE(54),
    [sym__collection_literal] = STATE(54),
    [sym_boolean] = STATE(54),
    [sym_number] = STATE(54),
    [sym__number] = STATE(27),
    [sym_character] = STATE(54),
    [sym__character] = STATE(28),
    [sym_string] = STATE(54),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(54),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(54),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(54),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(54),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(54),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(54),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(54),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym_set] = STATE(54),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(54),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(54),
    [sym_anonymous_fn] = STATE(39),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym_metadata_repeat1] = STATE(43),
    [sym_nil] = ACTIONS(83),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(85),
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
    [anon_sym_POUND_] = ACTIONS(87),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [8] = {
    [sym__keyword_chars] = ACTIONS(89),
  },
  [9] = {
    [sym__keyword_chars] = ACTIONS(91),
  },
  [10] = {
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
    [sym_shorthand_fn_arg] = ACTIONS(93),
    [anon_sym_CARET] = ACTIONS(95),
    [anon_sym_CARET_COLON] = ACTIONS(93),
    [anon_sym_CARET_DQUOTE] = ACTIONS(93),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [sym_nil] = ACTIONS(99),
    [sym_true] = ACTIONS(99),
    [sym_false] = ACTIONS(99),
    [sym_number_long] = ACTIONS(99),
    [sym_number_double] = ACTIONS(97),
    [anon_sym_BSLASH] = ACTIONS(97),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [anon_sym_POUND_DQUOTE] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [anon_sym_LPARENquote] = ACTIONS(97),
    [anon_sym_RPAREN] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_DASH_GT] = ACTIONS(99),
    [anon_sym_DASH_GT_GT] = ACTIONS(97),
    [anon_sym_as_DASH_GT] = ACTIONS(97),
    [anon_sym_some_DASH_GT] = ACTIONS(99),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(97),
    [anon_sym_cond_DASH_GT] = ACTIONS(99),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(97),
    [sym__symbol_chars] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_RBRACK] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(97),
    [anon_sym_POUND] = ACTIONS(99),
    [anon_sym_POUND_LBRACE] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(97),
    [anon_sym_POUND_BANG] = ACTIONS(97),
    [anon_sym_POUND_] = ACTIONS(97),
    [anon_sym_LPARENcomment] = ACTIONS(97),
    [anon_sym_POUND_LPAREN] = ACTIONS(97),
    [sym_shorthand_fn_arg] = ACTIONS(97),
    [anon_sym_CARET] = ACTIONS(99),
    [anon_sym_CARET_COLON] = ACTIONS(97),
    [anon_sym_CARET_DQUOTE] = ACTIONS(97),
  },
  [12] = {
    [sym__anything] = STATE(63),
    [sym__literal] = STATE(63),
    [sym__collection_literal] = STATE(63),
    [sym_boolean] = STATE(63),
    [sym_number] = STATE(63),
    [sym__number] = STATE(27),
    [sym_character] = STATE(63),
    [sym__character] = STATE(28),
    [sym_string] = STATE(63),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(63),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(63),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(63),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(63),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(63),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(63),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(63),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym_set] = STATE(63),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(63),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(63),
    [sym_anonymous_fn] = STATE(39),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym_program_repeat1] = STATE(63),
    [aux_sym_metadata_repeat1] = STATE(43),
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
    [anon_sym_RPAREN] = ACTIONS(107),
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
    [anon_sym_POUND_] = ACTIONS(109),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_fn] = ACTIONS(111),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [anon_sym_defn] = ACTIONS(113),
    [anon_sym_defn_DASH] = ACTIONS(113),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [13] = {
    [sym__anything] = STATE(67),
    [sym__literal] = STATE(67),
    [sym__collection_literal] = STATE(67),
    [sym_boolean] = STATE(67),
    [sym_number] = STATE(67),
    [sym__number] = STATE(27),
    [sym_character] = STATE(67),
    [sym__character] = STATE(28),
    [sym_string] = STATE(67),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(67),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(67),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(67),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(67),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(67),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(67),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(67),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym_set] = STATE(67),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(67),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(67),
    [sym_anonymous_fn] = STATE(39),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym_program_repeat1] = STATE(67),
    [aux_sym_metadata_repeat1] = STATE(43),
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
    [anon_sym_RBRACK] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(121),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [14] = {
    [sym__anything] = STATE(71),
    [sym__literal] = STATE(71),
    [sym__collection_literal] = STATE(71),
    [sym_boolean] = STATE(71),
    [sym_number] = STATE(71),
    [sym__number] = STATE(27),
    [sym_character] = STATE(71),
    [sym__character] = STATE(28),
    [sym_string] = STATE(71),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(71),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(71),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(71),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(71),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(71),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(71),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(71),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym__hash_map_kv_pair] = STATE(72),
    [sym__hash_map_key] = STATE(71),
    [sym_set] = STATE(71),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(71),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(71),
    [sym_anonymous_fn] = STATE(39),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym__hash_map_repeat1] = STATE(72),
    [aux_sym_metadata_repeat1] = STATE(43),
    [sym_nil] = ACTIONS(123),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(125),
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
    [anon_sym_RBRACE] = ACTIONS(127),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(129),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [15] = {
    [sym__anything] = STATE(71),
    [sym__literal] = STATE(71),
    [sym__collection_literal] = STATE(71),
    [sym_boolean] = STATE(71),
    [sym_number] = STATE(71),
    [sym__number] = STATE(27),
    [sym_character] = STATE(71),
    [sym__character] = STATE(28),
    [sym_string] = STATE(71),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(71),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(71),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(71),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(71),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(71),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(71),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(71),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym__hash_map_kv_pair] = STATE(74),
    [sym__hash_map_key] = STATE(71),
    [sym_set] = STATE(71),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(71),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(71),
    [sym_anonymous_fn] = STATE(39),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym__hash_map_repeat1] = STATE(74),
    [aux_sym_metadata_repeat1] = STATE(43),
    [sym_nil] = ACTIONS(123),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(125),
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
    [anon_sym_RBRACE] = ACTIONS(131),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(129),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [16] = {
    [sym__symbol_chars] = ACTIONS(133),
  },
  [17] = {
    [sym__anything] = STATE(79),
    [sym__literal] = STATE(79),
    [sym__collection_literal] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_number] = STATE(79),
    [sym__number] = STATE(27),
    [sym_character] = STATE(79),
    [sym__character] = STATE(28),
    [sym_string] = STATE(79),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(79),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(79),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(79),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(79),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(79),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(79),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(79),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym_set] = STATE(79),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(79),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(79),
    [sym_anonymous_fn] = STATE(39),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym_program_repeat1] = STATE(79),
    [aux_sym_metadata_repeat1] = STATE(43),
    [sym_nil] = ACTIONS(135),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(137),
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
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(141),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [18] = {
    [aux_sym_SLASH_DOT_STAR_SLASH] = ACTIONS(143),
  },
  [19] = {
    [aux_sym_SLASH_DOT_STAR_SLASH] = ACTIONS(145),
  },
  [20] = {
    [sym__number] = STATE(91),
    [sym__string] = STATE(91),
    [sym__keyword] = STATE(91),
    [sym__unqualified_keyword] = STATE(91),
    [sym_qualified_keyword] = STATE(91),
    [sym__symbol] = STATE(91),
    [sym_threading_macro] = STATE(91),
    [sym_qualified_symbol] = STATE(91),
    [sym__one_form] = STATE(91),
    [sym__paren_sequence] = STATE(91),
    [sym__bracket_sequence] = STATE(91),
    [sym__curly_brace_sequence] = STATE(91),
    [aux_sym_ignore_form_repeat1] = STATE(92),
    [sym_number_long] = ACTIONS(147),
    [sym_number_double] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_COLON_COLON] = ACTIONS(153),
    [anon_sym_DASH_GT] = ACTIONS(155),
    [anon_sym_DASH_GT_GT] = ACTIONS(155),
    [anon_sym_as_DASH_GT] = ACTIONS(155),
    [anon_sym_some_DASH_GT] = ACTIONS(155),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(155),
    [anon_sym_cond_DASH_GT] = ACTIONS(155),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(155),
    [sym__symbol_chars] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_POUND] = ACTIONS(165),
    [anon_sym_] = ACTIONS(167),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(147),
  },
  [21] = {
    [sym__number] = STATE(103),
    [sym__string] = STATE(103),
    [sym__keyword] = STATE(103),
    [sym__unqualified_keyword] = STATE(103),
    [sym_qualified_keyword] = STATE(103),
    [sym__symbol] = STATE(103),
    [sym_threading_macro] = STATE(103),
    [sym_qualified_symbol] = STATE(103),
    [sym__one_form] = STATE(103),
    [sym__paren_sequence] = STATE(103),
    [sym__bracket_sequence] = STATE(103),
    [sym__curly_brace_sequence] = STATE(103),
    [aux_sym_comment_macro_repeat1] = STATE(103),
    [sym_number_long] = ACTIONS(169),
    [sym_number_double] = ACTIONS(169),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_COLON] = ACTIONS(175),
    [anon_sym_COLON_COLON] = ACTIONS(177),
    [anon_sym_DASH_GT] = ACTIONS(179),
    [anon_sym_DASH_GT_GT] = ACTIONS(179),
    [anon_sym_as_DASH_GT] = ACTIONS(179),
    [anon_sym_some_DASH_GT] = ACTIONS(179),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(179),
    [anon_sym_cond_DASH_GT] = ACTIONS(179),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(179),
    [sym__symbol_chars] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUND] = ACTIONS(189),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(169),
  },
  [22] = {
    [sym__anything] = STATE(107),
    [sym__literal] = STATE(107),
    [sym__collection_literal] = STATE(107),
    [sym_boolean] = STATE(107),
    [sym_number] = STATE(107),
    [sym__number] = STATE(27),
    [sym_character] = STATE(107),
    [sym__character] = STATE(28),
    [sym_string] = STATE(107),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(107),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(107),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(107),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(107),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(107),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(107),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(107),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym_set] = STATE(107),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(107),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(107),
    [sym_anonymous_fn] = STATE(39),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym_shorthand_fn_repeat1] = STATE(107),
    [aux_sym_metadata_repeat1] = STATE(43),
    [sym_nil] = ACTIONS(191),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(193),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(195),
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
    [anon_sym_POUND_] = ACTIONS(197),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_fn_arg] = ACTIONS(199),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [23] = {
    [sym_hash_map] = STATE(112),
    [sym__hash_map] = STATE(113),
    [sym_namespace_map] = STATE(113),
    [sym__symbol_chars] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(205),
    [anon_sym_POUND] = ACTIONS(207),
  },
  [24] = {
    [sym__keyword_chars] = ACTIONS(201),
  },
  [25] = {
    [aux_sym__string_repeat1] = STATE(114),
    [anon_sym_DQUOTE] = ACTIONS(209),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(211),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(211),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(213),
  },
  [27] = {
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
    [anon_sym_POUND_LPAREN] = ACTIONS(215),
    [sym_shorthand_fn_arg] = ACTIONS(215),
    [anon_sym_CARET] = ACTIONS(217),
    [anon_sym_CARET_COLON] = ACTIONS(215),
    [anon_sym_CARET_DQUOTE] = ACTIONS(215),
  },
  [28] = {
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
    [anon_sym_POUND_LPAREN] = ACTIONS(219),
    [sym_shorthand_fn_arg] = ACTIONS(219),
    [anon_sym_CARET] = ACTIONS(221),
    [anon_sym_CARET_COLON] = ACTIONS(219),
    [anon_sym_CARET_DQUOTE] = ACTIONS(219),
  },
  [29] = {
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
    [anon_sym_POUND_LPAREN] = ACTIONS(223),
    [sym_shorthand_fn_arg] = ACTIONS(223),
    [anon_sym_CARET] = ACTIONS(225),
    [anon_sym_CARET_COLON] = ACTIONS(223),
    [anon_sym_CARET_DQUOTE] = ACTIONS(223),
  },
  [30] = {
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
    [anon_sym_POUND_LPAREN] = ACTIONS(227),
    [sym_shorthand_fn_arg] = ACTIONS(227),
    [anon_sym_CARET] = ACTIONS(229),
    [anon_sym_CARET_COLON] = ACTIONS(227),
    [anon_sym_CARET_DQUOTE] = ACTIONS(227),
  },
  [31] = {
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
    [anon_sym_POUND_LPAREN] = ACTIONS(231),
    [sym_shorthand_fn_arg] = ACTIONS(231),
    [anon_sym_CARET] = ACTIONS(233),
    [anon_sym_CARET_COLON] = ACTIONS(231),
    [anon_sym_CARET_DQUOTE] = ACTIONS(231),
  },
  [32] = {
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
    [anon_sym_POUND_LPAREN] = ACTIONS(235),
    [sym_shorthand_fn_arg] = ACTIONS(235),
    [anon_sym_CARET] = ACTIONS(237),
    [anon_sym_CARET_COLON] = ACTIONS(235),
    [anon_sym_CARET_DQUOTE] = ACTIONS(235),
  },
  [33] = {
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
    [anon_sym_POUND_LPAREN] = ACTIONS(239),
    [sym_shorthand_fn_arg] = ACTIONS(239),
    [anon_sym_CARET] = ACTIONS(241),
    [anon_sym_CARET_COLON] = ACTIONS(239),
    [anon_sym_CARET_DQUOTE] = ACTIONS(239),
  },
  [34] = {
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
    [anon_sym_DASH_GT] = ACTIONS(245),
    [anon_sym_DASH_GT_GT] = ACTIONS(243),
    [anon_sym_as_DASH_GT] = ACTIONS(243),
    [anon_sym_some_DASH_GT] = ACTIONS(245),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(243),
    [anon_sym_cond_DASH_GT] = ACTIONS(245),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(243),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(243),
    [sym_shorthand_fn_arg] = ACTIONS(243),
    [anon_sym_CARET] = ACTIONS(245),
    [anon_sym_CARET_COLON] = ACTIONS(243),
    [anon_sym_CARET_DQUOTE] = ACTIONS(243),
  },
  [35] = {
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
    [anon_sym_POUND_LPAREN] = ACTIONS(247),
    [sym_shorthand_fn_arg] = ACTIONS(247),
    [anon_sym_CARET] = ACTIONS(249),
    [anon_sym_CARET_COLON] = ACTIONS(247),
    [anon_sym_CARET_DQUOTE] = ACTIONS(247),
  },
  [36] = {
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
    [anon_sym_DASH_GT] = ACTIONS(253),
    [anon_sym_DASH_GT_GT] = ACTIONS(251),
    [anon_sym_as_DASH_GT] = ACTIONS(251),
    [anon_sym_some_DASH_GT] = ACTIONS(253),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(251),
    [anon_sym_cond_DASH_GT] = ACTIONS(253),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(251),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(251),
    [sym_shorthand_fn_arg] = ACTIONS(251),
    [anon_sym_CARET] = ACTIONS(253),
    [anon_sym_CARET_COLON] = ACTIONS(251),
    [anon_sym_CARET_DQUOTE] = ACTIONS(251),
  },
  [37] = {
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
    [anon_sym_DASH_GT] = ACTIONS(257),
    [anon_sym_DASH_GT_GT] = ACTIONS(255),
    [anon_sym_as_DASH_GT] = ACTIONS(255),
    [anon_sym_some_DASH_GT] = ACTIONS(257),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(255),
    [anon_sym_cond_DASH_GT] = ACTIONS(257),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(255),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(255),
    [sym_shorthand_fn_arg] = ACTIONS(255),
    [anon_sym_CARET] = ACTIONS(257),
    [anon_sym_CARET_COLON] = ACTIONS(255),
    [anon_sym_CARET_DQUOTE] = ACTIONS(255),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(259),
    [sym_nil] = ACTIONS(261),
    [sym_true] = ACTIONS(261),
    [sym_false] = ACTIONS(261),
    [sym_number_long] = ACTIONS(261),
    [sym_number_double] = ACTIONS(259),
    [anon_sym_BSLASH] = ACTIONS(259),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [anon_sym_POUND_DQUOTE] = ACTIONS(259),
    [anon_sym_SQUOTE] = ACTIONS(259),
    [anon_sym_LPARENquote] = ACTIONS(259),
    [anon_sym_RPAREN] = ACTIONS(259),
    [anon_sym_COLON] = ACTIONS(261),
    [anon_sym_COLON_COLON] = ACTIONS(259),
    [anon_sym_DASH_GT] = ACTIONS(261),
    [anon_sym_DASH_GT_GT] = ACTIONS(259),
    [anon_sym_as_DASH_GT] = ACTIONS(259),
    [anon_sym_some_DASH_GT] = ACTIONS(261),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(259),
    [anon_sym_cond_DASH_GT] = ACTIONS(261),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(259),
    [sym__symbol_chars] = ACTIONS(261),
    [anon_sym_LPAREN] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(259),
    [anon_sym_RBRACK] = ACTIONS(259),
    [anon_sym_LBRACE] = ACTIONS(259),
    [anon_sym_RBRACE] = ACTIONS(259),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(259),
    [anon_sym_POUND] = ACTIONS(261),
    [anon_sym_POUND_LBRACE] = ACTIONS(259),
    [anon_sym_SEMI] = ACTIONS(259),
    [anon_sym_POUND_BANG] = ACTIONS(259),
    [anon_sym_POUND_] = ACTIONS(259),
    [anon_sym_LPARENcomment] = ACTIONS(259),
    [anon_sym_POUND_LPAREN] = ACTIONS(259),
    [sym_shorthand_fn_arg] = ACTIONS(259),
    [anon_sym_CARET] = ACTIONS(261),
    [anon_sym_CARET_COLON] = ACTIONS(259),
    [anon_sym_CARET_DQUOTE] = ACTIONS(259),
  },
  [39] = {
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
    [anon_sym_CARET] = ACTIONS(265),
    [anon_sym_CARET_COLON] = ACTIONS(263),
    [anon_sym_CARET_DQUOTE] = ACTIONS(263),
  },
  [40] = {
    [sym_list] = STATE(116),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(116),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(116),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym_set] = STATE(116),
    [sym__set] = STATE(37),
    [anon_sym_LPAREN] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
  },
  [41] = {
    [anon_sym_DASH_GT] = ACTIONS(269),
    [anon_sym_DASH_GT_GT] = ACTIONS(271),
    [anon_sym_as_DASH_GT] = ACTIONS(271),
    [anon_sym_some_DASH_GT] = ACTIONS(269),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(271),
    [anon_sym_cond_DASH_GT] = ACTIONS(269),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(271),
    [sym__symbol_chars] = ACTIONS(269),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(271),
    [anon_sym_LBRACE] = ACTIONS(271),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(271),
    [anon_sym_POUND] = ACTIONS(269),
    [anon_sym_POUND_LBRACE] = ACTIONS(271),
  },
  [42] = {
    [sym__anything] = STATE(117),
    [sym__literal] = STATE(117),
    [sym__collection_literal] = STATE(117),
    [sym_boolean] = STATE(117),
    [sym_number] = STATE(117),
    [sym__number] = STATE(27),
    [sym_character] = STATE(117),
    [sym__character] = STATE(28),
    [sym_string] = STATE(117),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(117),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(117),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(117),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(117),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(117),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(117),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(117),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym_set] = STATE(117),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(117),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(117),
    [sym_anonymous_fn] = STATE(39),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym_program_repeat1] = STATE(117),
    [aux_sym_metadata_repeat1] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(273),
    [sym_nil] = ACTIONS(275),
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
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [43] = {
    [sym_metadata_shorthand] = STATE(119),
    [aux_sym_metadata_repeat1] = STATE(119),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(271),
    [anon_sym_LBRACE] = ACTIONS(271),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(271),
    [anon_sym_POUND] = ACTIONS(269),
    [anon_sym_POUND_LBRACE] = ACTIONS(271),
    [anon_sym_CARET] = ACTIONS(277),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [44] = {
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
    [anon_sym_CARET] = ACTIONS(281),
    [anon_sym_CARET_COLON] = ACTIONS(279),
    [anon_sym_CARET_DQUOTE] = ACTIONS(279),
  },
  [45] = {
    [sym__hex_char] = ACTIONS(283),
  },
  [46] = {
    [sym__octal_num] = STATE(121),
    [aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(287),
  },
  [47] = {
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
    [anon_sym_CARET] = ACTIONS(291),
    [anon_sym_CARET_COLON] = ACTIONS(289),
    [anon_sym_CARET_DQUOTE] = ACTIONS(289),
  },
  [48] = {
    [aux_sym__string_repeat1] = STATE(123),
    [anon_sym_DQUOTE] = ACTIONS(293),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(295),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(295),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(297),
    [sym_nil] = ACTIONS(299),
    [sym_true] = ACTIONS(299),
    [sym_false] = ACTIONS(299),
    [sym_number_long] = ACTIONS(299),
    [sym_number_double] = ACTIONS(297),
    [anon_sym_BSLASH] = ACTIONS(297),
    [anon_sym_DQUOTE] = ACTIONS(297),
    [anon_sym_POUND_DQUOTE] = ACTIONS(297),
    [anon_sym_SQUOTE] = ACTIONS(297),
    [anon_sym_LPARENquote] = ACTIONS(297),
    [anon_sym_RPAREN] = ACTIONS(297),
    [anon_sym_COLON] = ACTIONS(299),
    [anon_sym_COLON_COLON] = ACTIONS(297),
    [anon_sym_DASH_GT] = ACTIONS(299),
    [anon_sym_DASH_GT_GT] = ACTIONS(297),
    [anon_sym_as_DASH_GT] = ACTIONS(297),
    [anon_sym_some_DASH_GT] = ACTIONS(299),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(297),
    [anon_sym_cond_DASH_GT] = ACTIONS(299),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(297),
    [sym__symbol_chars] = ACTIONS(299),
    [anon_sym_LPAREN] = ACTIONS(299),
    [anon_sym_LBRACK] = ACTIONS(297),
    [anon_sym_RBRACK] = ACTIONS(297),
    [anon_sym_LBRACE] = ACTIONS(297),
    [anon_sym_RBRACE] = ACTIONS(297),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(297),
    [anon_sym_POUND] = ACTIONS(299),
    [anon_sym_POUND_LBRACE] = ACTIONS(297),
    [anon_sym_SEMI] = ACTIONS(297),
    [anon_sym_POUND_BANG] = ACTIONS(297),
    [anon_sym_POUND_] = ACTIONS(297),
    [anon_sym_LPARENcomment] = ACTIONS(297),
    [anon_sym_POUND_LPAREN] = ACTIONS(297),
    [sym_shorthand_fn_arg] = ACTIONS(297),
    [anon_sym_CARET] = ACTIONS(299),
    [anon_sym_CARET_COLON] = ACTIONS(297),
    [anon_sym_CARET_DQUOTE] = ACTIONS(297),
  },
  [50] = {
    [aux_sym__regex_repeat1] = STATE(125),
    [anon_sym_DQUOTE] = ACTIONS(301),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(303),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(303),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(305),
    [sym_nil] = ACTIONS(307),
    [sym_true] = ACTIONS(307),
    [sym_false] = ACTIONS(307),
    [sym_number_long] = ACTIONS(307),
    [sym_number_double] = ACTIONS(305),
    [anon_sym_BSLASH] = ACTIONS(305),
    [anon_sym_DQUOTE] = ACTIONS(305),
    [anon_sym_POUND_DQUOTE] = ACTIONS(305),
    [anon_sym_SQUOTE] = ACTIONS(305),
    [anon_sym_LPARENquote] = ACTIONS(305),
    [anon_sym_RPAREN] = ACTIONS(305),
    [anon_sym_COLON] = ACTIONS(307),
    [anon_sym_COLON_COLON] = ACTIONS(305),
    [anon_sym_DASH_GT] = ACTIONS(307),
    [anon_sym_DASH_GT_GT] = ACTIONS(305),
    [anon_sym_as_DASH_GT] = ACTIONS(305),
    [anon_sym_some_DASH_GT] = ACTIONS(307),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(305),
    [anon_sym_cond_DASH_GT] = ACTIONS(307),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(305),
    [sym__symbol_chars] = ACTIONS(307),
    [anon_sym_LPAREN] = ACTIONS(307),
    [anon_sym_LBRACK] = ACTIONS(305),
    [anon_sym_RBRACK] = ACTIONS(305),
    [anon_sym_LBRACE] = ACTIONS(305),
    [anon_sym_RBRACE] = ACTIONS(305),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(305),
    [anon_sym_POUND] = ACTIONS(307),
    [anon_sym_POUND_LBRACE] = ACTIONS(305),
    [anon_sym_SEMI] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(305),
    [anon_sym_POUND_] = ACTIONS(305),
    [anon_sym_LPARENcomment] = ACTIONS(305),
    [anon_sym_POUND_LPAREN] = ACTIONS(305),
    [sym_shorthand_fn_arg] = ACTIONS(305),
    [anon_sym_CARET] = ACTIONS(307),
    [anon_sym_CARET_COLON] = ACTIONS(305),
    [anon_sym_CARET_DQUOTE] = ACTIONS(305),
  },
  [52] = {
    [sym__anything] = STATE(51),
    [sym__literal] = STATE(51),
    [sym__collection_literal] = STATE(51),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym__number] = STATE(27),
    [sym_character] = STATE(51),
    [sym__character] = STATE(28),
    [sym_string] = STATE(51),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(51),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(51),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(51),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(51),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(51),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(51),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(51),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym_set] = STATE(51),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(51),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(51),
    [sym_anonymous_fn] = STATE(39),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym_metadata_repeat1] = STATE(43),
    [sym_nil] = ACTIONS(81),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(85),
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
    [anon_sym_POUND_] = ACTIONS(87),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [53] = {
    [sym__number] = STATE(126),
    [sym__string] = STATE(126),
    [sym__keyword] = STATE(126),
    [sym__unqualified_keyword] = STATE(126),
    [sym_qualified_keyword] = STATE(126),
    [sym__symbol] = STATE(126),
    [sym_threading_macro] = STATE(126),
    [sym_qualified_symbol] = STATE(126),
    [sym__one_form] = STATE(126),
    [sym__paren_sequence] = STATE(126),
    [sym__bracket_sequence] = STATE(126),
    [sym__curly_brace_sequence] = STATE(126),
    [aux_sym_ignore_form_repeat1] = STATE(127),
    [sym_number_long] = ACTIONS(309),
    [sym_number_double] = ACTIONS(309),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_COLON_COLON] = ACTIONS(153),
    [anon_sym_DASH_GT] = ACTIONS(155),
    [anon_sym_DASH_GT_GT] = ACTIONS(155),
    [anon_sym_as_DASH_GT] = ACTIONS(155),
    [anon_sym_some_DASH_GT] = ACTIONS(155),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(155),
    [anon_sym_cond_DASH_GT] = ACTIONS(155),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(155),
    [sym__symbol_chars] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_POUND] = ACTIONS(165),
    [anon_sym_] = ACTIONS(311),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(309),
  },
  [54] = {
    [anon_sym_RPAREN] = ACTIONS(313),
  },
  [55] = {
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
    [anon_sym_POUND_LPAREN] = ACTIONS(315),
    [sym_shorthand_fn_arg] = ACTIONS(315),
    [anon_sym_CARET] = ACTIONS(317),
    [anon_sym_CARET_COLON] = ACTIONS(315),
    [anon_sym_CARET_DQUOTE] = ACTIONS(315),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(319),
    [sym_nil] = ACTIONS(321),
    [sym_true] = ACTIONS(321),
    [sym_false] = ACTIONS(321),
    [sym_number_long] = ACTIONS(321),
    [sym_number_double] = ACTIONS(319),
    [anon_sym_BSLASH] = ACTIONS(319),
    [anon_sym_DQUOTE] = ACTIONS(319),
    [anon_sym_POUND_DQUOTE] = ACTIONS(319),
    [anon_sym_SQUOTE] = ACTIONS(319),
    [anon_sym_LPARENquote] = ACTIONS(319),
    [anon_sym_RPAREN] = ACTIONS(319),
    [anon_sym_COLON] = ACTIONS(321),
    [anon_sym_COLON_COLON] = ACTIONS(319),
    [anon_sym_SLASH] = ACTIONS(323),
    [anon_sym_DASH_GT] = ACTIONS(321),
    [anon_sym_DASH_GT_GT] = ACTIONS(319),
    [anon_sym_as_DASH_GT] = ACTIONS(319),
    [anon_sym_some_DASH_GT] = ACTIONS(321),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(319),
    [anon_sym_cond_DASH_GT] = ACTIONS(321),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(319),
    [sym__symbol_chars] = ACTIONS(321),
    [anon_sym_LPAREN] = ACTIONS(321),
    [anon_sym_LBRACK] = ACTIONS(319),
    [anon_sym_RBRACK] = ACTIONS(319),
    [anon_sym_LBRACE] = ACTIONS(319),
    [anon_sym_RBRACE] = ACTIONS(319),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(319),
    [anon_sym_POUND] = ACTIONS(321),
    [anon_sym_POUND_LBRACE] = ACTIONS(319),
    [anon_sym_SEMI] = ACTIONS(319),
    [anon_sym_POUND_BANG] = ACTIONS(319),
    [anon_sym_POUND_] = ACTIONS(319),
    [anon_sym_LPARENcomment] = ACTIONS(319),
    [anon_sym_POUND_LPAREN] = ACTIONS(319),
    [sym_shorthand_fn_arg] = ACTIONS(319),
    [anon_sym_CARET] = ACTIONS(321),
    [anon_sym_CARET_COLON] = ACTIONS(319),
    [anon_sym_CARET_DQUOTE] = ACTIONS(319),
  },
  [57] = {
    [sym__symbol_chars] = ACTIONS(325),
  },
  [58] = {
    [sym__anything] = STATE(51),
    [sym__literal] = STATE(51),
    [sym__collection_literal] = STATE(51),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym__number] = STATE(27),
    [sym_character] = STATE(51),
    [sym__character] = STATE(28),
    [sym_string] = STATE(51),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(51),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(51),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(51),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(51),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(51),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(51),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(51),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym_set] = STATE(51),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(51),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(51),
    [sym_anonymous_fn] = STATE(39),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym_metadata_repeat1] = STATE(43),
    [sym_nil] = ACTIONS(81),
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
    [anon_sym_POUND_] = ACTIONS(109),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [59] = {
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
    [anon_sym_POUND_LPAREN] = ACTIONS(327),
    [sym_shorthand_fn_arg] = ACTIONS(327),
    [anon_sym_CARET] = ACTIONS(329),
    [anon_sym_CARET_COLON] = ACTIONS(327),
    [anon_sym_CARET_DQUOTE] = ACTIONS(327),
  },
  [60] = {
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
    [sym_number_long] = ACTIONS(331),
    [sym_number_double] = ACTIONS(331),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_COLON_COLON] = ACTIONS(153),
    [anon_sym_DASH_GT] = ACTIONS(155),
    [anon_sym_DASH_GT_GT] = ACTIONS(155),
    [anon_sym_as_DASH_GT] = ACTIONS(155),
    [anon_sym_some_DASH_GT] = ACTIONS(155),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(155),
    [anon_sym_cond_DASH_GT] = ACTIONS(155),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(155),
    [sym__symbol_chars] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_POUND] = ACTIONS(165),
    [anon_sym_] = ACTIONS(333),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(331),
  },
  [61] = {
    [sym_symbol] = STATE(136),
    [sym__symbol] = STATE(137),
    [sym_threading_macro] = STATE(137),
    [sym_qualified_symbol] = STATE(137),
    [sym_vector] = STATE(138),
    [sym__vector] = STATE(35),
    [sym__after_the_fn_name] = STATE(139),
    [sym_function_name] = STATE(140),
    [sym__single_arity_fn] = STATE(139),
    [sym__multi_arity_fn] = STATE(139),
    [sym_params] = STATE(141),
    [aux_sym__multi_arity_fn_repeat1] = STATE(142),
    [anon_sym_DASH_GT] = ACTIONS(335),
    [anon_sym_DASH_GT_GT] = ACTIONS(337),
    [anon_sym_as_DASH_GT] = ACTIONS(337),
    [anon_sym_some_DASH_GT] = ACTIONS(335),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(337),
    [anon_sym_cond_DASH_GT] = ACTIONS(335),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(337),
    [sym__symbol_chars] = ACTIONS(339),
    [anon_sym_LPAREN] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(37),
  },
  [62] = {
    [sym_symbol] = STATE(136),
    [sym__symbol] = STATE(137),
    [sym_threading_macro] = STATE(137),
    [sym_qualified_symbol] = STATE(137),
    [sym_function_name] = STATE(143),
    [sym_metadata] = STATE(144),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(145),
    [aux_sym_metadata_repeat1] = STATE(145),
    [anon_sym_DASH_GT] = ACTIONS(335),
    [anon_sym_DASH_GT_GT] = ACTIONS(337),
    [anon_sym_as_DASH_GT] = ACTIONS(337),
    [anon_sym_some_DASH_GT] = ACTIONS(335),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(337),
    [anon_sym_cond_DASH_GT] = ACTIONS(335),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(337),
    [sym__symbol_chars] = ACTIONS(339),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [63] = {
    [sym__anything] = STATE(147),
    [sym__literal] = STATE(147),
    [sym__collection_literal] = STATE(147),
    [sym_boolean] = STATE(147),
    [sym_number] = STATE(147),
    [sym__number] = STATE(27),
    [sym_character] = STATE(147),
    [sym__character] = STATE(28),
    [sym_string] = STATE(147),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(147),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(147),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(147),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(147),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(147),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(147),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(147),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym_set] = STATE(147),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(147),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(147),
    [sym_anonymous_fn] = STATE(39),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym_program_repeat1] = STATE(147),
    [aux_sym_metadata_repeat1] = STATE(43),
    [sym_nil] = ACTIONS(343),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(345),
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
    [anon_sym_POUND_] = ACTIONS(109),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [64] = {
    [sym__anything] = STATE(51),
    [sym__literal] = STATE(51),
    [sym__collection_literal] = STATE(51),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym__number] = STATE(27),
    [sym_character] = STATE(51),
    [sym__character] = STATE(28),
    [sym_string] = STATE(51),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(51),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(51),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(51),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(51),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(51),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(51),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(51),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym_set] = STATE(51),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(51),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(51),
    [sym_anonymous_fn] = STATE(39),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym_metadata_repeat1] = STATE(43),
    [sym_nil] = ACTIONS(81),
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
    [anon_sym_POUND_] = ACTIONS(121),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [65] = {
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
    [anon_sym_POUND_LPAREN] = ACTIONS(347),
    [sym_shorthand_fn_arg] = ACTIONS(347),
    [anon_sym_CARET] = ACTIONS(349),
    [anon_sym_CARET_COLON] = ACTIONS(347),
    [anon_sym_CARET_DQUOTE] = ACTIONS(347),
  },
  [66] = {
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
    [aux_sym_ignore_form_repeat1] = STATE(149),
    [sym_number_long] = ACTIONS(351),
    [sym_number_double] = ACTIONS(351),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_COLON_COLON] = ACTIONS(153),
    [anon_sym_DASH_GT] = ACTIONS(155),
    [anon_sym_DASH_GT_GT] = ACTIONS(155),
    [anon_sym_as_DASH_GT] = ACTIONS(155),
    [anon_sym_some_DASH_GT] = ACTIONS(155),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(155),
    [anon_sym_cond_DASH_GT] = ACTIONS(155),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(155),
    [sym__symbol_chars] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_POUND] = ACTIONS(165),
    [anon_sym_] = ACTIONS(353),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(351),
  },
  [67] = {
    [sym__anything] = STATE(151),
    [sym__literal] = STATE(151),
    [sym__collection_literal] = STATE(151),
    [sym_boolean] = STATE(151),
    [sym_number] = STATE(151),
    [sym__number] = STATE(27),
    [sym_character] = STATE(151),
    [sym__character] = STATE(28),
    [sym_string] = STATE(151),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(151),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(151),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(151),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(151),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(151),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(151),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(151),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym_set] = STATE(151),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(151),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(151),
    [sym_anonymous_fn] = STATE(39),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym_program_repeat1] = STATE(151),
    [aux_sym_metadata_repeat1] = STATE(43),
    [sym_nil] = ACTIONS(355),
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
    [anon_sym_RBRACK] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(121),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [68] = {
    [sym__anything] = STATE(51),
    [sym__literal] = STATE(51),
    [sym__collection_literal] = STATE(51),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym__number] = STATE(27),
    [sym_character] = STATE(51),
    [sym__character] = STATE(28),
    [sym_string] = STATE(51),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(51),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(51),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(51),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(51),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(51),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(51),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(51),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym_set] = STATE(51),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(51),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(51),
    [sym_anonymous_fn] = STATE(39),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym_metadata_repeat1] = STATE(43),
    [sym_nil] = ACTIONS(81),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(125),
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
    [anon_sym_POUND_] = ACTIONS(129),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [69] = {
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
    [anon_sym_POUND_LPAREN] = ACTIONS(359),
    [sym_shorthand_fn_arg] = ACTIONS(359),
    [anon_sym_CARET] = ACTIONS(361),
    [anon_sym_CARET_COLON] = ACTIONS(359),
    [anon_sym_CARET_DQUOTE] = ACTIONS(359),
  },
  [70] = {
    [sym__number] = STATE(152),
    [sym__string] = STATE(152),
    [sym__keyword] = STATE(152),
    [sym__unqualified_keyword] = STATE(152),
    [sym_qualified_keyword] = STATE(152),
    [sym__symbol] = STATE(152),
    [sym_threading_macro] = STATE(152),
    [sym_qualified_symbol] = STATE(152),
    [sym__one_form] = STATE(152),
    [sym__paren_sequence] = STATE(152),
    [sym__bracket_sequence] = STATE(152),
    [sym__curly_brace_sequence] = STATE(152),
    [aux_sym_ignore_form_repeat1] = STATE(153),
    [sym_number_long] = ACTIONS(363),
    [sym_number_double] = ACTIONS(363),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_COLON_COLON] = ACTIONS(153),
    [anon_sym_DASH_GT] = ACTIONS(155),
    [anon_sym_DASH_GT_GT] = ACTIONS(155),
    [anon_sym_as_DASH_GT] = ACTIONS(155),
    [anon_sym_some_DASH_GT] = ACTIONS(155),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(155),
    [anon_sym_cond_DASH_GT] = ACTIONS(155),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(155),
    [sym__symbol_chars] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_POUND] = ACTIONS(165),
    [anon_sym_] = ACTIONS(365),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(363),
  },
  [71] = {
    [sym__anything] = STATE(154),
    [sym__literal] = STATE(154),
    [sym__collection_literal] = STATE(154),
    [sym_boolean] = STATE(154),
    [sym_number] = STATE(154),
    [sym__number] = STATE(27),
    [sym_character] = STATE(154),
    [sym__character] = STATE(28),
    [sym_string] = STATE(154),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(154),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(154),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(154),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(154),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(154),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(154),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(154),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym__hash_map_value] = STATE(154),
    [sym_set] = STATE(154),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(154),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(154),
    [sym_anonymous_fn] = STATE(39),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym_metadata_repeat1] = STATE(43),
    [sym_nil] = ACTIONS(367),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(137),
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
    [anon_sym_POUND_] = ACTIONS(141),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [72] = {
    [sym__anything] = STATE(71),
    [sym__literal] = STATE(71),
    [sym__collection_literal] = STATE(71),
    [sym_boolean] = STATE(71),
    [sym_number] = STATE(71),
    [sym__number] = STATE(27),
    [sym_character] = STATE(71),
    [sym__character] = STATE(28),
    [sym_string] = STATE(71),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(71),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(71),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(71),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(71),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(71),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(71),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(71),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym__hash_map_kv_pair] = STATE(156),
    [sym__hash_map_key] = STATE(71),
    [sym_set] = STATE(71),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(71),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(71),
    [sym_anonymous_fn] = STATE(39),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym__hash_map_repeat1] = STATE(156),
    [aux_sym_metadata_repeat1] = STATE(43),
    [sym_nil] = ACTIONS(123),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(125),
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
    [anon_sym_RBRACE] = ACTIONS(369),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(129),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(371),
    [sym_nil] = ACTIONS(373),
    [sym_true] = ACTIONS(373),
    [sym_false] = ACTIONS(373),
    [sym_number_long] = ACTIONS(373),
    [sym_number_double] = ACTIONS(371),
    [anon_sym_BSLASH] = ACTIONS(371),
    [anon_sym_DQUOTE] = ACTIONS(371),
    [anon_sym_POUND_DQUOTE] = ACTIONS(371),
    [anon_sym_SQUOTE] = ACTIONS(371),
    [anon_sym_LPARENquote] = ACTIONS(371),
    [anon_sym_RPAREN] = ACTIONS(371),
    [anon_sym_COLON] = ACTIONS(373),
    [anon_sym_COLON_COLON] = ACTIONS(371),
    [anon_sym_DASH_GT] = ACTIONS(373),
    [anon_sym_DASH_GT_GT] = ACTIONS(371),
    [anon_sym_as_DASH_GT] = ACTIONS(371),
    [anon_sym_some_DASH_GT] = ACTIONS(373),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(371),
    [anon_sym_cond_DASH_GT] = ACTIONS(373),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(371),
    [sym__symbol_chars] = ACTIONS(373),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(371),
    [sym_shorthand_fn_arg] = ACTIONS(371),
    [anon_sym_CARET] = ACTIONS(373),
    [anon_sym_CARET_COLON] = ACTIONS(371),
    [anon_sym_CARET_DQUOTE] = ACTIONS(371),
  },
  [74] = {
    [sym__anything] = STATE(71),
    [sym__literal] = STATE(71),
    [sym__collection_literal] = STATE(71),
    [sym_boolean] = STATE(71),
    [sym_number] = STATE(71),
    [sym__number] = STATE(27),
    [sym_character] = STATE(71),
    [sym__character] = STATE(28),
    [sym_string] = STATE(71),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(71),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(71),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(71),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(71),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(71),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(71),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(71),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym__hash_map_kv_pair] = STATE(156),
    [sym__hash_map_key] = STATE(71),
    [sym_set] = STATE(71),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(71),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(71),
    [sym_anonymous_fn] = STATE(39),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym__hash_map_repeat1] = STATE(156),
    [aux_sym_metadata_repeat1] = STATE(43),
    [sym_nil] = ACTIONS(123),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(125),
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
    [anon_sym_RBRACE] = ACTIONS(375),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(129),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [75] = {
    [anon_sym_LBRACE] = ACTIONS(377),
  },
  [76] = {
    [sym__anything] = STATE(51),
    [sym__literal] = STATE(51),
    [sym__collection_literal] = STATE(51),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym__number] = STATE(27),
    [sym_character] = STATE(51),
    [sym__character] = STATE(28),
    [sym_string] = STATE(51),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(51),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(51),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(51),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(51),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(51),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(51),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(51),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym_set] = STATE(51),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(51),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(51),
    [sym_anonymous_fn] = STATE(39),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym_metadata_repeat1] = STATE(43),
    [sym_nil] = ACTIONS(81),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(137),
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
    [anon_sym_POUND_] = ACTIONS(141),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(379),
    [sym_nil] = ACTIONS(381),
    [sym_true] = ACTIONS(381),
    [sym_false] = ACTIONS(381),
    [sym_number_long] = ACTIONS(381),
    [sym_number_double] = ACTIONS(379),
    [anon_sym_BSLASH] = ACTIONS(379),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [anon_sym_POUND_DQUOTE] = ACTIONS(379),
    [anon_sym_SQUOTE] = ACTIONS(379),
    [anon_sym_LPARENquote] = ACTIONS(379),
    [anon_sym_RPAREN] = ACTIONS(379),
    [anon_sym_COLON] = ACTIONS(381),
    [anon_sym_COLON_COLON] = ACTIONS(379),
    [anon_sym_DASH_GT] = ACTIONS(381),
    [anon_sym_DASH_GT_GT] = ACTIONS(379),
    [anon_sym_as_DASH_GT] = ACTIONS(379),
    [anon_sym_some_DASH_GT] = ACTIONS(381),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(379),
    [anon_sym_cond_DASH_GT] = ACTIONS(381),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(379),
    [sym__symbol_chars] = ACTIONS(381),
    [anon_sym_LPAREN] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(379),
    [anon_sym_RBRACK] = ACTIONS(379),
    [anon_sym_LBRACE] = ACTIONS(379),
    [anon_sym_RBRACE] = ACTIONS(379),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(379),
    [anon_sym_POUND] = ACTIONS(381),
    [anon_sym_POUND_LBRACE] = ACTIONS(379),
    [anon_sym_SEMI] = ACTIONS(379),
    [anon_sym_POUND_BANG] = ACTIONS(379),
    [anon_sym_POUND_] = ACTIONS(379),
    [anon_sym_LPARENcomment] = ACTIONS(379),
    [anon_sym_POUND_LPAREN] = ACTIONS(379),
    [sym_shorthand_fn_arg] = ACTIONS(379),
    [anon_sym_CARET] = ACTIONS(381),
    [anon_sym_CARET_COLON] = ACTIONS(379),
    [anon_sym_CARET_DQUOTE] = ACTIONS(379),
  },
  [78] = {
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
    [aux_sym_ignore_form_repeat1] = STATE(160),
    [sym_number_long] = ACTIONS(383),
    [sym_number_double] = ACTIONS(383),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_COLON_COLON] = ACTIONS(153),
    [anon_sym_DASH_GT] = ACTIONS(155),
    [anon_sym_DASH_GT_GT] = ACTIONS(155),
    [anon_sym_as_DASH_GT] = ACTIONS(155),
    [anon_sym_some_DASH_GT] = ACTIONS(155),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(155),
    [anon_sym_cond_DASH_GT] = ACTIONS(155),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(155),
    [sym__symbol_chars] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_POUND] = ACTIONS(165),
    [anon_sym_] = ACTIONS(385),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(383),
  },
  [79] = {
    [sym__anything] = STATE(162),
    [sym__literal] = STATE(162),
    [sym__collection_literal] = STATE(162),
    [sym_boolean] = STATE(162),
    [sym_number] = STATE(162),
    [sym__number] = STATE(27),
    [sym_character] = STATE(162),
    [sym__character] = STATE(28),
    [sym_string] = STATE(162),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(162),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(162),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(162),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(162),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(162),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(162),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(162),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym_set] = STATE(162),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(162),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(162),
    [sym_anonymous_fn] = STATE(39),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym_program_repeat1] = STATE(162),
    [aux_sym_metadata_repeat1] = STATE(43),
    [sym_nil] = ACTIONS(387),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(137),
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
    [anon_sym_RBRACE] = ACTIONS(389),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(141),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(391),
    [sym_nil] = ACTIONS(393),
    [sym_true] = ACTIONS(393),
    [sym_false] = ACTIONS(393),
    [sym_number_long] = ACTIONS(393),
    [sym_number_double] = ACTIONS(391),
    [anon_sym_BSLASH] = ACTIONS(391),
    [anon_sym_DQUOTE] = ACTIONS(391),
    [anon_sym_POUND_DQUOTE] = ACTIONS(391),
    [anon_sym_SQUOTE] = ACTIONS(391),
    [anon_sym_LPARENquote] = ACTIONS(391),
    [anon_sym_RPAREN] = ACTIONS(391),
    [anon_sym_COLON] = ACTIONS(393),
    [anon_sym_COLON_COLON] = ACTIONS(391),
    [anon_sym_DASH_GT] = ACTIONS(393),
    [anon_sym_DASH_GT_GT] = ACTIONS(391),
    [anon_sym_as_DASH_GT] = ACTIONS(391),
    [anon_sym_some_DASH_GT] = ACTIONS(393),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(391),
    [anon_sym_cond_DASH_GT] = ACTIONS(393),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(391),
    [sym__symbol_chars] = ACTIONS(393),
    [anon_sym_LPAREN] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_RBRACK] = ACTIONS(391),
    [anon_sym_LBRACE] = ACTIONS(391),
    [anon_sym_RBRACE] = ACTIONS(391),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(391),
    [anon_sym_POUND] = ACTIONS(393),
    [anon_sym_POUND_LBRACE] = ACTIONS(391),
    [anon_sym_SEMI] = ACTIONS(391),
    [anon_sym_POUND_BANG] = ACTIONS(391),
    [anon_sym_POUND_] = ACTIONS(391),
    [anon_sym_LPARENcomment] = ACTIONS(391),
    [anon_sym_POUND_LPAREN] = ACTIONS(391),
    [sym_shorthand_fn_arg] = ACTIONS(391),
    [anon_sym_CARET] = ACTIONS(393),
    [anon_sym_CARET_COLON] = ACTIONS(391),
    [anon_sym_CARET_DQUOTE] = ACTIONS(391),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(395),
    [sym_nil] = ACTIONS(397),
    [sym_true] = ACTIONS(397),
    [sym_false] = ACTIONS(397),
    [sym_number_long] = ACTIONS(397),
    [sym_number_double] = ACTIONS(395),
    [anon_sym_BSLASH] = ACTIONS(395),
    [anon_sym_DQUOTE] = ACTIONS(395),
    [anon_sym_POUND_DQUOTE] = ACTIONS(395),
    [anon_sym_SQUOTE] = ACTIONS(395),
    [anon_sym_LPARENquote] = ACTIONS(395),
    [anon_sym_RPAREN] = ACTIONS(395),
    [anon_sym_COLON] = ACTIONS(397),
    [anon_sym_COLON_COLON] = ACTIONS(395),
    [anon_sym_DASH_GT] = ACTIONS(397),
    [anon_sym_DASH_GT_GT] = ACTIONS(395),
    [anon_sym_as_DASH_GT] = ACTIONS(395),
    [anon_sym_some_DASH_GT] = ACTIONS(397),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(395),
    [anon_sym_cond_DASH_GT] = ACTIONS(397),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(395),
    [sym__symbol_chars] = ACTIONS(397),
    [anon_sym_LPAREN] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(395),
    [anon_sym_RBRACK] = ACTIONS(395),
    [anon_sym_LBRACE] = ACTIONS(395),
    [anon_sym_RBRACE] = ACTIONS(395),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(395),
    [anon_sym_POUND] = ACTIONS(397),
    [anon_sym_POUND_LBRACE] = ACTIONS(395),
    [anon_sym_SEMI] = ACTIONS(395),
    [anon_sym_POUND_BANG] = ACTIONS(395),
    [anon_sym_POUND_] = ACTIONS(395),
    [anon_sym_LPARENcomment] = ACTIONS(395),
    [anon_sym_POUND_LPAREN] = ACTIONS(395),
    [sym_shorthand_fn_arg] = ACTIONS(395),
    [anon_sym_CARET] = ACTIONS(397),
    [anon_sym_CARET_COLON] = ACTIONS(395),
    [anon_sym_CARET_DQUOTE] = ACTIONS(395),
  },
  [82] = {
    [aux_sym__string_repeat1] = STATE(164),
    [anon_sym_DQUOTE] = ACTIONS(399),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(401),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(401),
  },
  [83] = {
    [sym__keyword_chars] = ACTIONS(403),
  },
  [84] = {
    [sym__keyword_chars] = ACTIONS(405),
  },
  [85] = {
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
    [sym_shorthand_fn_arg] = ACTIONS(95),
    [anon_sym_CARET] = ACTIONS(95),
    [anon_sym_CARET_COLON] = ACTIONS(95),
    [anon_sym_CARET_DQUOTE] = ACTIONS(95),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [sym_nil] = ACTIONS(99),
    [sym_true] = ACTIONS(99),
    [sym_false] = ACTIONS(99),
    [sym_number_long] = ACTIONS(99),
    [sym_number_double] = ACTIONS(99),
    [anon_sym_BSLASH] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_POUND_DQUOTE] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_LPARENquote] = ACTIONS(99),
    [anon_sym_RPAREN] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_COLON_COLON] = ACTIONS(99),
    [anon_sym_SLASH] = ACTIONS(407),
    [anon_sym_DASH_GT] = ACTIONS(99),
    [anon_sym_DASH_GT_GT] = ACTIONS(99),
    [anon_sym_as_DASH_GT] = ACTIONS(99),
    [anon_sym_some_DASH_GT] = ACTIONS(99),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(99),
    [anon_sym_cond_DASH_GT] = ACTIONS(99),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(99),
    [sym__symbol_chars] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_RBRACK] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(99),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(99),
    [anon_sym_POUND] = ACTIONS(99),
    [anon_sym_POUND_LBRACE] = ACTIONS(99),
    [anon_sym_SEMI] = ACTIONS(99),
    [anon_sym_POUND_BANG] = ACTIONS(99),
    [anon_sym_POUND_] = ACTIONS(99),
    [anon_sym_] = ACTIONS(97),
    [anon_sym_LPARENcomment] = ACTIONS(99),
    [anon_sym_POUND_LPAREN] = ACTIONS(99),
    [sym_shorthand_fn_arg] = ACTIONS(99),
    [anon_sym_CARET] = ACTIONS(99),
    [anon_sym_CARET_COLON] = ACTIONS(99),
    [anon_sym_CARET_DQUOTE] = ACTIONS(99),
  },
  [87] = {
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
    [aux_sym_comment_macro_repeat1] = STATE(169),
    [sym_number_long] = ACTIONS(409),
    [sym_number_double] = ACTIONS(409),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(411),
    [anon_sym_COLON] = ACTIONS(175),
    [anon_sym_COLON_COLON] = ACTIONS(177),
    [anon_sym_DASH_GT] = ACTIONS(179),
    [anon_sym_DASH_GT_GT] = ACTIONS(179),
    [anon_sym_as_DASH_GT] = ACTIONS(179),
    [anon_sym_some_DASH_GT] = ACTIONS(179),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(179),
    [anon_sym_cond_DASH_GT] = ACTIONS(179),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(179),
    [sym__symbol_chars] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUND] = ACTIONS(189),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(409),
  },
  [88] = {
    [sym__number] = STATE(180),
    [sym__string] = STATE(180),
    [sym__keyword] = STATE(180),
    [sym__unqualified_keyword] = STATE(180),
    [sym_qualified_keyword] = STATE(180),
    [sym__symbol] = STATE(180),
    [sym_threading_macro] = STATE(180),
    [sym_qualified_symbol] = STATE(180),
    [sym__one_form] = STATE(180),
    [sym__paren_sequence] = STATE(180),
    [sym__bracket_sequence] = STATE(180),
    [sym__curly_brace_sequence] = STATE(180),
    [aux_sym_comment_macro_repeat1] = STATE(180),
    [sym_number_long] = ACTIONS(413),
    [sym_number_double] = ACTIONS(413),
    [anon_sym_DQUOTE] = ACTIONS(415),
    [anon_sym_COLON] = ACTIONS(417),
    [anon_sym_COLON_COLON] = ACTIONS(419),
    [anon_sym_DASH_GT] = ACTIONS(421),
    [anon_sym_DASH_GT_GT] = ACTIONS(421),
    [anon_sym_as_DASH_GT] = ACTIONS(421),
    [anon_sym_some_DASH_GT] = ACTIONS(421),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(421),
    [anon_sym_cond_DASH_GT] = ACTIONS(421),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(421),
    [sym__symbol_chars] = ACTIONS(423),
    [anon_sym_LPAREN] = ACTIONS(425),
    [anon_sym_LBRACK] = ACTIONS(427),
    [anon_sym_RBRACK] = ACTIONS(429),
    [anon_sym_LBRACE] = ACTIONS(431),
    [anon_sym_POUND] = ACTIONS(433),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(413),
  },
  [89] = {
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
    [aux_sym_comment_macro_repeat1] = STATE(191),
    [sym_number_long] = ACTIONS(435),
    [sym_number_double] = ACTIONS(435),
    [anon_sym_DQUOTE] = ACTIONS(437),
    [anon_sym_COLON] = ACTIONS(439),
    [anon_sym_COLON_COLON] = ACTIONS(441),
    [anon_sym_DASH_GT] = ACTIONS(443),
    [anon_sym_DASH_GT_GT] = ACTIONS(443),
    [anon_sym_as_DASH_GT] = ACTIONS(443),
    [anon_sym_some_DASH_GT] = ACTIONS(443),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(443),
    [anon_sym_cond_DASH_GT] = ACTIONS(443),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(443),
    [sym__symbol_chars] = ACTIONS(445),
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_LBRACE] = ACTIONS(451),
    [anon_sym_RBRACE] = ACTIONS(453),
    [anon_sym_POUND] = ACTIONS(455),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(435),
  },
  [90] = {
    [anon_sym_LBRACE] = ACTIONS(457),
  },
  [91] = {
    [aux_sym_ignore_form_repeat1] = STATE(193),
    [ts_builtin_sym_end] = ACTIONS(459),
    [sym_nil] = ACTIONS(461),
    [sym_true] = ACTIONS(461),
    [sym_false] = ACTIONS(461),
    [sym_number_long] = ACTIONS(461),
    [sym_number_double] = ACTIONS(461),
    [anon_sym_BSLASH] = ACTIONS(461),
    [anon_sym_DQUOTE] = ACTIONS(461),
    [anon_sym_POUND_DQUOTE] = ACTIONS(461),
    [anon_sym_SQUOTE] = ACTIONS(461),
    [anon_sym_LPARENquote] = ACTIONS(461),
    [anon_sym_COLON] = ACTIONS(461),
    [anon_sym_COLON_COLON] = ACTIONS(461),
    [anon_sym_DASH_GT] = ACTIONS(461),
    [anon_sym_DASH_GT_GT] = ACTIONS(461),
    [anon_sym_as_DASH_GT] = ACTIONS(461),
    [anon_sym_some_DASH_GT] = ACTIONS(461),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(461),
    [anon_sym_cond_DASH_GT] = ACTIONS(461),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(461),
    [sym__symbol_chars] = ACTIONS(461),
    [anon_sym_LPAREN] = ACTIONS(461),
    [anon_sym_LBRACK] = ACTIONS(461),
    [anon_sym_LBRACE] = ACTIONS(461),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(461),
    [anon_sym_POUND] = ACTIONS(461),
    [anon_sym_POUND_LBRACE] = ACTIONS(461),
    [anon_sym_SEMI] = ACTIONS(461),
    [anon_sym_POUND_BANG] = ACTIONS(461),
    [anon_sym_POUND_] = ACTIONS(461),
    [anon_sym_] = ACTIONS(463),
    [anon_sym_LPARENcomment] = ACTIONS(461),
    [anon_sym_POUND_LPAREN] = ACTIONS(461),
    [anon_sym_CARET] = ACTIONS(461),
    [anon_sym_CARET_COLON] = ACTIONS(461),
    [anon_sym_CARET_DQUOTE] = ACTIONS(461),
  },
  [92] = {
    [sym__number] = STATE(194),
    [sym__string] = STATE(194),
    [sym__keyword] = STATE(194),
    [sym__unqualified_keyword] = STATE(194),
    [sym_qualified_keyword] = STATE(194),
    [sym__symbol] = STATE(194),
    [sym_threading_macro] = STATE(194),
    [sym_qualified_symbol] = STATE(194),
    [sym__one_form] = STATE(194),
    [sym__paren_sequence] = STATE(194),
    [sym__bracket_sequence] = STATE(194),
    [sym__curly_brace_sequence] = STATE(194),
    [aux_sym_ignore_form_repeat1] = STATE(195),
    [sym_number_long] = ACTIONS(465),
    [sym_number_double] = ACTIONS(465),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_COLON_COLON] = ACTIONS(153),
    [anon_sym_DASH_GT] = ACTIONS(155),
    [anon_sym_DASH_GT_GT] = ACTIONS(155),
    [anon_sym_as_DASH_GT] = ACTIONS(155),
    [anon_sym_some_DASH_GT] = ACTIONS(155),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(155),
    [anon_sym_cond_DASH_GT] = ACTIONS(155),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(155),
    [sym__symbol_chars] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_POUND] = ACTIONS(165),
    [anon_sym_] = ACTIONS(467),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(465),
  },
  [93] = {
    [aux_sym__string_repeat1] = STATE(197),
    [anon_sym_DQUOTE] = ACTIONS(469),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(471),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(471),
  },
  [94] = {
    [ts_builtin_sym_end] = ACTIONS(473),
    [sym_nil] = ACTIONS(475),
    [sym_true] = ACTIONS(475),
    [sym_false] = ACTIONS(475),
    [sym_number_long] = ACTIONS(475),
    [sym_number_double] = ACTIONS(473),
    [anon_sym_BSLASH] = ACTIONS(473),
    [anon_sym_DQUOTE] = ACTIONS(473),
    [anon_sym_POUND_DQUOTE] = ACTIONS(473),
    [anon_sym_SQUOTE] = ACTIONS(473),
    [anon_sym_LPARENquote] = ACTIONS(473),
    [anon_sym_RPAREN] = ACTIONS(473),
    [anon_sym_COLON] = ACTIONS(475),
    [anon_sym_COLON_COLON] = ACTIONS(473),
    [anon_sym_DASH_GT] = ACTIONS(475),
    [anon_sym_DASH_GT_GT] = ACTIONS(473),
    [anon_sym_as_DASH_GT] = ACTIONS(473),
    [anon_sym_some_DASH_GT] = ACTIONS(475),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(473),
    [anon_sym_cond_DASH_GT] = ACTIONS(475),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(473),
    [sym__symbol_chars] = ACTIONS(475),
    [anon_sym_LPAREN] = ACTIONS(475),
    [anon_sym_LBRACK] = ACTIONS(473),
    [anon_sym_RBRACK] = ACTIONS(473),
    [anon_sym_LBRACE] = ACTIONS(473),
    [anon_sym_RBRACE] = ACTIONS(473),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(473),
    [anon_sym_POUND] = ACTIONS(475),
    [anon_sym_POUND_LBRACE] = ACTIONS(473),
    [anon_sym_SEMI] = ACTIONS(473),
    [anon_sym_POUND_BANG] = ACTIONS(473),
    [anon_sym_POUND_] = ACTIONS(473),
    [anon_sym_LPARENcomment] = ACTIONS(473),
    [anon_sym_POUND_LPAREN] = ACTIONS(473),
    [sym_shorthand_fn_arg] = ACTIONS(473),
    [anon_sym_CARET] = ACTIONS(475),
    [anon_sym_CARET_COLON] = ACTIONS(473),
    [anon_sym_CARET_DQUOTE] = ACTIONS(473),
  },
  [95] = {
    [sym__keyword_chars] = ACTIONS(477),
  },
  [96] = {
    [sym__keyword_chars] = ACTIONS(479),
  },
  [97] = {
    [sym_number_long] = ACTIONS(95),
    [sym_number_double] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(95),
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
  [98] = {
    [sym_number_long] = ACTIONS(99),
    [sym_number_double] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_RPAREN] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_COLON_COLON] = ACTIONS(99),
    [anon_sym_SLASH] = ACTIONS(481),
    [anon_sym_DASH_GT] = ACTIONS(99),
    [anon_sym_DASH_GT_GT] = ACTIONS(99),
    [anon_sym_as_DASH_GT] = ACTIONS(99),
    [anon_sym_some_DASH_GT] = ACTIONS(99),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(99),
    [anon_sym_cond_DASH_GT] = ACTIONS(99),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(99),
    [sym__symbol_chars] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_POUND] = ACTIONS(99),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(99),
  },
  [99] = {
    [sym__number] = STATE(202),
    [sym__string] = STATE(202),
    [sym__keyword] = STATE(202),
    [sym__unqualified_keyword] = STATE(202),
    [sym_qualified_keyword] = STATE(202),
    [sym__symbol] = STATE(202),
    [sym_threading_macro] = STATE(202),
    [sym_qualified_symbol] = STATE(202),
    [sym__one_form] = STATE(202),
    [sym__paren_sequence] = STATE(202),
    [sym__bracket_sequence] = STATE(202),
    [sym__curly_brace_sequence] = STATE(202),
    [aux_sym_comment_macro_repeat1] = STATE(202),
    [sym_number_long] = ACTIONS(483),
    [sym_number_double] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(485),
    [anon_sym_COLON] = ACTIONS(175),
    [anon_sym_COLON_COLON] = ACTIONS(177),
    [anon_sym_DASH_GT] = ACTIONS(179),
    [anon_sym_DASH_GT_GT] = ACTIONS(179),
    [anon_sym_as_DASH_GT] = ACTIONS(179),
    [anon_sym_some_DASH_GT] = ACTIONS(179),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(179),
    [anon_sym_cond_DASH_GT] = ACTIONS(179),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(179),
    [sym__symbol_chars] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUND] = ACTIONS(189),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(483),
  },
  [100] = {
    [sym__number] = STATE(204),
    [sym__string] = STATE(204),
    [sym__keyword] = STATE(204),
    [sym__unqualified_keyword] = STATE(204),
    [sym_qualified_keyword] = STATE(204),
    [sym__symbol] = STATE(204),
    [sym_threading_macro] = STATE(204),
    [sym_qualified_symbol] = STATE(204),
    [sym__one_form] = STATE(204),
    [sym__paren_sequence] = STATE(204),
    [sym__bracket_sequence] = STATE(204),
    [sym__curly_brace_sequence] = STATE(204),
    [aux_sym_comment_macro_repeat1] = STATE(204),
    [sym_number_long] = ACTIONS(487),
    [sym_number_double] = ACTIONS(487),
    [anon_sym_DQUOTE] = ACTIONS(415),
    [anon_sym_COLON] = ACTIONS(417),
    [anon_sym_COLON_COLON] = ACTIONS(419),
    [anon_sym_DASH_GT] = ACTIONS(421),
    [anon_sym_DASH_GT_GT] = ACTIONS(421),
    [anon_sym_as_DASH_GT] = ACTIONS(421),
    [anon_sym_some_DASH_GT] = ACTIONS(421),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(421),
    [anon_sym_cond_DASH_GT] = ACTIONS(421),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(421),
    [sym__symbol_chars] = ACTIONS(423),
    [anon_sym_LPAREN] = ACTIONS(425),
    [anon_sym_LBRACK] = ACTIONS(427),
    [anon_sym_RBRACK] = ACTIONS(489),
    [anon_sym_LBRACE] = ACTIONS(431),
    [anon_sym_POUND] = ACTIONS(433),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(487),
  },
  [101] = {
    [sym__number] = STATE(206),
    [sym__string] = STATE(206),
    [sym__keyword] = STATE(206),
    [sym__unqualified_keyword] = STATE(206),
    [sym_qualified_keyword] = STATE(206),
    [sym__symbol] = STATE(206),
    [sym_threading_macro] = STATE(206),
    [sym_qualified_symbol] = STATE(206),
    [sym__one_form] = STATE(206),
    [sym__paren_sequence] = STATE(206),
    [sym__bracket_sequence] = STATE(206),
    [sym__curly_brace_sequence] = STATE(206),
    [aux_sym_comment_macro_repeat1] = STATE(206),
    [sym_number_long] = ACTIONS(491),
    [sym_number_double] = ACTIONS(491),
    [anon_sym_DQUOTE] = ACTIONS(437),
    [anon_sym_COLON] = ACTIONS(439),
    [anon_sym_COLON_COLON] = ACTIONS(441),
    [anon_sym_DASH_GT] = ACTIONS(443),
    [anon_sym_DASH_GT_GT] = ACTIONS(443),
    [anon_sym_as_DASH_GT] = ACTIONS(443),
    [anon_sym_some_DASH_GT] = ACTIONS(443),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(443),
    [anon_sym_cond_DASH_GT] = ACTIONS(443),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(443),
    [sym__symbol_chars] = ACTIONS(445),
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_LBRACE] = ACTIONS(451),
    [anon_sym_RBRACE] = ACTIONS(493),
    [anon_sym_POUND] = ACTIONS(455),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(491),
  },
  [102] = {
    [anon_sym_LBRACE] = ACTIONS(495),
  },
  [103] = {
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
    [aux_sym_comment_macro_repeat1] = STATE(209),
    [sym_number_long] = ACTIONS(497),
    [sym_number_double] = ACTIONS(497),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(499),
    [anon_sym_COLON] = ACTIONS(175),
    [anon_sym_COLON_COLON] = ACTIONS(177),
    [anon_sym_DASH_GT] = ACTIONS(179),
    [anon_sym_DASH_GT_GT] = ACTIONS(179),
    [anon_sym_as_DASH_GT] = ACTIONS(179),
    [anon_sym_some_DASH_GT] = ACTIONS(179),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(179),
    [anon_sym_cond_DASH_GT] = ACTIONS(179),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(179),
    [sym__symbol_chars] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUND] = ACTIONS(189),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(497),
  },
  [104] = {
    [sym__anything] = STATE(51),
    [sym__literal] = STATE(51),
    [sym__collection_literal] = STATE(51),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym__number] = STATE(27),
    [sym_character] = STATE(51),
    [sym__character] = STATE(28),
    [sym_string] = STATE(51),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(51),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(51),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(51),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(51),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(51),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(51),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(51),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym_set] = STATE(51),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(51),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(51),
    [sym_anonymous_fn] = STATE(39),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym_metadata_repeat1] = STATE(43),
    [sym_nil] = ACTIONS(81),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(193),
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
    [anon_sym_POUND_] = ACTIONS(197),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [105] = {
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
    [anon_sym_DASH_GT] = ACTIONS(503),
    [anon_sym_DASH_GT_GT] = ACTIONS(501),
    [anon_sym_as_DASH_GT] = ACTIONS(501),
    [anon_sym_some_DASH_GT] = ACTIONS(503),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(501),
    [anon_sym_cond_DASH_GT] = ACTIONS(503),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(501),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(501),
    [sym_shorthand_fn_arg] = ACTIONS(501),
    [anon_sym_CARET] = ACTIONS(503),
    [anon_sym_CARET_COLON] = ACTIONS(501),
    [anon_sym_CARET_DQUOTE] = ACTIONS(501),
  },
  [106] = {
    [sym__number] = STATE(210),
    [sym__string] = STATE(210),
    [sym__keyword] = STATE(210),
    [sym__unqualified_keyword] = STATE(210),
    [sym_qualified_keyword] = STATE(210),
    [sym__symbol] = STATE(210),
    [sym_threading_macro] = STATE(210),
    [sym_qualified_symbol] = STATE(210),
    [sym__one_form] = STATE(210),
    [sym__paren_sequence] = STATE(210),
    [sym__bracket_sequence] = STATE(210),
    [sym__curly_brace_sequence] = STATE(210),
    [aux_sym_ignore_form_repeat1] = STATE(211),
    [sym_number_long] = ACTIONS(505),
    [sym_number_double] = ACTIONS(505),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_COLON_COLON] = ACTIONS(153),
    [anon_sym_DASH_GT] = ACTIONS(155),
    [anon_sym_DASH_GT_GT] = ACTIONS(155),
    [anon_sym_as_DASH_GT] = ACTIONS(155),
    [anon_sym_some_DASH_GT] = ACTIONS(155),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(155),
    [anon_sym_cond_DASH_GT] = ACTIONS(155),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(155),
    [sym__symbol_chars] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_POUND] = ACTIONS(165),
    [anon_sym_] = ACTIONS(507),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(505),
  },
  [107] = {
    [sym__anything] = STATE(213),
    [sym__literal] = STATE(213),
    [sym__collection_literal] = STATE(213),
    [sym_boolean] = STATE(213),
    [sym_number] = STATE(213),
    [sym__number] = STATE(27),
    [sym_character] = STATE(213),
    [sym__character] = STATE(28),
    [sym_string] = STATE(213),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(213),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(213),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(213),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(213),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(213),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(213),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(213),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym_set] = STATE(213),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(213),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(213),
    [sym_anonymous_fn] = STATE(39),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym_shorthand_fn_repeat1] = STATE(213),
    [aux_sym_metadata_repeat1] = STATE(43),
    [sym_nil] = ACTIONS(509),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(193),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(511),
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
    [anon_sym_POUND_] = ACTIONS(197),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_fn_arg] = ACTIONS(513),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [108] = {
    [anon_sym_DASH_GT] = ACTIONS(515),
    [anon_sym_DASH_GT_GT] = ACTIONS(517),
    [anon_sym_as_DASH_GT] = ACTIONS(517),
    [anon_sym_some_DASH_GT] = ACTIONS(515),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(517),
    [anon_sym_cond_DASH_GT] = ACTIONS(515),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(517),
    [sym__symbol_chars] = ACTIONS(515),
    [anon_sym_LPAREN] = ACTIONS(517),
    [anon_sym_LBRACK] = ACTIONS(517),
    [anon_sym_LBRACE] = ACTIONS(517),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(517),
    [anon_sym_POUND] = ACTIONS(515),
    [anon_sym_POUND_LBRACE] = ACTIONS(517),
    [anon_sym_CARET] = ACTIONS(515),
    [anon_sym_CARET_COLON] = ACTIONS(517),
    [anon_sym_CARET_DQUOTE] = ACTIONS(517),
  },
  [109] = {
    [sym__anything] = STATE(71),
    [sym__literal] = STATE(71),
    [sym__collection_literal] = STATE(71),
    [sym_boolean] = STATE(71),
    [sym_number] = STATE(71),
    [sym__number] = STATE(27),
    [sym_character] = STATE(71),
    [sym__character] = STATE(28),
    [sym_string] = STATE(71),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(71),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(71),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(71),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(71),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(71),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(71),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(71),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym__hash_map_kv_pair] = STATE(215),
    [sym__hash_map_key] = STATE(71),
    [sym_set] = STATE(71),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(71),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(71),
    [sym_anonymous_fn] = STATE(39),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym__hash_map_repeat1] = STATE(215),
    [aux_sym_metadata_repeat1] = STATE(43),
    [sym_nil] = ACTIONS(123),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(125),
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
    [anon_sym_RBRACE] = ACTIONS(519),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(129),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [110] = {
    [sym__anything] = STATE(71),
    [sym__literal] = STATE(71),
    [sym__collection_literal] = STATE(71),
    [sym_boolean] = STATE(71),
    [sym_number] = STATE(71),
    [sym__number] = STATE(27),
    [sym_character] = STATE(71),
    [sym__character] = STATE(28),
    [sym_string] = STATE(71),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(71),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(71),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(71),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(71),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(71),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(71),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(71),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym__hash_map_kv_pair] = STATE(217),
    [sym__hash_map_key] = STATE(71),
    [sym_set] = STATE(71),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(71),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(71),
    [sym_anonymous_fn] = STATE(39),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym__hash_map_repeat1] = STATE(217),
    [aux_sym_metadata_repeat1] = STATE(43),
    [sym_nil] = ACTIONS(123),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(125),
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
    [anon_sym_RBRACE] = ACTIONS(521),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(129),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [111] = {
    [sym__symbol_chars] = ACTIONS(523),
  },
  [112] = {
    [anon_sym_DASH_GT] = ACTIONS(525),
    [anon_sym_DASH_GT_GT] = ACTIONS(527),
    [anon_sym_as_DASH_GT] = ACTIONS(527),
    [anon_sym_some_DASH_GT] = ACTIONS(525),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(527),
    [anon_sym_cond_DASH_GT] = ACTIONS(525),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(527),
    [sym__symbol_chars] = ACTIONS(525),
    [anon_sym_LPAREN] = ACTIONS(527),
    [anon_sym_LBRACK] = ACTIONS(527),
    [anon_sym_LBRACE] = ACTIONS(527),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(527),
    [anon_sym_POUND] = ACTIONS(525),
    [anon_sym_POUND_LBRACE] = ACTIONS(527),
  },
  [113] = {
    [anon_sym_DASH_GT] = ACTIONS(253),
    [anon_sym_DASH_GT_GT] = ACTIONS(251),
    [anon_sym_as_DASH_GT] = ACTIONS(251),
    [anon_sym_some_DASH_GT] = ACTIONS(253),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(251),
    [anon_sym_cond_DASH_GT] = ACTIONS(253),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(251),
    [sym__symbol_chars] = ACTIONS(253),
    [anon_sym_LPAREN] = ACTIONS(251),
    [anon_sym_LBRACK] = ACTIONS(251),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(251),
    [anon_sym_POUND] = ACTIONS(253),
    [anon_sym_POUND_LBRACE] = ACTIONS(251),
  },
  [114] = {
    [aux_sym__string_repeat1] = STATE(123),
    [anon_sym_DQUOTE] = ACTIONS(529),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(295),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(295),
  },
  [115] = {
    [sym__anything] = STATE(63),
    [sym__literal] = STATE(63),
    [sym__collection_literal] = STATE(63),
    [sym_boolean] = STATE(63),
    [sym_number] = STATE(63),
    [sym__number] = STATE(27),
    [sym_character] = STATE(63),
    [sym__character] = STATE(28),
    [sym_string] = STATE(63),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(63),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(63),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(63),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(63),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(63),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(63),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(63),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym_set] = STATE(63),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(63),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(63),
    [sym_anonymous_fn] = STATE(39),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym_program_repeat1] = STATE(63),
    [aux_sym_metadata_repeat1] = STATE(43),
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
    [anon_sym_RPAREN] = ACTIONS(107),
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
    [anon_sym_POUND_] = ACTIONS(109),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(531),
    [sym_nil] = ACTIONS(533),
    [sym_true] = ACTIONS(533),
    [sym_false] = ACTIONS(533),
    [sym_number_long] = ACTIONS(533),
    [sym_number_double] = ACTIONS(531),
    [anon_sym_BSLASH] = ACTIONS(531),
    [anon_sym_DQUOTE] = ACTIONS(531),
    [anon_sym_POUND_DQUOTE] = ACTIONS(531),
    [anon_sym_SQUOTE] = ACTIONS(531),
    [anon_sym_LPARENquote] = ACTIONS(531),
    [anon_sym_RPAREN] = ACTIONS(531),
    [anon_sym_COLON] = ACTIONS(533),
    [anon_sym_COLON_COLON] = ACTIONS(531),
    [anon_sym_DASH_GT] = ACTIONS(533),
    [anon_sym_DASH_GT_GT] = ACTIONS(531),
    [anon_sym_as_DASH_GT] = ACTIONS(531),
    [anon_sym_some_DASH_GT] = ACTIONS(533),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(531),
    [anon_sym_cond_DASH_GT] = ACTIONS(533),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(531),
    [sym__symbol_chars] = ACTIONS(533),
    [anon_sym_LPAREN] = ACTIONS(533),
    [anon_sym_LBRACK] = ACTIONS(531),
    [anon_sym_RBRACK] = ACTIONS(531),
    [anon_sym_LBRACE] = ACTIONS(531),
    [anon_sym_RBRACE] = ACTIONS(531),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(531),
    [anon_sym_POUND] = ACTIONS(533),
    [anon_sym_POUND_LBRACE] = ACTIONS(531),
    [anon_sym_SEMI] = ACTIONS(531),
    [anon_sym_POUND_BANG] = ACTIONS(531),
    [anon_sym_POUND_] = ACTIONS(531),
    [anon_sym_LPARENcomment] = ACTIONS(531),
    [anon_sym_POUND_LPAREN] = ACTIONS(531),
    [sym_shorthand_fn_arg] = ACTIONS(531),
    [anon_sym_CARET] = ACTIONS(533),
    [anon_sym_CARET_COLON] = ACTIONS(531),
    [anon_sym_CARET_DQUOTE] = ACTIONS(531),
  },
  [117] = {
    [sym__anything] = STATE(117),
    [sym__literal] = STATE(117),
    [sym__collection_literal] = STATE(117),
    [sym_boolean] = STATE(117),
    [sym_number] = STATE(117),
    [sym__number] = STATE(27),
    [sym_character] = STATE(117),
    [sym__character] = STATE(28),
    [sym_string] = STATE(117),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(117),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(117),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(117),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(117),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(117),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(117),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(117),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym_set] = STATE(117),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(117),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(117),
    [sym_anonymous_fn] = STATE(39),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym_program_repeat1] = STATE(117),
    [aux_sym_metadata_repeat1] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(535),
    [sym_nil] = ACTIONS(537),
    [sym_true] = ACTIONS(540),
    [sym_false] = ACTIONS(540),
    [sym_number_long] = ACTIONS(543),
    [sym_number_double] = ACTIONS(546),
    [anon_sym_BSLASH] = ACTIONS(549),
    [anon_sym_DQUOTE] = ACTIONS(552),
    [anon_sym_POUND_DQUOTE] = ACTIONS(555),
    [anon_sym_SQUOTE] = ACTIONS(558),
    [anon_sym_LPARENquote] = ACTIONS(561),
    [anon_sym_COLON] = ACTIONS(564),
    [anon_sym_COLON_COLON] = ACTIONS(567),
    [anon_sym_DASH_GT] = ACTIONS(570),
    [anon_sym_DASH_GT_GT] = ACTIONS(573),
    [anon_sym_as_DASH_GT] = ACTIONS(573),
    [anon_sym_some_DASH_GT] = ACTIONS(570),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(573),
    [anon_sym_cond_DASH_GT] = ACTIONS(570),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(573),
    [sym__symbol_chars] = ACTIONS(576),
    [anon_sym_LPAREN] = ACTIONS(579),
    [anon_sym_LBRACK] = ACTIONS(582),
    [anon_sym_LBRACE] = ACTIONS(585),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(588),
    [anon_sym_POUND] = ACTIONS(591),
    [anon_sym_POUND_LBRACE] = ACTIONS(594),
    [anon_sym_SEMI] = ACTIONS(597),
    [anon_sym_POUND_BANG] = ACTIONS(600),
    [anon_sym_POUND_] = ACTIONS(603),
    [anon_sym_LPARENcomment] = ACTIONS(606),
    [anon_sym_POUND_LPAREN] = ACTIONS(609),
    [anon_sym_CARET] = ACTIONS(612),
    [anon_sym_CARET_COLON] = ACTIONS(615),
    [anon_sym_CARET_DQUOTE] = ACTIONS(618),
  },
  [118] = {
    [sym__symbol_chars] = ACTIONS(201),
  },
  [119] = {
    [sym_metadata_shorthand] = STATE(119),
    [aux_sym_metadata_repeat1] = STATE(119),
    [anon_sym_LPAREN] = ACTIONS(621),
    [anon_sym_LBRACK] = ACTIONS(621),
    [anon_sym_LBRACE] = ACTIONS(621),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(621),
    [anon_sym_POUND] = ACTIONS(623),
    [anon_sym_POUND_LBRACE] = ACTIONS(621),
    [anon_sym_CARET] = ACTIONS(625),
    [anon_sym_CARET_COLON] = ACTIONS(628),
    [anon_sym_CARET_DQUOTE] = ACTIONS(631),
  },
  [120] = {
    [sym__hex_char] = ACTIONS(634),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(636),
    [sym_nil] = ACTIONS(638),
    [sym_true] = ACTIONS(638),
    [sym_false] = ACTIONS(638),
    [sym_number_long] = ACTIONS(638),
    [sym_number_double] = ACTIONS(636),
    [anon_sym_BSLASH] = ACTIONS(636),
    [anon_sym_DQUOTE] = ACTIONS(636),
    [anon_sym_POUND_DQUOTE] = ACTIONS(636),
    [anon_sym_SQUOTE] = ACTIONS(636),
    [anon_sym_LPARENquote] = ACTIONS(636),
    [anon_sym_RPAREN] = ACTIONS(636),
    [anon_sym_COLON] = ACTIONS(638),
    [anon_sym_COLON_COLON] = ACTIONS(636),
    [anon_sym_DASH_GT] = ACTIONS(638),
    [anon_sym_DASH_GT_GT] = ACTIONS(636),
    [anon_sym_as_DASH_GT] = ACTIONS(636),
    [anon_sym_some_DASH_GT] = ACTIONS(638),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(636),
    [anon_sym_cond_DASH_GT] = ACTIONS(638),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(636),
    [sym__symbol_chars] = ACTIONS(638),
    [anon_sym_LPAREN] = ACTIONS(638),
    [anon_sym_LBRACK] = ACTIONS(636),
    [anon_sym_RBRACK] = ACTIONS(636),
    [anon_sym_LBRACE] = ACTIONS(636),
    [anon_sym_RBRACE] = ACTIONS(636),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(636),
    [anon_sym_POUND] = ACTIONS(638),
    [anon_sym_POUND_LBRACE] = ACTIONS(636),
    [anon_sym_SEMI] = ACTIONS(636),
    [anon_sym_POUND_BANG] = ACTIONS(636),
    [anon_sym_POUND_] = ACTIONS(636),
    [anon_sym_LPARENcomment] = ACTIONS(636),
    [anon_sym_POUND_LPAREN] = ACTIONS(636),
    [sym_shorthand_fn_arg] = ACTIONS(636),
    [anon_sym_CARET] = ACTIONS(638),
    [anon_sym_CARET_COLON] = ACTIONS(636),
    [anon_sym_CARET_DQUOTE] = ACTIONS(636),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(640),
    [sym_nil] = ACTIONS(642),
    [sym_true] = ACTIONS(642),
    [sym_false] = ACTIONS(642),
    [sym_number_long] = ACTIONS(642),
    [sym_number_double] = ACTIONS(640),
    [anon_sym_BSLASH] = ACTIONS(640),
    [anon_sym_DQUOTE] = ACTIONS(640),
    [anon_sym_POUND_DQUOTE] = ACTIONS(640),
    [anon_sym_SQUOTE] = ACTIONS(640),
    [anon_sym_LPARENquote] = ACTIONS(640),
    [anon_sym_RPAREN] = ACTIONS(640),
    [anon_sym_COLON] = ACTIONS(642),
    [anon_sym_COLON_COLON] = ACTIONS(640),
    [anon_sym_DASH_GT] = ACTIONS(642),
    [anon_sym_DASH_GT_GT] = ACTIONS(640),
    [anon_sym_as_DASH_GT] = ACTIONS(640),
    [anon_sym_some_DASH_GT] = ACTIONS(642),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(640),
    [anon_sym_cond_DASH_GT] = ACTIONS(642),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(640),
    [sym__symbol_chars] = ACTIONS(642),
    [anon_sym_LPAREN] = ACTIONS(642),
    [anon_sym_LBRACK] = ACTIONS(640),
    [anon_sym_RBRACK] = ACTIONS(640),
    [anon_sym_LBRACE] = ACTIONS(640),
    [anon_sym_RBRACE] = ACTIONS(640),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(640),
    [anon_sym_POUND] = ACTIONS(642),
    [anon_sym_POUND_LBRACE] = ACTIONS(640),
    [anon_sym_SEMI] = ACTIONS(640),
    [anon_sym_POUND_BANG] = ACTIONS(640),
    [anon_sym_POUND_] = ACTIONS(640),
    [anon_sym_LPARENcomment] = ACTIONS(640),
    [anon_sym_POUND_LPAREN] = ACTIONS(640),
    [sym_shorthand_fn_arg] = ACTIONS(640),
    [anon_sym_CARET] = ACTIONS(642),
    [anon_sym_CARET_COLON] = ACTIONS(640),
    [anon_sym_CARET_DQUOTE] = ACTIONS(640),
  },
  [123] = {
    [aux_sym__string_repeat1] = STATE(123),
    [anon_sym_DQUOTE] = ACTIONS(644),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(646),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(646),
  },
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(649),
    [sym_nil] = ACTIONS(651),
    [sym_true] = ACTIONS(651),
    [sym_false] = ACTIONS(651),
    [sym_number_long] = ACTIONS(651),
    [sym_number_double] = ACTIONS(649),
    [anon_sym_BSLASH] = ACTIONS(649),
    [anon_sym_DQUOTE] = ACTIONS(649),
    [anon_sym_POUND_DQUOTE] = ACTIONS(649),
    [anon_sym_SQUOTE] = ACTIONS(649),
    [anon_sym_LPARENquote] = ACTIONS(649),
    [anon_sym_RPAREN] = ACTIONS(649),
    [anon_sym_COLON] = ACTIONS(651),
    [anon_sym_COLON_COLON] = ACTIONS(649),
    [anon_sym_DASH_GT] = ACTIONS(651),
    [anon_sym_DASH_GT_GT] = ACTIONS(649),
    [anon_sym_as_DASH_GT] = ACTIONS(649),
    [anon_sym_some_DASH_GT] = ACTIONS(651),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(649),
    [anon_sym_cond_DASH_GT] = ACTIONS(651),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(649),
    [sym__symbol_chars] = ACTIONS(651),
    [anon_sym_LPAREN] = ACTIONS(651),
    [anon_sym_LBRACK] = ACTIONS(649),
    [anon_sym_RBRACK] = ACTIONS(649),
    [anon_sym_LBRACE] = ACTIONS(649),
    [anon_sym_RBRACE] = ACTIONS(649),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(649),
    [anon_sym_POUND] = ACTIONS(651),
    [anon_sym_POUND_LBRACE] = ACTIONS(649),
    [anon_sym_SEMI] = ACTIONS(649),
    [anon_sym_POUND_BANG] = ACTIONS(649),
    [anon_sym_POUND_] = ACTIONS(649),
    [anon_sym_LPARENcomment] = ACTIONS(649),
    [anon_sym_POUND_LPAREN] = ACTIONS(649),
    [sym_shorthand_fn_arg] = ACTIONS(649),
    [anon_sym_CARET] = ACTIONS(651),
    [anon_sym_CARET_COLON] = ACTIONS(649),
    [anon_sym_CARET_DQUOTE] = ACTIONS(649),
  },
  [125] = {
    [aux_sym__regex_repeat1] = STATE(125),
    [anon_sym_DQUOTE] = ACTIONS(653),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(655),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(655),
  },
  [126] = {
    [aux_sym_ignore_form_repeat1] = STATE(221),
    [anon_sym_RPAREN] = ACTIONS(461),
    [anon_sym_] = ACTIONS(658),
  },
  [127] = {
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
    [aux_sym_ignore_form_repeat1] = STATE(195),
    [sym_number_long] = ACTIONS(660),
    [sym_number_double] = ACTIONS(660),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_COLON_COLON] = ACTIONS(153),
    [anon_sym_DASH_GT] = ACTIONS(155),
    [anon_sym_DASH_GT_GT] = ACTIONS(155),
    [anon_sym_as_DASH_GT] = ACTIONS(155),
    [anon_sym_some_DASH_GT] = ACTIONS(155),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(155),
    [anon_sym_cond_DASH_GT] = ACTIONS(155),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(155),
    [sym__symbol_chars] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_POUND] = ACTIONS(165),
    [anon_sym_] = ACTIONS(467),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(660),
  },
  [128] = {
    [ts_builtin_sym_end] = ACTIONS(662),
    [sym_nil] = ACTIONS(664),
    [sym_true] = ACTIONS(664),
    [sym_false] = ACTIONS(664),
    [sym_number_long] = ACTIONS(664),
    [sym_number_double] = ACTIONS(662),
    [anon_sym_BSLASH] = ACTIONS(662),
    [anon_sym_DQUOTE] = ACTIONS(662),
    [anon_sym_POUND_DQUOTE] = ACTIONS(662),
    [anon_sym_SQUOTE] = ACTIONS(662),
    [anon_sym_LPARENquote] = ACTIONS(662),
    [anon_sym_RPAREN] = ACTIONS(662),
    [anon_sym_COLON] = ACTIONS(664),
    [anon_sym_COLON_COLON] = ACTIONS(662),
    [anon_sym_DASH_GT] = ACTIONS(664),
    [anon_sym_DASH_GT_GT] = ACTIONS(662),
    [anon_sym_as_DASH_GT] = ACTIONS(662),
    [anon_sym_some_DASH_GT] = ACTIONS(664),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(662),
    [anon_sym_cond_DASH_GT] = ACTIONS(664),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(662),
    [sym__symbol_chars] = ACTIONS(664),
    [anon_sym_LPAREN] = ACTIONS(664),
    [anon_sym_LBRACK] = ACTIONS(662),
    [anon_sym_RBRACK] = ACTIONS(662),
    [anon_sym_LBRACE] = ACTIONS(662),
    [anon_sym_RBRACE] = ACTIONS(662),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(662),
    [anon_sym_POUND] = ACTIONS(664),
    [anon_sym_POUND_LBRACE] = ACTIONS(662),
    [anon_sym_SEMI] = ACTIONS(662),
    [anon_sym_POUND_BANG] = ACTIONS(662),
    [anon_sym_POUND_] = ACTIONS(662),
    [anon_sym_LPARENcomment] = ACTIONS(662),
    [anon_sym_POUND_LPAREN] = ACTIONS(662),
    [sym_shorthand_fn_arg] = ACTIONS(662),
    [anon_sym_CARET] = ACTIONS(664),
    [anon_sym_CARET_COLON] = ACTIONS(662),
    [anon_sym_CARET_DQUOTE] = ACTIONS(662),
  },
  [129] = {
    [sym__keyword_chars] = ACTIONS(666),
  },
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(668),
    [sym_nil] = ACTIONS(670),
    [sym_true] = ACTIONS(670),
    [sym_false] = ACTIONS(670),
    [sym_number_long] = ACTIONS(670),
    [sym_number_double] = ACTIONS(668),
    [anon_sym_BSLASH] = ACTIONS(668),
    [anon_sym_DQUOTE] = ACTIONS(668),
    [anon_sym_POUND_DQUOTE] = ACTIONS(668),
    [anon_sym_SQUOTE] = ACTIONS(668),
    [anon_sym_LPARENquote] = ACTIONS(668),
    [anon_sym_RPAREN] = ACTIONS(668),
    [anon_sym_COLON] = ACTIONS(670),
    [anon_sym_COLON_COLON] = ACTIONS(668),
    [anon_sym_DASH_GT] = ACTIONS(670),
    [anon_sym_DASH_GT_GT] = ACTIONS(668),
    [anon_sym_as_DASH_GT] = ACTIONS(668),
    [anon_sym_some_DASH_GT] = ACTIONS(670),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(668),
    [anon_sym_cond_DASH_GT] = ACTIONS(670),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(668),
    [sym__symbol_chars] = ACTIONS(670),
    [anon_sym_LPAREN] = ACTIONS(670),
    [anon_sym_LBRACK] = ACTIONS(668),
    [anon_sym_RBRACK] = ACTIONS(668),
    [anon_sym_LBRACE] = ACTIONS(668),
    [anon_sym_RBRACE] = ACTIONS(668),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(668),
    [anon_sym_POUND] = ACTIONS(670),
    [anon_sym_POUND_LBRACE] = ACTIONS(668),
    [anon_sym_SEMI] = ACTIONS(668),
    [anon_sym_POUND_BANG] = ACTIONS(668),
    [anon_sym_POUND_] = ACTIONS(668),
    [anon_sym_LPARENcomment] = ACTIONS(668),
    [anon_sym_POUND_LPAREN] = ACTIONS(668),
    [sym_shorthand_fn_arg] = ACTIONS(668),
    [anon_sym_CARET] = ACTIONS(670),
    [anon_sym_CARET_COLON] = ACTIONS(668),
    [anon_sym_CARET_DQUOTE] = ACTIONS(668),
  },
  [131] = {
    [aux_sym_ignore_form_repeat1] = STATE(224),
    [sym_nil] = ACTIONS(461),
    [sym_true] = ACTIONS(461),
    [sym_false] = ACTIONS(461),
    [sym_number_long] = ACTIONS(461),
    [sym_number_double] = ACTIONS(461),
    [anon_sym_BSLASH] = ACTIONS(461),
    [anon_sym_DQUOTE] = ACTIONS(461),
    [anon_sym_POUND_DQUOTE] = ACTIONS(461),
    [anon_sym_SQUOTE] = ACTIONS(461),
    [anon_sym_LPARENquote] = ACTIONS(461),
    [anon_sym_RPAREN] = ACTIONS(461),
    [anon_sym_COLON] = ACTIONS(461),
    [anon_sym_COLON_COLON] = ACTIONS(461),
    [anon_sym_DASH_GT] = ACTIONS(461),
    [anon_sym_DASH_GT_GT] = ACTIONS(461),
    [anon_sym_as_DASH_GT] = ACTIONS(461),
    [anon_sym_some_DASH_GT] = ACTIONS(461),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(461),
    [anon_sym_cond_DASH_GT] = ACTIONS(461),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(461),
    [sym__symbol_chars] = ACTIONS(461),
    [anon_sym_LPAREN] = ACTIONS(461),
    [anon_sym_LBRACK] = ACTIONS(461),
    [anon_sym_LBRACE] = ACTIONS(461),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(461),
    [anon_sym_POUND] = ACTIONS(461),
    [anon_sym_POUND_LBRACE] = ACTIONS(461),
    [anon_sym_SEMI] = ACTIONS(461),
    [anon_sym_POUND_BANG] = ACTIONS(461),
    [anon_sym_POUND_] = ACTIONS(461),
    [anon_sym_] = ACTIONS(672),
    [anon_sym_LPARENcomment] = ACTIONS(461),
    [anon_sym_POUND_LPAREN] = ACTIONS(461),
    [anon_sym_CARET] = ACTIONS(461),
    [anon_sym_CARET_COLON] = ACTIONS(461),
    [anon_sym_CARET_DQUOTE] = ACTIONS(461),
  },
  [132] = {
    [sym__number] = STATE(225),
    [sym__string] = STATE(225),
    [sym__keyword] = STATE(225),
    [sym__unqualified_keyword] = STATE(225),
    [sym_qualified_keyword] = STATE(225),
    [sym__symbol] = STATE(225),
    [sym_threading_macro] = STATE(225),
    [sym_qualified_symbol] = STATE(225),
    [sym__one_form] = STATE(225),
    [sym__paren_sequence] = STATE(225),
    [sym__bracket_sequence] = STATE(225),
    [sym__curly_brace_sequence] = STATE(225),
    [aux_sym_ignore_form_repeat1] = STATE(195),
    [sym_number_long] = ACTIONS(674),
    [sym_number_double] = ACTIONS(674),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_COLON_COLON] = ACTIONS(153),
    [anon_sym_DASH_GT] = ACTIONS(155),
    [anon_sym_DASH_GT_GT] = ACTIONS(155),
    [anon_sym_as_DASH_GT] = ACTIONS(155),
    [anon_sym_some_DASH_GT] = ACTIONS(155),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(155),
    [anon_sym_cond_DASH_GT] = ACTIONS(155),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(155),
    [sym__symbol_chars] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_POUND] = ACTIONS(165),
    [anon_sym_] = ACTIONS(467),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(674),
  },
  [133] = {
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(93),
    [anon_sym_POUND] = ACTIONS(95),
  },
  [134] = {
    [anon_sym_DQUOTE] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(676),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(97),
    [anon_sym_POUND] = ACTIONS(99),
  },
  [135] = {
    [sym_vector] = STATE(138),
    [sym__vector] = STATE(35),
    [sym__single_arity_fn] = STATE(227),
    [sym_params] = STATE(141),
    [anon_sym_LBRACK] = ACTIONS(37),
  },
  [136] = {
    [anon_sym_DQUOTE] = ACTIONS(678),
    [anon_sym_LPAREN] = ACTIONS(678),
    [anon_sym_LBRACK] = ACTIONS(678),
    [anon_sym_LBRACE] = ACTIONS(678),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(678),
    [anon_sym_POUND] = ACTIONS(680),
  },
  [137] = {
    [anon_sym_DQUOTE] = ACTIONS(239),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(239),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(239),
    [anon_sym_POUND] = ACTIONS(241),
  },
  [138] = {
    [sym_nil] = ACTIONS(682),
    [sym_true] = ACTIONS(682),
    [sym_false] = ACTIONS(682),
    [sym_number_long] = ACTIONS(682),
    [sym_number_double] = ACTIONS(684),
    [anon_sym_BSLASH] = ACTIONS(684),
    [anon_sym_DQUOTE] = ACTIONS(684),
    [anon_sym_POUND_DQUOTE] = ACTIONS(684),
    [anon_sym_SQUOTE] = ACTIONS(684),
    [anon_sym_LPARENquote] = ACTIONS(684),
    [anon_sym_RPAREN] = ACTIONS(684),
    [anon_sym_COLON] = ACTIONS(682),
    [anon_sym_COLON_COLON] = ACTIONS(684),
    [anon_sym_DASH_GT] = ACTIONS(682),
    [anon_sym_DASH_GT_GT] = ACTIONS(684),
    [anon_sym_as_DASH_GT] = ACTIONS(684),
    [anon_sym_some_DASH_GT] = ACTIONS(682),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(684),
    [anon_sym_cond_DASH_GT] = ACTIONS(682),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(684),
    [sym__symbol_chars] = ACTIONS(682),
    [anon_sym_LPAREN] = ACTIONS(682),
    [anon_sym_LBRACK] = ACTIONS(684),
    [anon_sym_LBRACE] = ACTIONS(684),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(684),
    [anon_sym_POUND] = ACTIONS(682),
    [anon_sym_POUND_LBRACE] = ACTIONS(684),
    [anon_sym_SEMI] = ACTIONS(684),
    [anon_sym_POUND_BANG] = ACTIONS(684),
    [anon_sym_POUND_] = ACTIONS(684),
    [anon_sym_LPARENcomment] = ACTIONS(684),
    [anon_sym_POUND_LPAREN] = ACTIONS(684),
    [anon_sym_CARET] = ACTIONS(682),
    [anon_sym_CARET_COLON] = ACTIONS(684),
    [anon_sym_CARET_DQUOTE] = ACTIONS(684),
  },
  [139] = {
    [anon_sym_RPAREN] = ACTIONS(686),
  },
  [140] = {
    [sym_vector] = STATE(138),
    [sym__vector] = STATE(35),
    [sym__after_the_fn_name] = STATE(229),
    [sym__single_arity_fn] = STATE(229),
    [sym__multi_arity_fn] = STATE(229),
    [sym_params] = STATE(141),
    [aux_sym__multi_arity_fn_repeat1] = STATE(142),
    [anon_sym_LPAREN] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(37),
  },
  [141] = {
    [sym__anything] = STATE(231),
    [sym__literal] = STATE(231),
    [sym__collection_literal] = STATE(231),
    [sym_boolean] = STATE(231),
    [sym_number] = STATE(231),
    [sym__number] = STATE(27),
    [sym_character] = STATE(231),
    [sym__character] = STATE(28),
    [sym_string] = STATE(231),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(231),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(231),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(231),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(231),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(231),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(231),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(231),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym_set] = STATE(231),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(231),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(231),
    [sym_anonymous_fn] = STATE(39),
    [sym_function_body] = STATE(230),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym_program_repeat1] = STATE(231),
    [aux_sym_metadata_repeat1] = STATE(43),
    [sym_nil] = ACTIONS(688),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(690),
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
    [anon_sym_POUND_] = ACTIONS(109),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [142] = {
    [aux_sym__multi_arity_fn_repeat1] = STATE(232),
    [anon_sym_RPAREN] = ACTIONS(692),
    [anon_sym_LPAREN] = ACTIONS(341),
  },
  [143] = {
    [sym_string] = STATE(234),
    [sym__string] = STATE(235),
    [sym_vector] = STATE(138),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(236),
    [sym__hash_map] = STATE(113),
    [sym_namespace_map] = STATE(113),
    [sym__after_the_fn_name] = STATE(237),
    [sym__single_arity_fn] = STATE(237),
    [sym__multi_arity_fn] = STATE(237),
    [sym_params] = STATE(141),
    [sym_docstring] = STATE(238),
    [sym_attr_map] = STATE(239),
    [aux_sym__multi_arity_fn_repeat1] = STATE(142),
    [anon_sym_DQUOTE] = ACTIONS(694),
    [anon_sym_LPAREN] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(205),
    [anon_sym_POUND] = ACTIONS(207),
  },
  [144] = {
    [sym_symbol] = STATE(136),
    [sym__symbol] = STATE(137),
    [sym_threading_macro] = STATE(137),
    [sym_qualified_symbol] = STATE(137),
    [sym_function_name] = STATE(240),
    [anon_sym_DASH_GT] = ACTIONS(335),
    [anon_sym_DASH_GT_GT] = ACTIONS(337),
    [anon_sym_as_DASH_GT] = ACTIONS(337),
    [anon_sym_some_DASH_GT] = ACTIONS(335),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(337),
    [anon_sym_cond_DASH_GT] = ACTIONS(335),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(337),
    [sym__symbol_chars] = ACTIONS(339),
  },
  [145] = {
    [sym_metadata_shorthand] = STATE(241),
    [aux_sym_metadata_repeat1] = STATE(241),
    [anon_sym_DASH_GT] = ACTIONS(269),
    [anon_sym_DASH_GT_GT] = ACTIONS(271),
    [anon_sym_as_DASH_GT] = ACTIONS(271),
    [anon_sym_some_DASH_GT] = ACTIONS(269),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(271),
    [anon_sym_cond_DASH_GT] = ACTIONS(269),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(271),
    [sym__symbol_chars] = ACTIONS(269),
    [anon_sym_CARET] = ACTIONS(277),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(696),
    [sym_nil] = ACTIONS(698),
    [sym_true] = ACTIONS(698),
    [sym_false] = ACTIONS(698),
    [sym_number_long] = ACTIONS(698),
    [sym_number_double] = ACTIONS(696),
    [anon_sym_BSLASH] = ACTIONS(696),
    [anon_sym_DQUOTE] = ACTIONS(696),
    [anon_sym_POUND_DQUOTE] = ACTIONS(696),
    [anon_sym_SQUOTE] = ACTIONS(696),
    [anon_sym_LPARENquote] = ACTIONS(696),
    [anon_sym_RPAREN] = ACTIONS(696),
    [anon_sym_COLON] = ACTIONS(698),
    [anon_sym_COLON_COLON] = ACTIONS(696),
    [anon_sym_DASH_GT] = ACTIONS(698),
    [anon_sym_DASH_GT_GT] = ACTIONS(696),
    [anon_sym_as_DASH_GT] = ACTIONS(696),
    [anon_sym_some_DASH_GT] = ACTIONS(698),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(696),
    [anon_sym_cond_DASH_GT] = ACTIONS(698),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(696),
    [sym__symbol_chars] = ACTIONS(698),
    [anon_sym_LPAREN] = ACTIONS(698),
    [anon_sym_LBRACK] = ACTIONS(696),
    [anon_sym_RBRACK] = ACTIONS(696),
    [anon_sym_LBRACE] = ACTIONS(696),
    [anon_sym_RBRACE] = ACTIONS(696),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(696),
    [anon_sym_POUND] = ACTIONS(698),
    [anon_sym_POUND_LBRACE] = ACTIONS(696),
    [anon_sym_SEMI] = ACTIONS(696),
    [anon_sym_POUND_BANG] = ACTIONS(696),
    [anon_sym_POUND_] = ACTIONS(696),
    [anon_sym_LPARENcomment] = ACTIONS(696),
    [anon_sym_POUND_LPAREN] = ACTIONS(696),
    [sym_shorthand_fn_arg] = ACTIONS(696),
    [anon_sym_CARET] = ACTIONS(698),
    [anon_sym_CARET_COLON] = ACTIONS(696),
    [anon_sym_CARET_DQUOTE] = ACTIONS(696),
  },
  [147] = {
    [sym__anything] = STATE(147),
    [sym__literal] = STATE(147),
    [sym__collection_literal] = STATE(147),
    [sym_boolean] = STATE(147),
    [sym_number] = STATE(147),
    [sym__number] = STATE(27),
    [sym_character] = STATE(147),
    [sym__character] = STATE(28),
    [sym_string] = STATE(147),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(147),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(147),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(147),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(147),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(147),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(147),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(147),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym_set] = STATE(147),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(147),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(147),
    [sym_anonymous_fn] = STATE(39),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym_program_repeat1] = STATE(147),
    [aux_sym_metadata_repeat1] = STATE(43),
    [sym_nil] = ACTIONS(700),
    [sym_true] = ACTIONS(540),
    [sym_false] = ACTIONS(540),
    [sym_number_long] = ACTIONS(543),
    [sym_number_double] = ACTIONS(546),
    [anon_sym_BSLASH] = ACTIONS(549),
    [anon_sym_DQUOTE] = ACTIONS(552),
    [anon_sym_POUND_DQUOTE] = ACTIONS(555),
    [anon_sym_SQUOTE] = ACTIONS(703),
    [anon_sym_LPARENquote] = ACTIONS(561),
    [anon_sym_RPAREN] = ACTIONS(535),
    [anon_sym_COLON] = ACTIONS(564),
    [anon_sym_COLON_COLON] = ACTIONS(567),
    [anon_sym_DASH_GT] = ACTIONS(570),
    [anon_sym_DASH_GT_GT] = ACTIONS(573),
    [anon_sym_as_DASH_GT] = ACTIONS(573),
    [anon_sym_some_DASH_GT] = ACTIONS(570),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(573),
    [anon_sym_cond_DASH_GT] = ACTIONS(570),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(573),
    [sym__symbol_chars] = ACTIONS(576),
    [anon_sym_LPAREN] = ACTIONS(579),
    [anon_sym_LBRACK] = ACTIONS(582),
    [anon_sym_LBRACE] = ACTIONS(585),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(588),
    [anon_sym_POUND] = ACTIONS(591),
    [anon_sym_POUND_LBRACE] = ACTIONS(594),
    [anon_sym_SEMI] = ACTIONS(597),
    [anon_sym_POUND_BANG] = ACTIONS(600),
    [anon_sym_POUND_] = ACTIONS(706),
    [anon_sym_LPARENcomment] = ACTIONS(606),
    [anon_sym_POUND_LPAREN] = ACTIONS(609),
    [anon_sym_CARET] = ACTIONS(612),
    [anon_sym_CARET_COLON] = ACTIONS(615),
    [anon_sym_CARET_DQUOTE] = ACTIONS(618),
  },
  [148] = {
    [aux_sym_ignore_form_repeat1] = STATE(242),
    [sym_nil] = ACTIONS(461),
    [sym_true] = ACTIONS(461),
    [sym_false] = ACTIONS(461),
    [sym_number_long] = ACTIONS(461),
    [sym_number_double] = ACTIONS(461),
    [anon_sym_BSLASH] = ACTIONS(461),
    [anon_sym_DQUOTE] = ACTIONS(461),
    [anon_sym_POUND_DQUOTE] = ACTIONS(461),
    [anon_sym_SQUOTE] = ACTIONS(461),
    [anon_sym_LPARENquote] = ACTIONS(461),
    [anon_sym_COLON] = ACTIONS(461),
    [anon_sym_COLON_COLON] = ACTIONS(461),
    [anon_sym_DASH_GT] = ACTIONS(461),
    [anon_sym_DASH_GT_GT] = ACTIONS(461),
    [anon_sym_as_DASH_GT] = ACTIONS(461),
    [anon_sym_some_DASH_GT] = ACTIONS(461),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(461),
    [anon_sym_cond_DASH_GT] = ACTIONS(461),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(461),
    [sym__symbol_chars] = ACTIONS(461),
    [anon_sym_LPAREN] = ACTIONS(461),
    [anon_sym_LBRACK] = ACTIONS(461),
    [anon_sym_RBRACK] = ACTIONS(461),
    [anon_sym_LBRACE] = ACTIONS(461),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(461),
    [anon_sym_POUND] = ACTIONS(461),
    [anon_sym_POUND_LBRACE] = ACTIONS(461),
    [anon_sym_SEMI] = ACTIONS(461),
    [anon_sym_POUND_BANG] = ACTIONS(461),
    [anon_sym_POUND_] = ACTIONS(461),
    [anon_sym_] = ACTIONS(709),
    [anon_sym_LPARENcomment] = ACTIONS(461),
    [anon_sym_POUND_LPAREN] = ACTIONS(461),
    [anon_sym_CARET] = ACTIONS(461),
    [anon_sym_CARET_COLON] = ACTIONS(461),
    [anon_sym_CARET_DQUOTE] = ACTIONS(461),
  },
  [149] = {
    [sym__number] = STATE(243),
    [sym__string] = STATE(243),
    [sym__keyword] = STATE(243),
    [sym__unqualified_keyword] = STATE(243),
    [sym_qualified_keyword] = STATE(243),
    [sym__symbol] = STATE(243),
    [sym_threading_macro] = STATE(243),
    [sym_qualified_symbol] = STATE(243),
    [sym__one_form] = STATE(243),
    [sym__paren_sequence] = STATE(243),
    [sym__bracket_sequence] = STATE(243),
    [sym__curly_brace_sequence] = STATE(243),
    [aux_sym_ignore_form_repeat1] = STATE(195),
    [sym_number_long] = ACTIONS(711),
    [sym_number_double] = ACTIONS(711),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_COLON_COLON] = ACTIONS(153),
    [anon_sym_DASH_GT] = ACTIONS(155),
    [anon_sym_DASH_GT_GT] = ACTIONS(155),
    [anon_sym_as_DASH_GT] = ACTIONS(155),
    [anon_sym_some_DASH_GT] = ACTIONS(155),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(155),
    [anon_sym_cond_DASH_GT] = ACTIONS(155),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(155),
    [sym__symbol_chars] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_POUND] = ACTIONS(165),
    [anon_sym_] = ACTIONS(467),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(711),
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(713),
    [sym_nil] = ACTIONS(715),
    [sym_true] = ACTIONS(715),
    [sym_false] = ACTIONS(715),
    [sym_number_long] = ACTIONS(715),
    [sym_number_double] = ACTIONS(713),
    [anon_sym_BSLASH] = ACTIONS(713),
    [anon_sym_DQUOTE] = ACTIONS(713),
    [anon_sym_POUND_DQUOTE] = ACTIONS(713),
    [anon_sym_SQUOTE] = ACTIONS(713),
    [anon_sym_LPARENquote] = ACTIONS(713),
    [anon_sym_RPAREN] = ACTIONS(713),
    [anon_sym_COLON] = ACTIONS(715),
    [anon_sym_COLON_COLON] = ACTIONS(713),
    [anon_sym_DASH_GT] = ACTIONS(715),
    [anon_sym_DASH_GT_GT] = ACTIONS(713),
    [anon_sym_as_DASH_GT] = ACTIONS(713),
    [anon_sym_some_DASH_GT] = ACTIONS(715),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(713),
    [anon_sym_cond_DASH_GT] = ACTIONS(715),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(713),
    [sym__symbol_chars] = ACTIONS(715),
    [anon_sym_LPAREN] = ACTIONS(715),
    [anon_sym_LBRACK] = ACTIONS(713),
    [anon_sym_RBRACK] = ACTIONS(713),
    [anon_sym_LBRACE] = ACTIONS(713),
    [anon_sym_RBRACE] = ACTIONS(713),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(713),
    [anon_sym_POUND] = ACTIONS(715),
    [anon_sym_POUND_LBRACE] = ACTIONS(713),
    [anon_sym_SEMI] = ACTIONS(713),
    [anon_sym_POUND_BANG] = ACTIONS(713),
    [anon_sym_POUND_] = ACTIONS(713),
    [anon_sym_LPARENcomment] = ACTIONS(713),
    [anon_sym_POUND_LPAREN] = ACTIONS(713),
    [sym_shorthand_fn_arg] = ACTIONS(713),
    [anon_sym_CARET] = ACTIONS(715),
    [anon_sym_CARET_COLON] = ACTIONS(713),
    [anon_sym_CARET_DQUOTE] = ACTIONS(713),
  },
  [151] = {
    [sym__anything] = STATE(151),
    [sym__literal] = STATE(151),
    [sym__collection_literal] = STATE(151),
    [sym_boolean] = STATE(151),
    [sym_number] = STATE(151),
    [sym__number] = STATE(27),
    [sym_character] = STATE(151),
    [sym__character] = STATE(28),
    [sym_string] = STATE(151),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(151),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(151),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(151),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(151),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(151),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(151),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(151),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym_set] = STATE(151),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(151),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(151),
    [sym_anonymous_fn] = STATE(39),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym_program_repeat1] = STATE(151),
    [aux_sym_metadata_repeat1] = STATE(43),
    [sym_nil] = ACTIONS(717),
    [sym_true] = ACTIONS(540),
    [sym_false] = ACTIONS(540),
    [sym_number_long] = ACTIONS(543),
    [sym_number_double] = ACTIONS(546),
    [anon_sym_BSLASH] = ACTIONS(549),
    [anon_sym_DQUOTE] = ACTIONS(552),
    [anon_sym_POUND_DQUOTE] = ACTIONS(555),
    [anon_sym_SQUOTE] = ACTIONS(720),
    [anon_sym_LPARENquote] = ACTIONS(561),
    [anon_sym_COLON] = ACTIONS(564),
    [anon_sym_COLON_COLON] = ACTIONS(567),
    [anon_sym_DASH_GT] = ACTIONS(570),
    [anon_sym_DASH_GT_GT] = ACTIONS(573),
    [anon_sym_as_DASH_GT] = ACTIONS(573),
    [anon_sym_some_DASH_GT] = ACTIONS(570),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(573),
    [anon_sym_cond_DASH_GT] = ACTIONS(570),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(573),
    [sym__symbol_chars] = ACTIONS(576),
    [anon_sym_LPAREN] = ACTIONS(579),
    [anon_sym_LBRACK] = ACTIONS(582),
    [anon_sym_RBRACK] = ACTIONS(535),
    [anon_sym_LBRACE] = ACTIONS(585),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(588),
    [anon_sym_POUND] = ACTIONS(591),
    [anon_sym_POUND_LBRACE] = ACTIONS(594),
    [anon_sym_SEMI] = ACTIONS(597),
    [anon_sym_POUND_BANG] = ACTIONS(600),
    [anon_sym_POUND_] = ACTIONS(723),
    [anon_sym_LPARENcomment] = ACTIONS(606),
    [anon_sym_POUND_LPAREN] = ACTIONS(609),
    [anon_sym_CARET] = ACTIONS(612),
    [anon_sym_CARET_COLON] = ACTIONS(615),
    [anon_sym_CARET_DQUOTE] = ACTIONS(618),
  },
  [152] = {
    [aux_sym_ignore_form_repeat1] = STATE(244),
    [sym_nil] = ACTIONS(461),
    [sym_true] = ACTIONS(461),
    [sym_false] = ACTIONS(461),
    [sym_number_long] = ACTIONS(461),
    [sym_number_double] = ACTIONS(461),
    [anon_sym_BSLASH] = ACTIONS(461),
    [anon_sym_DQUOTE] = ACTIONS(461),
    [anon_sym_POUND_DQUOTE] = ACTIONS(461),
    [anon_sym_SQUOTE] = ACTIONS(461),
    [anon_sym_LPARENquote] = ACTIONS(461),
    [anon_sym_COLON] = ACTIONS(461),
    [anon_sym_COLON_COLON] = ACTIONS(461),
    [anon_sym_DASH_GT] = ACTIONS(461),
    [anon_sym_DASH_GT_GT] = ACTIONS(461),
    [anon_sym_as_DASH_GT] = ACTIONS(461),
    [anon_sym_some_DASH_GT] = ACTIONS(461),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(461),
    [anon_sym_cond_DASH_GT] = ACTIONS(461),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(461),
    [sym__symbol_chars] = ACTIONS(461),
    [anon_sym_LPAREN] = ACTIONS(461),
    [anon_sym_LBRACK] = ACTIONS(461),
    [anon_sym_LBRACE] = ACTIONS(461),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(461),
    [anon_sym_POUND] = ACTIONS(461),
    [anon_sym_POUND_LBRACE] = ACTIONS(461),
    [anon_sym_SEMI] = ACTIONS(461),
    [anon_sym_POUND_BANG] = ACTIONS(461),
    [anon_sym_POUND_] = ACTIONS(461),
    [anon_sym_] = ACTIONS(726),
    [anon_sym_LPARENcomment] = ACTIONS(461),
    [anon_sym_POUND_LPAREN] = ACTIONS(461),
    [anon_sym_CARET] = ACTIONS(461),
    [anon_sym_CARET_COLON] = ACTIONS(461),
    [anon_sym_CARET_DQUOTE] = ACTIONS(461),
  },
  [153] = {
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
    [aux_sym_ignore_form_repeat1] = STATE(195),
    [sym_number_long] = ACTIONS(728),
    [sym_number_double] = ACTIONS(728),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_COLON_COLON] = ACTIONS(153),
    [anon_sym_DASH_GT] = ACTIONS(155),
    [anon_sym_DASH_GT_GT] = ACTIONS(155),
    [anon_sym_as_DASH_GT] = ACTIONS(155),
    [anon_sym_some_DASH_GT] = ACTIONS(155),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(155),
    [anon_sym_cond_DASH_GT] = ACTIONS(155),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(155),
    [sym__symbol_chars] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_POUND] = ACTIONS(165),
    [anon_sym_] = ACTIONS(467),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(728),
  },
  [154] = {
    [sym_nil] = ACTIONS(730),
    [sym_true] = ACTIONS(730),
    [sym_false] = ACTIONS(730),
    [sym_number_long] = ACTIONS(730),
    [sym_number_double] = ACTIONS(732),
    [anon_sym_BSLASH] = ACTIONS(732),
    [anon_sym_DQUOTE] = ACTIONS(732),
    [anon_sym_POUND_DQUOTE] = ACTIONS(732),
    [anon_sym_SQUOTE] = ACTIONS(732),
    [anon_sym_LPARENquote] = ACTIONS(732),
    [anon_sym_COLON] = ACTIONS(730),
    [anon_sym_COLON_COLON] = ACTIONS(732),
    [anon_sym_DASH_GT] = ACTIONS(730),
    [anon_sym_DASH_GT_GT] = ACTIONS(732),
    [anon_sym_as_DASH_GT] = ACTIONS(732),
    [anon_sym_some_DASH_GT] = ACTIONS(730),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(732),
    [anon_sym_cond_DASH_GT] = ACTIONS(730),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(732),
    [sym__symbol_chars] = ACTIONS(730),
    [anon_sym_LPAREN] = ACTIONS(730),
    [anon_sym_LBRACK] = ACTIONS(732),
    [anon_sym_LBRACE] = ACTIONS(732),
    [anon_sym_RBRACE] = ACTIONS(732),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(732),
    [anon_sym_POUND] = ACTIONS(730),
    [anon_sym_POUND_LBRACE] = ACTIONS(732),
    [anon_sym_SEMI] = ACTIONS(732),
    [anon_sym_POUND_BANG] = ACTIONS(732),
    [anon_sym_POUND_] = ACTIONS(732),
    [anon_sym_LPARENcomment] = ACTIONS(732),
    [anon_sym_POUND_LPAREN] = ACTIONS(732),
    [anon_sym_CARET] = ACTIONS(730),
    [anon_sym_CARET_COLON] = ACTIONS(732),
    [anon_sym_CARET_DQUOTE] = ACTIONS(732),
  },
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(734),
    [sym_nil] = ACTIONS(736),
    [sym_true] = ACTIONS(736),
    [sym_false] = ACTIONS(736),
    [sym_number_long] = ACTIONS(736),
    [sym_number_double] = ACTIONS(734),
    [anon_sym_BSLASH] = ACTIONS(734),
    [anon_sym_DQUOTE] = ACTIONS(734),
    [anon_sym_POUND_DQUOTE] = ACTIONS(734),
    [anon_sym_SQUOTE] = ACTIONS(734),
    [anon_sym_LPARENquote] = ACTIONS(734),
    [anon_sym_RPAREN] = ACTIONS(734),
    [anon_sym_COLON] = ACTIONS(736),
    [anon_sym_COLON_COLON] = ACTIONS(734),
    [anon_sym_DASH_GT] = ACTIONS(736),
    [anon_sym_DASH_GT_GT] = ACTIONS(734),
    [anon_sym_as_DASH_GT] = ACTIONS(734),
    [anon_sym_some_DASH_GT] = ACTIONS(736),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(734),
    [anon_sym_cond_DASH_GT] = ACTIONS(736),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(734),
    [sym__symbol_chars] = ACTIONS(736),
    [anon_sym_LPAREN] = ACTIONS(736),
    [anon_sym_LBRACK] = ACTIONS(734),
    [anon_sym_RBRACK] = ACTIONS(734),
    [anon_sym_LBRACE] = ACTIONS(734),
    [anon_sym_RBRACE] = ACTIONS(734),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(734),
    [anon_sym_POUND] = ACTIONS(736),
    [anon_sym_POUND_LBRACE] = ACTIONS(734),
    [anon_sym_SEMI] = ACTIONS(734),
    [anon_sym_POUND_BANG] = ACTIONS(734),
    [anon_sym_POUND_] = ACTIONS(734),
    [anon_sym_LPARENcomment] = ACTIONS(734),
    [anon_sym_POUND_LPAREN] = ACTIONS(734),
    [sym_shorthand_fn_arg] = ACTIONS(734),
    [anon_sym_CARET] = ACTIONS(736),
    [anon_sym_CARET_COLON] = ACTIONS(734),
    [anon_sym_CARET_DQUOTE] = ACTIONS(734),
  },
  [156] = {
    [sym__anything] = STATE(71),
    [sym__literal] = STATE(71),
    [sym__collection_literal] = STATE(71),
    [sym_boolean] = STATE(71),
    [sym_number] = STATE(71),
    [sym__number] = STATE(27),
    [sym_character] = STATE(71),
    [sym__character] = STATE(28),
    [sym_string] = STATE(71),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(71),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(71),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(71),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(71),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(71),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(71),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(71),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym__hash_map_kv_pair] = STATE(156),
    [sym__hash_map_key] = STATE(71),
    [sym_set] = STATE(71),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(71),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(71),
    [sym_anonymous_fn] = STATE(39),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym__hash_map_repeat1] = STATE(156),
    [aux_sym_metadata_repeat1] = STATE(43),
    [sym_nil] = ACTIONS(738),
    [sym_true] = ACTIONS(741),
    [sym_false] = ACTIONS(741),
    [sym_number_long] = ACTIONS(744),
    [sym_number_double] = ACTIONS(747),
    [anon_sym_BSLASH] = ACTIONS(750),
    [anon_sym_DQUOTE] = ACTIONS(753),
    [anon_sym_POUND_DQUOTE] = ACTIONS(756),
    [anon_sym_SQUOTE] = ACTIONS(759),
    [anon_sym_LPARENquote] = ACTIONS(762),
    [anon_sym_COLON] = ACTIONS(765),
    [anon_sym_COLON_COLON] = ACTIONS(768),
    [anon_sym_DASH_GT] = ACTIONS(771),
    [anon_sym_DASH_GT_GT] = ACTIONS(774),
    [anon_sym_as_DASH_GT] = ACTIONS(774),
    [anon_sym_some_DASH_GT] = ACTIONS(771),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(774),
    [anon_sym_cond_DASH_GT] = ACTIONS(771),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(774),
    [sym__symbol_chars] = ACTIONS(777),
    [anon_sym_LPAREN] = ACTIONS(780),
    [anon_sym_LBRACK] = ACTIONS(783),
    [anon_sym_LBRACE] = ACTIONS(786),
    [anon_sym_RBRACE] = ACTIONS(789),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(791),
    [anon_sym_POUND] = ACTIONS(794),
    [anon_sym_POUND_LBRACE] = ACTIONS(797),
    [anon_sym_SEMI] = ACTIONS(800),
    [anon_sym_POUND_BANG] = ACTIONS(803),
    [anon_sym_POUND_] = ACTIONS(806),
    [anon_sym_LPARENcomment] = ACTIONS(809),
    [anon_sym_POUND_LPAREN] = ACTIONS(812),
    [anon_sym_CARET] = ACTIONS(815),
    [anon_sym_CARET_COLON] = ACTIONS(818),
    [anon_sym_CARET_DQUOTE] = ACTIONS(821),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(824),
    [sym_nil] = ACTIONS(826),
    [sym_true] = ACTIONS(826),
    [sym_false] = ACTIONS(826),
    [sym_number_long] = ACTIONS(826),
    [sym_number_double] = ACTIONS(824),
    [anon_sym_BSLASH] = ACTIONS(824),
    [anon_sym_DQUOTE] = ACTIONS(824),
    [anon_sym_POUND_DQUOTE] = ACTIONS(824),
    [anon_sym_SQUOTE] = ACTIONS(824),
    [anon_sym_LPARENquote] = ACTIONS(824),
    [anon_sym_RPAREN] = ACTIONS(824),
    [anon_sym_COLON] = ACTIONS(826),
    [anon_sym_COLON_COLON] = ACTIONS(824),
    [anon_sym_DASH_GT] = ACTIONS(826),
    [anon_sym_DASH_GT_GT] = ACTIONS(824),
    [anon_sym_as_DASH_GT] = ACTIONS(824),
    [anon_sym_some_DASH_GT] = ACTIONS(826),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(824),
    [anon_sym_cond_DASH_GT] = ACTIONS(826),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(824),
    [sym__symbol_chars] = ACTIONS(826),
    [anon_sym_LPAREN] = ACTIONS(826),
    [anon_sym_LBRACK] = ACTIONS(824),
    [anon_sym_RBRACK] = ACTIONS(824),
    [anon_sym_LBRACE] = ACTIONS(824),
    [anon_sym_RBRACE] = ACTIONS(824),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(824),
    [anon_sym_POUND] = ACTIONS(826),
    [anon_sym_POUND_LBRACE] = ACTIONS(824),
    [anon_sym_SEMI] = ACTIONS(824),
    [anon_sym_POUND_BANG] = ACTIONS(824),
    [anon_sym_POUND_] = ACTIONS(824),
    [anon_sym_LPARENcomment] = ACTIONS(824),
    [anon_sym_POUND_LPAREN] = ACTIONS(824),
    [sym_shorthand_fn_arg] = ACTIONS(824),
    [anon_sym_CARET] = ACTIONS(826),
    [anon_sym_CARET_COLON] = ACTIONS(824),
    [anon_sym_CARET_DQUOTE] = ACTIONS(824),
  },
  [158] = {
    [sym__anything] = STATE(71),
    [sym__literal] = STATE(71),
    [sym__collection_literal] = STATE(71),
    [sym_boolean] = STATE(71),
    [sym_number] = STATE(71),
    [sym__number] = STATE(27),
    [sym_character] = STATE(71),
    [sym__character] = STATE(28),
    [sym_string] = STATE(71),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(71),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(71),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(71),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(71),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(71),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(71),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(71),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym__hash_map_kv_pair] = STATE(247),
    [sym__hash_map_key] = STATE(71),
    [sym_set] = STATE(71),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(71),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(71),
    [sym_anonymous_fn] = STATE(39),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym__hash_map_repeat1] = STATE(247),
    [aux_sym_metadata_repeat1] = STATE(43),
    [sym_nil] = ACTIONS(123),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(125),
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
    [anon_sym_RBRACE] = ACTIONS(828),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(129),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [159] = {
    [aux_sym_ignore_form_repeat1] = STATE(248),
    [sym_nil] = ACTIONS(461),
    [sym_true] = ACTIONS(461),
    [sym_false] = ACTIONS(461),
    [sym_number_long] = ACTIONS(461),
    [sym_number_double] = ACTIONS(461),
    [anon_sym_BSLASH] = ACTIONS(461),
    [anon_sym_DQUOTE] = ACTIONS(461),
    [anon_sym_POUND_DQUOTE] = ACTIONS(461),
    [anon_sym_SQUOTE] = ACTIONS(461),
    [anon_sym_LPARENquote] = ACTIONS(461),
    [anon_sym_COLON] = ACTIONS(461),
    [anon_sym_COLON_COLON] = ACTIONS(461),
    [anon_sym_DASH_GT] = ACTIONS(461),
    [anon_sym_DASH_GT_GT] = ACTIONS(461),
    [anon_sym_as_DASH_GT] = ACTIONS(461),
    [anon_sym_some_DASH_GT] = ACTIONS(461),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(461),
    [anon_sym_cond_DASH_GT] = ACTIONS(461),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(461),
    [sym__symbol_chars] = ACTIONS(461),
    [anon_sym_LPAREN] = ACTIONS(461),
    [anon_sym_LBRACK] = ACTIONS(461),
    [anon_sym_LBRACE] = ACTIONS(461),
    [anon_sym_RBRACE] = ACTIONS(461),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(461),
    [anon_sym_POUND] = ACTIONS(461),
    [anon_sym_POUND_LBRACE] = ACTIONS(461),
    [anon_sym_SEMI] = ACTIONS(461),
    [anon_sym_POUND_BANG] = ACTIONS(461),
    [anon_sym_POUND_] = ACTIONS(461),
    [anon_sym_] = ACTIONS(830),
    [anon_sym_LPARENcomment] = ACTIONS(461),
    [anon_sym_POUND_LPAREN] = ACTIONS(461),
    [anon_sym_CARET] = ACTIONS(461),
    [anon_sym_CARET_COLON] = ACTIONS(461),
    [anon_sym_CARET_DQUOTE] = ACTIONS(461),
  },
  [160] = {
    [sym__number] = STATE(249),
    [sym__string] = STATE(249),
    [sym__keyword] = STATE(249),
    [sym__unqualified_keyword] = STATE(249),
    [sym_qualified_keyword] = STATE(249),
    [sym__symbol] = STATE(249),
    [sym_threading_macro] = STATE(249),
    [sym_qualified_symbol] = STATE(249),
    [sym__one_form] = STATE(249),
    [sym__paren_sequence] = STATE(249),
    [sym__bracket_sequence] = STATE(249),
    [sym__curly_brace_sequence] = STATE(249),
    [aux_sym_ignore_form_repeat1] = STATE(195),
    [sym_number_long] = ACTIONS(832),
    [sym_number_double] = ACTIONS(832),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_COLON_COLON] = ACTIONS(153),
    [anon_sym_DASH_GT] = ACTIONS(155),
    [anon_sym_DASH_GT_GT] = ACTIONS(155),
    [anon_sym_as_DASH_GT] = ACTIONS(155),
    [anon_sym_some_DASH_GT] = ACTIONS(155),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(155),
    [anon_sym_cond_DASH_GT] = ACTIONS(155),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(155),
    [sym__symbol_chars] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_POUND] = ACTIONS(165),
    [anon_sym_] = ACTIONS(467),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(832),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(834),
    [sym_nil] = ACTIONS(836),
    [sym_true] = ACTIONS(836),
    [sym_false] = ACTIONS(836),
    [sym_number_long] = ACTIONS(836),
    [sym_number_double] = ACTIONS(834),
    [anon_sym_BSLASH] = ACTIONS(834),
    [anon_sym_DQUOTE] = ACTIONS(834),
    [anon_sym_POUND_DQUOTE] = ACTIONS(834),
    [anon_sym_SQUOTE] = ACTIONS(834),
    [anon_sym_LPARENquote] = ACTIONS(834),
    [anon_sym_RPAREN] = ACTIONS(834),
    [anon_sym_COLON] = ACTIONS(836),
    [anon_sym_COLON_COLON] = ACTIONS(834),
    [anon_sym_DASH_GT] = ACTIONS(836),
    [anon_sym_DASH_GT_GT] = ACTIONS(834),
    [anon_sym_as_DASH_GT] = ACTIONS(834),
    [anon_sym_some_DASH_GT] = ACTIONS(836),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(834),
    [anon_sym_cond_DASH_GT] = ACTIONS(836),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(834),
    [sym__symbol_chars] = ACTIONS(836),
    [anon_sym_LPAREN] = ACTIONS(836),
    [anon_sym_LBRACK] = ACTIONS(834),
    [anon_sym_RBRACK] = ACTIONS(834),
    [anon_sym_LBRACE] = ACTIONS(834),
    [anon_sym_RBRACE] = ACTIONS(834),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(834),
    [anon_sym_POUND] = ACTIONS(836),
    [anon_sym_POUND_LBRACE] = ACTIONS(834),
    [anon_sym_SEMI] = ACTIONS(834),
    [anon_sym_POUND_BANG] = ACTIONS(834),
    [anon_sym_POUND_] = ACTIONS(834),
    [anon_sym_LPARENcomment] = ACTIONS(834),
    [anon_sym_POUND_LPAREN] = ACTIONS(834),
    [sym_shorthand_fn_arg] = ACTIONS(834),
    [anon_sym_CARET] = ACTIONS(836),
    [anon_sym_CARET_COLON] = ACTIONS(834),
    [anon_sym_CARET_DQUOTE] = ACTIONS(834),
  },
  [162] = {
    [sym__anything] = STATE(162),
    [sym__literal] = STATE(162),
    [sym__collection_literal] = STATE(162),
    [sym_boolean] = STATE(162),
    [sym_number] = STATE(162),
    [sym__number] = STATE(27),
    [sym_character] = STATE(162),
    [sym__character] = STATE(28),
    [sym_string] = STATE(162),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(162),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(162),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(162),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(162),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(162),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(162),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(162),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym_set] = STATE(162),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(162),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(162),
    [sym_anonymous_fn] = STATE(39),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym_program_repeat1] = STATE(162),
    [aux_sym_metadata_repeat1] = STATE(43),
    [sym_nil] = ACTIONS(838),
    [sym_true] = ACTIONS(540),
    [sym_false] = ACTIONS(540),
    [sym_number_long] = ACTIONS(543),
    [sym_number_double] = ACTIONS(546),
    [anon_sym_BSLASH] = ACTIONS(549),
    [anon_sym_DQUOTE] = ACTIONS(552),
    [anon_sym_POUND_DQUOTE] = ACTIONS(555),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [anon_sym_LPARENquote] = ACTIONS(561),
    [anon_sym_COLON] = ACTIONS(564),
    [anon_sym_COLON_COLON] = ACTIONS(567),
    [anon_sym_DASH_GT] = ACTIONS(570),
    [anon_sym_DASH_GT_GT] = ACTIONS(573),
    [anon_sym_as_DASH_GT] = ACTIONS(573),
    [anon_sym_some_DASH_GT] = ACTIONS(570),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(573),
    [anon_sym_cond_DASH_GT] = ACTIONS(570),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(573),
    [sym__symbol_chars] = ACTIONS(576),
    [anon_sym_LPAREN] = ACTIONS(579),
    [anon_sym_LBRACK] = ACTIONS(582),
    [anon_sym_LBRACE] = ACTIONS(585),
    [anon_sym_RBRACE] = ACTIONS(535),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(588),
    [anon_sym_POUND] = ACTIONS(591),
    [anon_sym_POUND_LBRACE] = ACTIONS(594),
    [anon_sym_SEMI] = ACTIONS(597),
    [anon_sym_POUND_BANG] = ACTIONS(600),
    [anon_sym_POUND_] = ACTIONS(844),
    [anon_sym_LPARENcomment] = ACTIONS(606),
    [anon_sym_POUND_LPAREN] = ACTIONS(609),
    [anon_sym_CARET] = ACTIONS(612),
    [anon_sym_CARET_COLON] = ACTIONS(615),
    [anon_sym_CARET_DQUOTE] = ACTIONS(618),
  },
  [163] = {
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
    [anon_sym_CARET] = ACTIONS(291),
    [anon_sym_CARET_COLON] = ACTIONS(291),
    [anon_sym_CARET_DQUOTE] = ACTIONS(291),
  },
  [164] = {
    [aux_sym__string_repeat1] = STATE(123),
    [anon_sym_DQUOTE] = ACTIONS(847),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(295),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(295),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(315),
    [sym_nil] = ACTIONS(317),
    [sym_true] = ACTIONS(317),
    [sym_false] = ACTIONS(317),
    [sym_number_long] = ACTIONS(317),
    [sym_number_double] = ACTIONS(317),
    [anon_sym_BSLASH] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(317),
    [anon_sym_POUND_DQUOTE] = ACTIONS(317),
    [anon_sym_SQUOTE] = ACTIONS(317),
    [anon_sym_LPARENquote] = ACTIONS(317),
    [anon_sym_RPAREN] = ACTIONS(317),
    [anon_sym_COLON] = ACTIONS(317),
    [anon_sym_COLON_COLON] = ACTIONS(317),
    [anon_sym_DASH_GT] = ACTIONS(317),
    [anon_sym_DASH_GT_GT] = ACTIONS(317),
    [anon_sym_as_DASH_GT] = ACTIONS(317),
    [anon_sym_some_DASH_GT] = ACTIONS(317),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(317),
    [anon_sym_cond_DASH_GT] = ACTIONS(317),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(317),
    [sym__symbol_chars] = ACTIONS(317),
    [anon_sym_LPAREN] = ACTIONS(317),
    [anon_sym_LBRACK] = ACTIONS(317),
    [anon_sym_RBRACK] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [anon_sym_RBRACE] = ACTIONS(317),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(317),
    [anon_sym_POUND] = ACTIONS(317),
    [anon_sym_POUND_LBRACE] = ACTIONS(317),
    [anon_sym_SEMI] = ACTIONS(317),
    [anon_sym_POUND_BANG] = ACTIONS(317),
    [anon_sym_POUND_] = ACTIONS(317),
    [anon_sym_] = ACTIONS(315),
    [anon_sym_LPARENcomment] = ACTIONS(317),
    [anon_sym_POUND_LPAREN] = ACTIONS(317),
    [sym_shorthand_fn_arg] = ACTIONS(317),
    [anon_sym_CARET] = ACTIONS(317),
    [anon_sym_CARET_COLON] = ACTIONS(317),
    [anon_sym_CARET_DQUOTE] = ACTIONS(317),
  },
  [166] = {
    [ts_builtin_sym_end] = ACTIONS(319),
    [sym_nil] = ACTIONS(321),
    [sym_true] = ACTIONS(321),
    [sym_false] = ACTIONS(321),
    [sym_number_long] = ACTIONS(321),
    [sym_number_double] = ACTIONS(321),
    [anon_sym_BSLASH] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(321),
    [anon_sym_POUND_DQUOTE] = ACTIONS(321),
    [anon_sym_SQUOTE] = ACTIONS(321),
    [anon_sym_LPARENquote] = ACTIONS(321),
    [anon_sym_RPAREN] = ACTIONS(321),
    [anon_sym_COLON] = ACTIONS(321),
    [anon_sym_COLON_COLON] = ACTIONS(321),
    [anon_sym_SLASH] = ACTIONS(849),
    [anon_sym_DASH_GT] = ACTIONS(321),
    [anon_sym_DASH_GT_GT] = ACTIONS(321),
    [anon_sym_as_DASH_GT] = ACTIONS(321),
    [anon_sym_some_DASH_GT] = ACTIONS(321),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(321),
    [anon_sym_cond_DASH_GT] = ACTIONS(321),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(321),
    [sym__symbol_chars] = ACTIONS(321),
    [anon_sym_LPAREN] = ACTIONS(321),
    [anon_sym_LBRACK] = ACTIONS(321),
    [anon_sym_RBRACK] = ACTIONS(321),
    [anon_sym_LBRACE] = ACTIONS(321),
    [anon_sym_RBRACE] = ACTIONS(321),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(321),
    [anon_sym_POUND] = ACTIONS(321),
    [anon_sym_POUND_LBRACE] = ACTIONS(321),
    [anon_sym_SEMI] = ACTIONS(321),
    [anon_sym_POUND_BANG] = ACTIONS(321),
    [anon_sym_POUND_] = ACTIONS(321),
    [anon_sym_] = ACTIONS(319),
    [anon_sym_LPARENcomment] = ACTIONS(321),
    [anon_sym_POUND_LPAREN] = ACTIONS(321),
    [sym_shorthand_fn_arg] = ACTIONS(321),
    [anon_sym_CARET] = ACTIONS(321),
    [anon_sym_CARET_COLON] = ACTIONS(321),
    [anon_sym_CARET_DQUOTE] = ACTIONS(321),
  },
  [167] = {
    [sym__symbol_chars] = ACTIONS(851),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(853),
    [sym_nil] = ACTIONS(855),
    [sym_true] = ACTIONS(855),
    [sym_false] = ACTIONS(855),
    [sym_number_long] = ACTIONS(855),
    [sym_number_double] = ACTIONS(855),
    [anon_sym_BSLASH] = ACTIONS(855),
    [anon_sym_DQUOTE] = ACTIONS(855),
    [anon_sym_POUND_DQUOTE] = ACTIONS(855),
    [anon_sym_SQUOTE] = ACTIONS(855),
    [anon_sym_LPARENquote] = ACTIONS(855),
    [anon_sym_RPAREN] = ACTIONS(855),
    [anon_sym_COLON] = ACTIONS(855),
    [anon_sym_COLON_COLON] = ACTIONS(855),
    [anon_sym_DASH_GT] = ACTIONS(855),
    [anon_sym_DASH_GT_GT] = ACTIONS(855),
    [anon_sym_as_DASH_GT] = ACTIONS(855),
    [anon_sym_some_DASH_GT] = ACTIONS(855),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(855),
    [anon_sym_cond_DASH_GT] = ACTIONS(855),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(855),
    [sym__symbol_chars] = ACTIONS(855),
    [anon_sym_LPAREN] = ACTIONS(855),
    [anon_sym_LBRACK] = ACTIONS(855),
    [anon_sym_RBRACK] = ACTIONS(855),
    [anon_sym_LBRACE] = ACTIONS(855),
    [anon_sym_RBRACE] = ACTIONS(855),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(855),
    [anon_sym_POUND] = ACTIONS(855),
    [anon_sym_POUND_LBRACE] = ACTIONS(855),
    [anon_sym_SEMI] = ACTIONS(855),
    [anon_sym_POUND_BANG] = ACTIONS(855),
    [anon_sym_POUND_] = ACTIONS(855),
    [anon_sym_] = ACTIONS(853),
    [anon_sym_LPARENcomment] = ACTIONS(855),
    [anon_sym_POUND_LPAREN] = ACTIONS(855),
    [sym_shorthand_fn_arg] = ACTIONS(855),
    [anon_sym_CARET] = ACTIONS(855),
    [anon_sym_CARET_COLON] = ACTIONS(855),
    [anon_sym_CARET_DQUOTE] = ACTIONS(855),
  },
  [169] = {
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
    [aux_sym_comment_macro_repeat1] = STATE(209),
    [sym_number_long] = ACTIONS(497),
    [sym_number_double] = ACTIONS(497),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(857),
    [anon_sym_COLON] = ACTIONS(175),
    [anon_sym_COLON_COLON] = ACTIONS(177),
    [anon_sym_DASH_GT] = ACTIONS(179),
    [anon_sym_DASH_GT_GT] = ACTIONS(179),
    [anon_sym_as_DASH_GT] = ACTIONS(179),
    [anon_sym_some_DASH_GT] = ACTIONS(179),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(179),
    [anon_sym_cond_DASH_GT] = ACTIONS(179),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(179),
    [sym__symbol_chars] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUND] = ACTIONS(189),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(497),
  },
  [170] = {
    [aux_sym__string_repeat1] = STATE(255),
    [anon_sym_DQUOTE] = ACTIONS(859),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(861),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(861),
  },
  [171] = {
    [sym__keyword_chars] = ACTIONS(863),
  },
  [172] = {
    [sym__keyword_chars] = ACTIONS(865),
  },
  [173] = {
    [sym_number_long] = ACTIONS(95),
    [sym_number_double] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(95),
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
  [174] = {
    [sym_number_long] = ACTIONS(99),
    [sym_number_double] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_COLON_COLON] = ACTIONS(99),
    [anon_sym_SLASH] = ACTIONS(867),
    [anon_sym_DASH_GT] = ACTIONS(99),
    [anon_sym_DASH_GT_GT] = ACTIONS(99),
    [anon_sym_as_DASH_GT] = ACTIONS(99),
    [anon_sym_some_DASH_GT] = ACTIONS(99),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(99),
    [anon_sym_cond_DASH_GT] = ACTIONS(99),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(99),
    [sym__symbol_chars] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_RBRACK] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_POUND] = ACTIONS(99),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(99),
  },
  [175] = {
    [sym__number] = STATE(260),
    [sym__string] = STATE(260),
    [sym__keyword] = STATE(260),
    [sym__unqualified_keyword] = STATE(260),
    [sym_qualified_keyword] = STATE(260),
    [sym__symbol] = STATE(260),
    [sym_threading_macro] = STATE(260),
    [sym_qualified_symbol] = STATE(260),
    [sym__one_form] = STATE(260),
    [sym__paren_sequence] = STATE(260),
    [sym__bracket_sequence] = STATE(260),
    [sym__curly_brace_sequence] = STATE(260),
    [aux_sym_comment_macro_repeat1] = STATE(260),
    [sym_number_long] = ACTIONS(869),
    [sym_number_double] = ACTIONS(869),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(871),
    [anon_sym_COLON] = ACTIONS(175),
    [anon_sym_COLON_COLON] = ACTIONS(177),
    [anon_sym_DASH_GT] = ACTIONS(179),
    [anon_sym_DASH_GT_GT] = ACTIONS(179),
    [anon_sym_as_DASH_GT] = ACTIONS(179),
    [anon_sym_some_DASH_GT] = ACTIONS(179),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(179),
    [anon_sym_cond_DASH_GT] = ACTIONS(179),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(179),
    [sym__symbol_chars] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUND] = ACTIONS(189),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(869),
  },
  [176] = {
    [sym__number] = STATE(262),
    [sym__string] = STATE(262),
    [sym__keyword] = STATE(262),
    [sym__unqualified_keyword] = STATE(262),
    [sym_qualified_keyword] = STATE(262),
    [sym__symbol] = STATE(262),
    [sym_threading_macro] = STATE(262),
    [sym_qualified_symbol] = STATE(262),
    [sym__one_form] = STATE(262),
    [sym__paren_sequence] = STATE(262),
    [sym__bracket_sequence] = STATE(262),
    [sym__curly_brace_sequence] = STATE(262),
    [aux_sym_comment_macro_repeat1] = STATE(262),
    [sym_number_long] = ACTIONS(873),
    [sym_number_double] = ACTIONS(873),
    [anon_sym_DQUOTE] = ACTIONS(415),
    [anon_sym_COLON] = ACTIONS(417),
    [anon_sym_COLON_COLON] = ACTIONS(419),
    [anon_sym_DASH_GT] = ACTIONS(421),
    [anon_sym_DASH_GT_GT] = ACTIONS(421),
    [anon_sym_as_DASH_GT] = ACTIONS(421),
    [anon_sym_some_DASH_GT] = ACTIONS(421),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(421),
    [anon_sym_cond_DASH_GT] = ACTIONS(421),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(421),
    [sym__symbol_chars] = ACTIONS(423),
    [anon_sym_LPAREN] = ACTIONS(425),
    [anon_sym_LBRACK] = ACTIONS(427),
    [anon_sym_RBRACK] = ACTIONS(875),
    [anon_sym_LBRACE] = ACTIONS(431),
    [anon_sym_POUND] = ACTIONS(433),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(873),
  },
  [177] = {
    [ts_builtin_sym_end] = ACTIONS(877),
    [sym_nil] = ACTIONS(879),
    [sym_true] = ACTIONS(879),
    [sym_false] = ACTIONS(879),
    [sym_number_long] = ACTIONS(879),
    [sym_number_double] = ACTIONS(879),
    [anon_sym_BSLASH] = ACTIONS(879),
    [anon_sym_DQUOTE] = ACTIONS(879),
    [anon_sym_POUND_DQUOTE] = ACTIONS(879),
    [anon_sym_SQUOTE] = ACTIONS(879),
    [anon_sym_LPARENquote] = ACTIONS(879),
    [anon_sym_RPAREN] = ACTIONS(879),
    [anon_sym_COLON] = ACTIONS(879),
    [anon_sym_COLON_COLON] = ACTIONS(879),
    [anon_sym_DASH_GT] = ACTIONS(879),
    [anon_sym_DASH_GT_GT] = ACTIONS(879),
    [anon_sym_as_DASH_GT] = ACTIONS(879),
    [anon_sym_some_DASH_GT] = ACTIONS(879),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(879),
    [anon_sym_cond_DASH_GT] = ACTIONS(879),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(879),
    [sym__symbol_chars] = ACTIONS(879),
    [anon_sym_LPAREN] = ACTIONS(879),
    [anon_sym_LBRACK] = ACTIONS(879),
    [anon_sym_RBRACK] = ACTIONS(879),
    [anon_sym_LBRACE] = ACTIONS(879),
    [anon_sym_RBRACE] = ACTIONS(879),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(879),
    [anon_sym_POUND] = ACTIONS(879),
    [anon_sym_POUND_LBRACE] = ACTIONS(879),
    [anon_sym_SEMI] = ACTIONS(879),
    [anon_sym_POUND_BANG] = ACTIONS(879),
    [anon_sym_POUND_] = ACTIONS(879),
    [anon_sym_] = ACTIONS(877),
    [anon_sym_LPARENcomment] = ACTIONS(879),
    [anon_sym_POUND_LPAREN] = ACTIONS(879),
    [sym_shorthand_fn_arg] = ACTIONS(879),
    [anon_sym_CARET] = ACTIONS(879),
    [anon_sym_CARET_COLON] = ACTIONS(879),
    [anon_sym_CARET_DQUOTE] = ACTIONS(879),
  },
  [178] = {
    [sym__number] = STATE(264),
    [sym__string] = STATE(264),
    [sym__keyword] = STATE(264),
    [sym__unqualified_keyword] = STATE(264),
    [sym_qualified_keyword] = STATE(264),
    [sym__symbol] = STATE(264),
    [sym_threading_macro] = STATE(264),
    [sym_qualified_symbol] = STATE(264),
    [sym__one_form] = STATE(264),
    [sym__paren_sequence] = STATE(264),
    [sym__bracket_sequence] = STATE(264),
    [sym__curly_brace_sequence] = STATE(264),
    [aux_sym_comment_macro_repeat1] = STATE(264),
    [sym_number_long] = ACTIONS(881),
    [sym_number_double] = ACTIONS(881),
    [anon_sym_DQUOTE] = ACTIONS(437),
    [anon_sym_COLON] = ACTIONS(439),
    [anon_sym_COLON_COLON] = ACTIONS(441),
    [anon_sym_DASH_GT] = ACTIONS(443),
    [anon_sym_DASH_GT_GT] = ACTIONS(443),
    [anon_sym_as_DASH_GT] = ACTIONS(443),
    [anon_sym_some_DASH_GT] = ACTIONS(443),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(443),
    [anon_sym_cond_DASH_GT] = ACTIONS(443),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(443),
    [sym__symbol_chars] = ACTIONS(445),
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_LBRACE] = ACTIONS(451),
    [anon_sym_RBRACE] = ACTIONS(883),
    [anon_sym_POUND] = ACTIONS(455),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(881),
  },
  [179] = {
    [anon_sym_LBRACE] = ACTIONS(885),
  },
  [180] = {
    [sym__number] = STATE(267),
    [sym__string] = STATE(267),
    [sym__keyword] = STATE(267),
    [sym__unqualified_keyword] = STATE(267),
    [sym_qualified_keyword] = STATE(267),
    [sym__symbol] = STATE(267),
    [sym_threading_macro] = STATE(267),
    [sym_qualified_symbol] = STATE(267),
    [sym__one_form] = STATE(267),
    [sym__paren_sequence] = STATE(267),
    [sym__bracket_sequence] = STATE(267),
    [sym__curly_brace_sequence] = STATE(267),
    [aux_sym_comment_macro_repeat1] = STATE(267),
    [sym_number_long] = ACTIONS(887),
    [sym_number_double] = ACTIONS(887),
    [anon_sym_DQUOTE] = ACTIONS(415),
    [anon_sym_COLON] = ACTIONS(417),
    [anon_sym_COLON_COLON] = ACTIONS(419),
    [anon_sym_DASH_GT] = ACTIONS(421),
    [anon_sym_DASH_GT_GT] = ACTIONS(421),
    [anon_sym_as_DASH_GT] = ACTIONS(421),
    [anon_sym_some_DASH_GT] = ACTIONS(421),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(421),
    [anon_sym_cond_DASH_GT] = ACTIONS(421),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(421),
    [sym__symbol_chars] = ACTIONS(423),
    [anon_sym_LPAREN] = ACTIONS(425),
    [anon_sym_LBRACK] = ACTIONS(427),
    [anon_sym_RBRACK] = ACTIONS(889),
    [anon_sym_LBRACE] = ACTIONS(431),
    [anon_sym_POUND] = ACTIONS(433),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(887),
  },
  [181] = {
    [aux_sym__string_repeat1] = STATE(269),
    [anon_sym_DQUOTE] = ACTIONS(891),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(893),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(893),
  },
  [182] = {
    [sym__keyword_chars] = ACTIONS(895),
  },
  [183] = {
    [sym__keyword_chars] = ACTIONS(897),
  },
  [184] = {
    [sym_number_long] = ACTIONS(95),
    [sym_number_double] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(95),
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
  [185] = {
    [sym_number_long] = ACTIONS(99),
    [sym_number_double] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_COLON_COLON] = ACTIONS(99),
    [anon_sym_SLASH] = ACTIONS(899),
    [anon_sym_DASH_GT] = ACTIONS(99),
    [anon_sym_DASH_GT_GT] = ACTIONS(99),
    [anon_sym_as_DASH_GT] = ACTIONS(99),
    [anon_sym_some_DASH_GT] = ACTIONS(99),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(99),
    [anon_sym_cond_DASH_GT] = ACTIONS(99),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(99),
    [sym__symbol_chars] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(99),
    [anon_sym_POUND] = ACTIONS(99),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(99),
  },
  [186] = {
    [sym__number] = STATE(274),
    [sym__string] = STATE(274),
    [sym__keyword] = STATE(274),
    [sym__unqualified_keyword] = STATE(274),
    [sym_qualified_keyword] = STATE(274),
    [sym__symbol] = STATE(274),
    [sym_threading_macro] = STATE(274),
    [sym_qualified_symbol] = STATE(274),
    [sym__one_form] = STATE(274),
    [sym__paren_sequence] = STATE(274),
    [sym__bracket_sequence] = STATE(274),
    [sym__curly_brace_sequence] = STATE(274),
    [aux_sym_comment_macro_repeat1] = STATE(274),
    [sym_number_long] = ACTIONS(901),
    [sym_number_double] = ACTIONS(901),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(903),
    [anon_sym_COLON] = ACTIONS(175),
    [anon_sym_COLON_COLON] = ACTIONS(177),
    [anon_sym_DASH_GT] = ACTIONS(179),
    [anon_sym_DASH_GT_GT] = ACTIONS(179),
    [anon_sym_as_DASH_GT] = ACTIONS(179),
    [anon_sym_some_DASH_GT] = ACTIONS(179),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(179),
    [anon_sym_cond_DASH_GT] = ACTIONS(179),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(179),
    [sym__symbol_chars] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUND] = ACTIONS(189),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(901),
  },
  [187] = {
    [sym__number] = STATE(276),
    [sym__string] = STATE(276),
    [sym__keyword] = STATE(276),
    [sym__unqualified_keyword] = STATE(276),
    [sym_qualified_keyword] = STATE(276),
    [sym__symbol] = STATE(276),
    [sym_threading_macro] = STATE(276),
    [sym_qualified_symbol] = STATE(276),
    [sym__one_form] = STATE(276),
    [sym__paren_sequence] = STATE(276),
    [sym__bracket_sequence] = STATE(276),
    [sym__curly_brace_sequence] = STATE(276),
    [aux_sym_comment_macro_repeat1] = STATE(276),
    [sym_number_long] = ACTIONS(905),
    [sym_number_double] = ACTIONS(905),
    [anon_sym_DQUOTE] = ACTIONS(415),
    [anon_sym_COLON] = ACTIONS(417),
    [anon_sym_COLON_COLON] = ACTIONS(419),
    [anon_sym_DASH_GT] = ACTIONS(421),
    [anon_sym_DASH_GT_GT] = ACTIONS(421),
    [anon_sym_as_DASH_GT] = ACTIONS(421),
    [anon_sym_some_DASH_GT] = ACTIONS(421),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(421),
    [anon_sym_cond_DASH_GT] = ACTIONS(421),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(421),
    [sym__symbol_chars] = ACTIONS(423),
    [anon_sym_LPAREN] = ACTIONS(425),
    [anon_sym_LBRACK] = ACTIONS(427),
    [anon_sym_RBRACK] = ACTIONS(907),
    [anon_sym_LBRACE] = ACTIONS(431),
    [anon_sym_POUND] = ACTIONS(433),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(905),
  },
  [188] = {
    [sym__number] = STATE(278),
    [sym__string] = STATE(278),
    [sym__keyword] = STATE(278),
    [sym__unqualified_keyword] = STATE(278),
    [sym_qualified_keyword] = STATE(278),
    [sym__symbol] = STATE(278),
    [sym_threading_macro] = STATE(278),
    [sym_qualified_symbol] = STATE(278),
    [sym__one_form] = STATE(278),
    [sym__paren_sequence] = STATE(278),
    [sym__bracket_sequence] = STATE(278),
    [sym__curly_brace_sequence] = STATE(278),
    [aux_sym_comment_macro_repeat1] = STATE(278),
    [sym_number_long] = ACTIONS(909),
    [sym_number_double] = ACTIONS(909),
    [anon_sym_DQUOTE] = ACTIONS(437),
    [anon_sym_COLON] = ACTIONS(439),
    [anon_sym_COLON_COLON] = ACTIONS(441),
    [anon_sym_DASH_GT] = ACTIONS(443),
    [anon_sym_DASH_GT_GT] = ACTIONS(443),
    [anon_sym_as_DASH_GT] = ACTIONS(443),
    [anon_sym_some_DASH_GT] = ACTIONS(443),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(443),
    [anon_sym_cond_DASH_GT] = ACTIONS(443),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(443),
    [sym__symbol_chars] = ACTIONS(445),
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_LBRACE] = ACTIONS(451),
    [anon_sym_RBRACE] = ACTIONS(911),
    [anon_sym_POUND] = ACTIONS(455),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(909),
  },
  [189] = {
    [ts_builtin_sym_end] = ACTIONS(913),
    [sym_nil] = ACTIONS(915),
    [sym_true] = ACTIONS(915),
    [sym_false] = ACTIONS(915),
    [sym_number_long] = ACTIONS(915),
    [sym_number_double] = ACTIONS(915),
    [anon_sym_BSLASH] = ACTIONS(915),
    [anon_sym_DQUOTE] = ACTIONS(915),
    [anon_sym_POUND_DQUOTE] = ACTIONS(915),
    [anon_sym_SQUOTE] = ACTIONS(915),
    [anon_sym_LPARENquote] = ACTIONS(915),
    [anon_sym_RPAREN] = ACTIONS(915),
    [anon_sym_COLON] = ACTIONS(915),
    [anon_sym_COLON_COLON] = ACTIONS(915),
    [anon_sym_DASH_GT] = ACTIONS(915),
    [anon_sym_DASH_GT_GT] = ACTIONS(915),
    [anon_sym_as_DASH_GT] = ACTIONS(915),
    [anon_sym_some_DASH_GT] = ACTIONS(915),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(915),
    [anon_sym_cond_DASH_GT] = ACTIONS(915),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(915),
    [sym__symbol_chars] = ACTIONS(915),
    [anon_sym_LPAREN] = ACTIONS(915),
    [anon_sym_LBRACK] = ACTIONS(915),
    [anon_sym_RBRACK] = ACTIONS(915),
    [anon_sym_LBRACE] = ACTIONS(915),
    [anon_sym_RBRACE] = ACTIONS(915),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(915),
    [anon_sym_POUND] = ACTIONS(915),
    [anon_sym_POUND_LBRACE] = ACTIONS(915),
    [anon_sym_SEMI] = ACTIONS(915),
    [anon_sym_POUND_BANG] = ACTIONS(915),
    [anon_sym_POUND_] = ACTIONS(915),
    [anon_sym_] = ACTIONS(913),
    [anon_sym_LPARENcomment] = ACTIONS(915),
    [anon_sym_POUND_LPAREN] = ACTIONS(915),
    [sym_shorthand_fn_arg] = ACTIONS(915),
    [anon_sym_CARET] = ACTIONS(915),
    [anon_sym_CARET_COLON] = ACTIONS(915),
    [anon_sym_CARET_DQUOTE] = ACTIONS(915),
  },
  [190] = {
    [anon_sym_LBRACE] = ACTIONS(917),
  },
  [191] = {
    [sym__number] = STATE(281),
    [sym__string] = STATE(281),
    [sym__keyword] = STATE(281),
    [sym__unqualified_keyword] = STATE(281),
    [sym_qualified_keyword] = STATE(281),
    [sym__symbol] = STATE(281),
    [sym_threading_macro] = STATE(281),
    [sym_qualified_symbol] = STATE(281),
    [sym__one_form] = STATE(281),
    [sym__paren_sequence] = STATE(281),
    [sym__bracket_sequence] = STATE(281),
    [sym__curly_brace_sequence] = STATE(281),
    [aux_sym_comment_macro_repeat1] = STATE(281),
    [sym_number_long] = ACTIONS(919),
    [sym_number_double] = ACTIONS(919),
    [anon_sym_DQUOTE] = ACTIONS(437),
    [anon_sym_COLON] = ACTIONS(439),
    [anon_sym_COLON_COLON] = ACTIONS(441),
    [anon_sym_DASH_GT] = ACTIONS(443),
    [anon_sym_DASH_GT_GT] = ACTIONS(443),
    [anon_sym_as_DASH_GT] = ACTIONS(443),
    [anon_sym_some_DASH_GT] = ACTIONS(443),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(443),
    [anon_sym_cond_DASH_GT] = ACTIONS(443),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(443),
    [sym__symbol_chars] = ACTIONS(445),
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_LBRACE] = ACTIONS(451),
    [anon_sym_RBRACE] = ACTIONS(921),
    [anon_sym_POUND] = ACTIONS(455),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(919),
  },
  [192] = {
    [sym__number] = STATE(282),
    [sym__string] = STATE(282),
    [sym__keyword] = STATE(282),
    [sym__unqualified_keyword] = STATE(282),
    [sym_qualified_keyword] = STATE(282),
    [sym__symbol] = STATE(282),
    [sym_threading_macro] = STATE(282),
    [sym_qualified_symbol] = STATE(282),
    [sym__one_form] = STATE(282),
    [sym__paren_sequence] = STATE(282),
    [sym__bracket_sequence] = STATE(282),
    [sym__curly_brace_sequence] = STATE(282),
    [aux_sym_comment_macro_repeat1] = STATE(282),
    [sym_number_long] = ACTIONS(923),
    [sym_number_double] = ACTIONS(923),
    [anon_sym_DQUOTE] = ACTIONS(437),
    [anon_sym_COLON] = ACTIONS(439),
    [anon_sym_COLON_COLON] = ACTIONS(441),
    [anon_sym_DASH_GT] = ACTIONS(443),
    [anon_sym_DASH_GT_GT] = ACTIONS(443),
    [anon_sym_as_DASH_GT] = ACTIONS(443),
    [anon_sym_some_DASH_GT] = ACTIONS(443),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(443),
    [anon_sym_cond_DASH_GT] = ACTIONS(443),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(443),
    [sym__symbol_chars] = ACTIONS(445),
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_LBRACE] = ACTIONS(451),
    [anon_sym_RBRACE] = ACTIONS(921),
    [anon_sym_POUND] = ACTIONS(455),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(923),
  },
  [193] = {
    [aux_sym_ignore_form_repeat1] = STATE(283),
    [ts_builtin_sym_end] = ACTIONS(925),
    [sym_nil] = ACTIONS(927),
    [sym_true] = ACTIONS(927),
    [sym_false] = ACTIONS(927),
    [sym_number_long] = ACTIONS(927),
    [sym_number_double] = ACTIONS(927),
    [anon_sym_BSLASH] = ACTIONS(927),
    [anon_sym_DQUOTE] = ACTIONS(927),
    [anon_sym_POUND_DQUOTE] = ACTIONS(927),
    [anon_sym_SQUOTE] = ACTIONS(927),
    [anon_sym_LPARENquote] = ACTIONS(927),
    [anon_sym_COLON] = ACTIONS(927),
    [anon_sym_COLON_COLON] = ACTIONS(927),
    [anon_sym_DASH_GT] = ACTIONS(927),
    [anon_sym_DASH_GT_GT] = ACTIONS(927),
    [anon_sym_as_DASH_GT] = ACTIONS(927),
    [anon_sym_some_DASH_GT] = ACTIONS(927),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(927),
    [anon_sym_cond_DASH_GT] = ACTIONS(927),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(927),
    [sym__symbol_chars] = ACTIONS(927),
    [anon_sym_LPAREN] = ACTIONS(927),
    [anon_sym_LBRACK] = ACTIONS(927),
    [anon_sym_LBRACE] = ACTIONS(927),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(927),
    [anon_sym_POUND] = ACTIONS(927),
    [anon_sym_POUND_LBRACE] = ACTIONS(927),
    [anon_sym_SEMI] = ACTIONS(927),
    [anon_sym_POUND_BANG] = ACTIONS(927),
    [anon_sym_POUND_] = ACTIONS(927),
    [anon_sym_] = ACTIONS(929),
    [anon_sym_LPARENcomment] = ACTIONS(927),
    [anon_sym_POUND_LPAREN] = ACTIONS(927),
    [anon_sym_CARET] = ACTIONS(927),
    [anon_sym_CARET_COLON] = ACTIONS(927),
    [anon_sym_CARET_DQUOTE] = ACTIONS(927),
  },
  [194] = {
    [aux_sym_ignore_form_repeat1] = STATE(284),
    [ts_builtin_sym_end] = ACTIONS(925),
    [sym_nil] = ACTIONS(927),
    [sym_true] = ACTIONS(927),
    [sym_false] = ACTIONS(927),
    [sym_number_long] = ACTIONS(927),
    [sym_number_double] = ACTIONS(927),
    [anon_sym_BSLASH] = ACTIONS(927),
    [anon_sym_DQUOTE] = ACTIONS(927),
    [anon_sym_POUND_DQUOTE] = ACTIONS(927),
    [anon_sym_SQUOTE] = ACTIONS(927),
    [anon_sym_LPARENquote] = ACTIONS(927),
    [anon_sym_COLON] = ACTIONS(927),
    [anon_sym_COLON_COLON] = ACTIONS(927),
    [anon_sym_DASH_GT] = ACTIONS(927),
    [anon_sym_DASH_GT_GT] = ACTIONS(927),
    [anon_sym_as_DASH_GT] = ACTIONS(927),
    [anon_sym_some_DASH_GT] = ACTIONS(927),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(927),
    [anon_sym_cond_DASH_GT] = ACTIONS(927),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(927),
    [sym__symbol_chars] = ACTIONS(927),
    [anon_sym_LPAREN] = ACTIONS(927),
    [anon_sym_LBRACK] = ACTIONS(927),
    [anon_sym_LBRACE] = ACTIONS(927),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(927),
    [anon_sym_POUND] = ACTIONS(927),
    [anon_sym_POUND_LBRACE] = ACTIONS(927),
    [anon_sym_SEMI] = ACTIONS(927),
    [anon_sym_POUND_BANG] = ACTIONS(927),
    [anon_sym_POUND_] = ACTIONS(927),
    [anon_sym_] = ACTIONS(931),
    [anon_sym_LPARENcomment] = ACTIONS(927),
    [anon_sym_POUND_LPAREN] = ACTIONS(927),
    [anon_sym_CARET] = ACTIONS(927),
    [anon_sym_CARET_COLON] = ACTIONS(927),
    [anon_sym_CARET_DQUOTE] = ACTIONS(927),
  },
  [195] = {
    [aux_sym_ignore_form_repeat1] = STATE(195),
    [sym_number_long] = ACTIONS(933),
    [sym_number_double] = ACTIONS(933),
    [anon_sym_DQUOTE] = ACTIONS(933),
    [anon_sym_COLON] = ACTIONS(933),
    [anon_sym_COLON_COLON] = ACTIONS(933),
    [anon_sym_DASH_GT] = ACTIONS(933),
    [anon_sym_DASH_GT_GT] = ACTIONS(933),
    [anon_sym_as_DASH_GT] = ACTIONS(933),
    [anon_sym_some_DASH_GT] = ACTIONS(933),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(933),
    [anon_sym_cond_DASH_GT] = ACTIONS(933),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(933),
    [sym__symbol_chars] = ACTIONS(933),
    [anon_sym_LPAREN] = ACTIONS(933),
    [anon_sym_LBRACK] = ACTIONS(933),
    [anon_sym_LBRACE] = ACTIONS(933),
    [anon_sym_POUND] = ACTIONS(933),
    [anon_sym_] = ACTIONS(935),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(933),
  },
  [196] = {
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
  [197] = {
    [aux_sym__string_repeat1] = STATE(123),
    [anon_sym_DQUOTE] = ACTIONS(938),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(295),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(295),
  },
  [198] = {
    [sym_number_long] = ACTIONS(317),
    [sym_number_double] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(317),
    [anon_sym_RPAREN] = ACTIONS(317),
    [anon_sym_COLON] = ACTIONS(317),
    [anon_sym_COLON_COLON] = ACTIONS(317),
    [anon_sym_DASH_GT] = ACTIONS(317),
    [anon_sym_DASH_GT_GT] = ACTIONS(317),
    [anon_sym_as_DASH_GT] = ACTIONS(317),
    [anon_sym_some_DASH_GT] = ACTIONS(317),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(317),
    [anon_sym_cond_DASH_GT] = ACTIONS(317),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(317),
    [sym__symbol_chars] = ACTIONS(317),
    [anon_sym_LPAREN] = ACTIONS(317),
    [anon_sym_LBRACK] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [anon_sym_POUND] = ACTIONS(317),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(317),
  },
  [199] = {
    [sym_number_long] = ACTIONS(321),
    [sym_number_double] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(321),
    [anon_sym_RPAREN] = ACTIONS(321),
    [anon_sym_COLON] = ACTIONS(321),
    [anon_sym_COLON_COLON] = ACTIONS(321),
    [anon_sym_SLASH] = ACTIONS(940),
    [anon_sym_DASH_GT] = ACTIONS(321),
    [anon_sym_DASH_GT_GT] = ACTIONS(321),
    [anon_sym_as_DASH_GT] = ACTIONS(321),
    [anon_sym_some_DASH_GT] = ACTIONS(321),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(321),
    [anon_sym_cond_DASH_GT] = ACTIONS(321),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(321),
    [sym__symbol_chars] = ACTIONS(321),
    [anon_sym_LPAREN] = ACTIONS(321),
    [anon_sym_LBRACK] = ACTIONS(321),
    [anon_sym_LBRACE] = ACTIONS(321),
    [anon_sym_POUND] = ACTIONS(321),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(321),
  },
  [200] = {
    [sym__symbol_chars] = ACTIONS(942),
  },
  [201] = {
    [sym_number_long] = ACTIONS(855),
    [sym_number_double] = ACTIONS(855),
    [anon_sym_DQUOTE] = ACTIONS(855),
    [anon_sym_RPAREN] = ACTIONS(855),
    [anon_sym_COLON] = ACTIONS(855),
    [anon_sym_COLON_COLON] = ACTIONS(855),
    [anon_sym_DASH_GT] = ACTIONS(855),
    [anon_sym_DASH_GT_GT] = ACTIONS(855),
    [anon_sym_as_DASH_GT] = ACTIONS(855),
    [anon_sym_some_DASH_GT] = ACTIONS(855),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(855),
    [anon_sym_cond_DASH_GT] = ACTIONS(855),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(855),
    [sym__symbol_chars] = ACTIONS(855),
    [anon_sym_LPAREN] = ACTIONS(855),
    [anon_sym_LBRACK] = ACTIONS(855),
    [anon_sym_LBRACE] = ACTIONS(855),
    [anon_sym_POUND] = ACTIONS(855),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(855),
  },
  [202] = {
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
    [aux_sym_comment_macro_repeat1] = STATE(209),
    [sym_number_long] = ACTIONS(497),
    [sym_number_double] = ACTIONS(497),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(944),
    [anon_sym_COLON] = ACTIONS(175),
    [anon_sym_COLON_COLON] = ACTIONS(177),
    [anon_sym_DASH_GT] = ACTIONS(179),
    [anon_sym_DASH_GT_GT] = ACTIONS(179),
    [anon_sym_as_DASH_GT] = ACTIONS(179),
    [anon_sym_some_DASH_GT] = ACTIONS(179),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(179),
    [anon_sym_cond_DASH_GT] = ACTIONS(179),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(179),
    [sym__symbol_chars] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUND] = ACTIONS(189),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(497),
  },
  [203] = {
    [sym_number_long] = ACTIONS(879),
    [sym_number_double] = ACTIONS(879),
    [anon_sym_DQUOTE] = ACTIONS(879),
    [anon_sym_RPAREN] = ACTIONS(879),
    [anon_sym_COLON] = ACTIONS(879),
    [anon_sym_COLON_COLON] = ACTIONS(879),
    [anon_sym_DASH_GT] = ACTIONS(879),
    [anon_sym_DASH_GT_GT] = ACTIONS(879),
    [anon_sym_as_DASH_GT] = ACTIONS(879),
    [anon_sym_some_DASH_GT] = ACTIONS(879),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(879),
    [anon_sym_cond_DASH_GT] = ACTIONS(879),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(879),
    [sym__symbol_chars] = ACTIONS(879),
    [anon_sym_LPAREN] = ACTIONS(879),
    [anon_sym_LBRACK] = ACTIONS(879),
    [anon_sym_LBRACE] = ACTIONS(879),
    [anon_sym_POUND] = ACTIONS(879),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(879),
  },
  [204] = {
    [sym__number] = STATE(267),
    [sym__string] = STATE(267),
    [sym__keyword] = STATE(267),
    [sym__unqualified_keyword] = STATE(267),
    [sym_qualified_keyword] = STATE(267),
    [sym__symbol] = STATE(267),
    [sym_threading_macro] = STATE(267),
    [sym_qualified_symbol] = STATE(267),
    [sym__one_form] = STATE(267),
    [sym__paren_sequence] = STATE(267),
    [sym__bracket_sequence] = STATE(267),
    [sym__curly_brace_sequence] = STATE(267),
    [aux_sym_comment_macro_repeat1] = STATE(267),
    [sym_number_long] = ACTIONS(887),
    [sym_number_double] = ACTIONS(887),
    [anon_sym_DQUOTE] = ACTIONS(415),
    [anon_sym_COLON] = ACTIONS(417),
    [anon_sym_COLON_COLON] = ACTIONS(419),
    [anon_sym_DASH_GT] = ACTIONS(421),
    [anon_sym_DASH_GT_GT] = ACTIONS(421),
    [anon_sym_as_DASH_GT] = ACTIONS(421),
    [anon_sym_some_DASH_GT] = ACTIONS(421),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(421),
    [anon_sym_cond_DASH_GT] = ACTIONS(421),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(421),
    [sym__symbol_chars] = ACTIONS(423),
    [anon_sym_LPAREN] = ACTIONS(425),
    [anon_sym_LBRACK] = ACTIONS(427),
    [anon_sym_RBRACK] = ACTIONS(946),
    [anon_sym_LBRACE] = ACTIONS(431),
    [anon_sym_POUND] = ACTIONS(433),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(887),
  },
  [205] = {
    [sym_number_long] = ACTIONS(915),
    [sym_number_double] = ACTIONS(915),
    [anon_sym_DQUOTE] = ACTIONS(915),
    [anon_sym_RPAREN] = ACTIONS(915),
    [anon_sym_COLON] = ACTIONS(915),
    [anon_sym_COLON_COLON] = ACTIONS(915),
    [anon_sym_DASH_GT] = ACTIONS(915),
    [anon_sym_DASH_GT_GT] = ACTIONS(915),
    [anon_sym_as_DASH_GT] = ACTIONS(915),
    [anon_sym_some_DASH_GT] = ACTIONS(915),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(915),
    [anon_sym_cond_DASH_GT] = ACTIONS(915),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(915),
    [sym__symbol_chars] = ACTIONS(915),
    [anon_sym_LPAREN] = ACTIONS(915),
    [anon_sym_LBRACK] = ACTIONS(915),
    [anon_sym_LBRACE] = ACTIONS(915),
    [anon_sym_POUND] = ACTIONS(915),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(915),
  },
  [206] = {
    [sym__number] = STATE(281),
    [sym__string] = STATE(281),
    [sym__keyword] = STATE(281),
    [sym__unqualified_keyword] = STATE(281),
    [sym_qualified_keyword] = STATE(281),
    [sym__symbol] = STATE(281),
    [sym_threading_macro] = STATE(281),
    [sym_qualified_symbol] = STATE(281),
    [sym__one_form] = STATE(281),
    [sym__paren_sequence] = STATE(281),
    [sym__bracket_sequence] = STATE(281),
    [sym__curly_brace_sequence] = STATE(281),
    [aux_sym_comment_macro_repeat1] = STATE(281),
    [sym_number_long] = ACTIONS(919),
    [sym_number_double] = ACTIONS(919),
    [anon_sym_DQUOTE] = ACTIONS(437),
    [anon_sym_COLON] = ACTIONS(439),
    [anon_sym_COLON_COLON] = ACTIONS(441),
    [anon_sym_DASH_GT] = ACTIONS(443),
    [anon_sym_DASH_GT_GT] = ACTIONS(443),
    [anon_sym_as_DASH_GT] = ACTIONS(443),
    [anon_sym_some_DASH_GT] = ACTIONS(443),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(443),
    [anon_sym_cond_DASH_GT] = ACTIONS(443),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(443),
    [sym__symbol_chars] = ACTIONS(445),
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_LBRACE] = ACTIONS(451),
    [anon_sym_RBRACE] = ACTIONS(948),
    [anon_sym_POUND] = ACTIONS(455),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(919),
  },
  [207] = {
    [sym__number] = STATE(291),
    [sym__string] = STATE(291),
    [sym__keyword] = STATE(291),
    [sym__unqualified_keyword] = STATE(291),
    [sym_qualified_keyword] = STATE(291),
    [sym__symbol] = STATE(291),
    [sym_threading_macro] = STATE(291),
    [sym_qualified_symbol] = STATE(291),
    [sym__one_form] = STATE(291),
    [sym__paren_sequence] = STATE(291),
    [sym__bracket_sequence] = STATE(291),
    [sym__curly_brace_sequence] = STATE(291),
    [aux_sym_comment_macro_repeat1] = STATE(291),
    [sym_number_long] = ACTIONS(950),
    [sym_number_double] = ACTIONS(950),
    [anon_sym_DQUOTE] = ACTIONS(437),
    [anon_sym_COLON] = ACTIONS(439),
    [anon_sym_COLON_COLON] = ACTIONS(441),
    [anon_sym_DASH_GT] = ACTIONS(443),
    [anon_sym_DASH_GT_GT] = ACTIONS(443),
    [anon_sym_as_DASH_GT] = ACTIONS(443),
    [anon_sym_some_DASH_GT] = ACTIONS(443),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(443),
    [anon_sym_cond_DASH_GT] = ACTIONS(443),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(443),
    [sym__symbol_chars] = ACTIONS(445),
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_LBRACE] = ACTIONS(451),
    [anon_sym_RBRACE] = ACTIONS(948),
    [anon_sym_POUND] = ACTIONS(455),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(950),
  },
  [208] = {
    [ts_builtin_sym_end] = ACTIONS(952),
    [sym_nil] = ACTIONS(954),
    [sym_true] = ACTIONS(954),
    [sym_false] = ACTIONS(954),
    [sym_number_long] = ACTIONS(954),
    [sym_number_double] = ACTIONS(952),
    [anon_sym_BSLASH] = ACTIONS(952),
    [anon_sym_DQUOTE] = ACTIONS(952),
    [anon_sym_POUND_DQUOTE] = ACTIONS(952),
    [anon_sym_SQUOTE] = ACTIONS(952),
    [anon_sym_LPARENquote] = ACTIONS(952),
    [anon_sym_RPAREN] = ACTIONS(952),
    [anon_sym_COLON] = ACTIONS(954),
    [anon_sym_COLON_COLON] = ACTIONS(952),
    [anon_sym_DASH_GT] = ACTIONS(954),
    [anon_sym_DASH_GT_GT] = ACTIONS(952),
    [anon_sym_as_DASH_GT] = ACTIONS(952),
    [anon_sym_some_DASH_GT] = ACTIONS(954),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(952),
    [anon_sym_cond_DASH_GT] = ACTIONS(954),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(952),
    [sym__symbol_chars] = ACTIONS(954),
    [anon_sym_LPAREN] = ACTIONS(954),
    [anon_sym_LBRACK] = ACTIONS(952),
    [anon_sym_RBRACK] = ACTIONS(952),
    [anon_sym_LBRACE] = ACTIONS(952),
    [anon_sym_RBRACE] = ACTIONS(952),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(952),
    [anon_sym_POUND] = ACTIONS(954),
    [anon_sym_POUND_LBRACE] = ACTIONS(952),
    [anon_sym_SEMI] = ACTIONS(952),
    [anon_sym_POUND_BANG] = ACTIONS(952),
    [anon_sym_POUND_] = ACTIONS(952),
    [anon_sym_LPARENcomment] = ACTIONS(952),
    [anon_sym_POUND_LPAREN] = ACTIONS(952),
    [sym_shorthand_fn_arg] = ACTIONS(952),
    [anon_sym_CARET] = ACTIONS(954),
    [anon_sym_CARET_COLON] = ACTIONS(952),
    [anon_sym_CARET_DQUOTE] = ACTIONS(952),
  },
  [209] = {
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
    [aux_sym_comment_macro_repeat1] = STATE(209),
    [sym_number_long] = ACTIONS(956),
    [sym_number_double] = ACTIONS(956),
    [anon_sym_DQUOTE] = ACTIONS(959),
    [anon_sym_RPAREN] = ACTIONS(962),
    [anon_sym_COLON] = ACTIONS(964),
    [anon_sym_COLON_COLON] = ACTIONS(967),
    [anon_sym_DASH_GT] = ACTIONS(970),
    [anon_sym_DASH_GT_GT] = ACTIONS(970),
    [anon_sym_as_DASH_GT] = ACTIONS(970),
    [anon_sym_some_DASH_GT] = ACTIONS(970),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(970),
    [anon_sym_cond_DASH_GT] = ACTIONS(970),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(970),
    [sym__symbol_chars] = ACTIONS(973),
    [anon_sym_LPAREN] = ACTIONS(976),
    [anon_sym_LBRACK] = ACTIONS(979),
    [anon_sym_LBRACE] = ACTIONS(982),
    [anon_sym_POUND] = ACTIONS(985),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(956),
  },
  [210] = {
    [aux_sym_ignore_form_repeat1] = STATE(292),
    [sym_nil] = ACTIONS(461),
    [sym_true] = ACTIONS(461),
    [sym_false] = ACTIONS(461),
    [sym_number_long] = ACTIONS(461),
    [sym_number_double] = ACTIONS(461),
    [anon_sym_BSLASH] = ACTIONS(461),
    [anon_sym_DQUOTE] = ACTIONS(461),
    [anon_sym_POUND_DQUOTE] = ACTIONS(461),
    [anon_sym_SQUOTE] = ACTIONS(461),
    [anon_sym_LPARENquote] = ACTIONS(461),
    [anon_sym_RPAREN] = ACTIONS(461),
    [anon_sym_COLON] = ACTIONS(461),
    [anon_sym_COLON_COLON] = ACTIONS(461),
    [anon_sym_DASH_GT] = ACTIONS(461),
    [anon_sym_DASH_GT_GT] = ACTIONS(461),
    [anon_sym_as_DASH_GT] = ACTIONS(461),
    [anon_sym_some_DASH_GT] = ACTIONS(461),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(461),
    [anon_sym_cond_DASH_GT] = ACTIONS(461),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(461),
    [sym__symbol_chars] = ACTIONS(461),
    [anon_sym_LPAREN] = ACTIONS(461),
    [anon_sym_LBRACK] = ACTIONS(461),
    [anon_sym_LBRACE] = ACTIONS(461),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(461),
    [anon_sym_POUND] = ACTIONS(461),
    [anon_sym_POUND_LBRACE] = ACTIONS(461),
    [anon_sym_SEMI] = ACTIONS(461),
    [anon_sym_POUND_BANG] = ACTIONS(461),
    [anon_sym_POUND_] = ACTIONS(461),
    [anon_sym_] = ACTIONS(988),
    [anon_sym_LPARENcomment] = ACTIONS(461),
    [anon_sym_POUND_LPAREN] = ACTIONS(461),
    [sym_shorthand_fn_arg] = ACTIONS(461),
    [anon_sym_CARET] = ACTIONS(461),
    [anon_sym_CARET_COLON] = ACTIONS(461),
    [anon_sym_CARET_DQUOTE] = ACTIONS(461),
  },
  [211] = {
    [sym__number] = STATE(293),
    [sym__string] = STATE(293),
    [sym__keyword] = STATE(293),
    [sym__unqualified_keyword] = STATE(293),
    [sym_qualified_keyword] = STATE(293),
    [sym__symbol] = STATE(293),
    [sym_threading_macro] = STATE(293),
    [sym_qualified_symbol] = STATE(293),
    [sym__one_form] = STATE(293),
    [sym__paren_sequence] = STATE(293),
    [sym__bracket_sequence] = STATE(293),
    [sym__curly_brace_sequence] = STATE(293),
    [aux_sym_ignore_form_repeat1] = STATE(195),
    [sym_number_long] = ACTIONS(990),
    [sym_number_double] = ACTIONS(990),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_COLON_COLON] = ACTIONS(153),
    [anon_sym_DASH_GT] = ACTIONS(155),
    [anon_sym_DASH_GT_GT] = ACTIONS(155),
    [anon_sym_as_DASH_GT] = ACTIONS(155),
    [anon_sym_some_DASH_GT] = ACTIONS(155),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(155),
    [anon_sym_cond_DASH_GT] = ACTIONS(155),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(155),
    [sym__symbol_chars] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_POUND] = ACTIONS(165),
    [anon_sym_] = ACTIONS(467),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(990),
  },
  [212] = {
    [ts_builtin_sym_end] = ACTIONS(992),
    [sym_nil] = ACTIONS(994),
    [sym_true] = ACTIONS(994),
    [sym_false] = ACTIONS(994),
    [sym_number_long] = ACTIONS(994),
    [sym_number_double] = ACTIONS(992),
    [anon_sym_BSLASH] = ACTIONS(992),
    [anon_sym_DQUOTE] = ACTIONS(992),
    [anon_sym_POUND_DQUOTE] = ACTIONS(992),
    [anon_sym_SQUOTE] = ACTIONS(992),
    [anon_sym_LPARENquote] = ACTIONS(992),
    [anon_sym_RPAREN] = ACTIONS(992),
    [anon_sym_COLON] = ACTIONS(994),
    [anon_sym_COLON_COLON] = ACTIONS(992),
    [anon_sym_DASH_GT] = ACTIONS(994),
    [anon_sym_DASH_GT_GT] = ACTIONS(992),
    [anon_sym_as_DASH_GT] = ACTIONS(992),
    [anon_sym_some_DASH_GT] = ACTIONS(994),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(992),
    [anon_sym_cond_DASH_GT] = ACTIONS(994),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(992),
    [sym__symbol_chars] = ACTIONS(994),
    [anon_sym_LPAREN] = ACTIONS(994),
    [anon_sym_LBRACK] = ACTIONS(992),
    [anon_sym_RBRACK] = ACTIONS(992),
    [anon_sym_LBRACE] = ACTIONS(992),
    [anon_sym_RBRACE] = ACTIONS(992),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(992),
    [anon_sym_POUND] = ACTIONS(994),
    [anon_sym_POUND_LBRACE] = ACTIONS(992),
    [anon_sym_SEMI] = ACTIONS(992),
    [anon_sym_POUND_BANG] = ACTIONS(992),
    [anon_sym_POUND_] = ACTIONS(992),
    [anon_sym_LPARENcomment] = ACTIONS(992),
    [anon_sym_POUND_LPAREN] = ACTIONS(992),
    [sym_shorthand_fn_arg] = ACTIONS(992),
    [anon_sym_CARET] = ACTIONS(994),
    [anon_sym_CARET_COLON] = ACTIONS(992),
    [anon_sym_CARET_DQUOTE] = ACTIONS(992),
  },
  [213] = {
    [sym__anything] = STATE(213),
    [sym__literal] = STATE(213),
    [sym__collection_literal] = STATE(213),
    [sym_boolean] = STATE(213),
    [sym_number] = STATE(213),
    [sym__number] = STATE(27),
    [sym_character] = STATE(213),
    [sym__character] = STATE(28),
    [sym_string] = STATE(213),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(213),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(213),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(213),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(213),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(213),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(213),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(213),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym_set] = STATE(213),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(213),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(213),
    [sym_anonymous_fn] = STATE(39),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym_shorthand_fn_repeat1] = STATE(213),
    [aux_sym_metadata_repeat1] = STATE(43),
    [sym_nil] = ACTIONS(996),
    [sym_true] = ACTIONS(999),
    [sym_false] = ACTIONS(999),
    [sym_number_long] = ACTIONS(1002),
    [sym_number_double] = ACTIONS(1005),
    [anon_sym_BSLASH] = ACTIONS(1008),
    [anon_sym_DQUOTE] = ACTIONS(1011),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1014),
    [anon_sym_SQUOTE] = ACTIONS(1017),
    [anon_sym_LPARENquote] = ACTIONS(1020),
    [anon_sym_RPAREN] = ACTIONS(1023),
    [anon_sym_COLON] = ACTIONS(1025),
    [anon_sym_COLON_COLON] = ACTIONS(1028),
    [anon_sym_DASH_GT] = ACTIONS(1031),
    [anon_sym_DASH_GT_GT] = ACTIONS(1034),
    [anon_sym_as_DASH_GT] = ACTIONS(1034),
    [anon_sym_some_DASH_GT] = ACTIONS(1031),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1034),
    [anon_sym_cond_DASH_GT] = ACTIONS(1031),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1034),
    [sym__symbol_chars] = ACTIONS(1037),
    [anon_sym_LPAREN] = ACTIONS(1040),
    [anon_sym_LBRACK] = ACTIONS(1043),
    [anon_sym_LBRACE] = ACTIONS(1046),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1049),
    [anon_sym_POUND] = ACTIONS(1052),
    [anon_sym_POUND_LBRACE] = ACTIONS(1055),
    [anon_sym_SEMI] = ACTIONS(1058),
    [anon_sym_POUND_BANG] = ACTIONS(1061),
    [anon_sym_POUND_] = ACTIONS(1064),
    [anon_sym_LPARENcomment] = ACTIONS(1067),
    [anon_sym_POUND_LPAREN] = ACTIONS(1070),
    [sym_shorthand_fn_arg] = ACTIONS(1073),
    [anon_sym_CARET] = ACTIONS(1076),
    [anon_sym_CARET_COLON] = ACTIONS(1079),
    [anon_sym_CARET_DQUOTE] = ACTIONS(1082),
  },
  [214] = {
    [anon_sym_DASH_GT] = ACTIONS(361),
    [anon_sym_DASH_GT_GT] = ACTIONS(359),
    [anon_sym_as_DASH_GT] = ACTIONS(359),
    [anon_sym_some_DASH_GT] = ACTIONS(361),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(359),
    [anon_sym_cond_DASH_GT] = ACTIONS(361),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(359),
    [sym__symbol_chars] = ACTIONS(361),
    [anon_sym_LPAREN] = ACTIONS(359),
    [anon_sym_LBRACK] = ACTIONS(359),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(359),
    [anon_sym_POUND] = ACTIONS(361),
    [anon_sym_POUND_LBRACE] = ACTIONS(359),
  },
  [215] = {
    [sym__anything] = STATE(71),
    [sym__literal] = STATE(71),
    [sym__collection_literal] = STATE(71),
    [sym_boolean] = STATE(71),
    [sym_number] = STATE(71),
    [sym__number] = STATE(27),
    [sym_character] = STATE(71),
    [sym__character] = STATE(28),
    [sym_string] = STATE(71),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(71),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(71),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(71),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(71),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(71),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(71),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(71),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym__hash_map_kv_pair] = STATE(156),
    [sym__hash_map_key] = STATE(71),
    [sym_set] = STATE(71),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(71),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(71),
    [sym_anonymous_fn] = STATE(39),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym__hash_map_repeat1] = STATE(156),
    [aux_sym_metadata_repeat1] = STATE(43),
    [sym_nil] = ACTIONS(123),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(125),
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
    [anon_sym_RBRACE] = ACTIONS(1085),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(129),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [216] = {
    [anon_sym_DASH_GT] = ACTIONS(373),
    [anon_sym_DASH_GT_GT] = ACTIONS(371),
    [anon_sym_as_DASH_GT] = ACTIONS(371),
    [anon_sym_some_DASH_GT] = ACTIONS(373),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(371),
    [anon_sym_cond_DASH_GT] = ACTIONS(373),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(371),
    [sym__symbol_chars] = ACTIONS(373),
    [anon_sym_LPAREN] = ACTIONS(371),
    [anon_sym_LBRACK] = ACTIONS(371),
    [anon_sym_LBRACE] = ACTIONS(371),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(371),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LBRACE] = ACTIONS(371),
  },
  [217] = {
    [sym__anything] = STATE(71),
    [sym__literal] = STATE(71),
    [sym__collection_literal] = STATE(71),
    [sym_boolean] = STATE(71),
    [sym_number] = STATE(71),
    [sym__number] = STATE(27),
    [sym_character] = STATE(71),
    [sym__character] = STATE(28),
    [sym_string] = STATE(71),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(71),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(71),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(71),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(71),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(71),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(71),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(71),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym__hash_map_kv_pair] = STATE(156),
    [sym__hash_map_key] = STATE(71),
    [sym_set] = STATE(71),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(71),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(71),
    [sym_anonymous_fn] = STATE(39),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym__hash_map_repeat1] = STATE(156),
    [aux_sym_metadata_repeat1] = STATE(43),
    [sym_nil] = ACTIONS(123),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(125),
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
    [anon_sym_RBRACE] = ACTIONS(1087),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(129),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [218] = {
    [anon_sym_LBRACE] = ACTIONS(1089),
  },
  [219] = {
    [anon_sym_DASH_GT] = ACTIONS(1091),
    [anon_sym_DASH_GT_GT] = ACTIONS(1093),
    [anon_sym_as_DASH_GT] = ACTIONS(1093),
    [anon_sym_some_DASH_GT] = ACTIONS(1091),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1093),
    [anon_sym_cond_DASH_GT] = ACTIONS(1091),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1093),
    [sym__symbol_chars] = ACTIONS(1091),
    [anon_sym_LPAREN] = ACTIONS(1093),
    [anon_sym_LBRACK] = ACTIONS(1093),
    [anon_sym_LBRACE] = ACTIONS(1093),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1093),
    [anon_sym_POUND] = ACTIONS(1091),
    [anon_sym_POUND_LBRACE] = ACTIONS(1093),
    [anon_sym_CARET] = ACTIONS(1091),
    [anon_sym_CARET_COLON] = ACTIONS(1093),
    [anon_sym_CARET_DQUOTE] = ACTIONS(1093),
  },
  [220] = {
    [sym__hex_char] = ACTIONS(1095),
  },
  [221] = {
    [aux_sym_ignore_form_repeat1] = STATE(298),
    [anon_sym_RPAREN] = ACTIONS(927),
    [anon_sym_] = ACTIONS(1097),
  },
  [222] = {
    [aux_sym_ignore_form_repeat1] = STATE(299),
    [anon_sym_RPAREN] = ACTIONS(927),
    [anon_sym_] = ACTIONS(1099),
  },
  [223] = {
    [ts_builtin_sym_end] = ACTIONS(1101),
    [sym_nil] = ACTIONS(1103),
    [sym_true] = ACTIONS(1103),
    [sym_false] = ACTIONS(1103),
    [sym_number_long] = ACTIONS(1103),
    [sym_number_double] = ACTIONS(1101),
    [anon_sym_BSLASH] = ACTIONS(1101),
    [anon_sym_DQUOTE] = ACTIONS(1101),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1101),
    [anon_sym_SQUOTE] = ACTIONS(1101),
    [anon_sym_LPARENquote] = ACTIONS(1101),
    [anon_sym_RPAREN] = ACTIONS(1101),
    [anon_sym_COLON] = ACTIONS(1103),
    [anon_sym_COLON_COLON] = ACTIONS(1101),
    [anon_sym_DASH_GT] = ACTIONS(1103),
    [anon_sym_DASH_GT_GT] = ACTIONS(1101),
    [anon_sym_as_DASH_GT] = ACTIONS(1101),
    [anon_sym_some_DASH_GT] = ACTIONS(1103),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1101),
    [anon_sym_cond_DASH_GT] = ACTIONS(1103),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1101),
    [sym__symbol_chars] = ACTIONS(1103),
    [anon_sym_LPAREN] = ACTIONS(1103),
    [anon_sym_LBRACK] = ACTIONS(1101),
    [anon_sym_RBRACK] = ACTIONS(1101),
    [anon_sym_LBRACE] = ACTIONS(1101),
    [anon_sym_RBRACE] = ACTIONS(1101),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1101),
    [anon_sym_POUND] = ACTIONS(1103),
    [anon_sym_POUND_LBRACE] = ACTIONS(1101),
    [anon_sym_SEMI] = ACTIONS(1101),
    [anon_sym_POUND_BANG] = ACTIONS(1101),
    [anon_sym_POUND_] = ACTIONS(1101),
    [anon_sym_LPARENcomment] = ACTIONS(1101),
    [anon_sym_POUND_LPAREN] = ACTIONS(1101),
    [sym_shorthand_fn_arg] = ACTIONS(1101),
    [anon_sym_CARET] = ACTIONS(1103),
    [anon_sym_CARET_COLON] = ACTIONS(1101),
    [anon_sym_CARET_DQUOTE] = ACTIONS(1101),
  },
  [224] = {
    [aux_sym_ignore_form_repeat1] = STATE(300),
    [sym_nil] = ACTIONS(927),
    [sym_true] = ACTIONS(927),
    [sym_false] = ACTIONS(927),
    [sym_number_long] = ACTIONS(927),
    [sym_number_double] = ACTIONS(927),
    [anon_sym_BSLASH] = ACTIONS(927),
    [anon_sym_DQUOTE] = ACTIONS(927),
    [anon_sym_POUND_DQUOTE] = ACTIONS(927),
    [anon_sym_SQUOTE] = ACTIONS(927),
    [anon_sym_LPARENquote] = ACTIONS(927),
    [anon_sym_RPAREN] = ACTIONS(927),
    [anon_sym_COLON] = ACTIONS(927),
    [anon_sym_COLON_COLON] = ACTIONS(927),
    [anon_sym_DASH_GT] = ACTIONS(927),
    [anon_sym_DASH_GT_GT] = ACTIONS(927),
    [anon_sym_as_DASH_GT] = ACTIONS(927),
    [anon_sym_some_DASH_GT] = ACTIONS(927),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(927),
    [anon_sym_cond_DASH_GT] = ACTIONS(927),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(927),
    [sym__symbol_chars] = ACTIONS(927),
    [anon_sym_LPAREN] = ACTIONS(927),
    [anon_sym_LBRACK] = ACTIONS(927),
    [anon_sym_LBRACE] = ACTIONS(927),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(927),
    [anon_sym_POUND] = ACTIONS(927),
    [anon_sym_POUND_LBRACE] = ACTIONS(927),
    [anon_sym_SEMI] = ACTIONS(927),
    [anon_sym_POUND_BANG] = ACTIONS(927),
    [anon_sym_POUND_] = ACTIONS(927),
    [anon_sym_] = ACTIONS(1105),
    [anon_sym_LPARENcomment] = ACTIONS(927),
    [anon_sym_POUND_LPAREN] = ACTIONS(927),
    [anon_sym_CARET] = ACTIONS(927),
    [anon_sym_CARET_COLON] = ACTIONS(927),
    [anon_sym_CARET_DQUOTE] = ACTIONS(927),
  },
  [225] = {
    [aux_sym_ignore_form_repeat1] = STATE(301),
    [sym_nil] = ACTIONS(927),
    [sym_true] = ACTIONS(927),
    [sym_false] = ACTIONS(927),
    [sym_number_long] = ACTIONS(927),
    [sym_number_double] = ACTIONS(927),
    [anon_sym_BSLASH] = ACTIONS(927),
    [anon_sym_DQUOTE] = ACTIONS(927),
    [anon_sym_POUND_DQUOTE] = ACTIONS(927),
    [anon_sym_SQUOTE] = ACTIONS(927),
    [anon_sym_LPARENquote] = ACTIONS(927),
    [anon_sym_RPAREN] = ACTIONS(927),
    [anon_sym_COLON] = ACTIONS(927),
    [anon_sym_COLON_COLON] = ACTIONS(927),
    [anon_sym_DASH_GT] = ACTIONS(927),
    [anon_sym_DASH_GT_GT] = ACTIONS(927),
    [anon_sym_as_DASH_GT] = ACTIONS(927),
    [anon_sym_some_DASH_GT] = ACTIONS(927),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(927),
    [anon_sym_cond_DASH_GT] = ACTIONS(927),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(927),
    [sym__symbol_chars] = ACTIONS(927),
    [anon_sym_LPAREN] = ACTIONS(927),
    [anon_sym_LBRACK] = ACTIONS(927),
    [anon_sym_LBRACE] = ACTIONS(927),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(927),
    [anon_sym_POUND] = ACTIONS(927),
    [anon_sym_POUND_LBRACE] = ACTIONS(927),
    [anon_sym_SEMI] = ACTIONS(927),
    [anon_sym_POUND_BANG] = ACTIONS(927),
    [anon_sym_POUND_] = ACTIONS(927),
    [anon_sym_] = ACTIONS(1107),
    [anon_sym_LPARENcomment] = ACTIONS(927),
    [anon_sym_POUND_LPAREN] = ACTIONS(927),
    [anon_sym_CARET] = ACTIONS(927),
    [anon_sym_CARET_COLON] = ACTIONS(927),
    [anon_sym_CARET_DQUOTE] = ACTIONS(927),
  },
  [226] = {
    [sym__symbol_chars] = ACTIONS(1109),
  },
  [227] = {
    [anon_sym_RPAREN] = ACTIONS(1111),
  },
  [228] = {
    [ts_builtin_sym_end] = ACTIONS(1113),
    [sym_nil] = ACTIONS(1115),
    [sym_true] = ACTIONS(1115),
    [sym_false] = ACTIONS(1115),
    [sym_number_long] = ACTIONS(1115),
    [sym_number_double] = ACTIONS(1113),
    [anon_sym_BSLASH] = ACTIONS(1113),
    [anon_sym_DQUOTE] = ACTIONS(1113),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1113),
    [anon_sym_SQUOTE] = ACTIONS(1113),
    [anon_sym_LPARENquote] = ACTIONS(1113),
    [anon_sym_RPAREN] = ACTIONS(1113),
    [anon_sym_COLON] = ACTIONS(1115),
    [anon_sym_COLON_COLON] = ACTIONS(1113),
    [anon_sym_DASH_GT] = ACTIONS(1115),
    [anon_sym_DASH_GT_GT] = ACTIONS(1113),
    [anon_sym_as_DASH_GT] = ACTIONS(1113),
    [anon_sym_some_DASH_GT] = ACTIONS(1115),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1113),
    [anon_sym_cond_DASH_GT] = ACTIONS(1115),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1113),
    [sym__symbol_chars] = ACTIONS(1115),
    [anon_sym_LPAREN] = ACTIONS(1115),
    [anon_sym_LBRACK] = ACTIONS(1113),
    [anon_sym_RBRACK] = ACTIONS(1113),
    [anon_sym_LBRACE] = ACTIONS(1113),
    [anon_sym_RBRACE] = ACTIONS(1113),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1113),
    [anon_sym_POUND] = ACTIONS(1115),
    [anon_sym_POUND_LBRACE] = ACTIONS(1113),
    [anon_sym_SEMI] = ACTIONS(1113),
    [anon_sym_POUND_BANG] = ACTIONS(1113),
    [anon_sym_POUND_] = ACTIONS(1113),
    [anon_sym_LPARENcomment] = ACTIONS(1113),
    [anon_sym_POUND_LPAREN] = ACTIONS(1113),
    [sym_shorthand_fn_arg] = ACTIONS(1113),
    [anon_sym_CARET] = ACTIONS(1115),
    [anon_sym_CARET_COLON] = ACTIONS(1113),
    [anon_sym_CARET_DQUOTE] = ACTIONS(1113),
  },
  [229] = {
    [anon_sym_RPAREN] = ACTIONS(1117),
  },
  [230] = {
    [anon_sym_RPAREN] = ACTIONS(1119),
  },
  [231] = {
    [sym__anything] = STATE(147),
    [sym__literal] = STATE(147),
    [sym__collection_literal] = STATE(147),
    [sym_boolean] = STATE(147),
    [sym_number] = STATE(147),
    [sym__number] = STATE(27),
    [sym_character] = STATE(147),
    [sym__character] = STATE(28),
    [sym_string] = STATE(147),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(147),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(147),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(147),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(147),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(147),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(147),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(147),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym_set] = STATE(147),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(147),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(147),
    [sym_anonymous_fn] = STATE(39),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym_program_repeat1] = STATE(147),
    [aux_sym_metadata_repeat1] = STATE(43),
    [sym_nil] = ACTIONS(343),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(1121),
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
    [anon_sym_POUND_] = ACTIONS(109),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [232] = {
    [aux_sym__multi_arity_fn_repeat1] = STATE(232),
    [anon_sym_RPAREN] = ACTIONS(1123),
    [anon_sym_LPAREN] = ACTIONS(1125),
  },
  [233] = {
    [aux_sym__string_repeat1] = STATE(306),
    [anon_sym_DQUOTE] = ACTIONS(1128),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1130),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(1130),
  },
  [234] = {
    [anon_sym_LPAREN] = ACTIONS(1132),
    [anon_sym_LBRACK] = ACTIONS(1132),
    [anon_sym_LBRACE] = ACTIONS(1132),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1132),
    [anon_sym_POUND] = ACTIONS(1134),
  },
  [235] = {
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_LBRACK] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(223),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(223),
    [anon_sym_POUND] = ACTIONS(225),
  },
  [236] = {
    [anon_sym_LPAREN] = ACTIONS(1136),
    [anon_sym_LBRACK] = ACTIONS(1136),
  },
  [237] = {
    [anon_sym_RPAREN] = ACTIONS(1138),
  },
  [238] = {
    [sym_vector] = STATE(138),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(236),
    [sym__hash_map] = STATE(113),
    [sym_namespace_map] = STATE(113),
    [sym__after_the_fn_name] = STATE(308),
    [sym__single_arity_fn] = STATE(308),
    [sym__multi_arity_fn] = STATE(308),
    [sym_params] = STATE(141),
    [sym_attr_map] = STATE(309),
    [aux_sym__multi_arity_fn_repeat1] = STATE(142),
    [anon_sym_LPAREN] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(205),
    [anon_sym_POUND] = ACTIONS(207),
  },
  [239] = {
    [sym_vector] = STATE(138),
    [sym__vector] = STATE(35),
    [sym__after_the_fn_name] = STATE(308),
    [sym__single_arity_fn] = STATE(308),
    [sym__multi_arity_fn] = STATE(308),
    [sym_params] = STATE(141),
    [aux_sym__multi_arity_fn_repeat1] = STATE(142),
    [anon_sym_LPAREN] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(37),
  },
  [240] = {
    [sym_string] = STATE(234),
    [sym__string] = STATE(235),
    [sym_vector] = STATE(138),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(236),
    [sym__hash_map] = STATE(113),
    [sym_namespace_map] = STATE(113),
    [sym__after_the_fn_name] = STATE(308),
    [sym__single_arity_fn] = STATE(308),
    [sym__multi_arity_fn] = STATE(308),
    [sym_params] = STATE(141),
    [sym_docstring] = STATE(310),
    [sym_attr_map] = STATE(309),
    [aux_sym__multi_arity_fn_repeat1] = STATE(142),
    [anon_sym_DQUOTE] = ACTIONS(694),
    [anon_sym_LPAREN] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(205),
    [anon_sym_POUND] = ACTIONS(207),
  },
  [241] = {
    [sym_metadata_shorthand] = STATE(241),
    [aux_sym_metadata_repeat1] = STATE(241),
    [anon_sym_DASH_GT] = ACTIONS(623),
    [anon_sym_DASH_GT_GT] = ACTIONS(621),
    [anon_sym_as_DASH_GT] = ACTIONS(621),
    [anon_sym_some_DASH_GT] = ACTIONS(623),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(621),
    [anon_sym_cond_DASH_GT] = ACTIONS(623),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(621),
    [sym__symbol_chars] = ACTIONS(623),
    [anon_sym_CARET] = ACTIONS(625),
    [anon_sym_CARET_COLON] = ACTIONS(628),
    [anon_sym_CARET_DQUOTE] = ACTIONS(631),
  },
  [242] = {
    [aux_sym_ignore_form_repeat1] = STATE(311),
    [sym_nil] = ACTIONS(927),
    [sym_true] = ACTIONS(927),
    [sym_false] = ACTIONS(927),
    [sym_number_long] = ACTIONS(927),
    [sym_number_double] = ACTIONS(927),
    [anon_sym_BSLASH] = ACTIONS(927),
    [anon_sym_DQUOTE] = ACTIONS(927),
    [anon_sym_POUND_DQUOTE] = ACTIONS(927),
    [anon_sym_SQUOTE] = ACTIONS(927),
    [anon_sym_LPARENquote] = ACTIONS(927),
    [anon_sym_COLON] = ACTIONS(927),
    [anon_sym_COLON_COLON] = ACTIONS(927),
    [anon_sym_DASH_GT] = ACTIONS(927),
    [anon_sym_DASH_GT_GT] = ACTIONS(927),
    [anon_sym_as_DASH_GT] = ACTIONS(927),
    [anon_sym_some_DASH_GT] = ACTIONS(927),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(927),
    [anon_sym_cond_DASH_GT] = ACTIONS(927),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(927),
    [sym__symbol_chars] = ACTIONS(927),
    [anon_sym_LPAREN] = ACTIONS(927),
    [anon_sym_LBRACK] = ACTIONS(927),
    [anon_sym_RBRACK] = ACTIONS(927),
    [anon_sym_LBRACE] = ACTIONS(927),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(927),
    [anon_sym_POUND] = ACTIONS(927),
    [anon_sym_POUND_LBRACE] = ACTIONS(927),
    [anon_sym_SEMI] = ACTIONS(927),
    [anon_sym_POUND_BANG] = ACTIONS(927),
    [anon_sym_POUND_] = ACTIONS(927),
    [anon_sym_] = ACTIONS(1140),
    [anon_sym_LPARENcomment] = ACTIONS(927),
    [anon_sym_POUND_LPAREN] = ACTIONS(927),
    [anon_sym_CARET] = ACTIONS(927),
    [anon_sym_CARET_COLON] = ACTIONS(927),
    [anon_sym_CARET_DQUOTE] = ACTIONS(927),
  },
  [243] = {
    [aux_sym_ignore_form_repeat1] = STATE(312),
    [sym_nil] = ACTIONS(927),
    [sym_true] = ACTIONS(927),
    [sym_false] = ACTIONS(927),
    [sym_number_long] = ACTIONS(927),
    [sym_number_double] = ACTIONS(927),
    [anon_sym_BSLASH] = ACTIONS(927),
    [anon_sym_DQUOTE] = ACTIONS(927),
    [anon_sym_POUND_DQUOTE] = ACTIONS(927),
    [anon_sym_SQUOTE] = ACTIONS(927),
    [anon_sym_LPARENquote] = ACTIONS(927),
    [anon_sym_COLON] = ACTIONS(927),
    [anon_sym_COLON_COLON] = ACTIONS(927),
    [anon_sym_DASH_GT] = ACTIONS(927),
    [anon_sym_DASH_GT_GT] = ACTIONS(927),
    [anon_sym_as_DASH_GT] = ACTIONS(927),
    [anon_sym_some_DASH_GT] = ACTIONS(927),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(927),
    [anon_sym_cond_DASH_GT] = ACTIONS(927),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(927),
    [sym__symbol_chars] = ACTIONS(927),
    [anon_sym_LPAREN] = ACTIONS(927),
    [anon_sym_LBRACK] = ACTIONS(927),
    [anon_sym_RBRACK] = ACTIONS(927),
    [anon_sym_LBRACE] = ACTIONS(927),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(927),
    [anon_sym_POUND] = ACTIONS(927),
    [anon_sym_POUND_LBRACE] = ACTIONS(927),
    [anon_sym_SEMI] = ACTIONS(927),
    [anon_sym_POUND_BANG] = ACTIONS(927),
    [anon_sym_POUND_] = ACTIONS(927),
    [anon_sym_] = ACTIONS(1142),
    [anon_sym_LPARENcomment] = ACTIONS(927),
    [anon_sym_POUND_LPAREN] = ACTIONS(927),
    [anon_sym_CARET] = ACTIONS(927),
    [anon_sym_CARET_COLON] = ACTIONS(927),
    [anon_sym_CARET_DQUOTE] = ACTIONS(927),
  },
  [244] = {
    [aux_sym_ignore_form_repeat1] = STATE(313),
    [sym_nil] = ACTIONS(927),
    [sym_true] = ACTIONS(927),
    [sym_false] = ACTIONS(927),
    [sym_number_long] = ACTIONS(927),
    [sym_number_double] = ACTIONS(927),
    [anon_sym_BSLASH] = ACTIONS(927),
    [anon_sym_DQUOTE] = ACTIONS(927),
    [anon_sym_POUND_DQUOTE] = ACTIONS(927),
    [anon_sym_SQUOTE] = ACTIONS(927),
    [anon_sym_LPARENquote] = ACTIONS(927),
    [anon_sym_COLON] = ACTIONS(927),
    [anon_sym_COLON_COLON] = ACTIONS(927),
    [anon_sym_DASH_GT] = ACTIONS(927),
    [anon_sym_DASH_GT_GT] = ACTIONS(927),
    [anon_sym_as_DASH_GT] = ACTIONS(927),
    [anon_sym_some_DASH_GT] = ACTIONS(927),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(927),
    [anon_sym_cond_DASH_GT] = ACTIONS(927),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(927),
    [sym__symbol_chars] = ACTIONS(927),
    [anon_sym_LPAREN] = ACTIONS(927),
    [anon_sym_LBRACK] = ACTIONS(927),
    [anon_sym_LBRACE] = ACTIONS(927),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(927),
    [anon_sym_POUND] = ACTIONS(927),
    [anon_sym_POUND_LBRACE] = ACTIONS(927),
    [anon_sym_SEMI] = ACTIONS(927),
    [anon_sym_POUND_BANG] = ACTIONS(927),
    [anon_sym_POUND_] = ACTIONS(927),
    [anon_sym_] = ACTIONS(1144),
    [anon_sym_LPARENcomment] = ACTIONS(927),
    [anon_sym_POUND_LPAREN] = ACTIONS(927),
    [anon_sym_CARET] = ACTIONS(927),
    [anon_sym_CARET_COLON] = ACTIONS(927),
    [anon_sym_CARET_DQUOTE] = ACTIONS(927),
  },
  [245] = {
    [aux_sym_ignore_form_repeat1] = STATE(314),
    [sym_nil] = ACTIONS(927),
    [sym_true] = ACTIONS(927),
    [sym_false] = ACTIONS(927),
    [sym_number_long] = ACTIONS(927),
    [sym_number_double] = ACTIONS(927),
    [anon_sym_BSLASH] = ACTIONS(927),
    [anon_sym_DQUOTE] = ACTIONS(927),
    [anon_sym_POUND_DQUOTE] = ACTIONS(927),
    [anon_sym_SQUOTE] = ACTIONS(927),
    [anon_sym_LPARENquote] = ACTIONS(927),
    [anon_sym_COLON] = ACTIONS(927),
    [anon_sym_COLON_COLON] = ACTIONS(927),
    [anon_sym_DASH_GT] = ACTIONS(927),
    [anon_sym_DASH_GT_GT] = ACTIONS(927),
    [anon_sym_as_DASH_GT] = ACTIONS(927),
    [anon_sym_some_DASH_GT] = ACTIONS(927),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(927),
    [anon_sym_cond_DASH_GT] = ACTIONS(927),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(927),
    [sym__symbol_chars] = ACTIONS(927),
    [anon_sym_LPAREN] = ACTIONS(927),
    [anon_sym_LBRACK] = ACTIONS(927),
    [anon_sym_LBRACE] = ACTIONS(927),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(927),
    [anon_sym_POUND] = ACTIONS(927),
    [anon_sym_POUND_LBRACE] = ACTIONS(927),
    [anon_sym_SEMI] = ACTIONS(927),
    [anon_sym_POUND_BANG] = ACTIONS(927),
    [anon_sym_POUND_] = ACTIONS(927),
    [anon_sym_] = ACTIONS(1146),
    [anon_sym_LPARENcomment] = ACTIONS(927),
    [anon_sym_POUND_LPAREN] = ACTIONS(927),
    [anon_sym_CARET] = ACTIONS(927),
    [anon_sym_CARET_COLON] = ACTIONS(927),
    [anon_sym_CARET_DQUOTE] = ACTIONS(927),
  },
  [246] = {
    [ts_builtin_sym_end] = ACTIONS(1148),
    [sym_nil] = ACTIONS(1150),
    [sym_true] = ACTIONS(1150),
    [sym_false] = ACTIONS(1150),
    [sym_number_long] = ACTIONS(1150),
    [sym_number_double] = ACTIONS(1148),
    [anon_sym_BSLASH] = ACTIONS(1148),
    [anon_sym_DQUOTE] = ACTIONS(1148),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1148),
    [anon_sym_SQUOTE] = ACTIONS(1148),
    [anon_sym_LPARENquote] = ACTIONS(1148),
    [anon_sym_RPAREN] = ACTIONS(1148),
    [anon_sym_COLON] = ACTIONS(1150),
    [anon_sym_COLON_COLON] = ACTIONS(1148),
    [anon_sym_DASH_GT] = ACTIONS(1150),
    [anon_sym_DASH_GT_GT] = ACTIONS(1148),
    [anon_sym_as_DASH_GT] = ACTIONS(1148),
    [anon_sym_some_DASH_GT] = ACTIONS(1150),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1148),
    [anon_sym_cond_DASH_GT] = ACTIONS(1150),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1148),
    [sym__symbol_chars] = ACTIONS(1150),
    [anon_sym_LPAREN] = ACTIONS(1150),
    [anon_sym_LBRACK] = ACTIONS(1148),
    [anon_sym_RBRACK] = ACTIONS(1148),
    [anon_sym_LBRACE] = ACTIONS(1148),
    [anon_sym_RBRACE] = ACTIONS(1148),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1148),
    [anon_sym_POUND] = ACTIONS(1150),
    [anon_sym_POUND_LBRACE] = ACTIONS(1148),
    [anon_sym_SEMI] = ACTIONS(1148),
    [anon_sym_POUND_BANG] = ACTIONS(1148),
    [anon_sym_POUND_] = ACTIONS(1148),
    [anon_sym_LPARENcomment] = ACTIONS(1148),
    [anon_sym_POUND_LPAREN] = ACTIONS(1148),
    [sym_shorthand_fn_arg] = ACTIONS(1148),
    [anon_sym_CARET] = ACTIONS(1150),
    [anon_sym_CARET_COLON] = ACTIONS(1148),
    [anon_sym_CARET_DQUOTE] = ACTIONS(1148),
  },
  [247] = {
    [sym__anything] = STATE(71),
    [sym__literal] = STATE(71),
    [sym__collection_literal] = STATE(71),
    [sym_boolean] = STATE(71),
    [sym_number] = STATE(71),
    [sym__number] = STATE(27),
    [sym_character] = STATE(71),
    [sym__character] = STATE(28),
    [sym_string] = STATE(71),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(71),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(71),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(71),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(71),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(71),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(71),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(71),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym__hash_map_kv_pair] = STATE(156),
    [sym__hash_map_key] = STATE(71),
    [sym_set] = STATE(71),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(71),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(71),
    [sym_anonymous_fn] = STATE(39),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym__hash_map_repeat1] = STATE(156),
    [aux_sym_metadata_repeat1] = STATE(43),
    [sym_nil] = ACTIONS(123),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(125),
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
    [anon_sym_RBRACE] = ACTIONS(1152),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(129),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [248] = {
    [aux_sym_ignore_form_repeat1] = STATE(316),
    [sym_nil] = ACTIONS(927),
    [sym_true] = ACTIONS(927),
    [sym_false] = ACTIONS(927),
    [sym_number_long] = ACTIONS(927),
    [sym_number_double] = ACTIONS(927),
    [anon_sym_BSLASH] = ACTIONS(927),
    [anon_sym_DQUOTE] = ACTIONS(927),
    [anon_sym_POUND_DQUOTE] = ACTIONS(927),
    [anon_sym_SQUOTE] = ACTIONS(927),
    [anon_sym_LPARENquote] = ACTIONS(927),
    [anon_sym_COLON] = ACTIONS(927),
    [anon_sym_COLON_COLON] = ACTIONS(927),
    [anon_sym_DASH_GT] = ACTIONS(927),
    [anon_sym_DASH_GT_GT] = ACTIONS(927),
    [anon_sym_as_DASH_GT] = ACTIONS(927),
    [anon_sym_some_DASH_GT] = ACTIONS(927),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(927),
    [anon_sym_cond_DASH_GT] = ACTIONS(927),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(927),
    [sym__symbol_chars] = ACTIONS(927),
    [anon_sym_LPAREN] = ACTIONS(927),
    [anon_sym_LBRACK] = ACTIONS(927),
    [anon_sym_LBRACE] = ACTIONS(927),
    [anon_sym_RBRACE] = ACTIONS(927),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(927),
    [anon_sym_POUND] = ACTIONS(927),
    [anon_sym_POUND_LBRACE] = ACTIONS(927),
    [anon_sym_SEMI] = ACTIONS(927),
    [anon_sym_POUND_BANG] = ACTIONS(927),
    [anon_sym_POUND_] = ACTIONS(927),
    [anon_sym_] = ACTIONS(1154),
    [anon_sym_LPARENcomment] = ACTIONS(927),
    [anon_sym_POUND_LPAREN] = ACTIONS(927),
    [anon_sym_CARET] = ACTIONS(927),
    [anon_sym_CARET_COLON] = ACTIONS(927),
    [anon_sym_CARET_DQUOTE] = ACTIONS(927),
  },
  [249] = {
    [aux_sym_ignore_form_repeat1] = STATE(317),
    [sym_nil] = ACTIONS(927),
    [sym_true] = ACTIONS(927),
    [sym_false] = ACTIONS(927),
    [sym_number_long] = ACTIONS(927),
    [sym_number_double] = ACTIONS(927),
    [anon_sym_BSLASH] = ACTIONS(927),
    [anon_sym_DQUOTE] = ACTIONS(927),
    [anon_sym_POUND_DQUOTE] = ACTIONS(927),
    [anon_sym_SQUOTE] = ACTIONS(927),
    [anon_sym_LPARENquote] = ACTIONS(927),
    [anon_sym_COLON] = ACTIONS(927),
    [anon_sym_COLON_COLON] = ACTIONS(927),
    [anon_sym_DASH_GT] = ACTIONS(927),
    [anon_sym_DASH_GT_GT] = ACTIONS(927),
    [anon_sym_as_DASH_GT] = ACTIONS(927),
    [anon_sym_some_DASH_GT] = ACTIONS(927),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(927),
    [anon_sym_cond_DASH_GT] = ACTIONS(927),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(927),
    [sym__symbol_chars] = ACTIONS(927),
    [anon_sym_LPAREN] = ACTIONS(927),
    [anon_sym_LBRACK] = ACTIONS(927),
    [anon_sym_LBRACE] = ACTIONS(927),
    [anon_sym_RBRACE] = ACTIONS(927),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(927),
    [anon_sym_POUND] = ACTIONS(927),
    [anon_sym_POUND_LBRACE] = ACTIONS(927),
    [anon_sym_SEMI] = ACTIONS(927),
    [anon_sym_POUND_BANG] = ACTIONS(927),
    [anon_sym_POUND_] = ACTIONS(927),
    [anon_sym_] = ACTIONS(1156),
    [anon_sym_LPARENcomment] = ACTIONS(927),
    [anon_sym_POUND_LPAREN] = ACTIONS(927),
    [anon_sym_CARET] = ACTIONS(927),
    [anon_sym_CARET_COLON] = ACTIONS(927),
    [anon_sym_CARET_DQUOTE] = ACTIONS(927),
  },
  [250] = {
    [ts_builtin_sym_end] = ACTIONS(640),
    [sym_nil] = ACTIONS(642),
    [sym_true] = ACTIONS(642),
    [sym_false] = ACTIONS(642),
    [sym_number_long] = ACTIONS(642),
    [sym_number_double] = ACTIONS(642),
    [anon_sym_BSLASH] = ACTIONS(642),
    [anon_sym_DQUOTE] = ACTIONS(642),
    [anon_sym_POUND_DQUOTE] = ACTIONS(642),
    [anon_sym_SQUOTE] = ACTIONS(642),
    [anon_sym_LPARENquote] = ACTIONS(642),
    [anon_sym_RPAREN] = ACTIONS(642),
    [anon_sym_COLON] = ACTIONS(642),
    [anon_sym_COLON_COLON] = ACTIONS(642),
    [anon_sym_DASH_GT] = ACTIONS(642),
    [anon_sym_DASH_GT_GT] = ACTIONS(642),
    [anon_sym_as_DASH_GT] = ACTIONS(642),
    [anon_sym_some_DASH_GT] = ACTIONS(642),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(642),
    [anon_sym_cond_DASH_GT] = ACTIONS(642),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(642),
    [sym__symbol_chars] = ACTIONS(642),
    [anon_sym_LPAREN] = ACTIONS(642),
    [anon_sym_LBRACK] = ACTIONS(642),
    [anon_sym_RBRACK] = ACTIONS(642),
    [anon_sym_LBRACE] = ACTIONS(642),
    [anon_sym_RBRACE] = ACTIONS(642),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(642),
    [anon_sym_POUND] = ACTIONS(642),
    [anon_sym_POUND_LBRACE] = ACTIONS(642),
    [anon_sym_SEMI] = ACTIONS(642),
    [anon_sym_POUND_BANG] = ACTIONS(642),
    [anon_sym_POUND_] = ACTIONS(642),
    [anon_sym_] = ACTIONS(640),
    [anon_sym_LPARENcomment] = ACTIONS(642),
    [anon_sym_POUND_LPAREN] = ACTIONS(642),
    [sym_shorthand_fn_arg] = ACTIONS(642),
    [anon_sym_CARET] = ACTIONS(642),
    [anon_sym_CARET_COLON] = ACTIONS(642),
    [anon_sym_CARET_DQUOTE] = ACTIONS(642),
  },
  [251] = {
    [sym__keyword_chars] = ACTIONS(1158),
  },
  [252] = {
    [ts_builtin_sym_end] = ACTIONS(668),
    [sym_nil] = ACTIONS(670),
    [sym_true] = ACTIONS(670),
    [sym_false] = ACTIONS(670),
    [sym_number_long] = ACTIONS(670),
    [sym_number_double] = ACTIONS(670),
    [anon_sym_BSLASH] = ACTIONS(670),
    [anon_sym_DQUOTE] = ACTIONS(670),
    [anon_sym_POUND_DQUOTE] = ACTIONS(670),
    [anon_sym_SQUOTE] = ACTIONS(670),
    [anon_sym_LPARENquote] = ACTIONS(670),
    [anon_sym_RPAREN] = ACTIONS(670),
    [anon_sym_COLON] = ACTIONS(670),
    [anon_sym_COLON_COLON] = ACTIONS(670),
    [anon_sym_DASH_GT] = ACTIONS(670),
    [anon_sym_DASH_GT_GT] = ACTIONS(670),
    [anon_sym_as_DASH_GT] = ACTIONS(670),
    [anon_sym_some_DASH_GT] = ACTIONS(670),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(670),
    [anon_sym_cond_DASH_GT] = ACTIONS(670),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(670),
    [sym__symbol_chars] = ACTIONS(670),
    [anon_sym_LPAREN] = ACTIONS(670),
    [anon_sym_LBRACK] = ACTIONS(670),
    [anon_sym_RBRACK] = ACTIONS(670),
    [anon_sym_LBRACE] = ACTIONS(670),
    [anon_sym_RBRACE] = ACTIONS(670),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(670),
    [anon_sym_POUND] = ACTIONS(670),
    [anon_sym_POUND_LBRACE] = ACTIONS(670),
    [anon_sym_SEMI] = ACTIONS(670),
    [anon_sym_POUND_BANG] = ACTIONS(670),
    [anon_sym_POUND_] = ACTIONS(670),
    [anon_sym_] = ACTIONS(668),
    [anon_sym_LPARENcomment] = ACTIONS(670),
    [anon_sym_POUND_LPAREN] = ACTIONS(670),
    [sym_shorthand_fn_arg] = ACTIONS(670),
    [anon_sym_CARET] = ACTIONS(670),
    [anon_sym_CARET_COLON] = ACTIONS(670),
    [anon_sym_CARET_DQUOTE] = ACTIONS(670),
  },
  [253] = {
    [ts_builtin_sym_end] = ACTIONS(1160),
    [sym_nil] = ACTIONS(1162),
    [sym_true] = ACTIONS(1162),
    [sym_false] = ACTIONS(1162),
    [sym_number_long] = ACTIONS(1162),
    [sym_number_double] = ACTIONS(1162),
    [anon_sym_BSLASH] = ACTIONS(1162),
    [anon_sym_DQUOTE] = ACTIONS(1162),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1162),
    [anon_sym_SQUOTE] = ACTIONS(1162),
    [anon_sym_LPARENquote] = ACTIONS(1162),
    [anon_sym_RPAREN] = ACTIONS(1162),
    [anon_sym_COLON] = ACTIONS(1162),
    [anon_sym_COLON_COLON] = ACTIONS(1162),
    [anon_sym_DASH_GT] = ACTIONS(1162),
    [anon_sym_DASH_GT_GT] = ACTIONS(1162),
    [anon_sym_as_DASH_GT] = ACTIONS(1162),
    [anon_sym_some_DASH_GT] = ACTIONS(1162),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1162),
    [anon_sym_cond_DASH_GT] = ACTIONS(1162),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1162),
    [sym__symbol_chars] = ACTIONS(1162),
    [anon_sym_LPAREN] = ACTIONS(1162),
    [anon_sym_LBRACK] = ACTIONS(1162),
    [anon_sym_RBRACK] = ACTIONS(1162),
    [anon_sym_LBRACE] = ACTIONS(1162),
    [anon_sym_RBRACE] = ACTIONS(1162),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1162),
    [anon_sym_POUND] = ACTIONS(1162),
    [anon_sym_POUND_LBRACE] = ACTIONS(1162),
    [anon_sym_SEMI] = ACTIONS(1162),
    [anon_sym_POUND_BANG] = ACTIONS(1162),
    [anon_sym_POUND_] = ACTIONS(1162),
    [anon_sym_] = ACTIONS(1160),
    [anon_sym_LPARENcomment] = ACTIONS(1162),
    [anon_sym_POUND_LPAREN] = ACTIONS(1162),
    [sym_shorthand_fn_arg] = ACTIONS(1162),
    [anon_sym_CARET] = ACTIONS(1162),
    [anon_sym_CARET_COLON] = ACTIONS(1162),
    [anon_sym_CARET_DQUOTE] = ACTIONS(1162),
  },
  [254] = {
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
  [255] = {
    [aux_sym__string_repeat1] = STATE(123),
    [anon_sym_DQUOTE] = ACTIONS(1164),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(295),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(295),
  },
  [256] = {
    [sym_number_long] = ACTIONS(317),
    [sym_number_double] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(317),
    [anon_sym_COLON] = ACTIONS(317),
    [anon_sym_COLON_COLON] = ACTIONS(317),
    [anon_sym_DASH_GT] = ACTIONS(317),
    [anon_sym_DASH_GT_GT] = ACTIONS(317),
    [anon_sym_as_DASH_GT] = ACTIONS(317),
    [anon_sym_some_DASH_GT] = ACTIONS(317),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(317),
    [anon_sym_cond_DASH_GT] = ACTIONS(317),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(317),
    [sym__symbol_chars] = ACTIONS(317),
    [anon_sym_LPAREN] = ACTIONS(317),
    [anon_sym_LBRACK] = ACTIONS(317),
    [anon_sym_RBRACK] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [anon_sym_POUND] = ACTIONS(317),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(317),
  },
  [257] = {
    [sym_number_long] = ACTIONS(321),
    [sym_number_double] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(321),
    [anon_sym_COLON] = ACTIONS(321),
    [anon_sym_COLON_COLON] = ACTIONS(321),
    [anon_sym_SLASH] = ACTIONS(1166),
    [anon_sym_DASH_GT] = ACTIONS(321),
    [anon_sym_DASH_GT_GT] = ACTIONS(321),
    [anon_sym_as_DASH_GT] = ACTIONS(321),
    [anon_sym_some_DASH_GT] = ACTIONS(321),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(321),
    [anon_sym_cond_DASH_GT] = ACTIONS(321),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(321),
    [sym__symbol_chars] = ACTIONS(321),
    [anon_sym_LPAREN] = ACTIONS(321),
    [anon_sym_LBRACK] = ACTIONS(321),
    [anon_sym_RBRACK] = ACTIONS(321),
    [anon_sym_LBRACE] = ACTIONS(321),
    [anon_sym_POUND] = ACTIONS(321),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(321),
  },
  [258] = {
    [sym__symbol_chars] = ACTIONS(1168),
  },
  [259] = {
    [sym_number_long] = ACTIONS(855),
    [sym_number_double] = ACTIONS(855),
    [anon_sym_DQUOTE] = ACTIONS(855),
    [anon_sym_COLON] = ACTIONS(855),
    [anon_sym_COLON_COLON] = ACTIONS(855),
    [anon_sym_DASH_GT] = ACTIONS(855),
    [anon_sym_DASH_GT_GT] = ACTIONS(855),
    [anon_sym_as_DASH_GT] = ACTIONS(855),
    [anon_sym_some_DASH_GT] = ACTIONS(855),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(855),
    [anon_sym_cond_DASH_GT] = ACTIONS(855),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(855),
    [sym__symbol_chars] = ACTIONS(855),
    [anon_sym_LPAREN] = ACTIONS(855),
    [anon_sym_LBRACK] = ACTIONS(855),
    [anon_sym_RBRACK] = ACTIONS(855),
    [anon_sym_LBRACE] = ACTIONS(855),
    [anon_sym_POUND] = ACTIONS(855),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(855),
  },
  [260] = {
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
    [aux_sym_comment_macro_repeat1] = STATE(209),
    [sym_number_long] = ACTIONS(497),
    [sym_number_double] = ACTIONS(497),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(1170),
    [anon_sym_COLON] = ACTIONS(175),
    [anon_sym_COLON_COLON] = ACTIONS(177),
    [anon_sym_DASH_GT] = ACTIONS(179),
    [anon_sym_DASH_GT_GT] = ACTIONS(179),
    [anon_sym_as_DASH_GT] = ACTIONS(179),
    [anon_sym_some_DASH_GT] = ACTIONS(179),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(179),
    [anon_sym_cond_DASH_GT] = ACTIONS(179),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(179),
    [sym__symbol_chars] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUND] = ACTIONS(189),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(497),
  },
  [261] = {
    [sym_number_long] = ACTIONS(879),
    [sym_number_double] = ACTIONS(879),
    [anon_sym_DQUOTE] = ACTIONS(879),
    [anon_sym_COLON] = ACTIONS(879),
    [anon_sym_COLON_COLON] = ACTIONS(879),
    [anon_sym_DASH_GT] = ACTIONS(879),
    [anon_sym_DASH_GT_GT] = ACTIONS(879),
    [anon_sym_as_DASH_GT] = ACTIONS(879),
    [anon_sym_some_DASH_GT] = ACTIONS(879),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(879),
    [anon_sym_cond_DASH_GT] = ACTIONS(879),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(879),
    [sym__symbol_chars] = ACTIONS(879),
    [anon_sym_LPAREN] = ACTIONS(879),
    [anon_sym_LBRACK] = ACTIONS(879),
    [anon_sym_RBRACK] = ACTIONS(879),
    [anon_sym_LBRACE] = ACTIONS(879),
    [anon_sym_POUND] = ACTIONS(879),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(879),
  },
  [262] = {
    [sym__number] = STATE(267),
    [sym__string] = STATE(267),
    [sym__keyword] = STATE(267),
    [sym__unqualified_keyword] = STATE(267),
    [sym_qualified_keyword] = STATE(267),
    [sym__symbol] = STATE(267),
    [sym_threading_macro] = STATE(267),
    [sym_qualified_symbol] = STATE(267),
    [sym__one_form] = STATE(267),
    [sym__paren_sequence] = STATE(267),
    [sym__bracket_sequence] = STATE(267),
    [sym__curly_brace_sequence] = STATE(267),
    [aux_sym_comment_macro_repeat1] = STATE(267),
    [sym_number_long] = ACTIONS(887),
    [sym_number_double] = ACTIONS(887),
    [anon_sym_DQUOTE] = ACTIONS(415),
    [anon_sym_COLON] = ACTIONS(417),
    [anon_sym_COLON_COLON] = ACTIONS(419),
    [anon_sym_DASH_GT] = ACTIONS(421),
    [anon_sym_DASH_GT_GT] = ACTIONS(421),
    [anon_sym_as_DASH_GT] = ACTIONS(421),
    [anon_sym_some_DASH_GT] = ACTIONS(421),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(421),
    [anon_sym_cond_DASH_GT] = ACTIONS(421),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(421),
    [sym__symbol_chars] = ACTIONS(423),
    [anon_sym_LPAREN] = ACTIONS(425),
    [anon_sym_LBRACK] = ACTIONS(427),
    [anon_sym_RBRACK] = ACTIONS(1172),
    [anon_sym_LBRACE] = ACTIONS(431),
    [anon_sym_POUND] = ACTIONS(433),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(887),
  },
  [263] = {
    [sym_number_long] = ACTIONS(915),
    [sym_number_double] = ACTIONS(915),
    [anon_sym_DQUOTE] = ACTIONS(915),
    [anon_sym_COLON] = ACTIONS(915),
    [anon_sym_COLON_COLON] = ACTIONS(915),
    [anon_sym_DASH_GT] = ACTIONS(915),
    [anon_sym_DASH_GT_GT] = ACTIONS(915),
    [anon_sym_as_DASH_GT] = ACTIONS(915),
    [anon_sym_some_DASH_GT] = ACTIONS(915),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(915),
    [anon_sym_cond_DASH_GT] = ACTIONS(915),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(915),
    [sym__symbol_chars] = ACTIONS(915),
    [anon_sym_LPAREN] = ACTIONS(915),
    [anon_sym_LBRACK] = ACTIONS(915),
    [anon_sym_RBRACK] = ACTIONS(915),
    [anon_sym_LBRACE] = ACTIONS(915),
    [anon_sym_POUND] = ACTIONS(915),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(915),
  },
  [264] = {
    [sym__number] = STATE(281),
    [sym__string] = STATE(281),
    [sym__keyword] = STATE(281),
    [sym__unqualified_keyword] = STATE(281),
    [sym_qualified_keyword] = STATE(281),
    [sym__symbol] = STATE(281),
    [sym_threading_macro] = STATE(281),
    [sym_qualified_symbol] = STATE(281),
    [sym__one_form] = STATE(281),
    [sym__paren_sequence] = STATE(281),
    [sym__bracket_sequence] = STATE(281),
    [sym__curly_brace_sequence] = STATE(281),
    [aux_sym_comment_macro_repeat1] = STATE(281),
    [sym_number_long] = ACTIONS(919),
    [sym_number_double] = ACTIONS(919),
    [anon_sym_DQUOTE] = ACTIONS(437),
    [anon_sym_COLON] = ACTIONS(439),
    [anon_sym_COLON_COLON] = ACTIONS(441),
    [anon_sym_DASH_GT] = ACTIONS(443),
    [anon_sym_DASH_GT_GT] = ACTIONS(443),
    [anon_sym_as_DASH_GT] = ACTIONS(443),
    [anon_sym_some_DASH_GT] = ACTIONS(443),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(443),
    [anon_sym_cond_DASH_GT] = ACTIONS(443),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(443),
    [sym__symbol_chars] = ACTIONS(445),
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_LBRACE] = ACTIONS(451),
    [anon_sym_RBRACE] = ACTIONS(1174),
    [anon_sym_POUND] = ACTIONS(455),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(919),
  },
  [265] = {
    [sym__number] = STATE(325),
    [sym__string] = STATE(325),
    [sym__keyword] = STATE(325),
    [sym__unqualified_keyword] = STATE(325),
    [sym_qualified_keyword] = STATE(325),
    [sym__symbol] = STATE(325),
    [sym_threading_macro] = STATE(325),
    [sym_qualified_symbol] = STATE(325),
    [sym__one_form] = STATE(325),
    [sym__paren_sequence] = STATE(325),
    [sym__bracket_sequence] = STATE(325),
    [sym__curly_brace_sequence] = STATE(325),
    [aux_sym_comment_macro_repeat1] = STATE(325),
    [sym_number_long] = ACTIONS(1176),
    [sym_number_double] = ACTIONS(1176),
    [anon_sym_DQUOTE] = ACTIONS(437),
    [anon_sym_COLON] = ACTIONS(439),
    [anon_sym_COLON_COLON] = ACTIONS(441),
    [anon_sym_DASH_GT] = ACTIONS(443),
    [anon_sym_DASH_GT_GT] = ACTIONS(443),
    [anon_sym_as_DASH_GT] = ACTIONS(443),
    [anon_sym_some_DASH_GT] = ACTIONS(443),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(443),
    [anon_sym_cond_DASH_GT] = ACTIONS(443),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(443),
    [sym__symbol_chars] = ACTIONS(445),
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_LBRACE] = ACTIONS(451),
    [anon_sym_RBRACE] = ACTIONS(1174),
    [anon_sym_POUND] = ACTIONS(455),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1176),
  },
  [266] = {
    [ts_builtin_sym_end] = ACTIONS(1178),
    [sym_nil] = ACTIONS(1180),
    [sym_true] = ACTIONS(1180),
    [sym_false] = ACTIONS(1180),
    [sym_number_long] = ACTIONS(1180),
    [sym_number_double] = ACTIONS(1180),
    [anon_sym_BSLASH] = ACTIONS(1180),
    [anon_sym_DQUOTE] = ACTIONS(1180),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1180),
    [anon_sym_SQUOTE] = ACTIONS(1180),
    [anon_sym_LPARENquote] = ACTIONS(1180),
    [anon_sym_RPAREN] = ACTIONS(1180),
    [anon_sym_COLON] = ACTIONS(1180),
    [anon_sym_COLON_COLON] = ACTIONS(1180),
    [anon_sym_DASH_GT] = ACTIONS(1180),
    [anon_sym_DASH_GT_GT] = ACTIONS(1180),
    [anon_sym_as_DASH_GT] = ACTIONS(1180),
    [anon_sym_some_DASH_GT] = ACTIONS(1180),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1180),
    [anon_sym_cond_DASH_GT] = ACTIONS(1180),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1180),
    [sym__symbol_chars] = ACTIONS(1180),
    [anon_sym_LPAREN] = ACTIONS(1180),
    [anon_sym_LBRACK] = ACTIONS(1180),
    [anon_sym_RBRACK] = ACTIONS(1180),
    [anon_sym_LBRACE] = ACTIONS(1180),
    [anon_sym_RBRACE] = ACTIONS(1180),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1180),
    [anon_sym_POUND] = ACTIONS(1180),
    [anon_sym_POUND_LBRACE] = ACTIONS(1180),
    [anon_sym_SEMI] = ACTIONS(1180),
    [anon_sym_POUND_BANG] = ACTIONS(1180),
    [anon_sym_POUND_] = ACTIONS(1180),
    [anon_sym_] = ACTIONS(1178),
    [anon_sym_LPARENcomment] = ACTIONS(1180),
    [anon_sym_POUND_LPAREN] = ACTIONS(1180),
    [sym_shorthand_fn_arg] = ACTIONS(1180),
    [anon_sym_CARET] = ACTIONS(1180),
    [anon_sym_CARET_COLON] = ACTIONS(1180),
    [anon_sym_CARET_DQUOTE] = ACTIONS(1180),
  },
  [267] = {
    [sym__number] = STATE(267),
    [sym__string] = STATE(267),
    [sym__keyword] = STATE(267),
    [sym__unqualified_keyword] = STATE(267),
    [sym_qualified_keyword] = STATE(267),
    [sym__symbol] = STATE(267),
    [sym_threading_macro] = STATE(267),
    [sym_qualified_symbol] = STATE(267),
    [sym__one_form] = STATE(267),
    [sym__paren_sequence] = STATE(267),
    [sym__bracket_sequence] = STATE(267),
    [sym__curly_brace_sequence] = STATE(267),
    [aux_sym_comment_macro_repeat1] = STATE(267),
    [sym_number_long] = ACTIONS(1182),
    [sym_number_double] = ACTIONS(1182),
    [anon_sym_DQUOTE] = ACTIONS(1185),
    [anon_sym_COLON] = ACTIONS(1188),
    [anon_sym_COLON_COLON] = ACTIONS(1191),
    [anon_sym_DASH_GT] = ACTIONS(1194),
    [anon_sym_DASH_GT_GT] = ACTIONS(1194),
    [anon_sym_as_DASH_GT] = ACTIONS(1194),
    [anon_sym_some_DASH_GT] = ACTIONS(1194),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1194),
    [anon_sym_cond_DASH_GT] = ACTIONS(1194),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1194),
    [sym__symbol_chars] = ACTIONS(1197),
    [anon_sym_LPAREN] = ACTIONS(1200),
    [anon_sym_LBRACK] = ACTIONS(1203),
    [anon_sym_RBRACK] = ACTIONS(962),
    [anon_sym_LBRACE] = ACTIONS(1206),
    [anon_sym_POUND] = ACTIONS(1209),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1182),
  },
  [268] = {
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
  [269] = {
    [aux_sym__string_repeat1] = STATE(123),
    [anon_sym_DQUOTE] = ACTIONS(1212),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(295),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(295),
  },
  [270] = {
    [sym_number_long] = ACTIONS(317),
    [sym_number_double] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(317),
    [anon_sym_COLON] = ACTIONS(317),
    [anon_sym_COLON_COLON] = ACTIONS(317),
    [anon_sym_DASH_GT] = ACTIONS(317),
    [anon_sym_DASH_GT_GT] = ACTIONS(317),
    [anon_sym_as_DASH_GT] = ACTIONS(317),
    [anon_sym_some_DASH_GT] = ACTIONS(317),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(317),
    [anon_sym_cond_DASH_GT] = ACTIONS(317),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(317),
    [sym__symbol_chars] = ACTIONS(317),
    [anon_sym_LPAREN] = ACTIONS(317),
    [anon_sym_LBRACK] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [anon_sym_RBRACE] = ACTIONS(317),
    [anon_sym_POUND] = ACTIONS(317),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(317),
  },
  [271] = {
    [sym_number_long] = ACTIONS(321),
    [sym_number_double] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(321),
    [anon_sym_COLON] = ACTIONS(321),
    [anon_sym_COLON_COLON] = ACTIONS(321),
    [anon_sym_SLASH] = ACTIONS(1214),
    [anon_sym_DASH_GT] = ACTIONS(321),
    [anon_sym_DASH_GT_GT] = ACTIONS(321),
    [anon_sym_as_DASH_GT] = ACTIONS(321),
    [anon_sym_some_DASH_GT] = ACTIONS(321),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(321),
    [anon_sym_cond_DASH_GT] = ACTIONS(321),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(321),
    [sym__symbol_chars] = ACTIONS(321),
    [anon_sym_LPAREN] = ACTIONS(321),
    [anon_sym_LBRACK] = ACTIONS(321),
    [anon_sym_LBRACE] = ACTIONS(321),
    [anon_sym_RBRACE] = ACTIONS(321),
    [anon_sym_POUND] = ACTIONS(321),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(321),
  },
  [272] = {
    [sym__symbol_chars] = ACTIONS(1216),
  },
  [273] = {
    [sym_number_long] = ACTIONS(855),
    [sym_number_double] = ACTIONS(855),
    [anon_sym_DQUOTE] = ACTIONS(855),
    [anon_sym_COLON] = ACTIONS(855),
    [anon_sym_COLON_COLON] = ACTIONS(855),
    [anon_sym_DASH_GT] = ACTIONS(855),
    [anon_sym_DASH_GT_GT] = ACTIONS(855),
    [anon_sym_as_DASH_GT] = ACTIONS(855),
    [anon_sym_some_DASH_GT] = ACTIONS(855),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(855),
    [anon_sym_cond_DASH_GT] = ACTIONS(855),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(855),
    [sym__symbol_chars] = ACTIONS(855),
    [anon_sym_LPAREN] = ACTIONS(855),
    [anon_sym_LBRACK] = ACTIONS(855),
    [anon_sym_LBRACE] = ACTIONS(855),
    [anon_sym_RBRACE] = ACTIONS(855),
    [anon_sym_POUND] = ACTIONS(855),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(855),
  },
  [274] = {
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
    [aux_sym_comment_macro_repeat1] = STATE(209),
    [sym_number_long] = ACTIONS(497),
    [sym_number_double] = ACTIONS(497),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(1218),
    [anon_sym_COLON] = ACTIONS(175),
    [anon_sym_COLON_COLON] = ACTIONS(177),
    [anon_sym_DASH_GT] = ACTIONS(179),
    [anon_sym_DASH_GT_GT] = ACTIONS(179),
    [anon_sym_as_DASH_GT] = ACTIONS(179),
    [anon_sym_some_DASH_GT] = ACTIONS(179),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(179),
    [anon_sym_cond_DASH_GT] = ACTIONS(179),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(179),
    [sym__symbol_chars] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUND] = ACTIONS(189),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(497),
  },
  [275] = {
    [sym_number_long] = ACTIONS(879),
    [sym_number_double] = ACTIONS(879),
    [anon_sym_DQUOTE] = ACTIONS(879),
    [anon_sym_COLON] = ACTIONS(879),
    [anon_sym_COLON_COLON] = ACTIONS(879),
    [anon_sym_DASH_GT] = ACTIONS(879),
    [anon_sym_DASH_GT_GT] = ACTIONS(879),
    [anon_sym_as_DASH_GT] = ACTIONS(879),
    [anon_sym_some_DASH_GT] = ACTIONS(879),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(879),
    [anon_sym_cond_DASH_GT] = ACTIONS(879),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(879),
    [sym__symbol_chars] = ACTIONS(879),
    [anon_sym_LPAREN] = ACTIONS(879),
    [anon_sym_LBRACK] = ACTIONS(879),
    [anon_sym_LBRACE] = ACTIONS(879),
    [anon_sym_RBRACE] = ACTIONS(879),
    [anon_sym_POUND] = ACTIONS(879),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(879),
  },
  [276] = {
    [sym__number] = STATE(267),
    [sym__string] = STATE(267),
    [sym__keyword] = STATE(267),
    [sym__unqualified_keyword] = STATE(267),
    [sym_qualified_keyword] = STATE(267),
    [sym__symbol] = STATE(267),
    [sym_threading_macro] = STATE(267),
    [sym_qualified_symbol] = STATE(267),
    [sym__one_form] = STATE(267),
    [sym__paren_sequence] = STATE(267),
    [sym__bracket_sequence] = STATE(267),
    [sym__curly_brace_sequence] = STATE(267),
    [aux_sym_comment_macro_repeat1] = STATE(267),
    [sym_number_long] = ACTIONS(887),
    [sym_number_double] = ACTIONS(887),
    [anon_sym_DQUOTE] = ACTIONS(415),
    [anon_sym_COLON] = ACTIONS(417),
    [anon_sym_COLON_COLON] = ACTIONS(419),
    [anon_sym_DASH_GT] = ACTIONS(421),
    [anon_sym_DASH_GT_GT] = ACTIONS(421),
    [anon_sym_as_DASH_GT] = ACTIONS(421),
    [anon_sym_some_DASH_GT] = ACTIONS(421),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(421),
    [anon_sym_cond_DASH_GT] = ACTIONS(421),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(421),
    [sym__symbol_chars] = ACTIONS(423),
    [anon_sym_LPAREN] = ACTIONS(425),
    [anon_sym_LBRACK] = ACTIONS(427),
    [anon_sym_RBRACK] = ACTIONS(1220),
    [anon_sym_LBRACE] = ACTIONS(431),
    [anon_sym_POUND] = ACTIONS(433),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(887),
  },
  [277] = {
    [sym_number_long] = ACTIONS(915),
    [sym_number_double] = ACTIONS(915),
    [anon_sym_DQUOTE] = ACTIONS(915),
    [anon_sym_COLON] = ACTIONS(915),
    [anon_sym_COLON_COLON] = ACTIONS(915),
    [anon_sym_DASH_GT] = ACTIONS(915),
    [anon_sym_DASH_GT_GT] = ACTIONS(915),
    [anon_sym_as_DASH_GT] = ACTIONS(915),
    [anon_sym_some_DASH_GT] = ACTIONS(915),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(915),
    [anon_sym_cond_DASH_GT] = ACTIONS(915),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(915),
    [sym__symbol_chars] = ACTIONS(915),
    [anon_sym_LPAREN] = ACTIONS(915),
    [anon_sym_LBRACK] = ACTIONS(915),
    [anon_sym_LBRACE] = ACTIONS(915),
    [anon_sym_RBRACE] = ACTIONS(915),
    [anon_sym_POUND] = ACTIONS(915),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(915),
  },
  [278] = {
    [sym__number] = STATE(281),
    [sym__string] = STATE(281),
    [sym__keyword] = STATE(281),
    [sym__unqualified_keyword] = STATE(281),
    [sym_qualified_keyword] = STATE(281),
    [sym__symbol] = STATE(281),
    [sym_threading_macro] = STATE(281),
    [sym_qualified_symbol] = STATE(281),
    [sym__one_form] = STATE(281),
    [sym__paren_sequence] = STATE(281),
    [sym__bracket_sequence] = STATE(281),
    [sym__curly_brace_sequence] = STATE(281),
    [aux_sym_comment_macro_repeat1] = STATE(281),
    [sym_number_long] = ACTIONS(919),
    [sym_number_double] = ACTIONS(919),
    [anon_sym_DQUOTE] = ACTIONS(437),
    [anon_sym_COLON] = ACTIONS(439),
    [anon_sym_COLON_COLON] = ACTIONS(441),
    [anon_sym_DASH_GT] = ACTIONS(443),
    [anon_sym_DASH_GT_GT] = ACTIONS(443),
    [anon_sym_as_DASH_GT] = ACTIONS(443),
    [anon_sym_some_DASH_GT] = ACTIONS(443),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(443),
    [anon_sym_cond_DASH_GT] = ACTIONS(443),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(443),
    [sym__symbol_chars] = ACTIONS(445),
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_LBRACE] = ACTIONS(451),
    [anon_sym_RBRACE] = ACTIONS(1222),
    [anon_sym_POUND] = ACTIONS(455),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(919),
  },
  [279] = {
    [sym__number] = STATE(332),
    [sym__string] = STATE(332),
    [sym__keyword] = STATE(332),
    [sym__unqualified_keyword] = STATE(332),
    [sym_qualified_keyword] = STATE(332),
    [sym__symbol] = STATE(332),
    [sym_threading_macro] = STATE(332),
    [sym_qualified_symbol] = STATE(332),
    [sym__one_form] = STATE(332),
    [sym__paren_sequence] = STATE(332),
    [sym__bracket_sequence] = STATE(332),
    [sym__curly_brace_sequence] = STATE(332),
    [aux_sym_comment_macro_repeat1] = STATE(332),
    [sym_number_long] = ACTIONS(1224),
    [sym_number_double] = ACTIONS(1224),
    [anon_sym_DQUOTE] = ACTIONS(437),
    [anon_sym_COLON] = ACTIONS(439),
    [anon_sym_COLON_COLON] = ACTIONS(441),
    [anon_sym_DASH_GT] = ACTIONS(443),
    [anon_sym_DASH_GT_GT] = ACTIONS(443),
    [anon_sym_as_DASH_GT] = ACTIONS(443),
    [anon_sym_some_DASH_GT] = ACTIONS(443),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(443),
    [anon_sym_cond_DASH_GT] = ACTIONS(443),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(443),
    [sym__symbol_chars] = ACTIONS(445),
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_LBRACE] = ACTIONS(451),
    [anon_sym_RBRACE] = ACTIONS(1222),
    [anon_sym_POUND] = ACTIONS(455),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1224),
  },
  [280] = {
    [ts_builtin_sym_end] = ACTIONS(1226),
    [sym_nil] = ACTIONS(1228),
    [sym_true] = ACTIONS(1228),
    [sym_false] = ACTIONS(1228),
    [sym_number_long] = ACTIONS(1228),
    [sym_number_double] = ACTIONS(1228),
    [anon_sym_BSLASH] = ACTIONS(1228),
    [anon_sym_DQUOTE] = ACTIONS(1228),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1228),
    [anon_sym_SQUOTE] = ACTIONS(1228),
    [anon_sym_LPARENquote] = ACTIONS(1228),
    [anon_sym_RPAREN] = ACTIONS(1228),
    [anon_sym_COLON] = ACTIONS(1228),
    [anon_sym_COLON_COLON] = ACTIONS(1228),
    [anon_sym_DASH_GT] = ACTIONS(1228),
    [anon_sym_DASH_GT_GT] = ACTIONS(1228),
    [anon_sym_as_DASH_GT] = ACTIONS(1228),
    [anon_sym_some_DASH_GT] = ACTIONS(1228),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1228),
    [anon_sym_cond_DASH_GT] = ACTIONS(1228),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1228),
    [sym__symbol_chars] = ACTIONS(1228),
    [anon_sym_LPAREN] = ACTIONS(1228),
    [anon_sym_LBRACK] = ACTIONS(1228),
    [anon_sym_RBRACK] = ACTIONS(1228),
    [anon_sym_LBRACE] = ACTIONS(1228),
    [anon_sym_RBRACE] = ACTIONS(1228),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1228),
    [anon_sym_POUND] = ACTIONS(1228),
    [anon_sym_POUND_LBRACE] = ACTIONS(1228),
    [anon_sym_SEMI] = ACTIONS(1228),
    [anon_sym_POUND_BANG] = ACTIONS(1228),
    [anon_sym_POUND_] = ACTIONS(1228),
    [anon_sym_] = ACTIONS(1226),
    [anon_sym_LPARENcomment] = ACTIONS(1228),
    [anon_sym_POUND_LPAREN] = ACTIONS(1228),
    [sym_shorthand_fn_arg] = ACTIONS(1228),
    [anon_sym_CARET] = ACTIONS(1228),
    [anon_sym_CARET_COLON] = ACTIONS(1228),
    [anon_sym_CARET_DQUOTE] = ACTIONS(1228),
  },
  [281] = {
    [sym__number] = STATE(281),
    [sym__string] = STATE(281),
    [sym__keyword] = STATE(281),
    [sym__unqualified_keyword] = STATE(281),
    [sym_qualified_keyword] = STATE(281),
    [sym__symbol] = STATE(281),
    [sym_threading_macro] = STATE(281),
    [sym_qualified_symbol] = STATE(281),
    [sym__one_form] = STATE(281),
    [sym__paren_sequence] = STATE(281),
    [sym__bracket_sequence] = STATE(281),
    [sym__curly_brace_sequence] = STATE(281),
    [aux_sym_comment_macro_repeat1] = STATE(281),
    [sym_number_long] = ACTIONS(1230),
    [sym_number_double] = ACTIONS(1230),
    [anon_sym_DQUOTE] = ACTIONS(1233),
    [anon_sym_COLON] = ACTIONS(1236),
    [anon_sym_COLON_COLON] = ACTIONS(1239),
    [anon_sym_DASH_GT] = ACTIONS(1242),
    [anon_sym_DASH_GT_GT] = ACTIONS(1242),
    [anon_sym_as_DASH_GT] = ACTIONS(1242),
    [anon_sym_some_DASH_GT] = ACTIONS(1242),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1242),
    [anon_sym_cond_DASH_GT] = ACTIONS(1242),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1242),
    [sym__symbol_chars] = ACTIONS(1245),
    [anon_sym_LPAREN] = ACTIONS(1248),
    [anon_sym_LBRACK] = ACTIONS(1251),
    [anon_sym_LBRACE] = ACTIONS(1254),
    [anon_sym_RBRACE] = ACTIONS(962),
    [anon_sym_POUND] = ACTIONS(1257),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1230),
  },
  [282] = {
    [sym__number] = STATE(281),
    [sym__string] = STATE(281),
    [sym__keyword] = STATE(281),
    [sym__unqualified_keyword] = STATE(281),
    [sym_qualified_keyword] = STATE(281),
    [sym__symbol] = STATE(281),
    [sym_threading_macro] = STATE(281),
    [sym_qualified_symbol] = STATE(281),
    [sym__one_form] = STATE(281),
    [sym__paren_sequence] = STATE(281),
    [sym__bracket_sequence] = STATE(281),
    [sym__curly_brace_sequence] = STATE(281),
    [aux_sym_comment_macro_repeat1] = STATE(281),
    [sym_number_long] = ACTIONS(919),
    [sym_number_double] = ACTIONS(919),
    [anon_sym_DQUOTE] = ACTIONS(437),
    [anon_sym_COLON] = ACTIONS(439),
    [anon_sym_COLON_COLON] = ACTIONS(441),
    [anon_sym_DASH_GT] = ACTIONS(443),
    [anon_sym_DASH_GT_GT] = ACTIONS(443),
    [anon_sym_as_DASH_GT] = ACTIONS(443),
    [anon_sym_some_DASH_GT] = ACTIONS(443),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(443),
    [anon_sym_cond_DASH_GT] = ACTIONS(443),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(443),
    [sym__symbol_chars] = ACTIONS(445),
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_LBRACE] = ACTIONS(451),
    [anon_sym_RBRACE] = ACTIONS(1260),
    [anon_sym_POUND] = ACTIONS(455),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(919),
  },
  [283] = {
    [aux_sym_ignore_form_repeat1] = STATE(283),
    [ts_builtin_sym_end] = ACTIONS(1262),
    [sym_nil] = ACTIONS(933),
    [sym_true] = ACTIONS(933),
    [sym_false] = ACTIONS(933),
    [sym_number_long] = ACTIONS(933),
    [sym_number_double] = ACTIONS(933),
    [anon_sym_BSLASH] = ACTIONS(933),
    [anon_sym_DQUOTE] = ACTIONS(933),
    [anon_sym_POUND_DQUOTE] = ACTIONS(933),
    [anon_sym_SQUOTE] = ACTIONS(933),
    [anon_sym_LPARENquote] = ACTIONS(933),
    [anon_sym_COLON] = ACTIONS(933),
    [anon_sym_COLON_COLON] = ACTIONS(933),
    [anon_sym_DASH_GT] = ACTIONS(933),
    [anon_sym_DASH_GT_GT] = ACTIONS(933),
    [anon_sym_as_DASH_GT] = ACTIONS(933),
    [anon_sym_some_DASH_GT] = ACTIONS(933),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(933),
    [anon_sym_cond_DASH_GT] = ACTIONS(933),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(933),
    [sym__symbol_chars] = ACTIONS(933),
    [anon_sym_LPAREN] = ACTIONS(933),
    [anon_sym_LBRACK] = ACTIONS(933),
    [anon_sym_LBRACE] = ACTIONS(933),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(933),
    [anon_sym_POUND] = ACTIONS(933),
    [anon_sym_POUND_LBRACE] = ACTIONS(933),
    [anon_sym_SEMI] = ACTIONS(933),
    [anon_sym_POUND_BANG] = ACTIONS(933),
    [anon_sym_POUND_] = ACTIONS(933),
    [anon_sym_] = ACTIONS(1264),
    [anon_sym_LPARENcomment] = ACTIONS(933),
    [anon_sym_POUND_LPAREN] = ACTIONS(933),
    [anon_sym_CARET] = ACTIONS(933),
    [anon_sym_CARET_COLON] = ACTIONS(933),
    [anon_sym_CARET_DQUOTE] = ACTIONS(933),
  },
  [284] = {
    [aux_sym_ignore_form_repeat1] = STATE(283),
    [ts_builtin_sym_end] = ACTIONS(1267),
    [sym_nil] = ACTIONS(1269),
    [sym_true] = ACTIONS(1269),
    [sym_false] = ACTIONS(1269),
    [sym_number_long] = ACTIONS(1269),
    [sym_number_double] = ACTIONS(1269),
    [anon_sym_BSLASH] = ACTIONS(1269),
    [anon_sym_DQUOTE] = ACTIONS(1269),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1269),
    [anon_sym_SQUOTE] = ACTIONS(1269),
    [anon_sym_LPARENquote] = ACTIONS(1269),
    [anon_sym_COLON] = ACTIONS(1269),
    [anon_sym_COLON_COLON] = ACTIONS(1269),
    [anon_sym_DASH_GT] = ACTIONS(1269),
    [anon_sym_DASH_GT_GT] = ACTIONS(1269),
    [anon_sym_as_DASH_GT] = ACTIONS(1269),
    [anon_sym_some_DASH_GT] = ACTIONS(1269),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1269),
    [anon_sym_cond_DASH_GT] = ACTIONS(1269),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1269),
    [sym__symbol_chars] = ACTIONS(1269),
    [anon_sym_LPAREN] = ACTIONS(1269),
    [anon_sym_LBRACK] = ACTIONS(1269),
    [anon_sym_LBRACE] = ACTIONS(1269),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1269),
    [anon_sym_POUND] = ACTIONS(1269),
    [anon_sym_POUND_LBRACE] = ACTIONS(1269),
    [anon_sym_SEMI] = ACTIONS(1269),
    [anon_sym_POUND_BANG] = ACTIONS(1269),
    [anon_sym_POUND_] = ACTIONS(1269),
    [anon_sym_] = ACTIONS(929),
    [anon_sym_LPARENcomment] = ACTIONS(1269),
    [anon_sym_POUND_LPAREN] = ACTIONS(1269),
    [anon_sym_CARET] = ACTIONS(1269),
    [anon_sym_CARET_COLON] = ACTIONS(1269),
    [anon_sym_CARET_DQUOTE] = ACTIONS(1269),
  },
  [285] = {
    [sym_number_long] = ACTIONS(642),
    [sym_number_double] = ACTIONS(642),
    [anon_sym_DQUOTE] = ACTIONS(642),
    [anon_sym_RPAREN] = ACTIONS(642),
    [anon_sym_COLON] = ACTIONS(642),
    [anon_sym_COLON_COLON] = ACTIONS(642),
    [anon_sym_DASH_GT] = ACTIONS(642),
    [anon_sym_DASH_GT_GT] = ACTIONS(642),
    [anon_sym_as_DASH_GT] = ACTIONS(642),
    [anon_sym_some_DASH_GT] = ACTIONS(642),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(642),
    [anon_sym_cond_DASH_GT] = ACTIONS(642),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(642),
    [sym__symbol_chars] = ACTIONS(642),
    [anon_sym_LPAREN] = ACTIONS(642),
    [anon_sym_LBRACK] = ACTIONS(642),
    [anon_sym_LBRACE] = ACTIONS(642),
    [anon_sym_POUND] = ACTIONS(642),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(642),
  },
  [286] = {
    [sym__keyword_chars] = ACTIONS(1271),
  },
  [287] = {
    [sym_number_long] = ACTIONS(670),
    [sym_number_double] = ACTIONS(670),
    [anon_sym_DQUOTE] = ACTIONS(670),
    [anon_sym_RPAREN] = ACTIONS(670),
    [anon_sym_COLON] = ACTIONS(670),
    [anon_sym_COLON_COLON] = ACTIONS(670),
    [anon_sym_DASH_GT] = ACTIONS(670),
    [anon_sym_DASH_GT_GT] = ACTIONS(670),
    [anon_sym_as_DASH_GT] = ACTIONS(670),
    [anon_sym_some_DASH_GT] = ACTIONS(670),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(670),
    [anon_sym_cond_DASH_GT] = ACTIONS(670),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(670),
    [sym__symbol_chars] = ACTIONS(670),
    [anon_sym_LPAREN] = ACTIONS(670),
    [anon_sym_LBRACK] = ACTIONS(670),
    [anon_sym_LBRACE] = ACTIONS(670),
    [anon_sym_POUND] = ACTIONS(670),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(670),
  },
  [288] = {
    [sym_number_long] = ACTIONS(1162),
    [sym_number_double] = ACTIONS(1162),
    [anon_sym_DQUOTE] = ACTIONS(1162),
    [anon_sym_RPAREN] = ACTIONS(1162),
    [anon_sym_COLON] = ACTIONS(1162),
    [anon_sym_COLON_COLON] = ACTIONS(1162),
    [anon_sym_DASH_GT] = ACTIONS(1162),
    [anon_sym_DASH_GT_GT] = ACTIONS(1162),
    [anon_sym_as_DASH_GT] = ACTIONS(1162),
    [anon_sym_some_DASH_GT] = ACTIONS(1162),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1162),
    [anon_sym_cond_DASH_GT] = ACTIONS(1162),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1162),
    [sym__symbol_chars] = ACTIONS(1162),
    [anon_sym_LPAREN] = ACTIONS(1162),
    [anon_sym_LBRACK] = ACTIONS(1162),
    [anon_sym_LBRACE] = ACTIONS(1162),
    [anon_sym_POUND] = ACTIONS(1162),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1162),
  },
  [289] = {
    [sym_number_long] = ACTIONS(1180),
    [sym_number_double] = ACTIONS(1180),
    [anon_sym_DQUOTE] = ACTIONS(1180),
    [anon_sym_RPAREN] = ACTIONS(1180),
    [anon_sym_COLON] = ACTIONS(1180),
    [anon_sym_COLON_COLON] = ACTIONS(1180),
    [anon_sym_DASH_GT] = ACTIONS(1180),
    [anon_sym_DASH_GT_GT] = ACTIONS(1180),
    [anon_sym_as_DASH_GT] = ACTIONS(1180),
    [anon_sym_some_DASH_GT] = ACTIONS(1180),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1180),
    [anon_sym_cond_DASH_GT] = ACTIONS(1180),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1180),
    [sym__symbol_chars] = ACTIONS(1180),
    [anon_sym_LPAREN] = ACTIONS(1180),
    [anon_sym_LBRACK] = ACTIONS(1180),
    [anon_sym_LBRACE] = ACTIONS(1180),
    [anon_sym_POUND] = ACTIONS(1180),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1180),
  },
  [290] = {
    [sym_number_long] = ACTIONS(1228),
    [sym_number_double] = ACTIONS(1228),
    [anon_sym_DQUOTE] = ACTIONS(1228),
    [anon_sym_RPAREN] = ACTIONS(1228),
    [anon_sym_COLON] = ACTIONS(1228),
    [anon_sym_COLON_COLON] = ACTIONS(1228),
    [anon_sym_DASH_GT] = ACTIONS(1228),
    [anon_sym_DASH_GT_GT] = ACTIONS(1228),
    [anon_sym_as_DASH_GT] = ACTIONS(1228),
    [anon_sym_some_DASH_GT] = ACTIONS(1228),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1228),
    [anon_sym_cond_DASH_GT] = ACTIONS(1228),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1228),
    [sym__symbol_chars] = ACTIONS(1228),
    [anon_sym_LPAREN] = ACTIONS(1228),
    [anon_sym_LBRACK] = ACTIONS(1228),
    [anon_sym_LBRACE] = ACTIONS(1228),
    [anon_sym_POUND] = ACTIONS(1228),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1228),
  },
  [291] = {
    [sym__number] = STATE(281),
    [sym__string] = STATE(281),
    [sym__keyword] = STATE(281),
    [sym__unqualified_keyword] = STATE(281),
    [sym_qualified_keyword] = STATE(281),
    [sym__symbol] = STATE(281),
    [sym_threading_macro] = STATE(281),
    [sym_qualified_symbol] = STATE(281),
    [sym__one_form] = STATE(281),
    [sym__paren_sequence] = STATE(281),
    [sym__bracket_sequence] = STATE(281),
    [sym__curly_brace_sequence] = STATE(281),
    [aux_sym_comment_macro_repeat1] = STATE(281),
    [sym_number_long] = ACTIONS(919),
    [sym_number_double] = ACTIONS(919),
    [anon_sym_DQUOTE] = ACTIONS(437),
    [anon_sym_COLON] = ACTIONS(439),
    [anon_sym_COLON_COLON] = ACTIONS(441),
    [anon_sym_DASH_GT] = ACTIONS(443),
    [anon_sym_DASH_GT_GT] = ACTIONS(443),
    [anon_sym_as_DASH_GT] = ACTIONS(443),
    [anon_sym_some_DASH_GT] = ACTIONS(443),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(443),
    [anon_sym_cond_DASH_GT] = ACTIONS(443),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(443),
    [sym__symbol_chars] = ACTIONS(445),
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_LBRACE] = ACTIONS(451),
    [anon_sym_RBRACE] = ACTIONS(1273),
    [anon_sym_POUND] = ACTIONS(455),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(919),
  },
  [292] = {
    [aux_sym_ignore_form_repeat1] = STATE(336),
    [sym_nil] = ACTIONS(927),
    [sym_true] = ACTIONS(927),
    [sym_false] = ACTIONS(927),
    [sym_number_long] = ACTIONS(927),
    [sym_number_double] = ACTIONS(927),
    [anon_sym_BSLASH] = ACTIONS(927),
    [anon_sym_DQUOTE] = ACTIONS(927),
    [anon_sym_POUND_DQUOTE] = ACTIONS(927),
    [anon_sym_SQUOTE] = ACTIONS(927),
    [anon_sym_LPARENquote] = ACTIONS(927),
    [anon_sym_RPAREN] = ACTIONS(927),
    [anon_sym_COLON] = ACTIONS(927),
    [anon_sym_COLON_COLON] = ACTIONS(927),
    [anon_sym_DASH_GT] = ACTIONS(927),
    [anon_sym_DASH_GT_GT] = ACTIONS(927),
    [anon_sym_as_DASH_GT] = ACTIONS(927),
    [anon_sym_some_DASH_GT] = ACTIONS(927),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(927),
    [anon_sym_cond_DASH_GT] = ACTIONS(927),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(927),
    [sym__symbol_chars] = ACTIONS(927),
    [anon_sym_LPAREN] = ACTIONS(927),
    [anon_sym_LBRACK] = ACTIONS(927),
    [anon_sym_LBRACE] = ACTIONS(927),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(927),
    [anon_sym_POUND] = ACTIONS(927),
    [anon_sym_POUND_LBRACE] = ACTIONS(927),
    [anon_sym_SEMI] = ACTIONS(927),
    [anon_sym_POUND_BANG] = ACTIONS(927),
    [anon_sym_POUND_] = ACTIONS(927),
    [anon_sym_] = ACTIONS(1275),
    [anon_sym_LPARENcomment] = ACTIONS(927),
    [anon_sym_POUND_LPAREN] = ACTIONS(927),
    [sym_shorthand_fn_arg] = ACTIONS(927),
    [anon_sym_CARET] = ACTIONS(927),
    [anon_sym_CARET_COLON] = ACTIONS(927),
    [anon_sym_CARET_DQUOTE] = ACTIONS(927),
  },
  [293] = {
    [aux_sym_ignore_form_repeat1] = STATE(337),
    [sym_nil] = ACTIONS(927),
    [sym_true] = ACTIONS(927),
    [sym_false] = ACTIONS(927),
    [sym_number_long] = ACTIONS(927),
    [sym_number_double] = ACTIONS(927),
    [anon_sym_BSLASH] = ACTIONS(927),
    [anon_sym_DQUOTE] = ACTIONS(927),
    [anon_sym_POUND_DQUOTE] = ACTIONS(927),
    [anon_sym_SQUOTE] = ACTIONS(927),
    [anon_sym_LPARENquote] = ACTIONS(927),
    [anon_sym_RPAREN] = ACTIONS(927),
    [anon_sym_COLON] = ACTIONS(927),
    [anon_sym_COLON_COLON] = ACTIONS(927),
    [anon_sym_DASH_GT] = ACTIONS(927),
    [anon_sym_DASH_GT_GT] = ACTIONS(927),
    [anon_sym_as_DASH_GT] = ACTIONS(927),
    [anon_sym_some_DASH_GT] = ACTIONS(927),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(927),
    [anon_sym_cond_DASH_GT] = ACTIONS(927),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(927),
    [sym__symbol_chars] = ACTIONS(927),
    [anon_sym_LPAREN] = ACTIONS(927),
    [anon_sym_LBRACK] = ACTIONS(927),
    [anon_sym_LBRACE] = ACTIONS(927),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(927),
    [anon_sym_POUND] = ACTIONS(927),
    [anon_sym_POUND_LBRACE] = ACTIONS(927),
    [anon_sym_SEMI] = ACTIONS(927),
    [anon_sym_POUND_BANG] = ACTIONS(927),
    [anon_sym_POUND_] = ACTIONS(927),
    [anon_sym_] = ACTIONS(1277),
    [anon_sym_LPARENcomment] = ACTIONS(927),
    [anon_sym_POUND_LPAREN] = ACTIONS(927),
    [sym_shorthand_fn_arg] = ACTIONS(927),
    [anon_sym_CARET] = ACTIONS(927),
    [anon_sym_CARET_COLON] = ACTIONS(927),
    [anon_sym_CARET_DQUOTE] = ACTIONS(927),
  },
  [294] = {
    [anon_sym_DASH_GT] = ACTIONS(736),
    [anon_sym_DASH_GT_GT] = ACTIONS(734),
    [anon_sym_as_DASH_GT] = ACTIONS(734),
    [anon_sym_some_DASH_GT] = ACTIONS(736),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(734),
    [anon_sym_cond_DASH_GT] = ACTIONS(736),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(734),
    [sym__symbol_chars] = ACTIONS(736),
    [anon_sym_LPAREN] = ACTIONS(734),
    [anon_sym_LBRACK] = ACTIONS(734),
    [anon_sym_LBRACE] = ACTIONS(734),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(734),
    [anon_sym_POUND] = ACTIONS(736),
    [anon_sym_POUND_LBRACE] = ACTIONS(734),
  },
  [295] = {
    [anon_sym_DASH_GT] = ACTIONS(826),
    [anon_sym_DASH_GT_GT] = ACTIONS(824),
    [anon_sym_as_DASH_GT] = ACTIONS(824),
    [anon_sym_some_DASH_GT] = ACTIONS(826),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(824),
    [anon_sym_cond_DASH_GT] = ACTIONS(826),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(824),
    [sym__symbol_chars] = ACTIONS(826),
    [anon_sym_LPAREN] = ACTIONS(824),
    [anon_sym_LBRACK] = ACTIONS(824),
    [anon_sym_LBRACE] = ACTIONS(824),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(824),
    [anon_sym_POUND] = ACTIONS(826),
    [anon_sym_POUND_LBRACE] = ACTIONS(824),
  },
  [296] = {
    [sym__anything] = STATE(71),
    [sym__literal] = STATE(71),
    [sym__collection_literal] = STATE(71),
    [sym_boolean] = STATE(71),
    [sym_number] = STATE(71),
    [sym__number] = STATE(27),
    [sym_character] = STATE(71),
    [sym__character] = STATE(28),
    [sym_string] = STATE(71),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(71),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(71),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(71),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(71),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(71),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(71),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(71),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym__hash_map_kv_pair] = STATE(339),
    [sym__hash_map_key] = STATE(71),
    [sym_set] = STATE(71),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(71),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(71),
    [sym_anonymous_fn] = STATE(39),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym__hash_map_repeat1] = STATE(339),
    [aux_sym_metadata_repeat1] = STATE(43),
    [sym_nil] = ACTIONS(123),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(125),
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
    [anon_sym_RBRACE] = ACTIONS(1279),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(129),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [297] = {
    [sym__hex_char] = ACTIONS(1281),
  },
  [298] = {
    [aux_sym_ignore_form_repeat1] = STATE(298),
    [anon_sym_RPAREN] = ACTIONS(933),
    [anon_sym_] = ACTIONS(1283),
  },
  [299] = {
    [aux_sym_ignore_form_repeat1] = STATE(298),
    [anon_sym_RPAREN] = ACTIONS(1269),
    [anon_sym_] = ACTIONS(1097),
  },
  [300] = {
    [aux_sym_ignore_form_repeat1] = STATE(300),
    [sym_nil] = ACTIONS(933),
    [sym_true] = ACTIONS(933),
    [sym_false] = ACTIONS(933),
    [sym_number_long] = ACTIONS(933),
    [sym_number_double] = ACTIONS(933),
    [anon_sym_BSLASH] = ACTIONS(933),
    [anon_sym_DQUOTE] = ACTIONS(933),
    [anon_sym_POUND_DQUOTE] = ACTIONS(933),
    [anon_sym_SQUOTE] = ACTIONS(933),
    [anon_sym_LPARENquote] = ACTIONS(933),
    [anon_sym_RPAREN] = ACTIONS(933),
    [anon_sym_COLON] = ACTIONS(933),
    [anon_sym_COLON_COLON] = ACTIONS(933),
    [anon_sym_DASH_GT] = ACTIONS(933),
    [anon_sym_DASH_GT_GT] = ACTIONS(933),
    [anon_sym_as_DASH_GT] = ACTIONS(933),
    [anon_sym_some_DASH_GT] = ACTIONS(933),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(933),
    [anon_sym_cond_DASH_GT] = ACTIONS(933),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(933),
    [sym__symbol_chars] = ACTIONS(933),
    [anon_sym_LPAREN] = ACTIONS(933),
    [anon_sym_LBRACK] = ACTIONS(933),
    [anon_sym_LBRACE] = ACTIONS(933),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(933),
    [anon_sym_POUND] = ACTIONS(933),
    [anon_sym_POUND_LBRACE] = ACTIONS(933),
    [anon_sym_SEMI] = ACTIONS(933),
    [anon_sym_POUND_BANG] = ACTIONS(933),
    [anon_sym_POUND_] = ACTIONS(933),
    [anon_sym_] = ACTIONS(1286),
    [anon_sym_LPARENcomment] = ACTIONS(933),
    [anon_sym_POUND_LPAREN] = ACTIONS(933),
    [anon_sym_CARET] = ACTIONS(933),
    [anon_sym_CARET_COLON] = ACTIONS(933),
    [anon_sym_CARET_DQUOTE] = ACTIONS(933),
  },
  [301] = {
    [aux_sym_ignore_form_repeat1] = STATE(300),
    [sym_nil] = ACTIONS(1269),
    [sym_true] = ACTIONS(1269),
    [sym_false] = ACTIONS(1269),
    [sym_number_long] = ACTIONS(1269),
    [sym_number_double] = ACTIONS(1269),
    [anon_sym_BSLASH] = ACTIONS(1269),
    [anon_sym_DQUOTE] = ACTIONS(1269),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1269),
    [anon_sym_SQUOTE] = ACTIONS(1269),
    [anon_sym_LPARENquote] = ACTIONS(1269),
    [anon_sym_RPAREN] = ACTIONS(1269),
    [anon_sym_COLON] = ACTIONS(1269),
    [anon_sym_COLON_COLON] = ACTIONS(1269),
    [anon_sym_DASH_GT] = ACTIONS(1269),
    [anon_sym_DASH_GT_GT] = ACTIONS(1269),
    [anon_sym_as_DASH_GT] = ACTIONS(1269),
    [anon_sym_some_DASH_GT] = ACTIONS(1269),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1269),
    [anon_sym_cond_DASH_GT] = ACTIONS(1269),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1269),
    [sym__symbol_chars] = ACTIONS(1269),
    [anon_sym_LPAREN] = ACTIONS(1269),
    [anon_sym_LBRACK] = ACTIONS(1269),
    [anon_sym_LBRACE] = ACTIONS(1269),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1269),
    [anon_sym_POUND] = ACTIONS(1269),
    [anon_sym_POUND_LBRACE] = ACTIONS(1269),
    [anon_sym_SEMI] = ACTIONS(1269),
    [anon_sym_POUND_BANG] = ACTIONS(1269),
    [anon_sym_POUND_] = ACTIONS(1269),
    [anon_sym_] = ACTIONS(1105),
    [anon_sym_LPARENcomment] = ACTIONS(1269),
    [anon_sym_POUND_LPAREN] = ACTIONS(1269),
    [anon_sym_CARET] = ACTIONS(1269),
    [anon_sym_CARET_COLON] = ACTIONS(1269),
    [anon_sym_CARET_DQUOTE] = ACTIONS(1269),
  },
  [302] = {
    [anon_sym_DQUOTE] = ACTIONS(668),
    [anon_sym_LPAREN] = ACTIONS(668),
    [anon_sym_LBRACK] = ACTIONS(668),
    [anon_sym_LBRACE] = ACTIONS(668),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(668),
    [anon_sym_POUND] = ACTIONS(670),
  },
  [303] = {
    [anon_sym_RPAREN] = ACTIONS(1289),
    [anon_sym_LPAREN] = ACTIONS(1289),
  },
  [304] = {
    [ts_builtin_sym_end] = ACTIONS(1291),
    [sym_nil] = ACTIONS(1293),
    [sym_true] = ACTIONS(1293),
    [sym_false] = ACTIONS(1293),
    [sym_number_long] = ACTIONS(1293),
    [sym_number_double] = ACTIONS(1291),
    [anon_sym_BSLASH] = ACTIONS(1291),
    [anon_sym_DQUOTE] = ACTIONS(1291),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1291),
    [anon_sym_SQUOTE] = ACTIONS(1291),
    [anon_sym_LPARENquote] = ACTIONS(1291),
    [anon_sym_RPAREN] = ACTIONS(1291),
    [anon_sym_COLON] = ACTIONS(1293),
    [anon_sym_COLON_COLON] = ACTIONS(1291),
    [anon_sym_DASH_GT] = ACTIONS(1293),
    [anon_sym_DASH_GT_GT] = ACTIONS(1291),
    [anon_sym_as_DASH_GT] = ACTIONS(1291),
    [anon_sym_some_DASH_GT] = ACTIONS(1293),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1291),
    [anon_sym_cond_DASH_GT] = ACTIONS(1293),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1291),
    [sym__symbol_chars] = ACTIONS(1293),
    [anon_sym_LPAREN] = ACTIONS(1293),
    [anon_sym_LBRACK] = ACTIONS(1291),
    [anon_sym_RBRACK] = ACTIONS(1291),
    [anon_sym_LBRACE] = ACTIONS(1291),
    [anon_sym_RBRACE] = ACTIONS(1291),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1291),
    [anon_sym_POUND] = ACTIONS(1293),
    [anon_sym_POUND_LBRACE] = ACTIONS(1291),
    [anon_sym_SEMI] = ACTIONS(1291),
    [anon_sym_POUND_BANG] = ACTIONS(1291),
    [anon_sym_POUND_] = ACTIONS(1291),
    [anon_sym_LPARENcomment] = ACTIONS(1291),
    [anon_sym_POUND_LPAREN] = ACTIONS(1291),
    [sym_shorthand_fn_arg] = ACTIONS(1291),
    [anon_sym_CARET] = ACTIONS(1293),
    [anon_sym_CARET_COLON] = ACTIONS(1291),
    [anon_sym_CARET_DQUOTE] = ACTIONS(1291),
  },
  [305] = {
    [anon_sym_LPAREN] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(289),
    [anon_sym_LBRACE] = ACTIONS(289),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(289),
    [anon_sym_POUND] = ACTIONS(291),
  },
  [306] = {
    [aux_sym__string_repeat1] = STATE(123),
    [anon_sym_DQUOTE] = ACTIONS(1295),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(295),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(295),
  },
  [307] = {
    [ts_builtin_sym_end] = ACTIONS(1297),
    [sym_nil] = ACTIONS(1299),
    [sym_true] = ACTIONS(1299),
    [sym_false] = ACTIONS(1299),
    [sym_number_long] = ACTIONS(1299),
    [sym_number_double] = ACTIONS(1297),
    [anon_sym_BSLASH] = ACTIONS(1297),
    [anon_sym_DQUOTE] = ACTIONS(1297),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1297),
    [anon_sym_SQUOTE] = ACTIONS(1297),
    [anon_sym_LPARENquote] = ACTIONS(1297),
    [anon_sym_RPAREN] = ACTIONS(1297),
    [anon_sym_COLON] = ACTIONS(1299),
    [anon_sym_COLON_COLON] = ACTIONS(1297),
    [anon_sym_DASH_GT] = ACTIONS(1299),
    [anon_sym_DASH_GT_GT] = ACTIONS(1297),
    [anon_sym_as_DASH_GT] = ACTIONS(1297),
    [anon_sym_some_DASH_GT] = ACTIONS(1299),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1297),
    [anon_sym_cond_DASH_GT] = ACTIONS(1299),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1297),
    [sym__symbol_chars] = ACTIONS(1299),
    [anon_sym_LPAREN] = ACTIONS(1299),
    [anon_sym_LBRACK] = ACTIONS(1297),
    [anon_sym_RBRACK] = ACTIONS(1297),
    [anon_sym_LBRACE] = ACTIONS(1297),
    [anon_sym_RBRACE] = ACTIONS(1297),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1297),
    [anon_sym_POUND] = ACTIONS(1299),
    [anon_sym_POUND_LBRACE] = ACTIONS(1297),
    [anon_sym_SEMI] = ACTIONS(1297),
    [anon_sym_POUND_BANG] = ACTIONS(1297),
    [anon_sym_POUND_] = ACTIONS(1297),
    [anon_sym_LPARENcomment] = ACTIONS(1297),
    [anon_sym_POUND_LPAREN] = ACTIONS(1297),
    [sym_shorthand_fn_arg] = ACTIONS(1297),
    [anon_sym_CARET] = ACTIONS(1299),
    [anon_sym_CARET_COLON] = ACTIONS(1297),
    [anon_sym_CARET_DQUOTE] = ACTIONS(1297),
  },
  [308] = {
    [anon_sym_RPAREN] = ACTIONS(1301),
  },
  [309] = {
    [sym_vector] = STATE(138),
    [sym__vector] = STATE(35),
    [sym__after_the_fn_name] = STATE(343),
    [sym__single_arity_fn] = STATE(343),
    [sym__multi_arity_fn] = STATE(343),
    [sym_params] = STATE(141),
    [aux_sym__multi_arity_fn_repeat1] = STATE(142),
    [anon_sym_LPAREN] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(37),
  },
  [310] = {
    [sym_vector] = STATE(138),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(236),
    [sym__hash_map] = STATE(113),
    [sym_namespace_map] = STATE(113),
    [sym__after_the_fn_name] = STATE(343),
    [sym__single_arity_fn] = STATE(343),
    [sym__multi_arity_fn] = STATE(343),
    [sym_params] = STATE(141),
    [sym_attr_map] = STATE(344),
    [aux_sym__multi_arity_fn_repeat1] = STATE(142),
    [anon_sym_LPAREN] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(205),
    [anon_sym_POUND] = ACTIONS(207),
  },
  [311] = {
    [aux_sym_ignore_form_repeat1] = STATE(311),
    [sym_nil] = ACTIONS(933),
    [sym_true] = ACTIONS(933),
    [sym_false] = ACTIONS(933),
    [sym_number_long] = ACTIONS(933),
    [sym_number_double] = ACTIONS(933),
    [anon_sym_BSLASH] = ACTIONS(933),
    [anon_sym_DQUOTE] = ACTIONS(933),
    [anon_sym_POUND_DQUOTE] = ACTIONS(933),
    [anon_sym_SQUOTE] = ACTIONS(933),
    [anon_sym_LPARENquote] = ACTIONS(933),
    [anon_sym_COLON] = ACTIONS(933),
    [anon_sym_COLON_COLON] = ACTIONS(933),
    [anon_sym_DASH_GT] = ACTIONS(933),
    [anon_sym_DASH_GT_GT] = ACTIONS(933),
    [anon_sym_as_DASH_GT] = ACTIONS(933),
    [anon_sym_some_DASH_GT] = ACTIONS(933),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(933),
    [anon_sym_cond_DASH_GT] = ACTIONS(933),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(933),
    [sym__symbol_chars] = ACTIONS(933),
    [anon_sym_LPAREN] = ACTIONS(933),
    [anon_sym_LBRACK] = ACTIONS(933),
    [anon_sym_RBRACK] = ACTIONS(933),
    [anon_sym_LBRACE] = ACTIONS(933),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(933),
    [anon_sym_POUND] = ACTIONS(933),
    [anon_sym_POUND_LBRACE] = ACTIONS(933),
    [anon_sym_SEMI] = ACTIONS(933),
    [anon_sym_POUND_BANG] = ACTIONS(933),
    [anon_sym_POUND_] = ACTIONS(933),
    [anon_sym_] = ACTIONS(1303),
    [anon_sym_LPARENcomment] = ACTIONS(933),
    [anon_sym_POUND_LPAREN] = ACTIONS(933),
    [anon_sym_CARET] = ACTIONS(933),
    [anon_sym_CARET_COLON] = ACTIONS(933),
    [anon_sym_CARET_DQUOTE] = ACTIONS(933),
  },
  [312] = {
    [aux_sym_ignore_form_repeat1] = STATE(311),
    [sym_nil] = ACTIONS(1269),
    [sym_true] = ACTIONS(1269),
    [sym_false] = ACTIONS(1269),
    [sym_number_long] = ACTIONS(1269),
    [sym_number_double] = ACTIONS(1269),
    [anon_sym_BSLASH] = ACTIONS(1269),
    [anon_sym_DQUOTE] = ACTIONS(1269),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1269),
    [anon_sym_SQUOTE] = ACTIONS(1269),
    [anon_sym_LPARENquote] = ACTIONS(1269),
    [anon_sym_COLON] = ACTIONS(1269),
    [anon_sym_COLON_COLON] = ACTIONS(1269),
    [anon_sym_DASH_GT] = ACTIONS(1269),
    [anon_sym_DASH_GT_GT] = ACTIONS(1269),
    [anon_sym_as_DASH_GT] = ACTIONS(1269),
    [anon_sym_some_DASH_GT] = ACTIONS(1269),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1269),
    [anon_sym_cond_DASH_GT] = ACTIONS(1269),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1269),
    [sym__symbol_chars] = ACTIONS(1269),
    [anon_sym_LPAREN] = ACTIONS(1269),
    [anon_sym_LBRACK] = ACTIONS(1269),
    [anon_sym_RBRACK] = ACTIONS(1269),
    [anon_sym_LBRACE] = ACTIONS(1269),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1269),
    [anon_sym_POUND] = ACTIONS(1269),
    [anon_sym_POUND_LBRACE] = ACTIONS(1269),
    [anon_sym_SEMI] = ACTIONS(1269),
    [anon_sym_POUND_BANG] = ACTIONS(1269),
    [anon_sym_POUND_] = ACTIONS(1269),
    [anon_sym_] = ACTIONS(1140),
    [anon_sym_LPARENcomment] = ACTIONS(1269),
    [anon_sym_POUND_LPAREN] = ACTIONS(1269),
    [anon_sym_CARET] = ACTIONS(1269),
    [anon_sym_CARET_COLON] = ACTIONS(1269),
    [anon_sym_CARET_DQUOTE] = ACTIONS(1269),
  },
  [313] = {
    [aux_sym_ignore_form_repeat1] = STATE(313),
    [sym_nil] = ACTIONS(933),
    [sym_true] = ACTIONS(933),
    [sym_false] = ACTIONS(933),
    [sym_number_long] = ACTIONS(933),
    [sym_number_double] = ACTIONS(933),
    [anon_sym_BSLASH] = ACTIONS(933),
    [anon_sym_DQUOTE] = ACTIONS(933),
    [anon_sym_POUND_DQUOTE] = ACTIONS(933),
    [anon_sym_SQUOTE] = ACTIONS(933),
    [anon_sym_LPARENquote] = ACTIONS(933),
    [anon_sym_COLON] = ACTIONS(933),
    [anon_sym_COLON_COLON] = ACTIONS(933),
    [anon_sym_DASH_GT] = ACTIONS(933),
    [anon_sym_DASH_GT_GT] = ACTIONS(933),
    [anon_sym_as_DASH_GT] = ACTIONS(933),
    [anon_sym_some_DASH_GT] = ACTIONS(933),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(933),
    [anon_sym_cond_DASH_GT] = ACTIONS(933),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(933),
    [sym__symbol_chars] = ACTIONS(933),
    [anon_sym_LPAREN] = ACTIONS(933),
    [anon_sym_LBRACK] = ACTIONS(933),
    [anon_sym_LBRACE] = ACTIONS(933),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(933),
    [anon_sym_POUND] = ACTIONS(933),
    [anon_sym_POUND_LBRACE] = ACTIONS(933),
    [anon_sym_SEMI] = ACTIONS(933),
    [anon_sym_POUND_BANG] = ACTIONS(933),
    [anon_sym_POUND_] = ACTIONS(933),
    [anon_sym_] = ACTIONS(1306),
    [anon_sym_LPARENcomment] = ACTIONS(933),
    [anon_sym_POUND_LPAREN] = ACTIONS(933),
    [anon_sym_CARET] = ACTIONS(933),
    [anon_sym_CARET_COLON] = ACTIONS(933),
    [anon_sym_CARET_DQUOTE] = ACTIONS(933),
  },
  [314] = {
    [aux_sym_ignore_form_repeat1] = STATE(313),
    [sym_nil] = ACTIONS(1269),
    [sym_true] = ACTIONS(1269),
    [sym_false] = ACTIONS(1269),
    [sym_number_long] = ACTIONS(1269),
    [sym_number_double] = ACTIONS(1269),
    [anon_sym_BSLASH] = ACTIONS(1269),
    [anon_sym_DQUOTE] = ACTIONS(1269),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1269),
    [anon_sym_SQUOTE] = ACTIONS(1269),
    [anon_sym_LPARENquote] = ACTIONS(1269),
    [anon_sym_COLON] = ACTIONS(1269),
    [anon_sym_COLON_COLON] = ACTIONS(1269),
    [anon_sym_DASH_GT] = ACTIONS(1269),
    [anon_sym_DASH_GT_GT] = ACTIONS(1269),
    [anon_sym_as_DASH_GT] = ACTIONS(1269),
    [anon_sym_some_DASH_GT] = ACTIONS(1269),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1269),
    [anon_sym_cond_DASH_GT] = ACTIONS(1269),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1269),
    [sym__symbol_chars] = ACTIONS(1269),
    [anon_sym_LPAREN] = ACTIONS(1269),
    [anon_sym_LBRACK] = ACTIONS(1269),
    [anon_sym_LBRACE] = ACTIONS(1269),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1269),
    [anon_sym_POUND] = ACTIONS(1269),
    [anon_sym_POUND_LBRACE] = ACTIONS(1269),
    [anon_sym_SEMI] = ACTIONS(1269),
    [anon_sym_POUND_BANG] = ACTIONS(1269),
    [anon_sym_POUND_] = ACTIONS(1269),
    [anon_sym_] = ACTIONS(1144),
    [anon_sym_LPARENcomment] = ACTIONS(1269),
    [anon_sym_POUND_LPAREN] = ACTIONS(1269),
    [anon_sym_CARET] = ACTIONS(1269),
    [anon_sym_CARET_COLON] = ACTIONS(1269),
    [anon_sym_CARET_DQUOTE] = ACTIONS(1269),
  },
  [315] = {
    [ts_builtin_sym_end] = ACTIONS(1309),
    [sym_nil] = ACTIONS(1311),
    [sym_true] = ACTIONS(1311),
    [sym_false] = ACTIONS(1311),
    [sym_number_long] = ACTIONS(1311),
    [sym_number_double] = ACTIONS(1309),
    [anon_sym_BSLASH] = ACTIONS(1309),
    [anon_sym_DQUOTE] = ACTIONS(1309),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1309),
    [anon_sym_SQUOTE] = ACTIONS(1309),
    [anon_sym_LPARENquote] = ACTIONS(1309),
    [anon_sym_RPAREN] = ACTIONS(1309),
    [anon_sym_COLON] = ACTIONS(1311),
    [anon_sym_COLON_COLON] = ACTIONS(1309),
    [anon_sym_DASH_GT] = ACTIONS(1311),
    [anon_sym_DASH_GT_GT] = ACTIONS(1309),
    [anon_sym_as_DASH_GT] = ACTIONS(1309),
    [anon_sym_some_DASH_GT] = ACTIONS(1311),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1309),
    [anon_sym_cond_DASH_GT] = ACTIONS(1311),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1309),
    [sym__symbol_chars] = ACTIONS(1311),
    [anon_sym_LPAREN] = ACTIONS(1311),
    [anon_sym_LBRACK] = ACTIONS(1309),
    [anon_sym_RBRACK] = ACTIONS(1309),
    [anon_sym_LBRACE] = ACTIONS(1309),
    [anon_sym_RBRACE] = ACTIONS(1309),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1309),
    [anon_sym_POUND] = ACTIONS(1311),
    [anon_sym_POUND_LBRACE] = ACTIONS(1309),
    [anon_sym_SEMI] = ACTIONS(1309),
    [anon_sym_POUND_BANG] = ACTIONS(1309),
    [anon_sym_POUND_] = ACTIONS(1309),
    [anon_sym_LPARENcomment] = ACTIONS(1309),
    [anon_sym_POUND_LPAREN] = ACTIONS(1309),
    [sym_shorthand_fn_arg] = ACTIONS(1309),
    [anon_sym_CARET] = ACTIONS(1311),
    [anon_sym_CARET_COLON] = ACTIONS(1309),
    [anon_sym_CARET_DQUOTE] = ACTIONS(1309),
  },
  [316] = {
    [aux_sym_ignore_form_repeat1] = STATE(316),
    [sym_nil] = ACTIONS(933),
    [sym_true] = ACTIONS(933),
    [sym_false] = ACTIONS(933),
    [sym_number_long] = ACTIONS(933),
    [sym_number_double] = ACTIONS(933),
    [anon_sym_BSLASH] = ACTIONS(933),
    [anon_sym_DQUOTE] = ACTIONS(933),
    [anon_sym_POUND_DQUOTE] = ACTIONS(933),
    [anon_sym_SQUOTE] = ACTIONS(933),
    [anon_sym_LPARENquote] = ACTIONS(933),
    [anon_sym_COLON] = ACTIONS(933),
    [anon_sym_COLON_COLON] = ACTIONS(933),
    [anon_sym_DASH_GT] = ACTIONS(933),
    [anon_sym_DASH_GT_GT] = ACTIONS(933),
    [anon_sym_as_DASH_GT] = ACTIONS(933),
    [anon_sym_some_DASH_GT] = ACTIONS(933),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(933),
    [anon_sym_cond_DASH_GT] = ACTIONS(933),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(933),
    [sym__symbol_chars] = ACTIONS(933),
    [anon_sym_LPAREN] = ACTIONS(933),
    [anon_sym_LBRACK] = ACTIONS(933),
    [anon_sym_LBRACE] = ACTIONS(933),
    [anon_sym_RBRACE] = ACTIONS(933),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(933),
    [anon_sym_POUND] = ACTIONS(933),
    [anon_sym_POUND_LBRACE] = ACTIONS(933),
    [anon_sym_SEMI] = ACTIONS(933),
    [anon_sym_POUND_BANG] = ACTIONS(933),
    [anon_sym_POUND_] = ACTIONS(933),
    [anon_sym_] = ACTIONS(1313),
    [anon_sym_LPARENcomment] = ACTIONS(933),
    [anon_sym_POUND_LPAREN] = ACTIONS(933),
    [anon_sym_CARET] = ACTIONS(933),
    [anon_sym_CARET_COLON] = ACTIONS(933),
    [anon_sym_CARET_DQUOTE] = ACTIONS(933),
  },
  [317] = {
    [aux_sym_ignore_form_repeat1] = STATE(316),
    [sym_nil] = ACTIONS(1269),
    [sym_true] = ACTIONS(1269),
    [sym_false] = ACTIONS(1269),
    [sym_number_long] = ACTIONS(1269),
    [sym_number_double] = ACTIONS(1269),
    [anon_sym_BSLASH] = ACTIONS(1269),
    [anon_sym_DQUOTE] = ACTIONS(1269),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1269),
    [anon_sym_SQUOTE] = ACTIONS(1269),
    [anon_sym_LPARENquote] = ACTIONS(1269),
    [anon_sym_COLON] = ACTIONS(1269),
    [anon_sym_COLON_COLON] = ACTIONS(1269),
    [anon_sym_DASH_GT] = ACTIONS(1269),
    [anon_sym_DASH_GT_GT] = ACTIONS(1269),
    [anon_sym_as_DASH_GT] = ACTIONS(1269),
    [anon_sym_some_DASH_GT] = ACTIONS(1269),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1269),
    [anon_sym_cond_DASH_GT] = ACTIONS(1269),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1269),
    [sym__symbol_chars] = ACTIONS(1269),
    [anon_sym_LPAREN] = ACTIONS(1269),
    [anon_sym_LBRACK] = ACTIONS(1269),
    [anon_sym_LBRACE] = ACTIONS(1269),
    [anon_sym_RBRACE] = ACTIONS(1269),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1269),
    [anon_sym_POUND] = ACTIONS(1269),
    [anon_sym_POUND_LBRACE] = ACTIONS(1269),
    [anon_sym_SEMI] = ACTIONS(1269),
    [anon_sym_POUND_BANG] = ACTIONS(1269),
    [anon_sym_POUND_] = ACTIONS(1269),
    [anon_sym_] = ACTIONS(1154),
    [anon_sym_LPARENcomment] = ACTIONS(1269),
    [anon_sym_POUND_LPAREN] = ACTIONS(1269),
    [anon_sym_CARET] = ACTIONS(1269),
    [anon_sym_CARET_COLON] = ACTIONS(1269),
    [anon_sym_CARET_DQUOTE] = ACTIONS(1269),
  },
  [318] = {
    [ts_builtin_sym_end] = ACTIONS(1101),
    [sym_nil] = ACTIONS(1103),
    [sym_true] = ACTIONS(1103),
    [sym_false] = ACTIONS(1103),
    [sym_number_long] = ACTIONS(1103),
    [sym_number_double] = ACTIONS(1103),
    [anon_sym_BSLASH] = ACTIONS(1103),
    [anon_sym_DQUOTE] = ACTIONS(1103),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1103),
    [anon_sym_SQUOTE] = ACTIONS(1103),
    [anon_sym_LPARENquote] = ACTIONS(1103),
    [anon_sym_RPAREN] = ACTIONS(1103),
    [anon_sym_COLON] = ACTIONS(1103),
    [anon_sym_COLON_COLON] = ACTIONS(1103),
    [anon_sym_DASH_GT] = ACTIONS(1103),
    [anon_sym_DASH_GT_GT] = ACTIONS(1103),
    [anon_sym_as_DASH_GT] = ACTIONS(1103),
    [anon_sym_some_DASH_GT] = ACTIONS(1103),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1103),
    [anon_sym_cond_DASH_GT] = ACTIONS(1103),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1103),
    [sym__symbol_chars] = ACTIONS(1103),
    [anon_sym_LPAREN] = ACTIONS(1103),
    [anon_sym_LBRACK] = ACTIONS(1103),
    [anon_sym_RBRACK] = ACTIONS(1103),
    [anon_sym_LBRACE] = ACTIONS(1103),
    [anon_sym_RBRACE] = ACTIONS(1103),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1103),
    [anon_sym_POUND] = ACTIONS(1103),
    [anon_sym_POUND_LBRACE] = ACTIONS(1103),
    [anon_sym_SEMI] = ACTIONS(1103),
    [anon_sym_POUND_BANG] = ACTIONS(1103),
    [anon_sym_POUND_] = ACTIONS(1103),
    [anon_sym_] = ACTIONS(1101),
    [anon_sym_LPARENcomment] = ACTIONS(1103),
    [anon_sym_POUND_LPAREN] = ACTIONS(1103),
    [sym_shorthand_fn_arg] = ACTIONS(1103),
    [anon_sym_CARET] = ACTIONS(1103),
    [anon_sym_CARET_COLON] = ACTIONS(1103),
    [anon_sym_CARET_DQUOTE] = ACTIONS(1103),
  },
  [319] = {
    [sym_number_long] = ACTIONS(642),
    [sym_number_double] = ACTIONS(642),
    [anon_sym_DQUOTE] = ACTIONS(642),
    [anon_sym_COLON] = ACTIONS(642),
    [anon_sym_COLON_COLON] = ACTIONS(642),
    [anon_sym_DASH_GT] = ACTIONS(642),
    [anon_sym_DASH_GT_GT] = ACTIONS(642),
    [anon_sym_as_DASH_GT] = ACTIONS(642),
    [anon_sym_some_DASH_GT] = ACTIONS(642),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(642),
    [anon_sym_cond_DASH_GT] = ACTIONS(642),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(642),
    [sym__symbol_chars] = ACTIONS(642),
    [anon_sym_LPAREN] = ACTIONS(642),
    [anon_sym_LBRACK] = ACTIONS(642),
    [anon_sym_RBRACK] = ACTIONS(642),
    [anon_sym_LBRACE] = ACTIONS(642),
    [anon_sym_POUND] = ACTIONS(642),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(642),
  },
  [320] = {
    [sym__keyword_chars] = ACTIONS(1316),
  },
  [321] = {
    [sym_number_long] = ACTIONS(670),
    [sym_number_double] = ACTIONS(670),
    [anon_sym_DQUOTE] = ACTIONS(670),
    [anon_sym_COLON] = ACTIONS(670),
    [anon_sym_COLON_COLON] = ACTIONS(670),
    [anon_sym_DASH_GT] = ACTIONS(670),
    [anon_sym_DASH_GT_GT] = ACTIONS(670),
    [anon_sym_as_DASH_GT] = ACTIONS(670),
    [anon_sym_some_DASH_GT] = ACTIONS(670),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(670),
    [anon_sym_cond_DASH_GT] = ACTIONS(670),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(670),
    [sym__symbol_chars] = ACTIONS(670),
    [anon_sym_LPAREN] = ACTIONS(670),
    [anon_sym_LBRACK] = ACTIONS(670),
    [anon_sym_RBRACK] = ACTIONS(670),
    [anon_sym_LBRACE] = ACTIONS(670),
    [anon_sym_POUND] = ACTIONS(670),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(670),
  },
  [322] = {
    [sym_number_long] = ACTIONS(1162),
    [sym_number_double] = ACTIONS(1162),
    [anon_sym_DQUOTE] = ACTIONS(1162),
    [anon_sym_COLON] = ACTIONS(1162),
    [anon_sym_COLON_COLON] = ACTIONS(1162),
    [anon_sym_DASH_GT] = ACTIONS(1162),
    [anon_sym_DASH_GT_GT] = ACTIONS(1162),
    [anon_sym_as_DASH_GT] = ACTIONS(1162),
    [anon_sym_some_DASH_GT] = ACTIONS(1162),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1162),
    [anon_sym_cond_DASH_GT] = ACTIONS(1162),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1162),
    [sym__symbol_chars] = ACTIONS(1162),
    [anon_sym_LPAREN] = ACTIONS(1162),
    [anon_sym_LBRACK] = ACTIONS(1162),
    [anon_sym_RBRACK] = ACTIONS(1162),
    [anon_sym_LBRACE] = ACTIONS(1162),
    [anon_sym_POUND] = ACTIONS(1162),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1162),
  },
  [323] = {
    [sym_number_long] = ACTIONS(1180),
    [sym_number_double] = ACTIONS(1180),
    [anon_sym_DQUOTE] = ACTIONS(1180),
    [anon_sym_COLON] = ACTIONS(1180),
    [anon_sym_COLON_COLON] = ACTIONS(1180),
    [anon_sym_DASH_GT] = ACTIONS(1180),
    [anon_sym_DASH_GT_GT] = ACTIONS(1180),
    [anon_sym_as_DASH_GT] = ACTIONS(1180),
    [anon_sym_some_DASH_GT] = ACTIONS(1180),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1180),
    [anon_sym_cond_DASH_GT] = ACTIONS(1180),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1180),
    [sym__symbol_chars] = ACTIONS(1180),
    [anon_sym_LPAREN] = ACTIONS(1180),
    [anon_sym_LBRACK] = ACTIONS(1180),
    [anon_sym_RBRACK] = ACTIONS(1180),
    [anon_sym_LBRACE] = ACTIONS(1180),
    [anon_sym_POUND] = ACTIONS(1180),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1180),
  },
  [324] = {
    [sym_number_long] = ACTIONS(1228),
    [sym_number_double] = ACTIONS(1228),
    [anon_sym_DQUOTE] = ACTIONS(1228),
    [anon_sym_COLON] = ACTIONS(1228),
    [anon_sym_COLON_COLON] = ACTIONS(1228),
    [anon_sym_DASH_GT] = ACTIONS(1228),
    [anon_sym_DASH_GT_GT] = ACTIONS(1228),
    [anon_sym_as_DASH_GT] = ACTIONS(1228),
    [anon_sym_some_DASH_GT] = ACTIONS(1228),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1228),
    [anon_sym_cond_DASH_GT] = ACTIONS(1228),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1228),
    [sym__symbol_chars] = ACTIONS(1228),
    [anon_sym_LPAREN] = ACTIONS(1228),
    [anon_sym_LBRACK] = ACTIONS(1228),
    [anon_sym_RBRACK] = ACTIONS(1228),
    [anon_sym_LBRACE] = ACTIONS(1228),
    [anon_sym_POUND] = ACTIONS(1228),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1228),
  },
  [325] = {
    [sym__number] = STATE(281),
    [sym__string] = STATE(281),
    [sym__keyword] = STATE(281),
    [sym__unqualified_keyword] = STATE(281),
    [sym_qualified_keyword] = STATE(281),
    [sym__symbol] = STATE(281),
    [sym_threading_macro] = STATE(281),
    [sym_qualified_symbol] = STATE(281),
    [sym__one_form] = STATE(281),
    [sym__paren_sequence] = STATE(281),
    [sym__bracket_sequence] = STATE(281),
    [sym__curly_brace_sequence] = STATE(281),
    [aux_sym_comment_macro_repeat1] = STATE(281),
    [sym_number_long] = ACTIONS(919),
    [sym_number_double] = ACTIONS(919),
    [anon_sym_DQUOTE] = ACTIONS(437),
    [anon_sym_COLON] = ACTIONS(439),
    [anon_sym_COLON_COLON] = ACTIONS(441),
    [anon_sym_DASH_GT] = ACTIONS(443),
    [anon_sym_DASH_GT_GT] = ACTIONS(443),
    [anon_sym_as_DASH_GT] = ACTIONS(443),
    [anon_sym_some_DASH_GT] = ACTIONS(443),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(443),
    [anon_sym_cond_DASH_GT] = ACTIONS(443),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(443),
    [sym__symbol_chars] = ACTIONS(445),
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_LBRACE] = ACTIONS(451),
    [anon_sym_RBRACE] = ACTIONS(1318),
    [anon_sym_POUND] = ACTIONS(455),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(919),
  },
  [326] = {
    [sym_number_long] = ACTIONS(642),
    [sym_number_double] = ACTIONS(642),
    [anon_sym_DQUOTE] = ACTIONS(642),
    [anon_sym_COLON] = ACTIONS(642),
    [anon_sym_COLON_COLON] = ACTIONS(642),
    [anon_sym_DASH_GT] = ACTIONS(642),
    [anon_sym_DASH_GT_GT] = ACTIONS(642),
    [anon_sym_as_DASH_GT] = ACTIONS(642),
    [anon_sym_some_DASH_GT] = ACTIONS(642),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(642),
    [anon_sym_cond_DASH_GT] = ACTIONS(642),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(642),
    [sym__symbol_chars] = ACTIONS(642),
    [anon_sym_LPAREN] = ACTIONS(642),
    [anon_sym_LBRACK] = ACTIONS(642),
    [anon_sym_LBRACE] = ACTIONS(642),
    [anon_sym_RBRACE] = ACTIONS(642),
    [anon_sym_POUND] = ACTIONS(642),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(642),
  },
  [327] = {
    [sym__keyword_chars] = ACTIONS(1320),
  },
  [328] = {
    [sym_number_long] = ACTIONS(670),
    [sym_number_double] = ACTIONS(670),
    [anon_sym_DQUOTE] = ACTIONS(670),
    [anon_sym_COLON] = ACTIONS(670),
    [anon_sym_COLON_COLON] = ACTIONS(670),
    [anon_sym_DASH_GT] = ACTIONS(670),
    [anon_sym_DASH_GT_GT] = ACTIONS(670),
    [anon_sym_as_DASH_GT] = ACTIONS(670),
    [anon_sym_some_DASH_GT] = ACTIONS(670),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(670),
    [anon_sym_cond_DASH_GT] = ACTIONS(670),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(670),
    [sym__symbol_chars] = ACTIONS(670),
    [anon_sym_LPAREN] = ACTIONS(670),
    [anon_sym_LBRACK] = ACTIONS(670),
    [anon_sym_LBRACE] = ACTIONS(670),
    [anon_sym_RBRACE] = ACTIONS(670),
    [anon_sym_POUND] = ACTIONS(670),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(670),
  },
  [329] = {
    [sym_number_long] = ACTIONS(1162),
    [sym_number_double] = ACTIONS(1162),
    [anon_sym_DQUOTE] = ACTIONS(1162),
    [anon_sym_COLON] = ACTIONS(1162),
    [anon_sym_COLON_COLON] = ACTIONS(1162),
    [anon_sym_DASH_GT] = ACTIONS(1162),
    [anon_sym_DASH_GT_GT] = ACTIONS(1162),
    [anon_sym_as_DASH_GT] = ACTIONS(1162),
    [anon_sym_some_DASH_GT] = ACTIONS(1162),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1162),
    [anon_sym_cond_DASH_GT] = ACTIONS(1162),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1162),
    [sym__symbol_chars] = ACTIONS(1162),
    [anon_sym_LPAREN] = ACTIONS(1162),
    [anon_sym_LBRACK] = ACTIONS(1162),
    [anon_sym_LBRACE] = ACTIONS(1162),
    [anon_sym_RBRACE] = ACTIONS(1162),
    [anon_sym_POUND] = ACTIONS(1162),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1162),
  },
  [330] = {
    [sym_number_long] = ACTIONS(1180),
    [sym_number_double] = ACTIONS(1180),
    [anon_sym_DQUOTE] = ACTIONS(1180),
    [anon_sym_COLON] = ACTIONS(1180),
    [anon_sym_COLON_COLON] = ACTIONS(1180),
    [anon_sym_DASH_GT] = ACTIONS(1180),
    [anon_sym_DASH_GT_GT] = ACTIONS(1180),
    [anon_sym_as_DASH_GT] = ACTIONS(1180),
    [anon_sym_some_DASH_GT] = ACTIONS(1180),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1180),
    [anon_sym_cond_DASH_GT] = ACTIONS(1180),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1180),
    [sym__symbol_chars] = ACTIONS(1180),
    [anon_sym_LPAREN] = ACTIONS(1180),
    [anon_sym_LBRACK] = ACTIONS(1180),
    [anon_sym_LBRACE] = ACTIONS(1180),
    [anon_sym_RBRACE] = ACTIONS(1180),
    [anon_sym_POUND] = ACTIONS(1180),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1180),
  },
  [331] = {
    [sym_number_long] = ACTIONS(1228),
    [sym_number_double] = ACTIONS(1228),
    [anon_sym_DQUOTE] = ACTIONS(1228),
    [anon_sym_COLON] = ACTIONS(1228),
    [anon_sym_COLON_COLON] = ACTIONS(1228),
    [anon_sym_DASH_GT] = ACTIONS(1228),
    [anon_sym_DASH_GT_GT] = ACTIONS(1228),
    [anon_sym_as_DASH_GT] = ACTIONS(1228),
    [anon_sym_some_DASH_GT] = ACTIONS(1228),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1228),
    [anon_sym_cond_DASH_GT] = ACTIONS(1228),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1228),
    [sym__symbol_chars] = ACTIONS(1228),
    [anon_sym_LPAREN] = ACTIONS(1228),
    [anon_sym_LBRACK] = ACTIONS(1228),
    [anon_sym_LBRACE] = ACTIONS(1228),
    [anon_sym_RBRACE] = ACTIONS(1228),
    [anon_sym_POUND] = ACTIONS(1228),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1228),
  },
  [332] = {
    [sym__number] = STATE(281),
    [sym__string] = STATE(281),
    [sym__keyword] = STATE(281),
    [sym__unqualified_keyword] = STATE(281),
    [sym_qualified_keyword] = STATE(281),
    [sym__symbol] = STATE(281),
    [sym_threading_macro] = STATE(281),
    [sym_qualified_symbol] = STATE(281),
    [sym__one_form] = STATE(281),
    [sym__paren_sequence] = STATE(281),
    [sym__bracket_sequence] = STATE(281),
    [sym__curly_brace_sequence] = STATE(281),
    [aux_sym_comment_macro_repeat1] = STATE(281),
    [sym_number_long] = ACTIONS(919),
    [sym_number_double] = ACTIONS(919),
    [anon_sym_DQUOTE] = ACTIONS(437),
    [anon_sym_COLON] = ACTIONS(439),
    [anon_sym_COLON_COLON] = ACTIONS(441),
    [anon_sym_DASH_GT] = ACTIONS(443),
    [anon_sym_DASH_GT_GT] = ACTIONS(443),
    [anon_sym_as_DASH_GT] = ACTIONS(443),
    [anon_sym_some_DASH_GT] = ACTIONS(443),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(443),
    [anon_sym_cond_DASH_GT] = ACTIONS(443),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(443),
    [sym__symbol_chars] = ACTIONS(445),
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_LBRACE] = ACTIONS(451),
    [anon_sym_RBRACE] = ACTIONS(1322),
    [anon_sym_POUND] = ACTIONS(455),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(919),
  },
  [333] = {
    [ts_builtin_sym_end] = ACTIONS(1324),
    [sym_nil] = ACTIONS(1326),
    [sym_true] = ACTIONS(1326),
    [sym_false] = ACTIONS(1326),
    [sym_number_long] = ACTIONS(1326),
    [sym_number_double] = ACTIONS(1326),
    [anon_sym_BSLASH] = ACTIONS(1326),
    [anon_sym_DQUOTE] = ACTIONS(1326),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1326),
    [anon_sym_SQUOTE] = ACTIONS(1326),
    [anon_sym_LPARENquote] = ACTIONS(1326),
    [anon_sym_RPAREN] = ACTIONS(1326),
    [anon_sym_COLON] = ACTIONS(1326),
    [anon_sym_COLON_COLON] = ACTIONS(1326),
    [anon_sym_DASH_GT] = ACTIONS(1326),
    [anon_sym_DASH_GT_GT] = ACTIONS(1326),
    [anon_sym_as_DASH_GT] = ACTIONS(1326),
    [anon_sym_some_DASH_GT] = ACTIONS(1326),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1326),
    [anon_sym_cond_DASH_GT] = ACTIONS(1326),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1326),
    [sym__symbol_chars] = ACTIONS(1326),
    [anon_sym_LPAREN] = ACTIONS(1326),
    [anon_sym_LBRACK] = ACTIONS(1326),
    [anon_sym_RBRACK] = ACTIONS(1326),
    [anon_sym_LBRACE] = ACTIONS(1326),
    [anon_sym_RBRACE] = ACTIONS(1326),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1326),
    [anon_sym_POUND] = ACTIONS(1326),
    [anon_sym_POUND_LBRACE] = ACTIONS(1326),
    [anon_sym_SEMI] = ACTIONS(1326),
    [anon_sym_POUND_BANG] = ACTIONS(1326),
    [anon_sym_POUND_] = ACTIONS(1326),
    [anon_sym_] = ACTIONS(1324),
    [anon_sym_LPARENcomment] = ACTIONS(1326),
    [anon_sym_POUND_LPAREN] = ACTIONS(1326),
    [sym_shorthand_fn_arg] = ACTIONS(1326),
    [anon_sym_CARET] = ACTIONS(1326),
    [anon_sym_CARET_COLON] = ACTIONS(1326),
    [anon_sym_CARET_DQUOTE] = ACTIONS(1326),
  },
  [334] = {
    [sym_number_long] = ACTIONS(1103),
    [sym_number_double] = ACTIONS(1103),
    [anon_sym_DQUOTE] = ACTIONS(1103),
    [anon_sym_RPAREN] = ACTIONS(1103),
    [anon_sym_COLON] = ACTIONS(1103),
    [anon_sym_COLON_COLON] = ACTIONS(1103),
    [anon_sym_DASH_GT] = ACTIONS(1103),
    [anon_sym_DASH_GT_GT] = ACTIONS(1103),
    [anon_sym_as_DASH_GT] = ACTIONS(1103),
    [anon_sym_some_DASH_GT] = ACTIONS(1103),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1103),
    [anon_sym_cond_DASH_GT] = ACTIONS(1103),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1103),
    [sym__symbol_chars] = ACTIONS(1103),
    [anon_sym_LPAREN] = ACTIONS(1103),
    [anon_sym_LBRACK] = ACTIONS(1103),
    [anon_sym_LBRACE] = ACTIONS(1103),
    [anon_sym_POUND] = ACTIONS(1103),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1103),
  },
  [335] = {
    [sym_number_long] = ACTIONS(1326),
    [sym_number_double] = ACTIONS(1326),
    [anon_sym_DQUOTE] = ACTIONS(1326),
    [anon_sym_RPAREN] = ACTIONS(1326),
    [anon_sym_COLON] = ACTIONS(1326),
    [anon_sym_COLON_COLON] = ACTIONS(1326),
    [anon_sym_DASH_GT] = ACTIONS(1326),
    [anon_sym_DASH_GT_GT] = ACTIONS(1326),
    [anon_sym_as_DASH_GT] = ACTIONS(1326),
    [anon_sym_some_DASH_GT] = ACTIONS(1326),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1326),
    [anon_sym_cond_DASH_GT] = ACTIONS(1326),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1326),
    [sym__symbol_chars] = ACTIONS(1326),
    [anon_sym_LPAREN] = ACTIONS(1326),
    [anon_sym_LBRACK] = ACTIONS(1326),
    [anon_sym_LBRACE] = ACTIONS(1326),
    [anon_sym_POUND] = ACTIONS(1326),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1326),
  },
  [336] = {
    [aux_sym_ignore_form_repeat1] = STATE(336),
    [sym_nil] = ACTIONS(933),
    [sym_true] = ACTIONS(933),
    [sym_false] = ACTIONS(933),
    [sym_number_long] = ACTIONS(933),
    [sym_number_double] = ACTIONS(933),
    [anon_sym_BSLASH] = ACTIONS(933),
    [anon_sym_DQUOTE] = ACTIONS(933),
    [anon_sym_POUND_DQUOTE] = ACTIONS(933),
    [anon_sym_SQUOTE] = ACTIONS(933),
    [anon_sym_LPARENquote] = ACTIONS(933),
    [anon_sym_RPAREN] = ACTIONS(933),
    [anon_sym_COLON] = ACTIONS(933),
    [anon_sym_COLON_COLON] = ACTIONS(933),
    [anon_sym_DASH_GT] = ACTIONS(933),
    [anon_sym_DASH_GT_GT] = ACTIONS(933),
    [anon_sym_as_DASH_GT] = ACTIONS(933),
    [anon_sym_some_DASH_GT] = ACTIONS(933),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(933),
    [anon_sym_cond_DASH_GT] = ACTIONS(933),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(933),
    [sym__symbol_chars] = ACTIONS(933),
    [anon_sym_LPAREN] = ACTIONS(933),
    [anon_sym_LBRACK] = ACTIONS(933),
    [anon_sym_LBRACE] = ACTIONS(933),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(933),
    [anon_sym_POUND] = ACTIONS(933),
    [anon_sym_POUND_LBRACE] = ACTIONS(933),
    [anon_sym_SEMI] = ACTIONS(933),
    [anon_sym_POUND_BANG] = ACTIONS(933),
    [anon_sym_POUND_] = ACTIONS(933),
    [anon_sym_] = ACTIONS(1328),
    [anon_sym_LPARENcomment] = ACTIONS(933),
    [anon_sym_POUND_LPAREN] = ACTIONS(933),
    [sym_shorthand_fn_arg] = ACTIONS(933),
    [anon_sym_CARET] = ACTIONS(933),
    [anon_sym_CARET_COLON] = ACTIONS(933),
    [anon_sym_CARET_DQUOTE] = ACTIONS(933),
  },
  [337] = {
    [aux_sym_ignore_form_repeat1] = STATE(336),
    [sym_nil] = ACTIONS(1269),
    [sym_true] = ACTIONS(1269),
    [sym_false] = ACTIONS(1269),
    [sym_number_long] = ACTIONS(1269),
    [sym_number_double] = ACTIONS(1269),
    [anon_sym_BSLASH] = ACTIONS(1269),
    [anon_sym_DQUOTE] = ACTIONS(1269),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1269),
    [anon_sym_SQUOTE] = ACTIONS(1269),
    [anon_sym_LPARENquote] = ACTIONS(1269),
    [anon_sym_RPAREN] = ACTIONS(1269),
    [anon_sym_COLON] = ACTIONS(1269),
    [anon_sym_COLON_COLON] = ACTIONS(1269),
    [anon_sym_DASH_GT] = ACTIONS(1269),
    [anon_sym_DASH_GT_GT] = ACTIONS(1269),
    [anon_sym_as_DASH_GT] = ACTIONS(1269),
    [anon_sym_some_DASH_GT] = ACTIONS(1269),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1269),
    [anon_sym_cond_DASH_GT] = ACTIONS(1269),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1269),
    [sym__symbol_chars] = ACTIONS(1269),
    [anon_sym_LPAREN] = ACTIONS(1269),
    [anon_sym_LBRACK] = ACTIONS(1269),
    [anon_sym_LBRACE] = ACTIONS(1269),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1269),
    [anon_sym_POUND] = ACTIONS(1269),
    [anon_sym_POUND_LBRACE] = ACTIONS(1269),
    [anon_sym_SEMI] = ACTIONS(1269),
    [anon_sym_POUND_BANG] = ACTIONS(1269),
    [anon_sym_POUND_] = ACTIONS(1269),
    [anon_sym_] = ACTIONS(1275),
    [anon_sym_LPARENcomment] = ACTIONS(1269),
    [anon_sym_POUND_LPAREN] = ACTIONS(1269),
    [sym_shorthand_fn_arg] = ACTIONS(1269),
    [anon_sym_CARET] = ACTIONS(1269),
    [anon_sym_CARET_COLON] = ACTIONS(1269),
    [anon_sym_CARET_DQUOTE] = ACTIONS(1269),
  },
  [338] = {
    [anon_sym_DASH_GT] = ACTIONS(1150),
    [anon_sym_DASH_GT_GT] = ACTIONS(1148),
    [anon_sym_as_DASH_GT] = ACTIONS(1148),
    [anon_sym_some_DASH_GT] = ACTIONS(1150),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1148),
    [anon_sym_cond_DASH_GT] = ACTIONS(1150),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1148),
    [sym__symbol_chars] = ACTIONS(1150),
    [anon_sym_LPAREN] = ACTIONS(1148),
    [anon_sym_LBRACK] = ACTIONS(1148),
    [anon_sym_LBRACE] = ACTIONS(1148),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1148),
    [anon_sym_POUND] = ACTIONS(1150),
    [anon_sym_POUND_LBRACE] = ACTIONS(1148),
  },
  [339] = {
    [sym__anything] = STATE(71),
    [sym__literal] = STATE(71),
    [sym__collection_literal] = STATE(71),
    [sym_boolean] = STATE(71),
    [sym_number] = STATE(71),
    [sym__number] = STATE(27),
    [sym_character] = STATE(71),
    [sym__character] = STATE(28),
    [sym_string] = STATE(71),
    [sym__string] = STATE(29),
    [sym_regex] = STATE(71),
    [sym__regex] = STATE(30),
    [sym_quote] = STATE(71),
    [sym__quote] = STATE(31),
    [sym_keyword] = STATE(71),
    [sym__keyword] = STATE(32),
    [sym__unqualified_keyword] = STATE(32),
    [sym_qualified_keyword] = STATE(32),
    [sym_symbol] = STATE(71),
    [sym__symbol] = STATE(33),
    [sym_threading_macro] = STATE(33),
    [sym_qualified_symbol] = STATE(33),
    [sym_list] = STATE(71),
    [sym__list] = STATE(34),
    [sym_vector] = STATE(71),
    [sym__vector] = STATE(35),
    [sym_hash_map] = STATE(71),
    [sym__hash_map] = STATE(36),
    [sym_namespace_map] = STATE(36),
    [sym__hash_map_kv_pair] = STATE(156),
    [sym__hash_map_key] = STATE(71),
    [sym_set] = STATE(71),
    [sym__set] = STATE(37),
    [sym_comment] = STATE(71),
    [sym_semicolon] = STATE(38),
    [sym_shebang_line] = STATE(38),
    [sym_ignore_form] = STATE(38),
    [sym_comment_macro] = STATE(38),
    [sym_function] = STATE(71),
    [sym_anonymous_fn] = STATE(39),
    [sym_shorthand_fn] = STATE(39),
    [sym_defn] = STATE(39),
    [sym_metadata] = STATE(40),
    [sym__metadata_map] = STATE(41),
    [sym_metadata_shorthand] = STATE(43),
    [aux_sym__hash_map_repeat1] = STATE(156),
    [aux_sym_metadata_repeat1] = STATE(43),
    [sym_nil] = ACTIONS(123),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(125),
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
    [anon_sym_RBRACE] = ACTIONS(1331),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(129),
    [anon_sym_LPARENcomment] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [340] = {
    [ts_builtin_sym_end] = ACTIONS(1333),
    [sym_nil] = ACTIONS(1335),
    [sym_true] = ACTIONS(1335),
    [sym_false] = ACTIONS(1335),
    [sym_number_long] = ACTIONS(1335),
    [sym_number_double] = ACTIONS(1333),
    [anon_sym_BSLASH] = ACTIONS(1333),
    [anon_sym_DQUOTE] = ACTIONS(1333),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1333),
    [anon_sym_SQUOTE] = ACTIONS(1333),
    [anon_sym_LPARENquote] = ACTIONS(1333),
    [anon_sym_RPAREN] = ACTIONS(1333),
    [anon_sym_COLON] = ACTIONS(1335),
    [anon_sym_COLON_COLON] = ACTIONS(1333),
    [anon_sym_DASH_GT] = ACTIONS(1335),
    [anon_sym_DASH_GT_GT] = ACTIONS(1333),
    [anon_sym_as_DASH_GT] = ACTIONS(1333),
    [anon_sym_some_DASH_GT] = ACTIONS(1335),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1333),
    [anon_sym_cond_DASH_GT] = ACTIONS(1335),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1333),
    [sym__symbol_chars] = ACTIONS(1335),
    [anon_sym_LPAREN] = ACTIONS(1335),
    [anon_sym_LBRACK] = ACTIONS(1333),
    [anon_sym_RBRACK] = ACTIONS(1333),
    [anon_sym_LBRACE] = ACTIONS(1333),
    [anon_sym_RBRACE] = ACTIONS(1333),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1333),
    [anon_sym_POUND] = ACTIONS(1335),
    [anon_sym_POUND_LBRACE] = ACTIONS(1333),
    [anon_sym_SEMI] = ACTIONS(1333),
    [anon_sym_POUND_BANG] = ACTIONS(1333),
    [anon_sym_POUND_] = ACTIONS(1333),
    [anon_sym_LPARENcomment] = ACTIONS(1333),
    [anon_sym_POUND_LPAREN] = ACTIONS(1333),
    [sym_shorthand_fn_arg] = ACTIONS(1333),
    [anon_sym_CARET] = ACTIONS(1335),
    [anon_sym_CARET_COLON] = ACTIONS(1333),
    [anon_sym_CARET_DQUOTE] = ACTIONS(1333),
  },
  [341] = {
    [anon_sym_LPAREN] = ACTIONS(640),
    [anon_sym_LBRACK] = ACTIONS(640),
    [anon_sym_LBRACE] = ACTIONS(640),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(640),
    [anon_sym_POUND] = ACTIONS(642),
  },
  [342] = {
    [ts_builtin_sym_end] = ACTIONS(1337),
    [sym_nil] = ACTIONS(1339),
    [sym_true] = ACTIONS(1339),
    [sym_false] = ACTIONS(1339),
    [sym_number_long] = ACTIONS(1339),
    [sym_number_double] = ACTIONS(1337),
    [anon_sym_BSLASH] = ACTIONS(1337),
    [anon_sym_DQUOTE] = ACTIONS(1337),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1337),
    [anon_sym_SQUOTE] = ACTIONS(1337),
    [anon_sym_LPARENquote] = ACTIONS(1337),
    [anon_sym_RPAREN] = ACTIONS(1337),
    [anon_sym_COLON] = ACTIONS(1339),
    [anon_sym_COLON_COLON] = ACTIONS(1337),
    [anon_sym_DASH_GT] = ACTIONS(1339),
    [anon_sym_DASH_GT_GT] = ACTIONS(1337),
    [anon_sym_as_DASH_GT] = ACTIONS(1337),
    [anon_sym_some_DASH_GT] = ACTIONS(1339),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1337),
    [anon_sym_cond_DASH_GT] = ACTIONS(1339),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1337),
    [sym__symbol_chars] = ACTIONS(1339),
    [anon_sym_LPAREN] = ACTIONS(1339),
    [anon_sym_LBRACK] = ACTIONS(1337),
    [anon_sym_RBRACK] = ACTIONS(1337),
    [anon_sym_LBRACE] = ACTIONS(1337),
    [anon_sym_RBRACE] = ACTIONS(1337),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1337),
    [anon_sym_POUND] = ACTIONS(1339),
    [anon_sym_POUND_LBRACE] = ACTIONS(1337),
    [anon_sym_SEMI] = ACTIONS(1337),
    [anon_sym_POUND_BANG] = ACTIONS(1337),
    [anon_sym_POUND_] = ACTIONS(1337),
    [anon_sym_LPARENcomment] = ACTIONS(1337),
    [anon_sym_POUND_LPAREN] = ACTIONS(1337),
    [sym_shorthand_fn_arg] = ACTIONS(1337),
    [anon_sym_CARET] = ACTIONS(1339),
    [anon_sym_CARET_COLON] = ACTIONS(1337),
    [anon_sym_CARET_DQUOTE] = ACTIONS(1337),
  },
  [343] = {
    [anon_sym_RPAREN] = ACTIONS(1341),
  },
  [344] = {
    [sym_vector] = STATE(138),
    [sym__vector] = STATE(35),
    [sym__after_the_fn_name] = STATE(351),
    [sym__single_arity_fn] = STATE(351),
    [sym__multi_arity_fn] = STATE(351),
    [sym_params] = STATE(141),
    [aux_sym__multi_arity_fn_repeat1] = STATE(142),
    [anon_sym_LPAREN] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(37),
  },
  [345] = {
    [sym_number_long] = ACTIONS(1103),
    [sym_number_double] = ACTIONS(1103),
    [anon_sym_DQUOTE] = ACTIONS(1103),
    [anon_sym_COLON] = ACTIONS(1103),
    [anon_sym_COLON_COLON] = ACTIONS(1103),
    [anon_sym_DASH_GT] = ACTIONS(1103),
    [anon_sym_DASH_GT_GT] = ACTIONS(1103),
    [anon_sym_as_DASH_GT] = ACTIONS(1103),
    [anon_sym_some_DASH_GT] = ACTIONS(1103),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1103),
    [anon_sym_cond_DASH_GT] = ACTIONS(1103),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1103),
    [sym__symbol_chars] = ACTIONS(1103),
    [anon_sym_LPAREN] = ACTIONS(1103),
    [anon_sym_LBRACK] = ACTIONS(1103),
    [anon_sym_RBRACK] = ACTIONS(1103),
    [anon_sym_LBRACE] = ACTIONS(1103),
    [anon_sym_POUND] = ACTIONS(1103),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1103),
  },
  [346] = {
    [sym_number_long] = ACTIONS(1326),
    [sym_number_double] = ACTIONS(1326),
    [anon_sym_DQUOTE] = ACTIONS(1326),
    [anon_sym_COLON] = ACTIONS(1326),
    [anon_sym_COLON_COLON] = ACTIONS(1326),
    [anon_sym_DASH_GT] = ACTIONS(1326),
    [anon_sym_DASH_GT_GT] = ACTIONS(1326),
    [anon_sym_as_DASH_GT] = ACTIONS(1326),
    [anon_sym_some_DASH_GT] = ACTIONS(1326),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1326),
    [anon_sym_cond_DASH_GT] = ACTIONS(1326),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1326),
    [sym__symbol_chars] = ACTIONS(1326),
    [anon_sym_LPAREN] = ACTIONS(1326),
    [anon_sym_LBRACK] = ACTIONS(1326),
    [anon_sym_RBRACK] = ACTIONS(1326),
    [anon_sym_LBRACE] = ACTIONS(1326),
    [anon_sym_POUND] = ACTIONS(1326),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1326),
  },
  [347] = {
    [sym_number_long] = ACTIONS(1103),
    [sym_number_double] = ACTIONS(1103),
    [anon_sym_DQUOTE] = ACTIONS(1103),
    [anon_sym_COLON] = ACTIONS(1103),
    [anon_sym_COLON_COLON] = ACTIONS(1103),
    [anon_sym_DASH_GT] = ACTIONS(1103),
    [anon_sym_DASH_GT_GT] = ACTIONS(1103),
    [anon_sym_as_DASH_GT] = ACTIONS(1103),
    [anon_sym_some_DASH_GT] = ACTIONS(1103),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1103),
    [anon_sym_cond_DASH_GT] = ACTIONS(1103),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1103),
    [sym__symbol_chars] = ACTIONS(1103),
    [anon_sym_LPAREN] = ACTIONS(1103),
    [anon_sym_LBRACK] = ACTIONS(1103),
    [anon_sym_LBRACE] = ACTIONS(1103),
    [anon_sym_RBRACE] = ACTIONS(1103),
    [anon_sym_POUND] = ACTIONS(1103),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1103),
  },
  [348] = {
    [sym_number_long] = ACTIONS(1326),
    [sym_number_double] = ACTIONS(1326),
    [anon_sym_DQUOTE] = ACTIONS(1326),
    [anon_sym_COLON] = ACTIONS(1326),
    [anon_sym_COLON_COLON] = ACTIONS(1326),
    [anon_sym_DASH_GT] = ACTIONS(1326),
    [anon_sym_DASH_GT_GT] = ACTIONS(1326),
    [anon_sym_as_DASH_GT] = ACTIONS(1326),
    [anon_sym_some_DASH_GT] = ACTIONS(1326),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1326),
    [anon_sym_cond_DASH_GT] = ACTIONS(1326),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1326),
    [sym__symbol_chars] = ACTIONS(1326),
    [anon_sym_LPAREN] = ACTIONS(1326),
    [anon_sym_LBRACK] = ACTIONS(1326),
    [anon_sym_LBRACE] = ACTIONS(1326),
    [anon_sym_RBRACE] = ACTIONS(1326),
    [anon_sym_POUND] = ACTIONS(1326),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1326),
  },
  [349] = {
    [anon_sym_DASH_GT] = ACTIONS(1311),
    [anon_sym_DASH_GT_GT] = ACTIONS(1309),
    [anon_sym_as_DASH_GT] = ACTIONS(1309),
    [anon_sym_some_DASH_GT] = ACTIONS(1311),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1309),
    [anon_sym_cond_DASH_GT] = ACTIONS(1311),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1309),
    [sym__symbol_chars] = ACTIONS(1311),
    [anon_sym_LPAREN] = ACTIONS(1309),
    [anon_sym_LBRACK] = ACTIONS(1309),
    [anon_sym_LBRACE] = ACTIONS(1309),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1309),
    [anon_sym_POUND] = ACTIONS(1311),
    [anon_sym_POUND_LBRACE] = ACTIONS(1309),
  },
  [350] = {
    [ts_builtin_sym_end] = ACTIONS(1343),
    [sym_nil] = ACTIONS(1345),
    [sym_true] = ACTIONS(1345),
    [sym_false] = ACTIONS(1345),
    [sym_number_long] = ACTIONS(1345),
    [sym_number_double] = ACTIONS(1343),
    [anon_sym_BSLASH] = ACTIONS(1343),
    [anon_sym_DQUOTE] = ACTIONS(1343),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1343),
    [anon_sym_SQUOTE] = ACTIONS(1343),
    [anon_sym_LPARENquote] = ACTIONS(1343),
    [anon_sym_RPAREN] = ACTIONS(1343),
    [anon_sym_COLON] = ACTIONS(1345),
    [anon_sym_COLON_COLON] = ACTIONS(1343),
    [anon_sym_DASH_GT] = ACTIONS(1345),
    [anon_sym_DASH_GT_GT] = ACTIONS(1343),
    [anon_sym_as_DASH_GT] = ACTIONS(1343),
    [anon_sym_some_DASH_GT] = ACTIONS(1345),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1343),
    [anon_sym_cond_DASH_GT] = ACTIONS(1345),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1343),
    [sym__symbol_chars] = ACTIONS(1345),
    [anon_sym_LPAREN] = ACTIONS(1345),
    [anon_sym_LBRACK] = ACTIONS(1343),
    [anon_sym_RBRACK] = ACTIONS(1343),
    [anon_sym_LBRACE] = ACTIONS(1343),
    [anon_sym_RBRACE] = ACTIONS(1343),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1343),
    [anon_sym_POUND] = ACTIONS(1345),
    [anon_sym_POUND_LBRACE] = ACTIONS(1343),
    [anon_sym_SEMI] = ACTIONS(1343),
    [anon_sym_POUND_BANG] = ACTIONS(1343),
    [anon_sym_POUND_] = ACTIONS(1343),
    [anon_sym_LPARENcomment] = ACTIONS(1343),
    [anon_sym_POUND_LPAREN] = ACTIONS(1343),
    [sym_shorthand_fn_arg] = ACTIONS(1343),
    [anon_sym_CARET] = ACTIONS(1345),
    [anon_sym_CARET_COLON] = ACTIONS(1343),
    [anon_sym_CARET_DQUOTE] = ACTIONS(1343),
  },
  [351] = {
    [anon_sym_RPAREN] = ACTIONS(1347),
  },
  [352] = {
    [ts_builtin_sym_end] = ACTIONS(1349),
    [sym_nil] = ACTIONS(1351),
    [sym_true] = ACTIONS(1351),
    [sym_false] = ACTIONS(1351),
    [sym_number_long] = ACTIONS(1351),
    [sym_number_double] = ACTIONS(1349),
    [anon_sym_BSLASH] = ACTIONS(1349),
    [anon_sym_DQUOTE] = ACTIONS(1349),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1349),
    [anon_sym_SQUOTE] = ACTIONS(1349),
    [anon_sym_LPARENquote] = ACTIONS(1349),
    [anon_sym_RPAREN] = ACTIONS(1349),
    [anon_sym_COLON] = ACTIONS(1351),
    [anon_sym_COLON_COLON] = ACTIONS(1349),
    [anon_sym_DASH_GT] = ACTIONS(1351),
    [anon_sym_DASH_GT_GT] = ACTIONS(1349),
    [anon_sym_as_DASH_GT] = ACTIONS(1349),
    [anon_sym_some_DASH_GT] = ACTIONS(1351),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1349),
    [anon_sym_cond_DASH_GT] = ACTIONS(1351),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1349),
    [sym__symbol_chars] = ACTIONS(1351),
    [anon_sym_LPAREN] = ACTIONS(1351),
    [anon_sym_LBRACK] = ACTIONS(1349),
    [anon_sym_RBRACK] = ACTIONS(1349),
    [anon_sym_LBRACE] = ACTIONS(1349),
    [anon_sym_RBRACE] = ACTIONS(1349),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1349),
    [anon_sym_POUND] = ACTIONS(1351),
    [anon_sym_POUND_LBRACE] = ACTIONS(1349),
    [anon_sym_SEMI] = ACTIONS(1349),
    [anon_sym_POUND_BANG] = ACTIONS(1349),
    [anon_sym_POUND_] = ACTIONS(1349),
    [anon_sym_LPARENcomment] = ACTIONS(1349),
    [anon_sym_POUND_LPAREN] = ACTIONS(1349),
    [sym_shorthand_fn_arg] = ACTIONS(1349),
    [anon_sym_CARET] = ACTIONS(1351),
    [anon_sym_CARET_COLON] = ACTIONS(1349),
    [anon_sym_CARET_DQUOTE] = ACTIONS(1349),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(42),
  [9] = {.count = 1, .reusable = false}, SHIFT(2),
  [11] = {.count = 1, .reusable = false}, SHIFT(27),
  [13] = {.count = 1, .reusable = true}, SHIFT(27),
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
  [57] = {.count = 1, .reusable = false}, SHIFT(23),
  [59] = {.count = 1, .reusable = true}, SHIFT(24),
  [61] = {.count = 1, .reusable = true}, SHIFT(25),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [65] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 1),
  [67] = {.count = 1, .reusable = false}, SHIFT(44),
  [69] = {.count = 1, .reusable = false}, SHIFT(45),
  [71] = {.count = 1, .reusable = false}, SHIFT(46),
  [73] = {.count = 1, .reusable = false}, SHIFT(47),
  [75] = {.count = 1, .reusable = false}, SHIFT(48),
  [77] = {.count = 1, .reusable = false}, SHIFT(49),
  [79] = {.count = 1, .reusable = false}, SHIFT(50),
  [81] = {.count = 1, .reusable = false}, SHIFT(51),
  [83] = {.count = 1, .reusable = false}, SHIFT(54),
  [85] = {.count = 1, .reusable = true}, SHIFT(52),
  [87] = {.count = 1, .reusable = true}, SHIFT(53),
  [89] = {.count = 1, .reusable = true}, SHIFT(55),
  [91] = {.count = 1, .reusable = true}, SHIFT(56),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_threading_macro, 1),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym_threading_macro, 1),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym__symbol, 1),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym__symbol, 1),
  [101] = {.count = 1, .reusable = true}, SHIFT(57),
  [103] = {.count = 1, .reusable = false}, SHIFT(63),
  [105] = {.count = 1, .reusable = true}, SHIFT(58),
  [107] = {.count = 1, .reusable = true}, SHIFT(59),
  [109] = {.count = 1, .reusable = true}, SHIFT(60),
  [111] = {.count = 1, .reusable = false}, SHIFT(61),
  [113] = {.count = 1, .reusable = false}, SHIFT(62),
  [115] = {.count = 1, .reusable = false}, SHIFT(67),
  [117] = {.count = 1, .reusable = true}, SHIFT(64),
  [119] = {.count = 1, .reusable = true}, SHIFT(65),
  [121] = {.count = 1, .reusable = true}, SHIFT(66),
  [123] = {.count = 1, .reusable = false}, SHIFT(71),
  [125] = {.count = 1, .reusable = true}, SHIFT(68),
  [127] = {.count = 1, .reusable = true}, SHIFT(69),
  [129] = {.count = 1, .reusable = true}, SHIFT(70),
  [131] = {.count = 1, .reusable = true}, SHIFT(73),
  [133] = {.count = 1, .reusable = true}, SHIFT(75),
  [135] = {.count = 1, .reusable = false}, SHIFT(79),
  [137] = {.count = 1, .reusable = true}, SHIFT(76),
  [139] = {.count = 1, .reusable = true}, SHIFT(77),
  [141] = {.count = 1, .reusable = true}, SHIFT(78),
  [143] = {.count = 1, .reusable = false}, SHIFT(80),
  [145] = {.count = 1, .reusable = false}, SHIFT(81),
  [147] = {.count = 1, .reusable = false}, SHIFT(91),
  [149] = {.count = 1, .reusable = false}, SHIFT(82),
  [151] = {.count = 1, .reusable = false}, SHIFT(83),
  [153] = {.count = 1, .reusable = false}, SHIFT(84),
  [155] = {.count = 1, .reusable = false}, SHIFT(85),
  [157] = {.count = 1, .reusable = false}, SHIFT(86),
  [159] = {.count = 1, .reusable = false}, SHIFT(87),
  [161] = {.count = 1, .reusable = false}, SHIFT(88),
  [163] = {.count = 1, .reusable = false}, SHIFT(89),
  [165] = {.count = 1, .reusable = false}, SHIFT(90),
  [167] = {.count = 1, .reusable = false}, SHIFT(92),
  [169] = {.count = 1, .reusable = false}, SHIFT(103),
  [171] = {.count = 1, .reusable = false}, SHIFT(93),
  [173] = {.count = 1, .reusable = false}, SHIFT(94),
  [175] = {.count = 1, .reusable = false}, SHIFT(95),
  [177] = {.count = 1, .reusable = false}, SHIFT(96),
  [179] = {.count = 1, .reusable = false}, SHIFT(97),
  [181] = {.count = 1, .reusable = false}, SHIFT(98),
  [183] = {.count = 1, .reusable = false}, SHIFT(99),
  [185] = {.count = 1, .reusable = false}, SHIFT(100),
  [187] = {.count = 1, .reusable = false}, SHIFT(101),
  [189] = {.count = 1, .reusable = false}, SHIFT(102),
  [191] = {.count = 1, .reusable = false}, SHIFT(107),
  [193] = {.count = 1, .reusable = true}, SHIFT(104),
  [195] = {.count = 1, .reusable = true}, SHIFT(105),
  [197] = {.count = 1, .reusable = true}, SHIFT(106),
  [199] = {.count = 1, .reusable = true}, SHIFT(107),
  [201] = {.count = 1, .reusable = true}, SHIFT(108),
  [203] = {.count = 1, .reusable = true}, SHIFT(109),
  [205] = {.count = 1, .reusable = true}, SHIFT(110),
  [207] = {.count = 1, .reusable = false}, SHIFT(111),
  [209] = {.count = 1, .reusable = false}, SHIFT(108),
  [211] = {.count = 1, .reusable = false}, SHIFT(114),
  [213] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_number, 1),
  [217] = {.count = 1, .reusable = false}, REDUCE(sym_number, 1),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_character, 1),
  [221] = {.count = 1, .reusable = false}, REDUCE(sym_character, 1),
  [223] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [225] = {.count = 1, .reusable = false}, REDUCE(sym_string, 1),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_regex, 1),
  [229] = {.count = 1, .reusable = false}, REDUCE(sym_regex, 1),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_quote, 1),
  [233] = {.count = 1, .reusable = false}, REDUCE(sym_quote, 1),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_keyword, 1),
  [237] = {.count = 1, .reusable = false}, REDUCE(sym_keyword, 1),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_symbol, 1),
  [241] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 1),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_list, 1),
  [245] = {.count = 1, .reusable = false}, REDUCE(sym_list, 1),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_vector, 1),
  [249] = {.count = 1, .reusable = false}, REDUCE(sym_vector, 1),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map, 1),
  [253] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map, 1),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_set, 1),
  [257] = {.count = 1, .reusable = false}, REDUCE(sym_set, 1),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [261] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 1),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_function, 1),
  [265] = {.count = 1, .reusable = false}, REDUCE(sym_function, 1),
  [267] = {.count = 1, .reusable = true}, SHIFT(115),
  [269] = {.count = 1, .reusable = false}, REDUCE(sym_metadata, 1),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym_metadata, 1),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [275] = {.count = 1, .reusable = false}, SHIFT(117),
  [277] = {.count = 1, .reusable = false}, SHIFT(118),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym__character, 2),
  [281] = {.count = 1, .reusable = false}, REDUCE(sym__character, 2),
  [283] = {.count = 1, .reusable = true}, SHIFT(120),
  [285] = {.count = 1, .reusable = true}, SHIFT(121),
  [287] = {.count = 1, .reusable = false}, SHIFT(121),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym__string, 2),
  [291] = {.count = 1, .reusable = false}, REDUCE(sym__string, 2),
  [293] = {.count = 1, .reusable = false}, SHIFT(122),
  [295] = {.count = 1, .reusable = false}, SHIFT(123),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym__regex, 2),
  [299] = {.count = 1, .reusable = false}, REDUCE(sym__regex, 2),
  [301] = {.count = 1, .reusable = false}, SHIFT(124),
  [303] = {.count = 1, .reusable = false}, SHIFT(125),
  [305] = {.count = 1, .reusable = true}, REDUCE(sym__quote, 2),
  [307] = {.count = 1, .reusable = false}, REDUCE(sym__quote, 2),
  [309] = {.count = 1, .reusable = false}, SHIFT(126),
  [311] = {.count = 1, .reusable = false}, SHIFT(127),
  [313] = {.count = 1, .reusable = true}, SHIFT(128),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym__unqualified_keyword, 2),
  [317] = {.count = 1, .reusable = false}, REDUCE(sym__unqualified_keyword, 2),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_keyword, 2),
  [321] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_keyword, 2),
  [323] = {.count = 1, .reusable = true}, SHIFT(129),
  [325] = {.count = 1, .reusable = true}, SHIFT(130),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym__list, 2),
  [329] = {.count = 1, .reusable = false}, REDUCE(sym__list, 2),
  [331] = {.count = 1, .reusable = false}, SHIFT(131),
  [333] = {.count = 1, .reusable = false}, SHIFT(132),
  [335] = {.count = 1, .reusable = false}, SHIFT(133),
  [337] = {.count = 1, .reusable = true}, SHIFT(133),
  [339] = {.count = 1, .reusable = false}, SHIFT(134),
  [341] = {.count = 1, .reusable = true}, SHIFT(135),
  [343] = {.count = 1, .reusable = false}, SHIFT(147),
  [345] = {.count = 1, .reusable = true}, SHIFT(146),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym__vector, 2),
  [349] = {.count = 1, .reusable = false}, REDUCE(sym__vector, 2),
  [351] = {.count = 1, .reusable = false}, SHIFT(148),
  [353] = {.count = 1, .reusable = false}, SHIFT(149),
  [355] = {.count = 1, .reusable = false}, SHIFT(151),
  [357] = {.count = 1, .reusable = true}, SHIFT(150),
  [359] = {.count = 1, .reusable = true}, REDUCE(sym__hash_map, 2),
  [361] = {.count = 1, .reusable = false}, REDUCE(sym__hash_map, 2),
  [363] = {.count = 1, .reusable = false}, SHIFT(152),
  [365] = {.count = 1, .reusable = false}, SHIFT(153),
  [367] = {.count = 1, .reusable = false}, SHIFT(154),
  [369] = {.count = 1, .reusable = true}, SHIFT(155),
  [371] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 2),
  [373] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 2),
  [375] = {.count = 1, .reusable = true}, SHIFT(157),
  [377] = {.count = 1, .reusable = true}, SHIFT(158),
  [379] = {.count = 1, .reusable = true}, REDUCE(sym__set, 2),
  [381] = {.count = 1, .reusable = false}, REDUCE(sym__set, 2),
  [383] = {.count = 1, .reusable = false}, SHIFT(159),
  [385] = {.count = 1, .reusable = false}, SHIFT(160),
  [387] = {.count = 1, .reusable = false}, SHIFT(162),
  [389] = {.count = 1, .reusable = true}, SHIFT(161),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_semicolon, 2),
  [393] = {.count = 1, .reusable = false}, REDUCE(sym_semicolon, 2),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym_shebang_line, 2),
  [397] = {.count = 1, .reusable = false}, REDUCE(sym_shebang_line, 2),
  [399] = {.count = 1, .reusable = false}, SHIFT(163),
  [401] = {.count = 1, .reusable = false}, SHIFT(164),
  [403] = {.count = 1, .reusable = true}, SHIFT(165),
  [405] = {.count = 1, .reusable = true}, SHIFT(166),
  [407] = {.count = 1, .reusable = false}, SHIFT(167),
  [409] = {.count = 1, .reusable = false}, SHIFT(169),
  [411] = {.count = 1, .reusable = false}, SHIFT(168),
  [413] = {.count = 1, .reusable = false}, SHIFT(180),
  [415] = {.count = 1, .reusable = false}, SHIFT(170),
  [417] = {.count = 1, .reusable = false}, SHIFT(171),
  [419] = {.count = 1, .reusable = false}, SHIFT(172),
  [421] = {.count = 1, .reusable = false}, SHIFT(173),
  [423] = {.count = 1, .reusable = false}, SHIFT(174),
  [425] = {.count = 1, .reusable = false}, SHIFT(175),
  [427] = {.count = 1, .reusable = false}, SHIFT(176),
  [429] = {.count = 1, .reusable = false}, SHIFT(177),
  [431] = {.count = 1, .reusable = false}, SHIFT(178),
  [433] = {.count = 1, .reusable = false}, SHIFT(179),
  [435] = {.count = 1, .reusable = false}, SHIFT(191),
  [437] = {.count = 1, .reusable = false}, SHIFT(181),
  [439] = {.count = 1, .reusable = false}, SHIFT(182),
  [441] = {.count = 1, .reusable = false}, SHIFT(183),
  [443] = {.count = 1, .reusable = false}, SHIFT(184),
  [445] = {.count = 1, .reusable = false}, SHIFT(185),
  [447] = {.count = 1, .reusable = false}, SHIFT(186),
  [449] = {.count = 1, .reusable = false}, SHIFT(187),
  [451] = {.count = 1, .reusable = false}, SHIFT(188),
  [453] = {.count = 1, .reusable = false}, SHIFT(189),
  [455] = {.count = 1, .reusable = false}, SHIFT(190),
  [457] = {.count = 1, .reusable = true}, SHIFT(192),
  [459] = {.count = 1, .reusable = true}, REDUCE(sym_ignore_form, 2),
  [461] = {.count = 1, .reusable = false}, REDUCE(sym_ignore_form, 2),
  [463] = {.count = 1, .reusable = true}, SHIFT(193),
  [465] = {.count = 1, .reusable = false}, SHIFT(194),
  [467] = {.count = 1, .reusable = false}, SHIFT(195),
  [469] = {.count = 1, .reusable = false}, SHIFT(196),
  [471] = {.count = 1, .reusable = false}, SHIFT(197),
  [473] = {.count = 1, .reusable = true}, REDUCE(sym_comment_macro, 2),
  [475] = {.count = 1, .reusable = false}, REDUCE(sym_comment_macro, 2),
  [477] = {.count = 1, .reusable = true}, SHIFT(198),
  [479] = {.count = 1, .reusable = true}, SHIFT(199),
  [481] = {.count = 1, .reusable = false}, SHIFT(200),
  [483] = {.count = 1, .reusable = false}, SHIFT(202),
  [485] = {.count = 1, .reusable = false}, SHIFT(201),
  [487] = {.count = 1, .reusable = false}, SHIFT(204),
  [489] = {.count = 1, .reusable = false}, SHIFT(203),
  [491] = {.count = 1, .reusable = false}, SHIFT(206),
  [493] = {.count = 1, .reusable = false}, SHIFT(205),
  [495] = {.count = 1, .reusable = true}, SHIFT(207),
  [497] = {.count = 1, .reusable = false}, SHIFT(209),
  [499] = {.count = 1, .reusable = false}, SHIFT(208),
  [501] = {.count = 1, .reusable = true}, REDUCE(sym_shorthand_fn, 2),
  [503] = {.count = 1, .reusable = false}, REDUCE(sym_shorthand_fn, 2),
  [505] = {.count = 1, .reusable = false}, SHIFT(210),
  [507] = {.count = 1, .reusable = false}, SHIFT(211),
  [509] = {.count = 1, .reusable = false}, SHIFT(213),
  [511] = {.count = 1, .reusable = true}, SHIFT(212),
  [513] = {.count = 1, .reusable = true}, SHIFT(213),
  [515] = {.count = 1, .reusable = false}, REDUCE(sym_metadata_shorthand, 2),
  [517] = {.count = 1, .reusable = true}, REDUCE(sym_metadata_shorthand, 2),
  [519] = {.count = 1, .reusable = true}, SHIFT(214),
  [521] = {.count = 1, .reusable = true}, SHIFT(216),
  [523] = {.count = 1, .reusable = true}, SHIFT(218),
  [525] = {.count = 1, .reusable = false}, REDUCE(sym__metadata_map, 2),
  [527] = {.count = 1, .reusable = true}, REDUCE(sym__metadata_map, 2),
  [529] = {.count = 1, .reusable = false}, SHIFT(219),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym__collection_literal, 2),
  [533] = {.count = 1, .reusable = false}, REDUCE(sym__collection_literal, 2),
  [535] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [537] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(117),
  [540] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [543] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(27),
  [546] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(27),
  [549] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [552] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [555] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [558] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [561] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [564] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [567] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [570] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [573] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [576] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [579] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [582] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [585] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [588] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [591] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(16),
  [594] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [597] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [600] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(19),
  [603] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(20),
  [606] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(21),
  [609] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(22),
  [612] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [615] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(24),
  [618] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(25),
  [621] = {.count = 1, .reusable = true}, REDUCE(aux_sym_metadata_repeat1, 2),
  [623] = {.count = 1, .reusable = false}, REDUCE(aux_sym_metadata_repeat1, 2),
  [625] = {.count = 2, .reusable = false}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(118),
  [628] = {.count = 2, .reusable = true}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(24),
  [631] = {.count = 2, .reusable = true}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(25),
  [634] = {.count = 1, .reusable = true}, SHIFT(220),
  [636] = {.count = 1, .reusable = true}, REDUCE(sym__octal_char, 2),
  [638] = {.count = 1, .reusable = false}, REDUCE(sym__octal_char, 2),
  [640] = {.count = 1, .reusable = true}, REDUCE(sym__string, 3),
  [642] = {.count = 1, .reusable = false}, REDUCE(sym__string, 3),
  [644] = {.count = 1, .reusable = false}, REDUCE(aux_sym__string_repeat1, 2),
  [646] = {.count = 2, .reusable = false}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(123),
  [649] = {.count = 1, .reusable = true}, REDUCE(sym__regex, 3),
  [651] = {.count = 1, .reusable = false}, REDUCE(sym__regex, 3),
  [653] = {.count = 1, .reusable = false}, REDUCE(aux_sym__regex_repeat1, 2),
  [655] = {.count = 2, .reusable = false}, REDUCE(aux_sym__regex_repeat1, 2), SHIFT_REPEAT(125),
  [658] = {.count = 1, .reusable = true}, SHIFT(221),
  [660] = {.count = 1, .reusable = false}, SHIFT(222),
  [662] = {.count = 1, .reusable = true}, REDUCE(sym__quote, 3),
  [664] = {.count = 1, .reusable = false}, REDUCE(sym__quote, 3),
  [666] = {.count = 1, .reusable = true}, SHIFT(223),
  [668] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_symbol, 3),
  [670] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_symbol, 3),
  [672] = {.count = 1, .reusable = true}, SHIFT(224),
  [674] = {.count = 1, .reusable = false}, SHIFT(225),
  [676] = {.count = 1, .reusable = true}, SHIFT(226),
  [678] = {.count = 1, .reusable = true}, REDUCE(sym_function_name, 1),
  [680] = {.count = 1, .reusable = false}, REDUCE(sym_function_name, 1),
  [682] = {.count = 1, .reusable = false}, REDUCE(sym_params, 1),
  [684] = {.count = 1, .reusable = true}, REDUCE(sym_params, 1),
  [686] = {.count = 1, .reusable = true}, SHIFT(228),
  [688] = {.count = 1, .reusable = false}, SHIFT(231),
  [690] = {.count = 1, .reusable = true}, REDUCE(sym__single_arity_fn, 1),
  [692] = {.count = 1, .reusable = true}, REDUCE(sym__multi_arity_fn, 1),
  [694] = {.count = 1, .reusable = true}, SHIFT(233),
  [696] = {.count = 1, .reusable = true}, REDUCE(sym__list, 3),
  [698] = {.count = 1, .reusable = false}, REDUCE(sym__list, 3),
  [700] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(147),
  [703] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(58),
  [706] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(60),
  [709] = {.count = 1, .reusable = true}, SHIFT(242),
  [711] = {.count = 1, .reusable = false}, SHIFT(243),
  [713] = {.count = 1, .reusable = true}, REDUCE(sym__vector, 3),
  [715] = {.count = 1, .reusable = false}, REDUCE(sym__vector, 3),
  [717] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(151),
  [720] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(64),
  [723] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(66),
  [726] = {.count = 1, .reusable = true}, SHIFT(244),
  [728] = {.count = 1, .reusable = false}, SHIFT(245),
  [730] = {.count = 1, .reusable = false}, REDUCE(sym__hash_map_kv_pair, 2),
  [732] = {.count = 1, .reusable = true}, REDUCE(sym__hash_map_kv_pair, 2),
  [734] = {.count = 1, .reusable = true}, REDUCE(sym__hash_map, 3),
  [736] = {.count = 1, .reusable = false}, REDUCE(sym__hash_map, 3),
  [738] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(71),
  [741] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(2),
  [744] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(27),
  [747] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(27),
  [750] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(3),
  [753] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(4),
  [756] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(5),
  [759] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(68),
  [762] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(7),
  [765] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(8),
  [768] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(9),
  [771] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(10),
  [774] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(10),
  [777] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(11),
  [780] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(12),
  [783] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(13),
  [786] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(14),
  [789] = {.count = 1, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2),
  [791] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(15),
  [794] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(16),
  [797] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(17),
  [800] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(18),
  [803] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(19),
  [806] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(70),
  [809] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(21),
  [812] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(22),
  [815] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(23),
  [818] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(24),
  [821] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(25),
  [824] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 3),
  [826] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 3),
  [828] = {.count = 1, .reusable = true}, SHIFT(246),
  [830] = {.count = 1, .reusable = true}, SHIFT(248),
  [832] = {.count = 1, .reusable = false}, SHIFT(249),
  [834] = {.count = 1, .reusable = true}, REDUCE(sym__set, 3),
  [836] = {.count = 1, .reusable = false}, REDUCE(sym__set, 3),
  [838] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(162),
  [841] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(76),
  [844] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(78),
  [847] = {.count = 1, .reusable = false}, SHIFT(250),
  [849] = {.count = 1, .reusable = false}, SHIFT(251),
  [851] = {.count = 1, .reusable = true}, SHIFT(252),
  [853] = {.count = 1, .reusable = true}, REDUCE(sym__paren_sequence, 2),
  [855] = {.count = 1, .reusable = false}, REDUCE(sym__paren_sequence, 2),
  [857] = {.count = 1, .reusable = false}, SHIFT(253),
  [859] = {.count = 1, .reusable = false}, SHIFT(254),
  [861] = {.count = 1, .reusable = false}, SHIFT(255),
  [863] = {.count = 1, .reusable = true}, SHIFT(256),
  [865] = {.count = 1, .reusable = true}, SHIFT(257),
  [867] = {.count = 1, .reusable = false}, SHIFT(258),
  [869] = {.count = 1, .reusable = false}, SHIFT(260),
  [871] = {.count = 1, .reusable = false}, SHIFT(259),
  [873] = {.count = 1, .reusable = false}, SHIFT(262),
  [875] = {.count = 1, .reusable = false}, SHIFT(261),
  [877] = {.count = 1, .reusable = true}, REDUCE(sym__bracket_sequence, 2),
  [879] = {.count = 1, .reusable = false}, REDUCE(sym__bracket_sequence, 2),
  [881] = {.count = 1, .reusable = false}, SHIFT(264),
  [883] = {.count = 1, .reusable = false}, SHIFT(263),
  [885] = {.count = 1, .reusable = true}, SHIFT(265),
  [887] = {.count = 1, .reusable = false}, SHIFT(267),
  [889] = {.count = 1, .reusable = false}, SHIFT(266),
  [891] = {.count = 1, .reusable = false}, SHIFT(268),
  [893] = {.count = 1, .reusable = false}, SHIFT(269),
  [895] = {.count = 1, .reusable = true}, SHIFT(270),
  [897] = {.count = 1, .reusable = true}, SHIFT(271),
  [899] = {.count = 1, .reusable = false}, SHIFT(272),
  [901] = {.count = 1, .reusable = false}, SHIFT(274),
  [903] = {.count = 1, .reusable = false}, SHIFT(273),
  [905] = {.count = 1, .reusable = false}, SHIFT(276),
  [907] = {.count = 1, .reusable = false}, SHIFT(275),
  [909] = {.count = 1, .reusable = false}, SHIFT(278),
  [911] = {.count = 1, .reusable = false}, SHIFT(277),
  [913] = {.count = 1, .reusable = true}, REDUCE(sym__curly_brace_sequence, 2),
  [915] = {.count = 1, .reusable = false}, REDUCE(sym__curly_brace_sequence, 2),
  [917] = {.count = 1, .reusable = true}, SHIFT(279),
  [919] = {.count = 1, .reusable = false}, SHIFT(281),
  [921] = {.count = 1, .reusable = false}, SHIFT(280),
  [923] = {.count = 1, .reusable = false}, SHIFT(282),
  [925] = {.count = 1, .reusable = true}, REDUCE(sym_ignore_form, 3),
  [927] = {.count = 1, .reusable = false}, REDUCE(sym_ignore_form, 3),
  [929] = {.count = 1, .reusable = true}, SHIFT(283),
  [931] = {.count = 1, .reusable = true}, SHIFT(284),
  [933] = {.count = 1, .reusable = false}, REDUCE(aux_sym_ignore_form_repeat1, 2),
  [935] = {.count = 2, .reusable = false}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(195),
  [938] = {.count = 1, .reusable = false}, SHIFT(285),
  [940] = {.count = 1, .reusable = false}, SHIFT(286),
  [942] = {.count = 1, .reusable = true}, SHIFT(287),
  [944] = {.count = 1, .reusable = false}, SHIFT(288),
  [946] = {.count = 1, .reusable = false}, SHIFT(289),
  [948] = {.count = 1, .reusable = false}, SHIFT(290),
  [950] = {.count = 1, .reusable = false}, SHIFT(291),
  [952] = {.count = 1, .reusable = true}, REDUCE(sym_comment_macro, 3),
  [954] = {.count = 1, .reusable = false}, REDUCE(sym_comment_macro, 3),
  [956] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(209),
  [959] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(93),
  [962] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2),
  [964] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(95),
  [967] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(96),
  [970] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(97),
  [973] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(98),
  [976] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(99),
  [979] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(100),
  [982] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(101),
  [985] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(102),
  [988] = {.count = 1, .reusable = true}, SHIFT(292),
  [990] = {.count = 1, .reusable = false}, SHIFT(293),
  [992] = {.count = 1, .reusable = true}, REDUCE(sym_shorthand_fn, 3),
  [994] = {.count = 1, .reusable = false}, REDUCE(sym_shorthand_fn, 3),
  [996] = {.count = 2, .reusable = false}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(213),
  [999] = {.count = 2, .reusable = false}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(2),
  [1002] = {.count = 2, .reusable = false}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(27),
  [1005] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(27),
  [1008] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(3),
  [1011] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(4),
  [1014] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(5),
  [1017] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(104),
  [1020] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(7),
  [1023] = {.count = 1, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2),
  [1025] = {.count = 2, .reusable = false}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(8),
  [1028] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(9),
  [1031] = {.count = 2, .reusable = false}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(10),
  [1034] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(10),
  [1037] = {.count = 2, .reusable = false}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(11),
  [1040] = {.count = 2, .reusable = false}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(12),
  [1043] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(13),
  [1046] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(14),
  [1049] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(15),
  [1052] = {.count = 2, .reusable = false}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(16),
  [1055] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(17),
  [1058] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(18),
  [1061] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(19),
  [1064] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(106),
  [1067] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(21),
  [1070] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(22),
  [1073] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(213),
  [1076] = {.count = 2, .reusable = false}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(23),
  [1079] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(24),
  [1082] = {.count = 2, .reusable = true}, REDUCE(aux_sym_shorthand_fn_repeat1, 2), SHIFT_REPEAT(25),
  [1085] = {.count = 1, .reusable = true}, SHIFT(294),
  [1087] = {.count = 1, .reusable = true}, SHIFT(295),
  [1089] = {.count = 1, .reusable = true}, SHIFT(296),
  [1091] = {.count = 1, .reusable = false}, REDUCE(sym_metadata_shorthand, 3),
  [1093] = {.count = 1, .reusable = true}, REDUCE(sym_metadata_shorthand, 3),
  [1095] = {.count = 1, .reusable = true}, SHIFT(297),
  [1097] = {.count = 1, .reusable = true}, SHIFT(298),
  [1099] = {.count = 1, .reusable = true}, SHIFT(299),
  [1101] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_keyword, 4),
  [1103] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_keyword, 4),
  [1105] = {.count = 1, .reusable = true}, SHIFT(300),
  [1107] = {.count = 1, .reusable = true}, SHIFT(301),
  [1109] = {.count = 1, .reusable = true}, SHIFT(302),
  [1111] = {.count = 1, .reusable = true}, SHIFT(303),
  [1113] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_fn, 4),
  [1115] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_fn, 4),
  [1117] = {.count = 1, .reusable = true}, SHIFT(304),
  [1119] = {.count = 1, .reusable = true}, REDUCE(sym__single_arity_fn, 2),
  [1121] = {.count = 1, .reusable = true}, REDUCE(sym_function_body, 1),
  [1123] = {.count = 1, .reusable = true}, REDUCE(aux_sym__multi_arity_fn_repeat1, 2),
  [1125] = {.count = 2, .reusable = true}, REDUCE(aux_sym__multi_arity_fn_repeat1, 2), SHIFT_REPEAT(135),
  [1128] = {.count = 1, .reusable = false}, SHIFT(305),
  [1130] = {.count = 1, .reusable = false}, SHIFT(306),
  [1132] = {.count = 1, .reusable = true}, REDUCE(sym_docstring, 1),
  [1134] = {.count = 1, .reusable = false}, REDUCE(sym_docstring, 1),
  [1136] = {.count = 1, .reusable = true}, REDUCE(sym_attr_map, 1),
  [1138] = {.count = 1, .reusable = true}, SHIFT(307),
  [1140] = {.count = 1, .reusable = true}, SHIFT(311),
  [1142] = {.count = 1, .reusable = true}, SHIFT(312),
  [1144] = {.count = 1, .reusable = true}, SHIFT(313),
  [1146] = {.count = 1, .reusable = true}, SHIFT(314),
  [1148] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 4),
  [1150] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 4),
  [1152] = {.count = 1, .reusable = true}, SHIFT(315),
  [1154] = {.count = 1, .reusable = true}, SHIFT(316),
  [1156] = {.count = 1, .reusable = true}, SHIFT(317),
  [1158] = {.count = 1, .reusable = true}, SHIFT(318),
  [1160] = {.count = 1, .reusable = true}, REDUCE(sym__paren_sequence, 3),
  [1162] = {.count = 1, .reusable = false}, REDUCE(sym__paren_sequence, 3),
  [1164] = {.count = 1, .reusable = false}, SHIFT(319),
  [1166] = {.count = 1, .reusable = false}, SHIFT(320),
  [1168] = {.count = 1, .reusable = true}, SHIFT(321),
  [1170] = {.count = 1, .reusable = false}, SHIFT(322),
  [1172] = {.count = 1, .reusable = false}, SHIFT(323),
  [1174] = {.count = 1, .reusable = false}, SHIFT(324),
  [1176] = {.count = 1, .reusable = false}, SHIFT(325),
  [1178] = {.count = 1, .reusable = true}, REDUCE(sym__bracket_sequence, 3),
  [1180] = {.count = 1, .reusable = false}, REDUCE(sym__bracket_sequence, 3),
  [1182] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(267),
  [1185] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(170),
  [1188] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(171),
  [1191] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(172),
  [1194] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(173),
  [1197] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(174),
  [1200] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(175),
  [1203] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(176),
  [1206] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(178),
  [1209] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(179),
  [1212] = {.count = 1, .reusable = false}, SHIFT(326),
  [1214] = {.count = 1, .reusable = false}, SHIFT(327),
  [1216] = {.count = 1, .reusable = true}, SHIFT(328),
  [1218] = {.count = 1, .reusable = false}, SHIFT(329),
  [1220] = {.count = 1, .reusable = false}, SHIFT(330),
  [1222] = {.count = 1, .reusable = false}, SHIFT(331),
  [1224] = {.count = 1, .reusable = false}, SHIFT(332),
  [1226] = {.count = 1, .reusable = true}, REDUCE(sym__curly_brace_sequence, 3),
  [1228] = {.count = 1, .reusable = false}, REDUCE(sym__curly_brace_sequence, 3),
  [1230] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(281),
  [1233] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(181),
  [1236] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(182),
  [1239] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(183),
  [1242] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(184),
  [1245] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(185),
  [1248] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(186),
  [1251] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(187),
  [1254] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(188),
  [1257] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(190),
  [1260] = {.count = 1, .reusable = false}, SHIFT(333),
  [1262] = {.count = 1, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2),
  [1264] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(283),
  [1267] = {.count = 1, .reusable = true}, REDUCE(sym_ignore_form, 4),
  [1269] = {.count = 1, .reusable = false}, REDUCE(sym_ignore_form, 4),
  [1271] = {.count = 1, .reusable = true}, SHIFT(334),
  [1273] = {.count = 1, .reusable = false}, SHIFT(335),
  [1275] = {.count = 1, .reusable = true}, SHIFT(336),
  [1277] = {.count = 1, .reusable = true}, SHIFT(337),
  [1279] = {.count = 1, .reusable = true}, SHIFT(338),
  [1281] = {.count = 1, .reusable = true}, SHIFT(340),
  [1283] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(298),
  [1286] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(300),
  [1289] = {.count = 1, .reusable = true}, REDUCE(aux_sym__multi_arity_fn_repeat1, 3),
  [1291] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_fn, 5),
  [1293] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_fn, 5),
  [1295] = {.count = 1, .reusable = false}, SHIFT(341),
  [1297] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 5),
  [1299] = {.count = 1, .reusable = false}, REDUCE(sym_defn, 5),
  [1301] = {.count = 1, .reusable = true}, SHIFT(342),
  [1303] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(311),
  [1306] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(313),
  [1309] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 5),
  [1311] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 5),
  [1313] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(316),
  [1316] = {.count = 1, .reusable = true}, SHIFT(345),
  [1318] = {.count = 1, .reusable = false}, SHIFT(346),
  [1320] = {.count = 1, .reusable = true}, SHIFT(347),
  [1322] = {.count = 1, .reusable = false}, SHIFT(348),
  [1324] = {.count = 1, .reusable = true}, REDUCE(sym__curly_brace_sequence, 4),
  [1326] = {.count = 1, .reusable = false}, REDUCE(sym__curly_brace_sequence, 4),
  [1328] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(336),
  [1331] = {.count = 1, .reusable = true}, SHIFT(349),
  [1333] = {.count = 1, .reusable = true}, REDUCE(sym__unicode_char, 5),
  [1335] = {.count = 1, .reusable = false}, REDUCE(sym__unicode_char, 5),
  [1337] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 6),
  [1339] = {.count = 1, .reusable = false}, REDUCE(sym_defn, 6),
  [1341] = {.count = 1, .reusable = true}, SHIFT(350),
  [1343] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 7),
  [1345] = {.count = 1, .reusable = false}, REDUCE(sym_defn, 7),
  [1347] = {.count = 1, .reusable = true}, SHIFT(352),
  [1349] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 8),
  [1351] = {.count = 1, .reusable = false}, REDUCE(sym_defn, 8),
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
