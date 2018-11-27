#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 210
#define SYMBOL_COUNT 143
#define ALIAS_COUNT 0
#define TOKEN_COUNT 72
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
  anon_sym_POUND_SQUOTE = 67,
  anon_sym_TILDE = 68,
  anon_sym_TILDE_AT = 69,
  sym_gensym = 70,
  anon_sym_AT = 71,
  sym_program = 72,
  sym__anything = 73,
  sym__literals = 74,
  sym__collection_literals = 75,
  sym_boolean = 76,
  sym_number = 77,
  sym__number = 78,
  sym_character = 79,
  sym__character = 80,
  sym__special_char = 81,
  sym__unicode_char = 82,
  sym__octal_char = 83,
  sym__octal_num = 84,
  sym_string = 85,
  sym__string = 86,
  sym_regex = 87,
  sym__regex = 88,
  sym_quote = 89,
  sym__quote = 90,
  sym_keyword = 91,
  sym__keyword = 92,
  sym__unqualified_keyword = 93,
  sym_qualified_keyword = 94,
  sym_symbol = 95,
  sym__symbol = 96,
  sym_threading_macro = 97,
  sym_qualified_symbol = 98,
  sym_interop = 99,
  sym_list = 100,
  sym__list = 101,
  sym_vector = 102,
  sym__vector = 103,
  sym_hash_map = 104,
  sym__hash_map = 105,
  sym_namespace_map = 106,
  sym__hash_map_kv_pair = 107,
  sym__hash_map_key = 108,
  sym__hash_map_value = 109,
  sym_set = 110,
  sym__set = 111,
  sym_comment = 112,
  sym_semicolon = 113,
  sym_shebang_line = 114,
  sym_ignore_form = 115,
  sym_comment_macro = 116,
  sym__functions = 117,
  sym_anonymous_function = 118,
  sym__after_the_fn_name = 119,
  sym_function_name = 120,
  sym__single_arity_fn = 121,
  sym__multi_arity_fn = 122,
  sym_function_body = 123,
  sym_params = 124,
  sym_shorthand_function = 125,
  sym_defn = 126,
  sym_docstring = 127,
  sym_attr_map = 128,
  sym_metadata = 129,
  sym__metadata_map = 130,
  sym_metadata_shorthand = 131,
  sym_syntax_quote = 132,
  sym_var_quote = 133,
  sym_unquote = 134,
  sym_unquote_splice = 135,
  sym_deref = 136,
  aux_sym_program_repeat1 = 137,
  aux_sym__string_repeat1 = 138,
  aux_sym__regex_repeat1 = 139,
  aux_sym__hash_map_repeat1 = 140,
  aux_sym__multi_arity_fn_repeat1 = 141,
  aux_sym_metadata_repeat1 = 142,
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
  [anon_sym_POUND_SQUOTE] = "#'",
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
  [sym_var_quote] = "var_quote",
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
  [anon_sym_POUND_SQUOTE] = {
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
  [sym_var_quote] = {
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
        ADVANCE(13);
      if (lookahead == '\'')
        ADVANCE(14);
      if (lookahead == '(')
        ADVANCE(15);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == ',')
        SKIP(0);
      if (lookahead == '-')
        ADVANCE(24);
      if (lookahead == '.')
        ADVANCE(27);
      if (lookahead == '/')
        ADVANCE(38);
      if (lookahead == ':')
        ADVANCE(39);
      if (lookahead == ';')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(43);
      if (lookahead == '\\')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(45);
      if (lookahead == '^')
        ADVANCE(46);
      if (lookahead == '`')
        ADVANCE(49);
      if (lookahead == 'n')
        ADVANCE(50);
      if (lookahead == 'o')
        ADVANCE(59);
      if (lookahead == 'r')
        ADVANCE(60);
      if (lookahead == 's')
        ADVANCE(66);
      if (lookahead == 't')
        ADVANCE(77);
      if (lookahead == 'u')
        ADVANCE(83);
      if (lookahead == '{')
        ADVANCE(84);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(92);
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
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '_')
        ADVANCE(11);
      if (lookahead == '{')
        ADVANCE(12);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_POUND_DQUOTE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_POUND_SQUOTE);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_POUND_LPAREN);
      END_STATE();
    case 8:
      if (lookahead == ':')
        ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '{')
        ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_POUND_COLON_COLON_LBRACE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_POUND_);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_shorthand_function_arg);
      if (lookahead == '&' ||
          ('1' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == 'q')
        ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'u')
        ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'o')
        ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 't')
        ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'e')
        ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LPARENquote);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_number_long);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '>')
        ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead == '>')
        ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GT);
      END_STATE();
    case 27:
      if (lookahead == '-')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 28:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_field_access);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_number_double);
      if (lookahead == '_')
        ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(32);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '_')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == '+')
        ADVANCE(33);
      if (lookahead == '-')
        ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(34);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_number_double);
      if (lookahead == '_')
        ADVANCE(35);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(36);
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
      ACCEPT_TOKEN(sym_number_double);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_member_access);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '\"')
        ADVANCE(47);
      if (lookahead == ':')
        ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_CARET_DQUOTE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_CARET_COLON);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 50:
      if (lookahead == 'e')
        ADVANCE(51);
      if (lookahead == 'i')
        ADVANCE(57);
      END_STATE();
    case 51:
      if (lookahead == 'w')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'l')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'i')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'n')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'e')
        ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_newline);
      END_STATE();
    case 57:
      if (lookahead == 'l')
        ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 60:
      if (lookahead == 'e')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 't')
        ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'u')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'r')
        ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 'n')
        ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 66:
      if (lookahead == 'o')
        ADVANCE(67);
      if (lookahead == 'p')
        ADVANCE(73);
      END_STATE();
    case 67:
      if (lookahead == 'm')
        ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == 'e')
        ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == '-')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == '>')
        ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_some_DASH_GT);
      if (lookahead == '>')
        ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_some_DASH_GT_GT);
      END_STATE();
    case 73:
      if (lookahead == 'a')
        ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == 'c')
        ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == 'e')
        ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_space);
      END_STATE();
    case 77:
      if (lookahead == 'a')
        ADVANCE(78);
      if (lookahead == 'r')
        ADVANCE(80);
      END_STATE();
    case 78:
      if (lookahead == 'b')
        ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_tab);
      END_STATE();
    case 80:
      if (lookahead == 'u')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 'e')
        ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '@')
        ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_TILDE_AT);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_number_long);
      if (lookahead == '.')
        ADVANCE(89);
      if (lookahead == '_')
        ADVANCE(90);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(32);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_number_double);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(32);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      END_STATE();
    case 90:
      if (lookahead == '_')
        ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(91);
      END_STATE();
    case 91:
      if (lookahead == '.')
        ADVANCE(89);
      if (lookahead == '_')
        ADVANCE(90);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(32);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__hex_char);
      END_STATE();
    case 93:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '\'')
        ADVANCE(14);
      if (lookahead == '(')
        ADVANCE(15);
      if (lookahead == '+')
        ADVANCE(94);
      if (lookahead == ',')
        SKIP(93);
      if (lookahead == '-')
        ADVANCE(101);
      if (lookahead == '.')
        ADVANCE(27);
      if (lookahead == ':')
        ADVANCE(39);
      if (lookahead == ';')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(43);
      if (lookahead == '\\')
        ADVANCE(44);
      if (lookahead == '^')
        ADVANCE(46);
      if (lookahead == '`')
        ADVANCE(49);
      if (lookahead == 'a')
        ADVANCE(102);
      if (lookahead == 'c')
        ADVANCE(109);
      if (lookahead == 'f')
        ADVANCE(116);
      if (lookahead == 'n')
        ADVANCE(121);
      if (lookahead == 's')
        ADVANCE(124);
      if (lookahead == 't')
        ADVANCE(129);
      if (lookahead == '{')
        ADVANCE(84);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?')
        ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(93);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(96);
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
        ADVANCE(100);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_gensym);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_number_long);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '/')
        ADVANCE(97);
      if (lookahead == 'N')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(96);
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
        ADVANCE(100);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_number_ratio);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_number_bigint);
      if (lookahead == '#')
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
        ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
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
        ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '>')
        ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(96);
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
        ADVANCE(100);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == 's')
        ADVANCE(105);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_new_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == '.')
        ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '-')
        ADVANCE(106);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '>')
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
        ADVANCE(100);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_as_DASH_GT);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == 'o')
        ADVANCE(110);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == 'n')
        ADVANCE(111);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == 'd')
        ADVANCE(112);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '-')
        ADVANCE(113);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '>')
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
        ADVANCE(100);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_cond_DASH_GT);
      if (lookahead == '>')
        ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_cond_DASH_GT_GT);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == 'a')
        ADVANCE(117);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == 'l')
        ADVANCE(118);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == 's')
        ADVANCE(119);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == 'e')
        ADVANCE(120);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == 'i')
        ADVANCE(122);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == 'l')
        ADVANCE(123);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_nil);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == 'o')
        ADVANCE(125);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == 'm')
        ADVANCE(126);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == 'e')
        ADVANCE(127);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '-')
        ADVANCE(128);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '>')
        ADVANCE(71);
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
        ADVANCE(100);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == 'r')
        ADVANCE(130);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == 'u')
        ADVANCE(131);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == 'e')
        ADVANCE(132);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_number_long);
      if (lookahead == '.')
        ADVANCE(89);
      if (lookahead == '/')
        ADVANCE(97);
      if (lookahead == 'N')
        ADVANCE(134);
      if (lookahead == '_')
        ADVANCE(90);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(32);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_number_bigint);
      END_STATE();
    case 135:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '\'')
        ADVANCE(14);
      if (lookahead == '(')
        ADVANCE(15);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(94);
      if (lookahead == ',')
        SKIP(135);
      if (lookahead == '-')
        ADVANCE(101);
      if (lookahead == '.')
        ADVANCE(27);
      if (lookahead == ':')
        ADVANCE(39);
      if (lookahead == ';')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(43);
      if (lookahead == '\\')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(45);
      if (lookahead == '^')
        ADVANCE(46);
      if (lookahead == '`')
        ADVANCE(49);
      if (lookahead == 'a')
        ADVANCE(102);
      if (lookahead == 'c')
        ADVANCE(109);
      if (lookahead == 'f')
        ADVANCE(116);
      if (lookahead == 'n')
        ADVANCE(121);
      if (lookahead == 's')
        ADVANCE(124);
      if (lookahead == 't')
        ADVANCE(129);
      if (lookahead == '{')
        ADVANCE(84);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?')
        ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(135);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 136:
      if (lookahead == '\n')
        SKIP(136);
      if (lookahead == ',')
        ADVANCE(137);
      if (lookahead == 'b')
        ADVANCE(138);
      if (lookahead == 'f')
        ADVANCE(147);
      if (lookahead == 'n')
        ADVANCE(155);
      if (lookahead == 'o')
        ADVANCE(59);
      if (lookahead == 'r')
        ADVANCE(156);
      if (lookahead == 's')
        ADVANCE(157);
      if (lookahead == 't')
        ADVANCE(158);
      if (lookahead == 'u')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(137);
      if (lookahead != 0)
        ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__normal_char);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'a')
        ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead == 'c')
        ADVANCE(140);
      END_STATE();
    case 140:
      if (lookahead == 'k')
        ADVANCE(141);
      END_STATE();
    case 141:
      if (lookahead == 's')
        ADVANCE(142);
      END_STATE();
    case 142:
      if (lookahead == 'p')
        ADVANCE(143);
      END_STATE();
    case 143:
      if (lookahead == 'a')
        ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'c')
        ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 'e')
        ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_backspace);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'o')
        ADVANCE(148);
      END_STATE();
    case 148:
      if (lookahead == 'r')
        ADVANCE(149);
      END_STATE();
    case 149:
      if (lookahead == 'm')
        ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == 'f')
        ADVANCE(151);
      END_STATE();
    case 151:
      if (lookahead == 'e')
        ADVANCE(152);
      END_STATE();
    case 152:
      if (lookahead == 'e')
        ADVANCE(153);
      END_STATE();
    case 153:
      if (lookahead == 'd')
        ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_formfeed);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'e')
        ADVANCE(51);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'e')
        ADVANCE(61);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'p')
        ADVANCE(73);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'a')
        ADVANCE(78);
      END_STATE();
    case 159:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(160);
      if (lookahead == '\\')
        ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(160);
      if (lookahead != 0)
        ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 163:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(164);
      if (lookahead == '\\')
        ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(164);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(163);
      if (lookahead != 0)
        ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(162);
      END_STATE();
    case 166:
      if (lookahead == ',')
        SKIP(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(166);
      if (lookahead == '!' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 167:
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
        ADVANCE(167);
      END_STATE();
    case 168:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '\'')
        ADVANCE(14);
      if (lookahead == '(')
        ADVANCE(15);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(94);
      if (lookahead == ',')
        SKIP(168);
      if (lookahead == '-')
        ADVANCE(101);
      if (lookahead == '.')
        ADVANCE(27);
      if (lookahead == '/')
        ADVANCE(38);
      if (lookahead == ':')
        ADVANCE(39);
      if (lookahead == ';')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(43);
      if (lookahead == '\\')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(45);
      if (lookahead == '^')
        ADVANCE(46);
      if (lookahead == '`')
        ADVANCE(49);
      if (lookahead == 'a')
        ADVANCE(102);
      if (lookahead == 'c')
        ADVANCE(109);
      if (lookahead == 'f')
        ADVANCE(116);
      if (lookahead == 'n')
        ADVANCE(121);
      if (lookahead == 's')
        ADVANCE(124);
      if (lookahead == 't')
        ADVANCE(129);
      if (lookahead == '{')
        ADVANCE(84);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?')
        ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(168);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 169:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '\'')
        ADVANCE(14);
      if (lookahead == '(')
        ADVANCE(15);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(94);
      if (lookahead == ',')
        SKIP(169);
      if (lookahead == '-')
        ADVANCE(101);
      if (lookahead == '.')
        ADVANCE(27);
      if (lookahead == ':')
        ADVANCE(39);
      if (lookahead == ';')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(43);
      if (lookahead == '\\')
        ADVANCE(44);
      if (lookahead == '^')
        ADVANCE(46);
      if (lookahead == '`')
        ADVANCE(49);
      if (lookahead == 'a')
        ADVANCE(102);
      if (lookahead == 'c')
        ADVANCE(170);
      if (lookahead == 'd')
        ADVANCE(177);
      if (lookahead == 'f')
        ADVANCE(182);
      if (lookahead == 'n')
        ADVANCE(121);
      if (lookahead == 's')
        ADVANCE(124);
      if (lookahead == 't')
        ADVANCE(129);
      if (lookahead == '{')
        ADVANCE(84);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?')
        ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(169);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == 'o')
        ADVANCE(171);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == 'm')
        ADVANCE(172);
      if (lookahead == 'n')
        ADVANCE(111);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == 'm')
        ADVANCE(173);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == 'e')
        ADVANCE(174);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == 'n')
        ADVANCE(175);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == 't')
        ADVANCE(176);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_comment);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == 'e')
        ADVANCE(178);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == 'f')
        ADVANCE(179);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == 'n')
        ADVANCE(180);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_defn_DASH);
      if (lookahead == '#')
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
        ADVANCE(100);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == 'a')
        ADVANCE(117);
      if (lookahead == 'n')
        ADVANCE(183);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_fn);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 184:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '\'')
        ADVANCE(14);
      if (lookahead == '(')
        ADVANCE(15);
      if (lookahead == '+')
        ADVANCE(94);
      if (lookahead == ',')
        SKIP(184);
      if (lookahead == '-')
        ADVANCE(101);
      if (lookahead == '.')
        ADVANCE(27);
      if (lookahead == ':')
        ADVANCE(39);
      if (lookahead == ';')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(43);
      if (lookahead == '\\')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(45);
      if (lookahead == '^')
        ADVANCE(46);
      if (lookahead == '`')
        ADVANCE(49);
      if (lookahead == 'a')
        ADVANCE(102);
      if (lookahead == 'c')
        ADVANCE(109);
      if (lookahead == 'f')
        ADVANCE(116);
      if (lookahead == 'n')
        ADVANCE(121);
      if (lookahead == 's')
        ADVANCE(124);
      if (lookahead == 't')
        ADVANCE(129);
      if (lookahead == '{')
        ADVANCE(84);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?')
        ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(184);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 185:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '\'')
        ADVANCE(14);
      if (lookahead == '(')
        ADVANCE(15);
      if (lookahead == '+')
        ADVANCE(94);
      if (lookahead == ',')
        SKIP(185);
      if (lookahead == '-')
        ADVANCE(101);
      if (lookahead == '.')
        ADVANCE(27);
      if (lookahead == ':')
        ADVANCE(39);
      if (lookahead == ';')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(43);
      if (lookahead == '\\')
        ADVANCE(44);
      if (lookahead == '^')
        ADVANCE(46);
      if (lookahead == '`')
        ADVANCE(49);
      if (lookahead == 'a')
        ADVANCE(102);
      if (lookahead == 'c')
        ADVANCE(109);
      if (lookahead == 'f')
        ADVANCE(116);
      if (lookahead == 'n')
        ADVANCE(121);
      if (lookahead == 's')
        ADVANCE(124);
      if (lookahead == 't')
        ADVANCE(129);
      if (lookahead == '{')
        ADVANCE(84);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?')
        ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(185);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 186:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(187);
      if (lookahead == '(')
        ADVANCE(188);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        SKIP(186);
      if (lookahead == '-')
        ADVANCE(189);
      if (lookahead == '/')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(43);
      if (lookahead == '^')
        ADVANCE(46);
      if (lookahead == 'a')
        ADVANCE(191);
      if (lookahead == 'c')
        ADVANCE(194);
      if (lookahead == 's')
        ADVANCE(199);
      if (lookahead == '{')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(186);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(190);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '{')
        ADVANCE(12);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '>')
        ADVANCE(25);
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
        ADVANCE(190);
      END_STATE();
    case 190:
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
        ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 's')
        ADVANCE(192);
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
        ADVANCE(190);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '-')
        ADVANCE(193);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(190);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '>')
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
        ADVANCE(190);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'o')
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
        ADVANCE(190);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'n')
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
        ADVANCE(190);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'd')
        ADVANCE(197);
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
        ADVANCE(190);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '-')
        ADVANCE(198);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(190);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '>')
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
        ADVANCE(190);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'o')
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
        ADVANCE(190);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'm')
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
        ADVANCE(190);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'e')
        ADVANCE(202);
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
        ADVANCE(190);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '-')
        ADVANCE(203);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(190);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '>')
        ADVANCE(71);
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
        ADVANCE(190);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == '\n')
        SKIP(204);
      if (lookahead == ',')
        ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(205);
      if (lookahead != 0)
        ADVANCE(206);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == ',')
        ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(206);
      END_STATE();
    case 207:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '\'')
        ADVANCE(14);
      if (lookahead == '(')
        ADVANCE(15);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(94);
      if (lookahead == ',')
        SKIP(207);
      if (lookahead == '-')
        ADVANCE(101);
      if (lookahead == '.')
        ADVANCE(27);
      if (lookahead == ':')
        ADVANCE(39);
      if (lookahead == ';')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(43);
      if (lookahead == '\\')
        ADVANCE(44);
      if (lookahead == '^')
        ADVANCE(46);
      if (lookahead == '`')
        ADVANCE(49);
      if (lookahead == 'a')
        ADVANCE(102);
      if (lookahead == 'c')
        ADVANCE(109);
      if (lookahead == 'f')
        ADVANCE(116);
      if (lookahead == 'n')
        ADVANCE(121);
      if (lookahead == 's')
        ADVANCE(124);
      if (lookahead == 't')
        ADVANCE(129);
      if (lookahead == '{')
        ADVANCE(84);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?')
        ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(207);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(108);
      END_STATE();
    case 208:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        SKIP(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(208);
      END_STATE();
    case 209:
      if (lookahead == ',')
        SKIP(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(92);
      END_STATE();
    case 210:
      if (lookahead == ',')
        SKIP(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(210);
      if (('0' <= lookahead && lookahead <= '3'))
        ADVANCE(211);
      if (('4' <= lookahead && lookahead <= '7'))
        ADVANCE(214);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(215);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 93},
  [2] = {.lex_state = 135},
  [3] = {.lex_state = 136},
  [4] = {.lex_state = 159},
  [5] = {.lex_state = 163},
  [6] = {.lex_state = 93},
  [7] = {.lex_state = 93},
  [8] = {.lex_state = 166},
  [9] = {.lex_state = 166},
  [10] = {.lex_state = 135},
  [11] = {.lex_state = 168},
  [12] = {.lex_state = 135},
  [13] = {.lex_state = 169},
  [14] = {.lex_state = 184},
  [15] = {.lex_state = 185},
  [16] = {.lex_state = 185},
  [17] = {.lex_state = 186},
  [18] = {.lex_state = 185},
  [19] = {.lex_state = 204},
  [20] = {.lex_state = 204},
  [21] = {.lex_state = 93},
  [22] = {.lex_state = 207},
  [23] = {.lex_state = 186},
  [24] = {.lex_state = 166},
  [25] = {.lex_state = 159},
  [26] = {.lex_state = 93},
  [27] = {.lex_state = 186},
  [28] = {.lex_state = 93},
  [29] = {.lex_state = 93},
  [30] = {.lex_state = 186},
  [31] = {.lex_state = 208},
  [32] = {.lex_state = 135},
  [33] = {.lex_state = 135},
  [34] = {.lex_state = 135},
  [35] = {.lex_state = 135},
  [36] = {.lex_state = 135},
  [37] = {.lex_state = 135},
  [38] = {.lex_state = 135},
  [39] = {.lex_state = 135},
  [40] = {.lex_state = 135},
  [41] = {.lex_state = 135},
  [42] = {.lex_state = 135},
  [43] = {.lex_state = 135},
  [44] = {.lex_state = 186},
  [45] = {.lex_state = 186},
  [46] = {.lex_state = 93},
  [47] = {.lex_state = 186},
  [48] = {.lex_state = 135},
  [49] = {.lex_state = 209},
  [50] = {.lex_state = 210},
  [51] = {.lex_state = 135},
  [52] = {.lex_state = 159},
  [53] = {.lex_state = 135},
  [54] = {.lex_state = 163},
  [55] = {.lex_state = 135},
  [56] = {.lex_state = 93},
  [57] = {.lex_state = 93},
  [58] = {.lex_state = 93},
  [59] = {.lex_state = 93},
  [60] = {.lex_state = 93},
  [61] = {.lex_state = 169},
  [62] = {.lex_state = 135},
  [63] = {.lex_state = 168},
  [64] = {.lex_state = 186},
  [65] = {.lex_state = 93},
  [66] = {.lex_state = 135},
  [67] = {.lex_state = 93},
  [68] = {.lex_state = 207},
  [69] = {.lex_state = 186},
  [70] = {.lex_state = 186},
  [71] = {.lex_state = 93},
  [72] = {.lex_state = 93},
  [73] = {.lex_state = 93},
  [74] = {.lex_state = 207},
  [75] = {.lex_state = 93},
  [76] = {.lex_state = 135},
  [77] = {.lex_state = 93},
  [78] = {.lex_state = 93},
  [79] = {.lex_state = 93},
  [80] = {.lex_state = 93},
  [81] = {.lex_state = 184},
  [82] = {.lex_state = 93},
  [83] = {.lex_state = 135},
  [84] = {.lex_state = 93},
  [85] = {.lex_state = 93},
  [86] = {.lex_state = 93},
  [87] = {.lex_state = 93},
  [88] = {.lex_state = 93},
  [89] = {.lex_state = 185},
  [90] = {.lex_state = 135},
  [91] = {.lex_state = 185},
  [92] = {.lex_state = 93},
  [93] = {.lex_state = 93},
  [94] = {.lex_state = 135},
  [95] = {.lex_state = 93},
  [96] = {.lex_state = 93},
  [97] = {.lex_state = 93},
  [98] = {.lex_state = 93},
  [99] = {.lex_state = 185},
  [100] = {.lex_state = 135},
  [101] = {.lex_state = 135},
  [102] = {.lex_state = 135},
  [103] = {.lex_state = 135},
  [104] = {.lex_state = 207},
  [105] = {.lex_state = 186},
  [106] = {.lex_state = 185},
  [107] = {.lex_state = 185},
  [108] = {.lex_state = 186},
  [109] = {.lex_state = 186},
  [110] = {.lex_state = 186},
  [111] = {.lex_state = 159},
  [112] = {.lex_state = 135},
  [113] = {.lex_state = 135},
  [114] = {.lex_state = 135},
  [115] = {.lex_state = 135},
  [116] = {.lex_state = 207},
  [117] = {.lex_state = 135},
  [118] = {.lex_state = 135},
  [119] = {.lex_state = 93},
  [120] = {.lex_state = 186},
  [121] = {.lex_state = 186},
  [122] = {.lex_state = 209},
  [123] = {.lex_state = 135},
  [124] = {.lex_state = 135},
  [125] = {.lex_state = 159},
  [126] = {.lex_state = 135},
  [127] = {.lex_state = 163},
  [128] = {.lex_state = 135},
  [129] = {.lex_state = 166},
  [130] = {.lex_state = 135},
  [131] = {.lex_state = 135},
  [132] = {.lex_state = 207},
  [133] = {.lex_state = 186},
  [134] = {.lex_state = 186},
  [135] = {.lex_state = 93},
  [136] = {.lex_state = 186},
  [137] = {.lex_state = 186},
  [138] = {.lex_state = 207},
  [139] = {.lex_state = 169},
  [140] = {.lex_state = 186},
  [141] = {.lex_state = 207},
  [142] = {.lex_state = 186},
  [143] = {.lex_state = 186},
  [144] = {.lex_state = 186},
  [145] = {.lex_state = 186},
  [146] = {.lex_state = 135},
  [147] = {.lex_state = 207},
  [148] = {.lex_state = 135},
  [149] = {.lex_state = 184},
  [150] = {.lex_state = 185},
  [151] = {.lex_state = 135},
  [152] = {.lex_state = 185},
  [153] = {.lex_state = 135},
  [154] = {.lex_state = 185},
  [155] = {.lex_state = 135},
  [156] = {.lex_state = 185},
  [157] = {.lex_state = 135},
  [158] = {.lex_state = 186},
  [159] = {.lex_state = 185},
  [160] = {.lex_state = 186},
  [161] = {.lex_state = 185},
  [162] = {.lex_state = 93},
  [163] = {.lex_state = 186},
  [164] = {.lex_state = 209},
  [165] = {.lex_state = 135},
  [166] = {.lex_state = 135},
  [167] = {.lex_state = 186},
  [168] = {.lex_state = 169},
  [169] = {.lex_state = 135},
  [170] = {.lex_state = 169},
  [171] = {.lex_state = 169},
  [172] = {.lex_state = 207},
  [173] = {.lex_state = 186},
  [174] = {.lex_state = 159},
  [175] = {.lex_state = 186},
  [176] = {.lex_state = 186},
  [177] = {.lex_state = 186},
  [178] = {.lex_state = 169},
  [179] = {.lex_state = 186},
  [180] = {.lex_state = 186},
  [181] = {.lex_state = 186},
  [182] = {.lex_state = 186},
  [183] = {.lex_state = 135},
  [184] = {.lex_state = 185},
  [185] = {.lex_state = 186},
  [186] = {.lex_state = 186},
  [187] = {.lex_state = 185},
  [188] = {.lex_state = 209},
  [189] = {.lex_state = 186},
  [190] = {.lex_state = 186},
  [191] = {.lex_state = 135},
  [192] = {.lex_state = 186},
  [193] = {.lex_state = 159},
  [194] = {.lex_state = 135},
  [195] = {.lex_state = 169},
  [196] = {.lex_state = 186},
  [197] = {.lex_state = 186},
  [198] = {.lex_state = 135},
  [199] = {.lex_state = 186},
  [200] = {.lex_state = 185},
  [201] = {.lex_state = 135},
  [202] = {.lex_state = 186},
  [203] = {.lex_state = 135},
  [204] = {.lex_state = 169},
  [205] = {.lex_state = 186},
  [206] = {.lex_state = 186},
  [207] = {.lex_state = 135},
  [208] = {.lex_state = 169},
  [209] = {.lex_state = 135},
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(3),
    [anon_sym_TILDE_AT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(31),
    [sym__anything] = STATE(46),
    [sym__literals] = STATE(46),
    [sym__collection_literals] = STATE(46),
    [sym_boolean] = STATE(46),
    [sym_number] = STATE(46),
    [sym__number] = STATE(32),
    [sym_character] = STATE(46),
    [sym__character] = STATE(33),
    [sym_string] = STATE(46),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(46),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(46),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(46),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(46),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(46),
    [sym_list] = STATE(46),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(46),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(46),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(46),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(46),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(46),
    [sym_anonymous_function] = STATE(46),
    [sym_shorthand_function] = STATE(46),
    [sym_defn] = STATE(46),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(46),
    [sym_var_quote] = STATE(46),
    [sym_unquote] = STATE(46),
    [sym_unquote_splice] = STATE(46),
    [sym_deref] = STATE(46),
    [aux_sym_program_repeat1] = STATE(46),
    [aux_sym_metadata_repeat1] = STATE(47),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(69),
    [anon_sym_TILDE_AT] = ACTIONS(71),
    [sym_gensym] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(73),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [sym_nil] = ACTIONS(77),
    [sym_true] = ACTIONS(77),
    [sym_false] = ACTIONS(77),
    [sym_number_long] = ACTIONS(77),
    [sym_number_double] = ACTIONS(75),
    [sym_number_bigint] = ACTIONS(77),
    [sym_number_ratio] = ACTIONS(75),
    [anon_sym_BSLASH] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(75),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_LPARENquote] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [anon_sym_COLON_COLON] = ACTIONS(75),
    [anon_sym_DASH_GT] = ACTIONS(77),
    [anon_sym_DASH_GT_GT] = ACTIONS(75),
    [anon_sym_as_DASH_GT] = ACTIONS(75),
    [anon_sym_some_DASH_GT] = ACTIONS(77),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(75),
    [anon_sym_cond_DASH_GT] = ACTIONS(77),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(75),
    [sym__symbol_chars] = ACTIONS(77),
    [sym_member_access] = ACTIONS(75),
    [sym_field_access] = ACTIONS(75),
    [sym_new_class] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_RBRACK] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(75),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
    [anon_sym_POUND_LBRACE] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_POUND_BANG] = ACTIONS(75),
    [anon_sym_POUND_] = ACTIONS(75),
    [anon_sym_POUND_LPAREN] = ACTIONS(75),
    [sym_shorthand_function_arg] = ACTIONS(75),
    [anon_sym_CARET] = ACTIONS(77),
    [anon_sym_CARET_COLON] = ACTIONS(75),
    [anon_sym_CARET_DQUOTE] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(75),
    [anon_sym_POUND_SQUOTE] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(77),
    [anon_sym_TILDE_AT] = ACTIONS(75),
    [sym_gensym] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
  },
  [3] = {
    [sym__special_char] = STATE(48),
    [sym__unicode_char] = STATE(48),
    [sym__octal_char] = STATE(48),
    [sym__normal_char] = ACTIONS(79),
    [anon_sym_newline] = ACTIONS(79),
    [anon_sym_space] = ACTIONS(79),
    [anon_sym_tab] = ACTIONS(79),
    [anon_sym_formfeed] = ACTIONS(79),
    [anon_sym_backspace] = ACTIONS(79),
    [anon_sym_return] = ACTIONS(79),
    [anon_sym_u] = ACTIONS(81),
    [anon_sym_o] = ACTIONS(83),
  },
  [4] = {
    [aux_sym__string_repeat1] = STATE(52),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(87),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(87),
  },
  [5] = {
    [aux_sym__regex_repeat1] = STATE(54),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(91),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(91),
  },
  [6] = {
    [sym__anything] = STATE(55),
    [sym__literals] = STATE(55),
    [sym__collection_literals] = STATE(55),
    [sym_boolean] = STATE(55),
    [sym_number] = STATE(55),
    [sym__number] = STATE(32),
    [sym_character] = STATE(55),
    [sym__character] = STATE(33),
    [sym_string] = STATE(55),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(55),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(55),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(55),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(55),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(55),
    [sym_list] = STATE(55),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(55),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(55),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(55),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(55),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(55),
    [sym_anonymous_function] = STATE(55),
    [sym_shorthand_function] = STATE(55),
    [sym_defn] = STATE(55),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(55),
    [sym_var_quote] = STATE(55),
    [sym_unquote] = STATE(55),
    [sym_unquote_splice] = STATE(55),
    [sym_deref] = STATE(55),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(93),
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
    [sym_shorthand_function_arg] = ACTIONS(95),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(65),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(69),
    [anon_sym_TILDE_AT] = ACTIONS(71),
    [sym_gensym] = ACTIONS(95),
    [anon_sym_AT] = ACTIONS(73),
  },
  [7] = {
    [sym__anything] = STATE(61),
    [sym__literals] = STATE(61),
    [sym__collection_literals] = STATE(61),
    [sym_boolean] = STATE(61),
    [sym_number] = STATE(61),
    [sym__number] = STATE(32),
    [sym_character] = STATE(61),
    [sym__character] = STATE(33),
    [sym_string] = STATE(61),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(61),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(61),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(61),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(61),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(61),
    [sym_list] = STATE(61),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(61),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(61),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(61),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(61),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(61),
    [sym_anonymous_function] = STATE(61),
    [sym_shorthand_function] = STATE(61),
    [sym_defn] = STATE(61),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(61),
    [sym_var_quote] = STATE(61),
    [sym_unquote] = STATE(61),
    [sym_unquote_splice] = STATE(61),
    [sym_deref] = STATE(61),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(97),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
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
    [anon_sym_POUND_] = ACTIONS(101),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(103),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_TILDE_AT] = ACTIONS(109),
    [sym_gensym] = ACTIONS(103),
    [anon_sym_AT] = ACTIONS(73),
  },
  [8] = {
    [sym__keyword_chars] = ACTIONS(111),
  },
  [9] = {
    [sym__keyword_chars] = ACTIONS(113),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [sym_nil] = ACTIONS(117),
    [sym_true] = ACTIONS(117),
    [sym_false] = ACTIONS(117),
    [sym_number_long] = ACTIONS(117),
    [sym_number_double] = ACTIONS(115),
    [sym_number_bigint] = ACTIONS(117),
    [sym_number_ratio] = ACTIONS(115),
    [anon_sym_BSLASH] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_POUND_DQUOTE] = ACTIONS(115),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_LPARENquote] = ACTIONS(115),
    [anon_sym_RPAREN] = ACTIONS(115),
    [anon_sym_COLON] = ACTIONS(117),
    [anon_sym_COLON_COLON] = ACTIONS(115),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(115),
    [anon_sym_TILDE] = ACTIONS(117),
    [anon_sym_TILDE_AT] = ACTIONS(115),
    [sym_gensym] = ACTIONS(115),
    [anon_sym_AT] = ACTIONS(115),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [sym_nil] = ACTIONS(121),
    [sym_true] = ACTIONS(121),
    [sym_false] = ACTIONS(121),
    [sym_number_long] = ACTIONS(121),
    [sym_number_double] = ACTIONS(119),
    [sym_number_bigint] = ACTIONS(121),
    [sym_number_ratio] = ACTIONS(119),
    [anon_sym_BSLASH] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [anon_sym_POUND_DQUOTE] = ACTIONS(119),
    [anon_sym_SQUOTE] = ACTIONS(119),
    [anon_sym_LPARENquote] = ACTIONS(119),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_COLON] = ACTIONS(121),
    [anon_sym_COLON_COLON] = ACTIONS(119),
    [anon_sym_SLASH] = ACTIONS(123),
    [anon_sym_DASH_GT] = ACTIONS(121),
    [anon_sym_DASH_GT_GT] = ACTIONS(119),
    [anon_sym_as_DASH_GT] = ACTIONS(119),
    [anon_sym_some_DASH_GT] = ACTIONS(121),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(119),
    [anon_sym_cond_DASH_GT] = ACTIONS(121),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(119),
    [sym__symbol_chars] = ACTIONS(121),
    [sym_member_access] = ACTIONS(119),
    [sym_field_access] = ACTIONS(119),
    [sym_new_class] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(119),
    [anon_sym_RBRACK] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(121),
    [anon_sym_POUND_LBRACE] = ACTIONS(119),
    [anon_sym_SEMI] = ACTIONS(119),
    [anon_sym_POUND_BANG] = ACTIONS(119),
    [anon_sym_POUND_] = ACTIONS(119),
    [anon_sym_POUND_LPAREN] = ACTIONS(119),
    [sym_shorthand_function_arg] = ACTIONS(119),
    [anon_sym_CARET] = ACTIONS(121),
    [anon_sym_CARET_COLON] = ACTIONS(119),
    [anon_sym_CARET_DQUOTE] = ACTIONS(119),
    [anon_sym_BQUOTE] = ACTIONS(119),
    [anon_sym_POUND_SQUOTE] = ACTIONS(119),
    [anon_sym_TILDE] = ACTIONS(121),
    [anon_sym_TILDE_AT] = ACTIONS(119),
    [sym_gensym] = ACTIONS(119),
    [anon_sym_AT] = ACTIONS(119),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [sym_nil] = ACTIONS(127),
    [sym_true] = ACTIONS(127),
    [sym_false] = ACTIONS(127),
    [sym_number_long] = ACTIONS(127),
    [sym_number_double] = ACTIONS(125),
    [sym_number_bigint] = ACTIONS(127),
    [sym_number_ratio] = ACTIONS(125),
    [anon_sym_BSLASH] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [anon_sym_POUND_DQUOTE] = ACTIONS(125),
    [anon_sym_SQUOTE] = ACTIONS(125),
    [anon_sym_LPARENquote] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(125),
    [anon_sym_COLON] = ACTIONS(127),
    [anon_sym_COLON_COLON] = ACTIONS(125),
    [anon_sym_DASH_GT] = ACTIONS(127),
    [anon_sym_DASH_GT_GT] = ACTIONS(125),
    [anon_sym_as_DASH_GT] = ACTIONS(125),
    [anon_sym_some_DASH_GT] = ACTIONS(127),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(125),
    [anon_sym_cond_DASH_GT] = ACTIONS(127),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(125),
    [sym__symbol_chars] = ACTIONS(127),
    [sym_member_access] = ACTIONS(125),
    [sym_field_access] = ACTIONS(125),
    [sym_new_class] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(125),
    [anon_sym_RBRACE] = ACTIONS(125),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(125),
    [anon_sym_POUND] = ACTIONS(127),
    [anon_sym_POUND_LBRACE] = ACTIONS(125),
    [anon_sym_SEMI] = ACTIONS(125),
    [anon_sym_POUND_BANG] = ACTIONS(125),
    [anon_sym_POUND_] = ACTIONS(125),
    [anon_sym_POUND_LPAREN] = ACTIONS(125),
    [sym_shorthand_function_arg] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(127),
    [anon_sym_CARET_COLON] = ACTIONS(125),
    [anon_sym_CARET_DQUOTE] = ACTIONS(125),
    [anon_sym_BQUOTE] = ACTIONS(125),
    [anon_sym_POUND_SQUOTE] = ACTIONS(125),
    [anon_sym_TILDE] = ACTIONS(127),
    [anon_sym_TILDE_AT] = ACTIONS(125),
    [sym_gensym] = ACTIONS(125),
    [anon_sym_AT] = ACTIONS(125),
  },
  [13] = {
    [sym__anything] = STATE(74),
    [sym__literals] = STATE(74),
    [sym__collection_literals] = STATE(74),
    [sym_boolean] = STATE(74),
    [sym_number] = STATE(74),
    [sym__number] = STATE(32),
    [sym_character] = STATE(74),
    [sym__character] = STATE(33),
    [sym_string] = STATE(74),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(74),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(74),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(74),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(74),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(74),
    [sym_list] = STATE(74),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(74),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(74),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(74),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(74),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(74),
    [sym_anonymous_function] = STATE(74),
    [sym_shorthand_function] = STATE(74),
    [sym_defn] = STATE(74),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(74),
    [sym_var_quote] = STATE(74),
    [sym_unquote] = STATE(74),
    [sym_unquote_splice] = STATE(74),
    [sym_deref] = STATE(74),
    [aux_sym_program_repeat1] = STATE(74),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(129),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(133),
    [anon_sym_COLON] = ACTIONS(25),
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
    [anon_sym_POUND_] = ACTIONS(135),
    [anon_sym_comment] = ACTIONS(137),
    [anon_sym_fn] = ACTIONS(139),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(141),
    [anon_sym_defn] = ACTIONS(143),
    [anon_sym_defn_DASH] = ACTIONS(143),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(147),
    [anon_sym_TILDE_AT] = ACTIONS(149),
    [sym_gensym] = ACTIONS(141),
    [anon_sym_AT] = ACTIONS(73),
  },
  [14] = {
    [sym__anything] = STATE(81),
    [sym__literals] = STATE(81),
    [sym__collection_literals] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_number] = STATE(81),
    [sym__number] = STATE(32),
    [sym_character] = STATE(81),
    [sym__character] = STATE(33),
    [sym_string] = STATE(81),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(81),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(81),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(81),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(81),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(81),
    [sym_list] = STATE(81),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(81),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(81),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(81),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(81),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(81),
    [sym_anonymous_function] = STATE(81),
    [sym_shorthand_function] = STATE(81),
    [sym_defn] = STATE(81),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(81),
    [sym_var_quote] = STATE(81),
    [sym_unquote] = STATE(81),
    [sym_unquote_splice] = STATE(81),
    [sym_deref] = STATE(81),
    [aux_sym_program_repeat1] = STATE(81),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(151),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(153),
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
    [anon_sym_RBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(157),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(159),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(161),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(163),
    [anon_sym_TILDE_AT] = ACTIONS(165),
    [sym_gensym] = ACTIONS(159),
    [anon_sym_AT] = ACTIONS(73),
  },
  [15] = {
    [sym__anything] = STATE(88),
    [sym__literals] = STATE(88),
    [sym__collection_literals] = STATE(88),
    [sym_boolean] = STATE(88),
    [sym_number] = STATE(88),
    [sym__number] = STATE(32),
    [sym_character] = STATE(88),
    [sym__character] = STATE(33),
    [sym_string] = STATE(88),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(88),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(88),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(88),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(88),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(88),
    [sym_list] = STATE(88),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(88),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(88),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym__hash_map_kv_pair] = STATE(89),
    [sym__hash_map_key] = STATE(88),
    [sym_set] = STATE(88),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(88),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(88),
    [sym_anonymous_function] = STATE(88),
    [sym_shorthand_function] = STATE(88),
    [sym_defn] = STATE(88),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(88),
    [sym_var_quote] = STATE(88),
    [sym_unquote] = STATE(88),
    [sym_unquote_splice] = STATE(88),
    [sym_deref] = STATE(88),
    [aux_sym__hash_map_repeat1] = STATE(89),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(167),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(169),
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
    [anon_sym_RBRACE] = ACTIONS(171),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(173),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(175),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(179),
    [anon_sym_TILDE_AT] = ACTIONS(181),
    [sym_gensym] = ACTIONS(175),
    [anon_sym_AT] = ACTIONS(73),
  },
  [16] = {
    [sym__anything] = STATE(88),
    [sym__literals] = STATE(88),
    [sym__collection_literals] = STATE(88),
    [sym_boolean] = STATE(88),
    [sym_number] = STATE(88),
    [sym__number] = STATE(32),
    [sym_character] = STATE(88),
    [sym__character] = STATE(33),
    [sym_string] = STATE(88),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(88),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(88),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(88),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(88),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(88),
    [sym_list] = STATE(88),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(88),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(88),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym__hash_map_kv_pair] = STATE(91),
    [sym__hash_map_key] = STATE(88),
    [sym_set] = STATE(88),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(88),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(88),
    [sym_anonymous_function] = STATE(88),
    [sym_shorthand_function] = STATE(88),
    [sym_defn] = STATE(88),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(88),
    [sym_var_quote] = STATE(88),
    [sym_unquote] = STATE(88),
    [sym_unquote_splice] = STATE(88),
    [sym_deref] = STATE(88),
    [aux_sym__hash_map_repeat1] = STATE(91),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(167),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(169),
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
    [anon_sym_RBRACE] = ACTIONS(183),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(173),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(175),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(179),
    [anon_sym_TILDE_AT] = ACTIONS(181),
    [sym_gensym] = ACTIONS(175),
    [anon_sym_AT] = ACTIONS(73),
  },
  [17] = {
    [sym__symbol_chars] = ACTIONS(185),
  },
  [18] = {
    [sym__anything] = STATE(99),
    [sym__literals] = STATE(99),
    [sym__collection_literals] = STATE(99),
    [sym_boolean] = STATE(99),
    [sym_number] = STATE(99),
    [sym__number] = STATE(32),
    [sym_character] = STATE(99),
    [sym__character] = STATE(33),
    [sym_string] = STATE(99),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(99),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(99),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(99),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(99),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(99),
    [sym_list] = STATE(99),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(99),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(99),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(99),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(99),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(99),
    [sym_anonymous_function] = STATE(99),
    [sym_shorthand_function] = STATE(99),
    [sym_defn] = STATE(99),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(99),
    [sym_var_quote] = STATE(99),
    [sym_unquote] = STATE(99),
    [sym_unquote_splice] = STATE(99),
    [sym_deref] = STATE(99),
    [aux_sym_program_repeat1] = STATE(99),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(187),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(189),
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
    [anon_sym_RBRACE] = ACTIONS(191),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(193),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(195),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(197),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(199),
    [anon_sym_TILDE_AT] = ACTIONS(201),
    [sym_gensym] = ACTIONS(195),
    [anon_sym_AT] = ACTIONS(73),
  },
  [19] = {
    [aux_sym_SLASH_DOT_STAR_SLASH] = ACTIONS(203),
  },
  [20] = {
    [aux_sym_SLASH_DOT_STAR_SLASH] = ACTIONS(205),
  },
  [21] = {
    [sym__anything] = STATE(102),
    [sym__literals] = STATE(102),
    [sym__collection_literals] = STATE(102),
    [sym_boolean] = STATE(102),
    [sym_number] = STATE(102),
    [sym__number] = STATE(32),
    [sym_character] = STATE(102),
    [sym__character] = STATE(33),
    [sym_string] = STATE(102),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(102),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(102),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(102),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(102),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(102),
    [sym_list] = STATE(102),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(102),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(102),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(102),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(102),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(102),
    [sym_anonymous_function] = STATE(102),
    [sym_shorthand_function] = STATE(102),
    [sym_defn] = STATE(102),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(102),
    [sym_var_quote] = STATE(102),
    [sym_unquote] = STATE(102),
    [sym_unquote_splice] = STATE(102),
    [sym_deref] = STATE(102),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(207),
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
    [sym_shorthand_function_arg] = ACTIONS(209),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(65),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(69),
    [anon_sym_TILDE_AT] = ACTIONS(71),
    [sym_gensym] = ACTIONS(209),
    [anon_sym_AT] = ACTIONS(73),
  },
  [22] = {
    [sym__anything] = STATE(104),
    [sym__literals] = STATE(104),
    [sym__collection_literals] = STATE(104),
    [sym_boolean] = STATE(104),
    [sym_number] = STATE(104),
    [sym__number] = STATE(32),
    [sym_character] = STATE(104),
    [sym__character] = STATE(33),
    [sym_string] = STATE(104),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(104),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(104),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(104),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(104),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(104),
    [sym_list] = STATE(104),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(104),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(104),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(104),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(104),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(104),
    [sym_anonymous_function] = STATE(104),
    [sym_shorthand_function] = STATE(104),
    [sym_defn] = STATE(104),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(104),
    [sym_var_quote] = STATE(104),
    [sym_unquote] = STATE(104),
    [sym_unquote_splice] = STATE(104),
    [sym_deref] = STATE(104),
    [aux_sym_program_repeat1] = STATE(104),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(211),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(213),
    [anon_sym_COLON] = ACTIONS(25),
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
    [anon_sym_POUND_] = ACTIONS(135),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(215),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(147),
    [anon_sym_TILDE_AT] = ACTIONS(149),
    [sym_gensym] = ACTIONS(215),
    [anon_sym_AT] = ACTIONS(73),
  },
  [23] = {
    [sym_hash_map] = STATE(109),
    [sym__hash_map] = STATE(110),
    [sym_namespace_map] = STATE(110),
    [sym__symbol_chars] = ACTIONS(217),
    [anon_sym_LBRACE] = ACTIONS(219),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(221),
    [anon_sym_POUND] = ACTIONS(223),
  },
  [24] = {
    [sym__keyword_chars] = ACTIONS(217),
  },
  [25] = {
    [aux_sym__string_repeat1] = STATE(111),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(227),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(227),
  },
  [26] = {
    [sym__anything] = STATE(112),
    [sym__literals] = STATE(112),
    [sym__collection_literals] = STATE(112),
    [sym_boolean] = STATE(112),
    [sym_number] = STATE(112),
    [sym__number] = STATE(32),
    [sym_character] = STATE(112),
    [sym__character] = STATE(33),
    [sym_string] = STATE(112),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(112),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(112),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(112),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(112),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(112),
    [sym_list] = STATE(112),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(112),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(112),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(112),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(112),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(112),
    [sym_anonymous_function] = STATE(112),
    [sym_shorthand_function] = STATE(112),
    [sym_defn] = STATE(112),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(112),
    [sym_var_quote] = STATE(112),
    [sym_unquote] = STATE(112),
    [sym_unquote_splice] = STATE(112),
    [sym_deref] = STATE(112),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(229),
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
    [sym_shorthand_function_arg] = ACTIONS(231),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(65),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(69),
    [anon_sym_TILDE_AT] = ACTIONS(71),
    [sym_gensym] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(73),
  },
  [27] = {
    [sym_symbol] = STATE(113),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [anon_sym_DASH_GT] = ACTIONS(29),
    [anon_sym_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_as_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT] = ACTIONS(29),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT] = ACTIONS(29),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(31),
    [sym__symbol_chars] = ACTIONS(33),
  },
  [28] = {
    [sym__anything] = STATE(114),
    [sym__literals] = STATE(114),
    [sym__collection_literals] = STATE(114),
    [sym_boolean] = STATE(114),
    [sym_number] = STATE(114),
    [sym__number] = STATE(32),
    [sym_character] = STATE(114),
    [sym__character] = STATE(33),
    [sym_string] = STATE(114),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(114),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(114),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(114),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(114),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(114),
    [sym_list] = STATE(114),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(114),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(114),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(114),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(114),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(114),
    [sym_anonymous_function] = STATE(114),
    [sym_shorthand_function] = STATE(114),
    [sym_defn] = STATE(114),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(114),
    [sym_var_quote] = STATE(114),
    [sym_unquote] = STATE(114),
    [sym_unquote_splice] = STATE(114),
    [sym_deref] = STATE(114),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(233),
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
    [sym_shorthand_function_arg] = ACTIONS(235),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(65),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(69),
    [anon_sym_TILDE_AT] = ACTIONS(71),
    [sym_gensym] = ACTIONS(235),
    [anon_sym_AT] = ACTIONS(73),
  },
  [29] = {
    [sym__anything] = STATE(115),
    [sym__literals] = STATE(115),
    [sym__collection_literals] = STATE(115),
    [sym_boolean] = STATE(115),
    [sym_number] = STATE(115),
    [sym__number] = STATE(32),
    [sym_character] = STATE(115),
    [sym__character] = STATE(33),
    [sym_string] = STATE(115),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(115),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(115),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(115),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(115),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(115),
    [sym_list] = STATE(115),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(115),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(115),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(115),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(115),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(115),
    [sym_anonymous_function] = STATE(115),
    [sym_shorthand_function] = STATE(115),
    [sym_defn] = STATE(115),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(115),
    [sym_var_quote] = STATE(115),
    [sym_unquote] = STATE(115),
    [sym_unquote_splice] = STATE(115),
    [sym_deref] = STATE(115),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(237),
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
    [sym_shorthand_function_arg] = ACTIONS(239),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(65),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(69),
    [anon_sym_TILDE_AT] = ACTIONS(71),
    [sym_gensym] = ACTIONS(239),
    [anon_sym_AT] = ACTIONS(73),
  },
  [30] = {
    [sym_symbol] = STATE(117),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_list] = STATE(117),
    [sym__list] = STATE(39),
    [anon_sym_DASH_GT] = ACTIONS(29),
    [anon_sym_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_as_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT] = ACTIONS(29),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT] = ACTIONS(29),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(31),
    [sym__symbol_chars] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(241),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(243),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(245),
    [sym_nil] = ACTIONS(247),
    [sym_true] = ACTIONS(247),
    [sym_false] = ACTIONS(247),
    [sym_number_long] = ACTIONS(247),
    [sym_number_double] = ACTIONS(245),
    [sym_number_bigint] = ACTIONS(247),
    [sym_number_ratio] = ACTIONS(245),
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
    [sym_member_access] = ACTIONS(245),
    [sym_field_access] = ACTIONS(245),
    [sym_new_class] = ACTIONS(245),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(245),
    [anon_sym_TILDE] = ACTIONS(247),
    [anon_sym_TILDE_AT] = ACTIONS(245),
    [sym_gensym] = ACTIONS(245),
    [anon_sym_AT] = ACTIONS(245),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(249),
    [sym_nil] = ACTIONS(251),
    [sym_true] = ACTIONS(251),
    [sym_false] = ACTIONS(251),
    [sym_number_long] = ACTIONS(251),
    [sym_number_double] = ACTIONS(249),
    [sym_number_bigint] = ACTIONS(251),
    [sym_number_ratio] = ACTIONS(249),
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
    [sym_member_access] = ACTIONS(249),
    [sym_field_access] = ACTIONS(249),
    [sym_new_class] = ACTIONS(249),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(249),
    [anon_sym_TILDE] = ACTIONS(251),
    [anon_sym_TILDE_AT] = ACTIONS(249),
    [sym_gensym] = ACTIONS(249),
    [anon_sym_AT] = ACTIONS(249),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(253),
    [sym_nil] = ACTIONS(255),
    [sym_true] = ACTIONS(255),
    [sym_false] = ACTIONS(255),
    [sym_number_long] = ACTIONS(255),
    [sym_number_double] = ACTIONS(253),
    [sym_number_bigint] = ACTIONS(255),
    [sym_number_ratio] = ACTIONS(253),
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
    [sym_member_access] = ACTIONS(253),
    [sym_field_access] = ACTIONS(253),
    [sym_new_class] = ACTIONS(253),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(253),
    [anon_sym_TILDE] = ACTIONS(255),
    [anon_sym_TILDE_AT] = ACTIONS(253),
    [sym_gensym] = ACTIONS(253),
    [anon_sym_AT] = ACTIONS(253),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(257),
    [sym_nil] = ACTIONS(259),
    [sym_true] = ACTIONS(259),
    [sym_false] = ACTIONS(259),
    [sym_number_long] = ACTIONS(259),
    [sym_number_double] = ACTIONS(257),
    [sym_number_bigint] = ACTIONS(259),
    [sym_number_ratio] = ACTIONS(257),
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
    [sym_member_access] = ACTIONS(257),
    [sym_field_access] = ACTIONS(257),
    [sym_new_class] = ACTIONS(257),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(257),
    [anon_sym_TILDE] = ACTIONS(259),
    [anon_sym_TILDE_AT] = ACTIONS(257),
    [sym_gensym] = ACTIONS(257),
    [anon_sym_AT] = ACTIONS(257),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(261),
    [sym_nil] = ACTIONS(263),
    [sym_true] = ACTIONS(263),
    [sym_false] = ACTIONS(263),
    [sym_number_long] = ACTIONS(263),
    [sym_number_double] = ACTIONS(261),
    [sym_number_bigint] = ACTIONS(263),
    [sym_number_ratio] = ACTIONS(261),
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
    [sym_member_access] = ACTIONS(261),
    [sym_field_access] = ACTIONS(261),
    [sym_new_class] = ACTIONS(261),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(261),
    [anon_sym_TILDE] = ACTIONS(263),
    [anon_sym_TILDE_AT] = ACTIONS(261),
    [sym_gensym] = ACTIONS(261),
    [anon_sym_AT] = ACTIONS(261),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(265),
    [sym_nil] = ACTIONS(267),
    [sym_true] = ACTIONS(267),
    [sym_false] = ACTIONS(267),
    [sym_number_long] = ACTIONS(267),
    [sym_number_double] = ACTIONS(265),
    [sym_number_bigint] = ACTIONS(267),
    [sym_number_ratio] = ACTIONS(265),
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
    [sym_member_access] = ACTIONS(265),
    [sym_field_access] = ACTIONS(265),
    [sym_new_class] = ACTIONS(265),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(265),
    [anon_sym_TILDE] = ACTIONS(267),
    [anon_sym_TILDE_AT] = ACTIONS(265),
    [sym_gensym] = ACTIONS(265),
    [anon_sym_AT] = ACTIONS(265),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(269),
    [sym_nil] = ACTIONS(271),
    [sym_true] = ACTIONS(271),
    [sym_false] = ACTIONS(271),
    [sym_number_long] = ACTIONS(271),
    [sym_number_double] = ACTIONS(269),
    [sym_number_bigint] = ACTIONS(271),
    [sym_number_ratio] = ACTIONS(269),
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
    [sym_member_access] = ACTIONS(269),
    [sym_field_access] = ACTIONS(269),
    [sym_new_class] = ACTIONS(269),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(269),
    [anon_sym_TILDE] = ACTIONS(271),
    [anon_sym_TILDE_AT] = ACTIONS(269),
    [sym_gensym] = ACTIONS(269),
    [anon_sym_AT] = ACTIONS(269),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(273),
    [sym_nil] = ACTIONS(275),
    [sym_true] = ACTIONS(275),
    [sym_false] = ACTIONS(275),
    [sym_number_long] = ACTIONS(275),
    [sym_number_double] = ACTIONS(273),
    [sym_number_bigint] = ACTIONS(275),
    [sym_number_ratio] = ACTIONS(273),
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
    [sym_member_access] = ACTIONS(273),
    [sym_field_access] = ACTIONS(273),
    [sym_new_class] = ACTIONS(273),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(273),
    [anon_sym_TILDE] = ACTIONS(275),
    [anon_sym_TILDE_AT] = ACTIONS(273),
    [sym_gensym] = ACTIONS(273),
    [anon_sym_AT] = ACTIONS(273),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(277),
    [sym_nil] = ACTIONS(279),
    [sym_true] = ACTIONS(279),
    [sym_false] = ACTIONS(279),
    [sym_number_long] = ACTIONS(279),
    [sym_number_double] = ACTIONS(277),
    [sym_number_bigint] = ACTIONS(279),
    [sym_number_ratio] = ACTIONS(277),
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
    [sym_member_access] = ACTIONS(277),
    [sym_field_access] = ACTIONS(277),
    [sym_new_class] = ACTIONS(277),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(277),
    [anon_sym_TILDE] = ACTIONS(279),
    [anon_sym_TILDE_AT] = ACTIONS(277),
    [sym_gensym] = ACTIONS(277),
    [anon_sym_AT] = ACTIONS(277),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(281),
    [sym_nil] = ACTIONS(283),
    [sym_true] = ACTIONS(283),
    [sym_false] = ACTIONS(283),
    [sym_number_long] = ACTIONS(283),
    [sym_number_double] = ACTIONS(281),
    [sym_number_bigint] = ACTIONS(283),
    [sym_number_ratio] = ACTIONS(281),
    [anon_sym_BSLASH] = ACTIONS(281),
    [anon_sym_DQUOTE] = ACTIONS(281),
    [anon_sym_POUND_DQUOTE] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(281),
    [anon_sym_LPARENquote] = ACTIONS(281),
    [anon_sym_RPAREN] = ACTIONS(281),
    [anon_sym_COLON] = ACTIONS(283),
    [anon_sym_COLON_COLON] = ACTIONS(281),
    [anon_sym_DASH_GT] = ACTIONS(283),
    [anon_sym_DASH_GT_GT] = ACTIONS(281),
    [anon_sym_as_DASH_GT] = ACTIONS(281),
    [anon_sym_some_DASH_GT] = ACTIONS(283),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(281),
    [anon_sym_cond_DASH_GT] = ACTIONS(283),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(281),
    [sym__symbol_chars] = ACTIONS(283),
    [sym_member_access] = ACTIONS(281),
    [sym_field_access] = ACTIONS(281),
    [sym_new_class] = ACTIONS(281),
    [anon_sym_LPAREN] = ACTIONS(283),
    [anon_sym_LBRACK] = ACTIONS(281),
    [anon_sym_RBRACK] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(281),
    [anon_sym_RBRACE] = ACTIONS(281),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(281),
    [anon_sym_POUND] = ACTIONS(283),
    [anon_sym_POUND_LBRACE] = ACTIONS(281),
    [anon_sym_SEMI] = ACTIONS(281),
    [anon_sym_POUND_BANG] = ACTIONS(281),
    [anon_sym_POUND_] = ACTIONS(281),
    [anon_sym_POUND_LPAREN] = ACTIONS(281),
    [sym_shorthand_function_arg] = ACTIONS(281),
    [anon_sym_CARET] = ACTIONS(283),
    [anon_sym_CARET_COLON] = ACTIONS(281),
    [anon_sym_CARET_DQUOTE] = ACTIONS(281),
    [anon_sym_BQUOTE] = ACTIONS(281),
    [anon_sym_POUND_SQUOTE] = ACTIONS(281),
    [anon_sym_TILDE] = ACTIONS(283),
    [anon_sym_TILDE_AT] = ACTIONS(281),
    [sym_gensym] = ACTIONS(281),
    [anon_sym_AT] = ACTIONS(281),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(285),
    [sym_nil] = ACTIONS(287),
    [sym_true] = ACTIONS(287),
    [sym_false] = ACTIONS(287),
    [sym_number_long] = ACTIONS(287),
    [sym_number_double] = ACTIONS(285),
    [sym_number_bigint] = ACTIONS(287),
    [sym_number_ratio] = ACTIONS(285),
    [anon_sym_BSLASH] = ACTIONS(285),
    [anon_sym_DQUOTE] = ACTIONS(285),
    [anon_sym_POUND_DQUOTE] = ACTIONS(285),
    [anon_sym_SQUOTE] = ACTIONS(285),
    [anon_sym_LPARENquote] = ACTIONS(285),
    [anon_sym_RPAREN] = ACTIONS(285),
    [anon_sym_COLON] = ACTIONS(287),
    [anon_sym_COLON_COLON] = ACTIONS(285),
    [anon_sym_DASH_GT] = ACTIONS(287),
    [anon_sym_DASH_GT_GT] = ACTIONS(285),
    [anon_sym_as_DASH_GT] = ACTIONS(285),
    [anon_sym_some_DASH_GT] = ACTIONS(287),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(285),
    [anon_sym_cond_DASH_GT] = ACTIONS(287),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(285),
    [sym__symbol_chars] = ACTIONS(287),
    [sym_member_access] = ACTIONS(285),
    [sym_field_access] = ACTIONS(285),
    [sym_new_class] = ACTIONS(285),
    [anon_sym_LPAREN] = ACTIONS(287),
    [anon_sym_LBRACK] = ACTIONS(285),
    [anon_sym_RBRACK] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [anon_sym_RBRACE] = ACTIONS(285),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(285),
    [anon_sym_POUND] = ACTIONS(287),
    [anon_sym_POUND_LBRACE] = ACTIONS(285),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_POUND_BANG] = ACTIONS(285),
    [anon_sym_POUND_] = ACTIONS(285),
    [anon_sym_POUND_LPAREN] = ACTIONS(285),
    [sym_shorthand_function_arg] = ACTIONS(285),
    [anon_sym_CARET] = ACTIONS(287),
    [anon_sym_CARET_COLON] = ACTIONS(285),
    [anon_sym_CARET_DQUOTE] = ACTIONS(285),
    [anon_sym_BQUOTE] = ACTIONS(285),
    [anon_sym_POUND_SQUOTE] = ACTIONS(285),
    [anon_sym_TILDE] = ACTIONS(287),
    [anon_sym_TILDE_AT] = ACTIONS(285),
    [sym_gensym] = ACTIONS(285),
    [anon_sym_AT] = ACTIONS(285),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(289),
    [sym_nil] = ACTIONS(291),
    [sym_true] = ACTIONS(291),
    [sym_false] = ACTIONS(291),
    [sym_number_long] = ACTIONS(291),
    [sym_number_double] = ACTIONS(289),
    [sym_number_bigint] = ACTIONS(291),
    [sym_number_ratio] = ACTIONS(289),
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
    [sym_member_access] = ACTIONS(289),
    [sym_field_access] = ACTIONS(289),
    [sym_new_class] = ACTIONS(289),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(289),
    [sym_shorthand_function_arg] = ACTIONS(289),
    [anon_sym_CARET] = ACTIONS(291),
    [anon_sym_CARET_COLON] = ACTIONS(289),
    [anon_sym_CARET_DQUOTE] = ACTIONS(289),
    [anon_sym_BQUOTE] = ACTIONS(289),
    [anon_sym_POUND_SQUOTE] = ACTIONS(289),
    [anon_sym_TILDE] = ACTIONS(291),
    [anon_sym_TILDE_AT] = ACTIONS(289),
    [sym_gensym] = ACTIONS(289),
    [anon_sym_AT] = ACTIONS(289),
  },
  [44] = {
    [sym_list] = STATE(118),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(118),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(118),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(118),
    [sym__set] = STATE(42),
    [anon_sym_LPAREN] = ACTIONS(241),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
  },
  [45] = {
    [anon_sym_DASH_GT] = ACTIONS(293),
    [anon_sym_DASH_GT_GT] = ACTIONS(295),
    [anon_sym_as_DASH_GT] = ACTIONS(295),
    [anon_sym_some_DASH_GT] = ACTIONS(293),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(295),
    [anon_sym_cond_DASH_GT] = ACTIONS(293),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(295),
    [sym__symbol_chars] = ACTIONS(293),
    [anon_sym_LPAREN] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(295),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(295),
    [anon_sym_POUND] = ACTIONS(293),
    [anon_sym_POUND_LBRACE] = ACTIONS(295),
  },
  [46] = {
    [sym__anything] = STATE(119),
    [sym__literals] = STATE(119),
    [sym__collection_literals] = STATE(119),
    [sym_boolean] = STATE(119),
    [sym_number] = STATE(119),
    [sym__number] = STATE(32),
    [sym_character] = STATE(119),
    [sym__character] = STATE(33),
    [sym_string] = STATE(119),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(119),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(119),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(119),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(119),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(119),
    [sym_list] = STATE(119),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(119),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(119),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(119),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(119),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(119),
    [sym_anonymous_function] = STATE(119),
    [sym_shorthand_function] = STATE(119),
    [sym_defn] = STATE(119),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(119),
    [sym_var_quote] = STATE(119),
    [sym_unquote] = STATE(119),
    [sym_unquote_splice] = STATE(119),
    [sym_deref] = STATE(119),
    [aux_sym_program_repeat1] = STATE(119),
    [aux_sym_metadata_repeat1] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(297),
    [sym_nil] = ACTIONS(299),
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
    [sym_shorthand_function_arg] = ACTIONS(301),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(65),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(69),
    [anon_sym_TILDE_AT] = ACTIONS(71),
    [sym_gensym] = ACTIONS(301),
    [anon_sym_AT] = ACTIONS(73),
  },
  [47] = {
    [sym_metadata_shorthand] = STATE(121),
    [aux_sym_metadata_repeat1] = STATE(121),
    [anon_sym_LPAREN] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(295),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(295),
    [anon_sym_POUND] = ACTIONS(293),
    [anon_sym_POUND_LBRACE] = ACTIONS(295),
    [anon_sym_CARET] = ACTIONS(303),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(305),
    [sym_nil] = ACTIONS(307),
    [sym_true] = ACTIONS(307),
    [sym_false] = ACTIONS(307),
    [sym_number_long] = ACTIONS(307),
    [sym_number_double] = ACTIONS(305),
    [sym_number_bigint] = ACTIONS(307),
    [sym_number_ratio] = ACTIONS(305),
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
    [sym_member_access] = ACTIONS(305),
    [sym_field_access] = ACTIONS(305),
    [sym_new_class] = ACTIONS(305),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(305),
    [anon_sym_TILDE] = ACTIONS(307),
    [anon_sym_TILDE_AT] = ACTIONS(305),
    [sym_gensym] = ACTIONS(305),
    [anon_sym_AT] = ACTIONS(305),
  },
  [49] = {
    [sym__hex_char] = ACTIONS(309),
  },
  [50] = {
    [sym__octal_num] = STATE(123),
    [aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(311),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(313),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(313),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(315),
    [sym_nil] = ACTIONS(317),
    [sym_true] = ACTIONS(317),
    [sym_false] = ACTIONS(317),
    [sym_number_long] = ACTIONS(317),
    [sym_number_double] = ACTIONS(315),
    [sym_number_bigint] = ACTIONS(317),
    [sym_number_ratio] = ACTIONS(315),
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
    [sym_member_access] = ACTIONS(315),
    [sym_field_access] = ACTIONS(315),
    [sym_new_class] = ACTIONS(315),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(315),
    [sym_shorthand_function_arg] = ACTIONS(315),
    [anon_sym_CARET] = ACTIONS(317),
    [anon_sym_CARET_COLON] = ACTIONS(315),
    [anon_sym_CARET_DQUOTE] = ACTIONS(315),
    [anon_sym_BQUOTE] = ACTIONS(315),
    [anon_sym_POUND_SQUOTE] = ACTIONS(315),
    [anon_sym_TILDE] = ACTIONS(317),
    [anon_sym_TILDE_AT] = ACTIONS(315),
    [sym_gensym] = ACTIONS(315),
    [anon_sym_AT] = ACTIONS(315),
  },
  [52] = {
    [aux_sym__string_repeat1] = STATE(125),
    [anon_sym_DQUOTE] = ACTIONS(319),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(321),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(321),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(323),
    [sym_nil] = ACTIONS(325),
    [sym_true] = ACTIONS(325),
    [sym_false] = ACTIONS(325),
    [sym_number_long] = ACTIONS(325),
    [sym_number_double] = ACTIONS(323),
    [sym_number_bigint] = ACTIONS(325),
    [sym_number_ratio] = ACTIONS(323),
    [anon_sym_BSLASH] = ACTIONS(323),
    [anon_sym_DQUOTE] = ACTIONS(323),
    [anon_sym_POUND_DQUOTE] = ACTIONS(323),
    [anon_sym_SQUOTE] = ACTIONS(323),
    [anon_sym_LPARENquote] = ACTIONS(323),
    [anon_sym_RPAREN] = ACTIONS(323),
    [anon_sym_COLON] = ACTIONS(325),
    [anon_sym_COLON_COLON] = ACTIONS(323),
    [anon_sym_DASH_GT] = ACTIONS(325),
    [anon_sym_DASH_GT_GT] = ACTIONS(323),
    [anon_sym_as_DASH_GT] = ACTIONS(323),
    [anon_sym_some_DASH_GT] = ACTIONS(325),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(323),
    [anon_sym_cond_DASH_GT] = ACTIONS(325),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(323),
    [sym__symbol_chars] = ACTIONS(325),
    [sym_member_access] = ACTIONS(323),
    [sym_field_access] = ACTIONS(323),
    [sym_new_class] = ACTIONS(323),
    [anon_sym_LPAREN] = ACTIONS(325),
    [anon_sym_LBRACK] = ACTIONS(323),
    [anon_sym_RBRACK] = ACTIONS(323),
    [anon_sym_LBRACE] = ACTIONS(323),
    [anon_sym_RBRACE] = ACTIONS(323),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(323),
    [anon_sym_POUND] = ACTIONS(325),
    [anon_sym_POUND_LBRACE] = ACTIONS(323),
    [anon_sym_SEMI] = ACTIONS(323),
    [anon_sym_POUND_BANG] = ACTIONS(323),
    [anon_sym_POUND_] = ACTIONS(323),
    [anon_sym_POUND_LPAREN] = ACTIONS(323),
    [sym_shorthand_function_arg] = ACTIONS(323),
    [anon_sym_CARET] = ACTIONS(325),
    [anon_sym_CARET_COLON] = ACTIONS(323),
    [anon_sym_CARET_DQUOTE] = ACTIONS(323),
    [anon_sym_BQUOTE] = ACTIONS(323),
    [anon_sym_POUND_SQUOTE] = ACTIONS(323),
    [anon_sym_TILDE] = ACTIONS(325),
    [anon_sym_TILDE_AT] = ACTIONS(323),
    [sym_gensym] = ACTIONS(323),
    [anon_sym_AT] = ACTIONS(323),
  },
  [54] = {
    [aux_sym__regex_repeat1] = STATE(127),
    [anon_sym_DQUOTE] = ACTIONS(327),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(329),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(329),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(331),
    [sym_nil] = ACTIONS(333),
    [sym_true] = ACTIONS(333),
    [sym_false] = ACTIONS(333),
    [sym_number_long] = ACTIONS(333),
    [sym_number_double] = ACTIONS(331),
    [sym_number_bigint] = ACTIONS(333),
    [sym_number_ratio] = ACTIONS(331),
    [anon_sym_BSLASH] = ACTIONS(331),
    [anon_sym_DQUOTE] = ACTIONS(331),
    [anon_sym_POUND_DQUOTE] = ACTIONS(331),
    [anon_sym_SQUOTE] = ACTIONS(331),
    [anon_sym_LPARENquote] = ACTIONS(331),
    [anon_sym_RPAREN] = ACTIONS(331),
    [anon_sym_COLON] = ACTIONS(333),
    [anon_sym_COLON_COLON] = ACTIONS(331),
    [anon_sym_DASH_GT] = ACTIONS(333),
    [anon_sym_DASH_GT_GT] = ACTIONS(331),
    [anon_sym_as_DASH_GT] = ACTIONS(331),
    [anon_sym_some_DASH_GT] = ACTIONS(333),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(331),
    [anon_sym_cond_DASH_GT] = ACTIONS(333),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(331),
    [sym__symbol_chars] = ACTIONS(333),
    [sym_member_access] = ACTIONS(331),
    [sym_field_access] = ACTIONS(331),
    [sym_new_class] = ACTIONS(331),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(331),
    [anon_sym_TILDE] = ACTIONS(333),
    [anon_sym_TILDE_AT] = ACTIONS(331),
    [sym_gensym] = ACTIONS(331),
    [anon_sym_AT] = ACTIONS(331),
  },
  [56] = {
    [sym__anything] = STATE(55),
    [sym__literals] = STATE(55),
    [sym__collection_literals] = STATE(55),
    [sym_boolean] = STATE(55),
    [sym_number] = STATE(55),
    [sym__number] = STATE(32),
    [sym_character] = STATE(55),
    [sym__character] = STATE(33),
    [sym_string] = STATE(55),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(55),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(55),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(55),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(55),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(55),
    [sym_list] = STATE(55),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(55),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(55),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(55),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(55),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(55),
    [sym_anonymous_function] = STATE(55),
    [sym_shorthand_function] = STATE(55),
    [sym_defn] = STATE(55),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(55),
    [sym_var_quote] = STATE(55),
    [sym_unquote] = STATE(55),
    [sym_unquote_splice] = STATE(55),
    [sym_deref] = STATE(55),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(93),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
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
    [anon_sym_POUND_] = ACTIONS(101),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(95),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_TILDE_AT] = ACTIONS(109),
    [sym_gensym] = ACTIONS(95),
    [anon_sym_AT] = ACTIONS(73),
  },
  [57] = {
    [sym__anything] = STATE(102),
    [sym__literals] = STATE(102),
    [sym__collection_literals] = STATE(102),
    [sym_boolean] = STATE(102),
    [sym_number] = STATE(102),
    [sym__number] = STATE(32),
    [sym_character] = STATE(102),
    [sym__character] = STATE(33),
    [sym_string] = STATE(102),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(102),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(102),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(102),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(102),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(102),
    [sym_list] = STATE(102),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(102),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(102),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(102),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(102),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(102),
    [sym_anonymous_function] = STATE(102),
    [sym_shorthand_function] = STATE(102),
    [sym_defn] = STATE(102),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(102),
    [sym_var_quote] = STATE(102),
    [sym_unquote] = STATE(102),
    [sym_unquote_splice] = STATE(102),
    [sym_deref] = STATE(102),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(207),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
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
    [anon_sym_POUND_] = ACTIONS(101),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(209),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_TILDE_AT] = ACTIONS(109),
    [sym_gensym] = ACTIONS(209),
    [anon_sym_AT] = ACTIONS(73),
  },
  [58] = {
    [sym__anything] = STATE(112),
    [sym__literals] = STATE(112),
    [sym__collection_literals] = STATE(112),
    [sym_boolean] = STATE(112),
    [sym_number] = STATE(112),
    [sym__number] = STATE(32),
    [sym_character] = STATE(112),
    [sym__character] = STATE(33),
    [sym_string] = STATE(112),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(112),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(112),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(112),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(112),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(112),
    [sym_list] = STATE(112),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(112),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(112),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(112),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(112),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(112),
    [sym_anonymous_function] = STATE(112),
    [sym_shorthand_function] = STATE(112),
    [sym_defn] = STATE(112),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(112),
    [sym_var_quote] = STATE(112),
    [sym_unquote] = STATE(112),
    [sym_unquote_splice] = STATE(112),
    [sym_deref] = STATE(112),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(229),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
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
    [anon_sym_POUND_] = ACTIONS(101),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(231),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_TILDE_AT] = ACTIONS(109),
    [sym_gensym] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(73),
  },
  [59] = {
    [sym__anything] = STATE(114),
    [sym__literals] = STATE(114),
    [sym__collection_literals] = STATE(114),
    [sym_boolean] = STATE(114),
    [sym_number] = STATE(114),
    [sym__number] = STATE(32),
    [sym_character] = STATE(114),
    [sym__character] = STATE(33),
    [sym_string] = STATE(114),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(114),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(114),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(114),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(114),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(114),
    [sym_list] = STATE(114),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(114),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(114),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(114),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(114),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(114),
    [sym_anonymous_function] = STATE(114),
    [sym_shorthand_function] = STATE(114),
    [sym_defn] = STATE(114),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(114),
    [sym_var_quote] = STATE(114),
    [sym_unquote] = STATE(114),
    [sym_unquote_splice] = STATE(114),
    [sym_deref] = STATE(114),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(233),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
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
    [anon_sym_POUND_] = ACTIONS(101),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(235),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_TILDE_AT] = ACTIONS(109),
    [sym_gensym] = ACTIONS(235),
    [anon_sym_AT] = ACTIONS(73),
  },
  [60] = {
    [sym__anything] = STATE(115),
    [sym__literals] = STATE(115),
    [sym__collection_literals] = STATE(115),
    [sym_boolean] = STATE(115),
    [sym_number] = STATE(115),
    [sym__number] = STATE(32),
    [sym_character] = STATE(115),
    [sym__character] = STATE(33),
    [sym_string] = STATE(115),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(115),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(115),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(115),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(115),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(115),
    [sym_list] = STATE(115),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(115),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(115),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(115),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(115),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(115),
    [sym_anonymous_function] = STATE(115),
    [sym_shorthand_function] = STATE(115),
    [sym_defn] = STATE(115),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(115),
    [sym_var_quote] = STATE(115),
    [sym_unquote] = STATE(115),
    [sym_unquote_splice] = STATE(115),
    [sym_deref] = STATE(115),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(237),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
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
    [anon_sym_POUND_] = ACTIONS(101),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(239),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_TILDE_AT] = ACTIONS(109),
    [sym_gensym] = ACTIONS(239),
    [anon_sym_AT] = ACTIONS(73),
  },
  [61] = {
    [anon_sym_RPAREN] = ACTIONS(335),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(337),
    [sym_nil] = ACTIONS(339),
    [sym_true] = ACTIONS(339),
    [sym_false] = ACTIONS(339),
    [sym_number_long] = ACTIONS(339),
    [sym_number_double] = ACTIONS(337),
    [sym_number_bigint] = ACTIONS(339),
    [sym_number_ratio] = ACTIONS(337),
    [anon_sym_BSLASH] = ACTIONS(337),
    [anon_sym_DQUOTE] = ACTIONS(337),
    [anon_sym_POUND_DQUOTE] = ACTIONS(337),
    [anon_sym_SQUOTE] = ACTIONS(337),
    [anon_sym_LPARENquote] = ACTIONS(337),
    [anon_sym_RPAREN] = ACTIONS(337),
    [anon_sym_COLON] = ACTIONS(339),
    [anon_sym_COLON_COLON] = ACTIONS(337),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(337),
    [anon_sym_TILDE] = ACTIONS(339),
    [anon_sym_TILDE_AT] = ACTIONS(337),
    [sym_gensym] = ACTIONS(337),
    [anon_sym_AT] = ACTIONS(337),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(341),
    [sym_nil] = ACTIONS(343),
    [sym_true] = ACTIONS(343),
    [sym_false] = ACTIONS(343),
    [sym_number_long] = ACTIONS(343),
    [sym_number_double] = ACTIONS(341),
    [sym_number_bigint] = ACTIONS(343),
    [sym_number_ratio] = ACTIONS(341),
    [anon_sym_BSLASH] = ACTIONS(341),
    [anon_sym_DQUOTE] = ACTIONS(341),
    [anon_sym_POUND_DQUOTE] = ACTIONS(341),
    [anon_sym_SQUOTE] = ACTIONS(341),
    [anon_sym_LPARENquote] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(341),
    [anon_sym_COLON] = ACTIONS(343),
    [anon_sym_COLON_COLON] = ACTIONS(341),
    [anon_sym_SLASH] = ACTIONS(345),
    [anon_sym_DASH_GT] = ACTIONS(343),
    [anon_sym_DASH_GT_GT] = ACTIONS(341),
    [anon_sym_as_DASH_GT] = ACTIONS(341),
    [anon_sym_some_DASH_GT] = ACTIONS(343),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(341),
    [anon_sym_cond_DASH_GT] = ACTIONS(343),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(341),
    [sym__symbol_chars] = ACTIONS(343),
    [sym_member_access] = ACTIONS(341),
    [sym_field_access] = ACTIONS(341),
    [sym_new_class] = ACTIONS(341),
    [anon_sym_LPAREN] = ACTIONS(343),
    [anon_sym_LBRACK] = ACTIONS(341),
    [anon_sym_RBRACK] = ACTIONS(341),
    [anon_sym_LBRACE] = ACTIONS(341),
    [anon_sym_RBRACE] = ACTIONS(341),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(341),
    [anon_sym_POUND] = ACTIONS(343),
    [anon_sym_POUND_LBRACE] = ACTIONS(341),
    [anon_sym_SEMI] = ACTIONS(341),
    [anon_sym_POUND_BANG] = ACTIONS(341),
    [anon_sym_POUND_] = ACTIONS(341),
    [anon_sym_POUND_LPAREN] = ACTIONS(341),
    [sym_shorthand_function_arg] = ACTIONS(341),
    [anon_sym_CARET] = ACTIONS(343),
    [anon_sym_CARET_COLON] = ACTIONS(341),
    [anon_sym_CARET_DQUOTE] = ACTIONS(341),
    [anon_sym_BQUOTE] = ACTIONS(341),
    [anon_sym_POUND_SQUOTE] = ACTIONS(341),
    [anon_sym_TILDE] = ACTIONS(343),
    [anon_sym_TILDE_AT] = ACTIONS(341),
    [sym_gensym] = ACTIONS(341),
    [anon_sym_AT] = ACTIONS(341),
  },
  [64] = {
    [sym__symbol_chars] = ACTIONS(347),
  },
  [65] = {
    [sym__anything] = STATE(55),
    [sym__literals] = STATE(55),
    [sym__collection_literals] = STATE(55),
    [sym_boolean] = STATE(55),
    [sym_number] = STATE(55),
    [sym__number] = STATE(32),
    [sym_character] = STATE(55),
    [sym__character] = STATE(33),
    [sym_string] = STATE(55),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(55),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(55),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(55),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(55),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(55),
    [sym_list] = STATE(55),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(55),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(55),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(55),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(55),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(55),
    [sym_anonymous_function] = STATE(55),
    [sym_shorthand_function] = STATE(55),
    [sym_defn] = STATE(55),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(55),
    [sym_var_quote] = STATE(55),
    [sym_unquote] = STATE(55),
    [sym_unquote_splice] = STATE(55),
    [sym_deref] = STATE(55),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(93),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
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
    [anon_sym_POUND_] = ACTIONS(135),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(95),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(147),
    [anon_sym_TILDE_AT] = ACTIONS(149),
    [sym_gensym] = ACTIONS(95),
    [anon_sym_AT] = ACTIONS(73),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(349),
    [sym_nil] = ACTIONS(351),
    [sym_true] = ACTIONS(351),
    [sym_false] = ACTIONS(351),
    [sym_number_long] = ACTIONS(351),
    [sym_number_double] = ACTIONS(349),
    [sym_number_bigint] = ACTIONS(351),
    [sym_number_ratio] = ACTIONS(349),
    [anon_sym_BSLASH] = ACTIONS(349),
    [anon_sym_DQUOTE] = ACTIONS(349),
    [anon_sym_POUND_DQUOTE] = ACTIONS(349),
    [anon_sym_SQUOTE] = ACTIONS(349),
    [anon_sym_LPARENquote] = ACTIONS(349),
    [anon_sym_RPAREN] = ACTIONS(349),
    [anon_sym_COLON] = ACTIONS(351),
    [anon_sym_COLON_COLON] = ACTIONS(349),
    [anon_sym_DASH_GT] = ACTIONS(351),
    [anon_sym_DASH_GT_GT] = ACTIONS(349),
    [anon_sym_as_DASH_GT] = ACTIONS(349),
    [anon_sym_some_DASH_GT] = ACTIONS(351),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(349),
    [anon_sym_cond_DASH_GT] = ACTIONS(351),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(349),
    [sym__symbol_chars] = ACTIONS(351),
    [sym_member_access] = ACTIONS(349),
    [sym_field_access] = ACTIONS(349),
    [sym_new_class] = ACTIONS(349),
    [anon_sym_LPAREN] = ACTIONS(351),
    [anon_sym_LBRACK] = ACTIONS(349),
    [anon_sym_RBRACK] = ACTIONS(349),
    [anon_sym_LBRACE] = ACTIONS(349),
    [anon_sym_RBRACE] = ACTIONS(349),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(349),
    [anon_sym_POUND] = ACTIONS(351),
    [anon_sym_POUND_LBRACE] = ACTIONS(349),
    [anon_sym_SEMI] = ACTIONS(349),
    [anon_sym_POUND_BANG] = ACTIONS(349),
    [anon_sym_POUND_] = ACTIONS(349),
    [anon_sym_POUND_LPAREN] = ACTIONS(349),
    [sym_shorthand_function_arg] = ACTIONS(349),
    [anon_sym_CARET] = ACTIONS(351),
    [anon_sym_CARET_COLON] = ACTIONS(349),
    [anon_sym_CARET_DQUOTE] = ACTIONS(349),
    [anon_sym_BQUOTE] = ACTIONS(349),
    [anon_sym_POUND_SQUOTE] = ACTIONS(349),
    [anon_sym_TILDE] = ACTIONS(351),
    [anon_sym_TILDE_AT] = ACTIONS(349),
    [sym_gensym] = ACTIONS(349),
    [anon_sym_AT] = ACTIONS(349),
  },
  [67] = {
    [sym__anything] = STATE(102),
    [sym__literals] = STATE(102),
    [sym__collection_literals] = STATE(102),
    [sym_boolean] = STATE(102),
    [sym_number] = STATE(102),
    [sym__number] = STATE(32),
    [sym_character] = STATE(102),
    [sym__character] = STATE(33),
    [sym_string] = STATE(102),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(102),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(102),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(102),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(102),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(102),
    [sym_list] = STATE(102),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(102),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(102),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(102),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(102),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(102),
    [sym_anonymous_function] = STATE(102),
    [sym_shorthand_function] = STATE(102),
    [sym_defn] = STATE(102),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(102),
    [sym_var_quote] = STATE(102),
    [sym_unquote] = STATE(102),
    [sym_unquote_splice] = STATE(102),
    [sym_deref] = STATE(102),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(207),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
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
    [anon_sym_POUND_] = ACTIONS(135),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(209),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(147),
    [anon_sym_TILDE_AT] = ACTIONS(149),
    [sym_gensym] = ACTIONS(209),
    [anon_sym_AT] = ACTIONS(73),
  },
  [68] = {
    [sym__anything] = STATE(132),
    [sym__literals] = STATE(132),
    [sym__collection_literals] = STATE(132),
    [sym_boolean] = STATE(132),
    [sym_number] = STATE(132),
    [sym__number] = STATE(32),
    [sym_character] = STATE(132),
    [sym__character] = STATE(33),
    [sym_string] = STATE(132),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(132),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(132),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(132),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(132),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(132),
    [sym_list] = STATE(132),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(132),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(132),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(132),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(132),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(132),
    [sym_anonymous_function] = STATE(132),
    [sym_shorthand_function] = STATE(132),
    [sym_defn] = STATE(132),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(132),
    [sym_var_quote] = STATE(132),
    [sym_unquote] = STATE(132),
    [sym_unquote_splice] = STATE(132),
    [sym_deref] = STATE(132),
    [aux_sym_program_repeat1] = STATE(132),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(353),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(355),
    [anon_sym_COLON] = ACTIONS(25),
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
    [anon_sym_POUND_] = ACTIONS(135),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(357),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(147),
    [anon_sym_TILDE_AT] = ACTIONS(149),
    [sym_gensym] = ACTIONS(357),
    [anon_sym_AT] = ACTIONS(73),
  },
  [69] = {
    [sym_symbol] = STATE(136),
    [sym__symbol] = STATE(137),
    [sym_threading_macro] = STATE(137),
    [sym_qualified_symbol] = STATE(137),
    [sym_vector] = STATE(138),
    [sym__vector] = STATE(40),
    [sym__after_the_fn_name] = STATE(139),
    [sym_function_name] = STATE(140),
    [sym__single_arity_fn] = STATE(139),
    [sym__multi_arity_fn] = STATE(139),
    [sym_params] = STATE(141),
    [aux_sym__multi_arity_fn_repeat1] = STATE(142),
    [anon_sym_DASH_GT] = ACTIONS(359),
    [anon_sym_DASH_GT_GT] = ACTIONS(361),
    [anon_sym_as_DASH_GT] = ACTIONS(361),
    [anon_sym_some_DASH_GT] = ACTIONS(359),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(361),
    [anon_sym_cond_DASH_GT] = ACTIONS(359),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(361),
    [sym__symbol_chars] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(39),
  },
  [70] = {
    [sym_symbol] = STATE(136),
    [sym__symbol] = STATE(137),
    [sym_threading_macro] = STATE(137),
    [sym_qualified_symbol] = STATE(137),
    [sym_function_name] = STATE(143),
    [sym_metadata] = STATE(144),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(145),
    [aux_sym_metadata_repeat1] = STATE(145),
    [anon_sym_DASH_GT] = ACTIONS(359),
    [anon_sym_DASH_GT_GT] = ACTIONS(361),
    [anon_sym_as_DASH_GT] = ACTIONS(361),
    [anon_sym_some_DASH_GT] = ACTIONS(359),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(361),
    [anon_sym_cond_DASH_GT] = ACTIONS(359),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(361),
    [sym__symbol_chars] = ACTIONS(363),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
  },
  [71] = {
    [sym__anything] = STATE(112),
    [sym__literals] = STATE(112),
    [sym__collection_literals] = STATE(112),
    [sym_boolean] = STATE(112),
    [sym_number] = STATE(112),
    [sym__number] = STATE(32),
    [sym_character] = STATE(112),
    [sym__character] = STATE(33),
    [sym_string] = STATE(112),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(112),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(112),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(112),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(112),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(112),
    [sym_list] = STATE(112),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(112),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(112),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(112),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(112),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(112),
    [sym_anonymous_function] = STATE(112),
    [sym_shorthand_function] = STATE(112),
    [sym_defn] = STATE(112),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(112),
    [sym_var_quote] = STATE(112),
    [sym_unquote] = STATE(112),
    [sym_unquote_splice] = STATE(112),
    [sym_deref] = STATE(112),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(229),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
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
    [anon_sym_POUND_] = ACTIONS(135),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(231),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(147),
    [anon_sym_TILDE_AT] = ACTIONS(149),
    [sym_gensym] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(73),
  },
  [72] = {
    [sym__anything] = STATE(114),
    [sym__literals] = STATE(114),
    [sym__collection_literals] = STATE(114),
    [sym_boolean] = STATE(114),
    [sym_number] = STATE(114),
    [sym__number] = STATE(32),
    [sym_character] = STATE(114),
    [sym__character] = STATE(33),
    [sym_string] = STATE(114),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(114),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(114),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(114),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(114),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(114),
    [sym_list] = STATE(114),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(114),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(114),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(114),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(114),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(114),
    [sym_anonymous_function] = STATE(114),
    [sym_shorthand_function] = STATE(114),
    [sym_defn] = STATE(114),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(114),
    [sym_var_quote] = STATE(114),
    [sym_unquote] = STATE(114),
    [sym_unquote_splice] = STATE(114),
    [sym_deref] = STATE(114),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(233),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
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
    [anon_sym_POUND_] = ACTIONS(135),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(235),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(147),
    [anon_sym_TILDE_AT] = ACTIONS(149),
    [sym_gensym] = ACTIONS(235),
    [anon_sym_AT] = ACTIONS(73),
  },
  [73] = {
    [sym__anything] = STATE(115),
    [sym__literals] = STATE(115),
    [sym__collection_literals] = STATE(115),
    [sym_boolean] = STATE(115),
    [sym_number] = STATE(115),
    [sym__number] = STATE(32),
    [sym_character] = STATE(115),
    [sym__character] = STATE(33),
    [sym_string] = STATE(115),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(115),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(115),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(115),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(115),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(115),
    [sym_list] = STATE(115),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(115),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(115),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(115),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(115),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(115),
    [sym_anonymous_function] = STATE(115),
    [sym_shorthand_function] = STATE(115),
    [sym_defn] = STATE(115),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(115),
    [sym_var_quote] = STATE(115),
    [sym_unquote] = STATE(115),
    [sym_unquote_splice] = STATE(115),
    [sym_deref] = STATE(115),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(237),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
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
    [anon_sym_POUND_] = ACTIONS(135),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(239),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(147),
    [anon_sym_TILDE_AT] = ACTIONS(149),
    [sym_gensym] = ACTIONS(239),
    [anon_sym_AT] = ACTIONS(73),
  },
  [74] = {
    [sym__anything] = STATE(147),
    [sym__literals] = STATE(147),
    [sym__collection_literals] = STATE(147),
    [sym_boolean] = STATE(147),
    [sym_number] = STATE(147),
    [sym__number] = STATE(32),
    [sym_character] = STATE(147),
    [sym__character] = STATE(33),
    [sym_string] = STATE(147),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(147),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(147),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(147),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(147),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(147),
    [sym_list] = STATE(147),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(147),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(147),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(147),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(147),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(147),
    [sym_anonymous_function] = STATE(147),
    [sym_shorthand_function] = STATE(147),
    [sym_defn] = STATE(147),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(147),
    [sym_var_quote] = STATE(147),
    [sym_unquote] = STATE(147),
    [sym_unquote_splice] = STATE(147),
    [sym_deref] = STATE(147),
    [aux_sym_program_repeat1] = STATE(147),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(367),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(369),
    [anon_sym_COLON] = ACTIONS(25),
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
    [anon_sym_POUND_] = ACTIONS(135),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(371),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(147),
    [anon_sym_TILDE_AT] = ACTIONS(149),
    [sym_gensym] = ACTIONS(371),
    [anon_sym_AT] = ACTIONS(73),
  },
  [75] = {
    [sym__anything] = STATE(55),
    [sym__literals] = STATE(55),
    [sym__collection_literals] = STATE(55),
    [sym_boolean] = STATE(55),
    [sym_number] = STATE(55),
    [sym__number] = STATE(32),
    [sym_character] = STATE(55),
    [sym__character] = STATE(33),
    [sym_string] = STATE(55),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(55),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(55),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(55),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(55),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(55),
    [sym_list] = STATE(55),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(55),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(55),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(55),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(55),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(55),
    [sym_anonymous_function] = STATE(55),
    [sym_shorthand_function] = STATE(55),
    [sym_defn] = STATE(55),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(55),
    [sym_var_quote] = STATE(55),
    [sym_unquote] = STATE(55),
    [sym_unquote_splice] = STATE(55),
    [sym_deref] = STATE(55),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(93),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(153),
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
    [anon_sym_POUND_] = ACTIONS(157),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(95),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(161),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(163),
    [anon_sym_TILDE_AT] = ACTIONS(165),
    [sym_gensym] = ACTIONS(95),
    [anon_sym_AT] = ACTIONS(73),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(373),
    [sym_nil] = ACTIONS(375),
    [sym_true] = ACTIONS(375),
    [sym_false] = ACTIONS(375),
    [sym_number_long] = ACTIONS(375),
    [sym_number_double] = ACTIONS(373),
    [sym_number_bigint] = ACTIONS(375),
    [sym_number_ratio] = ACTIONS(373),
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
    [sym_member_access] = ACTIONS(373),
    [sym_field_access] = ACTIONS(373),
    [sym_new_class] = ACTIONS(373),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(373),
    [anon_sym_TILDE] = ACTIONS(375),
    [anon_sym_TILDE_AT] = ACTIONS(373),
    [sym_gensym] = ACTIONS(373),
    [anon_sym_AT] = ACTIONS(373),
  },
  [77] = {
    [sym__anything] = STATE(102),
    [sym__literals] = STATE(102),
    [sym__collection_literals] = STATE(102),
    [sym_boolean] = STATE(102),
    [sym_number] = STATE(102),
    [sym__number] = STATE(32),
    [sym_character] = STATE(102),
    [sym__character] = STATE(33),
    [sym_string] = STATE(102),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(102),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(102),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(102),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(102),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(102),
    [sym_list] = STATE(102),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(102),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(102),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(102),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(102),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(102),
    [sym_anonymous_function] = STATE(102),
    [sym_shorthand_function] = STATE(102),
    [sym_defn] = STATE(102),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(102),
    [sym_var_quote] = STATE(102),
    [sym_unquote] = STATE(102),
    [sym_unquote_splice] = STATE(102),
    [sym_deref] = STATE(102),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(207),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(153),
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
    [anon_sym_POUND_] = ACTIONS(157),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(209),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(161),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(163),
    [anon_sym_TILDE_AT] = ACTIONS(165),
    [sym_gensym] = ACTIONS(209),
    [anon_sym_AT] = ACTIONS(73),
  },
  [78] = {
    [sym__anything] = STATE(112),
    [sym__literals] = STATE(112),
    [sym__collection_literals] = STATE(112),
    [sym_boolean] = STATE(112),
    [sym_number] = STATE(112),
    [sym__number] = STATE(32),
    [sym_character] = STATE(112),
    [sym__character] = STATE(33),
    [sym_string] = STATE(112),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(112),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(112),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(112),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(112),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(112),
    [sym_list] = STATE(112),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(112),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(112),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(112),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(112),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(112),
    [sym_anonymous_function] = STATE(112),
    [sym_shorthand_function] = STATE(112),
    [sym_defn] = STATE(112),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(112),
    [sym_var_quote] = STATE(112),
    [sym_unquote] = STATE(112),
    [sym_unquote_splice] = STATE(112),
    [sym_deref] = STATE(112),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(229),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(153),
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
    [anon_sym_POUND_] = ACTIONS(157),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(231),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(161),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(163),
    [anon_sym_TILDE_AT] = ACTIONS(165),
    [sym_gensym] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(73),
  },
  [79] = {
    [sym__anything] = STATE(114),
    [sym__literals] = STATE(114),
    [sym__collection_literals] = STATE(114),
    [sym_boolean] = STATE(114),
    [sym_number] = STATE(114),
    [sym__number] = STATE(32),
    [sym_character] = STATE(114),
    [sym__character] = STATE(33),
    [sym_string] = STATE(114),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(114),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(114),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(114),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(114),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(114),
    [sym_list] = STATE(114),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(114),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(114),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(114),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(114),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(114),
    [sym_anonymous_function] = STATE(114),
    [sym_shorthand_function] = STATE(114),
    [sym_defn] = STATE(114),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(114),
    [sym_var_quote] = STATE(114),
    [sym_unquote] = STATE(114),
    [sym_unquote_splice] = STATE(114),
    [sym_deref] = STATE(114),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(233),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(153),
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
    [anon_sym_POUND_] = ACTIONS(157),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(235),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(161),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(163),
    [anon_sym_TILDE_AT] = ACTIONS(165),
    [sym_gensym] = ACTIONS(235),
    [anon_sym_AT] = ACTIONS(73),
  },
  [80] = {
    [sym__anything] = STATE(115),
    [sym__literals] = STATE(115),
    [sym__collection_literals] = STATE(115),
    [sym_boolean] = STATE(115),
    [sym_number] = STATE(115),
    [sym__number] = STATE(32),
    [sym_character] = STATE(115),
    [sym__character] = STATE(33),
    [sym_string] = STATE(115),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(115),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(115),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(115),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(115),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(115),
    [sym_list] = STATE(115),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(115),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(115),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(115),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(115),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(115),
    [sym_anonymous_function] = STATE(115),
    [sym_shorthand_function] = STATE(115),
    [sym_defn] = STATE(115),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(115),
    [sym_var_quote] = STATE(115),
    [sym_unquote] = STATE(115),
    [sym_unquote_splice] = STATE(115),
    [sym_deref] = STATE(115),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(237),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(153),
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
    [anon_sym_POUND_] = ACTIONS(157),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(239),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(161),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(163),
    [anon_sym_TILDE_AT] = ACTIONS(165),
    [sym_gensym] = ACTIONS(239),
    [anon_sym_AT] = ACTIONS(73),
  },
  [81] = {
    [sym__anything] = STATE(149),
    [sym__literals] = STATE(149),
    [sym__collection_literals] = STATE(149),
    [sym_boolean] = STATE(149),
    [sym_number] = STATE(149),
    [sym__number] = STATE(32),
    [sym_character] = STATE(149),
    [sym__character] = STATE(33),
    [sym_string] = STATE(149),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(149),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(149),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(149),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(149),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(149),
    [sym_list] = STATE(149),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(149),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(149),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(149),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(149),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(149),
    [sym_anonymous_function] = STATE(149),
    [sym_shorthand_function] = STATE(149),
    [sym_defn] = STATE(149),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(149),
    [sym_var_quote] = STATE(149),
    [sym_unquote] = STATE(149),
    [sym_unquote_splice] = STATE(149),
    [sym_deref] = STATE(149),
    [aux_sym_program_repeat1] = STATE(149),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(377),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(153),
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
    [anon_sym_RBRACK] = ACTIONS(379),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(157),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(381),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(161),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(163),
    [anon_sym_TILDE_AT] = ACTIONS(165),
    [sym_gensym] = ACTIONS(381),
    [anon_sym_AT] = ACTIONS(73),
  },
  [82] = {
    [sym__anything] = STATE(55),
    [sym__literals] = STATE(55),
    [sym__collection_literals] = STATE(55),
    [sym_boolean] = STATE(55),
    [sym_number] = STATE(55),
    [sym__number] = STATE(32),
    [sym_character] = STATE(55),
    [sym__character] = STATE(33),
    [sym_string] = STATE(55),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(55),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(55),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(55),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(55),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(55),
    [sym_list] = STATE(55),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(55),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(55),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(55),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(55),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(55),
    [sym_anonymous_function] = STATE(55),
    [sym_shorthand_function] = STATE(55),
    [sym_defn] = STATE(55),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(55),
    [sym_var_quote] = STATE(55),
    [sym_unquote] = STATE(55),
    [sym_unquote_splice] = STATE(55),
    [sym_deref] = STATE(55),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(93),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(169),
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
    [anon_sym_POUND_] = ACTIONS(173),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(95),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(179),
    [anon_sym_TILDE_AT] = ACTIONS(181),
    [sym_gensym] = ACTIONS(95),
    [anon_sym_AT] = ACTIONS(73),
  },
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(383),
    [sym_nil] = ACTIONS(385),
    [sym_true] = ACTIONS(385),
    [sym_false] = ACTIONS(385),
    [sym_number_long] = ACTIONS(385),
    [sym_number_double] = ACTIONS(383),
    [sym_number_bigint] = ACTIONS(385),
    [sym_number_ratio] = ACTIONS(383),
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
    [sym_member_access] = ACTIONS(383),
    [sym_field_access] = ACTIONS(383),
    [sym_new_class] = ACTIONS(383),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(383),
    [anon_sym_TILDE] = ACTIONS(385),
    [anon_sym_TILDE_AT] = ACTIONS(383),
    [sym_gensym] = ACTIONS(383),
    [anon_sym_AT] = ACTIONS(383),
  },
  [84] = {
    [sym__anything] = STATE(102),
    [sym__literals] = STATE(102),
    [sym__collection_literals] = STATE(102),
    [sym_boolean] = STATE(102),
    [sym_number] = STATE(102),
    [sym__number] = STATE(32),
    [sym_character] = STATE(102),
    [sym__character] = STATE(33),
    [sym_string] = STATE(102),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(102),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(102),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(102),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(102),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(102),
    [sym_list] = STATE(102),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(102),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(102),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(102),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(102),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(102),
    [sym_anonymous_function] = STATE(102),
    [sym_shorthand_function] = STATE(102),
    [sym_defn] = STATE(102),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(102),
    [sym_var_quote] = STATE(102),
    [sym_unquote] = STATE(102),
    [sym_unquote_splice] = STATE(102),
    [sym_deref] = STATE(102),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(207),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(169),
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
    [anon_sym_POUND_] = ACTIONS(173),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(209),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(179),
    [anon_sym_TILDE_AT] = ACTIONS(181),
    [sym_gensym] = ACTIONS(209),
    [anon_sym_AT] = ACTIONS(73),
  },
  [85] = {
    [sym__anything] = STATE(112),
    [sym__literals] = STATE(112),
    [sym__collection_literals] = STATE(112),
    [sym_boolean] = STATE(112),
    [sym_number] = STATE(112),
    [sym__number] = STATE(32),
    [sym_character] = STATE(112),
    [sym__character] = STATE(33),
    [sym_string] = STATE(112),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(112),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(112),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(112),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(112),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(112),
    [sym_list] = STATE(112),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(112),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(112),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(112),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(112),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(112),
    [sym_anonymous_function] = STATE(112),
    [sym_shorthand_function] = STATE(112),
    [sym_defn] = STATE(112),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(112),
    [sym_var_quote] = STATE(112),
    [sym_unquote] = STATE(112),
    [sym_unquote_splice] = STATE(112),
    [sym_deref] = STATE(112),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(229),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(169),
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
    [anon_sym_POUND_] = ACTIONS(173),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(231),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(179),
    [anon_sym_TILDE_AT] = ACTIONS(181),
    [sym_gensym] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(73),
  },
  [86] = {
    [sym__anything] = STATE(114),
    [sym__literals] = STATE(114),
    [sym__collection_literals] = STATE(114),
    [sym_boolean] = STATE(114),
    [sym_number] = STATE(114),
    [sym__number] = STATE(32),
    [sym_character] = STATE(114),
    [sym__character] = STATE(33),
    [sym_string] = STATE(114),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(114),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(114),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(114),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(114),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(114),
    [sym_list] = STATE(114),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(114),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(114),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(114),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(114),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(114),
    [sym_anonymous_function] = STATE(114),
    [sym_shorthand_function] = STATE(114),
    [sym_defn] = STATE(114),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(114),
    [sym_var_quote] = STATE(114),
    [sym_unquote] = STATE(114),
    [sym_unquote_splice] = STATE(114),
    [sym_deref] = STATE(114),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(233),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(169),
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
    [anon_sym_POUND_] = ACTIONS(173),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(235),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(179),
    [anon_sym_TILDE_AT] = ACTIONS(181),
    [sym_gensym] = ACTIONS(235),
    [anon_sym_AT] = ACTIONS(73),
  },
  [87] = {
    [sym__anything] = STATE(115),
    [sym__literals] = STATE(115),
    [sym__collection_literals] = STATE(115),
    [sym_boolean] = STATE(115),
    [sym_number] = STATE(115),
    [sym__number] = STATE(32),
    [sym_character] = STATE(115),
    [sym__character] = STATE(33),
    [sym_string] = STATE(115),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(115),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(115),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(115),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(115),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(115),
    [sym_list] = STATE(115),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(115),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(115),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(115),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(115),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(115),
    [sym_anonymous_function] = STATE(115),
    [sym_shorthand_function] = STATE(115),
    [sym_defn] = STATE(115),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(115),
    [sym_var_quote] = STATE(115),
    [sym_unquote] = STATE(115),
    [sym_unquote_splice] = STATE(115),
    [sym_deref] = STATE(115),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(237),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(169),
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
    [anon_sym_POUND_] = ACTIONS(173),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(239),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(179),
    [anon_sym_TILDE_AT] = ACTIONS(181),
    [sym_gensym] = ACTIONS(239),
    [anon_sym_AT] = ACTIONS(73),
  },
  [88] = {
    [sym__anything] = STATE(150),
    [sym__literals] = STATE(150),
    [sym__collection_literals] = STATE(150),
    [sym_boolean] = STATE(150),
    [sym_number] = STATE(150),
    [sym__number] = STATE(32),
    [sym_character] = STATE(150),
    [sym__character] = STATE(33),
    [sym_string] = STATE(150),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(150),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(150),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(150),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(150),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(150),
    [sym_list] = STATE(150),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(150),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(150),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym__hash_map_value] = STATE(150),
    [sym_set] = STATE(150),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(150),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(150),
    [sym_anonymous_function] = STATE(150),
    [sym_shorthand_function] = STATE(150),
    [sym_defn] = STATE(150),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(150),
    [sym_var_quote] = STATE(150),
    [sym_unquote] = STATE(150),
    [sym_unquote_splice] = STATE(150),
    [sym_deref] = STATE(150),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(387),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(189),
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
    [anon_sym_POUND_] = ACTIONS(193),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(389),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(197),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(199),
    [anon_sym_TILDE_AT] = ACTIONS(201),
    [sym_gensym] = ACTIONS(389),
    [anon_sym_AT] = ACTIONS(73),
  },
  [89] = {
    [sym__anything] = STATE(88),
    [sym__literals] = STATE(88),
    [sym__collection_literals] = STATE(88),
    [sym_boolean] = STATE(88),
    [sym_number] = STATE(88),
    [sym__number] = STATE(32),
    [sym_character] = STATE(88),
    [sym__character] = STATE(33),
    [sym_string] = STATE(88),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(88),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(88),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(88),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(88),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(88),
    [sym_list] = STATE(88),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(88),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(88),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym__hash_map_kv_pair] = STATE(152),
    [sym__hash_map_key] = STATE(88),
    [sym_set] = STATE(88),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(88),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(88),
    [sym_anonymous_function] = STATE(88),
    [sym_shorthand_function] = STATE(88),
    [sym_defn] = STATE(88),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(88),
    [sym_var_quote] = STATE(88),
    [sym_unquote] = STATE(88),
    [sym_unquote_splice] = STATE(88),
    [sym_deref] = STATE(88),
    [aux_sym__hash_map_repeat1] = STATE(152),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(167),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(169),
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
    [anon_sym_RBRACE] = ACTIONS(391),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(173),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(175),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(179),
    [anon_sym_TILDE_AT] = ACTIONS(181),
    [sym_gensym] = ACTIONS(175),
    [anon_sym_AT] = ACTIONS(73),
  },
  [90] = {
    [ts_builtin_sym_end] = ACTIONS(393),
    [sym_nil] = ACTIONS(395),
    [sym_true] = ACTIONS(395),
    [sym_false] = ACTIONS(395),
    [sym_number_long] = ACTIONS(395),
    [sym_number_double] = ACTIONS(393),
    [sym_number_bigint] = ACTIONS(395),
    [sym_number_ratio] = ACTIONS(393),
    [anon_sym_BSLASH] = ACTIONS(393),
    [anon_sym_DQUOTE] = ACTIONS(393),
    [anon_sym_POUND_DQUOTE] = ACTIONS(393),
    [anon_sym_SQUOTE] = ACTIONS(393),
    [anon_sym_LPARENquote] = ACTIONS(393),
    [anon_sym_RPAREN] = ACTIONS(393),
    [anon_sym_COLON] = ACTIONS(395),
    [anon_sym_COLON_COLON] = ACTIONS(393),
    [anon_sym_DASH_GT] = ACTIONS(395),
    [anon_sym_DASH_GT_GT] = ACTIONS(393),
    [anon_sym_as_DASH_GT] = ACTIONS(393),
    [anon_sym_some_DASH_GT] = ACTIONS(395),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(393),
    [anon_sym_cond_DASH_GT] = ACTIONS(395),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(393),
    [sym__symbol_chars] = ACTIONS(395),
    [sym_member_access] = ACTIONS(393),
    [sym_field_access] = ACTIONS(393),
    [sym_new_class] = ACTIONS(393),
    [anon_sym_LPAREN] = ACTIONS(395),
    [anon_sym_LBRACK] = ACTIONS(393),
    [anon_sym_RBRACK] = ACTIONS(393),
    [anon_sym_LBRACE] = ACTIONS(393),
    [anon_sym_RBRACE] = ACTIONS(393),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(393),
    [anon_sym_POUND] = ACTIONS(395),
    [anon_sym_POUND_LBRACE] = ACTIONS(393),
    [anon_sym_SEMI] = ACTIONS(393),
    [anon_sym_POUND_BANG] = ACTIONS(393),
    [anon_sym_POUND_] = ACTIONS(393),
    [anon_sym_POUND_LPAREN] = ACTIONS(393),
    [sym_shorthand_function_arg] = ACTIONS(393),
    [anon_sym_CARET] = ACTIONS(395),
    [anon_sym_CARET_COLON] = ACTIONS(393),
    [anon_sym_CARET_DQUOTE] = ACTIONS(393),
    [anon_sym_BQUOTE] = ACTIONS(393),
    [anon_sym_POUND_SQUOTE] = ACTIONS(393),
    [anon_sym_TILDE] = ACTIONS(395),
    [anon_sym_TILDE_AT] = ACTIONS(393),
    [sym_gensym] = ACTIONS(393),
    [anon_sym_AT] = ACTIONS(393),
  },
  [91] = {
    [sym__anything] = STATE(88),
    [sym__literals] = STATE(88),
    [sym__collection_literals] = STATE(88),
    [sym_boolean] = STATE(88),
    [sym_number] = STATE(88),
    [sym__number] = STATE(32),
    [sym_character] = STATE(88),
    [sym__character] = STATE(33),
    [sym_string] = STATE(88),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(88),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(88),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(88),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(88),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(88),
    [sym_list] = STATE(88),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(88),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(88),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym__hash_map_kv_pair] = STATE(152),
    [sym__hash_map_key] = STATE(88),
    [sym_set] = STATE(88),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(88),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(88),
    [sym_anonymous_function] = STATE(88),
    [sym_shorthand_function] = STATE(88),
    [sym_defn] = STATE(88),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(88),
    [sym_var_quote] = STATE(88),
    [sym_unquote] = STATE(88),
    [sym_unquote_splice] = STATE(88),
    [sym_deref] = STATE(88),
    [aux_sym__hash_map_repeat1] = STATE(152),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(167),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(169),
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
    [anon_sym_RBRACE] = ACTIONS(397),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(173),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(175),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(179),
    [anon_sym_TILDE_AT] = ACTIONS(181),
    [sym_gensym] = ACTIONS(175),
    [anon_sym_AT] = ACTIONS(73),
  },
  [92] = {
    [anon_sym_LBRACE] = ACTIONS(399),
  },
  [93] = {
    [sym__anything] = STATE(55),
    [sym__literals] = STATE(55),
    [sym__collection_literals] = STATE(55),
    [sym_boolean] = STATE(55),
    [sym_number] = STATE(55),
    [sym__number] = STATE(32),
    [sym_character] = STATE(55),
    [sym__character] = STATE(33),
    [sym_string] = STATE(55),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(55),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(55),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(55),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(55),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(55),
    [sym_list] = STATE(55),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(55),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(55),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(55),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(55),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(55),
    [sym_anonymous_function] = STATE(55),
    [sym_shorthand_function] = STATE(55),
    [sym_defn] = STATE(55),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(55),
    [sym_var_quote] = STATE(55),
    [sym_unquote] = STATE(55),
    [sym_unquote_splice] = STATE(55),
    [sym_deref] = STATE(55),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(93),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(189),
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
    [anon_sym_POUND_] = ACTIONS(193),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(95),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(197),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(199),
    [anon_sym_TILDE_AT] = ACTIONS(201),
    [sym_gensym] = ACTIONS(95),
    [anon_sym_AT] = ACTIONS(73),
  },
  [94] = {
    [ts_builtin_sym_end] = ACTIONS(401),
    [sym_nil] = ACTIONS(403),
    [sym_true] = ACTIONS(403),
    [sym_false] = ACTIONS(403),
    [sym_number_long] = ACTIONS(403),
    [sym_number_double] = ACTIONS(401),
    [sym_number_bigint] = ACTIONS(403),
    [sym_number_ratio] = ACTIONS(401),
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
    [sym_member_access] = ACTIONS(401),
    [sym_field_access] = ACTIONS(401),
    [sym_new_class] = ACTIONS(401),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(401),
    [anon_sym_TILDE] = ACTIONS(403),
    [anon_sym_TILDE_AT] = ACTIONS(401),
    [sym_gensym] = ACTIONS(401),
    [anon_sym_AT] = ACTIONS(401),
  },
  [95] = {
    [sym__anything] = STATE(102),
    [sym__literals] = STATE(102),
    [sym__collection_literals] = STATE(102),
    [sym_boolean] = STATE(102),
    [sym_number] = STATE(102),
    [sym__number] = STATE(32),
    [sym_character] = STATE(102),
    [sym__character] = STATE(33),
    [sym_string] = STATE(102),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(102),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(102),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(102),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(102),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(102),
    [sym_list] = STATE(102),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(102),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(102),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(102),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(102),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(102),
    [sym_anonymous_function] = STATE(102),
    [sym_shorthand_function] = STATE(102),
    [sym_defn] = STATE(102),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(102),
    [sym_var_quote] = STATE(102),
    [sym_unquote] = STATE(102),
    [sym_unquote_splice] = STATE(102),
    [sym_deref] = STATE(102),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(207),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(189),
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
    [anon_sym_POUND_] = ACTIONS(193),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(209),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(197),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(199),
    [anon_sym_TILDE_AT] = ACTIONS(201),
    [sym_gensym] = ACTIONS(209),
    [anon_sym_AT] = ACTIONS(73),
  },
  [96] = {
    [sym__anything] = STATE(112),
    [sym__literals] = STATE(112),
    [sym__collection_literals] = STATE(112),
    [sym_boolean] = STATE(112),
    [sym_number] = STATE(112),
    [sym__number] = STATE(32),
    [sym_character] = STATE(112),
    [sym__character] = STATE(33),
    [sym_string] = STATE(112),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(112),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(112),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(112),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(112),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(112),
    [sym_list] = STATE(112),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(112),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(112),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(112),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(112),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(112),
    [sym_anonymous_function] = STATE(112),
    [sym_shorthand_function] = STATE(112),
    [sym_defn] = STATE(112),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(112),
    [sym_var_quote] = STATE(112),
    [sym_unquote] = STATE(112),
    [sym_unquote_splice] = STATE(112),
    [sym_deref] = STATE(112),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(229),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(189),
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
    [anon_sym_POUND_] = ACTIONS(193),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(231),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(197),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(199),
    [anon_sym_TILDE_AT] = ACTIONS(201),
    [sym_gensym] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(73),
  },
  [97] = {
    [sym__anything] = STATE(114),
    [sym__literals] = STATE(114),
    [sym__collection_literals] = STATE(114),
    [sym_boolean] = STATE(114),
    [sym_number] = STATE(114),
    [sym__number] = STATE(32),
    [sym_character] = STATE(114),
    [sym__character] = STATE(33),
    [sym_string] = STATE(114),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(114),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(114),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(114),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(114),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(114),
    [sym_list] = STATE(114),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(114),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(114),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(114),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(114),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(114),
    [sym_anonymous_function] = STATE(114),
    [sym_shorthand_function] = STATE(114),
    [sym_defn] = STATE(114),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(114),
    [sym_var_quote] = STATE(114),
    [sym_unquote] = STATE(114),
    [sym_unquote_splice] = STATE(114),
    [sym_deref] = STATE(114),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(233),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(189),
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
    [anon_sym_POUND_] = ACTIONS(193),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(235),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(197),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(199),
    [anon_sym_TILDE_AT] = ACTIONS(201),
    [sym_gensym] = ACTIONS(235),
    [anon_sym_AT] = ACTIONS(73),
  },
  [98] = {
    [sym__anything] = STATE(115),
    [sym__literals] = STATE(115),
    [sym__collection_literals] = STATE(115),
    [sym_boolean] = STATE(115),
    [sym_number] = STATE(115),
    [sym__number] = STATE(32),
    [sym_character] = STATE(115),
    [sym__character] = STATE(33),
    [sym_string] = STATE(115),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(115),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(115),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(115),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(115),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(115),
    [sym_list] = STATE(115),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(115),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(115),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(115),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(115),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(115),
    [sym_anonymous_function] = STATE(115),
    [sym_shorthand_function] = STATE(115),
    [sym_defn] = STATE(115),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(115),
    [sym_var_quote] = STATE(115),
    [sym_unquote] = STATE(115),
    [sym_unquote_splice] = STATE(115),
    [sym_deref] = STATE(115),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(237),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(189),
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
    [anon_sym_POUND_] = ACTIONS(193),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(239),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(197),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(199),
    [anon_sym_TILDE_AT] = ACTIONS(201),
    [sym_gensym] = ACTIONS(239),
    [anon_sym_AT] = ACTIONS(73),
  },
  [99] = {
    [sym__anything] = STATE(156),
    [sym__literals] = STATE(156),
    [sym__collection_literals] = STATE(156),
    [sym_boolean] = STATE(156),
    [sym_number] = STATE(156),
    [sym__number] = STATE(32),
    [sym_character] = STATE(156),
    [sym__character] = STATE(33),
    [sym_string] = STATE(156),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(156),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(156),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(156),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(156),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(156),
    [sym_list] = STATE(156),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(156),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(156),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(156),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(156),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(156),
    [sym_anonymous_function] = STATE(156),
    [sym_shorthand_function] = STATE(156),
    [sym_defn] = STATE(156),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(156),
    [sym_var_quote] = STATE(156),
    [sym_unquote] = STATE(156),
    [sym_unquote_splice] = STATE(156),
    [sym_deref] = STATE(156),
    [aux_sym_program_repeat1] = STATE(156),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(405),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(189),
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
    [anon_sym_RBRACE] = ACTIONS(407),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(193),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(409),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(197),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(199),
    [anon_sym_TILDE_AT] = ACTIONS(201),
    [sym_gensym] = ACTIONS(409),
    [anon_sym_AT] = ACTIONS(73),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(411),
    [sym_nil] = ACTIONS(413),
    [sym_true] = ACTIONS(413),
    [sym_false] = ACTIONS(413),
    [sym_number_long] = ACTIONS(413),
    [sym_number_double] = ACTIONS(411),
    [sym_number_bigint] = ACTIONS(413),
    [sym_number_ratio] = ACTIONS(411),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(411),
    [anon_sym_TILDE] = ACTIONS(413),
    [anon_sym_TILDE_AT] = ACTIONS(411),
    [sym_gensym] = ACTIONS(411),
    [anon_sym_AT] = ACTIONS(411),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(415),
    [sym_nil] = ACTIONS(417),
    [sym_true] = ACTIONS(417),
    [sym_false] = ACTIONS(417),
    [sym_number_long] = ACTIONS(417),
    [sym_number_double] = ACTIONS(415),
    [sym_number_bigint] = ACTIONS(417),
    [sym_number_ratio] = ACTIONS(415),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(415),
    [anon_sym_TILDE] = ACTIONS(417),
    [anon_sym_TILDE_AT] = ACTIONS(415),
    [sym_gensym] = ACTIONS(415),
    [anon_sym_AT] = ACTIONS(415),
  },
  [102] = {
    [ts_builtin_sym_end] = ACTIONS(419),
    [sym_nil] = ACTIONS(421),
    [sym_true] = ACTIONS(421),
    [sym_false] = ACTIONS(421),
    [sym_number_long] = ACTIONS(421),
    [sym_number_double] = ACTIONS(419),
    [sym_number_bigint] = ACTIONS(421),
    [sym_number_ratio] = ACTIONS(419),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(419),
    [anon_sym_TILDE] = ACTIONS(421),
    [anon_sym_TILDE_AT] = ACTIONS(419),
    [sym_gensym] = ACTIONS(419),
    [anon_sym_AT] = ACTIONS(419),
  },
  [103] = {
    [ts_builtin_sym_end] = ACTIONS(423),
    [sym_nil] = ACTIONS(425),
    [sym_true] = ACTIONS(425),
    [sym_false] = ACTIONS(425),
    [sym_number_long] = ACTIONS(425),
    [sym_number_double] = ACTIONS(423),
    [sym_number_bigint] = ACTIONS(425),
    [sym_number_ratio] = ACTIONS(423),
    [anon_sym_BSLASH] = ACTIONS(423),
    [anon_sym_DQUOTE] = ACTIONS(423),
    [anon_sym_POUND_DQUOTE] = ACTIONS(423),
    [anon_sym_SQUOTE] = ACTIONS(423),
    [anon_sym_LPARENquote] = ACTIONS(423),
    [anon_sym_RPAREN] = ACTIONS(423),
    [anon_sym_COLON] = ACTIONS(425),
    [anon_sym_COLON_COLON] = ACTIONS(423),
    [anon_sym_DASH_GT] = ACTIONS(425),
    [anon_sym_DASH_GT_GT] = ACTIONS(423),
    [anon_sym_as_DASH_GT] = ACTIONS(423),
    [anon_sym_some_DASH_GT] = ACTIONS(425),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(423),
    [anon_sym_cond_DASH_GT] = ACTIONS(425),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(423),
    [sym__symbol_chars] = ACTIONS(425),
    [sym_member_access] = ACTIONS(423),
    [sym_field_access] = ACTIONS(423),
    [sym_new_class] = ACTIONS(423),
    [anon_sym_LPAREN] = ACTIONS(425),
    [anon_sym_LBRACK] = ACTIONS(423),
    [anon_sym_RBRACK] = ACTIONS(423),
    [anon_sym_LBRACE] = ACTIONS(423),
    [anon_sym_RBRACE] = ACTIONS(423),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(423),
    [anon_sym_POUND] = ACTIONS(425),
    [anon_sym_POUND_LBRACE] = ACTIONS(423),
    [anon_sym_SEMI] = ACTIONS(423),
    [anon_sym_POUND_BANG] = ACTIONS(423),
    [anon_sym_POUND_] = ACTIONS(423),
    [anon_sym_POUND_LPAREN] = ACTIONS(423),
    [sym_shorthand_function_arg] = ACTIONS(423),
    [anon_sym_CARET] = ACTIONS(425),
    [anon_sym_CARET_COLON] = ACTIONS(423),
    [anon_sym_CARET_DQUOTE] = ACTIONS(423),
    [anon_sym_BQUOTE] = ACTIONS(423),
    [anon_sym_POUND_SQUOTE] = ACTIONS(423),
    [anon_sym_TILDE] = ACTIONS(425),
    [anon_sym_TILDE_AT] = ACTIONS(423),
    [sym_gensym] = ACTIONS(423),
    [anon_sym_AT] = ACTIONS(423),
  },
  [104] = {
    [sym__anything] = STATE(147),
    [sym__literals] = STATE(147),
    [sym__collection_literals] = STATE(147),
    [sym_boolean] = STATE(147),
    [sym_number] = STATE(147),
    [sym__number] = STATE(32),
    [sym_character] = STATE(147),
    [sym__character] = STATE(33),
    [sym_string] = STATE(147),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(147),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(147),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(147),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(147),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(147),
    [sym_list] = STATE(147),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(147),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(147),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(147),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(147),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(147),
    [sym_anonymous_function] = STATE(147),
    [sym_shorthand_function] = STATE(147),
    [sym_defn] = STATE(147),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(147),
    [sym_var_quote] = STATE(147),
    [sym_unquote] = STATE(147),
    [sym_unquote_splice] = STATE(147),
    [sym_deref] = STATE(147),
    [aux_sym_program_repeat1] = STATE(147),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(367),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(427),
    [anon_sym_COLON] = ACTIONS(25),
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
    [anon_sym_POUND_] = ACTIONS(135),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(371),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(147),
    [anon_sym_TILDE_AT] = ACTIONS(149),
    [sym_gensym] = ACTIONS(371),
    [anon_sym_AT] = ACTIONS(73),
  },
  [105] = {
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
    [anon_sym_CARET] = ACTIONS(429),
    [anon_sym_CARET_COLON] = ACTIONS(431),
    [anon_sym_CARET_DQUOTE] = ACTIONS(431),
  },
  [106] = {
    [sym__anything] = STATE(88),
    [sym__literals] = STATE(88),
    [sym__collection_literals] = STATE(88),
    [sym_boolean] = STATE(88),
    [sym_number] = STATE(88),
    [sym__number] = STATE(32),
    [sym_character] = STATE(88),
    [sym__character] = STATE(33),
    [sym_string] = STATE(88),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(88),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(88),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(88),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(88),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(88),
    [sym_list] = STATE(88),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(88),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(88),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym__hash_map_kv_pair] = STATE(159),
    [sym__hash_map_key] = STATE(88),
    [sym_set] = STATE(88),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(88),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(88),
    [sym_anonymous_function] = STATE(88),
    [sym_shorthand_function] = STATE(88),
    [sym_defn] = STATE(88),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(88),
    [sym_var_quote] = STATE(88),
    [sym_unquote] = STATE(88),
    [sym_unquote_splice] = STATE(88),
    [sym_deref] = STATE(88),
    [aux_sym__hash_map_repeat1] = STATE(159),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(167),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(169),
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
    [anon_sym_POUND_] = ACTIONS(173),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(175),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(179),
    [anon_sym_TILDE_AT] = ACTIONS(181),
    [sym_gensym] = ACTIONS(175),
    [anon_sym_AT] = ACTIONS(73),
  },
  [107] = {
    [sym__anything] = STATE(88),
    [sym__literals] = STATE(88),
    [sym__collection_literals] = STATE(88),
    [sym_boolean] = STATE(88),
    [sym_number] = STATE(88),
    [sym__number] = STATE(32),
    [sym_character] = STATE(88),
    [sym__character] = STATE(33),
    [sym_string] = STATE(88),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(88),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(88),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(88),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(88),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(88),
    [sym_list] = STATE(88),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(88),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(88),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym__hash_map_kv_pair] = STATE(161),
    [sym__hash_map_key] = STATE(88),
    [sym_set] = STATE(88),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(88),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(88),
    [sym_anonymous_function] = STATE(88),
    [sym_shorthand_function] = STATE(88),
    [sym_defn] = STATE(88),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(88),
    [sym_var_quote] = STATE(88),
    [sym_unquote] = STATE(88),
    [sym_unquote_splice] = STATE(88),
    [sym_deref] = STATE(88),
    [aux_sym__hash_map_repeat1] = STATE(161),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(167),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(169),
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
    [anon_sym_RBRACE] = ACTIONS(435),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(173),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(175),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(179),
    [anon_sym_TILDE_AT] = ACTIONS(181),
    [sym_gensym] = ACTIONS(175),
    [anon_sym_AT] = ACTIONS(73),
  },
  [108] = {
    [sym__symbol_chars] = ACTIONS(437),
  },
  [109] = {
    [anon_sym_DASH_GT] = ACTIONS(439),
    [anon_sym_DASH_GT_GT] = ACTIONS(441),
    [anon_sym_as_DASH_GT] = ACTIONS(441),
    [anon_sym_some_DASH_GT] = ACTIONS(439),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(441),
    [anon_sym_cond_DASH_GT] = ACTIONS(439),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(441),
    [sym__symbol_chars] = ACTIONS(439),
    [anon_sym_LPAREN] = ACTIONS(441),
    [anon_sym_LBRACK] = ACTIONS(441),
    [anon_sym_LBRACE] = ACTIONS(441),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(441),
    [anon_sym_POUND] = ACTIONS(439),
    [anon_sym_POUND_LBRACE] = ACTIONS(441),
  },
  [110] = {
    [anon_sym_DASH_GT] = ACTIONS(283),
    [anon_sym_DASH_GT_GT] = ACTIONS(281),
    [anon_sym_as_DASH_GT] = ACTIONS(281),
    [anon_sym_some_DASH_GT] = ACTIONS(283),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(281),
    [anon_sym_cond_DASH_GT] = ACTIONS(283),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(281),
    [sym__symbol_chars] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(281),
    [anon_sym_LBRACK] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(281),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(281),
    [anon_sym_POUND] = ACTIONS(283),
    [anon_sym_POUND_LBRACE] = ACTIONS(281),
  },
  [111] = {
    [aux_sym__string_repeat1] = STATE(125),
    [anon_sym_DQUOTE] = ACTIONS(443),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(321),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(321),
  },
  [112] = {
    [ts_builtin_sym_end] = ACTIONS(445),
    [sym_nil] = ACTIONS(447),
    [sym_true] = ACTIONS(447),
    [sym_false] = ACTIONS(447),
    [sym_number_long] = ACTIONS(447),
    [sym_number_double] = ACTIONS(445),
    [sym_number_bigint] = ACTIONS(447),
    [sym_number_ratio] = ACTIONS(445),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(445),
    [anon_sym_TILDE] = ACTIONS(447),
    [anon_sym_TILDE_AT] = ACTIONS(445),
    [sym_gensym] = ACTIONS(445),
    [anon_sym_AT] = ACTIONS(445),
  },
  [113] = {
    [ts_builtin_sym_end] = ACTIONS(449),
    [sym_nil] = ACTIONS(451),
    [sym_true] = ACTIONS(451),
    [sym_false] = ACTIONS(451),
    [sym_number_long] = ACTIONS(451),
    [sym_number_double] = ACTIONS(449),
    [sym_number_bigint] = ACTIONS(451),
    [sym_number_ratio] = ACTIONS(449),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(449),
    [anon_sym_TILDE] = ACTIONS(451),
    [anon_sym_TILDE_AT] = ACTIONS(449),
    [sym_gensym] = ACTIONS(449),
    [anon_sym_AT] = ACTIONS(449),
  },
  [114] = {
    [ts_builtin_sym_end] = ACTIONS(453),
    [sym_nil] = ACTIONS(455),
    [sym_true] = ACTIONS(455),
    [sym_false] = ACTIONS(455),
    [sym_number_long] = ACTIONS(455),
    [sym_number_double] = ACTIONS(453),
    [sym_number_bigint] = ACTIONS(455),
    [sym_number_ratio] = ACTIONS(453),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(453),
    [anon_sym_TILDE] = ACTIONS(455),
    [anon_sym_TILDE_AT] = ACTIONS(453),
    [sym_gensym] = ACTIONS(453),
    [anon_sym_AT] = ACTIONS(453),
  },
  [115] = {
    [ts_builtin_sym_end] = ACTIONS(457),
    [sym_nil] = ACTIONS(459),
    [sym_true] = ACTIONS(459),
    [sym_false] = ACTIONS(459),
    [sym_number_long] = ACTIONS(459),
    [sym_number_double] = ACTIONS(457),
    [sym_number_bigint] = ACTIONS(459),
    [sym_number_ratio] = ACTIONS(457),
    [anon_sym_BSLASH] = ACTIONS(457),
    [anon_sym_DQUOTE] = ACTIONS(457),
    [anon_sym_POUND_DQUOTE] = ACTIONS(457),
    [anon_sym_SQUOTE] = ACTIONS(457),
    [anon_sym_LPARENquote] = ACTIONS(457),
    [anon_sym_RPAREN] = ACTIONS(457),
    [anon_sym_COLON] = ACTIONS(459),
    [anon_sym_COLON_COLON] = ACTIONS(457),
    [anon_sym_DASH_GT] = ACTIONS(459),
    [anon_sym_DASH_GT_GT] = ACTIONS(457),
    [anon_sym_as_DASH_GT] = ACTIONS(457),
    [anon_sym_some_DASH_GT] = ACTIONS(459),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(457),
    [anon_sym_cond_DASH_GT] = ACTIONS(459),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(457),
    [sym__symbol_chars] = ACTIONS(459),
    [sym_member_access] = ACTIONS(457),
    [sym_field_access] = ACTIONS(457),
    [sym_new_class] = ACTIONS(457),
    [anon_sym_LPAREN] = ACTIONS(459),
    [anon_sym_LBRACK] = ACTIONS(457),
    [anon_sym_RBRACK] = ACTIONS(457),
    [anon_sym_LBRACE] = ACTIONS(457),
    [anon_sym_RBRACE] = ACTIONS(457),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(457),
    [anon_sym_POUND] = ACTIONS(459),
    [anon_sym_POUND_LBRACE] = ACTIONS(457),
    [anon_sym_SEMI] = ACTIONS(457),
    [anon_sym_POUND_BANG] = ACTIONS(457),
    [anon_sym_POUND_] = ACTIONS(457),
    [anon_sym_POUND_LPAREN] = ACTIONS(457),
    [sym_shorthand_function_arg] = ACTIONS(457),
    [anon_sym_CARET] = ACTIONS(459),
    [anon_sym_CARET_COLON] = ACTIONS(457),
    [anon_sym_CARET_DQUOTE] = ACTIONS(457),
    [anon_sym_BQUOTE] = ACTIONS(457),
    [anon_sym_POUND_SQUOTE] = ACTIONS(457),
    [anon_sym_TILDE] = ACTIONS(459),
    [anon_sym_TILDE_AT] = ACTIONS(457),
    [sym_gensym] = ACTIONS(457),
    [anon_sym_AT] = ACTIONS(457),
  },
  [116] = {
    [sym__anything] = STATE(74),
    [sym__literals] = STATE(74),
    [sym__collection_literals] = STATE(74),
    [sym_boolean] = STATE(74),
    [sym_number] = STATE(74),
    [sym__number] = STATE(32),
    [sym_character] = STATE(74),
    [sym__character] = STATE(33),
    [sym_string] = STATE(74),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(74),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(74),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(74),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(74),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(74),
    [sym_list] = STATE(74),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(74),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(74),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(74),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(74),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(74),
    [sym_anonymous_function] = STATE(74),
    [sym_shorthand_function] = STATE(74),
    [sym_defn] = STATE(74),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(74),
    [sym_var_quote] = STATE(74),
    [sym_unquote] = STATE(74),
    [sym_unquote_splice] = STATE(74),
    [sym_deref] = STATE(74),
    [aux_sym_program_repeat1] = STATE(74),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(129),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(133),
    [anon_sym_COLON] = ACTIONS(25),
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
    [anon_sym_POUND_] = ACTIONS(135),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(141),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(147),
    [anon_sym_TILDE_AT] = ACTIONS(149),
    [sym_gensym] = ACTIONS(141),
    [anon_sym_AT] = ACTIONS(73),
  },
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(461),
    [sym_nil] = ACTIONS(463),
    [sym_true] = ACTIONS(463),
    [sym_false] = ACTIONS(463),
    [sym_number_long] = ACTIONS(463),
    [sym_number_double] = ACTIONS(461),
    [sym_number_bigint] = ACTIONS(463),
    [sym_number_ratio] = ACTIONS(461),
    [anon_sym_BSLASH] = ACTIONS(461),
    [anon_sym_DQUOTE] = ACTIONS(461),
    [anon_sym_POUND_DQUOTE] = ACTIONS(461),
    [anon_sym_SQUOTE] = ACTIONS(461),
    [anon_sym_LPARENquote] = ACTIONS(461),
    [anon_sym_RPAREN] = ACTIONS(461),
    [anon_sym_COLON] = ACTIONS(463),
    [anon_sym_COLON_COLON] = ACTIONS(461),
    [anon_sym_DASH_GT] = ACTIONS(463),
    [anon_sym_DASH_GT_GT] = ACTIONS(461),
    [anon_sym_as_DASH_GT] = ACTIONS(461),
    [anon_sym_some_DASH_GT] = ACTIONS(463),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(461),
    [anon_sym_cond_DASH_GT] = ACTIONS(463),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(461),
    [sym__symbol_chars] = ACTIONS(463),
    [sym_member_access] = ACTIONS(461),
    [sym_field_access] = ACTIONS(461),
    [sym_new_class] = ACTIONS(461),
    [anon_sym_LPAREN] = ACTIONS(463),
    [anon_sym_LBRACK] = ACTIONS(461),
    [anon_sym_RBRACK] = ACTIONS(461),
    [anon_sym_LBRACE] = ACTIONS(461),
    [anon_sym_RBRACE] = ACTIONS(461),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(461),
    [anon_sym_POUND] = ACTIONS(463),
    [anon_sym_POUND_LBRACE] = ACTIONS(461),
    [anon_sym_SEMI] = ACTIONS(461),
    [anon_sym_POUND_BANG] = ACTIONS(461),
    [anon_sym_POUND_] = ACTIONS(461),
    [anon_sym_POUND_LPAREN] = ACTIONS(461),
    [sym_shorthand_function_arg] = ACTIONS(461),
    [anon_sym_CARET] = ACTIONS(463),
    [anon_sym_CARET_COLON] = ACTIONS(461),
    [anon_sym_CARET_DQUOTE] = ACTIONS(461),
    [anon_sym_BQUOTE] = ACTIONS(461),
    [anon_sym_POUND_SQUOTE] = ACTIONS(461),
    [anon_sym_TILDE] = ACTIONS(463),
    [anon_sym_TILDE_AT] = ACTIONS(461),
    [sym_gensym] = ACTIONS(461),
    [anon_sym_AT] = ACTIONS(461),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(465),
    [sym_nil] = ACTIONS(467),
    [sym_true] = ACTIONS(467),
    [sym_false] = ACTIONS(467),
    [sym_number_long] = ACTIONS(467),
    [sym_number_double] = ACTIONS(465),
    [sym_number_bigint] = ACTIONS(467),
    [sym_number_ratio] = ACTIONS(465),
    [anon_sym_BSLASH] = ACTIONS(465),
    [anon_sym_DQUOTE] = ACTIONS(465),
    [anon_sym_POUND_DQUOTE] = ACTIONS(465),
    [anon_sym_SQUOTE] = ACTIONS(465),
    [anon_sym_LPARENquote] = ACTIONS(465),
    [anon_sym_RPAREN] = ACTIONS(465),
    [anon_sym_COLON] = ACTIONS(467),
    [anon_sym_COLON_COLON] = ACTIONS(465),
    [anon_sym_DASH_GT] = ACTIONS(467),
    [anon_sym_DASH_GT_GT] = ACTIONS(465),
    [anon_sym_as_DASH_GT] = ACTIONS(465),
    [anon_sym_some_DASH_GT] = ACTIONS(467),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(465),
    [anon_sym_cond_DASH_GT] = ACTIONS(467),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(465),
    [sym__symbol_chars] = ACTIONS(467),
    [sym_member_access] = ACTIONS(465),
    [sym_field_access] = ACTIONS(465),
    [sym_new_class] = ACTIONS(465),
    [anon_sym_LPAREN] = ACTIONS(467),
    [anon_sym_LBRACK] = ACTIONS(465),
    [anon_sym_RBRACK] = ACTIONS(465),
    [anon_sym_LBRACE] = ACTIONS(465),
    [anon_sym_RBRACE] = ACTIONS(465),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(465),
    [anon_sym_POUND] = ACTIONS(467),
    [anon_sym_POUND_LBRACE] = ACTIONS(465),
    [anon_sym_SEMI] = ACTIONS(465),
    [anon_sym_POUND_BANG] = ACTIONS(465),
    [anon_sym_POUND_] = ACTIONS(465),
    [anon_sym_POUND_LPAREN] = ACTIONS(465),
    [sym_shorthand_function_arg] = ACTIONS(465),
    [anon_sym_CARET] = ACTIONS(467),
    [anon_sym_CARET_COLON] = ACTIONS(465),
    [anon_sym_CARET_DQUOTE] = ACTIONS(465),
    [anon_sym_BQUOTE] = ACTIONS(465),
    [anon_sym_POUND_SQUOTE] = ACTIONS(465),
    [anon_sym_TILDE] = ACTIONS(467),
    [anon_sym_TILDE_AT] = ACTIONS(465),
    [sym_gensym] = ACTIONS(465),
    [anon_sym_AT] = ACTIONS(465),
  },
  [119] = {
    [sym__anything] = STATE(119),
    [sym__literals] = STATE(119),
    [sym__collection_literals] = STATE(119),
    [sym_boolean] = STATE(119),
    [sym_number] = STATE(119),
    [sym__number] = STATE(32),
    [sym_character] = STATE(119),
    [sym__character] = STATE(33),
    [sym_string] = STATE(119),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(119),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(119),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(119),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(119),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(119),
    [sym_list] = STATE(119),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(119),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(119),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(119),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(119),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(119),
    [sym_anonymous_function] = STATE(119),
    [sym_shorthand_function] = STATE(119),
    [sym_defn] = STATE(119),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(119),
    [sym_var_quote] = STATE(119),
    [sym_unquote] = STATE(119),
    [sym_unquote_splice] = STATE(119),
    [sym_deref] = STATE(119),
    [aux_sym_program_repeat1] = STATE(119),
    [aux_sym_metadata_repeat1] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(469),
    [sym_nil] = ACTIONS(471),
    [sym_true] = ACTIONS(474),
    [sym_false] = ACTIONS(474),
    [sym_number_long] = ACTIONS(477),
    [sym_number_double] = ACTIONS(480),
    [sym_number_bigint] = ACTIONS(477),
    [sym_number_ratio] = ACTIONS(480),
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
    [sym_member_access] = ACTIONS(513),
    [sym_field_access] = ACTIONS(513),
    [sym_new_class] = ACTIONS(513),
    [anon_sym_LPAREN] = ACTIONS(516),
    [anon_sym_LBRACK] = ACTIONS(519),
    [anon_sym_LBRACE] = ACTIONS(522),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(525),
    [anon_sym_POUND] = ACTIONS(528),
    [anon_sym_POUND_LBRACE] = ACTIONS(531),
    [anon_sym_SEMI] = ACTIONS(534),
    [anon_sym_POUND_BANG] = ACTIONS(537),
    [anon_sym_POUND_] = ACTIONS(540),
    [anon_sym_POUND_LPAREN] = ACTIONS(543),
    [sym_shorthand_function_arg] = ACTIONS(546),
    [anon_sym_CARET] = ACTIONS(549),
    [anon_sym_CARET_COLON] = ACTIONS(552),
    [anon_sym_CARET_DQUOTE] = ACTIONS(555),
    [anon_sym_BQUOTE] = ACTIONS(558),
    [anon_sym_POUND_SQUOTE] = ACTIONS(561),
    [anon_sym_TILDE] = ACTIONS(564),
    [anon_sym_TILDE_AT] = ACTIONS(567),
    [sym_gensym] = ACTIONS(546),
    [anon_sym_AT] = ACTIONS(570),
  },
  [120] = {
    [sym__symbol_chars] = ACTIONS(217),
  },
  [121] = {
    [sym_metadata_shorthand] = STATE(121),
    [aux_sym_metadata_repeat1] = STATE(121),
    [anon_sym_LPAREN] = ACTIONS(573),
    [anon_sym_LBRACK] = ACTIONS(573),
    [anon_sym_LBRACE] = ACTIONS(573),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(573),
    [anon_sym_POUND] = ACTIONS(575),
    [anon_sym_POUND_LBRACE] = ACTIONS(573),
    [anon_sym_CARET] = ACTIONS(577),
    [anon_sym_CARET_COLON] = ACTIONS(580),
    [anon_sym_CARET_DQUOTE] = ACTIONS(583),
  },
  [122] = {
    [sym__hex_char] = ACTIONS(586),
  },
  [123] = {
    [ts_builtin_sym_end] = ACTIONS(588),
    [sym_nil] = ACTIONS(590),
    [sym_true] = ACTIONS(590),
    [sym_false] = ACTIONS(590),
    [sym_number_long] = ACTIONS(590),
    [sym_number_double] = ACTIONS(588),
    [sym_number_bigint] = ACTIONS(590),
    [sym_number_ratio] = ACTIONS(588),
    [anon_sym_BSLASH] = ACTIONS(588),
    [anon_sym_DQUOTE] = ACTIONS(588),
    [anon_sym_POUND_DQUOTE] = ACTIONS(588),
    [anon_sym_SQUOTE] = ACTIONS(588),
    [anon_sym_LPARENquote] = ACTIONS(588),
    [anon_sym_RPAREN] = ACTIONS(588),
    [anon_sym_COLON] = ACTIONS(590),
    [anon_sym_COLON_COLON] = ACTIONS(588),
    [anon_sym_DASH_GT] = ACTIONS(590),
    [anon_sym_DASH_GT_GT] = ACTIONS(588),
    [anon_sym_as_DASH_GT] = ACTIONS(588),
    [anon_sym_some_DASH_GT] = ACTIONS(590),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(588),
    [anon_sym_cond_DASH_GT] = ACTIONS(590),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(588),
    [sym__symbol_chars] = ACTIONS(590),
    [sym_member_access] = ACTIONS(588),
    [sym_field_access] = ACTIONS(588),
    [sym_new_class] = ACTIONS(588),
    [anon_sym_LPAREN] = ACTIONS(590),
    [anon_sym_LBRACK] = ACTIONS(588),
    [anon_sym_RBRACK] = ACTIONS(588),
    [anon_sym_LBRACE] = ACTIONS(588),
    [anon_sym_RBRACE] = ACTIONS(588),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(588),
    [anon_sym_POUND] = ACTIONS(590),
    [anon_sym_POUND_LBRACE] = ACTIONS(588),
    [anon_sym_SEMI] = ACTIONS(588),
    [anon_sym_POUND_BANG] = ACTIONS(588),
    [anon_sym_POUND_] = ACTIONS(588),
    [anon_sym_POUND_LPAREN] = ACTIONS(588),
    [sym_shorthand_function_arg] = ACTIONS(588),
    [anon_sym_CARET] = ACTIONS(590),
    [anon_sym_CARET_COLON] = ACTIONS(588),
    [anon_sym_CARET_DQUOTE] = ACTIONS(588),
    [anon_sym_BQUOTE] = ACTIONS(588),
    [anon_sym_POUND_SQUOTE] = ACTIONS(588),
    [anon_sym_TILDE] = ACTIONS(590),
    [anon_sym_TILDE_AT] = ACTIONS(588),
    [sym_gensym] = ACTIONS(588),
    [anon_sym_AT] = ACTIONS(588),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(592),
    [anon_sym_TILDE] = ACTIONS(594),
    [anon_sym_TILDE_AT] = ACTIONS(592),
    [sym_gensym] = ACTIONS(592),
    [anon_sym_AT] = ACTIONS(592),
  },
  [125] = {
    [aux_sym__string_repeat1] = STATE(125),
    [anon_sym_DQUOTE] = ACTIONS(596),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(598),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(598),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(601),
    [anon_sym_TILDE] = ACTIONS(603),
    [anon_sym_TILDE_AT] = ACTIONS(601),
    [sym_gensym] = ACTIONS(601),
    [anon_sym_AT] = ACTIONS(601),
  },
  [127] = {
    [aux_sym__regex_repeat1] = STATE(127),
    [anon_sym_DQUOTE] = ACTIONS(605),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(607),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(607),
  },
  [128] = {
    [ts_builtin_sym_end] = ACTIONS(610),
    [sym_nil] = ACTIONS(612),
    [sym_true] = ACTIONS(612),
    [sym_false] = ACTIONS(612),
    [sym_number_long] = ACTIONS(612),
    [sym_number_double] = ACTIONS(610),
    [sym_number_bigint] = ACTIONS(612),
    [sym_number_ratio] = ACTIONS(610),
    [anon_sym_BSLASH] = ACTIONS(610),
    [anon_sym_DQUOTE] = ACTIONS(610),
    [anon_sym_POUND_DQUOTE] = ACTIONS(610),
    [anon_sym_SQUOTE] = ACTIONS(610),
    [anon_sym_LPARENquote] = ACTIONS(610),
    [anon_sym_RPAREN] = ACTIONS(610),
    [anon_sym_COLON] = ACTIONS(612),
    [anon_sym_COLON_COLON] = ACTIONS(610),
    [anon_sym_DASH_GT] = ACTIONS(612),
    [anon_sym_DASH_GT_GT] = ACTIONS(610),
    [anon_sym_as_DASH_GT] = ACTIONS(610),
    [anon_sym_some_DASH_GT] = ACTIONS(612),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(610),
    [anon_sym_cond_DASH_GT] = ACTIONS(612),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(610),
    [sym__symbol_chars] = ACTIONS(612),
    [sym_member_access] = ACTIONS(610),
    [sym_field_access] = ACTIONS(610),
    [sym_new_class] = ACTIONS(610),
    [anon_sym_LPAREN] = ACTIONS(612),
    [anon_sym_LBRACK] = ACTIONS(610),
    [anon_sym_RBRACK] = ACTIONS(610),
    [anon_sym_LBRACE] = ACTIONS(610),
    [anon_sym_RBRACE] = ACTIONS(610),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(610),
    [anon_sym_POUND] = ACTIONS(612),
    [anon_sym_POUND_LBRACE] = ACTIONS(610),
    [anon_sym_SEMI] = ACTIONS(610),
    [anon_sym_POUND_BANG] = ACTIONS(610),
    [anon_sym_POUND_] = ACTIONS(610),
    [anon_sym_POUND_LPAREN] = ACTIONS(610),
    [sym_shorthand_function_arg] = ACTIONS(610),
    [anon_sym_CARET] = ACTIONS(612),
    [anon_sym_CARET_COLON] = ACTIONS(610),
    [anon_sym_CARET_DQUOTE] = ACTIONS(610),
    [anon_sym_BQUOTE] = ACTIONS(610),
    [anon_sym_POUND_SQUOTE] = ACTIONS(610),
    [anon_sym_TILDE] = ACTIONS(612),
    [anon_sym_TILDE_AT] = ACTIONS(610),
    [sym_gensym] = ACTIONS(610),
    [anon_sym_AT] = ACTIONS(610),
  },
  [129] = {
    [sym__keyword_chars] = ACTIONS(614),
  },
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(616),
    [sym_nil] = ACTIONS(618),
    [sym_true] = ACTIONS(618),
    [sym_false] = ACTIONS(618),
    [sym_number_long] = ACTIONS(618),
    [sym_number_double] = ACTIONS(616),
    [sym_number_bigint] = ACTIONS(618),
    [sym_number_ratio] = ACTIONS(616),
    [anon_sym_BSLASH] = ACTIONS(616),
    [anon_sym_DQUOTE] = ACTIONS(616),
    [anon_sym_POUND_DQUOTE] = ACTIONS(616),
    [anon_sym_SQUOTE] = ACTIONS(616),
    [anon_sym_LPARENquote] = ACTIONS(616),
    [anon_sym_RPAREN] = ACTIONS(616),
    [anon_sym_COLON] = ACTIONS(618),
    [anon_sym_COLON_COLON] = ACTIONS(616),
    [anon_sym_DASH_GT] = ACTIONS(618),
    [anon_sym_DASH_GT_GT] = ACTIONS(616),
    [anon_sym_as_DASH_GT] = ACTIONS(616),
    [anon_sym_some_DASH_GT] = ACTIONS(618),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(616),
    [anon_sym_cond_DASH_GT] = ACTIONS(618),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(616),
    [sym__symbol_chars] = ACTIONS(618),
    [sym_member_access] = ACTIONS(616),
    [sym_field_access] = ACTIONS(616),
    [sym_new_class] = ACTIONS(616),
    [anon_sym_LPAREN] = ACTIONS(618),
    [anon_sym_LBRACK] = ACTIONS(616),
    [anon_sym_RBRACK] = ACTIONS(616),
    [anon_sym_LBRACE] = ACTIONS(616),
    [anon_sym_RBRACE] = ACTIONS(616),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(616),
    [anon_sym_POUND] = ACTIONS(618),
    [anon_sym_POUND_LBRACE] = ACTIONS(616),
    [anon_sym_SEMI] = ACTIONS(616),
    [anon_sym_POUND_BANG] = ACTIONS(616),
    [anon_sym_POUND_] = ACTIONS(616),
    [anon_sym_POUND_LPAREN] = ACTIONS(616),
    [sym_shorthand_function_arg] = ACTIONS(616),
    [anon_sym_CARET] = ACTIONS(618),
    [anon_sym_CARET_COLON] = ACTIONS(616),
    [anon_sym_CARET_DQUOTE] = ACTIONS(616),
    [anon_sym_BQUOTE] = ACTIONS(616),
    [anon_sym_POUND_SQUOTE] = ACTIONS(616),
    [anon_sym_TILDE] = ACTIONS(618),
    [anon_sym_TILDE_AT] = ACTIONS(616),
    [sym_gensym] = ACTIONS(616),
    [anon_sym_AT] = ACTIONS(616),
  },
  [131] = {
    [ts_builtin_sym_end] = ACTIONS(620),
    [sym_nil] = ACTIONS(622),
    [sym_true] = ACTIONS(622),
    [sym_false] = ACTIONS(622),
    [sym_number_long] = ACTIONS(622),
    [sym_number_double] = ACTIONS(620),
    [sym_number_bigint] = ACTIONS(622),
    [sym_number_ratio] = ACTIONS(620),
    [anon_sym_BSLASH] = ACTIONS(620),
    [anon_sym_DQUOTE] = ACTIONS(620),
    [anon_sym_POUND_DQUOTE] = ACTIONS(620),
    [anon_sym_SQUOTE] = ACTIONS(620),
    [anon_sym_LPARENquote] = ACTIONS(620),
    [anon_sym_RPAREN] = ACTIONS(620),
    [anon_sym_COLON] = ACTIONS(622),
    [anon_sym_COLON_COLON] = ACTIONS(620),
    [anon_sym_DASH_GT] = ACTIONS(622),
    [anon_sym_DASH_GT_GT] = ACTIONS(620),
    [anon_sym_as_DASH_GT] = ACTIONS(620),
    [anon_sym_some_DASH_GT] = ACTIONS(622),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(620),
    [anon_sym_cond_DASH_GT] = ACTIONS(622),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(620),
    [sym__symbol_chars] = ACTIONS(622),
    [sym_member_access] = ACTIONS(620),
    [sym_field_access] = ACTIONS(620),
    [sym_new_class] = ACTIONS(620),
    [anon_sym_LPAREN] = ACTIONS(622),
    [anon_sym_LBRACK] = ACTIONS(620),
    [anon_sym_RBRACK] = ACTIONS(620),
    [anon_sym_LBRACE] = ACTIONS(620),
    [anon_sym_RBRACE] = ACTIONS(620),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(620),
    [anon_sym_POUND] = ACTIONS(622),
    [anon_sym_POUND_LBRACE] = ACTIONS(620),
    [anon_sym_SEMI] = ACTIONS(620),
    [anon_sym_POUND_BANG] = ACTIONS(620),
    [anon_sym_POUND_] = ACTIONS(620),
    [anon_sym_POUND_LPAREN] = ACTIONS(620),
    [sym_shorthand_function_arg] = ACTIONS(620),
    [anon_sym_CARET] = ACTIONS(622),
    [anon_sym_CARET_COLON] = ACTIONS(620),
    [anon_sym_CARET_DQUOTE] = ACTIONS(620),
    [anon_sym_BQUOTE] = ACTIONS(620),
    [anon_sym_POUND_SQUOTE] = ACTIONS(620),
    [anon_sym_TILDE] = ACTIONS(622),
    [anon_sym_TILDE_AT] = ACTIONS(620),
    [sym_gensym] = ACTIONS(620),
    [anon_sym_AT] = ACTIONS(620),
  },
  [132] = {
    [sym__anything] = STATE(147),
    [sym__literals] = STATE(147),
    [sym__collection_literals] = STATE(147),
    [sym_boolean] = STATE(147),
    [sym_number] = STATE(147),
    [sym__number] = STATE(32),
    [sym_character] = STATE(147),
    [sym__character] = STATE(33),
    [sym_string] = STATE(147),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(147),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(147),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(147),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(147),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(147),
    [sym_list] = STATE(147),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(147),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(147),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(147),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(147),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(147),
    [sym_anonymous_function] = STATE(147),
    [sym_shorthand_function] = STATE(147),
    [sym_defn] = STATE(147),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(147),
    [sym_var_quote] = STATE(147),
    [sym_unquote] = STATE(147),
    [sym_unquote_splice] = STATE(147),
    [sym_deref] = STATE(147),
    [aux_sym_program_repeat1] = STATE(147),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(367),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(624),
    [anon_sym_COLON] = ACTIONS(25),
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
    [anon_sym_POUND_] = ACTIONS(135),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(371),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(147),
    [anon_sym_TILDE_AT] = ACTIONS(149),
    [sym_gensym] = ACTIONS(371),
    [anon_sym_AT] = ACTIONS(73),
  },
  [133] = {
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(115),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(115),
    [anon_sym_POUND] = ACTIONS(117),
  },
  [134] = {
    [anon_sym_DQUOTE] = ACTIONS(119),
    [anon_sym_SLASH] = ACTIONS(626),
    [anon_sym_LPAREN] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(121),
  },
  [135] = {
    [sym_vector] = STATE(138),
    [sym__vector] = STATE(40),
    [sym__single_arity_fn] = STATE(168),
    [sym_params] = STATE(141),
    [anon_sym_LBRACK] = ACTIONS(39),
  },
  [136] = {
    [anon_sym_DQUOTE] = ACTIONS(628),
    [anon_sym_LPAREN] = ACTIONS(628),
    [anon_sym_LBRACK] = ACTIONS(628),
    [anon_sym_LBRACE] = ACTIONS(628),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(628),
    [anon_sym_POUND] = ACTIONS(630),
  },
  [137] = {
    [anon_sym_DQUOTE] = ACTIONS(269),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_LBRACK] = ACTIONS(269),
    [anon_sym_LBRACE] = ACTIONS(269),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(269),
    [anon_sym_POUND] = ACTIONS(271),
  },
  [138] = {
    [sym_nil] = ACTIONS(632),
    [sym_true] = ACTIONS(632),
    [sym_false] = ACTIONS(632),
    [sym_number_long] = ACTIONS(632),
    [sym_number_double] = ACTIONS(634),
    [sym_number_bigint] = ACTIONS(632),
    [sym_number_ratio] = ACTIONS(634),
    [anon_sym_BSLASH] = ACTIONS(634),
    [anon_sym_DQUOTE] = ACTIONS(634),
    [anon_sym_POUND_DQUOTE] = ACTIONS(634),
    [anon_sym_SQUOTE] = ACTIONS(634),
    [anon_sym_LPARENquote] = ACTIONS(634),
    [anon_sym_RPAREN] = ACTIONS(634),
    [anon_sym_COLON] = ACTIONS(632),
    [anon_sym_COLON_COLON] = ACTIONS(634),
    [anon_sym_DASH_GT] = ACTIONS(632),
    [anon_sym_DASH_GT_GT] = ACTIONS(634),
    [anon_sym_as_DASH_GT] = ACTIONS(634),
    [anon_sym_some_DASH_GT] = ACTIONS(632),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(634),
    [anon_sym_cond_DASH_GT] = ACTIONS(632),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(634),
    [sym__symbol_chars] = ACTIONS(632),
    [sym_member_access] = ACTIONS(634),
    [sym_field_access] = ACTIONS(634),
    [sym_new_class] = ACTIONS(634),
    [anon_sym_LPAREN] = ACTIONS(632),
    [anon_sym_LBRACK] = ACTIONS(634),
    [anon_sym_LBRACE] = ACTIONS(634),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(634),
    [anon_sym_POUND] = ACTIONS(632),
    [anon_sym_POUND_LBRACE] = ACTIONS(634),
    [anon_sym_SEMI] = ACTIONS(634),
    [anon_sym_POUND_BANG] = ACTIONS(634),
    [anon_sym_POUND_] = ACTIONS(634),
    [anon_sym_POUND_LPAREN] = ACTIONS(634),
    [sym_shorthand_function_arg] = ACTIONS(634),
    [anon_sym_CARET] = ACTIONS(632),
    [anon_sym_CARET_COLON] = ACTIONS(634),
    [anon_sym_CARET_DQUOTE] = ACTIONS(634),
    [anon_sym_BQUOTE] = ACTIONS(634),
    [anon_sym_POUND_SQUOTE] = ACTIONS(634),
    [anon_sym_TILDE] = ACTIONS(632),
    [anon_sym_TILDE_AT] = ACTIONS(634),
    [sym_gensym] = ACTIONS(634),
    [anon_sym_AT] = ACTIONS(634),
  },
  [139] = {
    [anon_sym_RPAREN] = ACTIONS(636),
  },
  [140] = {
    [sym_vector] = STATE(138),
    [sym__vector] = STATE(40),
    [sym__after_the_fn_name] = STATE(170),
    [sym__single_arity_fn] = STATE(170),
    [sym__multi_arity_fn] = STATE(170),
    [sym_params] = STATE(141),
    [aux_sym__multi_arity_fn_repeat1] = STATE(142),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(39),
  },
  [141] = {
    [sym__anything] = STATE(172),
    [sym__literals] = STATE(172),
    [sym__collection_literals] = STATE(172),
    [sym_boolean] = STATE(172),
    [sym_number] = STATE(172),
    [sym__number] = STATE(32),
    [sym_character] = STATE(172),
    [sym__character] = STATE(33),
    [sym_string] = STATE(172),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(172),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(172),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(172),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(172),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(172),
    [sym_list] = STATE(172),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(172),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(172),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(172),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(172),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(172),
    [sym_anonymous_function] = STATE(172),
    [sym_function_body] = STATE(171),
    [sym_shorthand_function] = STATE(172),
    [sym_defn] = STATE(172),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(172),
    [sym_var_quote] = STATE(172),
    [sym_unquote] = STATE(172),
    [sym_unquote_splice] = STATE(172),
    [sym_deref] = STATE(172),
    [aux_sym_program_repeat1] = STATE(172),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(638),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(640),
    [anon_sym_COLON] = ACTIONS(25),
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
    [anon_sym_POUND_] = ACTIONS(135),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(642),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(147),
    [anon_sym_TILDE_AT] = ACTIONS(149),
    [sym_gensym] = ACTIONS(642),
    [anon_sym_AT] = ACTIONS(73),
  },
  [142] = {
    [aux_sym__multi_arity_fn_repeat1] = STATE(173),
    [anon_sym_RPAREN] = ACTIONS(644),
    [anon_sym_LPAREN] = ACTIONS(365),
  },
  [143] = {
    [sym_string] = STATE(175),
    [sym__string] = STATE(176),
    [sym_vector] = STATE(138),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(177),
    [sym__hash_map] = STATE(110),
    [sym_namespace_map] = STATE(110),
    [sym__after_the_fn_name] = STATE(178),
    [sym__single_arity_fn] = STATE(178),
    [sym__multi_arity_fn] = STATE(178),
    [sym_params] = STATE(141),
    [sym_docstring] = STATE(179),
    [sym_attr_map] = STATE(180),
    [aux_sym__multi_arity_fn_repeat1] = STATE(142),
    [anon_sym_DQUOTE] = ACTIONS(646),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(219),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(221),
    [anon_sym_POUND] = ACTIONS(223),
  },
  [144] = {
    [sym_symbol] = STATE(136),
    [sym__symbol] = STATE(137),
    [sym_threading_macro] = STATE(137),
    [sym_qualified_symbol] = STATE(137),
    [sym_function_name] = STATE(181),
    [anon_sym_DASH_GT] = ACTIONS(359),
    [anon_sym_DASH_GT_GT] = ACTIONS(361),
    [anon_sym_as_DASH_GT] = ACTIONS(361),
    [anon_sym_some_DASH_GT] = ACTIONS(359),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(361),
    [anon_sym_cond_DASH_GT] = ACTIONS(359),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(361),
    [sym__symbol_chars] = ACTIONS(363),
  },
  [145] = {
    [sym_metadata_shorthand] = STATE(182),
    [aux_sym_metadata_repeat1] = STATE(182),
    [anon_sym_DASH_GT] = ACTIONS(293),
    [anon_sym_DASH_GT_GT] = ACTIONS(295),
    [anon_sym_as_DASH_GT] = ACTIONS(295),
    [anon_sym_some_DASH_GT] = ACTIONS(293),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(295),
    [anon_sym_cond_DASH_GT] = ACTIONS(293),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(295),
    [sym__symbol_chars] = ACTIONS(293),
    [anon_sym_CARET] = ACTIONS(303),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
  },
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(648),
    [sym_nil] = ACTIONS(650),
    [sym_true] = ACTIONS(650),
    [sym_false] = ACTIONS(650),
    [sym_number_long] = ACTIONS(650),
    [sym_number_double] = ACTIONS(648),
    [sym_number_bigint] = ACTIONS(650),
    [sym_number_ratio] = ACTIONS(648),
    [anon_sym_BSLASH] = ACTIONS(648),
    [anon_sym_DQUOTE] = ACTIONS(648),
    [anon_sym_POUND_DQUOTE] = ACTIONS(648),
    [anon_sym_SQUOTE] = ACTIONS(648),
    [anon_sym_LPARENquote] = ACTIONS(648),
    [anon_sym_RPAREN] = ACTIONS(648),
    [anon_sym_COLON] = ACTIONS(650),
    [anon_sym_COLON_COLON] = ACTIONS(648),
    [anon_sym_DASH_GT] = ACTIONS(650),
    [anon_sym_DASH_GT_GT] = ACTIONS(648),
    [anon_sym_as_DASH_GT] = ACTIONS(648),
    [anon_sym_some_DASH_GT] = ACTIONS(650),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(648),
    [anon_sym_cond_DASH_GT] = ACTIONS(650),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(648),
    [sym__symbol_chars] = ACTIONS(650),
    [sym_member_access] = ACTIONS(648),
    [sym_field_access] = ACTIONS(648),
    [sym_new_class] = ACTIONS(648),
    [anon_sym_LPAREN] = ACTIONS(650),
    [anon_sym_LBRACK] = ACTIONS(648),
    [anon_sym_RBRACK] = ACTIONS(648),
    [anon_sym_LBRACE] = ACTIONS(648),
    [anon_sym_RBRACE] = ACTIONS(648),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(648),
    [anon_sym_POUND] = ACTIONS(650),
    [anon_sym_POUND_LBRACE] = ACTIONS(648),
    [anon_sym_SEMI] = ACTIONS(648),
    [anon_sym_POUND_BANG] = ACTIONS(648),
    [anon_sym_POUND_] = ACTIONS(648),
    [anon_sym_POUND_LPAREN] = ACTIONS(648),
    [sym_shorthand_function_arg] = ACTIONS(648),
    [anon_sym_CARET] = ACTIONS(650),
    [anon_sym_CARET_COLON] = ACTIONS(648),
    [anon_sym_CARET_DQUOTE] = ACTIONS(648),
    [anon_sym_BQUOTE] = ACTIONS(648),
    [anon_sym_POUND_SQUOTE] = ACTIONS(648),
    [anon_sym_TILDE] = ACTIONS(650),
    [anon_sym_TILDE_AT] = ACTIONS(648),
    [sym_gensym] = ACTIONS(648),
    [anon_sym_AT] = ACTIONS(648),
  },
  [147] = {
    [sym__anything] = STATE(147),
    [sym__literals] = STATE(147),
    [sym__collection_literals] = STATE(147),
    [sym_boolean] = STATE(147),
    [sym_number] = STATE(147),
    [sym__number] = STATE(32),
    [sym_character] = STATE(147),
    [sym__character] = STATE(33),
    [sym_string] = STATE(147),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(147),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(147),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(147),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(147),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(147),
    [sym_list] = STATE(147),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(147),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(147),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(147),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(147),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(147),
    [sym_anonymous_function] = STATE(147),
    [sym_shorthand_function] = STATE(147),
    [sym_defn] = STATE(147),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(147),
    [sym_var_quote] = STATE(147),
    [sym_unquote] = STATE(147),
    [sym_unquote_splice] = STATE(147),
    [sym_deref] = STATE(147),
    [aux_sym_program_repeat1] = STATE(147),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(652),
    [sym_true] = ACTIONS(474),
    [sym_false] = ACTIONS(474),
    [sym_number_long] = ACTIONS(477),
    [sym_number_double] = ACTIONS(480),
    [sym_number_bigint] = ACTIONS(477),
    [sym_number_ratio] = ACTIONS(480),
    [anon_sym_BSLASH] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(486),
    [anon_sym_POUND_DQUOTE] = ACTIONS(489),
    [anon_sym_SQUOTE] = ACTIONS(655),
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
    [sym_member_access] = ACTIONS(513),
    [sym_field_access] = ACTIONS(513),
    [sym_new_class] = ACTIONS(513),
    [anon_sym_LPAREN] = ACTIONS(516),
    [anon_sym_LBRACK] = ACTIONS(519),
    [anon_sym_LBRACE] = ACTIONS(522),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(525),
    [anon_sym_POUND] = ACTIONS(528),
    [anon_sym_POUND_LBRACE] = ACTIONS(531),
    [anon_sym_SEMI] = ACTIONS(534),
    [anon_sym_POUND_BANG] = ACTIONS(537),
    [anon_sym_POUND_] = ACTIONS(658),
    [anon_sym_POUND_LPAREN] = ACTIONS(543),
    [sym_shorthand_function_arg] = ACTIONS(661),
    [anon_sym_CARET] = ACTIONS(549),
    [anon_sym_CARET_COLON] = ACTIONS(552),
    [anon_sym_CARET_DQUOTE] = ACTIONS(555),
    [anon_sym_BQUOTE] = ACTIONS(664),
    [anon_sym_POUND_SQUOTE] = ACTIONS(561),
    [anon_sym_TILDE] = ACTIONS(667),
    [anon_sym_TILDE_AT] = ACTIONS(670),
    [sym_gensym] = ACTIONS(661),
    [anon_sym_AT] = ACTIONS(570),
  },
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(673),
    [sym_nil] = ACTIONS(675),
    [sym_true] = ACTIONS(675),
    [sym_false] = ACTIONS(675),
    [sym_number_long] = ACTIONS(675),
    [sym_number_double] = ACTIONS(673),
    [sym_number_bigint] = ACTIONS(675),
    [sym_number_ratio] = ACTIONS(673),
    [anon_sym_BSLASH] = ACTIONS(673),
    [anon_sym_DQUOTE] = ACTIONS(673),
    [anon_sym_POUND_DQUOTE] = ACTIONS(673),
    [anon_sym_SQUOTE] = ACTIONS(673),
    [anon_sym_LPARENquote] = ACTIONS(673),
    [anon_sym_RPAREN] = ACTIONS(673),
    [anon_sym_COLON] = ACTIONS(675),
    [anon_sym_COLON_COLON] = ACTIONS(673),
    [anon_sym_DASH_GT] = ACTIONS(675),
    [anon_sym_DASH_GT_GT] = ACTIONS(673),
    [anon_sym_as_DASH_GT] = ACTIONS(673),
    [anon_sym_some_DASH_GT] = ACTIONS(675),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(673),
    [anon_sym_cond_DASH_GT] = ACTIONS(675),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(673),
    [sym__symbol_chars] = ACTIONS(675),
    [sym_member_access] = ACTIONS(673),
    [sym_field_access] = ACTIONS(673),
    [sym_new_class] = ACTIONS(673),
    [anon_sym_LPAREN] = ACTIONS(675),
    [anon_sym_LBRACK] = ACTIONS(673),
    [anon_sym_RBRACK] = ACTIONS(673),
    [anon_sym_LBRACE] = ACTIONS(673),
    [anon_sym_RBRACE] = ACTIONS(673),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(673),
    [anon_sym_POUND] = ACTIONS(675),
    [anon_sym_POUND_LBRACE] = ACTIONS(673),
    [anon_sym_SEMI] = ACTIONS(673),
    [anon_sym_POUND_BANG] = ACTIONS(673),
    [anon_sym_POUND_] = ACTIONS(673),
    [anon_sym_POUND_LPAREN] = ACTIONS(673),
    [sym_shorthand_function_arg] = ACTIONS(673),
    [anon_sym_CARET] = ACTIONS(675),
    [anon_sym_CARET_COLON] = ACTIONS(673),
    [anon_sym_CARET_DQUOTE] = ACTIONS(673),
    [anon_sym_BQUOTE] = ACTIONS(673),
    [anon_sym_POUND_SQUOTE] = ACTIONS(673),
    [anon_sym_TILDE] = ACTIONS(675),
    [anon_sym_TILDE_AT] = ACTIONS(673),
    [sym_gensym] = ACTIONS(673),
    [anon_sym_AT] = ACTIONS(673),
  },
  [149] = {
    [sym__anything] = STATE(149),
    [sym__literals] = STATE(149),
    [sym__collection_literals] = STATE(149),
    [sym_boolean] = STATE(149),
    [sym_number] = STATE(149),
    [sym__number] = STATE(32),
    [sym_character] = STATE(149),
    [sym__character] = STATE(33),
    [sym_string] = STATE(149),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(149),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(149),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(149),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(149),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(149),
    [sym_list] = STATE(149),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(149),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(149),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(149),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(149),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(149),
    [sym_anonymous_function] = STATE(149),
    [sym_shorthand_function] = STATE(149),
    [sym_defn] = STATE(149),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(149),
    [sym_var_quote] = STATE(149),
    [sym_unquote] = STATE(149),
    [sym_unquote_splice] = STATE(149),
    [sym_deref] = STATE(149),
    [aux_sym_program_repeat1] = STATE(149),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(677),
    [sym_true] = ACTIONS(474),
    [sym_false] = ACTIONS(474),
    [sym_number_long] = ACTIONS(477),
    [sym_number_double] = ACTIONS(480),
    [sym_number_bigint] = ACTIONS(477),
    [sym_number_ratio] = ACTIONS(480),
    [anon_sym_BSLASH] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(486),
    [anon_sym_POUND_DQUOTE] = ACTIONS(489),
    [anon_sym_SQUOTE] = ACTIONS(680),
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
    [sym_member_access] = ACTIONS(513),
    [sym_field_access] = ACTIONS(513),
    [sym_new_class] = ACTIONS(513),
    [anon_sym_LPAREN] = ACTIONS(516),
    [anon_sym_LBRACK] = ACTIONS(519),
    [anon_sym_RBRACK] = ACTIONS(469),
    [anon_sym_LBRACE] = ACTIONS(522),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(525),
    [anon_sym_POUND] = ACTIONS(528),
    [anon_sym_POUND_LBRACE] = ACTIONS(531),
    [anon_sym_SEMI] = ACTIONS(534),
    [anon_sym_POUND_BANG] = ACTIONS(537),
    [anon_sym_POUND_] = ACTIONS(683),
    [anon_sym_POUND_LPAREN] = ACTIONS(543),
    [sym_shorthand_function_arg] = ACTIONS(686),
    [anon_sym_CARET] = ACTIONS(549),
    [anon_sym_CARET_COLON] = ACTIONS(552),
    [anon_sym_CARET_DQUOTE] = ACTIONS(555),
    [anon_sym_BQUOTE] = ACTIONS(689),
    [anon_sym_POUND_SQUOTE] = ACTIONS(561),
    [anon_sym_TILDE] = ACTIONS(692),
    [anon_sym_TILDE_AT] = ACTIONS(695),
    [sym_gensym] = ACTIONS(686),
    [anon_sym_AT] = ACTIONS(570),
  },
  [150] = {
    [sym_nil] = ACTIONS(698),
    [sym_true] = ACTIONS(698),
    [sym_false] = ACTIONS(698),
    [sym_number_long] = ACTIONS(698),
    [sym_number_double] = ACTIONS(700),
    [sym_number_bigint] = ACTIONS(698),
    [sym_number_ratio] = ACTIONS(700),
    [anon_sym_BSLASH] = ACTIONS(700),
    [anon_sym_DQUOTE] = ACTIONS(700),
    [anon_sym_POUND_DQUOTE] = ACTIONS(700),
    [anon_sym_SQUOTE] = ACTIONS(700),
    [anon_sym_LPARENquote] = ACTIONS(700),
    [anon_sym_COLON] = ACTIONS(698),
    [anon_sym_COLON_COLON] = ACTIONS(700),
    [anon_sym_DASH_GT] = ACTIONS(698),
    [anon_sym_DASH_GT_GT] = ACTIONS(700),
    [anon_sym_as_DASH_GT] = ACTIONS(700),
    [anon_sym_some_DASH_GT] = ACTIONS(698),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(700),
    [anon_sym_cond_DASH_GT] = ACTIONS(698),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(700),
    [sym__symbol_chars] = ACTIONS(698),
    [sym_member_access] = ACTIONS(700),
    [sym_field_access] = ACTIONS(700),
    [sym_new_class] = ACTIONS(700),
    [anon_sym_LPAREN] = ACTIONS(698),
    [anon_sym_LBRACK] = ACTIONS(700),
    [anon_sym_LBRACE] = ACTIONS(700),
    [anon_sym_RBRACE] = ACTIONS(700),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(700),
    [anon_sym_POUND] = ACTIONS(698),
    [anon_sym_POUND_LBRACE] = ACTIONS(700),
    [anon_sym_SEMI] = ACTIONS(700),
    [anon_sym_POUND_BANG] = ACTIONS(700),
    [anon_sym_POUND_] = ACTIONS(700),
    [anon_sym_POUND_LPAREN] = ACTIONS(700),
    [sym_shorthand_function_arg] = ACTIONS(700),
    [anon_sym_CARET] = ACTIONS(698),
    [anon_sym_CARET_COLON] = ACTIONS(700),
    [anon_sym_CARET_DQUOTE] = ACTIONS(700),
    [anon_sym_BQUOTE] = ACTIONS(700),
    [anon_sym_POUND_SQUOTE] = ACTIONS(700),
    [anon_sym_TILDE] = ACTIONS(698),
    [anon_sym_TILDE_AT] = ACTIONS(700),
    [sym_gensym] = ACTIONS(700),
    [anon_sym_AT] = ACTIONS(700),
  },
  [151] = {
    [ts_builtin_sym_end] = ACTIONS(702),
    [sym_nil] = ACTIONS(704),
    [sym_true] = ACTIONS(704),
    [sym_false] = ACTIONS(704),
    [sym_number_long] = ACTIONS(704),
    [sym_number_double] = ACTIONS(702),
    [sym_number_bigint] = ACTIONS(704),
    [sym_number_ratio] = ACTIONS(702),
    [anon_sym_BSLASH] = ACTIONS(702),
    [anon_sym_DQUOTE] = ACTIONS(702),
    [anon_sym_POUND_DQUOTE] = ACTIONS(702),
    [anon_sym_SQUOTE] = ACTIONS(702),
    [anon_sym_LPARENquote] = ACTIONS(702),
    [anon_sym_RPAREN] = ACTIONS(702),
    [anon_sym_COLON] = ACTIONS(704),
    [anon_sym_COLON_COLON] = ACTIONS(702),
    [anon_sym_DASH_GT] = ACTIONS(704),
    [anon_sym_DASH_GT_GT] = ACTIONS(702),
    [anon_sym_as_DASH_GT] = ACTIONS(702),
    [anon_sym_some_DASH_GT] = ACTIONS(704),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(702),
    [anon_sym_cond_DASH_GT] = ACTIONS(704),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(702),
    [sym__symbol_chars] = ACTIONS(704),
    [sym_member_access] = ACTIONS(702),
    [sym_field_access] = ACTIONS(702),
    [sym_new_class] = ACTIONS(702),
    [anon_sym_LPAREN] = ACTIONS(704),
    [anon_sym_LBRACK] = ACTIONS(702),
    [anon_sym_RBRACK] = ACTIONS(702),
    [anon_sym_LBRACE] = ACTIONS(702),
    [anon_sym_RBRACE] = ACTIONS(702),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(702),
    [anon_sym_POUND] = ACTIONS(704),
    [anon_sym_POUND_LBRACE] = ACTIONS(702),
    [anon_sym_SEMI] = ACTIONS(702),
    [anon_sym_POUND_BANG] = ACTIONS(702),
    [anon_sym_POUND_] = ACTIONS(702),
    [anon_sym_POUND_LPAREN] = ACTIONS(702),
    [sym_shorthand_function_arg] = ACTIONS(702),
    [anon_sym_CARET] = ACTIONS(704),
    [anon_sym_CARET_COLON] = ACTIONS(702),
    [anon_sym_CARET_DQUOTE] = ACTIONS(702),
    [anon_sym_BQUOTE] = ACTIONS(702),
    [anon_sym_POUND_SQUOTE] = ACTIONS(702),
    [anon_sym_TILDE] = ACTIONS(704),
    [anon_sym_TILDE_AT] = ACTIONS(702),
    [sym_gensym] = ACTIONS(702),
    [anon_sym_AT] = ACTIONS(702),
  },
  [152] = {
    [sym__anything] = STATE(88),
    [sym__literals] = STATE(88),
    [sym__collection_literals] = STATE(88),
    [sym_boolean] = STATE(88),
    [sym_number] = STATE(88),
    [sym__number] = STATE(32),
    [sym_character] = STATE(88),
    [sym__character] = STATE(33),
    [sym_string] = STATE(88),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(88),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(88),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(88),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(88),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(88),
    [sym_list] = STATE(88),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(88),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(88),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym__hash_map_kv_pair] = STATE(152),
    [sym__hash_map_key] = STATE(88),
    [sym_set] = STATE(88),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(88),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(88),
    [sym_anonymous_function] = STATE(88),
    [sym_shorthand_function] = STATE(88),
    [sym_defn] = STATE(88),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(88),
    [sym_var_quote] = STATE(88),
    [sym_unquote] = STATE(88),
    [sym_unquote_splice] = STATE(88),
    [sym_deref] = STATE(88),
    [aux_sym__hash_map_repeat1] = STATE(152),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(706),
    [sym_true] = ACTIONS(709),
    [sym_false] = ACTIONS(709),
    [sym_number_long] = ACTIONS(712),
    [sym_number_double] = ACTIONS(715),
    [sym_number_bigint] = ACTIONS(712),
    [sym_number_ratio] = ACTIONS(715),
    [anon_sym_BSLASH] = ACTIONS(718),
    [anon_sym_DQUOTE] = ACTIONS(721),
    [anon_sym_POUND_DQUOTE] = ACTIONS(724),
    [anon_sym_SQUOTE] = ACTIONS(727),
    [anon_sym_LPARENquote] = ACTIONS(730),
    [anon_sym_COLON] = ACTIONS(733),
    [anon_sym_COLON_COLON] = ACTIONS(736),
    [anon_sym_DASH_GT] = ACTIONS(739),
    [anon_sym_DASH_GT_GT] = ACTIONS(742),
    [anon_sym_as_DASH_GT] = ACTIONS(742),
    [anon_sym_some_DASH_GT] = ACTIONS(739),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(742),
    [anon_sym_cond_DASH_GT] = ACTIONS(739),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(742),
    [sym__symbol_chars] = ACTIONS(745),
    [sym_member_access] = ACTIONS(748),
    [sym_field_access] = ACTIONS(748),
    [sym_new_class] = ACTIONS(748),
    [anon_sym_LPAREN] = ACTIONS(751),
    [anon_sym_LBRACK] = ACTIONS(754),
    [anon_sym_LBRACE] = ACTIONS(757),
    [anon_sym_RBRACE] = ACTIONS(760),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(762),
    [anon_sym_POUND] = ACTIONS(765),
    [anon_sym_POUND_LBRACE] = ACTIONS(768),
    [anon_sym_SEMI] = ACTIONS(771),
    [anon_sym_POUND_BANG] = ACTIONS(774),
    [anon_sym_POUND_] = ACTIONS(777),
    [anon_sym_POUND_LPAREN] = ACTIONS(780),
    [sym_shorthand_function_arg] = ACTIONS(783),
    [anon_sym_CARET] = ACTIONS(786),
    [anon_sym_CARET_COLON] = ACTIONS(789),
    [anon_sym_CARET_DQUOTE] = ACTIONS(792),
    [anon_sym_BQUOTE] = ACTIONS(795),
    [anon_sym_POUND_SQUOTE] = ACTIONS(798),
    [anon_sym_TILDE] = ACTIONS(801),
    [anon_sym_TILDE_AT] = ACTIONS(804),
    [sym_gensym] = ACTIONS(783),
    [anon_sym_AT] = ACTIONS(807),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(810),
    [sym_nil] = ACTIONS(812),
    [sym_true] = ACTIONS(812),
    [sym_false] = ACTIONS(812),
    [sym_number_long] = ACTIONS(812),
    [sym_number_double] = ACTIONS(810),
    [sym_number_bigint] = ACTIONS(812),
    [sym_number_ratio] = ACTIONS(810),
    [anon_sym_BSLASH] = ACTIONS(810),
    [anon_sym_DQUOTE] = ACTIONS(810),
    [anon_sym_POUND_DQUOTE] = ACTIONS(810),
    [anon_sym_SQUOTE] = ACTIONS(810),
    [anon_sym_LPARENquote] = ACTIONS(810),
    [anon_sym_RPAREN] = ACTIONS(810),
    [anon_sym_COLON] = ACTIONS(812),
    [anon_sym_COLON_COLON] = ACTIONS(810),
    [anon_sym_DASH_GT] = ACTIONS(812),
    [anon_sym_DASH_GT_GT] = ACTIONS(810),
    [anon_sym_as_DASH_GT] = ACTIONS(810),
    [anon_sym_some_DASH_GT] = ACTIONS(812),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(810),
    [anon_sym_cond_DASH_GT] = ACTIONS(812),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(810),
    [sym__symbol_chars] = ACTIONS(812),
    [sym_member_access] = ACTIONS(810),
    [sym_field_access] = ACTIONS(810),
    [sym_new_class] = ACTIONS(810),
    [anon_sym_LPAREN] = ACTIONS(812),
    [anon_sym_LBRACK] = ACTIONS(810),
    [anon_sym_RBRACK] = ACTIONS(810),
    [anon_sym_LBRACE] = ACTIONS(810),
    [anon_sym_RBRACE] = ACTIONS(810),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(810),
    [anon_sym_POUND] = ACTIONS(812),
    [anon_sym_POUND_LBRACE] = ACTIONS(810),
    [anon_sym_SEMI] = ACTIONS(810),
    [anon_sym_POUND_BANG] = ACTIONS(810),
    [anon_sym_POUND_] = ACTIONS(810),
    [anon_sym_POUND_LPAREN] = ACTIONS(810),
    [sym_shorthand_function_arg] = ACTIONS(810),
    [anon_sym_CARET] = ACTIONS(812),
    [anon_sym_CARET_COLON] = ACTIONS(810),
    [anon_sym_CARET_DQUOTE] = ACTIONS(810),
    [anon_sym_BQUOTE] = ACTIONS(810),
    [anon_sym_POUND_SQUOTE] = ACTIONS(810),
    [anon_sym_TILDE] = ACTIONS(812),
    [anon_sym_TILDE_AT] = ACTIONS(810),
    [sym_gensym] = ACTIONS(810),
    [anon_sym_AT] = ACTIONS(810),
  },
  [154] = {
    [sym__anything] = STATE(88),
    [sym__literals] = STATE(88),
    [sym__collection_literals] = STATE(88),
    [sym_boolean] = STATE(88),
    [sym_number] = STATE(88),
    [sym__number] = STATE(32),
    [sym_character] = STATE(88),
    [sym__character] = STATE(33),
    [sym_string] = STATE(88),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(88),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(88),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(88),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(88),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(88),
    [sym_list] = STATE(88),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(88),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(88),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym__hash_map_kv_pair] = STATE(184),
    [sym__hash_map_key] = STATE(88),
    [sym_set] = STATE(88),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(88),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(88),
    [sym_anonymous_function] = STATE(88),
    [sym_shorthand_function] = STATE(88),
    [sym_defn] = STATE(88),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(88),
    [sym_var_quote] = STATE(88),
    [sym_unquote] = STATE(88),
    [sym_unquote_splice] = STATE(88),
    [sym_deref] = STATE(88),
    [aux_sym__hash_map_repeat1] = STATE(184),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(167),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(169),
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
    [anon_sym_RBRACE] = ACTIONS(814),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(173),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(175),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(179),
    [anon_sym_TILDE_AT] = ACTIONS(181),
    [sym_gensym] = ACTIONS(175),
    [anon_sym_AT] = ACTIONS(73),
  },
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(816),
    [sym_nil] = ACTIONS(818),
    [sym_true] = ACTIONS(818),
    [sym_false] = ACTIONS(818),
    [sym_number_long] = ACTIONS(818),
    [sym_number_double] = ACTIONS(816),
    [sym_number_bigint] = ACTIONS(818),
    [sym_number_ratio] = ACTIONS(816),
    [anon_sym_BSLASH] = ACTIONS(816),
    [anon_sym_DQUOTE] = ACTIONS(816),
    [anon_sym_POUND_DQUOTE] = ACTIONS(816),
    [anon_sym_SQUOTE] = ACTIONS(816),
    [anon_sym_LPARENquote] = ACTIONS(816),
    [anon_sym_RPAREN] = ACTIONS(816),
    [anon_sym_COLON] = ACTIONS(818),
    [anon_sym_COLON_COLON] = ACTIONS(816),
    [anon_sym_DASH_GT] = ACTIONS(818),
    [anon_sym_DASH_GT_GT] = ACTIONS(816),
    [anon_sym_as_DASH_GT] = ACTIONS(816),
    [anon_sym_some_DASH_GT] = ACTIONS(818),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(816),
    [anon_sym_cond_DASH_GT] = ACTIONS(818),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(816),
    [sym__symbol_chars] = ACTIONS(818),
    [sym_member_access] = ACTIONS(816),
    [sym_field_access] = ACTIONS(816),
    [sym_new_class] = ACTIONS(816),
    [anon_sym_LPAREN] = ACTIONS(818),
    [anon_sym_LBRACK] = ACTIONS(816),
    [anon_sym_RBRACK] = ACTIONS(816),
    [anon_sym_LBRACE] = ACTIONS(816),
    [anon_sym_RBRACE] = ACTIONS(816),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(816),
    [anon_sym_POUND] = ACTIONS(818),
    [anon_sym_POUND_LBRACE] = ACTIONS(816),
    [anon_sym_SEMI] = ACTIONS(816),
    [anon_sym_POUND_BANG] = ACTIONS(816),
    [anon_sym_POUND_] = ACTIONS(816),
    [anon_sym_POUND_LPAREN] = ACTIONS(816),
    [sym_shorthand_function_arg] = ACTIONS(816),
    [anon_sym_CARET] = ACTIONS(818),
    [anon_sym_CARET_COLON] = ACTIONS(816),
    [anon_sym_CARET_DQUOTE] = ACTIONS(816),
    [anon_sym_BQUOTE] = ACTIONS(816),
    [anon_sym_POUND_SQUOTE] = ACTIONS(816),
    [anon_sym_TILDE] = ACTIONS(818),
    [anon_sym_TILDE_AT] = ACTIONS(816),
    [sym_gensym] = ACTIONS(816),
    [anon_sym_AT] = ACTIONS(816),
  },
  [156] = {
    [sym__anything] = STATE(156),
    [sym__literals] = STATE(156),
    [sym__collection_literals] = STATE(156),
    [sym_boolean] = STATE(156),
    [sym_number] = STATE(156),
    [sym__number] = STATE(32),
    [sym_character] = STATE(156),
    [sym__character] = STATE(33),
    [sym_string] = STATE(156),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(156),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(156),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(156),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(156),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(156),
    [sym_list] = STATE(156),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(156),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(156),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(156),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(156),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(156),
    [sym_anonymous_function] = STATE(156),
    [sym_shorthand_function] = STATE(156),
    [sym_defn] = STATE(156),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(156),
    [sym_var_quote] = STATE(156),
    [sym_unquote] = STATE(156),
    [sym_unquote_splice] = STATE(156),
    [sym_deref] = STATE(156),
    [aux_sym_program_repeat1] = STATE(156),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(820),
    [sym_true] = ACTIONS(474),
    [sym_false] = ACTIONS(474),
    [sym_number_long] = ACTIONS(477),
    [sym_number_double] = ACTIONS(480),
    [sym_number_bigint] = ACTIONS(477),
    [sym_number_ratio] = ACTIONS(480),
    [anon_sym_BSLASH] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(486),
    [anon_sym_POUND_DQUOTE] = ACTIONS(489),
    [anon_sym_SQUOTE] = ACTIONS(823),
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
    [sym_member_access] = ACTIONS(513),
    [sym_field_access] = ACTIONS(513),
    [sym_new_class] = ACTIONS(513),
    [anon_sym_LPAREN] = ACTIONS(516),
    [anon_sym_LBRACK] = ACTIONS(519),
    [anon_sym_LBRACE] = ACTIONS(522),
    [anon_sym_RBRACE] = ACTIONS(469),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(525),
    [anon_sym_POUND] = ACTIONS(528),
    [anon_sym_POUND_LBRACE] = ACTIONS(531),
    [anon_sym_SEMI] = ACTIONS(534),
    [anon_sym_POUND_BANG] = ACTIONS(537),
    [anon_sym_POUND_] = ACTIONS(826),
    [anon_sym_POUND_LPAREN] = ACTIONS(543),
    [sym_shorthand_function_arg] = ACTIONS(829),
    [anon_sym_CARET] = ACTIONS(549),
    [anon_sym_CARET_COLON] = ACTIONS(552),
    [anon_sym_CARET_DQUOTE] = ACTIONS(555),
    [anon_sym_BQUOTE] = ACTIONS(832),
    [anon_sym_POUND_SQUOTE] = ACTIONS(561),
    [anon_sym_TILDE] = ACTIONS(835),
    [anon_sym_TILDE_AT] = ACTIONS(838),
    [sym_gensym] = ACTIONS(829),
    [anon_sym_AT] = ACTIONS(570),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(841),
    [sym_nil] = ACTIONS(843),
    [sym_true] = ACTIONS(843),
    [sym_false] = ACTIONS(843),
    [sym_number_long] = ACTIONS(843),
    [sym_number_double] = ACTIONS(841),
    [sym_number_bigint] = ACTIONS(843),
    [sym_number_ratio] = ACTIONS(841),
    [anon_sym_BSLASH] = ACTIONS(841),
    [anon_sym_DQUOTE] = ACTIONS(841),
    [anon_sym_POUND_DQUOTE] = ACTIONS(841),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [anon_sym_LPARENquote] = ACTIONS(841),
    [anon_sym_RPAREN] = ACTIONS(841),
    [anon_sym_COLON] = ACTIONS(843),
    [anon_sym_COLON_COLON] = ACTIONS(841),
    [anon_sym_DASH_GT] = ACTIONS(843),
    [anon_sym_DASH_GT_GT] = ACTIONS(841),
    [anon_sym_as_DASH_GT] = ACTIONS(841),
    [anon_sym_some_DASH_GT] = ACTIONS(843),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(841),
    [anon_sym_cond_DASH_GT] = ACTIONS(843),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(841),
    [sym__symbol_chars] = ACTIONS(843),
    [sym_member_access] = ACTIONS(841),
    [sym_field_access] = ACTIONS(841),
    [sym_new_class] = ACTIONS(841),
    [anon_sym_LPAREN] = ACTIONS(843),
    [anon_sym_LBRACK] = ACTIONS(841),
    [anon_sym_RBRACK] = ACTIONS(841),
    [anon_sym_LBRACE] = ACTIONS(841),
    [anon_sym_RBRACE] = ACTIONS(841),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(841),
    [anon_sym_POUND] = ACTIONS(843),
    [anon_sym_POUND_LBRACE] = ACTIONS(841),
    [anon_sym_SEMI] = ACTIONS(841),
    [anon_sym_POUND_BANG] = ACTIONS(841),
    [anon_sym_POUND_] = ACTIONS(841),
    [anon_sym_POUND_LPAREN] = ACTIONS(841),
    [sym_shorthand_function_arg] = ACTIONS(841),
    [anon_sym_CARET] = ACTIONS(843),
    [anon_sym_CARET_COLON] = ACTIONS(841),
    [anon_sym_CARET_DQUOTE] = ACTIONS(841),
    [anon_sym_BQUOTE] = ACTIONS(841),
    [anon_sym_POUND_SQUOTE] = ACTIONS(841),
    [anon_sym_TILDE] = ACTIONS(843),
    [anon_sym_TILDE_AT] = ACTIONS(841),
    [sym_gensym] = ACTIONS(841),
    [anon_sym_AT] = ACTIONS(841),
  },
  [158] = {
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
  [159] = {
    [sym__anything] = STATE(88),
    [sym__literals] = STATE(88),
    [sym__collection_literals] = STATE(88),
    [sym_boolean] = STATE(88),
    [sym_number] = STATE(88),
    [sym__number] = STATE(32),
    [sym_character] = STATE(88),
    [sym__character] = STATE(33),
    [sym_string] = STATE(88),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(88),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(88),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(88),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(88),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(88),
    [sym_list] = STATE(88),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(88),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(88),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym__hash_map_kv_pair] = STATE(152),
    [sym__hash_map_key] = STATE(88),
    [sym_set] = STATE(88),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(88),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(88),
    [sym_anonymous_function] = STATE(88),
    [sym_shorthand_function] = STATE(88),
    [sym_defn] = STATE(88),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(88),
    [sym_var_quote] = STATE(88),
    [sym_unquote] = STATE(88),
    [sym_unquote_splice] = STATE(88),
    [sym_deref] = STATE(88),
    [aux_sym__hash_map_repeat1] = STATE(152),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(167),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(169),
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
    [anon_sym_RBRACE] = ACTIONS(845),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(173),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(175),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(179),
    [anon_sym_TILDE_AT] = ACTIONS(181),
    [sym_gensym] = ACTIONS(175),
    [anon_sym_AT] = ACTIONS(73),
  },
  [160] = {
    [anon_sym_DASH_GT] = ACTIONS(395),
    [anon_sym_DASH_GT_GT] = ACTIONS(393),
    [anon_sym_as_DASH_GT] = ACTIONS(393),
    [anon_sym_some_DASH_GT] = ACTIONS(395),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(393),
    [anon_sym_cond_DASH_GT] = ACTIONS(395),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(393),
    [sym__symbol_chars] = ACTIONS(395),
    [anon_sym_LPAREN] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(393),
    [anon_sym_LBRACE] = ACTIONS(393),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(393),
    [anon_sym_POUND] = ACTIONS(395),
    [anon_sym_POUND_LBRACE] = ACTIONS(393),
  },
  [161] = {
    [sym__anything] = STATE(88),
    [sym__literals] = STATE(88),
    [sym__collection_literals] = STATE(88),
    [sym_boolean] = STATE(88),
    [sym_number] = STATE(88),
    [sym__number] = STATE(32),
    [sym_character] = STATE(88),
    [sym__character] = STATE(33),
    [sym_string] = STATE(88),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(88),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(88),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(88),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(88),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(88),
    [sym_list] = STATE(88),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(88),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(88),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym__hash_map_kv_pair] = STATE(152),
    [sym__hash_map_key] = STATE(88),
    [sym_set] = STATE(88),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(88),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(88),
    [sym_anonymous_function] = STATE(88),
    [sym_shorthand_function] = STATE(88),
    [sym_defn] = STATE(88),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(88),
    [sym_var_quote] = STATE(88),
    [sym_unquote] = STATE(88),
    [sym_unquote_splice] = STATE(88),
    [sym_deref] = STATE(88),
    [aux_sym__hash_map_repeat1] = STATE(152),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(167),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(169),
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
    [anon_sym_RBRACE] = ACTIONS(847),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(173),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(175),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(179),
    [anon_sym_TILDE_AT] = ACTIONS(181),
    [sym_gensym] = ACTIONS(175),
    [anon_sym_AT] = ACTIONS(73),
  },
  [162] = {
    [anon_sym_LBRACE] = ACTIONS(849),
  },
  [163] = {
    [anon_sym_DASH_GT] = ACTIONS(851),
    [anon_sym_DASH_GT_GT] = ACTIONS(853),
    [anon_sym_as_DASH_GT] = ACTIONS(853),
    [anon_sym_some_DASH_GT] = ACTIONS(851),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(853),
    [anon_sym_cond_DASH_GT] = ACTIONS(851),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(853),
    [sym__symbol_chars] = ACTIONS(851),
    [anon_sym_LPAREN] = ACTIONS(853),
    [anon_sym_LBRACK] = ACTIONS(853),
    [anon_sym_LBRACE] = ACTIONS(853),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(853),
    [anon_sym_POUND] = ACTIONS(851),
    [anon_sym_POUND_LBRACE] = ACTIONS(853),
    [anon_sym_CARET] = ACTIONS(851),
    [anon_sym_CARET_COLON] = ACTIONS(853),
    [anon_sym_CARET_DQUOTE] = ACTIONS(853),
  },
  [164] = {
    [sym__hex_char] = ACTIONS(855),
  },
  [165] = {
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(857),
    [anon_sym_TILDE] = ACTIONS(859),
    [anon_sym_TILDE_AT] = ACTIONS(857),
    [sym_gensym] = ACTIONS(857),
    [anon_sym_AT] = ACTIONS(857),
  },
  [166] = {
    [ts_builtin_sym_end] = ACTIONS(861),
    [sym_nil] = ACTIONS(863),
    [sym_true] = ACTIONS(863),
    [sym_false] = ACTIONS(863),
    [sym_number_long] = ACTIONS(863),
    [sym_number_double] = ACTIONS(861),
    [sym_number_bigint] = ACTIONS(863),
    [sym_number_ratio] = ACTIONS(861),
    [anon_sym_BSLASH] = ACTIONS(861),
    [anon_sym_DQUOTE] = ACTIONS(861),
    [anon_sym_POUND_DQUOTE] = ACTIONS(861),
    [anon_sym_SQUOTE] = ACTIONS(861),
    [anon_sym_LPARENquote] = ACTIONS(861),
    [anon_sym_RPAREN] = ACTIONS(861),
    [anon_sym_COLON] = ACTIONS(863),
    [anon_sym_COLON_COLON] = ACTIONS(861),
    [anon_sym_DASH_GT] = ACTIONS(863),
    [anon_sym_DASH_GT_GT] = ACTIONS(861),
    [anon_sym_as_DASH_GT] = ACTIONS(861),
    [anon_sym_some_DASH_GT] = ACTIONS(863),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(861),
    [anon_sym_cond_DASH_GT] = ACTIONS(863),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(861),
    [sym__symbol_chars] = ACTIONS(863),
    [sym_member_access] = ACTIONS(861),
    [sym_field_access] = ACTIONS(861),
    [sym_new_class] = ACTIONS(861),
    [anon_sym_LPAREN] = ACTIONS(863),
    [anon_sym_LBRACK] = ACTIONS(861),
    [anon_sym_RBRACK] = ACTIONS(861),
    [anon_sym_LBRACE] = ACTIONS(861),
    [anon_sym_RBRACE] = ACTIONS(861),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(861),
    [anon_sym_POUND] = ACTIONS(863),
    [anon_sym_POUND_LBRACE] = ACTIONS(861),
    [anon_sym_SEMI] = ACTIONS(861),
    [anon_sym_POUND_BANG] = ACTIONS(861),
    [anon_sym_POUND_] = ACTIONS(861),
    [anon_sym_POUND_LPAREN] = ACTIONS(861),
    [sym_shorthand_function_arg] = ACTIONS(861),
    [anon_sym_CARET] = ACTIONS(863),
    [anon_sym_CARET_COLON] = ACTIONS(861),
    [anon_sym_CARET_DQUOTE] = ACTIONS(861),
    [anon_sym_BQUOTE] = ACTIONS(861),
    [anon_sym_POUND_SQUOTE] = ACTIONS(861),
    [anon_sym_TILDE] = ACTIONS(863),
    [anon_sym_TILDE_AT] = ACTIONS(861),
    [sym_gensym] = ACTIONS(861),
    [anon_sym_AT] = ACTIONS(861),
  },
  [167] = {
    [sym__symbol_chars] = ACTIONS(865),
  },
  [168] = {
    [anon_sym_RPAREN] = ACTIONS(867),
  },
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(869),
    [sym_nil] = ACTIONS(871),
    [sym_true] = ACTIONS(871),
    [sym_false] = ACTIONS(871),
    [sym_number_long] = ACTIONS(871),
    [sym_number_double] = ACTIONS(869),
    [sym_number_bigint] = ACTIONS(871),
    [sym_number_ratio] = ACTIONS(869),
    [anon_sym_BSLASH] = ACTIONS(869),
    [anon_sym_DQUOTE] = ACTIONS(869),
    [anon_sym_POUND_DQUOTE] = ACTIONS(869),
    [anon_sym_SQUOTE] = ACTIONS(869),
    [anon_sym_LPARENquote] = ACTIONS(869),
    [anon_sym_RPAREN] = ACTIONS(869),
    [anon_sym_COLON] = ACTIONS(871),
    [anon_sym_COLON_COLON] = ACTIONS(869),
    [anon_sym_DASH_GT] = ACTIONS(871),
    [anon_sym_DASH_GT_GT] = ACTIONS(869),
    [anon_sym_as_DASH_GT] = ACTIONS(869),
    [anon_sym_some_DASH_GT] = ACTIONS(871),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(869),
    [anon_sym_cond_DASH_GT] = ACTIONS(871),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(869),
    [sym__symbol_chars] = ACTIONS(871),
    [sym_member_access] = ACTIONS(869),
    [sym_field_access] = ACTIONS(869),
    [sym_new_class] = ACTIONS(869),
    [anon_sym_LPAREN] = ACTIONS(871),
    [anon_sym_LBRACK] = ACTIONS(869),
    [anon_sym_RBRACK] = ACTIONS(869),
    [anon_sym_LBRACE] = ACTIONS(869),
    [anon_sym_RBRACE] = ACTIONS(869),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(869),
    [anon_sym_POUND] = ACTIONS(871),
    [anon_sym_POUND_LBRACE] = ACTIONS(869),
    [anon_sym_SEMI] = ACTIONS(869),
    [anon_sym_POUND_BANG] = ACTIONS(869),
    [anon_sym_POUND_] = ACTIONS(869),
    [anon_sym_POUND_LPAREN] = ACTIONS(869),
    [sym_shorthand_function_arg] = ACTIONS(869),
    [anon_sym_CARET] = ACTIONS(871),
    [anon_sym_CARET_COLON] = ACTIONS(869),
    [anon_sym_CARET_DQUOTE] = ACTIONS(869),
    [anon_sym_BQUOTE] = ACTIONS(869),
    [anon_sym_POUND_SQUOTE] = ACTIONS(869),
    [anon_sym_TILDE] = ACTIONS(871),
    [anon_sym_TILDE_AT] = ACTIONS(869),
    [sym_gensym] = ACTIONS(869),
    [anon_sym_AT] = ACTIONS(869),
  },
  [170] = {
    [anon_sym_RPAREN] = ACTIONS(873),
  },
  [171] = {
    [anon_sym_RPAREN] = ACTIONS(875),
  },
  [172] = {
    [sym__anything] = STATE(147),
    [sym__literals] = STATE(147),
    [sym__collection_literals] = STATE(147),
    [sym_boolean] = STATE(147),
    [sym_number] = STATE(147),
    [sym__number] = STATE(32),
    [sym_character] = STATE(147),
    [sym__character] = STATE(33),
    [sym_string] = STATE(147),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(147),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(147),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(147),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(147),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(147),
    [sym_list] = STATE(147),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(147),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(147),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym_set] = STATE(147),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(147),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(147),
    [sym_anonymous_function] = STATE(147),
    [sym_shorthand_function] = STATE(147),
    [sym_defn] = STATE(147),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(147),
    [sym_var_quote] = STATE(147),
    [sym_unquote] = STATE(147),
    [sym_unquote_splice] = STATE(147),
    [sym_deref] = STATE(147),
    [aux_sym_program_repeat1] = STATE(147),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(367),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(877),
    [anon_sym_COLON] = ACTIONS(25),
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
    [anon_sym_POUND_] = ACTIONS(135),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(371),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(147),
    [anon_sym_TILDE_AT] = ACTIONS(149),
    [sym_gensym] = ACTIONS(371),
    [anon_sym_AT] = ACTIONS(73),
  },
  [173] = {
    [aux_sym__multi_arity_fn_repeat1] = STATE(173),
    [anon_sym_RPAREN] = ACTIONS(879),
    [anon_sym_LPAREN] = ACTIONS(881),
  },
  [174] = {
    [aux_sym__string_repeat1] = STATE(193),
    [anon_sym_DQUOTE] = ACTIONS(884),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(886),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(886),
  },
  [175] = {
    [anon_sym_LPAREN] = ACTIONS(888),
    [anon_sym_LBRACK] = ACTIONS(888),
    [anon_sym_LBRACE] = ACTIONS(888),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(888),
    [anon_sym_POUND] = ACTIONS(890),
  },
  [176] = {
    [anon_sym_LPAREN] = ACTIONS(253),
    [anon_sym_LBRACK] = ACTIONS(253),
    [anon_sym_LBRACE] = ACTIONS(253),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(253),
    [anon_sym_POUND] = ACTIONS(255),
  },
  [177] = {
    [anon_sym_LPAREN] = ACTIONS(892),
    [anon_sym_LBRACK] = ACTIONS(892),
  },
  [178] = {
    [anon_sym_RPAREN] = ACTIONS(894),
  },
  [179] = {
    [sym_vector] = STATE(138),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(177),
    [sym__hash_map] = STATE(110),
    [sym_namespace_map] = STATE(110),
    [sym__after_the_fn_name] = STATE(195),
    [sym__single_arity_fn] = STATE(195),
    [sym__multi_arity_fn] = STATE(195),
    [sym_params] = STATE(141),
    [sym_attr_map] = STATE(196),
    [aux_sym__multi_arity_fn_repeat1] = STATE(142),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(219),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(221),
    [anon_sym_POUND] = ACTIONS(223),
  },
  [180] = {
    [sym_vector] = STATE(138),
    [sym__vector] = STATE(40),
    [sym__after_the_fn_name] = STATE(195),
    [sym__single_arity_fn] = STATE(195),
    [sym__multi_arity_fn] = STATE(195),
    [sym_params] = STATE(141),
    [aux_sym__multi_arity_fn_repeat1] = STATE(142),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(39),
  },
  [181] = {
    [sym_string] = STATE(175),
    [sym__string] = STATE(176),
    [sym_vector] = STATE(138),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(177),
    [sym__hash_map] = STATE(110),
    [sym_namespace_map] = STATE(110),
    [sym__after_the_fn_name] = STATE(195),
    [sym__single_arity_fn] = STATE(195),
    [sym__multi_arity_fn] = STATE(195),
    [sym_params] = STATE(141),
    [sym_docstring] = STATE(197),
    [sym_attr_map] = STATE(196),
    [aux_sym__multi_arity_fn_repeat1] = STATE(142),
    [anon_sym_DQUOTE] = ACTIONS(646),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(219),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(221),
    [anon_sym_POUND] = ACTIONS(223),
  },
  [182] = {
    [sym_metadata_shorthand] = STATE(182),
    [aux_sym_metadata_repeat1] = STATE(182),
    [anon_sym_DASH_GT] = ACTIONS(575),
    [anon_sym_DASH_GT_GT] = ACTIONS(573),
    [anon_sym_as_DASH_GT] = ACTIONS(573),
    [anon_sym_some_DASH_GT] = ACTIONS(575),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(573),
    [anon_sym_cond_DASH_GT] = ACTIONS(575),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(573),
    [sym__symbol_chars] = ACTIONS(575),
    [anon_sym_CARET] = ACTIONS(577),
    [anon_sym_CARET_COLON] = ACTIONS(580),
    [anon_sym_CARET_DQUOTE] = ACTIONS(583),
  },
  [183] = {
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(896),
    [anon_sym_TILDE] = ACTIONS(898),
    [anon_sym_TILDE_AT] = ACTIONS(896),
    [sym_gensym] = ACTIONS(896),
    [anon_sym_AT] = ACTIONS(896),
  },
  [184] = {
    [sym__anything] = STATE(88),
    [sym__literals] = STATE(88),
    [sym__collection_literals] = STATE(88),
    [sym_boolean] = STATE(88),
    [sym_number] = STATE(88),
    [sym__number] = STATE(32),
    [sym_character] = STATE(88),
    [sym__character] = STATE(33),
    [sym_string] = STATE(88),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(88),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(88),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(88),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(88),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(88),
    [sym_list] = STATE(88),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(88),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(88),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym__hash_map_kv_pair] = STATE(152),
    [sym__hash_map_key] = STATE(88),
    [sym_set] = STATE(88),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(88),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(88),
    [sym_anonymous_function] = STATE(88),
    [sym_shorthand_function] = STATE(88),
    [sym_defn] = STATE(88),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(88),
    [sym_var_quote] = STATE(88),
    [sym_unquote] = STATE(88),
    [sym_unquote_splice] = STATE(88),
    [sym_deref] = STATE(88),
    [aux_sym__hash_map_repeat1] = STATE(152),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(167),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(169),
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
    [anon_sym_POUND_] = ACTIONS(173),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(175),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(179),
    [anon_sym_TILDE_AT] = ACTIONS(181),
    [sym_gensym] = ACTIONS(175),
    [anon_sym_AT] = ACTIONS(73),
  },
  [185] = {
    [anon_sym_DASH_GT] = ACTIONS(704),
    [anon_sym_DASH_GT_GT] = ACTIONS(702),
    [anon_sym_as_DASH_GT] = ACTIONS(702),
    [anon_sym_some_DASH_GT] = ACTIONS(704),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(702),
    [anon_sym_cond_DASH_GT] = ACTIONS(704),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(702),
    [sym__symbol_chars] = ACTIONS(704),
    [anon_sym_LPAREN] = ACTIONS(702),
    [anon_sym_LBRACK] = ACTIONS(702),
    [anon_sym_LBRACE] = ACTIONS(702),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(702),
    [anon_sym_POUND] = ACTIONS(704),
    [anon_sym_POUND_LBRACE] = ACTIONS(702),
  },
  [186] = {
    [anon_sym_DASH_GT] = ACTIONS(812),
    [anon_sym_DASH_GT_GT] = ACTIONS(810),
    [anon_sym_as_DASH_GT] = ACTIONS(810),
    [anon_sym_some_DASH_GT] = ACTIONS(812),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(810),
    [anon_sym_cond_DASH_GT] = ACTIONS(812),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(810),
    [sym__symbol_chars] = ACTIONS(812),
    [anon_sym_LPAREN] = ACTIONS(810),
    [anon_sym_LBRACK] = ACTIONS(810),
    [anon_sym_LBRACE] = ACTIONS(810),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(810),
    [anon_sym_POUND] = ACTIONS(812),
    [anon_sym_POUND_LBRACE] = ACTIONS(810),
  },
  [187] = {
    [sym__anything] = STATE(88),
    [sym__literals] = STATE(88),
    [sym__collection_literals] = STATE(88),
    [sym_boolean] = STATE(88),
    [sym_number] = STATE(88),
    [sym__number] = STATE(32),
    [sym_character] = STATE(88),
    [sym__character] = STATE(33),
    [sym_string] = STATE(88),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(88),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(88),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(88),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(88),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(88),
    [sym_list] = STATE(88),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(88),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(88),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym__hash_map_kv_pair] = STATE(200),
    [sym__hash_map_key] = STATE(88),
    [sym_set] = STATE(88),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(88),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(88),
    [sym_anonymous_function] = STATE(88),
    [sym_shorthand_function] = STATE(88),
    [sym_defn] = STATE(88),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(88),
    [sym_var_quote] = STATE(88),
    [sym_unquote] = STATE(88),
    [sym_unquote_splice] = STATE(88),
    [sym_deref] = STATE(88),
    [aux_sym__hash_map_repeat1] = STATE(200),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(167),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(169),
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
    [anon_sym_RBRACE] = ACTIONS(902),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(173),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(175),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(179),
    [anon_sym_TILDE_AT] = ACTIONS(181),
    [sym_gensym] = ACTIONS(175),
    [anon_sym_AT] = ACTIONS(73),
  },
  [188] = {
    [sym__hex_char] = ACTIONS(904),
  },
  [189] = {
    [anon_sym_DQUOTE] = ACTIONS(616),
    [anon_sym_LPAREN] = ACTIONS(616),
    [anon_sym_LBRACK] = ACTIONS(616),
    [anon_sym_LBRACE] = ACTIONS(616),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(616),
    [anon_sym_POUND] = ACTIONS(618),
  },
  [190] = {
    [anon_sym_RPAREN] = ACTIONS(906),
    [anon_sym_LPAREN] = ACTIONS(906),
  },
  [191] = {
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(908),
    [anon_sym_TILDE] = ACTIONS(910),
    [anon_sym_TILDE_AT] = ACTIONS(908),
    [sym_gensym] = ACTIONS(908),
    [anon_sym_AT] = ACTIONS(908),
  },
  [192] = {
    [anon_sym_LPAREN] = ACTIONS(315),
    [anon_sym_LBRACK] = ACTIONS(315),
    [anon_sym_LBRACE] = ACTIONS(315),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(315),
    [anon_sym_POUND] = ACTIONS(317),
  },
  [193] = {
    [aux_sym__string_repeat1] = STATE(125),
    [anon_sym_DQUOTE] = ACTIONS(912),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(321),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(321),
  },
  [194] = {
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(914),
    [anon_sym_TILDE] = ACTIONS(916),
    [anon_sym_TILDE_AT] = ACTIONS(914),
    [sym_gensym] = ACTIONS(914),
    [anon_sym_AT] = ACTIONS(914),
  },
  [195] = {
    [anon_sym_RPAREN] = ACTIONS(918),
  },
  [196] = {
    [sym_vector] = STATE(138),
    [sym__vector] = STATE(40),
    [sym__after_the_fn_name] = STATE(204),
    [sym__single_arity_fn] = STATE(204),
    [sym__multi_arity_fn] = STATE(204),
    [sym_params] = STATE(141),
    [aux_sym__multi_arity_fn_repeat1] = STATE(142),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(39),
  },
  [197] = {
    [sym_vector] = STATE(138),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(177),
    [sym__hash_map] = STATE(110),
    [sym_namespace_map] = STATE(110),
    [sym__after_the_fn_name] = STATE(204),
    [sym__single_arity_fn] = STATE(204),
    [sym__multi_arity_fn] = STATE(204),
    [sym_params] = STATE(141),
    [sym_attr_map] = STATE(205),
    [aux_sym__multi_arity_fn_repeat1] = STATE(142),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(219),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(221),
    [anon_sym_POUND] = ACTIONS(223),
  },
  [198] = {
    [ts_builtin_sym_end] = ACTIONS(920),
    [sym_nil] = ACTIONS(922),
    [sym_true] = ACTIONS(922),
    [sym_false] = ACTIONS(922),
    [sym_number_long] = ACTIONS(922),
    [sym_number_double] = ACTIONS(920),
    [sym_number_bigint] = ACTIONS(922),
    [sym_number_ratio] = ACTIONS(920),
    [anon_sym_BSLASH] = ACTIONS(920),
    [anon_sym_DQUOTE] = ACTIONS(920),
    [anon_sym_POUND_DQUOTE] = ACTIONS(920),
    [anon_sym_SQUOTE] = ACTIONS(920),
    [anon_sym_LPARENquote] = ACTIONS(920),
    [anon_sym_RPAREN] = ACTIONS(920),
    [anon_sym_COLON] = ACTIONS(922),
    [anon_sym_COLON_COLON] = ACTIONS(920),
    [anon_sym_DASH_GT] = ACTIONS(922),
    [anon_sym_DASH_GT_GT] = ACTIONS(920),
    [anon_sym_as_DASH_GT] = ACTIONS(920),
    [anon_sym_some_DASH_GT] = ACTIONS(922),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(920),
    [anon_sym_cond_DASH_GT] = ACTIONS(922),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(920),
    [sym__symbol_chars] = ACTIONS(922),
    [sym_member_access] = ACTIONS(920),
    [sym_field_access] = ACTIONS(920),
    [sym_new_class] = ACTIONS(920),
    [anon_sym_LPAREN] = ACTIONS(922),
    [anon_sym_LBRACK] = ACTIONS(920),
    [anon_sym_RBRACK] = ACTIONS(920),
    [anon_sym_LBRACE] = ACTIONS(920),
    [anon_sym_RBRACE] = ACTIONS(920),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(920),
    [anon_sym_POUND] = ACTIONS(922),
    [anon_sym_POUND_LBRACE] = ACTIONS(920),
    [anon_sym_SEMI] = ACTIONS(920),
    [anon_sym_POUND_BANG] = ACTIONS(920),
    [anon_sym_POUND_] = ACTIONS(920),
    [anon_sym_POUND_LPAREN] = ACTIONS(920),
    [sym_shorthand_function_arg] = ACTIONS(920),
    [anon_sym_CARET] = ACTIONS(922),
    [anon_sym_CARET_COLON] = ACTIONS(920),
    [anon_sym_CARET_DQUOTE] = ACTIONS(920),
    [anon_sym_BQUOTE] = ACTIONS(920),
    [anon_sym_POUND_SQUOTE] = ACTIONS(920),
    [anon_sym_TILDE] = ACTIONS(922),
    [anon_sym_TILDE_AT] = ACTIONS(920),
    [sym_gensym] = ACTIONS(920),
    [anon_sym_AT] = ACTIONS(920),
  },
  [199] = {
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
  [200] = {
    [sym__anything] = STATE(88),
    [sym__literals] = STATE(88),
    [sym__collection_literals] = STATE(88),
    [sym_boolean] = STATE(88),
    [sym_number] = STATE(88),
    [sym__number] = STATE(32),
    [sym_character] = STATE(88),
    [sym__character] = STATE(33),
    [sym_string] = STATE(88),
    [sym__string] = STATE(34),
    [sym_regex] = STATE(88),
    [sym__regex] = STATE(35),
    [sym_quote] = STATE(88),
    [sym__quote] = STATE(36),
    [sym_keyword] = STATE(88),
    [sym__keyword] = STATE(37),
    [sym__unqualified_keyword] = STATE(37),
    [sym_qualified_keyword] = STATE(37),
    [sym_symbol] = STATE(88),
    [sym__symbol] = STATE(38),
    [sym_threading_macro] = STATE(38),
    [sym_qualified_symbol] = STATE(38),
    [sym_interop] = STATE(88),
    [sym_list] = STATE(88),
    [sym__list] = STATE(39),
    [sym_vector] = STATE(88),
    [sym__vector] = STATE(40),
    [sym_hash_map] = STATE(88),
    [sym__hash_map] = STATE(41),
    [sym_namespace_map] = STATE(41),
    [sym__hash_map_kv_pair] = STATE(152),
    [sym__hash_map_key] = STATE(88),
    [sym_set] = STATE(88),
    [sym__set] = STATE(42),
    [sym_comment] = STATE(88),
    [sym_semicolon] = STATE(43),
    [sym_shebang_line] = STATE(43),
    [sym_ignore_form] = STATE(43),
    [sym_comment_macro] = STATE(43),
    [sym__functions] = STATE(88),
    [sym_anonymous_function] = STATE(88),
    [sym_shorthand_function] = STATE(88),
    [sym_defn] = STATE(88),
    [sym_metadata] = STATE(44),
    [sym__metadata_map] = STATE(45),
    [sym_metadata_shorthand] = STATE(47),
    [sym_syntax_quote] = STATE(88),
    [sym_var_quote] = STATE(88),
    [sym_unquote] = STATE(88),
    [sym_unquote_splice] = STATE(88),
    [sym_deref] = STATE(88),
    [aux_sym__hash_map_repeat1] = STATE(152),
    [aux_sym_metadata_repeat1] = STATE(47),
    [sym_nil] = ACTIONS(167),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(169),
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
    [anon_sym_RBRACE] = ACTIONS(924),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
    [anon_sym_POUND_] = ACTIONS(173),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [sym_shorthand_function_arg] = ACTIONS(175),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_CARET_COLON] = ACTIONS(61),
    [anon_sym_CARET_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [anon_sym_POUND_SQUOTE] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(179),
    [anon_sym_TILDE_AT] = ACTIONS(181),
    [sym_gensym] = ACTIONS(175),
    [anon_sym_AT] = ACTIONS(73),
  },
  [201] = {
    [ts_builtin_sym_end] = ACTIONS(926),
    [sym_nil] = ACTIONS(928),
    [sym_true] = ACTIONS(928),
    [sym_false] = ACTIONS(928),
    [sym_number_long] = ACTIONS(928),
    [sym_number_double] = ACTIONS(926),
    [sym_number_bigint] = ACTIONS(928),
    [sym_number_ratio] = ACTIONS(926),
    [anon_sym_BSLASH] = ACTIONS(926),
    [anon_sym_DQUOTE] = ACTIONS(926),
    [anon_sym_POUND_DQUOTE] = ACTIONS(926),
    [anon_sym_SQUOTE] = ACTIONS(926),
    [anon_sym_LPARENquote] = ACTIONS(926),
    [anon_sym_RPAREN] = ACTIONS(926),
    [anon_sym_COLON] = ACTIONS(928),
    [anon_sym_COLON_COLON] = ACTIONS(926),
    [anon_sym_DASH_GT] = ACTIONS(928),
    [anon_sym_DASH_GT_GT] = ACTIONS(926),
    [anon_sym_as_DASH_GT] = ACTIONS(926),
    [anon_sym_some_DASH_GT] = ACTIONS(928),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(926),
    [anon_sym_cond_DASH_GT] = ACTIONS(928),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(926),
    [sym__symbol_chars] = ACTIONS(928),
    [sym_member_access] = ACTIONS(926),
    [sym_field_access] = ACTIONS(926),
    [sym_new_class] = ACTIONS(926),
    [anon_sym_LPAREN] = ACTIONS(928),
    [anon_sym_LBRACK] = ACTIONS(926),
    [anon_sym_RBRACK] = ACTIONS(926),
    [anon_sym_LBRACE] = ACTIONS(926),
    [anon_sym_RBRACE] = ACTIONS(926),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(926),
    [anon_sym_POUND] = ACTIONS(928),
    [anon_sym_POUND_LBRACE] = ACTIONS(926),
    [anon_sym_SEMI] = ACTIONS(926),
    [anon_sym_POUND_BANG] = ACTIONS(926),
    [anon_sym_POUND_] = ACTIONS(926),
    [anon_sym_POUND_LPAREN] = ACTIONS(926),
    [sym_shorthand_function_arg] = ACTIONS(926),
    [anon_sym_CARET] = ACTIONS(928),
    [anon_sym_CARET_COLON] = ACTIONS(926),
    [anon_sym_CARET_DQUOTE] = ACTIONS(926),
    [anon_sym_BQUOTE] = ACTIONS(926),
    [anon_sym_POUND_SQUOTE] = ACTIONS(926),
    [anon_sym_TILDE] = ACTIONS(928),
    [anon_sym_TILDE_AT] = ACTIONS(926),
    [sym_gensym] = ACTIONS(926),
    [anon_sym_AT] = ACTIONS(926),
  },
  [202] = {
    [anon_sym_LPAREN] = ACTIONS(592),
    [anon_sym_LBRACK] = ACTIONS(592),
    [anon_sym_LBRACE] = ACTIONS(592),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(592),
    [anon_sym_POUND] = ACTIONS(594),
  },
  [203] = {
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(930),
    [anon_sym_TILDE] = ACTIONS(932),
    [anon_sym_TILDE_AT] = ACTIONS(930),
    [sym_gensym] = ACTIONS(930),
    [anon_sym_AT] = ACTIONS(930),
  },
  [204] = {
    [anon_sym_RPAREN] = ACTIONS(934),
  },
  [205] = {
    [sym_vector] = STATE(138),
    [sym__vector] = STATE(40),
    [sym__after_the_fn_name] = STATE(208),
    [sym__single_arity_fn] = STATE(208),
    [sym__multi_arity_fn] = STATE(208),
    [sym_params] = STATE(141),
    [aux_sym__multi_arity_fn_repeat1] = STATE(142),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(39),
  },
  [206] = {
    [anon_sym_DASH_GT] = ACTIONS(922),
    [anon_sym_DASH_GT_GT] = ACTIONS(920),
    [anon_sym_as_DASH_GT] = ACTIONS(920),
    [anon_sym_some_DASH_GT] = ACTIONS(922),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(920),
    [anon_sym_cond_DASH_GT] = ACTIONS(922),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(920),
    [sym__symbol_chars] = ACTIONS(922),
    [anon_sym_LPAREN] = ACTIONS(920),
    [anon_sym_LBRACK] = ACTIONS(920),
    [anon_sym_LBRACE] = ACTIONS(920),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(920),
    [anon_sym_POUND] = ACTIONS(922),
    [anon_sym_POUND_LBRACE] = ACTIONS(920),
  },
  [207] = {
    [ts_builtin_sym_end] = ACTIONS(936),
    [sym_nil] = ACTIONS(938),
    [sym_true] = ACTIONS(938),
    [sym_false] = ACTIONS(938),
    [sym_number_long] = ACTIONS(938),
    [sym_number_double] = ACTIONS(936),
    [sym_number_bigint] = ACTIONS(938),
    [sym_number_ratio] = ACTIONS(936),
    [anon_sym_BSLASH] = ACTIONS(936),
    [anon_sym_DQUOTE] = ACTIONS(936),
    [anon_sym_POUND_DQUOTE] = ACTIONS(936),
    [anon_sym_SQUOTE] = ACTIONS(936),
    [anon_sym_LPARENquote] = ACTIONS(936),
    [anon_sym_RPAREN] = ACTIONS(936),
    [anon_sym_COLON] = ACTIONS(938),
    [anon_sym_COLON_COLON] = ACTIONS(936),
    [anon_sym_DASH_GT] = ACTIONS(938),
    [anon_sym_DASH_GT_GT] = ACTIONS(936),
    [anon_sym_as_DASH_GT] = ACTIONS(936),
    [anon_sym_some_DASH_GT] = ACTIONS(938),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(936),
    [anon_sym_cond_DASH_GT] = ACTIONS(938),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(936),
    [sym__symbol_chars] = ACTIONS(938),
    [sym_member_access] = ACTIONS(936),
    [sym_field_access] = ACTIONS(936),
    [sym_new_class] = ACTIONS(936),
    [anon_sym_LPAREN] = ACTIONS(938),
    [anon_sym_LBRACK] = ACTIONS(936),
    [anon_sym_RBRACK] = ACTIONS(936),
    [anon_sym_LBRACE] = ACTIONS(936),
    [anon_sym_RBRACE] = ACTIONS(936),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(936),
    [anon_sym_POUND] = ACTIONS(938),
    [anon_sym_POUND_LBRACE] = ACTIONS(936),
    [anon_sym_SEMI] = ACTIONS(936),
    [anon_sym_POUND_BANG] = ACTIONS(936),
    [anon_sym_POUND_] = ACTIONS(936),
    [anon_sym_POUND_LPAREN] = ACTIONS(936),
    [sym_shorthand_function_arg] = ACTIONS(936),
    [anon_sym_CARET] = ACTIONS(938),
    [anon_sym_CARET_COLON] = ACTIONS(936),
    [anon_sym_CARET_DQUOTE] = ACTIONS(936),
    [anon_sym_BQUOTE] = ACTIONS(936),
    [anon_sym_POUND_SQUOTE] = ACTIONS(936),
    [anon_sym_TILDE] = ACTIONS(938),
    [anon_sym_TILDE_AT] = ACTIONS(936),
    [sym_gensym] = ACTIONS(936),
    [anon_sym_AT] = ACTIONS(936),
  },
  [208] = {
    [anon_sym_RPAREN] = ACTIONS(940),
  },
  [209] = {
    [ts_builtin_sym_end] = ACTIONS(942),
    [sym_nil] = ACTIONS(944),
    [sym_true] = ACTIONS(944),
    [sym_false] = ACTIONS(944),
    [sym_number_long] = ACTIONS(944),
    [sym_number_double] = ACTIONS(942),
    [sym_number_bigint] = ACTIONS(944),
    [sym_number_ratio] = ACTIONS(942),
    [anon_sym_BSLASH] = ACTIONS(942),
    [anon_sym_DQUOTE] = ACTIONS(942),
    [anon_sym_POUND_DQUOTE] = ACTIONS(942),
    [anon_sym_SQUOTE] = ACTIONS(942),
    [anon_sym_LPARENquote] = ACTIONS(942),
    [anon_sym_RPAREN] = ACTIONS(942),
    [anon_sym_COLON] = ACTIONS(944),
    [anon_sym_COLON_COLON] = ACTIONS(942),
    [anon_sym_DASH_GT] = ACTIONS(944),
    [anon_sym_DASH_GT_GT] = ACTIONS(942),
    [anon_sym_as_DASH_GT] = ACTIONS(942),
    [anon_sym_some_DASH_GT] = ACTIONS(944),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(942),
    [anon_sym_cond_DASH_GT] = ACTIONS(944),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(942),
    [sym__symbol_chars] = ACTIONS(944),
    [sym_member_access] = ACTIONS(942),
    [sym_field_access] = ACTIONS(942),
    [sym_new_class] = ACTIONS(942),
    [anon_sym_LPAREN] = ACTIONS(944),
    [anon_sym_LBRACK] = ACTIONS(942),
    [anon_sym_RBRACK] = ACTIONS(942),
    [anon_sym_LBRACE] = ACTIONS(942),
    [anon_sym_RBRACE] = ACTIONS(942),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(942),
    [anon_sym_POUND] = ACTIONS(944),
    [anon_sym_POUND_LBRACE] = ACTIONS(942),
    [anon_sym_SEMI] = ACTIONS(942),
    [anon_sym_POUND_BANG] = ACTIONS(942),
    [anon_sym_POUND_] = ACTIONS(942),
    [anon_sym_POUND_LPAREN] = ACTIONS(942),
    [sym_shorthand_function_arg] = ACTIONS(942),
    [anon_sym_CARET] = ACTIONS(944),
    [anon_sym_CARET_COLON] = ACTIONS(942),
    [anon_sym_CARET_DQUOTE] = ACTIONS(942),
    [anon_sym_BQUOTE] = ACTIONS(942),
    [anon_sym_POUND_SQUOTE] = ACTIONS(942),
    [anon_sym_TILDE] = ACTIONS(944),
    [anon_sym_TILDE_AT] = ACTIONS(942),
    [sym_gensym] = ACTIONS(942),
    [anon_sym_AT] = ACTIONS(942),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(46),
  [9] = {.count = 1, .reusable = false}, SHIFT(2),
  [11] = {.count = 1, .reusable = false}, SHIFT(32),
  [13] = {.count = 1, .reusable = true}, SHIFT(32),
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
  [57] = {.count = 1, .reusable = true}, SHIFT(46),
  [59] = {.count = 1, .reusable = false}, SHIFT(23),
  [61] = {.count = 1, .reusable = true}, SHIFT(24),
  [63] = {.count = 1, .reusable = true}, SHIFT(25),
  [65] = {.count = 1, .reusable = true}, SHIFT(26),
  [67] = {.count = 1, .reusable = true}, SHIFT(27),
  [69] = {.count = 1, .reusable = false}, SHIFT(28),
  [71] = {.count = 1, .reusable = true}, SHIFT(29),
  [73] = {.count = 1, .reusable = true}, SHIFT(30),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [77] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 1),
  [79] = {.count = 1, .reusable = false}, SHIFT(48),
  [81] = {.count = 1, .reusable = false}, SHIFT(49),
  [83] = {.count = 1, .reusable = false}, SHIFT(50),
  [85] = {.count = 1, .reusable = false}, SHIFT(51),
  [87] = {.count = 1, .reusable = false}, SHIFT(52),
  [89] = {.count = 1, .reusable = false}, SHIFT(53),
  [91] = {.count = 1, .reusable = false}, SHIFT(54),
  [93] = {.count = 1, .reusable = false}, SHIFT(55),
  [95] = {.count = 1, .reusable = true}, SHIFT(55),
  [97] = {.count = 1, .reusable = false}, SHIFT(61),
  [99] = {.count = 1, .reusable = true}, SHIFT(56),
  [101] = {.count = 1, .reusable = true}, SHIFT(57),
  [103] = {.count = 1, .reusable = true}, SHIFT(61),
  [105] = {.count = 1, .reusable = true}, SHIFT(58),
  [107] = {.count = 1, .reusable = false}, SHIFT(59),
  [109] = {.count = 1, .reusable = true}, SHIFT(60),
  [111] = {.count = 1, .reusable = true}, SHIFT(62),
  [113] = {.count = 1, .reusable = true}, SHIFT(63),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_threading_macro, 1),
  [117] = {.count = 1, .reusable = false}, REDUCE(sym_threading_macro, 1),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym__symbol, 1),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym__symbol, 1),
  [123] = {.count = 1, .reusable = true}, SHIFT(64),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_interop, 1),
  [127] = {.count = 1, .reusable = false}, REDUCE(sym_interop, 1),
  [129] = {.count = 1, .reusable = false}, SHIFT(74),
  [131] = {.count = 1, .reusable = true}, SHIFT(65),
  [133] = {.count = 1, .reusable = true}, SHIFT(66),
  [135] = {.count = 1, .reusable = true}, SHIFT(67),
  [137] = {.count = 1, .reusable = false}, SHIFT(68),
  [139] = {.count = 1, .reusable = false}, SHIFT(69),
  [141] = {.count = 1, .reusable = true}, SHIFT(74),
  [143] = {.count = 1, .reusable = false}, SHIFT(70),
  [145] = {.count = 1, .reusable = true}, SHIFT(71),
  [147] = {.count = 1, .reusable = false}, SHIFT(72),
  [149] = {.count = 1, .reusable = true}, SHIFT(73),
  [151] = {.count = 1, .reusable = false}, SHIFT(81),
  [153] = {.count = 1, .reusable = true}, SHIFT(75),
  [155] = {.count = 1, .reusable = true}, SHIFT(76),
  [157] = {.count = 1, .reusable = true}, SHIFT(77),
  [159] = {.count = 1, .reusable = true}, SHIFT(81),
  [161] = {.count = 1, .reusable = true}, SHIFT(78),
  [163] = {.count = 1, .reusable = false}, SHIFT(79),
  [165] = {.count = 1, .reusable = true}, SHIFT(80),
  [167] = {.count = 1, .reusable = false}, SHIFT(88),
  [169] = {.count = 1, .reusable = true}, SHIFT(82),
  [171] = {.count = 1, .reusable = true}, SHIFT(83),
  [173] = {.count = 1, .reusable = true}, SHIFT(84),
  [175] = {.count = 1, .reusable = true}, SHIFT(88),
  [177] = {.count = 1, .reusable = true}, SHIFT(85),
  [179] = {.count = 1, .reusable = false}, SHIFT(86),
  [181] = {.count = 1, .reusable = true}, SHIFT(87),
  [183] = {.count = 1, .reusable = true}, SHIFT(90),
  [185] = {.count = 1, .reusable = true}, SHIFT(92),
  [187] = {.count = 1, .reusable = false}, SHIFT(99),
  [189] = {.count = 1, .reusable = true}, SHIFT(93),
  [191] = {.count = 1, .reusable = true}, SHIFT(94),
  [193] = {.count = 1, .reusable = true}, SHIFT(95),
  [195] = {.count = 1, .reusable = true}, SHIFT(99),
  [197] = {.count = 1, .reusable = true}, SHIFT(96),
  [199] = {.count = 1, .reusable = false}, SHIFT(97),
  [201] = {.count = 1, .reusable = true}, SHIFT(98),
  [203] = {.count = 1, .reusable = false}, SHIFT(100),
  [205] = {.count = 1, .reusable = false}, SHIFT(101),
  [207] = {.count = 1, .reusable = false}, SHIFT(102),
  [209] = {.count = 1, .reusable = true}, SHIFT(102),
  [211] = {.count = 1, .reusable = false}, SHIFT(104),
  [213] = {.count = 1, .reusable = true}, SHIFT(103),
  [215] = {.count = 1, .reusable = true}, SHIFT(104),
  [217] = {.count = 1, .reusable = true}, SHIFT(105),
  [219] = {.count = 1, .reusable = true}, SHIFT(106),
  [221] = {.count = 1, .reusable = true}, SHIFT(107),
  [223] = {.count = 1, .reusable = false}, SHIFT(108),
  [225] = {.count = 1, .reusable = false}, SHIFT(105),
  [227] = {.count = 1, .reusable = false}, SHIFT(111),
  [229] = {.count = 1, .reusable = false}, SHIFT(112),
  [231] = {.count = 1, .reusable = true}, SHIFT(112),
  [233] = {.count = 1, .reusable = false}, SHIFT(114),
  [235] = {.count = 1, .reusable = true}, SHIFT(114),
  [237] = {.count = 1, .reusable = false}, SHIFT(115),
  [239] = {.count = 1, .reusable = true}, SHIFT(115),
  [241] = {.count = 1, .reusable = true}, SHIFT(116),
  [243] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_number, 1),
  [247] = {.count = 1, .reusable = false}, REDUCE(sym_number, 1),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_character, 1),
  [251] = {.count = 1, .reusable = false}, REDUCE(sym_character, 1),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym_string, 1),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_regex, 1),
  [259] = {.count = 1, .reusable = false}, REDUCE(sym_regex, 1),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_quote, 1),
  [263] = {.count = 1, .reusable = false}, REDUCE(sym_quote, 1),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_keyword, 1),
  [267] = {.count = 1, .reusable = false}, REDUCE(sym_keyword, 1),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_symbol, 1),
  [271] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 1),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_list, 1),
  [275] = {.count = 1, .reusable = false}, REDUCE(sym_list, 1),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_vector, 1),
  [279] = {.count = 1, .reusable = false}, REDUCE(sym_vector, 1),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map, 1),
  [283] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map, 1),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_set, 1),
  [287] = {.count = 1, .reusable = false}, REDUCE(sym_set, 1),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [291] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 1),
  [293] = {.count = 1, .reusable = false}, REDUCE(sym_metadata, 1),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_metadata, 1),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [299] = {.count = 1, .reusable = false}, SHIFT(119),
  [301] = {.count = 1, .reusable = true}, SHIFT(119),
  [303] = {.count = 1, .reusable = false}, SHIFT(120),
  [305] = {.count = 1, .reusable = true}, REDUCE(sym__character, 2),
  [307] = {.count = 1, .reusable = false}, REDUCE(sym__character, 2),
  [309] = {.count = 1, .reusable = true}, SHIFT(122),
  [311] = {.count = 1, .reusable = true}, SHIFT(123),
  [313] = {.count = 1, .reusable = false}, SHIFT(123),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym__string, 2),
  [317] = {.count = 1, .reusable = false}, REDUCE(sym__string, 2),
  [319] = {.count = 1, .reusable = false}, SHIFT(124),
  [321] = {.count = 1, .reusable = false}, SHIFT(125),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym__regex, 2),
  [325] = {.count = 1, .reusable = false}, REDUCE(sym__regex, 2),
  [327] = {.count = 1, .reusable = false}, SHIFT(126),
  [329] = {.count = 1, .reusable = false}, SHIFT(127),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym__quote, 2),
  [333] = {.count = 1, .reusable = false}, REDUCE(sym__quote, 2),
  [335] = {.count = 1, .reusable = true}, SHIFT(128),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym__unqualified_keyword, 2),
  [339] = {.count = 1, .reusable = false}, REDUCE(sym__unqualified_keyword, 2),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_keyword, 2),
  [343] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_keyword, 2),
  [345] = {.count = 1, .reusable = true}, SHIFT(129),
  [347] = {.count = 1, .reusable = true}, SHIFT(130),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym__list, 2),
  [351] = {.count = 1, .reusable = false}, REDUCE(sym__list, 2),
  [353] = {.count = 1, .reusable = false}, SHIFT(132),
  [355] = {.count = 1, .reusable = true}, SHIFT(131),
  [357] = {.count = 1, .reusable = true}, SHIFT(132),
  [359] = {.count = 1, .reusable = false}, SHIFT(133),
  [361] = {.count = 1, .reusable = true}, SHIFT(133),
  [363] = {.count = 1, .reusable = false}, SHIFT(134),
  [365] = {.count = 1, .reusable = true}, SHIFT(135),
  [367] = {.count = 1, .reusable = false}, SHIFT(147),
  [369] = {.count = 1, .reusable = true}, SHIFT(146),
  [371] = {.count = 1, .reusable = true}, SHIFT(147),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym__vector, 2),
  [375] = {.count = 1, .reusable = false}, REDUCE(sym__vector, 2),
  [377] = {.count = 1, .reusable = false}, SHIFT(149),
  [379] = {.count = 1, .reusable = true}, SHIFT(148),
  [381] = {.count = 1, .reusable = true}, SHIFT(149),
  [383] = {.count = 1, .reusable = true}, REDUCE(sym__hash_map, 2),
  [385] = {.count = 1, .reusable = false}, REDUCE(sym__hash_map, 2),
  [387] = {.count = 1, .reusable = false}, SHIFT(150),
  [389] = {.count = 1, .reusable = true}, SHIFT(150),
  [391] = {.count = 1, .reusable = true}, SHIFT(151),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 2),
  [395] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 2),
  [397] = {.count = 1, .reusable = true}, SHIFT(153),
  [399] = {.count = 1, .reusable = true}, SHIFT(154),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym__set, 2),
  [403] = {.count = 1, .reusable = false}, REDUCE(sym__set, 2),
  [405] = {.count = 1, .reusable = false}, SHIFT(156),
  [407] = {.count = 1, .reusable = true}, SHIFT(155),
  [409] = {.count = 1, .reusable = true}, SHIFT(156),
  [411] = {.count = 1, .reusable = true}, REDUCE(sym_semicolon, 2),
  [413] = {.count = 1, .reusable = false}, REDUCE(sym_semicolon, 2),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym_shebang_line, 2),
  [417] = {.count = 1, .reusable = false}, REDUCE(sym_shebang_line, 2),
  [419] = {.count = 1, .reusable = true}, REDUCE(sym_ignore_form, 2),
  [421] = {.count = 1, .reusable = false}, REDUCE(sym_ignore_form, 2),
  [423] = {.count = 1, .reusable = true}, REDUCE(sym_shorthand_function, 2),
  [425] = {.count = 1, .reusable = false}, REDUCE(sym_shorthand_function, 2),
  [427] = {.count = 1, .reusable = true}, SHIFT(157),
  [429] = {.count = 1, .reusable = false}, REDUCE(sym_metadata_shorthand, 2),
  [431] = {.count = 1, .reusable = true}, REDUCE(sym_metadata_shorthand, 2),
  [433] = {.count = 1, .reusable = true}, SHIFT(158),
  [435] = {.count = 1, .reusable = true}, SHIFT(160),
  [437] = {.count = 1, .reusable = true}, SHIFT(162),
  [439] = {.count = 1, .reusable = false}, REDUCE(sym__metadata_map, 2),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym__metadata_map, 2),
  [443] = {.count = 1, .reusable = false}, SHIFT(163),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_syntax_quote, 2),
  [447] = {.count = 1, .reusable = false}, REDUCE(sym_syntax_quote, 2),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_var_quote, 2),
  [451] = {.count = 1, .reusable = false}, REDUCE(sym_var_quote, 2),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym_unquote, 2),
  [455] = {.count = 1, .reusable = false}, REDUCE(sym_unquote, 2),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym_unquote_splice, 2),
  [459] = {.count = 1, .reusable = false}, REDUCE(sym_unquote_splice, 2),
  [461] = {.count = 1, .reusable = true}, REDUCE(sym_deref, 2),
  [463] = {.count = 1, .reusable = false}, REDUCE(sym_deref, 2),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym__collection_literals, 2),
  [467] = {.count = 1, .reusable = false}, REDUCE(sym__collection_literals, 2),
  [469] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [471] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(119),
  [474] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [477] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(32),
  [480] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(32),
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
  [513] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [516] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [519] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [522] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [525] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(16),
  [528] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [531] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [534] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(19),
  [537] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(20),
  [540] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(21),
  [543] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(22),
  [546] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(119),
  [549] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [552] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(24),
  [555] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(25),
  [558] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(26),
  [561] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(27),
  [564] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(28),
  [567] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(29),
  [570] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(30),
  [573] = {.count = 1, .reusable = true}, REDUCE(aux_sym_metadata_repeat1, 2),
  [575] = {.count = 1, .reusable = false}, REDUCE(aux_sym_metadata_repeat1, 2),
  [577] = {.count = 2, .reusable = false}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(120),
  [580] = {.count = 2, .reusable = true}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(24),
  [583] = {.count = 2, .reusable = true}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(25),
  [586] = {.count = 1, .reusable = true}, SHIFT(164),
  [588] = {.count = 1, .reusable = true}, REDUCE(sym__octal_char, 2),
  [590] = {.count = 1, .reusable = false}, REDUCE(sym__octal_char, 2),
  [592] = {.count = 1, .reusable = true}, REDUCE(sym__string, 3),
  [594] = {.count = 1, .reusable = false}, REDUCE(sym__string, 3),
  [596] = {.count = 1, .reusable = false}, REDUCE(aux_sym__string_repeat1, 2),
  [598] = {.count = 2, .reusable = false}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(125),
  [601] = {.count = 1, .reusable = true}, REDUCE(sym__regex, 3),
  [603] = {.count = 1, .reusable = false}, REDUCE(sym__regex, 3),
  [605] = {.count = 1, .reusable = false}, REDUCE(aux_sym__regex_repeat1, 2),
  [607] = {.count = 2, .reusable = false}, REDUCE(aux_sym__regex_repeat1, 2), SHIFT_REPEAT(127),
  [610] = {.count = 1, .reusable = true}, REDUCE(sym__quote, 3),
  [612] = {.count = 1, .reusable = false}, REDUCE(sym__quote, 3),
  [614] = {.count = 1, .reusable = true}, SHIFT(165),
  [616] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_symbol, 3),
  [618] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_symbol, 3),
  [620] = {.count = 1, .reusable = true}, REDUCE(sym_comment_macro, 3),
  [622] = {.count = 1, .reusable = false}, REDUCE(sym_comment_macro, 3),
  [624] = {.count = 1, .reusable = true}, SHIFT(166),
  [626] = {.count = 1, .reusable = true}, SHIFT(167),
  [628] = {.count = 1, .reusable = true}, REDUCE(sym_function_name, 1),
  [630] = {.count = 1, .reusable = false}, REDUCE(sym_function_name, 1),
  [632] = {.count = 1, .reusable = false}, REDUCE(sym_params, 1),
  [634] = {.count = 1, .reusable = true}, REDUCE(sym_params, 1),
  [636] = {.count = 1, .reusable = true}, SHIFT(169),
  [638] = {.count = 1, .reusable = false}, SHIFT(172),
  [640] = {.count = 1, .reusable = true}, REDUCE(sym__single_arity_fn, 1),
  [642] = {.count = 1, .reusable = true}, SHIFT(172),
  [644] = {.count = 1, .reusable = true}, REDUCE(sym__multi_arity_fn, 1),
  [646] = {.count = 1, .reusable = true}, SHIFT(174),
  [648] = {.count = 1, .reusable = true}, REDUCE(sym__list, 3),
  [650] = {.count = 1, .reusable = false}, REDUCE(sym__list, 3),
  [652] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(147),
  [655] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(65),
  [658] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(67),
  [661] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(147),
  [664] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(71),
  [667] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(72),
  [670] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(73),
  [673] = {.count = 1, .reusable = true}, REDUCE(sym__vector, 3),
  [675] = {.count = 1, .reusable = false}, REDUCE(sym__vector, 3),
  [677] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(149),
  [680] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(75),
  [683] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(77),
  [686] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(149),
  [689] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(78),
  [692] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(79),
  [695] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(80),
  [698] = {.count = 1, .reusable = false}, REDUCE(sym__hash_map_kv_pair, 2),
  [700] = {.count = 1, .reusable = true}, REDUCE(sym__hash_map_kv_pair, 2),
  [702] = {.count = 1, .reusable = true}, REDUCE(sym__hash_map, 3),
  [704] = {.count = 1, .reusable = false}, REDUCE(sym__hash_map, 3),
  [706] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(88),
  [709] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(2),
  [712] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(32),
  [715] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(32),
  [718] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(3),
  [721] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(4),
  [724] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(5),
  [727] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(82),
  [730] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(7),
  [733] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(8),
  [736] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(9),
  [739] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(10),
  [742] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(10),
  [745] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(11),
  [748] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(12),
  [751] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(13),
  [754] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(14),
  [757] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(15),
  [760] = {.count = 1, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2),
  [762] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(16),
  [765] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(17),
  [768] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(18),
  [771] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(19),
  [774] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(20),
  [777] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(84),
  [780] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(22),
  [783] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(88),
  [786] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(23),
  [789] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(24),
  [792] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(25),
  [795] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(85),
  [798] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(27),
  [801] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(86),
  [804] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(87),
  [807] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(30),
  [810] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 3),
  [812] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 3),
  [814] = {.count = 1, .reusable = true}, SHIFT(183),
  [816] = {.count = 1, .reusable = true}, REDUCE(sym__set, 3),
  [818] = {.count = 1, .reusable = false}, REDUCE(sym__set, 3),
  [820] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(156),
  [823] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(93),
  [826] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(95),
  [829] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(156),
  [832] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(96),
  [835] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(97),
  [838] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(98),
  [841] = {.count = 1, .reusable = true}, REDUCE(sym_shorthand_function, 3),
  [843] = {.count = 1, .reusable = false}, REDUCE(sym_shorthand_function, 3),
  [845] = {.count = 1, .reusable = true}, SHIFT(185),
  [847] = {.count = 1, .reusable = true}, SHIFT(186),
  [849] = {.count = 1, .reusable = true}, SHIFT(187),
  [851] = {.count = 1, .reusable = false}, REDUCE(sym_metadata_shorthand, 3),
  [853] = {.count = 1, .reusable = true}, REDUCE(sym_metadata_shorthand, 3),
  [855] = {.count = 1, .reusable = true}, SHIFT(188),
  [857] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_keyword, 4),
  [859] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_keyword, 4),
  [861] = {.count = 1, .reusable = true}, REDUCE(sym_comment_macro, 4),
  [863] = {.count = 1, .reusable = false}, REDUCE(sym_comment_macro, 4),
  [865] = {.count = 1, .reusable = true}, SHIFT(189),
  [867] = {.count = 1, .reusable = true}, SHIFT(190),
  [869] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_function, 4),
  [871] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_function, 4),
  [873] = {.count = 1, .reusable = true}, SHIFT(191),
  [875] = {.count = 1, .reusable = true}, REDUCE(sym__single_arity_fn, 2),
  [877] = {.count = 1, .reusable = true}, REDUCE(sym_function_body, 1),
  [879] = {.count = 1, .reusable = true}, REDUCE(aux_sym__multi_arity_fn_repeat1, 2),
  [881] = {.count = 2, .reusable = true}, REDUCE(aux_sym__multi_arity_fn_repeat1, 2), SHIFT_REPEAT(135),
  [884] = {.count = 1, .reusable = false}, SHIFT(192),
  [886] = {.count = 1, .reusable = false}, SHIFT(193),
  [888] = {.count = 1, .reusable = true}, REDUCE(sym_docstring, 1),
  [890] = {.count = 1, .reusable = false}, REDUCE(sym_docstring, 1),
  [892] = {.count = 1, .reusable = true}, REDUCE(sym_attr_map, 1),
  [894] = {.count = 1, .reusable = true}, SHIFT(194),
  [896] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 4),
  [898] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 4),
  [900] = {.count = 1, .reusable = true}, SHIFT(198),
  [902] = {.count = 1, .reusable = true}, SHIFT(199),
  [904] = {.count = 1, .reusable = true}, SHIFT(201),
  [906] = {.count = 1, .reusable = true}, REDUCE(aux_sym__multi_arity_fn_repeat1, 3),
  [908] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_function, 5),
  [910] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_function, 5),
  [912] = {.count = 1, .reusable = false}, SHIFT(202),
  [914] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 5),
  [916] = {.count = 1, .reusable = false}, REDUCE(sym_defn, 5),
  [918] = {.count = 1, .reusable = true}, SHIFT(203),
  [920] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 5),
  [922] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 5),
  [924] = {.count = 1, .reusable = true}, SHIFT(206),
  [926] = {.count = 1, .reusable = true}, REDUCE(sym__unicode_char, 5),
  [928] = {.count = 1, .reusable = false}, REDUCE(sym__unicode_char, 5),
  [930] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 6),
  [932] = {.count = 1, .reusable = false}, REDUCE(sym_defn, 6),
  [934] = {.count = 1, .reusable = true}, SHIFT(207),
  [936] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 7),
  [938] = {.count = 1, .reusable = false}, REDUCE(sym_defn, 7),
  [940] = {.count = 1, .reusable = true}, SHIFT(209),
  [942] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 8),
  [944] = {.count = 1, .reusable = false}, REDUCE(sym_defn, 8),
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
