#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 206
#define SYMBOL_COUNT 137
#define ALIAS_COUNT 0
#define TOKEN_COUNT 68
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
  sym_member_access = 40,
  sym_field_access = 41,
  sym_new_class = 42,
  anon_sym_LPAREN = 43,
  anon_sym_LBRACK = 44,
  anon_sym_RBRACK = 45,
  anon_sym_LBRACE = 46,
  anon_sym_RBRACE = 47,
  anon_sym_POUND_COLON_COLON_LBRACE = 48,
  anon_sym_POUND = 49,
  anon_sym_POUND_LBRACE = 50,
  anon_sym_SEMI = 51,
  aux_sym_SLASH_DOT_STAR_SLASH = 52,
  anon_sym_POUND_BANG = 53,
  anon_sym_POUND_ = 54,
  anon_sym_comment = 55,
  anon_sym_fn = 56,
  anon_sym_POUND_LPAREN = 57,
  sym_shorthand_function_arg = 58,
  anon_sym_defn = 59,
  anon_sym_defn_DASH = 60,
  anon_sym_CARET = 61,
  anon_sym_CARET_COLON = 62,
  anon_sym_CARET_DQUOTE = 63,
  anon_sym_BQUOTE = 64,
  anon_sym_TILDE = 65,
  anon_sym_TILDE_AT = 66,
  sym_gensym = 67,
  sym_program = 68,
  sym__anything = 69,
  sym__literals = 70,
  sym__collection_literals = 71,
  sym_boolean = 72,
  sym_number = 73,
  sym__number = 74,
  sym_character = 75,
  sym__character = 76,
  sym__special_char = 77,
  sym__unicode_char = 78,
  sym__octal_char = 79,
  sym__octal_num = 80,
  sym_string = 81,
  sym__string = 82,
  sym_regex = 83,
  sym__regex = 84,
  sym_quote = 85,
  sym__quote = 86,
  sym_keyword = 87,
  sym__keyword = 88,
  sym__unqualified_keyword = 89,
  sym_qualified_keyword = 90,
  sym_symbol = 91,
  sym__symbol = 92,
  sym_threading_macro = 93,
  sym_qualified_symbol = 94,
  sym_interop = 95,
  sym_list = 96,
  sym__list = 97,
  sym_vector = 98,
  sym__vector = 99,
  sym_hash_map = 100,
  sym__hash_map = 101,
  sym_namespace_map = 102,
  sym__hash_map_kv_pair = 103,
  sym__hash_map_key = 104,
  sym__hash_map_value = 105,
  sym_set = 106,
  sym__set = 107,
  sym_comment = 108,
  sym_semicolon = 109,
  sym_shebang_line = 110,
  sym_ignore_form = 111,
  sym_comment_macro = 112,
  sym__functions = 113,
  sym_anonymous_function = 114,
  sym__after_the_fn_name = 115,
  sym_function_name = 116,
  sym__single_arity_fn = 117,
  sym__multi_arity_fn = 118,
  sym_function_body = 119,
  sym_params = 120,
  sym_shorthand_function = 121,
  sym_defn = 122,
  sym_docstring = 123,
  sym_attr_map = 124,
  sym_metadata = 125,
  sym__metadata_map = 126,
  sym_metadata_shorthand = 127,
  sym_syntax_quote = 128,
  sym_unquote = 129,
  sym_unquote_splice = 130,
  aux_sym_program_repeat1 = 131,
  aux_sym__string_repeat1 = 132,
  aux_sym__regex_repeat1 = 133,
  aux_sym__hash_map_repeat1 = 134,
  aux_sym__multi_arity_fn_repeat1 = 135,
  aux_sym_metadata_repeat1 = 136,
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
  [sym_member_access] = "member_access",
  [sym_field_access] = "field_access",
  [sym_new_class] = "new_class",
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
  [sym_interop] = "interop",
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
  [sym_member_access] = {
    .visible = true,
    .named = true,
  },
  [sym_field_access] = {
    .visible = true,
    .named = true,
  },
  [sym_new_class] = {
    .visible = true,
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
  [sym_interop] = {
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
        ADVANCE(37);
      if (lookahead == ':')
        ADVANCE(38);
      if (lookahead == ';')
        ADVANCE(40);
      if (lookahead == '[')
        ADVANCE(41);
      if (lookahead == '\\')
        ADVANCE(42);
      if (lookahead == ']')
        ADVANCE(43);
      if (lookahead == '^')
        ADVANCE(44);
      if (lookahead == '`')
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
      if (lookahead == '~')
        ADVANCE(84);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(90);
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
      if (lookahead == '-')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 27:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_field_access);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_number_double);
      if (lookahead == '_')
        ADVANCE(30);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '_')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == '+')
        ADVANCE(32);
      if (lookahead == '-')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_number_double);
      if (lookahead == '_')
        ADVANCE(34);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '_')
        ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_number_double);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_member_access);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '\"')
        ADVANCE(45);
      if (lookahead == ':')
        ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_CARET_DQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_CARET_COLON);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
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
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '@')
        ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_TILDE_AT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_number_long);
      if (lookahead == '.')
        ADVANCE(87);
      if (lookahead == '_')
        ADVANCE(88);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_number_double);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      END_STATE();
    case 88:
      if (lookahead == '_')
        ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == '.')
        ADVANCE(87);
      if (lookahead == '_')
        ADVANCE(88);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__hex_char);
      END_STATE();
    case 91:
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
        ADVANCE(92);
      if (lookahead == ',')
        SKIP(91);
      if (lookahead == '-')
        ADVANCE(96);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == ':')
        ADVANCE(38);
      if (lookahead == ';')
        ADVANCE(40);
      if (lookahead == '[')
        ADVANCE(41);
      if (lookahead == '\\')
        ADVANCE(42);
      if (lookahead == '^')
        ADVANCE(44);
      if (lookahead == '`')
        ADVANCE(47);
      if (lookahead == 'a')
        ADVANCE(97);
      if (lookahead == 'c')
        ADVANCE(104);
      if (lookahead == 'f')
        ADVANCE(111);
      if (lookahead == 'n')
        ADVANCE(116);
      if (lookahead == 's')
        ADVANCE(119);
      if (lookahead == 't')
        ADVANCE(124);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '~')
        ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?')
        ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(91);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(93);
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
    case 93:
      ACCEPT_TOKEN(sym_gensym);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_number_long);
      if (lookahead == '#')
        ADVANCE(93);
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
      if (lookahead == '#')
        ADVANCE(93);
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
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '>')
        ADVANCE(24);
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
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == 's')
        ADVANCE(100);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_new_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == '.')
        ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '-')
        ADVANCE(101);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '>')
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
      ACCEPT_TOKEN(anon_sym_as_DASH_GT);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == 'o')
        ADVANCE(105);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == 'n')
        ADVANCE(106);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == 'd')
        ADVANCE(107);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '>')
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
        ADVANCE(95);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_cond_DASH_GT);
      if (lookahead == '>')
        ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_cond_DASH_GT_GT);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == 'a')
        ADVANCE(112);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == 'l')
        ADVANCE(113);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == 's')
        ADVANCE(114);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == 'e')
        ADVANCE(115);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == 'i')
        ADVANCE(117);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == 'l')
        ADVANCE(118);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_nil);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == 'o')
        ADVANCE(120);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == 'm')
        ADVANCE(121);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == 'e')
        ADVANCE(122);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '-')
        ADVANCE(123);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(93);
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
        ADVANCE(95);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == 'r')
        ADVANCE(125);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == 'u')
        ADVANCE(126);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == 'e')
        ADVANCE(127);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 128:
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
        ADVANCE(92);
      if (lookahead == ',')
        SKIP(128);
      if (lookahead == '-')
        ADVANCE(96);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == ':')
        ADVANCE(38);
      if (lookahead == ';')
        ADVANCE(40);
      if (lookahead == '[')
        ADVANCE(41);
      if (lookahead == '\\')
        ADVANCE(42);
      if (lookahead == ']')
        ADVANCE(43);
      if (lookahead == '^')
        ADVANCE(44);
      if (lookahead == '`')
        ADVANCE(47);
      if (lookahead == 'a')
        ADVANCE(97);
      if (lookahead == 'c')
        ADVANCE(104);
      if (lookahead == 'f')
        ADVANCE(111);
      if (lookahead == 'n')
        ADVANCE(116);
      if (lookahead == 's')
        ADVANCE(119);
      if (lookahead == 't')
        ADVANCE(124);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '}')
        ADVANCE(83);
      if (lookahead == '~')
        ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?')
        ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(128);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 129:
      if (lookahead == '\n')
        SKIP(129);
      if (lookahead == ',')
        ADVANCE(130);
      if (lookahead == 'b')
        ADVANCE(131);
      if (lookahead == 'f')
        ADVANCE(140);
      if (lookahead == 'n')
        ADVANCE(148);
      if (lookahead == 'o')
        ADVANCE(57);
      if (lookahead == 'r')
        ADVANCE(149);
      if (lookahead == 's')
        ADVANCE(150);
      if (lookahead == 't')
        ADVANCE(151);
      if (lookahead == 'u')
        ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(130);
      if (lookahead != 0)
        ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__normal_char);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'a')
        ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == 'c')
        ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == 'k')
        ADVANCE(134);
      END_STATE();
    case 134:
      if (lookahead == 's')
        ADVANCE(135);
      END_STATE();
    case 135:
      if (lookahead == 'p')
        ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == 'a')
        ADVANCE(137);
      END_STATE();
    case 137:
      if (lookahead == 'c')
        ADVANCE(138);
      END_STATE();
    case 138:
      if (lookahead == 'e')
        ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_backspace);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'o')
        ADVANCE(141);
      END_STATE();
    case 141:
      if (lookahead == 'r')
        ADVANCE(142);
      END_STATE();
    case 142:
      if (lookahead == 'm')
        ADVANCE(143);
      END_STATE();
    case 143:
      if (lookahead == 'f')
        ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'e')
        ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 'e')
        ADVANCE(146);
      END_STATE();
    case 146:
      if (lookahead == 'd')
        ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_formfeed);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'e')
        ADVANCE(49);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'e')
        ADVANCE(59);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'p')
        ADVANCE(71);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'a')
        ADVANCE(76);
      END_STATE();
    case 152:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(153);
      if (lookahead == '\\')
        ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(153);
      if (lookahead != 0)
        ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 156:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(157);
      if (lookahead == '\\')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(157);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(156);
      if (lookahead != 0)
        ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(155);
      END_STATE();
    case 159:
      if (lookahead == ',')
        SKIP(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(159);
      if (lookahead == '!' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__keyword_chars);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(160);
      END_STATE();
    case 161:
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
        ADVANCE(92);
      if (lookahead == ',')
        SKIP(161);
      if (lookahead == '-')
        ADVANCE(96);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ':')
        ADVANCE(38);
      if (lookahead == ';')
        ADVANCE(40);
      if (lookahead == '[')
        ADVANCE(41);
      if (lookahead == '\\')
        ADVANCE(42);
      if (lookahead == ']')
        ADVANCE(43);
      if (lookahead == '^')
        ADVANCE(44);
      if (lookahead == '`')
        ADVANCE(47);
      if (lookahead == 'a')
        ADVANCE(97);
      if (lookahead == 'c')
        ADVANCE(104);
      if (lookahead == 'f')
        ADVANCE(111);
      if (lookahead == 'n')
        ADVANCE(116);
      if (lookahead == 's')
        ADVANCE(119);
      if (lookahead == 't')
        ADVANCE(124);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '}')
        ADVANCE(83);
      if (lookahead == '~')
        ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?')
        ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(161);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 162:
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
        ADVANCE(92);
      if (lookahead == ',')
        SKIP(162);
      if (lookahead == '-')
        ADVANCE(96);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == ':')
        ADVANCE(38);
      if (lookahead == ';')
        ADVANCE(40);
      if (lookahead == '[')
        ADVANCE(41);
      if (lookahead == '\\')
        ADVANCE(42);
      if (lookahead == '^')
        ADVANCE(44);
      if (lookahead == '`')
        ADVANCE(47);
      if (lookahead == 'a')
        ADVANCE(97);
      if (lookahead == 'c')
        ADVANCE(163);
      if (lookahead == 'd')
        ADVANCE(170);
      if (lookahead == 'f')
        ADVANCE(175);
      if (lookahead == 'n')
        ADVANCE(116);
      if (lookahead == 's')
        ADVANCE(119);
      if (lookahead == 't')
        ADVANCE(124);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '~')
        ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?')
        ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(162);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == 'o')
        ADVANCE(164);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == 'm')
        ADVANCE(165);
      if (lookahead == 'n')
        ADVANCE(106);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == 'm')
        ADVANCE(166);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == 'e')
        ADVANCE(167);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == 'n')
        ADVANCE(168);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == 't')
        ADVANCE(169);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_comment);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == 'e')
        ADVANCE(171);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == 'f')
        ADVANCE(172);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == 'n')
        ADVANCE(173);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '-')
        ADVANCE(174);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_defn_DASH);
      if (lookahead == '#')
        ADVANCE(93);
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
    case 175:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == 'a')
        ADVANCE(112);
      if (lookahead == 'n')
        ADVANCE(176);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_fn);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 177:
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
        ADVANCE(92);
      if (lookahead == ',')
        SKIP(177);
      if (lookahead == '-')
        ADVANCE(96);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == ':')
        ADVANCE(38);
      if (lookahead == ';')
        ADVANCE(40);
      if (lookahead == '[')
        ADVANCE(41);
      if (lookahead == '\\')
        ADVANCE(42);
      if (lookahead == ']')
        ADVANCE(43);
      if (lookahead == '^')
        ADVANCE(44);
      if (lookahead == '`')
        ADVANCE(47);
      if (lookahead == 'a')
        ADVANCE(97);
      if (lookahead == 'c')
        ADVANCE(104);
      if (lookahead == 'f')
        ADVANCE(111);
      if (lookahead == 'n')
        ADVANCE(116);
      if (lookahead == 's')
        ADVANCE(119);
      if (lookahead == 't')
        ADVANCE(124);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '~')
        ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?')
        ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(177);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
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
      if (lookahead == '+')
        ADVANCE(92);
      if (lookahead == ',')
        SKIP(178);
      if (lookahead == '-')
        ADVANCE(96);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == ':')
        ADVANCE(38);
      if (lookahead == ';')
        ADVANCE(40);
      if (lookahead == '[')
        ADVANCE(41);
      if (lookahead == '\\')
        ADVANCE(42);
      if (lookahead == '^')
        ADVANCE(44);
      if (lookahead == '`')
        ADVANCE(47);
      if (lookahead == 'a')
        ADVANCE(97);
      if (lookahead == 'c')
        ADVANCE(104);
      if (lookahead == 'f')
        ADVANCE(111);
      if (lookahead == 'n')
        ADVANCE(116);
      if (lookahead == 's')
        ADVANCE(119);
      if (lookahead == 't')
        ADVANCE(124);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '}')
        ADVANCE(83);
      if (lookahead == '~')
        ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?')
        ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(178);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 179:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(180);
      if (lookahead == '(')
        ADVANCE(181);
      if (lookahead == ')')
        ADVANCE(20);
      if (lookahead == ',')
        SKIP(179);
      if (lookahead == '-')
        ADVANCE(182);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(41);
      if (lookahead == '^')
        ADVANCE(44);
      if (lookahead == 'a')
        ADVANCE(184);
      if (lookahead == 'c')
        ADVANCE(187);
      if (lookahead == 's')
        ADVANCE(192);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(179);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(183);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ':')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(11);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 182:
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
        ADVANCE(183);
      END_STATE();
    case 183:
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
        ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 's')
        ADVANCE(185);
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
        ADVANCE(183);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '-')
        ADVANCE(186);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(183);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '>')
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
        ADVANCE(183);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'o')
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
        ADVANCE(183);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'n')
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
        ADVANCE(183);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'd')
        ADVANCE(190);
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
        ADVANCE(183);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '-')
        ADVANCE(191);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(183);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '>')
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
        ADVANCE(183);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'o')
        ADVANCE(193);
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
        ADVANCE(183);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'm')
        ADVANCE(194);
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
        ADVANCE(183);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'e')
        ADVANCE(195);
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
        ADVANCE(183);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '-')
        ADVANCE(196);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(183);
      END_STATE();
    case 196:
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
        ADVANCE(183);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == '\n')
        SKIP(197);
      if (lookahead == ',')
        ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(198);
      if (lookahead != 0)
        ADVANCE(199);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == ',')
        ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(199);
      END_STATE();
    case 200:
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
        ADVANCE(92);
      if (lookahead == ',')
        SKIP(200);
      if (lookahead == '-')
        ADVANCE(96);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == ':')
        ADVANCE(38);
      if (lookahead == ';')
        ADVANCE(40);
      if (lookahead == '[')
        ADVANCE(41);
      if (lookahead == '\\')
        ADVANCE(42);
      if (lookahead == '^')
        ADVANCE(44);
      if (lookahead == '`')
        ADVANCE(47);
      if (lookahead == 'a')
        ADVANCE(97);
      if (lookahead == 'c')
        ADVANCE(104);
      if (lookahead == 'f')
        ADVANCE(111);
      if (lookahead == 'n')
        ADVANCE(116);
      if (lookahead == 's')
        ADVANCE(119);
      if (lookahead == 't')
        ADVANCE(124);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '~')
        ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?')
        ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(200);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 201:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        SKIP(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(201);
      END_STATE();
    case 202:
      if (lookahead == ',')
        SKIP(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(90);
      END_STATE();
    case 203:
      if (lookahead == ',')
        SKIP(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(203);
      if (('0' <= lookahead && lookahead <= '3'))
        ADVANCE(204);
      if (('4' <= lookahead && lookahead <= '7'))
        ADVANCE(207);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 91},
  [2] = {.lex_state = 128},
  [3] = {.lex_state = 129},
  [4] = {.lex_state = 152},
  [5] = {.lex_state = 156},
  [6] = {.lex_state = 91},
  [7] = {.lex_state = 91},
  [8] = {.lex_state = 159},
  [9] = {.lex_state = 159},
  [10] = {.lex_state = 128},
  [11] = {.lex_state = 161},
  [12] = {.lex_state = 128},
  [13] = {.lex_state = 162},
  [14] = {.lex_state = 177},
  [15] = {.lex_state = 178},
  [16] = {.lex_state = 178},
  [17] = {.lex_state = 179},
  [18] = {.lex_state = 178},
  [19] = {.lex_state = 197},
  [20] = {.lex_state = 197},
  [21] = {.lex_state = 91},
  [22] = {.lex_state = 200},
  [23] = {.lex_state = 179},
  [24] = {.lex_state = 159},
  [25] = {.lex_state = 152},
  [26] = {.lex_state = 91},
  [27] = {.lex_state = 91},
  [28] = {.lex_state = 91},
  [29] = {.lex_state = 201},
  [30] = {.lex_state = 128},
  [31] = {.lex_state = 128},
  [32] = {.lex_state = 128},
  [33] = {.lex_state = 128},
  [34] = {.lex_state = 128},
  [35] = {.lex_state = 128},
  [36] = {.lex_state = 128},
  [37] = {.lex_state = 128},
  [38] = {.lex_state = 128},
  [39] = {.lex_state = 128},
  [40] = {.lex_state = 128},
  [41] = {.lex_state = 128},
  [42] = {.lex_state = 179},
  [43] = {.lex_state = 179},
  [44] = {.lex_state = 91},
  [45] = {.lex_state = 179},
  [46] = {.lex_state = 128},
  [47] = {.lex_state = 202},
  [48] = {.lex_state = 203},
  [49] = {.lex_state = 128},
  [50] = {.lex_state = 152},
  [51] = {.lex_state = 128},
  [52] = {.lex_state = 156},
  [53] = {.lex_state = 128},
  [54] = {.lex_state = 91},
  [55] = {.lex_state = 91},
  [56] = {.lex_state = 91},
  [57] = {.lex_state = 91},
  [58] = {.lex_state = 91},
  [59] = {.lex_state = 162},
  [60] = {.lex_state = 128},
  [61] = {.lex_state = 161},
  [62] = {.lex_state = 179},
  [63] = {.lex_state = 91},
  [64] = {.lex_state = 128},
  [65] = {.lex_state = 91},
  [66] = {.lex_state = 200},
  [67] = {.lex_state = 179},
  [68] = {.lex_state = 179},
  [69] = {.lex_state = 91},
  [70] = {.lex_state = 91},
  [71] = {.lex_state = 91},
  [72] = {.lex_state = 200},
  [73] = {.lex_state = 91},
  [74] = {.lex_state = 128},
  [75] = {.lex_state = 91},
  [76] = {.lex_state = 91},
  [77] = {.lex_state = 91},
  [78] = {.lex_state = 91},
  [79] = {.lex_state = 177},
  [80] = {.lex_state = 91},
  [81] = {.lex_state = 128},
  [82] = {.lex_state = 91},
  [83] = {.lex_state = 91},
  [84] = {.lex_state = 91},
  [85] = {.lex_state = 91},
  [86] = {.lex_state = 91},
  [87] = {.lex_state = 178},
  [88] = {.lex_state = 128},
  [89] = {.lex_state = 178},
  [90] = {.lex_state = 91},
  [91] = {.lex_state = 91},
  [92] = {.lex_state = 128},
  [93] = {.lex_state = 91},
  [94] = {.lex_state = 91},
  [95] = {.lex_state = 91},
  [96] = {.lex_state = 91},
  [97] = {.lex_state = 178},
  [98] = {.lex_state = 128},
  [99] = {.lex_state = 128},
  [100] = {.lex_state = 128},
  [101] = {.lex_state = 128},
  [102] = {.lex_state = 200},
  [103] = {.lex_state = 179},
  [104] = {.lex_state = 178},
  [105] = {.lex_state = 178},
  [106] = {.lex_state = 179},
  [107] = {.lex_state = 179},
  [108] = {.lex_state = 179},
  [109] = {.lex_state = 152},
  [110] = {.lex_state = 128},
  [111] = {.lex_state = 128},
  [112] = {.lex_state = 128},
  [113] = {.lex_state = 200},
  [114] = {.lex_state = 128},
  [115] = {.lex_state = 91},
  [116] = {.lex_state = 179},
  [117] = {.lex_state = 179},
  [118] = {.lex_state = 202},
  [119] = {.lex_state = 128},
  [120] = {.lex_state = 128},
  [121] = {.lex_state = 152},
  [122] = {.lex_state = 128},
  [123] = {.lex_state = 156},
  [124] = {.lex_state = 128},
  [125] = {.lex_state = 159},
  [126] = {.lex_state = 128},
  [127] = {.lex_state = 128},
  [128] = {.lex_state = 200},
  [129] = {.lex_state = 179},
  [130] = {.lex_state = 179},
  [131] = {.lex_state = 91},
  [132] = {.lex_state = 179},
  [133] = {.lex_state = 179},
  [134] = {.lex_state = 200},
  [135] = {.lex_state = 162},
  [136] = {.lex_state = 179},
  [137] = {.lex_state = 200},
  [138] = {.lex_state = 179},
  [139] = {.lex_state = 179},
  [140] = {.lex_state = 179},
  [141] = {.lex_state = 179},
  [142] = {.lex_state = 128},
  [143] = {.lex_state = 200},
  [144] = {.lex_state = 128},
  [145] = {.lex_state = 177},
  [146] = {.lex_state = 178},
  [147] = {.lex_state = 128},
  [148] = {.lex_state = 178},
  [149] = {.lex_state = 128},
  [150] = {.lex_state = 178},
  [151] = {.lex_state = 128},
  [152] = {.lex_state = 178},
  [153] = {.lex_state = 128},
  [154] = {.lex_state = 179},
  [155] = {.lex_state = 178},
  [156] = {.lex_state = 179},
  [157] = {.lex_state = 178},
  [158] = {.lex_state = 91},
  [159] = {.lex_state = 179},
  [160] = {.lex_state = 202},
  [161] = {.lex_state = 128},
  [162] = {.lex_state = 128},
  [163] = {.lex_state = 179},
  [164] = {.lex_state = 162},
  [165] = {.lex_state = 128},
  [166] = {.lex_state = 162},
  [167] = {.lex_state = 162},
  [168] = {.lex_state = 200},
  [169] = {.lex_state = 179},
  [170] = {.lex_state = 152},
  [171] = {.lex_state = 179},
  [172] = {.lex_state = 179},
  [173] = {.lex_state = 179},
  [174] = {.lex_state = 162},
  [175] = {.lex_state = 179},
  [176] = {.lex_state = 179},
  [177] = {.lex_state = 179},
  [178] = {.lex_state = 179},
  [179] = {.lex_state = 128},
  [180] = {.lex_state = 178},
  [181] = {.lex_state = 179},
  [182] = {.lex_state = 179},
  [183] = {.lex_state = 178},
  [184] = {.lex_state = 202},
  [185] = {.lex_state = 179},
  [186] = {.lex_state = 179},
  [187] = {.lex_state = 128},
  [188] = {.lex_state = 179},
  [189] = {.lex_state = 152},
  [190] = {.lex_state = 128},
  [191] = {.lex_state = 162},
  [192] = {.lex_state = 179},
  [193] = {.lex_state = 179},
  [194] = {.lex_state = 128},
  [195] = {.lex_state = 179},
  [196] = {.lex_state = 178},
  [197] = {.lex_state = 128},
  [198] = {.lex_state = 179},
  [199] = {.lex_state = 128},
  [200] = {.lex_state = 162},
  [201] = {.lex_state = 179},
  [202] = {.lex_state = 179},
  [203] = {.lex_state = 128},
  [204] = {.lex_state = 162},
  [205] = {.lex_state = 128},
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
    [sym_member_access] = ACTIONS(1),
    [sym_field_access] = ACTIONS(1),
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
    [sym_program] = STATE(29),
    [sym__anything] = STATE(44),
    [sym__literals] = STATE(44),
    [sym__collection_literals] = STATE(44),
    [sym_boolean] = STATE(44),
    [sym_number] = STATE(44),
    [sym__number] = STATE(30),
    [sym_character] = STATE(44),
    [sym__character] = STATE(31),
    [sym_string] = STATE(44),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(44),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(44),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(44),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(44),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(44),
    [sym_list] = STATE(44),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(44),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(44),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(44),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(44),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(44),
    [sym_anonymous_function] = STATE(44),
    [sym_shorthand_function] = STATE(44),
    [sym_defn] = STATE(44),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(44),
    [sym_unquote] = STATE(44),
    [sym_unquote_splice] = STATE(44),
    [aux_sym_program_repeat1] = STATE(44),
    [aux_sym_metadata_repeat1] = STATE(45),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(57),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(67),
    [anon_sym_TILDE_AT] = ACTIONS(69),
    [sym_gensym] = ACTIONS(57),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_nil] = ACTIONS(73),
    [sym_true] = ACTIONS(73),
    [sym_false] = ACTIONS(73),
    [sym_number_long] = ACTIONS(73),
    [sym_number_double] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(71),
    [anon_sym_LPARENquote] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(71),
    [anon_sym_COLON] = ACTIONS(73),
    [anon_sym_COLON_COLON] = ACTIONS(71),
    [anon_sym_DASH_GT] = ACTIONS(73),
    [anon_sym_DASH_GT_GT] = ACTIONS(71),
    [anon_sym_as_DASH_GT] = ACTIONS(71),
    [anon_sym_some_DASH_GT] = ACTIONS(73),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(71),
    [anon_sym_cond_DASH_GT] = ACTIONS(73),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(71),
    [sym__symbol_chars] = ACTIONS(73),
    [sym_member_access] = ACTIONS(71),
    [sym_field_access] = ACTIONS(71),
    [sym_new_class] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_RBRACK] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(71),
    [anon_sym_RBRACE] = ACTIONS(71),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(71),
    [anon_sym_POUND] = ACTIONS(73),
    [anon_sym_POUND_LBRACE] = ACTIONS(71),
    [anon_sym_SEMI] = ACTIONS(71),
    [anon_sym_POUND_BANG] = ACTIONS(71),
    [anon_sym_POUND_] = ACTIONS(71),
    [anon_sym_POUND_LPAREN] = ACTIONS(71),
    [sym_shorthand_function_arg] = ACTIONS(71),
    [anon_sym_CARET] = ACTIONS(73),
    [anon_sym_CARET_COLON] = ACTIONS(71),
    [anon_sym_CARET_DQUOTE] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(71),
    [anon_sym_TILDE] = ACTIONS(73),
    [anon_sym_TILDE_AT] = ACTIONS(71),
    [sym_gensym] = ACTIONS(71),
  },
  [3] = {
    [sym__special_char] = STATE(46),
    [sym__unicode_char] = STATE(46),
    [sym__octal_char] = STATE(46),
    [sym__normal_char] = ACTIONS(75),
    [anon_sym_newline] = ACTIONS(75),
    [anon_sym_space] = ACTIONS(75),
    [anon_sym_tab] = ACTIONS(75),
    [anon_sym_formfeed] = ACTIONS(75),
    [anon_sym_backspace] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_u] = ACTIONS(77),
    [anon_sym_o] = ACTIONS(79),
  },
  [4] = {
    [aux_sym__string_repeat1] = STATE(50),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(83),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(83),
  },
  [5] = {
    [aux_sym__regex_repeat1] = STATE(52),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(87),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(87),
  },
  [6] = {
    [sym__anything] = STATE(53),
    [sym__literals] = STATE(53),
    [sym__collection_literals] = STATE(53),
    [sym_boolean] = STATE(53),
    [sym_number] = STATE(53),
    [sym__number] = STATE(30),
    [sym_character] = STATE(53),
    [sym__character] = STATE(31),
    [sym_string] = STATE(53),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(53),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(53),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(53),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(53),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(53),
    [sym_list] = STATE(53),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(53),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(53),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(53),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(53),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(53),
    [sym_anonymous_function] = STATE(53),
    [sym_shorthand_function] = STATE(53),
    [sym_defn] = STATE(53),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(53),
    [sym_unquote] = STATE(53),
    [sym_unquote_splice] = STATE(53),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(89),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(91),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(67),
    [anon_sym_TILDE_AT] = ACTIONS(69),
    [sym_gensym] = ACTIONS(91),
  },
  [7] = {
    [sym__anything] = STATE(59),
    [sym__literals] = STATE(59),
    [sym__collection_literals] = STATE(59),
    [sym_boolean] = STATE(59),
    [sym_number] = STATE(59),
    [sym__number] = STATE(30),
    [sym_character] = STATE(59),
    [sym__character] = STATE(31),
    [sym_string] = STATE(59),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(59),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(59),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(59),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(59),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(59),
    [sym_list] = STATE(59),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(59),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(59),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(59),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(59),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(59),
    [sym_anonymous_function] = STATE(59),
    [sym_shorthand_function] = STATE(59),
    [sym_defn] = STATE(59),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(59),
    [sym_unquote] = STATE(59),
    [sym_unquote_splice] = STATE(59),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(93),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(95),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(97),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(99),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(101),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_TILDE_AT] = ACTIONS(105),
    [sym_gensym] = ACTIONS(99),
  },
  [8] = {
    [sym__keyword_chars] = ACTIONS(107),
  },
  [9] = {
    [sym__keyword_chars] = ACTIONS(109),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [sym_nil] = ACTIONS(113),
    [sym_true] = ACTIONS(113),
    [sym_false] = ACTIONS(113),
    [sym_number_long] = ACTIONS(113),
    [sym_number_double] = ACTIONS(111),
    [anon_sym_BSLASH] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [anon_sym_POUND_DQUOTE] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(111),
    [anon_sym_LPARENquote] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_COLON] = ACTIONS(113),
    [anon_sym_COLON_COLON] = ACTIONS(111),
    [anon_sym_DASH_GT] = ACTIONS(113),
    [anon_sym_DASH_GT_GT] = ACTIONS(111),
    [anon_sym_as_DASH_GT] = ACTIONS(111),
    [anon_sym_some_DASH_GT] = ACTIONS(113),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(111),
    [anon_sym_cond_DASH_GT] = ACTIONS(113),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(111),
    [sym__symbol_chars] = ACTIONS(113),
    [sym_member_access] = ACTIONS(111),
    [sym_field_access] = ACTIONS(111),
    [sym_new_class] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(111),
    [anon_sym_POUND] = ACTIONS(113),
    [anon_sym_POUND_LBRACE] = ACTIONS(111),
    [anon_sym_SEMI] = ACTIONS(111),
    [anon_sym_POUND_BANG] = ACTIONS(111),
    [anon_sym_POUND_] = ACTIONS(111),
    [anon_sym_POUND_LPAREN] = ACTIONS(111),
    [sym_shorthand_function_arg] = ACTIONS(111),
    [anon_sym_CARET] = ACTIONS(113),
    [anon_sym_CARET_COLON] = ACTIONS(111),
    [anon_sym_CARET_DQUOTE] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_TILDE] = ACTIONS(113),
    [anon_sym_TILDE_AT] = ACTIONS(111),
    [sym_gensym] = ACTIONS(111),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [sym_nil] = ACTIONS(117),
    [sym_true] = ACTIONS(117),
    [sym_false] = ACTIONS(117),
    [sym_number_long] = ACTIONS(117),
    [sym_number_double] = ACTIONS(115),
    [anon_sym_BSLASH] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_POUND_DQUOTE] = ACTIONS(115),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_LPARENquote] = ACTIONS(115),
    [anon_sym_RPAREN] = ACTIONS(115),
    [anon_sym_COLON] = ACTIONS(117),
    [anon_sym_COLON_COLON] = ACTIONS(115),
    [anon_sym_SLASH] = ACTIONS(119),
    [anon_sym_DASH_GT] = ACTIONS(117),
    [anon_sym_DASH_GT_GT] = ACTIONS(115),
    [anon_sym_as_DASH_GT] = ACTIONS(115),
    [anon_sym_some_DASH_GT] = ACTIONS(117),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(115),
    [anon_sym_cond_DASH_GT] = ACTIONS(117),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(115),
    [sym__symbol_chars] = ACTIONS(117),
    [sym_member_access] = ACTIONS(115),
    [sym_field_access] = ACTIONS(115),
    [sym_new_class] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(115),
    [anon_sym_POUND] = ACTIONS(117),
    [anon_sym_POUND_LBRACE] = ACTIONS(115),
    [anon_sym_SEMI] = ACTIONS(115),
    [anon_sym_POUND_BANG] = ACTIONS(115),
    [anon_sym_POUND_] = ACTIONS(115),
    [anon_sym_POUND_LPAREN] = ACTIONS(115),
    [sym_shorthand_function_arg] = ACTIONS(115),
    [anon_sym_CARET] = ACTIONS(117),
    [anon_sym_CARET_COLON] = ACTIONS(115),
    [anon_sym_CARET_DQUOTE] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(115),
    [anon_sym_TILDE] = ACTIONS(117),
    [anon_sym_TILDE_AT] = ACTIONS(115),
    [sym_gensym] = ACTIONS(115),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [sym_nil] = ACTIONS(123),
    [sym_true] = ACTIONS(123),
    [sym_false] = ACTIONS(123),
    [sym_number_long] = ACTIONS(123),
    [sym_number_double] = ACTIONS(121),
    [anon_sym_BSLASH] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [anon_sym_POUND_DQUOTE] = ACTIONS(121),
    [anon_sym_SQUOTE] = ACTIONS(121),
    [anon_sym_LPARENquote] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(121),
    [anon_sym_COLON] = ACTIONS(123),
    [anon_sym_COLON_COLON] = ACTIONS(121),
    [anon_sym_DASH_GT] = ACTIONS(123),
    [anon_sym_DASH_GT_GT] = ACTIONS(121),
    [anon_sym_as_DASH_GT] = ACTIONS(121),
    [anon_sym_some_DASH_GT] = ACTIONS(123),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(121),
    [anon_sym_cond_DASH_GT] = ACTIONS(123),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(121),
    [sym__symbol_chars] = ACTIONS(123),
    [sym_member_access] = ACTIONS(121),
    [sym_field_access] = ACTIONS(121),
    [sym_new_class] = ACTIONS(121),
    [anon_sym_LPAREN] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_RBRACK] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_RBRACE] = ACTIONS(121),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(121),
    [anon_sym_POUND] = ACTIONS(123),
    [anon_sym_POUND_LBRACE] = ACTIONS(121),
    [anon_sym_SEMI] = ACTIONS(121),
    [anon_sym_POUND_BANG] = ACTIONS(121),
    [anon_sym_POUND_] = ACTIONS(121),
    [anon_sym_POUND_LPAREN] = ACTIONS(121),
    [sym_shorthand_function_arg] = ACTIONS(121),
    [anon_sym_CARET] = ACTIONS(123),
    [anon_sym_CARET_COLON] = ACTIONS(121),
    [anon_sym_CARET_DQUOTE] = ACTIONS(121),
    [anon_sym_BQUOTE] = ACTIONS(121),
    [anon_sym_TILDE] = ACTIONS(123),
    [anon_sym_TILDE_AT] = ACTIONS(121),
    [sym_gensym] = ACTIONS(121),
  },
  [13] = {
    [sym__anything] = STATE(72),
    [sym__literals] = STATE(72),
    [sym__collection_literals] = STATE(72),
    [sym_boolean] = STATE(72),
    [sym_number] = STATE(72),
    [sym__number] = STATE(30),
    [sym_character] = STATE(72),
    [sym__character] = STATE(31),
    [sym_string] = STATE(72),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(72),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(72),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(72),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(72),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(72),
    [sym_list] = STATE(72),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(72),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(72),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(72),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(72),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(72),
    [sym_anonymous_function] = STATE(72),
    [sym_shorthand_function] = STATE(72),
    [sym_defn] = STATE(72),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(72),
    [sym_unquote] = STATE(72),
    [sym_unquote_splice] = STATE(72),
    [aux_sym_program_repeat1] = STATE(72),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(125),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(127),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(129),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(131),
    [anon_sym_comment] = ACTIONS(133),
    [anon_sym_fn] = ACTIONS(135),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(137),
    [anon_sym_defn] = ACTIONS(139),
    [anon_sym_defn_DASH] = ACTIONS(139),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_TILDE_AT] = ACTIONS(145),
    [sym_gensym] = ACTIONS(137),
  },
  [14] = {
    [sym__anything] = STATE(79),
    [sym__literals] = STATE(79),
    [sym__collection_literals] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_number] = STATE(79),
    [sym__number] = STATE(30),
    [sym_character] = STATE(79),
    [sym__character] = STATE(31),
    [sym_string] = STATE(79),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(79),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(79),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(79),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(79),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(79),
    [sym_list] = STATE(79),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(79),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(79),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(79),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(79),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(79),
    [sym_anonymous_function] = STATE(79),
    [sym_shorthand_function] = STATE(79),
    [sym_defn] = STATE(79),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(79),
    [sym_unquote] = STATE(79),
    [sym_unquote_splice] = STATE(79),
    [aux_sym_program_repeat1] = STATE(79),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(147),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(149),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_RBRACK] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(153),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(155),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(157),
    [anon_sym_TILDE] = ACTIONS(159),
    [anon_sym_TILDE_AT] = ACTIONS(161),
    [sym_gensym] = ACTIONS(155),
  },
  [15] = {
    [sym__anything] = STATE(86),
    [sym__literals] = STATE(86),
    [sym__collection_literals] = STATE(86),
    [sym_boolean] = STATE(86),
    [sym_number] = STATE(86),
    [sym__number] = STATE(30),
    [sym_character] = STATE(86),
    [sym__character] = STATE(31),
    [sym_string] = STATE(86),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(86),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(86),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(86),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(86),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(86),
    [sym_list] = STATE(86),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(86),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(86),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym__hash_map_kv_pair] = STATE(87),
    [sym__hash_map_key] = STATE(86),
    [sym_set] = STATE(86),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(86),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(86),
    [sym_anonymous_function] = STATE(86),
    [sym_shorthand_function] = STATE(86),
    [sym_defn] = STATE(86),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(86),
    [sym_unquote] = STATE(86),
    [sym_unquote_splice] = STATE(86),
    [aux_sym__hash_map_repeat1] = STATE(87),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(163),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(165),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(167),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(169),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(171),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(175),
    [anon_sym_TILDE_AT] = ACTIONS(177),
    [sym_gensym] = ACTIONS(171),
  },
  [16] = {
    [sym__anything] = STATE(86),
    [sym__literals] = STATE(86),
    [sym__collection_literals] = STATE(86),
    [sym_boolean] = STATE(86),
    [sym_number] = STATE(86),
    [sym__number] = STATE(30),
    [sym_character] = STATE(86),
    [sym__character] = STATE(31),
    [sym_string] = STATE(86),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(86),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(86),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(86),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(86),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(86),
    [sym_list] = STATE(86),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(86),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(86),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym__hash_map_kv_pair] = STATE(89),
    [sym__hash_map_key] = STATE(86),
    [sym_set] = STATE(86),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(86),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(86),
    [sym_anonymous_function] = STATE(86),
    [sym_shorthand_function] = STATE(86),
    [sym_defn] = STATE(86),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(86),
    [sym_unquote] = STATE(86),
    [sym_unquote_splice] = STATE(86),
    [aux_sym__hash_map_repeat1] = STATE(89),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(163),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(165),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(179),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(169),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(171),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(175),
    [anon_sym_TILDE_AT] = ACTIONS(177),
    [sym_gensym] = ACTIONS(171),
  },
  [17] = {
    [sym__symbol_chars] = ACTIONS(181),
  },
  [18] = {
    [sym__anything] = STATE(97),
    [sym__literals] = STATE(97),
    [sym__collection_literals] = STATE(97),
    [sym_boolean] = STATE(97),
    [sym_number] = STATE(97),
    [sym__number] = STATE(30),
    [sym_character] = STATE(97),
    [sym__character] = STATE(31),
    [sym_string] = STATE(97),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(97),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(97),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(97),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(97),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(97),
    [sym_list] = STATE(97),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(97),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(97),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(97),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(97),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(97),
    [sym_anonymous_function] = STATE(97),
    [sym_shorthand_function] = STATE(97),
    [sym_defn] = STATE(97),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(97),
    [sym_unquote] = STATE(97),
    [sym_unquote_splice] = STATE(97),
    [aux_sym_program_repeat1] = STATE(97),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(183),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(185),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(187),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(189),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(191),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(193),
    [anon_sym_TILDE] = ACTIONS(195),
    [anon_sym_TILDE_AT] = ACTIONS(197),
    [sym_gensym] = ACTIONS(191),
  },
  [19] = {
    [aux_sym_SLASH_DOT_STAR_SLASH] = ACTIONS(199),
  },
  [20] = {
    [aux_sym_SLASH_DOT_STAR_SLASH] = ACTIONS(201),
  },
  [21] = {
    [sym__anything] = STATE(100),
    [sym__literals] = STATE(100),
    [sym__collection_literals] = STATE(100),
    [sym_boolean] = STATE(100),
    [sym_number] = STATE(100),
    [sym__number] = STATE(30),
    [sym_character] = STATE(100),
    [sym__character] = STATE(31),
    [sym_string] = STATE(100),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(100),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(100),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(100),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(100),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(100),
    [sym_list] = STATE(100),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(100),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(100),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(100),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(100),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(100),
    [sym_anonymous_function] = STATE(100),
    [sym_shorthand_function] = STATE(100),
    [sym_defn] = STATE(100),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(100),
    [sym_unquote] = STATE(100),
    [sym_unquote_splice] = STATE(100),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(203),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(205),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(67),
    [anon_sym_TILDE_AT] = ACTIONS(69),
    [sym_gensym] = ACTIONS(205),
  },
  [22] = {
    [sym__anything] = STATE(102),
    [sym__literals] = STATE(102),
    [sym__collection_literals] = STATE(102),
    [sym_boolean] = STATE(102),
    [sym_number] = STATE(102),
    [sym__number] = STATE(30),
    [sym_character] = STATE(102),
    [sym__character] = STATE(31),
    [sym_string] = STATE(102),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(102),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(102),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(102),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(102),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(102),
    [sym_list] = STATE(102),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(102),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(102),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(102),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(102),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(102),
    [sym_anonymous_function] = STATE(102),
    [sym_shorthand_function] = STATE(102),
    [sym_defn] = STATE(102),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(102),
    [sym_unquote] = STATE(102),
    [sym_unquote_splice] = STATE(102),
    [aux_sym_program_repeat1] = STATE(102),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(207),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(127),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(209),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(131),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(211),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_TILDE_AT] = ACTIONS(145),
    [sym_gensym] = ACTIONS(211),
  },
  [23] = {
    [sym_hash_map] = STATE(107),
    [sym__hash_map] = STATE(108),
    [sym_namespace_map] = STATE(108),
    [sym__symbol_chars] = ACTIONS(213),
    [anon_sym_LBRACE] = ACTIONS(215),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(217),
    [anon_sym_POUND] = ACTIONS(219),
  },
  [24] = {
    [sym__keyword_chars] = ACTIONS(213),
  },
  [25] = {
    [aux_sym__string_repeat1] = STATE(109),
    [anon_sym_DQUOTE] = ACTIONS(221),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(223),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(223),
  },
  [26] = {
    [sym__anything] = STATE(110),
    [sym__literals] = STATE(110),
    [sym__collection_literals] = STATE(110),
    [sym_boolean] = STATE(110),
    [sym_number] = STATE(110),
    [sym__number] = STATE(30),
    [sym_character] = STATE(110),
    [sym__character] = STATE(31),
    [sym_string] = STATE(110),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(110),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(110),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(110),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(110),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(110),
    [sym_list] = STATE(110),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(110),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(110),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(110),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(110),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(110),
    [sym_anonymous_function] = STATE(110),
    [sym_shorthand_function] = STATE(110),
    [sym_defn] = STATE(110),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(110),
    [sym_unquote] = STATE(110),
    [sym_unquote_splice] = STATE(110),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(225),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(227),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(67),
    [anon_sym_TILDE_AT] = ACTIONS(69),
    [sym_gensym] = ACTIONS(227),
  },
  [27] = {
    [sym__anything] = STATE(111),
    [sym__literals] = STATE(111),
    [sym__collection_literals] = STATE(111),
    [sym_boolean] = STATE(111),
    [sym_number] = STATE(111),
    [sym__number] = STATE(30),
    [sym_character] = STATE(111),
    [sym__character] = STATE(31),
    [sym_string] = STATE(111),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(111),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(111),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(111),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(111),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(111),
    [sym_list] = STATE(111),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(111),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(111),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(111),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(111),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(111),
    [sym_anonymous_function] = STATE(111),
    [sym_shorthand_function] = STATE(111),
    [sym_defn] = STATE(111),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(111),
    [sym_unquote] = STATE(111),
    [sym_unquote_splice] = STATE(111),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(229),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(231),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(67),
    [anon_sym_TILDE_AT] = ACTIONS(69),
    [sym_gensym] = ACTIONS(231),
  },
  [28] = {
    [sym__anything] = STATE(112),
    [sym__literals] = STATE(112),
    [sym__collection_literals] = STATE(112),
    [sym_boolean] = STATE(112),
    [sym_number] = STATE(112),
    [sym__number] = STATE(30),
    [sym_character] = STATE(112),
    [sym__character] = STATE(31),
    [sym_string] = STATE(112),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(112),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(112),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(112),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(112),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(112),
    [sym_list] = STATE(112),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(112),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(112),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(112),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(112),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(112),
    [sym_anonymous_function] = STATE(112),
    [sym_shorthand_function] = STATE(112),
    [sym_defn] = STATE(112),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(112),
    [sym_unquote] = STATE(112),
    [sym_unquote_splice] = STATE(112),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(233),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(235),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(67),
    [anon_sym_TILDE_AT] = ACTIONS(69),
    [sym_gensym] = ACTIONS(235),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(237),
  },
  [30] = {
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
    [sym_member_access] = ACTIONS(239),
    [sym_field_access] = ACTIONS(239),
    [sym_new_class] = ACTIONS(239),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(239),
    [sym_shorthand_function_arg] = ACTIONS(239),
    [anon_sym_CARET] = ACTIONS(241),
    [anon_sym_CARET_COLON] = ACTIONS(239),
    [anon_sym_CARET_DQUOTE] = ACTIONS(239),
    [anon_sym_BQUOTE] = ACTIONS(239),
    [anon_sym_TILDE] = ACTIONS(241),
    [anon_sym_TILDE_AT] = ACTIONS(239),
    [sym_gensym] = ACTIONS(239),
  },
  [31] = {
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
    [sym_member_access] = ACTIONS(243),
    [sym_field_access] = ACTIONS(243),
    [sym_new_class] = ACTIONS(243),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(243),
    [sym_shorthand_function_arg] = ACTIONS(243),
    [anon_sym_CARET] = ACTIONS(245),
    [anon_sym_CARET_COLON] = ACTIONS(243),
    [anon_sym_CARET_DQUOTE] = ACTIONS(243),
    [anon_sym_BQUOTE] = ACTIONS(243),
    [anon_sym_TILDE] = ACTIONS(245),
    [anon_sym_TILDE_AT] = ACTIONS(243),
    [sym_gensym] = ACTIONS(243),
  },
  [32] = {
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
    [sym_member_access] = ACTIONS(247),
    [sym_field_access] = ACTIONS(247),
    [sym_new_class] = ACTIONS(247),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(247),
    [sym_shorthand_function_arg] = ACTIONS(247),
    [anon_sym_CARET] = ACTIONS(249),
    [anon_sym_CARET_COLON] = ACTIONS(247),
    [anon_sym_CARET_DQUOTE] = ACTIONS(247),
    [anon_sym_BQUOTE] = ACTIONS(247),
    [anon_sym_TILDE] = ACTIONS(249),
    [anon_sym_TILDE_AT] = ACTIONS(247),
    [sym_gensym] = ACTIONS(247),
  },
  [33] = {
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
    [sym_member_access] = ACTIONS(251),
    [sym_field_access] = ACTIONS(251),
    [sym_new_class] = ACTIONS(251),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(251),
    [sym_shorthand_function_arg] = ACTIONS(251),
    [anon_sym_CARET] = ACTIONS(253),
    [anon_sym_CARET_COLON] = ACTIONS(251),
    [anon_sym_CARET_DQUOTE] = ACTIONS(251),
    [anon_sym_BQUOTE] = ACTIONS(251),
    [anon_sym_TILDE] = ACTIONS(253),
    [anon_sym_TILDE_AT] = ACTIONS(251),
    [sym_gensym] = ACTIONS(251),
  },
  [34] = {
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
    [sym_member_access] = ACTIONS(255),
    [sym_field_access] = ACTIONS(255),
    [sym_new_class] = ACTIONS(255),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(255),
    [sym_shorthand_function_arg] = ACTIONS(255),
    [anon_sym_CARET] = ACTIONS(257),
    [anon_sym_CARET_COLON] = ACTIONS(255),
    [anon_sym_CARET_DQUOTE] = ACTIONS(255),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [anon_sym_TILDE] = ACTIONS(257),
    [anon_sym_TILDE_AT] = ACTIONS(255),
    [sym_gensym] = ACTIONS(255),
  },
  [35] = {
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
    [sym_member_access] = ACTIONS(259),
    [sym_field_access] = ACTIONS(259),
    [sym_new_class] = ACTIONS(259),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(259),
    [sym_shorthand_function_arg] = ACTIONS(259),
    [anon_sym_CARET] = ACTIONS(261),
    [anon_sym_CARET_COLON] = ACTIONS(259),
    [anon_sym_CARET_DQUOTE] = ACTIONS(259),
    [anon_sym_BQUOTE] = ACTIONS(259),
    [anon_sym_TILDE] = ACTIONS(261),
    [anon_sym_TILDE_AT] = ACTIONS(259),
    [sym_gensym] = ACTIONS(259),
  },
  [36] = {
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
    [sym_member_access] = ACTIONS(263),
    [sym_field_access] = ACTIONS(263),
    [sym_new_class] = ACTIONS(263),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(263),
    [sym_shorthand_function_arg] = ACTIONS(263),
    [anon_sym_CARET] = ACTIONS(265),
    [anon_sym_CARET_COLON] = ACTIONS(263),
    [anon_sym_CARET_DQUOTE] = ACTIONS(263),
    [anon_sym_BQUOTE] = ACTIONS(263),
    [anon_sym_TILDE] = ACTIONS(265),
    [anon_sym_TILDE_AT] = ACTIONS(263),
    [sym_gensym] = ACTIONS(263),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(267),
    [sym_nil] = ACTIONS(269),
    [sym_true] = ACTIONS(269),
    [sym_false] = ACTIONS(269),
    [sym_number_long] = ACTIONS(269),
    [sym_number_double] = ACTIONS(267),
    [anon_sym_BSLASH] = ACTIONS(267),
    [anon_sym_DQUOTE] = ACTIONS(267),
    [anon_sym_POUND_DQUOTE] = ACTIONS(267),
    [anon_sym_SQUOTE] = ACTIONS(267),
    [anon_sym_LPARENquote] = ACTIONS(267),
    [anon_sym_RPAREN] = ACTIONS(267),
    [anon_sym_COLON] = ACTIONS(269),
    [anon_sym_COLON_COLON] = ACTIONS(267),
    [anon_sym_DASH_GT] = ACTIONS(269),
    [anon_sym_DASH_GT_GT] = ACTIONS(267),
    [anon_sym_as_DASH_GT] = ACTIONS(267),
    [anon_sym_some_DASH_GT] = ACTIONS(269),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(267),
    [anon_sym_cond_DASH_GT] = ACTIONS(269),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(267),
    [sym__symbol_chars] = ACTIONS(269),
    [sym_member_access] = ACTIONS(267),
    [sym_field_access] = ACTIONS(267),
    [sym_new_class] = ACTIONS(267),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_LBRACK] = ACTIONS(267),
    [anon_sym_RBRACK] = ACTIONS(267),
    [anon_sym_LBRACE] = ACTIONS(267),
    [anon_sym_RBRACE] = ACTIONS(267),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(267),
    [anon_sym_POUND] = ACTIONS(269),
    [anon_sym_POUND_LBRACE] = ACTIONS(267),
    [anon_sym_SEMI] = ACTIONS(267),
    [anon_sym_POUND_BANG] = ACTIONS(267),
    [anon_sym_POUND_] = ACTIONS(267),
    [anon_sym_POUND_LPAREN] = ACTIONS(267),
    [sym_shorthand_function_arg] = ACTIONS(267),
    [anon_sym_CARET] = ACTIONS(269),
    [anon_sym_CARET_COLON] = ACTIONS(267),
    [anon_sym_CARET_DQUOTE] = ACTIONS(267),
    [anon_sym_BQUOTE] = ACTIONS(267),
    [anon_sym_TILDE] = ACTIONS(269),
    [anon_sym_TILDE_AT] = ACTIONS(267),
    [sym_gensym] = ACTIONS(267),
  },
  [38] = {
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
    [sym_member_access] = ACTIONS(271),
    [sym_field_access] = ACTIONS(271),
    [sym_new_class] = ACTIONS(271),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(271),
    [sym_shorthand_function_arg] = ACTIONS(271),
    [anon_sym_CARET] = ACTIONS(273),
    [anon_sym_CARET_COLON] = ACTIONS(271),
    [anon_sym_CARET_DQUOTE] = ACTIONS(271),
    [anon_sym_BQUOTE] = ACTIONS(271),
    [anon_sym_TILDE] = ACTIONS(273),
    [anon_sym_TILDE_AT] = ACTIONS(271),
    [sym_gensym] = ACTIONS(271),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(275),
    [sym_nil] = ACTIONS(277),
    [sym_true] = ACTIONS(277),
    [sym_false] = ACTIONS(277),
    [sym_number_long] = ACTIONS(277),
    [sym_number_double] = ACTIONS(275),
    [anon_sym_BSLASH] = ACTIONS(275),
    [anon_sym_DQUOTE] = ACTIONS(275),
    [anon_sym_POUND_DQUOTE] = ACTIONS(275),
    [anon_sym_SQUOTE] = ACTIONS(275),
    [anon_sym_LPARENquote] = ACTIONS(275),
    [anon_sym_RPAREN] = ACTIONS(275),
    [anon_sym_COLON] = ACTIONS(277),
    [anon_sym_COLON_COLON] = ACTIONS(275),
    [anon_sym_DASH_GT] = ACTIONS(277),
    [anon_sym_DASH_GT_GT] = ACTIONS(275),
    [anon_sym_as_DASH_GT] = ACTIONS(275),
    [anon_sym_some_DASH_GT] = ACTIONS(277),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(275),
    [anon_sym_cond_DASH_GT] = ACTIONS(277),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(275),
    [sym__symbol_chars] = ACTIONS(277),
    [sym_member_access] = ACTIONS(275),
    [sym_field_access] = ACTIONS(275),
    [sym_new_class] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_LBRACK] = ACTIONS(275),
    [anon_sym_RBRACK] = ACTIONS(275),
    [anon_sym_LBRACE] = ACTIONS(275),
    [anon_sym_RBRACE] = ACTIONS(275),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(275),
    [anon_sym_POUND] = ACTIONS(277),
    [anon_sym_POUND_LBRACE] = ACTIONS(275),
    [anon_sym_SEMI] = ACTIONS(275),
    [anon_sym_POUND_BANG] = ACTIONS(275),
    [anon_sym_POUND_] = ACTIONS(275),
    [anon_sym_POUND_LPAREN] = ACTIONS(275),
    [sym_shorthand_function_arg] = ACTIONS(275),
    [anon_sym_CARET] = ACTIONS(277),
    [anon_sym_CARET_COLON] = ACTIONS(275),
    [anon_sym_CARET_DQUOTE] = ACTIONS(275),
    [anon_sym_BQUOTE] = ACTIONS(275),
    [anon_sym_TILDE] = ACTIONS(277),
    [anon_sym_TILDE_AT] = ACTIONS(275),
    [sym_gensym] = ACTIONS(275),
  },
  [40] = {
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
    [sym_member_access] = ACTIONS(279),
    [sym_field_access] = ACTIONS(279),
    [sym_new_class] = ACTIONS(279),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(279),
    [sym_shorthand_function_arg] = ACTIONS(279),
    [anon_sym_CARET] = ACTIONS(281),
    [anon_sym_CARET_COLON] = ACTIONS(279),
    [anon_sym_CARET_DQUOTE] = ACTIONS(279),
    [anon_sym_BQUOTE] = ACTIONS(279),
    [anon_sym_TILDE] = ACTIONS(281),
    [anon_sym_TILDE_AT] = ACTIONS(279),
    [sym_gensym] = ACTIONS(279),
  },
  [41] = {
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
    [sym_member_access] = ACTIONS(283),
    [sym_field_access] = ACTIONS(283),
    [sym_new_class] = ACTIONS(283),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(283),
    [sym_shorthand_function_arg] = ACTIONS(283),
    [anon_sym_CARET] = ACTIONS(285),
    [anon_sym_CARET_COLON] = ACTIONS(283),
    [anon_sym_CARET_DQUOTE] = ACTIONS(283),
    [anon_sym_BQUOTE] = ACTIONS(283),
    [anon_sym_TILDE] = ACTIONS(285),
    [anon_sym_TILDE_AT] = ACTIONS(283),
    [sym_gensym] = ACTIONS(283),
  },
  [42] = {
    [sym_list] = STATE(114),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(114),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(114),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(114),
    [sym__set] = STATE(40),
    [anon_sym_LPAREN] = ACTIONS(287),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
  },
  [43] = {
    [anon_sym_DASH_GT] = ACTIONS(289),
    [anon_sym_DASH_GT_GT] = ACTIONS(291),
    [anon_sym_as_DASH_GT] = ACTIONS(291),
    [anon_sym_some_DASH_GT] = ACTIONS(289),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(291),
    [anon_sym_cond_DASH_GT] = ACTIONS(289),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(291),
    [sym__symbol_chars] = ACTIONS(289),
    [anon_sym_LPAREN] = ACTIONS(291),
    [anon_sym_LBRACK] = ACTIONS(291),
    [anon_sym_LBRACE] = ACTIONS(291),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(291),
    [anon_sym_POUND] = ACTIONS(289),
    [anon_sym_POUND_LBRACE] = ACTIONS(291),
  },
  [44] = {
    [sym__anything] = STATE(115),
    [sym__literals] = STATE(115),
    [sym__collection_literals] = STATE(115),
    [sym_boolean] = STATE(115),
    [sym_number] = STATE(115),
    [sym__number] = STATE(30),
    [sym_character] = STATE(115),
    [sym__character] = STATE(31),
    [sym_string] = STATE(115),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(115),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(115),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(115),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(115),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(115),
    [sym_list] = STATE(115),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(115),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(115),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(115),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(115),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(115),
    [sym_anonymous_function] = STATE(115),
    [sym_shorthand_function] = STATE(115),
    [sym_defn] = STATE(115),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(115),
    [sym_unquote] = STATE(115),
    [sym_unquote_splice] = STATE(115),
    [aux_sym_program_repeat1] = STATE(115),
    [aux_sym_metadata_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(293),
    [sym_nil] = ACTIONS(295),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(53),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(297),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(67),
    [anon_sym_TILDE_AT] = ACTIONS(69),
    [sym_gensym] = ACTIONS(297),
  },
  [45] = {
    [sym_metadata_shorthand] = STATE(117),
    [aux_sym_metadata_repeat1] = STATE(117),
    [anon_sym_LPAREN] = ACTIONS(291),
    [anon_sym_LBRACK] = ACTIONS(291),
    [anon_sym_LBRACE] = ACTIONS(291),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(291),
    [anon_sym_POUND] = ACTIONS(289),
    [anon_sym_POUND_LBRACE] = ACTIONS(291),
    [anon_sym_CARET] = ACTIONS(299),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
  },
  [46] = {
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
    [sym_member_access] = ACTIONS(301),
    [sym_field_access] = ACTIONS(301),
    [sym_new_class] = ACTIONS(301),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(301),
    [sym_shorthand_function_arg] = ACTIONS(301),
    [anon_sym_CARET] = ACTIONS(303),
    [anon_sym_CARET_COLON] = ACTIONS(301),
    [anon_sym_CARET_DQUOTE] = ACTIONS(301),
    [anon_sym_BQUOTE] = ACTIONS(301),
    [anon_sym_TILDE] = ACTIONS(303),
    [anon_sym_TILDE_AT] = ACTIONS(301),
    [sym_gensym] = ACTIONS(301),
  },
  [47] = {
    [sym__hex_char] = ACTIONS(305),
  },
  [48] = {
    [sym__octal_num] = STATE(119),
    [aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(307),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(309),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(309),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(311),
    [sym_nil] = ACTIONS(313),
    [sym_true] = ACTIONS(313),
    [sym_false] = ACTIONS(313),
    [sym_number_long] = ACTIONS(313),
    [sym_number_double] = ACTIONS(311),
    [anon_sym_BSLASH] = ACTIONS(311),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [anon_sym_POUND_DQUOTE] = ACTIONS(311),
    [anon_sym_SQUOTE] = ACTIONS(311),
    [anon_sym_LPARENquote] = ACTIONS(311),
    [anon_sym_RPAREN] = ACTIONS(311),
    [anon_sym_COLON] = ACTIONS(313),
    [anon_sym_COLON_COLON] = ACTIONS(311),
    [anon_sym_DASH_GT] = ACTIONS(313),
    [anon_sym_DASH_GT_GT] = ACTIONS(311),
    [anon_sym_as_DASH_GT] = ACTIONS(311),
    [anon_sym_some_DASH_GT] = ACTIONS(313),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(311),
    [anon_sym_cond_DASH_GT] = ACTIONS(313),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(311),
    [sym__symbol_chars] = ACTIONS(313),
    [sym_member_access] = ACTIONS(311),
    [sym_field_access] = ACTIONS(311),
    [sym_new_class] = ACTIONS(311),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(311),
    [sym_shorthand_function_arg] = ACTIONS(311),
    [anon_sym_CARET] = ACTIONS(313),
    [anon_sym_CARET_COLON] = ACTIONS(311),
    [anon_sym_CARET_DQUOTE] = ACTIONS(311),
    [anon_sym_BQUOTE] = ACTIONS(311),
    [anon_sym_TILDE] = ACTIONS(313),
    [anon_sym_TILDE_AT] = ACTIONS(311),
    [sym_gensym] = ACTIONS(311),
  },
  [50] = {
    [aux_sym__string_repeat1] = STATE(121),
    [anon_sym_DQUOTE] = ACTIONS(315),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(317),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(317),
  },
  [51] = {
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
    [anon_sym_DASH_GT] = ACTIONS(321),
    [anon_sym_DASH_GT_GT] = ACTIONS(319),
    [anon_sym_as_DASH_GT] = ACTIONS(319),
    [anon_sym_some_DASH_GT] = ACTIONS(321),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(319),
    [anon_sym_cond_DASH_GT] = ACTIONS(321),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(319),
    [sym__symbol_chars] = ACTIONS(321),
    [sym_member_access] = ACTIONS(319),
    [sym_field_access] = ACTIONS(319),
    [sym_new_class] = ACTIONS(319),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(319),
    [sym_shorthand_function_arg] = ACTIONS(319),
    [anon_sym_CARET] = ACTIONS(321),
    [anon_sym_CARET_COLON] = ACTIONS(319),
    [anon_sym_CARET_DQUOTE] = ACTIONS(319),
    [anon_sym_BQUOTE] = ACTIONS(319),
    [anon_sym_TILDE] = ACTIONS(321),
    [anon_sym_TILDE_AT] = ACTIONS(319),
    [sym_gensym] = ACTIONS(319),
  },
  [52] = {
    [aux_sym__regex_repeat1] = STATE(123),
    [anon_sym_DQUOTE] = ACTIONS(323),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(325),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(325),
  },
  [53] = {
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
    [sym_member_access] = ACTIONS(327),
    [sym_field_access] = ACTIONS(327),
    [sym_new_class] = ACTIONS(327),
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
  [54] = {
    [sym__anything] = STATE(53),
    [sym__literals] = STATE(53),
    [sym__collection_literals] = STATE(53),
    [sym_boolean] = STATE(53),
    [sym_number] = STATE(53),
    [sym__number] = STATE(30),
    [sym_character] = STATE(53),
    [sym__character] = STATE(31),
    [sym_string] = STATE(53),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(53),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(53),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(53),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(53),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(53),
    [sym_list] = STATE(53),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(53),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(53),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(53),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(53),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(53),
    [sym_anonymous_function] = STATE(53),
    [sym_shorthand_function] = STATE(53),
    [sym_defn] = STATE(53),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(53),
    [sym_unquote] = STATE(53),
    [sym_unquote_splice] = STATE(53),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(89),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(95),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(97),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(91),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(101),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_TILDE_AT] = ACTIONS(105),
    [sym_gensym] = ACTIONS(91),
  },
  [55] = {
    [sym__anything] = STATE(100),
    [sym__literals] = STATE(100),
    [sym__collection_literals] = STATE(100),
    [sym_boolean] = STATE(100),
    [sym_number] = STATE(100),
    [sym__number] = STATE(30),
    [sym_character] = STATE(100),
    [sym__character] = STATE(31),
    [sym_string] = STATE(100),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(100),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(100),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(100),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(100),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(100),
    [sym_list] = STATE(100),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(100),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(100),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(100),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(100),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(100),
    [sym_anonymous_function] = STATE(100),
    [sym_shorthand_function] = STATE(100),
    [sym_defn] = STATE(100),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(100),
    [sym_unquote] = STATE(100),
    [sym_unquote_splice] = STATE(100),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(203),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(95),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(97),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(205),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(101),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_TILDE_AT] = ACTIONS(105),
    [sym_gensym] = ACTIONS(205),
  },
  [56] = {
    [sym__anything] = STATE(110),
    [sym__literals] = STATE(110),
    [sym__collection_literals] = STATE(110),
    [sym_boolean] = STATE(110),
    [sym_number] = STATE(110),
    [sym__number] = STATE(30),
    [sym_character] = STATE(110),
    [sym__character] = STATE(31),
    [sym_string] = STATE(110),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(110),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(110),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(110),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(110),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(110),
    [sym_list] = STATE(110),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(110),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(110),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(110),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(110),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(110),
    [sym_anonymous_function] = STATE(110),
    [sym_shorthand_function] = STATE(110),
    [sym_defn] = STATE(110),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(110),
    [sym_unquote] = STATE(110),
    [sym_unquote_splice] = STATE(110),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(225),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(95),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(97),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(227),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(101),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_TILDE_AT] = ACTIONS(105),
    [sym_gensym] = ACTIONS(227),
  },
  [57] = {
    [sym__anything] = STATE(111),
    [sym__literals] = STATE(111),
    [sym__collection_literals] = STATE(111),
    [sym_boolean] = STATE(111),
    [sym_number] = STATE(111),
    [sym__number] = STATE(30),
    [sym_character] = STATE(111),
    [sym__character] = STATE(31),
    [sym_string] = STATE(111),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(111),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(111),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(111),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(111),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(111),
    [sym_list] = STATE(111),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(111),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(111),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(111),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(111),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(111),
    [sym_anonymous_function] = STATE(111),
    [sym_shorthand_function] = STATE(111),
    [sym_defn] = STATE(111),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(111),
    [sym_unquote] = STATE(111),
    [sym_unquote_splice] = STATE(111),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(229),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(95),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(97),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(231),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(101),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_TILDE_AT] = ACTIONS(105),
    [sym_gensym] = ACTIONS(231),
  },
  [58] = {
    [sym__anything] = STATE(112),
    [sym__literals] = STATE(112),
    [sym__collection_literals] = STATE(112),
    [sym_boolean] = STATE(112),
    [sym_number] = STATE(112),
    [sym__number] = STATE(30),
    [sym_character] = STATE(112),
    [sym__character] = STATE(31),
    [sym_string] = STATE(112),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(112),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(112),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(112),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(112),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(112),
    [sym_list] = STATE(112),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(112),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(112),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(112),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(112),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(112),
    [sym_anonymous_function] = STATE(112),
    [sym_shorthand_function] = STATE(112),
    [sym_defn] = STATE(112),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(112),
    [sym_unquote] = STATE(112),
    [sym_unquote_splice] = STATE(112),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(233),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(95),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(97),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(235),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(101),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_TILDE_AT] = ACTIONS(105),
    [sym_gensym] = ACTIONS(235),
  },
  [59] = {
    [anon_sym_RPAREN] = ACTIONS(331),
  },
  [60] = {
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
    [sym_member_access] = ACTIONS(333),
    [sym_field_access] = ACTIONS(333),
    [sym_new_class] = ACTIONS(333),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(333),
    [sym_shorthand_function_arg] = ACTIONS(333),
    [anon_sym_CARET] = ACTIONS(335),
    [anon_sym_CARET_COLON] = ACTIONS(333),
    [anon_sym_CARET_DQUOTE] = ACTIONS(333),
    [anon_sym_BQUOTE] = ACTIONS(333),
    [anon_sym_TILDE] = ACTIONS(335),
    [anon_sym_TILDE_AT] = ACTIONS(333),
    [sym_gensym] = ACTIONS(333),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(337),
    [sym_nil] = ACTIONS(339),
    [sym_true] = ACTIONS(339),
    [sym_false] = ACTIONS(339),
    [sym_number_long] = ACTIONS(339),
    [sym_number_double] = ACTIONS(337),
    [anon_sym_BSLASH] = ACTIONS(337),
    [anon_sym_DQUOTE] = ACTIONS(337),
    [anon_sym_POUND_DQUOTE] = ACTIONS(337),
    [anon_sym_SQUOTE] = ACTIONS(337),
    [anon_sym_LPARENquote] = ACTIONS(337),
    [anon_sym_RPAREN] = ACTIONS(337),
    [anon_sym_COLON] = ACTIONS(339),
    [anon_sym_COLON_COLON] = ACTIONS(337),
    [anon_sym_SLASH] = ACTIONS(341),
    [anon_sym_DASH_GT] = ACTIONS(339),
    [anon_sym_DASH_GT_GT] = ACTIONS(337),
    [anon_sym_as_DASH_GT] = ACTIONS(337),
    [anon_sym_some_DASH_GT] = ACTIONS(339),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(337),
    [anon_sym_cond_DASH_GT] = ACTIONS(339),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(337),
    [sym__symbol_chars] = ACTIONS(339),
    [sym_member_access] = ACTIONS(337),
    [sym_field_access] = ACTIONS(337),
    [sym_new_class] = ACTIONS(337),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(337),
    [sym_shorthand_function_arg] = ACTIONS(337),
    [anon_sym_CARET] = ACTIONS(339),
    [anon_sym_CARET_COLON] = ACTIONS(337),
    [anon_sym_CARET_DQUOTE] = ACTIONS(337),
    [anon_sym_BQUOTE] = ACTIONS(337),
    [anon_sym_TILDE] = ACTIONS(339),
    [anon_sym_TILDE_AT] = ACTIONS(337),
    [sym_gensym] = ACTIONS(337),
  },
  [62] = {
    [sym__symbol_chars] = ACTIONS(343),
  },
  [63] = {
    [sym__anything] = STATE(53),
    [sym__literals] = STATE(53),
    [sym__collection_literals] = STATE(53),
    [sym_boolean] = STATE(53),
    [sym_number] = STATE(53),
    [sym__number] = STATE(30),
    [sym_character] = STATE(53),
    [sym__character] = STATE(31),
    [sym_string] = STATE(53),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(53),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(53),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(53),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(53),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(53),
    [sym_list] = STATE(53),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(53),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(53),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(53),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(53),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(53),
    [sym_anonymous_function] = STATE(53),
    [sym_shorthand_function] = STATE(53),
    [sym_defn] = STATE(53),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(53),
    [sym_unquote] = STATE(53),
    [sym_unquote_splice] = STATE(53),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(89),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(127),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(131),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(91),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_TILDE_AT] = ACTIONS(145),
    [sym_gensym] = ACTIONS(91),
  },
  [64] = {
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
    [sym_member_access] = ACTIONS(345),
    [sym_field_access] = ACTIONS(345),
    [sym_new_class] = ACTIONS(345),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(345),
    [sym_shorthand_function_arg] = ACTIONS(345),
    [anon_sym_CARET] = ACTIONS(347),
    [anon_sym_CARET_COLON] = ACTIONS(345),
    [anon_sym_CARET_DQUOTE] = ACTIONS(345),
    [anon_sym_BQUOTE] = ACTIONS(345),
    [anon_sym_TILDE] = ACTIONS(347),
    [anon_sym_TILDE_AT] = ACTIONS(345),
    [sym_gensym] = ACTIONS(345),
  },
  [65] = {
    [sym__anything] = STATE(100),
    [sym__literals] = STATE(100),
    [sym__collection_literals] = STATE(100),
    [sym_boolean] = STATE(100),
    [sym_number] = STATE(100),
    [sym__number] = STATE(30),
    [sym_character] = STATE(100),
    [sym__character] = STATE(31),
    [sym_string] = STATE(100),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(100),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(100),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(100),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(100),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(100),
    [sym_list] = STATE(100),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(100),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(100),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(100),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(100),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(100),
    [sym_anonymous_function] = STATE(100),
    [sym_shorthand_function] = STATE(100),
    [sym_defn] = STATE(100),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(100),
    [sym_unquote] = STATE(100),
    [sym_unquote_splice] = STATE(100),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(203),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(127),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(131),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(205),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_TILDE_AT] = ACTIONS(145),
    [sym_gensym] = ACTIONS(205),
  },
  [66] = {
    [sym__anything] = STATE(128),
    [sym__literals] = STATE(128),
    [sym__collection_literals] = STATE(128),
    [sym_boolean] = STATE(128),
    [sym_number] = STATE(128),
    [sym__number] = STATE(30),
    [sym_character] = STATE(128),
    [sym__character] = STATE(31),
    [sym_string] = STATE(128),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(128),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(128),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(128),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(128),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(128),
    [sym_list] = STATE(128),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(128),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(128),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(128),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(128),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(128),
    [sym_anonymous_function] = STATE(128),
    [sym_shorthand_function] = STATE(128),
    [sym_defn] = STATE(128),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(128),
    [sym_unquote] = STATE(128),
    [sym_unquote_splice] = STATE(128),
    [aux_sym_program_repeat1] = STATE(128),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(349),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(127),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(351),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(131),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(353),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_TILDE_AT] = ACTIONS(145),
    [sym_gensym] = ACTIONS(353),
  },
  [67] = {
    [sym_symbol] = STATE(132),
    [sym__symbol] = STATE(133),
    [sym_threading_macro] = STATE(133),
    [sym_qualified_symbol] = STATE(133),
    [sym_vector] = STATE(134),
    [sym__vector] = STATE(38),
    [sym__after_the_fn_name] = STATE(135),
    [sym_function_name] = STATE(136),
    [sym__single_arity_fn] = STATE(135),
    [sym__multi_arity_fn] = STATE(135),
    [sym_params] = STATE(137),
    [aux_sym__multi_arity_fn_repeat1] = STATE(138),
    [anon_sym_DASH_GT] = ACTIONS(355),
    [anon_sym_DASH_GT_GT] = ACTIONS(357),
    [anon_sym_as_DASH_GT] = ACTIONS(357),
    [anon_sym_some_DASH_GT] = ACTIONS(355),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(357),
    [anon_sym_cond_DASH_GT] = ACTIONS(355),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(357),
    [sym__symbol_chars] = ACTIONS(359),
    [anon_sym_LPAREN] = ACTIONS(361),
    [anon_sym_LBRACK] = ACTIONS(39),
  },
  [68] = {
    [sym_symbol] = STATE(132),
    [sym__symbol] = STATE(133),
    [sym_threading_macro] = STATE(133),
    [sym_qualified_symbol] = STATE(133),
    [sym_function_name] = STATE(139),
    [sym_metadata] = STATE(140),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(141),
    [aux_sym_metadata_repeat1] = STATE(141),
    [anon_sym_DASH_GT] = ACTIONS(355),
    [anon_sym_DASH_GT_GT] = ACTIONS(357),
    [anon_sym_as_DASH_GT] = ACTIONS(357),
    [anon_sym_some_DASH_GT] = ACTIONS(355),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(357),
    [anon_sym_cond_DASH_GT] = ACTIONS(355),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(357),
    [sym__symbol_chars] = ACTIONS(359),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
  },
  [69] = {
    [sym__anything] = STATE(110),
    [sym__literals] = STATE(110),
    [sym__collection_literals] = STATE(110),
    [sym_boolean] = STATE(110),
    [sym_number] = STATE(110),
    [sym__number] = STATE(30),
    [sym_character] = STATE(110),
    [sym__character] = STATE(31),
    [sym_string] = STATE(110),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(110),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(110),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(110),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(110),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(110),
    [sym_list] = STATE(110),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(110),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(110),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(110),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(110),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(110),
    [sym_anonymous_function] = STATE(110),
    [sym_shorthand_function] = STATE(110),
    [sym_defn] = STATE(110),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(110),
    [sym_unquote] = STATE(110),
    [sym_unquote_splice] = STATE(110),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(225),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(127),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(131),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(227),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_TILDE_AT] = ACTIONS(145),
    [sym_gensym] = ACTIONS(227),
  },
  [70] = {
    [sym__anything] = STATE(111),
    [sym__literals] = STATE(111),
    [sym__collection_literals] = STATE(111),
    [sym_boolean] = STATE(111),
    [sym_number] = STATE(111),
    [sym__number] = STATE(30),
    [sym_character] = STATE(111),
    [sym__character] = STATE(31),
    [sym_string] = STATE(111),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(111),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(111),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(111),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(111),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(111),
    [sym_list] = STATE(111),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(111),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(111),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(111),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(111),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(111),
    [sym_anonymous_function] = STATE(111),
    [sym_shorthand_function] = STATE(111),
    [sym_defn] = STATE(111),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(111),
    [sym_unquote] = STATE(111),
    [sym_unquote_splice] = STATE(111),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(229),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(127),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(131),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(231),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_TILDE_AT] = ACTIONS(145),
    [sym_gensym] = ACTIONS(231),
  },
  [71] = {
    [sym__anything] = STATE(112),
    [sym__literals] = STATE(112),
    [sym__collection_literals] = STATE(112),
    [sym_boolean] = STATE(112),
    [sym_number] = STATE(112),
    [sym__number] = STATE(30),
    [sym_character] = STATE(112),
    [sym__character] = STATE(31),
    [sym_string] = STATE(112),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(112),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(112),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(112),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(112),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(112),
    [sym_list] = STATE(112),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(112),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(112),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(112),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(112),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(112),
    [sym_anonymous_function] = STATE(112),
    [sym_shorthand_function] = STATE(112),
    [sym_defn] = STATE(112),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(112),
    [sym_unquote] = STATE(112),
    [sym_unquote_splice] = STATE(112),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(233),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(127),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(131),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(235),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_TILDE_AT] = ACTIONS(145),
    [sym_gensym] = ACTIONS(235),
  },
  [72] = {
    [sym__anything] = STATE(143),
    [sym__literals] = STATE(143),
    [sym__collection_literals] = STATE(143),
    [sym_boolean] = STATE(143),
    [sym_number] = STATE(143),
    [sym__number] = STATE(30),
    [sym_character] = STATE(143),
    [sym__character] = STATE(31),
    [sym_string] = STATE(143),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(143),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(143),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(143),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(143),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(143),
    [sym_list] = STATE(143),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(143),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(143),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(143),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(143),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(143),
    [sym_anonymous_function] = STATE(143),
    [sym_shorthand_function] = STATE(143),
    [sym_defn] = STATE(143),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(143),
    [sym_unquote] = STATE(143),
    [sym_unquote_splice] = STATE(143),
    [aux_sym_program_repeat1] = STATE(143),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(363),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(127),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(365),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(131),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(367),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_TILDE_AT] = ACTIONS(145),
    [sym_gensym] = ACTIONS(367),
  },
  [73] = {
    [sym__anything] = STATE(53),
    [sym__literals] = STATE(53),
    [sym__collection_literals] = STATE(53),
    [sym_boolean] = STATE(53),
    [sym_number] = STATE(53),
    [sym__number] = STATE(30),
    [sym_character] = STATE(53),
    [sym__character] = STATE(31),
    [sym_string] = STATE(53),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(53),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(53),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(53),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(53),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(53),
    [sym_list] = STATE(53),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(53),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(53),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(53),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(53),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(53),
    [sym_anonymous_function] = STATE(53),
    [sym_shorthand_function] = STATE(53),
    [sym_defn] = STATE(53),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(53),
    [sym_unquote] = STATE(53),
    [sym_unquote_splice] = STATE(53),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(89),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(149),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(153),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(91),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(157),
    [anon_sym_TILDE] = ACTIONS(159),
    [anon_sym_TILDE_AT] = ACTIONS(161),
    [sym_gensym] = ACTIONS(91),
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
    [sym_member_access] = ACTIONS(369),
    [sym_field_access] = ACTIONS(369),
    [sym_new_class] = ACTIONS(369),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(369),
    [sym_shorthand_function_arg] = ACTIONS(369),
    [anon_sym_CARET] = ACTIONS(371),
    [anon_sym_CARET_COLON] = ACTIONS(369),
    [anon_sym_CARET_DQUOTE] = ACTIONS(369),
    [anon_sym_BQUOTE] = ACTIONS(369),
    [anon_sym_TILDE] = ACTIONS(371),
    [anon_sym_TILDE_AT] = ACTIONS(369),
    [sym_gensym] = ACTIONS(369),
  },
  [75] = {
    [sym__anything] = STATE(100),
    [sym__literals] = STATE(100),
    [sym__collection_literals] = STATE(100),
    [sym_boolean] = STATE(100),
    [sym_number] = STATE(100),
    [sym__number] = STATE(30),
    [sym_character] = STATE(100),
    [sym__character] = STATE(31),
    [sym_string] = STATE(100),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(100),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(100),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(100),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(100),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(100),
    [sym_list] = STATE(100),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(100),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(100),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(100),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(100),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(100),
    [sym_anonymous_function] = STATE(100),
    [sym_shorthand_function] = STATE(100),
    [sym_defn] = STATE(100),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(100),
    [sym_unquote] = STATE(100),
    [sym_unquote_splice] = STATE(100),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(203),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(149),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(153),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(205),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(157),
    [anon_sym_TILDE] = ACTIONS(159),
    [anon_sym_TILDE_AT] = ACTIONS(161),
    [sym_gensym] = ACTIONS(205),
  },
  [76] = {
    [sym__anything] = STATE(110),
    [sym__literals] = STATE(110),
    [sym__collection_literals] = STATE(110),
    [sym_boolean] = STATE(110),
    [sym_number] = STATE(110),
    [sym__number] = STATE(30),
    [sym_character] = STATE(110),
    [sym__character] = STATE(31),
    [sym_string] = STATE(110),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(110),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(110),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(110),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(110),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(110),
    [sym_list] = STATE(110),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(110),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(110),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(110),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(110),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(110),
    [sym_anonymous_function] = STATE(110),
    [sym_shorthand_function] = STATE(110),
    [sym_defn] = STATE(110),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(110),
    [sym_unquote] = STATE(110),
    [sym_unquote_splice] = STATE(110),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(225),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(149),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(153),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(227),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(157),
    [anon_sym_TILDE] = ACTIONS(159),
    [anon_sym_TILDE_AT] = ACTIONS(161),
    [sym_gensym] = ACTIONS(227),
  },
  [77] = {
    [sym__anything] = STATE(111),
    [sym__literals] = STATE(111),
    [sym__collection_literals] = STATE(111),
    [sym_boolean] = STATE(111),
    [sym_number] = STATE(111),
    [sym__number] = STATE(30),
    [sym_character] = STATE(111),
    [sym__character] = STATE(31),
    [sym_string] = STATE(111),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(111),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(111),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(111),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(111),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(111),
    [sym_list] = STATE(111),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(111),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(111),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(111),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(111),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(111),
    [sym_anonymous_function] = STATE(111),
    [sym_shorthand_function] = STATE(111),
    [sym_defn] = STATE(111),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(111),
    [sym_unquote] = STATE(111),
    [sym_unquote_splice] = STATE(111),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(229),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(149),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(153),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(231),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(157),
    [anon_sym_TILDE] = ACTIONS(159),
    [anon_sym_TILDE_AT] = ACTIONS(161),
    [sym_gensym] = ACTIONS(231),
  },
  [78] = {
    [sym__anything] = STATE(112),
    [sym__literals] = STATE(112),
    [sym__collection_literals] = STATE(112),
    [sym_boolean] = STATE(112),
    [sym_number] = STATE(112),
    [sym__number] = STATE(30),
    [sym_character] = STATE(112),
    [sym__character] = STATE(31),
    [sym_string] = STATE(112),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(112),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(112),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(112),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(112),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(112),
    [sym_list] = STATE(112),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(112),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(112),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(112),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(112),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(112),
    [sym_anonymous_function] = STATE(112),
    [sym_shorthand_function] = STATE(112),
    [sym_defn] = STATE(112),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(112),
    [sym_unquote] = STATE(112),
    [sym_unquote_splice] = STATE(112),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(233),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(149),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(153),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(235),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(157),
    [anon_sym_TILDE] = ACTIONS(159),
    [anon_sym_TILDE_AT] = ACTIONS(161),
    [sym_gensym] = ACTIONS(235),
  },
  [79] = {
    [sym__anything] = STATE(145),
    [sym__literals] = STATE(145),
    [sym__collection_literals] = STATE(145),
    [sym_boolean] = STATE(145),
    [sym_number] = STATE(145),
    [sym__number] = STATE(30),
    [sym_character] = STATE(145),
    [sym__character] = STATE(31),
    [sym_string] = STATE(145),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(145),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(145),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(145),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(145),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(145),
    [sym_list] = STATE(145),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(145),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(145),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(145),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(145),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(145),
    [sym_anonymous_function] = STATE(145),
    [sym_shorthand_function] = STATE(145),
    [sym_defn] = STATE(145),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(145),
    [sym_unquote] = STATE(145),
    [sym_unquote_splice] = STATE(145),
    [aux_sym_program_repeat1] = STATE(145),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(373),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(149),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_RBRACK] = ACTIONS(375),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(153),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(377),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(157),
    [anon_sym_TILDE] = ACTIONS(159),
    [anon_sym_TILDE_AT] = ACTIONS(161),
    [sym_gensym] = ACTIONS(377),
  },
  [80] = {
    [sym__anything] = STATE(53),
    [sym__literals] = STATE(53),
    [sym__collection_literals] = STATE(53),
    [sym_boolean] = STATE(53),
    [sym_number] = STATE(53),
    [sym__number] = STATE(30),
    [sym_character] = STATE(53),
    [sym__character] = STATE(31),
    [sym_string] = STATE(53),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(53),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(53),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(53),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(53),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(53),
    [sym_list] = STATE(53),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(53),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(53),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(53),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(53),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(53),
    [sym_anonymous_function] = STATE(53),
    [sym_shorthand_function] = STATE(53),
    [sym_defn] = STATE(53),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(53),
    [sym_unquote] = STATE(53),
    [sym_unquote_splice] = STATE(53),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(89),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(165),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(169),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(91),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(175),
    [anon_sym_TILDE_AT] = ACTIONS(177),
    [sym_gensym] = ACTIONS(91),
  },
  [81] = {
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
    [sym_member_access] = ACTIONS(379),
    [sym_field_access] = ACTIONS(379),
    [sym_new_class] = ACTIONS(379),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(379),
    [sym_shorthand_function_arg] = ACTIONS(379),
    [anon_sym_CARET] = ACTIONS(381),
    [anon_sym_CARET_COLON] = ACTIONS(379),
    [anon_sym_CARET_DQUOTE] = ACTIONS(379),
    [anon_sym_BQUOTE] = ACTIONS(379),
    [anon_sym_TILDE] = ACTIONS(381),
    [anon_sym_TILDE_AT] = ACTIONS(379),
    [sym_gensym] = ACTIONS(379),
  },
  [82] = {
    [sym__anything] = STATE(100),
    [sym__literals] = STATE(100),
    [sym__collection_literals] = STATE(100),
    [sym_boolean] = STATE(100),
    [sym_number] = STATE(100),
    [sym__number] = STATE(30),
    [sym_character] = STATE(100),
    [sym__character] = STATE(31),
    [sym_string] = STATE(100),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(100),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(100),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(100),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(100),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(100),
    [sym_list] = STATE(100),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(100),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(100),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(100),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(100),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(100),
    [sym_anonymous_function] = STATE(100),
    [sym_shorthand_function] = STATE(100),
    [sym_defn] = STATE(100),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(100),
    [sym_unquote] = STATE(100),
    [sym_unquote_splice] = STATE(100),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(203),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(165),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(169),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(205),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(175),
    [anon_sym_TILDE_AT] = ACTIONS(177),
    [sym_gensym] = ACTIONS(205),
  },
  [83] = {
    [sym__anything] = STATE(110),
    [sym__literals] = STATE(110),
    [sym__collection_literals] = STATE(110),
    [sym_boolean] = STATE(110),
    [sym_number] = STATE(110),
    [sym__number] = STATE(30),
    [sym_character] = STATE(110),
    [sym__character] = STATE(31),
    [sym_string] = STATE(110),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(110),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(110),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(110),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(110),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(110),
    [sym_list] = STATE(110),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(110),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(110),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(110),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(110),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(110),
    [sym_anonymous_function] = STATE(110),
    [sym_shorthand_function] = STATE(110),
    [sym_defn] = STATE(110),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(110),
    [sym_unquote] = STATE(110),
    [sym_unquote_splice] = STATE(110),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(225),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(165),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(169),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(227),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(175),
    [anon_sym_TILDE_AT] = ACTIONS(177),
    [sym_gensym] = ACTIONS(227),
  },
  [84] = {
    [sym__anything] = STATE(111),
    [sym__literals] = STATE(111),
    [sym__collection_literals] = STATE(111),
    [sym_boolean] = STATE(111),
    [sym_number] = STATE(111),
    [sym__number] = STATE(30),
    [sym_character] = STATE(111),
    [sym__character] = STATE(31),
    [sym_string] = STATE(111),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(111),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(111),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(111),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(111),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(111),
    [sym_list] = STATE(111),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(111),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(111),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(111),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(111),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(111),
    [sym_anonymous_function] = STATE(111),
    [sym_shorthand_function] = STATE(111),
    [sym_defn] = STATE(111),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(111),
    [sym_unquote] = STATE(111),
    [sym_unquote_splice] = STATE(111),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(229),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(165),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(169),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(231),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(175),
    [anon_sym_TILDE_AT] = ACTIONS(177),
    [sym_gensym] = ACTIONS(231),
  },
  [85] = {
    [sym__anything] = STATE(112),
    [sym__literals] = STATE(112),
    [sym__collection_literals] = STATE(112),
    [sym_boolean] = STATE(112),
    [sym_number] = STATE(112),
    [sym__number] = STATE(30),
    [sym_character] = STATE(112),
    [sym__character] = STATE(31),
    [sym_string] = STATE(112),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(112),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(112),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(112),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(112),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(112),
    [sym_list] = STATE(112),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(112),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(112),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(112),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(112),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(112),
    [sym_anonymous_function] = STATE(112),
    [sym_shorthand_function] = STATE(112),
    [sym_defn] = STATE(112),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(112),
    [sym_unquote] = STATE(112),
    [sym_unquote_splice] = STATE(112),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(233),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(165),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(169),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(235),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(175),
    [anon_sym_TILDE_AT] = ACTIONS(177),
    [sym_gensym] = ACTIONS(235),
  },
  [86] = {
    [sym__anything] = STATE(146),
    [sym__literals] = STATE(146),
    [sym__collection_literals] = STATE(146),
    [sym_boolean] = STATE(146),
    [sym_number] = STATE(146),
    [sym__number] = STATE(30),
    [sym_character] = STATE(146),
    [sym__character] = STATE(31),
    [sym_string] = STATE(146),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(146),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(146),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(146),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(146),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(146),
    [sym_list] = STATE(146),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(146),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(146),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym__hash_map_value] = STATE(146),
    [sym_set] = STATE(146),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(146),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(146),
    [sym_anonymous_function] = STATE(146),
    [sym_shorthand_function] = STATE(146),
    [sym_defn] = STATE(146),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(146),
    [sym_unquote] = STATE(146),
    [sym_unquote_splice] = STATE(146),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(383),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(185),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(189),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(385),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(193),
    [anon_sym_TILDE] = ACTIONS(195),
    [anon_sym_TILDE_AT] = ACTIONS(197),
    [sym_gensym] = ACTIONS(385),
  },
  [87] = {
    [sym__anything] = STATE(86),
    [sym__literals] = STATE(86),
    [sym__collection_literals] = STATE(86),
    [sym_boolean] = STATE(86),
    [sym_number] = STATE(86),
    [sym__number] = STATE(30),
    [sym_character] = STATE(86),
    [sym__character] = STATE(31),
    [sym_string] = STATE(86),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(86),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(86),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(86),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(86),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(86),
    [sym_list] = STATE(86),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(86),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(86),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym__hash_map_kv_pair] = STATE(148),
    [sym__hash_map_key] = STATE(86),
    [sym_set] = STATE(86),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(86),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(86),
    [sym_anonymous_function] = STATE(86),
    [sym_shorthand_function] = STATE(86),
    [sym_defn] = STATE(86),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(86),
    [sym_unquote] = STATE(86),
    [sym_unquote_splice] = STATE(86),
    [aux_sym__hash_map_repeat1] = STATE(148),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(163),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(165),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(387),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(169),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(171),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(175),
    [anon_sym_TILDE_AT] = ACTIONS(177),
    [sym_gensym] = ACTIONS(171),
  },
  [88] = {
    [ts_builtin_sym_end] = ACTIONS(389),
    [sym_nil] = ACTIONS(391),
    [sym_true] = ACTIONS(391),
    [sym_false] = ACTIONS(391),
    [sym_number_long] = ACTIONS(391),
    [sym_number_double] = ACTIONS(389),
    [anon_sym_BSLASH] = ACTIONS(389),
    [anon_sym_DQUOTE] = ACTIONS(389),
    [anon_sym_POUND_DQUOTE] = ACTIONS(389),
    [anon_sym_SQUOTE] = ACTIONS(389),
    [anon_sym_LPARENquote] = ACTIONS(389),
    [anon_sym_RPAREN] = ACTIONS(389),
    [anon_sym_COLON] = ACTIONS(391),
    [anon_sym_COLON_COLON] = ACTIONS(389),
    [anon_sym_DASH_GT] = ACTIONS(391),
    [anon_sym_DASH_GT_GT] = ACTIONS(389),
    [anon_sym_as_DASH_GT] = ACTIONS(389),
    [anon_sym_some_DASH_GT] = ACTIONS(391),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(389),
    [anon_sym_cond_DASH_GT] = ACTIONS(391),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(389),
    [sym__symbol_chars] = ACTIONS(391),
    [sym_member_access] = ACTIONS(389),
    [sym_field_access] = ACTIONS(389),
    [sym_new_class] = ACTIONS(389),
    [anon_sym_LPAREN] = ACTIONS(391),
    [anon_sym_LBRACK] = ACTIONS(389),
    [anon_sym_RBRACK] = ACTIONS(389),
    [anon_sym_LBRACE] = ACTIONS(389),
    [anon_sym_RBRACE] = ACTIONS(389),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(389),
    [anon_sym_POUND] = ACTIONS(391),
    [anon_sym_POUND_LBRACE] = ACTIONS(389),
    [anon_sym_SEMI] = ACTIONS(389),
    [anon_sym_POUND_BANG] = ACTIONS(389),
    [anon_sym_POUND_] = ACTIONS(389),
    [anon_sym_POUND_LPAREN] = ACTIONS(389),
    [sym_shorthand_function_arg] = ACTIONS(389),
    [anon_sym_CARET] = ACTIONS(391),
    [anon_sym_CARET_COLON] = ACTIONS(389),
    [anon_sym_CARET_DQUOTE] = ACTIONS(389),
    [anon_sym_BQUOTE] = ACTIONS(389),
    [anon_sym_TILDE] = ACTIONS(391),
    [anon_sym_TILDE_AT] = ACTIONS(389),
    [sym_gensym] = ACTIONS(389),
  },
  [89] = {
    [sym__anything] = STATE(86),
    [sym__literals] = STATE(86),
    [sym__collection_literals] = STATE(86),
    [sym_boolean] = STATE(86),
    [sym_number] = STATE(86),
    [sym__number] = STATE(30),
    [sym_character] = STATE(86),
    [sym__character] = STATE(31),
    [sym_string] = STATE(86),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(86),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(86),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(86),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(86),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(86),
    [sym_list] = STATE(86),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(86),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(86),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym__hash_map_kv_pair] = STATE(148),
    [sym__hash_map_key] = STATE(86),
    [sym_set] = STATE(86),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(86),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(86),
    [sym_anonymous_function] = STATE(86),
    [sym_shorthand_function] = STATE(86),
    [sym_defn] = STATE(86),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(86),
    [sym_unquote] = STATE(86),
    [sym_unquote_splice] = STATE(86),
    [aux_sym__hash_map_repeat1] = STATE(148),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(163),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(165),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(393),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(169),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(171),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(175),
    [anon_sym_TILDE_AT] = ACTIONS(177),
    [sym_gensym] = ACTIONS(171),
  },
  [90] = {
    [anon_sym_LBRACE] = ACTIONS(395),
  },
  [91] = {
    [sym__anything] = STATE(53),
    [sym__literals] = STATE(53),
    [sym__collection_literals] = STATE(53),
    [sym_boolean] = STATE(53),
    [sym_number] = STATE(53),
    [sym__number] = STATE(30),
    [sym_character] = STATE(53),
    [sym__character] = STATE(31),
    [sym_string] = STATE(53),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(53),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(53),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(53),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(53),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(53),
    [sym_list] = STATE(53),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(53),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(53),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(53),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(53),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(53),
    [sym_anonymous_function] = STATE(53),
    [sym_shorthand_function] = STATE(53),
    [sym_defn] = STATE(53),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(53),
    [sym_unquote] = STATE(53),
    [sym_unquote_splice] = STATE(53),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(89),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(185),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(189),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(91),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(193),
    [anon_sym_TILDE] = ACTIONS(195),
    [anon_sym_TILDE_AT] = ACTIONS(197),
    [sym_gensym] = ACTIONS(91),
  },
  [92] = {
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
    [anon_sym_DASH_GT] = ACTIONS(399),
    [anon_sym_DASH_GT_GT] = ACTIONS(397),
    [anon_sym_as_DASH_GT] = ACTIONS(397),
    [anon_sym_some_DASH_GT] = ACTIONS(399),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(397),
    [anon_sym_cond_DASH_GT] = ACTIONS(399),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(397),
    [sym__symbol_chars] = ACTIONS(399),
    [sym_member_access] = ACTIONS(397),
    [sym_field_access] = ACTIONS(397),
    [sym_new_class] = ACTIONS(397),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(397),
    [sym_shorthand_function_arg] = ACTIONS(397),
    [anon_sym_CARET] = ACTIONS(399),
    [anon_sym_CARET_COLON] = ACTIONS(397),
    [anon_sym_CARET_DQUOTE] = ACTIONS(397),
    [anon_sym_BQUOTE] = ACTIONS(397),
    [anon_sym_TILDE] = ACTIONS(399),
    [anon_sym_TILDE_AT] = ACTIONS(397),
    [sym_gensym] = ACTIONS(397),
  },
  [93] = {
    [sym__anything] = STATE(100),
    [sym__literals] = STATE(100),
    [sym__collection_literals] = STATE(100),
    [sym_boolean] = STATE(100),
    [sym_number] = STATE(100),
    [sym__number] = STATE(30),
    [sym_character] = STATE(100),
    [sym__character] = STATE(31),
    [sym_string] = STATE(100),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(100),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(100),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(100),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(100),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(100),
    [sym_list] = STATE(100),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(100),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(100),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(100),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(100),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(100),
    [sym_anonymous_function] = STATE(100),
    [sym_shorthand_function] = STATE(100),
    [sym_defn] = STATE(100),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(100),
    [sym_unquote] = STATE(100),
    [sym_unquote_splice] = STATE(100),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(203),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(185),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(189),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(205),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(193),
    [anon_sym_TILDE] = ACTIONS(195),
    [anon_sym_TILDE_AT] = ACTIONS(197),
    [sym_gensym] = ACTIONS(205),
  },
  [94] = {
    [sym__anything] = STATE(110),
    [sym__literals] = STATE(110),
    [sym__collection_literals] = STATE(110),
    [sym_boolean] = STATE(110),
    [sym_number] = STATE(110),
    [sym__number] = STATE(30),
    [sym_character] = STATE(110),
    [sym__character] = STATE(31),
    [sym_string] = STATE(110),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(110),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(110),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(110),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(110),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(110),
    [sym_list] = STATE(110),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(110),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(110),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(110),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(110),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(110),
    [sym_anonymous_function] = STATE(110),
    [sym_shorthand_function] = STATE(110),
    [sym_defn] = STATE(110),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(110),
    [sym_unquote] = STATE(110),
    [sym_unquote_splice] = STATE(110),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(225),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(185),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(189),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(227),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(193),
    [anon_sym_TILDE] = ACTIONS(195),
    [anon_sym_TILDE_AT] = ACTIONS(197),
    [sym_gensym] = ACTIONS(227),
  },
  [95] = {
    [sym__anything] = STATE(111),
    [sym__literals] = STATE(111),
    [sym__collection_literals] = STATE(111),
    [sym_boolean] = STATE(111),
    [sym_number] = STATE(111),
    [sym__number] = STATE(30),
    [sym_character] = STATE(111),
    [sym__character] = STATE(31),
    [sym_string] = STATE(111),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(111),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(111),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(111),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(111),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(111),
    [sym_list] = STATE(111),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(111),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(111),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(111),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(111),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(111),
    [sym_anonymous_function] = STATE(111),
    [sym_shorthand_function] = STATE(111),
    [sym_defn] = STATE(111),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(111),
    [sym_unquote] = STATE(111),
    [sym_unquote_splice] = STATE(111),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(229),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(185),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(189),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(231),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(193),
    [anon_sym_TILDE] = ACTIONS(195),
    [anon_sym_TILDE_AT] = ACTIONS(197),
    [sym_gensym] = ACTIONS(231),
  },
  [96] = {
    [sym__anything] = STATE(112),
    [sym__literals] = STATE(112),
    [sym__collection_literals] = STATE(112),
    [sym_boolean] = STATE(112),
    [sym_number] = STATE(112),
    [sym__number] = STATE(30),
    [sym_character] = STATE(112),
    [sym__character] = STATE(31),
    [sym_string] = STATE(112),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(112),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(112),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(112),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(112),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(112),
    [sym_list] = STATE(112),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(112),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(112),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(112),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(112),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(112),
    [sym_anonymous_function] = STATE(112),
    [sym_shorthand_function] = STATE(112),
    [sym_defn] = STATE(112),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(112),
    [sym_unquote] = STATE(112),
    [sym_unquote_splice] = STATE(112),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(233),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(185),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(189),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(235),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(193),
    [anon_sym_TILDE] = ACTIONS(195),
    [anon_sym_TILDE_AT] = ACTIONS(197),
    [sym_gensym] = ACTIONS(235),
  },
  [97] = {
    [sym__anything] = STATE(152),
    [sym__literals] = STATE(152),
    [sym__collection_literals] = STATE(152),
    [sym_boolean] = STATE(152),
    [sym_number] = STATE(152),
    [sym__number] = STATE(30),
    [sym_character] = STATE(152),
    [sym__character] = STATE(31),
    [sym_string] = STATE(152),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(152),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(152),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(152),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(152),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(152),
    [sym_list] = STATE(152),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(152),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(152),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(152),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(152),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(152),
    [sym_anonymous_function] = STATE(152),
    [sym_shorthand_function] = STATE(152),
    [sym_defn] = STATE(152),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(152),
    [sym_unquote] = STATE(152),
    [sym_unquote_splice] = STATE(152),
    [aux_sym_program_repeat1] = STATE(152),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(401),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(185),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(403),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(189),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(405),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(193),
    [anon_sym_TILDE] = ACTIONS(195),
    [anon_sym_TILDE_AT] = ACTIONS(197),
    [sym_gensym] = ACTIONS(405),
  },
  [98] = {
    [ts_builtin_sym_end] = ACTIONS(407),
    [sym_nil] = ACTIONS(409),
    [sym_true] = ACTIONS(409),
    [sym_false] = ACTIONS(409),
    [sym_number_long] = ACTIONS(409),
    [sym_number_double] = ACTIONS(407),
    [anon_sym_BSLASH] = ACTIONS(407),
    [anon_sym_DQUOTE] = ACTIONS(407),
    [anon_sym_POUND_DQUOTE] = ACTIONS(407),
    [anon_sym_SQUOTE] = ACTIONS(407),
    [anon_sym_LPARENquote] = ACTIONS(407),
    [anon_sym_RPAREN] = ACTIONS(407),
    [anon_sym_COLON] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(407),
    [anon_sym_DASH_GT] = ACTIONS(409),
    [anon_sym_DASH_GT_GT] = ACTIONS(407),
    [anon_sym_as_DASH_GT] = ACTIONS(407),
    [anon_sym_some_DASH_GT] = ACTIONS(409),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(407),
    [anon_sym_cond_DASH_GT] = ACTIONS(409),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(407),
    [sym__symbol_chars] = ACTIONS(409),
    [sym_member_access] = ACTIONS(407),
    [sym_field_access] = ACTIONS(407),
    [sym_new_class] = ACTIONS(407),
    [anon_sym_LPAREN] = ACTIONS(409),
    [anon_sym_LBRACK] = ACTIONS(407),
    [anon_sym_RBRACK] = ACTIONS(407),
    [anon_sym_LBRACE] = ACTIONS(407),
    [anon_sym_RBRACE] = ACTIONS(407),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(407),
    [anon_sym_POUND] = ACTIONS(409),
    [anon_sym_POUND_LBRACE] = ACTIONS(407),
    [anon_sym_SEMI] = ACTIONS(407),
    [anon_sym_POUND_BANG] = ACTIONS(407),
    [anon_sym_POUND_] = ACTIONS(407),
    [anon_sym_POUND_LPAREN] = ACTIONS(407),
    [sym_shorthand_function_arg] = ACTIONS(407),
    [anon_sym_CARET] = ACTIONS(409),
    [anon_sym_CARET_COLON] = ACTIONS(407),
    [anon_sym_CARET_DQUOTE] = ACTIONS(407),
    [anon_sym_BQUOTE] = ACTIONS(407),
    [anon_sym_TILDE] = ACTIONS(409),
    [anon_sym_TILDE_AT] = ACTIONS(407),
    [sym_gensym] = ACTIONS(407),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(411),
    [sym_nil] = ACTIONS(413),
    [sym_true] = ACTIONS(413),
    [sym_false] = ACTIONS(413),
    [sym_number_long] = ACTIONS(413),
    [sym_number_double] = ACTIONS(411),
    [anon_sym_BSLASH] = ACTIONS(411),
    [anon_sym_DQUOTE] = ACTIONS(411),
    [anon_sym_POUND_DQUOTE] = ACTIONS(411),
    [anon_sym_SQUOTE] = ACTIONS(411),
    [anon_sym_LPARENquote] = ACTIONS(411),
    [anon_sym_RPAREN] = ACTIONS(411),
    [anon_sym_COLON] = ACTIONS(413),
    [anon_sym_COLON_COLON] = ACTIONS(411),
    [anon_sym_DASH_GT] = ACTIONS(413),
    [anon_sym_DASH_GT_GT] = ACTIONS(411),
    [anon_sym_as_DASH_GT] = ACTIONS(411),
    [anon_sym_some_DASH_GT] = ACTIONS(413),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(411),
    [anon_sym_cond_DASH_GT] = ACTIONS(413),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(411),
    [sym__symbol_chars] = ACTIONS(413),
    [sym_member_access] = ACTIONS(411),
    [sym_field_access] = ACTIONS(411),
    [sym_new_class] = ACTIONS(411),
    [anon_sym_LPAREN] = ACTIONS(413),
    [anon_sym_LBRACK] = ACTIONS(411),
    [anon_sym_RBRACK] = ACTIONS(411),
    [anon_sym_LBRACE] = ACTIONS(411),
    [anon_sym_RBRACE] = ACTIONS(411),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(411),
    [anon_sym_POUND] = ACTIONS(413),
    [anon_sym_POUND_LBRACE] = ACTIONS(411),
    [anon_sym_SEMI] = ACTIONS(411),
    [anon_sym_POUND_BANG] = ACTIONS(411),
    [anon_sym_POUND_] = ACTIONS(411),
    [anon_sym_POUND_LPAREN] = ACTIONS(411),
    [sym_shorthand_function_arg] = ACTIONS(411),
    [anon_sym_CARET] = ACTIONS(413),
    [anon_sym_CARET_COLON] = ACTIONS(411),
    [anon_sym_CARET_DQUOTE] = ACTIONS(411),
    [anon_sym_BQUOTE] = ACTIONS(411),
    [anon_sym_TILDE] = ACTIONS(413),
    [anon_sym_TILDE_AT] = ACTIONS(411),
    [sym_gensym] = ACTIONS(411),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(415),
    [sym_nil] = ACTIONS(417),
    [sym_true] = ACTIONS(417),
    [sym_false] = ACTIONS(417),
    [sym_number_long] = ACTIONS(417),
    [sym_number_double] = ACTIONS(415),
    [anon_sym_BSLASH] = ACTIONS(415),
    [anon_sym_DQUOTE] = ACTIONS(415),
    [anon_sym_POUND_DQUOTE] = ACTIONS(415),
    [anon_sym_SQUOTE] = ACTIONS(415),
    [anon_sym_LPARENquote] = ACTIONS(415),
    [anon_sym_RPAREN] = ACTIONS(415),
    [anon_sym_COLON] = ACTIONS(417),
    [anon_sym_COLON_COLON] = ACTIONS(415),
    [anon_sym_DASH_GT] = ACTIONS(417),
    [anon_sym_DASH_GT_GT] = ACTIONS(415),
    [anon_sym_as_DASH_GT] = ACTIONS(415),
    [anon_sym_some_DASH_GT] = ACTIONS(417),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(415),
    [anon_sym_cond_DASH_GT] = ACTIONS(417),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(415),
    [sym__symbol_chars] = ACTIONS(417),
    [sym_member_access] = ACTIONS(415),
    [sym_field_access] = ACTIONS(415),
    [sym_new_class] = ACTIONS(415),
    [anon_sym_LPAREN] = ACTIONS(417),
    [anon_sym_LBRACK] = ACTIONS(415),
    [anon_sym_RBRACK] = ACTIONS(415),
    [anon_sym_LBRACE] = ACTIONS(415),
    [anon_sym_RBRACE] = ACTIONS(415),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(415),
    [anon_sym_POUND] = ACTIONS(417),
    [anon_sym_POUND_LBRACE] = ACTIONS(415),
    [anon_sym_SEMI] = ACTIONS(415),
    [anon_sym_POUND_BANG] = ACTIONS(415),
    [anon_sym_POUND_] = ACTIONS(415),
    [anon_sym_POUND_LPAREN] = ACTIONS(415),
    [sym_shorthand_function_arg] = ACTIONS(415),
    [anon_sym_CARET] = ACTIONS(417),
    [anon_sym_CARET_COLON] = ACTIONS(415),
    [anon_sym_CARET_DQUOTE] = ACTIONS(415),
    [anon_sym_BQUOTE] = ACTIONS(415),
    [anon_sym_TILDE] = ACTIONS(417),
    [anon_sym_TILDE_AT] = ACTIONS(415),
    [sym_gensym] = ACTIONS(415),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(419),
    [sym_nil] = ACTIONS(421),
    [sym_true] = ACTIONS(421),
    [sym_false] = ACTIONS(421),
    [sym_number_long] = ACTIONS(421),
    [sym_number_double] = ACTIONS(419),
    [anon_sym_BSLASH] = ACTIONS(419),
    [anon_sym_DQUOTE] = ACTIONS(419),
    [anon_sym_POUND_DQUOTE] = ACTIONS(419),
    [anon_sym_SQUOTE] = ACTIONS(419),
    [anon_sym_LPARENquote] = ACTIONS(419),
    [anon_sym_RPAREN] = ACTIONS(419),
    [anon_sym_COLON] = ACTIONS(421),
    [anon_sym_COLON_COLON] = ACTIONS(419),
    [anon_sym_DASH_GT] = ACTIONS(421),
    [anon_sym_DASH_GT_GT] = ACTIONS(419),
    [anon_sym_as_DASH_GT] = ACTIONS(419),
    [anon_sym_some_DASH_GT] = ACTIONS(421),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(419),
    [anon_sym_cond_DASH_GT] = ACTIONS(421),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(419),
    [sym__symbol_chars] = ACTIONS(421),
    [sym_member_access] = ACTIONS(419),
    [sym_field_access] = ACTIONS(419),
    [sym_new_class] = ACTIONS(419),
    [anon_sym_LPAREN] = ACTIONS(421),
    [anon_sym_LBRACK] = ACTIONS(419),
    [anon_sym_RBRACK] = ACTIONS(419),
    [anon_sym_LBRACE] = ACTIONS(419),
    [anon_sym_RBRACE] = ACTIONS(419),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(419),
    [anon_sym_POUND] = ACTIONS(421),
    [anon_sym_POUND_LBRACE] = ACTIONS(419),
    [anon_sym_SEMI] = ACTIONS(419),
    [anon_sym_POUND_BANG] = ACTIONS(419),
    [anon_sym_POUND_] = ACTIONS(419),
    [anon_sym_POUND_LPAREN] = ACTIONS(419),
    [sym_shorthand_function_arg] = ACTIONS(419),
    [anon_sym_CARET] = ACTIONS(421),
    [anon_sym_CARET_COLON] = ACTIONS(419),
    [anon_sym_CARET_DQUOTE] = ACTIONS(419),
    [anon_sym_BQUOTE] = ACTIONS(419),
    [anon_sym_TILDE] = ACTIONS(421),
    [anon_sym_TILDE_AT] = ACTIONS(419),
    [sym_gensym] = ACTIONS(419),
  },
  [102] = {
    [sym__anything] = STATE(143),
    [sym__literals] = STATE(143),
    [sym__collection_literals] = STATE(143),
    [sym_boolean] = STATE(143),
    [sym_number] = STATE(143),
    [sym__number] = STATE(30),
    [sym_character] = STATE(143),
    [sym__character] = STATE(31),
    [sym_string] = STATE(143),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(143),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(143),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(143),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(143),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(143),
    [sym_list] = STATE(143),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(143),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(143),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(143),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(143),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(143),
    [sym_anonymous_function] = STATE(143),
    [sym_shorthand_function] = STATE(143),
    [sym_defn] = STATE(143),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(143),
    [sym_unquote] = STATE(143),
    [sym_unquote_splice] = STATE(143),
    [aux_sym_program_repeat1] = STATE(143),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(363),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(127),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(423),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(131),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(367),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_TILDE_AT] = ACTIONS(145),
    [sym_gensym] = ACTIONS(367),
  },
  [103] = {
    [anon_sym_DASH_GT] = ACTIONS(425),
    [anon_sym_DASH_GT_GT] = ACTIONS(427),
    [anon_sym_as_DASH_GT] = ACTIONS(427),
    [anon_sym_some_DASH_GT] = ACTIONS(425),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(427),
    [anon_sym_cond_DASH_GT] = ACTIONS(425),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(427),
    [sym__symbol_chars] = ACTIONS(425),
    [anon_sym_LPAREN] = ACTIONS(427),
    [anon_sym_LBRACK] = ACTIONS(427),
    [anon_sym_LBRACE] = ACTIONS(427),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(427),
    [anon_sym_POUND] = ACTIONS(425),
    [anon_sym_POUND_LBRACE] = ACTIONS(427),
    [anon_sym_CARET] = ACTIONS(425),
    [anon_sym_CARET_COLON] = ACTIONS(427),
    [anon_sym_CARET_DQUOTE] = ACTIONS(427),
  },
  [104] = {
    [sym__anything] = STATE(86),
    [sym__literals] = STATE(86),
    [sym__collection_literals] = STATE(86),
    [sym_boolean] = STATE(86),
    [sym_number] = STATE(86),
    [sym__number] = STATE(30),
    [sym_character] = STATE(86),
    [sym__character] = STATE(31),
    [sym_string] = STATE(86),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(86),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(86),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(86),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(86),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(86),
    [sym_list] = STATE(86),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(86),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(86),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym__hash_map_kv_pair] = STATE(155),
    [sym__hash_map_key] = STATE(86),
    [sym_set] = STATE(86),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(86),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(86),
    [sym_anonymous_function] = STATE(86),
    [sym_shorthand_function] = STATE(86),
    [sym_defn] = STATE(86),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(86),
    [sym_unquote] = STATE(86),
    [sym_unquote_splice] = STATE(86),
    [aux_sym__hash_map_repeat1] = STATE(155),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(163),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(165),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(429),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(169),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(171),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(175),
    [anon_sym_TILDE_AT] = ACTIONS(177),
    [sym_gensym] = ACTIONS(171),
  },
  [105] = {
    [sym__anything] = STATE(86),
    [sym__literals] = STATE(86),
    [sym__collection_literals] = STATE(86),
    [sym_boolean] = STATE(86),
    [sym_number] = STATE(86),
    [sym__number] = STATE(30),
    [sym_character] = STATE(86),
    [sym__character] = STATE(31),
    [sym_string] = STATE(86),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(86),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(86),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(86),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(86),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(86),
    [sym_list] = STATE(86),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(86),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(86),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym__hash_map_kv_pair] = STATE(157),
    [sym__hash_map_key] = STATE(86),
    [sym_set] = STATE(86),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(86),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(86),
    [sym_anonymous_function] = STATE(86),
    [sym_shorthand_function] = STATE(86),
    [sym_defn] = STATE(86),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(86),
    [sym_unquote] = STATE(86),
    [sym_unquote_splice] = STATE(86),
    [aux_sym__hash_map_repeat1] = STATE(157),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(163),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(165),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(431),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(169),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(171),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(175),
    [anon_sym_TILDE_AT] = ACTIONS(177),
    [sym_gensym] = ACTIONS(171),
  },
  [106] = {
    [sym__symbol_chars] = ACTIONS(433),
  },
  [107] = {
    [anon_sym_DASH_GT] = ACTIONS(435),
    [anon_sym_DASH_GT_GT] = ACTIONS(437),
    [anon_sym_as_DASH_GT] = ACTIONS(437),
    [anon_sym_some_DASH_GT] = ACTIONS(435),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(437),
    [anon_sym_cond_DASH_GT] = ACTIONS(435),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(437),
    [sym__symbol_chars] = ACTIONS(435),
    [anon_sym_LPAREN] = ACTIONS(437),
    [anon_sym_LBRACK] = ACTIONS(437),
    [anon_sym_LBRACE] = ACTIONS(437),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(437),
    [anon_sym_POUND] = ACTIONS(435),
    [anon_sym_POUND_LBRACE] = ACTIONS(437),
  },
  [108] = {
    [anon_sym_DASH_GT] = ACTIONS(277),
    [anon_sym_DASH_GT_GT] = ACTIONS(275),
    [anon_sym_as_DASH_GT] = ACTIONS(275),
    [anon_sym_some_DASH_GT] = ACTIONS(277),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(275),
    [anon_sym_cond_DASH_GT] = ACTIONS(277),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(275),
    [sym__symbol_chars] = ACTIONS(277),
    [anon_sym_LPAREN] = ACTIONS(275),
    [anon_sym_LBRACK] = ACTIONS(275),
    [anon_sym_LBRACE] = ACTIONS(275),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(275),
    [anon_sym_POUND] = ACTIONS(277),
    [anon_sym_POUND_LBRACE] = ACTIONS(275),
  },
  [109] = {
    [aux_sym__string_repeat1] = STATE(121),
    [anon_sym_DQUOTE] = ACTIONS(439),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(317),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(317),
  },
  [110] = {
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
    [sym_member_access] = ACTIONS(441),
    [sym_field_access] = ACTIONS(441),
    [sym_new_class] = ACTIONS(441),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(441),
    [sym_shorthand_function_arg] = ACTIONS(441),
    [anon_sym_CARET] = ACTIONS(443),
    [anon_sym_CARET_COLON] = ACTIONS(441),
    [anon_sym_CARET_DQUOTE] = ACTIONS(441),
    [anon_sym_BQUOTE] = ACTIONS(441),
    [anon_sym_TILDE] = ACTIONS(443),
    [anon_sym_TILDE_AT] = ACTIONS(441),
    [sym_gensym] = ACTIONS(441),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(445),
    [sym_nil] = ACTIONS(447),
    [sym_true] = ACTIONS(447),
    [sym_false] = ACTIONS(447),
    [sym_number_long] = ACTIONS(447),
    [sym_number_double] = ACTIONS(445),
    [anon_sym_BSLASH] = ACTIONS(445),
    [anon_sym_DQUOTE] = ACTIONS(445),
    [anon_sym_POUND_DQUOTE] = ACTIONS(445),
    [anon_sym_SQUOTE] = ACTIONS(445),
    [anon_sym_LPARENquote] = ACTIONS(445),
    [anon_sym_RPAREN] = ACTIONS(445),
    [anon_sym_COLON] = ACTIONS(447),
    [anon_sym_COLON_COLON] = ACTIONS(445),
    [anon_sym_DASH_GT] = ACTIONS(447),
    [anon_sym_DASH_GT_GT] = ACTIONS(445),
    [anon_sym_as_DASH_GT] = ACTIONS(445),
    [anon_sym_some_DASH_GT] = ACTIONS(447),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(445),
    [anon_sym_cond_DASH_GT] = ACTIONS(447),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(445),
    [sym__symbol_chars] = ACTIONS(447),
    [sym_member_access] = ACTIONS(445),
    [sym_field_access] = ACTIONS(445),
    [sym_new_class] = ACTIONS(445),
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(445),
    [anon_sym_RBRACK] = ACTIONS(445),
    [anon_sym_LBRACE] = ACTIONS(445),
    [anon_sym_RBRACE] = ACTIONS(445),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(445),
    [anon_sym_POUND] = ACTIONS(447),
    [anon_sym_POUND_LBRACE] = ACTIONS(445),
    [anon_sym_SEMI] = ACTIONS(445),
    [anon_sym_POUND_BANG] = ACTIONS(445),
    [anon_sym_POUND_] = ACTIONS(445),
    [anon_sym_POUND_LPAREN] = ACTIONS(445),
    [sym_shorthand_function_arg] = ACTIONS(445),
    [anon_sym_CARET] = ACTIONS(447),
    [anon_sym_CARET_COLON] = ACTIONS(445),
    [anon_sym_CARET_DQUOTE] = ACTIONS(445),
    [anon_sym_BQUOTE] = ACTIONS(445),
    [anon_sym_TILDE] = ACTIONS(447),
    [anon_sym_TILDE_AT] = ACTIONS(445),
    [sym_gensym] = ACTIONS(445),
  },
  [112] = {
    [ts_builtin_sym_end] = ACTIONS(449),
    [sym_nil] = ACTIONS(451),
    [sym_true] = ACTIONS(451),
    [sym_false] = ACTIONS(451),
    [sym_number_long] = ACTIONS(451),
    [sym_number_double] = ACTIONS(449),
    [anon_sym_BSLASH] = ACTIONS(449),
    [anon_sym_DQUOTE] = ACTIONS(449),
    [anon_sym_POUND_DQUOTE] = ACTIONS(449),
    [anon_sym_SQUOTE] = ACTIONS(449),
    [anon_sym_LPARENquote] = ACTIONS(449),
    [anon_sym_RPAREN] = ACTIONS(449),
    [anon_sym_COLON] = ACTIONS(451),
    [anon_sym_COLON_COLON] = ACTIONS(449),
    [anon_sym_DASH_GT] = ACTIONS(451),
    [anon_sym_DASH_GT_GT] = ACTIONS(449),
    [anon_sym_as_DASH_GT] = ACTIONS(449),
    [anon_sym_some_DASH_GT] = ACTIONS(451),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(449),
    [anon_sym_cond_DASH_GT] = ACTIONS(451),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(449),
    [sym__symbol_chars] = ACTIONS(451),
    [sym_member_access] = ACTIONS(449),
    [sym_field_access] = ACTIONS(449),
    [sym_new_class] = ACTIONS(449),
    [anon_sym_LPAREN] = ACTIONS(451),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_RBRACK] = ACTIONS(449),
    [anon_sym_LBRACE] = ACTIONS(449),
    [anon_sym_RBRACE] = ACTIONS(449),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(449),
    [anon_sym_POUND] = ACTIONS(451),
    [anon_sym_POUND_LBRACE] = ACTIONS(449),
    [anon_sym_SEMI] = ACTIONS(449),
    [anon_sym_POUND_BANG] = ACTIONS(449),
    [anon_sym_POUND_] = ACTIONS(449),
    [anon_sym_POUND_LPAREN] = ACTIONS(449),
    [sym_shorthand_function_arg] = ACTIONS(449),
    [anon_sym_CARET] = ACTIONS(451),
    [anon_sym_CARET_COLON] = ACTIONS(449),
    [anon_sym_CARET_DQUOTE] = ACTIONS(449),
    [anon_sym_BQUOTE] = ACTIONS(449),
    [anon_sym_TILDE] = ACTIONS(451),
    [anon_sym_TILDE_AT] = ACTIONS(449),
    [sym_gensym] = ACTIONS(449),
  },
  [113] = {
    [sym__anything] = STATE(72),
    [sym__literals] = STATE(72),
    [sym__collection_literals] = STATE(72),
    [sym_boolean] = STATE(72),
    [sym_number] = STATE(72),
    [sym__number] = STATE(30),
    [sym_character] = STATE(72),
    [sym__character] = STATE(31),
    [sym_string] = STATE(72),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(72),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(72),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(72),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(72),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(72),
    [sym_list] = STATE(72),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(72),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(72),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(72),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(72),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(72),
    [sym_anonymous_function] = STATE(72),
    [sym_shorthand_function] = STATE(72),
    [sym_defn] = STATE(72),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(72),
    [sym_unquote] = STATE(72),
    [sym_unquote_splice] = STATE(72),
    [aux_sym_program_repeat1] = STATE(72),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(125),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(127),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(129),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(131),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(137),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_TILDE_AT] = ACTIONS(145),
    [sym_gensym] = ACTIONS(137),
  },
  [114] = {
    [ts_builtin_sym_end] = ACTIONS(453),
    [sym_nil] = ACTIONS(455),
    [sym_true] = ACTIONS(455),
    [sym_false] = ACTIONS(455),
    [sym_number_long] = ACTIONS(455),
    [sym_number_double] = ACTIONS(453),
    [anon_sym_BSLASH] = ACTIONS(453),
    [anon_sym_DQUOTE] = ACTIONS(453),
    [anon_sym_POUND_DQUOTE] = ACTIONS(453),
    [anon_sym_SQUOTE] = ACTIONS(453),
    [anon_sym_LPARENquote] = ACTIONS(453),
    [anon_sym_RPAREN] = ACTIONS(453),
    [anon_sym_COLON] = ACTIONS(455),
    [anon_sym_COLON_COLON] = ACTIONS(453),
    [anon_sym_DASH_GT] = ACTIONS(455),
    [anon_sym_DASH_GT_GT] = ACTIONS(453),
    [anon_sym_as_DASH_GT] = ACTIONS(453),
    [anon_sym_some_DASH_GT] = ACTIONS(455),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(453),
    [anon_sym_cond_DASH_GT] = ACTIONS(455),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(453),
    [sym__symbol_chars] = ACTIONS(455),
    [sym_member_access] = ACTIONS(453),
    [sym_field_access] = ACTIONS(453),
    [sym_new_class] = ACTIONS(453),
    [anon_sym_LPAREN] = ACTIONS(455),
    [anon_sym_LBRACK] = ACTIONS(453),
    [anon_sym_RBRACK] = ACTIONS(453),
    [anon_sym_LBRACE] = ACTIONS(453),
    [anon_sym_RBRACE] = ACTIONS(453),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(453),
    [anon_sym_POUND] = ACTIONS(455),
    [anon_sym_POUND_LBRACE] = ACTIONS(453),
    [anon_sym_SEMI] = ACTIONS(453),
    [anon_sym_POUND_BANG] = ACTIONS(453),
    [anon_sym_POUND_] = ACTIONS(453),
    [anon_sym_POUND_LPAREN] = ACTIONS(453),
    [sym_shorthand_function_arg] = ACTIONS(453),
    [anon_sym_CARET] = ACTIONS(455),
    [anon_sym_CARET_COLON] = ACTIONS(453),
    [anon_sym_CARET_DQUOTE] = ACTIONS(453),
    [anon_sym_BQUOTE] = ACTIONS(453),
    [anon_sym_TILDE] = ACTIONS(455),
    [anon_sym_TILDE_AT] = ACTIONS(453),
    [sym_gensym] = ACTIONS(453),
  },
  [115] = {
    [sym__anything] = STATE(115),
    [sym__literals] = STATE(115),
    [sym__collection_literals] = STATE(115),
    [sym_boolean] = STATE(115),
    [sym_number] = STATE(115),
    [sym__number] = STATE(30),
    [sym_character] = STATE(115),
    [sym__character] = STATE(31),
    [sym_string] = STATE(115),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(115),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(115),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(115),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(115),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(115),
    [sym_list] = STATE(115),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(115),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(115),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(115),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(115),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(115),
    [sym_anonymous_function] = STATE(115),
    [sym_shorthand_function] = STATE(115),
    [sym_defn] = STATE(115),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(115),
    [sym_unquote] = STATE(115),
    [sym_unquote_splice] = STATE(115),
    [aux_sym_program_repeat1] = STATE(115),
    [aux_sym_metadata_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(457),
    [sym_nil] = ACTIONS(459),
    [sym_true] = ACTIONS(462),
    [sym_false] = ACTIONS(462),
    [sym_number_long] = ACTIONS(465),
    [sym_number_double] = ACTIONS(468),
    [anon_sym_BSLASH] = ACTIONS(471),
    [anon_sym_DQUOTE] = ACTIONS(474),
    [anon_sym_POUND_DQUOTE] = ACTIONS(477),
    [anon_sym_SQUOTE] = ACTIONS(480),
    [anon_sym_LPARENquote] = ACTIONS(483),
    [anon_sym_COLON] = ACTIONS(486),
    [anon_sym_COLON_COLON] = ACTIONS(489),
    [anon_sym_DASH_GT] = ACTIONS(492),
    [anon_sym_DASH_GT_GT] = ACTIONS(495),
    [anon_sym_as_DASH_GT] = ACTIONS(495),
    [anon_sym_some_DASH_GT] = ACTIONS(492),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(495),
    [anon_sym_cond_DASH_GT] = ACTIONS(492),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(495),
    [sym__symbol_chars] = ACTIONS(498),
    [sym_member_access] = ACTIONS(501),
    [sym_field_access] = ACTIONS(501),
    [sym_new_class] = ACTIONS(501),
    [anon_sym_LPAREN] = ACTIONS(504),
    [anon_sym_LBRACK] = ACTIONS(507),
    [anon_sym_LBRACE] = ACTIONS(510),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(513),
    [anon_sym_POUND] = ACTIONS(516),
    [anon_sym_POUND_LBRACE] = ACTIONS(519),
    [anon_sym_SEMI] = ACTIONS(522),
    [anon_sym_POUND_BANG] = ACTIONS(525),
    [anon_sym_POUND_] = ACTIONS(528),
    [anon_sym_POUND_LPAREN] = ACTIONS(531),
    [sym_shorthand_function_arg] = ACTIONS(534),
    [anon_sym_CARET] = ACTIONS(537),
    [anon_sym_CARET_COLON] = ACTIONS(540),
    [anon_sym_CARET_DQUOTE] = ACTIONS(543),
    [anon_sym_BQUOTE] = ACTIONS(546),
    [anon_sym_TILDE] = ACTIONS(549),
    [anon_sym_TILDE_AT] = ACTIONS(552),
    [sym_gensym] = ACTIONS(534),
  },
  [116] = {
    [sym__symbol_chars] = ACTIONS(213),
  },
  [117] = {
    [sym_metadata_shorthand] = STATE(117),
    [aux_sym_metadata_repeat1] = STATE(117),
    [anon_sym_LPAREN] = ACTIONS(555),
    [anon_sym_LBRACK] = ACTIONS(555),
    [anon_sym_LBRACE] = ACTIONS(555),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(555),
    [anon_sym_POUND] = ACTIONS(557),
    [anon_sym_POUND_LBRACE] = ACTIONS(555),
    [anon_sym_CARET] = ACTIONS(559),
    [anon_sym_CARET_COLON] = ACTIONS(562),
    [anon_sym_CARET_DQUOTE] = ACTIONS(565),
  },
  [118] = {
    [sym__hex_char] = ACTIONS(568),
  },
  [119] = {
    [ts_builtin_sym_end] = ACTIONS(570),
    [sym_nil] = ACTIONS(572),
    [sym_true] = ACTIONS(572),
    [sym_false] = ACTIONS(572),
    [sym_number_long] = ACTIONS(572),
    [sym_number_double] = ACTIONS(570),
    [anon_sym_BSLASH] = ACTIONS(570),
    [anon_sym_DQUOTE] = ACTIONS(570),
    [anon_sym_POUND_DQUOTE] = ACTIONS(570),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_LPARENquote] = ACTIONS(570),
    [anon_sym_RPAREN] = ACTIONS(570),
    [anon_sym_COLON] = ACTIONS(572),
    [anon_sym_COLON_COLON] = ACTIONS(570),
    [anon_sym_DASH_GT] = ACTIONS(572),
    [anon_sym_DASH_GT_GT] = ACTIONS(570),
    [anon_sym_as_DASH_GT] = ACTIONS(570),
    [anon_sym_some_DASH_GT] = ACTIONS(572),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(570),
    [anon_sym_cond_DASH_GT] = ACTIONS(572),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(570),
    [sym__symbol_chars] = ACTIONS(572),
    [sym_member_access] = ACTIONS(570),
    [sym_field_access] = ACTIONS(570),
    [sym_new_class] = ACTIONS(570),
    [anon_sym_LPAREN] = ACTIONS(572),
    [anon_sym_LBRACK] = ACTIONS(570),
    [anon_sym_RBRACK] = ACTIONS(570),
    [anon_sym_LBRACE] = ACTIONS(570),
    [anon_sym_RBRACE] = ACTIONS(570),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(570),
    [anon_sym_POUND] = ACTIONS(572),
    [anon_sym_POUND_LBRACE] = ACTIONS(570),
    [anon_sym_SEMI] = ACTIONS(570),
    [anon_sym_POUND_BANG] = ACTIONS(570),
    [anon_sym_POUND_] = ACTIONS(570),
    [anon_sym_POUND_LPAREN] = ACTIONS(570),
    [sym_shorthand_function_arg] = ACTIONS(570),
    [anon_sym_CARET] = ACTIONS(572),
    [anon_sym_CARET_COLON] = ACTIONS(570),
    [anon_sym_CARET_DQUOTE] = ACTIONS(570),
    [anon_sym_BQUOTE] = ACTIONS(570),
    [anon_sym_TILDE] = ACTIONS(572),
    [anon_sym_TILDE_AT] = ACTIONS(570),
    [sym_gensym] = ACTIONS(570),
  },
  [120] = {
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
    [sym_member_access] = ACTIONS(574),
    [sym_field_access] = ACTIONS(574),
    [sym_new_class] = ACTIONS(574),
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
  [121] = {
    [aux_sym__string_repeat1] = STATE(121),
    [anon_sym_DQUOTE] = ACTIONS(578),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(580),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(580),
  },
  [122] = {
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
    [sym_member_access] = ACTIONS(583),
    [sym_field_access] = ACTIONS(583),
    [sym_new_class] = ACTIONS(583),
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
  [123] = {
    [aux_sym__regex_repeat1] = STATE(123),
    [anon_sym_DQUOTE] = ACTIONS(587),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(589),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(589),
  },
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(592),
    [sym_nil] = ACTIONS(594),
    [sym_true] = ACTIONS(594),
    [sym_false] = ACTIONS(594),
    [sym_number_long] = ACTIONS(594),
    [sym_number_double] = ACTIONS(592),
    [anon_sym_BSLASH] = ACTIONS(592),
    [anon_sym_DQUOTE] = ACTIONS(592),
    [anon_sym_POUND_DQUOTE] = ACTIONS(592),
    [anon_sym_SQUOTE] = ACTIONS(592),
    [anon_sym_LPARENquote] = ACTIONS(592),
    [anon_sym_RPAREN] = ACTIONS(592),
    [anon_sym_COLON] = ACTIONS(594),
    [anon_sym_COLON_COLON] = ACTIONS(592),
    [anon_sym_DASH_GT] = ACTIONS(594),
    [anon_sym_DASH_GT_GT] = ACTIONS(592),
    [anon_sym_as_DASH_GT] = ACTIONS(592),
    [anon_sym_some_DASH_GT] = ACTIONS(594),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(592),
    [anon_sym_cond_DASH_GT] = ACTIONS(594),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(592),
    [sym__symbol_chars] = ACTIONS(594),
    [sym_member_access] = ACTIONS(592),
    [sym_field_access] = ACTIONS(592),
    [sym_new_class] = ACTIONS(592),
    [anon_sym_LPAREN] = ACTIONS(594),
    [anon_sym_LBRACK] = ACTIONS(592),
    [anon_sym_RBRACK] = ACTIONS(592),
    [anon_sym_LBRACE] = ACTIONS(592),
    [anon_sym_RBRACE] = ACTIONS(592),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(592),
    [anon_sym_POUND] = ACTIONS(594),
    [anon_sym_POUND_LBRACE] = ACTIONS(592),
    [anon_sym_SEMI] = ACTIONS(592),
    [anon_sym_POUND_BANG] = ACTIONS(592),
    [anon_sym_POUND_] = ACTIONS(592),
    [anon_sym_POUND_LPAREN] = ACTIONS(592),
    [sym_shorthand_function_arg] = ACTIONS(592),
    [anon_sym_CARET] = ACTIONS(594),
    [anon_sym_CARET_COLON] = ACTIONS(592),
    [anon_sym_CARET_DQUOTE] = ACTIONS(592),
    [anon_sym_BQUOTE] = ACTIONS(592),
    [anon_sym_TILDE] = ACTIONS(594),
    [anon_sym_TILDE_AT] = ACTIONS(592),
    [sym_gensym] = ACTIONS(592),
  },
  [125] = {
    [sym__keyword_chars] = ACTIONS(596),
  },
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(598),
    [sym_nil] = ACTIONS(600),
    [sym_true] = ACTIONS(600),
    [sym_false] = ACTIONS(600),
    [sym_number_long] = ACTIONS(600),
    [sym_number_double] = ACTIONS(598),
    [anon_sym_BSLASH] = ACTIONS(598),
    [anon_sym_DQUOTE] = ACTIONS(598),
    [anon_sym_POUND_DQUOTE] = ACTIONS(598),
    [anon_sym_SQUOTE] = ACTIONS(598),
    [anon_sym_LPARENquote] = ACTIONS(598),
    [anon_sym_RPAREN] = ACTIONS(598),
    [anon_sym_COLON] = ACTIONS(600),
    [anon_sym_COLON_COLON] = ACTIONS(598),
    [anon_sym_DASH_GT] = ACTIONS(600),
    [anon_sym_DASH_GT_GT] = ACTIONS(598),
    [anon_sym_as_DASH_GT] = ACTIONS(598),
    [anon_sym_some_DASH_GT] = ACTIONS(600),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(598),
    [anon_sym_cond_DASH_GT] = ACTIONS(600),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(598),
    [sym__symbol_chars] = ACTIONS(600),
    [sym_member_access] = ACTIONS(598),
    [sym_field_access] = ACTIONS(598),
    [sym_new_class] = ACTIONS(598),
    [anon_sym_LPAREN] = ACTIONS(600),
    [anon_sym_LBRACK] = ACTIONS(598),
    [anon_sym_RBRACK] = ACTIONS(598),
    [anon_sym_LBRACE] = ACTIONS(598),
    [anon_sym_RBRACE] = ACTIONS(598),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(598),
    [anon_sym_POUND] = ACTIONS(600),
    [anon_sym_POUND_LBRACE] = ACTIONS(598),
    [anon_sym_SEMI] = ACTIONS(598),
    [anon_sym_POUND_BANG] = ACTIONS(598),
    [anon_sym_POUND_] = ACTIONS(598),
    [anon_sym_POUND_LPAREN] = ACTIONS(598),
    [sym_shorthand_function_arg] = ACTIONS(598),
    [anon_sym_CARET] = ACTIONS(600),
    [anon_sym_CARET_COLON] = ACTIONS(598),
    [anon_sym_CARET_DQUOTE] = ACTIONS(598),
    [anon_sym_BQUOTE] = ACTIONS(598),
    [anon_sym_TILDE] = ACTIONS(600),
    [anon_sym_TILDE_AT] = ACTIONS(598),
    [sym_gensym] = ACTIONS(598),
  },
  [127] = {
    [ts_builtin_sym_end] = ACTIONS(602),
    [sym_nil] = ACTIONS(604),
    [sym_true] = ACTIONS(604),
    [sym_false] = ACTIONS(604),
    [sym_number_long] = ACTIONS(604),
    [sym_number_double] = ACTIONS(602),
    [anon_sym_BSLASH] = ACTIONS(602),
    [anon_sym_DQUOTE] = ACTIONS(602),
    [anon_sym_POUND_DQUOTE] = ACTIONS(602),
    [anon_sym_SQUOTE] = ACTIONS(602),
    [anon_sym_LPARENquote] = ACTIONS(602),
    [anon_sym_RPAREN] = ACTIONS(602),
    [anon_sym_COLON] = ACTIONS(604),
    [anon_sym_COLON_COLON] = ACTIONS(602),
    [anon_sym_DASH_GT] = ACTIONS(604),
    [anon_sym_DASH_GT_GT] = ACTIONS(602),
    [anon_sym_as_DASH_GT] = ACTIONS(602),
    [anon_sym_some_DASH_GT] = ACTIONS(604),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(602),
    [anon_sym_cond_DASH_GT] = ACTIONS(604),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(602),
    [sym__symbol_chars] = ACTIONS(604),
    [sym_member_access] = ACTIONS(602),
    [sym_field_access] = ACTIONS(602),
    [sym_new_class] = ACTIONS(602),
    [anon_sym_LPAREN] = ACTIONS(604),
    [anon_sym_LBRACK] = ACTIONS(602),
    [anon_sym_RBRACK] = ACTIONS(602),
    [anon_sym_LBRACE] = ACTIONS(602),
    [anon_sym_RBRACE] = ACTIONS(602),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(602),
    [anon_sym_POUND] = ACTIONS(604),
    [anon_sym_POUND_LBRACE] = ACTIONS(602),
    [anon_sym_SEMI] = ACTIONS(602),
    [anon_sym_POUND_BANG] = ACTIONS(602),
    [anon_sym_POUND_] = ACTIONS(602),
    [anon_sym_POUND_LPAREN] = ACTIONS(602),
    [sym_shorthand_function_arg] = ACTIONS(602),
    [anon_sym_CARET] = ACTIONS(604),
    [anon_sym_CARET_COLON] = ACTIONS(602),
    [anon_sym_CARET_DQUOTE] = ACTIONS(602),
    [anon_sym_BQUOTE] = ACTIONS(602),
    [anon_sym_TILDE] = ACTIONS(604),
    [anon_sym_TILDE_AT] = ACTIONS(602),
    [sym_gensym] = ACTIONS(602),
  },
  [128] = {
    [sym__anything] = STATE(143),
    [sym__literals] = STATE(143),
    [sym__collection_literals] = STATE(143),
    [sym_boolean] = STATE(143),
    [sym_number] = STATE(143),
    [sym__number] = STATE(30),
    [sym_character] = STATE(143),
    [sym__character] = STATE(31),
    [sym_string] = STATE(143),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(143),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(143),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(143),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(143),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(143),
    [sym_list] = STATE(143),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(143),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(143),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(143),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(143),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(143),
    [sym_anonymous_function] = STATE(143),
    [sym_shorthand_function] = STATE(143),
    [sym_defn] = STATE(143),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(143),
    [sym_unquote] = STATE(143),
    [sym_unquote_splice] = STATE(143),
    [aux_sym_program_repeat1] = STATE(143),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(363),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(127),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(606),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(131),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(367),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_TILDE_AT] = ACTIONS(145),
    [sym_gensym] = ACTIONS(367),
  },
  [129] = {
    [anon_sym_DQUOTE] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(111),
    [anon_sym_POUND] = ACTIONS(113),
  },
  [130] = {
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_SLASH] = ACTIONS(608),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(115),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(115),
    [anon_sym_POUND] = ACTIONS(117),
  },
  [131] = {
    [sym_vector] = STATE(134),
    [sym__vector] = STATE(38),
    [sym__single_arity_fn] = STATE(164),
    [sym_params] = STATE(137),
    [anon_sym_LBRACK] = ACTIONS(39),
  },
  [132] = {
    [anon_sym_DQUOTE] = ACTIONS(610),
    [anon_sym_LPAREN] = ACTIONS(610),
    [anon_sym_LBRACK] = ACTIONS(610),
    [anon_sym_LBRACE] = ACTIONS(610),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(610),
    [anon_sym_POUND] = ACTIONS(612),
  },
  [133] = {
    [anon_sym_DQUOTE] = ACTIONS(263),
    [anon_sym_LPAREN] = ACTIONS(263),
    [anon_sym_LBRACK] = ACTIONS(263),
    [anon_sym_LBRACE] = ACTIONS(263),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(263),
    [anon_sym_POUND] = ACTIONS(265),
  },
  [134] = {
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
    [sym_member_access] = ACTIONS(616),
    [sym_field_access] = ACTIONS(616),
    [sym_new_class] = ACTIONS(616),
    [anon_sym_LPAREN] = ACTIONS(614),
    [anon_sym_LBRACK] = ACTIONS(616),
    [anon_sym_LBRACE] = ACTIONS(616),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(616),
    [anon_sym_POUND] = ACTIONS(614),
    [anon_sym_POUND_LBRACE] = ACTIONS(616),
    [anon_sym_SEMI] = ACTIONS(616),
    [anon_sym_POUND_BANG] = ACTIONS(616),
    [anon_sym_POUND_] = ACTIONS(616),
    [anon_sym_POUND_LPAREN] = ACTIONS(616),
    [sym_shorthand_function_arg] = ACTIONS(616),
    [anon_sym_CARET] = ACTIONS(614),
    [anon_sym_CARET_COLON] = ACTIONS(616),
    [anon_sym_CARET_DQUOTE] = ACTIONS(616),
    [anon_sym_BQUOTE] = ACTIONS(616),
    [anon_sym_TILDE] = ACTIONS(614),
    [anon_sym_TILDE_AT] = ACTIONS(616),
    [sym_gensym] = ACTIONS(616),
  },
  [135] = {
    [anon_sym_RPAREN] = ACTIONS(618),
  },
  [136] = {
    [sym_vector] = STATE(134),
    [sym__vector] = STATE(38),
    [sym__after_the_fn_name] = STATE(166),
    [sym__single_arity_fn] = STATE(166),
    [sym__multi_arity_fn] = STATE(166),
    [sym_params] = STATE(137),
    [aux_sym__multi_arity_fn_repeat1] = STATE(138),
    [anon_sym_LPAREN] = ACTIONS(361),
    [anon_sym_LBRACK] = ACTIONS(39),
  },
  [137] = {
    [sym__anything] = STATE(168),
    [sym__literals] = STATE(168),
    [sym__collection_literals] = STATE(168),
    [sym_boolean] = STATE(168),
    [sym_number] = STATE(168),
    [sym__number] = STATE(30),
    [sym_character] = STATE(168),
    [sym__character] = STATE(31),
    [sym_string] = STATE(168),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(168),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(168),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(168),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(168),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(168),
    [sym_list] = STATE(168),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(168),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(168),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(168),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(168),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(168),
    [sym_anonymous_function] = STATE(168),
    [sym_function_body] = STATE(167),
    [sym_shorthand_function] = STATE(168),
    [sym_defn] = STATE(168),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(168),
    [sym_unquote] = STATE(168),
    [sym_unquote_splice] = STATE(168),
    [aux_sym_program_repeat1] = STATE(168),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(620),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(127),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(131),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(624),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_TILDE_AT] = ACTIONS(145),
    [sym_gensym] = ACTIONS(624),
  },
  [138] = {
    [aux_sym__multi_arity_fn_repeat1] = STATE(169),
    [anon_sym_RPAREN] = ACTIONS(626),
    [anon_sym_LPAREN] = ACTIONS(361),
  },
  [139] = {
    [sym_string] = STATE(171),
    [sym__string] = STATE(172),
    [sym_vector] = STATE(134),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(173),
    [sym__hash_map] = STATE(108),
    [sym_namespace_map] = STATE(108),
    [sym__after_the_fn_name] = STATE(174),
    [sym__single_arity_fn] = STATE(174),
    [sym__multi_arity_fn] = STATE(174),
    [sym_params] = STATE(137),
    [sym_docstring] = STATE(175),
    [sym_attr_map] = STATE(176),
    [aux_sym__multi_arity_fn_repeat1] = STATE(138),
    [anon_sym_DQUOTE] = ACTIONS(628),
    [anon_sym_LPAREN] = ACTIONS(361),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(215),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(217),
    [anon_sym_POUND] = ACTIONS(219),
  },
  [140] = {
    [sym_symbol] = STATE(132),
    [sym__symbol] = STATE(133),
    [sym_threading_macro] = STATE(133),
    [sym_qualified_symbol] = STATE(133),
    [sym_function_name] = STATE(177),
    [anon_sym_DASH_GT] = ACTIONS(355),
    [anon_sym_DASH_GT_GT] = ACTIONS(357),
    [anon_sym_as_DASH_GT] = ACTIONS(357),
    [anon_sym_some_DASH_GT] = ACTIONS(355),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(357),
    [anon_sym_cond_DASH_GT] = ACTIONS(355),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(357),
    [sym__symbol_chars] = ACTIONS(359),
  },
  [141] = {
    [sym_metadata_shorthand] = STATE(178),
    [aux_sym_metadata_repeat1] = STATE(178),
    [anon_sym_DASH_GT] = ACTIONS(289),
    [anon_sym_DASH_GT_GT] = ACTIONS(291),
    [anon_sym_as_DASH_GT] = ACTIONS(291),
    [anon_sym_some_DASH_GT] = ACTIONS(289),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(291),
    [anon_sym_cond_DASH_GT] = ACTIONS(289),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(291),
    [sym__symbol_chars] = ACTIONS(289),
    [anon_sym_CARET] = ACTIONS(299),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(630),
    [sym_nil] = ACTIONS(632),
    [sym_true] = ACTIONS(632),
    [sym_false] = ACTIONS(632),
    [sym_number_long] = ACTIONS(632),
    [sym_number_double] = ACTIONS(630),
    [anon_sym_BSLASH] = ACTIONS(630),
    [anon_sym_DQUOTE] = ACTIONS(630),
    [anon_sym_POUND_DQUOTE] = ACTIONS(630),
    [anon_sym_SQUOTE] = ACTIONS(630),
    [anon_sym_LPARENquote] = ACTIONS(630),
    [anon_sym_RPAREN] = ACTIONS(630),
    [anon_sym_COLON] = ACTIONS(632),
    [anon_sym_COLON_COLON] = ACTIONS(630),
    [anon_sym_DASH_GT] = ACTIONS(632),
    [anon_sym_DASH_GT_GT] = ACTIONS(630),
    [anon_sym_as_DASH_GT] = ACTIONS(630),
    [anon_sym_some_DASH_GT] = ACTIONS(632),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(630),
    [anon_sym_cond_DASH_GT] = ACTIONS(632),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(630),
    [sym__symbol_chars] = ACTIONS(632),
    [sym_member_access] = ACTIONS(630),
    [sym_field_access] = ACTIONS(630),
    [sym_new_class] = ACTIONS(630),
    [anon_sym_LPAREN] = ACTIONS(632),
    [anon_sym_LBRACK] = ACTIONS(630),
    [anon_sym_RBRACK] = ACTIONS(630),
    [anon_sym_LBRACE] = ACTIONS(630),
    [anon_sym_RBRACE] = ACTIONS(630),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(630),
    [anon_sym_POUND] = ACTIONS(632),
    [anon_sym_POUND_LBRACE] = ACTIONS(630),
    [anon_sym_SEMI] = ACTIONS(630),
    [anon_sym_POUND_BANG] = ACTIONS(630),
    [anon_sym_POUND_] = ACTIONS(630),
    [anon_sym_POUND_LPAREN] = ACTIONS(630),
    [sym_shorthand_function_arg] = ACTIONS(630),
    [anon_sym_CARET] = ACTIONS(632),
    [anon_sym_CARET_COLON] = ACTIONS(630),
    [anon_sym_CARET_DQUOTE] = ACTIONS(630),
    [anon_sym_BQUOTE] = ACTIONS(630),
    [anon_sym_TILDE] = ACTIONS(632),
    [anon_sym_TILDE_AT] = ACTIONS(630),
    [sym_gensym] = ACTIONS(630),
  },
  [143] = {
    [sym__anything] = STATE(143),
    [sym__literals] = STATE(143),
    [sym__collection_literals] = STATE(143),
    [sym_boolean] = STATE(143),
    [sym_number] = STATE(143),
    [sym__number] = STATE(30),
    [sym_character] = STATE(143),
    [sym__character] = STATE(31),
    [sym_string] = STATE(143),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(143),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(143),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(143),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(143),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(143),
    [sym_list] = STATE(143),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(143),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(143),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(143),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(143),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(143),
    [sym_anonymous_function] = STATE(143),
    [sym_shorthand_function] = STATE(143),
    [sym_defn] = STATE(143),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(143),
    [sym_unquote] = STATE(143),
    [sym_unquote_splice] = STATE(143),
    [aux_sym_program_repeat1] = STATE(143),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(634),
    [sym_true] = ACTIONS(462),
    [sym_false] = ACTIONS(462),
    [sym_number_long] = ACTIONS(465),
    [sym_number_double] = ACTIONS(468),
    [anon_sym_BSLASH] = ACTIONS(471),
    [anon_sym_DQUOTE] = ACTIONS(474),
    [anon_sym_POUND_DQUOTE] = ACTIONS(477),
    [anon_sym_SQUOTE] = ACTIONS(637),
    [anon_sym_LPARENquote] = ACTIONS(483),
    [anon_sym_RPAREN] = ACTIONS(457),
    [anon_sym_COLON] = ACTIONS(486),
    [anon_sym_COLON_COLON] = ACTIONS(489),
    [anon_sym_DASH_GT] = ACTIONS(492),
    [anon_sym_DASH_GT_GT] = ACTIONS(495),
    [anon_sym_as_DASH_GT] = ACTIONS(495),
    [anon_sym_some_DASH_GT] = ACTIONS(492),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(495),
    [anon_sym_cond_DASH_GT] = ACTIONS(492),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(495),
    [sym__symbol_chars] = ACTIONS(498),
    [sym_member_access] = ACTIONS(501),
    [sym_field_access] = ACTIONS(501),
    [sym_new_class] = ACTIONS(501),
    [anon_sym_LPAREN] = ACTIONS(504),
    [anon_sym_LBRACK] = ACTIONS(507),
    [anon_sym_LBRACE] = ACTIONS(510),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(513),
    [anon_sym_POUND] = ACTIONS(516),
    [anon_sym_POUND_LBRACE] = ACTIONS(519),
    [anon_sym_SEMI] = ACTIONS(522),
    [anon_sym_POUND_BANG] = ACTIONS(525),
    [anon_sym_POUND_] = ACTIONS(640),
    [anon_sym_POUND_LPAREN] = ACTIONS(531),
    [sym_shorthand_function_arg] = ACTIONS(643),
    [anon_sym_CARET] = ACTIONS(537),
    [anon_sym_CARET_COLON] = ACTIONS(540),
    [anon_sym_CARET_DQUOTE] = ACTIONS(543),
    [anon_sym_BQUOTE] = ACTIONS(646),
    [anon_sym_TILDE] = ACTIONS(649),
    [anon_sym_TILDE_AT] = ACTIONS(652),
    [sym_gensym] = ACTIONS(643),
  },
  [144] = {
    [ts_builtin_sym_end] = ACTIONS(655),
    [sym_nil] = ACTIONS(657),
    [sym_true] = ACTIONS(657),
    [sym_false] = ACTIONS(657),
    [sym_number_long] = ACTIONS(657),
    [sym_number_double] = ACTIONS(655),
    [anon_sym_BSLASH] = ACTIONS(655),
    [anon_sym_DQUOTE] = ACTIONS(655),
    [anon_sym_POUND_DQUOTE] = ACTIONS(655),
    [anon_sym_SQUOTE] = ACTIONS(655),
    [anon_sym_LPARENquote] = ACTIONS(655),
    [anon_sym_RPAREN] = ACTIONS(655),
    [anon_sym_COLON] = ACTIONS(657),
    [anon_sym_COLON_COLON] = ACTIONS(655),
    [anon_sym_DASH_GT] = ACTIONS(657),
    [anon_sym_DASH_GT_GT] = ACTIONS(655),
    [anon_sym_as_DASH_GT] = ACTIONS(655),
    [anon_sym_some_DASH_GT] = ACTIONS(657),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(655),
    [anon_sym_cond_DASH_GT] = ACTIONS(657),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(655),
    [sym__symbol_chars] = ACTIONS(657),
    [sym_member_access] = ACTIONS(655),
    [sym_field_access] = ACTIONS(655),
    [sym_new_class] = ACTIONS(655),
    [anon_sym_LPAREN] = ACTIONS(657),
    [anon_sym_LBRACK] = ACTIONS(655),
    [anon_sym_RBRACK] = ACTIONS(655),
    [anon_sym_LBRACE] = ACTIONS(655),
    [anon_sym_RBRACE] = ACTIONS(655),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(655),
    [anon_sym_POUND] = ACTIONS(657),
    [anon_sym_POUND_LBRACE] = ACTIONS(655),
    [anon_sym_SEMI] = ACTIONS(655),
    [anon_sym_POUND_BANG] = ACTIONS(655),
    [anon_sym_POUND_] = ACTIONS(655),
    [anon_sym_POUND_LPAREN] = ACTIONS(655),
    [sym_shorthand_function_arg] = ACTIONS(655),
    [anon_sym_CARET] = ACTIONS(657),
    [anon_sym_CARET_COLON] = ACTIONS(655),
    [anon_sym_CARET_DQUOTE] = ACTIONS(655),
    [anon_sym_BQUOTE] = ACTIONS(655),
    [anon_sym_TILDE] = ACTIONS(657),
    [anon_sym_TILDE_AT] = ACTIONS(655),
    [sym_gensym] = ACTIONS(655),
  },
  [145] = {
    [sym__anything] = STATE(145),
    [sym__literals] = STATE(145),
    [sym__collection_literals] = STATE(145),
    [sym_boolean] = STATE(145),
    [sym_number] = STATE(145),
    [sym__number] = STATE(30),
    [sym_character] = STATE(145),
    [sym__character] = STATE(31),
    [sym_string] = STATE(145),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(145),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(145),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(145),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(145),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(145),
    [sym_list] = STATE(145),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(145),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(145),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(145),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(145),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(145),
    [sym_anonymous_function] = STATE(145),
    [sym_shorthand_function] = STATE(145),
    [sym_defn] = STATE(145),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(145),
    [sym_unquote] = STATE(145),
    [sym_unquote_splice] = STATE(145),
    [aux_sym_program_repeat1] = STATE(145),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(659),
    [sym_true] = ACTIONS(462),
    [sym_false] = ACTIONS(462),
    [sym_number_long] = ACTIONS(465),
    [sym_number_double] = ACTIONS(468),
    [anon_sym_BSLASH] = ACTIONS(471),
    [anon_sym_DQUOTE] = ACTIONS(474),
    [anon_sym_POUND_DQUOTE] = ACTIONS(477),
    [anon_sym_SQUOTE] = ACTIONS(662),
    [anon_sym_LPARENquote] = ACTIONS(483),
    [anon_sym_COLON] = ACTIONS(486),
    [anon_sym_COLON_COLON] = ACTIONS(489),
    [anon_sym_DASH_GT] = ACTIONS(492),
    [anon_sym_DASH_GT_GT] = ACTIONS(495),
    [anon_sym_as_DASH_GT] = ACTIONS(495),
    [anon_sym_some_DASH_GT] = ACTIONS(492),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(495),
    [anon_sym_cond_DASH_GT] = ACTIONS(492),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(495),
    [sym__symbol_chars] = ACTIONS(498),
    [sym_member_access] = ACTIONS(501),
    [sym_field_access] = ACTIONS(501),
    [sym_new_class] = ACTIONS(501),
    [anon_sym_LPAREN] = ACTIONS(504),
    [anon_sym_LBRACK] = ACTIONS(507),
    [anon_sym_RBRACK] = ACTIONS(457),
    [anon_sym_LBRACE] = ACTIONS(510),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(513),
    [anon_sym_POUND] = ACTIONS(516),
    [anon_sym_POUND_LBRACE] = ACTIONS(519),
    [anon_sym_SEMI] = ACTIONS(522),
    [anon_sym_POUND_BANG] = ACTIONS(525),
    [anon_sym_POUND_] = ACTIONS(665),
    [anon_sym_POUND_LPAREN] = ACTIONS(531),
    [sym_shorthand_function_arg] = ACTIONS(668),
    [anon_sym_CARET] = ACTIONS(537),
    [anon_sym_CARET_COLON] = ACTIONS(540),
    [anon_sym_CARET_DQUOTE] = ACTIONS(543),
    [anon_sym_BQUOTE] = ACTIONS(671),
    [anon_sym_TILDE] = ACTIONS(674),
    [anon_sym_TILDE_AT] = ACTIONS(677),
    [sym_gensym] = ACTIONS(668),
  },
  [146] = {
    [sym_nil] = ACTIONS(680),
    [sym_true] = ACTIONS(680),
    [sym_false] = ACTIONS(680),
    [sym_number_long] = ACTIONS(680),
    [sym_number_double] = ACTIONS(682),
    [anon_sym_BSLASH] = ACTIONS(682),
    [anon_sym_DQUOTE] = ACTIONS(682),
    [anon_sym_POUND_DQUOTE] = ACTIONS(682),
    [anon_sym_SQUOTE] = ACTIONS(682),
    [anon_sym_LPARENquote] = ACTIONS(682),
    [anon_sym_COLON] = ACTIONS(680),
    [anon_sym_COLON_COLON] = ACTIONS(682),
    [anon_sym_DASH_GT] = ACTIONS(680),
    [anon_sym_DASH_GT_GT] = ACTIONS(682),
    [anon_sym_as_DASH_GT] = ACTIONS(682),
    [anon_sym_some_DASH_GT] = ACTIONS(680),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(682),
    [anon_sym_cond_DASH_GT] = ACTIONS(680),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(682),
    [sym__symbol_chars] = ACTIONS(680),
    [sym_member_access] = ACTIONS(682),
    [sym_field_access] = ACTIONS(682),
    [sym_new_class] = ACTIONS(682),
    [anon_sym_LPAREN] = ACTIONS(680),
    [anon_sym_LBRACK] = ACTIONS(682),
    [anon_sym_LBRACE] = ACTIONS(682),
    [anon_sym_RBRACE] = ACTIONS(682),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(682),
    [anon_sym_POUND] = ACTIONS(680),
    [anon_sym_POUND_LBRACE] = ACTIONS(682),
    [anon_sym_SEMI] = ACTIONS(682),
    [anon_sym_POUND_BANG] = ACTIONS(682),
    [anon_sym_POUND_] = ACTIONS(682),
    [anon_sym_POUND_LPAREN] = ACTIONS(682),
    [sym_shorthand_function_arg] = ACTIONS(682),
    [anon_sym_CARET] = ACTIONS(680),
    [anon_sym_CARET_COLON] = ACTIONS(682),
    [anon_sym_CARET_DQUOTE] = ACTIONS(682),
    [anon_sym_BQUOTE] = ACTIONS(682),
    [anon_sym_TILDE] = ACTIONS(680),
    [anon_sym_TILDE_AT] = ACTIONS(682),
    [sym_gensym] = ACTIONS(682),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(684),
    [sym_nil] = ACTIONS(686),
    [sym_true] = ACTIONS(686),
    [sym_false] = ACTIONS(686),
    [sym_number_long] = ACTIONS(686),
    [sym_number_double] = ACTIONS(684),
    [anon_sym_BSLASH] = ACTIONS(684),
    [anon_sym_DQUOTE] = ACTIONS(684),
    [anon_sym_POUND_DQUOTE] = ACTIONS(684),
    [anon_sym_SQUOTE] = ACTIONS(684),
    [anon_sym_LPARENquote] = ACTIONS(684),
    [anon_sym_RPAREN] = ACTIONS(684),
    [anon_sym_COLON] = ACTIONS(686),
    [anon_sym_COLON_COLON] = ACTIONS(684),
    [anon_sym_DASH_GT] = ACTIONS(686),
    [anon_sym_DASH_GT_GT] = ACTIONS(684),
    [anon_sym_as_DASH_GT] = ACTIONS(684),
    [anon_sym_some_DASH_GT] = ACTIONS(686),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(684),
    [anon_sym_cond_DASH_GT] = ACTIONS(686),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(684),
    [sym__symbol_chars] = ACTIONS(686),
    [sym_member_access] = ACTIONS(684),
    [sym_field_access] = ACTIONS(684),
    [sym_new_class] = ACTIONS(684),
    [anon_sym_LPAREN] = ACTIONS(686),
    [anon_sym_LBRACK] = ACTIONS(684),
    [anon_sym_RBRACK] = ACTIONS(684),
    [anon_sym_LBRACE] = ACTIONS(684),
    [anon_sym_RBRACE] = ACTIONS(684),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(684),
    [anon_sym_POUND] = ACTIONS(686),
    [anon_sym_POUND_LBRACE] = ACTIONS(684),
    [anon_sym_SEMI] = ACTIONS(684),
    [anon_sym_POUND_BANG] = ACTIONS(684),
    [anon_sym_POUND_] = ACTIONS(684),
    [anon_sym_POUND_LPAREN] = ACTIONS(684),
    [sym_shorthand_function_arg] = ACTIONS(684),
    [anon_sym_CARET] = ACTIONS(686),
    [anon_sym_CARET_COLON] = ACTIONS(684),
    [anon_sym_CARET_DQUOTE] = ACTIONS(684),
    [anon_sym_BQUOTE] = ACTIONS(684),
    [anon_sym_TILDE] = ACTIONS(686),
    [anon_sym_TILDE_AT] = ACTIONS(684),
    [sym_gensym] = ACTIONS(684),
  },
  [148] = {
    [sym__anything] = STATE(86),
    [sym__literals] = STATE(86),
    [sym__collection_literals] = STATE(86),
    [sym_boolean] = STATE(86),
    [sym_number] = STATE(86),
    [sym__number] = STATE(30),
    [sym_character] = STATE(86),
    [sym__character] = STATE(31),
    [sym_string] = STATE(86),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(86),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(86),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(86),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(86),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(86),
    [sym_list] = STATE(86),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(86),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(86),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym__hash_map_kv_pair] = STATE(148),
    [sym__hash_map_key] = STATE(86),
    [sym_set] = STATE(86),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(86),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(86),
    [sym_anonymous_function] = STATE(86),
    [sym_shorthand_function] = STATE(86),
    [sym_defn] = STATE(86),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(86),
    [sym_unquote] = STATE(86),
    [sym_unquote_splice] = STATE(86),
    [aux_sym__hash_map_repeat1] = STATE(148),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(688),
    [sym_true] = ACTIONS(691),
    [sym_false] = ACTIONS(691),
    [sym_number_long] = ACTIONS(694),
    [sym_number_double] = ACTIONS(697),
    [anon_sym_BSLASH] = ACTIONS(700),
    [anon_sym_DQUOTE] = ACTIONS(703),
    [anon_sym_POUND_DQUOTE] = ACTIONS(706),
    [anon_sym_SQUOTE] = ACTIONS(709),
    [anon_sym_LPARENquote] = ACTIONS(712),
    [anon_sym_COLON] = ACTIONS(715),
    [anon_sym_COLON_COLON] = ACTIONS(718),
    [anon_sym_DASH_GT] = ACTIONS(721),
    [anon_sym_DASH_GT_GT] = ACTIONS(724),
    [anon_sym_as_DASH_GT] = ACTIONS(724),
    [anon_sym_some_DASH_GT] = ACTIONS(721),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(724),
    [anon_sym_cond_DASH_GT] = ACTIONS(721),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(724),
    [sym__symbol_chars] = ACTIONS(727),
    [sym_member_access] = ACTIONS(730),
    [sym_field_access] = ACTIONS(730),
    [sym_new_class] = ACTIONS(730),
    [anon_sym_LPAREN] = ACTIONS(733),
    [anon_sym_LBRACK] = ACTIONS(736),
    [anon_sym_LBRACE] = ACTIONS(739),
    [anon_sym_RBRACE] = ACTIONS(742),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(744),
    [anon_sym_POUND] = ACTIONS(747),
    [anon_sym_POUND_LBRACE] = ACTIONS(750),
    [anon_sym_SEMI] = ACTIONS(753),
    [anon_sym_POUND_BANG] = ACTIONS(756),
    [anon_sym_POUND_] = ACTIONS(759),
    [anon_sym_POUND_LPAREN] = ACTIONS(762),
    [sym_shorthand_function_arg] = ACTIONS(765),
    [anon_sym_CARET] = ACTIONS(768),
    [anon_sym_CARET_COLON] = ACTIONS(771),
    [anon_sym_CARET_DQUOTE] = ACTIONS(774),
    [anon_sym_BQUOTE] = ACTIONS(777),
    [anon_sym_TILDE] = ACTIONS(780),
    [anon_sym_TILDE_AT] = ACTIONS(783),
    [sym_gensym] = ACTIONS(765),
  },
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(786),
    [sym_nil] = ACTIONS(788),
    [sym_true] = ACTIONS(788),
    [sym_false] = ACTIONS(788),
    [sym_number_long] = ACTIONS(788),
    [sym_number_double] = ACTIONS(786),
    [anon_sym_BSLASH] = ACTIONS(786),
    [anon_sym_DQUOTE] = ACTIONS(786),
    [anon_sym_POUND_DQUOTE] = ACTIONS(786),
    [anon_sym_SQUOTE] = ACTIONS(786),
    [anon_sym_LPARENquote] = ACTIONS(786),
    [anon_sym_RPAREN] = ACTIONS(786),
    [anon_sym_COLON] = ACTIONS(788),
    [anon_sym_COLON_COLON] = ACTIONS(786),
    [anon_sym_DASH_GT] = ACTIONS(788),
    [anon_sym_DASH_GT_GT] = ACTIONS(786),
    [anon_sym_as_DASH_GT] = ACTIONS(786),
    [anon_sym_some_DASH_GT] = ACTIONS(788),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(786),
    [anon_sym_cond_DASH_GT] = ACTIONS(788),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(786),
    [sym__symbol_chars] = ACTIONS(788),
    [sym_member_access] = ACTIONS(786),
    [sym_field_access] = ACTIONS(786),
    [sym_new_class] = ACTIONS(786),
    [anon_sym_LPAREN] = ACTIONS(788),
    [anon_sym_LBRACK] = ACTIONS(786),
    [anon_sym_RBRACK] = ACTIONS(786),
    [anon_sym_LBRACE] = ACTIONS(786),
    [anon_sym_RBRACE] = ACTIONS(786),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(786),
    [anon_sym_POUND] = ACTIONS(788),
    [anon_sym_POUND_LBRACE] = ACTIONS(786),
    [anon_sym_SEMI] = ACTIONS(786),
    [anon_sym_POUND_BANG] = ACTIONS(786),
    [anon_sym_POUND_] = ACTIONS(786),
    [anon_sym_POUND_LPAREN] = ACTIONS(786),
    [sym_shorthand_function_arg] = ACTIONS(786),
    [anon_sym_CARET] = ACTIONS(788),
    [anon_sym_CARET_COLON] = ACTIONS(786),
    [anon_sym_CARET_DQUOTE] = ACTIONS(786),
    [anon_sym_BQUOTE] = ACTIONS(786),
    [anon_sym_TILDE] = ACTIONS(788),
    [anon_sym_TILDE_AT] = ACTIONS(786),
    [sym_gensym] = ACTIONS(786),
  },
  [150] = {
    [sym__anything] = STATE(86),
    [sym__literals] = STATE(86),
    [sym__collection_literals] = STATE(86),
    [sym_boolean] = STATE(86),
    [sym_number] = STATE(86),
    [sym__number] = STATE(30),
    [sym_character] = STATE(86),
    [sym__character] = STATE(31),
    [sym_string] = STATE(86),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(86),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(86),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(86),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(86),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(86),
    [sym_list] = STATE(86),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(86),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(86),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym__hash_map_kv_pair] = STATE(180),
    [sym__hash_map_key] = STATE(86),
    [sym_set] = STATE(86),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(86),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(86),
    [sym_anonymous_function] = STATE(86),
    [sym_shorthand_function] = STATE(86),
    [sym_defn] = STATE(86),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(86),
    [sym_unquote] = STATE(86),
    [sym_unquote_splice] = STATE(86),
    [aux_sym__hash_map_repeat1] = STATE(180),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(163),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(165),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(790),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(169),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(171),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(175),
    [anon_sym_TILDE_AT] = ACTIONS(177),
    [sym_gensym] = ACTIONS(171),
  },
  [151] = {
    [ts_builtin_sym_end] = ACTIONS(792),
    [sym_nil] = ACTIONS(794),
    [sym_true] = ACTIONS(794),
    [sym_false] = ACTIONS(794),
    [sym_number_long] = ACTIONS(794),
    [sym_number_double] = ACTIONS(792),
    [anon_sym_BSLASH] = ACTIONS(792),
    [anon_sym_DQUOTE] = ACTIONS(792),
    [anon_sym_POUND_DQUOTE] = ACTIONS(792),
    [anon_sym_SQUOTE] = ACTIONS(792),
    [anon_sym_LPARENquote] = ACTIONS(792),
    [anon_sym_RPAREN] = ACTIONS(792),
    [anon_sym_COLON] = ACTIONS(794),
    [anon_sym_COLON_COLON] = ACTIONS(792),
    [anon_sym_DASH_GT] = ACTIONS(794),
    [anon_sym_DASH_GT_GT] = ACTIONS(792),
    [anon_sym_as_DASH_GT] = ACTIONS(792),
    [anon_sym_some_DASH_GT] = ACTIONS(794),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(792),
    [anon_sym_cond_DASH_GT] = ACTIONS(794),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(792),
    [sym__symbol_chars] = ACTIONS(794),
    [sym_member_access] = ACTIONS(792),
    [sym_field_access] = ACTIONS(792),
    [sym_new_class] = ACTIONS(792),
    [anon_sym_LPAREN] = ACTIONS(794),
    [anon_sym_LBRACK] = ACTIONS(792),
    [anon_sym_RBRACK] = ACTIONS(792),
    [anon_sym_LBRACE] = ACTIONS(792),
    [anon_sym_RBRACE] = ACTIONS(792),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(792),
    [anon_sym_POUND] = ACTIONS(794),
    [anon_sym_POUND_LBRACE] = ACTIONS(792),
    [anon_sym_SEMI] = ACTIONS(792),
    [anon_sym_POUND_BANG] = ACTIONS(792),
    [anon_sym_POUND_] = ACTIONS(792),
    [anon_sym_POUND_LPAREN] = ACTIONS(792),
    [sym_shorthand_function_arg] = ACTIONS(792),
    [anon_sym_CARET] = ACTIONS(794),
    [anon_sym_CARET_COLON] = ACTIONS(792),
    [anon_sym_CARET_DQUOTE] = ACTIONS(792),
    [anon_sym_BQUOTE] = ACTIONS(792),
    [anon_sym_TILDE] = ACTIONS(794),
    [anon_sym_TILDE_AT] = ACTIONS(792),
    [sym_gensym] = ACTIONS(792),
  },
  [152] = {
    [sym__anything] = STATE(152),
    [sym__literals] = STATE(152),
    [sym__collection_literals] = STATE(152),
    [sym_boolean] = STATE(152),
    [sym_number] = STATE(152),
    [sym__number] = STATE(30),
    [sym_character] = STATE(152),
    [sym__character] = STATE(31),
    [sym_string] = STATE(152),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(152),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(152),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(152),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(152),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(152),
    [sym_list] = STATE(152),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(152),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(152),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(152),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(152),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(152),
    [sym_anonymous_function] = STATE(152),
    [sym_shorthand_function] = STATE(152),
    [sym_defn] = STATE(152),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(152),
    [sym_unquote] = STATE(152),
    [sym_unquote_splice] = STATE(152),
    [aux_sym_program_repeat1] = STATE(152),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(796),
    [sym_true] = ACTIONS(462),
    [sym_false] = ACTIONS(462),
    [sym_number_long] = ACTIONS(465),
    [sym_number_double] = ACTIONS(468),
    [anon_sym_BSLASH] = ACTIONS(471),
    [anon_sym_DQUOTE] = ACTIONS(474),
    [anon_sym_POUND_DQUOTE] = ACTIONS(477),
    [anon_sym_SQUOTE] = ACTIONS(799),
    [anon_sym_LPARENquote] = ACTIONS(483),
    [anon_sym_COLON] = ACTIONS(486),
    [anon_sym_COLON_COLON] = ACTIONS(489),
    [anon_sym_DASH_GT] = ACTIONS(492),
    [anon_sym_DASH_GT_GT] = ACTIONS(495),
    [anon_sym_as_DASH_GT] = ACTIONS(495),
    [anon_sym_some_DASH_GT] = ACTIONS(492),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(495),
    [anon_sym_cond_DASH_GT] = ACTIONS(492),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(495),
    [sym__symbol_chars] = ACTIONS(498),
    [sym_member_access] = ACTIONS(501),
    [sym_field_access] = ACTIONS(501),
    [sym_new_class] = ACTIONS(501),
    [anon_sym_LPAREN] = ACTIONS(504),
    [anon_sym_LBRACK] = ACTIONS(507),
    [anon_sym_LBRACE] = ACTIONS(510),
    [anon_sym_RBRACE] = ACTIONS(457),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(513),
    [anon_sym_POUND] = ACTIONS(516),
    [anon_sym_POUND_LBRACE] = ACTIONS(519),
    [anon_sym_SEMI] = ACTIONS(522),
    [anon_sym_POUND_BANG] = ACTIONS(525),
    [anon_sym_POUND_] = ACTIONS(802),
    [anon_sym_POUND_LPAREN] = ACTIONS(531),
    [sym_shorthand_function_arg] = ACTIONS(805),
    [anon_sym_CARET] = ACTIONS(537),
    [anon_sym_CARET_COLON] = ACTIONS(540),
    [anon_sym_CARET_DQUOTE] = ACTIONS(543),
    [anon_sym_BQUOTE] = ACTIONS(808),
    [anon_sym_TILDE] = ACTIONS(811),
    [anon_sym_TILDE_AT] = ACTIONS(814),
    [sym_gensym] = ACTIONS(805),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(817),
    [sym_nil] = ACTIONS(819),
    [sym_true] = ACTIONS(819),
    [sym_false] = ACTIONS(819),
    [sym_number_long] = ACTIONS(819),
    [sym_number_double] = ACTIONS(817),
    [anon_sym_BSLASH] = ACTIONS(817),
    [anon_sym_DQUOTE] = ACTIONS(817),
    [anon_sym_POUND_DQUOTE] = ACTIONS(817),
    [anon_sym_SQUOTE] = ACTIONS(817),
    [anon_sym_LPARENquote] = ACTIONS(817),
    [anon_sym_RPAREN] = ACTIONS(817),
    [anon_sym_COLON] = ACTIONS(819),
    [anon_sym_COLON_COLON] = ACTIONS(817),
    [anon_sym_DASH_GT] = ACTIONS(819),
    [anon_sym_DASH_GT_GT] = ACTIONS(817),
    [anon_sym_as_DASH_GT] = ACTIONS(817),
    [anon_sym_some_DASH_GT] = ACTIONS(819),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(817),
    [anon_sym_cond_DASH_GT] = ACTIONS(819),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(817),
    [sym__symbol_chars] = ACTIONS(819),
    [sym_member_access] = ACTIONS(817),
    [sym_field_access] = ACTIONS(817),
    [sym_new_class] = ACTIONS(817),
    [anon_sym_LPAREN] = ACTIONS(819),
    [anon_sym_LBRACK] = ACTIONS(817),
    [anon_sym_RBRACK] = ACTIONS(817),
    [anon_sym_LBRACE] = ACTIONS(817),
    [anon_sym_RBRACE] = ACTIONS(817),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(817),
    [anon_sym_POUND] = ACTIONS(819),
    [anon_sym_POUND_LBRACE] = ACTIONS(817),
    [anon_sym_SEMI] = ACTIONS(817),
    [anon_sym_POUND_BANG] = ACTIONS(817),
    [anon_sym_POUND_] = ACTIONS(817),
    [anon_sym_POUND_LPAREN] = ACTIONS(817),
    [sym_shorthand_function_arg] = ACTIONS(817),
    [anon_sym_CARET] = ACTIONS(819),
    [anon_sym_CARET_COLON] = ACTIONS(817),
    [anon_sym_CARET_DQUOTE] = ACTIONS(817),
    [anon_sym_BQUOTE] = ACTIONS(817),
    [anon_sym_TILDE] = ACTIONS(819),
    [anon_sym_TILDE_AT] = ACTIONS(817),
    [sym_gensym] = ACTIONS(817),
  },
  [154] = {
    [anon_sym_DASH_GT] = ACTIONS(381),
    [anon_sym_DASH_GT_GT] = ACTIONS(379),
    [anon_sym_as_DASH_GT] = ACTIONS(379),
    [anon_sym_some_DASH_GT] = ACTIONS(381),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(379),
    [anon_sym_cond_DASH_GT] = ACTIONS(381),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(379),
    [sym__symbol_chars] = ACTIONS(381),
    [anon_sym_LPAREN] = ACTIONS(379),
    [anon_sym_LBRACK] = ACTIONS(379),
    [anon_sym_LBRACE] = ACTIONS(379),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(379),
    [anon_sym_POUND] = ACTIONS(381),
    [anon_sym_POUND_LBRACE] = ACTIONS(379),
  },
  [155] = {
    [sym__anything] = STATE(86),
    [sym__literals] = STATE(86),
    [sym__collection_literals] = STATE(86),
    [sym_boolean] = STATE(86),
    [sym_number] = STATE(86),
    [sym__number] = STATE(30),
    [sym_character] = STATE(86),
    [sym__character] = STATE(31),
    [sym_string] = STATE(86),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(86),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(86),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(86),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(86),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(86),
    [sym_list] = STATE(86),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(86),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(86),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym__hash_map_kv_pair] = STATE(148),
    [sym__hash_map_key] = STATE(86),
    [sym_set] = STATE(86),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(86),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(86),
    [sym_anonymous_function] = STATE(86),
    [sym_shorthand_function] = STATE(86),
    [sym_defn] = STATE(86),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(86),
    [sym_unquote] = STATE(86),
    [sym_unquote_splice] = STATE(86),
    [aux_sym__hash_map_repeat1] = STATE(148),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(163),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(165),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(821),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(169),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(171),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(175),
    [anon_sym_TILDE_AT] = ACTIONS(177),
    [sym_gensym] = ACTIONS(171),
  },
  [156] = {
    [anon_sym_DASH_GT] = ACTIONS(391),
    [anon_sym_DASH_GT_GT] = ACTIONS(389),
    [anon_sym_as_DASH_GT] = ACTIONS(389),
    [anon_sym_some_DASH_GT] = ACTIONS(391),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(389),
    [anon_sym_cond_DASH_GT] = ACTIONS(391),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(389),
    [sym__symbol_chars] = ACTIONS(391),
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(389),
    [anon_sym_LBRACE] = ACTIONS(389),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(389),
    [anon_sym_POUND] = ACTIONS(391),
    [anon_sym_POUND_LBRACE] = ACTIONS(389),
  },
  [157] = {
    [sym__anything] = STATE(86),
    [sym__literals] = STATE(86),
    [sym__collection_literals] = STATE(86),
    [sym_boolean] = STATE(86),
    [sym_number] = STATE(86),
    [sym__number] = STATE(30),
    [sym_character] = STATE(86),
    [sym__character] = STATE(31),
    [sym_string] = STATE(86),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(86),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(86),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(86),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(86),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(86),
    [sym_list] = STATE(86),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(86),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(86),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym__hash_map_kv_pair] = STATE(148),
    [sym__hash_map_key] = STATE(86),
    [sym_set] = STATE(86),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(86),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(86),
    [sym_anonymous_function] = STATE(86),
    [sym_shorthand_function] = STATE(86),
    [sym_defn] = STATE(86),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(86),
    [sym_unquote] = STATE(86),
    [sym_unquote_splice] = STATE(86),
    [aux_sym__hash_map_repeat1] = STATE(148),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(163),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(165),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(823),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(169),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(171),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(175),
    [anon_sym_TILDE_AT] = ACTIONS(177),
    [sym_gensym] = ACTIONS(171),
  },
  [158] = {
    [anon_sym_LBRACE] = ACTIONS(825),
  },
  [159] = {
    [anon_sym_DASH_GT] = ACTIONS(827),
    [anon_sym_DASH_GT_GT] = ACTIONS(829),
    [anon_sym_as_DASH_GT] = ACTIONS(829),
    [anon_sym_some_DASH_GT] = ACTIONS(827),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(829),
    [anon_sym_cond_DASH_GT] = ACTIONS(827),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(829),
    [sym__symbol_chars] = ACTIONS(827),
    [anon_sym_LPAREN] = ACTIONS(829),
    [anon_sym_LBRACK] = ACTIONS(829),
    [anon_sym_LBRACE] = ACTIONS(829),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(829),
    [anon_sym_POUND] = ACTIONS(827),
    [anon_sym_POUND_LBRACE] = ACTIONS(829),
    [anon_sym_CARET] = ACTIONS(827),
    [anon_sym_CARET_COLON] = ACTIONS(829),
    [anon_sym_CARET_DQUOTE] = ACTIONS(829),
  },
  [160] = {
    [sym__hex_char] = ACTIONS(831),
  },
  [161] = {
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
    [sym_member_access] = ACTIONS(833),
    [sym_field_access] = ACTIONS(833),
    [sym_new_class] = ACTIONS(833),
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
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(837),
    [sym_nil] = ACTIONS(839),
    [sym_true] = ACTIONS(839),
    [sym_false] = ACTIONS(839),
    [sym_number_long] = ACTIONS(839),
    [sym_number_double] = ACTIONS(837),
    [anon_sym_BSLASH] = ACTIONS(837),
    [anon_sym_DQUOTE] = ACTIONS(837),
    [anon_sym_POUND_DQUOTE] = ACTIONS(837),
    [anon_sym_SQUOTE] = ACTIONS(837),
    [anon_sym_LPARENquote] = ACTIONS(837),
    [anon_sym_RPAREN] = ACTIONS(837),
    [anon_sym_COLON] = ACTIONS(839),
    [anon_sym_COLON_COLON] = ACTIONS(837),
    [anon_sym_DASH_GT] = ACTIONS(839),
    [anon_sym_DASH_GT_GT] = ACTIONS(837),
    [anon_sym_as_DASH_GT] = ACTIONS(837),
    [anon_sym_some_DASH_GT] = ACTIONS(839),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(837),
    [anon_sym_cond_DASH_GT] = ACTIONS(839),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(837),
    [sym__symbol_chars] = ACTIONS(839),
    [sym_member_access] = ACTIONS(837),
    [sym_field_access] = ACTIONS(837),
    [sym_new_class] = ACTIONS(837),
    [anon_sym_LPAREN] = ACTIONS(839),
    [anon_sym_LBRACK] = ACTIONS(837),
    [anon_sym_RBRACK] = ACTIONS(837),
    [anon_sym_LBRACE] = ACTIONS(837),
    [anon_sym_RBRACE] = ACTIONS(837),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(837),
    [anon_sym_POUND] = ACTIONS(839),
    [anon_sym_POUND_LBRACE] = ACTIONS(837),
    [anon_sym_SEMI] = ACTIONS(837),
    [anon_sym_POUND_BANG] = ACTIONS(837),
    [anon_sym_POUND_] = ACTIONS(837),
    [anon_sym_POUND_LPAREN] = ACTIONS(837),
    [sym_shorthand_function_arg] = ACTIONS(837),
    [anon_sym_CARET] = ACTIONS(839),
    [anon_sym_CARET_COLON] = ACTIONS(837),
    [anon_sym_CARET_DQUOTE] = ACTIONS(837),
    [anon_sym_BQUOTE] = ACTIONS(837),
    [anon_sym_TILDE] = ACTIONS(839),
    [anon_sym_TILDE_AT] = ACTIONS(837),
    [sym_gensym] = ACTIONS(837),
  },
  [163] = {
    [sym__symbol_chars] = ACTIONS(841),
  },
  [164] = {
    [anon_sym_RPAREN] = ACTIONS(843),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(845),
    [sym_nil] = ACTIONS(847),
    [sym_true] = ACTIONS(847),
    [sym_false] = ACTIONS(847),
    [sym_number_long] = ACTIONS(847),
    [sym_number_double] = ACTIONS(845),
    [anon_sym_BSLASH] = ACTIONS(845),
    [anon_sym_DQUOTE] = ACTIONS(845),
    [anon_sym_POUND_DQUOTE] = ACTIONS(845),
    [anon_sym_SQUOTE] = ACTIONS(845),
    [anon_sym_LPARENquote] = ACTIONS(845),
    [anon_sym_RPAREN] = ACTIONS(845),
    [anon_sym_COLON] = ACTIONS(847),
    [anon_sym_COLON_COLON] = ACTIONS(845),
    [anon_sym_DASH_GT] = ACTIONS(847),
    [anon_sym_DASH_GT_GT] = ACTIONS(845),
    [anon_sym_as_DASH_GT] = ACTIONS(845),
    [anon_sym_some_DASH_GT] = ACTIONS(847),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(845),
    [anon_sym_cond_DASH_GT] = ACTIONS(847),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(845),
    [sym__symbol_chars] = ACTIONS(847),
    [sym_member_access] = ACTIONS(845),
    [sym_field_access] = ACTIONS(845),
    [sym_new_class] = ACTIONS(845),
    [anon_sym_LPAREN] = ACTIONS(847),
    [anon_sym_LBRACK] = ACTIONS(845),
    [anon_sym_RBRACK] = ACTIONS(845),
    [anon_sym_LBRACE] = ACTIONS(845),
    [anon_sym_RBRACE] = ACTIONS(845),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(845),
    [anon_sym_POUND] = ACTIONS(847),
    [anon_sym_POUND_LBRACE] = ACTIONS(845),
    [anon_sym_SEMI] = ACTIONS(845),
    [anon_sym_POUND_BANG] = ACTIONS(845),
    [anon_sym_POUND_] = ACTIONS(845),
    [anon_sym_POUND_LPAREN] = ACTIONS(845),
    [sym_shorthand_function_arg] = ACTIONS(845),
    [anon_sym_CARET] = ACTIONS(847),
    [anon_sym_CARET_COLON] = ACTIONS(845),
    [anon_sym_CARET_DQUOTE] = ACTIONS(845),
    [anon_sym_BQUOTE] = ACTIONS(845),
    [anon_sym_TILDE] = ACTIONS(847),
    [anon_sym_TILDE_AT] = ACTIONS(845),
    [sym_gensym] = ACTIONS(845),
  },
  [166] = {
    [anon_sym_RPAREN] = ACTIONS(849),
  },
  [167] = {
    [anon_sym_RPAREN] = ACTIONS(851),
  },
  [168] = {
    [sym__anything] = STATE(143),
    [sym__literals] = STATE(143),
    [sym__collection_literals] = STATE(143),
    [sym_boolean] = STATE(143),
    [sym_number] = STATE(143),
    [sym__number] = STATE(30),
    [sym_character] = STATE(143),
    [sym__character] = STATE(31),
    [sym_string] = STATE(143),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(143),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(143),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(143),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(143),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(143),
    [sym_list] = STATE(143),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(143),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(143),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym_set] = STATE(143),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(143),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(143),
    [sym_anonymous_function] = STATE(143),
    [sym_shorthand_function] = STATE(143),
    [sym_defn] = STATE(143),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(143),
    [sym_unquote] = STATE(143),
    [sym_unquote_splice] = STATE(143),
    [aux_sym_program_repeat1] = STATE(143),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(363),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(127),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(853),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(131),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(367),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_TILDE_AT] = ACTIONS(145),
    [sym_gensym] = ACTIONS(367),
  },
  [169] = {
    [aux_sym__multi_arity_fn_repeat1] = STATE(169),
    [anon_sym_RPAREN] = ACTIONS(855),
    [anon_sym_LPAREN] = ACTIONS(857),
  },
  [170] = {
    [aux_sym__string_repeat1] = STATE(189),
    [anon_sym_DQUOTE] = ACTIONS(860),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(862),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(862),
  },
  [171] = {
    [anon_sym_LPAREN] = ACTIONS(864),
    [anon_sym_LBRACK] = ACTIONS(864),
    [anon_sym_LBRACE] = ACTIONS(864),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(864),
    [anon_sym_POUND] = ACTIONS(866),
  },
  [172] = {
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(247),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(247),
    [anon_sym_POUND] = ACTIONS(249),
  },
  [173] = {
    [anon_sym_LPAREN] = ACTIONS(868),
    [anon_sym_LBRACK] = ACTIONS(868),
  },
  [174] = {
    [anon_sym_RPAREN] = ACTIONS(870),
  },
  [175] = {
    [sym_vector] = STATE(134),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(173),
    [sym__hash_map] = STATE(108),
    [sym_namespace_map] = STATE(108),
    [sym__after_the_fn_name] = STATE(191),
    [sym__single_arity_fn] = STATE(191),
    [sym__multi_arity_fn] = STATE(191),
    [sym_params] = STATE(137),
    [sym_attr_map] = STATE(192),
    [aux_sym__multi_arity_fn_repeat1] = STATE(138),
    [anon_sym_LPAREN] = ACTIONS(361),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(215),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(217),
    [anon_sym_POUND] = ACTIONS(219),
  },
  [176] = {
    [sym_vector] = STATE(134),
    [sym__vector] = STATE(38),
    [sym__after_the_fn_name] = STATE(191),
    [sym__single_arity_fn] = STATE(191),
    [sym__multi_arity_fn] = STATE(191),
    [sym_params] = STATE(137),
    [aux_sym__multi_arity_fn_repeat1] = STATE(138),
    [anon_sym_LPAREN] = ACTIONS(361),
    [anon_sym_LBRACK] = ACTIONS(39),
  },
  [177] = {
    [sym_string] = STATE(171),
    [sym__string] = STATE(172),
    [sym_vector] = STATE(134),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(173),
    [sym__hash_map] = STATE(108),
    [sym_namespace_map] = STATE(108),
    [sym__after_the_fn_name] = STATE(191),
    [sym__single_arity_fn] = STATE(191),
    [sym__multi_arity_fn] = STATE(191),
    [sym_params] = STATE(137),
    [sym_docstring] = STATE(193),
    [sym_attr_map] = STATE(192),
    [aux_sym__multi_arity_fn_repeat1] = STATE(138),
    [anon_sym_DQUOTE] = ACTIONS(628),
    [anon_sym_LPAREN] = ACTIONS(361),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(215),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(217),
    [anon_sym_POUND] = ACTIONS(219),
  },
  [178] = {
    [sym_metadata_shorthand] = STATE(178),
    [aux_sym_metadata_repeat1] = STATE(178),
    [anon_sym_DASH_GT] = ACTIONS(557),
    [anon_sym_DASH_GT_GT] = ACTIONS(555),
    [anon_sym_as_DASH_GT] = ACTIONS(555),
    [anon_sym_some_DASH_GT] = ACTIONS(557),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(555),
    [anon_sym_cond_DASH_GT] = ACTIONS(557),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(555),
    [sym__symbol_chars] = ACTIONS(557),
    [anon_sym_CARET] = ACTIONS(559),
    [anon_sym_CARET_COLON] = ACTIONS(562),
    [anon_sym_CARET_DQUOTE] = ACTIONS(565),
  },
  [179] = {
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
    [sym_member_access] = ACTIONS(872),
    [sym_field_access] = ACTIONS(872),
    [sym_new_class] = ACTIONS(872),
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
  [180] = {
    [sym__anything] = STATE(86),
    [sym__literals] = STATE(86),
    [sym__collection_literals] = STATE(86),
    [sym_boolean] = STATE(86),
    [sym_number] = STATE(86),
    [sym__number] = STATE(30),
    [sym_character] = STATE(86),
    [sym__character] = STATE(31),
    [sym_string] = STATE(86),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(86),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(86),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(86),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(86),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(86),
    [sym_list] = STATE(86),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(86),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(86),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym__hash_map_kv_pair] = STATE(148),
    [sym__hash_map_key] = STATE(86),
    [sym_set] = STATE(86),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(86),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(86),
    [sym_anonymous_function] = STATE(86),
    [sym_shorthand_function] = STATE(86),
    [sym_defn] = STATE(86),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(86),
    [sym_unquote] = STATE(86),
    [sym_unquote_splice] = STATE(86),
    [aux_sym__hash_map_repeat1] = STATE(148),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(163),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(165),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(876),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(169),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(171),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(175),
    [anon_sym_TILDE_AT] = ACTIONS(177),
    [sym_gensym] = ACTIONS(171),
  },
  [181] = {
    [anon_sym_DASH_GT] = ACTIONS(686),
    [anon_sym_DASH_GT_GT] = ACTIONS(684),
    [anon_sym_as_DASH_GT] = ACTIONS(684),
    [anon_sym_some_DASH_GT] = ACTIONS(686),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(684),
    [anon_sym_cond_DASH_GT] = ACTIONS(686),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(684),
    [sym__symbol_chars] = ACTIONS(686),
    [anon_sym_LPAREN] = ACTIONS(684),
    [anon_sym_LBRACK] = ACTIONS(684),
    [anon_sym_LBRACE] = ACTIONS(684),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(684),
    [anon_sym_POUND] = ACTIONS(686),
    [anon_sym_POUND_LBRACE] = ACTIONS(684),
  },
  [182] = {
    [anon_sym_DASH_GT] = ACTIONS(788),
    [anon_sym_DASH_GT_GT] = ACTIONS(786),
    [anon_sym_as_DASH_GT] = ACTIONS(786),
    [anon_sym_some_DASH_GT] = ACTIONS(788),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(786),
    [anon_sym_cond_DASH_GT] = ACTIONS(788),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(786),
    [sym__symbol_chars] = ACTIONS(788),
    [anon_sym_LPAREN] = ACTIONS(786),
    [anon_sym_LBRACK] = ACTIONS(786),
    [anon_sym_LBRACE] = ACTIONS(786),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(786),
    [anon_sym_POUND] = ACTIONS(788),
    [anon_sym_POUND_LBRACE] = ACTIONS(786),
  },
  [183] = {
    [sym__anything] = STATE(86),
    [sym__literals] = STATE(86),
    [sym__collection_literals] = STATE(86),
    [sym_boolean] = STATE(86),
    [sym_number] = STATE(86),
    [sym__number] = STATE(30),
    [sym_character] = STATE(86),
    [sym__character] = STATE(31),
    [sym_string] = STATE(86),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(86),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(86),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(86),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(86),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(86),
    [sym_list] = STATE(86),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(86),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(86),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym__hash_map_kv_pair] = STATE(196),
    [sym__hash_map_key] = STATE(86),
    [sym_set] = STATE(86),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(86),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(86),
    [sym_anonymous_function] = STATE(86),
    [sym_shorthand_function] = STATE(86),
    [sym_defn] = STATE(86),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(86),
    [sym_unquote] = STATE(86),
    [sym_unquote_splice] = STATE(86),
    [aux_sym__hash_map_repeat1] = STATE(196),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(163),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(165),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(878),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(169),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(171),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(175),
    [anon_sym_TILDE_AT] = ACTIONS(177),
    [sym_gensym] = ACTIONS(171),
  },
  [184] = {
    [sym__hex_char] = ACTIONS(880),
  },
  [185] = {
    [anon_sym_DQUOTE] = ACTIONS(598),
    [anon_sym_LPAREN] = ACTIONS(598),
    [anon_sym_LBRACK] = ACTIONS(598),
    [anon_sym_LBRACE] = ACTIONS(598),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(598),
    [anon_sym_POUND] = ACTIONS(600),
  },
  [186] = {
    [anon_sym_RPAREN] = ACTIONS(882),
    [anon_sym_LPAREN] = ACTIONS(882),
  },
  [187] = {
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
    [sym_member_access] = ACTIONS(884),
    [sym_field_access] = ACTIONS(884),
    [sym_new_class] = ACTIONS(884),
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
  [188] = {
    [anon_sym_LPAREN] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(311),
    [anon_sym_LBRACE] = ACTIONS(311),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(311),
    [anon_sym_POUND] = ACTIONS(313),
  },
  [189] = {
    [aux_sym__string_repeat1] = STATE(121),
    [anon_sym_DQUOTE] = ACTIONS(888),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(317),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(317),
  },
  [190] = {
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
    [sym_member_access] = ACTIONS(890),
    [sym_field_access] = ACTIONS(890),
    [sym_new_class] = ACTIONS(890),
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
  [191] = {
    [anon_sym_RPAREN] = ACTIONS(894),
  },
  [192] = {
    [sym_vector] = STATE(134),
    [sym__vector] = STATE(38),
    [sym__after_the_fn_name] = STATE(200),
    [sym__single_arity_fn] = STATE(200),
    [sym__multi_arity_fn] = STATE(200),
    [sym_params] = STATE(137),
    [aux_sym__multi_arity_fn_repeat1] = STATE(138),
    [anon_sym_LPAREN] = ACTIONS(361),
    [anon_sym_LBRACK] = ACTIONS(39),
  },
  [193] = {
    [sym_vector] = STATE(134),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(173),
    [sym__hash_map] = STATE(108),
    [sym_namespace_map] = STATE(108),
    [sym__after_the_fn_name] = STATE(200),
    [sym__single_arity_fn] = STATE(200),
    [sym__multi_arity_fn] = STATE(200),
    [sym_params] = STATE(137),
    [sym_attr_map] = STATE(201),
    [aux_sym__multi_arity_fn_repeat1] = STATE(138),
    [anon_sym_LPAREN] = ACTIONS(361),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(215),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(217),
    [anon_sym_POUND] = ACTIONS(219),
  },
  [194] = {
    [ts_builtin_sym_end] = ACTIONS(896),
    [sym_nil] = ACTIONS(898),
    [sym_true] = ACTIONS(898),
    [sym_false] = ACTIONS(898),
    [sym_number_long] = ACTIONS(898),
    [sym_number_double] = ACTIONS(896),
    [anon_sym_BSLASH] = ACTIONS(896),
    [anon_sym_DQUOTE] = ACTIONS(896),
    [anon_sym_POUND_DQUOTE] = ACTIONS(896),
    [anon_sym_SQUOTE] = ACTIONS(896),
    [anon_sym_LPARENquote] = ACTIONS(896),
    [anon_sym_RPAREN] = ACTIONS(896),
    [anon_sym_COLON] = ACTIONS(898),
    [anon_sym_COLON_COLON] = ACTIONS(896),
    [anon_sym_DASH_GT] = ACTIONS(898),
    [anon_sym_DASH_GT_GT] = ACTIONS(896),
    [anon_sym_as_DASH_GT] = ACTIONS(896),
    [anon_sym_some_DASH_GT] = ACTIONS(898),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(896),
    [anon_sym_cond_DASH_GT] = ACTIONS(898),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(896),
    [sym__symbol_chars] = ACTIONS(898),
    [sym_member_access] = ACTIONS(896),
    [sym_field_access] = ACTIONS(896),
    [sym_new_class] = ACTIONS(896),
    [anon_sym_LPAREN] = ACTIONS(898),
    [anon_sym_LBRACK] = ACTIONS(896),
    [anon_sym_RBRACK] = ACTIONS(896),
    [anon_sym_LBRACE] = ACTIONS(896),
    [anon_sym_RBRACE] = ACTIONS(896),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(896),
    [anon_sym_POUND] = ACTIONS(898),
    [anon_sym_POUND_LBRACE] = ACTIONS(896),
    [anon_sym_SEMI] = ACTIONS(896),
    [anon_sym_POUND_BANG] = ACTIONS(896),
    [anon_sym_POUND_] = ACTIONS(896),
    [anon_sym_POUND_LPAREN] = ACTIONS(896),
    [sym_shorthand_function_arg] = ACTIONS(896),
    [anon_sym_CARET] = ACTIONS(898),
    [anon_sym_CARET_COLON] = ACTIONS(896),
    [anon_sym_CARET_DQUOTE] = ACTIONS(896),
    [anon_sym_BQUOTE] = ACTIONS(896),
    [anon_sym_TILDE] = ACTIONS(898),
    [anon_sym_TILDE_AT] = ACTIONS(896),
    [sym_gensym] = ACTIONS(896),
  },
  [195] = {
    [anon_sym_DASH_GT] = ACTIONS(874),
    [anon_sym_DASH_GT_GT] = ACTIONS(872),
    [anon_sym_as_DASH_GT] = ACTIONS(872),
    [anon_sym_some_DASH_GT] = ACTIONS(874),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(872),
    [anon_sym_cond_DASH_GT] = ACTIONS(874),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(872),
    [sym__symbol_chars] = ACTIONS(874),
    [anon_sym_LPAREN] = ACTIONS(872),
    [anon_sym_LBRACK] = ACTIONS(872),
    [anon_sym_LBRACE] = ACTIONS(872),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(872),
    [anon_sym_POUND] = ACTIONS(874),
    [anon_sym_POUND_LBRACE] = ACTIONS(872),
  },
  [196] = {
    [sym__anything] = STATE(86),
    [sym__literals] = STATE(86),
    [sym__collection_literals] = STATE(86),
    [sym_boolean] = STATE(86),
    [sym_number] = STATE(86),
    [sym__number] = STATE(30),
    [sym_character] = STATE(86),
    [sym__character] = STATE(31),
    [sym_string] = STATE(86),
    [sym__string] = STATE(32),
    [sym_regex] = STATE(86),
    [sym__regex] = STATE(33),
    [sym_quote] = STATE(86),
    [sym__quote] = STATE(34),
    [sym_keyword] = STATE(86),
    [sym__keyword] = STATE(35),
    [sym__unqualified_keyword] = STATE(35),
    [sym_qualified_keyword] = STATE(35),
    [sym_symbol] = STATE(86),
    [sym__symbol] = STATE(36),
    [sym_threading_macro] = STATE(36),
    [sym_qualified_symbol] = STATE(36),
    [sym_interop] = STATE(86),
    [sym_list] = STATE(86),
    [sym__list] = STATE(37),
    [sym_vector] = STATE(86),
    [sym__vector] = STATE(38),
    [sym_hash_map] = STATE(86),
    [sym__hash_map] = STATE(39),
    [sym_namespace_map] = STATE(39),
    [sym__hash_map_kv_pair] = STATE(148),
    [sym__hash_map_key] = STATE(86),
    [sym_set] = STATE(86),
    [sym__set] = STATE(40),
    [sym_comment] = STATE(86),
    [sym_semicolon] = STATE(41),
    [sym_shebang_line] = STATE(41),
    [sym_ignore_form] = STATE(41),
    [sym_comment_macro] = STATE(41),
    [sym__functions] = STATE(86),
    [sym_anonymous_function] = STATE(86),
    [sym_shorthand_function] = STATE(86),
    [sym_defn] = STATE(86),
    [sym_metadata] = STATE(42),
    [sym__metadata_map] = STATE(43),
    [sym_metadata_shorthand] = STATE(45),
    [sym_syntax_quote] = STATE(86),
    [sym_unquote] = STATE(86),
    [sym_unquote_splice] = STATE(86),
    [aux_sym__hash_map_repeat1] = STATE(148),
    [aux_sym_metadata_repeat1] = STATE(45),
    [sym_nil] = ACTIONS(163),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(165),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(900),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(169),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(171),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(175),
    [anon_sym_TILDE_AT] = ACTIONS(177),
    [sym_gensym] = ACTIONS(171),
  },
  [197] = {
    [ts_builtin_sym_end] = ACTIONS(902),
    [sym_nil] = ACTIONS(904),
    [sym_true] = ACTIONS(904),
    [sym_false] = ACTIONS(904),
    [sym_number_long] = ACTIONS(904),
    [sym_number_double] = ACTIONS(902),
    [anon_sym_BSLASH] = ACTIONS(902),
    [anon_sym_DQUOTE] = ACTIONS(902),
    [anon_sym_POUND_DQUOTE] = ACTIONS(902),
    [anon_sym_SQUOTE] = ACTIONS(902),
    [anon_sym_LPARENquote] = ACTIONS(902),
    [anon_sym_RPAREN] = ACTIONS(902),
    [anon_sym_COLON] = ACTIONS(904),
    [anon_sym_COLON_COLON] = ACTIONS(902),
    [anon_sym_DASH_GT] = ACTIONS(904),
    [anon_sym_DASH_GT_GT] = ACTIONS(902),
    [anon_sym_as_DASH_GT] = ACTIONS(902),
    [anon_sym_some_DASH_GT] = ACTIONS(904),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(902),
    [anon_sym_cond_DASH_GT] = ACTIONS(904),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(902),
    [sym__symbol_chars] = ACTIONS(904),
    [sym_member_access] = ACTIONS(902),
    [sym_field_access] = ACTIONS(902),
    [sym_new_class] = ACTIONS(902),
    [anon_sym_LPAREN] = ACTIONS(904),
    [anon_sym_LBRACK] = ACTIONS(902),
    [anon_sym_RBRACK] = ACTIONS(902),
    [anon_sym_LBRACE] = ACTIONS(902),
    [anon_sym_RBRACE] = ACTIONS(902),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(902),
    [anon_sym_POUND] = ACTIONS(904),
    [anon_sym_POUND_LBRACE] = ACTIONS(902),
    [anon_sym_SEMI] = ACTIONS(902),
    [anon_sym_POUND_BANG] = ACTIONS(902),
    [anon_sym_POUND_] = ACTIONS(902),
    [anon_sym_POUND_LPAREN] = ACTIONS(902),
    [sym_shorthand_function_arg] = ACTIONS(902),
    [anon_sym_CARET] = ACTIONS(904),
    [anon_sym_CARET_COLON] = ACTIONS(902),
    [anon_sym_CARET_DQUOTE] = ACTIONS(902),
    [anon_sym_BQUOTE] = ACTIONS(902),
    [anon_sym_TILDE] = ACTIONS(904),
    [anon_sym_TILDE_AT] = ACTIONS(902),
    [sym_gensym] = ACTIONS(902),
  },
  [198] = {
    [anon_sym_LPAREN] = ACTIONS(574),
    [anon_sym_LBRACK] = ACTIONS(574),
    [anon_sym_LBRACE] = ACTIONS(574),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(574),
    [anon_sym_POUND] = ACTIONS(576),
  },
  [199] = {
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
    [sym_member_access] = ACTIONS(906),
    [sym_field_access] = ACTIONS(906),
    [sym_new_class] = ACTIONS(906),
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
  [200] = {
    [anon_sym_RPAREN] = ACTIONS(910),
  },
  [201] = {
    [sym_vector] = STATE(134),
    [sym__vector] = STATE(38),
    [sym__after_the_fn_name] = STATE(204),
    [sym__single_arity_fn] = STATE(204),
    [sym__multi_arity_fn] = STATE(204),
    [sym_params] = STATE(137),
    [aux_sym__multi_arity_fn_repeat1] = STATE(138),
    [anon_sym_LPAREN] = ACTIONS(361),
    [anon_sym_LBRACK] = ACTIONS(39),
  },
  [202] = {
    [anon_sym_DASH_GT] = ACTIONS(898),
    [anon_sym_DASH_GT_GT] = ACTIONS(896),
    [anon_sym_as_DASH_GT] = ACTIONS(896),
    [anon_sym_some_DASH_GT] = ACTIONS(898),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(896),
    [anon_sym_cond_DASH_GT] = ACTIONS(898),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(896),
    [sym__symbol_chars] = ACTIONS(898),
    [anon_sym_LPAREN] = ACTIONS(896),
    [anon_sym_LBRACK] = ACTIONS(896),
    [anon_sym_LBRACE] = ACTIONS(896),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(896),
    [anon_sym_POUND] = ACTIONS(898),
    [anon_sym_POUND_LBRACE] = ACTIONS(896),
  },
  [203] = {
    [ts_builtin_sym_end] = ACTIONS(912),
    [sym_nil] = ACTIONS(914),
    [sym_true] = ACTIONS(914),
    [sym_false] = ACTIONS(914),
    [sym_number_long] = ACTIONS(914),
    [sym_number_double] = ACTIONS(912),
    [anon_sym_BSLASH] = ACTIONS(912),
    [anon_sym_DQUOTE] = ACTIONS(912),
    [anon_sym_POUND_DQUOTE] = ACTIONS(912),
    [anon_sym_SQUOTE] = ACTIONS(912),
    [anon_sym_LPARENquote] = ACTIONS(912),
    [anon_sym_RPAREN] = ACTIONS(912),
    [anon_sym_COLON] = ACTIONS(914),
    [anon_sym_COLON_COLON] = ACTIONS(912),
    [anon_sym_DASH_GT] = ACTIONS(914),
    [anon_sym_DASH_GT_GT] = ACTIONS(912),
    [anon_sym_as_DASH_GT] = ACTIONS(912),
    [anon_sym_some_DASH_GT] = ACTIONS(914),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(912),
    [anon_sym_cond_DASH_GT] = ACTIONS(914),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(912),
    [sym__symbol_chars] = ACTIONS(914),
    [sym_member_access] = ACTIONS(912),
    [sym_field_access] = ACTIONS(912),
    [sym_new_class] = ACTIONS(912),
    [anon_sym_LPAREN] = ACTIONS(914),
    [anon_sym_LBRACK] = ACTIONS(912),
    [anon_sym_RBRACK] = ACTIONS(912),
    [anon_sym_LBRACE] = ACTIONS(912),
    [anon_sym_RBRACE] = ACTIONS(912),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(912),
    [anon_sym_POUND] = ACTIONS(914),
    [anon_sym_POUND_LBRACE] = ACTIONS(912),
    [anon_sym_SEMI] = ACTIONS(912),
    [anon_sym_POUND_BANG] = ACTIONS(912),
    [anon_sym_POUND_] = ACTIONS(912),
    [anon_sym_POUND_LPAREN] = ACTIONS(912),
    [sym_shorthand_function_arg] = ACTIONS(912),
    [anon_sym_CARET] = ACTIONS(914),
    [anon_sym_CARET_COLON] = ACTIONS(912),
    [anon_sym_CARET_DQUOTE] = ACTIONS(912),
    [anon_sym_BQUOTE] = ACTIONS(912),
    [anon_sym_TILDE] = ACTIONS(914),
    [anon_sym_TILDE_AT] = ACTIONS(912),
    [sym_gensym] = ACTIONS(912),
  },
  [204] = {
    [anon_sym_RPAREN] = ACTIONS(916),
  },
  [205] = {
    [ts_builtin_sym_end] = ACTIONS(918),
    [sym_nil] = ACTIONS(920),
    [sym_true] = ACTIONS(920),
    [sym_false] = ACTIONS(920),
    [sym_number_long] = ACTIONS(920),
    [sym_number_double] = ACTIONS(918),
    [anon_sym_BSLASH] = ACTIONS(918),
    [anon_sym_DQUOTE] = ACTIONS(918),
    [anon_sym_POUND_DQUOTE] = ACTIONS(918),
    [anon_sym_SQUOTE] = ACTIONS(918),
    [anon_sym_LPARENquote] = ACTIONS(918),
    [anon_sym_RPAREN] = ACTIONS(918),
    [anon_sym_COLON] = ACTIONS(920),
    [anon_sym_COLON_COLON] = ACTIONS(918),
    [anon_sym_DASH_GT] = ACTIONS(920),
    [anon_sym_DASH_GT_GT] = ACTIONS(918),
    [anon_sym_as_DASH_GT] = ACTIONS(918),
    [anon_sym_some_DASH_GT] = ACTIONS(920),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(918),
    [anon_sym_cond_DASH_GT] = ACTIONS(920),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(918),
    [sym__symbol_chars] = ACTIONS(920),
    [sym_member_access] = ACTIONS(918),
    [sym_field_access] = ACTIONS(918),
    [sym_new_class] = ACTIONS(918),
    [anon_sym_LPAREN] = ACTIONS(920),
    [anon_sym_LBRACK] = ACTIONS(918),
    [anon_sym_RBRACK] = ACTIONS(918),
    [anon_sym_LBRACE] = ACTIONS(918),
    [anon_sym_RBRACE] = ACTIONS(918),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(918),
    [anon_sym_POUND] = ACTIONS(920),
    [anon_sym_POUND_LBRACE] = ACTIONS(918),
    [anon_sym_SEMI] = ACTIONS(918),
    [anon_sym_POUND_BANG] = ACTIONS(918),
    [anon_sym_POUND_] = ACTIONS(918),
    [anon_sym_POUND_LPAREN] = ACTIONS(918),
    [sym_shorthand_function_arg] = ACTIONS(918),
    [anon_sym_CARET] = ACTIONS(920),
    [anon_sym_CARET_COLON] = ACTIONS(918),
    [anon_sym_CARET_DQUOTE] = ACTIONS(918),
    [anon_sym_BQUOTE] = ACTIONS(918),
    [anon_sym_TILDE] = ACTIONS(920),
    [anon_sym_TILDE_AT] = ACTIONS(918),
    [sym_gensym] = ACTIONS(918),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(44),
  [9] = {.count = 1, .reusable = false}, SHIFT(2),
  [11] = {.count = 1, .reusable = false}, SHIFT(30),
  [13] = {.count = 1, .reusable = true}, SHIFT(30),
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
  [35] = {.count = 1, .reusable = true}, SHIFT(12),
  [37] = {.count = 1, .reusable = false}, SHIFT(13),
  [39] = {.count = 1, .reusable = true}, SHIFT(14),
  [41] = {.count = 1, .reusable = true}, SHIFT(15),
  [43] = {.count = 1, .reusable = true}, SHIFT(16),
  [45] = {.count = 1, .reusable = false}, SHIFT(17),
  [47] = {.count = 1, .reusable = true}, SHIFT(18),
  [49] = {.count = 1, .reusable = true}, SHIFT(19),
  [51] = {.count = 1, .reusable = true}, SHIFT(20),
  [53] = {.count = 1, .reusable = true}, SHIFT(21),
  [55] = {.count = 1, .reusable = true}, SHIFT(22),
  [57] = {.count = 1, .reusable = true}, SHIFT(44),
  [59] = {.count = 1, .reusable = false}, SHIFT(23),
  [61] = {.count = 1, .reusable = true}, SHIFT(24),
  [63] = {.count = 1, .reusable = true}, SHIFT(25),
  [65] = {.count = 1, .reusable = true}, SHIFT(26),
  [67] = {.count = 1, .reusable = false}, SHIFT(27),
  [69] = {.count = 1, .reusable = true}, SHIFT(28),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 1),
  [75] = {.count = 1, .reusable = false}, SHIFT(46),
  [77] = {.count = 1, .reusable = false}, SHIFT(47),
  [79] = {.count = 1, .reusable = false}, SHIFT(48),
  [81] = {.count = 1, .reusable = false}, SHIFT(49),
  [83] = {.count = 1, .reusable = false}, SHIFT(50),
  [85] = {.count = 1, .reusable = false}, SHIFT(51),
  [87] = {.count = 1, .reusable = false}, SHIFT(52),
  [89] = {.count = 1, .reusable = false}, SHIFT(53),
  [91] = {.count = 1, .reusable = true}, SHIFT(53),
  [93] = {.count = 1, .reusable = false}, SHIFT(59),
  [95] = {.count = 1, .reusable = true}, SHIFT(54),
  [97] = {.count = 1, .reusable = true}, SHIFT(55),
  [99] = {.count = 1, .reusable = true}, SHIFT(59),
  [101] = {.count = 1, .reusable = true}, SHIFT(56),
  [103] = {.count = 1, .reusable = false}, SHIFT(57),
  [105] = {.count = 1, .reusable = true}, SHIFT(58),
  [107] = {.count = 1, .reusable = true}, SHIFT(60),
  [109] = {.count = 1, .reusable = true}, SHIFT(61),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_threading_macro, 1),
  [113] = {.count = 1, .reusable = false}, REDUCE(sym_threading_macro, 1),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym__symbol, 1),
  [117] = {.count = 1, .reusable = false}, REDUCE(sym__symbol, 1),
  [119] = {.count = 1, .reusable = true}, SHIFT(62),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_interop, 1),
  [123] = {.count = 1, .reusable = false}, REDUCE(sym_interop, 1),
  [125] = {.count = 1, .reusable = false}, SHIFT(72),
  [127] = {.count = 1, .reusable = true}, SHIFT(63),
  [129] = {.count = 1, .reusable = true}, SHIFT(64),
  [131] = {.count = 1, .reusable = true}, SHIFT(65),
  [133] = {.count = 1, .reusable = false}, SHIFT(66),
  [135] = {.count = 1, .reusable = false}, SHIFT(67),
  [137] = {.count = 1, .reusable = true}, SHIFT(72),
  [139] = {.count = 1, .reusable = false}, SHIFT(68),
  [141] = {.count = 1, .reusable = true}, SHIFT(69),
  [143] = {.count = 1, .reusable = false}, SHIFT(70),
  [145] = {.count = 1, .reusable = true}, SHIFT(71),
  [147] = {.count = 1, .reusable = false}, SHIFT(79),
  [149] = {.count = 1, .reusable = true}, SHIFT(73),
  [151] = {.count = 1, .reusable = true}, SHIFT(74),
  [153] = {.count = 1, .reusable = true}, SHIFT(75),
  [155] = {.count = 1, .reusable = true}, SHIFT(79),
  [157] = {.count = 1, .reusable = true}, SHIFT(76),
  [159] = {.count = 1, .reusable = false}, SHIFT(77),
  [161] = {.count = 1, .reusable = true}, SHIFT(78),
  [163] = {.count = 1, .reusable = false}, SHIFT(86),
  [165] = {.count = 1, .reusable = true}, SHIFT(80),
  [167] = {.count = 1, .reusable = true}, SHIFT(81),
  [169] = {.count = 1, .reusable = true}, SHIFT(82),
  [171] = {.count = 1, .reusable = true}, SHIFT(86),
  [173] = {.count = 1, .reusable = true}, SHIFT(83),
  [175] = {.count = 1, .reusable = false}, SHIFT(84),
  [177] = {.count = 1, .reusable = true}, SHIFT(85),
  [179] = {.count = 1, .reusable = true}, SHIFT(88),
  [181] = {.count = 1, .reusable = true}, SHIFT(90),
  [183] = {.count = 1, .reusable = false}, SHIFT(97),
  [185] = {.count = 1, .reusable = true}, SHIFT(91),
  [187] = {.count = 1, .reusable = true}, SHIFT(92),
  [189] = {.count = 1, .reusable = true}, SHIFT(93),
  [191] = {.count = 1, .reusable = true}, SHIFT(97),
  [193] = {.count = 1, .reusable = true}, SHIFT(94),
  [195] = {.count = 1, .reusable = false}, SHIFT(95),
  [197] = {.count = 1, .reusable = true}, SHIFT(96),
  [199] = {.count = 1, .reusable = false}, SHIFT(98),
  [201] = {.count = 1, .reusable = false}, SHIFT(99),
  [203] = {.count = 1, .reusable = false}, SHIFT(100),
  [205] = {.count = 1, .reusable = true}, SHIFT(100),
  [207] = {.count = 1, .reusable = false}, SHIFT(102),
  [209] = {.count = 1, .reusable = true}, SHIFT(101),
  [211] = {.count = 1, .reusable = true}, SHIFT(102),
  [213] = {.count = 1, .reusable = true}, SHIFT(103),
  [215] = {.count = 1, .reusable = true}, SHIFT(104),
  [217] = {.count = 1, .reusable = true}, SHIFT(105),
  [219] = {.count = 1, .reusable = false}, SHIFT(106),
  [221] = {.count = 1, .reusable = false}, SHIFT(103),
  [223] = {.count = 1, .reusable = false}, SHIFT(109),
  [225] = {.count = 1, .reusable = false}, SHIFT(110),
  [227] = {.count = 1, .reusable = true}, SHIFT(110),
  [229] = {.count = 1, .reusable = false}, SHIFT(111),
  [231] = {.count = 1, .reusable = true}, SHIFT(111),
  [233] = {.count = 1, .reusable = false}, SHIFT(112),
  [235] = {.count = 1, .reusable = true}, SHIFT(112),
  [237] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_number, 1),
  [241] = {.count = 1, .reusable = false}, REDUCE(sym_number, 1),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_character, 1),
  [245] = {.count = 1, .reusable = false}, REDUCE(sym_character, 1),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [249] = {.count = 1, .reusable = false}, REDUCE(sym_string, 1),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_regex, 1),
  [253] = {.count = 1, .reusable = false}, REDUCE(sym_regex, 1),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_quote, 1),
  [257] = {.count = 1, .reusable = false}, REDUCE(sym_quote, 1),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym_keyword, 1),
  [261] = {.count = 1, .reusable = false}, REDUCE(sym_keyword, 1),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_symbol, 1),
  [265] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 1),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_list, 1),
  [269] = {.count = 1, .reusable = false}, REDUCE(sym_list, 1),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym_vector, 1),
  [273] = {.count = 1, .reusable = false}, REDUCE(sym_vector, 1),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map, 1),
  [277] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map, 1),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym_set, 1),
  [281] = {.count = 1, .reusable = false}, REDUCE(sym_set, 1),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [285] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 1),
  [287] = {.count = 1, .reusable = true}, SHIFT(113),
  [289] = {.count = 1, .reusable = false}, REDUCE(sym_metadata, 1),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_metadata, 1),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [295] = {.count = 1, .reusable = false}, SHIFT(115),
  [297] = {.count = 1, .reusable = true}, SHIFT(115),
  [299] = {.count = 1, .reusable = false}, SHIFT(116),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym__character, 2),
  [303] = {.count = 1, .reusable = false}, REDUCE(sym__character, 2),
  [305] = {.count = 1, .reusable = true}, SHIFT(118),
  [307] = {.count = 1, .reusable = true}, SHIFT(119),
  [309] = {.count = 1, .reusable = false}, SHIFT(119),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym__string, 2),
  [313] = {.count = 1, .reusable = false}, REDUCE(sym__string, 2),
  [315] = {.count = 1, .reusable = false}, SHIFT(120),
  [317] = {.count = 1, .reusable = false}, SHIFT(121),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym__regex, 2),
  [321] = {.count = 1, .reusable = false}, REDUCE(sym__regex, 2),
  [323] = {.count = 1, .reusable = false}, SHIFT(122),
  [325] = {.count = 1, .reusable = false}, SHIFT(123),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym__quote, 2),
  [329] = {.count = 1, .reusable = false}, REDUCE(sym__quote, 2),
  [331] = {.count = 1, .reusable = true}, SHIFT(124),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym__unqualified_keyword, 2),
  [335] = {.count = 1, .reusable = false}, REDUCE(sym__unqualified_keyword, 2),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_keyword, 2),
  [339] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_keyword, 2),
  [341] = {.count = 1, .reusable = true}, SHIFT(125),
  [343] = {.count = 1, .reusable = true}, SHIFT(126),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym__list, 2),
  [347] = {.count = 1, .reusable = false}, REDUCE(sym__list, 2),
  [349] = {.count = 1, .reusable = false}, SHIFT(128),
  [351] = {.count = 1, .reusable = true}, SHIFT(127),
  [353] = {.count = 1, .reusable = true}, SHIFT(128),
  [355] = {.count = 1, .reusable = false}, SHIFT(129),
  [357] = {.count = 1, .reusable = true}, SHIFT(129),
  [359] = {.count = 1, .reusable = false}, SHIFT(130),
  [361] = {.count = 1, .reusable = true}, SHIFT(131),
  [363] = {.count = 1, .reusable = false}, SHIFT(143),
  [365] = {.count = 1, .reusable = true}, SHIFT(142),
  [367] = {.count = 1, .reusable = true}, SHIFT(143),
  [369] = {.count = 1, .reusable = true}, REDUCE(sym__vector, 2),
  [371] = {.count = 1, .reusable = false}, REDUCE(sym__vector, 2),
  [373] = {.count = 1, .reusable = false}, SHIFT(145),
  [375] = {.count = 1, .reusable = true}, SHIFT(144),
  [377] = {.count = 1, .reusable = true}, SHIFT(145),
  [379] = {.count = 1, .reusable = true}, REDUCE(sym__hash_map, 2),
  [381] = {.count = 1, .reusable = false}, REDUCE(sym__hash_map, 2),
  [383] = {.count = 1, .reusable = false}, SHIFT(146),
  [385] = {.count = 1, .reusable = true}, SHIFT(146),
  [387] = {.count = 1, .reusable = true}, SHIFT(147),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 2),
  [391] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 2),
  [393] = {.count = 1, .reusable = true}, SHIFT(149),
  [395] = {.count = 1, .reusable = true}, SHIFT(150),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym__set, 2),
  [399] = {.count = 1, .reusable = false}, REDUCE(sym__set, 2),
  [401] = {.count = 1, .reusable = false}, SHIFT(152),
  [403] = {.count = 1, .reusable = true}, SHIFT(151),
  [405] = {.count = 1, .reusable = true}, SHIFT(152),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_semicolon, 2),
  [409] = {.count = 1, .reusable = false}, REDUCE(sym_semicolon, 2),
  [411] = {.count = 1, .reusable = true}, REDUCE(sym_shebang_line, 2),
  [413] = {.count = 1, .reusable = false}, REDUCE(sym_shebang_line, 2),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym_ignore_form, 2),
  [417] = {.count = 1, .reusable = false}, REDUCE(sym_ignore_form, 2),
  [419] = {.count = 1, .reusable = true}, REDUCE(sym_shorthand_function, 2),
  [421] = {.count = 1, .reusable = false}, REDUCE(sym_shorthand_function, 2),
  [423] = {.count = 1, .reusable = true}, SHIFT(153),
  [425] = {.count = 1, .reusable = false}, REDUCE(sym_metadata_shorthand, 2),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_metadata_shorthand, 2),
  [429] = {.count = 1, .reusable = true}, SHIFT(154),
  [431] = {.count = 1, .reusable = true}, SHIFT(156),
  [433] = {.count = 1, .reusable = true}, SHIFT(158),
  [435] = {.count = 1, .reusable = false}, REDUCE(sym__metadata_map, 2),
  [437] = {.count = 1, .reusable = true}, REDUCE(sym__metadata_map, 2),
  [439] = {.count = 1, .reusable = false}, SHIFT(159),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_syntax_quote, 2),
  [443] = {.count = 1, .reusable = false}, REDUCE(sym_syntax_quote, 2),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_unquote, 2),
  [447] = {.count = 1, .reusable = false}, REDUCE(sym_unquote, 2),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_unquote_splice, 2),
  [451] = {.count = 1, .reusable = false}, REDUCE(sym_unquote_splice, 2),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym__collection_literals, 2),
  [455] = {.count = 1, .reusable = false}, REDUCE(sym__collection_literals, 2),
  [457] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [459] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(115),
  [462] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [465] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(30),
  [468] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(30),
  [471] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [474] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [477] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [480] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [483] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [486] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [489] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [492] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [495] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [498] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [501] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [504] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [507] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [510] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [513] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(16),
  [516] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [519] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [522] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(19),
  [525] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(20),
  [528] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(21),
  [531] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(22),
  [534] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(115),
  [537] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [540] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(24),
  [543] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(25),
  [546] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(26),
  [549] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(27),
  [552] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(28),
  [555] = {.count = 1, .reusable = true}, REDUCE(aux_sym_metadata_repeat1, 2),
  [557] = {.count = 1, .reusable = false}, REDUCE(aux_sym_metadata_repeat1, 2),
  [559] = {.count = 2, .reusable = false}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(116),
  [562] = {.count = 2, .reusable = true}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(24),
  [565] = {.count = 2, .reusable = true}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(25),
  [568] = {.count = 1, .reusable = true}, SHIFT(160),
  [570] = {.count = 1, .reusable = true}, REDUCE(sym__octal_char, 2),
  [572] = {.count = 1, .reusable = false}, REDUCE(sym__octal_char, 2),
  [574] = {.count = 1, .reusable = true}, REDUCE(sym__string, 3),
  [576] = {.count = 1, .reusable = false}, REDUCE(sym__string, 3),
  [578] = {.count = 1, .reusable = false}, REDUCE(aux_sym__string_repeat1, 2),
  [580] = {.count = 2, .reusable = false}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(121),
  [583] = {.count = 1, .reusable = true}, REDUCE(sym__regex, 3),
  [585] = {.count = 1, .reusable = false}, REDUCE(sym__regex, 3),
  [587] = {.count = 1, .reusable = false}, REDUCE(aux_sym__regex_repeat1, 2),
  [589] = {.count = 2, .reusable = false}, REDUCE(aux_sym__regex_repeat1, 2), SHIFT_REPEAT(123),
  [592] = {.count = 1, .reusable = true}, REDUCE(sym__quote, 3),
  [594] = {.count = 1, .reusable = false}, REDUCE(sym__quote, 3),
  [596] = {.count = 1, .reusable = true}, SHIFT(161),
  [598] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_symbol, 3),
  [600] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_symbol, 3),
  [602] = {.count = 1, .reusable = true}, REDUCE(sym_comment_macro, 3),
  [604] = {.count = 1, .reusable = false}, REDUCE(sym_comment_macro, 3),
  [606] = {.count = 1, .reusable = true}, SHIFT(162),
  [608] = {.count = 1, .reusable = true}, SHIFT(163),
  [610] = {.count = 1, .reusable = true}, REDUCE(sym_function_name, 1),
  [612] = {.count = 1, .reusable = false}, REDUCE(sym_function_name, 1),
  [614] = {.count = 1, .reusable = false}, REDUCE(sym_params, 1),
  [616] = {.count = 1, .reusable = true}, REDUCE(sym_params, 1),
  [618] = {.count = 1, .reusable = true}, SHIFT(165),
  [620] = {.count = 1, .reusable = false}, SHIFT(168),
  [622] = {.count = 1, .reusable = true}, REDUCE(sym__single_arity_fn, 1),
  [624] = {.count = 1, .reusable = true}, SHIFT(168),
  [626] = {.count = 1, .reusable = true}, REDUCE(sym__multi_arity_fn, 1),
  [628] = {.count = 1, .reusable = true}, SHIFT(170),
  [630] = {.count = 1, .reusable = true}, REDUCE(sym__list, 3),
  [632] = {.count = 1, .reusable = false}, REDUCE(sym__list, 3),
  [634] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(143),
  [637] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(63),
  [640] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(65),
  [643] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(143),
  [646] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(69),
  [649] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(70),
  [652] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(71),
  [655] = {.count = 1, .reusable = true}, REDUCE(sym__vector, 3),
  [657] = {.count = 1, .reusable = false}, REDUCE(sym__vector, 3),
  [659] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(145),
  [662] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(73),
  [665] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(75),
  [668] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(145),
  [671] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(76),
  [674] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(77),
  [677] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(78),
  [680] = {.count = 1, .reusable = false}, REDUCE(sym__hash_map_kv_pair, 2),
  [682] = {.count = 1, .reusable = true}, REDUCE(sym__hash_map_kv_pair, 2),
  [684] = {.count = 1, .reusable = true}, REDUCE(sym__hash_map, 3),
  [686] = {.count = 1, .reusable = false}, REDUCE(sym__hash_map, 3),
  [688] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(86),
  [691] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(2),
  [694] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(30),
  [697] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(30),
  [700] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(3),
  [703] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(4),
  [706] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(5),
  [709] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(80),
  [712] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(7),
  [715] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(8),
  [718] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(9),
  [721] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(10),
  [724] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(10),
  [727] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(11),
  [730] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(12),
  [733] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(13),
  [736] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(14),
  [739] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(15),
  [742] = {.count = 1, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2),
  [744] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(16),
  [747] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(17),
  [750] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(18),
  [753] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(19),
  [756] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(20),
  [759] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(82),
  [762] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(22),
  [765] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(86),
  [768] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(23),
  [771] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(24),
  [774] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(25),
  [777] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(83),
  [780] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(84),
  [783] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(85),
  [786] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 3),
  [788] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 3),
  [790] = {.count = 1, .reusable = true}, SHIFT(179),
  [792] = {.count = 1, .reusable = true}, REDUCE(sym__set, 3),
  [794] = {.count = 1, .reusable = false}, REDUCE(sym__set, 3),
  [796] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(152),
  [799] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(91),
  [802] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(93),
  [805] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(152),
  [808] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(94),
  [811] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(95),
  [814] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(96),
  [817] = {.count = 1, .reusable = true}, REDUCE(sym_shorthand_function, 3),
  [819] = {.count = 1, .reusable = false}, REDUCE(sym_shorthand_function, 3),
  [821] = {.count = 1, .reusable = true}, SHIFT(181),
  [823] = {.count = 1, .reusable = true}, SHIFT(182),
  [825] = {.count = 1, .reusable = true}, SHIFT(183),
  [827] = {.count = 1, .reusable = false}, REDUCE(sym_metadata_shorthand, 3),
  [829] = {.count = 1, .reusable = true}, REDUCE(sym_metadata_shorthand, 3),
  [831] = {.count = 1, .reusable = true}, SHIFT(184),
  [833] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_keyword, 4),
  [835] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_keyword, 4),
  [837] = {.count = 1, .reusable = true}, REDUCE(sym_comment_macro, 4),
  [839] = {.count = 1, .reusable = false}, REDUCE(sym_comment_macro, 4),
  [841] = {.count = 1, .reusable = true}, SHIFT(185),
  [843] = {.count = 1, .reusable = true}, SHIFT(186),
  [845] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_function, 4),
  [847] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_function, 4),
  [849] = {.count = 1, .reusable = true}, SHIFT(187),
  [851] = {.count = 1, .reusable = true}, REDUCE(sym__single_arity_fn, 2),
  [853] = {.count = 1, .reusable = true}, REDUCE(sym_function_body, 1),
  [855] = {.count = 1, .reusable = true}, REDUCE(aux_sym__multi_arity_fn_repeat1, 2),
  [857] = {.count = 2, .reusable = true}, REDUCE(aux_sym__multi_arity_fn_repeat1, 2), SHIFT_REPEAT(131),
  [860] = {.count = 1, .reusable = false}, SHIFT(188),
  [862] = {.count = 1, .reusable = false}, SHIFT(189),
  [864] = {.count = 1, .reusable = true}, REDUCE(sym_docstring, 1),
  [866] = {.count = 1, .reusable = false}, REDUCE(sym_docstring, 1),
  [868] = {.count = 1, .reusable = true}, REDUCE(sym_attr_map, 1),
  [870] = {.count = 1, .reusable = true}, SHIFT(190),
  [872] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 4),
  [874] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 4),
  [876] = {.count = 1, .reusable = true}, SHIFT(194),
  [878] = {.count = 1, .reusable = true}, SHIFT(195),
  [880] = {.count = 1, .reusable = true}, SHIFT(197),
  [882] = {.count = 1, .reusable = true}, REDUCE(aux_sym__multi_arity_fn_repeat1, 3),
  [884] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_function, 5),
  [886] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_function, 5),
  [888] = {.count = 1, .reusable = false}, SHIFT(198),
  [890] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 5),
  [892] = {.count = 1, .reusable = false}, REDUCE(sym_defn, 5),
  [894] = {.count = 1, .reusable = true}, SHIFT(199),
  [896] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 5),
  [898] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 5),
  [900] = {.count = 1, .reusable = true}, SHIFT(202),
  [902] = {.count = 1, .reusable = true}, REDUCE(sym__unicode_char, 5),
  [904] = {.count = 1, .reusable = false}, REDUCE(sym__unicode_char, 5),
  [906] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 6),
  [908] = {.count = 1, .reusable = false}, REDUCE(sym_defn, 6),
  [910] = {.count = 1, .reusable = true}, SHIFT(203),
  [912] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 7),
  [914] = {.count = 1, .reusable = false}, REDUCE(sym_defn, 7),
  [916] = {.count = 1, .reusable = true}, SHIFT(205),
  [918] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 8),
  [920] = {.count = 1, .reusable = false}, REDUCE(sym_defn, 8),
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
