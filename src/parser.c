#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 208
#define SYMBOL_COUNT 141
#define ALIAS_COUNT 0
#define TOKEN_COUNT 71
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_nil = 1,
  sym_true = 2,
  sym_false = 3,
  sym_number_long = 4,
  sym_number_double = 5,
  sym_number_bigint = 6,
  sym_number_ratio = 7,
  anon_sym_BSLASH = 8,
  sym__normal_char = 9,
  anon_sym_newline = 10,
  anon_sym_space = 11,
  anon_sym_tab = 12,
  anon_sym_formfeed = 13,
  anon_sym_backspace = 14,
  anon_sym_return = 15,
  anon_sym_u = 16,
  sym__hex_char = 17,
  anon_sym_o = 18,
  aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH = 19,
  aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH = 20,
  aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH = 21,
  anon_sym_DQUOTE = 22,
  anon_sym_BSLASH_DQUOTE = 23,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH = 24,
  anon_sym_POUND_DQUOTE = 25,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH = 26,
  anon_sym_SQUOTE = 27,
  anon_sym_LPARENquote = 28,
  anon_sym_RPAREN = 29,
  anon_sym_COLON = 30,
  anon_sym_COLON_COLON = 31,
  anon_sym_SLASH = 32,
  sym__keyword_chars = 33,
  anon_sym_DASH_GT = 34,
  anon_sym_DASH_GT_GT = 35,
  anon_sym_as_DASH_GT = 36,
  anon_sym_some_DASH_GT = 37,
  anon_sym_some_DASH_GT_GT = 38,
  anon_sym_cond_DASH_GT = 39,
  anon_sym_cond_DASH_GT_GT = 40,
  sym__symbol_chars = 41,
  sym_member_access = 42,
  sym_field_access = 43,
  sym_new_class = 44,
  anon_sym_LPAREN = 45,
  anon_sym_LBRACK = 46,
  anon_sym_RBRACK = 47,
  anon_sym_LBRACE = 48,
  anon_sym_RBRACE = 49,
  anon_sym_POUND_COLON_COLON_LBRACE = 50,
  anon_sym_POUND = 51,
  anon_sym_POUND_LBRACE = 52,
  anon_sym_SEMI = 53,
  aux_sym_SLASH_DOT_STAR_SLASH = 54,
  anon_sym_POUND_BANG = 55,
  anon_sym_POUND_ = 56,
  anon_sym_comment = 57,
  anon_sym_fn = 58,
  anon_sym_POUND_LPAREN = 59,
  sym_shorthand_function_arg = 60,
  anon_sym_defn = 61,
  anon_sym_defn_DASH = 62,
  anon_sym_CARET = 63,
  anon_sym_CARET_COLON = 64,
  anon_sym_CARET_DQUOTE = 65,
  anon_sym_BQUOTE = 66,
  anon_sym_TILDE = 67,
  anon_sym_TILDE_AT = 68,
  sym_gensym = 69,
  anon_sym_AT = 70,
  sym_program = 71,
  sym__anything = 72,
  sym__literals = 73,
  sym__collection_literals = 74,
  sym_boolean = 75,
  sym_number = 76,
  sym__number = 77,
  sym_character = 78,
  sym__character = 79,
  sym__special_char = 80,
  sym__unicode_char = 81,
  sym__octal_char = 82,
  sym__octal_num = 83,
  sym_string = 84,
  sym__string = 85,
  sym_regex = 86,
  sym__regex = 87,
  sym_quote = 88,
  sym__quote = 89,
  sym_keyword = 90,
  sym__keyword = 91,
  sym__unqualified_keyword = 92,
  sym_qualified_keyword = 93,
  sym_symbol = 94,
  sym__symbol = 95,
  sym_threading_macro = 96,
  sym_qualified_symbol = 97,
  sym_interop = 98,
  sym_list = 99,
  sym__list = 100,
  sym_vector = 101,
  sym__vector = 102,
  sym_hash_map = 103,
  sym__hash_map = 104,
  sym_namespace_map = 105,
  sym__hash_map_kv_pair = 106,
  sym__hash_map_key = 107,
  sym__hash_map_value = 108,
  sym_set = 109,
  sym__set = 110,
  sym_comment = 111,
  sym_semicolon = 112,
  sym_shebang_line = 113,
  sym_ignore_form = 114,
  sym_comment_macro = 115,
  sym__functions = 116,
  sym_anonymous_function = 117,
  sym__after_the_fn_name = 118,
  sym_function_name = 119,
  sym__single_arity_fn = 120,
  sym__multi_arity_fn = 121,
  sym_function_body = 122,
  sym_params = 123,
  sym_shorthand_function = 124,
  sym_defn = 125,
  sym_docstring = 126,
  sym_attr_map = 127,
  sym_metadata = 128,
  sym__metadata_map = 129,
  sym_metadata_shorthand = 130,
  sym_syntax_quote = 131,
  sym_unquote = 132,
  sym_unquote_splice = 133,
  sym_deref = 134,
  aux_sym_program_repeat1 = 135,
  aux_sym__string_repeat1 = 136,
  aux_sym__regex_repeat1 = 137,
  aux_sym__hash_map_repeat1 = 138,
  aux_sym__multi_arity_fn_repeat1 = 139,
  aux_sym_metadata_repeat1 = 140,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_nil] = "nil",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_number_long] = "number_long",
  [sym_number_double] = "number_double",
  [sym_number_bigint] = "number_bigint",
  [sym_number_ratio] = "number_ratio",
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
  [anon_sym_AT] = "@",
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
  [sym_deref] = "deref",
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
  [sym_number_bigint] = {
    .visible = true,
    .named = true,
  },
  [sym_number_ratio] = {
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
  [anon_sym_AT] = {
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
  [sym_deref] = {
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
      if (lookahead == '@')
        ADVANCE(41);
      if (lookahead == '[')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(43);
      if (lookahead == ']')
        ADVANCE(44);
      if (lookahead == '^')
        ADVANCE(45);
      if (lookahead == '`')
        ADVANCE(48);
      if (lookahead == 'n')
        ADVANCE(49);
      if (lookahead == 'o')
        ADVANCE(58);
      if (lookahead == 'r')
        ADVANCE(59);
      if (lookahead == 's')
        ADVANCE(65);
      if (lookahead == 't')
        ADVANCE(76);
      if (lookahead == 'u')
        ADVANCE(82);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(84);
      if (lookahead == '~')
        ADVANCE(85);
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
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '\"')
        ADVANCE(46);
      if (lookahead == ':')
        ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_CARET_DQUOTE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_CARET_COLON);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 49:
      if (lookahead == 'e')
        ADVANCE(50);
      if (lookahead == 'i')
        ADVANCE(56);
      END_STATE();
    case 50:
      if (lookahead == 'w')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'l')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'i')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'n')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'e')
        ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_newline);
      END_STATE();
    case 56:
      if (lookahead == 'l')
        ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 59:
      if (lookahead == 'e')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 't')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'u')
        ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'r')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'n')
        ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 65:
      if (lookahead == 'o')
        ADVANCE(66);
      if (lookahead == 'p')
        ADVANCE(72);
      END_STATE();
    case 66:
      if (lookahead == 'm')
        ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 'e')
        ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == '-')
        ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == '>')
        ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_some_DASH_GT);
      if (lookahead == '>')
        ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_some_DASH_GT_GT);
      END_STATE();
    case 72:
      if (lookahead == 'a')
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 'c')
        ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == 'e')
        ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_space);
      END_STATE();
    case 76:
      if (lookahead == 'a')
        ADVANCE(77);
      if (lookahead == 'r')
        ADVANCE(79);
      END_STATE();
    case 77:
      if (lookahead == 'b')
        ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_tab);
      END_STATE();
    case 79:
      if (lookahead == 'u')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == 'e')
        ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '@')
        ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_TILDE_AT);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_number_long);
      if (lookahead == '.')
        ADVANCE(88);
      if (lookahead == '_')
        ADVANCE(89);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      END_STATE();
    case 88:
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
        ADVANCE(31);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(35);
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
      if (lookahead == '%')
        ADVANCE(12);
      if (lookahead == '\'')
        ADVANCE(13);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(93);
      if (lookahead == ',')
        SKIP(92);
      if (lookahead == '-')
        ADVANCE(100);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == ':')
        ADVANCE(38);
      if (lookahead == ';')
        ADVANCE(40);
      if (lookahead == '@')
        ADVANCE(41);
      if (lookahead == '[')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(43);
      if (lookahead == '^')
        ADVANCE(45);
      if (lookahead == '`')
        ADVANCE(48);
      if (lookahead == 'a')
        ADVANCE(101);
      if (lookahead == 'c')
        ADVANCE(108);
      if (lookahead == 'f')
        ADVANCE(115);
      if (lookahead == 'n')
        ADVANCE(120);
      if (lookahead == 's')
        ADVANCE(123);
      if (lookahead == 't')
        ADVANCE(128);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '~')
        ADVANCE(85);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?')
        ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(92);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(95);
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
        ADVANCE(99);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_gensym);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_number_long);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '/')
        ADVANCE(96);
      if (lookahead == 'N')
        ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(95);
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
        ADVANCE(99);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_number_ratio);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_number_bigint);
      if (lookahead == '#')
        ADVANCE(94);
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
        ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(94);
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
        ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '>')
        ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(95);
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
        ADVANCE(99);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '.')
        ADVANCE(102);
      if (lookahead == 's')
        ADVANCE(104);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_new_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == '.')
        ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '-')
        ADVANCE(105);
      if (lookahead == '.')
        ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(94);
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
        ADVANCE(99);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_as_DASH_GT);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '.')
        ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '.')
        ADVANCE(102);
      if (lookahead == 'o')
        ADVANCE(109);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '.')
        ADVANCE(102);
      if (lookahead == 'n')
        ADVANCE(110);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '.')
        ADVANCE(102);
      if (lookahead == 'd')
        ADVANCE(111);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '-')
        ADVANCE(112);
      if (lookahead == '.')
        ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '>')
        ADVANCE(113);
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
        ADVANCE(99);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_cond_DASH_GT);
      if (lookahead == '>')
        ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_cond_DASH_GT_GT);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '.')
        ADVANCE(102);
      if (lookahead == 'a')
        ADVANCE(116);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '.')
        ADVANCE(102);
      if (lookahead == 'l')
        ADVANCE(117);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '.')
        ADVANCE(102);
      if (lookahead == 's')
        ADVANCE(118);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '.')
        ADVANCE(102);
      if (lookahead == 'e')
        ADVANCE(119);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '.')
        ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '.')
        ADVANCE(102);
      if (lookahead == 'i')
        ADVANCE(121);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '.')
        ADVANCE(102);
      if (lookahead == 'l')
        ADVANCE(122);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_nil);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '.')
        ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '.')
        ADVANCE(102);
      if (lookahead == 'o')
        ADVANCE(124);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '.')
        ADVANCE(102);
      if (lookahead == 'm')
        ADVANCE(125);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '.')
        ADVANCE(102);
      if (lookahead == 'e')
        ADVANCE(126);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '-')
        ADVANCE(127);
      if (lookahead == '.')
        ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '>')
        ADVANCE(70);
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
        ADVANCE(99);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '.')
        ADVANCE(102);
      if (lookahead == 'r')
        ADVANCE(129);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '.')
        ADVANCE(102);
      if (lookahead == 'u')
        ADVANCE(130);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '.')
        ADVANCE(102);
      if (lookahead == 'e')
        ADVANCE(131);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '.')
        ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_number_long);
      if (lookahead == '.')
        ADVANCE(88);
      if (lookahead == '/')
        ADVANCE(96);
      if (lookahead == 'N')
        ADVANCE(133);
      if (lookahead == '_')
        ADVANCE(89);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_number_bigint);
      END_STATE();
    case 134:
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
        ADVANCE(93);
      if (lookahead == ',')
        SKIP(134);
      if (lookahead == '-')
        ADVANCE(100);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == ':')
        ADVANCE(38);
      if (lookahead == ';')
        ADVANCE(40);
      if (lookahead == '@')
        ADVANCE(41);
      if (lookahead == '[')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(43);
      if (lookahead == ']')
        ADVANCE(44);
      if (lookahead == '^')
        ADVANCE(45);
      if (lookahead == '`')
        ADVANCE(48);
      if (lookahead == 'a')
        ADVANCE(101);
      if (lookahead == 'c')
        ADVANCE(108);
      if (lookahead == 'f')
        ADVANCE(115);
      if (lookahead == 'n')
        ADVANCE(120);
      if (lookahead == 's')
        ADVANCE(123);
      if (lookahead == 't')
        ADVANCE(128);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(84);
      if (lookahead == '~')
        ADVANCE(85);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?')
        ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(134);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 135:
      if (lookahead == '\n')
        SKIP(135);
      if (lookahead == ',')
        ADVANCE(136);
      if (lookahead == 'b')
        ADVANCE(137);
      if (lookahead == 'f')
        ADVANCE(146);
      if (lookahead == 'n')
        ADVANCE(154);
      if (lookahead == 'o')
        ADVANCE(58);
      if (lookahead == 'r')
        ADVANCE(155);
      if (lookahead == 's')
        ADVANCE(156);
      if (lookahead == 't')
        ADVANCE(157);
      if (lookahead == 'u')
        ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(136);
      if (lookahead != 0)
        ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__normal_char);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'a')
        ADVANCE(138);
      END_STATE();
    case 138:
      if (lookahead == 'c')
        ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead == 'k')
        ADVANCE(140);
      END_STATE();
    case 140:
      if (lookahead == 's')
        ADVANCE(141);
      END_STATE();
    case 141:
      if (lookahead == 'p')
        ADVANCE(142);
      END_STATE();
    case 142:
      if (lookahead == 'a')
        ADVANCE(143);
      END_STATE();
    case 143:
      if (lookahead == 'c')
        ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'e')
        ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_backspace);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'o')
        ADVANCE(147);
      END_STATE();
    case 147:
      if (lookahead == 'r')
        ADVANCE(148);
      END_STATE();
    case 148:
      if (lookahead == 'm')
        ADVANCE(149);
      END_STATE();
    case 149:
      if (lookahead == 'f')
        ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == 'e')
        ADVANCE(151);
      END_STATE();
    case 151:
      if (lookahead == 'e')
        ADVANCE(152);
      END_STATE();
    case 152:
      if (lookahead == 'd')
        ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_formfeed);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'e')
        ADVANCE(50);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'e')
        ADVANCE(60);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'p')
        ADVANCE(72);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'a')
        ADVANCE(77);
      END_STATE();
    case 158:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(159);
      if (lookahead == '\\')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(159);
      if (lookahead != 0)
        ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 162:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(163);
      if (lookahead == '\\')
        ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(163);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(162);
      if (lookahead != 0)
        ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(161);
      END_STATE();
    case 165:
      if (lookahead == ',')
        SKIP(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(165);
      if (lookahead == '!' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__keyword_chars);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 167:
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
        ADVANCE(93);
      if (lookahead == ',')
        SKIP(167);
      if (lookahead == '-')
        ADVANCE(100);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ':')
        ADVANCE(38);
      if (lookahead == ';')
        ADVANCE(40);
      if (lookahead == '@')
        ADVANCE(41);
      if (lookahead == '[')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(43);
      if (lookahead == ']')
        ADVANCE(44);
      if (lookahead == '^')
        ADVANCE(45);
      if (lookahead == '`')
        ADVANCE(48);
      if (lookahead == 'a')
        ADVANCE(101);
      if (lookahead == 'c')
        ADVANCE(108);
      if (lookahead == 'f')
        ADVANCE(115);
      if (lookahead == 'n')
        ADVANCE(120);
      if (lookahead == 's')
        ADVANCE(123);
      if (lookahead == 't')
        ADVANCE(128);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(84);
      if (lookahead == '~')
        ADVANCE(85);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?')
        ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(167);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 168:
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
        ADVANCE(93);
      if (lookahead == ',')
        SKIP(168);
      if (lookahead == '-')
        ADVANCE(100);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == ':')
        ADVANCE(38);
      if (lookahead == ';')
        ADVANCE(40);
      if (lookahead == '@')
        ADVANCE(41);
      if (lookahead == '[')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(43);
      if (lookahead == '^')
        ADVANCE(45);
      if (lookahead == '`')
        ADVANCE(48);
      if (lookahead == 'a')
        ADVANCE(101);
      if (lookahead == 'c')
        ADVANCE(169);
      if (lookahead == 'd')
        ADVANCE(176);
      if (lookahead == 'f')
        ADVANCE(181);
      if (lookahead == 'n')
        ADVANCE(120);
      if (lookahead == 's')
        ADVANCE(123);
      if (lookahead == 't')
        ADVANCE(128);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '~')
        ADVANCE(85);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?')
        ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(168);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '.')
        ADVANCE(102);
      if (lookahead == 'o')
        ADVANCE(170);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '.')
        ADVANCE(102);
      if (lookahead == 'm')
        ADVANCE(171);
      if (lookahead == 'n')
        ADVANCE(110);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '.')
        ADVANCE(102);
      if (lookahead == 'm')
        ADVANCE(172);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '.')
        ADVANCE(102);
      if (lookahead == 'e')
        ADVANCE(173);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '.')
        ADVANCE(102);
      if (lookahead == 'n')
        ADVANCE(174);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '.')
        ADVANCE(102);
      if (lookahead == 't')
        ADVANCE(175);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_comment);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '.')
        ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '.')
        ADVANCE(102);
      if (lookahead == 'e')
        ADVANCE(177);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '.')
        ADVANCE(102);
      if (lookahead == 'f')
        ADVANCE(178);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '.')
        ADVANCE(102);
      if (lookahead == 'n')
        ADVANCE(179);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '-')
        ADVANCE(180);
      if (lookahead == '.')
        ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_defn_DASH);
      if (lookahead == '#')
        ADVANCE(94);
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
        ADVANCE(99);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '.')
        ADVANCE(102);
      if (lookahead == 'a')
        ADVANCE(116);
      if (lookahead == 'n')
        ADVANCE(182);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_fn);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '.')
        ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 183:
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
        ADVANCE(93);
      if (lookahead == ',')
        SKIP(183);
      if (lookahead == '-')
        ADVANCE(100);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == ':')
        ADVANCE(38);
      if (lookahead == ';')
        ADVANCE(40);
      if (lookahead == '@')
        ADVANCE(41);
      if (lookahead == '[')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(43);
      if (lookahead == ']')
        ADVANCE(44);
      if (lookahead == '^')
        ADVANCE(45);
      if (lookahead == '`')
        ADVANCE(48);
      if (lookahead == 'a')
        ADVANCE(101);
      if (lookahead == 'c')
        ADVANCE(108);
      if (lookahead == 'f')
        ADVANCE(115);
      if (lookahead == 'n')
        ADVANCE(120);
      if (lookahead == 's')
        ADVANCE(123);
      if (lookahead == 't')
        ADVANCE(128);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '~')
        ADVANCE(85);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?')
        ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(183);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 184:
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
        ADVANCE(93);
      if (lookahead == ',')
        SKIP(184);
      if (lookahead == '-')
        ADVANCE(100);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == ':')
        ADVANCE(38);
      if (lookahead == ';')
        ADVANCE(40);
      if (lookahead == '@')
        ADVANCE(41);
      if (lookahead == '[')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(43);
      if (lookahead == '^')
        ADVANCE(45);
      if (lookahead == '`')
        ADVANCE(48);
      if (lookahead == 'a')
        ADVANCE(101);
      if (lookahead == 'c')
        ADVANCE(108);
      if (lookahead == 'f')
        ADVANCE(115);
      if (lookahead == 'n')
        ADVANCE(120);
      if (lookahead == 's')
        ADVANCE(123);
      if (lookahead == 't')
        ADVANCE(128);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(84);
      if (lookahead == '~')
        ADVANCE(85);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?')
        ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(184);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 185:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(186);
      if (lookahead == '(')
        ADVANCE(187);
      if (lookahead == ')')
        ADVANCE(20);
      if (lookahead == ',')
        SKIP(185);
      if (lookahead == '-')
        ADVANCE(188);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(42);
      if (lookahead == '^')
        ADVANCE(45);
      if (lookahead == 'a')
        ADVANCE(190);
      if (lookahead == 'c')
        ADVANCE(193);
      if (lookahead == 's')
        ADVANCE(198);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(185);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ':')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(11);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 188:
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
        ADVANCE(189);
      END_STATE();
    case 189:
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
        ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 's')
        ADVANCE(191);
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
        ADVANCE(189);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '-')
        ADVANCE(192);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 192:
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
        ADVANCE(189);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'o')
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
        ADVANCE(189);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'n')
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
        ADVANCE(189);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'd')
        ADVANCE(196);
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
        ADVANCE(189);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '-')
        ADVANCE(197);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '>')
        ADVANCE(113);
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
        ADVANCE(189);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'o')
        ADVANCE(199);
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
        ADVANCE(189);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'm')
        ADVANCE(200);
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
        ADVANCE(189);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'e')
        ADVANCE(201);
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
        ADVANCE(189);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '-')
        ADVANCE(202);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '>')
        ADVANCE(70);
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
        ADVANCE(189);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == '\n')
        SKIP(203);
      if (lookahead == ',')
        ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(204);
      if (lookahead != 0)
        ADVANCE(205);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == ',')
        ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(205);
      END_STATE();
    case 206:
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
        ADVANCE(93);
      if (lookahead == ',')
        SKIP(206);
      if (lookahead == '-')
        ADVANCE(100);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == ':')
        ADVANCE(38);
      if (lookahead == ';')
        ADVANCE(40);
      if (lookahead == '@')
        ADVANCE(41);
      if (lookahead == '[')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(43);
      if (lookahead == '^')
        ADVANCE(45);
      if (lookahead == '`')
        ADVANCE(48);
      if (lookahead == 'a')
        ADVANCE(101);
      if (lookahead == 'c')
        ADVANCE(108);
      if (lookahead == 'f')
        ADVANCE(115);
      if (lookahead == 'n')
        ADVANCE(120);
      if (lookahead == 's')
        ADVANCE(123);
      if (lookahead == 't')
        ADVANCE(128);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '~')
        ADVANCE(85);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?')
        ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(206);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(107);
      END_STATE();
    case 207:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        SKIP(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(207);
      END_STATE();
    case 208:
      if (lookahead == ',')
        SKIP(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(91);
      END_STATE();
    case 209:
      if (lookahead == ',')
        SKIP(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(209);
      if (('0' <= lookahead && lookahead <= '3'))
        ADVANCE(210);
      if (('4' <= lookahead && lookahead <= '7'))
        ADVANCE(213);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(214);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 92},
  [2] = {.lex_state = 134},
  [3] = {.lex_state = 135},
  [4] = {.lex_state = 158},
  [5] = {.lex_state = 162},
  [6] = {.lex_state = 92},
  [7] = {.lex_state = 92},
  [8] = {.lex_state = 165},
  [9] = {.lex_state = 165},
  [10] = {.lex_state = 134},
  [11] = {.lex_state = 167},
  [12] = {.lex_state = 134},
  [13] = {.lex_state = 168},
  [14] = {.lex_state = 183},
  [15] = {.lex_state = 184},
  [16] = {.lex_state = 184},
  [17] = {.lex_state = 185},
  [18] = {.lex_state = 184},
  [19] = {.lex_state = 203},
  [20] = {.lex_state = 203},
  [21] = {.lex_state = 92},
  [22] = {.lex_state = 206},
  [23] = {.lex_state = 185},
  [24] = {.lex_state = 165},
  [25] = {.lex_state = 158},
  [26] = {.lex_state = 92},
  [27] = {.lex_state = 92},
  [28] = {.lex_state = 92},
  [29] = {.lex_state = 185},
  [30] = {.lex_state = 207},
  [31] = {.lex_state = 134},
  [32] = {.lex_state = 134},
  [33] = {.lex_state = 134},
  [34] = {.lex_state = 134},
  [35] = {.lex_state = 134},
  [36] = {.lex_state = 134},
  [37] = {.lex_state = 134},
  [38] = {.lex_state = 134},
  [39] = {.lex_state = 134},
  [40] = {.lex_state = 134},
  [41] = {.lex_state = 134},
  [42] = {.lex_state = 134},
  [43] = {.lex_state = 185},
  [44] = {.lex_state = 185},
  [45] = {.lex_state = 92},
  [46] = {.lex_state = 185},
  [47] = {.lex_state = 134},
  [48] = {.lex_state = 208},
  [49] = {.lex_state = 209},
  [50] = {.lex_state = 134},
  [51] = {.lex_state = 158},
  [52] = {.lex_state = 134},
  [53] = {.lex_state = 162},
  [54] = {.lex_state = 134},
  [55] = {.lex_state = 92},
  [56] = {.lex_state = 92},
  [57] = {.lex_state = 92},
  [58] = {.lex_state = 92},
  [59] = {.lex_state = 92},
  [60] = {.lex_state = 168},
  [61] = {.lex_state = 134},
  [62] = {.lex_state = 167},
  [63] = {.lex_state = 185},
  [64] = {.lex_state = 92},
  [65] = {.lex_state = 134},
  [66] = {.lex_state = 92},
  [67] = {.lex_state = 206},
  [68] = {.lex_state = 185},
  [69] = {.lex_state = 185},
  [70] = {.lex_state = 92},
  [71] = {.lex_state = 92},
  [72] = {.lex_state = 92},
  [73] = {.lex_state = 206},
  [74] = {.lex_state = 92},
  [75] = {.lex_state = 134},
  [76] = {.lex_state = 92},
  [77] = {.lex_state = 92},
  [78] = {.lex_state = 92},
  [79] = {.lex_state = 92},
  [80] = {.lex_state = 183},
  [81] = {.lex_state = 92},
  [82] = {.lex_state = 134},
  [83] = {.lex_state = 92},
  [84] = {.lex_state = 92},
  [85] = {.lex_state = 92},
  [86] = {.lex_state = 92},
  [87] = {.lex_state = 92},
  [88] = {.lex_state = 184},
  [89] = {.lex_state = 134},
  [90] = {.lex_state = 184},
  [91] = {.lex_state = 92},
  [92] = {.lex_state = 92},
  [93] = {.lex_state = 134},
  [94] = {.lex_state = 92},
  [95] = {.lex_state = 92},
  [96] = {.lex_state = 92},
  [97] = {.lex_state = 92},
  [98] = {.lex_state = 184},
  [99] = {.lex_state = 134},
  [100] = {.lex_state = 134},
  [101] = {.lex_state = 134},
  [102] = {.lex_state = 134},
  [103] = {.lex_state = 206},
  [104] = {.lex_state = 185},
  [105] = {.lex_state = 184},
  [106] = {.lex_state = 184},
  [107] = {.lex_state = 185},
  [108] = {.lex_state = 185},
  [109] = {.lex_state = 185},
  [110] = {.lex_state = 158},
  [111] = {.lex_state = 134},
  [112] = {.lex_state = 134},
  [113] = {.lex_state = 134},
  [114] = {.lex_state = 206},
  [115] = {.lex_state = 134},
  [116] = {.lex_state = 134},
  [117] = {.lex_state = 92},
  [118] = {.lex_state = 185},
  [119] = {.lex_state = 185},
  [120] = {.lex_state = 208},
  [121] = {.lex_state = 134},
  [122] = {.lex_state = 134},
  [123] = {.lex_state = 158},
  [124] = {.lex_state = 134},
  [125] = {.lex_state = 162},
  [126] = {.lex_state = 134},
  [127] = {.lex_state = 165},
  [128] = {.lex_state = 134},
  [129] = {.lex_state = 134},
  [130] = {.lex_state = 206},
  [131] = {.lex_state = 185},
  [132] = {.lex_state = 185},
  [133] = {.lex_state = 92},
  [134] = {.lex_state = 185},
  [135] = {.lex_state = 185},
  [136] = {.lex_state = 206},
  [137] = {.lex_state = 168},
  [138] = {.lex_state = 185},
  [139] = {.lex_state = 206},
  [140] = {.lex_state = 185},
  [141] = {.lex_state = 185},
  [142] = {.lex_state = 185},
  [143] = {.lex_state = 185},
  [144] = {.lex_state = 134},
  [145] = {.lex_state = 206},
  [146] = {.lex_state = 134},
  [147] = {.lex_state = 183},
  [148] = {.lex_state = 184},
  [149] = {.lex_state = 134},
  [150] = {.lex_state = 184},
  [151] = {.lex_state = 134},
  [152] = {.lex_state = 184},
  [153] = {.lex_state = 134},
  [154] = {.lex_state = 184},
  [155] = {.lex_state = 134},
  [156] = {.lex_state = 185},
  [157] = {.lex_state = 184},
  [158] = {.lex_state = 185},
  [159] = {.lex_state = 184},
  [160] = {.lex_state = 92},
  [161] = {.lex_state = 185},
  [162] = {.lex_state = 208},
  [163] = {.lex_state = 134},
  [164] = {.lex_state = 134},
  [165] = {.lex_state = 185},
  [166] = {.lex_state = 168},
  [167] = {.lex_state = 134},
  [168] = {.lex_state = 168},
  [169] = {.lex_state = 168},
  [170] = {.lex_state = 206},
  [171] = {.lex_state = 185},
  [172] = {.lex_state = 158},
  [173] = {.lex_state = 185},
  [174] = {.lex_state = 185},
  [175] = {.lex_state = 185},
  [176] = {.lex_state = 168},
  [177] = {.lex_state = 185},
  [178] = {.lex_state = 185},
  [179] = {.lex_state = 185},
  [180] = {.lex_state = 185},
  [181] = {.lex_state = 134},
  [182] = {.lex_state = 184},
  [183] = {.lex_state = 185},
  [184] = {.lex_state = 185},
  [185] = {.lex_state = 184},
  [186] = {.lex_state = 208},
  [187] = {.lex_state = 185},
  [188] = {.lex_state = 185},
  [189] = {.lex_state = 134},
  [190] = {.lex_state = 185},
  [191] = {.lex_state = 158},
  [192] = {.lex_state = 134},
  [193] = {.lex_state = 168},
  [194] = {.lex_state = 185},
  [195] = {.lex_state = 185},
  [196] = {.lex_state = 134},
  [197] = {.lex_state = 185},
  [198] = {.lex_state = 184},
  [199] = {.lex_state = 134},
  [200] = {.lex_state = 185},
  [201] = {.lex_state = 134},
  [202] = {.lex_state = 168},
  [203] = {.lex_state = 185},
  [204] = {.lex_state = 185},
  [205] = {.lex_state = 134},
  [206] = {.lex_state = 168},
  [207] = {.lex_state = 134},
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
    [anon_sym_AT] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(30),
    [sym__anything] = STATE(45),
    [sym__literals] = STATE(45),
    [sym__collection_literals] = STATE(45),
    [sym_boolean] = STATE(45),
    [sym_number] = STATE(45),
    [sym__number] = STATE(31),
    [sym_character] = STATE(45),
    [sym__character] = STATE(32),
    [sym_string] = STATE(45),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(45),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(45),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(45),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(45),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(45),
    [sym_list] = STATE(45),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(45),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(45),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(45),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(45),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(45),
    [sym_anonymous_function] = STATE(45),
    [sym_shorthand_function] = STATE(45),
    [sym_defn] = STATE(45),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(45),
    [sym_unquote] = STATE(45),
    [sym_unquote_splice] = STATE(45),
    [sym_deref] = STATE(45),
    [aux_sym_program_repeat1] = STATE(45),
    [aux_sym_metadata_repeat1] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_nil] = ACTIONS(7),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
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
    [anon_sym_AT] = ACTIONS(71),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [sym_nil] = ACTIONS(75),
    [sym_true] = ACTIONS(75),
    [sym_false] = ACTIONS(75),
    [sym_number_long] = ACTIONS(75),
    [sym_number_double] = ACTIONS(73),
    [sym_number_bigint] = ACTIONS(75),
    [sym_number_ratio] = ACTIONS(73),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_SQUOTE] = ACTIONS(73),
    [anon_sym_LPARENquote] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(73),
    [anon_sym_DASH_GT] = ACTIONS(75),
    [anon_sym_DASH_GT_GT] = ACTIONS(73),
    [anon_sym_as_DASH_GT] = ACTIONS(73),
    [anon_sym_some_DASH_GT] = ACTIONS(75),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(73),
    [anon_sym_cond_DASH_GT] = ACTIONS(75),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(73),
    [sym__symbol_chars] = ACTIONS(75),
    [sym_member_access] = ACTIONS(73),
    [sym_field_access] = ACTIONS(73),
    [sym_new_class] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_RBRACK] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(73),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(73),
    [anon_sym_POUND] = ACTIONS(75),
    [anon_sym_POUND_LBRACE] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(73),
    [anon_sym_POUND_BANG] = ACTIONS(73),
    [anon_sym_POUND_] = ACTIONS(73),
    [anon_sym_POUND_LPAREN] = ACTIONS(73),
    [sym_shorthand_function_arg] = ACTIONS(73),
    [anon_sym_CARET] = ACTIONS(75),
    [anon_sym_CARET_COLON] = ACTIONS(73),
    [anon_sym_CARET_DQUOTE] = ACTIONS(73),
    [anon_sym_BQUOTE] = ACTIONS(73),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_TILDE_AT] = ACTIONS(73),
    [sym_gensym] = ACTIONS(73),
    [anon_sym_AT] = ACTIONS(73),
  },
  [3] = {
    [sym__special_char] = STATE(47),
    [sym__unicode_char] = STATE(47),
    [sym__octal_char] = STATE(47),
    [sym__normal_char] = ACTIONS(77),
    [anon_sym_newline] = ACTIONS(77),
    [anon_sym_space] = ACTIONS(77),
    [anon_sym_tab] = ACTIONS(77),
    [anon_sym_formfeed] = ACTIONS(77),
    [anon_sym_backspace] = ACTIONS(77),
    [anon_sym_return] = ACTIONS(77),
    [anon_sym_u] = ACTIONS(79),
    [anon_sym_o] = ACTIONS(81),
  },
  [4] = {
    [aux_sym__string_repeat1] = STATE(51),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(85),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(85),
  },
  [5] = {
    [aux_sym__regex_repeat1] = STATE(53),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(89),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(89),
  },
  [6] = {
    [sym__anything] = STATE(54),
    [sym__literals] = STATE(54),
    [sym__collection_literals] = STATE(54),
    [sym_boolean] = STATE(54),
    [sym_number] = STATE(54),
    [sym__number] = STATE(31),
    [sym_character] = STATE(54),
    [sym__character] = STATE(32),
    [sym_string] = STATE(54),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(54),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(54),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(54),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(54),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(54),
    [sym_list] = STATE(54),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(54),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(54),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(54),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(54),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(54),
    [sym_anonymous_function] = STATE(54),
    [sym_shorthand_function] = STATE(54),
    [sym_defn] = STATE(54),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(54),
    [sym_unquote] = STATE(54),
    [sym_unquote_splice] = STATE(54),
    [sym_deref] = STATE(54),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(91),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
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
    [sym_shorthand_function_arg] = ACTIONS(93),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(67),
    [anon_sym_TILDE_AT] = ACTIONS(69),
    [sym_gensym] = ACTIONS(93),
    [anon_sym_AT] = ACTIONS(71),
  },
  [7] = {
    [sym__anything] = STATE(60),
    [sym__literals] = STATE(60),
    [sym__collection_literals] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym_number] = STATE(60),
    [sym__number] = STATE(31),
    [sym_character] = STATE(60),
    [sym__character] = STATE(32),
    [sym_string] = STATE(60),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(60),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(60),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(60),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(60),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(60),
    [sym_list] = STATE(60),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(60),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(60),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(60),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(60),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(60),
    [sym_anonymous_function] = STATE(60),
    [sym_shorthand_function] = STATE(60),
    [sym_defn] = STATE(60),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(60),
    [sym_unquote] = STATE(60),
    [sym_unquote_splice] = STATE(60),
    [sym_deref] = STATE(60),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(95),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(97),
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
    [anon_sym_POUND_] = ACTIONS(99),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(101),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(103),
    [anon_sym_TILDE] = ACTIONS(105),
    [anon_sym_TILDE_AT] = ACTIONS(107),
    [sym_gensym] = ACTIONS(101),
    [anon_sym_AT] = ACTIONS(71),
  },
  [8] = {
    [sym__keyword_chars] = ACTIONS(109),
  },
  [9] = {
    [sym__keyword_chars] = ACTIONS(111),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(113),
    [sym_nil] = ACTIONS(115),
    [sym_true] = ACTIONS(115),
    [sym_false] = ACTIONS(115),
    [sym_number_long] = ACTIONS(115),
    [sym_number_double] = ACTIONS(113),
    [sym_number_bigint] = ACTIONS(115),
    [sym_number_ratio] = ACTIONS(113),
    [anon_sym_BSLASH] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [anon_sym_POUND_DQUOTE] = ACTIONS(113),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_LPARENquote] = ACTIONS(113),
    [anon_sym_RPAREN] = ACTIONS(113),
    [anon_sym_COLON] = ACTIONS(115),
    [anon_sym_COLON_COLON] = ACTIONS(113),
    [anon_sym_DASH_GT] = ACTIONS(115),
    [anon_sym_DASH_GT_GT] = ACTIONS(113),
    [anon_sym_as_DASH_GT] = ACTIONS(113),
    [anon_sym_some_DASH_GT] = ACTIONS(115),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(113),
    [anon_sym_cond_DASH_GT] = ACTIONS(115),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(113),
    [sym__symbol_chars] = ACTIONS(115),
    [sym_member_access] = ACTIONS(113),
    [sym_field_access] = ACTIONS(113),
    [sym_new_class] = ACTIONS(113),
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
    [anon_sym_AT] = ACTIONS(113),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [sym_nil] = ACTIONS(119),
    [sym_true] = ACTIONS(119),
    [sym_false] = ACTIONS(119),
    [sym_number_long] = ACTIONS(119),
    [sym_number_double] = ACTIONS(117),
    [sym_number_bigint] = ACTIONS(119),
    [sym_number_ratio] = ACTIONS(117),
    [anon_sym_BSLASH] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(117),
    [anon_sym_POUND_DQUOTE] = ACTIONS(117),
    [anon_sym_SQUOTE] = ACTIONS(117),
    [anon_sym_LPARENquote] = ACTIONS(117),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_COLON] = ACTIONS(119),
    [anon_sym_COLON_COLON] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(121),
    [anon_sym_DASH_GT] = ACTIONS(119),
    [anon_sym_DASH_GT_GT] = ACTIONS(117),
    [anon_sym_as_DASH_GT] = ACTIONS(117),
    [anon_sym_some_DASH_GT] = ACTIONS(119),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(117),
    [anon_sym_cond_DASH_GT] = ACTIONS(119),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(117),
    [sym__symbol_chars] = ACTIONS(119),
    [sym_member_access] = ACTIONS(117),
    [sym_field_access] = ACTIONS(117),
    [sym_new_class] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_RBRACK] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(117),
    [anon_sym_POUND] = ACTIONS(119),
    [anon_sym_POUND_LBRACE] = ACTIONS(117),
    [anon_sym_SEMI] = ACTIONS(117),
    [anon_sym_POUND_BANG] = ACTIONS(117),
    [anon_sym_POUND_] = ACTIONS(117),
    [anon_sym_POUND_LPAREN] = ACTIONS(117),
    [sym_shorthand_function_arg] = ACTIONS(117),
    [anon_sym_CARET] = ACTIONS(119),
    [anon_sym_CARET_COLON] = ACTIONS(117),
    [anon_sym_CARET_DQUOTE] = ACTIONS(117),
    [anon_sym_BQUOTE] = ACTIONS(117),
    [anon_sym_TILDE] = ACTIONS(119),
    [anon_sym_TILDE_AT] = ACTIONS(117),
    [sym_gensym] = ACTIONS(117),
    [anon_sym_AT] = ACTIONS(117),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [sym_nil] = ACTIONS(125),
    [sym_true] = ACTIONS(125),
    [sym_false] = ACTIONS(125),
    [sym_number_long] = ACTIONS(125),
    [sym_number_double] = ACTIONS(123),
    [sym_number_bigint] = ACTIONS(125),
    [sym_number_ratio] = ACTIONS(123),
    [anon_sym_BSLASH] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [anon_sym_POUND_DQUOTE] = ACTIONS(123),
    [anon_sym_SQUOTE] = ACTIONS(123),
    [anon_sym_LPARENquote] = ACTIONS(123),
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_COLON] = ACTIONS(125),
    [anon_sym_COLON_COLON] = ACTIONS(123),
    [anon_sym_DASH_GT] = ACTIONS(125),
    [anon_sym_DASH_GT_GT] = ACTIONS(123),
    [anon_sym_as_DASH_GT] = ACTIONS(123),
    [anon_sym_some_DASH_GT] = ACTIONS(125),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(123),
    [anon_sym_cond_DASH_GT] = ACTIONS(125),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(123),
    [sym__symbol_chars] = ACTIONS(125),
    [sym_member_access] = ACTIONS(123),
    [sym_field_access] = ACTIONS(123),
    [sym_new_class] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_RBRACK] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(123),
    [anon_sym_RBRACE] = ACTIONS(123),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(123),
    [anon_sym_POUND] = ACTIONS(125),
    [anon_sym_POUND_LBRACE] = ACTIONS(123),
    [anon_sym_SEMI] = ACTIONS(123),
    [anon_sym_POUND_BANG] = ACTIONS(123),
    [anon_sym_POUND_] = ACTIONS(123),
    [anon_sym_POUND_LPAREN] = ACTIONS(123),
    [sym_shorthand_function_arg] = ACTIONS(123),
    [anon_sym_CARET] = ACTIONS(125),
    [anon_sym_CARET_COLON] = ACTIONS(123),
    [anon_sym_CARET_DQUOTE] = ACTIONS(123),
    [anon_sym_BQUOTE] = ACTIONS(123),
    [anon_sym_TILDE] = ACTIONS(125),
    [anon_sym_TILDE_AT] = ACTIONS(123),
    [sym_gensym] = ACTIONS(123),
    [anon_sym_AT] = ACTIONS(123),
  },
  [13] = {
    [sym__anything] = STATE(73),
    [sym__literals] = STATE(73),
    [sym__collection_literals] = STATE(73),
    [sym_boolean] = STATE(73),
    [sym_number] = STATE(73),
    [sym__number] = STATE(31),
    [sym_character] = STATE(73),
    [sym__character] = STATE(32),
    [sym_string] = STATE(73),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(73),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(73),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(73),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(73),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(73),
    [sym_list] = STATE(73),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(73),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(73),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(73),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(73),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(73),
    [sym_anonymous_function] = STATE(73),
    [sym_shorthand_function] = STATE(73),
    [sym_defn] = STATE(73),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(73),
    [sym_unquote] = STATE(73),
    [sym_unquote_splice] = STATE(73),
    [sym_deref] = STATE(73),
    [aux_sym_program_repeat1] = STATE(73),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(127),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(129),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(131),
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
    [anon_sym_POUND_] = ACTIONS(133),
    [anon_sym_comment] = ACTIONS(135),
    [anon_sym_fn] = ACTIONS(137),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(139),
    [anon_sym_defn] = ACTIONS(141),
    [anon_sym_defn_DASH] = ACTIONS(141),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(145),
    [anon_sym_TILDE_AT] = ACTIONS(147),
    [sym_gensym] = ACTIONS(139),
    [anon_sym_AT] = ACTIONS(71),
  },
  [14] = {
    [sym__anything] = STATE(80),
    [sym__literals] = STATE(80),
    [sym__collection_literals] = STATE(80),
    [sym_boolean] = STATE(80),
    [sym_number] = STATE(80),
    [sym__number] = STATE(31),
    [sym_character] = STATE(80),
    [sym__character] = STATE(32),
    [sym_string] = STATE(80),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(80),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(80),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(80),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(80),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(80),
    [sym_list] = STATE(80),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(80),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(80),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(80),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(80),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(80),
    [sym_anonymous_function] = STATE(80),
    [sym_shorthand_function] = STATE(80),
    [sym_defn] = STATE(80),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(80),
    [sym_unquote] = STATE(80),
    [sym_unquote_splice] = STATE(80),
    [sym_deref] = STATE(80),
    [aux_sym_program_repeat1] = STATE(80),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(149),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(151),
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
    [anon_sym_RBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(155),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(157),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(159),
    [anon_sym_TILDE] = ACTIONS(161),
    [anon_sym_TILDE_AT] = ACTIONS(163),
    [sym_gensym] = ACTIONS(157),
    [anon_sym_AT] = ACTIONS(71),
  },
  [15] = {
    [sym__anything] = STATE(87),
    [sym__literals] = STATE(87),
    [sym__collection_literals] = STATE(87),
    [sym_boolean] = STATE(87),
    [sym_number] = STATE(87),
    [sym__number] = STATE(31),
    [sym_character] = STATE(87),
    [sym__character] = STATE(32),
    [sym_string] = STATE(87),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(87),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(87),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(87),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(87),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(87),
    [sym_list] = STATE(87),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(87),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(87),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym__hash_map_kv_pair] = STATE(88),
    [sym__hash_map_key] = STATE(87),
    [sym_set] = STATE(87),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(87),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(87),
    [sym_anonymous_function] = STATE(87),
    [sym_shorthand_function] = STATE(87),
    [sym_defn] = STATE(87),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(87),
    [sym_unquote] = STATE(87),
    [sym_unquote_splice] = STATE(87),
    [sym_deref] = STATE(87),
    [aux_sym__hash_map_repeat1] = STATE(88),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(165),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(167),
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
    [anon_sym_RBRACE] = ACTIONS(169),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(171),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(173),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(175),
    [anon_sym_TILDE] = ACTIONS(177),
    [anon_sym_TILDE_AT] = ACTIONS(179),
    [sym_gensym] = ACTIONS(173),
    [anon_sym_AT] = ACTIONS(71),
  },
  [16] = {
    [sym__anything] = STATE(87),
    [sym__literals] = STATE(87),
    [sym__collection_literals] = STATE(87),
    [sym_boolean] = STATE(87),
    [sym_number] = STATE(87),
    [sym__number] = STATE(31),
    [sym_character] = STATE(87),
    [sym__character] = STATE(32),
    [sym_string] = STATE(87),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(87),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(87),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(87),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(87),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(87),
    [sym_list] = STATE(87),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(87),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(87),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym__hash_map_kv_pair] = STATE(90),
    [sym__hash_map_key] = STATE(87),
    [sym_set] = STATE(87),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(87),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(87),
    [sym_anonymous_function] = STATE(87),
    [sym_shorthand_function] = STATE(87),
    [sym_defn] = STATE(87),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(87),
    [sym_unquote] = STATE(87),
    [sym_unquote_splice] = STATE(87),
    [sym_deref] = STATE(87),
    [aux_sym__hash_map_repeat1] = STATE(90),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(165),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(167),
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
    [anon_sym_RBRACE] = ACTIONS(181),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(171),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(173),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(175),
    [anon_sym_TILDE] = ACTIONS(177),
    [anon_sym_TILDE_AT] = ACTIONS(179),
    [sym_gensym] = ACTIONS(173),
    [anon_sym_AT] = ACTIONS(71),
  },
  [17] = {
    [sym__symbol_chars] = ACTIONS(183),
  },
  [18] = {
    [sym__anything] = STATE(98),
    [sym__literals] = STATE(98),
    [sym__collection_literals] = STATE(98),
    [sym_boolean] = STATE(98),
    [sym_number] = STATE(98),
    [sym__number] = STATE(31),
    [sym_character] = STATE(98),
    [sym__character] = STATE(32),
    [sym_string] = STATE(98),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(98),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(98),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(98),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(98),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(98),
    [sym_list] = STATE(98),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(98),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(98),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(98),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(98),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(98),
    [sym_anonymous_function] = STATE(98),
    [sym_shorthand_function] = STATE(98),
    [sym_defn] = STATE(98),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(98),
    [sym_unquote] = STATE(98),
    [sym_unquote_splice] = STATE(98),
    [sym_deref] = STATE(98),
    [aux_sym_program_repeat1] = STATE(98),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(185),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(189),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(191),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(193),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(195),
    [anon_sym_TILDE] = ACTIONS(197),
    [anon_sym_TILDE_AT] = ACTIONS(199),
    [sym_gensym] = ACTIONS(193),
    [anon_sym_AT] = ACTIONS(71),
  },
  [19] = {
    [aux_sym_SLASH_DOT_STAR_SLASH] = ACTIONS(201),
  },
  [20] = {
    [aux_sym_SLASH_DOT_STAR_SLASH] = ACTIONS(203),
  },
  [21] = {
    [sym__anything] = STATE(101),
    [sym__literals] = STATE(101),
    [sym__collection_literals] = STATE(101),
    [sym_boolean] = STATE(101),
    [sym_number] = STATE(101),
    [sym__number] = STATE(31),
    [sym_character] = STATE(101),
    [sym__character] = STATE(32),
    [sym_string] = STATE(101),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(101),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(101),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(101),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(101),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(101),
    [sym_list] = STATE(101),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(101),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(101),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(101),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(101),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(101),
    [sym_anonymous_function] = STATE(101),
    [sym_shorthand_function] = STATE(101),
    [sym_defn] = STATE(101),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(101),
    [sym_unquote] = STATE(101),
    [sym_unquote_splice] = STATE(101),
    [sym_deref] = STATE(101),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(205),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
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
    [sym_shorthand_function_arg] = ACTIONS(207),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(67),
    [anon_sym_TILDE_AT] = ACTIONS(69),
    [sym_gensym] = ACTIONS(207),
    [anon_sym_AT] = ACTIONS(71),
  },
  [22] = {
    [sym__anything] = STATE(103),
    [sym__literals] = STATE(103),
    [sym__collection_literals] = STATE(103),
    [sym_boolean] = STATE(103),
    [sym_number] = STATE(103),
    [sym__number] = STATE(31),
    [sym_character] = STATE(103),
    [sym__character] = STATE(32),
    [sym_string] = STATE(103),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(103),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(103),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(103),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(103),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(103),
    [sym_list] = STATE(103),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(103),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(103),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(103),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(103),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(103),
    [sym_anonymous_function] = STATE(103),
    [sym_shorthand_function] = STATE(103),
    [sym_defn] = STATE(103),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(103),
    [sym_unquote] = STATE(103),
    [sym_unquote_splice] = STATE(103),
    [sym_deref] = STATE(103),
    [aux_sym_program_repeat1] = STATE(103),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(209),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(129),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(211),
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
    [anon_sym_POUND_] = ACTIONS(133),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(213),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(145),
    [anon_sym_TILDE_AT] = ACTIONS(147),
    [sym_gensym] = ACTIONS(213),
    [anon_sym_AT] = ACTIONS(71),
  },
  [23] = {
    [sym_hash_map] = STATE(108),
    [sym__hash_map] = STATE(109),
    [sym_namespace_map] = STATE(109),
    [sym__symbol_chars] = ACTIONS(215),
    [anon_sym_LBRACE] = ACTIONS(217),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(219),
    [anon_sym_POUND] = ACTIONS(221),
  },
  [24] = {
    [sym__keyword_chars] = ACTIONS(215),
  },
  [25] = {
    [aux_sym__string_repeat1] = STATE(110),
    [anon_sym_DQUOTE] = ACTIONS(223),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(225),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(225),
  },
  [26] = {
    [sym__anything] = STATE(111),
    [sym__literals] = STATE(111),
    [sym__collection_literals] = STATE(111),
    [sym_boolean] = STATE(111),
    [sym_number] = STATE(111),
    [sym__number] = STATE(31),
    [sym_character] = STATE(111),
    [sym__character] = STATE(32),
    [sym_string] = STATE(111),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(111),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(111),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(111),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(111),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(111),
    [sym_list] = STATE(111),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(111),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(111),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(111),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(111),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(111),
    [sym_anonymous_function] = STATE(111),
    [sym_shorthand_function] = STATE(111),
    [sym_defn] = STATE(111),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(111),
    [sym_unquote] = STATE(111),
    [sym_unquote_splice] = STATE(111),
    [sym_deref] = STATE(111),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(227),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
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
    [sym_shorthand_function_arg] = ACTIONS(229),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(67),
    [anon_sym_TILDE_AT] = ACTIONS(69),
    [sym_gensym] = ACTIONS(229),
    [anon_sym_AT] = ACTIONS(71),
  },
  [27] = {
    [sym__anything] = STATE(112),
    [sym__literals] = STATE(112),
    [sym__collection_literals] = STATE(112),
    [sym_boolean] = STATE(112),
    [sym_number] = STATE(112),
    [sym__number] = STATE(31),
    [sym_character] = STATE(112),
    [sym__character] = STATE(32),
    [sym_string] = STATE(112),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(112),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(112),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(112),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(112),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(112),
    [sym_list] = STATE(112),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(112),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(112),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(112),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(112),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(112),
    [sym_anonymous_function] = STATE(112),
    [sym_shorthand_function] = STATE(112),
    [sym_defn] = STATE(112),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(112),
    [sym_unquote] = STATE(112),
    [sym_unquote_splice] = STATE(112),
    [sym_deref] = STATE(112),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(231),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
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
    [sym_shorthand_function_arg] = ACTIONS(233),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(67),
    [anon_sym_TILDE_AT] = ACTIONS(69),
    [sym_gensym] = ACTIONS(233),
    [anon_sym_AT] = ACTIONS(71),
  },
  [28] = {
    [sym__anything] = STATE(113),
    [sym__literals] = STATE(113),
    [sym__collection_literals] = STATE(113),
    [sym_boolean] = STATE(113),
    [sym_number] = STATE(113),
    [sym__number] = STATE(31),
    [sym_character] = STATE(113),
    [sym__character] = STATE(32),
    [sym_string] = STATE(113),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(113),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(113),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(113),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(113),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(113),
    [sym_list] = STATE(113),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(113),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(113),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(113),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(113),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(113),
    [sym_anonymous_function] = STATE(113),
    [sym_shorthand_function] = STATE(113),
    [sym_defn] = STATE(113),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(113),
    [sym_unquote] = STATE(113),
    [sym_unquote_splice] = STATE(113),
    [sym_deref] = STATE(113),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(235),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
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
    [sym_shorthand_function_arg] = ACTIONS(237),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(67),
    [anon_sym_TILDE_AT] = ACTIONS(69),
    [sym_gensym] = ACTIONS(237),
    [anon_sym_AT] = ACTIONS(71),
  },
  [29] = {
    [sym_symbol] = STATE(115),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_list] = STATE(115),
    [sym__list] = STATE(38),
    [anon_sym_DASH_GT] = ACTIONS(29),
    [anon_sym_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_as_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT] = ACTIONS(29),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT] = ACTIONS(29),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(31),
    [sym__symbol_chars] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(239),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(241),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(243),
    [sym_nil] = ACTIONS(245),
    [sym_true] = ACTIONS(245),
    [sym_false] = ACTIONS(245),
    [sym_number_long] = ACTIONS(245),
    [sym_number_double] = ACTIONS(243),
    [sym_number_bigint] = ACTIONS(245),
    [sym_number_ratio] = ACTIONS(243),
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
    [anon_sym_AT] = ACTIONS(243),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(247),
    [sym_nil] = ACTIONS(249),
    [sym_true] = ACTIONS(249),
    [sym_false] = ACTIONS(249),
    [sym_number_long] = ACTIONS(249),
    [sym_number_double] = ACTIONS(247),
    [sym_number_bigint] = ACTIONS(249),
    [sym_number_ratio] = ACTIONS(247),
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
    [anon_sym_AT] = ACTIONS(247),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(251),
    [sym_nil] = ACTIONS(253),
    [sym_true] = ACTIONS(253),
    [sym_false] = ACTIONS(253),
    [sym_number_long] = ACTIONS(253),
    [sym_number_double] = ACTIONS(251),
    [sym_number_bigint] = ACTIONS(253),
    [sym_number_ratio] = ACTIONS(251),
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
    [anon_sym_AT] = ACTIONS(251),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(255),
    [sym_nil] = ACTIONS(257),
    [sym_true] = ACTIONS(257),
    [sym_false] = ACTIONS(257),
    [sym_number_long] = ACTIONS(257),
    [sym_number_double] = ACTIONS(255),
    [sym_number_bigint] = ACTIONS(257),
    [sym_number_ratio] = ACTIONS(255),
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
    [anon_sym_AT] = ACTIONS(255),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(259),
    [sym_nil] = ACTIONS(261),
    [sym_true] = ACTIONS(261),
    [sym_false] = ACTIONS(261),
    [sym_number_long] = ACTIONS(261),
    [sym_number_double] = ACTIONS(259),
    [sym_number_bigint] = ACTIONS(261),
    [sym_number_ratio] = ACTIONS(259),
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
    [anon_sym_AT] = ACTIONS(259),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(263),
    [sym_nil] = ACTIONS(265),
    [sym_true] = ACTIONS(265),
    [sym_false] = ACTIONS(265),
    [sym_number_long] = ACTIONS(265),
    [sym_number_double] = ACTIONS(263),
    [sym_number_bigint] = ACTIONS(265),
    [sym_number_ratio] = ACTIONS(263),
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
    [anon_sym_AT] = ACTIONS(263),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(267),
    [sym_nil] = ACTIONS(269),
    [sym_true] = ACTIONS(269),
    [sym_false] = ACTIONS(269),
    [sym_number_long] = ACTIONS(269),
    [sym_number_double] = ACTIONS(267),
    [sym_number_bigint] = ACTIONS(269),
    [sym_number_ratio] = ACTIONS(267),
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
    [anon_sym_AT] = ACTIONS(267),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(271),
    [sym_nil] = ACTIONS(273),
    [sym_true] = ACTIONS(273),
    [sym_false] = ACTIONS(273),
    [sym_number_long] = ACTIONS(273),
    [sym_number_double] = ACTIONS(271),
    [sym_number_bigint] = ACTIONS(273),
    [sym_number_ratio] = ACTIONS(271),
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
    [anon_sym_AT] = ACTIONS(271),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(275),
    [sym_nil] = ACTIONS(277),
    [sym_true] = ACTIONS(277),
    [sym_false] = ACTIONS(277),
    [sym_number_long] = ACTIONS(277),
    [sym_number_double] = ACTIONS(275),
    [sym_number_bigint] = ACTIONS(277),
    [sym_number_ratio] = ACTIONS(275),
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
    [anon_sym_AT] = ACTIONS(275),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(279),
    [sym_nil] = ACTIONS(281),
    [sym_true] = ACTIONS(281),
    [sym_false] = ACTIONS(281),
    [sym_number_long] = ACTIONS(281),
    [sym_number_double] = ACTIONS(279),
    [sym_number_bigint] = ACTIONS(281),
    [sym_number_ratio] = ACTIONS(279),
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
    [anon_sym_AT] = ACTIONS(279),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(283),
    [sym_nil] = ACTIONS(285),
    [sym_true] = ACTIONS(285),
    [sym_false] = ACTIONS(285),
    [sym_number_long] = ACTIONS(285),
    [sym_number_double] = ACTIONS(283),
    [sym_number_bigint] = ACTIONS(285),
    [sym_number_ratio] = ACTIONS(283),
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
    [anon_sym_AT] = ACTIONS(283),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(287),
    [sym_nil] = ACTIONS(289),
    [sym_true] = ACTIONS(289),
    [sym_false] = ACTIONS(289),
    [sym_number_long] = ACTIONS(289),
    [sym_number_double] = ACTIONS(287),
    [sym_number_bigint] = ACTIONS(289),
    [sym_number_ratio] = ACTIONS(287),
    [anon_sym_BSLASH] = ACTIONS(287),
    [anon_sym_DQUOTE] = ACTIONS(287),
    [anon_sym_POUND_DQUOTE] = ACTIONS(287),
    [anon_sym_SQUOTE] = ACTIONS(287),
    [anon_sym_LPARENquote] = ACTIONS(287),
    [anon_sym_RPAREN] = ACTIONS(287),
    [anon_sym_COLON] = ACTIONS(289),
    [anon_sym_COLON_COLON] = ACTIONS(287),
    [anon_sym_DASH_GT] = ACTIONS(289),
    [anon_sym_DASH_GT_GT] = ACTIONS(287),
    [anon_sym_as_DASH_GT] = ACTIONS(287),
    [anon_sym_some_DASH_GT] = ACTIONS(289),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(287),
    [anon_sym_cond_DASH_GT] = ACTIONS(289),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(287),
    [sym__symbol_chars] = ACTIONS(289),
    [sym_member_access] = ACTIONS(287),
    [sym_field_access] = ACTIONS(287),
    [sym_new_class] = ACTIONS(287),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(287),
    [sym_shorthand_function_arg] = ACTIONS(287),
    [anon_sym_CARET] = ACTIONS(289),
    [anon_sym_CARET_COLON] = ACTIONS(287),
    [anon_sym_CARET_DQUOTE] = ACTIONS(287),
    [anon_sym_BQUOTE] = ACTIONS(287),
    [anon_sym_TILDE] = ACTIONS(289),
    [anon_sym_TILDE_AT] = ACTIONS(287),
    [sym_gensym] = ACTIONS(287),
    [anon_sym_AT] = ACTIONS(287),
  },
  [43] = {
    [sym_list] = STATE(116),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(116),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(116),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(116),
    [sym__set] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
  },
  [44] = {
    [anon_sym_DASH_GT] = ACTIONS(291),
    [anon_sym_DASH_GT_GT] = ACTIONS(293),
    [anon_sym_as_DASH_GT] = ACTIONS(293),
    [anon_sym_some_DASH_GT] = ACTIONS(291),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(293),
    [anon_sym_cond_DASH_GT] = ACTIONS(291),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(293),
    [sym__symbol_chars] = ACTIONS(291),
    [anon_sym_LPAREN] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(293),
    [anon_sym_LBRACE] = ACTIONS(293),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(293),
    [anon_sym_POUND] = ACTIONS(291),
    [anon_sym_POUND_LBRACE] = ACTIONS(293),
  },
  [45] = {
    [sym__anything] = STATE(117),
    [sym__literals] = STATE(117),
    [sym__collection_literals] = STATE(117),
    [sym_boolean] = STATE(117),
    [sym_number] = STATE(117),
    [sym__number] = STATE(31),
    [sym_character] = STATE(117),
    [sym__character] = STATE(32),
    [sym_string] = STATE(117),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(117),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(117),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(117),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(117),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(117),
    [sym_list] = STATE(117),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(117),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(117),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(117),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(117),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(117),
    [sym_anonymous_function] = STATE(117),
    [sym_shorthand_function] = STATE(117),
    [sym_defn] = STATE(117),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(117),
    [sym_unquote] = STATE(117),
    [sym_unquote_splice] = STATE(117),
    [sym_deref] = STATE(117),
    [aux_sym_program_repeat1] = STATE(117),
    [aux_sym_metadata_repeat1] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(295),
    [sym_nil] = ACTIONS(297),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
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
    [sym_shorthand_function_arg] = ACTIONS(299),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(67),
    [anon_sym_TILDE_AT] = ACTIONS(69),
    [sym_gensym] = ACTIONS(299),
    [anon_sym_AT] = ACTIONS(71),
  },
  [46] = {
    [sym_metadata_shorthand] = STATE(119),
    [aux_sym_metadata_repeat1] = STATE(119),
    [anon_sym_LPAREN] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(293),
    [anon_sym_LBRACE] = ACTIONS(293),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(293),
    [anon_sym_POUND] = ACTIONS(291),
    [anon_sym_POUND_LBRACE] = ACTIONS(293),
    [anon_sym_CARET] = ACTIONS(301),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(303),
    [sym_nil] = ACTIONS(305),
    [sym_true] = ACTIONS(305),
    [sym_false] = ACTIONS(305),
    [sym_number_long] = ACTIONS(305),
    [sym_number_double] = ACTIONS(303),
    [sym_number_bigint] = ACTIONS(305),
    [sym_number_ratio] = ACTIONS(303),
    [anon_sym_BSLASH] = ACTIONS(303),
    [anon_sym_DQUOTE] = ACTIONS(303),
    [anon_sym_POUND_DQUOTE] = ACTIONS(303),
    [anon_sym_SQUOTE] = ACTIONS(303),
    [anon_sym_LPARENquote] = ACTIONS(303),
    [anon_sym_RPAREN] = ACTIONS(303),
    [anon_sym_COLON] = ACTIONS(305),
    [anon_sym_COLON_COLON] = ACTIONS(303),
    [anon_sym_DASH_GT] = ACTIONS(305),
    [anon_sym_DASH_GT_GT] = ACTIONS(303),
    [anon_sym_as_DASH_GT] = ACTIONS(303),
    [anon_sym_some_DASH_GT] = ACTIONS(305),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(303),
    [anon_sym_cond_DASH_GT] = ACTIONS(305),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(303),
    [sym__symbol_chars] = ACTIONS(305),
    [sym_member_access] = ACTIONS(303),
    [sym_field_access] = ACTIONS(303),
    [sym_new_class] = ACTIONS(303),
    [anon_sym_LPAREN] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(303),
    [anon_sym_RBRACK] = ACTIONS(303),
    [anon_sym_LBRACE] = ACTIONS(303),
    [anon_sym_RBRACE] = ACTIONS(303),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(303),
    [anon_sym_POUND] = ACTIONS(305),
    [anon_sym_POUND_LBRACE] = ACTIONS(303),
    [anon_sym_SEMI] = ACTIONS(303),
    [anon_sym_POUND_BANG] = ACTIONS(303),
    [anon_sym_POUND_] = ACTIONS(303),
    [anon_sym_POUND_LPAREN] = ACTIONS(303),
    [sym_shorthand_function_arg] = ACTIONS(303),
    [anon_sym_CARET] = ACTIONS(305),
    [anon_sym_CARET_COLON] = ACTIONS(303),
    [anon_sym_CARET_DQUOTE] = ACTIONS(303),
    [anon_sym_BQUOTE] = ACTIONS(303),
    [anon_sym_TILDE] = ACTIONS(305),
    [anon_sym_TILDE_AT] = ACTIONS(303),
    [sym_gensym] = ACTIONS(303),
    [anon_sym_AT] = ACTIONS(303),
  },
  [48] = {
    [sym__hex_char] = ACTIONS(307),
  },
  [49] = {
    [sym__octal_num] = STATE(121),
    [aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(309),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(311),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(311),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(313),
    [sym_nil] = ACTIONS(315),
    [sym_true] = ACTIONS(315),
    [sym_false] = ACTIONS(315),
    [sym_number_long] = ACTIONS(315),
    [sym_number_double] = ACTIONS(313),
    [sym_number_bigint] = ACTIONS(315),
    [sym_number_ratio] = ACTIONS(313),
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
    [sym_member_access] = ACTIONS(313),
    [sym_field_access] = ACTIONS(313),
    [sym_new_class] = ACTIONS(313),
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
    [anon_sym_AT] = ACTIONS(313),
  },
  [51] = {
    [aux_sym__string_repeat1] = STATE(123),
    [anon_sym_DQUOTE] = ACTIONS(317),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(319),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(319),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(321),
    [sym_nil] = ACTIONS(323),
    [sym_true] = ACTIONS(323),
    [sym_false] = ACTIONS(323),
    [sym_number_long] = ACTIONS(323),
    [sym_number_double] = ACTIONS(321),
    [sym_number_bigint] = ACTIONS(323),
    [sym_number_ratio] = ACTIONS(321),
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
    [sym_member_access] = ACTIONS(321),
    [sym_field_access] = ACTIONS(321),
    [sym_new_class] = ACTIONS(321),
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
    [anon_sym_AT] = ACTIONS(321),
  },
  [53] = {
    [aux_sym__regex_repeat1] = STATE(125),
    [anon_sym_DQUOTE] = ACTIONS(325),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(327),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(327),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(329),
    [sym_nil] = ACTIONS(331),
    [sym_true] = ACTIONS(331),
    [sym_false] = ACTIONS(331),
    [sym_number_long] = ACTIONS(331),
    [sym_number_double] = ACTIONS(329),
    [sym_number_bigint] = ACTIONS(331),
    [sym_number_ratio] = ACTIONS(329),
    [anon_sym_BSLASH] = ACTIONS(329),
    [anon_sym_DQUOTE] = ACTIONS(329),
    [anon_sym_POUND_DQUOTE] = ACTIONS(329),
    [anon_sym_SQUOTE] = ACTIONS(329),
    [anon_sym_LPARENquote] = ACTIONS(329),
    [anon_sym_RPAREN] = ACTIONS(329),
    [anon_sym_COLON] = ACTIONS(331),
    [anon_sym_COLON_COLON] = ACTIONS(329),
    [anon_sym_DASH_GT] = ACTIONS(331),
    [anon_sym_DASH_GT_GT] = ACTIONS(329),
    [anon_sym_as_DASH_GT] = ACTIONS(329),
    [anon_sym_some_DASH_GT] = ACTIONS(331),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(329),
    [anon_sym_cond_DASH_GT] = ACTIONS(331),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(329),
    [sym__symbol_chars] = ACTIONS(331),
    [sym_member_access] = ACTIONS(329),
    [sym_field_access] = ACTIONS(329),
    [sym_new_class] = ACTIONS(329),
    [anon_sym_LPAREN] = ACTIONS(331),
    [anon_sym_LBRACK] = ACTIONS(329),
    [anon_sym_RBRACK] = ACTIONS(329),
    [anon_sym_LBRACE] = ACTIONS(329),
    [anon_sym_RBRACE] = ACTIONS(329),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(329),
    [anon_sym_POUND] = ACTIONS(331),
    [anon_sym_POUND_LBRACE] = ACTIONS(329),
    [anon_sym_SEMI] = ACTIONS(329),
    [anon_sym_POUND_BANG] = ACTIONS(329),
    [anon_sym_POUND_] = ACTIONS(329),
    [anon_sym_POUND_LPAREN] = ACTIONS(329),
    [sym_shorthand_function_arg] = ACTIONS(329),
    [anon_sym_CARET] = ACTIONS(331),
    [anon_sym_CARET_COLON] = ACTIONS(329),
    [anon_sym_CARET_DQUOTE] = ACTIONS(329),
    [anon_sym_BQUOTE] = ACTIONS(329),
    [anon_sym_TILDE] = ACTIONS(331),
    [anon_sym_TILDE_AT] = ACTIONS(329),
    [sym_gensym] = ACTIONS(329),
    [anon_sym_AT] = ACTIONS(329),
  },
  [55] = {
    [sym__anything] = STATE(54),
    [sym__literals] = STATE(54),
    [sym__collection_literals] = STATE(54),
    [sym_boolean] = STATE(54),
    [sym_number] = STATE(54),
    [sym__number] = STATE(31),
    [sym_character] = STATE(54),
    [sym__character] = STATE(32),
    [sym_string] = STATE(54),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(54),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(54),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(54),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(54),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(54),
    [sym_list] = STATE(54),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(54),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(54),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(54),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(54),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(54),
    [sym_anonymous_function] = STATE(54),
    [sym_shorthand_function] = STATE(54),
    [sym_defn] = STATE(54),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(54),
    [sym_unquote] = STATE(54),
    [sym_unquote_splice] = STATE(54),
    [sym_deref] = STATE(54),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(91),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(97),
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
    [anon_sym_POUND_] = ACTIONS(99),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(93),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(103),
    [anon_sym_TILDE] = ACTIONS(105),
    [anon_sym_TILDE_AT] = ACTIONS(107),
    [sym_gensym] = ACTIONS(93),
    [anon_sym_AT] = ACTIONS(71),
  },
  [56] = {
    [sym__anything] = STATE(101),
    [sym__literals] = STATE(101),
    [sym__collection_literals] = STATE(101),
    [sym_boolean] = STATE(101),
    [sym_number] = STATE(101),
    [sym__number] = STATE(31),
    [sym_character] = STATE(101),
    [sym__character] = STATE(32),
    [sym_string] = STATE(101),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(101),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(101),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(101),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(101),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(101),
    [sym_list] = STATE(101),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(101),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(101),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(101),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(101),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(101),
    [sym_anonymous_function] = STATE(101),
    [sym_shorthand_function] = STATE(101),
    [sym_defn] = STATE(101),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(101),
    [sym_unquote] = STATE(101),
    [sym_unquote_splice] = STATE(101),
    [sym_deref] = STATE(101),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(205),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(97),
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
    [anon_sym_POUND_] = ACTIONS(99),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(207),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(103),
    [anon_sym_TILDE] = ACTIONS(105),
    [anon_sym_TILDE_AT] = ACTIONS(107),
    [sym_gensym] = ACTIONS(207),
    [anon_sym_AT] = ACTIONS(71),
  },
  [57] = {
    [sym__anything] = STATE(111),
    [sym__literals] = STATE(111),
    [sym__collection_literals] = STATE(111),
    [sym_boolean] = STATE(111),
    [sym_number] = STATE(111),
    [sym__number] = STATE(31),
    [sym_character] = STATE(111),
    [sym__character] = STATE(32),
    [sym_string] = STATE(111),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(111),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(111),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(111),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(111),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(111),
    [sym_list] = STATE(111),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(111),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(111),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(111),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(111),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(111),
    [sym_anonymous_function] = STATE(111),
    [sym_shorthand_function] = STATE(111),
    [sym_defn] = STATE(111),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(111),
    [sym_unquote] = STATE(111),
    [sym_unquote_splice] = STATE(111),
    [sym_deref] = STATE(111),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(227),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(97),
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
    [anon_sym_POUND_] = ACTIONS(99),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(229),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(103),
    [anon_sym_TILDE] = ACTIONS(105),
    [anon_sym_TILDE_AT] = ACTIONS(107),
    [sym_gensym] = ACTIONS(229),
    [anon_sym_AT] = ACTIONS(71),
  },
  [58] = {
    [sym__anything] = STATE(112),
    [sym__literals] = STATE(112),
    [sym__collection_literals] = STATE(112),
    [sym_boolean] = STATE(112),
    [sym_number] = STATE(112),
    [sym__number] = STATE(31),
    [sym_character] = STATE(112),
    [sym__character] = STATE(32),
    [sym_string] = STATE(112),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(112),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(112),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(112),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(112),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(112),
    [sym_list] = STATE(112),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(112),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(112),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(112),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(112),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(112),
    [sym_anonymous_function] = STATE(112),
    [sym_shorthand_function] = STATE(112),
    [sym_defn] = STATE(112),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(112),
    [sym_unquote] = STATE(112),
    [sym_unquote_splice] = STATE(112),
    [sym_deref] = STATE(112),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(231),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(97),
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
    [anon_sym_POUND_] = ACTIONS(99),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(233),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(103),
    [anon_sym_TILDE] = ACTIONS(105),
    [anon_sym_TILDE_AT] = ACTIONS(107),
    [sym_gensym] = ACTIONS(233),
    [anon_sym_AT] = ACTIONS(71),
  },
  [59] = {
    [sym__anything] = STATE(113),
    [sym__literals] = STATE(113),
    [sym__collection_literals] = STATE(113),
    [sym_boolean] = STATE(113),
    [sym_number] = STATE(113),
    [sym__number] = STATE(31),
    [sym_character] = STATE(113),
    [sym__character] = STATE(32),
    [sym_string] = STATE(113),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(113),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(113),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(113),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(113),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(113),
    [sym_list] = STATE(113),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(113),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(113),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(113),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(113),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(113),
    [sym_anonymous_function] = STATE(113),
    [sym_shorthand_function] = STATE(113),
    [sym_defn] = STATE(113),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(113),
    [sym_unquote] = STATE(113),
    [sym_unquote_splice] = STATE(113),
    [sym_deref] = STATE(113),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(235),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(97),
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
    [anon_sym_POUND_] = ACTIONS(99),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(237),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(103),
    [anon_sym_TILDE] = ACTIONS(105),
    [anon_sym_TILDE_AT] = ACTIONS(107),
    [sym_gensym] = ACTIONS(237),
    [anon_sym_AT] = ACTIONS(71),
  },
  [60] = {
    [anon_sym_RPAREN] = ACTIONS(333),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(335),
    [sym_nil] = ACTIONS(337),
    [sym_true] = ACTIONS(337),
    [sym_false] = ACTIONS(337),
    [sym_number_long] = ACTIONS(337),
    [sym_number_double] = ACTIONS(335),
    [sym_number_bigint] = ACTIONS(337),
    [sym_number_ratio] = ACTIONS(335),
    [anon_sym_BSLASH] = ACTIONS(335),
    [anon_sym_DQUOTE] = ACTIONS(335),
    [anon_sym_POUND_DQUOTE] = ACTIONS(335),
    [anon_sym_SQUOTE] = ACTIONS(335),
    [anon_sym_LPARENquote] = ACTIONS(335),
    [anon_sym_RPAREN] = ACTIONS(335),
    [anon_sym_COLON] = ACTIONS(337),
    [anon_sym_COLON_COLON] = ACTIONS(335),
    [anon_sym_DASH_GT] = ACTIONS(337),
    [anon_sym_DASH_GT_GT] = ACTIONS(335),
    [anon_sym_as_DASH_GT] = ACTIONS(335),
    [anon_sym_some_DASH_GT] = ACTIONS(337),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(335),
    [anon_sym_cond_DASH_GT] = ACTIONS(337),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(335),
    [sym__symbol_chars] = ACTIONS(337),
    [sym_member_access] = ACTIONS(335),
    [sym_field_access] = ACTIONS(335),
    [sym_new_class] = ACTIONS(335),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(335),
    [sym_shorthand_function_arg] = ACTIONS(335),
    [anon_sym_CARET] = ACTIONS(337),
    [anon_sym_CARET_COLON] = ACTIONS(335),
    [anon_sym_CARET_DQUOTE] = ACTIONS(335),
    [anon_sym_BQUOTE] = ACTIONS(335),
    [anon_sym_TILDE] = ACTIONS(337),
    [anon_sym_TILDE_AT] = ACTIONS(335),
    [sym_gensym] = ACTIONS(335),
    [anon_sym_AT] = ACTIONS(335),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(339),
    [sym_nil] = ACTIONS(341),
    [sym_true] = ACTIONS(341),
    [sym_false] = ACTIONS(341),
    [sym_number_long] = ACTIONS(341),
    [sym_number_double] = ACTIONS(339),
    [sym_number_bigint] = ACTIONS(341),
    [sym_number_ratio] = ACTIONS(339),
    [anon_sym_BSLASH] = ACTIONS(339),
    [anon_sym_DQUOTE] = ACTIONS(339),
    [anon_sym_POUND_DQUOTE] = ACTIONS(339),
    [anon_sym_SQUOTE] = ACTIONS(339),
    [anon_sym_LPARENquote] = ACTIONS(339),
    [anon_sym_RPAREN] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(341),
    [anon_sym_COLON_COLON] = ACTIONS(339),
    [anon_sym_SLASH] = ACTIONS(343),
    [anon_sym_DASH_GT] = ACTIONS(341),
    [anon_sym_DASH_GT_GT] = ACTIONS(339),
    [anon_sym_as_DASH_GT] = ACTIONS(339),
    [anon_sym_some_DASH_GT] = ACTIONS(341),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(339),
    [anon_sym_cond_DASH_GT] = ACTIONS(341),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(339),
    [sym__symbol_chars] = ACTIONS(341),
    [sym_member_access] = ACTIONS(339),
    [sym_field_access] = ACTIONS(339),
    [sym_new_class] = ACTIONS(339),
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
    [anon_sym_AT] = ACTIONS(339),
  },
  [63] = {
    [sym__symbol_chars] = ACTIONS(345),
  },
  [64] = {
    [sym__anything] = STATE(54),
    [sym__literals] = STATE(54),
    [sym__collection_literals] = STATE(54),
    [sym_boolean] = STATE(54),
    [sym_number] = STATE(54),
    [sym__number] = STATE(31),
    [sym_character] = STATE(54),
    [sym__character] = STATE(32),
    [sym_string] = STATE(54),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(54),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(54),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(54),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(54),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(54),
    [sym_list] = STATE(54),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(54),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(54),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(54),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(54),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(54),
    [sym_anonymous_function] = STATE(54),
    [sym_shorthand_function] = STATE(54),
    [sym_defn] = STATE(54),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(54),
    [sym_unquote] = STATE(54),
    [sym_unquote_splice] = STATE(54),
    [sym_deref] = STATE(54),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(91),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(129),
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
    [anon_sym_POUND_] = ACTIONS(133),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(93),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(145),
    [anon_sym_TILDE_AT] = ACTIONS(147),
    [sym_gensym] = ACTIONS(93),
    [anon_sym_AT] = ACTIONS(71),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(347),
    [sym_nil] = ACTIONS(349),
    [sym_true] = ACTIONS(349),
    [sym_false] = ACTIONS(349),
    [sym_number_long] = ACTIONS(349),
    [sym_number_double] = ACTIONS(347),
    [sym_number_bigint] = ACTIONS(349),
    [sym_number_ratio] = ACTIONS(347),
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
    [sym_member_access] = ACTIONS(347),
    [sym_field_access] = ACTIONS(347),
    [sym_new_class] = ACTIONS(347),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(347),
    [sym_shorthand_function_arg] = ACTIONS(347),
    [anon_sym_CARET] = ACTIONS(349),
    [anon_sym_CARET_COLON] = ACTIONS(347),
    [anon_sym_CARET_DQUOTE] = ACTIONS(347),
    [anon_sym_BQUOTE] = ACTIONS(347),
    [anon_sym_TILDE] = ACTIONS(349),
    [anon_sym_TILDE_AT] = ACTIONS(347),
    [sym_gensym] = ACTIONS(347),
    [anon_sym_AT] = ACTIONS(347),
  },
  [66] = {
    [sym__anything] = STATE(101),
    [sym__literals] = STATE(101),
    [sym__collection_literals] = STATE(101),
    [sym_boolean] = STATE(101),
    [sym_number] = STATE(101),
    [sym__number] = STATE(31),
    [sym_character] = STATE(101),
    [sym__character] = STATE(32),
    [sym_string] = STATE(101),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(101),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(101),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(101),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(101),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(101),
    [sym_list] = STATE(101),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(101),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(101),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(101),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(101),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(101),
    [sym_anonymous_function] = STATE(101),
    [sym_shorthand_function] = STATE(101),
    [sym_defn] = STATE(101),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(101),
    [sym_unquote] = STATE(101),
    [sym_unquote_splice] = STATE(101),
    [sym_deref] = STATE(101),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(205),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(129),
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
    [anon_sym_POUND_] = ACTIONS(133),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(207),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(145),
    [anon_sym_TILDE_AT] = ACTIONS(147),
    [sym_gensym] = ACTIONS(207),
    [anon_sym_AT] = ACTIONS(71),
  },
  [67] = {
    [sym__anything] = STATE(130),
    [sym__literals] = STATE(130),
    [sym__collection_literals] = STATE(130),
    [sym_boolean] = STATE(130),
    [sym_number] = STATE(130),
    [sym__number] = STATE(31),
    [sym_character] = STATE(130),
    [sym__character] = STATE(32),
    [sym_string] = STATE(130),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(130),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(130),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(130),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(130),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(130),
    [sym_list] = STATE(130),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(130),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(130),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(130),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(130),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(130),
    [sym_anonymous_function] = STATE(130),
    [sym_shorthand_function] = STATE(130),
    [sym_defn] = STATE(130),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(130),
    [sym_unquote] = STATE(130),
    [sym_unquote_splice] = STATE(130),
    [sym_deref] = STATE(130),
    [aux_sym_program_repeat1] = STATE(130),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(351),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(129),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(353),
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
    [anon_sym_POUND_] = ACTIONS(133),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(355),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(145),
    [anon_sym_TILDE_AT] = ACTIONS(147),
    [sym_gensym] = ACTIONS(355),
    [anon_sym_AT] = ACTIONS(71),
  },
  [68] = {
    [sym_symbol] = STATE(134),
    [sym__symbol] = STATE(135),
    [sym_threading_macro] = STATE(135),
    [sym_qualified_symbol] = STATE(135),
    [sym_vector] = STATE(136),
    [sym__vector] = STATE(39),
    [sym__after_the_fn_name] = STATE(137),
    [sym_function_name] = STATE(138),
    [sym__single_arity_fn] = STATE(137),
    [sym__multi_arity_fn] = STATE(137),
    [sym_params] = STATE(139),
    [aux_sym__multi_arity_fn_repeat1] = STATE(140),
    [anon_sym_DASH_GT] = ACTIONS(357),
    [anon_sym_DASH_GT_GT] = ACTIONS(359),
    [anon_sym_as_DASH_GT] = ACTIONS(359),
    [anon_sym_some_DASH_GT] = ACTIONS(357),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(359),
    [anon_sym_cond_DASH_GT] = ACTIONS(357),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(359),
    [sym__symbol_chars] = ACTIONS(361),
    [anon_sym_LPAREN] = ACTIONS(363),
    [anon_sym_LBRACK] = ACTIONS(39),
  },
  [69] = {
    [sym_symbol] = STATE(134),
    [sym__symbol] = STATE(135),
    [sym_threading_macro] = STATE(135),
    [sym_qualified_symbol] = STATE(135),
    [sym_function_name] = STATE(141),
    [sym_metadata] = STATE(142),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(143),
    [aux_sym_metadata_repeat1] = STATE(143),
    [anon_sym_DASH_GT] = ACTIONS(357),
    [anon_sym_DASH_GT_GT] = ACTIONS(359),
    [anon_sym_as_DASH_GT] = ACTIONS(359),
    [anon_sym_some_DASH_GT] = ACTIONS(357),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(359),
    [anon_sym_cond_DASH_GT] = ACTIONS(357),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(359),
    [sym__symbol_chars] = ACTIONS(361),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
  },
  [70] = {
    [sym__anything] = STATE(111),
    [sym__literals] = STATE(111),
    [sym__collection_literals] = STATE(111),
    [sym_boolean] = STATE(111),
    [sym_number] = STATE(111),
    [sym__number] = STATE(31),
    [sym_character] = STATE(111),
    [sym__character] = STATE(32),
    [sym_string] = STATE(111),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(111),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(111),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(111),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(111),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(111),
    [sym_list] = STATE(111),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(111),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(111),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(111),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(111),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(111),
    [sym_anonymous_function] = STATE(111),
    [sym_shorthand_function] = STATE(111),
    [sym_defn] = STATE(111),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(111),
    [sym_unquote] = STATE(111),
    [sym_unquote_splice] = STATE(111),
    [sym_deref] = STATE(111),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(227),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(129),
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
    [anon_sym_POUND_] = ACTIONS(133),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(229),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(145),
    [anon_sym_TILDE_AT] = ACTIONS(147),
    [sym_gensym] = ACTIONS(229),
    [anon_sym_AT] = ACTIONS(71),
  },
  [71] = {
    [sym__anything] = STATE(112),
    [sym__literals] = STATE(112),
    [sym__collection_literals] = STATE(112),
    [sym_boolean] = STATE(112),
    [sym_number] = STATE(112),
    [sym__number] = STATE(31),
    [sym_character] = STATE(112),
    [sym__character] = STATE(32),
    [sym_string] = STATE(112),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(112),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(112),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(112),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(112),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(112),
    [sym_list] = STATE(112),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(112),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(112),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(112),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(112),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(112),
    [sym_anonymous_function] = STATE(112),
    [sym_shorthand_function] = STATE(112),
    [sym_defn] = STATE(112),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(112),
    [sym_unquote] = STATE(112),
    [sym_unquote_splice] = STATE(112),
    [sym_deref] = STATE(112),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(231),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(129),
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
    [anon_sym_POUND_] = ACTIONS(133),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(233),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(145),
    [anon_sym_TILDE_AT] = ACTIONS(147),
    [sym_gensym] = ACTIONS(233),
    [anon_sym_AT] = ACTIONS(71),
  },
  [72] = {
    [sym__anything] = STATE(113),
    [sym__literals] = STATE(113),
    [sym__collection_literals] = STATE(113),
    [sym_boolean] = STATE(113),
    [sym_number] = STATE(113),
    [sym__number] = STATE(31),
    [sym_character] = STATE(113),
    [sym__character] = STATE(32),
    [sym_string] = STATE(113),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(113),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(113),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(113),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(113),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(113),
    [sym_list] = STATE(113),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(113),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(113),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(113),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(113),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(113),
    [sym_anonymous_function] = STATE(113),
    [sym_shorthand_function] = STATE(113),
    [sym_defn] = STATE(113),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(113),
    [sym_unquote] = STATE(113),
    [sym_unquote_splice] = STATE(113),
    [sym_deref] = STATE(113),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(235),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(129),
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
    [anon_sym_POUND_] = ACTIONS(133),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(237),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(145),
    [anon_sym_TILDE_AT] = ACTIONS(147),
    [sym_gensym] = ACTIONS(237),
    [anon_sym_AT] = ACTIONS(71),
  },
  [73] = {
    [sym__anything] = STATE(145),
    [sym__literals] = STATE(145),
    [sym__collection_literals] = STATE(145),
    [sym_boolean] = STATE(145),
    [sym_number] = STATE(145),
    [sym__number] = STATE(31),
    [sym_character] = STATE(145),
    [sym__character] = STATE(32),
    [sym_string] = STATE(145),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(145),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(145),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(145),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(145),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(145),
    [sym_list] = STATE(145),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(145),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(145),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(145),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(145),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(145),
    [sym_anonymous_function] = STATE(145),
    [sym_shorthand_function] = STATE(145),
    [sym_defn] = STATE(145),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(145),
    [sym_unquote] = STATE(145),
    [sym_unquote_splice] = STATE(145),
    [sym_deref] = STATE(145),
    [aux_sym_program_repeat1] = STATE(145),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(365),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(129),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(367),
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
    [anon_sym_POUND_] = ACTIONS(133),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(369),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(145),
    [anon_sym_TILDE_AT] = ACTIONS(147),
    [sym_gensym] = ACTIONS(369),
    [anon_sym_AT] = ACTIONS(71),
  },
  [74] = {
    [sym__anything] = STATE(54),
    [sym__literals] = STATE(54),
    [sym__collection_literals] = STATE(54),
    [sym_boolean] = STATE(54),
    [sym_number] = STATE(54),
    [sym__number] = STATE(31),
    [sym_character] = STATE(54),
    [sym__character] = STATE(32),
    [sym_string] = STATE(54),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(54),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(54),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(54),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(54),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(54),
    [sym_list] = STATE(54),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(54),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(54),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(54),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(54),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(54),
    [sym_anonymous_function] = STATE(54),
    [sym_shorthand_function] = STATE(54),
    [sym_defn] = STATE(54),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(54),
    [sym_unquote] = STATE(54),
    [sym_unquote_splice] = STATE(54),
    [sym_deref] = STATE(54),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(91),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(151),
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
    [anon_sym_POUND_] = ACTIONS(155),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(93),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(159),
    [anon_sym_TILDE] = ACTIONS(161),
    [anon_sym_TILDE_AT] = ACTIONS(163),
    [sym_gensym] = ACTIONS(93),
    [anon_sym_AT] = ACTIONS(71),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(371),
    [sym_nil] = ACTIONS(373),
    [sym_true] = ACTIONS(373),
    [sym_false] = ACTIONS(373),
    [sym_number_long] = ACTIONS(373),
    [sym_number_double] = ACTIONS(371),
    [sym_number_bigint] = ACTIONS(373),
    [sym_number_ratio] = ACTIONS(371),
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
    [sym_member_access] = ACTIONS(371),
    [sym_field_access] = ACTIONS(371),
    [sym_new_class] = ACTIONS(371),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(371),
    [sym_shorthand_function_arg] = ACTIONS(371),
    [anon_sym_CARET] = ACTIONS(373),
    [anon_sym_CARET_COLON] = ACTIONS(371),
    [anon_sym_CARET_DQUOTE] = ACTIONS(371),
    [anon_sym_BQUOTE] = ACTIONS(371),
    [anon_sym_TILDE] = ACTIONS(373),
    [anon_sym_TILDE_AT] = ACTIONS(371),
    [sym_gensym] = ACTIONS(371),
    [anon_sym_AT] = ACTIONS(371),
  },
  [76] = {
    [sym__anything] = STATE(101),
    [sym__literals] = STATE(101),
    [sym__collection_literals] = STATE(101),
    [sym_boolean] = STATE(101),
    [sym_number] = STATE(101),
    [sym__number] = STATE(31),
    [sym_character] = STATE(101),
    [sym__character] = STATE(32),
    [sym_string] = STATE(101),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(101),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(101),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(101),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(101),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(101),
    [sym_list] = STATE(101),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(101),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(101),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(101),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(101),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(101),
    [sym_anonymous_function] = STATE(101),
    [sym_shorthand_function] = STATE(101),
    [sym_defn] = STATE(101),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(101),
    [sym_unquote] = STATE(101),
    [sym_unquote_splice] = STATE(101),
    [sym_deref] = STATE(101),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(205),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(151),
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
    [anon_sym_POUND_] = ACTIONS(155),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(207),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(159),
    [anon_sym_TILDE] = ACTIONS(161),
    [anon_sym_TILDE_AT] = ACTIONS(163),
    [sym_gensym] = ACTIONS(207),
    [anon_sym_AT] = ACTIONS(71),
  },
  [77] = {
    [sym__anything] = STATE(111),
    [sym__literals] = STATE(111),
    [sym__collection_literals] = STATE(111),
    [sym_boolean] = STATE(111),
    [sym_number] = STATE(111),
    [sym__number] = STATE(31),
    [sym_character] = STATE(111),
    [sym__character] = STATE(32),
    [sym_string] = STATE(111),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(111),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(111),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(111),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(111),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(111),
    [sym_list] = STATE(111),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(111),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(111),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(111),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(111),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(111),
    [sym_anonymous_function] = STATE(111),
    [sym_shorthand_function] = STATE(111),
    [sym_defn] = STATE(111),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(111),
    [sym_unquote] = STATE(111),
    [sym_unquote_splice] = STATE(111),
    [sym_deref] = STATE(111),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(227),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(151),
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
    [anon_sym_POUND_] = ACTIONS(155),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(229),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(159),
    [anon_sym_TILDE] = ACTIONS(161),
    [anon_sym_TILDE_AT] = ACTIONS(163),
    [sym_gensym] = ACTIONS(229),
    [anon_sym_AT] = ACTIONS(71),
  },
  [78] = {
    [sym__anything] = STATE(112),
    [sym__literals] = STATE(112),
    [sym__collection_literals] = STATE(112),
    [sym_boolean] = STATE(112),
    [sym_number] = STATE(112),
    [sym__number] = STATE(31),
    [sym_character] = STATE(112),
    [sym__character] = STATE(32),
    [sym_string] = STATE(112),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(112),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(112),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(112),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(112),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(112),
    [sym_list] = STATE(112),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(112),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(112),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(112),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(112),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(112),
    [sym_anonymous_function] = STATE(112),
    [sym_shorthand_function] = STATE(112),
    [sym_defn] = STATE(112),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(112),
    [sym_unquote] = STATE(112),
    [sym_unquote_splice] = STATE(112),
    [sym_deref] = STATE(112),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(231),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(151),
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
    [anon_sym_POUND_] = ACTIONS(155),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(233),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(159),
    [anon_sym_TILDE] = ACTIONS(161),
    [anon_sym_TILDE_AT] = ACTIONS(163),
    [sym_gensym] = ACTIONS(233),
    [anon_sym_AT] = ACTIONS(71),
  },
  [79] = {
    [sym__anything] = STATE(113),
    [sym__literals] = STATE(113),
    [sym__collection_literals] = STATE(113),
    [sym_boolean] = STATE(113),
    [sym_number] = STATE(113),
    [sym__number] = STATE(31),
    [sym_character] = STATE(113),
    [sym__character] = STATE(32),
    [sym_string] = STATE(113),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(113),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(113),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(113),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(113),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(113),
    [sym_list] = STATE(113),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(113),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(113),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(113),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(113),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(113),
    [sym_anonymous_function] = STATE(113),
    [sym_shorthand_function] = STATE(113),
    [sym_defn] = STATE(113),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(113),
    [sym_unquote] = STATE(113),
    [sym_unquote_splice] = STATE(113),
    [sym_deref] = STATE(113),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(235),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(151),
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
    [anon_sym_POUND_] = ACTIONS(155),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(237),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(159),
    [anon_sym_TILDE] = ACTIONS(161),
    [anon_sym_TILDE_AT] = ACTIONS(163),
    [sym_gensym] = ACTIONS(237),
    [anon_sym_AT] = ACTIONS(71),
  },
  [80] = {
    [sym__anything] = STATE(147),
    [sym__literals] = STATE(147),
    [sym__collection_literals] = STATE(147),
    [sym_boolean] = STATE(147),
    [sym_number] = STATE(147),
    [sym__number] = STATE(31),
    [sym_character] = STATE(147),
    [sym__character] = STATE(32),
    [sym_string] = STATE(147),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(147),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(147),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(147),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(147),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(147),
    [sym_list] = STATE(147),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(147),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(147),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(147),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(147),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(147),
    [sym_anonymous_function] = STATE(147),
    [sym_shorthand_function] = STATE(147),
    [sym_defn] = STATE(147),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(147),
    [sym_unquote] = STATE(147),
    [sym_unquote_splice] = STATE(147),
    [sym_deref] = STATE(147),
    [aux_sym_program_repeat1] = STATE(147),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(375),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(151),
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
    [anon_sym_RBRACK] = ACTIONS(377),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(155),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(379),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(159),
    [anon_sym_TILDE] = ACTIONS(161),
    [anon_sym_TILDE_AT] = ACTIONS(163),
    [sym_gensym] = ACTIONS(379),
    [anon_sym_AT] = ACTIONS(71),
  },
  [81] = {
    [sym__anything] = STATE(54),
    [sym__literals] = STATE(54),
    [sym__collection_literals] = STATE(54),
    [sym_boolean] = STATE(54),
    [sym_number] = STATE(54),
    [sym__number] = STATE(31),
    [sym_character] = STATE(54),
    [sym__character] = STATE(32),
    [sym_string] = STATE(54),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(54),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(54),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(54),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(54),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(54),
    [sym_list] = STATE(54),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(54),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(54),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(54),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(54),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(54),
    [sym_anonymous_function] = STATE(54),
    [sym_shorthand_function] = STATE(54),
    [sym_defn] = STATE(54),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(54),
    [sym_unquote] = STATE(54),
    [sym_unquote_splice] = STATE(54),
    [sym_deref] = STATE(54),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(91),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(167),
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
    [anon_sym_POUND_] = ACTIONS(171),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(93),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(175),
    [anon_sym_TILDE] = ACTIONS(177),
    [anon_sym_TILDE_AT] = ACTIONS(179),
    [sym_gensym] = ACTIONS(93),
    [anon_sym_AT] = ACTIONS(71),
  },
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(381),
    [sym_nil] = ACTIONS(383),
    [sym_true] = ACTIONS(383),
    [sym_false] = ACTIONS(383),
    [sym_number_long] = ACTIONS(383),
    [sym_number_double] = ACTIONS(381),
    [sym_number_bigint] = ACTIONS(383),
    [sym_number_ratio] = ACTIONS(381),
    [anon_sym_BSLASH] = ACTIONS(381),
    [anon_sym_DQUOTE] = ACTIONS(381),
    [anon_sym_POUND_DQUOTE] = ACTIONS(381),
    [anon_sym_SQUOTE] = ACTIONS(381),
    [anon_sym_LPARENquote] = ACTIONS(381),
    [anon_sym_RPAREN] = ACTIONS(381),
    [anon_sym_COLON] = ACTIONS(383),
    [anon_sym_COLON_COLON] = ACTIONS(381),
    [anon_sym_DASH_GT] = ACTIONS(383),
    [anon_sym_DASH_GT_GT] = ACTIONS(381),
    [anon_sym_as_DASH_GT] = ACTIONS(381),
    [anon_sym_some_DASH_GT] = ACTIONS(383),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(381),
    [anon_sym_cond_DASH_GT] = ACTIONS(383),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(381),
    [sym__symbol_chars] = ACTIONS(383),
    [sym_member_access] = ACTIONS(381),
    [sym_field_access] = ACTIONS(381),
    [sym_new_class] = ACTIONS(381),
    [anon_sym_LPAREN] = ACTIONS(383),
    [anon_sym_LBRACK] = ACTIONS(381),
    [anon_sym_RBRACK] = ACTIONS(381),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_RBRACE] = ACTIONS(381),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(381),
    [anon_sym_POUND] = ACTIONS(383),
    [anon_sym_POUND_LBRACE] = ACTIONS(381),
    [anon_sym_SEMI] = ACTIONS(381),
    [anon_sym_POUND_BANG] = ACTIONS(381),
    [anon_sym_POUND_] = ACTIONS(381),
    [anon_sym_POUND_LPAREN] = ACTIONS(381),
    [sym_shorthand_function_arg] = ACTIONS(381),
    [anon_sym_CARET] = ACTIONS(383),
    [anon_sym_CARET_COLON] = ACTIONS(381),
    [anon_sym_CARET_DQUOTE] = ACTIONS(381),
    [anon_sym_BQUOTE] = ACTIONS(381),
    [anon_sym_TILDE] = ACTIONS(383),
    [anon_sym_TILDE_AT] = ACTIONS(381),
    [sym_gensym] = ACTIONS(381),
    [anon_sym_AT] = ACTIONS(381),
  },
  [83] = {
    [sym__anything] = STATE(101),
    [sym__literals] = STATE(101),
    [sym__collection_literals] = STATE(101),
    [sym_boolean] = STATE(101),
    [sym_number] = STATE(101),
    [sym__number] = STATE(31),
    [sym_character] = STATE(101),
    [sym__character] = STATE(32),
    [sym_string] = STATE(101),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(101),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(101),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(101),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(101),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(101),
    [sym_list] = STATE(101),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(101),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(101),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(101),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(101),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(101),
    [sym_anonymous_function] = STATE(101),
    [sym_shorthand_function] = STATE(101),
    [sym_defn] = STATE(101),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(101),
    [sym_unquote] = STATE(101),
    [sym_unquote_splice] = STATE(101),
    [sym_deref] = STATE(101),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(205),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(167),
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
    [anon_sym_POUND_] = ACTIONS(171),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(207),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(175),
    [anon_sym_TILDE] = ACTIONS(177),
    [anon_sym_TILDE_AT] = ACTIONS(179),
    [sym_gensym] = ACTIONS(207),
    [anon_sym_AT] = ACTIONS(71),
  },
  [84] = {
    [sym__anything] = STATE(111),
    [sym__literals] = STATE(111),
    [sym__collection_literals] = STATE(111),
    [sym_boolean] = STATE(111),
    [sym_number] = STATE(111),
    [sym__number] = STATE(31),
    [sym_character] = STATE(111),
    [sym__character] = STATE(32),
    [sym_string] = STATE(111),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(111),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(111),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(111),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(111),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(111),
    [sym_list] = STATE(111),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(111),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(111),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(111),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(111),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(111),
    [sym_anonymous_function] = STATE(111),
    [sym_shorthand_function] = STATE(111),
    [sym_defn] = STATE(111),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(111),
    [sym_unquote] = STATE(111),
    [sym_unquote_splice] = STATE(111),
    [sym_deref] = STATE(111),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(227),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(167),
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
    [anon_sym_POUND_] = ACTIONS(171),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(229),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(175),
    [anon_sym_TILDE] = ACTIONS(177),
    [anon_sym_TILDE_AT] = ACTIONS(179),
    [sym_gensym] = ACTIONS(229),
    [anon_sym_AT] = ACTIONS(71),
  },
  [85] = {
    [sym__anything] = STATE(112),
    [sym__literals] = STATE(112),
    [sym__collection_literals] = STATE(112),
    [sym_boolean] = STATE(112),
    [sym_number] = STATE(112),
    [sym__number] = STATE(31),
    [sym_character] = STATE(112),
    [sym__character] = STATE(32),
    [sym_string] = STATE(112),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(112),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(112),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(112),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(112),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(112),
    [sym_list] = STATE(112),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(112),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(112),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(112),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(112),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(112),
    [sym_anonymous_function] = STATE(112),
    [sym_shorthand_function] = STATE(112),
    [sym_defn] = STATE(112),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(112),
    [sym_unquote] = STATE(112),
    [sym_unquote_splice] = STATE(112),
    [sym_deref] = STATE(112),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(231),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(167),
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
    [anon_sym_POUND_] = ACTIONS(171),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(233),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(175),
    [anon_sym_TILDE] = ACTIONS(177),
    [anon_sym_TILDE_AT] = ACTIONS(179),
    [sym_gensym] = ACTIONS(233),
    [anon_sym_AT] = ACTIONS(71),
  },
  [86] = {
    [sym__anything] = STATE(113),
    [sym__literals] = STATE(113),
    [sym__collection_literals] = STATE(113),
    [sym_boolean] = STATE(113),
    [sym_number] = STATE(113),
    [sym__number] = STATE(31),
    [sym_character] = STATE(113),
    [sym__character] = STATE(32),
    [sym_string] = STATE(113),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(113),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(113),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(113),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(113),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(113),
    [sym_list] = STATE(113),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(113),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(113),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(113),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(113),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(113),
    [sym_anonymous_function] = STATE(113),
    [sym_shorthand_function] = STATE(113),
    [sym_defn] = STATE(113),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(113),
    [sym_unquote] = STATE(113),
    [sym_unquote_splice] = STATE(113),
    [sym_deref] = STATE(113),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(235),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(167),
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
    [anon_sym_POUND_] = ACTIONS(171),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(237),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(175),
    [anon_sym_TILDE] = ACTIONS(177),
    [anon_sym_TILDE_AT] = ACTIONS(179),
    [sym_gensym] = ACTIONS(237),
    [anon_sym_AT] = ACTIONS(71),
  },
  [87] = {
    [sym__anything] = STATE(148),
    [sym__literals] = STATE(148),
    [sym__collection_literals] = STATE(148),
    [sym_boolean] = STATE(148),
    [sym_number] = STATE(148),
    [sym__number] = STATE(31),
    [sym_character] = STATE(148),
    [sym__character] = STATE(32),
    [sym_string] = STATE(148),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(148),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(148),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(148),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(148),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(148),
    [sym_list] = STATE(148),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(148),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(148),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym__hash_map_value] = STATE(148),
    [sym_set] = STATE(148),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(148),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(148),
    [sym_anonymous_function] = STATE(148),
    [sym_shorthand_function] = STATE(148),
    [sym_defn] = STATE(148),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(148),
    [sym_unquote] = STATE(148),
    [sym_unquote_splice] = STATE(148),
    [sym_deref] = STATE(148),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(385),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
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
    [anon_sym_POUND_] = ACTIONS(191),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(387),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(195),
    [anon_sym_TILDE] = ACTIONS(197),
    [anon_sym_TILDE_AT] = ACTIONS(199),
    [sym_gensym] = ACTIONS(387),
    [anon_sym_AT] = ACTIONS(71),
  },
  [88] = {
    [sym__anything] = STATE(87),
    [sym__literals] = STATE(87),
    [sym__collection_literals] = STATE(87),
    [sym_boolean] = STATE(87),
    [sym_number] = STATE(87),
    [sym__number] = STATE(31),
    [sym_character] = STATE(87),
    [sym__character] = STATE(32),
    [sym_string] = STATE(87),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(87),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(87),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(87),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(87),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(87),
    [sym_list] = STATE(87),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(87),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(87),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym__hash_map_kv_pair] = STATE(150),
    [sym__hash_map_key] = STATE(87),
    [sym_set] = STATE(87),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(87),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(87),
    [sym_anonymous_function] = STATE(87),
    [sym_shorthand_function] = STATE(87),
    [sym_defn] = STATE(87),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(87),
    [sym_unquote] = STATE(87),
    [sym_unquote_splice] = STATE(87),
    [sym_deref] = STATE(87),
    [aux_sym__hash_map_repeat1] = STATE(150),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(165),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(167),
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
    [anon_sym_RBRACE] = ACTIONS(389),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(171),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(173),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(175),
    [anon_sym_TILDE] = ACTIONS(177),
    [anon_sym_TILDE_AT] = ACTIONS(179),
    [sym_gensym] = ACTIONS(173),
    [anon_sym_AT] = ACTIONS(71),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(391),
    [sym_nil] = ACTIONS(393),
    [sym_true] = ACTIONS(393),
    [sym_false] = ACTIONS(393),
    [sym_number_long] = ACTIONS(393),
    [sym_number_double] = ACTIONS(391),
    [sym_number_bigint] = ACTIONS(393),
    [sym_number_ratio] = ACTIONS(391),
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
    [sym_member_access] = ACTIONS(391),
    [sym_field_access] = ACTIONS(391),
    [sym_new_class] = ACTIONS(391),
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
    [anon_sym_AT] = ACTIONS(391),
  },
  [90] = {
    [sym__anything] = STATE(87),
    [sym__literals] = STATE(87),
    [sym__collection_literals] = STATE(87),
    [sym_boolean] = STATE(87),
    [sym_number] = STATE(87),
    [sym__number] = STATE(31),
    [sym_character] = STATE(87),
    [sym__character] = STATE(32),
    [sym_string] = STATE(87),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(87),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(87),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(87),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(87),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(87),
    [sym_list] = STATE(87),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(87),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(87),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym__hash_map_kv_pair] = STATE(150),
    [sym__hash_map_key] = STATE(87),
    [sym_set] = STATE(87),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(87),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(87),
    [sym_anonymous_function] = STATE(87),
    [sym_shorthand_function] = STATE(87),
    [sym_defn] = STATE(87),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(87),
    [sym_unquote] = STATE(87),
    [sym_unquote_splice] = STATE(87),
    [sym_deref] = STATE(87),
    [aux_sym__hash_map_repeat1] = STATE(150),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(165),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(167),
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
    [anon_sym_RBRACE] = ACTIONS(395),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(171),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(173),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(175),
    [anon_sym_TILDE] = ACTIONS(177),
    [anon_sym_TILDE_AT] = ACTIONS(179),
    [sym_gensym] = ACTIONS(173),
    [anon_sym_AT] = ACTIONS(71),
  },
  [91] = {
    [anon_sym_LBRACE] = ACTIONS(397),
  },
  [92] = {
    [sym__anything] = STATE(54),
    [sym__literals] = STATE(54),
    [sym__collection_literals] = STATE(54),
    [sym_boolean] = STATE(54),
    [sym_number] = STATE(54),
    [sym__number] = STATE(31),
    [sym_character] = STATE(54),
    [sym__character] = STATE(32),
    [sym_string] = STATE(54),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(54),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(54),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(54),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(54),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(54),
    [sym_list] = STATE(54),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(54),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(54),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(54),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(54),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(54),
    [sym_anonymous_function] = STATE(54),
    [sym_shorthand_function] = STATE(54),
    [sym_defn] = STATE(54),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(54),
    [sym_unquote] = STATE(54),
    [sym_unquote_splice] = STATE(54),
    [sym_deref] = STATE(54),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(91),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
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
    [anon_sym_POUND_] = ACTIONS(191),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(93),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(195),
    [anon_sym_TILDE] = ACTIONS(197),
    [anon_sym_TILDE_AT] = ACTIONS(199),
    [sym_gensym] = ACTIONS(93),
    [anon_sym_AT] = ACTIONS(71),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(399),
    [sym_nil] = ACTIONS(401),
    [sym_true] = ACTIONS(401),
    [sym_false] = ACTIONS(401),
    [sym_number_long] = ACTIONS(401),
    [sym_number_double] = ACTIONS(399),
    [sym_number_bigint] = ACTIONS(401),
    [sym_number_ratio] = ACTIONS(399),
    [anon_sym_BSLASH] = ACTIONS(399),
    [anon_sym_DQUOTE] = ACTIONS(399),
    [anon_sym_POUND_DQUOTE] = ACTIONS(399),
    [anon_sym_SQUOTE] = ACTIONS(399),
    [anon_sym_LPARENquote] = ACTIONS(399),
    [anon_sym_RPAREN] = ACTIONS(399),
    [anon_sym_COLON] = ACTIONS(401),
    [anon_sym_COLON_COLON] = ACTIONS(399),
    [anon_sym_DASH_GT] = ACTIONS(401),
    [anon_sym_DASH_GT_GT] = ACTIONS(399),
    [anon_sym_as_DASH_GT] = ACTIONS(399),
    [anon_sym_some_DASH_GT] = ACTIONS(401),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(399),
    [anon_sym_cond_DASH_GT] = ACTIONS(401),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(399),
    [sym__symbol_chars] = ACTIONS(401),
    [sym_member_access] = ACTIONS(399),
    [sym_field_access] = ACTIONS(399),
    [sym_new_class] = ACTIONS(399),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(399),
    [sym_shorthand_function_arg] = ACTIONS(399),
    [anon_sym_CARET] = ACTIONS(401),
    [anon_sym_CARET_COLON] = ACTIONS(399),
    [anon_sym_CARET_DQUOTE] = ACTIONS(399),
    [anon_sym_BQUOTE] = ACTIONS(399),
    [anon_sym_TILDE] = ACTIONS(401),
    [anon_sym_TILDE_AT] = ACTIONS(399),
    [sym_gensym] = ACTIONS(399),
    [anon_sym_AT] = ACTIONS(399),
  },
  [94] = {
    [sym__anything] = STATE(101),
    [sym__literals] = STATE(101),
    [sym__collection_literals] = STATE(101),
    [sym_boolean] = STATE(101),
    [sym_number] = STATE(101),
    [sym__number] = STATE(31),
    [sym_character] = STATE(101),
    [sym__character] = STATE(32),
    [sym_string] = STATE(101),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(101),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(101),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(101),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(101),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(101),
    [sym_list] = STATE(101),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(101),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(101),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(101),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(101),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(101),
    [sym_anonymous_function] = STATE(101),
    [sym_shorthand_function] = STATE(101),
    [sym_defn] = STATE(101),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(101),
    [sym_unquote] = STATE(101),
    [sym_unquote_splice] = STATE(101),
    [sym_deref] = STATE(101),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(205),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
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
    [anon_sym_POUND_] = ACTIONS(191),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(207),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(195),
    [anon_sym_TILDE] = ACTIONS(197),
    [anon_sym_TILDE_AT] = ACTIONS(199),
    [sym_gensym] = ACTIONS(207),
    [anon_sym_AT] = ACTIONS(71),
  },
  [95] = {
    [sym__anything] = STATE(111),
    [sym__literals] = STATE(111),
    [sym__collection_literals] = STATE(111),
    [sym_boolean] = STATE(111),
    [sym_number] = STATE(111),
    [sym__number] = STATE(31),
    [sym_character] = STATE(111),
    [sym__character] = STATE(32),
    [sym_string] = STATE(111),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(111),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(111),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(111),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(111),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(111),
    [sym_list] = STATE(111),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(111),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(111),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(111),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(111),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(111),
    [sym_anonymous_function] = STATE(111),
    [sym_shorthand_function] = STATE(111),
    [sym_defn] = STATE(111),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(111),
    [sym_unquote] = STATE(111),
    [sym_unquote_splice] = STATE(111),
    [sym_deref] = STATE(111),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(227),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
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
    [anon_sym_POUND_] = ACTIONS(191),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(229),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(195),
    [anon_sym_TILDE] = ACTIONS(197),
    [anon_sym_TILDE_AT] = ACTIONS(199),
    [sym_gensym] = ACTIONS(229),
    [anon_sym_AT] = ACTIONS(71),
  },
  [96] = {
    [sym__anything] = STATE(112),
    [sym__literals] = STATE(112),
    [sym__collection_literals] = STATE(112),
    [sym_boolean] = STATE(112),
    [sym_number] = STATE(112),
    [sym__number] = STATE(31),
    [sym_character] = STATE(112),
    [sym__character] = STATE(32),
    [sym_string] = STATE(112),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(112),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(112),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(112),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(112),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(112),
    [sym_list] = STATE(112),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(112),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(112),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(112),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(112),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(112),
    [sym_anonymous_function] = STATE(112),
    [sym_shorthand_function] = STATE(112),
    [sym_defn] = STATE(112),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(112),
    [sym_unquote] = STATE(112),
    [sym_unquote_splice] = STATE(112),
    [sym_deref] = STATE(112),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(231),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
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
    [anon_sym_POUND_] = ACTIONS(191),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(233),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(195),
    [anon_sym_TILDE] = ACTIONS(197),
    [anon_sym_TILDE_AT] = ACTIONS(199),
    [sym_gensym] = ACTIONS(233),
    [anon_sym_AT] = ACTIONS(71),
  },
  [97] = {
    [sym__anything] = STATE(113),
    [sym__literals] = STATE(113),
    [sym__collection_literals] = STATE(113),
    [sym_boolean] = STATE(113),
    [sym_number] = STATE(113),
    [sym__number] = STATE(31),
    [sym_character] = STATE(113),
    [sym__character] = STATE(32),
    [sym_string] = STATE(113),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(113),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(113),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(113),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(113),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(113),
    [sym_list] = STATE(113),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(113),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(113),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(113),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(113),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(113),
    [sym_anonymous_function] = STATE(113),
    [sym_shorthand_function] = STATE(113),
    [sym_defn] = STATE(113),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(113),
    [sym_unquote] = STATE(113),
    [sym_unquote_splice] = STATE(113),
    [sym_deref] = STATE(113),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(235),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
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
    [anon_sym_POUND_] = ACTIONS(191),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(237),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(195),
    [anon_sym_TILDE] = ACTIONS(197),
    [anon_sym_TILDE_AT] = ACTIONS(199),
    [sym_gensym] = ACTIONS(237),
    [anon_sym_AT] = ACTIONS(71),
  },
  [98] = {
    [sym__anything] = STATE(154),
    [sym__literals] = STATE(154),
    [sym__collection_literals] = STATE(154),
    [sym_boolean] = STATE(154),
    [sym_number] = STATE(154),
    [sym__number] = STATE(31),
    [sym_character] = STATE(154),
    [sym__character] = STATE(32),
    [sym_string] = STATE(154),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(154),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(154),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(154),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(154),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(154),
    [sym_list] = STATE(154),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(154),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(154),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(154),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(154),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(154),
    [sym_anonymous_function] = STATE(154),
    [sym_shorthand_function] = STATE(154),
    [sym_defn] = STATE(154),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(154),
    [sym_unquote] = STATE(154),
    [sym_unquote_splice] = STATE(154),
    [sym_deref] = STATE(154),
    [aux_sym_program_repeat1] = STATE(154),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(403),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
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
    [sym_member_access] = ACTIONS(35),
    [sym_field_access] = ACTIONS(35),
    [sym_new_class] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(405),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(191),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(407),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(195),
    [anon_sym_TILDE] = ACTIONS(197),
    [anon_sym_TILDE_AT] = ACTIONS(199),
    [sym_gensym] = ACTIONS(407),
    [anon_sym_AT] = ACTIONS(71),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(409),
    [sym_nil] = ACTIONS(411),
    [sym_true] = ACTIONS(411),
    [sym_false] = ACTIONS(411),
    [sym_number_long] = ACTIONS(411),
    [sym_number_double] = ACTIONS(409),
    [sym_number_bigint] = ACTIONS(411),
    [sym_number_ratio] = ACTIONS(409),
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
    [sym_member_access] = ACTIONS(409),
    [sym_field_access] = ACTIONS(409),
    [sym_new_class] = ACTIONS(409),
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
    [anon_sym_AT] = ACTIONS(409),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(413),
    [sym_nil] = ACTIONS(415),
    [sym_true] = ACTIONS(415),
    [sym_false] = ACTIONS(415),
    [sym_number_long] = ACTIONS(415),
    [sym_number_double] = ACTIONS(413),
    [sym_number_bigint] = ACTIONS(415),
    [sym_number_ratio] = ACTIONS(413),
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
    [sym_member_access] = ACTIONS(413),
    [sym_field_access] = ACTIONS(413),
    [sym_new_class] = ACTIONS(413),
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
    [anon_sym_AT] = ACTIONS(413),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(417),
    [sym_nil] = ACTIONS(419),
    [sym_true] = ACTIONS(419),
    [sym_false] = ACTIONS(419),
    [sym_number_long] = ACTIONS(419),
    [sym_number_double] = ACTIONS(417),
    [sym_number_bigint] = ACTIONS(419),
    [sym_number_ratio] = ACTIONS(417),
    [anon_sym_BSLASH] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [anon_sym_POUND_DQUOTE] = ACTIONS(417),
    [anon_sym_SQUOTE] = ACTIONS(417),
    [anon_sym_LPARENquote] = ACTIONS(417),
    [anon_sym_RPAREN] = ACTIONS(417),
    [anon_sym_COLON] = ACTIONS(419),
    [anon_sym_COLON_COLON] = ACTIONS(417),
    [anon_sym_DASH_GT] = ACTIONS(419),
    [anon_sym_DASH_GT_GT] = ACTIONS(417),
    [anon_sym_as_DASH_GT] = ACTIONS(417),
    [anon_sym_some_DASH_GT] = ACTIONS(419),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(417),
    [anon_sym_cond_DASH_GT] = ACTIONS(419),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(417),
    [sym__symbol_chars] = ACTIONS(419),
    [sym_member_access] = ACTIONS(417),
    [sym_field_access] = ACTIONS(417),
    [sym_new_class] = ACTIONS(417),
    [anon_sym_LPAREN] = ACTIONS(419),
    [anon_sym_LBRACK] = ACTIONS(417),
    [anon_sym_RBRACK] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(417),
    [anon_sym_RBRACE] = ACTIONS(417),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(417),
    [anon_sym_POUND] = ACTIONS(419),
    [anon_sym_POUND_LBRACE] = ACTIONS(417),
    [anon_sym_SEMI] = ACTIONS(417),
    [anon_sym_POUND_BANG] = ACTIONS(417),
    [anon_sym_POUND_] = ACTIONS(417),
    [anon_sym_POUND_LPAREN] = ACTIONS(417),
    [sym_shorthand_function_arg] = ACTIONS(417),
    [anon_sym_CARET] = ACTIONS(419),
    [anon_sym_CARET_COLON] = ACTIONS(417),
    [anon_sym_CARET_DQUOTE] = ACTIONS(417),
    [anon_sym_BQUOTE] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(419),
    [anon_sym_TILDE_AT] = ACTIONS(417),
    [sym_gensym] = ACTIONS(417),
    [anon_sym_AT] = ACTIONS(417),
  },
  [102] = {
    [ts_builtin_sym_end] = ACTIONS(421),
    [sym_nil] = ACTIONS(423),
    [sym_true] = ACTIONS(423),
    [sym_false] = ACTIONS(423),
    [sym_number_long] = ACTIONS(423),
    [sym_number_double] = ACTIONS(421),
    [sym_number_bigint] = ACTIONS(423),
    [sym_number_ratio] = ACTIONS(421),
    [anon_sym_BSLASH] = ACTIONS(421),
    [anon_sym_DQUOTE] = ACTIONS(421),
    [anon_sym_POUND_DQUOTE] = ACTIONS(421),
    [anon_sym_SQUOTE] = ACTIONS(421),
    [anon_sym_LPARENquote] = ACTIONS(421),
    [anon_sym_RPAREN] = ACTIONS(421),
    [anon_sym_COLON] = ACTIONS(423),
    [anon_sym_COLON_COLON] = ACTIONS(421),
    [anon_sym_DASH_GT] = ACTIONS(423),
    [anon_sym_DASH_GT_GT] = ACTIONS(421),
    [anon_sym_as_DASH_GT] = ACTIONS(421),
    [anon_sym_some_DASH_GT] = ACTIONS(423),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(421),
    [anon_sym_cond_DASH_GT] = ACTIONS(423),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(421),
    [sym__symbol_chars] = ACTIONS(423),
    [sym_member_access] = ACTIONS(421),
    [sym_field_access] = ACTIONS(421),
    [sym_new_class] = ACTIONS(421),
    [anon_sym_LPAREN] = ACTIONS(423),
    [anon_sym_LBRACK] = ACTIONS(421),
    [anon_sym_RBRACK] = ACTIONS(421),
    [anon_sym_LBRACE] = ACTIONS(421),
    [anon_sym_RBRACE] = ACTIONS(421),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(421),
    [anon_sym_POUND] = ACTIONS(423),
    [anon_sym_POUND_LBRACE] = ACTIONS(421),
    [anon_sym_SEMI] = ACTIONS(421),
    [anon_sym_POUND_BANG] = ACTIONS(421),
    [anon_sym_POUND_] = ACTIONS(421),
    [anon_sym_POUND_LPAREN] = ACTIONS(421),
    [sym_shorthand_function_arg] = ACTIONS(421),
    [anon_sym_CARET] = ACTIONS(423),
    [anon_sym_CARET_COLON] = ACTIONS(421),
    [anon_sym_CARET_DQUOTE] = ACTIONS(421),
    [anon_sym_BQUOTE] = ACTIONS(421),
    [anon_sym_TILDE] = ACTIONS(423),
    [anon_sym_TILDE_AT] = ACTIONS(421),
    [sym_gensym] = ACTIONS(421),
    [anon_sym_AT] = ACTIONS(421),
  },
  [103] = {
    [sym__anything] = STATE(145),
    [sym__literals] = STATE(145),
    [sym__collection_literals] = STATE(145),
    [sym_boolean] = STATE(145),
    [sym_number] = STATE(145),
    [sym__number] = STATE(31),
    [sym_character] = STATE(145),
    [sym__character] = STATE(32),
    [sym_string] = STATE(145),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(145),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(145),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(145),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(145),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(145),
    [sym_list] = STATE(145),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(145),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(145),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(145),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(145),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(145),
    [sym_anonymous_function] = STATE(145),
    [sym_shorthand_function] = STATE(145),
    [sym_defn] = STATE(145),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(145),
    [sym_unquote] = STATE(145),
    [sym_unquote_splice] = STATE(145),
    [sym_deref] = STATE(145),
    [aux_sym_program_repeat1] = STATE(145),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(365),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(129),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(425),
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
    [anon_sym_POUND_] = ACTIONS(133),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(369),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(145),
    [anon_sym_TILDE_AT] = ACTIONS(147),
    [sym_gensym] = ACTIONS(369),
    [anon_sym_AT] = ACTIONS(71),
  },
  [104] = {
    [anon_sym_DASH_GT] = ACTIONS(427),
    [anon_sym_DASH_GT_GT] = ACTIONS(429),
    [anon_sym_as_DASH_GT] = ACTIONS(429),
    [anon_sym_some_DASH_GT] = ACTIONS(427),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(429),
    [anon_sym_cond_DASH_GT] = ACTIONS(427),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(429),
    [sym__symbol_chars] = ACTIONS(427),
    [anon_sym_LPAREN] = ACTIONS(429),
    [anon_sym_LBRACK] = ACTIONS(429),
    [anon_sym_LBRACE] = ACTIONS(429),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(429),
    [anon_sym_POUND] = ACTIONS(427),
    [anon_sym_POUND_LBRACE] = ACTIONS(429),
    [anon_sym_CARET] = ACTIONS(427),
    [anon_sym_CARET_COLON] = ACTIONS(429),
    [anon_sym_CARET_DQUOTE] = ACTIONS(429),
  },
  [105] = {
    [sym__anything] = STATE(87),
    [sym__literals] = STATE(87),
    [sym__collection_literals] = STATE(87),
    [sym_boolean] = STATE(87),
    [sym_number] = STATE(87),
    [sym__number] = STATE(31),
    [sym_character] = STATE(87),
    [sym__character] = STATE(32),
    [sym_string] = STATE(87),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(87),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(87),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(87),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(87),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(87),
    [sym_list] = STATE(87),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(87),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(87),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym__hash_map_kv_pair] = STATE(157),
    [sym__hash_map_key] = STATE(87),
    [sym_set] = STATE(87),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(87),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(87),
    [sym_anonymous_function] = STATE(87),
    [sym_shorthand_function] = STATE(87),
    [sym_defn] = STATE(87),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(87),
    [sym_unquote] = STATE(87),
    [sym_unquote_splice] = STATE(87),
    [sym_deref] = STATE(87),
    [aux_sym__hash_map_repeat1] = STATE(157),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(165),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(167),
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
    [anon_sym_POUND_] = ACTIONS(171),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(173),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(175),
    [anon_sym_TILDE] = ACTIONS(177),
    [anon_sym_TILDE_AT] = ACTIONS(179),
    [sym_gensym] = ACTIONS(173),
    [anon_sym_AT] = ACTIONS(71),
  },
  [106] = {
    [sym__anything] = STATE(87),
    [sym__literals] = STATE(87),
    [sym__collection_literals] = STATE(87),
    [sym_boolean] = STATE(87),
    [sym_number] = STATE(87),
    [sym__number] = STATE(31),
    [sym_character] = STATE(87),
    [sym__character] = STATE(32),
    [sym_string] = STATE(87),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(87),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(87),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(87),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(87),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(87),
    [sym_list] = STATE(87),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(87),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(87),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym__hash_map_kv_pair] = STATE(159),
    [sym__hash_map_key] = STATE(87),
    [sym_set] = STATE(87),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(87),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(87),
    [sym_anonymous_function] = STATE(87),
    [sym_shorthand_function] = STATE(87),
    [sym_defn] = STATE(87),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(87),
    [sym_unquote] = STATE(87),
    [sym_unquote_splice] = STATE(87),
    [sym_deref] = STATE(87),
    [aux_sym__hash_map_repeat1] = STATE(159),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(165),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(167),
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
    [anon_sym_RBRACE] = ACTIONS(433),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(171),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(173),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(175),
    [anon_sym_TILDE] = ACTIONS(177),
    [anon_sym_TILDE_AT] = ACTIONS(179),
    [sym_gensym] = ACTIONS(173),
    [anon_sym_AT] = ACTIONS(71),
  },
  [107] = {
    [sym__symbol_chars] = ACTIONS(435),
  },
  [108] = {
    [anon_sym_DASH_GT] = ACTIONS(437),
    [anon_sym_DASH_GT_GT] = ACTIONS(439),
    [anon_sym_as_DASH_GT] = ACTIONS(439),
    [anon_sym_some_DASH_GT] = ACTIONS(437),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(439),
    [anon_sym_cond_DASH_GT] = ACTIONS(437),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(439),
    [sym__symbol_chars] = ACTIONS(437),
    [anon_sym_LPAREN] = ACTIONS(439),
    [anon_sym_LBRACK] = ACTIONS(439),
    [anon_sym_LBRACE] = ACTIONS(439),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(439),
    [anon_sym_POUND] = ACTIONS(437),
    [anon_sym_POUND_LBRACE] = ACTIONS(439),
  },
  [109] = {
    [anon_sym_DASH_GT] = ACTIONS(281),
    [anon_sym_DASH_GT_GT] = ACTIONS(279),
    [anon_sym_as_DASH_GT] = ACTIONS(279),
    [anon_sym_some_DASH_GT] = ACTIONS(281),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(279),
    [anon_sym_cond_DASH_GT] = ACTIONS(281),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(279),
    [sym__symbol_chars] = ACTIONS(281),
    [anon_sym_LPAREN] = ACTIONS(279),
    [anon_sym_LBRACK] = ACTIONS(279),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(279),
    [anon_sym_POUND] = ACTIONS(281),
    [anon_sym_POUND_LBRACE] = ACTIONS(279),
  },
  [110] = {
    [aux_sym__string_repeat1] = STATE(123),
    [anon_sym_DQUOTE] = ACTIONS(441),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(319),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(319),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(443),
    [sym_nil] = ACTIONS(445),
    [sym_true] = ACTIONS(445),
    [sym_false] = ACTIONS(445),
    [sym_number_long] = ACTIONS(445),
    [sym_number_double] = ACTIONS(443),
    [sym_number_bigint] = ACTIONS(445),
    [sym_number_ratio] = ACTIONS(443),
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
    [sym_member_access] = ACTIONS(443),
    [sym_field_access] = ACTIONS(443),
    [sym_new_class] = ACTIONS(443),
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
    [anon_sym_AT] = ACTIONS(443),
  },
  [112] = {
    [ts_builtin_sym_end] = ACTIONS(447),
    [sym_nil] = ACTIONS(449),
    [sym_true] = ACTIONS(449),
    [sym_false] = ACTIONS(449),
    [sym_number_long] = ACTIONS(449),
    [sym_number_double] = ACTIONS(447),
    [sym_number_bigint] = ACTIONS(449),
    [sym_number_ratio] = ACTIONS(447),
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
    [sym_member_access] = ACTIONS(447),
    [sym_field_access] = ACTIONS(447),
    [sym_new_class] = ACTIONS(447),
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
    [anon_sym_AT] = ACTIONS(447),
  },
  [113] = {
    [ts_builtin_sym_end] = ACTIONS(451),
    [sym_nil] = ACTIONS(453),
    [sym_true] = ACTIONS(453),
    [sym_false] = ACTIONS(453),
    [sym_number_long] = ACTIONS(453),
    [sym_number_double] = ACTIONS(451),
    [sym_number_bigint] = ACTIONS(453),
    [sym_number_ratio] = ACTIONS(451),
    [anon_sym_BSLASH] = ACTIONS(451),
    [anon_sym_DQUOTE] = ACTIONS(451),
    [anon_sym_POUND_DQUOTE] = ACTIONS(451),
    [anon_sym_SQUOTE] = ACTIONS(451),
    [anon_sym_LPARENquote] = ACTIONS(451),
    [anon_sym_RPAREN] = ACTIONS(451),
    [anon_sym_COLON] = ACTIONS(453),
    [anon_sym_COLON_COLON] = ACTIONS(451),
    [anon_sym_DASH_GT] = ACTIONS(453),
    [anon_sym_DASH_GT_GT] = ACTIONS(451),
    [anon_sym_as_DASH_GT] = ACTIONS(451),
    [anon_sym_some_DASH_GT] = ACTIONS(453),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(451),
    [anon_sym_cond_DASH_GT] = ACTIONS(453),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(451),
    [sym__symbol_chars] = ACTIONS(453),
    [sym_member_access] = ACTIONS(451),
    [sym_field_access] = ACTIONS(451),
    [sym_new_class] = ACTIONS(451),
    [anon_sym_LPAREN] = ACTIONS(453),
    [anon_sym_LBRACK] = ACTIONS(451),
    [anon_sym_RBRACK] = ACTIONS(451),
    [anon_sym_LBRACE] = ACTIONS(451),
    [anon_sym_RBRACE] = ACTIONS(451),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(451),
    [anon_sym_POUND] = ACTIONS(453),
    [anon_sym_POUND_LBRACE] = ACTIONS(451),
    [anon_sym_SEMI] = ACTIONS(451),
    [anon_sym_POUND_BANG] = ACTIONS(451),
    [anon_sym_POUND_] = ACTIONS(451),
    [anon_sym_POUND_LPAREN] = ACTIONS(451),
    [sym_shorthand_function_arg] = ACTIONS(451),
    [anon_sym_CARET] = ACTIONS(453),
    [anon_sym_CARET_COLON] = ACTIONS(451),
    [anon_sym_CARET_DQUOTE] = ACTIONS(451),
    [anon_sym_BQUOTE] = ACTIONS(451),
    [anon_sym_TILDE] = ACTIONS(453),
    [anon_sym_TILDE_AT] = ACTIONS(451),
    [sym_gensym] = ACTIONS(451),
    [anon_sym_AT] = ACTIONS(451),
  },
  [114] = {
    [sym__anything] = STATE(73),
    [sym__literals] = STATE(73),
    [sym__collection_literals] = STATE(73),
    [sym_boolean] = STATE(73),
    [sym_number] = STATE(73),
    [sym__number] = STATE(31),
    [sym_character] = STATE(73),
    [sym__character] = STATE(32),
    [sym_string] = STATE(73),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(73),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(73),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(73),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(73),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(73),
    [sym_list] = STATE(73),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(73),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(73),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(73),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(73),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(73),
    [sym_anonymous_function] = STATE(73),
    [sym_shorthand_function] = STATE(73),
    [sym_defn] = STATE(73),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(73),
    [sym_unquote] = STATE(73),
    [sym_unquote_splice] = STATE(73),
    [sym_deref] = STATE(73),
    [aux_sym_program_repeat1] = STATE(73),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(127),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(129),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(131),
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
    [anon_sym_POUND_] = ACTIONS(133),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(139),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(145),
    [anon_sym_TILDE_AT] = ACTIONS(147),
    [sym_gensym] = ACTIONS(139),
    [anon_sym_AT] = ACTIONS(71),
  },
  [115] = {
    [ts_builtin_sym_end] = ACTIONS(455),
    [sym_nil] = ACTIONS(457),
    [sym_true] = ACTIONS(457),
    [sym_false] = ACTIONS(457),
    [sym_number_long] = ACTIONS(457),
    [sym_number_double] = ACTIONS(455),
    [sym_number_bigint] = ACTIONS(457),
    [sym_number_ratio] = ACTIONS(455),
    [anon_sym_BSLASH] = ACTIONS(455),
    [anon_sym_DQUOTE] = ACTIONS(455),
    [anon_sym_POUND_DQUOTE] = ACTIONS(455),
    [anon_sym_SQUOTE] = ACTIONS(455),
    [anon_sym_LPARENquote] = ACTIONS(455),
    [anon_sym_RPAREN] = ACTIONS(455),
    [anon_sym_COLON] = ACTIONS(457),
    [anon_sym_COLON_COLON] = ACTIONS(455),
    [anon_sym_DASH_GT] = ACTIONS(457),
    [anon_sym_DASH_GT_GT] = ACTIONS(455),
    [anon_sym_as_DASH_GT] = ACTIONS(455),
    [anon_sym_some_DASH_GT] = ACTIONS(457),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(455),
    [anon_sym_cond_DASH_GT] = ACTIONS(457),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(455),
    [sym__symbol_chars] = ACTIONS(457),
    [sym_member_access] = ACTIONS(455),
    [sym_field_access] = ACTIONS(455),
    [sym_new_class] = ACTIONS(455),
    [anon_sym_LPAREN] = ACTIONS(457),
    [anon_sym_LBRACK] = ACTIONS(455),
    [anon_sym_RBRACK] = ACTIONS(455),
    [anon_sym_LBRACE] = ACTIONS(455),
    [anon_sym_RBRACE] = ACTIONS(455),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(455),
    [anon_sym_POUND] = ACTIONS(457),
    [anon_sym_POUND_LBRACE] = ACTIONS(455),
    [anon_sym_SEMI] = ACTIONS(455),
    [anon_sym_POUND_BANG] = ACTIONS(455),
    [anon_sym_POUND_] = ACTIONS(455),
    [anon_sym_POUND_LPAREN] = ACTIONS(455),
    [sym_shorthand_function_arg] = ACTIONS(455),
    [anon_sym_CARET] = ACTIONS(457),
    [anon_sym_CARET_COLON] = ACTIONS(455),
    [anon_sym_CARET_DQUOTE] = ACTIONS(455),
    [anon_sym_BQUOTE] = ACTIONS(455),
    [anon_sym_TILDE] = ACTIONS(457),
    [anon_sym_TILDE_AT] = ACTIONS(455),
    [sym_gensym] = ACTIONS(455),
    [anon_sym_AT] = ACTIONS(455),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(459),
    [sym_nil] = ACTIONS(461),
    [sym_true] = ACTIONS(461),
    [sym_false] = ACTIONS(461),
    [sym_number_long] = ACTIONS(461),
    [sym_number_double] = ACTIONS(459),
    [sym_number_bigint] = ACTIONS(461),
    [sym_number_ratio] = ACTIONS(459),
    [anon_sym_BSLASH] = ACTIONS(459),
    [anon_sym_DQUOTE] = ACTIONS(459),
    [anon_sym_POUND_DQUOTE] = ACTIONS(459),
    [anon_sym_SQUOTE] = ACTIONS(459),
    [anon_sym_LPARENquote] = ACTIONS(459),
    [anon_sym_RPAREN] = ACTIONS(459),
    [anon_sym_COLON] = ACTIONS(461),
    [anon_sym_COLON_COLON] = ACTIONS(459),
    [anon_sym_DASH_GT] = ACTIONS(461),
    [anon_sym_DASH_GT_GT] = ACTIONS(459),
    [anon_sym_as_DASH_GT] = ACTIONS(459),
    [anon_sym_some_DASH_GT] = ACTIONS(461),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(459),
    [anon_sym_cond_DASH_GT] = ACTIONS(461),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(459),
    [sym__symbol_chars] = ACTIONS(461),
    [sym_member_access] = ACTIONS(459),
    [sym_field_access] = ACTIONS(459),
    [sym_new_class] = ACTIONS(459),
    [anon_sym_LPAREN] = ACTIONS(461),
    [anon_sym_LBRACK] = ACTIONS(459),
    [anon_sym_RBRACK] = ACTIONS(459),
    [anon_sym_LBRACE] = ACTIONS(459),
    [anon_sym_RBRACE] = ACTIONS(459),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(459),
    [anon_sym_POUND] = ACTIONS(461),
    [anon_sym_POUND_LBRACE] = ACTIONS(459),
    [anon_sym_SEMI] = ACTIONS(459),
    [anon_sym_POUND_BANG] = ACTIONS(459),
    [anon_sym_POUND_] = ACTIONS(459),
    [anon_sym_POUND_LPAREN] = ACTIONS(459),
    [sym_shorthand_function_arg] = ACTIONS(459),
    [anon_sym_CARET] = ACTIONS(461),
    [anon_sym_CARET_COLON] = ACTIONS(459),
    [anon_sym_CARET_DQUOTE] = ACTIONS(459),
    [anon_sym_BQUOTE] = ACTIONS(459),
    [anon_sym_TILDE] = ACTIONS(461),
    [anon_sym_TILDE_AT] = ACTIONS(459),
    [sym_gensym] = ACTIONS(459),
    [anon_sym_AT] = ACTIONS(459),
  },
  [117] = {
    [sym__anything] = STATE(117),
    [sym__literals] = STATE(117),
    [sym__collection_literals] = STATE(117),
    [sym_boolean] = STATE(117),
    [sym_number] = STATE(117),
    [sym__number] = STATE(31),
    [sym_character] = STATE(117),
    [sym__character] = STATE(32),
    [sym_string] = STATE(117),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(117),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(117),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(117),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(117),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(117),
    [sym_list] = STATE(117),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(117),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(117),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(117),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(117),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(117),
    [sym_anonymous_function] = STATE(117),
    [sym_shorthand_function] = STATE(117),
    [sym_defn] = STATE(117),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(117),
    [sym_unquote] = STATE(117),
    [sym_unquote_splice] = STATE(117),
    [sym_deref] = STATE(117),
    [aux_sym_program_repeat1] = STATE(117),
    [aux_sym_metadata_repeat1] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(463),
    [sym_nil] = ACTIONS(465),
    [sym_true] = ACTIONS(468),
    [sym_false] = ACTIONS(468),
    [sym_number_long] = ACTIONS(471),
    [sym_number_double] = ACTIONS(474),
    [sym_number_bigint] = ACTIONS(471),
    [sym_number_ratio] = ACTIONS(474),
    [anon_sym_BSLASH] = ACTIONS(477),
    [anon_sym_DQUOTE] = ACTIONS(480),
    [anon_sym_POUND_DQUOTE] = ACTIONS(483),
    [anon_sym_SQUOTE] = ACTIONS(486),
    [anon_sym_LPARENquote] = ACTIONS(489),
    [anon_sym_COLON] = ACTIONS(492),
    [anon_sym_COLON_COLON] = ACTIONS(495),
    [anon_sym_DASH_GT] = ACTIONS(498),
    [anon_sym_DASH_GT_GT] = ACTIONS(501),
    [anon_sym_as_DASH_GT] = ACTIONS(501),
    [anon_sym_some_DASH_GT] = ACTIONS(498),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(501),
    [anon_sym_cond_DASH_GT] = ACTIONS(498),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(501),
    [sym__symbol_chars] = ACTIONS(504),
    [sym_member_access] = ACTIONS(507),
    [sym_field_access] = ACTIONS(507),
    [sym_new_class] = ACTIONS(507),
    [anon_sym_LPAREN] = ACTIONS(510),
    [anon_sym_LBRACK] = ACTIONS(513),
    [anon_sym_LBRACE] = ACTIONS(516),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(519),
    [anon_sym_POUND] = ACTIONS(522),
    [anon_sym_POUND_LBRACE] = ACTIONS(525),
    [anon_sym_SEMI] = ACTIONS(528),
    [anon_sym_POUND_BANG] = ACTIONS(531),
    [anon_sym_POUND_] = ACTIONS(534),
    [anon_sym_POUND_LPAREN] = ACTIONS(537),
    [sym_shorthand_function_arg] = ACTIONS(540),
    [anon_sym_CARET] = ACTIONS(543),
    [anon_sym_CARET_COLON] = ACTIONS(546),
    [anon_sym_CARET_DQUOTE] = ACTIONS(549),
    [anon_sym_BQUOTE] = ACTIONS(552),
    [anon_sym_TILDE] = ACTIONS(555),
    [anon_sym_TILDE_AT] = ACTIONS(558),
    [sym_gensym] = ACTIONS(540),
    [anon_sym_AT] = ACTIONS(561),
  },
  [118] = {
    [sym__symbol_chars] = ACTIONS(215),
  },
  [119] = {
    [sym_metadata_shorthand] = STATE(119),
    [aux_sym_metadata_repeat1] = STATE(119),
    [anon_sym_LPAREN] = ACTIONS(564),
    [anon_sym_LBRACK] = ACTIONS(564),
    [anon_sym_LBRACE] = ACTIONS(564),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(564),
    [anon_sym_POUND] = ACTIONS(566),
    [anon_sym_POUND_LBRACE] = ACTIONS(564),
    [anon_sym_CARET] = ACTIONS(568),
    [anon_sym_CARET_COLON] = ACTIONS(571),
    [anon_sym_CARET_DQUOTE] = ACTIONS(574),
  },
  [120] = {
    [sym__hex_char] = ACTIONS(577),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(579),
    [sym_nil] = ACTIONS(581),
    [sym_true] = ACTIONS(581),
    [sym_false] = ACTIONS(581),
    [sym_number_long] = ACTIONS(581),
    [sym_number_double] = ACTIONS(579),
    [sym_number_bigint] = ACTIONS(581),
    [sym_number_ratio] = ACTIONS(579),
    [anon_sym_BSLASH] = ACTIONS(579),
    [anon_sym_DQUOTE] = ACTIONS(579),
    [anon_sym_POUND_DQUOTE] = ACTIONS(579),
    [anon_sym_SQUOTE] = ACTIONS(579),
    [anon_sym_LPARENquote] = ACTIONS(579),
    [anon_sym_RPAREN] = ACTIONS(579),
    [anon_sym_COLON] = ACTIONS(581),
    [anon_sym_COLON_COLON] = ACTIONS(579),
    [anon_sym_DASH_GT] = ACTIONS(581),
    [anon_sym_DASH_GT_GT] = ACTIONS(579),
    [anon_sym_as_DASH_GT] = ACTIONS(579),
    [anon_sym_some_DASH_GT] = ACTIONS(581),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(579),
    [anon_sym_cond_DASH_GT] = ACTIONS(581),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(579),
    [sym__symbol_chars] = ACTIONS(581),
    [sym_member_access] = ACTIONS(579),
    [sym_field_access] = ACTIONS(579),
    [sym_new_class] = ACTIONS(579),
    [anon_sym_LPAREN] = ACTIONS(581),
    [anon_sym_LBRACK] = ACTIONS(579),
    [anon_sym_RBRACK] = ACTIONS(579),
    [anon_sym_LBRACE] = ACTIONS(579),
    [anon_sym_RBRACE] = ACTIONS(579),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(579),
    [anon_sym_POUND] = ACTIONS(581),
    [anon_sym_POUND_LBRACE] = ACTIONS(579),
    [anon_sym_SEMI] = ACTIONS(579),
    [anon_sym_POUND_BANG] = ACTIONS(579),
    [anon_sym_POUND_] = ACTIONS(579),
    [anon_sym_POUND_LPAREN] = ACTIONS(579),
    [sym_shorthand_function_arg] = ACTIONS(579),
    [anon_sym_CARET] = ACTIONS(581),
    [anon_sym_CARET_COLON] = ACTIONS(579),
    [anon_sym_CARET_DQUOTE] = ACTIONS(579),
    [anon_sym_BQUOTE] = ACTIONS(579),
    [anon_sym_TILDE] = ACTIONS(581),
    [anon_sym_TILDE_AT] = ACTIONS(579),
    [sym_gensym] = ACTIONS(579),
    [anon_sym_AT] = ACTIONS(579),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(583),
    [sym_nil] = ACTIONS(585),
    [sym_true] = ACTIONS(585),
    [sym_false] = ACTIONS(585),
    [sym_number_long] = ACTIONS(585),
    [sym_number_double] = ACTIONS(583),
    [sym_number_bigint] = ACTIONS(585),
    [sym_number_ratio] = ACTIONS(583),
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
    [anon_sym_AT] = ACTIONS(583),
  },
  [123] = {
    [aux_sym__string_repeat1] = STATE(123),
    [anon_sym_DQUOTE] = ACTIONS(587),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(589),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(589),
  },
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(592),
    [sym_nil] = ACTIONS(594),
    [sym_true] = ACTIONS(594),
    [sym_false] = ACTIONS(594),
    [sym_number_long] = ACTIONS(594),
    [sym_number_double] = ACTIONS(592),
    [sym_number_bigint] = ACTIONS(594),
    [sym_number_ratio] = ACTIONS(592),
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
    [anon_sym_AT] = ACTIONS(592),
  },
  [125] = {
    [aux_sym__regex_repeat1] = STATE(125),
    [anon_sym_DQUOTE] = ACTIONS(596),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(598),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(598),
  },
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(601),
    [sym_nil] = ACTIONS(603),
    [sym_true] = ACTIONS(603),
    [sym_false] = ACTIONS(603),
    [sym_number_long] = ACTIONS(603),
    [sym_number_double] = ACTIONS(601),
    [sym_number_bigint] = ACTIONS(603),
    [sym_number_ratio] = ACTIONS(601),
    [anon_sym_BSLASH] = ACTIONS(601),
    [anon_sym_DQUOTE] = ACTIONS(601),
    [anon_sym_POUND_DQUOTE] = ACTIONS(601),
    [anon_sym_SQUOTE] = ACTIONS(601),
    [anon_sym_LPARENquote] = ACTIONS(601),
    [anon_sym_RPAREN] = ACTIONS(601),
    [anon_sym_COLON] = ACTIONS(603),
    [anon_sym_COLON_COLON] = ACTIONS(601),
    [anon_sym_DASH_GT] = ACTIONS(603),
    [anon_sym_DASH_GT_GT] = ACTIONS(601),
    [anon_sym_as_DASH_GT] = ACTIONS(601),
    [anon_sym_some_DASH_GT] = ACTIONS(603),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(601),
    [anon_sym_cond_DASH_GT] = ACTIONS(603),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(601),
    [sym__symbol_chars] = ACTIONS(603),
    [sym_member_access] = ACTIONS(601),
    [sym_field_access] = ACTIONS(601),
    [sym_new_class] = ACTIONS(601),
    [anon_sym_LPAREN] = ACTIONS(603),
    [anon_sym_LBRACK] = ACTIONS(601),
    [anon_sym_RBRACK] = ACTIONS(601),
    [anon_sym_LBRACE] = ACTIONS(601),
    [anon_sym_RBRACE] = ACTIONS(601),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(601),
    [anon_sym_POUND] = ACTIONS(603),
    [anon_sym_POUND_LBRACE] = ACTIONS(601),
    [anon_sym_SEMI] = ACTIONS(601),
    [anon_sym_POUND_BANG] = ACTIONS(601),
    [anon_sym_POUND_] = ACTIONS(601),
    [anon_sym_POUND_LPAREN] = ACTIONS(601),
    [sym_shorthand_function_arg] = ACTIONS(601),
    [anon_sym_CARET] = ACTIONS(603),
    [anon_sym_CARET_COLON] = ACTIONS(601),
    [anon_sym_CARET_DQUOTE] = ACTIONS(601),
    [anon_sym_BQUOTE] = ACTIONS(601),
    [anon_sym_TILDE] = ACTIONS(603),
    [anon_sym_TILDE_AT] = ACTIONS(601),
    [sym_gensym] = ACTIONS(601),
    [anon_sym_AT] = ACTIONS(601),
  },
  [127] = {
    [sym__keyword_chars] = ACTIONS(605),
  },
  [128] = {
    [ts_builtin_sym_end] = ACTIONS(607),
    [sym_nil] = ACTIONS(609),
    [sym_true] = ACTIONS(609),
    [sym_false] = ACTIONS(609),
    [sym_number_long] = ACTIONS(609),
    [sym_number_double] = ACTIONS(607),
    [sym_number_bigint] = ACTIONS(609),
    [sym_number_ratio] = ACTIONS(607),
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
    [sym_member_access] = ACTIONS(607),
    [sym_field_access] = ACTIONS(607),
    [sym_new_class] = ACTIONS(607),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(607),
    [sym_shorthand_function_arg] = ACTIONS(607),
    [anon_sym_CARET] = ACTIONS(609),
    [anon_sym_CARET_COLON] = ACTIONS(607),
    [anon_sym_CARET_DQUOTE] = ACTIONS(607),
    [anon_sym_BQUOTE] = ACTIONS(607),
    [anon_sym_TILDE] = ACTIONS(609),
    [anon_sym_TILDE_AT] = ACTIONS(607),
    [sym_gensym] = ACTIONS(607),
    [anon_sym_AT] = ACTIONS(607),
  },
  [129] = {
    [ts_builtin_sym_end] = ACTIONS(611),
    [sym_nil] = ACTIONS(613),
    [sym_true] = ACTIONS(613),
    [sym_false] = ACTIONS(613),
    [sym_number_long] = ACTIONS(613),
    [sym_number_double] = ACTIONS(611),
    [sym_number_bigint] = ACTIONS(613),
    [sym_number_ratio] = ACTIONS(611),
    [anon_sym_BSLASH] = ACTIONS(611),
    [anon_sym_DQUOTE] = ACTIONS(611),
    [anon_sym_POUND_DQUOTE] = ACTIONS(611),
    [anon_sym_SQUOTE] = ACTIONS(611),
    [anon_sym_LPARENquote] = ACTIONS(611),
    [anon_sym_RPAREN] = ACTIONS(611),
    [anon_sym_COLON] = ACTIONS(613),
    [anon_sym_COLON_COLON] = ACTIONS(611),
    [anon_sym_DASH_GT] = ACTIONS(613),
    [anon_sym_DASH_GT_GT] = ACTIONS(611),
    [anon_sym_as_DASH_GT] = ACTIONS(611),
    [anon_sym_some_DASH_GT] = ACTIONS(613),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(611),
    [anon_sym_cond_DASH_GT] = ACTIONS(613),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(611),
    [sym__symbol_chars] = ACTIONS(613),
    [sym_member_access] = ACTIONS(611),
    [sym_field_access] = ACTIONS(611),
    [sym_new_class] = ACTIONS(611),
    [anon_sym_LPAREN] = ACTIONS(613),
    [anon_sym_LBRACK] = ACTIONS(611),
    [anon_sym_RBRACK] = ACTIONS(611),
    [anon_sym_LBRACE] = ACTIONS(611),
    [anon_sym_RBRACE] = ACTIONS(611),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(611),
    [anon_sym_POUND] = ACTIONS(613),
    [anon_sym_POUND_LBRACE] = ACTIONS(611),
    [anon_sym_SEMI] = ACTIONS(611),
    [anon_sym_POUND_BANG] = ACTIONS(611),
    [anon_sym_POUND_] = ACTIONS(611),
    [anon_sym_POUND_LPAREN] = ACTIONS(611),
    [sym_shorthand_function_arg] = ACTIONS(611),
    [anon_sym_CARET] = ACTIONS(613),
    [anon_sym_CARET_COLON] = ACTIONS(611),
    [anon_sym_CARET_DQUOTE] = ACTIONS(611),
    [anon_sym_BQUOTE] = ACTIONS(611),
    [anon_sym_TILDE] = ACTIONS(613),
    [anon_sym_TILDE_AT] = ACTIONS(611),
    [sym_gensym] = ACTIONS(611),
    [anon_sym_AT] = ACTIONS(611),
  },
  [130] = {
    [sym__anything] = STATE(145),
    [sym__literals] = STATE(145),
    [sym__collection_literals] = STATE(145),
    [sym_boolean] = STATE(145),
    [sym_number] = STATE(145),
    [sym__number] = STATE(31),
    [sym_character] = STATE(145),
    [sym__character] = STATE(32),
    [sym_string] = STATE(145),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(145),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(145),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(145),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(145),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(145),
    [sym_list] = STATE(145),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(145),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(145),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(145),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(145),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(145),
    [sym_anonymous_function] = STATE(145),
    [sym_shorthand_function] = STATE(145),
    [sym_defn] = STATE(145),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(145),
    [sym_unquote] = STATE(145),
    [sym_unquote_splice] = STATE(145),
    [sym_deref] = STATE(145),
    [aux_sym_program_repeat1] = STATE(145),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(365),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(129),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(615),
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
    [anon_sym_POUND_] = ACTIONS(133),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(369),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(145),
    [anon_sym_TILDE_AT] = ACTIONS(147),
    [sym_gensym] = ACTIONS(369),
    [anon_sym_AT] = ACTIONS(71),
  },
  [131] = {
    [anon_sym_DQUOTE] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(113),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(113),
    [anon_sym_POUND] = ACTIONS(115),
  },
  [132] = {
    [anon_sym_DQUOTE] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(617),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(117),
    [anon_sym_POUND] = ACTIONS(119),
  },
  [133] = {
    [sym_vector] = STATE(136),
    [sym__vector] = STATE(39),
    [sym__single_arity_fn] = STATE(166),
    [sym_params] = STATE(139),
    [anon_sym_LBRACK] = ACTIONS(39),
  },
  [134] = {
    [anon_sym_DQUOTE] = ACTIONS(619),
    [anon_sym_LPAREN] = ACTIONS(619),
    [anon_sym_LBRACK] = ACTIONS(619),
    [anon_sym_LBRACE] = ACTIONS(619),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(619),
    [anon_sym_POUND] = ACTIONS(621),
  },
  [135] = {
    [anon_sym_DQUOTE] = ACTIONS(267),
    [anon_sym_LPAREN] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(267),
    [anon_sym_LBRACE] = ACTIONS(267),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(267),
    [anon_sym_POUND] = ACTIONS(269),
  },
  [136] = {
    [sym_nil] = ACTIONS(623),
    [sym_true] = ACTIONS(623),
    [sym_false] = ACTIONS(623),
    [sym_number_long] = ACTIONS(623),
    [sym_number_double] = ACTIONS(625),
    [sym_number_bigint] = ACTIONS(623),
    [sym_number_ratio] = ACTIONS(625),
    [anon_sym_BSLASH] = ACTIONS(625),
    [anon_sym_DQUOTE] = ACTIONS(625),
    [anon_sym_POUND_DQUOTE] = ACTIONS(625),
    [anon_sym_SQUOTE] = ACTIONS(625),
    [anon_sym_LPARENquote] = ACTIONS(625),
    [anon_sym_RPAREN] = ACTIONS(625),
    [anon_sym_COLON] = ACTIONS(623),
    [anon_sym_COLON_COLON] = ACTIONS(625),
    [anon_sym_DASH_GT] = ACTIONS(623),
    [anon_sym_DASH_GT_GT] = ACTIONS(625),
    [anon_sym_as_DASH_GT] = ACTIONS(625),
    [anon_sym_some_DASH_GT] = ACTIONS(623),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(625),
    [anon_sym_cond_DASH_GT] = ACTIONS(623),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(625),
    [sym__symbol_chars] = ACTIONS(623),
    [sym_member_access] = ACTIONS(625),
    [sym_field_access] = ACTIONS(625),
    [sym_new_class] = ACTIONS(625),
    [anon_sym_LPAREN] = ACTIONS(623),
    [anon_sym_LBRACK] = ACTIONS(625),
    [anon_sym_LBRACE] = ACTIONS(625),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(625),
    [anon_sym_POUND] = ACTIONS(623),
    [anon_sym_POUND_LBRACE] = ACTIONS(625),
    [anon_sym_SEMI] = ACTIONS(625),
    [anon_sym_POUND_BANG] = ACTIONS(625),
    [anon_sym_POUND_] = ACTIONS(625),
    [anon_sym_POUND_LPAREN] = ACTIONS(625),
    [sym_shorthand_function_arg] = ACTIONS(625),
    [anon_sym_CARET] = ACTIONS(623),
    [anon_sym_CARET_COLON] = ACTIONS(625),
    [anon_sym_CARET_DQUOTE] = ACTIONS(625),
    [anon_sym_BQUOTE] = ACTIONS(625),
    [anon_sym_TILDE] = ACTIONS(623),
    [anon_sym_TILDE_AT] = ACTIONS(625),
    [sym_gensym] = ACTIONS(625),
    [anon_sym_AT] = ACTIONS(625),
  },
  [137] = {
    [anon_sym_RPAREN] = ACTIONS(627),
  },
  [138] = {
    [sym_vector] = STATE(136),
    [sym__vector] = STATE(39),
    [sym__after_the_fn_name] = STATE(168),
    [sym__single_arity_fn] = STATE(168),
    [sym__multi_arity_fn] = STATE(168),
    [sym_params] = STATE(139),
    [aux_sym__multi_arity_fn_repeat1] = STATE(140),
    [anon_sym_LPAREN] = ACTIONS(363),
    [anon_sym_LBRACK] = ACTIONS(39),
  },
  [139] = {
    [sym__anything] = STATE(170),
    [sym__literals] = STATE(170),
    [sym__collection_literals] = STATE(170),
    [sym_boolean] = STATE(170),
    [sym_number] = STATE(170),
    [sym__number] = STATE(31),
    [sym_character] = STATE(170),
    [sym__character] = STATE(32),
    [sym_string] = STATE(170),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(170),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(170),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(170),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(170),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(170),
    [sym_list] = STATE(170),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(170),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(170),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(170),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(170),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(170),
    [sym_anonymous_function] = STATE(170),
    [sym_function_body] = STATE(169),
    [sym_shorthand_function] = STATE(170),
    [sym_defn] = STATE(170),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(170),
    [sym_unquote] = STATE(170),
    [sym_unquote_splice] = STATE(170),
    [sym_deref] = STATE(170),
    [aux_sym_program_repeat1] = STATE(170),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(629),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(129),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(631),
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
    [anon_sym_POUND_] = ACTIONS(133),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(145),
    [anon_sym_TILDE_AT] = ACTIONS(147),
    [sym_gensym] = ACTIONS(633),
    [anon_sym_AT] = ACTIONS(71),
  },
  [140] = {
    [aux_sym__multi_arity_fn_repeat1] = STATE(171),
    [anon_sym_RPAREN] = ACTIONS(635),
    [anon_sym_LPAREN] = ACTIONS(363),
  },
  [141] = {
    [sym_string] = STATE(173),
    [sym__string] = STATE(174),
    [sym_vector] = STATE(136),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(175),
    [sym__hash_map] = STATE(109),
    [sym_namespace_map] = STATE(109),
    [sym__after_the_fn_name] = STATE(176),
    [sym__single_arity_fn] = STATE(176),
    [sym__multi_arity_fn] = STATE(176),
    [sym_params] = STATE(139),
    [sym_docstring] = STATE(177),
    [sym_attr_map] = STATE(178),
    [aux_sym__multi_arity_fn_repeat1] = STATE(140),
    [anon_sym_DQUOTE] = ACTIONS(637),
    [anon_sym_LPAREN] = ACTIONS(363),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(217),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(219),
    [anon_sym_POUND] = ACTIONS(221),
  },
  [142] = {
    [sym_symbol] = STATE(134),
    [sym__symbol] = STATE(135),
    [sym_threading_macro] = STATE(135),
    [sym_qualified_symbol] = STATE(135),
    [sym_function_name] = STATE(179),
    [anon_sym_DASH_GT] = ACTIONS(357),
    [anon_sym_DASH_GT_GT] = ACTIONS(359),
    [anon_sym_as_DASH_GT] = ACTIONS(359),
    [anon_sym_some_DASH_GT] = ACTIONS(357),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(359),
    [anon_sym_cond_DASH_GT] = ACTIONS(357),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(359),
    [sym__symbol_chars] = ACTIONS(361),
  },
  [143] = {
    [sym_metadata_shorthand] = STATE(180),
    [aux_sym_metadata_repeat1] = STATE(180),
    [anon_sym_DASH_GT] = ACTIONS(291),
    [anon_sym_DASH_GT_GT] = ACTIONS(293),
    [anon_sym_as_DASH_GT] = ACTIONS(293),
    [anon_sym_some_DASH_GT] = ACTIONS(291),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(293),
    [anon_sym_cond_DASH_GT] = ACTIONS(291),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(293),
    [sym__symbol_chars] = ACTIONS(291),
    [anon_sym_CARET] = ACTIONS(301),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
  },
  [144] = {
    [ts_builtin_sym_end] = ACTIONS(639),
    [sym_nil] = ACTIONS(641),
    [sym_true] = ACTIONS(641),
    [sym_false] = ACTIONS(641),
    [sym_number_long] = ACTIONS(641),
    [sym_number_double] = ACTIONS(639),
    [sym_number_bigint] = ACTIONS(641),
    [sym_number_ratio] = ACTIONS(639),
    [anon_sym_BSLASH] = ACTIONS(639),
    [anon_sym_DQUOTE] = ACTIONS(639),
    [anon_sym_POUND_DQUOTE] = ACTIONS(639),
    [anon_sym_SQUOTE] = ACTIONS(639),
    [anon_sym_LPARENquote] = ACTIONS(639),
    [anon_sym_RPAREN] = ACTIONS(639),
    [anon_sym_COLON] = ACTIONS(641),
    [anon_sym_COLON_COLON] = ACTIONS(639),
    [anon_sym_DASH_GT] = ACTIONS(641),
    [anon_sym_DASH_GT_GT] = ACTIONS(639),
    [anon_sym_as_DASH_GT] = ACTIONS(639),
    [anon_sym_some_DASH_GT] = ACTIONS(641),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(639),
    [anon_sym_cond_DASH_GT] = ACTIONS(641),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(639),
    [sym__symbol_chars] = ACTIONS(641),
    [sym_member_access] = ACTIONS(639),
    [sym_field_access] = ACTIONS(639),
    [sym_new_class] = ACTIONS(639),
    [anon_sym_LPAREN] = ACTIONS(641),
    [anon_sym_LBRACK] = ACTIONS(639),
    [anon_sym_RBRACK] = ACTIONS(639),
    [anon_sym_LBRACE] = ACTIONS(639),
    [anon_sym_RBRACE] = ACTIONS(639),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(639),
    [anon_sym_POUND] = ACTIONS(641),
    [anon_sym_POUND_LBRACE] = ACTIONS(639),
    [anon_sym_SEMI] = ACTIONS(639),
    [anon_sym_POUND_BANG] = ACTIONS(639),
    [anon_sym_POUND_] = ACTIONS(639),
    [anon_sym_POUND_LPAREN] = ACTIONS(639),
    [sym_shorthand_function_arg] = ACTIONS(639),
    [anon_sym_CARET] = ACTIONS(641),
    [anon_sym_CARET_COLON] = ACTIONS(639),
    [anon_sym_CARET_DQUOTE] = ACTIONS(639),
    [anon_sym_BQUOTE] = ACTIONS(639),
    [anon_sym_TILDE] = ACTIONS(641),
    [anon_sym_TILDE_AT] = ACTIONS(639),
    [sym_gensym] = ACTIONS(639),
    [anon_sym_AT] = ACTIONS(639),
  },
  [145] = {
    [sym__anything] = STATE(145),
    [sym__literals] = STATE(145),
    [sym__collection_literals] = STATE(145),
    [sym_boolean] = STATE(145),
    [sym_number] = STATE(145),
    [sym__number] = STATE(31),
    [sym_character] = STATE(145),
    [sym__character] = STATE(32),
    [sym_string] = STATE(145),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(145),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(145),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(145),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(145),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(145),
    [sym_list] = STATE(145),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(145),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(145),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(145),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(145),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(145),
    [sym_anonymous_function] = STATE(145),
    [sym_shorthand_function] = STATE(145),
    [sym_defn] = STATE(145),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(145),
    [sym_unquote] = STATE(145),
    [sym_unquote_splice] = STATE(145),
    [sym_deref] = STATE(145),
    [aux_sym_program_repeat1] = STATE(145),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(643),
    [sym_true] = ACTIONS(468),
    [sym_false] = ACTIONS(468),
    [sym_number_long] = ACTIONS(471),
    [sym_number_double] = ACTIONS(474),
    [sym_number_bigint] = ACTIONS(471),
    [sym_number_ratio] = ACTIONS(474),
    [anon_sym_BSLASH] = ACTIONS(477),
    [anon_sym_DQUOTE] = ACTIONS(480),
    [anon_sym_POUND_DQUOTE] = ACTIONS(483),
    [anon_sym_SQUOTE] = ACTIONS(646),
    [anon_sym_LPARENquote] = ACTIONS(489),
    [anon_sym_RPAREN] = ACTIONS(463),
    [anon_sym_COLON] = ACTIONS(492),
    [anon_sym_COLON_COLON] = ACTIONS(495),
    [anon_sym_DASH_GT] = ACTIONS(498),
    [anon_sym_DASH_GT_GT] = ACTIONS(501),
    [anon_sym_as_DASH_GT] = ACTIONS(501),
    [anon_sym_some_DASH_GT] = ACTIONS(498),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(501),
    [anon_sym_cond_DASH_GT] = ACTIONS(498),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(501),
    [sym__symbol_chars] = ACTIONS(504),
    [sym_member_access] = ACTIONS(507),
    [sym_field_access] = ACTIONS(507),
    [sym_new_class] = ACTIONS(507),
    [anon_sym_LPAREN] = ACTIONS(510),
    [anon_sym_LBRACK] = ACTIONS(513),
    [anon_sym_LBRACE] = ACTIONS(516),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(519),
    [anon_sym_POUND] = ACTIONS(522),
    [anon_sym_POUND_LBRACE] = ACTIONS(525),
    [anon_sym_SEMI] = ACTIONS(528),
    [anon_sym_POUND_BANG] = ACTIONS(531),
    [anon_sym_POUND_] = ACTIONS(649),
    [anon_sym_POUND_LPAREN] = ACTIONS(537),
    [sym_shorthand_function_arg] = ACTIONS(652),
    [anon_sym_CARET] = ACTIONS(543),
    [anon_sym_CARET_COLON] = ACTIONS(546),
    [anon_sym_CARET_DQUOTE] = ACTIONS(549),
    [anon_sym_BQUOTE] = ACTIONS(655),
    [anon_sym_TILDE] = ACTIONS(658),
    [anon_sym_TILDE_AT] = ACTIONS(661),
    [sym_gensym] = ACTIONS(652),
    [anon_sym_AT] = ACTIONS(561),
  },
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(664),
    [sym_nil] = ACTIONS(666),
    [sym_true] = ACTIONS(666),
    [sym_false] = ACTIONS(666),
    [sym_number_long] = ACTIONS(666),
    [sym_number_double] = ACTIONS(664),
    [sym_number_bigint] = ACTIONS(666),
    [sym_number_ratio] = ACTIONS(664),
    [anon_sym_BSLASH] = ACTIONS(664),
    [anon_sym_DQUOTE] = ACTIONS(664),
    [anon_sym_POUND_DQUOTE] = ACTIONS(664),
    [anon_sym_SQUOTE] = ACTIONS(664),
    [anon_sym_LPARENquote] = ACTIONS(664),
    [anon_sym_RPAREN] = ACTIONS(664),
    [anon_sym_COLON] = ACTIONS(666),
    [anon_sym_COLON_COLON] = ACTIONS(664),
    [anon_sym_DASH_GT] = ACTIONS(666),
    [anon_sym_DASH_GT_GT] = ACTIONS(664),
    [anon_sym_as_DASH_GT] = ACTIONS(664),
    [anon_sym_some_DASH_GT] = ACTIONS(666),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(664),
    [anon_sym_cond_DASH_GT] = ACTIONS(666),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(664),
    [sym__symbol_chars] = ACTIONS(666),
    [sym_member_access] = ACTIONS(664),
    [sym_field_access] = ACTIONS(664),
    [sym_new_class] = ACTIONS(664),
    [anon_sym_LPAREN] = ACTIONS(666),
    [anon_sym_LBRACK] = ACTIONS(664),
    [anon_sym_RBRACK] = ACTIONS(664),
    [anon_sym_LBRACE] = ACTIONS(664),
    [anon_sym_RBRACE] = ACTIONS(664),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(664),
    [anon_sym_POUND] = ACTIONS(666),
    [anon_sym_POUND_LBRACE] = ACTIONS(664),
    [anon_sym_SEMI] = ACTIONS(664),
    [anon_sym_POUND_BANG] = ACTIONS(664),
    [anon_sym_POUND_] = ACTIONS(664),
    [anon_sym_POUND_LPAREN] = ACTIONS(664),
    [sym_shorthand_function_arg] = ACTIONS(664),
    [anon_sym_CARET] = ACTIONS(666),
    [anon_sym_CARET_COLON] = ACTIONS(664),
    [anon_sym_CARET_DQUOTE] = ACTIONS(664),
    [anon_sym_BQUOTE] = ACTIONS(664),
    [anon_sym_TILDE] = ACTIONS(666),
    [anon_sym_TILDE_AT] = ACTIONS(664),
    [sym_gensym] = ACTIONS(664),
    [anon_sym_AT] = ACTIONS(664),
  },
  [147] = {
    [sym__anything] = STATE(147),
    [sym__literals] = STATE(147),
    [sym__collection_literals] = STATE(147),
    [sym_boolean] = STATE(147),
    [sym_number] = STATE(147),
    [sym__number] = STATE(31),
    [sym_character] = STATE(147),
    [sym__character] = STATE(32),
    [sym_string] = STATE(147),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(147),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(147),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(147),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(147),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(147),
    [sym_list] = STATE(147),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(147),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(147),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(147),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(147),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(147),
    [sym_anonymous_function] = STATE(147),
    [sym_shorthand_function] = STATE(147),
    [sym_defn] = STATE(147),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(147),
    [sym_unquote] = STATE(147),
    [sym_unquote_splice] = STATE(147),
    [sym_deref] = STATE(147),
    [aux_sym_program_repeat1] = STATE(147),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(668),
    [sym_true] = ACTIONS(468),
    [sym_false] = ACTIONS(468),
    [sym_number_long] = ACTIONS(471),
    [sym_number_double] = ACTIONS(474),
    [sym_number_bigint] = ACTIONS(471),
    [sym_number_ratio] = ACTIONS(474),
    [anon_sym_BSLASH] = ACTIONS(477),
    [anon_sym_DQUOTE] = ACTIONS(480),
    [anon_sym_POUND_DQUOTE] = ACTIONS(483),
    [anon_sym_SQUOTE] = ACTIONS(671),
    [anon_sym_LPARENquote] = ACTIONS(489),
    [anon_sym_COLON] = ACTIONS(492),
    [anon_sym_COLON_COLON] = ACTIONS(495),
    [anon_sym_DASH_GT] = ACTIONS(498),
    [anon_sym_DASH_GT_GT] = ACTIONS(501),
    [anon_sym_as_DASH_GT] = ACTIONS(501),
    [anon_sym_some_DASH_GT] = ACTIONS(498),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(501),
    [anon_sym_cond_DASH_GT] = ACTIONS(498),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(501),
    [sym__symbol_chars] = ACTIONS(504),
    [sym_member_access] = ACTIONS(507),
    [sym_field_access] = ACTIONS(507),
    [sym_new_class] = ACTIONS(507),
    [anon_sym_LPAREN] = ACTIONS(510),
    [anon_sym_LBRACK] = ACTIONS(513),
    [anon_sym_RBRACK] = ACTIONS(463),
    [anon_sym_LBRACE] = ACTIONS(516),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(519),
    [anon_sym_POUND] = ACTIONS(522),
    [anon_sym_POUND_LBRACE] = ACTIONS(525),
    [anon_sym_SEMI] = ACTIONS(528),
    [anon_sym_POUND_BANG] = ACTIONS(531),
    [anon_sym_POUND_] = ACTIONS(674),
    [anon_sym_POUND_LPAREN] = ACTIONS(537),
    [sym_shorthand_function_arg] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(543),
    [anon_sym_CARET_COLON] = ACTIONS(546),
    [anon_sym_CARET_DQUOTE] = ACTIONS(549),
    [anon_sym_BQUOTE] = ACTIONS(680),
    [anon_sym_TILDE] = ACTIONS(683),
    [anon_sym_TILDE_AT] = ACTIONS(686),
    [sym_gensym] = ACTIONS(677),
    [anon_sym_AT] = ACTIONS(561),
  },
  [148] = {
    [sym_nil] = ACTIONS(689),
    [sym_true] = ACTIONS(689),
    [sym_false] = ACTIONS(689),
    [sym_number_long] = ACTIONS(689),
    [sym_number_double] = ACTIONS(691),
    [sym_number_bigint] = ACTIONS(689),
    [sym_number_ratio] = ACTIONS(691),
    [anon_sym_BSLASH] = ACTIONS(691),
    [anon_sym_DQUOTE] = ACTIONS(691),
    [anon_sym_POUND_DQUOTE] = ACTIONS(691),
    [anon_sym_SQUOTE] = ACTIONS(691),
    [anon_sym_LPARENquote] = ACTIONS(691),
    [anon_sym_COLON] = ACTIONS(689),
    [anon_sym_COLON_COLON] = ACTIONS(691),
    [anon_sym_DASH_GT] = ACTIONS(689),
    [anon_sym_DASH_GT_GT] = ACTIONS(691),
    [anon_sym_as_DASH_GT] = ACTIONS(691),
    [anon_sym_some_DASH_GT] = ACTIONS(689),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(691),
    [anon_sym_cond_DASH_GT] = ACTIONS(689),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(691),
    [sym__symbol_chars] = ACTIONS(689),
    [sym_member_access] = ACTIONS(691),
    [sym_field_access] = ACTIONS(691),
    [sym_new_class] = ACTIONS(691),
    [anon_sym_LPAREN] = ACTIONS(689),
    [anon_sym_LBRACK] = ACTIONS(691),
    [anon_sym_LBRACE] = ACTIONS(691),
    [anon_sym_RBRACE] = ACTIONS(691),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(691),
    [anon_sym_POUND] = ACTIONS(689),
    [anon_sym_POUND_LBRACE] = ACTIONS(691),
    [anon_sym_SEMI] = ACTIONS(691),
    [anon_sym_POUND_BANG] = ACTIONS(691),
    [anon_sym_POUND_] = ACTIONS(691),
    [anon_sym_POUND_LPAREN] = ACTIONS(691),
    [sym_shorthand_function_arg] = ACTIONS(691),
    [anon_sym_CARET] = ACTIONS(689),
    [anon_sym_CARET_COLON] = ACTIONS(691),
    [anon_sym_CARET_DQUOTE] = ACTIONS(691),
    [anon_sym_BQUOTE] = ACTIONS(691),
    [anon_sym_TILDE] = ACTIONS(689),
    [anon_sym_TILDE_AT] = ACTIONS(691),
    [sym_gensym] = ACTIONS(691),
    [anon_sym_AT] = ACTIONS(691),
  },
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(693),
    [sym_nil] = ACTIONS(695),
    [sym_true] = ACTIONS(695),
    [sym_false] = ACTIONS(695),
    [sym_number_long] = ACTIONS(695),
    [sym_number_double] = ACTIONS(693),
    [sym_number_bigint] = ACTIONS(695),
    [sym_number_ratio] = ACTIONS(693),
    [anon_sym_BSLASH] = ACTIONS(693),
    [anon_sym_DQUOTE] = ACTIONS(693),
    [anon_sym_POUND_DQUOTE] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(693),
    [anon_sym_LPARENquote] = ACTIONS(693),
    [anon_sym_RPAREN] = ACTIONS(693),
    [anon_sym_COLON] = ACTIONS(695),
    [anon_sym_COLON_COLON] = ACTIONS(693),
    [anon_sym_DASH_GT] = ACTIONS(695),
    [anon_sym_DASH_GT_GT] = ACTIONS(693),
    [anon_sym_as_DASH_GT] = ACTIONS(693),
    [anon_sym_some_DASH_GT] = ACTIONS(695),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(693),
    [anon_sym_cond_DASH_GT] = ACTIONS(695),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(693),
    [sym__symbol_chars] = ACTIONS(695),
    [sym_member_access] = ACTIONS(693),
    [sym_field_access] = ACTIONS(693),
    [sym_new_class] = ACTIONS(693),
    [anon_sym_LPAREN] = ACTIONS(695),
    [anon_sym_LBRACK] = ACTIONS(693),
    [anon_sym_RBRACK] = ACTIONS(693),
    [anon_sym_LBRACE] = ACTIONS(693),
    [anon_sym_RBRACE] = ACTIONS(693),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(693),
    [anon_sym_POUND] = ACTIONS(695),
    [anon_sym_POUND_LBRACE] = ACTIONS(693),
    [anon_sym_SEMI] = ACTIONS(693),
    [anon_sym_POUND_BANG] = ACTIONS(693),
    [anon_sym_POUND_] = ACTIONS(693),
    [anon_sym_POUND_LPAREN] = ACTIONS(693),
    [sym_shorthand_function_arg] = ACTIONS(693),
    [anon_sym_CARET] = ACTIONS(695),
    [anon_sym_CARET_COLON] = ACTIONS(693),
    [anon_sym_CARET_DQUOTE] = ACTIONS(693),
    [anon_sym_BQUOTE] = ACTIONS(693),
    [anon_sym_TILDE] = ACTIONS(695),
    [anon_sym_TILDE_AT] = ACTIONS(693),
    [sym_gensym] = ACTIONS(693),
    [anon_sym_AT] = ACTIONS(693),
  },
  [150] = {
    [sym__anything] = STATE(87),
    [sym__literals] = STATE(87),
    [sym__collection_literals] = STATE(87),
    [sym_boolean] = STATE(87),
    [sym_number] = STATE(87),
    [sym__number] = STATE(31),
    [sym_character] = STATE(87),
    [sym__character] = STATE(32),
    [sym_string] = STATE(87),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(87),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(87),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(87),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(87),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(87),
    [sym_list] = STATE(87),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(87),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(87),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym__hash_map_kv_pair] = STATE(150),
    [sym__hash_map_key] = STATE(87),
    [sym_set] = STATE(87),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(87),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(87),
    [sym_anonymous_function] = STATE(87),
    [sym_shorthand_function] = STATE(87),
    [sym_defn] = STATE(87),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(87),
    [sym_unquote] = STATE(87),
    [sym_unquote_splice] = STATE(87),
    [sym_deref] = STATE(87),
    [aux_sym__hash_map_repeat1] = STATE(150),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(697),
    [sym_true] = ACTIONS(700),
    [sym_false] = ACTIONS(700),
    [sym_number_long] = ACTIONS(703),
    [sym_number_double] = ACTIONS(706),
    [sym_number_bigint] = ACTIONS(703),
    [sym_number_ratio] = ACTIONS(706),
    [anon_sym_BSLASH] = ACTIONS(709),
    [anon_sym_DQUOTE] = ACTIONS(712),
    [anon_sym_POUND_DQUOTE] = ACTIONS(715),
    [anon_sym_SQUOTE] = ACTIONS(718),
    [anon_sym_LPARENquote] = ACTIONS(721),
    [anon_sym_COLON] = ACTIONS(724),
    [anon_sym_COLON_COLON] = ACTIONS(727),
    [anon_sym_DASH_GT] = ACTIONS(730),
    [anon_sym_DASH_GT_GT] = ACTIONS(733),
    [anon_sym_as_DASH_GT] = ACTIONS(733),
    [anon_sym_some_DASH_GT] = ACTIONS(730),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(733),
    [anon_sym_cond_DASH_GT] = ACTIONS(730),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(733),
    [sym__symbol_chars] = ACTIONS(736),
    [sym_member_access] = ACTIONS(739),
    [sym_field_access] = ACTIONS(739),
    [sym_new_class] = ACTIONS(739),
    [anon_sym_LPAREN] = ACTIONS(742),
    [anon_sym_LBRACK] = ACTIONS(745),
    [anon_sym_LBRACE] = ACTIONS(748),
    [anon_sym_RBRACE] = ACTIONS(751),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(753),
    [anon_sym_POUND] = ACTIONS(756),
    [anon_sym_POUND_LBRACE] = ACTIONS(759),
    [anon_sym_SEMI] = ACTIONS(762),
    [anon_sym_POUND_BANG] = ACTIONS(765),
    [anon_sym_POUND_] = ACTIONS(768),
    [anon_sym_POUND_LPAREN] = ACTIONS(771),
    [sym_shorthand_function_arg] = ACTIONS(774),
    [anon_sym_CARET] = ACTIONS(777),
    [anon_sym_CARET_COLON] = ACTIONS(780),
    [anon_sym_CARET_DQUOTE] = ACTIONS(783),
    [anon_sym_BQUOTE] = ACTIONS(786),
    [anon_sym_TILDE] = ACTIONS(789),
    [anon_sym_TILDE_AT] = ACTIONS(792),
    [sym_gensym] = ACTIONS(774),
    [anon_sym_AT] = ACTIONS(795),
  },
  [151] = {
    [ts_builtin_sym_end] = ACTIONS(798),
    [sym_nil] = ACTIONS(800),
    [sym_true] = ACTIONS(800),
    [sym_false] = ACTIONS(800),
    [sym_number_long] = ACTIONS(800),
    [sym_number_double] = ACTIONS(798),
    [sym_number_bigint] = ACTIONS(800),
    [sym_number_ratio] = ACTIONS(798),
    [anon_sym_BSLASH] = ACTIONS(798),
    [anon_sym_DQUOTE] = ACTIONS(798),
    [anon_sym_POUND_DQUOTE] = ACTIONS(798),
    [anon_sym_SQUOTE] = ACTIONS(798),
    [anon_sym_LPARENquote] = ACTIONS(798),
    [anon_sym_RPAREN] = ACTIONS(798),
    [anon_sym_COLON] = ACTIONS(800),
    [anon_sym_COLON_COLON] = ACTIONS(798),
    [anon_sym_DASH_GT] = ACTIONS(800),
    [anon_sym_DASH_GT_GT] = ACTIONS(798),
    [anon_sym_as_DASH_GT] = ACTIONS(798),
    [anon_sym_some_DASH_GT] = ACTIONS(800),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(798),
    [anon_sym_cond_DASH_GT] = ACTIONS(800),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(798),
    [sym__symbol_chars] = ACTIONS(800),
    [sym_member_access] = ACTIONS(798),
    [sym_field_access] = ACTIONS(798),
    [sym_new_class] = ACTIONS(798),
    [anon_sym_LPAREN] = ACTIONS(800),
    [anon_sym_LBRACK] = ACTIONS(798),
    [anon_sym_RBRACK] = ACTIONS(798),
    [anon_sym_LBRACE] = ACTIONS(798),
    [anon_sym_RBRACE] = ACTIONS(798),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(798),
    [anon_sym_POUND] = ACTIONS(800),
    [anon_sym_POUND_LBRACE] = ACTIONS(798),
    [anon_sym_SEMI] = ACTIONS(798),
    [anon_sym_POUND_BANG] = ACTIONS(798),
    [anon_sym_POUND_] = ACTIONS(798),
    [anon_sym_POUND_LPAREN] = ACTIONS(798),
    [sym_shorthand_function_arg] = ACTIONS(798),
    [anon_sym_CARET] = ACTIONS(800),
    [anon_sym_CARET_COLON] = ACTIONS(798),
    [anon_sym_CARET_DQUOTE] = ACTIONS(798),
    [anon_sym_BQUOTE] = ACTIONS(798),
    [anon_sym_TILDE] = ACTIONS(800),
    [anon_sym_TILDE_AT] = ACTIONS(798),
    [sym_gensym] = ACTIONS(798),
    [anon_sym_AT] = ACTIONS(798),
  },
  [152] = {
    [sym__anything] = STATE(87),
    [sym__literals] = STATE(87),
    [sym__collection_literals] = STATE(87),
    [sym_boolean] = STATE(87),
    [sym_number] = STATE(87),
    [sym__number] = STATE(31),
    [sym_character] = STATE(87),
    [sym__character] = STATE(32),
    [sym_string] = STATE(87),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(87),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(87),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(87),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(87),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(87),
    [sym_list] = STATE(87),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(87),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(87),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym__hash_map_kv_pair] = STATE(182),
    [sym__hash_map_key] = STATE(87),
    [sym_set] = STATE(87),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(87),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(87),
    [sym_anonymous_function] = STATE(87),
    [sym_shorthand_function] = STATE(87),
    [sym_defn] = STATE(87),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(87),
    [sym_unquote] = STATE(87),
    [sym_unquote_splice] = STATE(87),
    [sym_deref] = STATE(87),
    [aux_sym__hash_map_repeat1] = STATE(182),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(165),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(167),
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
    [anon_sym_RBRACE] = ACTIONS(802),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(171),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(173),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(175),
    [anon_sym_TILDE] = ACTIONS(177),
    [anon_sym_TILDE_AT] = ACTIONS(179),
    [sym_gensym] = ACTIONS(173),
    [anon_sym_AT] = ACTIONS(71),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(804),
    [sym_nil] = ACTIONS(806),
    [sym_true] = ACTIONS(806),
    [sym_false] = ACTIONS(806),
    [sym_number_long] = ACTIONS(806),
    [sym_number_double] = ACTIONS(804),
    [sym_number_bigint] = ACTIONS(806),
    [sym_number_ratio] = ACTIONS(804),
    [anon_sym_BSLASH] = ACTIONS(804),
    [anon_sym_DQUOTE] = ACTIONS(804),
    [anon_sym_POUND_DQUOTE] = ACTIONS(804),
    [anon_sym_SQUOTE] = ACTIONS(804),
    [anon_sym_LPARENquote] = ACTIONS(804),
    [anon_sym_RPAREN] = ACTIONS(804),
    [anon_sym_COLON] = ACTIONS(806),
    [anon_sym_COLON_COLON] = ACTIONS(804),
    [anon_sym_DASH_GT] = ACTIONS(806),
    [anon_sym_DASH_GT_GT] = ACTIONS(804),
    [anon_sym_as_DASH_GT] = ACTIONS(804),
    [anon_sym_some_DASH_GT] = ACTIONS(806),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(804),
    [anon_sym_cond_DASH_GT] = ACTIONS(806),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(804),
    [sym__symbol_chars] = ACTIONS(806),
    [sym_member_access] = ACTIONS(804),
    [sym_field_access] = ACTIONS(804),
    [sym_new_class] = ACTIONS(804),
    [anon_sym_LPAREN] = ACTIONS(806),
    [anon_sym_LBRACK] = ACTIONS(804),
    [anon_sym_RBRACK] = ACTIONS(804),
    [anon_sym_LBRACE] = ACTIONS(804),
    [anon_sym_RBRACE] = ACTIONS(804),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(804),
    [anon_sym_POUND] = ACTIONS(806),
    [anon_sym_POUND_LBRACE] = ACTIONS(804),
    [anon_sym_SEMI] = ACTIONS(804),
    [anon_sym_POUND_BANG] = ACTIONS(804),
    [anon_sym_POUND_] = ACTIONS(804),
    [anon_sym_POUND_LPAREN] = ACTIONS(804),
    [sym_shorthand_function_arg] = ACTIONS(804),
    [anon_sym_CARET] = ACTIONS(806),
    [anon_sym_CARET_COLON] = ACTIONS(804),
    [anon_sym_CARET_DQUOTE] = ACTIONS(804),
    [anon_sym_BQUOTE] = ACTIONS(804),
    [anon_sym_TILDE] = ACTIONS(806),
    [anon_sym_TILDE_AT] = ACTIONS(804),
    [sym_gensym] = ACTIONS(804),
    [anon_sym_AT] = ACTIONS(804),
  },
  [154] = {
    [sym__anything] = STATE(154),
    [sym__literals] = STATE(154),
    [sym__collection_literals] = STATE(154),
    [sym_boolean] = STATE(154),
    [sym_number] = STATE(154),
    [sym__number] = STATE(31),
    [sym_character] = STATE(154),
    [sym__character] = STATE(32),
    [sym_string] = STATE(154),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(154),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(154),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(154),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(154),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(154),
    [sym_list] = STATE(154),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(154),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(154),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(154),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(154),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(154),
    [sym_anonymous_function] = STATE(154),
    [sym_shorthand_function] = STATE(154),
    [sym_defn] = STATE(154),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(154),
    [sym_unquote] = STATE(154),
    [sym_unquote_splice] = STATE(154),
    [sym_deref] = STATE(154),
    [aux_sym_program_repeat1] = STATE(154),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(808),
    [sym_true] = ACTIONS(468),
    [sym_false] = ACTIONS(468),
    [sym_number_long] = ACTIONS(471),
    [sym_number_double] = ACTIONS(474),
    [sym_number_bigint] = ACTIONS(471),
    [sym_number_ratio] = ACTIONS(474),
    [anon_sym_BSLASH] = ACTIONS(477),
    [anon_sym_DQUOTE] = ACTIONS(480),
    [anon_sym_POUND_DQUOTE] = ACTIONS(483),
    [anon_sym_SQUOTE] = ACTIONS(811),
    [anon_sym_LPARENquote] = ACTIONS(489),
    [anon_sym_COLON] = ACTIONS(492),
    [anon_sym_COLON_COLON] = ACTIONS(495),
    [anon_sym_DASH_GT] = ACTIONS(498),
    [anon_sym_DASH_GT_GT] = ACTIONS(501),
    [anon_sym_as_DASH_GT] = ACTIONS(501),
    [anon_sym_some_DASH_GT] = ACTIONS(498),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(501),
    [anon_sym_cond_DASH_GT] = ACTIONS(498),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(501),
    [sym__symbol_chars] = ACTIONS(504),
    [sym_member_access] = ACTIONS(507),
    [sym_field_access] = ACTIONS(507),
    [sym_new_class] = ACTIONS(507),
    [anon_sym_LPAREN] = ACTIONS(510),
    [anon_sym_LBRACK] = ACTIONS(513),
    [anon_sym_LBRACE] = ACTIONS(516),
    [anon_sym_RBRACE] = ACTIONS(463),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(519),
    [anon_sym_POUND] = ACTIONS(522),
    [anon_sym_POUND_LBRACE] = ACTIONS(525),
    [anon_sym_SEMI] = ACTIONS(528),
    [anon_sym_POUND_BANG] = ACTIONS(531),
    [anon_sym_POUND_] = ACTIONS(814),
    [anon_sym_POUND_LPAREN] = ACTIONS(537),
    [sym_shorthand_function_arg] = ACTIONS(817),
    [anon_sym_CARET] = ACTIONS(543),
    [anon_sym_CARET_COLON] = ACTIONS(546),
    [anon_sym_CARET_DQUOTE] = ACTIONS(549),
    [anon_sym_BQUOTE] = ACTIONS(820),
    [anon_sym_TILDE] = ACTIONS(823),
    [anon_sym_TILDE_AT] = ACTIONS(826),
    [sym_gensym] = ACTIONS(817),
    [anon_sym_AT] = ACTIONS(561),
  },
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(829),
    [sym_nil] = ACTIONS(831),
    [sym_true] = ACTIONS(831),
    [sym_false] = ACTIONS(831),
    [sym_number_long] = ACTIONS(831),
    [sym_number_double] = ACTIONS(829),
    [sym_number_bigint] = ACTIONS(831),
    [sym_number_ratio] = ACTIONS(829),
    [anon_sym_BSLASH] = ACTIONS(829),
    [anon_sym_DQUOTE] = ACTIONS(829),
    [anon_sym_POUND_DQUOTE] = ACTIONS(829),
    [anon_sym_SQUOTE] = ACTIONS(829),
    [anon_sym_LPARENquote] = ACTIONS(829),
    [anon_sym_RPAREN] = ACTIONS(829),
    [anon_sym_COLON] = ACTIONS(831),
    [anon_sym_COLON_COLON] = ACTIONS(829),
    [anon_sym_DASH_GT] = ACTIONS(831),
    [anon_sym_DASH_GT_GT] = ACTIONS(829),
    [anon_sym_as_DASH_GT] = ACTIONS(829),
    [anon_sym_some_DASH_GT] = ACTIONS(831),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(829),
    [anon_sym_cond_DASH_GT] = ACTIONS(831),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(829),
    [sym__symbol_chars] = ACTIONS(831),
    [sym_member_access] = ACTIONS(829),
    [sym_field_access] = ACTIONS(829),
    [sym_new_class] = ACTIONS(829),
    [anon_sym_LPAREN] = ACTIONS(831),
    [anon_sym_LBRACK] = ACTIONS(829),
    [anon_sym_RBRACK] = ACTIONS(829),
    [anon_sym_LBRACE] = ACTIONS(829),
    [anon_sym_RBRACE] = ACTIONS(829),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(829),
    [anon_sym_POUND] = ACTIONS(831),
    [anon_sym_POUND_LBRACE] = ACTIONS(829),
    [anon_sym_SEMI] = ACTIONS(829),
    [anon_sym_POUND_BANG] = ACTIONS(829),
    [anon_sym_POUND_] = ACTIONS(829),
    [anon_sym_POUND_LPAREN] = ACTIONS(829),
    [sym_shorthand_function_arg] = ACTIONS(829),
    [anon_sym_CARET] = ACTIONS(831),
    [anon_sym_CARET_COLON] = ACTIONS(829),
    [anon_sym_CARET_DQUOTE] = ACTIONS(829),
    [anon_sym_BQUOTE] = ACTIONS(829),
    [anon_sym_TILDE] = ACTIONS(831),
    [anon_sym_TILDE_AT] = ACTIONS(829),
    [sym_gensym] = ACTIONS(829),
    [anon_sym_AT] = ACTIONS(829),
  },
  [156] = {
    [anon_sym_DASH_GT] = ACTIONS(383),
    [anon_sym_DASH_GT_GT] = ACTIONS(381),
    [anon_sym_as_DASH_GT] = ACTIONS(381),
    [anon_sym_some_DASH_GT] = ACTIONS(383),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(381),
    [anon_sym_cond_DASH_GT] = ACTIONS(383),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(381),
    [sym__symbol_chars] = ACTIONS(383),
    [anon_sym_LPAREN] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(381),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(381),
    [anon_sym_POUND] = ACTIONS(383),
    [anon_sym_POUND_LBRACE] = ACTIONS(381),
  },
  [157] = {
    [sym__anything] = STATE(87),
    [sym__literals] = STATE(87),
    [sym__collection_literals] = STATE(87),
    [sym_boolean] = STATE(87),
    [sym_number] = STATE(87),
    [sym__number] = STATE(31),
    [sym_character] = STATE(87),
    [sym__character] = STATE(32),
    [sym_string] = STATE(87),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(87),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(87),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(87),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(87),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(87),
    [sym_list] = STATE(87),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(87),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(87),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym__hash_map_kv_pair] = STATE(150),
    [sym__hash_map_key] = STATE(87),
    [sym_set] = STATE(87),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(87),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(87),
    [sym_anonymous_function] = STATE(87),
    [sym_shorthand_function] = STATE(87),
    [sym_defn] = STATE(87),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(87),
    [sym_unquote] = STATE(87),
    [sym_unquote_splice] = STATE(87),
    [sym_deref] = STATE(87),
    [aux_sym__hash_map_repeat1] = STATE(150),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(165),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(167),
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
    [anon_sym_RBRACE] = ACTIONS(833),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(171),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(173),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(175),
    [anon_sym_TILDE] = ACTIONS(177),
    [anon_sym_TILDE_AT] = ACTIONS(179),
    [sym_gensym] = ACTIONS(173),
    [anon_sym_AT] = ACTIONS(71),
  },
  [158] = {
    [anon_sym_DASH_GT] = ACTIONS(393),
    [anon_sym_DASH_GT_GT] = ACTIONS(391),
    [anon_sym_as_DASH_GT] = ACTIONS(391),
    [anon_sym_some_DASH_GT] = ACTIONS(393),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(391),
    [anon_sym_cond_DASH_GT] = ACTIONS(393),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(391),
    [sym__symbol_chars] = ACTIONS(393),
    [anon_sym_LPAREN] = ACTIONS(391),
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_LBRACE] = ACTIONS(391),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(391),
    [anon_sym_POUND] = ACTIONS(393),
    [anon_sym_POUND_LBRACE] = ACTIONS(391),
  },
  [159] = {
    [sym__anything] = STATE(87),
    [sym__literals] = STATE(87),
    [sym__collection_literals] = STATE(87),
    [sym_boolean] = STATE(87),
    [sym_number] = STATE(87),
    [sym__number] = STATE(31),
    [sym_character] = STATE(87),
    [sym__character] = STATE(32),
    [sym_string] = STATE(87),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(87),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(87),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(87),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(87),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(87),
    [sym_list] = STATE(87),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(87),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(87),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym__hash_map_kv_pair] = STATE(150),
    [sym__hash_map_key] = STATE(87),
    [sym_set] = STATE(87),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(87),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(87),
    [sym_anonymous_function] = STATE(87),
    [sym_shorthand_function] = STATE(87),
    [sym_defn] = STATE(87),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(87),
    [sym_unquote] = STATE(87),
    [sym_unquote_splice] = STATE(87),
    [sym_deref] = STATE(87),
    [aux_sym__hash_map_repeat1] = STATE(150),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(165),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(167),
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
    [anon_sym_RBRACE] = ACTIONS(835),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(171),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(173),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(175),
    [anon_sym_TILDE] = ACTIONS(177),
    [anon_sym_TILDE_AT] = ACTIONS(179),
    [sym_gensym] = ACTIONS(173),
    [anon_sym_AT] = ACTIONS(71),
  },
  [160] = {
    [anon_sym_LBRACE] = ACTIONS(837),
  },
  [161] = {
    [anon_sym_DASH_GT] = ACTIONS(839),
    [anon_sym_DASH_GT_GT] = ACTIONS(841),
    [anon_sym_as_DASH_GT] = ACTIONS(841),
    [anon_sym_some_DASH_GT] = ACTIONS(839),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(841),
    [anon_sym_cond_DASH_GT] = ACTIONS(839),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(841),
    [sym__symbol_chars] = ACTIONS(839),
    [anon_sym_LPAREN] = ACTIONS(841),
    [anon_sym_LBRACK] = ACTIONS(841),
    [anon_sym_LBRACE] = ACTIONS(841),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(841),
    [anon_sym_POUND] = ACTIONS(839),
    [anon_sym_POUND_LBRACE] = ACTIONS(841),
    [anon_sym_CARET] = ACTIONS(839),
    [anon_sym_CARET_COLON] = ACTIONS(841),
    [anon_sym_CARET_DQUOTE] = ACTIONS(841),
  },
  [162] = {
    [sym__hex_char] = ACTIONS(843),
  },
  [163] = {
    [ts_builtin_sym_end] = ACTIONS(845),
    [sym_nil] = ACTIONS(847),
    [sym_true] = ACTIONS(847),
    [sym_false] = ACTIONS(847),
    [sym_number_long] = ACTIONS(847),
    [sym_number_double] = ACTIONS(845),
    [sym_number_bigint] = ACTIONS(847),
    [sym_number_ratio] = ACTIONS(845),
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
    [anon_sym_AT] = ACTIONS(845),
  },
  [164] = {
    [ts_builtin_sym_end] = ACTIONS(849),
    [sym_nil] = ACTIONS(851),
    [sym_true] = ACTIONS(851),
    [sym_false] = ACTIONS(851),
    [sym_number_long] = ACTIONS(851),
    [sym_number_double] = ACTIONS(849),
    [sym_number_bigint] = ACTIONS(851),
    [sym_number_ratio] = ACTIONS(849),
    [anon_sym_BSLASH] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(849),
    [anon_sym_POUND_DQUOTE] = ACTIONS(849),
    [anon_sym_SQUOTE] = ACTIONS(849),
    [anon_sym_LPARENquote] = ACTIONS(849),
    [anon_sym_RPAREN] = ACTIONS(849),
    [anon_sym_COLON] = ACTIONS(851),
    [anon_sym_COLON_COLON] = ACTIONS(849),
    [anon_sym_DASH_GT] = ACTIONS(851),
    [anon_sym_DASH_GT_GT] = ACTIONS(849),
    [anon_sym_as_DASH_GT] = ACTIONS(849),
    [anon_sym_some_DASH_GT] = ACTIONS(851),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(849),
    [anon_sym_cond_DASH_GT] = ACTIONS(851),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(849),
    [sym__symbol_chars] = ACTIONS(851),
    [sym_member_access] = ACTIONS(849),
    [sym_field_access] = ACTIONS(849),
    [sym_new_class] = ACTIONS(849),
    [anon_sym_LPAREN] = ACTIONS(851),
    [anon_sym_LBRACK] = ACTIONS(849),
    [anon_sym_RBRACK] = ACTIONS(849),
    [anon_sym_LBRACE] = ACTIONS(849),
    [anon_sym_RBRACE] = ACTIONS(849),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(849),
    [anon_sym_POUND] = ACTIONS(851),
    [anon_sym_POUND_LBRACE] = ACTIONS(849),
    [anon_sym_SEMI] = ACTIONS(849),
    [anon_sym_POUND_BANG] = ACTIONS(849),
    [anon_sym_POUND_] = ACTIONS(849),
    [anon_sym_POUND_LPAREN] = ACTIONS(849),
    [sym_shorthand_function_arg] = ACTIONS(849),
    [anon_sym_CARET] = ACTIONS(851),
    [anon_sym_CARET_COLON] = ACTIONS(849),
    [anon_sym_CARET_DQUOTE] = ACTIONS(849),
    [anon_sym_BQUOTE] = ACTIONS(849),
    [anon_sym_TILDE] = ACTIONS(851),
    [anon_sym_TILDE_AT] = ACTIONS(849),
    [sym_gensym] = ACTIONS(849),
    [anon_sym_AT] = ACTIONS(849),
  },
  [165] = {
    [sym__symbol_chars] = ACTIONS(853),
  },
  [166] = {
    [anon_sym_RPAREN] = ACTIONS(855),
  },
  [167] = {
    [ts_builtin_sym_end] = ACTIONS(857),
    [sym_nil] = ACTIONS(859),
    [sym_true] = ACTIONS(859),
    [sym_false] = ACTIONS(859),
    [sym_number_long] = ACTIONS(859),
    [sym_number_double] = ACTIONS(857),
    [sym_number_bigint] = ACTIONS(859),
    [sym_number_ratio] = ACTIONS(857),
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
    [sym_member_access] = ACTIONS(857),
    [sym_field_access] = ACTIONS(857),
    [sym_new_class] = ACTIONS(857),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(857),
    [sym_shorthand_function_arg] = ACTIONS(857),
    [anon_sym_CARET] = ACTIONS(859),
    [anon_sym_CARET_COLON] = ACTIONS(857),
    [anon_sym_CARET_DQUOTE] = ACTIONS(857),
    [anon_sym_BQUOTE] = ACTIONS(857),
    [anon_sym_TILDE] = ACTIONS(859),
    [anon_sym_TILDE_AT] = ACTIONS(857),
    [sym_gensym] = ACTIONS(857),
    [anon_sym_AT] = ACTIONS(857),
  },
  [168] = {
    [anon_sym_RPAREN] = ACTIONS(861),
  },
  [169] = {
    [anon_sym_RPAREN] = ACTIONS(863),
  },
  [170] = {
    [sym__anything] = STATE(145),
    [sym__literals] = STATE(145),
    [sym__collection_literals] = STATE(145),
    [sym_boolean] = STATE(145),
    [sym_number] = STATE(145),
    [sym__number] = STATE(31),
    [sym_character] = STATE(145),
    [sym__character] = STATE(32),
    [sym_string] = STATE(145),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(145),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(145),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(145),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(145),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(145),
    [sym_list] = STATE(145),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(145),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(145),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym_set] = STATE(145),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(145),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(145),
    [sym_anonymous_function] = STATE(145),
    [sym_shorthand_function] = STATE(145),
    [sym_defn] = STATE(145),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(145),
    [sym_unquote] = STATE(145),
    [sym_unquote_splice] = STATE(145),
    [sym_deref] = STATE(145),
    [aux_sym_program_repeat1] = STATE(145),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(365),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(129),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(865),
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
    [anon_sym_POUND_] = ACTIONS(133),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(369),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(145),
    [anon_sym_TILDE_AT] = ACTIONS(147),
    [sym_gensym] = ACTIONS(369),
    [anon_sym_AT] = ACTIONS(71),
  },
  [171] = {
    [aux_sym__multi_arity_fn_repeat1] = STATE(171),
    [anon_sym_RPAREN] = ACTIONS(867),
    [anon_sym_LPAREN] = ACTIONS(869),
  },
  [172] = {
    [aux_sym__string_repeat1] = STATE(191),
    [anon_sym_DQUOTE] = ACTIONS(872),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(874),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(874),
  },
  [173] = {
    [anon_sym_LPAREN] = ACTIONS(876),
    [anon_sym_LBRACK] = ACTIONS(876),
    [anon_sym_LBRACE] = ACTIONS(876),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(876),
    [anon_sym_POUND] = ACTIONS(878),
  },
  [174] = {
    [anon_sym_LPAREN] = ACTIONS(251),
    [anon_sym_LBRACK] = ACTIONS(251),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(251),
    [anon_sym_POUND] = ACTIONS(253),
  },
  [175] = {
    [anon_sym_LPAREN] = ACTIONS(880),
    [anon_sym_LBRACK] = ACTIONS(880),
  },
  [176] = {
    [anon_sym_RPAREN] = ACTIONS(882),
  },
  [177] = {
    [sym_vector] = STATE(136),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(175),
    [sym__hash_map] = STATE(109),
    [sym_namespace_map] = STATE(109),
    [sym__after_the_fn_name] = STATE(193),
    [sym__single_arity_fn] = STATE(193),
    [sym__multi_arity_fn] = STATE(193),
    [sym_params] = STATE(139),
    [sym_attr_map] = STATE(194),
    [aux_sym__multi_arity_fn_repeat1] = STATE(140),
    [anon_sym_LPAREN] = ACTIONS(363),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(217),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(219),
    [anon_sym_POUND] = ACTIONS(221),
  },
  [178] = {
    [sym_vector] = STATE(136),
    [sym__vector] = STATE(39),
    [sym__after_the_fn_name] = STATE(193),
    [sym__single_arity_fn] = STATE(193),
    [sym__multi_arity_fn] = STATE(193),
    [sym_params] = STATE(139),
    [aux_sym__multi_arity_fn_repeat1] = STATE(140),
    [anon_sym_LPAREN] = ACTIONS(363),
    [anon_sym_LBRACK] = ACTIONS(39),
  },
  [179] = {
    [sym_string] = STATE(173),
    [sym__string] = STATE(174),
    [sym_vector] = STATE(136),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(175),
    [sym__hash_map] = STATE(109),
    [sym_namespace_map] = STATE(109),
    [sym__after_the_fn_name] = STATE(193),
    [sym__single_arity_fn] = STATE(193),
    [sym__multi_arity_fn] = STATE(193),
    [sym_params] = STATE(139),
    [sym_docstring] = STATE(195),
    [sym_attr_map] = STATE(194),
    [aux_sym__multi_arity_fn_repeat1] = STATE(140),
    [anon_sym_DQUOTE] = ACTIONS(637),
    [anon_sym_LPAREN] = ACTIONS(363),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(217),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(219),
    [anon_sym_POUND] = ACTIONS(221),
  },
  [180] = {
    [sym_metadata_shorthand] = STATE(180),
    [aux_sym_metadata_repeat1] = STATE(180),
    [anon_sym_DASH_GT] = ACTIONS(566),
    [anon_sym_DASH_GT_GT] = ACTIONS(564),
    [anon_sym_as_DASH_GT] = ACTIONS(564),
    [anon_sym_some_DASH_GT] = ACTIONS(566),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(564),
    [anon_sym_cond_DASH_GT] = ACTIONS(566),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(564),
    [sym__symbol_chars] = ACTIONS(566),
    [anon_sym_CARET] = ACTIONS(568),
    [anon_sym_CARET_COLON] = ACTIONS(571),
    [anon_sym_CARET_DQUOTE] = ACTIONS(574),
  },
  [181] = {
    [ts_builtin_sym_end] = ACTIONS(884),
    [sym_nil] = ACTIONS(886),
    [sym_true] = ACTIONS(886),
    [sym_false] = ACTIONS(886),
    [sym_number_long] = ACTIONS(886),
    [sym_number_double] = ACTIONS(884),
    [sym_number_bigint] = ACTIONS(886),
    [sym_number_ratio] = ACTIONS(884),
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
    [anon_sym_AT] = ACTIONS(884),
  },
  [182] = {
    [sym__anything] = STATE(87),
    [sym__literals] = STATE(87),
    [sym__collection_literals] = STATE(87),
    [sym_boolean] = STATE(87),
    [sym_number] = STATE(87),
    [sym__number] = STATE(31),
    [sym_character] = STATE(87),
    [sym__character] = STATE(32),
    [sym_string] = STATE(87),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(87),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(87),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(87),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(87),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(87),
    [sym_list] = STATE(87),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(87),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(87),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym__hash_map_kv_pair] = STATE(150),
    [sym__hash_map_key] = STATE(87),
    [sym_set] = STATE(87),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(87),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(87),
    [sym_anonymous_function] = STATE(87),
    [sym_shorthand_function] = STATE(87),
    [sym_defn] = STATE(87),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(87),
    [sym_unquote] = STATE(87),
    [sym_unquote_splice] = STATE(87),
    [sym_deref] = STATE(87),
    [aux_sym__hash_map_repeat1] = STATE(150),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(165),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(167),
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
    [anon_sym_RBRACE] = ACTIONS(888),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(171),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(173),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(175),
    [anon_sym_TILDE] = ACTIONS(177),
    [anon_sym_TILDE_AT] = ACTIONS(179),
    [sym_gensym] = ACTIONS(173),
    [anon_sym_AT] = ACTIONS(71),
  },
  [183] = {
    [anon_sym_DASH_GT] = ACTIONS(695),
    [anon_sym_DASH_GT_GT] = ACTIONS(693),
    [anon_sym_as_DASH_GT] = ACTIONS(693),
    [anon_sym_some_DASH_GT] = ACTIONS(695),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(693),
    [anon_sym_cond_DASH_GT] = ACTIONS(695),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(693),
    [sym__symbol_chars] = ACTIONS(695),
    [anon_sym_LPAREN] = ACTIONS(693),
    [anon_sym_LBRACK] = ACTIONS(693),
    [anon_sym_LBRACE] = ACTIONS(693),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(693),
    [anon_sym_POUND] = ACTIONS(695),
    [anon_sym_POUND_LBRACE] = ACTIONS(693),
  },
  [184] = {
    [anon_sym_DASH_GT] = ACTIONS(800),
    [anon_sym_DASH_GT_GT] = ACTIONS(798),
    [anon_sym_as_DASH_GT] = ACTIONS(798),
    [anon_sym_some_DASH_GT] = ACTIONS(800),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(798),
    [anon_sym_cond_DASH_GT] = ACTIONS(800),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(798),
    [sym__symbol_chars] = ACTIONS(800),
    [anon_sym_LPAREN] = ACTIONS(798),
    [anon_sym_LBRACK] = ACTIONS(798),
    [anon_sym_LBRACE] = ACTIONS(798),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(798),
    [anon_sym_POUND] = ACTIONS(800),
    [anon_sym_POUND_LBRACE] = ACTIONS(798),
  },
  [185] = {
    [sym__anything] = STATE(87),
    [sym__literals] = STATE(87),
    [sym__collection_literals] = STATE(87),
    [sym_boolean] = STATE(87),
    [sym_number] = STATE(87),
    [sym__number] = STATE(31),
    [sym_character] = STATE(87),
    [sym__character] = STATE(32),
    [sym_string] = STATE(87),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(87),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(87),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(87),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(87),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(87),
    [sym_list] = STATE(87),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(87),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(87),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym__hash_map_kv_pair] = STATE(198),
    [sym__hash_map_key] = STATE(87),
    [sym_set] = STATE(87),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(87),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(87),
    [sym_anonymous_function] = STATE(87),
    [sym_shorthand_function] = STATE(87),
    [sym_defn] = STATE(87),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(87),
    [sym_unquote] = STATE(87),
    [sym_unquote_splice] = STATE(87),
    [sym_deref] = STATE(87),
    [aux_sym__hash_map_repeat1] = STATE(198),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(165),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(167),
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
    [anon_sym_RBRACE] = ACTIONS(890),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(171),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(173),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(175),
    [anon_sym_TILDE] = ACTIONS(177),
    [anon_sym_TILDE_AT] = ACTIONS(179),
    [sym_gensym] = ACTIONS(173),
    [anon_sym_AT] = ACTIONS(71),
  },
  [186] = {
    [sym__hex_char] = ACTIONS(892),
  },
  [187] = {
    [anon_sym_DQUOTE] = ACTIONS(607),
    [anon_sym_LPAREN] = ACTIONS(607),
    [anon_sym_LBRACK] = ACTIONS(607),
    [anon_sym_LBRACE] = ACTIONS(607),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(607),
    [anon_sym_POUND] = ACTIONS(609),
  },
  [188] = {
    [anon_sym_RPAREN] = ACTIONS(894),
    [anon_sym_LPAREN] = ACTIONS(894),
  },
  [189] = {
    [ts_builtin_sym_end] = ACTIONS(896),
    [sym_nil] = ACTIONS(898),
    [sym_true] = ACTIONS(898),
    [sym_false] = ACTIONS(898),
    [sym_number_long] = ACTIONS(898),
    [sym_number_double] = ACTIONS(896),
    [sym_number_bigint] = ACTIONS(898),
    [sym_number_ratio] = ACTIONS(896),
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
    [anon_sym_AT] = ACTIONS(896),
  },
  [190] = {
    [anon_sym_LPAREN] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(313),
    [anon_sym_LBRACE] = ACTIONS(313),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(313),
    [anon_sym_POUND] = ACTIONS(315),
  },
  [191] = {
    [aux_sym__string_repeat1] = STATE(123),
    [anon_sym_DQUOTE] = ACTIONS(900),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(319),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(319),
  },
  [192] = {
    [ts_builtin_sym_end] = ACTIONS(902),
    [sym_nil] = ACTIONS(904),
    [sym_true] = ACTIONS(904),
    [sym_false] = ACTIONS(904),
    [sym_number_long] = ACTIONS(904),
    [sym_number_double] = ACTIONS(902),
    [sym_number_bigint] = ACTIONS(904),
    [sym_number_ratio] = ACTIONS(902),
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
    [anon_sym_AT] = ACTIONS(902),
  },
  [193] = {
    [anon_sym_RPAREN] = ACTIONS(906),
  },
  [194] = {
    [sym_vector] = STATE(136),
    [sym__vector] = STATE(39),
    [sym__after_the_fn_name] = STATE(202),
    [sym__single_arity_fn] = STATE(202),
    [sym__multi_arity_fn] = STATE(202),
    [sym_params] = STATE(139),
    [aux_sym__multi_arity_fn_repeat1] = STATE(140),
    [anon_sym_LPAREN] = ACTIONS(363),
    [anon_sym_LBRACK] = ACTIONS(39),
  },
  [195] = {
    [sym_vector] = STATE(136),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(175),
    [sym__hash_map] = STATE(109),
    [sym_namespace_map] = STATE(109),
    [sym__after_the_fn_name] = STATE(202),
    [sym__single_arity_fn] = STATE(202),
    [sym__multi_arity_fn] = STATE(202),
    [sym_params] = STATE(139),
    [sym_attr_map] = STATE(203),
    [aux_sym__multi_arity_fn_repeat1] = STATE(140),
    [anon_sym_LPAREN] = ACTIONS(363),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(217),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(219),
    [anon_sym_POUND] = ACTIONS(221),
  },
  [196] = {
    [ts_builtin_sym_end] = ACTIONS(908),
    [sym_nil] = ACTIONS(910),
    [sym_true] = ACTIONS(910),
    [sym_false] = ACTIONS(910),
    [sym_number_long] = ACTIONS(910),
    [sym_number_double] = ACTIONS(908),
    [sym_number_bigint] = ACTIONS(910),
    [sym_number_ratio] = ACTIONS(908),
    [anon_sym_BSLASH] = ACTIONS(908),
    [anon_sym_DQUOTE] = ACTIONS(908),
    [anon_sym_POUND_DQUOTE] = ACTIONS(908),
    [anon_sym_SQUOTE] = ACTIONS(908),
    [anon_sym_LPARENquote] = ACTIONS(908),
    [anon_sym_RPAREN] = ACTIONS(908),
    [anon_sym_COLON] = ACTIONS(910),
    [anon_sym_COLON_COLON] = ACTIONS(908),
    [anon_sym_DASH_GT] = ACTIONS(910),
    [anon_sym_DASH_GT_GT] = ACTIONS(908),
    [anon_sym_as_DASH_GT] = ACTIONS(908),
    [anon_sym_some_DASH_GT] = ACTIONS(910),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(908),
    [anon_sym_cond_DASH_GT] = ACTIONS(910),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(908),
    [sym__symbol_chars] = ACTIONS(910),
    [sym_member_access] = ACTIONS(908),
    [sym_field_access] = ACTIONS(908),
    [sym_new_class] = ACTIONS(908),
    [anon_sym_LPAREN] = ACTIONS(910),
    [anon_sym_LBRACK] = ACTIONS(908),
    [anon_sym_RBRACK] = ACTIONS(908),
    [anon_sym_LBRACE] = ACTIONS(908),
    [anon_sym_RBRACE] = ACTIONS(908),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(908),
    [anon_sym_POUND] = ACTIONS(910),
    [anon_sym_POUND_LBRACE] = ACTIONS(908),
    [anon_sym_SEMI] = ACTIONS(908),
    [anon_sym_POUND_BANG] = ACTIONS(908),
    [anon_sym_POUND_] = ACTIONS(908),
    [anon_sym_POUND_LPAREN] = ACTIONS(908),
    [sym_shorthand_function_arg] = ACTIONS(908),
    [anon_sym_CARET] = ACTIONS(910),
    [anon_sym_CARET_COLON] = ACTIONS(908),
    [anon_sym_CARET_DQUOTE] = ACTIONS(908),
    [anon_sym_BQUOTE] = ACTIONS(908),
    [anon_sym_TILDE] = ACTIONS(910),
    [anon_sym_TILDE_AT] = ACTIONS(908),
    [sym_gensym] = ACTIONS(908),
    [anon_sym_AT] = ACTIONS(908),
  },
  [197] = {
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
  [198] = {
    [sym__anything] = STATE(87),
    [sym__literals] = STATE(87),
    [sym__collection_literals] = STATE(87),
    [sym_boolean] = STATE(87),
    [sym_number] = STATE(87),
    [sym__number] = STATE(31),
    [sym_character] = STATE(87),
    [sym__character] = STATE(32),
    [sym_string] = STATE(87),
    [sym__string] = STATE(33),
    [sym_regex] = STATE(87),
    [sym__regex] = STATE(34),
    [sym_quote] = STATE(87),
    [sym__quote] = STATE(35),
    [sym_keyword] = STATE(87),
    [sym__keyword] = STATE(36),
    [sym__unqualified_keyword] = STATE(36),
    [sym_qualified_keyword] = STATE(36),
    [sym_symbol] = STATE(87),
    [sym__symbol] = STATE(37),
    [sym_threading_macro] = STATE(37),
    [sym_qualified_symbol] = STATE(37),
    [sym_interop] = STATE(87),
    [sym_list] = STATE(87),
    [sym__list] = STATE(38),
    [sym_vector] = STATE(87),
    [sym__vector] = STATE(39),
    [sym_hash_map] = STATE(87),
    [sym__hash_map] = STATE(40),
    [sym_namespace_map] = STATE(40),
    [sym__hash_map_kv_pair] = STATE(150),
    [sym__hash_map_key] = STATE(87),
    [sym_set] = STATE(87),
    [sym__set] = STATE(41),
    [sym_comment] = STATE(87),
    [sym_semicolon] = STATE(42),
    [sym_shebang_line] = STATE(42),
    [sym_ignore_form] = STATE(42),
    [sym_comment_macro] = STATE(42),
    [sym__functions] = STATE(87),
    [sym_anonymous_function] = STATE(87),
    [sym_shorthand_function] = STATE(87),
    [sym_defn] = STATE(87),
    [sym_metadata] = STATE(43),
    [sym__metadata_map] = STATE(44),
    [sym_metadata_shorthand] = STATE(46),
    [sym_syntax_quote] = STATE(87),
    [sym_unquote] = STATE(87),
    [sym_unquote_splice] = STATE(87),
    [sym_deref] = STATE(87),
    [aux_sym__hash_map_repeat1] = STATE(150),
    [aux_sym_metadata_repeat1] = STATE(46),
    [sym_nil] = ACTIONS(165),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(167),
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
    [anon_sym_RBRACE] = ACTIONS(912),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(171),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(173),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(175),
    [anon_sym_TILDE] = ACTIONS(177),
    [anon_sym_TILDE_AT] = ACTIONS(179),
    [sym_gensym] = ACTIONS(173),
    [anon_sym_AT] = ACTIONS(71),
  },
  [199] = {
    [ts_builtin_sym_end] = ACTIONS(914),
    [sym_nil] = ACTIONS(916),
    [sym_true] = ACTIONS(916),
    [sym_false] = ACTIONS(916),
    [sym_number_long] = ACTIONS(916),
    [sym_number_double] = ACTIONS(914),
    [sym_number_bigint] = ACTIONS(916),
    [sym_number_ratio] = ACTIONS(914),
    [anon_sym_BSLASH] = ACTIONS(914),
    [anon_sym_DQUOTE] = ACTIONS(914),
    [anon_sym_POUND_DQUOTE] = ACTIONS(914),
    [anon_sym_SQUOTE] = ACTIONS(914),
    [anon_sym_LPARENquote] = ACTIONS(914),
    [anon_sym_RPAREN] = ACTIONS(914),
    [anon_sym_COLON] = ACTIONS(916),
    [anon_sym_COLON_COLON] = ACTIONS(914),
    [anon_sym_DASH_GT] = ACTIONS(916),
    [anon_sym_DASH_GT_GT] = ACTIONS(914),
    [anon_sym_as_DASH_GT] = ACTIONS(914),
    [anon_sym_some_DASH_GT] = ACTIONS(916),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(914),
    [anon_sym_cond_DASH_GT] = ACTIONS(916),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(914),
    [sym__symbol_chars] = ACTIONS(916),
    [sym_member_access] = ACTIONS(914),
    [sym_field_access] = ACTIONS(914),
    [sym_new_class] = ACTIONS(914),
    [anon_sym_LPAREN] = ACTIONS(916),
    [anon_sym_LBRACK] = ACTIONS(914),
    [anon_sym_RBRACK] = ACTIONS(914),
    [anon_sym_LBRACE] = ACTIONS(914),
    [anon_sym_RBRACE] = ACTIONS(914),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(914),
    [anon_sym_POUND] = ACTIONS(916),
    [anon_sym_POUND_LBRACE] = ACTIONS(914),
    [anon_sym_SEMI] = ACTIONS(914),
    [anon_sym_POUND_BANG] = ACTIONS(914),
    [anon_sym_POUND_] = ACTIONS(914),
    [anon_sym_POUND_LPAREN] = ACTIONS(914),
    [sym_shorthand_function_arg] = ACTIONS(914),
    [anon_sym_CARET] = ACTIONS(916),
    [anon_sym_CARET_COLON] = ACTIONS(914),
    [anon_sym_CARET_DQUOTE] = ACTIONS(914),
    [anon_sym_BQUOTE] = ACTIONS(914),
    [anon_sym_TILDE] = ACTIONS(916),
    [anon_sym_TILDE_AT] = ACTIONS(914),
    [sym_gensym] = ACTIONS(914),
    [anon_sym_AT] = ACTIONS(914),
  },
  [200] = {
    [anon_sym_LPAREN] = ACTIONS(583),
    [anon_sym_LBRACK] = ACTIONS(583),
    [anon_sym_LBRACE] = ACTIONS(583),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(583),
    [anon_sym_POUND] = ACTIONS(585),
  },
  [201] = {
    [ts_builtin_sym_end] = ACTIONS(918),
    [sym_nil] = ACTIONS(920),
    [sym_true] = ACTIONS(920),
    [sym_false] = ACTIONS(920),
    [sym_number_long] = ACTIONS(920),
    [sym_number_double] = ACTIONS(918),
    [sym_number_bigint] = ACTIONS(920),
    [sym_number_ratio] = ACTIONS(918),
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
    [anon_sym_AT] = ACTIONS(918),
  },
  [202] = {
    [anon_sym_RPAREN] = ACTIONS(922),
  },
  [203] = {
    [sym_vector] = STATE(136),
    [sym__vector] = STATE(39),
    [sym__after_the_fn_name] = STATE(206),
    [sym__single_arity_fn] = STATE(206),
    [sym__multi_arity_fn] = STATE(206),
    [sym_params] = STATE(139),
    [aux_sym__multi_arity_fn_repeat1] = STATE(140),
    [anon_sym_LPAREN] = ACTIONS(363),
    [anon_sym_LBRACK] = ACTIONS(39),
  },
  [204] = {
    [anon_sym_DASH_GT] = ACTIONS(910),
    [anon_sym_DASH_GT_GT] = ACTIONS(908),
    [anon_sym_as_DASH_GT] = ACTIONS(908),
    [anon_sym_some_DASH_GT] = ACTIONS(910),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(908),
    [anon_sym_cond_DASH_GT] = ACTIONS(910),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(908),
    [sym__symbol_chars] = ACTIONS(910),
    [anon_sym_LPAREN] = ACTIONS(908),
    [anon_sym_LBRACK] = ACTIONS(908),
    [anon_sym_LBRACE] = ACTIONS(908),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(908),
    [anon_sym_POUND] = ACTIONS(910),
    [anon_sym_POUND_LBRACE] = ACTIONS(908),
  },
  [205] = {
    [ts_builtin_sym_end] = ACTIONS(924),
    [sym_nil] = ACTIONS(926),
    [sym_true] = ACTIONS(926),
    [sym_false] = ACTIONS(926),
    [sym_number_long] = ACTIONS(926),
    [sym_number_double] = ACTIONS(924),
    [sym_number_bigint] = ACTIONS(926),
    [sym_number_ratio] = ACTIONS(924),
    [anon_sym_BSLASH] = ACTIONS(924),
    [anon_sym_DQUOTE] = ACTIONS(924),
    [anon_sym_POUND_DQUOTE] = ACTIONS(924),
    [anon_sym_SQUOTE] = ACTIONS(924),
    [anon_sym_LPARENquote] = ACTIONS(924),
    [anon_sym_RPAREN] = ACTIONS(924),
    [anon_sym_COLON] = ACTIONS(926),
    [anon_sym_COLON_COLON] = ACTIONS(924),
    [anon_sym_DASH_GT] = ACTIONS(926),
    [anon_sym_DASH_GT_GT] = ACTIONS(924),
    [anon_sym_as_DASH_GT] = ACTIONS(924),
    [anon_sym_some_DASH_GT] = ACTIONS(926),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(924),
    [anon_sym_cond_DASH_GT] = ACTIONS(926),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(924),
    [sym__symbol_chars] = ACTIONS(926),
    [sym_member_access] = ACTIONS(924),
    [sym_field_access] = ACTIONS(924),
    [sym_new_class] = ACTIONS(924),
    [anon_sym_LPAREN] = ACTIONS(926),
    [anon_sym_LBRACK] = ACTIONS(924),
    [anon_sym_RBRACK] = ACTIONS(924),
    [anon_sym_LBRACE] = ACTIONS(924),
    [anon_sym_RBRACE] = ACTIONS(924),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(924),
    [anon_sym_POUND] = ACTIONS(926),
    [anon_sym_POUND_LBRACE] = ACTIONS(924),
    [anon_sym_SEMI] = ACTIONS(924),
    [anon_sym_POUND_BANG] = ACTIONS(924),
    [anon_sym_POUND_] = ACTIONS(924),
    [anon_sym_POUND_LPAREN] = ACTIONS(924),
    [sym_shorthand_function_arg] = ACTIONS(924),
    [anon_sym_CARET] = ACTIONS(926),
    [anon_sym_CARET_COLON] = ACTIONS(924),
    [anon_sym_CARET_DQUOTE] = ACTIONS(924),
    [anon_sym_BQUOTE] = ACTIONS(924),
    [anon_sym_TILDE] = ACTIONS(926),
    [anon_sym_TILDE_AT] = ACTIONS(924),
    [sym_gensym] = ACTIONS(924),
    [anon_sym_AT] = ACTIONS(924),
  },
  [206] = {
    [anon_sym_RPAREN] = ACTIONS(928),
  },
  [207] = {
    [ts_builtin_sym_end] = ACTIONS(930),
    [sym_nil] = ACTIONS(932),
    [sym_true] = ACTIONS(932),
    [sym_false] = ACTIONS(932),
    [sym_number_long] = ACTIONS(932),
    [sym_number_double] = ACTIONS(930),
    [sym_number_bigint] = ACTIONS(932),
    [sym_number_ratio] = ACTIONS(930),
    [anon_sym_BSLASH] = ACTIONS(930),
    [anon_sym_DQUOTE] = ACTIONS(930),
    [anon_sym_POUND_DQUOTE] = ACTIONS(930),
    [anon_sym_SQUOTE] = ACTIONS(930),
    [anon_sym_LPARENquote] = ACTIONS(930),
    [anon_sym_RPAREN] = ACTIONS(930),
    [anon_sym_COLON] = ACTIONS(932),
    [anon_sym_COLON_COLON] = ACTIONS(930),
    [anon_sym_DASH_GT] = ACTIONS(932),
    [anon_sym_DASH_GT_GT] = ACTIONS(930),
    [anon_sym_as_DASH_GT] = ACTIONS(930),
    [anon_sym_some_DASH_GT] = ACTIONS(932),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(930),
    [anon_sym_cond_DASH_GT] = ACTIONS(932),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(930),
    [sym__symbol_chars] = ACTIONS(932),
    [sym_member_access] = ACTIONS(930),
    [sym_field_access] = ACTIONS(930),
    [sym_new_class] = ACTIONS(930),
    [anon_sym_LPAREN] = ACTIONS(932),
    [anon_sym_LBRACK] = ACTIONS(930),
    [anon_sym_RBRACK] = ACTIONS(930),
    [anon_sym_LBRACE] = ACTIONS(930),
    [anon_sym_RBRACE] = ACTIONS(930),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(930),
    [anon_sym_POUND] = ACTIONS(932),
    [anon_sym_POUND_LBRACE] = ACTIONS(930),
    [anon_sym_SEMI] = ACTIONS(930),
    [anon_sym_POUND_BANG] = ACTIONS(930),
    [anon_sym_POUND_] = ACTIONS(930),
    [anon_sym_POUND_LPAREN] = ACTIONS(930),
    [sym_shorthand_function_arg] = ACTIONS(930),
    [anon_sym_CARET] = ACTIONS(932),
    [anon_sym_CARET_COLON] = ACTIONS(930),
    [anon_sym_CARET_DQUOTE] = ACTIONS(930),
    [anon_sym_BQUOTE] = ACTIONS(930),
    [anon_sym_TILDE] = ACTIONS(932),
    [anon_sym_TILDE_AT] = ACTIONS(930),
    [sym_gensym] = ACTIONS(930),
    [anon_sym_AT] = ACTIONS(930),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(45),
  [9] = {.count = 1, .reusable = false}, SHIFT(2),
  [11] = {.count = 1, .reusable = false}, SHIFT(31),
  [13] = {.count = 1, .reusable = true}, SHIFT(31),
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
  [57] = {.count = 1, .reusable = true}, SHIFT(45),
  [59] = {.count = 1, .reusable = false}, SHIFT(23),
  [61] = {.count = 1, .reusable = true}, SHIFT(24),
  [63] = {.count = 1, .reusable = true}, SHIFT(25),
  [65] = {.count = 1, .reusable = true}, SHIFT(26),
  [67] = {.count = 1, .reusable = false}, SHIFT(27),
  [69] = {.count = 1, .reusable = true}, SHIFT(28),
  [71] = {.count = 1, .reusable = true}, SHIFT(29),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [75] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 1),
  [77] = {.count = 1, .reusable = false}, SHIFT(47),
  [79] = {.count = 1, .reusable = false}, SHIFT(48),
  [81] = {.count = 1, .reusable = false}, SHIFT(49),
  [83] = {.count = 1, .reusable = false}, SHIFT(50),
  [85] = {.count = 1, .reusable = false}, SHIFT(51),
  [87] = {.count = 1, .reusable = false}, SHIFT(52),
  [89] = {.count = 1, .reusable = false}, SHIFT(53),
  [91] = {.count = 1, .reusable = false}, SHIFT(54),
  [93] = {.count = 1, .reusable = true}, SHIFT(54),
  [95] = {.count = 1, .reusable = false}, SHIFT(60),
  [97] = {.count = 1, .reusable = true}, SHIFT(55),
  [99] = {.count = 1, .reusable = true}, SHIFT(56),
  [101] = {.count = 1, .reusable = true}, SHIFT(60),
  [103] = {.count = 1, .reusable = true}, SHIFT(57),
  [105] = {.count = 1, .reusable = false}, SHIFT(58),
  [107] = {.count = 1, .reusable = true}, SHIFT(59),
  [109] = {.count = 1, .reusable = true}, SHIFT(61),
  [111] = {.count = 1, .reusable = true}, SHIFT(62),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_threading_macro, 1),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_threading_macro, 1),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym__symbol, 1),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym__symbol, 1),
  [121] = {.count = 1, .reusable = true}, SHIFT(63),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_interop, 1),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym_interop, 1),
  [127] = {.count = 1, .reusable = false}, SHIFT(73),
  [129] = {.count = 1, .reusable = true}, SHIFT(64),
  [131] = {.count = 1, .reusable = true}, SHIFT(65),
  [133] = {.count = 1, .reusable = true}, SHIFT(66),
  [135] = {.count = 1, .reusable = false}, SHIFT(67),
  [137] = {.count = 1, .reusable = false}, SHIFT(68),
  [139] = {.count = 1, .reusable = true}, SHIFT(73),
  [141] = {.count = 1, .reusable = false}, SHIFT(69),
  [143] = {.count = 1, .reusable = true}, SHIFT(70),
  [145] = {.count = 1, .reusable = false}, SHIFT(71),
  [147] = {.count = 1, .reusable = true}, SHIFT(72),
  [149] = {.count = 1, .reusable = false}, SHIFT(80),
  [151] = {.count = 1, .reusable = true}, SHIFT(74),
  [153] = {.count = 1, .reusable = true}, SHIFT(75),
  [155] = {.count = 1, .reusable = true}, SHIFT(76),
  [157] = {.count = 1, .reusable = true}, SHIFT(80),
  [159] = {.count = 1, .reusable = true}, SHIFT(77),
  [161] = {.count = 1, .reusable = false}, SHIFT(78),
  [163] = {.count = 1, .reusable = true}, SHIFT(79),
  [165] = {.count = 1, .reusable = false}, SHIFT(87),
  [167] = {.count = 1, .reusable = true}, SHIFT(81),
  [169] = {.count = 1, .reusable = true}, SHIFT(82),
  [171] = {.count = 1, .reusable = true}, SHIFT(83),
  [173] = {.count = 1, .reusable = true}, SHIFT(87),
  [175] = {.count = 1, .reusable = true}, SHIFT(84),
  [177] = {.count = 1, .reusable = false}, SHIFT(85),
  [179] = {.count = 1, .reusable = true}, SHIFT(86),
  [181] = {.count = 1, .reusable = true}, SHIFT(89),
  [183] = {.count = 1, .reusable = true}, SHIFT(91),
  [185] = {.count = 1, .reusable = false}, SHIFT(98),
  [187] = {.count = 1, .reusable = true}, SHIFT(92),
  [189] = {.count = 1, .reusable = true}, SHIFT(93),
  [191] = {.count = 1, .reusable = true}, SHIFT(94),
  [193] = {.count = 1, .reusable = true}, SHIFT(98),
  [195] = {.count = 1, .reusable = true}, SHIFT(95),
  [197] = {.count = 1, .reusable = false}, SHIFT(96),
  [199] = {.count = 1, .reusable = true}, SHIFT(97),
  [201] = {.count = 1, .reusable = false}, SHIFT(99),
  [203] = {.count = 1, .reusable = false}, SHIFT(100),
  [205] = {.count = 1, .reusable = false}, SHIFT(101),
  [207] = {.count = 1, .reusable = true}, SHIFT(101),
  [209] = {.count = 1, .reusable = false}, SHIFT(103),
  [211] = {.count = 1, .reusable = true}, SHIFT(102),
  [213] = {.count = 1, .reusable = true}, SHIFT(103),
  [215] = {.count = 1, .reusable = true}, SHIFT(104),
  [217] = {.count = 1, .reusable = true}, SHIFT(105),
  [219] = {.count = 1, .reusable = true}, SHIFT(106),
  [221] = {.count = 1, .reusable = false}, SHIFT(107),
  [223] = {.count = 1, .reusable = false}, SHIFT(104),
  [225] = {.count = 1, .reusable = false}, SHIFT(110),
  [227] = {.count = 1, .reusable = false}, SHIFT(111),
  [229] = {.count = 1, .reusable = true}, SHIFT(111),
  [231] = {.count = 1, .reusable = false}, SHIFT(112),
  [233] = {.count = 1, .reusable = true}, SHIFT(112),
  [235] = {.count = 1, .reusable = false}, SHIFT(113),
  [237] = {.count = 1, .reusable = true}, SHIFT(113),
  [239] = {.count = 1, .reusable = true}, SHIFT(114),
  [241] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_number, 1),
  [245] = {.count = 1, .reusable = false}, REDUCE(sym_number, 1),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_character, 1),
  [249] = {.count = 1, .reusable = false}, REDUCE(sym_character, 1),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [253] = {.count = 1, .reusable = false}, REDUCE(sym_string, 1),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_regex, 1),
  [257] = {.count = 1, .reusable = false}, REDUCE(sym_regex, 1),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym_quote, 1),
  [261] = {.count = 1, .reusable = false}, REDUCE(sym_quote, 1),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_keyword, 1),
  [265] = {.count = 1, .reusable = false}, REDUCE(sym_keyword, 1),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_symbol, 1),
  [269] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 1),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym_list, 1),
  [273] = {.count = 1, .reusable = false}, REDUCE(sym_list, 1),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym_vector, 1),
  [277] = {.count = 1, .reusable = false}, REDUCE(sym_vector, 1),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map, 1),
  [281] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map, 1),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym_set, 1),
  [285] = {.count = 1, .reusable = false}, REDUCE(sym_set, 1),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [289] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 1),
  [291] = {.count = 1, .reusable = false}, REDUCE(sym_metadata, 1),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_metadata, 1),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [297] = {.count = 1, .reusable = false}, SHIFT(117),
  [299] = {.count = 1, .reusable = true}, SHIFT(117),
  [301] = {.count = 1, .reusable = false}, SHIFT(118),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym__character, 2),
  [305] = {.count = 1, .reusable = false}, REDUCE(sym__character, 2),
  [307] = {.count = 1, .reusable = true}, SHIFT(120),
  [309] = {.count = 1, .reusable = true}, SHIFT(121),
  [311] = {.count = 1, .reusable = false}, SHIFT(121),
  [313] = {.count = 1, .reusable = true}, REDUCE(sym__string, 2),
  [315] = {.count = 1, .reusable = false}, REDUCE(sym__string, 2),
  [317] = {.count = 1, .reusable = false}, SHIFT(122),
  [319] = {.count = 1, .reusable = false}, SHIFT(123),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym__regex, 2),
  [323] = {.count = 1, .reusable = false}, REDUCE(sym__regex, 2),
  [325] = {.count = 1, .reusable = false}, SHIFT(124),
  [327] = {.count = 1, .reusable = false}, SHIFT(125),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym__quote, 2),
  [331] = {.count = 1, .reusable = false}, REDUCE(sym__quote, 2),
  [333] = {.count = 1, .reusable = true}, SHIFT(126),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym__unqualified_keyword, 2),
  [337] = {.count = 1, .reusable = false}, REDUCE(sym__unqualified_keyword, 2),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_keyword, 2),
  [341] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_keyword, 2),
  [343] = {.count = 1, .reusable = true}, SHIFT(127),
  [345] = {.count = 1, .reusable = true}, SHIFT(128),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym__list, 2),
  [349] = {.count = 1, .reusable = false}, REDUCE(sym__list, 2),
  [351] = {.count = 1, .reusable = false}, SHIFT(130),
  [353] = {.count = 1, .reusable = true}, SHIFT(129),
  [355] = {.count = 1, .reusable = true}, SHIFT(130),
  [357] = {.count = 1, .reusable = false}, SHIFT(131),
  [359] = {.count = 1, .reusable = true}, SHIFT(131),
  [361] = {.count = 1, .reusable = false}, SHIFT(132),
  [363] = {.count = 1, .reusable = true}, SHIFT(133),
  [365] = {.count = 1, .reusable = false}, SHIFT(145),
  [367] = {.count = 1, .reusable = true}, SHIFT(144),
  [369] = {.count = 1, .reusable = true}, SHIFT(145),
  [371] = {.count = 1, .reusable = true}, REDUCE(sym__vector, 2),
  [373] = {.count = 1, .reusable = false}, REDUCE(sym__vector, 2),
  [375] = {.count = 1, .reusable = false}, SHIFT(147),
  [377] = {.count = 1, .reusable = true}, SHIFT(146),
  [379] = {.count = 1, .reusable = true}, SHIFT(147),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym__hash_map, 2),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym__hash_map, 2),
  [385] = {.count = 1, .reusable = false}, SHIFT(148),
  [387] = {.count = 1, .reusable = true}, SHIFT(148),
  [389] = {.count = 1, .reusable = true}, SHIFT(149),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 2),
  [393] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 2),
  [395] = {.count = 1, .reusable = true}, SHIFT(151),
  [397] = {.count = 1, .reusable = true}, SHIFT(152),
  [399] = {.count = 1, .reusable = true}, REDUCE(sym__set, 2),
  [401] = {.count = 1, .reusable = false}, REDUCE(sym__set, 2),
  [403] = {.count = 1, .reusable = false}, SHIFT(154),
  [405] = {.count = 1, .reusable = true}, SHIFT(153),
  [407] = {.count = 1, .reusable = true}, SHIFT(154),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym_semicolon, 2),
  [411] = {.count = 1, .reusable = false}, REDUCE(sym_semicolon, 2),
  [413] = {.count = 1, .reusable = true}, REDUCE(sym_shebang_line, 2),
  [415] = {.count = 1, .reusable = false}, REDUCE(sym_shebang_line, 2),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_ignore_form, 2),
  [419] = {.count = 1, .reusable = false}, REDUCE(sym_ignore_form, 2),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym_shorthand_function, 2),
  [423] = {.count = 1, .reusable = false}, REDUCE(sym_shorthand_function, 2),
  [425] = {.count = 1, .reusable = true}, SHIFT(155),
  [427] = {.count = 1, .reusable = false}, REDUCE(sym_metadata_shorthand, 2),
  [429] = {.count = 1, .reusable = true}, REDUCE(sym_metadata_shorthand, 2),
  [431] = {.count = 1, .reusable = true}, SHIFT(156),
  [433] = {.count = 1, .reusable = true}, SHIFT(158),
  [435] = {.count = 1, .reusable = true}, SHIFT(160),
  [437] = {.count = 1, .reusable = false}, REDUCE(sym__metadata_map, 2),
  [439] = {.count = 1, .reusable = true}, REDUCE(sym__metadata_map, 2),
  [441] = {.count = 1, .reusable = false}, SHIFT(161),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym_syntax_quote, 2),
  [445] = {.count = 1, .reusable = false}, REDUCE(sym_syntax_quote, 2),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym_unquote, 2),
  [449] = {.count = 1, .reusable = false}, REDUCE(sym_unquote, 2),
  [451] = {.count = 1, .reusable = true}, REDUCE(sym_unquote_splice, 2),
  [453] = {.count = 1, .reusable = false}, REDUCE(sym_unquote_splice, 2),
  [455] = {.count = 1, .reusable = true}, REDUCE(sym_deref, 2),
  [457] = {.count = 1, .reusable = false}, REDUCE(sym_deref, 2),
  [459] = {.count = 1, .reusable = true}, REDUCE(sym__collection_literals, 2),
  [461] = {.count = 1, .reusable = false}, REDUCE(sym__collection_literals, 2),
  [463] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [465] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(117),
  [468] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [471] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(31),
  [474] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(31),
  [477] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [480] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [483] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [486] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [489] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [492] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [495] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [498] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [501] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [504] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [507] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [510] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [513] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [516] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [519] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(16),
  [522] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [525] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [528] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(19),
  [531] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(20),
  [534] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(21),
  [537] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(22),
  [540] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(117),
  [543] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [546] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(24),
  [549] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(25),
  [552] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(26),
  [555] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(27),
  [558] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(28),
  [561] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(29),
  [564] = {.count = 1, .reusable = true}, REDUCE(aux_sym_metadata_repeat1, 2),
  [566] = {.count = 1, .reusable = false}, REDUCE(aux_sym_metadata_repeat1, 2),
  [568] = {.count = 2, .reusable = false}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(118),
  [571] = {.count = 2, .reusable = true}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(24),
  [574] = {.count = 2, .reusable = true}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(25),
  [577] = {.count = 1, .reusable = true}, SHIFT(162),
  [579] = {.count = 1, .reusable = true}, REDUCE(sym__octal_char, 2),
  [581] = {.count = 1, .reusable = false}, REDUCE(sym__octal_char, 2),
  [583] = {.count = 1, .reusable = true}, REDUCE(sym__string, 3),
  [585] = {.count = 1, .reusable = false}, REDUCE(sym__string, 3),
  [587] = {.count = 1, .reusable = false}, REDUCE(aux_sym__string_repeat1, 2),
  [589] = {.count = 2, .reusable = false}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(123),
  [592] = {.count = 1, .reusable = true}, REDUCE(sym__regex, 3),
  [594] = {.count = 1, .reusable = false}, REDUCE(sym__regex, 3),
  [596] = {.count = 1, .reusable = false}, REDUCE(aux_sym__regex_repeat1, 2),
  [598] = {.count = 2, .reusable = false}, REDUCE(aux_sym__regex_repeat1, 2), SHIFT_REPEAT(125),
  [601] = {.count = 1, .reusable = true}, REDUCE(sym__quote, 3),
  [603] = {.count = 1, .reusable = false}, REDUCE(sym__quote, 3),
  [605] = {.count = 1, .reusable = true}, SHIFT(163),
  [607] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_symbol, 3),
  [609] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_symbol, 3),
  [611] = {.count = 1, .reusable = true}, REDUCE(sym_comment_macro, 3),
  [613] = {.count = 1, .reusable = false}, REDUCE(sym_comment_macro, 3),
  [615] = {.count = 1, .reusable = true}, SHIFT(164),
  [617] = {.count = 1, .reusable = true}, SHIFT(165),
  [619] = {.count = 1, .reusable = true}, REDUCE(sym_function_name, 1),
  [621] = {.count = 1, .reusable = false}, REDUCE(sym_function_name, 1),
  [623] = {.count = 1, .reusable = false}, REDUCE(sym_params, 1),
  [625] = {.count = 1, .reusable = true}, REDUCE(sym_params, 1),
  [627] = {.count = 1, .reusable = true}, SHIFT(167),
  [629] = {.count = 1, .reusable = false}, SHIFT(170),
  [631] = {.count = 1, .reusable = true}, REDUCE(sym__single_arity_fn, 1),
  [633] = {.count = 1, .reusable = true}, SHIFT(170),
  [635] = {.count = 1, .reusable = true}, REDUCE(sym__multi_arity_fn, 1),
  [637] = {.count = 1, .reusable = true}, SHIFT(172),
  [639] = {.count = 1, .reusable = true}, REDUCE(sym__list, 3),
  [641] = {.count = 1, .reusable = false}, REDUCE(sym__list, 3),
  [643] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(145),
  [646] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(64),
  [649] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(66),
  [652] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(145),
  [655] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(70),
  [658] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(71),
  [661] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(72),
  [664] = {.count = 1, .reusable = true}, REDUCE(sym__vector, 3),
  [666] = {.count = 1, .reusable = false}, REDUCE(sym__vector, 3),
  [668] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(147),
  [671] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(74),
  [674] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(76),
  [677] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(147),
  [680] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(77),
  [683] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(78),
  [686] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(79),
  [689] = {.count = 1, .reusable = false}, REDUCE(sym__hash_map_kv_pair, 2),
  [691] = {.count = 1, .reusable = true}, REDUCE(sym__hash_map_kv_pair, 2),
  [693] = {.count = 1, .reusable = true}, REDUCE(sym__hash_map, 3),
  [695] = {.count = 1, .reusable = false}, REDUCE(sym__hash_map, 3),
  [697] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(87),
  [700] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(2),
  [703] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(31),
  [706] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(31),
  [709] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(3),
  [712] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(4),
  [715] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(5),
  [718] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(81),
  [721] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(7),
  [724] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(8),
  [727] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(9),
  [730] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(10),
  [733] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(10),
  [736] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(11),
  [739] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(12),
  [742] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(13),
  [745] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(14),
  [748] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(15),
  [751] = {.count = 1, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2),
  [753] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(16),
  [756] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(17),
  [759] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(18),
  [762] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(19),
  [765] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(20),
  [768] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(83),
  [771] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(22),
  [774] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(87),
  [777] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(23),
  [780] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(24),
  [783] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(25),
  [786] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(84),
  [789] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(85),
  [792] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(86),
  [795] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(29),
  [798] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 3),
  [800] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 3),
  [802] = {.count = 1, .reusable = true}, SHIFT(181),
  [804] = {.count = 1, .reusable = true}, REDUCE(sym__set, 3),
  [806] = {.count = 1, .reusable = false}, REDUCE(sym__set, 3),
  [808] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(154),
  [811] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(92),
  [814] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(94),
  [817] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(154),
  [820] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(95),
  [823] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(96),
  [826] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(97),
  [829] = {.count = 1, .reusable = true}, REDUCE(sym_shorthand_function, 3),
  [831] = {.count = 1, .reusable = false}, REDUCE(sym_shorthand_function, 3),
  [833] = {.count = 1, .reusable = true}, SHIFT(183),
  [835] = {.count = 1, .reusable = true}, SHIFT(184),
  [837] = {.count = 1, .reusable = true}, SHIFT(185),
  [839] = {.count = 1, .reusable = false}, REDUCE(sym_metadata_shorthand, 3),
  [841] = {.count = 1, .reusable = true}, REDUCE(sym_metadata_shorthand, 3),
  [843] = {.count = 1, .reusable = true}, SHIFT(186),
  [845] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_keyword, 4),
  [847] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_keyword, 4),
  [849] = {.count = 1, .reusable = true}, REDUCE(sym_comment_macro, 4),
  [851] = {.count = 1, .reusable = false}, REDUCE(sym_comment_macro, 4),
  [853] = {.count = 1, .reusable = true}, SHIFT(187),
  [855] = {.count = 1, .reusable = true}, SHIFT(188),
  [857] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_function, 4),
  [859] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_function, 4),
  [861] = {.count = 1, .reusable = true}, SHIFT(189),
  [863] = {.count = 1, .reusable = true}, REDUCE(sym__single_arity_fn, 2),
  [865] = {.count = 1, .reusable = true}, REDUCE(sym_function_body, 1),
  [867] = {.count = 1, .reusable = true}, REDUCE(aux_sym__multi_arity_fn_repeat1, 2),
  [869] = {.count = 2, .reusable = true}, REDUCE(aux_sym__multi_arity_fn_repeat1, 2), SHIFT_REPEAT(133),
  [872] = {.count = 1, .reusable = false}, SHIFT(190),
  [874] = {.count = 1, .reusable = false}, SHIFT(191),
  [876] = {.count = 1, .reusable = true}, REDUCE(sym_docstring, 1),
  [878] = {.count = 1, .reusable = false}, REDUCE(sym_docstring, 1),
  [880] = {.count = 1, .reusable = true}, REDUCE(sym_attr_map, 1),
  [882] = {.count = 1, .reusable = true}, SHIFT(192),
  [884] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 4),
  [886] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 4),
  [888] = {.count = 1, .reusable = true}, SHIFT(196),
  [890] = {.count = 1, .reusable = true}, SHIFT(197),
  [892] = {.count = 1, .reusable = true}, SHIFT(199),
  [894] = {.count = 1, .reusable = true}, REDUCE(aux_sym__multi_arity_fn_repeat1, 3),
  [896] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_function, 5),
  [898] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_function, 5),
  [900] = {.count = 1, .reusable = false}, SHIFT(200),
  [902] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 5),
  [904] = {.count = 1, .reusable = false}, REDUCE(sym_defn, 5),
  [906] = {.count = 1, .reusable = true}, SHIFT(201),
  [908] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 5),
  [910] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 5),
  [912] = {.count = 1, .reusable = true}, SHIFT(204),
  [914] = {.count = 1, .reusable = true}, REDUCE(sym__unicode_char, 5),
  [916] = {.count = 1, .reusable = false}, REDUCE(sym__unicode_char, 5),
  [918] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 6),
  [920] = {.count = 1, .reusable = false}, REDUCE(sym_defn, 6),
  [922] = {.count = 1, .reusable = true}, SHIFT(205),
  [924] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 7),
  [926] = {.count = 1, .reusable = false}, REDUCE(sym_defn, 7),
  [928] = {.count = 1, .reusable = true}, SHIFT(207),
  [930] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 8),
  [932] = {.count = 1, .reusable = false}, REDUCE(sym_defn, 8),
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
