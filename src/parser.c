#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 205
#define SYMBOL_COUNT 133
#define ALIAS_COUNT 0
#define TOKEN_COUNT 65
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
  anon_sym_comment = 52,
  anon_sym_fn = 53,
  anon_sym_POUND_LPAREN = 54,
  sym_shorthand_function_arg = 55,
  anon_sym_defn = 56,
  anon_sym_defn_DASH = 57,
  anon_sym_CARET = 58,
  anon_sym_CARET_COLON = 59,
  anon_sym_CARET_DQUOTE = 60,
  anon_sym_BQUOTE = 61,
  anon_sym_TILDE = 62,
  anon_sym_TILDE_AT = 63,
  sym_gensym = 64,
  sym_program = 65,
  sym__anything = 66,
  sym__literals = 67,
  sym__collection_literals = 68,
  sym_boolean = 69,
  sym_number = 70,
  sym__number = 71,
  sym_character = 72,
  sym__character = 73,
  sym__special_char = 74,
  sym__unicode_char = 75,
  sym__octal_char = 76,
  sym__octal_num = 77,
  sym_string = 78,
  sym__string = 79,
  sym_regex = 80,
  sym__regex = 81,
  sym_quote = 82,
  sym__quote = 83,
  sym_keyword = 84,
  sym__keyword = 85,
  sym__unqualified_keyword = 86,
  sym_qualified_keyword = 87,
  sym_symbol = 88,
  sym__symbol = 89,
  sym_threading_macro = 90,
  sym_qualified_symbol = 91,
  sym_list = 92,
  sym__list = 93,
  sym_vector = 94,
  sym__vector = 95,
  sym_hash_map = 96,
  sym__hash_map = 97,
  sym_namespace_map = 98,
  sym__hash_map_kv_pair = 99,
  sym__hash_map_key = 100,
  sym__hash_map_value = 101,
  sym_set = 102,
  sym__set = 103,
  sym_comment = 104,
  sym_semicolon = 105,
  sym_shebang_line = 106,
  sym_ignore_form = 107,
  sym_comment_macro = 108,
  sym__functions = 109,
  sym_anonymous_function = 110,
  sym__after_the_fn_name = 111,
  sym_function_name = 112,
  sym__single_arity_fn = 113,
  sym__multi_arity_fn = 114,
  sym_function_body = 115,
  sym_params = 116,
  sym_shorthand_function = 117,
  sym_defn = 118,
  sym_docstring = 119,
  sym_attr_map = 120,
  sym_metadata = 121,
  sym__metadata_map = 122,
  sym_metadata_shorthand = 123,
  sym_syntax_quote = 124,
  sym_unquote = 125,
  sym_unquote_splice = 126,
  aux_sym_program_repeat1 = 127,
  aux_sym__string_repeat1 = 128,
  aux_sym__regex_repeat1 = 129,
  aux_sym__hash_map_repeat1 = 130,
  aux_sym__multi_arity_fn_repeat1 = 131,
  aux_sym_metadata_repeat1 = 132,
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
  [anon_sym_comment] = "comment",
  [anon_sym_fn] = "fn",
  [anon_sym_POUND_LPAREN] = "#(",
  [sym_shorthand_function_arg] = "shorthand_function_arg",
  [anon_sym_defn] = "defn",
  [anon_sym_defn_DASH] = "defn-",
  [anon_sym_CARET] = "^",
  [anon_sym_CARET_COLON] = "^:",
  [anon_sym_CARET_DQUOTE] = "^\"",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_TILDE] = "~",
  [anon_sym_TILDE_AT] = "~@",
  [sym_gensym] = "gensym",
  [sym_program] = "program",
  [sym__anything] = "_anything",
  [sym__literals] = "_literals",
  [sym__collection_literals] = "_collection_literals",
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
  [sym__functions] = "_functions",
  [sym_anonymous_function] = "anonymous_function",
  [sym__after_the_fn_name] = "_after_the_fn_name",
  [sym_function_name] = "function_name",
  [sym__single_arity_fn] = "_single_arity_fn",
  [sym__multi_arity_fn] = "_multi_arity_fn",
  [sym_function_body] = "function_body",
  [sym_params] = "params",
  [sym_shorthand_function] = "shorthand_function",
  [sym_defn] = "defn",
  [sym_docstring] = "docstring",
  [sym_attr_map] = "attr_map",
  [sym_metadata] = "metadata",
  [sym__metadata_map] = "_metadata_map",
  [sym_metadata_shorthand] = "metadata_shorthand",
  [sym_syntax_quote] = "syntax_quote",
  [sym_unquote] = "unquote",
  [sym_unquote_splice] = "unquote_splice",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym__string_repeat1] = "_string_repeat1",
  [aux_sym__regex_repeat1] = "_regex_repeat1",
  [aux_sym__hash_map_repeat1] = "_hash_map_repeat1",
  [aux_sym__multi_arity_fn_repeat1] = "_multi_arity_fn_repeat1",
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
  [anon_sym_comment] = {
    .visible = true,
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
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_AT] = {
    .visible = true,
    .named = false,
  },
  [sym_gensym] = {
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
  [sym__literals] = {
    .visible = false,
    .named = true,
  },
  [sym__collection_literals] = {
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
  [sym__functions] = {
    .visible = false,
    .named = true,
  },
  [sym_anonymous_function] = {
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
  [sym_shorthand_function] = {
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
  [sym_syntax_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote_splice] = {
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
  [aux_sym__multi_arity_fn_repeat1] = {
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
        ADVANCE(20);
      if (lookahead == '+')
        ADVANCE(21);
      if (lookahead == ',')
        SKIP(0);
      if (lookahead == '-')
        ADVANCE(23);
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
      if (lookahead == '^')
        ADVANCE(41);
      if (lookahead == '`')
        ADVANCE(44);
      if (lookahead == 'n')
        ADVANCE(45);
      if (lookahead == 'o')
        ADVANCE(54);
      if (lookahead == 'r')
        ADVANCE(55);
      if (lookahead == 's')
        ADVANCE(61);
      if (lookahead == 't')
        ADVANCE(72);
      if (lookahead == 'u')
        ADVANCE(78);
      if (lookahead == '{')
        ADVANCE(79);
      if (lookahead == '}')
        ADVANCE(80);
      if (lookahead == '~')
        ADVANCE(81);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(87);
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
      if (lookahead == 'q')
        ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'u')
        ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'o')
        ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 't')
        ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'e')
        ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LPARENquote);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_number_long);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '>')
        ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(22);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead == '>')
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GT);
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
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '\"')
        ADVANCE(42);
      if (lookahead == ':')
        ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_CARET_DQUOTE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_CARET_COLON);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 45:
      if (lookahead == 'e')
        ADVANCE(46);
      if (lookahead == 'i')
        ADVANCE(52);
      END_STATE();
    case 46:
      if (lookahead == 'w')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'l')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'i')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'n')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'e')
        ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_newline);
      END_STATE();
    case 52:
      if (lookahead == 'l')
        ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 55:
      if (lookahead == 'e')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 't')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'u')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'r')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'n')
        ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 61:
      if (lookahead == 'o')
        ADVANCE(62);
      if (lookahead == 'p')
        ADVANCE(68);
      END_STATE();
    case 62:
      if (lookahead == 'm')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'e')
        ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == '-')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == '>')
        ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_some_DASH_GT);
      if (lookahead == '>')
        ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_some_DASH_GT_GT);
      END_STATE();
    case 68:
      if (lookahead == 'a')
        ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 'c')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'e')
        ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_space);
      END_STATE();
    case 72:
      if (lookahead == 'a')
        ADVANCE(73);
      if (lookahead == 'r')
        ADVANCE(75);
      END_STATE();
    case 73:
      if (lookahead == 'b')
        ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_tab);
      END_STATE();
    case 75:
      if (lookahead == 'u')
        ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == 'e')
        ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '@')
        ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_TILDE_AT);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_number_long);
      if (lookahead == '.')
        ADVANCE(84);
      if (lookahead == '_')
        ADVANCE(85);
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
    case 85:
      if (lookahead == '_')
        ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == '.')
        ADVANCE(84);
      if (lookahead == '_')
        ADVANCE(85);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(29);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__hex_char);
      END_STATE();
    case 88:
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
      if (lookahead == '+')
        ADVANCE(89);
      if (lookahead == ',')
        SKIP(88);
      if (lookahead == '-')
        ADVANCE(93);
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
      if (lookahead == '^')
        ADVANCE(41);
      if (lookahead == '`')
        ADVANCE(44);
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
        ADVANCE(79);
      if (lookahead == '~')
        ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(88);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(83);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(92);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(90);
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
    case 90:
      ACCEPT_TOKEN(sym_gensym);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_number_long);
      if (lookahead == '#')
        ADVANCE(90);
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
      if (lookahead == '#')
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
        ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(90);
      if (lookahead == '>')
        ADVANCE(24);
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
      if (lookahead == '#')
        ADVANCE(90);
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
      if (lookahead == '#')
        ADVANCE(90);
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
      if (lookahead == '#')
        ADVANCE(90);
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
      if (lookahead == '#')
        ADVANCE(90);
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
      if (lookahead == '#')
        ADVANCE(90);
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
      if (lookahead == '#')
        ADVANCE(90);
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
      if (lookahead == '#')
        ADVANCE(90);
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
      if (lookahead == '#')
        ADVANCE(90);
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
      if (lookahead == '#')
        ADVANCE(90);
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
      if (lookahead == '#')
        ADVANCE(90);
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
      if (lookahead == '#')
        ADVANCE(90);
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
      if (lookahead == '#')
        ADVANCE(90);
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
      if (lookahead == '#')
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
        ADVANCE(92);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(90);
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
      if (lookahead == '#')
        ADVANCE(90);
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
      if (lookahead == '#')
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
        ADVANCE(92);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(90);
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
      if (lookahead == '#')
        ADVANCE(90);
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
      if (lookahead == '#')
        ADVANCE(90);
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
      if (lookahead == '#')
        ADVANCE(90);
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
      if (lookahead == '#')
        ADVANCE(90);
      if (lookahead == '>')
        ADVANCE(66);
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
      if (lookahead == '#')
        ADVANCE(90);
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
      if (lookahead == '#')
        ADVANCE(90);
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
      if (lookahead == '#')
        ADVANCE(90);
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
      if (lookahead == '#')
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
        ADVANCE(20);
      if (lookahead == '+')
        ADVANCE(89);
      if (lookahead == ',')
        SKIP(122);
      if (lookahead == '-')
        ADVANCE(93);
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
      if (lookahead == '^')
        ADVANCE(41);
      if (lookahead == '`')
        ADVANCE(44);
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
        ADVANCE(79);
      if (lookahead == '}')
        ADVANCE(80);
      if (lookahead == '~')
        ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(122);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(83);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'z'))
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
        ADVANCE(54);
      if (lookahead == 'r')
        ADVANCE(143);
      if (lookahead == 's')
        ADVANCE(144);
      if (lookahead == 't')
        ADVANCE(145);
      if (lookahead == 'u')
        ADVANCE(78);
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
        ADVANCE(46);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'e')
        ADVANCE(56);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'p')
        ADVANCE(68);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'a')
        ADVANCE(73);
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
        ADVANCE(20);
      if (lookahead == '+')
        ADVANCE(89);
      if (lookahead == ',')
        SKIP(155);
      if (lookahead == '-')
        ADVANCE(93);
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
      if (lookahead == '^')
        ADVANCE(41);
      if (lookahead == '`')
        ADVANCE(44);
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
        ADVANCE(79);
      if (lookahead == '}')
        ADVANCE(80);
      if (lookahead == '~')
        ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(155);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(83);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'z'))
        ADVANCE(92);
      END_STATE();
    case 156:
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
        ADVANCE(20);
      if (lookahead == '+')
        ADVANCE(89);
      if (lookahead == ',')
        SKIP(156);
      if (lookahead == '-')
        ADVANCE(93);
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
      if (lookahead == '^')
        ADVANCE(41);
      if (lookahead == '`')
        ADVANCE(44);
      if (lookahead == 'a')
        ADVANCE(94);
      if (lookahead == 'c')
        ADVANCE(157);
      if (lookahead == 'd')
        ADVANCE(164);
      if (lookahead == 'f')
        ADVANCE(169);
      if (lookahead == 'n')
        ADVANCE(110);
      if (lookahead == 's')
        ADVANCE(113);
      if (lookahead == 't')
        ADVANCE(118);
      if (lookahead == '{')
        ADVANCE(79);
      if (lookahead == '~')
        ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(156);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(83);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(92);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(90);
      if (lookahead == 'o')
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
      if (lookahead == '#')
        ADVANCE(90);
      if (lookahead == 'm')
        ADVANCE(159);
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
    case 159:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(90);
      if (lookahead == 'm')
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
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(90);
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
        ADVANCE(92);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(90);
      if (lookahead == 'n')
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
        ADVANCE(92);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(90);
      if (lookahead == 't')
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
        ADVANCE(92);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_comment);
      if (lookahead == '#')
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
        ADVANCE(92);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(90);
      if (lookahead == 'e')
        ADVANCE(165);
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
    case 165:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(90);
      if (lookahead == 'f')
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
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(92);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(90);
      if (lookahead == 'n')
        ADVANCE(167);
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
    case 167:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == '#')
        ADVANCE(90);
      if (lookahead == '-')
        ADVANCE(168);
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
    case 168:
      ACCEPT_TOKEN(anon_sym_defn_DASH);
      if (lookahead == '#')
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
        ADVANCE(92);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(90);
      if (lookahead == 'a')
        ADVANCE(106);
      if (lookahead == 'n')
        ADVANCE(170);
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
    case 170:
      ACCEPT_TOKEN(anon_sym_fn);
      if (lookahead == '#')
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
        ADVANCE(92);
      END_STATE();
    case 171:
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
      if (lookahead == '+')
        ADVANCE(89);
      if (lookahead == ',')
        SKIP(171);
      if (lookahead == '-')
        ADVANCE(93);
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
      if (lookahead == '^')
        ADVANCE(41);
      if (lookahead == '`')
        ADVANCE(44);
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
        ADVANCE(79);
      if (lookahead == '~')
        ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(171);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(83);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'z'))
        ADVANCE(92);
      END_STATE();
    case 172:
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
      if (lookahead == '+')
        ADVANCE(89);
      if (lookahead == ',')
        SKIP(172);
      if (lookahead == '-')
        ADVANCE(93);
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
      if (lookahead == '^')
        ADVANCE(41);
      if (lookahead == '`')
        ADVANCE(44);
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
        ADVANCE(79);
      if (lookahead == '}')
        ADVANCE(80);
      if (lookahead == '~')
        ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(172);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(83);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(92);
      END_STATE();
    case 173:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(174);
      if (lookahead == '(')
        ADVANCE(175);
      if (lookahead == ')')
        ADVANCE(20);
      if (lookahead == ',')
        SKIP(173);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '/')
        ADVANCE(34);
      if (lookahead == '[')
        ADVANCE(38);
      if (lookahead == '^')
        ADVANCE(41);
      if (lookahead == 'a')
        ADVANCE(178);
      if (lookahead == 'c')
        ADVANCE(181);
      if (lookahead == 's')
        ADVANCE(186);
      if (lookahead == '{')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(173);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(177);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ':')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(11);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '>')
        ADVANCE(24);
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
        ADVANCE(177);
      END_STATE();
    case 177:
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
        ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 's')
        ADVANCE(179);
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
        ADVANCE(177);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '-')
        ADVANCE(180);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(177);
      END_STATE();
    case 180:
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
        ADVANCE(177);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'o')
        ADVANCE(182);
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
        ADVANCE(177);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'n')
        ADVANCE(183);
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
        ADVANCE(177);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'd')
        ADVANCE(184);
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
        ADVANCE(177);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '-')
        ADVANCE(185);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(177);
      END_STATE();
    case 185:
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
        ADVANCE(177);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'o')
        ADVANCE(187);
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
        ADVANCE(177);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'm')
        ADVANCE(188);
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
        ADVANCE(177);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'e')
        ADVANCE(189);
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
        ADVANCE(177);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '-')
        ADVANCE(190);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(177);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '>')
        ADVANCE(66);
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
        ADVANCE(177);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == '\n')
        SKIP(191);
      if (lookahead == ',')
        ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(193);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == ',')
        ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(193);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(193);
      END_STATE();
    case 194:
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
        ADVANCE(20);
      if (lookahead == '+')
        ADVANCE(89);
      if (lookahead == ',')
        SKIP(194);
      if (lookahead == '-')
        ADVANCE(93);
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
      if (lookahead == '^')
        ADVANCE(41);
      if (lookahead == '`')
        ADVANCE(44);
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
        ADVANCE(79);
      if (lookahead == '~')
        ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(194);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(83);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(92);
      END_STATE();
    case 195:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        SKIP(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(195);
      END_STATE();
    case 196:
      if (lookahead == ',')
        SKIP(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(87);
      END_STATE();
    case 197:
      if (lookahead == ',')
        SKIP(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(197);
      if (('0' <= lookahead && lookahead <= '3'))
        ADVANCE(198);
      if (('4' <= lookahead && lookahead <= '7'))
        ADVANCE(201);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(202);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 88},
  [2] = {.lex_state = 122},
  [3] = {.lex_state = 123},
  [4] = {.lex_state = 146},
  [5] = {.lex_state = 150},
  [6] = {.lex_state = 88},
  [7] = {.lex_state = 88},
  [8] = {.lex_state = 153},
  [9] = {.lex_state = 153},
  [10] = {.lex_state = 122},
  [11] = {.lex_state = 155},
  [12] = {.lex_state = 156},
  [13] = {.lex_state = 171},
  [14] = {.lex_state = 172},
  [15] = {.lex_state = 172},
  [16] = {.lex_state = 173},
  [17] = {.lex_state = 172},
  [18] = {.lex_state = 191},
  [19] = {.lex_state = 191},
  [20] = {.lex_state = 88},
  [21] = {.lex_state = 194},
  [22] = {.lex_state = 173},
  [23] = {.lex_state = 153},
  [24] = {.lex_state = 146},
  [25] = {.lex_state = 88},
  [26] = {.lex_state = 88},
  [27] = {.lex_state = 88},
  [28] = {.lex_state = 195},
  [29] = {.lex_state = 122},
  [30] = {.lex_state = 122},
  [31] = {.lex_state = 122},
  [32] = {.lex_state = 122},
  [33] = {.lex_state = 122},
  [34] = {.lex_state = 122},
  [35] = {.lex_state = 122},
  [36] = {.lex_state = 122},
  [37] = {.lex_state = 122},
  [38] = {.lex_state = 122},
  [39] = {.lex_state = 122},
  [40] = {.lex_state = 122},
  [41] = {.lex_state = 173},
  [42] = {.lex_state = 173},
  [43] = {.lex_state = 88},
  [44] = {.lex_state = 173},
  [45] = {.lex_state = 122},
  [46] = {.lex_state = 196},
  [47] = {.lex_state = 197},
  [48] = {.lex_state = 122},
  [49] = {.lex_state = 146},
  [50] = {.lex_state = 122},
  [51] = {.lex_state = 150},
  [52] = {.lex_state = 122},
  [53] = {.lex_state = 88},
  [54] = {.lex_state = 88},
  [55] = {.lex_state = 88},
  [56] = {.lex_state = 88},
  [57] = {.lex_state = 88},
  [58] = {.lex_state = 156},
  [59] = {.lex_state = 122},
  [60] = {.lex_state = 155},
  [61] = {.lex_state = 173},
  [62] = {.lex_state = 88},
  [63] = {.lex_state = 122},
  [64] = {.lex_state = 88},
  [65] = {.lex_state = 194},
  [66] = {.lex_state = 173},
  [67] = {.lex_state = 173},
  [68] = {.lex_state = 88},
  [69] = {.lex_state = 88},
  [70] = {.lex_state = 88},
  [71] = {.lex_state = 194},
  [72] = {.lex_state = 88},
  [73] = {.lex_state = 122},
  [74] = {.lex_state = 88},
  [75] = {.lex_state = 88},
  [76] = {.lex_state = 88},
  [77] = {.lex_state = 88},
  [78] = {.lex_state = 171},
  [79] = {.lex_state = 88},
  [80] = {.lex_state = 122},
  [81] = {.lex_state = 88},
  [82] = {.lex_state = 88},
  [83] = {.lex_state = 88},
  [84] = {.lex_state = 88},
  [85] = {.lex_state = 88},
  [86] = {.lex_state = 172},
  [87] = {.lex_state = 122},
  [88] = {.lex_state = 172},
  [89] = {.lex_state = 88},
  [90] = {.lex_state = 88},
  [91] = {.lex_state = 122},
  [92] = {.lex_state = 88},
  [93] = {.lex_state = 88},
  [94] = {.lex_state = 88},
  [95] = {.lex_state = 88},
  [96] = {.lex_state = 172},
  [97] = {.lex_state = 122},
  [98] = {.lex_state = 122},
  [99] = {.lex_state = 122},
  [100] = {.lex_state = 122},
  [101] = {.lex_state = 194},
  [102] = {.lex_state = 173},
  [103] = {.lex_state = 172},
  [104] = {.lex_state = 172},
  [105] = {.lex_state = 173},
  [106] = {.lex_state = 173},
  [107] = {.lex_state = 173},
  [108] = {.lex_state = 146},
  [109] = {.lex_state = 122},
  [110] = {.lex_state = 122},
  [111] = {.lex_state = 122},
  [112] = {.lex_state = 194},
  [113] = {.lex_state = 122},
  [114] = {.lex_state = 88},
  [115] = {.lex_state = 173},
  [116] = {.lex_state = 173},
  [117] = {.lex_state = 196},
  [118] = {.lex_state = 122},
  [119] = {.lex_state = 122},
  [120] = {.lex_state = 146},
  [121] = {.lex_state = 122},
  [122] = {.lex_state = 150},
  [123] = {.lex_state = 122},
  [124] = {.lex_state = 153},
  [125] = {.lex_state = 122},
  [126] = {.lex_state = 122},
  [127] = {.lex_state = 194},
  [128] = {.lex_state = 173},
  [129] = {.lex_state = 173},
  [130] = {.lex_state = 88},
  [131] = {.lex_state = 173},
  [132] = {.lex_state = 173},
  [133] = {.lex_state = 194},
  [134] = {.lex_state = 156},
  [135] = {.lex_state = 173},
  [136] = {.lex_state = 194},
  [137] = {.lex_state = 173},
  [138] = {.lex_state = 173},
  [139] = {.lex_state = 173},
  [140] = {.lex_state = 173},
  [141] = {.lex_state = 122},
  [142] = {.lex_state = 194},
  [143] = {.lex_state = 122},
  [144] = {.lex_state = 171},
  [145] = {.lex_state = 172},
  [146] = {.lex_state = 122},
  [147] = {.lex_state = 172},
  [148] = {.lex_state = 122},
  [149] = {.lex_state = 172},
  [150] = {.lex_state = 122},
  [151] = {.lex_state = 172},
  [152] = {.lex_state = 122},
  [153] = {.lex_state = 173},
  [154] = {.lex_state = 172},
  [155] = {.lex_state = 173},
  [156] = {.lex_state = 172},
  [157] = {.lex_state = 88},
  [158] = {.lex_state = 173},
  [159] = {.lex_state = 196},
  [160] = {.lex_state = 122},
  [161] = {.lex_state = 122},
  [162] = {.lex_state = 173},
  [163] = {.lex_state = 156},
  [164] = {.lex_state = 122},
  [165] = {.lex_state = 156},
  [166] = {.lex_state = 156},
  [167] = {.lex_state = 194},
  [168] = {.lex_state = 173},
  [169] = {.lex_state = 146},
  [170] = {.lex_state = 173},
  [171] = {.lex_state = 173},
  [172] = {.lex_state = 173},
  [173] = {.lex_state = 156},
  [174] = {.lex_state = 173},
  [175] = {.lex_state = 173},
  [176] = {.lex_state = 173},
  [177] = {.lex_state = 173},
  [178] = {.lex_state = 122},
  [179] = {.lex_state = 172},
  [180] = {.lex_state = 173},
  [181] = {.lex_state = 173},
  [182] = {.lex_state = 172},
  [183] = {.lex_state = 196},
  [184] = {.lex_state = 173},
  [185] = {.lex_state = 173},
  [186] = {.lex_state = 122},
  [187] = {.lex_state = 173},
  [188] = {.lex_state = 146},
  [189] = {.lex_state = 122},
  [190] = {.lex_state = 156},
  [191] = {.lex_state = 173},
  [192] = {.lex_state = 173},
  [193] = {.lex_state = 122},
  [194] = {.lex_state = 173},
  [195] = {.lex_state = 172},
  [196] = {.lex_state = 122},
  [197] = {.lex_state = 173},
  [198] = {.lex_state = 122},
  [199] = {.lex_state = 156},
  [200] = {.lex_state = 173},
  [201] = {.lex_state = 173},
  [202] = {.lex_state = 122},
  [203] = {.lex_state = 156},
  [204] = {.lex_state = 122},
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
    [anon_sym_POUND_LPAREN] = ACTIONS(1),
    [sym_shorthand_function_arg] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(3),
    [anon_sym_CARET_COLON] = ACTIONS(1),
    [anon_sym_CARET_DQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(3),
    [anon_sym_TILDE_AT] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(28),
    [sym__anything] = STATE(43),
    [sym__literals] = STATE(43),
    [sym__collection_literals] = STATE(43),
    [sym_boolean] = STATE(43),
    [sym_number] = STATE(43),
    [sym__number] = STATE(29),
    [sym_character] = STATE(43),
    [sym__character] = STATE(30),
    [sym_string] = STATE(43),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(43),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(43),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(43),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(43),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(43),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(43),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(43),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(43),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(43),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(43),
    [sym_anonymous_function] = STATE(43),
    [sym_shorthand_function] = STATE(43),
    [sym_defn] = STATE(43),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(43),
    [sym_unquote] = STATE(43),
    [sym_unquote_splice] = STATE(43),
    [aux_sym_program_repeat1] = STATE(43),
    [aux_sym_metadata_repeat1] = STATE(44),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(63),
    [anon_sym_TILDE] = ACTIONS(65),
    [anon_sym_TILDE_AT] = ACTIONS(67),
    [sym_gensym] = ACTIONS(55),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [sym_nil] = ACTIONS(71),
    [sym_true] = ACTIONS(71),
    [sym_false] = ACTIONS(71),
    [sym_number_long] = ACTIONS(71),
    [sym_number_double] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_POUND_DQUOTE] = ACTIONS(69),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [anon_sym_LPARENquote] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(69),
    [anon_sym_COLON] = ACTIONS(71),
    [anon_sym_COLON_COLON] = ACTIONS(69),
    [anon_sym_DASH_GT] = ACTIONS(71),
    [anon_sym_DASH_GT_GT] = ACTIONS(69),
    [anon_sym_as_DASH_GT] = ACTIONS(69),
    [anon_sym_some_DASH_GT] = ACTIONS(71),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(69),
    [anon_sym_cond_DASH_GT] = ACTIONS(71),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(69),
    [sym__symbol_chars] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(69),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(71),
    [anon_sym_POUND_LBRACE] = ACTIONS(69),
    [anon_sym_SEMI] = ACTIONS(69),
    [anon_sym_POUND_BANG] = ACTIONS(69),
    [anon_sym_POUND_] = ACTIONS(69),
    [anon_sym_POUND_LPAREN] = ACTIONS(69),
    [sym_shorthand_function_arg] = ACTIONS(69),
    [anon_sym_CARET] = ACTIONS(71),
    [anon_sym_CARET_COLON] = ACTIONS(69),
    [anon_sym_CARET_DQUOTE] = ACTIONS(69),
    [anon_sym_BQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [anon_sym_TILDE_AT] = ACTIONS(69),
    [sym_gensym] = ACTIONS(69),
  },
  [3] = {
    [sym__special_char] = STATE(45),
    [sym__unicode_char] = STATE(45),
    [sym__octal_char] = STATE(45),
    [sym__normal_char] = ACTIONS(73),
    [anon_sym_newline] = ACTIONS(73),
    [anon_sym_space] = ACTIONS(73),
    [anon_sym_tab] = ACTIONS(73),
    [anon_sym_formfeed] = ACTIONS(73),
    [anon_sym_backspace] = ACTIONS(73),
    [anon_sym_return] = ACTIONS(73),
    [anon_sym_u] = ACTIONS(75),
    [anon_sym_o] = ACTIONS(77),
  },
  [4] = {
    [aux_sym__string_repeat1] = STATE(49),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(81),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(81),
  },
  [5] = {
    [aux_sym__regex_repeat1] = STATE(51),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(85),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(85),
  },
  [6] = {
    [sym__anything] = STATE(52),
    [sym__literals] = STATE(52),
    [sym__collection_literals] = STATE(52),
    [sym_boolean] = STATE(52),
    [sym_number] = STATE(52),
    [sym__number] = STATE(29),
    [sym_character] = STATE(52),
    [sym__character] = STATE(30),
    [sym_string] = STATE(52),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(52),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(52),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(52),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(52),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(52),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(52),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(52),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(52),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(52),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(52),
    [sym_anonymous_function] = STATE(52),
    [sym_shorthand_function] = STATE(52),
    [sym_defn] = STATE(52),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(52),
    [sym_unquote] = STATE(52),
    [sym_unquote_splice] = STATE(52),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(87),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(89),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(63),
    [anon_sym_TILDE] = ACTIONS(65),
    [anon_sym_TILDE_AT] = ACTIONS(67),
    [sym_gensym] = ACTIONS(89),
  },
  [7] = {
    [sym__anything] = STATE(58),
    [sym__literals] = STATE(58),
    [sym__collection_literals] = STATE(58),
    [sym_boolean] = STATE(58),
    [sym_number] = STATE(58),
    [sym__number] = STATE(29),
    [sym_character] = STATE(58),
    [sym__character] = STATE(30),
    [sym_string] = STATE(58),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(58),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(58),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(58),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(58),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(58),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(58),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(58),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(58),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(58),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(58),
    [sym_anonymous_function] = STATE(58),
    [sym_shorthand_function] = STATE(58),
    [sym_defn] = STATE(58),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(58),
    [sym_unquote] = STATE(58),
    [sym_unquote_splice] = STATE(58),
    [aux_sym_metadata_repeat1] = STATE(44),
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
    [anon_sym_POUND_] = ACTIONS(95),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(97),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(99),
    [anon_sym_TILDE] = ACTIONS(101),
    [anon_sym_TILDE_AT] = ACTIONS(103),
    [sym_gensym] = ACTIONS(97),
  },
  [8] = {
    [sym__keyword_chars] = ACTIONS(105),
  },
  [9] = {
    [sym__keyword_chars] = ACTIONS(107),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(109),
    [sym_nil] = ACTIONS(111),
    [sym_true] = ACTIONS(111),
    [sym_false] = ACTIONS(111),
    [sym_number_long] = ACTIONS(111),
    [sym_number_double] = ACTIONS(109),
    [anon_sym_BSLASH] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_POUND_DQUOTE] = ACTIONS(109),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [anon_sym_LPARENquote] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(109),
    [anon_sym_COLON] = ACTIONS(111),
    [anon_sym_COLON_COLON] = ACTIONS(109),
    [anon_sym_DASH_GT] = ACTIONS(111),
    [anon_sym_DASH_GT_GT] = ACTIONS(109),
    [anon_sym_as_DASH_GT] = ACTIONS(109),
    [anon_sym_some_DASH_GT] = ACTIONS(111),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(109),
    [anon_sym_cond_DASH_GT] = ACTIONS(111),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(109),
    [sym__symbol_chars] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_RBRACK] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_RBRACE] = ACTIONS(109),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(109),
    [anon_sym_POUND] = ACTIONS(111),
    [anon_sym_POUND_LBRACE] = ACTIONS(109),
    [anon_sym_SEMI] = ACTIONS(109),
    [anon_sym_POUND_BANG] = ACTIONS(109),
    [anon_sym_POUND_] = ACTIONS(109),
    [anon_sym_POUND_LPAREN] = ACTIONS(109),
    [sym_shorthand_function_arg] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(111),
    [anon_sym_CARET_COLON] = ACTIONS(109),
    [anon_sym_CARET_DQUOTE] = ACTIONS(109),
    [anon_sym_BQUOTE] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(111),
    [anon_sym_TILDE_AT] = ACTIONS(109),
    [sym_gensym] = ACTIONS(109),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(113),
    [sym_nil] = ACTIONS(115),
    [sym_true] = ACTIONS(115),
    [sym_false] = ACTIONS(115),
    [sym_number_long] = ACTIONS(115),
    [sym_number_double] = ACTIONS(113),
    [anon_sym_BSLASH] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [anon_sym_POUND_DQUOTE] = ACTIONS(113),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_LPARENquote] = ACTIONS(113),
    [anon_sym_RPAREN] = ACTIONS(113),
    [anon_sym_COLON] = ACTIONS(115),
    [anon_sym_COLON_COLON] = ACTIONS(113),
    [anon_sym_SLASH] = ACTIONS(117),
    [anon_sym_DASH_GT] = ACTIONS(115),
    [anon_sym_DASH_GT_GT] = ACTIONS(113),
    [anon_sym_as_DASH_GT] = ACTIONS(113),
    [anon_sym_some_DASH_GT] = ACTIONS(115),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(113),
    [anon_sym_cond_DASH_GT] = ACTIONS(115),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(113),
    [sym__symbol_chars] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_RBRACK] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(113),
    [anon_sym_RBRACE] = ACTIONS(113),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(113),
    [anon_sym_POUND] = ACTIONS(115),
    [anon_sym_POUND_LBRACE] = ACTIONS(113),
    [anon_sym_SEMI] = ACTIONS(113),
    [anon_sym_POUND_BANG] = ACTIONS(113),
    [anon_sym_POUND_] = ACTIONS(113),
    [anon_sym_POUND_LPAREN] = ACTIONS(113),
    [sym_shorthand_function_arg] = ACTIONS(113),
    [anon_sym_CARET] = ACTIONS(115),
    [anon_sym_CARET_COLON] = ACTIONS(113),
    [anon_sym_CARET_DQUOTE] = ACTIONS(113),
    [anon_sym_BQUOTE] = ACTIONS(113),
    [anon_sym_TILDE] = ACTIONS(115),
    [anon_sym_TILDE_AT] = ACTIONS(113),
    [sym_gensym] = ACTIONS(113),
  },
  [12] = {
    [sym__anything] = STATE(71),
    [sym__literals] = STATE(71),
    [sym__collection_literals] = STATE(71),
    [sym_boolean] = STATE(71),
    [sym_number] = STATE(71),
    [sym__number] = STATE(29),
    [sym_character] = STATE(71),
    [sym__character] = STATE(30),
    [sym_string] = STATE(71),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(71),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(71),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(71),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(71),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(71),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(71),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(71),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(71),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(71),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(71),
    [sym_anonymous_function] = STATE(71),
    [sym_shorthand_function] = STATE(71),
    [sym_defn] = STATE(71),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(71),
    [sym_unquote] = STATE(71),
    [sym_unquote_splice] = STATE(71),
    [aux_sym_program_repeat1] = STATE(71),
    [aux_sym_metadata_repeat1] = STATE(44),
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
    [anon_sym_RPAREN] = ACTIONS(123),
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
    [anon_sym_POUND_] = ACTIONS(125),
    [anon_sym_comment] = ACTIONS(127),
    [anon_sym_fn] = ACTIONS(129),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(131),
    [anon_sym_defn] = ACTIONS(133),
    [anon_sym_defn_DASH] = ACTIONS(133),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_TILDE] = ACTIONS(137),
    [anon_sym_TILDE_AT] = ACTIONS(139),
    [sym_gensym] = ACTIONS(131),
  },
  [13] = {
    [sym__anything] = STATE(78),
    [sym__literals] = STATE(78),
    [sym__collection_literals] = STATE(78),
    [sym_boolean] = STATE(78),
    [sym_number] = STATE(78),
    [sym__number] = STATE(29),
    [sym_character] = STATE(78),
    [sym__character] = STATE(30),
    [sym_string] = STATE(78),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(78),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(78),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(78),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(78),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(78),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(78),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(78),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(78),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(78),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(78),
    [sym_anonymous_function] = STATE(78),
    [sym_shorthand_function] = STATE(78),
    [sym_defn] = STATE(78),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(78),
    [sym_unquote] = STATE(78),
    [sym_unquote_splice] = STATE(78),
    [aux_sym_program_repeat1] = STATE(78),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(141),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(143),
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
    [anon_sym_RBRACK] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(147),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(149),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(151),
    [anon_sym_TILDE] = ACTIONS(153),
    [anon_sym_TILDE_AT] = ACTIONS(155),
    [sym_gensym] = ACTIONS(149),
  },
  [14] = {
    [sym__anything] = STATE(85),
    [sym__literals] = STATE(85),
    [sym__collection_literals] = STATE(85),
    [sym_boolean] = STATE(85),
    [sym_number] = STATE(85),
    [sym__number] = STATE(29),
    [sym_character] = STATE(85),
    [sym__character] = STATE(30),
    [sym_string] = STATE(85),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(85),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(85),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(85),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(85),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(85),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(85),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(85),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym__hash_map_kv_pair] = STATE(86),
    [sym__hash_map_key] = STATE(85),
    [sym_set] = STATE(85),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(85),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(85),
    [sym_anonymous_function] = STATE(85),
    [sym_shorthand_function] = STATE(85),
    [sym_defn] = STATE(85),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(85),
    [sym_unquote] = STATE(85),
    [sym_unquote_splice] = STATE(85),
    [aux_sym__hash_map_repeat1] = STATE(86),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(157),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(159),
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
    [anon_sym_RBRACE] = ACTIONS(161),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(163),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(165),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_TILDE] = ACTIONS(169),
    [anon_sym_TILDE_AT] = ACTIONS(171),
    [sym_gensym] = ACTIONS(165),
  },
  [15] = {
    [sym__anything] = STATE(85),
    [sym__literals] = STATE(85),
    [sym__collection_literals] = STATE(85),
    [sym_boolean] = STATE(85),
    [sym_number] = STATE(85),
    [sym__number] = STATE(29),
    [sym_character] = STATE(85),
    [sym__character] = STATE(30),
    [sym_string] = STATE(85),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(85),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(85),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(85),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(85),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(85),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(85),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(85),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym__hash_map_kv_pair] = STATE(88),
    [sym__hash_map_key] = STATE(85),
    [sym_set] = STATE(85),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(85),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(85),
    [sym_anonymous_function] = STATE(85),
    [sym_shorthand_function] = STATE(85),
    [sym_defn] = STATE(85),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(85),
    [sym_unquote] = STATE(85),
    [sym_unquote_splice] = STATE(85),
    [aux_sym__hash_map_repeat1] = STATE(88),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(157),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(159),
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
    [anon_sym_RBRACE] = ACTIONS(173),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(163),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(165),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_TILDE] = ACTIONS(169),
    [anon_sym_TILDE_AT] = ACTIONS(171),
    [sym_gensym] = ACTIONS(165),
  },
  [16] = {
    [sym__symbol_chars] = ACTIONS(175),
  },
  [17] = {
    [sym__anything] = STATE(96),
    [sym__literals] = STATE(96),
    [sym__collection_literals] = STATE(96),
    [sym_boolean] = STATE(96),
    [sym_number] = STATE(96),
    [sym__number] = STATE(29),
    [sym_character] = STATE(96),
    [sym__character] = STATE(30),
    [sym_string] = STATE(96),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(96),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(96),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(96),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(96),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(96),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(96),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(96),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(96),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(96),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(96),
    [sym_anonymous_function] = STATE(96),
    [sym_shorthand_function] = STATE(96),
    [sym_defn] = STATE(96),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(96),
    [sym_unquote] = STATE(96),
    [sym_unquote_splice] = STATE(96),
    [aux_sym_program_repeat1] = STATE(96),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(177),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(179),
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
    [anon_sym_RBRACE] = ACTIONS(181),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(183),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(185),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(187),
    [anon_sym_TILDE] = ACTIONS(189),
    [anon_sym_TILDE_AT] = ACTIONS(191),
    [sym_gensym] = ACTIONS(185),
  },
  [18] = {
    [aux_sym_SLASH_DOT_STAR_SLASH] = ACTIONS(193),
  },
  [19] = {
    [aux_sym_SLASH_DOT_STAR_SLASH] = ACTIONS(195),
  },
  [20] = {
    [sym__anything] = STATE(99),
    [sym__literals] = STATE(99),
    [sym__collection_literals] = STATE(99),
    [sym_boolean] = STATE(99),
    [sym_number] = STATE(99),
    [sym__number] = STATE(29),
    [sym_character] = STATE(99),
    [sym__character] = STATE(30),
    [sym_string] = STATE(99),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(99),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(99),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(99),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(99),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(99),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(99),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(99),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(99),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(99),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(99),
    [sym_anonymous_function] = STATE(99),
    [sym_shorthand_function] = STATE(99),
    [sym_defn] = STATE(99),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(99),
    [sym_unquote] = STATE(99),
    [sym_unquote_splice] = STATE(99),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(197),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(199),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(63),
    [anon_sym_TILDE] = ACTIONS(65),
    [anon_sym_TILDE_AT] = ACTIONS(67),
    [sym_gensym] = ACTIONS(199),
  },
  [21] = {
    [sym__anything] = STATE(101),
    [sym__literals] = STATE(101),
    [sym__collection_literals] = STATE(101),
    [sym_boolean] = STATE(101),
    [sym_number] = STATE(101),
    [sym__number] = STATE(29),
    [sym_character] = STATE(101),
    [sym__character] = STATE(30),
    [sym_string] = STATE(101),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(101),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(101),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(101),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(101),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(101),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(101),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(101),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(101),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(101),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(101),
    [sym_anonymous_function] = STATE(101),
    [sym_shorthand_function] = STATE(101),
    [sym_defn] = STATE(101),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(101),
    [sym_unquote] = STATE(101),
    [sym_unquote_splice] = STATE(101),
    [aux_sym_program_repeat1] = STATE(101),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(201),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(121),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(203),
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
    [anon_sym_POUND_] = ACTIONS(125),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(205),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_TILDE] = ACTIONS(137),
    [anon_sym_TILDE_AT] = ACTIONS(139),
    [sym_gensym] = ACTIONS(205),
  },
  [22] = {
    [sym_hash_map] = STATE(106),
    [sym__hash_map] = STATE(107),
    [sym_namespace_map] = STATE(107),
    [sym__symbol_chars] = ACTIONS(207),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(211),
    [anon_sym_POUND] = ACTIONS(213),
  },
  [23] = {
    [sym__keyword_chars] = ACTIONS(207),
  },
  [24] = {
    [aux_sym__string_repeat1] = STATE(108),
    [anon_sym_DQUOTE] = ACTIONS(215),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(217),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(217),
  },
  [25] = {
    [sym__anything] = STATE(109),
    [sym__literals] = STATE(109),
    [sym__collection_literals] = STATE(109),
    [sym_boolean] = STATE(109),
    [sym_number] = STATE(109),
    [sym__number] = STATE(29),
    [sym_character] = STATE(109),
    [sym__character] = STATE(30),
    [sym_string] = STATE(109),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(109),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(109),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(109),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(109),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(109),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(109),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(109),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(109),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(109),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(109),
    [sym_anonymous_function] = STATE(109),
    [sym_shorthand_function] = STATE(109),
    [sym_defn] = STATE(109),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(109),
    [sym_unquote] = STATE(109),
    [sym_unquote_splice] = STATE(109),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(219),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(221),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(63),
    [anon_sym_TILDE] = ACTIONS(65),
    [anon_sym_TILDE_AT] = ACTIONS(67),
    [sym_gensym] = ACTIONS(221),
  },
  [26] = {
    [sym__anything] = STATE(110),
    [sym__literals] = STATE(110),
    [sym__collection_literals] = STATE(110),
    [sym_boolean] = STATE(110),
    [sym_number] = STATE(110),
    [sym__number] = STATE(29),
    [sym_character] = STATE(110),
    [sym__character] = STATE(30),
    [sym_string] = STATE(110),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(110),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(110),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(110),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(110),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(110),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(110),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(110),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(110),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(110),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(110),
    [sym_anonymous_function] = STATE(110),
    [sym_shorthand_function] = STATE(110),
    [sym_defn] = STATE(110),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(110),
    [sym_unquote] = STATE(110),
    [sym_unquote_splice] = STATE(110),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(223),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(225),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(63),
    [anon_sym_TILDE] = ACTIONS(65),
    [anon_sym_TILDE_AT] = ACTIONS(67),
    [sym_gensym] = ACTIONS(225),
  },
  [27] = {
    [sym__anything] = STATE(111),
    [sym__literals] = STATE(111),
    [sym__collection_literals] = STATE(111),
    [sym_boolean] = STATE(111),
    [sym_number] = STATE(111),
    [sym__number] = STATE(29),
    [sym_character] = STATE(111),
    [sym__character] = STATE(30),
    [sym_string] = STATE(111),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(111),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(111),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(111),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(111),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(111),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(111),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(111),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(111),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(111),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(111),
    [sym_anonymous_function] = STATE(111),
    [sym_shorthand_function] = STATE(111),
    [sym_defn] = STATE(111),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(111),
    [sym_unquote] = STATE(111),
    [sym_unquote_splice] = STATE(111),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(227),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(229),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(63),
    [anon_sym_TILDE] = ACTIONS(65),
    [anon_sym_TILDE_AT] = ACTIONS(67),
    [sym_gensym] = ACTIONS(229),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(231),
  },
  [29] = {
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
    [anon_sym_POUND_LPAREN] = ACTIONS(233),
    [sym_shorthand_function_arg] = ACTIONS(233),
    [anon_sym_CARET] = ACTIONS(235),
    [anon_sym_CARET_COLON] = ACTIONS(233),
    [anon_sym_CARET_DQUOTE] = ACTIONS(233),
    [anon_sym_BQUOTE] = ACTIONS(233),
    [anon_sym_TILDE] = ACTIONS(235),
    [anon_sym_TILDE_AT] = ACTIONS(233),
    [sym_gensym] = ACTIONS(233),
  },
  [30] = {
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
    [anon_sym_POUND_LPAREN] = ACTIONS(237),
    [sym_shorthand_function_arg] = ACTIONS(237),
    [anon_sym_CARET] = ACTIONS(239),
    [anon_sym_CARET_COLON] = ACTIONS(237),
    [anon_sym_CARET_DQUOTE] = ACTIONS(237),
    [anon_sym_BQUOTE] = ACTIONS(237),
    [anon_sym_TILDE] = ACTIONS(239),
    [anon_sym_TILDE_AT] = ACTIONS(237),
    [sym_gensym] = ACTIONS(237),
  },
  [31] = {
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
    [anon_sym_POUND_LPAREN] = ACTIONS(241),
    [sym_shorthand_function_arg] = ACTIONS(241),
    [anon_sym_CARET] = ACTIONS(243),
    [anon_sym_CARET_COLON] = ACTIONS(241),
    [anon_sym_CARET_DQUOTE] = ACTIONS(241),
    [anon_sym_BQUOTE] = ACTIONS(241),
    [anon_sym_TILDE] = ACTIONS(243),
    [anon_sym_TILDE_AT] = ACTIONS(241),
    [sym_gensym] = ACTIONS(241),
  },
  [32] = {
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
    [anon_sym_POUND_LPAREN] = ACTIONS(245),
    [sym_shorthand_function_arg] = ACTIONS(245),
    [anon_sym_CARET] = ACTIONS(247),
    [anon_sym_CARET_COLON] = ACTIONS(245),
    [anon_sym_CARET_DQUOTE] = ACTIONS(245),
    [anon_sym_BQUOTE] = ACTIONS(245),
    [anon_sym_TILDE] = ACTIONS(247),
    [anon_sym_TILDE_AT] = ACTIONS(245),
    [sym_gensym] = ACTIONS(245),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(249),
    [sym_nil] = ACTIONS(251),
    [sym_true] = ACTIONS(251),
    [sym_false] = ACTIONS(251),
    [sym_number_long] = ACTIONS(251),
    [sym_number_double] = ACTIONS(249),
    [anon_sym_BSLASH] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(249),
    [anon_sym_POUND_DQUOTE] = ACTIONS(249),
    [anon_sym_SQUOTE] = ACTIONS(249),
    [anon_sym_LPARENquote] = ACTIONS(249),
    [anon_sym_RPAREN] = ACTIONS(249),
    [anon_sym_COLON] = ACTIONS(251),
    [anon_sym_COLON_COLON] = ACTIONS(249),
    [anon_sym_DASH_GT] = ACTIONS(251),
    [anon_sym_DASH_GT_GT] = ACTIONS(249),
    [anon_sym_as_DASH_GT] = ACTIONS(249),
    [anon_sym_some_DASH_GT] = ACTIONS(251),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(249),
    [anon_sym_cond_DASH_GT] = ACTIONS(251),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(249),
    [sym__symbol_chars] = ACTIONS(251),
    [anon_sym_LPAREN] = ACTIONS(251),
    [anon_sym_LBRACK] = ACTIONS(249),
    [anon_sym_RBRACK] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(249),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(249),
    [anon_sym_POUND] = ACTIONS(251),
    [anon_sym_POUND_LBRACE] = ACTIONS(249),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_POUND_BANG] = ACTIONS(249),
    [anon_sym_POUND_] = ACTIONS(249),
    [anon_sym_POUND_LPAREN] = ACTIONS(249),
    [sym_shorthand_function_arg] = ACTIONS(249),
    [anon_sym_CARET] = ACTIONS(251),
    [anon_sym_CARET_COLON] = ACTIONS(249),
    [anon_sym_CARET_DQUOTE] = ACTIONS(249),
    [anon_sym_BQUOTE] = ACTIONS(249),
    [anon_sym_TILDE] = ACTIONS(251),
    [anon_sym_TILDE_AT] = ACTIONS(249),
    [sym_gensym] = ACTIONS(249),
  },
  [34] = {
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
    [anon_sym_POUND_LPAREN] = ACTIONS(253),
    [sym_shorthand_function_arg] = ACTIONS(253),
    [anon_sym_CARET] = ACTIONS(255),
    [anon_sym_CARET_COLON] = ACTIONS(253),
    [anon_sym_CARET_DQUOTE] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(253),
    [anon_sym_TILDE] = ACTIONS(255),
    [anon_sym_TILDE_AT] = ACTIONS(253),
    [sym_gensym] = ACTIONS(253),
  },
  [35] = {
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
    [anon_sym_POUND_LPAREN] = ACTIONS(257),
    [sym_shorthand_function_arg] = ACTIONS(257),
    [anon_sym_CARET] = ACTIONS(259),
    [anon_sym_CARET_COLON] = ACTIONS(257),
    [anon_sym_CARET_DQUOTE] = ACTIONS(257),
    [anon_sym_BQUOTE] = ACTIONS(257),
    [anon_sym_TILDE] = ACTIONS(259),
    [anon_sym_TILDE_AT] = ACTIONS(257),
    [sym_gensym] = ACTIONS(257),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(261),
    [sym_nil] = ACTIONS(263),
    [sym_true] = ACTIONS(263),
    [sym_false] = ACTIONS(263),
    [sym_number_long] = ACTIONS(263),
    [sym_number_double] = ACTIONS(261),
    [anon_sym_BSLASH] = ACTIONS(261),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [anon_sym_POUND_DQUOTE] = ACTIONS(261),
    [anon_sym_SQUOTE] = ACTIONS(261),
    [anon_sym_LPARENquote] = ACTIONS(261),
    [anon_sym_RPAREN] = ACTIONS(261),
    [anon_sym_COLON] = ACTIONS(263),
    [anon_sym_COLON_COLON] = ACTIONS(261),
    [anon_sym_DASH_GT] = ACTIONS(263),
    [anon_sym_DASH_GT_GT] = ACTIONS(261),
    [anon_sym_as_DASH_GT] = ACTIONS(261),
    [anon_sym_some_DASH_GT] = ACTIONS(263),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(261),
    [anon_sym_cond_DASH_GT] = ACTIONS(263),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(261),
    [sym__symbol_chars] = ACTIONS(263),
    [anon_sym_LPAREN] = ACTIONS(263),
    [anon_sym_LBRACK] = ACTIONS(261),
    [anon_sym_RBRACK] = ACTIONS(261),
    [anon_sym_LBRACE] = ACTIONS(261),
    [anon_sym_RBRACE] = ACTIONS(261),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(261),
    [anon_sym_POUND] = ACTIONS(263),
    [anon_sym_POUND_LBRACE] = ACTIONS(261),
    [anon_sym_SEMI] = ACTIONS(261),
    [anon_sym_POUND_BANG] = ACTIONS(261),
    [anon_sym_POUND_] = ACTIONS(261),
    [anon_sym_POUND_LPAREN] = ACTIONS(261),
    [sym_shorthand_function_arg] = ACTIONS(261),
    [anon_sym_CARET] = ACTIONS(263),
    [anon_sym_CARET_COLON] = ACTIONS(261),
    [anon_sym_CARET_DQUOTE] = ACTIONS(261),
    [anon_sym_BQUOTE] = ACTIONS(261),
    [anon_sym_TILDE] = ACTIONS(263),
    [anon_sym_TILDE_AT] = ACTIONS(261),
    [sym_gensym] = ACTIONS(261),
  },
  [37] = {
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
    [anon_sym_POUND_LPAREN] = ACTIONS(265),
    [sym_shorthand_function_arg] = ACTIONS(265),
    [anon_sym_CARET] = ACTIONS(267),
    [anon_sym_CARET_COLON] = ACTIONS(265),
    [anon_sym_CARET_DQUOTE] = ACTIONS(265),
    [anon_sym_BQUOTE] = ACTIONS(265),
    [anon_sym_TILDE] = ACTIONS(267),
    [anon_sym_TILDE_AT] = ACTIONS(265),
    [sym_gensym] = ACTIONS(265),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(269),
    [sym_nil] = ACTIONS(271),
    [sym_true] = ACTIONS(271),
    [sym_false] = ACTIONS(271),
    [sym_number_long] = ACTIONS(271),
    [sym_number_double] = ACTIONS(269),
    [anon_sym_BSLASH] = ACTIONS(269),
    [anon_sym_DQUOTE] = ACTIONS(269),
    [anon_sym_POUND_DQUOTE] = ACTIONS(269),
    [anon_sym_SQUOTE] = ACTIONS(269),
    [anon_sym_LPARENquote] = ACTIONS(269),
    [anon_sym_RPAREN] = ACTIONS(269),
    [anon_sym_COLON] = ACTIONS(271),
    [anon_sym_COLON_COLON] = ACTIONS(269),
    [anon_sym_DASH_GT] = ACTIONS(271),
    [anon_sym_DASH_GT_GT] = ACTIONS(269),
    [anon_sym_as_DASH_GT] = ACTIONS(269),
    [anon_sym_some_DASH_GT] = ACTIONS(271),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(269),
    [anon_sym_cond_DASH_GT] = ACTIONS(271),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(269),
    [sym__symbol_chars] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(269),
    [anon_sym_RBRACK] = ACTIONS(269),
    [anon_sym_LBRACE] = ACTIONS(269),
    [anon_sym_RBRACE] = ACTIONS(269),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(269),
    [anon_sym_POUND] = ACTIONS(271),
    [anon_sym_POUND_LBRACE] = ACTIONS(269),
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_POUND_BANG] = ACTIONS(269),
    [anon_sym_POUND_] = ACTIONS(269),
    [anon_sym_POUND_LPAREN] = ACTIONS(269),
    [sym_shorthand_function_arg] = ACTIONS(269),
    [anon_sym_CARET] = ACTIONS(271),
    [anon_sym_CARET_COLON] = ACTIONS(269),
    [anon_sym_CARET_DQUOTE] = ACTIONS(269),
    [anon_sym_BQUOTE] = ACTIONS(269),
    [anon_sym_TILDE] = ACTIONS(271),
    [anon_sym_TILDE_AT] = ACTIONS(269),
    [sym_gensym] = ACTIONS(269),
  },
  [39] = {
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
    [anon_sym_POUND_LPAREN] = ACTIONS(273),
    [sym_shorthand_function_arg] = ACTIONS(273),
    [anon_sym_CARET] = ACTIONS(275),
    [anon_sym_CARET_COLON] = ACTIONS(273),
    [anon_sym_CARET_DQUOTE] = ACTIONS(273),
    [anon_sym_BQUOTE] = ACTIONS(273),
    [anon_sym_TILDE] = ACTIONS(275),
    [anon_sym_TILDE_AT] = ACTIONS(273),
    [sym_gensym] = ACTIONS(273),
  },
  [40] = {
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
    [anon_sym_DASH_GT] = ACTIONS(279),
    [anon_sym_DASH_GT_GT] = ACTIONS(277),
    [anon_sym_as_DASH_GT] = ACTIONS(277),
    [anon_sym_some_DASH_GT] = ACTIONS(279),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(277),
    [anon_sym_cond_DASH_GT] = ACTIONS(279),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(277),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(277),
    [sym_shorthand_function_arg] = ACTIONS(277),
    [anon_sym_CARET] = ACTIONS(279),
    [anon_sym_CARET_COLON] = ACTIONS(277),
    [anon_sym_CARET_DQUOTE] = ACTIONS(277),
    [anon_sym_BQUOTE] = ACTIONS(277),
    [anon_sym_TILDE] = ACTIONS(279),
    [anon_sym_TILDE_AT] = ACTIONS(277),
    [sym_gensym] = ACTIONS(277),
  },
  [41] = {
    [sym_list] = STATE(113),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(113),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(113),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(113),
    [sym__set] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(281),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
  },
  [42] = {
    [anon_sym_DASH_GT] = ACTIONS(283),
    [anon_sym_DASH_GT_GT] = ACTIONS(285),
    [anon_sym_as_DASH_GT] = ACTIONS(285),
    [anon_sym_some_DASH_GT] = ACTIONS(283),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(285),
    [anon_sym_cond_DASH_GT] = ACTIONS(283),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(285),
    [sym__symbol_chars] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(285),
    [anon_sym_LBRACK] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(285),
    [anon_sym_POUND] = ACTIONS(283),
    [anon_sym_POUND_LBRACE] = ACTIONS(285),
  },
  [43] = {
    [sym__anything] = STATE(114),
    [sym__literals] = STATE(114),
    [sym__collection_literals] = STATE(114),
    [sym_boolean] = STATE(114),
    [sym_number] = STATE(114),
    [sym__number] = STATE(29),
    [sym_character] = STATE(114),
    [sym__character] = STATE(30),
    [sym_string] = STATE(114),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(114),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(114),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(114),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(114),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(114),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(114),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(114),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(114),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(114),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(114),
    [sym_anonymous_function] = STATE(114),
    [sym_shorthand_function] = STATE(114),
    [sym_defn] = STATE(114),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(114),
    [sym_unquote] = STATE(114),
    [sym_unquote_splice] = STATE(114),
    [aux_sym_program_repeat1] = STATE(114),
    [aux_sym_metadata_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(287),
    [sym_nil] = ACTIONS(289),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(291),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(63),
    [anon_sym_TILDE] = ACTIONS(65),
    [anon_sym_TILDE_AT] = ACTIONS(67),
    [sym_gensym] = ACTIONS(291),
  },
  [44] = {
    [sym_metadata_shorthand] = STATE(116),
    [aux_sym_metadata_repeat1] = STATE(116),
    [anon_sym_LPAREN] = ACTIONS(285),
    [anon_sym_LBRACK] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(285),
    [anon_sym_POUND] = ACTIONS(283),
    [anon_sym_POUND_LBRACE] = ACTIONS(285),
    [anon_sym_CARET] = ACTIONS(293),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [45] = {
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
    [anon_sym_POUND_LPAREN] = ACTIONS(295),
    [sym_shorthand_function_arg] = ACTIONS(295),
    [anon_sym_CARET] = ACTIONS(297),
    [anon_sym_CARET_COLON] = ACTIONS(295),
    [anon_sym_CARET_DQUOTE] = ACTIONS(295),
    [anon_sym_BQUOTE] = ACTIONS(295),
    [anon_sym_TILDE] = ACTIONS(297),
    [anon_sym_TILDE_AT] = ACTIONS(295),
    [sym_gensym] = ACTIONS(295),
  },
  [46] = {
    [sym__hex_char] = ACTIONS(299),
  },
  [47] = {
    [sym__octal_num] = STATE(118),
    [aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(303),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(303),
  },
  [48] = {
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
    [anon_sym_POUND_LPAREN] = ACTIONS(305),
    [sym_shorthand_function_arg] = ACTIONS(305),
    [anon_sym_CARET] = ACTIONS(307),
    [anon_sym_CARET_COLON] = ACTIONS(305),
    [anon_sym_CARET_DQUOTE] = ACTIONS(305),
    [anon_sym_BQUOTE] = ACTIONS(305),
    [anon_sym_TILDE] = ACTIONS(307),
    [anon_sym_TILDE_AT] = ACTIONS(305),
    [sym_gensym] = ACTIONS(305),
  },
  [49] = {
    [aux_sym__string_repeat1] = STATE(120),
    [anon_sym_DQUOTE] = ACTIONS(309),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(311),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(311),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(313),
    [sym_nil] = ACTIONS(315),
    [sym_true] = ACTIONS(315),
    [sym_false] = ACTIONS(315),
    [sym_number_long] = ACTIONS(315),
    [sym_number_double] = ACTIONS(313),
    [anon_sym_BSLASH] = ACTIONS(313),
    [anon_sym_DQUOTE] = ACTIONS(313),
    [anon_sym_POUND_DQUOTE] = ACTIONS(313),
    [anon_sym_SQUOTE] = ACTIONS(313),
    [anon_sym_LPARENquote] = ACTIONS(313),
    [anon_sym_RPAREN] = ACTIONS(313),
    [anon_sym_COLON] = ACTIONS(315),
    [anon_sym_COLON_COLON] = ACTIONS(313),
    [anon_sym_DASH_GT] = ACTIONS(315),
    [anon_sym_DASH_GT_GT] = ACTIONS(313),
    [anon_sym_as_DASH_GT] = ACTIONS(313),
    [anon_sym_some_DASH_GT] = ACTIONS(315),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(313),
    [anon_sym_cond_DASH_GT] = ACTIONS(315),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(313),
    [sym__symbol_chars] = ACTIONS(315),
    [anon_sym_LPAREN] = ACTIONS(315),
    [anon_sym_LBRACK] = ACTIONS(313),
    [anon_sym_RBRACK] = ACTIONS(313),
    [anon_sym_LBRACE] = ACTIONS(313),
    [anon_sym_RBRACE] = ACTIONS(313),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(313),
    [anon_sym_POUND] = ACTIONS(315),
    [anon_sym_POUND_LBRACE] = ACTIONS(313),
    [anon_sym_SEMI] = ACTIONS(313),
    [anon_sym_POUND_BANG] = ACTIONS(313),
    [anon_sym_POUND_] = ACTIONS(313),
    [anon_sym_POUND_LPAREN] = ACTIONS(313),
    [sym_shorthand_function_arg] = ACTIONS(313),
    [anon_sym_CARET] = ACTIONS(315),
    [anon_sym_CARET_COLON] = ACTIONS(313),
    [anon_sym_CARET_DQUOTE] = ACTIONS(313),
    [anon_sym_BQUOTE] = ACTIONS(313),
    [anon_sym_TILDE] = ACTIONS(315),
    [anon_sym_TILDE_AT] = ACTIONS(313),
    [sym_gensym] = ACTIONS(313),
  },
  [51] = {
    [aux_sym__regex_repeat1] = STATE(122),
    [anon_sym_DQUOTE] = ACTIONS(317),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(319),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(319),
  },
  [52] = {
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
    [anon_sym_POUND_LPAREN] = ACTIONS(321),
    [sym_shorthand_function_arg] = ACTIONS(321),
    [anon_sym_CARET] = ACTIONS(323),
    [anon_sym_CARET_COLON] = ACTIONS(321),
    [anon_sym_CARET_DQUOTE] = ACTIONS(321),
    [anon_sym_BQUOTE] = ACTIONS(321),
    [anon_sym_TILDE] = ACTIONS(323),
    [anon_sym_TILDE_AT] = ACTIONS(321),
    [sym_gensym] = ACTIONS(321),
  },
  [53] = {
    [sym__anything] = STATE(52),
    [sym__literals] = STATE(52),
    [sym__collection_literals] = STATE(52),
    [sym_boolean] = STATE(52),
    [sym_number] = STATE(52),
    [sym__number] = STATE(29),
    [sym_character] = STATE(52),
    [sym__character] = STATE(30),
    [sym_string] = STATE(52),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(52),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(52),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(52),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(52),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(52),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(52),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(52),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(52),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(52),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(52),
    [sym_anonymous_function] = STATE(52),
    [sym_shorthand_function] = STATE(52),
    [sym_defn] = STATE(52),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(52),
    [sym_unquote] = STATE(52),
    [sym_unquote_splice] = STATE(52),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(87),
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
    [anon_sym_POUND_] = ACTIONS(95),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(89),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(99),
    [anon_sym_TILDE] = ACTIONS(101),
    [anon_sym_TILDE_AT] = ACTIONS(103),
    [sym_gensym] = ACTIONS(89),
  },
  [54] = {
    [sym__anything] = STATE(99),
    [sym__literals] = STATE(99),
    [sym__collection_literals] = STATE(99),
    [sym_boolean] = STATE(99),
    [sym_number] = STATE(99),
    [sym__number] = STATE(29),
    [sym_character] = STATE(99),
    [sym__character] = STATE(30),
    [sym_string] = STATE(99),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(99),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(99),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(99),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(99),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(99),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(99),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(99),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(99),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(99),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(99),
    [sym_anonymous_function] = STATE(99),
    [sym_shorthand_function] = STATE(99),
    [sym_defn] = STATE(99),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(99),
    [sym_unquote] = STATE(99),
    [sym_unquote_splice] = STATE(99),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(197),
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
    [anon_sym_POUND_] = ACTIONS(95),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(199),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(99),
    [anon_sym_TILDE] = ACTIONS(101),
    [anon_sym_TILDE_AT] = ACTIONS(103),
    [sym_gensym] = ACTIONS(199),
  },
  [55] = {
    [sym__anything] = STATE(109),
    [sym__literals] = STATE(109),
    [sym__collection_literals] = STATE(109),
    [sym_boolean] = STATE(109),
    [sym_number] = STATE(109),
    [sym__number] = STATE(29),
    [sym_character] = STATE(109),
    [sym__character] = STATE(30),
    [sym_string] = STATE(109),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(109),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(109),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(109),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(109),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(109),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(109),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(109),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(109),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(109),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(109),
    [sym_anonymous_function] = STATE(109),
    [sym_shorthand_function] = STATE(109),
    [sym_defn] = STATE(109),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(109),
    [sym_unquote] = STATE(109),
    [sym_unquote_splice] = STATE(109),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(219),
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
    [anon_sym_POUND_] = ACTIONS(95),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(221),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(99),
    [anon_sym_TILDE] = ACTIONS(101),
    [anon_sym_TILDE_AT] = ACTIONS(103),
    [sym_gensym] = ACTIONS(221),
  },
  [56] = {
    [sym__anything] = STATE(110),
    [sym__literals] = STATE(110),
    [sym__collection_literals] = STATE(110),
    [sym_boolean] = STATE(110),
    [sym_number] = STATE(110),
    [sym__number] = STATE(29),
    [sym_character] = STATE(110),
    [sym__character] = STATE(30),
    [sym_string] = STATE(110),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(110),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(110),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(110),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(110),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(110),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(110),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(110),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(110),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(110),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(110),
    [sym_anonymous_function] = STATE(110),
    [sym_shorthand_function] = STATE(110),
    [sym_defn] = STATE(110),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(110),
    [sym_unquote] = STATE(110),
    [sym_unquote_splice] = STATE(110),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(223),
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
    [anon_sym_POUND_] = ACTIONS(95),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(225),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(99),
    [anon_sym_TILDE] = ACTIONS(101),
    [anon_sym_TILDE_AT] = ACTIONS(103),
    [sym_gensym] = ACTIONS(225),
  },
  [57] = {
    [sym__anything] = STATE(111),
    [sym__literals] = STATE(111),
    [sym__collection_literals] = STATE(111),
    [sym_boolean] = STATE(111),
    [sym_number] = STATE(111),
    [sym__number] = STATE(29),
    [sym_character] = STATE(111),
    [sym__character] = STATE(30),
    [sym_string] = STATE(111),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(111),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(111),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(111),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(111),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(111),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(111),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(111),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(111),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(111),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(111),
    [sym_anonymous_function] = STATE(111),
    [sym_shorthand_function] = STATE(111),
    [sym_defn] = STATE(111),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(111),
    [sym_unquote] = STATE(111),
    [sym_unquote_splice] = STATE(111),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(227),
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
    [anon_sym_POUND_] = ACTIONS(95),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(229),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(99),
    [anon_sym_TILDE] = ACTIONS(101),
    [anon_sym_TILDE_AT] = ACTIONS(103),
    [sym_gensym] = ACTIONS(229),
  },
  [58] = {
    [anon_sym_RPAREN] = ACTIONS(325),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(327),
    [sym_shorthand_function_arg] = ACTIONS(327),
    [anon_sym_CARET] = ACTIONS(329),
    [anon_sym_CARET_COLON] = ACTIONS(327),
    [anon_sym_CARET_DQUOTE] = ACTIONS(327),
    [anon_sym_BQUOTE] = ACTIONS(327),
    [anon_sym_TILDE] = ACTIONS(329),
    [anon_sym_TILDE_AT] = ACTIONS(327),
    [sym_gensym] = ACTIONS(327),
  },
  [60] = {
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
    [anon_sym_SLASH] = ACTIONS(335),
    [anon_sym_DASH_GT] = ACTIONS(333),
    [anon_sym_DASH_GT_GT] = ACTIONS(331),
    [anon_sym_as_DASH_GT] = ACTIONS(331),
    [anon_sym_some_DASH_GT] = ACTIONS(333),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(331),
    [anon_sym_cond_DASH_GT] = ACTIONS(333),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(331),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(331),
    [sym_shorthand_function_arg] = ACTIONS(331),
    [anon_sym_CARET] = ACTIONS(333),
    [anon_sym_CARET_COLON] = ACTIONS(331),
    [anon_sym_CARET_DQUOTE] = ACTIONS(331),
    [anon_sym_BQUOTE] = ACTIONS(331),
    [anon_sym_TILDE] = ACTIONS(333),
    [anon_sym_TILDE_AT] = ACTIONS(331),
    [sym_gensym] = ACTIONS(331),
  },
  [61] = {
    [sym__symbol_chars] = ACTIONS(337),
  },
  [62] = {
    [sym__anything] = STATE(52),
    [sym__literals] = STATE(52),
    [sym__collection_literals] = STATE(52),
    [sym_boolean] = STATE(52),
    [sym_number] = STATE(52),
    [sym__number] = STATE(29),
    [sym_character] = STATE(52),
    [sym__character] = STATE(30),
    [sym_string] = STATE(52),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(52),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(52),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(52),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(52),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(52),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(52),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(52),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(52),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(52),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(52),
    [sym_anonymous_function] = STATE(52),
    [sym_shorthand_function] = STATE(52),
    [sym_defn] = STATE(52),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(52),
    [sym_unquote] = STATE(52),
    [sym_unquote_splice] = STATE(52),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(87),
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
    [anon_sym_POUND_] = ACTIONS(125),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(89),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_TILDE] = ACTIONS(137),
    [anon_sym_TILDE_AT] = ACTIONS(139),
    [sym_gensym] = ACTIONS(89),
  },
  [63] = {
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
    [anon_sym_POUND_LPAREN] = ACTIONS(339),
    [sym_shorthand_function_arg] = ACTIONS(339),
    [anon_sym_CARET] = ACTIONS(341),
    [anon_sym_CARET_COLON] = ACTIONS(339),
    [anon_sym_CARET_DQUOTE] = ACTIONS(339),
    [anon_sym_BQUOTE] = ACTIONS(339),
    [anon_sym_TILDE] = ACTIONS(341),
    [anon_sym_TILDE_AT] = ACTIONS(339),
    [sym_gensym] = ACTIONS(339),
  },
  [64] = {
    [sym__anything] = STATE(99),
    [sym__literals] = STATE(99),
    [sym__collection_literals] = STATE(99),
    [sym_boolean] = STATE(99),
    [sym_number] = STATE(99),
    [sym__number] = STATE(29),
    [sym_character] = STATE(99),
    [sym__character] = STATE(30),
    [sym_string] = STATE(99),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(99),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(99),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(99),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(99),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(99),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(99),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(99),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(99),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(99),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(99),
    [sym_anonymous_function] = STATE(99),
    [sym_shorthand_function] = STATE(99),
    [sym_defn] = STATE(99),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(99),
    [sym_unquote] = STATE(99),
    [sym_unquote_splice] = STATE(99),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(197),
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
    [anon_sym_POUND_] = ACTIONS(125),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(199),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_TILDE] = ACTIONS(137),
    [anon_sym_TILDE_AT] = ACTIONS(139),
    [sym_gensym] = ACTIONS(199),
  },
  [65] = {
    [sym__anything] = STATE(127),
    [sym__literals] = STATE(127),
    [sym__collection_literals] = STATE(127),
    [sym_boolean] = STATE(127),
    [sym_number] = STATE(127),
    [sym__number] = STATE(29),
    [sym_character] = STATE(127),
    [sym__character] = STATE(30),
    [sym_string] = STATE(127),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(127),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(127),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(127),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(127),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(127),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(127),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(127),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(127),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(127),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(127),
    [sym_anonymous_function] = STATE(127),
    [sym_shorthand_function] = STATE(127),
    [sym_defn] = STATE(127),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(127),
    [sym_unquote] = STATE(127),
    [sym_unquote_splice] = STATE(127),
    [aux_sym_program_repeat1] = STATE(127),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(343),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(121),
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
    [anon_sym_POUND_] = ACTIONS(125),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(347),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_TILDE] = ACTIONS(137),
    [anon_sym_TILDE_AT] = ACTIONS(139),
    [sym_gensym] = ACTIONS(347),
  },
  [66] = {
    [sym_symbol] = STATE(131),
    [sym__symbol] = STATE(132),
    [sym_threading_macro] = STATE(132),
    [sym_qualified_symbol] = STATE(132),
    [sym_vector] = STATE(133),
    [sym__vector] = STATE(37),
    [sym__after_the_fn_name] = STATE(134),
    [sym_function_name] = STATE(135),
    [sym__single_arity_fn] = STATE(134),
    [sym__multi_arity_fn] = STATE(134),
    [sym_params] = STATE(136),
    [aux_sym__multi_arity_fn_repeat1] = STATE(137),
    [anon_sym_DASH_GT] = ACTIONS(349),
    [anon_sym_DASH_GT_GT] = ACTIONS(351),
    [anon_sym_as_DASH_GT] = ACTIONS(351),
    [anon_sym_some_DASH_GT] = ACTIONS(349),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(351),
    [anon_sym_cond_DASH_GT] = ACTIONS(349),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(351),
    [sym__symbol_chars] = ACTIONS(353),
    [anon_sym_LPAREN] = ACTIONS(355),
    [anon_sym_LBRACK] = ACTIONS(37),
  },
  [67] = {
    [sym_symbol] = STATE(131),
    [sym__symbol] = STATE(132),
    [sym_threading_macro] = STATE(132),
    [sym_qualified_symbol] = STATE(132),
    [sym_function_name] = STATE(138),
    [sym_metadata] = STATE(139),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(140),
    [aux_sym_metadata_repeat1] = STATE(140),
    [anon_sym_DASH_GT] = ACTIONS(349),
    [anon_sym_DASH_GT_GT] = ACTIONS(351),
    [anon_sym_as_DASH_GT] = ACTIONS(351),
    [anon_sym_some_DASH_GT] = ACTIONS(349),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(351),
    [anon_sym_cond_DASH_GT] = ACTIONS(349),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(351),
    [sym__symbol_chars] = ACTIONS(353),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [68] = {
    [sym__anything] = STATE(109),
    [sym__literals] = STATE(109),
    [sym__collection_literals] = STATE(109),
    [sym_boolean] = STATE(109),
    [sym_number] = STATE(109),
    [sym__number] = STATE(29),
    [sym_character] = STATE(109),
    [sym__character] = STATE(30),
    [sym_string] = STATE(109),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(109),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(109),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(109),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(109),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(109),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(109),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(109),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(109),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(109),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(109),
    [sym_anonymous_function] = STATE(109),
    [sym_shorthand_function] = STATE(109),
    [sym_defn] = STATE(109),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(109),
    [sym_unquote] = STATE(109),
    [sym_unquote_splice] = STATE(109),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(219),
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
    [anon_sym_POUND_] = ACTIONS(125),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(221),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_TILDE] = ACTIONS(137),
    [anon_sym_TILDE_AT] = ACTIONS(139),
    [sym_gensym] = ACTIONS(221),
  },
  [69] = {
    [sym__anything] = STATE(110),
    [sym__literals] = STATE(110),
    [sym__collection_literals] = STATE(110),
    [sym_boolean] = STATE(110),
    [sym_number] = STATE(110),
    [sym__number] = STATE(29),
    [sym_character] = STATE(110),
    [sym__character] = STATE(30),
    [sym_string] = STATE(110),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(110),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(110),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(110),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(110),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(110),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(110),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(110),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(110),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(110),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(110),
    [sym_anonymous_function] = STATE(110),
    [sym_shorthand_function] = STATE(110),
    [sym_defn] = STATE(110),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(110),
    [sym_unquote] = STATE(110),
    [sym_unquote_splice] = STATE(110),
    [aux_sym_metadata_repeat1] = STATE(44),
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
    [anon_sym_POUND_] = ACTIONS(125),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(225),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_TILDE] = ACTIONS(137),
    [anon_sym_TILDE_AT] = ACTIONS(139),
    [sym_gensym] = ACTIONS(225),
  },
  [70] = {
    [sym__anything] = STATE(111),
    [sym__literals] = STATE(111),
    [sym__collection_literals] = STATE(111),
    [sym_boolean] = STATE(111),
    [sym_number] = STATE(111),
    [sym__number] = STATE(29),
    [sym_character] = STATE(111),
    [sym__character] = STATE(30),
    [sym_string] = STATE(111),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(111),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(111),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(111),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(111),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(111),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(111),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(111),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(111),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(111),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(111),
    [sym_anonymous_function] = STATE(111),
    [sym_shorthand_function] = STATE(111),
    [sym_defn] = STATE(111),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(111),
    [sym_unquote] = STATE(111),
    [sym_unquote_splice] = STATE(111),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(227),
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
    [anon_sym_POUND_] = ACTIONS(125),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(229),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_TILDE] = ACTIONS(137),
    [anon_sym_TILDE_AT] = ACTIONS(139),
    [sym_gensym] = ACTIONS(229),
  },
  [71] = {
    [sym__anything] = STATE(142),
    [sym__literals] = STATE(142),
    [sym__collection_literals] = STATE(142),
    [sym_boolean] = STATE(142),
    [sym_number] = STATE(142),
    [sym__number] = STATE(29),
    [sym_character] = STATE(142),
    [sym__character] = STATE(30),
    [sym_string] = STATE(142),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(142),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(142),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(142),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(142),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(142),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(142),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(142),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(142),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(142),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(142),
    [sym_anonymous_function] = STATE(142),
    [sym_shorthand_function] = STATE(142),
    [sym_defn] = STATE(142),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(142),
    [sym_unquote] = STATE(142),
    [sym_unquote_splice] = STATE(142),
    [aux_sym_program_repeat1] = STATE(142),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(357),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(121),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(359),
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
    [anon_sym_POUND_] = ACTIONS(125),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(361),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_TILDE] = ACTIONS(137),
    [anon_sym_TILDE_AT] = ACTIONS(139),
    [sym_gensym] = ACTIONS(361),
  },
  [72] = {
    [sym__anything] = STATE(52),
    [sym__literals] = STATE(52),
    [sym__collection_literals] = STATE(52),
    [sym_boolean] = STATE(52),
    [sym_number] = STATE(52),
    [sym__number] = STATE(29),
    [sym_character] = STATE(52),
    [sym__character] = STATE(30),
    [sym_string] = STATE(52),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(52),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(52),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(52),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(52),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(52),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(52),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(52),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(52),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(52),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(52),
    [sym_anonymous_function] = STATE(52),
    [sym_shorthand_function] = STATE(52),
    [sym_defn] = STATE(52),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(52),
    [sym_unquote] = STATE(52),
    [sym_unquote_splice] = STATE(52),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(87),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(143),
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
    [anon_sym_POUND_] = ACTIONS(147),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(89),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(151),
    [anon_sym_TILDE] = ACTIONS(153),
    [anon_sym_TILDE_AT] = ACTIONS(155),
    [sym_gensym] = ACTIONS(89),
  },
  [73] = {
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
    [anon_sym_POUND_LPAREN] = ACTIONS(363),
    [sym_shorthand_function_arg] = ACTIONS(363),
    [anon_sym_CARET] = ACTIONS(365),
    [anon_sym_CARET_COLON] = ACTIONS(363),
    [anon_sym_CARET_DQUOTE] = ACTIONS(363),
    [anon_sym_BQUOTE] = ACTIONS(363),
    [anon_sym_TILDE] = ACTIONS(365),
    [anon_sym_TILDE_AT] = ACTIONS(363),
    [sym_gensym] = ACTIONS(363),
  },
  [74] = {
    [sym__anything] = STATE(99),
    [sym__literals] = STATE(99),
    [sym__collection_literals] = STATE(99),
    [sym_boolean] = STATE(99),
    [sym_number] = STATE(99),
    [sym__number] = STATE(29),
    [sym_character] = STATE(99),
    [sym__character] = STATE(30),
    [sym_string] = STATE(99),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(99),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(99),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(99),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(99),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(99),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(99),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(99),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(99),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(99),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(99),
    [sym_anonymous_function] = STATE(99),
    [sym_shorthand_function] = STATE(99),
    [sym_defn] = STATE(99),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(99),
    [sym_unquote] = STATE(99),
    [sym_unquote_splice] = STATE(99),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(197),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(143),
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
    [anon_sym_POUND_] = ACTIONS(147),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(199),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(151),
    [anon_sym_TILDE] = ACTIONS(153),
    [anon_sym_TILDE_AT] = ACTIONS(155),
    [sym_gensym] = ACTIONS(199),
  },
  [75] = {
    [sym__anything] = STATE(109),
    [sym__literals] = STATE(109),
    [sym__collection_literals] = STATE(109),
    [sym_boolean] = STATE(109),
    [sym_number] = STATE(109),
    [sym__number] = STATE(29),
    [sym_character] = STATE(109),
    [sym__character] = STATE(30),
    [sym_string] = STATE(109),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(109),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(109),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(109),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(109),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(109),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(109),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(109),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(109),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(109),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(109),
    [sym_anonymous_function] = STATE(109),
    [sym_shorthand_function] = STATE(109),
    [sym_defn] = STATE(109),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(109),
    [sym_unquote] = STATE(109),
    [sym_unquote_splice] = STATE(109),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(219),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(143),
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
    [anon_sym_POUND_] = ACTIONS(147),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(221),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(151),
    [anon_sym_TILDE] = ACTIONS(153),
    [anon_sym_TILDE_AT] = ACTIONS(155),
    [sym_gensym] = ACTIONS(221),
  },
  [76] = {
    [sym__anything] = STATE(110),
    [sym__literals] = STATE(110),
    [sym__collection_literals] = STATE(110),
    [sym_boolean] = STATE(110),
    [sym_number] = STATE(110),
    [sym__number] = STATE(29),
    [sym_character] = STATE(110),
    [sym__character] = STATE(30),
    [sym_string] = STATE(110),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(110),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(110),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(110),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(110),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(110),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(110),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(110),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(110),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(110),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(110),
    [sym_anonymous_function] = STATE(110),
    [sym_shorthand_function] = STATE(110),
    [sym_defn] = STATE(110),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(110),
    [sym_unquote] = STATE(110),
    [sym_unquote_splice] = STATE(110),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(223),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(143),
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
    [anon_sym_POUND_] = ACTIONS(147),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(225),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(151),
    [anon_sym_TILDE] = ACTIONS(153),
    [anon_sym_TILDE_AT] = ACTIONS(155),
    [sym_gensym] = ACTIONS(225),
  },
  [77] = {
    [sym__anything] = STATE(111),
    [sym__literals] = STATE(111),
    [sym__collection_literals] = STATE(111),
    [sym_boolean] = STATE(111),
    [sym_number] = STATE(111),
    [sym__number] = STATE(29),
    [sym_character] = STATE(111),
    [sym__character] = STATE(30),
    [sym_string] = STATE(111),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(111),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(111),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(111),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(111),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(111),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(111),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(111),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(111),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(111),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(111),
    [sym_anonymous_function] = STATE(111),
    [sym_shorthand_function] = STATE(111),
    [sym_defn] = STATE(111),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(111),
    [sym_unquote] = STATE(111),
    [sym_unquote_splice] = STATE(111),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(227),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(143),
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
    [anon_sym_POUND_] = ACTIONS(147),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(229),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(151),
    [anon_sym_TILDE] = ACTIONS(153),
    [anon_sym_TILDE_AT] = ACTIONS(155),
    [sym_gensym] = ACTIONS(229),
  },
  [78] = {
    [sym__anything] = STATE(144),
    [sym__literals] = STATE(144),
    [sym__collection_literals] = STATE(144),
    [sym_boolean] = STATE(144),
    [sym_number] = STATE(144),
    [sym__number] = STATE(29),
    [sym_character] = STATE(144),
    [sym__character] = STATE(30),
    [sym_string] = STATE(144),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(144),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(144),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(144),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(144),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(144),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(144),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(144),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(144),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(144),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(144),
    [sym_anonymous_function] = STATE(144),
    [sym_shorthand_function] = STATE(144),
    [sym_defn] = STATE(144),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(144),
    [sym_unquote] = STATE(144),
    [sym_unquote_splice] = STATE(144),
    [aux_sym_program_repeat1] = STATE(144),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(367),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(143),
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
    [anon_sym_RBRACK] = ACTIONS(369),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(147),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(371),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(151),
    [anon_sym_TILDE] = ACTIONS(153),
    [anon_sym_TILDE_AT] = ACTIONS(155),
    [sym_gensym] = ACTIONS(371),
  },
  [79] = {
    [sym__anything] = STATE(52),
    [sym__literals] = STATE(52),
    [sym__collection_literals] = STATE(52),
    [sym_boolean] = STATE(52),
    [sym_number] = STATE(52),
    [sym__number] = STATE(29),
    [sym_character] = STATE(52),
    [sym__character] = STATE(30),
    [sym_string] = STATE(52),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(52),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(52),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(52),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(52),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(52),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(52),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(52),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(52),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(52),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(52),
    [sym_anonymous_function] = STATE(52),
    [sym_shorthand_function] = STATE(52),
    [sym_defn] = STATE(52),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(52),
    [sym_unquote] = STATE(52),
    [sym_unquote_splice] = STATE(52),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(87),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(159),
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
    [anon_sym_POUND_] = ACTIONS(163),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(89),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_TILDE] = ACTIONS(169),
    [anon_sym_TILDE_AT] = ACTIONS(171),
    [sym_gensym] = ACTIONS(89),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(373),
    [sym_nil] = ACTIONS(375),
    [sym_true] = ACTIONS(375),
    [sym_false] = ACTIONS(375),
    [sym_number_long] = ACTIONS(375),
    [sym_number_double] = ACTIONS(373),
    [anon_sym_BSLASH] = ACTIONS(373),
    [anon_sym_DQUOTE] = ACTIONS(373),
    [anon_sym_POUND_DQUOTE] = ACTIONS(373),
    [anon_sym_SQUOTE] = ACTIONS(373),
    [anon_sym_LPARENquote] = ACTIONS(373),
    [anon_sym_RPAREN] = ACTIONS(373),
    [anon_sym_COLON] = ACTIONS(375),
    [anon_sym_COLON_COLON] = ACTIONS(373),
    [anon_sym_DASH_GT] = ACTIONS(375),
    [anon_sym_DASH_GT_GT] = ACTIONS(373),
    [anon_sym_as_DASH_GT] = ACTIONS(373),
    [anon_sym_some_DASH_GT] = ACTIONS(375),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(373),
    [anon_sym_cond_DASH_GT] = ACTIONS(375),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(373),
    [sym__symbol_chars] = ACTIONS(375),
    [anon_sym_LPAREN] = ACTIONS(375),
    [anon_sym_LBRACK] = ACTIONS(373),
    [anon_sym_RBRACK] = ACTIONS(373),
    [anon_sym_LBRACE] = ACTIONS(373),
    [anon_sym_RBRACE] = ACTIONS(373),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(373),
    [anon_sym_POUND] = ACTIONS(375),
    [anon_sym_POUND_LBRACE] = ACTIONS(373),
    [anon_sym_SEMI] = ACTIONS(373),
    [anon_sym_POUND_BANG] = ACTIONS(373),
    [anon_sym_POUND_] = ACTIONS(373),
    [anon_sym_POUND_LPAREN] = ACTIONS(373),
    [sym_shorthand_function_arg] = ACTIONS(373),
    [anon_sym_CARET] = ACTIONS(375),
    [anon_sym_CARET_COLON] = ACTIONS(373),
    [anon_sym_CARET_DQUOTE] = ACTIONS(373),
    [anon_sym_BQUOTE] = ACTIONS(373),
    [anon_sym_TILDE] = ACTIONS(375),
    [anon_sym_TILDE_AT] = ACTIONS(373),
    [sym_gensym] = ACTIONS(373),
  },
  [81] = {
    [sym__anything] = STATE(99),
    [sym__literals] = STATE(99),
    [sym__collection_literals] = STATE(99),
    [sym_boolean] = STATE(99),
    [sym_number] = STATE(99),
    [sym__number] = STATE(29),
    [sym_character] = STATE(99),
    [sym__character] = STATE(30),
    [sym_string] = STATE(99),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(99),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(99),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(99),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(99),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(99),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(99),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(99),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(99),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(99),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(99),
    [sym_anonymous_function] = STATE(99),
    [sym_shorthand_function] = STATE(99),
    [sym_defn] = STATE(99),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(99),
    [sym_unquote] = STATE(99),
    [sym_unquote_splice] = STATE(99),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(197),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(159),
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
    [anon_sym_POUND_] = ACTIONS(163),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(199),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_TILDE] = ACTIONS(169),
    [anon_sym_TILDE_AT] = ACTIONS(171),
    [sym_gensym] = ACTIONS(199),
  },
  [82] = {
    [sym__anything] = STATE(109),
    [sym__literals] = STATE(109),
    [sym__collection_literals] = STATE(109),
    [sym_boolean] = STATE(109),
    [sym_number] = STATE(109),
    [sym__number] = STATE(29),
    [sym_character] = STATE(109),
    [sym__character] = STATE(30),
    [sym_string] = STATE(109),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(109),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(109),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(109),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(109),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(109),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(109),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(109),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(109),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(109),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(109),
    [sym_anonymous_function] = STATE(109),
    [sym_shorthand_function] = STATE(109),
    [sym_defn] = STATE(109),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(109),
    [sym_unquote] = STATE(109),
    [sym_unquote_splice] = STATE(109),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(219),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(159),
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
    [anon_sym_POUND_] = ACTIONS(163),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(221),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_TILDE] = ACTIONS(169),
    [anon_sym_TILDE_AT] = ACTIONS(171),
    [sym_gensym] = ACTIONS(221),
  },
  [83] = {
    [sym__anything] = STATE(110),
    [sym__literals] = STATE(110),
    [sym__collection_literals] = STATE(110),
    [sym_boolean] = STATE(110),
    [sym_number] = STATE(110),
    [sym__number] = STATE(29),
    [sym_character] = STATE(110),
    [sym__character] = STATE(30),
    [sym_string] = STATE(110),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(110),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(110),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(110),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(110),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(110),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(110),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(110),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(110),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(110),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(110),
    [sym_anonymous_function] = STATE(110),
    [sym_shorthand_function] = STATE(110),
    [sym_defn] = STATE(110),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(110),
    [sym_unquote] = STATE(110),
    [sym_unquote_splice] = STATE(110),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(223),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(159),
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
    [anon_sym_POUND_] = ACTIONS(163),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(225),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_TILDE] = ACTIONS(169),
    [anon_sym_TILDE_AT] = ACTIONS(171),
    [sym_gensym] = ACTIONS(225),
  },
  [84] = {
    [sym__anything] = STATE(111),
    [sym__literals] = STATE(111),
    [sym__collection_literals] = STATE(111),
    [sym_boolean] = STATE(111),
    [sym_number] = STATE(111),
    [sym__number] = STATE(29),
    [sym_character] = STATE(111),
    [sym__character] = STATE(30),
    [sym_string] = STATE(111),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(111),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(111),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(111),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(111),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(111),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(111),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(111),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(111),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(111),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(111),
    [sym_anonymous_function] = STATE(111),
    [sym_shorthand_function] = STATE(111),
    [sym_defn] = STATE(111),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(111),
    [sym_unquote] = STATE(111),
    [sym_unquote_splice] = STATE(111),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(227),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(159),
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
    [anon_sym_POUND_] = ACTIONS(163),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(229),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_TILDE] = ACTIONS(169),
    [anon_sym_TILDE_AT] = ACTIONS(171),
    [sym_gensym] = ACTIONS(229),
  },
  [85] = {
    [sym__anything] = STATE(145),
    [sym__literals] = STATE(145),
    [sym__collection_literals] = STATE(145),
    [sym_boolean] = STATE(145),
    [sym_number] = STATE(145),
    [sym__number] = STATE(29),
    [sym_character] = STATE(145),
    [sym__character] = STATE(30),
    [sym_string] = STATE(145),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(145),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(145),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(145),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(145),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(145),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(145),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(145),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym__hash_map_value] = STATE(145),
    [sym_set] = STATE(145),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(145),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(145),
    [sym_anonymous_function] = STATE(145),
    [sym_shorthand_function] = STATE(145),
    [sym_defn] = STATE(145),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(145),
    [sym_unquote] = STATE(145),
    [sym_unquote_splice] = STATE(145),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(377),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(179),
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
    [anon_sym_POUND_] = ACTIONS(183),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(379),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(187),
    [anon_sym_TILDE] = ACTIONS(189),
    [anon_sym_TILDE_AT] = ACTIONS(191),
    [sym_gensym] = ACTIONS(379),
  },
  [86] = {
    [sym__anything] = STATE(85),
    [sym__literals] = STATE(85),
    [sym__collection_literals] = STATE(85),
    [sym_boolean] = STATE(85),
    [sym_number] = STATE(85),
    [sym__number] = STATE(29),
    [sym_character] = STATE(85),
    [sym__character] = STATE(30),
    [sym_string] = STATE(85),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(85),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(85),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(85),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(85),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(85),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(85),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(85),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym__hash_map_kv_pair] = STATE(147),
    [sym__hash_map_key] = STATE(85),
    [sym_set] = STATE(85),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(85),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(85),
    [sym_anonymous_function] = STATE(85),
    [sym_shorthand_function] = STATE(85),
    [sym_defn] = STATE(85),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(85),
    [sym_unquote] = STATE(85),
    [sym_unquote_splice] = STATE(85),
    [aux_sym__hash_map_repeat1] = STATE(147),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(157),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(159),
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
    [anon_sym_RBRACE] = ACTIONS(381),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(163),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(165),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_TILDE] = ACTIONS(169),
    [anon_sym_TILDE_AT] = ACTIONS(171),
    [sym_gensym] = ACTIONS(165),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(383),
    [sym_nil] = ACTIONS(385),
    [sym_true] = ACTIONS(385),
    [sym_false] = ACTIONS(385),
    [sym_number_long] = ACTIONS(385),
    [sym_number_double] = ACTIONS(383),
    [anon_sym_BSLASH] = ACTIONS(383),
    [anon_sym_DQUOTE] = ACTIONS(383),
    [anon_sym_POUND_DQUOTE] = ACTIONS(383),
    [anon_sym_SQUOTE] = ACTIONS(383),
    [anon_sym_LPARENquote] = ACTIONS(383),
    [anon_sym_RPAREN] = ACTIONS(383),
    [anon_sym_COLON] = ACTIONS(385),
    [anon_sym_COLON_COLON] = ACTIONS(383),
    [anon_sym_DASH_GT] = ACTIONS(385),
    [anon_sym_DASH_GT_GT] = ACTIONS(383),
    [anon_sym_as_DASH_GT] = ACTIONS(383),
    [anon_sym_some_DASH_GT] = ACTIONS(385),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(383),
    [anon_sym_cond_DASH_GT] = ACTIONS(385),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(383),
    [sym__symbol_chars] = ACTIONS(385),
    [anon_sym_LPAREN] = ACTIONS(385),
    [anon_sym_LBRACK] = ACTIONS(383),
    [anon_sym_RBRACK] = ACTIONS(383),
    [anon_sym_LBRACE] = ACTIONS(383),
    [anon_sym_RBRACE] = ACTIONS(383),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(383),
    [anon_sym_POUND] = ACTIONS(385),
    [anon_sym_POUND_LBRACE] = ACTIONS(383),
    [anon_sym_SEMI] = ACTIONS(383),
    [anon_sym_POUND_BANG] = ACTIONS(383),
    [anon_sym_POUND_] = ACTIONS(383),
    [anon_sym_POUND_LPAREN] = ACTIONS(383),
    [sym_shorthand_function_arg] = ACTIONS(383),
    [anon_sym_CARET] = ACTIONS(385),
    [anon_sym_CARET_COLON] = ACTIONS(383),
    [anon_sym_CARET_DQUOTE] = ACTIONS(383),
    [anon_sym_BQUOTE] = ACTIONS(383),
    [anon_sym_TILDE] = ACTIONS(385),
    [anon_sym_TILDE_AT] = ACTIONS(383),
    [sym_gensym] = ACTIONS(383),
  },
  [88] = {
    [sym__anything] = STATE(85),
    [sym__literals] = STATE(85),
    [sym__collection_literals] = STATE(85),
    [sym_boolean] = STATE(85),
    [sym_number] = STATE(85),
    [sym__number] = STATE(29),
    [sym_character] = STATE(85),
    [sym__character] = STATE(30),
    [sym_string] = STATE(85),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(85),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(85),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(85),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(85),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(85),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(85),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(85),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym__hash_map_kv_pair] = STATE(147),
    [sym__hash_map_key] = STATE(85),
    [sym_set] = STATE(85),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(85),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(85),
    [sym_anonymous_function] = STATE(85),
    [sym_shorthand_function] = STATE(85),
    [sym_defn] = STATE(85),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(85),
    [sym_unquote] = STATE(85),
    [sym_unquote_splice] = STATE(85),
    [aux_sym__hash_map_repeat1] = STATE(147),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(157),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(159),
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
    [anon_sym_RBRACE] = ACTIONS(387),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(163),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(165),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_TILDE] = ACTIONS(169),
    [anon_sym_TILDE_AT] = ACTIONS(171),
    [sym_gensym] = ACTIONS(165),
  },
  [89] = {
    [anon_sym_LBRACE] = ACTIONS(389),
  },
  [90] = {
    [sym__anything] = STATE(52),
    [sym__literals] = STATE(52),
    [sym__collection_literals] = STATE(52),
    [sym_boolean] = STATE(52),
    [sym_number] = STATE(52),
    [sym__number] = STATE(29),
    [sym_character] = STATE(52),
    [sym__character] = STATE(30),
    [sym_string] = STATE(52),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(52),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(52),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(52),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(52),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(52),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(52),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(52),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(52),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(52),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(52),
    [sym_anonymous_function] = STATE(52),
    [sym_shorthand_function] = STATE(52),
    [sym_defn] = STATE(52),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(52),
    [sym_unquote] = STATE(52),
    [sym_unquote_splice] = STATE(52),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(87),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(179),
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
    [anon_sym_POUND_] = ACTIONS(183),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(89),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(187),
    [anon_sym_TILDE] = ACTIONS(189),
    [anon_sym_TILDE_AT] = ACTIONS(191),
    [sym_gensym] = ACTIONS(89),
  },
  [91] = {
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
    [anon_sym_POUND_LPAREN] = ACTIONS(391),
    [sym_shorthand_function_arg] = ACTIONS(391),
    [anon_sym_CARET] = ACTIONS(393),
    [anon_sym_CARET_COLON] = ACTIONS(391),
    [anon_sym_CARET_DQUOTE] = ACTIONS(391),
    [anon_sym_BQUOTE] = ACTIONS(391),
    [anon_sym_TILDE] = ACTIONS(393),
    [anon_sym_TILDE_AT] = ACTIONS(391),
    [sym_gensym] = ACTIONS(391),
  },
  [92] = {
    [sym__anything] = STATE(99),
    [sym__literals] = STATE(99),
    [sym__collection_literals] = STATE(99),
    [sym_boolean] = STATE(99),
    [sym_number] = STATE(99),
    [sym__number] = STATE(29),
    [sym_character] = STATE(99),
    [sym__character] = STATE(30),
    [sym_string] = STATE(99),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(99),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(99),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(99),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(99),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(99),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(99),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(99),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(99),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(99),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(99),
    [sym_anonymous_function] = STATE(99),
    [sym_shorthand_function] = STATE(99),
    [sym_defn] = STATE(99),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(99),
    [sym_unquote] = STATE(99),
    [sym_unquote_splice] = STATE(99),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(197),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(179),
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
    [anon_sym_POUND_] = ACTIONS(183),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(199),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(187),
    [anon_sym_TILDE] = ACTIONS(189),
    [anon_sym_TILDE_AT] = ACTIONS(191),
    [sym_gensym] = ACTIONS(199),
  },
  [93] = {
    [sym__anything] = STATE(109),
    [sym__literals] = STATE(109),
    [sym__collection_literals] = STATE(109),
    [sym_boolean] = STATE(109),
    [sym_number] = STATE(109),
    [sym__number] = STATE(29),
    [sym_character] = STATE(109),
    [sym__character] = STATE(30),
    [sym_string] = STATE(109),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(109),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(109),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(109),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(109),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(109),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(109),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(109),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(109),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(109),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(109),
    [sym_anonymous_function] = STATE(109),
    [sym_shorthand_function] = STATE(109),
    [sym_defn] = STATE(109),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(109),
    [sym_unquote] = STATE(109),
    [sym_unquote_splice] = STATE(109),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(219),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(179),
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
    [anon_sym_POUND_] = ACTIONS(183),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(221),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(187),
    [anon_sym_TILDE] = ACTIONS(189),
    [anon_sym_TILDE_AT] = ACTIONS(191),
    [sym_gensym] = ACTIONS(221),
  },
  [94] = {
    [sym__anything] = STATE(110),
    [sym__literals] = STATE(110),
    [sym__collection_literals] = STATE(110),
    [sym_boolean] = STATE(110),
    [sym_number] = STATE(110),
    [sym__number] = STATE(29),
    [sym_character] = STATE(110),
    [sym__character] = STATE(30),
    [sym_string] = STATE(110),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(110),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(110),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(110),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(110),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(110),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(110),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(110),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(110),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(110),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(110),
    [sym_anonymous_function] = STATE(110),
    [sym_shorthand_function] = STATE(110),
    [sym_defn] = STATE(110),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(110),
    [sym_unquote] = STATE(110),
    [sym_unquote_splice] = STATE(110),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(223),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(179),
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
    [anon_sym_POUND_] = ACTIONS(183),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(225),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(187),
    [anon_sym_TILDE] = ACTIONS(189),
    [anon_sym_TILDE_AT] = ACTIONS(191),
    [sym_gensym] = ACTIONS(225),
  },
  [95] = {
    [sym__anything] = STATE(111),
    [sym__literals] = STATE(111),
    [sym__collection_literals] = STATE(111),
    [sym_boolean] = STATE(111),
    [sym_number] = STATE(111),
    [sym__number] = STATE(29),
    [sym_character] = STATE(111),
    [sym__character] = STATE(30),
    [sym_string] = STATE(111),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(111),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(111),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(111),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(111),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(111),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(111),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(111),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(111),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(111),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(111),
    [sym_anonymous_function] = STATE(111),
    [sym_shorthand_function] = STATE(111),
    [sym_defn] = STATE(111),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(111),
    [sym_unquote] = STATE(111),
    [sym_unquote_splice] = STATE(111),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(227),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(179),
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
    [anon_sym_POUND_] = ACTIONS(183),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(229),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(187),
    [anon_sym_TILDE] = ACTIONS(189),
    [anon_sym_TILDE_AT] = ACTIONS(191),
    [sym_gensym] = ACTIONS(229),
  },
  [96] = {
    [sym__anything] = STATE(151),
    [sym__literals] = STATE(151),
    [sym__collection_literals] = STATE(151),
    [sym_boolean] = STATE(151),
    [sym_number] = STATE(151),
    [sym__number] = STATE(29),
    [sym_character] = STATE(151),
    [sym__character] = STATE(30),
    [sym_string] = STATE(151),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(151),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(151),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(151),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(151),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(151),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(151),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(151),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(151),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(151),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(151),
    [sym_anonymous_function] = STATE(151),
    [sym_shorthand_function] = STATE(151),
    [sym_defn] = STATE(151),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(151),
    [sym_unquote] = STATE(151),
    [sym_unquote_splice] = STATE(151),
    [aux_sym_program_repeat1] = STATE(151),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(395),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(179),
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
    [anon_sym_RBRACE] = ACTIONS(397),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(183),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(399),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(187),
    [anon_sym_TILDE] = ACTIONS(189),
    [anon_sym_TILDE_AT] = ACTIONS(191),
    [sym_gensym] = ACTIONS(399),
  },
  [97] = {
    [ts_builtin_sym_end] = ACTIONS(401),
    [sym_nil] = ACTIONS(403),
    [sym_true] = ACTIONS(403),
    [sym_false] = ACTIONS(403),
    [sym_number_long] = ACTIONS(403),
    [sym_number_double] = ACTIONS(401),
    [anon_sym_BSLASH] = ACTIONS(401),
    [anon_sym_DQUOTE] = ACTIONS(401),
    [anon_sym_POUND_DQUOTE] = ACTIONS(401),
    [anon_sym_SQUOTE] = ACTIONS(401),
    [anon_sym_LPARENquote] = ACTIONS(401),
    [anon_sym_RPAREN] = ACTIONS(401),
    [anon_sym_COLON] = ACTIONS(403),
    [anon_sym_COLON_COLON] = ACTIONS(401),
    [anon_sym_DASH_GT] = ACTIONS(403),
    [anon_sym_DASH_GT_GT] = ACTIONS(401),
    [anon_sym_as_DASH_GT] = ACTIONS(401),
    [anon_sym_some_DASH_GT] = ACTIONS(403),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(401),
    [anon_sym_cond_DASH_GT] = ACTIONS(403),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(401),
    [sym__symbol_chars] = ACTIONS(403),
    [anon_sym_LPAREN] = ACTIONS(403),
    [anon_sym_LBRACK] = ACTIONS(401),
    [anon_sym_RBRACK] = ACTIONS(401),
    [anon_sym_LBRACE] = ACTIONS(401),
    [anon_sym_RBRACE] = ACTIONS(401),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(401),
    [anon_sym_POUND] = ACTIONS(403),
    [anon_sym_POUND_LBRACE] = ACTIONS(401),
    [anon_sym_SEMI] = ACTIONS(401),
    [anon_sym_POUND_BANG] = ACTIONS(401),
    [anon_sym_POUND_] = ACTIONS(401),
    [anon_sym_POUND_LPAREN] = ACTIONS(401),
    [sym_shorthand_function_arg] = ACTIONS(401),
    [anon_sym_CARET] = ACTIONS(403),
    [anon_sym_CARET_COLON] = ACTIONS(401),
    [anon_sym_CARET_DQUOTE] = ACTIONS(401),
    [anon_sym_BQUOTE] = ACTIONS(401),
    [anon_sym_TILDE] = ACTIONS(403),
    [anon_sym_TILDE_AT] = ACTIONS(401),
    [sym_gensym] = ACTIONS(401),
  },
  [98] = {
    [ts_builtin_sym_end] = ACTIONS(405),
    [sym_nil] = ACTIONS(407),
    [sym_true] = ACTIONS(407),
    [sym_false] = ACTIONS(407),
    [sym_number_long] = ACTIONS(407),
    [sym_number_double] = ACTIONS(405),
    [anon_sym_BSLASH] = ACTIONS(405),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [anon_sym_POUND_DQUOTE] = ACTIONS(405),
    [anon_sym_SQUOTE] = ACTIONS(405),
    [anon_sym_LPARENquote] = ACTIONS(405),
    [anon_sym_RPAREN] = ACTIONS(405),
    [anon_sym_COLON] = ACTIONS(407),
    [anon_sym_COLON_COLON] = ACTIONS(405),
    [anon_sym_DASH_GT] = ACTIONS(407),
    [anon_sym_DASH_GT_GT] = ACTIONS(405),
    [anon_sym_as_DASH_GT] = ACTIONS(405),
    [anon_sym_some_DASH_GT] = ACTIONS(407),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(405),
    [anon_sym_cond_DASH_GT] = ACTIONS(407),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(405),
    [sym__symbol_chars] = ACTIONS(407),
    [anon_sym_LPAREN] = ACTIONS(407),
    [anon_sym_LBRACK] = ACTIONS(405),
    [anon_sym_RBRACK] = ACTIONS(405),
    [anon_sym_LBRACE] = ACTIONS(405),
    [anon_sym_RBRACE] = ACTIONS(405),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(405),
    [anon_sym_POUND] = ACTIONS(407),
    [anon_sym_POUND_LBRACE] = ACTIONS(405),
    [anon_sym_SEMI] = ACTIONS(405),
    [anon_sym_POUND_BANG] = ACTIONS(405),
    [anon_sym_POUND_] = ACTIONS(405),
    [anon_sym_POUND_LPAREN] = ACTIONS(405),
    [sym_shorthand_function_arg] = ACTIONS(405),
    [anon_sym_CARET] = ACTIONS(407),
    [anon_sym_CARET_COLON] = ACTIONS(405),
    [anon_sym_CARET_DQUOTE] = ACTIONS(405),
    [anon_sym_BQUOTE] = ACTIONS(405),
    [anon_sym_TILDE] = ACTIONS(407),
    [anon_sym_TILDE_AT] = ACTIONS(405),
    [sym_gensym] = ACTIONS(405),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(409),
    [sym_nil] = ACTIONS(411),
    [sym_true] = ACTIONS(411),
    [sym_false] = ACTIONS(411),
    [sym_number_long] = ACTIONS(411),
    [sym_number_double] = ACTIONS(409),
    [anon_sym_BSLASH] = ACTIONS(409),
    [anon_sym_DQUOTE] = ACTIONS(409),
    [anon_sym_POUND_DQUOTE] = ACTIONS(409),
    [anon_sym_SQUOTE] = ACTIONS(409),
    [anon_sym_LPARENquote] = ACTIONS(409),
    [anon_sym_RPAREN] = ACTIONS(409),
    [anon_sym_COLON] = ACTIONS(411),
    [anon_sym_COLON_COLON] = ACTIONS(409),
    [anon_sym_DASH_GT] = ACTIONS(411),
    [anon_sym_DASH_GT_GT] = ACTIONS(409),
    [anon_sym_as_DASH_GT] = ACTIONS(409),
    [anon_sym_some_DASH_GT] = ACTIONS(411),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(409),
    [anon_sym_cond_DASH_GT] = ACTIONS(411),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(409),
    [sym__symbol_chars] = ACTIONS(411),
    [anon_sym_LPAREN] = ACTIONS(411),
    [anon_sym_LBRACK] = ACTIONS(409),
    [anon_sym_RBRACK] = ACTIONS(409),
    [anon_sym_LBRACE] = ACTIONS(409),
    [anon_sym_RBRACE] = ACTIONS(409),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(409),
    [anon_sym_POUND] = ACTIONS(411),
    [anon_sym_POUND_LBRACE] = ACTIONS(409),
    [anon_sym_SEMI] = ACTIONS(409),
    [anon_sym_POUND_BANG] = ACTIONS(409),
    [anon_sym_POUND_] = ACTIONS(409),
    [anon_sym_POUND_LPAREN] = ACTIONS(409),
    [sym_shorthand_function_arg] = ACTIONS(409),
    [anon_sym_CARET] = ACTIONS(411),
    [anon_sym_CARET_COLON] = ACTIONS(409),
    [anon_sym_CARET_DQUOTE] = ACTIONS(409),
    [anon_sym_BQUOTE] = ACTIONS(409),
    [anon_sym_TILDE] = ACTIONS(411),
    [anon_sym_TILDE_AT] = ACTIONS(409),
    [sym_gensym] = ACTIONS(409),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(413),
    [sym_nil] = ACTIONS(415),
    [sym_true] = ACTIONS(415),
    [sym_false] = ACTIONS(415),
    [sym_number_long] = ACTIONS(415),
    [sym_number_double] = ACTIONS(413),
    [anon_sym_BSLASH] = ACTIONS(413),
    [anon_sym_DQUOTE] = ACTIONS(413),
    [anon_sym_POUND_DQUOTE] = ACTIONS(413),
    [anon_sym_SQUOTE] = ACTIONS(413),
    [anon_sym_LPARENquote] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(413),
    [anon_sym_COLON] = ACTIONS(415),
    [anon_sym_COLON_COLON] = ACTIONS(413),
    [anon_sym_DASH_GT] = ACTIONS(415),
    [anon_sym_DASH_GT_GT] = ACTIONS(413),
    [anon_sym_as_DASH_GT] = ACTIONS(413),
    [anon_sym_some_DASH_GT] = ACTIONS(415),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(413),
    [anon_sym_cond_DASH_GT] = ACTIONS(415),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(413),
    [sym__symbol_chars] = ACTIONS(415),
    [anon_sym_LPAREN] = ACTIONS(415),
    [anon_sym_LBRACK] = ACTIONS(413),
    [anon_sym_RBRACK] = ACTIONS(413),
    [anon_sym_LBRACE] = ACTIONS(413),
    [anon_sym_RBRACE] = ACTIONS(413),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(413),
    [anon_sym_POUND] = ACTIONS(415),
    [anon_sym_POUND_LBRACE] = ACTIONS(413),
    [anon_sym_SEMI] = ACTIONS(413),
    [anon_sym_POUND_BANG] = ACTIONS(413),
    [anon_sym_POUND_] = ACTIONS(413),
    [anon_sym_POUND_LPAREN] = ACTIONS(413),
    [sym_shorthand_function_arg] = ACTIONS(413),
    [anon_sym_CARET] = ACTIONS(415),
    [anon_sym_CARET_COLON] = ACTIONS(413),
    [anon_sym_CARET_DQUOTE] = ACTIONS(413),
    [anon_sym_BQUOTE] = ACTIONS(413),
    [anon_sym_TILDE] = ACTIONS(415),
    [anon_sym_TILDE_AT] = ACTIONS(413),
    [sym_gensym] = ACTIONS(413),
  },
  [101] = {
    [sym__anything] = STATE(142),
    [sym__literals] = STATE(142),
    [sym__collection_literals] = STATE(142),
    [sym_boolean] = STATE(142),
    [sym_number] = STATE(142),
    [sym__number] = STATE(29),
    [sym_character] = STATE(142),
    [sym__character] = STATE(30),
    [sym_string] = STATE(142),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(142),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(142),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(142),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(142),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(142),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(142),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(142),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(142),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(142),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(142),
    [sym_anonymous_function] = STATE(142),
    [sym_shorthand_function] = STATE(142),
    [sym_defn] = STATE(142),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(142),
    [sym_unquote] = STATE(142),
    [sym_unquote_splice] = STATE(142),
    [aux_sym_program_repeat1] = STATE(142),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(357),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(121),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(417),
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
    [anon_sym_POUND_] = ACTIONS(125),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(361),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_TILDE] = ACTIONS(137),
    [anon_sym_TILDE_AT] = ACTIONS(139),
    [sym_gensym] = ACTIONS(361),
  },
  [102] = {
    [anon_sym_DASH_GT] = ACTIONS(419),
    [anon_sym_DASH_GT_GT] = ACTIONS(421),
    [anon_sym_as_DASH_GT] = ACTIONS(421),
    [anon_sym_some_DASH_GT] = ACTIONS(419),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(421),
    [anon_sym_cond_DASH_GT] = ACTIONS(419),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(421),
    [sym__symbol_chars] = ACTIONS(419),
    [anon_sym_LPAREN] = ACTIONS(421),
    [anon_sym_LBRACK] = ACTIONS(421),
    [anon_sym_LBRACE] = ACTIONS(421),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(421),
    [anon_sym_POUND] = ACTIONS(419),
    [anon_sym_POUND_LBRACE] = ACTIONS(421),
    [anon_sym_CARET] = ACTIONS(419),
    [anon_sym_CARET_COLON] = ACTIONS(421),
    [anon_sym_CARET_DQUOTE] = ACTIONS(421),
  },
  [103] = {
    [sym__anything] = STATE(85),
    [sym__literals] = STATE(85),
    [sym__collection_literals] = STATE(85),
    [sym_boolean] = STATE(85),
    [sym_number] = STATE(85),
    [sym__number] = STATE(29),
    [sym_character] = STATE(85),
    [sym__character] = STATE(30),
    [sym_string] = STATE(85),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(85),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(85),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(85),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(85),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(85),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(85),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(85),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym__hash_map_kv_pair] = STATE(154),
    [sym__hash_map_key] = STATE(85),
    [sym_set] = STATE(85),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(85),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(85),
    [sym_anonymous_function] = STATE(85),
    [sym_shorthand_function] = STATE(85),
    [sym_defn] = STATE(85),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(85),
    [sym_unquote] = STATE(85),
    [sym_unquote_splice] = STATE(85),
    [aux_sym__hash_map_repeat1] = STATE(154),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(157),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(159),
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
    [anon_sym_RBRACE] = ACTIONS(423),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(163),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(165),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_TILDE] = ACTIONS(169),
    [anon_sym_TILDE_AT] = ACTIONS(171),
    [sym_gensym] = ACTIONS(165),
  },
  [104] = {
    [sym__anything] = STATE(85),
    [sym__literals] = STATE(85),
    [sym__collection_literals] = STATE(85),
    [sym_boolean] = STATE(85),
    [sym_number] = STATE(85),
    [sym__number] = STATE(29),
    [sym_character] = STATE(85),
    [sym__character] = STATE(30),
    [sym_string] = STATE(85),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(85),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(85),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(85),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(85),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(85),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(85),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(85),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym__hash_map_kv_pair] = STATE(156),
    [sym__hash_map_key] = STATE(85),
    [sym_set] = STATE(85),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(85),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(85),
    [sym_anonymous_function] = STATE(85),
    [sym_shorthand_function] = STATE(85),
    [sym_defn] = STATE(85),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(85),
    [sym_unquote] = STATE(85),
    [sym_unquote_splice] = STATE(85),
    [aux_sym__hash_map_repeat1] = STATE(156),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(157),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(159),
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
    [anon_sym_RBRACE] = ACTIONS(425),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(163),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(165),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_TILDE] = ACTIONS(169),
    [anon_sym_TILDE_AT] = ACTIONS(171),
    [sym_gensym] = ACTIONS(165),
  },
  [105] = {
    [sym__symbol_chars] = ACTIONS(427),
  },
  [106] = {
    [anon_sym_DASH_GT] = ACTIONS(429),
    [anon_sym_DASH_GT_GT] = ACTIONS(431),
    [anon_sym_as_DASH_GT] = ACTIONS(431),
    [anon_sym_some_DASH_GT] = ACTIONS(429),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(431),
    [anon_sym_cond_DASH_GT] = ACTIONS(429),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(431),
    [sym__symbol_chars] = ACTIONS(429),
    [anon_sym_LPAREN] = ACTIONS(431),
    [anon_sym_LBRACK] = ACTIONS(431),
    [anon_sym_LBRACE] = ACTIONS(431),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(431),
    [anon_sym_POUND] = ACTIONS(429),
    [anon_sym_POUND_LBRACE] = ACTIONS(431),
  },
  [107] = {
    [anon_sym_DASH_GT] = ACTIONS(271),
    [anon_sym_DASH_GT_GT] = ACTIONS(269),
    [anon_sym_as_DASH_GT] = ACTIONS(269),
    [anon_sym_some_DASH_GT] = ACTIONS(271),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(269),
    [anon_sym_cond_DASH_GT] = ACTIONS(271),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(269),
    [sym__symbol_chars] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_LBRACK] = ACTIONS(269),
    [anon_sym_LBRACE] = ACTIONS(269),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(269),
    [anon_sym_POUND] = ACTIONS(271),
    [anon_sym_POUND_LBRACE] = ACTIONS(269),
  },
  [108] = {
    [aux_sym__string_repeat1] = STATE(120),
    [anon_sym_DQUOTE] = ACTIONS(433),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(311),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(311),
  },
  [109] = {
    [ts_builtin_sym_end] = ACTIONS(435),
    [sym_nil] = ACTIONS(437),
    [sym_true] = ACTIONS(437),
    [sym_false] = ACTIONS(437),
    [sym_number_long] = ACTIONS(437),
    [sym_number_double] = ACTIONS(435),
    [anon_sym_BSLASH] = ACTIONS(435),
    [anon_sym_DQUOTE] = ACTIONS(435),
    [anon_sym_POUND_DQUOTE] = ACTIONS(435),
    [anon_sym_SQUOTE] = ACTIONS(435),
    [anon_sym_LPARENquote] = ACTIONS(435),
    [anon_sym_RPAREN] = ACTIONS(435),
    [anon_sym_COLON] = ACTIONS(437),
    [anon_sym_COLON_COLON] = ACTIONS(435),
    [anon_sym_DASH_GT] = ACTIONS(437),
    [anon_sym_DASH_GT_GT] = ACTIONS(435),
    [anon_sym_as_DASH_GT] = ACTIONS(435),
    [anon_sym_some_DASH_GT] = ACTIONS(437),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(435),
    [anon_sym_cond_DASH_GT] = ACTIONS(437),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(435),
    [sym__symbol_chars] = ACTIONS(437),
    [anon_sym_LPAREN] = ACTIONS(437),
    [anon_sym_LBRACK] = ACTIONS(435),
    [anon_sym_RBRACK] = ACTIONS(435),
    [anon_sym_LBRACE] = ACTIONS(435),
    [anon_sym_RBRACE] = ACTIONS(435),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(435),
    [anon_sym_POUND] = ACTIONS(437),
    [anon_sym_POUND_LBRACE] = ACTIONS(435),
    [anon_sym_SEMI] = ACTIONS(435),
    [anon_sym_POUND_BANG] = ACTIONS(435),
    [anon_sym_POUND_] = ACTIONS(435),
    [anon_sym_POUND_LPAREN] = ACTIONS(435),
    [sym_shorthand_function_arg] = ACTIONS(435),
    [anon_sym_CARET] = ACTIONS(437),
    [anon_sym_CARET_COLON] = ACTIONS(435),
    [anon_sym_CARET_DQUOTE] = ACTIONS(435),
    [anon_sym_BQUOTE] = ACTIONS(435),
    [anon_sym_TILDE] = ACTIONS(437),
    [anon_sym_TILDE_AT] = ACTIONS(435),
    [sym_gensym] = ACTIONS(435),
  },
  [110] = {
    [ts_builtin_sym_end] = ACTIONS(439),
    [sym_nil] = ACTIONS(441),
    [sym_true] = ACTIONS(441),
    [sym_false] = ACTIONS(441),
    [sym_number_long] = ACTIONS(441),
    [sym_number_double] = ACTIONS(439),
    [anon_sym_BSLASH] = ACTIONS(439),
    [anon_sym_DQUOTE] = ACTIONS(439),
    [anon_sym_POUND_DQUOTE] = ACTIONS(439),
    [anon_sym_SQUOTE] = ACTIONS(439),
    [anon_sym_LPARENquote] = ACTIONS(439),
    [anon_sym_RPAREN] = ACTIONS(439),
    [anon_sym_COLON] = ACTIONS(441),
    [anon_sym_COLON_COLON] = ACTIONS(439),
    [anon_sym_DASH_GT] = ACTIONS(441),
    [anon_sym_DASH_GT_GT] = ACTIONS(439),
    [anon_sym_as_DASH_GT] = ACTIONS(439),
    [anon_sym_some_DASH_GT] = ACTIONS(441),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(439),
    [anon_sym_cond_DASH_GT] = ACTIONS(441),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(439),
    [sym__symbol_chars] = ACTIONS(441),
    [anon_sym_LPAREN] = ACTIONS(441),
    [anon_sym_LBRACK] = ACTIONS(439),
    [anon_sym_RBRACK] = ACTIONS(439),
    [anon_sym_LBRACE] = ACTIONS(439),
    [anon_sym_RBRACE] = ACTIONS(439),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(439),
    [anon_sym_POUND] = ACTIONS(441),
    [anon_sym_POUND_LBRACE] = ACTIONS(439),
    [anon_sym_SEMI] = ACTIONS(439),
    [anon_sym_POUND_BANG] = ACTIONS(439),
    [anon_sym_POUND_] = ACTIONS(439),
    [anon_sym_POUND_LPAREN] = ACTIONS(439),
    [sym_shorthand_function_arg] = ACTIONS(439),
    [anon_sym_CARET] = ACTIONS(441),
    [anon_sym_CARET_COLON] = ACTIONS(439),
    [anon_sym_CARET_DQUOTE] = ACTIONS(439),
    [anon_sym_BQUOTE] = ACTIONS(439),
    [anon_sym_TILDE] = ACTIONS(441),
    [anon_sym_TILDE_AT] = ACTIONS(439),
    [sym_gensym] = ACTIONS(439),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(443),
    [sym_nil] = ACTIONS(445),
    [sym_true] = ACTIONS(445),
    [sym_false] = ACTIONS(445),
    [sym_number_long] = ACTIONS(445),
    [sym_number_double] = ACTIONS(443),
    [anon_sym_BSLASH] = ACTIONS(443),
    [anon_sym_DQUOTE] = ACTIONS(443),
    [anon_sym_POUND_DQUOTE] = ACTIONS(443),
    [anon_sym_SQUOTE] = ACTIONS(443),
    [anon_sym_LPARENquote] = ACTIONS(443),
    [anon_sym_RPAREN] = ACTIONS(443),
    [anon_sym_COLON] = ACTIONS(445),
    [anon_sym_COLON_COLON] = ACTIONS(443),
    [anon_sym_DASH_GT] = ACTIONS(445),
    [anon_sym_DASH_GT_GT] = ACTIONS(443),
    [anon_sym_as_DASH_GT] = ACTIONS(443),
    [anon_sym_some_DASH_GT] = ACTIONS(445),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(443),
    [anon_sym_cond_DASH_GT] = ACTIONS(445),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(443),
    [sym__symbol_chars] = ACTIONS(445),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(443),
    [sym_shorthand_function_arg] = ACTIONS(443),
    [anon_sym_CARET] = ACTIONS(445),
    [anon_sym_CARET_COLON] = ACTIONS(443),
    [anon_sym_CARET_DQUOTE] = ACTIONS(443),
    [anon_sym_BQUOTE] = ACTIONS(443),
    [anon_sym_TILDE] = ACTIONS(445),
    [anon_sym_TILDE_AT] = ACTIONS(443),
    [sym_gensym] = ACTIONS(443),
  },
  [112] = {
    [sym__anything] = STATE(71),
    [sym__literals] = STATE(71),
    [sym__collection_literals] = STATE(71),
    [sym_boolean] = STATE(71),
    [sym_number] = STATE(71),
    [sym__number] = STATE(29),
    [sym_character] = STATE(71),
    [sym__character] = STATE(30),
    [sym_string] = STATE(71),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(71),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(71),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(71),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(71),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(71),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(71),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(71),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(71),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(71),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(71),
    [sym_anonymous_function] = STATE(71),
    [sym_shorthand_function] = STATE(71),
    [sym_defn] = STATE(71),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(71),
    [sym_unquote] = STATE(71),
    [sym_unquote_splice] = STATE(71),
    [aux_sym_program_repeat1] = STATE(71),
    [aux_sym_metadata_repeat1] = STATE(44),
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
    [anon_sym_RPAREN] = ACTIONS(123),
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
    [anon_sym_POUND_] = ACTIONS(125),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(131),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_TILDE] = ACTIONS(137),
    [anon_sym_TILDE_AT] = ACTIONS(139),
    [sym_gensym] = ACTIONS(131),
  },
  [113] = {
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
    [anon_sym_POUND_LPAREN] = ACTIONS(447),
    [sym_shorthand_function_arg] = ACTIONS(447),
    [anon_sym_CARET] = ACTIONS(449),
    [anon_sym_CARET_COLON] = ACTIONS(447),
    [anon_sym_CARET_DQUOTE] = ACTIONS(447),
    [anon_sym_BQUOTE] = ACTIONS(447),
    [anon_sym_TILDE] = ACTIONS(449),
    [anon_sym_TILDE_AT] = ACTIONS(447),
    [sym_gensym] = ACTIONS(447),
  },
  [114] = {
    [sym__anything] = STATE(114),
    [sym__literals] = STATE(114),
    [sym__collection_literals] = STATE(114),
    [sym_boolean] = STATE(114),
    [sym_number] = STATE(114),
    [sym__number] = STATE(29),
    [sym_character] = STATE(114),
    [sym__character] = STATE(30),
    [sym_string] = STATE(114),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(114),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(114),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(114),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(114),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(114),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(114),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(114),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(114),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(114),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(114),
    [sym_anonymous_function] = STATE(114),
    [sym_shorthand_function] = STATE(114),
    [sym_defn] = STATE(114),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(114),
    [sym_unquote] = STATE(114),
    [sym_unquote_splice] = STATE(114),
    [aux_sym_program_repeat1] = STATE(114),
    [aux_sym_metadata_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(451),
    [sym_nil] = ACTIONS(453),
    [sym_true] = ACTIONS(456),
    [sym_false] = ACTIONS(456),
    [sym_number_long] = ACTIONS(459),
    [sym_number_double] = ACTIONS(462),
    [anon_sym_BSLASH] = ACTIONS(465),
    [anon_sym_DQUOTE] = ACTIONS(468),
    [anon_sym_POUND_DQUOTE] = ACTIONS(471),
    [anon_sym_SQUOTE] = ACTIONS(474),
    [anon_sym_LPARENquote] = ACTIONS(477),
    [anon_sym_COLON] = ACTIONS(480),
    [anon_sym_COLON_COLON] = ACTIONS(483),
    [anon_sym_DASH_GT] = ACTIONS(486),
    [anon_sym_DASH_GT_GT] = ACTIONS(489),
    [anon_sym_as_DASH_GT] = ACTIONS(489),
    [anon_sym_some_DASH_GT] = ACTIONS(486),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(489),
    [anon_sym_cond_DASH_GT] = ACTIONS(486),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(489),
    [sym__symbol_chars] = ACTIONS(492),
    [anon_sym_LPAREN] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(498),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(504),
    [anon_sym_POUND] = ACTIONS(507),
    [anon_sym_POUND_LBRACE] = ACTIONS(510),
    [anon_sym_SEMI] = ACTIONS(513),
    [anon_sym_POUND_BANG] = ACTIONS(516),
    [anon_sym_POUND_] = ACTIONS(519),
    [anon_sym_POUND_LPAREN] = ACTIONS(522),
    [sym_shorthand_function_arg] = ACTIONS(525),
    [anon_sym_CARET] = ACTIONS(528),
    [anon_sym_CARET_COLON] = ACTIONS(531),
    [anon_sym_CARET_DQUOTE] = ACTIONS(534),
    [anon_sym_BQUOTE] = ACTIONS(537),
    [anon_sym_TILDE] = ACTIONS(540),
    [anon_sym_TILDE_AT] = ACTIONS(543),
    [sym_gensym] = ACTIONS(525),
  },
  [115] = {
    [sym__symbol_chars] = ACTIONS(207),
  },
  [116] = {
    [sym_metadata_shorthand] = STATE(116),
    [aux_sym_metadata_repeat1] = STATE(116),
    [anon_sym_LPAREN] = ACTIONS(546),
    [anon_sym_LBRACK] = ACTIONS(546),
    [anon_sym_LBRACE] = ACTIONS(546),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(546),
    [anon_sym_POUND] = ACTIONS(548),
    [anon_sym_POUND_LBRACE] = ACTIONS(546),
    [anon_sym_CARET] = ACTIONS(550),
    [anon_sym_CARET_COLON] = ACTIONS(553),
    [anon_sym_CARET_DQUOTE] = ACTIONS(556),
  },
  [117] = {
    [sym__hex_char] = ACTIONS(559),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(561),
    [sym_nil] = ACTIONS(563),
    [sym_true] = ACTIONS(563),
    [sym_false] = ACTIONS(563),
    [sym_number_long] = ACTIONS(563),
    [sym_number_double] = ACTIONS(561),
    [anon_sym_BSLASH] = ACTIONS(561),
    [anon_sym_DQUOTE] = ACTIONS(561),
    [anon_sym_POUND_DQUOTE] = ACTIONS(561),
    [anon_sym_SQUOTE] = ACTIONS(561),
    [anon_sym_LPARENquote] = ACTIONS(561),
    [anon_sym_RPAREN] = ACTIONS(561),
    [anon_sym_COLON] = ACTIONS(563),
    [anon_sym_COLON_COLON] = ACTIONS(561),
    [anon_sym_DASH_GT] = ACTIONS(563),
    [anon_sym_DASH_GT_GT] = ACTIONS(561),
    [anon_sym_as_DASH_GT] = ACTIONS(561),
    [anon_sym_some_DASH_GT] = ACTIONS(563),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(561),
    [anon_sym_cond_DASH_GT] = ACTIONS(563),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(561),
    [sym__symbol_chars] = ACTIONS(563),
    [anon_sym_LPAREN] = ACTIONS(563),
    [anon_sym_LBRACK] = ACTIONS(561),
    [anon_sym_RBRACK] = ACTIONS(561),
    [anon_sym_LBRACE] = ACTIONS(561),
    [anon_sym_RBRACE] = ACTIONS(561),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(561),
    [anon_sym_POUND] = ACTIONS(563),
    [anon_sym_POUND_LBRACE] = ACTIONS(561),
    [anon_sym_SEMI] = ACTIONS(561),
    [anon_sym_POUND_BANG] = ACTIONS(561),
    [anon_sym_POUND_] = ACTIONS(561),
    [anon_sym_POUND_LPAREN] = ACTIONS(561),
    [sym_shorthand_function_arg] = ACTIONS(561),
    [anon_sym_CARET] = ACTIONS(563),
    [anon_sym_CARET_COLON] = ACTIONS(561),
    [anon_sym_CARET_DQUOTE] = ACTIONS(561),
    [anon_sym_BQUOTE] = ACTIONS(561),
    [anon_sym_TILDE] = ACTIONS(563),
    [anon_sym_TILDE_AT] = ACTIONS(561),
    [sym_gensym] = ACTIONS(561),
  },
  [119] = {
    [ts_builtin_sym_end] = ACTIONS(565),
    [sym_nil] = ACTIONS(567),
    [sym_true] = ACTIONS(567),
    [sym_false] = ACTIONS(567),
    [sym_number_long] = ACTIONS(567),
    [sym_number_double] = ACTIONS(565),
    [anon_sym_BSLASH] = ACTIONS(565),
    [anon_sym_DQUOTE] = ACTIONS(565),
    [anon_sym_POUND_DQUOTE] = ACTIONS(565),
    [anon_sym_SQUOTE] = ACTIONS(565),
    [anon_sym_LPARENquote] = ACTIONS(565),
    [anon_sym_RPAREN] = ACTIONS(565),
    [anon_sym_COLON] = ACTIONS(567),
    [anon_sym_COLON_COLON] = ACTIONS(565),
    [anon_sym_DASH_GT] = ACTIONS(567),
    [anon_sym_DASH_GT_GT] = ACTIONS(565),
    [anon_sym_as_DASH_GT] = ACTIONS(565),
    [anon_sym_some_DASH_GT] = ACTIONS(567),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(565),
    [anon_sym_cond_DASH_GT] = ACTIONS(567),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(565),
    [sym__symbol_chars] = ACTIONS(567),
    [anon_sym_LPAREN] = ACTIONS(567),
    [anon_sym_LBRACK] = ACTIONS(565),
    [anon_sym_RBRACK] = ACTIONS(565),
    [anon_sym_LBRACE] = ACTIONS(565),
    [anon_sym_RBRACE] = ACTIONS(565),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(565),
    [anon_sym_POUND] = ACTIONS(567),
    [anon_sym_POUND_LBRACE] = ACTIONS(565),
    [anon_sym_SEMI] = ACTIONS(565),
    [anon_sym_POUND_BANG] = ACTIONS(565),
    [anon_sym_POUND_] = ACTIONS(565),
    [anon_sym_POUND_LPAREN] = ACTIONS(565),
    [sym_shorthand_function_arg] = ACTIONS(565),
    [anon_sym_CARET] = ACTIONS(567),
    [anon_sym_CARET_COLON] = ACTIONS(565),
    [anon_sym_CARET_DQUOTE] = ACTIONS(565),
    [anon_sym_BQUOTE] = ACTIONS(565),
    [anon_sym_TILDE] = ACTIONS(567),
    [anon_sym_TILDE_AT] = ACTIONS(565),
    [sym_gensym] = ACTIONS(565),
  },
  [120] = {
    [aux_sym__string_repeat1] = STATE(120),
    [anon_sym_DQUOTE] = ACTIONS(569),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(571),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(571),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(574),
    [sym_nil] = ACTIONS(576),
    [sym_true] = ACTIONS(576),
    [sym_false] = ACTIONS(576),
    [sym_number_long] = ACTIONS(576),
    [sym_number_double] = ACTIONS(574),
    [anon_sym_BSLASH] = ACTIONS(574),
    [anon_sym_DQUOTE] = ACTIONS(574),
    [anon_sym_POUND_DQUOTE] = ACTIONS(574),
    [anon_sym_SQUOTE] = ACTIONS(574),
    [anon_sym_LPARENquote] = ACTIONS(574),
    [anon_sym_RPAREN] = ACTIONS(574),
    [anon_sym_COLON] = ACTIONS(576),
    [anon_sym_COLON_COLON] = ACTIONS(574),
    [anon_sym_DASH_GT] = ACTIONS(576),
    [anon_sym_DASH_GT_GT] = ACTIONS(574),
    [anon_sym_as_DASH_GT] = ACTIONS(574),
    [anon_sym_some_DASH_GT] = ACTIONS(576),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(574),
    [anon_sym_cond_DASH_GT] = ACTIONS(576),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(574),
    [sym__symbol_chars] = ACTIONS(576),
    [anon_sym_LPAREN] = ACTIONS(576),
    [anon_sym_LBRACK] = ACTIONS(574),
    [anon_sym_RBRACK] = ACTIONS(574),
    [anon_sym_LBRACE] = ACTIONS(574),
    [anon_sym_RBRACE] = ACTIONS(574),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(574),
    [anon_sym_POUND] = ACTIONS(576),
    [anon_sym_POUND_LBRACE] = ACTIONS(574),
    [anon_sym_SEMI] = ACTIONS(574),
    [anon_sym_POUND_BANG] = ACTIONS(574),
    [anon_sym_POUND_] = ACTIONS(574),
    [anon_sym_POUND_LPAREN] = ACTIONS(574),
    [sym_shorthand_function_arg] = ACTIONS(574),
    [anon_sym_CARET] = ACTIONS(576),
    [anon_sym_CARET_COLON] = ACTIONS(574),
    [anon_sym_CARET_DQUOTE] = ACTIONS(574),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [anon_sym_TILDE] = ACTIONS(576),
    [anon_sym_TILDE_AT] = ACTIONS(574),
    [sym_gensym] = ACTIONS(574),
  },
  [122] = {
    [aux_sym__regex_repeat1] = STATE(122),
    [anon_sym_DQUOTE] = ACTIONS(578),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(580),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(580),
  },
  [123] = {
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
    [anon_sym_POUND_LPAREN] = ACTIONS(583),
    [sym_shorthand_function_arg] = ACTIONS(583),
    [anon_sym_CARET] = ACTIONS(585),
    [anon_sym_CARET_COLON] = ACTIONS(583),
    [anon_sym_CARET_DQUOTE] = ACTIONS(583),
    [anon_sym_BQUOTE] = ACTIONS(583),
    [anon_sym_TILDE] = ACTIONS(585),
    [anon_sym_TILDE_AT] = ACTIONS(583),
    [sym_gensym] = ACTIONS(583),
  },
  [124] = {
    [sym__keyword_chars] = ACTIONS(587),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(589),
    [sym_nil] = ACTIONS(591),
    [sym_true] = ACTIONS(591),
    [sym_false] = ACTIONS(591),
    [sym_number_long] = ACTIONS(591),
    [sym_number_double] = ACTIONS(589),
    [anon_sym_BSLASH] = ACTIONS(589),
    [anon_sym_DQUOTE] = ACTIONS(589),
    [anon_sym_POUND_DQUOTE] = ACTIONS(589),
    [anon_sym_SQUOTE] = ACTIONS(589),
    [anon_sym_LPARENquote] = ACTIONS(589),
    [anon_sym_RPAREN] = ACTIONS(589),
    [anon_sym_COLON] = ACTIONS(591),
    [anon_sym_COLON_COLON] = ACTIONS(589),
    [anon_sym_DASH_GT] = ACTIONS(591),
    [anon_sym_DASH_GT_GT] = ACTIONS(589),
    [anon_sym_as_DASH_GT] = ACTIONS(589),
    [anon_sym_some_DASH_GT] = ACTIONS(591),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(589),
    [anon_sym_cond_DASH_GT] = ACTIONS(591),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(589),
    [sym__symbol_chars] = ACTIONS(591),
    [anon_sym_LPAREN] = ACTIONS(591),
    [anon_sym_LBRACK] = ACTIONS(589),
    [anon_sym_RBRACK] = ACTIONS(589),
    [anon_sym_LBRACE] = ACTIONS(589),
    [anon_sym_RBRACE] = ACTIONS(589),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(589),
    [anon_sym_POUND] = ACTIONS(591),
    [anon_sym_POUND_LBRACE] = ACTIONS(589),
    [anon_sym_SEMI] = ACTIONS(589),
    [anon_sym_POUND_BANG] = ACTIONS(589),
    [anon_sym_POUND_] = ACTIONS(589),
    [anon_sym_POUND_LPAREN] = ACTIONS(589),
    [sym_shorthand_function_arg] = ACTIONS(589),
    [anon_sym_CARET] = ACTIONS(591),
    [anon_sym_CARET_COLON] = ACTIONS(589),
    [anon_sym_CARET_DQUOTE] = ACTIONS(589),
    [anon_sym_BQUOTE] = ACTIONS(589),
    [anon_sym_TILDE] = ACTIONS(591),
    [anon_sym_TILDE_AT] = ACTIONS(589),
    [sym_gensym] = ACTIONS(589),
  },
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(593),
    [sym_nil] = ACTIONS(595),
    [sym_true] = ACTIONS(595),
    [sym_false] = ACTIONS(595),
    [sym_number_long] = ACTIONS(595),
    [sym_number_double] = ACTIONS(593),
    [anon_sym_BSLASH] = ACTIONS(593),
    [anon_sym_DQUOTE] = ACTIONS(593),
    [anon_sym_POUND_DQUOTE] = ACTIONS(593),
    [anon_sym_SQUOTE] = ACTIONS(593),
    [anon_sym_LPARENquote] = ACTIONS(593),
    [anon_sym_RPAREN] = ACTIONS(593),
    [anon_sym_COLON] = ACTIONS(595),
    [anon_sym_COLON_COLON] = ACTIONS(593),
    [anon_sym_DASH_GT] = ACTIONS(595),
    [anon_sym_DASH_GT_GT] = ACTIONS(593),
    [anon_sym_as_DASH_GT] = ACTIONS(593),
    [anon_sym_some_DASH_GT] = ACTIONS(595),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(593),
    [anon_sym_cond_DASH_GT] = ACTIONS(595),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(593),
    [sym__symbol_chars] = ACTIONS(595),
    [anon_sym_LPAREN] = ACTIONS(595),
    [anon_sym_LBRACK] = ACTIONS(593),
    [anon_sym_RBRACK] = ACTIONS(593),
    [anon_sym_LBRACE] = ACTIONS(593),
    [anon_sym_RBRACE] = ACTIONS(593),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(593),
    [anon_sym_POUND] = ACTIONS(595),
    [anon_sym_POUND_LBRACE] = ACTIONS(593),
    [anon_sym_SEMI] = ACTIONS(593),
    [anon_sym_POUND_BANG] = ACTIONS(593),
    [anon_sym_POUND_] = ACTIONS(593),
    [anon_sym_POUND_LPAREN] = ACTIONS(593),
    [sym_shorthand_function_arg] = ACTIONS(593),
    [anon_sym_CARET] = ACTIONS(595),
    [anon_sym_CARET_COLON] = ACTIONS(593),
    [anon_sym_CARET_DQUOTE] = ACTIONS(593),
    [anon_sym_BQUOTE] = ACTIONS(593),
    [anon_sym_TILDE] = ACTIONS(595),
    [anon_sym_TILDE_AT] = ACTIONS(593),
    [sym_gensym] = ACTIONS(593),
  },
  [127] = {
    [sym__anything] = STATE(142),
    [sym__literals] = STATE(142),
    [sym__collection_literals] = STATE(142),
    [sym_boolean] = STATE(142),
    [sym_number] = STATE(142),
    [sym__number] = STATE(29),
    [sym_character] = STATE(142),
    [sym__character] = STATE(30),
    [sym_string] = STATE(142),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(142),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(142),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(142),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(142),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(142),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(142),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(142),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(142),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(142),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(142),
    [sym_anonymous_function] = STATE(142),
    [sym_shorthand_function] = STATE(142),
    [sym_defn] = STATE(142),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(142),
    [sym_unquote] = STATE(142),
    [sym_unquote_splice] = STATE(142),
    [aux_sym_program_repeat1] = STATE(142),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(357),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(121),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(597),
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
    [anon_sym_POUND_] = ACTIONS(125),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(361),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_TILDE] = ACTIONS(137),
    [anon_sym_TILDE_AT] = ACTIONS(139),
    [sym_gensym] = ACTIONS(361),
  },
  [128] = {
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(109),
    [anon_sym_POUND] = ACTIONS(111),
  },
  [129] = {
    [anon_sym_DQUOTE] = ACTIONS(113),
    [anon_sym_SLASH] = ACTIONS(599),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(113),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(113),
    [anon_sym_POUND] = ACTIONS(115),
  },
  [130] = {
    [sym_vector] = STATE(133),
    [sym__vector] = STATE(37),
    [sym__single_arity_fn] = STATE(163),
    [sym_params] = STATE(136),
    [anon_sym_LBRACK] = ACTIONS(37),
  },
  [131] = {
    [anon_sym_DQUOTE] = ACTIONS(601),
    [anon_sym_LPAREN] = ACTIONS(601),
    [anon_sym_LBRACK] = ACTIONS(601),
    [anon_sym_LBRACE] = ACTIONS(601),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(601),
    [anon_sym_POUND] = ACTIONS(603),
  },
  [132] = {
    [anon_sym_DQUOTE] = ACTIONS(257),
    [anon_sym_LPAREN] = ACTIONS(257),
    [anon_sym_LBRACK] = ACTIONS(257),
    [anon_sym_LBRACE] = ACTIONS(257),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(257),
    [anon_sym_POUND] = ACTIONS(259),
  },
  [133] = {
    [sym_nil] = ACTIONS(605),
    [sym_true] = ACTIONS(605),
    [sym_false] = ACTIONS(605),
    [sym_number_long] = ACTIONS(605),
    [sym_number_double] = ACTIONS(607),
    [anon_sym_BSLASH] = ACTIONS(607),
    [anon_sym_DQUOTE] = ACTIONS(607),
    [anon_sym_POUND_DQUOTE] = ACTIONS(607),
    [anon_sym_SQUOTE] = ACTIONS(607),
    [anon_sym_LPARENquote] = ACTIONS(607),
    [anon_sym_RPAREN] = ACTIONS(607),
    [anon_sym_COLON] = ACTIONS(605),
    [anon_sym_COLON_COLON] = ACTIONS(607),
    [anon_sym_DASH_GT] = ACTIONS(605),
    [anon_sym_DASH_GT_GT] = ACTIONS(607),
    [anon_sym_as_DASH_GT] = ACTIONS(607),
    [anon_sym_some_DASH_GT] = ACTIONS(605),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(607),
    [anon_sym_cond_DASH_GT] = ACTIONS(605),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(607),
    [sym__symbol_chars] = ACTIONS(605),
    [anon_sym_LPAREN] = ACTIONS(605),
    [anon_sym_LBRACK] = ACTIONS(607),
    [anon_sym_LBRACE] = ACTIONS(607),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(607),
    [anon_sym_POUND] = ACTIONS(605),
    [anon_sym_POUND_LBRACE] = ACTIONS(607),
    [anon_sym_SEMI] = ACTIONS(607),
    [anon_sym_POUND_BANG] = ACTIONS(607),
    [anon_sym_POUND_] = ACTIONS(607),
    [anon_sym_POUND_LPAREN] = ACTIONS(607),
    [sym_shorthand_function_arg] = ACTIONS(607),
    [anon_sym_CARET] = ACTIONS(605),
    [anon_sym_CARET_COLON] = ACTIONS(607),
    [anon_sym_CARET_DQUOTE] = ACTIONS(607),
    [anon_sym_BQUOTE] = ACTIONS(607),
    [anon_sym_TILDE] = ACTIONS(605),
    [anon_sym_TILDE_AT] = ACTIONS(607),
    [sym_gensym] = ACTIONS(607),
  },
  [134] = {
    [anon_sym_RPAREN] = ACTIONS(609),
  },
  [135] = {
    [sym_vector] = STATE(133),
    [sym__vector] = STATE(37),
    [sym__after_the_fn_name] = STATE(165),
    [sym__single_arity_fn] = STATE(165),
    [sym__multi_arity_fn] = STATE(165),
    [sym_params] = STATE(136),
    [aux_sym__multi_arity_fn_repeat1] = STATE(137),
    [anon_sym_LPAREN] = ACTIONS(355),
    [anon_sym_LBRACK] = ACTIONS(37),
  },
  [136] = {
    [sym__anything] = STATE(167),
    [sym__literals] = STATE(167),
    [sym__collection_literals] = STATE(167),
    [sym_boolean] = STATE(167),
    [sym_number] = STATE(167),
    [sym__number] = STATE(29),
    [sym_character] = STATE(167),
    [sym__character] = STATE(30),
    [sym_string] = STATE(167),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(167),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(167),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(167),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(167),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(167),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(167),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(167),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(167),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(167),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(167),
    [sym_anonymous_function] = STATE(167),
    [sym_function_body] = STATE(166),
    [sym_shorthand_function] = STATE(167),
    [sym_defn] = STATE(167),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(167),
    [sym_unquote] = STATE(167),
    [sym_unquote_splice] = STATE(167),
    [aux_sym_program_repeat1] = STATE(167),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(611),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(121),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(613),
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
    [anon_sym_POUND_] = ACTIONS(125),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(615),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_TILDE] = ACTIONS(137),
    [anon_sym_TILDE_AT] = ACTIONS(139),
    [sym_gensym] = ACTIONS(615),
  },
  [137] = {
    [aux_sym__multi_arity_fn_repeat1] = STATE(168),
    [anon_sym_RPAREN] = ACTIONS(617),
    [anon_sym_LPAREN] = ACTIONS(355),
  },
  [138] = {
    [sym_string] = STATE(170),
    [sym__string] = STATE(171),
    [sym_vector] = STATE(133),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(172),
    [sym__hash_map] = STATE(107),
    [sym_namespace_map] = STATE(107),
    [sym__after_the_fn_name] = STATE(173),
    [sym__single_arity_fn] = STATE(173),
    [sym__multi_arity_fn] = STATE(173),
    [sym_params] = STATE(136),
    [sym_docstring] = STATE(174),
    [sym_attr_map] = STATE(175),
    [aux_sym__multi_arity_fn_repeat1] = STATE(137),
    [anon_sym_DQUOTE] = ACTIONS(619),
    [anon_sym_LPAREN] = ACTIONS(355),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(211),
    [anon_sym_POUND] = ACTIONS(213),
  },
  [139] = {
    [sym_symbol] = STATE(131),
    [sym__symbol] = STATE(132),
    [sym_threading_macro] = STATE(132),
    [sym_qualified_symbol] = STATE(132),
    [sym_function_name] = STATE(176),
    [anon_sym_DASH_GT] = ACTIONS(349),
    [anon_sym_DASH_GT_GT] = ACTIONS(351),
    [anon_sym_as_DASH_GT] = ACTIONS(351),
    [anon_sym_some_DASH_GT] = ACTIONS(349),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(351),
    [anon_sym_cond_DASH_GT] = ACTIONS(349),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(351),
    [sym__symbol_chars] = ACTIONS(353),
  },
  [140] = {
    [sym_metadata_shorthand] = STATE(177),
    [aux_sym_metadata_repeat1] = STATE(177),
    [anon_sym_DASH_GT] = ACTIONS(283),
    [anon_sym_DASH_GT_GT] = ACTIONS(285),
    [anon_sym_as_DASH_GT] = ACTIONS(285),
    [anon_sym_some_DASH_GT] = ACTIONS(283),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(285),
    [anon_sym_cond_DASH_GT] = ACTIONS(283),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(285),
    [sym__symbol_chars] = ACTIONS(283),
    [anon_sym_CARET] = ACTIONS(293),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(621),
    [sym_nil] = ACTIONS(623),
    [sym_true] = ACTIONS(623),
    [sym_false] = ACTIONS(623),
    [sym_number_long] = ACTIONS(623),
    [sym_number_double] = ACTIONS(621),
    [anon_sym_BSLASH] = ACTIONS(621),
    [anon_sym_DQUOTE] = ACTIONS(621),
    [anon_sym_POUND_DQUOTE] = ACTIONS(621),
    [anon_sym_SQUOTE] = ACTIONS(621),
    [anon_sym_LPARENquote] = ACTIONS(621),
    [anon_sym_RPAREN] = ACTIONS(621),
    [anon_sym_COLON] = ACTIONS(623),
    [anon_sym_COLON_COLON] = ACTIONS(621),
    [anon_sym_DASH_GT] = ACTIONS(623),
    [anon_sym_DASH_GT_GT] = ACTIONS(621),
    [anon_sym_as_DASH_GT] = ACTIONS(621),
    [anon_sym_some_DASH_GT] = ACTIONS(623),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(621),
    [anon_sym_cond_DASH_GT] = ACTIONS(623),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(621),
    [sym__symbol_chars] = ACTIONS(623),
    [anon_sym_LPAREN] = ACTIONS(623),
    [anon_sym_LBRACK] = ACTIONS(621),
    [anon_sym_RBRACK] = ACTIONS(621),
    [anon_sym_LBRACE] = ACTIONS(621),
    [anon_sym_RBRACE] = ACTIONS(621),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(621),
    [anon_sym_POUND] = ACTIONS(623),
    [anon_sym_POUND_LBRACE] = ACTIONS(621),
    [anon_sym_SEMI] = ACTIONS(621),
    [anon_sym_POUND_BANG] = ACTIONS(621),
    [anon_sym_POUND_] = ACTIONS(621),
    [anon_sym_POUND_LPAREN] = ACTIONS(621),
    [sym_shorthand_function_arg] = ACTIONS(621),
    [anon_sym_CARET] = ACTIONS(623),
    [anon_sym_CARET_COLON] = ACTIONS(621),
    [anon_sym_CARET_DQUOTE] = ACTIONS(621),
    [anon_sym_BQUOTE] = ACTIONS(621),
    [anon_sym_TILDE] = ACTIONS(623),
    [anon_sym_TILDE_AT] = ACTIONS(621),
    [sym_gensym] = ACTIONS(621),
  },
  [142] = {
    [sym__anything] = STATE(142),
    [sym__literals] = STATE(142),
    [sym__collection_literals] = STATE(142),
    [sym_boolean] = STATE(142),
    [sym_number] = STATE(142),
    [sym__number] = STATE(29),
    [sym_character] = STATE(142),
    [sym__character] = STATE(30),
    [sym_string] = STATE(142),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(142),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(142),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(142),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(142),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(142),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(142),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(142),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(142),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(142),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(142),
    [sym_anonymous_function] = STATE(142),
    [sym_shorthand_function] = STATE(142),
    [sym_defn] = STATE(142),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(142),
    [sym_unquote] = STATE(142),
    [sym_unquote_splice] = STATE(142),
    [aux_sym_program_repeat1] = STATE(142),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(625),
    [sym_true] = ACTIONS(456),
    [sym_false] = ACTIONS(456),
    [sym_number_long] = ACTIONS(459),
    [sym_number_double] = ACTIONS(462),
    [anon_sym_BSLASH] = ACTIONS(465),
    [anon_sym_DQUOTE] = ACTIONS(468),
    [anon_sym_POUND_DQUOTE] = ACTIONS(471),
    [anon_sym_SQUOTE] = ACTIONS(628),
    [anon_sym_LPARENquote] = ACTIONS(477),
    [anon_sym_RPAREN] = ACTIONS(451),
    [anon_sym_COLON] = ACTIONS(480),
    [anon_sym_COLON_COLON] = ACTIONS(483),
    [anon_sym_DASH_GT] = ACTIONS(486),
    [anon_sym_DASH_GT_GT] = ACTIONS(489),
    [anon_sym_as_DASH_GT] = ACTIONS(489),
    [anon_sym_some_DASH_GT] = ACTIONS(486),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(489),
    [anon_sym_cond_DASH_GT] = ACTIONS(486),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(489),
    [sym__symbol_chars] = ACTIONS(492),
    [anon_sym_LPAREN] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(498),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(504),
    [anon_sym_POUND] = ACTIONS(507),
    [anon_sym_POUND_LBRACE] = ACTIONS(510),
    [anon_sym_SEMI] = ACTIONS(513),
    [anon_sym_POUND_BANG] = ACTIONS(516),
    [anon_sym_POUND_] = ACTIONS(631),
    [anon_sym_POUND_LPAREN] = ACTIONS(522),
    [sym_shorthand_function_arg] = ACTIONS(634),
    [anon_sym_CARET] = ACTIONS(528),
    [anon_sym_CARET_COLON] = ACTIONS(531),
    [anon_sym_CARET_DQUOTE] = ACTIONS(534),
    [anon_sym_BQUOTE] = ACTIONS(637),
    [anon_sym_TILDE] = ACTIONS(640),
    [anon_sym_TILDE_AT] = ACTIONS(643),
    [sym_gensym] = ACTIONS(634),
  },
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(646),
    [sym_nil] = ACTIONS(648),
    [sym_true] = ACTIONS(648),
    [sym_false] = ACTIONS(648),
    [sym_number_long] = ACTIONS(648),
    [sym_number_double] = ACTIONS(646),
    [anon_sym_BSLASH] = ACTIONS(646),
    [anon_sym_DQUOTE] = ACTIONS(646),
    [anon_sym_POUND_DQUOTE] = ACTIONS(646),
    [anon_sym_SQUOTE] = ACTIONS(646),
    [anon_sym_LPARENquote] = ACTIONS(646),
    [anon_sym_RPAREN] = ACTIONS(646),
    [anon_sym_COLON] = ACTIONS(648),
    [anon_sym_COLON_COLON] = ACTIONS(646),
    [anon_sym_DASH_GT] = ACTIONS(648),
    [anon_sym_DASH_GT_GT] = ACTIONS(646),
    [anon_sym_as_DASH_GT] = ACTIONS(646),
    [anon_sym_some_DASH_GT] = ACTIONS(648),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(646),
    [anon_sym_cond_DASH_GT] = ACTIONS(648),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(646),
    [sym__symbol_chars] = ACTIONS(648),
    [anon_sym_LPAREN] = ACTIONS(648),
    [anon_sym_LBRACK] = ACTIONS(646),
    [anon_sym_RBRACK] = ACTIONS(646),
    [anon_sym_LBRACE] = ACTIONS(646),
    [anon_sym_RBRACE] = ACTIONS(646),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(646),
    [anon_sym_POUND] = ACTIONS(648),
    [anon_sym_POUND_LBRACE] = ACTIONS(646),
    [anon_sym_SEMI] = ACTIONS(646),
    [anon_sym_POUND_BANG] = ACTIONS(646),
    [anon_sym_POUND_] = ACTIONS(646),
    [anon_sym_POUND_LPAREN] = ACTIONS(646),
    [sym_shorthand_function_arg] = ACTIONS(646),
    [anon_sym_CARET] = ACTIONS(648),
    [anon_sym_CARET_COLON] = ACTIONS(646),
    [anon_sym_CARET_DQUOTE] = ACTIONS(646),
    [anon_sym_BQUOTE] = ACTIONS(646),
    [anon_sym_TILDE] = ACTIONS(648),
    [anon_sym_TILDE_AT] = ACTIONS(646),
    [sym_gensym] = ACTIONS(646),
  },
  [144] = {
    [sym__anything] = STATE(144),
    [sym__literals] = STATE(144),
    [sym__collection_literals] = STATE(144),
    [sym_boolean] = STATE(144),
    [sym_number] = STATE(144),
    [sym__number] = STATE(29),
    [sym_character] = STATE(144),
    [sym__character] = STATE(30),
    [sym_string] = STATE(144),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(144),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(144),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(144),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(144),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(144),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(144),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(144),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(144),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(144),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(144),
    [sym_anonymous_function] = STATE(144),
    [sym_shorthand_function] = STATE(144),
    [sym_defn] = STATE(144),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(144),
    [sym_unquote] = STATE(144),
    [sym_unquote_splice] = STATE(144),
    [aux_sym_program_repeat1] = STATE(144),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(650),
    [sym_true] = ACTIONS(456),
    [sym_false] = ACTIONS(456),
    [sym_number_long] = ACTIONS(459),
    [sym_number_double] = ACTIONS(462),
    [anon_sym_BSLASH] = ACTIONS(465),
    [anon_sym_DQUOTE] = ACTIONS(468),
    [anon_sym_POUND_DQUOTE] = ACTIONS(471),
    [anon_sym_SQUOTE] = ACTIONS(653),
    [anon_sym_LPARENquote] = ACTIONS(477),
    [anon_sym_COLON] = ACTIONS(480),
    [anon_sym_COLON_COLON] = ACTIONS(483),
    [anon_sym_DASH_GT] = ACTIONS(486),
    [anon_sym_DASH_GT_GT] = ACTIONS(489),
    [anon_sym_as_DASH_GT] = ACTIONS(489),
    [anon_sym_some_DASH_GT] = ACTIONS(486),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(489),
    [anon_sym_cond_DASH_GT] = ACTIONS(486),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(489),
    [sym__symbol_chars] = ACTIONS(492),
    [anon_sym_LPAREN] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(498),
    [anon_sym_RBRACK] = ACTIONS(451),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(504),
    [anon_sym_POUND] = ACTIONS(507),
    [anon_sym_POUND_LBRACE] = ACTIONS(510),
    [anon_sym_SEMI] = ACTIONS(513),
    [anon_sym_POUND_BANG] = ACTIONS(516),
    [anon_sym_POUND_] = ACTIONS(656),
    [anon_sym_POUND_LPAREN] = ACTIONS(522),
    [sym_shorthand_function_arg] = ACTIONS(659),
    [anon_sym_CARET] = ACTIONS(528),
    [anon_sym_CARET_COLON] = ACTIONS(531),
    [anon_sym_CARET_DQUOTE] = ACTIONS(534),
    [anon_sym_BQUOTE] = ACTIONS(662),
    [anon_sym_TILDE] = ACTIONS(665),
    [anon_sym_TILDE_AT] = ACTIONS(668),
    [sym_gensym] = ACTIONS(659),
  },
  [145] = {
    [sym_nil] = ACTIONS(671),
    [sym_true] = ACTIONS(671),
    [sym_false] = ACTIONS(671),
    [sym_number_long] = ACTIONS(671),
    [sym_number_double] = ACTIONS(673),
    [anon_sym_BSLASH] = ACTIONS(673),
    [anon_sym_DQUOTE] = ACTIONS(673),
    [anon_sym_POUND_DQUOTE] = ACTIONS(673),
    [anon_sym_SQUOTE] = ACTIONS(673),
    [anon_sym_LPARENquote] = ACTIONS(673),
    [anon_sym_COLON] = ACTIONS(671),
    [anon_sym_COLON_COLON] = ACTIONS(673),
    [anon_sym_DASH_GT] = ACTIONS(671),
    [anon_sym_DASH_GT_GT] = ACTIONS(673),
    [anon_sym_as_DASH_GT] = ACTIONS(673),
    [anon_sym_some_DASH_GT] = ACTIONS(671),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(673),
    [anon_sym_cond_DASH_GT] = ACTIONS(671),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(673),
    [sym__symbol_chars] = ACTIONS(671),
    [anon_sym_LPAREN] = ACTIONS(671),
    [anon_sym_LBRACK] = ACTIONS(673),
    [anon_sym_LBRACE] = ACTIONS(673),
    [anon_sym_RBRACE] = ACTIONS(673),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(673),
    [anon_sym_POUND] = ACTIONS(671),
    [anon_sym_POUND_LBRACE] = ACTIONS(673),
    [anon_sym_SEMI] = ACTIONS(673),
    [anon_sym_POUND_BANG] = ACTIONS(673),
    [anon_sym_POUND_] = ACTIONS(673),
    [anon_sym_POUND_LPAREN] = ACTIONS(673),
    [sym_shorthand_function_arg] = ACTIONS(673),
    [anon_sym_CARET] = ACTIONS(671),
    [anon_sym_CARET_COLON] = ACTIONS(673),
    [anon_sym_CARET_DQUOTE] = ACTIONS(673),
    [anon_sym_BQUOTE] = ACTIONS(673),
    [anon_sym_TILDE] = ACTIONS(671),
    [anon_sym_TILDE_AT] = ACTIONS(673),
    [sym_gensym] = ACTIONS(673),
  },
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(675),
    [sym_nil] = ACTIONS(677),
    [sym_true] = ACTIONS(677),
    [sym_false] = ACTIONS(677),
    [sym_number_long] = ACTIONS(677),
    [sym_number_double] = ACTIONS(675),
    [anon_sym_BSLASH] = ACTIONS(675),
    [anon_sym_DQUOTE] = ACTIONS(675),
    [anon_sym_POUND_DQUOTE] = ACTIONS(675),
    [anon_sym_SQUOTE] = ACTIONS(675),
    [anon_sym_LPARENquote] = ACTIONS(675),
    [anon_sym_RPAREN] = ACTIONS(675),
    [anon_sym_COLON] = ACTIONS(677),
    [anon_sym_COLON_COLON] = ACTIONS(675),
    [anon_sym_DASH_GT] = ACTIONS(677),
    [anon_sym_DASH_GT_GT] = ACTIONS(675),
    [anon_sym_as_DASH_GT] = ACTIONS(675),
    [anon_sym_some_DASH_GT] = ACTIONS(677),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(675),
    [anon_sym_cond_DASH_GT] = ACTIONS(677),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(675),
    [sym__symbol_chars] = ACTIONS(677),
    [anon_sym_LPAREN] = ACTIONS(677),
    [anon_sym_LBRACK] = ACTIONS(675),
    [anon_sym_RBRACK] = ACTIONS(675),
    [anon_sym_LBRACE] = ACTIONS(675),
    [anon_sym_RBRACE] = ACTIONS(675),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(675),
    [anon_sym_POUND] = ACTIONS(677),
    [anon_sym_POUND_LBRACE] = ACTIONS(675),
    [anon_sym_SEMI] = ACTIONS(675),
    [anon_sym_POUND_BANG] = ACTIONS(675),
    [anon_sym_POUND_] = ACTIONS(675),
    [anon_sym_POUND_LPAREN] = ACTIONS(675),
    [sym_shorthand_function_arg] = ACTIONS(675),
    [anon_sym_CARET] = ACTIONS(677),
    [anon_sym_CARET_COLON] = ACTIONS(675),
    [anon_sym_CARET_DQUOTE] = ACTIONS(675),
    [anon_sym_BQUOTE] = ACTIONS(675),
    [anon_sym_TILDE] = ACTIONS(677),
    [anon_sym_TILDE_AT] = ACTIONS(675),
    [sym_gensym] = ACTIONS(675),
  },
  [147] = {
    [sym__anything] = STATE(85),
    [sym__literals] = STATE(85),
    [sym__collection_literals] = STATE(85),
    [sym_boolean] = STATE(85),
    [sym_number] = STATE(85),
    [sym__number] = STATE(29),
    [sym_character] = STATE(85),
    [sym__character] = STATE(30),
    [sym_string] = STATE(85),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(85),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(85),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(85),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(85),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(85),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(85),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(85),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym__hash_map_kv_pair] = STATE(147),
    [sym__hash_map_key] = STATE(85),
    [sym_set] = STATE(85),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(85),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(85),
    [sym_anonymous_function] = STATE(85),
    [sym_shorthand_function] = STATE(85),
    [sym_defn] = STATE(85),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(85),
    [sym_unquote] = STATE(85),
    [sym_unquote_splice] = STATE(85),
    [aux_sym__hash_map_repeat1] = STATE(147),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(679),
    [sym_true] = ACTIONS(682),
    [sym_false] = ACTIONS(682),
    [sym_number_long] = ACTIONS(685),
    [sym_number_double] = ACTIONS(688),
    [anon_sym_BSLASH] = ACTIONS(691),
    [anon_sym_DQUOTE] = ACTIONS(694),
    [anon_sym_POUND_DQUOTE] = ACTIONS(697),
    [anon_sym_SQUOTE] = ACTIONS(700),
    [anon_sym_LPARENquote] = ACTIONS(703),
    [anon_sym_COLON] = ACTIONS(706),
    [anon_sym_COLON_COLON] = ACTIONS(709),
    [anon_sym_DASH_GT] = ACTIONS(712),
    [anon_sym_DASH_GT_GT] = ACTIONS(715),
    [anon_sym_as_DASH_GT] = ACTIONS(715),
    [anon_sym_some_DASH_GT] = ACTIONS(712),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(715),
    [anon_sym_cond_DASH_GT] = ACTIONS(712),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(715),
    [sym__symbol_chars] = ACTIONS(718),
    [anon_sym_LPAREN] = ACTIONS(721),
    [anon_sym_LBRACK] = ACTIONS(724),
    [anon_sym_LBRACE] = ACTIONS(727),
    [anon_sym_RBRACE] = ACTIONS(730),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(732),
    [anon_sym_POUND] = ACTIONS(735),
    [anon_sym_POUND_LBRACE] = ACTIONS(738),
    [anon_sym_SEMI] = ACTIONS(741),
    [anon_sym_POUND_BANG] = ACTIONS(744),
    [anon_sym_POUND_] = ACTIONS(747),
    [anon_sym_POUND_LPAREN] = ACTIONS(750),
    [sym_shorthand_function_arg] = ACTIONS(753),
    [anon_sym_CARET] = ACTIONS(756),
    [anon_sym_CARET_COLON] = ACTIONS(759),
    [anon_sym_CARET_DQUOTE] = ACTIONS(762),
    [anon_sym_BQUOTE] = ACTIONS(765),
    [anon_sym_TILDE] = ACTIONS(768),
    [anon_sym_TILDE_AT] = ACTIONS(771),
    [sym_gensym] = ACTIONS(753),
  },
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(774),
    [sym_nil] = ACTIONS(776),
    [sym_true] = ACTIONS(776),
    [sym_false] = ACTIONS(776),
    [sym_number_long] = ACTIONS(776),
    [sym_number_double] = ACTIONS(774),
    [anon_sym_BSLASH] = ACTIONS(774),
    [anon_sym_DQUOTE] = ACTIONS(774),
    [anon_sym_POUND_DQUOTE] = ACTIONS(774),
    [anon_sym_SQUOTE] = ACTIONS(774),
    [anon_sym_LPARENquote] = ACTIONS(774),
    [anon_sym_RPAREN] = ACTIONS(774),
    [anon_sym_COLON] = ACTIONS(776),
    [anon_sym_COLON_COLON] = ACTIONS(774),
    [anon_sym_DASH_GT] = ACTIONS(776),
    [anon_sym_DASH_GT_GT] = ACTIONS(774),
    [anon_sym_as_DASH_GT] = ACTIONS(774),
    [anon_sym_some_DASH_GT] = ACTIONS(776),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(774),
    [anon_sym_cond_DASH_GT] = ACTIONS(776),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(774),
    [sym__symbol_chars] = ACTIONS(776),
    [anon_sym_LPAREN] = ACTIONS(776),
    [anon_sym_LBRACK] = ACTIONS(774),
    [anon_sym_RBRACK] = ACTIONS(774),
    [anon_sym_LBRACE] = ACTIONS(774),
    [anon_sym_RBRACE] = ACTIONS(774),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(774),
    [anon_sym_POUND] = ACTIONS(776),
    [anon_sym_POUND_LBRACE] = ACTIONS(774),
    [anon_sym_SEMI] = ACTIONS(774),
    [anon_sym_POUND_BANG] = ACTIONS(774),
    [anon_sym_POUND_] = ACTIONS(774),
    [anon_sym_POUND_LPAREN] = ACTIONS(774),
    [sym_shorthand_function_arg] = ACTIONS(774),
    [anon_sym_CARET] = ACTIONS(776),
    [anon_sym_CARET_COLON] = ACTIONS(774),
    [anon_sym_CARET_DQUOTE] = ACTIONS(774),
    [anon_sym_BQUOTE] = ACTIONS(774),
    [anon_sym_TILDE] = ACTIONS(776),
    [anon_sym_TILDE_AT] = ACTIONS(774),
    [sym_gensym] = ACTIONS(774),
  },
  [149] = {
    [sym__anything] = STATE(85),
    [sym__literals] = STATE(85),
    [sym__collection_literals] = STATE(85),
    [sym_boolean] = STATE(85),
    [sym_number] = STATE(85),
    [sym__number] = STATE(29),
    [sym_character] = STATE(85),
    [sym__character] = STATE(30),
    [sym_string] = STATE(85),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(85),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(85),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(85),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(85),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(85),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(85),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(85),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym__hash_map_kv_pair] = STATE(179),
    [sym__hash_map_key] = STATE(85),
    [sym_set] = STATE(85),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(85),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(85),
    [sym_anonymous_function] = STATE(85),
    [sym_shorthand_function] = STATE(85),
    [sym_defn] = STATE(85),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(85),
    [sym_unquote] = STATE(85),
    [sym_unquote_splice] = STATE(85),
    [aux_sym__hash_map_repeat1] = STATE(179),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(157),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(159),
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
    [anon_sym_RBRACE] = ACTIONS(778),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(163),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(165),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_TILDE] = ACTIONS(169),
    [anon_sym_TILDE_AT] = ACTIONS(171),
    [sym_gensym] = ACTIONS(165),
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(780),
    [sym_nil] = ACTIONS(782),
    [sym_true] = ACTIONS(782),
    [sym_false] = ACTIONS(782),
    [sym_number_long] = ACTIONS(782),
    [sym_number_double] = ACTIONS(780),
    [anon_sym_BSLASH] = ACTIONS(780),
    [anon_sym_DQUOTE] = ACTIONS(780),
    [anon_sym_POUND_DQUOTE] = ACTIONS(780),
    [anon_sym_SQUOTE] = ACTIONS(780),
    [anon_sym_LPARENquote] = ACTIONS(780),
    [anon_sym_RPAREN] = ACTIONS(780),
    [anon_sym_COLON] = ACTIONS(782),
    [anon_sym_COLON_COLON] = ACTIONS(780),
    [anon_sym_DASH_GT] = ACTIONS(782),
    [anon_sym_DASH_GT_GT] = ACTIONS(780),
    [anon_sym_as_DASH_GT] = ACTIONS(780),
    [anon_sym_some_DASH_GT] = ACTIONS(782),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(780),
    [anon_sym_cond_DASH_GT] = ACTIONS(782),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(780),
    [sym__symbol_chars] = ACTIONS(782),
    [anon_sym_LPAREN] = ACTIONS(782),
    [anon_sym_LBRACK] = ACTIONS(780),
    [anon_sym_RBRACK] = ACTIONS(780),
    [anon_sym_LBRACE] = ACTIONS(780),
    [anon_sym_RBRACE] = ACTIONS(780),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(780),
    [anon_sym_POUND] = ACTIONS(782),
    [anon_sym_POUND_LBRACE] = ACTIONS(780),
    [anon_sym_SEMI] = ACTIONS(780),
    [anon_sym_POUND_BANG] = ACTIONS(780),
    [anon_sym_POUND_] = ACTIONS(780),
    [anon_sym_POUND_LPAREN] = ACTIONS(780),
    [sym_shorthand_function_arg] = ACTIONS(780),
    [anon_sym_CARET] = ACTIONS(782),
    [anon_sym_CARET_COLON] = ACTIONS(780),
    [anon_sym_CARET_DQUOTE] = ACTIONS(780),
    [anon_sym_BQUOTE] = ACTIONS(780),
    [anon_sym_TILDE] = ACTIONS(782),
    [anon_sym_TILDE_AT] = ACTIONS(780),
    [sym_gensym] = ACTIONS(780),
  },
  [151] = {
    [sym__anything] = STATE(151),
    [sym__literals] = STATE(151),
    [sym__collection_literals] = STATE(151),
    [sym_boolean] = STATE(151),
    [sym_number] = STATE(151),
    [sym__number] = STATE(29),
    [sym_character] = STATE(151),
    [sym__character] = STATE(30),
    [sym_string] = STATE(151),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(151),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(151),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(151),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(151),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(151),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(151),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(151),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(151),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(151),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(151),
    [sym_anonymous_function] = STATE(151),
    [sym_shorthand_function] = STATE(151),
    [sym_defn] = STATE(151),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(151),
    [sym_unquote] = STATE(151),
    [sym_unquote_splice] = STATE(151),
    [aux_sym_program_repeat1] = STATE(151),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(784),
    [sym_true] = ACTIONS(456),
    [sym_false] = ACTIONS(456),
    [sym_number_long] = ACTIONS(459),
    [sym_number_double] = ACTIONS(462),
    [anon_sym_BSLASH] = ACTIONS(465),
    [anon_sym_DQUOTE] = ACTIONS(468),
    [anon_sym_POUND_DQUOTE] = ACTIONS(471),
    [anon_sym_SQUOTE] = ACTIONS(787),
    [anon_sym_LPARENquote] = ACTIONS(477),
    [anon_sym_COLON] = ACTIONS(480),
    [anon_sym_COLON_COLON] = ACTIONS(483),
    [anon_sym_DASH_GT] = ACTIONS(486),
    [anon_sym_DASH_GT_GT] = ACTIONS(489),
    [anon_sym_as_DASH_GT] = ACTIONS(489),
    [anon_sym_some_DASH_GT] = ACTIONS(486),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(489),
    [anon_sym_cond_DASH_GT] = ACTIONS(486),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(489),
    [sym__symbol_chars] = ACTIONS(492),
    [anon_sym_LPAREN] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(498),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_RBRACE] = ACTIONS(451),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(504),
    [anon_sym_POUND] = ACTIONS(507),
    [anon_sym_POUND_LBRACE] = ACTIONS(510),
    [anon_sym_SEMI] = ACTIONS(513),
    [anon_sym_POUND_BANG] = ACTIONS(516),
    [anon_sym_POUND_] = ACTIONS(790),
    [anon_sym_POUND_LPAREN] = ACTIONS(522),
    [sym_shorthand_function_arg] = ACTIONS(793),
    [anon_sym_CARET] = ACTIONS(528),
    [anon_sym_CARET_COLON] = ACTIONS(531),
    [anon_sym_CARET_DQUOTE] = ACTIONS(534),
    [anon_sym_BQUOTE] = ACTIONS(796),
    [anon_sym_TILDE] = ACTIONS(799),
    [anon_sym_TILDE_AT] = ACTIONS(802),
    [sym_gensym] = ACTIONS(793),
  },
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(805),
    [sym_nil] = ACTIONS(807),
    [sym_true] = ACTIONS(807),
    [sym_false] = ACTIONS(807),
    [sym_number_long] = ACTIONS(807),
    [sym_number_double] = ACTIONS(805),
    [anon_sym_BSLASH] = ACTIONS(805),
    [anon_sym_DQUOTE] = ACTIONS(805),
    [anon_sym_POUND_DQUOTE] = ACTIONS(805),
    [anon_sym_SQUOTE] = ACTIONS(805),
    [anon_sym_LPARENquote] = ACTIONS(805),
    [anon_sym_RPAREN] = ACTIONS(805),
    [anon_sym_COLON] = ACTIONS(807),
    [anon_sym_COLON_COLON] = ACTIONS(805),
    [anon_sym_DASH_GT] = ACTIONS(807),
    [anon_sym_DASH_GT_GT] = ACTIONS(805),
    [anon_sym_as_DASH_GT] = ACTIONS(805),
    [anon_sym_some_DASH_GT] = ACTIONS(807),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(805),
    [anon_sym_cond_DASH_GT] = ACTIONS(807),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(805),
    [sym__symbol_chars] = ACTIONS(807),
    [anon_sym_LPAREN] = ACTIONS(807),
    [anon_sym_LBRACK] = ACTIONS(805),
    [anon_sym_RBRACK] = ACTIONS(805),
    [anon_sym_LBRACE] = ACTIONS(805),
    [anon_sym_RBRACE] = ACTIONS(805),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(805),
    [anon_sym_POUND] = ACTIONS(807),
    [anon_sym_POUND_LBRACE] = ACTIONS(805),
    [anon_sym_SEMI] = ACTIONS(805),
    [anon_sym_POUND_BANG] = ACTIONS(805),
    [anon_sym_POUND_] = ACTIONS(805),
    [anon_sym_POUND_LPAREN] = ACTIONS(805),
    [sym_shorthand_function_arg] = ACTIONS(805),
    [anon_sym_CARET] = ACTIONS(807),
    [anon_sym_CARET_COLON] = ACTIONS(805),
    [anon_sym_CARET_DQUOTE] = ACTIONS(805),
    [anon_sym_BQUOTE] = ACTIONS(805),
    [anon_sym_TILDE] = ACTIONS(807),
    [anon_sym_TILDE_AT] = ACTIONS(805),
    [sym_gensym] = ACTIONS(805),
  },
  [153] = {
    [anon_sym_DASH_GT] = ACTIONS(375),
    [anon_sym_DASH_GT_GT] = ACTIONS(373),
    [anon_sym_as_DASH_GT] = ACTIONS(373),
    [anon_sym_some_DASH_GT] = ACTIONS(375),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(373),
    [anon_sym_cond_DASH_GT] = ACTIONS(375),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(373),
    [sym__symbol_chars] = ACTIONS(375),
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(373),
    [anon_sym_LBRACE] = ACTIONS(373),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(373),
    [anon_sym_POUND] = ACTIONS(375),
    [anon_sym_POUND_LBRACE] = ACTIONS(373),
  },
  [154] = {
    [sym__anything] = STATE(85),
    [sym__literals] = STATE(85),
    [sym__collection_literals] = STATE(85),
    [sym_boolean] = STATE(85),
    [sym_number] = STATE(85),
    [sym__number] = STATE(29),
    [sym_character] = STATE(85),
    [sym__character] = STATE(30),
    [sym_string] = STATE(85),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(85),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(85),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(85),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(85),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(85),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(85),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(85),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym__hash_map_kv_pair] = STATE(147),
    [sym__hash_map_key] = STATE(85),
    [sym_set] = STATE(85),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(85),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(85),
    [sym_anonymous_function] = STATE(85),
    [sym_shorthand_function] = STATE(85),
    [sym_defn] = STATE(85),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(85),
    [sym_unquote] = STATE(85),
    [sym_unquote_splice] = STATE(85),
    [aux_sym__hash_map_repeat1] = STATE(147),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(157),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(159),
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
    [anon_sym_RBRACE] = ACTIONS(809),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(163),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(165),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_TILDE] = ACTIONS(169),
    [anon_sym_TILDE_AT] = ACTIONS(171),
    [sym_gensym] = ACTIONS(165),
  },
  [155] = {
    [anon_sym_DASH_GT] = ACTIONS(385),
    [anon_sym_DASH_GT_GT] = ACTIONS(383),
    [anon_sym_as_DASH_GT] = ACTIONS(383),
    [anon_sym_some_DASH_GT] = ACTIONS(385),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(383),
    [anon_sym_cond_DASH_GT] = ACTIONS(385),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(383),
    [sym__symbol_chars] = ACTIONS(385),
    [anon_sym_LPAREN] = ACTIONS(383),
    [anon_sym_LBRACK] = ACTIONS(383),
    [anon_sym_LBRACE] = ACTIONS(383),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(383),
    [anon_sym_POUND] = ACTIONS(385),
    [anon_sym_POUND_LBRACE] = ACTIONS(383),
  },
  [156] = {
    [sym__anything] = STATE(85),
    [sym__literals] = STATE(85),
    [sym__collection_literals] = STATE(85),
    [sym_boolean] = STATE(85),
    [sym_number] = STATE(85),
    [sym__number] = STATE(29),
    [sym_character] = STATE(85),
    [sym__character] = STATE(30),
    [sym_string] = STATE(85),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(85),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(85),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(85),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(85),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(85),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(85),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(85),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym__hash_map_kv_pair] = STATE(147),
    [sym__hash_map_key] = STATE(85),
    [sym_set] = STATE(85),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(85),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(85),
    [sym_anonymous_function] = STATE(85),
    [sym_shorthand_function] = STATE(85),
    [sym_defn] = STATE(85),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(85),
    [sym_unquote] = STATE(85),
    [sym_unquote_splice] = STATE(85),
    [aux_sym__hash_map_repeat1] = STATE(147),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(157),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(159),
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
    [anon_sym_RBRACE] = ACTIONS(811),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(163),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(165),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_TILDE] = ACTIONS(169),
    [anon_sym_TILDE_AT] = ACTIONS(171),
    [sym_gensym] = ACTIONS(165),
  },
  [157] = {
    [anon_sym_LBRACE] = ACTIONS(813),
  },
  [158] = {
    [anon_sym_DASH_GT] = ACTIONS(815),
    [anon_sym_DASH_GT_GT] = ACTIONS(817),
    [anon_sym_as_DASH_GT] = ACTIONS(817),
    [anon_sym_some_DASH_GT] = ACTIONS(815),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(817),
    [anon_sym_cond_DASH_GT] = ACTIONS(815),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(817),
    [sym__symbol_chars] = ACTIONS(815),
    [anon_sym_LPAREN] = ACTIONS(817),
    [anon_sym_LBRACK] = ACTIONS(817),
    [anon_sym_LBRACE] = ACTIONS(817),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(817),
    [anon_sym_POUND] = ACTIONS(815),
    [anon_sym_POUND_LBRACE] = ACTIONS(817),
    [anon_sym_CARET] = ACTIONS(815),
    [anon_sym_CARET_COLON] = ACTIONS(817),
    [anon_sym_CARET_DQUOTE] = ACTIONS(817),
  },
  [159] = {
    [sym__hex_char] = ACTIONS(819),
  },
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(821),
    [sym_nil] = ACTIONS(823),
    [sym_true] = ACTIONS(823),
    [sym_false] = ACTIONS(823),
    [sym_number_long] = ACTIONS(823),
    [sym_number_double] = ACTIONS(821),
    [anon_sym_BSLASH] = ACTIONS(821),
    [anon_sym_DQUOTE] = ACTIONS(821),
    [anon_sym_POUND_DQUOTE] = ACTIONS(821),
    [anon_sym_SQUOTE] = ACTIONS(821),
    [anon_sym_LPARENquote] = ACTIONS(821),
    [anon_sym_RPAREN] = ACTIONS(821),
    [anon_sym_COLON] = ACTIONS(823),
    [anon_sym_COLON_COLON] = ACTIONS(821),
    [anon_sym_DASH_GT] = ACTIONS(823),
    [anon_sym_DASH_GT_GT] = ACTIONS(821),
    [anon_sym_as_DASH_GT] = ACTIONS(821),
    [anon_sym_some_DASH_GT] = ACTIONS(823),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(821),
    [anon_sym_cond_DASH_GT] = ACTIONS(823),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(821),
    [sym__symbol_chars] = ACTIONS(823),
    [anon_sym_LPAREN] = ACTIONS(823),
    [anon_sym_LBRACK] = ACTIONS(821),
    [anon_sym_RBRACK] = ACTIONS(821),
    [anon_sym_LBRACE] = ACTIONS(821),
    [anon_sym_RBRACE] = ACTIONS(821),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(821),
    [anon_sym_POUND] = ACTIONS(823),
    [anon_sym_POUND_LBRACE] = ACTIONS(821),
    [anon_sym_SEMI] = ACTIONS(821),
    [anon_sym_POUND_BANG] = ACTIONS(821),
    [anon_sym_POUND_] = ACTIONS(821),
    [anon_sym_POUND_LPAREN] = ACTIONS(821),
    [sym_shorthand_function_arg] = ACTIONS(821),
    [anon_sym_CARET] = ACTIONS(823),
    [anon_sym_CARET_COLON] = ACTIONS(821),
    [anon_sym_CARET_DQUOTE] = ACTIONS(821),
    [anon_sym_BQUOTE] = ACTIONS(821),
    [anon_sym_TILDE] = ACTIONS(823),
    [anon_sym_TILDE_AT] = ACTIONS(821),
    [sym_gensym] = ACTIONS(821),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(825),
    [sym_nil] = ACTIONS(827),
    [sym_true] = ACTIONS(827),
    [sym_false] = ACTIONS(827),
    [sym_number_long] = ACTIONS(827),
    [sym_number_double] = ACTIONS(825),
    [anon_sym_BSLASH] = ACTIONS(825),
    [anon_sym_DQUOTE] = ACTIONS(825),
    [anon_sym_POUND_DQUOTE] = ACTIONS(825),
    [anon_sym_SQUOTE] = ACTIONS(825),
    [anon_sym_LPARENquote] = ACTIONS(825),
    [anon_sym_RPAREN] = ACTIONS(825),
    [anon_sym_COLON] = ACTIONS(827),
    [anon_sym_COLON_COLON] = ACTIONS(825),
    [anon_sym_DASH_GT] = ACTIONS(827),
    [anon_sym_DASH_GT_GT] = ACTIONS(825),
    [anon_sym_as_DASH_GT] = ACTIONS(825),
    [anon_sym_some_DASH_GT] = ACTIONS(827),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(825),
    [anon_sym_cond_DASH_GT] = ACTIONS(827),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(825),
    [sym__symbol_chars] = ACTIONS(827),
    [anon_sym_LPAREN] = ACTIONS(827),
    [anon_sym_LBRACK] = ACTIONS(825),
    [anon_sym_RBRACK] = ACTIONS(825),
    [anon_sym_LBRACE] = ACTIONS(825),
    [anon_sym_RBRACE] = ACTIONS(825),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(825),
    [anon_sym_POUND] = ACTIONS(827),
    [anon_sym_POUND_LBRACE] = ACTIONS(825),
    [anon_sym_SEMI] = ACTIONS(825),
    [anon_sym_POUND_BANG] = ACTIONS(825),
    [anon_sym_POUND_] = ACTIONS(825),
    [anon_sym_POUND_LPAREN] = ACTIONS(825),
    [sym_shorthand_function_arg] = ACTIONS(825),
    [anon_sym_CARET] = ACTIONS(827),
    [anon_sym_CARET_COLON] = ACTIONS(825),
    [anon_sym_CARET_DQUOTE] = ACTIONS(825),
    [anon_sym_BQUOTE] = ACTIONS(825),
    [anon_sym_TILDE] = ACTIONS(827),
    [anon_sym_TILDE_AT] = ACTIONS(825),
    [sym_gensym] = ACTIONS(825),
  },
  [162] = {
    [sym__symbol_chars] = ACTIONS(829),
  },
  [163] = {
    [anon_sym_RPAREN] = ACTIONS(831),
  },
  [164] = {
    [ts_builtin_sym_end] = ACTIONS(833),
    [sym_nil] = ACTIONS(835),
    [sym_true] = ACTIONS(835),
    [sym_false] = ACTIONS(835),
    [sym_number_long] = ACTIONS(835),
    [sym_number_double] = ACTIONS(833),
    [anon_sym_BSLASH] = ACTIONS(833),
    [anon_sym_DQUOTE] = ACTIONS(833),
    [anon_sym_POUND_DQUOTE] = ACTIONS(833),
    [anon_sym_SQUOTE] = ACTIONS(833),
    [anon_sym_LPARENquote] = ACTIONS(833),
    [anon_sym_RPAREN] = ACTIONS(833),
    [anon_sym_COLON] = ACTIONS(835),
    [anon_sym_COLON_COLON] = ACTIONS(833),
    [anon_sym_DASH_GT] = ACTIONS(835),
    [anon_sym_DASH_GT_GT] = ACTIONS(833),
    [anon_sym_as_DASH_GT] = ACTIONS(833),
    [anon_sym_some_DASH_GT] = ACTIONS(835),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(833),
    [anon_sym_cond_DASH_GT] = ACTIONS(835),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(833),
    [sym__symbol_chars] = ACTIONS(835),
    [anon_sym_LPAREN] = ACTIONS(835),
    [anon_sym_LBRACK] = ACTIONS(833),
    [anon_sym_RBRACK] = ACTIONS(833),
    [anon_sym_LBRACE] = ACTIONS(833),
    [anon_sym_RBRACE] = ACTIONS(833),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(833),
    [anon_sym_POUND] = ACTIONS(835),
    [anon_sym_POUND_LBRACE] = ACTIONS(833),
    [anon_sym_SEMI] = ACTIONS(833),
    [anon_sym_POUND_BANG] = ACTIONS(833),
    [anon_sym_POUND_] = ACTIONS(833),
    [anon_sym_POUND_LPAREN] = ACTIONS(833),
    [sym_shorthand_function_arg] = ACTIONS(833),
    [anon_sym_CARET] = ACTIONS(835),
    [anon_sym_CARET_COLON] = ACTIONS(833),
    [anon_sym_CARET_DQUOTE] = ACTIONS(833),
    [anon_sym_BQUOTE] = ACTIONS(833),
    [anon_sym_TILDE] = ACTIONS(835),
    [anon_sym_TILDE_AT] = ACTIONS(833),
    [sym_gensym] = ACTIONS(833),
  },
  [165] = {
    [anon_sym_RPAREN] = ACTIONS(837),
  },
  [166] = {
    [anon_sym_RPAREN] = ACTIONS(839),
  },
  [167] = {
    [sym__anything] = STATE(142),
    [sym__literals] = STATE(142),
    [sym__collection_literals] = STATE(142),
    [sym_boolean] = STATE(142),
    [sym_number] = STATE(142),
    [sym__number] = STATE(29),
    [sym_character] = STATE(142),
    [sym__character] = STATE(30),
    [sym_string] = STATE(142),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(142),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(142),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(142),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(142),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(142),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(142),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(142),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym_set] = STATE(142),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(142),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(142),
    [sym_anonymous_function] = STATE(142),
    [sym_shorthand_function] = STATE(142),
    [sym_defn] = STATE(142),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(142),
    [sym_unquote] = STATE(142),
    [sym_unquote_splice] = STATE(142),
    [aux_sym_program_repeat1] = STATE(142),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(357),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(121),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(841),
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
    [anon_sym_POUND_] = ACTIONS(125),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(361),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_TILDE] = ACTIONS(137),
    [anon_sym_TILDE_AT] = ACTIONS(139),
    [sym_gensym] = ACTIONS(361),
  },
  [168] = {
    [aux_sym__multi_arity_fn_repeat1] = STATE(168),
    [anon_sym_RPAREN] = ACTIONS(843),
    [anon_sym_LPAREN] = ACTIONS(845),
  },
  [169] = {
    [aux_sym__string_repeat1] = STATE(188),
    [anon_sym_DQUOTE] = ACTIONS(848),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(850),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(850),
  },
  [170] = {
    [anon_sym_LPAREN] = ACTIONS(852),
    [anon_sym_LBRACK] = ACTIONS(852),
    [anon_sym_LBRACE] = ACTIONS(852),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(852),
    [anon_sym_POUND] = ACTIONS(854),
  },
  [171] = {
    [anon_sym_LPAREN] = ACTIONS(241),
    [anon_sym_LBRACK] = ACTIONS(241),
    [anon_sym_LBRACE] = ACTIONS(241),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(241),
    [anon_sym_POUND] = ACTIONS(243),
  },
  [172] = {
    [anon_sym_LPAREN] = ACTIONS(856),
    [anon_sym_LBRACK] = ACTIONS(856),
  },
  [173] = {
    [anon_sym_RPAREN] = ACTIONS(858),
  },
  [174] = {
    [sym_vector] = STATE(133),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(172),
    [sym__hash_map] = STATE(107),
    [sym_namespace_map] = STATE(107),
    [sym__after_the_fn_name] = STATE(190),
    [sym__single_arity_fn] = STATE(190),
    [sym__multi_arity_fn] = STATE(190),
    [sym_params] = STATE(136),
    [sym_attr_map] = STATE(191),
    [aux_sym__multi_arity_fn_repeat1] = STATE(137),
    [anon_sym_LPAREN] = ACTIONS(355),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(211),
    [anon_sym_POUND] = ACTIONS(213),
  },
  [175] = {
    [sym_vector] = STATE(133),
    [sym__vector] = STATE(37),
    [sym__after_the_fn_name] = STATE(190),
    [sym__single_arity_fn] = STATE(190),
    [sym__multi_arity_fn] = STATE(190),
    [sym_params] = STATE(136),
    [aux_sym__multi_arity_fn_repeat1] = STATE(137),
    [anon_sym_LPAREN] = ACTIONS(355),
    [anon_sym_LBRACK] = ACTIONS(37),
  },
  [176] = {
    [sym_string] = STATE(170),
    [sym__string] = STATE(171),
    [sym_vector] = STATE(133),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(172),
    [sym__hash_map] = STATE(107),
    [sym_namespace_map] = STATE(107),
    [sym__after_the_fn_name] = STATE(190),
    [sym__single_arity_fn] = STATE(190),
    [sym__multi_arity_fn] = STATE(190),
    [sym_params] = STATE(136),
    [sym_docstring] = STATE(192),
    [sym_attr_map] = STATE(191),
    [aux_sym__multi_arity_fn_repeat1] = STATE(137),
    [anon_sym_DQUOTE] = ACTIONS(619),
    [anon_sym_LPAREN] = ACTIONS(355),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(211),
    [anon_sym_POUND] = ACTIONS(213),
  },
  [177] = {
    [sym_metadata_shorthand] = STATE(177),
    [aux_sym_metadata_repeat1] = STATE(177),
    [anon_sym_DASH_GT] = ACTIONS(548),
    [anon_sym_DASH_GT_GT] = ACTIONS(546),
    [anon_sym_as_DASH_GT] = ACTIONS(546),
    [anon_sym_some_DASH_GT] = ACTIONS(548),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(546),
    [anon_sym_cond_DASH_GT] = ACTIONS(548),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(546),
    [sym__symbol_chars] = ACTIONS(548),
    [anon_sym_CARET] = ACTIONS(550),
    [anon_sym_CARET_COLON] = ACTIONS(553),
    [anon_sym_CARET_DQUOTE] = ACTIONS(556),
  },
  [178] = {
    [ts_builtin_sym_end] = ACTIONS(860),
    [sym_nil] = ACTIONS(862),
    [sym_true] = ACTIONS(862),
    [sym_false] = ACTIONS(862),
    [sym_number_long] = ACTIONS(862),
    [sym_number_double] = ACTIONS(860),
    [anon_sym_BSLASH] = ACTIONS(860),
    [anon_sym_DQUOTE] = ACTIONS(860),
    [anon_sym_POUND_DQUOTE] = ACTIONS(860),
    [anon_sym_SQUOTE] = ACTIONS(860),
    [anon_sym_LPARENquote] = ACTIONS(860),
    [anon_sym_RPAREN] = ACTIONS(860),
    [anon_sym_COLON] = ACTIONS(862),
    [anon_sym_COLON_COLON] = ACTIONS(860),
    [anon_sym_DASH_GT] = ACTIONS(862),
    [anon_sym_DASH_GT_GT] = ACTIONS(860),
    [anon_sym_as_DASH_GT] = ACTIONS(860),
    [anon_sym_some_DASH_GT] = ACTIONS(862),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(860),
    [anon_sym_cond_DASH_GT] = ACTIONS(862),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(860),
    [sym__symbol_chars] = ACTIONS(862),
    [anon_sym_LPAREN] = ACTIONS(862),
    [anon_sym_LBRACK] = ACTIONS(860),
    [anon_sym_RBRACK] = ACTIONS(860),
    [anon_sym_LBRACE] = ACTIONS(860),
    [anon_sym_RBRACE] = ACTIONS(860),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(860),
    [anon_sym_POUND] = ACTIONS(862),
    [anon_sym_POUND_LBRACE] = ACTIONS(860),
    [anon_sym_SEMI] = ACTIONS(860),
    [anon_sym_POUND_BANG] = ACTIONS(860),
    [anon_sym_POUND_] = ACTIONS(860),
    [anon_sym_POUND_LPAREN] = ACTIONS(860),
    [sym_shorthand_function_arg] = ACTIONS(860),
    [anon_sym_CARET] = ACTIONS(862),
    [anon_sym_CARET_COLON] = ACTIONS(860),
    [anon_sym_CARET_DQUOTE] = ACTIONS(860),
    [anon_sym_BQUOTE] = ACTIONS(860),
    [anon_sym_TILDE] = ACTIONS(862),
    [anon_sym_TILDE_AT] = ACTIONS(860),
    [sym_gensym] = ACTIONS(860),
  },
  [179] = {
    [sym__anything] = STATE(85),
    [sym__literals] = STATE(85),
    [sym__collection_literals] = STATE(85),
    [sym_boolean] = STATE(85),
    [sym_number] = STATE(85),
    [sym__number] = STATE(29),
    [sym_character] = STATE(85),
    [sym__character] = STATE(30),
    [sym_string] = STATE(85),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(85),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(85),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(85),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(85),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(85),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(85),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(85),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym__hash_map_kv_pair] = STATE(147),
    [sym__hash_map_key] = STATE(85),
    [sym_set] = STATE(85),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(85),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(85),
    [sym_anonymous_function] = STATE(85),
    [sym_shorthand_function] = STATE(85),
    [sym_defn] = STATE(85),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(85),
    [sym_unquote] = STATE(85),
    [sym_unquote_splice] = STATE(85),
    [aux_sym__hash_map_repeat1] = STATE(147),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(157),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(159),
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
    [anon_sym_RBRACE] = ACTIONS(864),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(163),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(165),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_TILDE] = ACTIONS(169),
    [anon_sym_TILDE_AT] = ACTIONS(171),
    [sym_gensym] = ACTIONS(165),
  },
  [180] = {
    [anon_sym_DASH_GT] = ACTIONS(677),
    [anon_sym_DASH_GT_GT] = ACTIONS(675),
    [anon_sym_as_DASH_GT] = ACTIONS(675),
    [anon_sym_some_DASH_GT] = ACTIONS(677),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(675),
    [anon_sym_cond_DASH_GT] = ACTIONS(677),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(675),
    [sym__symbol_chars] = ACTIONS(677),
    [anon_sym_LPAREN] = ACTIONS(675),
    [anon_sym_LBRACK] = ACTIONS(675),
    [anon_sym_LBRACE] = ACTIONS(675),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(675),
    [anon_sym_POUND] = ACTIONS(677),
    [anon_sym_POUND_LBRACE] = ACTIONS(675),
  },
  [181] = {
    [anon_sym_DASH_GT] = ACTIONS(776),
    [anon_sym_DASH_GT_GT] = ACTIONS(774),
    [anon_sym_as_DASH_GT] = ACTIONS(774),
    [anon_sym_some_DASH_GT] = ACTIONS(776),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(774),
    [anon_sym_cond_DASH_GT] = ACTIONS(776),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(774),
    [sym__symbol_chars] = ACTIONS(776),
    [anon_sym_LPAREN] = ACTIONS(774),
    [anon_sym_LBRACK] = ACTIONS(774),
    [anon_sym_LBRACE] = ACTIONS(774),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(774),
    [anon_sym_POUND] = ACTIONS(776),
    [anon_sym_POUND_LBRACE] = ACTIONS(774),
  },
  [182] = {
    [sym__anything] = STATE(85),
    [sym__literals] = STATE(85),
    [sym__collection_literals] = STATE(85),
    [sym_boolean] = STATE(85),
    [sym_number] = STATE(85),
    [sym__number] = STATE(29),
    [sym_character] = STATE(85),
    [sym__character] = STATE(30),
    [sym_string] = STATE(85),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(85),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(85),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(85),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(85),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(85),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(85),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(85),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym__hash_map_kv_pair] = STATE(195),
    [sym__hash_map_key] = STATE(85),
    [sym_set] = STATE(85),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(85),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(85),
    [sym_anonymous_function] = STATE(85),
    [sym_shorthand_function] = STATE(85),
    [sym_defn] = STATE(85),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(85),
    [sym_unquote] = STATE(85),
    [sym_unquote_splice] = STATE(85),
    [aux_sym__hash_map_repeat1] = STATE(195),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(157),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(159),
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
    [anon_sym_RBRACE] = ACTIONS(866),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(163),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(165),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_TILDE] = ACTIONS(169),
    [anon_sym_TILDE_AT] = ACTIONS(171),
    [sym_gensym] = ACTIONS(165),
  },
  [183] = {
    [sym__hex_char] = ACTIONS(868),
  },
  [184] = {
    [anon_sym_DQUOTE] = ACTIONS(589),
    [anon_sym_LPAREN] = ACTIONS(589),
    [anon_sym_LBRACK] = ACTIONS(589),
    [anon_sym_LBRACE] = ACTIONS(589),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(589),
    [anon_sym_POUND] = ACTIONS(591),
  },
  [185] = {
    [anon_sym_RPAREN] = ACTIONS(870),
    [anon_sym_LPAREN] = ACTIONS(870),
  },
  [186] = {
    [ts_builtin_sym_end] = ACTIONS(872),
    [sym_nil] = ACTIONS(874),
    [sym_true] = ACTIONS(874),
    [sym_false] = ACTIONS(874),
    [sym_number_long] = ACTIONS(874),
    [sym_number_double] = ACTIONS(872),
    [anon_sym_BSLASH] = ACTIONS(872),
    [anon_sym_DQUOTE] = ACTIONS(872),
    [anon_sym_POUND_DQUOTE] = ACTIONS(872),
    [anon_sym_SQUOTE] = ACTIONS(872),
    [anon_sym_LPARENquote] = ACTIONS(872),
    [anon_sym_RPAREN] = ACTIONS(872),
    [anon_sym_COLON] = ACTIONS(874),
    [anon_sym_COLON_COLON] = ACTIONS(872),
    [anon_sym_DASH_GT] = ACTIONS(874),
    [anon_sym_DASH_GT_GT] = ACTIONS(872),
    [anon_sym_as_DASH_GT] = ACTIONS(872),
    [anon_sym_some_DASH_GT] = ACTIONS(874),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(872),
    [anon_sym_cond_DASH_GT] = ACTIONS(874),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(872),
    [sym__symbol_chars] = ACTIONS(874),
    [anon_sym_LPAREN] = ACTIONS(874),
    [anon_sym_LBRACK] = ACTIONS(872),
    [anon_sym_RBRACK] = ACTIONS(872),
    [anon_sym_LBRACE] = ACTIONS(872),
    [anon_sym_RBRACE] = ACTIONS(872),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(872),
    [anon_sym_POUND] = ACTIONS(874),
    [anon_sym_POUND_LBRACE] = ACTIONS(872),
    [anon_sym_SEMI] = ACTIONS(872),
    [anon_sym_POUND_BANG] = ACTIONS(872),
    [anon_sym_POUND_] = ACTIONS(872),
    [anon_sym_POUND_LPAREN] = ACTIONS(872),
    [sym_shorthand_function_arg] = ACTIONS(872),
    [anon_sym_CARET] = ACTIONS(874),
    [anon_sym_CARET_COLON] = ACTIONS(872),
    [anon_sym_CARET_DQUOTE] = ACTIONS(872),
    [anon_sym_BQUOTE] = ACTIONS(872),
    [anon_sym_TILDE] = ACTIONS(874),
    [anon_sym_TILDE_AT] = ACTIONS(872),
    [sym_gensym] = ACTIONS(872),
  },
  [187] = {
    [anon_sym_LPAREN] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(305),
    [anon_sym_LBRACE] = ACTIONS(305),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(305),
    [anon_sym_POUND] = ACTIONS(307),
  },
  [188] = {
    [aux_sym__string_repeat1] = STATE(120),
    [anon_sym_DQUOTE] = ACTIONS(876),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(311),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(311),
  },
  [189] = {
    [ts_builtin_sym_end] = ACTIONS(878),
    [sym_nil] = ACTIONS(880),
    [sym_true] = ACTIONS(880),
    [sym_false] = ACTIONS(880),
    [sym_number_long] = ACTIONS(880),
    [sym_number_double] = ACTIONS(878),
    [anon_sym_BSLASH] = ACTIONS(878),
    [anon_sym_DQUOTE] = ACTIONS(878),
    [anon_sym_POUND_DQUOTE] = ACTIONS(878),
    [anon_sym_SQUOTE] = ACTIONS(878),
    [anon_sym_LPARENquote] = ACTIONS(878),
    [anon_sym_RPAREN] = ACTIONS(878),
    [anon_sym_COLON] = ACTIONS(880),
    [anon_sym_COLON_COLON] = ACTIONS(878),
    [anon_sym_DASH_GT] = ACTIONS(880),
    [anon_sym_DASH_GT_GT] = ACTIONS(878),
    [anon_sym_as_DASH_GT] = ACTIONS(878),
    [anon_sym_some_DASH_GT] = ACTIONS(880),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(878),
    [anon_sym_cond_DASH_GT] = ACTIONS(880),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(878),
    [sym__symbol_chars] = ACTIONS(880),
    [anon_sym_LPAREN] = ACTIONS(880),
    [anon_sym_LBRACK] = ACTIONS(878),
    [anon_sym_RBRACK] = ACTIONS(878),
    [anon_sym_LBRACE] = ACTIONS(878),
    [anon_sym_RBRACE] = ACTIONS(878),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(878),
    [anon_sym_POUND] = ACTIONS(880),
    [anon_sym_POUND_LBRACE] = ACTIONS(878),
    [anon_sym_SEMI] = ACTIONS(878),
    [anon_sym_POUND_BANG] = ACTIONS(878),
    [anon_sym_POUND_] = ACTIONS(878),
    [anon_sym_POUND_LPAREN] = ACTIONS(878),
    [sym_shorthand_function_arg] = ACTIONS(878),
    [anon_sym_CARET] = ACTIONS(880),
    [anon_sym_CARET_COLON] = ACTIONS(878),
    [anon_sym_CARET_DQUOTE] = ACTIONS(878),
    [anon_sym_BQUOTE] = ACTIONS(878),
    [anon_sym_TILDE] = ACTIONS(880),
    [anon_sym_TILDE_AT] = ACTIONS(878),
    [sym_gensym] = ACTIONS(878),
  },
  [190] = {
    [anon_sym_RPAREN] = ACTIONS(882),
  },
  [191] = {
    [sym_vector] = STATE(133),
    [sym__vector] = STATE(37),
    [sym__after_the_fn_name] = STATE(199),
    [sym__single_arity_fn] = STATE(199),
    [sym__multi_arity_fn] = STATE(199),
    [sym_params] = STATE(136),
    [aux_sym__multi_arity_fn_repeat1] = STATE(137),
    [anon_sym_LPAREN] = ACTIONS(355),
    [anon_sym_LBRACK] = ACTIONS(37),
  },
  [192] = {
    [sym_vector] = STATE(133),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(172),
    [sym__hash_map] = STATE(107),
    [sym_namespace_map] = STATE(107),
    [sym__after_the_fn_name] = STATE(199),
    [sym__single_arity_fn] = STATE(199),
    [sym__multi_arity_fn] = STATE(199),
    [sym_params] = STATE(136),
    [sym_attr_map] = STATE(200),
    [aux_sym__multi_arity_fn_repeat1] = STATE(137),
    [anon_sym_LPAREN] = ACTIONS(355),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(211),
    [anon_sym_POUND] = ACTIONS(213),
  },
  [193] = {
    [ts_builtin_sym_end] = ACTIONS(884),
    [sym_nil] = ACTIONS(886),
    [sym_true] = ACTIONS(886),
    [sym_false] = ACTIONS(886),
    [sym_number_long] = ACTIONS(886),
    [sym_number_double] = ACTIONS(884),
    [anon_sym_BSLASH] = ACTIONS(884),
    [anon_sym_DQUOTE] = ACTIONS(884),
    [anon_sym_POUND_DQUOTE] = ACTIONS(884),
    [anon_sym_SQUOTE] = ACTIONS(884),
    [anon_sym_LPARENquote] = ACTIONS(884),
    [anon_sym_RPAREN] = ACTIONS(884),
    [anon_sym_COLON] = ACTIONS(886),
    [anon_sym_COLON_COLON] = ACTIONS(884),
    [anon_sym_DASH_GT] = ACTIONS(886),
    [anon_sym_DASH_GT_GT] = ACTIONS(884),
    [anon_sym_as_DASH_GT] = ACTIONS(884),
    [anon_sym_some_DASH_GT] = ACTIONS(886),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(884),
    [anon_sym_cond_DASH_GT] = ACTIONS(886),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(884),
    [sym__symbol_chars] = ACTIONS(886),
    [anon_sym_LPAREN] = ACTIONS(886),
    [anon_sym_LBRACK] = ACTIONS(884),
    [anon_sym_RBRACK] = ACTIONS(884),
    [anon_sym_LBRACE] = ACTIONS(884),
    [anon_sym_RBRACE] = ACTIONS(884),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(884),
    [anon_sym_POUND] = ACTIONS(886),
    [anon_sym_POUND_LBRACE] = ACTIONS(884),
    [anon_sym_SEMI] = ACTIONS(884),
    [anon_sym_POUND_BANG] = ACTIONS(884),
    [anon_sym_POUND_] = ACTIONS(884),
    [anon_sym_POUND_LPAREN] = ACTIONS(884),
    [sym_shorthand_function_arg] = ACTIONS(884),
    [anon_sym_CARET] = ACTIONS(886),
    [anon_sym_CARET_COLON] = ACTIONS(884),
    [anon_sym_CARET_DQUOTE] = ACTIONS(884),
    [anon_sym_BQUOTE] = ACTIONS(884),
    [anon_sym_TILDE] = ACTIONS(886),
    [anon_sym_TILDE_AT] = ACTIONS(884),
    [sym_gensym] = ACTIONS(884),
  },
  [194] = {
    [anon_sym_DASH_GT] = ACTIONS(862),
    [anon_sym_DASH_GT_GT] = ACTIONS(860),
    [anon_sym_as_DASH_GT] = ACTIONS(860),
    [anon_sym_some_DASH_GT] = ACTIONS(862),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(860),
    [anon_sym_cond_DASH_GT] = ACTIONS(862),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(860),
    [sym__symbol_chars] = ACTIONS(862),
    [anon_sym_LPAREN] = ACTIONS(860),
    [anon_sym_LBRACK] = ACTIONS(860),
    [anon_sym_LBRACE] = ACTIONS(860),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(860),
    [anon_sym_POUND] = ACTIONS(862),
    [anon_sym_POUND_LBRACE] = ACTIONS(860),
  },
  [195] = {
    [sym__anything] = STATE(85),
    [sym__literals] = STATE(85),
    [sym__collection_literals] = STATE(85),
    [sym_boolean] = STATE(85),
    [sym_number] = STATE(85),
    [sym__number] = STATE(29),
    [sym_character] = STATE(85),
    [sym__character] = STATE(30),
    [sym_string] = STATE(85),
    [sym__string] = STATE(31),
    [sym_regex] = STATE(85),
    [sym__regex] = STATE(32),
    [sym_quote] = STATE(85),
    [sym__quote] = STATE(33),
    [sym_keyword] = STATE(85),
    [sym__keyword] = STATE(34),
    [sym__unqualified_keyword] = STATE(34),
    [sym_qualified_keyword] = STATE(34),
    [sym_symbol] = STATE(85),
    [sym__symbol] = STATE(35),
    [sym_threading_macro] = STATE(35),
    [sym_qualified_symbol] = STATE(35),
    [sym_list] = STATE(85),
    [sym__list] = STATE(36),
    [sym_vector] = STATE(85),
    [sym__vector] = STATE(37),
    [sym_hash_map] = STATE(85),
    [sym__hash_map] = STATE(38),
    [sym_namespace_map] = STATE(38),
    [sym__hash_map_kv_pair] = STATE(147),
    [sym__hash_map_key] = STATE(85),
    [sym_set] = STATE(85),
    [sym__set] = STATE(39),
    [sym_comment] = STATE(85),
    [sym_semicolon] = STATE(40),
    [sym_shebang_line] = STATE(40),
    [sym_ignore_form] = STATE(40),
    [sym_comment_macro] = STATE(40),
    [sym__functions] = STATE(85),
    [sym_anonymous_function] = STATE(85),
    [sym_shorthand_function] = STATE(85),
    [sym_defn] = STATE(85),
    [sym_metadata] = STATE(41),
    [sym__metadata_map] = STATE(42),
    [sym_metadata_shorthand] = STATE(44),
    [sym_syntax_quote] = STATE(85),
    [sym_unquote] = STATE(85),
    [sym_unquote_splice] = STATE(85),
    [aux_sym__hash_map_repeat1] = STATE(147),
    [aux_sym_metadata_repeat1] = STATE(44),
    [sym_nil] = ACTIONS(157),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(159),
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
    [anon_sym_RBRACE] = ACTIONS(888),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(49),
    [anon_sym_POUND_] = ACTIONS(163),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [sym_shorthand_function_arg] = ACTIONS(165),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_CARET_COLON] = ACTIONS(59),
    [anon_sym_CARET_DQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_TILDE] = ACTIONS(169),
    [anon_sym_TILDE_AT] = ACTIONS(171),
    [sym_gensym] = ACTIONS(165),
  },
  [196] = {
    [ts_builtin_sym_end] = ACTIONS(890),
    [sym_nil] = ACTIONS(892),
    [sym_true] = ACTIONS(892),
    [sym_false] = ACTIONS(892),
    [sym_number_long] = ACTIONS(892),
    [sym_number_double] = ACTIONS(890),
    [anon_sym_BSLASH] = ACTIONS(890),
    [anon_sym_DQUOTE] = ACTIONS(890),
    [anon_sym_POUND_DQUOTE] = ACTIONS(890),
    [anon_sym_SQUOTE] = ACTIONS(890),
    [anon_sym_LPARENquote] = ACTIONS(890),
    [anon_sym_RPAREN] = ACTIONS(890),
    [anon_sym_COLON] = ACTIONS(892),
    [anon_sym_COLON_COLON] = ACTIONS(890),
    [anon_sym_DASH_GT] = ACTIONS(892),
    [anon_sym_DASH_GT_GT] = ACTIONS(890),
    [anon_sym_as_DASH_GT] = ACTIONS(890),
    [anon_sym_some_DASH_GT] = ACTIONS(892),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(890),
    [anon_sym_cond_DASH_GT] = ACTIONS(892),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(890),
    [sym__symbol_chars] = ACTIONS(892),
    [anon_sym_LPAREN] = ACTIONS(892),
    [anon_sym_LBRACK] = ACTIONS(890),
    [anon_sym_RBRACK] = ACTIONS(890),
    [anon_sym_LBRACE] = ACTIONS(890),
    [anon_sym_RBRACE] = ACTIONS(890),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(890),
    [anon_sym_POUND] = ACTIONS(892),
    [anon_sym_POUND_LBRACE] = ACTIONS(890),
    [anon_sym_SEMI] = ACTIONS(890),
    [anon_sym_POUND_BANG] = ACTIONS(890),
    [anon_sym_POUND_] = ACTIONS(890),
    [anon_sym_POUND_LPAREN] = ACTIONS(890),
    [sym_shorthand_function_arg] = ACTIONS(890),
    [anon_sym_CARET] = ACTIONS(892),
    [anon_sym_CARET_COLON] = ACTIONS(890),
    [anon_sym_CARET_DQUOTE] = ACTIONS(890),
    [anon_sym_BQUOTE] = ACTIONS(890),
    [anon_sym_TILDE] = ACTIONS(892),
    [anon_sym_TILDE_AT] = ACTIONS(890),
    [sym_gensym] = ACTIONS(890),
  },
  [197] = {
    [anon_sym_LPAREN] = ACTIONS(565),
    [anon_sym_LBRACK] = ACTIONS(565),
    [anon_sym_LBRACE] = ACTIONS(565),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(565),
    [anon_sym_POUND] = ACTIONS(567),
  },
  [198] = {
    [ts_builtin_sym_end] = ACTIONS(894),
    [sym_nil] = ACTIONS(896),
    [sym_true] = ACTIONS(896),
    [sym_false] = ACTIONS(896),
    [sym_number_long] = ACTIONS(896),
    [sym_number_double] = ACTIONS(894),
    [anon_sym_BSLASH] = ACTIONS(894),
    [anon_sym_DQUOTE] = ACTIONS(894),
    [anon_sym_POUND_DQUOTE] = ACTIONS(894),
    [anon_sym_SQUOTE] = ACTIONS(894),
    [anon_sym_LPARENquote] = ACTIONS(894),
    [anon_sym_RPAREN] = ACTIONS(894),
    [anon_sym_COLON] = ACTIONS(896),
    [anon_sym_COLON_COLON] = ACTIONS(894),
    [anon_sym_DASH_GT] = ACTIONS(896),
    [anon_sym_DASH_GT_GT] = ACTIONS(894),
    [anon_sym_as_DASH_GT] = ACTIONS(894),
    [anon_sym_some_DASH_GT] = ACTIONS(896),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(894),
    [anon_sym_cond_DASH_GT] = ACTIONS(896),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(894),
    [sym__symbol_chars] = ACTIONS(896),
    [anon_sym_LPAREN] = ACTIONS(896),
    [anon_sym_LBRACK] = ACTIONS(894),
    [anon_sym_RBRACK] = ACTIONS(894),
    [anon_sym_LBRACE] = ACTIONS(894),
    [anon_sym_RBRACE] = ACTIONS(894),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(894),
    [anon_sym_POUND] = ACTIONS(896),
    [anon_sym_POUND_LBRACE] = ACTIONS(894),
    [anon_sym_SEMI] = ACTIONS(894),
    [anon_sym_POUND_BANG] = ACTIONS(894),
    [anon_sym_POUND_] = ACTIONS(894),
    [anon_sym_POUND_LPAREN] = ACTIONS(894),
    [sym_shorthand_function_arg] = ACTIONS(894),
    [anon_sym_CARET] = ACTIONS(896),
    [anon_sym_CARET_COLON] = ACTIONS(894),
    [anon_sym_CARET_DQUOTE] = ACTIONS(894),
    [anon_sym_BQUOTE] = ACTIONS(894),
    [anon_sym_TILDE] = ACTIONS(896),
    [anon_sym_TILDE_AT] = ACTIONS(894),
    [sym_gensym] = ACTIONS(894),
  },
  [199] = {
    [anon_sym_RPAREN] = ACTIONS(898),
  },
  [200] = {
    [sym_vector] = STATE(133),
    [sym__vector] = STATE(37),
    [sym__after_the_fn_name] = STATE(203),
    [sym__single_arity_fn] = STATE(203),
    [sym__multi_arity_fn] = STATE(203),
    [sym_params] = STATE(136),
    [aux_sym__multi_arity_fn_repeat1] = STATE(137),
    [anon_sym_LPAREN] = ACTIONS(355),
    [anon_sym_LBRACK] = ACTIONS(37),
  },
  [201] = {
    [anon_sym_DASH_GT] = ACTIONS(886),
    [anon_sym_DASH_GT_GT] = ACTIONS(884),
    [anon_sym_as_DASH_GT] = ACTIONS(884),
    [anon_sym_some_DASH_GT] = ACTIONS(886),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(884),
    [anon_sym_cond_DASH_GT] = ACTIONS(886),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(884),
    [sym__symbol_chars] = ACTIONS(886),
    [anon_sym_LPAREN] = ACTIONS(884),
    [anon_sym_LBRACK] = ACTIONS(884),
    [anon_sym_LBRACE] = ACTIONS(884),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(884),
    [anon_sym_POUND] = ACTIONS(886),
    [anon_sym_POUND_LBRACE] = ACTIONS(884),
  },
  [202] = {
    [ts_builtin_sym_end] = ACTIONS(900),
    [sym_nil] = ACTIONS(902),
    [sym_true] = ACTIONS(902),
    [sym_false] = ACTIONS(902),
    [sym_number_long] = ACTIONS(902),
    [sym_number_double] = ACTIONS(900),
    [anon_sym_BSLASH] = ACTIONS(900),
    [anon_sym_DQUOTE] = ACTIONS(900),
    [anon_sym_POUND_DQUOTE] = ACTIONS(900),
    [anon_sym_SQUOTE] = ACTIONS(900),
    [anon_sym_LPARENquote] = ACTIONS(900),
    [anon_sym_RPAREN] = ACTIONS(900),
    [anon_sym_COLON] = ACTIONS(902),
    [anon_sym_COLON_COLON] = ACTIONS(900),
    [anon_sym_DASH_GT] = ACTIONS(902),
    [anon_sym_DASH_GT_GT] = ACTIONS(900),
    [anon_sym_as_DASH_GT] = ACTIONS(900),
    [anon_sym_some_DASH_GT] = ACTIONS(902),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(900),
    [anon_sym_cond_DASH_GT] = ACTIONS(902),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(900),
    [sym__symbol_chars] = ACTIONS(902),
    [anon_sym_LPAREN] = ACTIONS(902),
    [anon_sym_LBRACK] = ACTIONS(900),
    [anon_sym_RBRACK] = ACTIONS(900),
    [anon_sym_LBRACE] = ACTIONS(900),
    [anon_sym_RBRACE] = ACTIONS(900),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(900),
    [anon_sym_POUND] = ACTIONS(902),
    [anon_sym_POUND_LBRACE] = ACTIONS(900),
    [anon_sym_SEMI] = ACTIONS(900),
    [anon_sym_POUND_BANG] = ACTIONS(900),
    [anon_sym_POUND_] = ACTIONS(900),
    [anon_sym_POUND_LPAREN] = ACTIONS(900),
    [sym_shorthand_function_arg] = ACTIONS(900),
    [anon_sym_CARET] = ACTIONS(902),
    [anon_sym_CARET_COLON] = ACTIONS(900),
    [anon_sym_CARET_DQUOTE] = ACTIONS(900),
    [anon_sym_BQUOTE] = ACTIONS(900),
    [anon_sym_TILDE] = ACTIONS(902),
    [anon_sym_TILDE_AT] = ACTIONS(900),
    [sym_gensym] = ACTIONS(900),
  },
  [203] = {
    [anon_sym_RPAREN] = ACTIONS(904),
  },
  [204] = {
    [ts_builtin_sym_end] = ACTIONS(906),
    [sym_nil] = ACTIONS(908),
    [sym_true] = ACTIONS(908),
    [sym_false] = ACTIONS(908),
    [sym_number_long] = ACTIONS(908),
    [sym_number_double] = ACTIONS(906),
    [anon_sym_BSLASH] = ACTIONS(906),
    [anon_sym_DQUOTE] = ACTIONS(906),
    [anon_sym_POUND_DQUOTE] = ACTIONS(906),
    [anon_sym_SQUOTE] = ACTIONS(906),
    [anon_sym_LPARENquote] = ACTIONS(906),
    [anon_sym_RPAREN] = ACTIONS(906),
    [anon_sym_COLON] = ACTIONS(908),
    [anon_sym_COLON_COLON] = ACTIONS(906),
    [anon_sym_DASH_GT] = ACTIONS(908),
    [anon_sym_DASH_GT_GT] = ACTIONS(906),
    [anon_sym_as_DASH_GT] = ACTIONS(906),
    [anon_sym_some_DASH_GT] = ACTIONS(908),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(906),
    [anon_sym_cond_DASH_GT] = ACTIONS(908),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(906),
    [sym__symbol_chars] = ACTIONS(908),
    [anon_sym_LPAREN] = ACTIONS(908),
    [anon_sym_LBRACK] = ACTIONS(906),
    [anon_sym_RBRACK] = ACTIONS(906),
    [anon_sym_LBRACE] = ACTIONS(906),
    [anon_sym_RBRACE] = ACTIONS(906),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(906),
    [anon_sym_POUND] = ACTIONS(908),
    [anon_sym_POUND_LBRACE] = ACTIONS(906),
    [anon_sym_SEMI] = ACTIONS(906),
    [anon_sym_POUND_BANG] = ACTIONS(906),
    [anon_sym_POUND_] = ACTIONS(906),
    [anon_sym_POUND_LPAREN] = ACTIONS(906),
    [sym_shorthand_function_arg] = ACTIONS(906),
    [anon_sym_CARET] = ACTIONS(908),
    [anon_sym_CARET_COLON] = ACTIONS(906),
    [anon_sym_CARET_DQUOTE] = ACTIONS(906),
    [anon_sym_BQUOTE] = ACTIONS(906),
    [anon_sym_TILDE] = ACTIONS(908),
    [anon_sym_TILDE_AT] = ACTIONS(906),
    [sym_gensym] = ACTIONS(906),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(43),
  [9] = {.count = 1, .reusable = false}, SHIFT(2),
  [11] = {.count = 1, .reusable = false}, SHIFT(29),
  [13] = {.count = 1, .reusable = true}, SHIFT(29),
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
  [55] = {.count = 1, .reusable = true}, SHIFT(43),
  [57] = {.count = 1, .reusable = false}, SHIFT(22),
  [59] = {.count = 1, .reusable = true}, SHIFT(23),
  [61] = {.count = 1, .reusable = true}, SHIFT(24),
  [63] = {.count = 1, .reusable = true}, SHIFT(25),
  [65] = {.count = 1, .reusable = false}, SHIFT(26),
  [67] = {.count = 1, .reusable = true}, SHIFT(27),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [71] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 1),
  [73] = {.count = 1, .reusable = false}, SHIFT(45),
  [75] = {.count = 1, .reusable = false}, SHIFT(46),
  [77] = {.count = 1, .reusable = false}, SHIFT(47),
  [79] = {.count = 1, .reusable = false}, SHIFT(48),
  [81] = {.count = 1, .reusable = false}, SHIFT(49),
  [83] = {.count = 1, .reusable = false}, SHIFT(50),
  [85] = {.count = 1, .reusable = false}, SHIFT(51),
  [87] = {.count = 1, .reusable = false}, SHIFT(52),
  [89] = {.count = 1, .reusable = true}, SHIFT(52),
  [91] = {.count = 1, .reusable = false}, SHIFT(58),
  [93] = {.count = 1, .reusable = true}, SHIFT(53),
  [95] = {.count = 1, .reusable = true}, SHIFT(54),
  [97] = {.count = 1, .reusable = true}, SHIFT(58),
  [99] = {.count = 1, .reusable = true}, SHIFT(55),
  [101] = {.count = 1, .reusable = false}, SHIFT(56),
  [103] = {.count = 1, .reusable = true}, SHIFT(57),
  [105] = {.count = 1, .reusable = true}, SHIFT(59),
  [107] = {.count = 1, .reusable = true}, SHIFT(60),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_threading_macro, 1),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym_threading_macro, 1),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym__symbol, 1),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym__symbol, 1),
  [117] = {.count = 1, .reusable = true}, SHIFT(61),
  [119] = {.count = 1, .reusable = false}, SHIFT(71),
  [121] = {.count = 1, .reusable = true}, SHIFT(62),
  [123] = {.count = 1, .reusable = true}, SHIFT(63),
  [125] = {.count = 1, .reusable = true}, SHIFT(64),
  [127] = {.count = 1, .reusable = false}, SHIFT(65),
  [129] = {.count = 1, .reusable = false}, SHIFT(66),
  [131] = {.count = 1, .reusable = true}, SHIFT(71),
  [133] = {.count = 1, .reusable = false}, SHIFT(67),
  [135] = {.count = 1, .reusable = true}, SHIFT(68),
  [137] = {.count = 1, .reusable = false}, SHIFT(69),
  [139] = {.count = 1, .reusable = true}, SHIFT(70),
  [141] = {.count = 1, .reusable = false}, SHIFT(78),
  [143] = {.count = 1, .reusable = true}, SHIFT(72),
  [145] = {.count = 1, .reusable = true}, SHIFT(73),
  [147] = {.count = 1, .reusable = true}, SHIFT(74),
  [149] = {.count = 1, .reusable = true}, SHIFT(78),
  [151] = {.count = 1, .reusable = true}, SHIFT(75),
  [153] = {.count = 1, .reusable = false}, SHIFT(76),
  [155] = {.count = 1, .reusable = true}, SHIFT(77),
  [157] = {.count = 1, .reusable = false}, SHIFT(85),
  [159] = {.count = 1, .reusable = true}, SHIFT(79),
  [161] = {.count = 1, .reusable = true}, SHIFT(80),
  [163] = {.count = 1, .reusable = true}, SHIFT(81),
  [165] = {.count = 1, .reusable = true}, SHIFT(85),
  [167] = {.count = 1, .reusable = true}, SHIFT(82),
  [169] = {.count = 1, .reusable = false}, SHIFT(83),
  [171] = {.count = 1, .reusable = true}, SHIFT(84),
  [173] = {.count = 1, .reusable = true}, SHIFT(87),
  [175] = {.count = 1, .reusable = true}, SHIFT(89),
  [177] = {.count = 1, .reusable = false}, SHIFT(96),
  [179] = {.count = 1, .reusable = true}, SHIFT(90),
  [181] = {.count = 1, .reusable = true}, SHIFT(91),
  [183] = {.count = 1, .reusable = true}, SHIFT(92),
  [185] = {.count = 1, .reusable = true}, SHIFT(96),
  [187] = {.count = 1, .reusable = true}, SHIFT(93),
  [189] = {.count = 1, .reusable = false}, SHIFT(94),
  [191] = {.count = 1, .reusable = true}, SHIFT(95),
  [193] = {.count = 1, .reusable = false}, SHIFT(97),
  [195] = {.count = 1, .reusable = false}, SHIFT(98),
  [197] = {.count = 1, .reusable = false}, SHIFT(99),
  [199] = {.count = 1, .reusable = true}, SHIFT(99),
  [201] = {.count = 1, .reusable = false}, SHIFT(101),
  [203] = {.count = 1, .reusable = true}, SHIFT(100),
  [205] = {.count = 1, .reusable = true}, SHIFT(101),
  [207] = {.count = 1, .reusable = true}, SHIFT(102),
  [209] = {.count = 1, .reusable = true}, SHIFT(103),
  [211] = {.count = 1, .reusable = true}, SHIFT(104),
  [213] = {.count = 1, .reusable = false}, SHIFT(105),
  [215] = {.count = 1, .reusable = false}, SHIFT(102),
  [217] = {.count = 1, .reusable = false}, SHIFT(108),
  [219] = {.count = 1, .reusable = false}, SHIFT(109),
  [221] = {.count = 1, .reusable = true}, SHIFT(109),
  [223] = {.count = 1, .reusable = false}, SHIFT(110),
  [225] = {.count = 1, .reusable = true}, SHIFT(110),
  [227] = {.count = 1, .reusable = false}, SHIFT(111),
  [229] = {.count = 1, .reusable = true}, SHIFT(111),
  [231] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_number, 1),
  [235] = {.count = 1, .reusable = false}, REDUCE(sym_number, 1),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_character, 1),
  [239] = {.count = 1, .reusable = false}, REDUCE(sym_character, 1),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [243] = {.count = 1, .reusable = false}, REDUCE(sym_string, 1),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_regex, 1),
  [247] = {.count = 1, .reusable = false}, REDUCE(sym_regex, 1),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_quote, 1),
  [251] = {.count = 1, .reusable = false}, REDUCE(sym_quote, 1),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_keyword, 1),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym_keyword, 1),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_symbol, 1),
  [259] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 1),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_list, 1),
  [263] = {.count = 1, .reusable = false}, REDUCE(sym_list, 1),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_vector, 1),
  [267] = {.count = 1, .reusable = false}, REDUCE(sym_vector, 1),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map, 1),
  [271] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map, 1),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_set, 1),
  [275] = {.count = 1, .reusable = false}, REDUCE(sym_set, 1),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [279] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 1),
  [281] = {.count = 1, .reusable = true}, SHIFT(112),
  [283] = {.count = 1, .reusable = false}, REDUCE(sym_metadata, 1),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_metadata, 1),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [289] = {.count = 1, .reusable = false}, SHIFT(114),
  [291] = {.count = 1, .reusable = true}, SHIFT(114),
  [293] = {.count = 1, .reusable = false}, SHIFT(115),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym__character, 2),
  [297] = {.count = 1, .reusable = false}, REDUCE(sym__character, 2),
  [299] = {.count = 1, .reusable = true}, SHIFT(117),
  [301] = {.count = 1, .reusable = true}, SHIFT(118),
  [303] = {.count = 1, .reusable = false}, SHIFT(118),
  [305] = {.count = 1, .reusable = true}, REDUCE(sym__string, 2),
  [307] = {.count = 1, .reusable = false}, REDUCE(sym__string, 2),
  [309] = {.count = 1, .reusable = false}, SHIFT(119),
  [311] = {.count = 1, .reusable = false}, SHIFT(120),
  [313] = {.count = 1, .reusable = true}, REDUCE(sym__regex, 2),
  [315] = {.count = 1, .reusable = false}, REDUCE(sym__regex, 2),
  [317] = {.count = 1, .reusable = false}, SHIFT(121),
  [319] = {.count = 1, .reusable = false}, SHIFT(122),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym__quote, 2),
  [323] = {.count = 1, .reusable = false}, REDUCE(sym__quote, 2),
  [325] = {.count = 1, .reusable = true}, SHIFT(123),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym__unqualified_keyword, 2),
  [329] = {.count = 1, .reusable = false}, REDUCE(sym__unqualified_keyword, 2),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_keyword, 2),
  [333] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_keyword, 2),
  [335] = {.count = 1, .reusable = true}, SHIFT(124),
  [337] = {.count = 1, .reusable = true}, SHIFT(125),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym__list, 2),
  [341] = {.count = 1, .reusable = false}, REDUCE(sym__list, 2),
  [343] = {.count = 1, .reusable = false}, SHIFT(127),
  [345] = {.count = 1, .reusable = true}, SHIFT(126),
  [347] = {.count = 1, .reusable = true}, SHIFT(127),
  [349] = {.count = 1, .reusable = false}, SHIFT(128),
  [351] = {.count = 1, .reusable = true}, SHIFT(128),
  [353] = {.count = 1, .reusable = false}, SHIFT(129),
  [355] = {.count = 1, .reusable = true}, SHIFT(130),
  [357] = {.count = 1, .reusable = false}, SHIFT(142),
  [359] = {.count = 1, .reusable = true}, SHIFT(141),
  [361] = {.count = 1, .reusable = true}, SHIFT(142),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym__vector, 2),
  [365] = {.count = 1, .reusable = false}, REDUCE(sym__vector, 2),
  [367] = {.count = 1, .reusable = false}, SHIFT(144),
  [369] = {.count = 1, .reusable = true}, SHIFT(143),
  [371] = {.count = 1, .reusable = true}, SHIFT(144),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym__hash_map, 2),
  [375] = {.count = 1, .reusable = false}, REDUCE(sym__hash_map, 2),
  [377] = {.count = 1, .reusable = false}, SHIFT(145),
  [379] = {.count = 1, .reusable = true}, SHIFT(145),
  [381] = {.count = 1, .reusable = true}, SHIFT(146),
  [383] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 2),
  [385] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 2),
  [387] = {.count = 1, .reusable = true}, SHIFT(148),
  [389] = {.count = 1, .reusable = true}, SHIFT(149),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym__set, 2),
  [393] = {.count = 1, .reusable = false}, REDUCE(sym__set, 2),
  [395] = {.count = 1, .reusable = false}, SHIFT(151),
  [397] = {.count = 1, .reusable = true}, SHIFT(150),
  [399] = {.count = 1, .reusable = true}, SHIFT(151),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym_semicolon, 2),
  [403] = {.count = 1, .reusable = false}, REDUCE(sym_semicolon, 2),
  [405] = {.count = 1, .reusable = true}, REDUCE(sym_shebang_line, 2),
  [407] = {.count = 1, .reusable = false}, REDUCE(sym_shebang_line, 2),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym_ignore_form, 2),
  [411] = {.count = 1, .reusable = false}, REDUCE(sym_ignore_form, 2),
  [413] = {.count = 1, .reusable = true}, REDUCE(sym_shorthand_function, 2),
  [415] = {.count = 1, .reusable = false}, REDUCE(sym_shorthand_function, 2),
  [417] = {.count = 1, .reusable = true}, SHIFT(152),
  [419] = {.count = 1, .reusable = false}, REDUCE(sym_metadata_shorthand, 2),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym_metadata_shorthand, 2),
  [423] = {.count = 1, .reusable = true}, SHIFT(153),
  [425] = {.count = 1, .reusable = true}, SHIFT(155),
  [427] = {.count = 1, .reusable = true}, SHIFT(157),
  [429] = {.count = 1, .reusable = false}, REDUCE(sym__metadata_map, 2),
  [431] = {.count = 1, .reusable = true}, REDUCE(sym__metadata_map, 2),
  [433] = {.count = 1, .reusable = false}, SHIFT(158),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym_syntax_quote, 2),
  [437] = {.count = 1, .reusable = false}, REDUCE(sym_syntax_quote, 2),
  [439] = {.count = 1, .reusable = true}, REDUCE(sym_unquote, 2),
  [441] = {.count = 1, .reusable = false}, REDUCE(sym_unquote, 2),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym_unquote_splice, 2),
  [445] = {.count = 1, .reusable = false}, REDUCE(sym_unquote_splice, 2),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym__collection_literals, 2),
  [449] = {.count = 1, .reusable = false}, REDUCE(sym__collection_literals, 2),
  [451] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [453] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(114),
  [456] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [459] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(29),
  [462] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(29),
  [465] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [468] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [471] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [474] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [477] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [480] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [483] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [486] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [489] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [492] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [495] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [498] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [501] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [504] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [507] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(16),
  [510] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [513] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [516] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(19),
  [519] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(20),
  [522] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(21),
  [525] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(114),
  [528] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(22),
  [531] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [534] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(24),
  [537] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(25),
  [540] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(26),
  [543] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(27),
  [546] = {.count = 1, .reusable = true}, REDUCE(aux_sym_metadata_repeat1, 2),
  [548] = {.count = 1, .reusable = false}, REDUCE(aux_sym_metadata_repeat1, 2),
  [550] = {.count = 2, .reusable = false}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(115),
  [553] = {.count = 2, .reusable = true}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(23),
  [556] = {.count = 2, .reusable = true}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(24),
  [559] = {.count = 1, .reusable = true}, SHIFT(159),
  [561] = {.count = 1, .reusable = true}, REDUCE(sym__octal_char, 2),
  [563] = {.count = 1, .reusable = false}, REDUCE(sym__octal_char, 2),
  [565] = {.count = 1, .reusable = true}, REDUCE(sym__string, 3),
  [567] = {.count = 1, .reusable = false}, REDUCE(sym__string, 3),
  [569] = {.count = 1, .reusable = false}, REDUCE(aux_sym__string_repeat1, 2),
  [571] = {.count = 2, .reusable = false}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(120),
  [574] = {.count = 1, .reusable = true}, REDUCE(sym__regex, 3),
  [576] = {.count = 1, .reusable = false}, REDUCE(sym__regex, 3),
  [578] = {.count = 1, .reusable = false}, REDUCE(aux_sym__regex_repeat1, 2),
  [580] = {.count = 2, .reusable = false}, REDUCE(aux_sym__regex_repeat1, 2), SHIFT_REPEAT(122),
  [583] = {.count = 1, .reusable = true}, REDUCE(sym__quote, 3),
  [585] = {.count = 1, .reusable = false}, REDUCE(sym__quote, 3),
  [587] = {.count = 1, .reusable = true}, SHIFT(160),
  [589] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_symbol, 3),
  [591] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_symbol, 3),
  [593] = {.count = 1, .reusable = true}, REDUCE(sym_comment_macro, 3),
  [595] = {.count = 1, .reusable = false}, REDUCE(sym_comment_macro, 3),
  [597] = {.count = 1, .reusable = true}, SHIFT(161),
  [599] = {.count = 1, .reusable = true}, SHIFT(162),
  [601] = {.count = 1, .reusable = true}, REDUCE(sym_function_name, 1),
  [603] = {.count = 1, .reusable = false}, REDUCE(sym_function_name, 1),
  [605] = {.count = 1, .reusable = false}, REDUCE(sym_params, 1),
  [607] = {.count = 1, .reusable = true}, REDUCE(sym_params, 1),
  [609] = {.count = 1, .reusable = true}, SHIFT(164),
  [611] = {.count = 1, .reusable = false}, SHIFT(167),
  [613] = {.count = 1, .reusable = true}, REDUCE(sym__single_arity_fn, 1),
  [615] = {.count = 1, .reusable = true}, SHIFT(167),
  [617] = {.count = 1, .reusable = true}, REDUCE(sym__multi_arity_fn, 1),
  [619] = {.count = 1, .reusable = true}, SHIFT(169),
  [621] = {.count = 1, .reusable = true}, REDUCE(sym__list, 3),
  [623] = {.count = 1, .reusable = false}, REDUCE(sym__list, 3),
  [625] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(142),
  [628] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(62),
  [631] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(64),
  [634] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(142),
  [637] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(68),
  [640] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(69),
  [643] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(70),
  [646] = {.count = 1, .reusable = true}, REDUCE(sym__vector, 3),
  [648] = {.count = 1, .reusable = false}, REDUCE(sym__vector, 3),
  [650] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(144),
  [653] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(72),
  [656] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(74),
  [659] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(144),
  [662] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(75),
  [665] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(76),
  [668] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(77),
  [671] = {.count = 1, .reusable = false}, REDUCE(sym__hash_map_kv_pair, 2),
  [673] = {.count = 1, .reusable = true}, REDUCE(sym__hash_map_kv_pair, 2),
  [675] = {.count = 1, .reusable = true}, REDUCE(sym__hash_map, 3),
  [677] = {.count = 1, .reusable = false}, REDUCE(sym__hash_map, 3),
  [679] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(85),
  [682] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(2),
  [685] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(29),
  [688] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(29),
  [691] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(3),
  [694] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(4),
  [697] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(5),
  [700] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(79),
  [703] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(7),
  [706] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(8),
  [709] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(9),
  [712] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(10),
  [715] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(10),
  [718] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(11),
  [721] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(12),
  [724] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(13),
  [727] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(14),
  [730] = {.count = 1, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2),
  [732] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(15),
  [735] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(16),
  [738] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(17),
  [741] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(18),
  [744] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(19),
  [747] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(81),
  [750] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(21),
  [753] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(85),
  [756] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(22),
  [759] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(23),
  [762] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(24),
  [765] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(82),
  [768] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(83),
  [771] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(84),
  [774] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 3),
  [776] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 3),
  [778] = {.count = 1, .reusable = true}, SHIFT(178),
  [780] = {.count = 1, .reusable = true}, REDUCE(sym__set, 3),
  [782] = {.count = 1, .reusable = false}, REDUCE(sym__set, 3),
  [784] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(151),
  [787] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(90),
  [790] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(92),
  [793] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(151),
  [796] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(93),
  [799] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(94),
  [802] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(95),
  [805] = {.count = 1, .reusable = true}, REDUCE(sym_shorthand_function, 3),
  [807] = {.count = 1, .reusable = false}, REDUCE(sym_shorthand_function, 3),
  [809] = {.count = 1, .reusable = true}, SHIFT(180),
  [811] = {.count = 1, .reusable = true}, SHIFT(181),
  [813] = {.count = 1, .reusable = true}, SHIFT(182),
  [815] = {.count = 1, .reusable = false}, REDUCE(sym_metadata_shorthand, 3),
  [817] = {.count = 1, .reusable = true}, REDUCE(sym_metadata_shorthand, 3),
  [819] = {.count = 1, .reusable = true}, SHIFT(183),
  [821] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_keyword, 4),
  [823] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_keyword, 4),
  [825] = {.count = 1, .reusable = true}, REDUCE(sym_comment_macro, 4),
  [827] = {.count = 1, .reusable = false}, REDUCE(sym_comment_macro, 4),
  [829] = {.count = 1, .reusable = true}, SHIFT(184),
  [831] = {.count = 1, .reusable = true}, SHIFT(185),
  [833] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_function, 4),
  [835] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_function, 4),
  [837] = {.count = 1, .reusable = true}, SHIFT(186),
  [839] = {.count = 1, .reusable = true}, REDUCE(sym__single_arity_fn, 2),
  [841] = {.count = 1, .reusable = true}, REDUCE(sym_function_body, 1),
  [843] = {.count = 1, .reusable = true}, REDUCE(aux_sym__multi_arity_fn_repeat1, 2),
  [845] = {.count = 2, .reusable = true}, REDUCE(aux_sym__multi_arity_fn_repeat1, 2), SHIFT_REPEAT(130),
  [848] = {.count = 1, .reusable = false}, SHIFT(187),
  [850] = {.count = 1, .reusable = false}, SHIFT(188),
  [852] = {.count = 1, .reusable = true}, REDUCE(sym_docstring, 1),
  [854] = {.count = 1, .reusable = false}, REDUCE(sym_docstring, 1),
  [856] = {.count = 1, .reusable = true}, REDUCE(sym_attr_map, 1),
  [858] = {.count = 1, .reusable = true}, SHIFT(189),
  [860] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 4),
  [862] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 4),
  [864] = {.count = 1, .reusable = true}, SHIFT(193),
  [866] = {.count = 1, .reusable = true}, SHIFT(194),
  [868] = {.count = 1, .reusable = true}, SHIFT(196),
  [870] = {.count = 1, .reusable = true}, REDUCE(aux_sym__multi_arity_fn_repeat1, 3),
  [872] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_function, 5),
  [874] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_function, 5),
  [876] = {.count = 1, .reusable = false}, SHIFT(197),
  [878] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 5),
  [880] = {.count = 1, .reusable = false}, REDUCE(sym_defn, 5),
  [882] = {.count = 1, .reusable = true}, SHIFT(198),
  [884] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 5),
  [886] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 5),
  [888] = {.count = 1, .reusable = true}, SHIFT(201),
  [890] = {.count = 1, .reusable = true}, REDUCE(sym__unicode_char, 5),
  [892] = {.count = 1, .reusable = false}, REDUCE(sym__unicode_char, 5),
  [894] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 6),
  [896] = {.count = 1, .reusable = false}, REDUCE(sym_defn, 6),
  [898] = {.count = 1, .reusable = true}, SHIFT(202),
  [900] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 7),
  [902] = {.count = 1, .reusable = false}, REDUCE(sym_defn, 7),
  [904] = {.count = 1, .reusable = true}, SHIFT(204),
  [906] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 8),
  [908] = {.count = 1, .reusable = false}, REDUCE(sym_defn, 8),
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
